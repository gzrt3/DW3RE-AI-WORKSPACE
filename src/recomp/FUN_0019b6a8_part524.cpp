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

// Function: FUN_0019b6a8
// Address: 0x19b6a8 - 0x29b6b0
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b6a8_part524(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x29ac98u: goto label_29ac98;
        case 0x29ac9cu: goto label_29ac9c;
        case 0x29aca0u: goto label_29aca0;
        case 0x29aca4u: goto label_29aca4;
        case 0x29aca8u: goto label_29aca8;
        case 0x29acacu: goto label_29acac;
        case 0x29acb0u: goto label_29acb0;
        case 0x29acb4u: goto label_29acb4;
        case 0x29acb8u: goto label_29acb8;
        case 0x29acbcu: goto label_29acbc;
        case 0x29acc0u: goto label_29acc0;
        case 0x29acc4u: goto label_29acc4;
        case 0x29acc8u: goto label_29acc8;
        case 0x29acccu: goto label_29accc;
        case 0x29acd0u: goto label_29acd0;
        case 0x29acd4u: goto label_29acd4;
        case 0x29acd8u: goto label_29acd8;
        case 0x29acdcu: goto label_29acdc;
        case 0x29ace0u: goto label_29ace0;
        case 0x29ace4u: goto label_29ace4;
        case 0x29ace8u: goto label_29ace8;
        case 0x29acecu: goto label_29acec;
        case 0x29acf0u: goto label_29acf0;
        case 0x29acf4u: goto label_29acf4;
        case 0x29acf8u: goto label_29acf8;
        case 0x29acfcu: goto label_29acfc;
        case 0x29ad00u: goto label_29ad00;
        case 0x29ad04u: goto label_29ad04;
        case 0x29ad08u: goto label_29ad08;
        case 0x29ad0cu: goto label_29ad0c;
        case 0x29ad10u: goto label_29ad10;
        case 0x29ad14u: goto label_29ad14;
        case 0x29ad18u: goto label_29ad18;
        case 0x29ad1cu: goto label_29ad1c;
        case 0x29ad20u: goto label_29ad20;
        case 0x29ad24u: goto label_29ad24;
        case 0x29ad28u: goto label_29ad28;
        case 0x29ad2cu: goto label_29ad2c;
        case 0x29ad30u: goto label_29ad30;
        case 0x29ad34u: goto label_29ad34;
        case 0x29ad38u: goto label_29ad38;
        case 0x29ad3cu: goto label_29ad3c;
        case 0x29ad40u: goto label_29ad40;
        case 0x29ad44u: goto label_29ad44;
        case 0x29ad48u: goto label_29ad48;
        case 0x29ad4cu: goto label_29ad4c;
        case 0x29ad50u: goto label_29ad50;
        case 0x29ad54u: goto label_29ad54;
        case 0x29ad58u: goto label_29ad58;
        case 0x29ad5cu: goto label_29ad5c;
        case 0x29ad60u: goto label_29ad60;
        case 0x29ad64u: goto label_29ad64;
        case 0x29ad68u: goto label_29ad68;
        case 0x29ad6cu: goto label_29ad6c;
        case 0x29ad70u: goto label_29ad70;
        case 0x29ad74u: goto label_29ad74;
        case 0x29ad78u: goto label_29ad78;
        case 0x29ad7cu: goto label_29ad7c;
        case 0x29ad80u: goto label_29ad80;
        case 0x29ad84u: goto label_29ad84;
        case 0x29ad88u: goto label_29ad88;
        case 0x29ad8cu: goto label_29ad8c;
        case 0x29ad90u: goto label_29ad90;
        case 0x29ad94u: goto label_29ad94;
        case 0x29ad98u: goto label_29ad98;
        case 0x29ad9cu: goto label_29ad9c;
        case 0x29ada0u: goto label_29ada0;
        case 0x29ada4u: goto label_29ada4;
        case 0x29ada8u: goto label_29ada8;
        case 0x29adacu: goto label_29adac;
        case 0x29adb0u: goto label_29adb0;
        case 0x29adb4u: goto label_29adb4;
        case 0x29adb8u: goto label_29adb8;
        case 0x29adbcu: goto label_29adbc;
        case 0x29adc0u: goto label_29adc0;
        case 0x29adc4u: goto label_29adc4;
        case 0x29adc8u: goto label_29adc8;
        case 0x29adccu: goto label_29adcc;
        case 0x29add0u: goto label_29add0;
        case 0x29add4u: goto label_29add4;
        case 0x29add8u: goto label_29add8;
        case 0x29addcu: goto label_29addc;
        case 0x29ade0u: goto label_29ade0;
        case 0x29ade4u: goto label_29ade4;
        case 0x29ade8u: goto label_29ade8;
        case 0x29adecu: goto label_29adec;
        case 0x29adf0u: goto label_29adf0;
        case 0x29adf4u: goto label_29adf4;
        case 0x29adf8u: goto label_29adf8;
        case 0x29adfcu: goto label_29adfc;
        case 0x29ae00u: goto label_29ae00;
        case 0x29ae04u: goto label_29ae04;
        case 0x29ae08u: goto label_29ae08;
        case 0x29ae0cu: goto label_29ae0c;
        case 0x29ae10u: goto label_29ae10;
        case 0x29ae14u: goto label_29ae14;
        case 0x29ae18u: goto label_29ae18;
        case 0x29ae1cu: goto label_29ae1c;
        case 0x29ae20u: goto label_29ae20;
        case 0x29ae24u: goto label_29ae24;
        case 0x29ae28u: goto label_29ae28;
        case 0x29ae2cu: goto label_29ae2c;
        case 0x29ae30u: goto label_29ae30;
        case 0x29ae34u: goto label_29ae34;
        case 0x29ae38u: goto label_29ae38;
        case 0x29ae3cu: goto label_29ae3c;
        case 0x29ae40u: goto label_29ae40;
        case 0x29ae44u: goto label_29ae44;
        case 0x29ae48u: goto label_29ae48;
        case 0x29ae4cu: goto label_29ae4c;
        case 0x29ae50u: goto label_29ae50;
        case 0x29ae54u: goto label_29ae54;
        case 0x29ae58u: goto label_29ae58;
        case 0x29ae5cu: goto label_29ae5c;
        case 0x29ae60u: goto label_29ae60;
        case 0x29ae64u: goto label_29ae64;
        case 0x29ae68u: goto label_29ae68;
        case 0x29ae6cu: goto label_29ae6c;
        case 0x29ae70u: goto label_29ae70;
        case 0x29ae74u: goto label_29ae74;
        case 0x29ae78u: goto label_29ae78;
        case 0x29ae7cu: goto label_29ae7c;
        case 0x29ae80u: goto label_29ae80;
        case 0x29ae84u: goto label_29ae84;
        case 0x29ae88u: goto label_29ae88;
        case 0x29ae8cu: goto label_29ae8c;
        case 0x29ae90u: goto label_29ae90;
        case 0x29ae94u: goto label_29ae94;
        case 0x29ae98u: goto label_29ae98;
        case 0x29ae9cu: goto label_29ae9c;
        case 0x29aea0u: goto label_29aea0;
        case 0x29aea4u: goto label_29aea4;
        case 0x29aea8u: goto label_29aea8;
        case 0x29aeacu: goto label_29aeac;
        case 0x29aeb0u: goto label_29aeb0;
        case 0x29aeb4u: goto label_29aeb4;
        case 0x29aeb8u: goto label_29aeb8;
        case 0x29aebcu: goto label_29aebc;
        case 0x29aec0u: goto label_29aec0;
        case 0x29aec4u: goto label_29aec4;
        case 0x29aec8u: goto label_29aec8;
        case 0x29aeccu: goto label_29aecc;
        case 0x29aed0u: goto label_29aed0;
        case 0x29aed4u: goto label_29aed4;
        case 0x29aed8u: goto label_29aed8;
        case 0x29aedcu: goto label_29aedc;
        case 0x29aee0u: goto label_29aee0;
        case 0x29aee4u: goto label_29aee4;
        case 0x29aee8u: goto label_29aee8;
        case 0x29aeecu: goto label_29aeec;
        case 0x29aef0u: goto label_29aef0;
        case 0x29aef4u: goto label_29aef4;
        case 0x29aef8u: goto label_29aef8;
        case 0x29aefcu: goto label_29aefc;
        case 0x29af00u: goto label_29af00;
        case 0x29af04u: goto label_29af04;
        case 0x29af08u: goto label_29af08;
        case 0x29af0cu: goto label_29af0c;
        case 0x29af10u: goto label_29af10;
        case 0x29af14u: goto label_29af14;
        case 0x29af18u: goto label_29af18;
        case 0x29af1cu: goto label_29af1c;
        case 0x29af20u: goto label_29af20;
        case 0x29af24u: goto label_29af24;
        case 0x29af28u: goto label_29af28;
        case 0x29af2cu: goto label_29af2c;
        case 0x29af30u: goto label_29af30;
        case 0x29af34u: goto label_29af34;
        case 0x29af38u: goto label_29af38;
        case 0x29af3cu: goto label_29af3c;
        case 0x29af40u: goto label_29af40;
        case 0x29af44u: goto label_29af44;
        case 0x29af48u: goto label_29af48;
        case 0x29af4cu: goto label_29af4c;
        case 0x29af50u: goto label_29af50;
        case 0x29af54u: goto label_29af54;
        case 0x29af58u: goto label_29af58;
        case 0x29af5cu: goto label_29af5c;
        case 0x29af60u: goto label_29af60;
        case 0x29af64u: goto label_29af64;
        case 0x29af68u: goto label_29af68;
        case 0x29af6cu: goto label_29af6c;
        case 0x29af70u: goto label_29af70;
        case 0x29af74u: goto label_29af74;
        case 0x29af78u: goto label_29af78;
        case 0x29af7cu: goto label_29af7c;
        case 0x29af80u: goto label_29af80;
        case 0x29af84u: goto label_29af84;
        case 0x29af88u: goto label_29af88;
        case 0x29af8cu: goto label_29af8c;
        case 0x29af90u: goto label_29af90;
        case 0x29af94u: goto label_29af94;
        case 0x29af98u: goto label_29af98;
        case 0x29af9cu: goto label_29af9c;
        case 0x29afa0u: goto label_29afa0;
        case 0x29afa4u: goto label_29afa4;
        case 0x29afa8u: goto label_29afa8;
        case 0x29afacu: goto label_29afac;
        case 0x29afb0u: goto label_29afb0;
        case 0x29afb4u: goto label_29afb4;
        case 0x29afb8u: goto label_29afb8;
        case 0x29afbcu: goto label_29afbc;
        case 0x29afc0u: goto label_29afc0;
        case 0x29afc4u: goto label_29afc4;
        case 0x29afc8u: goto label_29afc8;
        case 0x29afccu: goto label_29afcc;
        case 0x29afd0u: goto label_29afd0;
        case 0x29afd4u: goto label_29afd4;
        case 0x29afd8u: goto label_29afd8;
        case 0x29afdcu: goto label_29afdc;
        case 0x29afe0u: goto label_29afe0;
        case 0x29afe4u: goto label_29afe4;
        case 0x29afe8u: goto label_29afe8;
        case 0x29afecu: goto label_29afec;
        case 0x29aff0u: goto label_29aff0;
        case 0x29aff4u: goto label_29aff4;
        case 0x29aff8u: goto label_29aff8;
        case 0x29affcu: goto label_29affc;
        case 0x29b000u: goto label_29b000;
        case 0x29b004u: goto label_29b004;
        case 0x29b008u: goto label_29b008;
        case 0x29b00cu: goto label_29b00c;
        case 0x29b010u: goto label_29b010;
        case 0x29b014u: goto label_29b014;
        case 0x29b018u: goto label_29b018;
        case 0x29b01cu: goto label_29b01c;
        case 0x29b020u: goto label_29b020;
        case 0x29b024u: goto label_29b024;
        case 0x29b028u: goto label_29b028;
        case 0x29b02cu: goto label_29b02c;
        case 0x29b030u: goto label_29b030;
        case 0x29b034u: goto label_29b034;
        case 0x29b038u: goto label_29b038;
        case 0x29b03cu: goto label_29b03c;
        case 0x29b040u: goto label_29b040;
        case 0x29b044u: goto label_29b044;
        case 0x29b048u: goto label_29b048;
        case 0x29b04cu: goto label_29b04c;
        case 0x29b050u: goto label_29b050;
        case 0x29b054u: goto label_29b054;
        case 0x29b058u: goto label_29b058;
        case 0x29b05cu: goto label_29b05c;
        case 0x29b060u: goto label_29b060;
        case 0x29b064u: goto label_29b064;
        case 0x29b068u: goto label_29b068;
        case 0x29b06cu: goto label_29b06c;
        case 0x29b070u: goto label_29b070;
        case 0x29b074u: goto label_29b074;
        case 0x29b078u: goto label_29b078;
        case 0x29b07cu: goto label_29b07c;
        case 0x29b080u: goto label_29b080;
        case 0x29b084u: goto label_29b084;
        case 0x29b088u: goto label_29b088;
        case 0x29b08cu: goto label_29b08c;
        case 0x29b090u: goto label_29b090;
        case 0x29b094u: goto label_29b094;
        case 0x29b098u: goto label_29b098;
        case 0x29b09cu: goto label_29b09c;
        case 0x29b0a0u: goto label_29b0a0;
        case 0x29b0a4u: goto label_29b0a4;
        case 0x29b0a8u: goto label_29b0a8;
        case 0x29b0acu: goto label_29b0ac;
        case 0x29b0b0u: goto label_29b0b0;
        case 0x29b0b4u: goto label_29b0b4;
        case 0x29b0b8u: goto label_29b0b8;
        case 0x29b0bcu: goto label_29b0bc;
        case 0x29b0c0u: goto label_29b0c0;
        case 0x29b0c4u: goto label_29b0c4;
        case 0x29b0c8u: goto label_29b0c8;
        case 0x29b0ccu: goto label_29b0cc;
        case 0x29b0d0u: goto label_29b0d0;
        case 0x29b0d4u: goto label_29b0d4;
        case 0x29b0d8u: goto label_29b0d8;
        case 0x29b0dcu: goto label_29b0dc;
        case 0x29b0e0u: goto label_29b0e0;
        case 0x29b0e4u: goto label_29b0e4;
        case 0x29b0e8u: goto label_29b0e8;
        case 0x29b0ecu: goto label_29b0ec;
        case 0x29b0f0u: goto label_29b0f0;
        case 0x29b0f4u: goto label_29b0f4;
        case 0x29b0f8u: goto label_29b0f8;
        case 0x29b0fcu: goto label_29b0fc;
        case 0x29b100u: goto label_29b100;
        case 0x29b104u: goto label_29b104;
        case 0x29b108u: goto label_29b108;
        case 0x29b10cu: goto label_29b10c;
        case 0x29b110u: goto label_29b110;
        case 0x29b114u: goto label_29b114;
        case 0x29b118u: goto label_29b118;
        case 0x29b11cu: goto label_29b11c;
        case 0x29b120u: goto label_29b120;
        case 0x29b124u: goto label_29b124;
        case 0x29b128u: goto label_29b128;
        case 0x29b12cu: goto label_29b12c;
        case 0x29b130u: goto label_29b130;
        case 0x29b134u: goto label_29b134;
        case 0x29b138u: goto label_29b138;
        case 0x29b13cu: goto label_29b13c;
        case 0x29b140u: goto label_29b140;
        case 0x29b144u: goto label_29b144;
        case 0x29b148u: goto label_29b148;
        case 0x29b14cu: goto label_29b14c;
        case 0x29b150u: goto label_29b150;
        case 0x29b154u: goto label_29b154;
        case 0x29b158u: goto label_29b158;
        case 0x29b15cu: goto label_29b15c;
        case 0x29b160u: goto label_29b160;
        case 0x29b164u: goto label_29b164;
        case 0x29b168u: goto label_29b168;
        case 0x29b16cu: goto label_29b16c;
        case 0x29b170u: goto label_29b170;
        case 0x29b174u: goto label_29b174;
        case 0x29b178u: goto label_29b178;
        case 0x29b17cu: goto label_29b17c;
        case 0x29b180u: goto label_29b180;
        case 0x29b184u: goto label_29b184;
        case 0x29b188u: goto label_29b188;
        case 0x29b18cu: goto label_29b18c;
        case 0x29b190u: goto label_29b190;
        case 0x29b194u: goto label_29b194;
        case 0x29b198u: goto label_29b198;
        case 0x29b19cu: goto label_29b19c;
        case 0x29b1a0u: goto label_29b1a0;
        case 0x29b1a4u: goto label_29b1a4;
        case 0x29b1a8u: goto label_29b1a8;
        case 0x29b1acu: goto label_29b1ac;
        case 0x29b1b0u: goto label_29b1b0;
        case 0x29b1b4u: goto label_29b1b4;
        case 0x29b1b8u: goto label_29b1b8;
        case 0x29b1bcu: goto label_29b1bc;
        case 0x29b1c0u: goto label_29b1c0;
        case 0x29b1c4u: goto label_29b1c4;
        case 0x29b1c8u: goto label_29b1c8;
        case 0x29b1ccu: goto label_29b1cc;
        case 0x29b1d0u: goto label_29b1d0;
        case 0x29b1d4u: goto label_29b1d4;
        case 0x29b1d8u: goto label_29b1d8;
        case 0x29b1dcu: goto label_29b1dc;
        case 0x29b1e0u: goto label_29b1e0;
        case 0x29b1e4u: goto label_29b1e4;
        case 0x29b1e8u: goto label_29b1e8;
        case 0x29b1ecu: goto label_29b1ec;
        case 0x29b1f0u: goto label_29b1f0;
        case 0x29b1f4u: goto label_29b1f4;
        case 0x29b1f8u: goto label_29b1f8;
        case 0x29b1fcu: goto label_29b1fc;
        case 0x29b200u: goto label_29b200;
        case 0x29b204u: goto label_29b204;
        case 0x29b208u: goto label_29b208;
        case 0x29b20cu: goto label_29b20c;
        case 0x29b210u: goto label_29b210;
        case 0x29b214u: goto label_29b214;
        case 0x29b218u: goto label_29b218;
        case 0x29b21cu: goto label_29b21c;
        case 0x29b220u: goto label_29b220;
        case 0x29b224u: goto label_29b224;
        case 0x29b228u: goto label_29b228;
        case 0x29b22cu: goto label_29b22c;
        case 0x29b230u: goto label_29b230;
        case 0x29b234u: goto label_29b234;
        case 0x29b238u: goto label_29b238;
        case 0x29b23cu: goto label_29b23c;
        case 0x29b240u: goto label_29b240;
        case 0x29b244u: goto label_29b244;
        case 0x29b248u: goto label_29b248;
        case 0x29b24cu: goto label_29b24c;
        case 0x29b250u: goto label_29b250;
        case 0x29b254u: goto label_29b254;
        case 0x29b258u: goto label_29b258;
        case 0x29b25cu: goto label_29b25c;
        case 0x29b260u: goto label_29b260;
        case 0x29b264u: goto label_29b264;
        case 0x29b268u: goto label_29b268;
        case 0x29b26cu: goto label_29b26c;
        case 0x29b270u: goto label_29b270;
        case 0x29b274u: goto label_29b274;
        case 0x29b278u: goto label_29b278;
        case 0x29b27cu: goto label_29b27c;
        case 0x29b280u: goto label_29b280;
        case 0x29b284u: goto label_29b284;
        case 0x29b288u: goto label_29b288;
        case 0x29b28cu: goto label_29b28c;
        case 0x29b290u: goto label_29b290;
        case 0x29b294u: goto label_29b294;
        case 0x29b298u: goto label_29b298;
        case 0x29b29cu: goto label_29b29c;
        case 0x29b2a0u: goto label_29b2a0;
        case 0x29b2a4u: goto label_29b2a4;
        case 0x29b2a8u: goto label_29b2a8;
        case 0x29b2acu: goto label_29b2ac;
        case 0x29b2b0u: goto label_29b2b0;
        case 0x29b2b4u: goto label_29b2b4;
        case 0x29b2b8u: goto label_29b2b8;
        case 0x29b2bcu: goto label_29b2bc;
        case 0x29b2c0u: goto label_29b2c0;
        case 0x29b2c4u: goto label_29b2c4;
        case 0x29b2c8u: goto label_29b2c8;
        case 0x29b2ccu: goto label_29b2cc;
        case 0x29b2d0u: goto label_29b2d0;
        case 0x29b2d4u: goto label_29b2d4;
        case 0x29b2d8u: goto label_29b2d8;
        case 0x29b2dcu: goto label_29b2dc;
        case 0x29b2e0u: goto label_29b2e0;
        case 0x29b2e4u: goto label_29b2e4;
        case 0x29b2e8u: goto label_29b2e8;
        case 0x29b2ecu: goto label_29b2ec;
        case 0x29b2f0u: goto label_29b2f0;
        case 0x29b2f4u: goto label_29b2f4;
        case 0x29b2f8u: goto label_29b2f8;
        case 0x29b2fcu: goto label_29b2fc;
        case 0x29b300u: goto label_29b300;
        case 0x29b304u: goto label_29b304;
        case 0x29b308u: goto label_29b308;
        case 0x29b30cu: goto label_29b30c;
        case 0x29b310u: goto label_29b310;
        case 0x29b314u: goto label_29b314;
        case 0x29b318u: goto label_29b318;
        case 0x29b31cu: goto label_29b31c;
        case 0x29b320u: goto label_29b320;
        case 0x29b324u: goto label_29b324;
        case 0x29b328u: goto label_29b328;
        case 0x29b32cu: goto label_29b32c;
        case 0x29b330u: goto label_29b330;
        case 0x29b334u: goto label_29b334;
        case 0x29b338u: goto label_29b338;
        case 0x29b33cu: goto label_29b33c;
        case 0x29b340u: goto label_29b340;
        case 0x29b344u: goto label_29b344;
        case 0x29b348u: goto label_29b348;
        case 0x29b34cu: goto label_29b34c;
        case 0x29b350u: goto label_29b350;
        case 0x29b354u: goto label_29b354;
        case 0x29b358u: goto label_29b358;
        case 0x29b35cu: goto label_29b35c;
        case 0x29b360u: goto label_29b360;
        case 0x29b364u: goto label_29b364;
        case 0x29b368u: goto label_29b368;
        case 0x29b36cu: goto label_29b36c;
        case 0x29b370u: goto label_29b370;
        case 0x29b374u: goto label_29b374;
        case 0x29b378u: goto label_29b378;
        case 0x29b37cu: goto label_29b37c;
        case 0x29b380u: goto label_29b380;
        case 0x29b384u: goto label_29b384;
        case 0x29b388u: goto label_29b388;
        case 0x29b38cu: goto label_29b38c;
        case 0x29b390u: goto label_29b390;
        case 0x29b394u: goto label_29b394;
        case 0x29b398u: goto label_29b398;
        case 0x29b39cu: goto label_29b39c;
        case 0x29b3a0u: goto label_29b3a0;
        case 0x29b3a4u: goto label_29b3a4;
        case 0x29b3a8u: goto label_29b3a8;
        case 0x29b3acu: goto label_29b3ac;
        case 0x29b3b0u: goto label_29b3b0;
        case 0x29b3b4u: goto label_29b3b4;
        case 0x29b3b8u: goto label_29b3b8;
        case 0x29b3bcu: goto label_29b3bc;
        case 0x29b3c0u: goto label_29b3c0;
        case 0x29b3c4u: goto label_29b3c4;
        case 0x29b3c8u: goto label_29b3c8;
        case 0x29b3ccu: goto label_29b3cc;
        case 0x29b3d0u: goto label_29b3d0;
        case 0x29b3d4u: goto label_29b3d4;
        case 0x29b3d8u: goto label_29b3d8;
        case 0x29b3dcu: goto label_29b3dc;
        case 0x29b3e0u: goto label_29b3e0;
        case 0x29b3e4u: goto label_29b3e4;
        case 0x29b3e8u: goto label_29b3e8;
        case 0x29b3ecu: goto label_29b3ec;
        case 0x29b3f0u: goto label_29b3f0;
        case 0x29b3f4u: goto label_29b3f4;
        case 0x29b3f8u: goto label_29b3f8;
        case 0x29b3fcu: goto label_29b3fc;
        case 0x29b400u: goto label_29b400;
        case 0x29b404u: goto label_29b404;
        case 0x29b408u: goto label_29b408;
        case 0x29b40cu: goto label_29b40c;
        case 0x29b410u: goto label_29b410;
        case 0x29b414u: goto label_29b414;
        case 0x29b418u: goto label_29b418;
        case 0x29b41cu: goto label_29b41c;
        case 0x29b420u: goto label_29b420;
        case 0x29b424u: goto label_29b424;
        case 0x29b428u: goto label_29b428;
        case 0x29b42cu: goto label_29b42c;
        case 0x29b430u: goto label_29b430;
        case 0x29b434u: goto label_29b434;
        case 0x29b438u: goto label_29b438;
        case 0x29b43cu: goto label_29b43c;
        case 0x29b440u: goto label_29b440;
        case 0x29b444u: goto label_29b444;
        case 0x29b448u: goto label_29b448;
        case 0x29b44cu: goto label_29b44c;
        case 0x29b450u: goto label_29b450;
        case 0x29b454u: goto label_29b454;
        case 0x29b458u: goto label_29b458;
        case 0x29b45cu: goto label_29b45c;
        case 0x29b460u: goto label_29b460;
        case 0x29b464u: goto label_29b464;
        default: return;
    }

label_29ac98:
    // 0x29ac98: 0x750  .word       0x00000750                   # mfhi        $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ac98u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29ac9c:
    // 0x29ac9c: 0x0  nop
    ctx->pc = 0x29ac9cu;
    // NOP
label_29aca0:
    // 0x29aca0: 0x312c0  sll         $v0, $v1, 11
    ctx->pc = 0x29aca0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
label_29aca4:
    // 0x29aca4: 0x233  tltu        $zero, $zero, 8
    ctx->pc = 0x29aca4u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29aca8:
    // 0x29aca8: 0x119380  sll         $s2, $s1, 14
    ctx->pc = 0x29aca8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 14));
label_29acac:
    // 0x29acac: 0x0  nop
    ctx->pc = 0x29acacu;
    // NOP
label_29acb0:
    // 0x29acb0: 0x314f3  tltu        $zero, $v1, 83
    ctx->pc = 0x29acb0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29acb4:
    // 0x29acb4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29acb4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29ACB4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29acb8:
    // 0x29acb8: 0x750  .word       0x00000750                   # mfhi        $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29acb8u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29acbc:
    // 0x29acbc: 0x0  nop
    ctx->pc = 0x29acbcu;
    // NOP
label_29acc0:
    // 0x29acc0: 0x314f4  teq         $zero, $v1, 83
    ctx->pc = 0x29acc0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29acc4:
    // 0x29acc4: 0xae  .word       0x000000AE                   # dsub        $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29acc4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_29acc8:
    // 0x29acc8: 0x56c20  .word       0x00056C20                   # add         $t5, $zero, $a1 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29acc8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 5);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_29accc:
    // 0x29accc: 0x0  nop
    ctx->pc = 0x29acccu;
    // NOP
label_29acd0:
    // 0x29acd0: 0x315a2  .word       0x000315A2                   # neg         $v0, $v1 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29acd0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 3), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
label_29acd4:
    // 0x29acd4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29acd4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29ACD4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29acd8:
    // 0x29acd8: 0x6f0  tge         $zero, $zero, 27
    ctx->pc = 0x29acd8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29acdc:
    // 0x29acdc: 0x0  nop
    ctx->pc = 0x29acdcu;
    // NOP
label_29ace0:
    // 0x29ace0: 0x315a3  .word       0x000315A3                   # negu        $v0, $v1 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ace0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_29ace4:
    // 0x29ace4: 0x109  .word       0x00000109                   # jalr        $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
label_29ace8:
    if (ctx->pc == 0x29ACE8u) {
        ctx->pc = 0x29ACE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ACE4u;
        // 0x29ace8: 0x845a0  .word       0x000845A0                   # add         $t0, $zero, $t0 # 00000580 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 8);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29ACECu;
        goto label_29acec;
    }
    ctx->pc = 0x29ACE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29ACE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ACE4u;
        // 0x29ace8: 0x845a0  .word       0x000845A0                   # add         $t0, $zero, $t0 # 00000580 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 8);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29ACE4u, 0x29ACECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29ACECu;
label_29acec:
    // 0x29acec: 0x0  nop
    ctx->pc = 0x29acecu;
    // NOP
label_29acf0:
    // 0x29acf0: 0x316ac  .word       0x000316AC                   # dadd        $v0, $zero, $v1 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29acf0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 3); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, r); }
label_29acf4:
    // 0x29acf4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29acf4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29ACF4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29acf8:
    // 0x29acf8: 0x650  .word       0x00000650                   # mfhi        $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29acf8u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29acfc:
    // 0x29acfc: 0x0  nop
    ctx->pc = 0x29acfcu;
    // NOP
label_29ad00:
    // 0x29ad00: 0x316ad  .word       0x000316AD                   # daddu       $v0, $zero, $v1 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ad00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 3));
label_29ad04:
    // 0x29ad04: 0x16c  .word       0x0000016C                   # dadd        $zero, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ad04u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_29ad08:
    // 0x29ad08: 0xb5970  tge         $zero, $t3, 357
    ctx->pc = 0x29ad08u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 11)) { runtime->handleTrap(rdram, ctx); }
label_29ad0c:
    // 0x29ad0c: 0x0  nop
    ctx->pc = 0x29ad0cu;
    // NOP
label_29ad10:
    // 0x29ad10: 0x31819  .word       0x00031819                   # multu       $zero, $v1 # 00001800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ad10u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_29ad14:
    // 0x29ad14: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ad14u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29AD14 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29ad18:
    // 0x29ad18: 0x6b0  tge         $zero, $zero, 26
    ctx->pc = 0x29ad18u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29ad1c:
    // 0x29ad1c: 0x0  nop
    ctx->pc = 0x29ad1cu;
    // NOP
label_29ad20:
    // 0x29ad20: 0x3181a  div         $v1, $zero, $v1
    ctx->pc = 0x29ad20u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_29ad24:
    // 0x29ad24: 0x162  .word       0x00000162                   # neg         $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ad24u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_29ad28:
    // 0x29ad28: 0xb0b70  tge         $zero, $t3, 45
    ctx->pc = 0x29ad28u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 11)) { runtime->handleTrap(rdram, ctx); }
label_29ad2c:
    // 0x29ad2c: 0x0  nop
    ctx->pc = 0x29ad2cu;
    // NOP
label_29ad30:
    // 0x29ad30: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x29ad30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
label_29ad34:
    // 0x29ad34: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ad34u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29AD34 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29ad38:
    // 0x29ad38: 0x6d0  .word       0x000006D0                   # mfhi        $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ad38u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29ad3c:
    // 0x29ad3c: 0x0  nop
    ctx->pc = 0x29ad3cu;
    // NOP
label_29ad40:
    // 0x29ad40: 0x3197d  .word       0x0003197D                   # INVALID     $zero, $v1, 0x197D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ad40u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x29AD40 raw=0x0003197D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29ad44:
    // 0x29ad44: 0x158  .word       0x00000158                   # mult        $zero, $zero, $zero # 00000140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29ad44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_29ad48:
    // 0x29ad48: 0xaba80  sll         $s7, $t2, 10
    ctx->pc = 0x29ad48u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 10), 10));
label_29ad4c:
    // 0x29ad4c: 0x0  nop
    ctx->pc = 0x29ad4cu;
    // NOP
label_29ad50:
    // 0x29ad50: 0x31ad5  .word       0x00031AD5                   # INVALID     $zero, $v1, 0x1AD5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ad50u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x29AD50 raw=0x00031AD5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29ad54:
    // 0x29ad54: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ad54u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29AD54 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29ad58:
    // 0x29ad58: 0x6d0  .word       0x000006D0                   # mfhi        $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ad58u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29ad5c:
    // 0x29ad5c: 0x0  nop
    ctx->pc = 0x29ad5cu;
    // NOP
label_29ad60:
    // 0x29ad60: 0x31ad6  .word       0x00031AD6                   # dsrlv       $v1, $v1, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ad60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (GPR_U32(ctx, 0) & 0x3F));
label_29ad64:
    // 0x29ad64: 0x1ac  .word       0x000001AC                   # dadd        $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ad64u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_29ad68:
    // 0x29ad68: 0xd58f0  tge         $zero, $t5, 355
    ctx->pc = 0x29ad68u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 13)) { runtime->handleTrap(rdram, ctx); }
label_29ad6c:
    // 0x29ad6c: 0x0  nop
    ctx->pc = 0x29ad6cu;
    // NOP
label_29ad70:
    // 0x29ad70: 0x31c82  srl         $v1, $v1, 18
    ctx->pc = 0x29ad70u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 18));
label_29ad74:
    // 0x29ad74: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ad74u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29AD74 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29ad78:
    // 0x29ad78: 0x750  .word       0x00000750                   # mfhi        $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ad78u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29ad7c:
    // 0x29ad7c: 0x0  nop
    ctx->pc = 0x29ad7cu;
    // NOP
label_29ad80:
    // 0x29ad80: 0x31c83  sra         $v1, $v1, 18
    ctx->pc = 0x29ad80u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 18));
label_29ad84:
    // 0x29ad84: 0x197  .word       0x00000197                   # dsrav       $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ad84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_29ad88:
    // 0x29ad88: 0xcb5c0  sll         $s6, $t4, 23
    ctx->pc = 0x29ad88u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 12), 23));
label_29ad8c:
    // 0x29ad8c: 0x0  nop
    ctx->pc = 0x29ad8cu;
    // NOP
label_29ad90:
    // 0x29ad90: 0x31e1a  .word       0x00031E1A                   # div         $v1, $zero, $v1 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ad90u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_29ad94:
    // 0x29ad94: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ad94u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29AD94 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29ad98:
    // 0x29ad98: 0x750  .word       0x00000750                   # mfhi        $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ad98u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29ad9c:
    // 0x29ad9c: 0x0  nop
    ctx->pc = 0x29ad9cu;
    // NOP
label_29ada0:
    // 0x29ada0: 0x31e1b  .word       0x00031E1B                   # divu        $v1, $zero, $v1 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ada0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_29ada4:
    // 0x29ada4: 0x256  .word       0x00000256                   # dsrlv       $zero, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ada4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_29ada8:
    // 0x29ada8: 0x12afa0  .word       0x0012AFA0                   # add         $s5, $zero, $s2 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ada8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 18);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_29adac:
    // 0x29adac: 0x0  nop
    ctx->pc = 0x29adacu;
    // NOP
label_29adb0:
    // 0x29adb0: 0x32071  tgeu        $zero, $v1, 129
    ctx->pc = 0x29adb0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29adb4:
    // 0x29adb4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29adb4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29ADB4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29adb8:
    // 0x29adb8: 0x6b0  tge         $zero, $zero, 26
    ctx->pc = 0x29adb8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29adbc:
    // 0x29adbc: 0x0  nop
    ctx->pc = 0x29adbcu;
    // NOP
label_29adc0:
    // 0x29adc0: 0x32072  tlt         $zero, $v1, 129
    ctx->pc = 0x29adc0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29adc4:
    // 0x29adc4: 0x256  .word       0x00000256                   # dsrlv       $zero, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29adc4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_29adc8:
    // 0x29adc8: 0x12afa0  .word       0x0012AFA0                   # add         $s5, $zero, $s2 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29adc8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 18);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_29adcc:
    // 0x29adcc: 0x0  nop
    ctx->pc = 0x29adccu;
    // NOP
label_29add0:
    // 0x29add0: 0x322c8  .word       0x000322C8                   # jr          $zero # 000322C0 <InstrIdType: CPU_SPECIAL>
label_29add4:
    if (ctx->pc == 0x29ADD4u) {
        ctx->pc = 0x29ADD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ADD0u;
        // 0x29add4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29ADD4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x29ADD8u;
        goto label_29add8;
    }
    ctx->pc = 0x29ADD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29ADD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ADD0u;
        // 0x29add4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29ADD4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29ADD0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29ADD8u;
label_29add8:
    // 0x29add8: 0x6b0  tge         $zero, $zero, 26
    ctx->pc = 0x29add8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29addc:
    // 0x29addc: 0x0  nop
    ctx->pc = 0x29addcu;
    // NOP
label_29ade0:
    // 0x29ade0: 0x322c9  .word       0x000322C9                   # jalr        $a0, $zero # 000302C0 <InstrIdType: CPU_SPECIAL>
label_29ade4:
    if (ctx->pc == 0x29ADE4u) {
        ctx->pc = 0x29ADE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ADE0u;
        // 0x29ade4: 0x251  .word       0x00000251                   # mthi        $zero # 00000240 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29ADE8u;
        goto label_29ade8;
    }
    ctx->pc = 0x29ADE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 4, 0x29ADE8u);
        ctx->pc = 0x29ADE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ADE0u;
        // 0x29ade4: 0x251  .word       0x00000251                   # mthi        $zero # 00000240 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29ADE0u, 0x29ADE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29ADE8u;
label_29ade8:
    // 0x29ade8: 0x1286d0  .word       0x001286D0                   # mfhi        $s0 # 001206C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ade8u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_29adec:
    // 0x29adec: 0x0  nop
    ctx->pc = 0x29adecu;
    // NOP
label_29adf0:
    // 0x29adf0: 0x3251a  .word       0x0003251A                   # div         $a0, $zero, $v1 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29adf0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_29adf4:
    // 0x29adf4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29adf4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29ADF4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29adf8:
    // 0x29adf8: 0x6d0  .word       0x000006D0                   # mfhi        $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29adf8u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29adfc:
    // 0x29adfc: 0x0  nop
    ctx->pc = 0x29adfcu;
    // NOP
label_29ae00:
    // 0x29ae00: 0x3251b  .word       0x0003251B                   # divu        $a0, $zero, $v1 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ae00u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_29ae04:
    // 0x29ae04: 0x24c  syscall     9
    ctx->pc = 0x29ae04u;
    ctx->pc = 0x29AE08u;
runtime->handleSyscall(rdram, ctx, 0x9u);
label_29ae08:
    // 0x29ae08: 0x125d90  .word       0x00125D90                   # mfhi        $t3 # 00120580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ae08u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_29ae0c:
    // 0x29ae0c: 0x0  nop
    ctx->pc = 0x29ae0cu;
    // NOP
label_29ae10:
    // 0x29ae10: 0x32767  .word       0x00032767                   # nor         $a0, $zero, $v1 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ae10u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
label_29ae14:
    // 0x29ae14: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ae14u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29AE14 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29ae18:
    // 0x29ae18: 0x6d0  .word       0x000006D0                   # mfhi        $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ae18u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29ae1c:
    // 0x29ae1c: 0x0  nop
    ctx->pc = 0x29ae1cu;
    // NOP
label_29ae20:
    // 0x29ae20: 0x32768  .word       0x00032768                   # mfsa        $a0 # 00030740 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29ae20u;
    SET_GPR_U32(ctx, 4, ctx->sa);
label_29ae24:
    // 0x29ae24: 0x170  tge         $zero, $zero, 5
    ctx->pc = 0x29ae24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29ae28:
    // 0x29ae28: 0xb78b0  tge         $zero, $t3, 482
    ctx->pc = 0x29ae28u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 11)) { runtime->handleTrap(rdram, ctx); }
label_29ae2c:
    // 0x29ae2c: 0x0  nop
    ctx->pc = 0x29ae2cu;
    // NOP
label_29ae30:
    // 0x29ae30: 0x328d8  .word       0x000328D8                   # mult        $a1, $zero, $v1 # 000000C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29ae30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_29ae34:
    // 0x29ae34: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ae34u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29AE34 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29ae38:
    // 0x29ae38: 0x750  .word       0x00000750                   # mfhi        $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ae38u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29ae3c:
    // 0x29ae3c: 0x0  nop
    ctx->pc = 0x29ae3cu;
    // NOP
label_29ae40:
    // 0x29ae40: 0x328d9  .word       0x000328D9                   # multu       $zero, $v1 # 000028C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ae40u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_29ae44:
    // 0x29ae44: 0x183  sra         $zero, $zero, 6
    ctx->pc = 0x29ae44u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 6));
label_29ae48:
    // 0x29ae48: 0xc10c0  sll         $v0, $t4, 3
    ctx->pc = 0x29ae48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
label_29ae4c:
    // 0x29ae4c: 0x0  nop
    ctx->pc = 0x29ae4cu;
    // NOP
label_29ae50:
    // 0x29ae50: 0x32a5c  .word       0x00032A5C                   # dmult       $zero, $v1 # 00002A40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ae50u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x29AE50 raw=0x00032A5C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29ae54:
    // 0x29ae54: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ae54u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29AE54 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29ae58:
    // 0x29ae58: 0x750  .word       0x00000750                   # mfhi        $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ae58u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29ae5c:
    // 0x29ae5c: 0x0  nop
    ctx->pc = 0x29ae5cu;
    // NOP
label_29ae60:
    // 0x29ae60: 0x32a5d  .word       0x00032A5D                   # dmultu      $zero, $v1 # 00002A40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ae60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x29AE60 raw=0x00032A5D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29ae64:
    // 0x29ae64: 0x159  .word       0x00000159                   # multu       $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ae64u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_29ae68:
    // 0x29ae68: 0xac7b0  tge         $zero, $t2, 798
    ctx->pc = 0x29ae68u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 10)) { runtime->handleTrap(rdram, ctx); }
label_29ae6c:
    // 0x29ae6c: 0x0  nop
    ctx->pc = 0x29ae6cu;
    // NOP
label_29ae70:
    // 0x29ae70: 0x32bb6  tne         $zero, $v1, 174
    ctx->pc = 0x29ae70u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29ae74:
    // 0x29ae74: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ae74u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29AE74 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29ae78:
    // 0x29ae78: 0x750  .word       0x00000750                   # mfhi        $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ae78u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29ae7c:
    // 0x29ae7c: 0x0  nop
    ctx->pc = 0x29ae7cu;
    // NOP
label_29ae80:
    // 0x29ae80: 0x32bb7  .word       0x00032BB7                   # INVALID     $zero, $v1, 0x2BB7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ae80u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x29AE80 raw=0x00032BB7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29ae84:
    // 0x29ae84: 0x17a  dsrl        $zero, $zero, 5
    ctx->pc = 0x29ae84u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> 5);
label_29ae88:
    // 0x29ae88: 0xbca50  .word       0x000BCA50                   # mfhi        $t9 # 000B0240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ae88u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_29ae8c:
    // 0x29ae8c: 0x0  nop
    ctx->pc = 0x29ae8cu;
    // NOP
label_29ae90:
    // 0x29ae90: 0x32d31  tgeu        $zero, $v1, 180
    ctx->pc = 0x29ae90u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29ae94:
    // 0x29ae94: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ae94u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29AE94 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29ae98:
    // 0x29ae98: 0x750  .word       0x00000750                   # mfhi        $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ae98u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29ae9c:
    // 0x29ae9c: 0x0  nop
    ctx->pc = 0x29ae9cu;
    // NOP
label_29aea0:
    // 0x29aea0: 0x32d32  tlt         $zero, $v1, 180
    ctx->pc = 0x29aea0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29aea4:
    // 0x29aea4: 0xf6  tne         $zero, $zero, 3
    ctx->pc = 0x29aea4u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29aea8:
    // 0x29aea8: 0x7ab60  .word       0x0007AB60                   # add         $s5, $zero, $a3 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29aea8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 7);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_29aeac:
    // 0x29aeac: 0x0  nop
    ctx->pc = 0x29aeacu;
    // NOP
label_29aeb0:
    // 0x29aeb0: 0x32e28  .word       0x00032E28                   # mfsa        $a1 # 00030600 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29aeb0u;
    SET_GPR_U32(ctx, 5, ctx->sa);
label_29aeb4:
    // 0x29aeb4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29aeb4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29AEB4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29aeb8:
    // 0x29aeb8: 0x6b0  tge         $zero, $zero, 26
    ctx->pc = 0x29aeb8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29aebc:
    // 0x29aebc: 0x0  nop
    ctx->pc = 0x29aebcu;
    // NOP
label_29aec0:
    // 0x29aec0: 0x32e29  .word       0x00032E29                   # mtsa        $zero # 00032E00 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29aec0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_29aec4:
    // 0x29aec4: 0x161  .word       0x00000161                   # addu        $zero, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29aec4u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_29aec8:
    // 0x29aec8: 0xb0030  tge         $zero, $t3, 0
    ctx->pc = 0x29aec8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 11)) { runtime->handleTrap(rdram, ctx); }
label_29aecc:
    // 0x29aecc: 0x0  nop
    ctx->pc = 0x29aeccu;
    // NOP
label_29aed0:
    // 0x29aed0: 0x32f8a  .word       0x00032F8A                   # movz        $a1, $zero, $v1 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29aed0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_29aed4:
    // 0x29aed4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29aed4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29AED4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29aed8:
    // 0x29aed8: 0x5d0  .word       0x000005D0                   # mfhi        $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29aed8u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29aedc:
    // 0x29aedc: 0x0  nop
    ctx->pc = 0x29aedcu;
    // NOP
label_29aee0:
    // 0x29aee0: 0x32f8b  .word       0x00032F8B                   # movn        $a1, $zero, $v1 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29aee0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_29aee4:
    // 0x29aee4: 0x128  .word       0x00000128                   # mfsa        $zero # 00000100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29aee4u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_29aee8:
    // 0x29aee8: 0x93f10  .word       0x00093F10                   # mfhi        $a3 # 00090700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29aee8u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_29aeec:
    // 0x29aeec: 0x0  nop
    ctx->pc = 0x29aeecu;
    // NOP
label_29aef0:
    // 0x29aef0: 0x330b3  tltu        $zero, $v1, 194
    ctx->pc = 0x29aef0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29aef4:
    // 0x29aef4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29aef4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29AEF4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29aef8:
    // 0x29aef8: 0x6f0  tge         $zero, $zero, 27
    ctx->pc = 0x29aef8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29aefc:
    // 0x29aefc: 0x0  nop
    ctx->pc = 0x29aefcu;
    // NOP
label_29af00:
    // 0x29af00: 0x330b4  teq         $zero, $v1, 194
    ctx->pc = 0x29af00u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29af04:
    // 0x29af04: 0x11c  .word       0x0000011C                   # dmult       $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29af04u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x29AF04 raw=0x0000011C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29af08:
    // 0x29af08: 0x8dee0  .word       0x0008DEE0                   # add         $k1, $zero, $t0 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29af08u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 8);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_29af0c:
    // 0x29af0c: 0x0  nop
    ctx->pc = 0x29af0cu;
    // NOP
label_29af10:
    // 0x29af10: 0x331d0  .word       0x000331D0                   # mfhi        $a2 # 000301C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29af10u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_29af14:
    // 0x29af14: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29af14u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29AF14 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29af18:
    // 0x29af18: 0x6f0  tge         $zero, $zero, 27
    ctx->pc = 0x29af18u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29af1c:
    // 0x29af1c: 0x0  nop
    ctx->pc = 0x29af1cu;
    // NOP
label_29af20:
    // 0x29af20: 0x331d1  .word       0x000331D1                   # mthi        $zero # 000331C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29af20u;
    ctx->hi = GPR_U64(ctx, 0);
label_29af24:
    // 0x29af24: 0x148  .word       0x00000148                   # jr          $zero # 00000140 <InstrIdType: CPU_SPECIAL>
label_29af28:
    if (ctx->pc == 0x29AF28u) {
        ctx->pc = 0x29AF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AF24u;
        // 0x29af28: 0xa3c00  sll         $a3, $t2, 16 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29AF2Cu;
        goto label_29af2c;
    }
    ctx->pc = 0x29AF24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29AF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AF24u;
        // 0x29af28: 0xa3c00  sll         $a3, $t2, 16 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29AF24u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29AF2Cu;
label_29af2c:
    // 0x29af2c: 0x0  nop
    ctx->pc = 0x29af2cu;
    // NOP
label_29af30:
    // 0x29af30: 0x33319  .word       0x00033319                   # multu       $zero, $v1 # 00003300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29af30u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_29af34:
    // 0x29af34: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29af34u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29AF34 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29af38:
    // 0x29af38: 0x6f0  tge         $zero, $zero, 27
    ctx->pc = 0x29af38u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29af3c:
    // 0x29af3c: 0x0  nop
    ctx->pc = 0x29af3cu;
    // NOP
label_29af40:
    // 0x29af40: 0x3331a  .word       0x0003331A                   # div         $a2, $zero, $v1 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29af40u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_29af44:
    // 0x29af44: 0x1b3  tltu        $zero, $zero, 6
    ctx->pc = 0x29af44u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29af48:
    // 0x29af48: 0xd9530  tge         $zero, $t5, 596
    ctx->pc = 0x29af48u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 13)) { runtime->handleTrap(rdram, ctx); }
label_29af4c:
    // 0x29af4c: 0x0  nop
    ctx->pc = 0x29af4cu;
    // NOP
label_29af50:
    // 0x29af50: 0x334cd  break       3, 211
    ctx->pc = 0x29af50u;
    runtime->handleBreak(rdram, ctx);
label_29af54:
    // 0x29af54: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29af54u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29AF54 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29af58:
    // 0x29af58: 0x670  tge         $zero, $zero, 25
    ctx->pc = 0x29af58u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29af5c:
    // 0x29af5c: 0x0  nop
    ctx->pc = 0x29af5cu;
    // NOP
label_29af60:
    // 0x29af60: 0x334ce  .word       0x000334CE                   # INVALID     $zero, $v1, 0x34CE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29af60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x29AF60 raw=0x000334CE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29af64:
    // 0x29af64: 0x15c  .word       0x0000015C                   # dmult       $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29af64u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x29AF64 raw=0x0000015C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29af68:
    // 0x29af68: 0xadfe0  .word       0x000ADFE0                   # add         $k1, $zero, $t2 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29af68u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 10);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_29af6c:
    // 0x29af6c: 0x0  nop
    ctx->pc = 0x29af6cu;
    // NOP
label_29af70:
    // 0x29af70: 0x3362a  .word       0x0003362A                   # slt         $a2, $zero, $v1 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29af70u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_29af74:
    // 0x29af74: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29af74u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29AF74 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29af78:
    // 0x29af78: 0x6b0  tge         $zero, $zero, 26
    ctx->pc = 0x29af78u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29af7c:
    // 0x29af7c: 0x0  nop
    ctx->pc = 0x29af7cu;
    // NOP
label_29af80:
    // 0x29af80: 0x3362b  .word       0x0003362B                   # sltu        $a2, $zero, $v1 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29af80u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_29af84:
    // 0x29af84: 0x105  .word       0x00000105                   # INVALID     $zero, $zero, 0x105 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29af84u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x29AF84 raw=0x00000105"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29af88:
    // 0x29af88: 0x82200  sll         $a0, $t0, 8
    ctx->pc = 0x29af88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
label_29af8c:
    // 0x29af8c: 0x0  nop
    ctx->pc = 0x29af8cu;
    // NOP
label_29af90:
    // 0x29af90: 0x33730  tge         $zero, $v1, 220
    ctx->pc = 0x29af90u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29af94:
    // 0x29af94: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29af94u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29AF94 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29af98:
    // 0x29af98: 0x6b0  tge         $zero, $zero, 26
    ctx->pc = 0x29af98u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29af9c:
    // 0x29af9c: 0x0  nop
    ctx->pc = 0x29af9cu;
    // NOP
label_29afa0:
    // 0x29afa0: 0x33731  tgeu        $zero, $v1, 220
    ctx->pc = 0x29afa0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29afa4:
    // 0x29afa4: 0xfd  .word       0x000000FD                   # INVALID     $zero, $zero, 0xFD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29afa4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x29AFA4 raw=0x000000FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29afa8:
    // 0x29afa8: 0x7e270  tge         $zero, $a3, 905
    ctx->pc = 0x29afa8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 7)) { runtime->handleTrap(rdram, ctx); }
label_29afac:
    // 0x29afac: 0x0  nop
    ctx->pc = 0x29afacu;
    // NOP
label_29afb0:
    // 0x29afb0: 0x3382e  dsub        $a3, $zero, $v1
    ctx->pc = 0x29afb0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 3); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 7, r); }
label_29afb4:
    // 0x29afb4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29afb4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29AFB4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29afb8:
    // 0x29afb8: 0x6b0  tge         $zero, $zero, 26
    ctx->pc = 0x29afb8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29afbc:
    // 0x29afbc: 0x0  nop
    ctx->pc = 0x29afbcu;
    // NOP
label_29afc0:
    // 0x29afc0: 0x3382f  dsubu       $a3, $zero, $v1
    ctx->pc = 0x29afc0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) - GPR_U64(ctx, 3));
label_29afc4:
    // 0x29afc4: 0xe8  .word       0x000000E8                   # mfsa        $zero # 000000C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29afc4u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_29afc8:
    // 0x29afc8: 0x73a80  sll         $a3, $a3, 10
    ctx->pc = 0x29afc8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 10));
label_29afcc:
    // 0x29afcc: 0x0  nop
    ctx->pc = 0x29afccu;
    // NOP
label_29afd0:
    // 0x29afd0: 0x33917  .word       0x00033917                   # dsrav       $a3, $v1, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29afd0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 3) >> (GPR_U32(ctx, 0) & 0x3F));
label_29afd4:
    // 0x29afd4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29afd4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29AFD4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29afd8:
    // 0x29afd8: 0x6b0  tge         $zero, $zero, 26
    ctx->pc = 0x29afd8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29afdc:
    // 0x29afdc: 0x0  nop
    ctx->pc = 0x29afdcu;
    // NOP
label_29afe0:
    // 0x29afe0: 0x33918  .word       0x00033918                   # mult        $a3, $zero, $v1 # 00000100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29afe0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_29afe4:
    // 0x29afe4: 0x2cf  sync
    ctx->pc = 0x29afe4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_29afe8:
    // 0x29afe8: 0x167270  tge         $zero, $s6, 457
    ctx->pc = 0x29afe8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 22)) { runtime->handleTrap(rdram, ctx); }
label_29afec:
    // 0x29afec: 0x0  nop
    ctx->pc = 0x29afecu;
    // NOP
label_29aff0:
    // 0x29aff0: 0x33be7  .word       0x00033BE7                   # nor         $a3, $zero, $v1 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29aff0u;
    SET_GPR_U64(ctx, 7, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
label_29aff4:
    // 0x29aff4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29aff4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29AFF4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29aff8:
    // 0x29aff8: 0x730  tge         $zero, $zero, 28
    ctx->pc = 0x29aff8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29affc:
    // 0x29affc: 0x0  nop
    ctx->pc = 0x29affcu;
    // NOP
label_29b000:
    // 0x29b000: 0x33be8  .word       0x00033BE8                   # mfsa        $a3 # 000303C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29b000u;
    SET_GPR_U32(ctx, 7, ctx->sa);
label_29b004:
    // 0x29b004: 0x2ec  .word       0x000002EC                   # dadd        $zero, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b004u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_29b008:
    // 0x29b008: 0x175d80  sll         $t3, $s7, 22
    ctx->pc = 0x29b008u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 23), 22));
label_29b00c:
    // 0x29b00c: 0x0  nop
    ctx->pc = 0x29b00cu;
    // NOP
label_29b010:
    // 0x29b010: 0x33ed4  .word       0x00033ED4                   # dsllv       $a3, $v1, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b010u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (GPR_U32(ctx, 0) & 0x3F));
label_29b014:
    // 0x29b014: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b014u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B014 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b018:
    // 0x29b018: 0x730  tge         $zero, $zero, 28
    ctx->pc = 0x29b018u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29b01c:
    // 0x29b01c: 0x0  nop
    ctx->pc = 0x29b01cu;
    // NOP
label_29b020:
    // 0x29b020: 0x33ed5  .word       0x00033ED5                   # INVALID     $zero, $v1, 0x3ED5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b020u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x29B020 raw=0x00033ED5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b024:
    // 0x29b024: 0x12f  .word       0x0000012F                   # dsubu       $zero, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b024u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_29b028:
    // 0x29b028: 0x971e0  .word       0x000971E0                   # add         $t6, $zero, $t1 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b028u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 9);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_29b02c:
    // 0x29b02c: 0x0  nop
    ctx->pc = 0x29b02cu;
    // NOP
label_29b030:
    // 0x29b030: 0x34004  sllv        $t0, $v1, $zero
    ctx->pc = 0x29b030u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 0) & 0x1F));
label_29b034:
    // 0x29b034: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b034u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B034 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b038:
    // 0x29b038: 0x6b0  tge         $zero, $zero, 26
    ctx->pc = 0x29b038u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29b03c:
    // 0x29b03c: 0x0  nop
    ctx->pc = 0x29b03cu;
    // NOP
label_29b040:
    // 0x29b040: 0x34005  .word       0x00034005                   # INVALID     $zero, $v1, 0x4005 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b040u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x29B040 raw=0x00034005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b044:
    // 0x29b044: 0x1d1  .word       0x000001D1                   # mthi        $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b044u;
    ctx->hi = GPR_U64(ctx, 0);
label_29b048:
    // 0x29b048: 0xe8640  sll         $s0, $t6, 25
    ctx->pc = 0x29b048u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 14), 25));
label_29b04c:
    // 0x29b04c: 0x0  nop
    ctx->pc = 0x29b04cu;
    // NOP
label_29b050:
    // 0x29b050: 0x341d6  .word       0x000341D6                   # dsrlv       $t0, $v1, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b050u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) >> (GPR_U32(ctx, 0) & 0x3F));
label_29b054:
    // 0x29b054: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b054u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B054 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b058:
    // 0x29b058: 0x6f0  tge         $zero, $zero, 27
    ctx->pc = 0x29b058u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29b05c:
    // 0x29b05c: 0x0  nop
    ctx->pc = 0x29b05cu;
    // NOP
label_29b060:
    // 0x29b060: 0x341d7  .word       0x000341D7                   # dsrav       $t0, $v1, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b060u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 3) >> (GPR_U32(ctx, 0) & 0x3F));
label_29b064:
    // 0x29b064: 0x12f  .word       0x0000012F                   # dsubu       $zero, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b064u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_29b068:
    // 0x29b068: 0x97230  tge         $zero, $t1, 456
    ctx->pc = 0x29b068u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 9)) { runtime->handleTrap(rdram, ctx); }
label_29b06c:
    // 0x29b06c: 0x0  nop
    ctx->pc = 0x29b06cu;
    // NOP
label_29b070:
    // 0x29b070: 0x34306  .word       0x00034306                   # srlv        $t0, $v1, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b070u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 0) & 0x1F));
label_29b074:
    // 0x29b074: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b074u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B074 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b078:
    // 0x29b078: 0x6f0  tge         $zero, $zero, 27
    ctx->pc = 0x29b078u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29b07c:
    // 0x29b07c: 0x0  nop
    ctx->pc = 0x29b07cu;
    // NOP
label_29b080:
    // 0x29b080: 0x34307  .word       0x00034307                   # srav        $t0, $v1, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b080u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 0) & 0x1F));
label_29b084:
    // 0x29b084: 0x113  .word       0x00000113                   # mtlo        $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b084u;
    ctx->lo = GPR_U64(ctx, 0);
label_29b088:
    // 0x29b088: 0x89710  .word       0x00089710                   # mfhi        $s2 # 00080700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b088u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_29b08c:
    // 0x29b08c: 0x0  nop
    ctx->pc = 0x29b08cu;
    // NOP
label_29b090:
    // 0x29b090: 0x3441a  .word       0x0003441A                   # div         $t0, $zero, $v1 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b090u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_29b094:
    // 0x29b094: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b094u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B094 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b098:
    // 0x29b098: 0x750  .word       0x00000750                   # mfhi        $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b098u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29b09c:
    // 0x29b09c: 0x0  nop
    ctx->pc = 0x29b09cu;
    // NOP
label_29b0a0:
    // 0x29b0a0: 0x3441b  .word       0x0003441B                   # divu        $t0, $zero, $v1 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b0a0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_29b0a4:
    // 0x29b0a4: 0x11f  .word       0x0000011F                   # ddivu       $zero, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b0a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x29B0A4 raw=0x0000011F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b0a8:
    // 0x29b0a8: 0x8f270  tge         $zero, $t0, 969
    ctx->pc = 0x29b0a8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 8)) { runtime->handleTrap(rdram, ctx); }
label_29b0ac:
    // 0x29b0ac: 0x0  nop
    ctx->pc = 0x29b0acu;
    // NOP
label_29b0b0:
    // 0x29b0b0: 0x3453a  dsrl        $t0, $v1, 20
    ctx->pc = 0x29b0b0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) >> 20);
label_29b0b4:
    // 0x29b0b4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b0b4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B0B4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b0b8:
    // 0x29b0b8: 0x750  .word       0x00000750                   # mfhi        $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b0b8u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29b0bc:
    // 0x29b0bc: 0x0  nop
    ctx->pc = 0x29b0bcu;
    // NOP
label_29b0c0:
    // 0x29b0c0: 0x3453b  dsra        $t0, $v1, 20
    ctx->pc = 0x29b0c0u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 3) >> 20);
label_29b0c4:
    // 0x29b0c4: 0x14b  .word       0x0000014B                   # movn        $zero, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b0c4u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_29b0c8:
    // 0x29b0c8: 0xa5500  sll         $t2, $t2, 20
    ctx->pc = 0x29b0c8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 20));
label_29b0cc:
    // 0x29b0cc: 0x0  nop
    ctx->pc = 0x29b0ccu;
    // NOP
label_29b0d0:
    // 0x29b0d0: 0x34686  .word       0x00034686                   # srlv        $t0, $v1, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b0d0u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 0) & 0x1F));
label_29b0d4:
    // 0x29b0d4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b0d4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B0D4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b0d8:
    // 0x29b0d8: 0x6b0  tge         $zero, $zero, 26
    ctx->pc = 0x29b0d8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29b0dc:
    // 0x29b0dc: 0x0  nop
    ctx->pc = 0x29b0dcu;
    // NOP
label_29b0e0:
    // 0x29b0e0: 0x34687  .word       0x00034687                   # srav        $t0, $v1, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b0e0u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 0) & 0x1F));
label_29b0e4:
    // 0x29b0e4: 0x15b  .word       0x0000015B                   # divu        $zero, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b0e4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_29b0e8:
    // 0x29b0e8: 0xad180  sll         $k0, $t2, 6
    ctx->pc = 0x29b0e8u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 10), 6));
label_29b0ec:
    // 0x29b0ec: 0x0  nop
    ctx->pc = 0x29b0ecu;
    // NOP
label_29b0f0:
    // 0x29b0f0: 0x347e2  .word       0x000347E2                   # neg         $t0, $v1 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b0f0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 3), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
label_29b0f4:
    // 0x29b0f4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b0f4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B0F4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b0f8:
    // 0x29b0f8: 0x6b0  tge         $zero, $zero, 26
    ctx->pc = 0x29b0f8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29b0fc:
    // 0x29b0fc: 0x0  nop
    ctx->pc = 0x29b0fcu;
    // NOP
label_29b100:
    // 0x29b100: 0x347e3  .word       0x000347E3                   # negu        $t0, $v1 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b100u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_29b104:
    // 0x29b104: 0x10f  sync
    ctx->pc = 0x29b104u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_29b108:
    // 0x29b108: 0x87390  .word       0x00087390                   # mfhi        $t6 # 00080380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b108u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_29b10c:
    // 0x29b10c: 0x0  nop
    ctx->pc = 0x29b10cu;
    // NOP
label_29b110:
    // 0x29b110: 0x348f2  tlt         $zero, $v1, 291
    ctx->pc = 0x29b110u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29b114:
    // 0x29b114: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b114u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B114 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b118:
    // 0x29b118: 0x5b0  tge         $zero, $zero, 22
    ctx->pc = 0x29b118u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29b11c:
    // 0x29b11c: 0x0  nop
    ctx->pc = 0x29b11cu;
    // NOP
label_29b120:
    // 0x29b120: 0x348f3  tltu        $zero, $v1, 291
    ctx->pc = 0x29b120u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29b124:
    // 0x29b124: 0xe2  .word       0x000000E2                   # neg         $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b124u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_29b128:
    // 0x29b128: 0x70c20  .word       0x00070C20                   # add         $at, $zero, $a3 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b128u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 7);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_29b12c:
    // 0x29b12c: 0x0  nop
    ctx->pc = 0x29b12cu;
    // NOP
label_29b130:
    // 0x29b130: 0x349d5  .word       0x000349D5                   # INVALID     $zero, $v1, 0x49D5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b130u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x29B130 raw=0x000349D5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b134:
    // 0x29b134: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b134u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B134 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b138:
    // 0x29b138: 0x630  tge         $zero, $zero, 24
    ctx->pc = 0x29b138u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29b13c:
    // 0x29b13c: 0x0  nop
    ctx->pc = 0x29b13cu;
    // NOP
label_29b140:
    // 0x29b140: 0x349d6  .word       0x000349D6                   # dsrlv       $t1, $v1, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b140u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) >> (GPR_U32(ctx, 0) & 0x3F));
label_29b144:
    // 0x29b144: 0x124  .word       0x00000124                   # and         $zero, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b144u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29b148:
    // 0x29b148: 0x91f50  .word       0x00091F50                   # mfhi        $v1 # 00090740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b148u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_29b14c:
    // 0x29b14c: 0x0  nop
    ctx->pc = 0x29b14cu;
    // NOP
label_29b150:
    // 0x29b150: 0x34afa  dsrl        $t1, $v1, 11
    ctx->pc = 0x29b150u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) >> 11);
label_29b154:
    // 0x29b154: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b154u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B154 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b158:
    // 0x29b158: 0x690  .word       0x00000690                   # mfhi        $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b158u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29b15c:
    // 0x29b15c: 0x0  nop
    ctx->pc = 0x29b15cu;
    // NOP
label_29b160:
    // 0x29b160: 0x34afb  dsra        $t1, $v1, 11
    ctx->pc = 0x29b160u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 3) >> 11);
label_29b164:
    // 0x29b164: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b164u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B164 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b168:
    // 0x29b168: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b168u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b16c:
    // 0x29b16c: 0x0  nop
    ctx->pc = 0x29b16cu;
    // NOP
label_29b170:
    // 0x29b170: 0x34afc  dsll32      $t1, $v1, 11
    ctx->pc = 0x29b170u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) << (32 + 11));
label_29b174:
    // 0x29b174: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b174u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B174 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b178:
    // 0x29b178: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b178u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b17c:
    // 0x29b17c: 0x0  nop
    ctx->pc = 0x29b17cu;
    // NOP
label_29b180:
    // 0x29b180: 0x34afd  .word       0x00034AFD                   # INVALID     $zero, $v1, 0x4AFD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b180u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x29B180 raw=0x00034AFD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b184:
    // 0x29b184: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b184u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b188:
    // 0x29b188: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b188u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b18c:
    // 0x29b18c: 0x0  nop
    ctx->pc = 0x29b18cu;
    // NOP
label_29b190:
    // 0x29b190: 0x34b01  .word       0x00034B01                   # INVALID     $zero, $v1, 0x4B01 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b190u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B190 raw=0x00034B01"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b194:
    // 0x29b194: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b194u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b198:
    // 0x29b198: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b198u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b19c:
    // 0x29b19c: 0x0  nop
    ctx->pc = 0x29b19cu;
    // NOP
label_29b1a0:
    // 0x29b1a0: 0x34b05  .word       0x00034B05                   # INVALID     $zero, $v1, 0x4B05 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b1a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x29B1A0 raw=0x00034B05"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b1a4:
    // 0x29b1a4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b1a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B1A4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b1a8:
    // 0x29b1a8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b1a8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b1ac:
    // 0x29b1ac: 0x0  nop
    ctx->pc = 0x29b1acu;
    // NOP
label_29b1b0:
    // 0x29b1b0: 0x34b06  .word       0x00034B06                   # srlv        $t1, $v1, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b1b0u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 0) & 0x1F));
label_29b1b4:
    // 0x29b1b4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b1b4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B1B4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b1b8:
    // 0x29b1b8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b1b8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b1bc:
    // 0x29b1bc: 0x0  nop
    ctx->pc = 0x29b1bcu;
    // NOP
label_29b1c0:
    // 0x29b1c0: 0x34b07  .word       0x00034B07                   # srav        $t1, $v1, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b1c0u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 0) & 0x1F));
label_29b1c4:
    // 0x29b1c4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b1c4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b1c8:
    // 0x29b1c8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b1c8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b1cc:
    // 0x29b1cc: 0x0  nop
    ctx->pc = 0x29b1ccu;
    // NOP
label_29b1d0:
    // 0x29b1d0: 0x34b0b  .word       0x00034B0B                   # movn        $t1, $zero, $v1 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b1d0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
label_29b1d4:
    // 0x29b1d4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b1d4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b1d8:
    // 0x29b1d8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b1d8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b1dc:
    // 0x29b1dc: 0x0  nop
    ctx->pc = 0x29b1dcu;
    // NOP
label_29b1e0:
    // 0x29b1e0: 0x34b0f  .word       0x00034B0F                   # sync # 00034800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b1e0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_29b1e4:
    // 0x29b1e4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b1e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B1E4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b1e8:
    // 0x29b1e8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b1e8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b1ec:
    // 0x29b1ec: 0x0  nop
    ctx->pc = 0x29b1ecu;
    // NOP
label_29b1f0:
    // 0x29b1f0: 0x34b10  .word       0x00034B10                   # mfhi        $t1 # 00030300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b1f0u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_29b1f4:
    // 0x29b1f4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b1f4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B1F4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b1f8:
    // 0x29b1f8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b1f8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b1fc:
    // 0x29b1fc: 0x0  nop
    ctx->pc = 0x29b1fcu;
    // NOP
label_29b200:
    // 0x29b200: 0x34b11  .word       0x00034B11                   # mthi        $zero # 00034B00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b200u;
    ctx->hi = GPR_U64(ctx, 0);
label_29b204:
    // 0x29b204: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b204u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b208:
    // 0x29b208: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b208u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b20c:
    // 0x29b20c: 0x0  nop
    ctx->pc = 0x29b20cu;
    // NOP
label_29b210:
    // 0x29b210: 0x34b15  .word       0x00034B15                   # INVALID     $zero, $v1, 0x4B15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b210u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x29B210 raw=0x00034B15"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b214:
    // 0x29b214: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b214u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b218:
    // 0x29b218: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b218u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b21c:
    // 0x29b21c: 0x0  nop
    ctx->pc = 0x29b21cu;
    // NOP
label_29b220:
    // 0x29b220: 0x34b19  .word       0x00034B19                   # multu       $zero, $v1 # 00004B00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b220u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_29b224:
    // 0x29b224: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b224u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B224 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b228:
    // 0x29b228: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b228u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b22c:
    // 0x29b22c: 0x0  nop
    ctx->pc = 0x29b22cu;
    // NOP
label_29b230:
    // 0x29b230: 0x34b1a  .word       0x00034B1A                   # div         $t1, $zero, $v1 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b230u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_29b234:
    // 0x29b234: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b234u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B234 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b238:
    // 0x29b238: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b238u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b23c:
    // 0x29b23c: 0x0  nop
    ctx->pc = 0x29b23cu;
    // NOP
label_29b240:
    // 0x29b240: 0x34b1b  .word       0x00034B1B                   # divu        $t1, $zero, $v1 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b240u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_29b244:
    // 0x29b244: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b244u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b248:
    // 0x29b248: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b248u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b24c:
    // 0x29b24c: 0x0  nop
    ctx->pc = 0x29b24cu;
    // NOP
label_29b250:
    // 0x29b250: 0x34b1f  .word       0x00034B1F                   # ddivu       $t1, $zero, $v1 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b250u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x29B250 raw=0x00034B1F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b254:
    // 0x29b254: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b254u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b258:
    // 0x29b258: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b258u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b25c:
    // 0x29b25c: 0x0  nop
    ctx->pc = 0x29b25cu;
    // NOP
label_29b260:
    // 0x29b260: 0x34b23  .word       0x00034B23                   # negu        $t1, $v1 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b260u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_29b264:
    // 0x29b264: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b264u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B264 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b268:
    // 0x29b268: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b268u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b26c:
    // 0x29b26c: 0x0  nop
    ctx->pc = 0x29b26cu;
    // NOP
label_29b270:
    // 0x29b270: 0x34b24  .word       0x00034B24                   # and         $t1, $zero, $v1 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b270u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) & GPR_U64(ctx, 3));
label_29b274:
    // 0x29b274: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b274u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B274 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b278:
    // 0x29b278: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b278u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b27c:
    // 0x29b27c: 0x0  nop
    ctx->pc = 0x29b27cu;
    // NOP
label_29b280:
    // 0x29b280: 0x34b25  .word       0x00034B25                   # or          $t1, $zero, $v1 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b280u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | GPR_U64(ctx, 3));
label_29b284:
    // 0x29b284: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b284u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b288:
    // 0x29b288: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b288u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b28c:
    // 0x29b28c: 0x0  nop
    ctx->pc = 0x29b28cu;
    // NOP
label_29b290:
    // 0x29b290: 0x34b29  .word       0x00034B29                   # mtsa        $zero # 00034B00 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29b290u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_29b294:
    // 0x29b294: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b294u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b298:
    // 0x29b298: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b298u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b29c:
    // 0x29b29c: 0x0  nop
    ctx->pc = 0x29b29cu;
    // NOP
label_29b2a0:
    // 0x29b2a0: 0x34b2d  .word       0x00034B2D                   # daddu       $t1, $zero, $v1 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b2a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 3));
label_29b2a4:
    // 0x29b2a4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b2a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B2A4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b2a8:
    // 0x29b2a8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b2a8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b2ac:
    // 0x29b2ac: 0x0  nop
    ctx->pc = 0x29b2acu;
    // NOP
label_29b2b0:
    // 0x29b2b0: 0x34b2e  .word       0x00034B2E                   # dsub        $t1, $zero, $v1 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b2b0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 3); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, r); }
label_29b2b4:
    // 0x29b2b4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b2b4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B2B4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b2b8:
    // 0x29b2b8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b2b8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b2bc:
    // 0x29b2bc: 0x0  nop
    ctx->pc = 0x29b2bcu;
    // NOP
label_29b2c0:
    // 0x29b2c0: 0x34b2f  .word       0x00034B2F                   # dsubu       $t1, $zero, $v1 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b2c0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) - GPR_U64(ctx, 3));
label_29b2c4:
    // 0x29b2c4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b2c4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b2c8:
    // 0x29b2c8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b2c8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b2cc:
    // 0x29b2cc: 0x0  nop
    ctx->pc = 0x29b2ccu;
    // NOP
label_29b2d0:
    // 0x29b2d0: 0x34b33  tltu        $zero, $v1, 300
    ctx->pc = 0x29b2d0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29b2d4:
    // 0x29b2d4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b2d4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b2d8:
    // 0x29b2d8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b2d8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b2dc:
    // 0x29b2dc: 0x0  nop
    ctx->pc = 0x29b2dcu;
    // NOP
label_29b2e0:
    // 0x29b2e0: 0x34b37  .word       0x00034B37                   # INVALID     $zero, $v1, 0x4B37 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b2e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x29B2E0 raw=0x00034B37"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b2e4:
    // 0x29b2e4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b2e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B2E4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b2e8:
    // 0x29b2e8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b2e8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b2ec:
    // 0x29b2ec: 0x0  nop
    ctx->pc = 0x29b2ecu;
    // NOP
label_29b2f0:
    // 0x29b2f0: 0x34b38  dsll        $t1, $v1, 12
    ctx->pc = 0x29b2f0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) << 12);
label_29b2f4:
    // 0x29b2f4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b2f4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B2F4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b2f8:
    // 0x29b2f8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b2f8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b2fc:
    // 0x29b2fc: 0x0  nop
    ctx->pc = 0x29b2fcu;
    // NOP
label_29b300:
    // 0x29b300: 0x34b39  .word       0x00034B39                   # INVALID     $zero, $v1, 0x4B39 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b300u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x29B300 raw=0x00034B39"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b304:
    // 0x29b304: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b304u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b308:
    // 0x29b308: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b308u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b30c:
    // 0x29b30c: 0x0  nop
    ctx->pc = 0x29b30cu;
    // NOP
label_29b310:
    // 0x29b310: 0x34b3d  .word       0x00034B3D                   # INVALID     $zero, $v1, 0x4B3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b310u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x29B310 raw=0x00034B3D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b314:
    // 0x29b314: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b314u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b318:
    // 0x29b318: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b318u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b31c:
    // 0x29b31c: 0x0  nop
    ctx->pc = 0x29b31cu;
    // NOP
label_29b320:
    // 0x29b320: 0x34b41  .word       0x00034B41                   # INVALID     $zero, $v1, 0x4B41 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b320u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B320 raw=0x00034B41"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b324:
    // 0x29b324: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b324u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B324 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b328:
    // 0x29b328: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b328u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b32c:
    // 0x29b32c: 0x0  nop
    ctx->pc = 0x29b32cu;
    // NOP
label_29b330:
    // 0x29b330: 0x34b42  srl         $t1, $v1, 13
    ctx->pc = 0x29b330u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 3), 13));
label_29b334:
    // 0x29b334: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b334u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B334 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b338:
    // 0x29b338: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b338u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b33c:
    // 0x29b33c: 0x0  nop
    ctx->pc = 0x29b33cu;
    // NOP
label_29b340:
    // 0x29b340: 0x34b43  sra         $t1, $v1, 13
    ctx->pc = 0x29b340u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 3), 13));
label_29b344:
    // 0x29b344: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b344u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b348:
    // 0x29b348: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b348u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b34c:
    // 0x29b34c: 0x0  nop
    ctx->pc = 0x29b34cu;
    // NOP
label_29b350:
    // 0x29b350: 0x34b47  .word       0x00034B47                   # srav        $t1, $v1, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b350u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 0) & 0x1F));
label_29b354:
    // 0x29b354: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b354u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b358:
    // 0x29b358: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b358u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b35c:
    // 0x29b35c: 0x0  nop
    ctx->pc = 0x29b35cu;
    // NOP
label_29b360:
    // 0x29b360: 0x34b4b  .word       0x00034B4B                   # movn        $t1, $zero, $v1 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b360u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
label_29b364:
    // 0x29b364: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b364u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B364 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b368:
    // 0x29b368: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b368u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b36c:
    // 0x29b36c: 0x0  nop
    ctx->pc = 0x29b36cu;
    // NOP
label_29b370:
    // 0x29b370: 0x34b4c  .word       0x00034B4C                   # syscall     301 # 00030000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b370u;
    ctx->pc = 0x29B374u;
runtime->handleSyscall(rdram, ctx, 0xD2Du);
label_29b374:
    // 0x29b374: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b374u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B374 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b378:
    // 0x29b378: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b378u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b37c:
    // 0x29b37c: 0x0  nop
    ctx->pc = 0x29b37cu;
    // NOP
label_29b380:
    // 0x29b380: 0x34b4d  break       3, 301
    ctx->pc = 0x29b380u;
    runtime->handleBreak(rdram, ctx);
label_29b384:
    // 0x29b384: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b384u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b388:
    // 0x29b388: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b388u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b38c:
    // 0x29b38c: 0x0  nop
    ctx->pc = 0x29b38cu;
    // NOP
label_29b390:
    // 0x29b390: 0x34b51  .word       0x00034B51                   # mthi        $zero # 00034B40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b390u;
    ctx->hi = GPR_U64(ctx, 0);
label_29b394:
    // 0x29b394: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b394u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b398:
    // 0x29b398: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b398u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b39c:
    // 0x29b39c: 0x0  nop
    ctx->pc = 0x29b39cu;
    // NOP
label_29b3a0:
    // 0x29b3a0: 0x34b55  .word       0x00034B55                   # INVALID     $zero, $v1, 0x4B55 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b3a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x29B3A0 raw=0x00034B55"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b3a4:
    // 0x29b3a4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b3a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B3A4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b3a8:
    // 0x29b3a8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b3a8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b3ac:
    // 0x29b3ac: 0x0  nop
    ctx->pc = 0x29b3acu;
    // NOP
label_29b3b0:
    // 0x29b3b0: 0x34b56  .word       0x00034B56                   # dsrlv       $t1, $v1, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b3b0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) >> (GPR_U32(ctx, 0) & 0x3F));
label_29b3b4:
    // 0x29b3b4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b3b4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B3B4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b3b8:
    // 0x29b3b8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b3b8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b3bc:
    // 0x29b3bc: 0x0  nop
    ctx->pc = 0x29b3bcu;
    // NOP
label_29b3c0:
    // 0x29b3c0: 0x34b57  .word       0x00034B57                   # dsrav       $t1, $v1, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b3c0u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 3) >> (GPR_U32(ctx, 0) & 0x3F));
label_29b3c4:
    // 0x29b3c4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b3c4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b3c8:
    // 0x29b3c8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b3c8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b3cc:
    // 0x29b3cc: 0x0  nop
    ctx->pc = 0x29b3ccu;
    // NOP
label_29b3d0:
    // 0x29b3d0: 0x34b5b  .word       0x00034B5B                   # divu        $t1, $zero, $v1 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b3d0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_29b3d4:
    // 0x29b3d4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b3d4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b3d8:
    // 0x29b3d8: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b3d8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b3dc:
    // 0x29b3dc: 0x0  nop
    ctx->pc = 0x29b3dcu;
    // NOP
label_29b3e0:
    // 0x29b3e0: 0x34b5f  .word       0x00034B5F                   # ddivu       $t1, $zero, $v1 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b3e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x29B3E0 raw=0x00034B5F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b3e4:
    // 0x29b3e4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b3e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B3E4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b3e8:
    // 0x29b3e8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b3e8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b3ec:
    // 0x29b3ec: 0x0  nop
    ctx->pc = 0x29b3ecu;
    // NOP
label_29b3f0:
    // 0x29b3f0: 0x34b60  .word       0x00034B60                   # add         $t1, $zero, $v1 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b3f0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_29b3f4:
    // 0x29b3f4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b3f4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B3F4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b3f8:
    // 0x29b3f8: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b3f8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b3fc:
    // 0x29b3fc: 0x0  nop
    ctx->pc = 0x29b3fcu;
    // NOP
label_29b400:
    // 0x29b400: 0x34b61  .word       0x00034B61                   # addu        $t1, $zero, $v1 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b400u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_29b404:
    // 0x29b404: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b404u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b408:
    // 0x29b408: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b408u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b40c:
    // 0x29b40c: 0x0  nop
    ctx->pc = 0x29b40cu;
    // NOP
label_29b410:
    // 0x29b410: 0x34b65  .word       0x00034B65                   # or          $t1, $zero, $v1 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b410u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | GPR_U64(ctx, 3));
label_29b414:
    // 0x29b414: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b414u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b418:
    // 0x29b418: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b418u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b41c:
    // 0x29b41c: 0x0  nop
    ctx->pc = 0x29b41cu;
    // NOP
label_29b420:
    // 0x29b420: 0x34b69  .word       0x00034B69                   # mtsa        $zero # 00034B40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29b420u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_29b424:
    // 0x29b424: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b424u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B424 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b428:
    // 0x29b428: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b428u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b42c:
    // 0x29b42c: 0x0  nop
    ctx->pc = 0x29b42cu;
    // NOP
label_29b430:
    // 0x29b430: 0x34b6a  .word       0x00034B6A                   # slt         $t1, $zero, $v1 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b430u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_29b434:
    // 0x29b434: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b434u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B434 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29b438:
    // 0x29b438: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x29b438u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_29b43c:
    // 0x29b43c: 0x0  nop
    ctx->pc = 0x29b43cu;
    // NOP
label_29b440:
    // 0x29b440: 0x34b6b  .word       0x00034B6B                   # sltu        $t1, $zero, $v1 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b440u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_29b444:
    // 0x29b444: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b444u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b448:
    // 0x29b448: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b448u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b44c:
    // 0x29b44c: 0x0  nop
    ctx->pc = 0x29b44cu;
    // NOP
label_29b450:
    // 0x29b450: 0x34b6f  .word       0x00034B6F                   # dsubu       $t1, $zero, $v1 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b450u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) - GPR_U64(ctx, 3));
label_29b454:
    // 0x29b454: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29b454u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29b458:
    // 0x29b458: 0x1fe0  .word       0x00001FE0                   # add         $v1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b458u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_29b45c:
    // 0x29b45c: 0x0  nop
    ctx->pc = 0x29b45cu;
    // NOP
label_29b460:
    // 0x29b460: 0x34b73  tltu        $zero, $v1, 301
    ctx->pc = 0x29b460u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29b464:
    // 0x29b464: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29b464u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29B464 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
    ctx->pc = 0x29b468u;
    return;
}

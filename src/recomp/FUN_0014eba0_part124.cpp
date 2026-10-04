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


void FUN_0014eba0_part124(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x18ac90u: goto label_18ac90;
        case 0x18ac94u: goto label_18ac94;
        case 0x18ac98u: goto label_18ac98;
        case 0x18ac9cu: goto label_18ac9c;
        case 0x18aca0u: goto label_18aca0;
        case 0x18aca4u: goto label_18aca4;
        case 0x18aca8u: goto label_18aca8;
        case 0x18acacu: goto label_18acac;
        case 0x18acb0u: goto label_18acb0;
        case 0x18acb4u: goto label_18acb4;
        case 0x18acb8u: goto label_18acb8;
        case 0x18acbcu: goto label_18acbc;
        case 0x18acc0u: goto label_18acc0;
        case 0x18acc4u: goto label_18acc4;
        case 0x18acc8u: goto label_18acc8;
        case 0x18acccu: goto label_18accc;
        case 0x18acd0u: goto label_18acd0;
        case 0x18acd4u: goto label_18acd4;
        case 0x18acd8u: goto label_18acd8;
        case 0x18acdcu: goto label_18acdc;
        case 0x18ace0u: goto label_18ace0;
        case 0x18ace4u: goto label_18ace4;
        case 0x18ace8u: goto label_18ace8;
        case 0x18acecu: goto label_18acec;
        case 0x18acf0u: goto label_18acf0;
        case 0x18acf4u: goto label_18acf4;
        case 0x18acf8u: goto label_18acf8;
        case 0x18acfcu: goto label_18acfc;
        case 0x18ad00u: goto label_18ad00;
        case 0x18ad04u: goto label_18ad04;
        case 0x18ad08u: goto label_18ad08;
        case 0x18ad0cu: goto label_18ad0c;
        case 0x18ad10u: goto label_18ad10;
        case 0x18ad14u: goto label_18ad14;
        case 0x18ad18u: goto label_18ad18;
        case 0x18ad1cu: goto label_18ad1c;
        case 0x18ad20u: goto label_18ad20;
        case 0x18ad24u: goto label_18ad24;
        case 0x18ad28u: goto label_18ad28;
        case 0x18ad2cu: goto label_18ad2c;
        case 0x18ad30u: goto label_18ad30;
        case 0x18ad34u: goto label_18ad34;
        case 0x18ad38u: goto label_18ad38;
        case 0x18ad3cu: goto label_18ad3c;
        case 0x18ad40u: goto label_18ad40;
        case 0x18ad44u: goto label_18ad44;
        case 0x18ad48u: goto label_18ad48;
        case 0x18ad4cu: goto label_18ad4c;
        case 0x18ad50u: goto label_18ad50;
        case 0x18ad54u: goto label_18ad54;
        case 0x18ad58u: goto label_18ad58;
        case 0x18ad5cu: goto label_18ad5c;
        case 0x18ad60u: goto label_18ad60;
        case 0x18ad64u: goto label_18ad64;
        case 0x18ad68u: goto label_18ad68;
        case 0x18ad6cu: goto label_18ad6c;
        case 0x18ad70u: goto label_18ad70;
        case 0x18ad74u: goto label_18ad74;
        case 0x18ad78u: goto label_18ad78;
        case 0x18ad7cu: goto label_18ad7c;
        case 0x18ad80u: goto label_18ad80;
        case 0x18ad84u: goto label_18ad84;
        case 0x18ad88u: goto label_18ad88;
        case 0x18ad8cu: goto label_18ad8c;
        case 0x18ad90u: goto label_18ad90;
        case 0x18ad94u: goto label_18ad94;
        case 0x18ad98u: goto label_18ad98;
        case 0x18ad9cu: goto label_18ad9c;
        case 0x18ada0u: goto label_18ada0;
        case 0x18ada4u: goto label_18ada4;
        case 0x18ada8u: goto label_18ada8;
        case 0x18adacu: goto label_18adac;
        case 0x18adb0u: goto label_18adb0;
        case 0x18adb4u: goto label_18adb4;
        case 0x18adb8u: goto label_18adb8;
        case 0x18adbcu: goto label_18adbc;
        case 0x18adc0u: goto label_18adc0;
        case 0x18adc4u: goto label_18adc4;
        case 0x18adc8u: goto label_18adc8;
        case 0x18adccu: goto label_18adcc;
        case 0x18add0u: goto label_18add0;
        case 0x18add4u: goto label_18add4;
        case 0x18add8u: goto label_18add8;
        case 0x18addcu: goto label_18addc;
        case 0x18ade0u: goto label_18ade0;
        case 0x18ade4u: goto label_18ade4;
        case 0x18ade8u: goto label_18ade8;
        case 0x18adecu: goto label_18adec;
        case 0x18adf0u: goto label_18adf0;
        case 0x18adf4u: goto label_18adf4;
        case 0x18adf8u: goto label_18adf8;
        case 0x18adfcu: goto label_18adfc;
        case 0x18ae00u: goto label_18ae00;
        case 0x18ae04u: goto label_18ae04;
        case 0x18ae08u: goto label_18ae08;
        case 0x18ae0cu: goto label_18ae0c;
        case 0x18ae10u: goto label_18ae10;
        case 0x18ae14u: goto label_18ae14;
        case 0x18ae18u: goto label_18ae18;
        case 0x18ae1cu: goto label_18ae1c;
        case 0x18ae20u: goto label_18ae20;
        case 0x18ae24u: goto label_18ae24;
        case 0x18ae28u: goto label_18ae28;
        case 0x18ae2cu: goto label_18ae2c;
        case 0x18ae30u: goto label_18ae30;
        case 0x18ae34u: goto label_18ae34;
        case 0x18ae38u: goto label_18ae38;
        case 0x18ae3cu: goto label_18ae3c;
        case 0x18ae40u: goto label_18ae40;
        case 0x18ae44u: goto label_18ae44;
        case 0x18ae48u: goto label_18ae48;
        case 0x18ae4cu: goto label_18ae4c;
        case 0x18ae50u: goto label_18ae50;
        case 0x18ae54u: goto label_18ae54;
        case 0x18ae58u: goto label_18ae58;
        case 0x18ae5cu: goto label_18ae5c;
        case 0x18ae60u: goto label_18ae60;
        case 0x18ae64u: goto label_18ae64;
        case 0x18ae68u: goto label_18ae68;
        case 0x18ae6cu: goto label_18ae6c;
        case 0x18ae70u: goto label_18ae70;
        case 0x18ae74u: goto label_18ae74;
        case 0x18ae78u: goto label_18ae78;
        case 0x18ae7cu: goto label_18ae7c;
        case 0x18ae80u: goto label_18ae80;
        case 0x18ae84u: goto label_18ae84;
        case 0x18ae88u: goto label_18ae88;
        case 0x18ae8cu: goto label_18ae8c;
        case 0x18ae90u: goto label_18ae90;
        case 0x18ae94u: goto label_18ae94;
        case 0x18ae98u: goto label_18ae98;
        case 0x18ae9cu: goto label_18ae9c;
        case 0x18aea0u: goto label_18aea0;
        case 0x18aea4u: goto label_18aea4;
        case 0x18aea8u: goto label_18aea8;
        case 0x18aeacu: goto label_18aeac;
        case 0x18aeb0u: goto label_18aeb0;
        case 0x18aeb4u: goto label_18aeb4;
        case 0x18aeb8u: goto label_18aeb8;
        case 0x18aebcu: goto label_18aebc;
        case 0x18aec0u: goto label_18aec0;
        case 0x18aec4u: goto label_18aec4;
        case 0x18aec8u: goto label_18aec8;
        case 0x18aeccu: goto label_18aecc;
        case 0x18aed0u: goto label_18aed0;
        case 0x18aed4u: goto label_18aed4;
        case 0x18aed8u: goto label_18aed8;
        case 0x18aedcu: goto label_18aedc;
        case 0x18aee0u: goto label_18aee0;
        case 0x18aee4u: goto label_18aee4;
        case 0x18aee8u: goto label_18aee8;
        case 0x18aeecu: goto label_18aeec;
        case 0x18aef0u: goto label_18aef0;
        case 0x18aef4u: goto label_18aef4;
        case 0x18aef8u: goto label_18aef8;
        case 0x18aefcu: goto label_18aefc;
        case 0x18af00u: goto label_18af00;
        case 0x18af04u: goto label_18af04;
        case 0x18af08u: goto label_18af08;
        case 0x18af0cu: goto label_18af0c;
        case 0x18af10u: goto label_18af10;
        case 0x18af14u: goto label_18af14;
        case 0x18af18u: goto label_18af18;
        case 0x18af1cu: goto label_18af1c;
        case 0x18af20u: goto label_18af20;
        case 0x18af24u: goto label_18af24;
        case 0x18af28u: goto label_18af28;
        case 0x18af2cu: goto label_18af2c;
        case 0x18af30u: goto label_18af30;
        case 0x18af34u: goto label_18af34;
        case 0x18af38u: goto label_18af38;
        case 0x18af3cu: goto label_18af3c;
        case 0x18af40u: goto label_18af40;
        case 0x18af44u: goto label_18af44;
        case 0x18af48u: goto label_18af48;
        case 0x18af4cu: goto label_18af4c;
        case 0x18af50u: goto label_18af50;
        case 0x18af54u: goto label_18af54;
        case 0x18af58u: goto label_18af58;
        case 0x18af5cu: goto label_18af5c;
        case 0x18af60u: goto label_18af60;
        case 0x18af64u: goto label_18af64;
        case 0x18af68u: goto label_18af68;
        case 0x18af6cu: goto label_18af6c;
        case 0x18af70u: goto label_18af70;
        case 0x18af74u: goto label_18af74;
        case 0x18af78u: goto label_18af78;
        case 0x18af7cu: goto label_18af7c;
        case 0x18af80u: goto label_18af80;
        case 0x18af84u: goto label_18af84;
        case 0x18af88u: goto label_18af88;
        case 0x18af8cu: goto label_18af8c;
        case 0x18af90u: goto label_18af90;
        case 0x18af94u: goto label_18af94;
        case 0x18af98u: goto label_18af98;
        case 0x18af9cu: goto label_18af9c;
        case 0x18afa0u: goto label_18afa0;
        case 0x18afa4u: goto label_18afa4;
        case 0x18afa8u: goto label_18afa8;
        case 0x18afacu: goto label_18afac;
        case 0x18afb0u: goto label_18afb0;
        case 0x18afb4u: goto label_18afb4;
        case 0x18afb8u: goto label_18afb8;
        case 0x18afbcu: goto label_18afbc;
        case 0x18afc0u: goto label_18afc0;
        case 0x18afc4u: goto label_18afc4;
        case 0x18afc8u: goto label_18afc8;
        case 0x18afccu: goto label_18afcc;
        case 0x18afd0u: goto label_18afd0;
        case 0x18afd4u: goto label_18afd4;
        case 0x18afd8u: goto label_18afd8;
        case 0x18afdcu: goto label_18afdc;
        case 0x18afe0u: goto label_18afe0;
        case 0x18afe4u: goto label_18afe4;
        case 0x18afe8u: goto label_18afe8;
        case 0x18afecu: goto label_18afec;
        case 0x18aff0u: goto label_18aff0;
        case 0x18aff4u: goto label_18aff4;
        case 0x18aff8u: goto label_18aff8;
        case 0x18affcu: goto label_18affc;
        case 0x18b000u: goto label_18b000;
        case 0x18b004u: goto label_18b004;
        case 0x18b008u: goto label_18b008;
        case 0x18b00cu: goto label_18b00c;
        case 0x18b010u: goto label_18b010;
        case 0x18b014u: goto label_18b014;
        case 0x18b018u: goto label_18b018;
        case 0x18b01cu: goto label_18b01c;
        case 0x18b020u: goto label_18b020;
        case 0x18b024u: goto label_18b024;
        case 0x18b028u: goto label_18b028;
        case 0x18b02cu: goto label_18b02c;
        case 0x18b030u: goto label_18b030;
        case 0x18b034u: goto label_18b034;
        case 0x18b038u: goto label_18b038;
        case 0x18b03cu: goto label_18b03c;
        case 0x18b040u: goto label_18b040;
        case 0x18b044u: goto label_18b044;
        case 0x18b048u: goto label_18b048;
        case 0x18b04cu: goto label_18b04c;
        case 0x18b050u: goto label_18b050;
        case 0x18b054u: goto label_18b054;
        case 0x18b058u: goto label_18b058;
        case 0x18b05cu: goto label_18b05c;
        case 0x18b060u: goto label_18b060;
        case 0x18b064u: goto label_18b064;
        case 0x18b068u: goto label_18b068;
        case 0x18b06cu: goto label_18b06c;
        case 0x18b070u: goto label_18b070;
        case 0x18b074u: goto label_18b074;
        case 0x18b078u: goto label_18b078;
        case 0x18b07cu: goto label_18b07c;
        case 0x18b080u: goto label_18b080;
        case 0x18b084u: goto label_18b084;
        case 0x18b088u: goto label_18b088;
        case 0x18b08cu: goto label_18b08c;
        case 0x18b090u: goto label_18b090;
        case 0x18b094u: goto label_18b094;
        case 0x18b098u: goto label_18b098;
        case 0x18b09cu: goto label_18b09c;
        case 0x18b0a0u: goto label_18b0a0;
        case 0x18b0a4u: goto label_18b0a4;
        case 0x18b0a8u: goto label_18b0a8;
        case 0x18b0acu: goto label_18b0ac;
        case 0x18b0b0u: goto label_18b0b0;
        case 0x18b0b4u: goto label_18b0b4;
        case 0x18b0b8u: goto label_18b0b8;
        case 0x18b0bcu: goto label_18b0bc;
        case 0x18b0c0u: goto label_18b0c0;
        case 0x18b0c4u: goto label_18b0c4;
        case 0x18b0c8u: goto label_18b0c8;
        case 0x18b0ccu: goto label_18b0cc;
        case 0x18b0d0u: goto label_18b0d0;
        case 0x18b0d4u: goto label_18b0d4;
        case 0x18b0d8u: goto label_18b0d8;
        case 0x18b0dcu: goto label_18b0dc;
        case 0x18b0e0u: goto label_18b0e0;
        case 0x18b0e4u: goto label_18b0e4;
        case 0x18b0e8u: goto label_18b0e8;
        case 0x18b0ecu: goto label_18b0ec;
        case 0x18b0f0u: goto label_18b0f0;
        case 0x18b0f4u: goto label_18b0f4;
        case 0x18b0f8u: goto label_18b0f8;
        case 0x18b0fcu: goto label_18b0fc;
        case 0x18b100u: goto label_18b100;
        case 0x18b104u: goto label_18b104;
        case 0x18b108u: goto label_18b108;
        case 0x18b10cu: goto label_18b10c;
        case 0x18b110u: goto label_18b110;
        case 0x18b114u: goto label_18b114;
        case 0x18b118u: goto label_18b118;
        case 0x18b11cu: goto label_18b11c;
        case 0x18b120u: goto label_18b120;
        case 0x18b124u: goto label_18b124;
        case 0x18b128u: goto label_18b128;
        case 0x18b12cu: goto label_18b12c;
        case 0x18b130u: goto label_18b130;
        case 0x18b134u: goto label_18b134;
        case 0x18b138u: goto label_18b138;
        case 0x18b13cu: goto label_18b13c;
        case 0x18b140u: goto label_18b140;
        case 0x18b144u: goto label_18b144;
        case 0x18b148u: goto label_18b148;
        case 0x18b14cu: goto label_18b14c;
        case 0x18b150u: goto label_18b150;
        case 0x18b154u: goto label_18b154;
        case 0x18b158u: goto label_18b158;
        case 0x18b15cu: goto label_18b15c;
        case 0x18b160u: goto label_18b160;
        case 0x18b164u: goto label_18b164;
        case 0x18b168u: goto label_18b168;
        case 0x18b16cu: goto label_18b16c;
        case 0x18b170u: goto label_18b170;
        case 0x18b174u: goto label_18b174;
        case 0x18b178u: goto label_18b178;
        case 0x18b17cu: goto label_18b17c;
        case 0x18b180u: goto label_18b180;
        case 0x18b184u: goto label_18b184;
        case 0x18b188u: goto label_18b188;
        case 0x18b18cu: goto label_18b18c;
        case 0x18b190u: goto label_18b190;
        case 0x18b194u: goto label_18b194;
        case 0x18b198u: goto label_18b198;
        case 0x18b19cu: goto label_18b19c;
        case 0x18b1a0u: goto label_18b1a0;
        case 0x18b1a4u: goto label_18b1a4;
        case 0x18b1a8u: goto label_18b1a8;
        case 0x18b1acu: goto label_18b1ac;
        case 0x18b1b0u: goto label_18b1b0;
        case 0x18b1b4u: goto label_18b1b4;
        case 0x18b1b8u: goto label_18b1b8;
        case 0x18b1bcu: goto label_18b1bc;
        case 0x18b1c0u: goto label_18b1c0;
        case 0x18b1c4u: goto label_18b1c4;
        case 0x18b1c8u: goto label_18b1c8;
        case 0x18b1ccu: goto label_18b1cc;
        case 0x18b1d0u: goto label_18b1d0;
        case 0x18b1d4u: goto label_18b1d4;
        case 0x18b1d8u: goto label_18b1d8;
        case 0x18b1dcu: goto label_18b1dc;
        case 0x18b1e0u: goto label_18b1e0;
        case 0x18b1e4u: goto label_18b1e4;
        case 0x18b1e8u: goto label_18b1e8;
        case 0x18b1ecu: goto label_18b1ec;
        case 0x18b1f0u: goto label_18b1f0;
        case 0x18b1f4u: goto label_18b1f4;
        case 0x18b1f8u: goto label_18b1f8;
        case 0x18b1fcu: goto label_18b1fc;
        case 0x18b200u: goto label_18b200;
        case 0x18b204u: goto label_18b204;
        case 0x18b208u: goto label_18b208;
        case 0x18b20cu: goto label_18b20c;
        case 0x18b210u: goto label_18b210;
        case 0x18b214u: goto label_18b214;
        case 0x18b218u: goto label_18b218;
        case 0x18b21cu: goto label_18b21c;
        case 0x18b220u: goto label_18b220;
        case 0x18b224u: goto label_18b224;
        case 0x18b228u: goto label_18b228;
        case 0x18b22cu: goto label_18b22c;
        case 0x18b230u: goto label_18b230;
        case 0x18b234u: goto label_18b234;
        case 0x18b238u: goto label_18b238;
        case 0x18b23cu: goto label_18b23c;
        case 0x18b240u: goto label_18b240;
        case 0x18b244u: goto label_18b244;
        case 0x18b248u: goto label_18b248;
        case 0x18b24cu: goto label_18b24c;
        case 0x18b250u: goto label_18b250;
        case 0x18b254u: goto label_18b254;
        case 0x18b258u: goto label_18b258;
        case 0x18b25cu: goto label_18b25c;
        case 0x18b260u: goto label_18b260;
        case 0x18b264u: goto label_18b264;
        case 0x18b268u: goto label_18b268;
        case 0x18b26cu: goto label_18b26c;
        case 0x18b270u: goto label_18b270;
        case 0x18b274u: goto label_18b274;
        case 0x18b278u: goto label_18b278;
        case 0x18b27cu: goto label_18b27c;
        case 0x18b280u: goto label_18b280;
        case 0x18b284u: goto label_18b284;
        case 0x18b288u: goto label_18b288;
        case 0x18b28cu: goto label_18b28c;
        case 0x18b290u: goto label_18b290;
        case 0x18b294u: goto label_18b294;
        case 0x18b298u: goto label_18b298;
        case 0x18b29cu: goto label_18b29c;
        case 0x18b2a0u: goto label_18b2a0;
        case 0x18b2a4u: goto label_18b2a4;
        case 0x18b2a8u: goto label_18b2a8;
        case 0x18b2acu: goto label_18b2ac;
        case 0x18b2b0u: goto label_18b2b0;
        case 0x18b2b4u: goto label_18b2b4;
        case 0x18b2b8u: goto label_18b2b8;
        case 0x18b2bcu: goto label_18b2bc;
        case 0x18b2c0u: goto label_18b2c0;
        case 0x18b2c4u: goto label_18b2c4;
        case 0x18b2c8u: goto label_18b2c8;
        case 0x18b2ccu: goto label_18b2cc;
        case 0x18b2d0u: goto label_18b2d0;
        case 0x18b2d4u: goto label_18b2d4;
        case 0x18b2d8u: goto label_18b2d8;
        case 0x18b2dcu: goto label_18b2dc;
        case 0x18b2e0u: goto label_18b2e0;
        case 0x18b2e4u: goto label_18b2e4;
        case 0x18b2e8u: goto label_18b2e8;
        case 0x18b2ecu: goto label_18b2ec;
        case 0x18b2f0u: goto label_18b2f0;
        case 0x18b2f4u: goto label_18b2f4;
        case 0x18b2f8u: goto label_18b2f8;
        case 0x18b2fcu: goto label_18b2fc;
        case 0x18b300u: goto label_18b300;
        case 0x18b304u: goto label_18b304;
        case 0x18b308u: goto label_18b308;
        case 0x18b30cu: goto label_18b30c;
        case 0x18b310u: goto label_18b310;
        case 0x18b314u: goto label_18b314;
        case 0x18b318u: goto label_18b318;
        case 0x18b31cu: goto label_18b31c;
        case 0x18b320u: goto label_18b320;
        case 0x18b324u: goto label_18b324;
        case 0x18b328u: goto label_18b328;
        case 0x18b32cu: goto label_18b32c;
        case 0x18b330u: goto label_18b330;
        case 0x18b334u: goto label_18b334;
        case 0x18b338u: goto label_18b338;
        case 0x18b33cu: goto label_18b33c;
        case 0x18b340u: goto label_18b340;
        case 0x18b344u: goto label_18b344;
        case 0x18b348u: goto label_18b348;
        case 0x18b34cu: goto label_18b34c;
        case 0x18b350u: goto label_18b350;
        case 0x18b354u: goto label_18b354;
        case 0x18b358u: goto label_18b358;
        case 0x18b35cu: goto label_18b35c;
        case 0x18b360u: goto label_18b360;
        case 0x18b364u: goto label_18b364;
        case 0x18b368u: goto label_18b368;
        case 0x18b36cu: goto label_18b36c;
        case 0x18b370u: goto label_18b370;
        case 0x18b374u: goto label_18b374;
        case 0x18b378u: goto label_18b378;
        case 0x18b37cu: goto label_18b37c;
        case 0x18b380u: goto label_18b380;
        case 0x18b384u: goto label_18b384;
        case 0x18b388u: goto label_18b388;
        case 0x18b38cu: goto label_18b38c;
        case 0x18b390u: goto label_18b390;
        case 0x18b394u: goto label_18b394;
        case 0x18b398u: goto label_18b398;
        case 0x18b39cu: goto label_18b39c;
        case 0x18b3a0u: goto label_18b3a0;
        case 0x18b3a4u: goto label_18b3a4;
        case 0x18b3a8u: goto label_18b3a8;
        case 0x18b3acu: goto label_18b3ac;
        case 0x18b3b0u: goto label_18b3b0;
        case 0x18b3b4u: goto label_18b3b4;
        case 0x18b3b8u: goto label_18b3b8;
        case 0x18b3bcu: goto label_18b3bc;
        case 0x18b3c0u: goto label_18b3c0;
        case 0x18b3c4u: goto label_18b3c4;
        case 0x18b3c8u: goto label_18b3c8;
        case 0x18b3ccu: goto label_18b3cc;
        case 0x18b3d0u: goto label_18b3d0;
        case 0x18b3d4u: goto label_18b3d4;
        case 0x18b3d8u: goto label_18b3d8;
        case 0x18b3dcu: goto label_18b3dc;
        case 0x18b3e0u: goto label_18b3e0;
        case 0x18b3e4u: goto label_18b3e4;
        case 0x18b3e8u: goto label_18b3e8;
        case 0x18b3ecu: goto label_18b3ec;
        case 0x18b3f0u: goto label_18b3f0;
        case 0x18b3f4u: goto label_18b3f4;
        case 0x18b3f8u: goto label_18b3f8;
        case 0x18b3fcu: goto label_18b3fc;
        case 0x18b400u: goto label_18b400;
        case 0x18b404u: goto label_18b404;
        case 0x18b408u: goto label_18b408;
        case 0x18b40cu: goto label_18b40c;
        case 0x18b410u: goto label_18b410;
        case 0x18b414u: goto label_18b414;
        case 0x18b418u: goto label_18b418;
        case 0x18b41cu: goto label_18b41c;
        case 0x18b420u: goto label_18b420;
        case 0x18b424u: goto label_18b424;
        case 0x18b428u: goto label_18b428;
        case 0x18b42cu: goto label_18b42c;
        case 0x18b430u: goto label_18b430;
        case 0x18b434u: goto label_18b434;
        case 0x18b438u: goto label_18b438;
        case 0x18b43cu: goto label_18b43c;
        case 0x18b440u: goto label_18b440;
        case 0x18b444u: goto label_18b444;
        case 0x18b448u: goto label_18b448;
        case 0x18b44cu: goto label_18b44c;
        case 0x18b450u: goto label_18b450;
        case 0x18b454u: goto label_18b454;
        case 0x18b458u: goto label_18b458;
        case 0x18b45cu: goto label_18b45c;
        default: return;
    }

label_18ac90:
    if (ctx->pc == 0x18AC90u) {
        ctx->pc = 0x18AC94u;
        goto label_18ac94;
    }
    ctx->pc = 0x18AC8Cu;
    {
        const bool branch_taken_0x18ac8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18ac8c) {
            ctx->pc = 0x18ACF8u;
            goto label_18acf8;
        }
    }
    ctx->pc = 0x18AC94u;
label_18ac94:
    // 0x18ac94: 0x10000018  b           . + 4 + (0x18 << 2)
label_18ac98:
    if (ctx->pc == 0x18AC98u) {
        ctx->pc = 0x18AC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AC94u;
        // 0x18ac98: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AC9Cu;
        goto label_18ac9c;
    }
    ctx->pc = 0x18AC94u;
    {
        const bool branch_taken_0x18ac94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AC94u;
        // 0x18ac98: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ac94) {
            ctx->pc = 0x18ACF8u;
            goto label_18acf8;
        }
    }
    ctx->pc = 0x18AC9Cu;
label_18ac9c:
    // 0x18ac9c: 0xc062ee0  jal         func_18BB80
label_18aca0:
    if (ctx->pc == 0x18ACA0u) {
        ctx->pc = 0x18ACA4u;
        goto label_18aca4;
    }
    ctx->pc = 0x18AC9Cu;
    SET_GPR_U32(ctx, 31, 0x18ACA4u);
    ctx->pc = 0x18BB80u;
    { ctx->pc = 0x18bb80; return; }
    ctx->pc = 0x18ACA4u;
label_18aca4:
    // 0x18aca4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_18aca8:
    if (ctx->pc == 0x18ACA8u) {
        ctx->pc = 0x18ACACu;
        goto label_18acac;
    }
    ctx->pc = 0x18ACA4u;
    {
        const bool branch_taken_0x18aca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18aca4) {
            ctx->pc = 0x18ACD4u;
            goto label_18acd4;
        }
    }
    ctx->pc = 0x18ACACu;
label_18acac:
    // 0x18acac: 0x3c024599  lui         $v0, 0x4599
    ctx->pc = 0x18acacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17817 << 16));
label_18acb0:
    // 0x18acb0: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x18acb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
label_18acb4:
    // 0x18acb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18acb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18acb8:
    // 0x18acb8: 0x0  nop
    ctx->pc = 0x18acb8u;
    // NOP
label_18acbc:
    // 0x18acbc: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x18acbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18acc0:
    // 0x18acc0: 0x0  nop
    ctx->pc = 0x18acc0u;
    // NOP
label_18acc4:
    // 0x18acc4: 0x4500000c  bc1f        . + 4 + (0xC << 2)
label_18acc8:
    if (ctx->pc == 0x18ACC8u) {
        ctx->pc = 0x18ACCCu;
        goto label_18accc;
    }
    ctx->pc = 0x18ACC4u;
    {
        const bool branch_taken_0x18acc4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18acc4) {
            ctx->pc = 0x18ACF8u;
            goto label_18acf8;
        }
    }
    ctx->pc = 0x18ACCCu;
label_18accc:
    // 0x18accc: 0x1000000a  b           . + 4 + (0xA << 2)
label_18acd0:
    if (ctx->pc == 0x18ACD0u) {
        ctx->pc = 0x18ACD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ACCCu;
        // 0x18acd0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18ACD4u;
        goto label_18acd4;
    }
    ctx->pc = 0x18ACCCu;
    {
        const bool branch_taken_0x18accc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18ACD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ACCCu;
        // 0x18acd0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18accc) {
            ctx->pc = 0x18ACF8u;
            goto label_18acf8;
        }
    }
    ctx->pc = 0x18ACD4u;
label_18acd4:
    // 0x18acd4: 0x3c02473d  lui         $v0, 0x473D
    ctx->pc = 0x18acd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18237 << 16));
label_18acd8:
    // 0x18acd8: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x18acd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
label_18acdc:
    // 0x18acdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18acdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18ace0:
    // 0x18ace0: 0x0  nop
    ctx->pc = 0x18ace0u;
    // NOP
label_18ace4:
    // 0x18ace4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x18ace4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18ace8:
    // 0x18ace8: 0x0  nop
    ctx->pc = 0x18ace8u;
    // NOP
label_18acec:
    // 0x18acec: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_18acf0:
    if (ctx->pc == 0x18ACF0u) {
        ctx->pc = 0x18ACF4u;
        goto label_18acf4;
    }
    ctx->pc = 0x18ACECu;
    {
        const bool branch_taken_0x18acec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18acec) {
            ctx->pc = 0x18ACF8u;
            goto label_18acf8;
        }
    }
    ctx->pc = 0x18ACF4u;
label_18acf4:
    // 0x18acf4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x18acf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18acf8:
    // 0x18acf8: 0x16000017  bnez        $s0, . + 4 + (0x17 << 2)
label_18acfc:
    if (ctx->pc == 0x18ACFCu) {
        ctx->pc = 0x18ACFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ACF8u;
        // 0x18acfc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AD00u;
        goto label_18ad00;
    }
    ctx->pc = 0x18ACF8u;
    {
        const bool branch_taken_0x18acf8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x18ACFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ACF8u;
        // 0x18acfc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18acf8) {
            ctx->pc = 0x18AD58u;
            goto label_18ad58;
        }
    }
    ctx->pc = 0x18AD00u;
label_18ad00:
    // 0x18ad00: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x18ad00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_18ad04:
    // 0x18ad04: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x18ad04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
label_18ad08:
    // 0x18ad08: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x18ad08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_18ad0c:
    // 0x18ad0c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18ad0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_18ad10:
    // 0x18ad10: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_18ad14:
    if (ctx->pc == 0x18AD14u) {
        ctx->pc = 0x18AD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AD10u;
        // 0x18ad14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AD18u;
        goto label_18ad18;
    }
    ctx->pc = 0x18AD10u;
    {
        const bool branch_taken_0x18ad10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AD10u;
        // 0x18ad14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ad10) {
            ctx->pc = 0x18AD54u;
            goto label_18ad54;
        }
    }
    ctx->pc = 0x18AD18u;
label_18ad18:
    // 0x18ad18: 0xc062ee0  jal         func_18BB80
label_18ad1c:
    if (ctx->pc == 0x18AD1Cu) {
        ctx->pc = 0x18AD20u;
        goto label_18ad20;
    }
    ctx->pc = 0x18AD18u;
    SET_GPR_U32(ctx, 31, 0x18AD20u);
    ctx->pc = 0x18BB80u;
    { ctx->pc = 0x18bb80; return; }
    ctx->pc = 0x18AD20u;
label_18ad20:
    // 0x18ad20: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_18ad24:
    if (ctx->pc == 0x18AD24u) {
        ctx->pc = 0x18AD28u;
        goto label_18ad28;
    }
    ctx->pc = 0x18AD20u;
    {
        const bool branch_taken_0x18ad20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ad20) {
            ctx->pc = 0x18AD54u;
            goto label_18ad54;
        }
    }
    ctx->pc = 0x18AD28u;
label_18ad28:
    // 0x18ad28: 0x3c024974  lui         $v0, 0x4974
    ctx->pc = 0x18ad28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18804 << 16));
label_18ad2c:
    // 0x18ad2c: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x18ad2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
label_18ad30:
    // 0x18ad30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ad30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18ad34:
    // 0x18ad34: 0x0  nop
    ctx->pc = 0x18ad34u;
    // NOP
label_18ad38:
    // 0x18ad38: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x18ad38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18ad3c:
    // 0x18ad3c: 0x0  nop
    ctx->pc = 0x18ad3cu;
    // NOP
label_18ad40:
    // 0x18ad40: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_18ad44:
    if (ctx->pc == 0x18AD44u) {
        ctx->pc = 0x18AD48u;
        goto label_18ad48;
    }
    ctx->pc = 0x18AD40u;
    {
        const bool branch_taken_0x18ad40 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18ad40) {
            ctx->pc = 0x18AD54u;
            goto label_18ad54;
        }
    }
    ctx->pc = 0x18AD48u;
label_18ad48:
    // 0x18ad48: 0x8e220194  lw          $v0, 0x194($s1)
    ctx->pc = 0x18ad48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
label_18ad4c:
    // 0x18ad4c: 0x34424010  ori         $v0, $v0, 0x4010
    ctx->pc = 0x18ad4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16400);
label_18ad50:
    // 0x18ad50: 0xae220194  sw          $v0, 0x194($s1)
    ctx->pc = 0x18ad50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 404), GPR_U32(ctx, 2));
label_18ad54:
    // 0x18ad54: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x18ad54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18ad58:
    // 0x18ad58: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x18ad58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_18ad5c:
    // 0x18ad5c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x18ad5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18ad60:
    // 0x18ad60: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x18ad60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_18ad64:
    // 0x18ad64: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18ad64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18ad68:
    // 0x18ad68: 0x3e00008  jr          $ra
label_18ad6c:
    if (ctx->pc == 0x18AD6Cu) {
        ctx->pc = 0x18AD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AD68u;
        // 0x18ad6c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AD70u;
        goto label_18ad70;
    }
    ctx->pc = 0x18AD68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18AD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AD68u;
        // 0x18ad6c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18AD68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18AD70u;
label_18ad70:
    // 0x18ad70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x18ad70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_18ad74:
    // 0x18ad74: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x18ad74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_18ad78:
    // 0x18ad78: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x18ad78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_18ad7c:
    // 0x18ad7c: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x18ad7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_18ad80:
    // 0x18ad80: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x18ad80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_18ad84:
    // 0x18ad84: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18ad84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_18ad88:
    // 0x18ad88: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18ad88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_18ad8c:
    // 0x18ad8c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x18ad8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18ad90:
    // 0x18ad90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18ad90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_18ad94:
    // 0x18ad94: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18ad94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_18ad98:
    // 0x18ad98: 0x9023490c  lbu         $v1, 0x490C($at)
    ctx->pc = 0x18ad98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_18ad9c:
    // 0x18ad9c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_18ada0:
    if (ctx->pc == 0x18ADA0u) {
        ctx->pc = 0x18ADA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AD9Cu;
        // 0x18ada0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18ADA4u;
        goto label_18ada4;
    }
    ctx->pc = 0x18AD9Cu;
    {
        const bool branch_taken_0x18ad9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x18ADA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AD9Cu;
        // 0x18ada0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ad9c) {
            ctx->pc = 0x18ADACu;
            goto label_18adac;
        }
    }
    ctx->pc = 0x18ADA4u;
label_18ada4:
    // 0x18ada4: 0x10000131  b           . + 4 + (0x131 << 2)
label_18ada8:
    if (ctx->pc == 0x18ADA8u) {
        ctx->pc = 0x18ADA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ADA4u;
        // 0x18ada8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18ADACu;
        goto label_18adac;
    }
    ctx->pc = 0x18ADA4u;
    {
        const bool branch_taken_0x18ada4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18ADA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ADA4u;
        // 0x18ada8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ada4) {
            ctx->pc = 0x18B26Cu;
            goto label_18b26c;
        }
    }
    ctx->pc = 0x18ADACu;
label_18adac:
    // 0x18adac: 0x8664003c  lh          $a0, 0x3C($s3)
    ctx->pc = 0x18adacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 60)));
label_18adb0:
    // 0x18adb0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x18adb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_18adb4:
    // 0x18adb4: 0x1482000c  bne         $a0, $v0, . + 4 + (0xC << 2)
label_18adb8:
    if (ctx->pc == 0x18ADB8u) {
        ctx->pc = 0x18ADBCu;
        goto label_18adbc;
    }
    ctx->pc = 0x18ADB4u;
    {
        const bool branch_taken_0x18adb4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x18adb4) {
            ctx->pc = 0x18ADE8u;
            goto label_18ade8;
        }
    }
    ctx->pc = 0x18ADBCu;
label_18adbc:
    // 0x18adbc: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x18adbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18adc0:
    // 0x18adc0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18adc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18adc4:
    // 0x18adc4: 0x0  nop
    ctx->pc = 0x18adc4u;
    // NOP
label_18adc8:
    // 0x18adc8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18adc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18adcc:
    // 0x18adcc: 0x0  nop
    ctx->pc = 0x18adccu;
    // NOP
label_18add0:
    // 0x18add0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_18add4:
    if (ctx->pc == 0x18ADD4u) {
        ctx->pc = 0x18ADD8u;
        goto label_18add8;
    }
    ctx->pc = 0x18ADD0u;
    {
        const bool branch_taken_0x18add0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18add0) {
            ctx->pc = 0x18ADE8u;
            goto label_18ade8;
        }
    }
    ctx->pc = 0x18ADD8u;
label_18add8:
    // 0x18add8: 0x8e620194  lw          $v0, 0x194($s3)
    ctx->pc = 0x18add8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 404)));
label_18addc:
    // 0x18addc: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x18addcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_18ade0:
    // 0x18ade0: 0x1000010c  b           . + 4 + (0x10C << 2)
label_18ade4:
    if (ctx->pc == 0x18ADE4u) {
        ctx->pc = 0x18ADE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ADE0u;
        // 0x18ade4: 0xae620194  sw          $v0, 0x194($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 404), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18ADE8u;
        goto label_18ade8;
    }
    ctx->pc = 0x18ADE0u;
    {
        const bool branch_taken_0x18ade0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18ADE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ADE0u;
        // 0x18ade4: 0xae620194  sw          $v0, 0x194($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 404), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ade0) {
            ctx->pc = 0x18B214u;
            goto label_18b214;
        }
    }
    ctx->pc = 0x18ADE8u;
label_18ade8:
    // 0x18ade8: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x18ade8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_18adec:
    // 0x18adec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18adecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18adf0:
    // 0x18adf0: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x18adf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_18adf4:
    // 0x18adf4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_18adf8:
    if (ctx->pc == 0x18ADF8u) {
        ctx->pc = 0x18ADF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ADF4u;
        // 0x18adf8: 0x3c02a640  lui         $v0, 0xA640 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42560 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18ADFCu;
        goto label_18adfc;
    }
    ctx->pc = 0x18ADF4u;
    {
        const bool branch_taken_0x18adf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18ADF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ADF4u;
        // 0x18adf8: 0x3c02a640  lui         $v0, 0xA640 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42560 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18adf4) {
            ctx->pc = 0x18AE20u;
            goto label_18ae20;
        }
    }
    ctx->pc = 0x18ADFCu;
label_18adfc:
    // 0x18adfc: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x18adfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18ae00:
    // 0x18ae00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18ae00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18ae04:
    // 0x18ae04: 0x0  nop
    ctx->pc = 0x18ae04u;
    // NOP
label_18ae08:
    // 0x18ae08: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18ae08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18ae0c:
    // 0x18ae0c: 0x0  nop
    ctx->pc = 0x18ae0cu;
    // NOP
label_18ae10:
    // 0x18ae10: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_18ae14:
    if (ctx->pc == 0x18AE14u) {
        ctx->pc = 0x18AE18u;
        goto label_18ae18;
    }
    ctx->pc = 0x18AE10u;
    {
        const bool branch_taken_0x18ae10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18ae10) {
            ctx->pc = 0x18AE20u;
            goto label_18ae20;
        }
    }
    ctx->pc = 0x18AE18u;
label_18ae18:
    // 0x18ae18: 0x100000fe  b           . + 4 + (0xFE << 2)
label_18ae1c:
    if (ctx->pc == 0x18AE1Cu) {
        ctx->pc = 0x18AE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AE18u;
        // 0x18ae1c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AE20u;
        goto label_18ae20;
    }
    ctx->pc = 0x18AE18u;
    {
        const bool branch_taken_0x18ae18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AE18u;
        // 0x18ae1c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ae18) {
            ctx->pc = 0x18B214u;
            goto label_18b214;
        }
    }
    ctx->pc = 0x18AE20u;
label_18ae20:
    // 0x18ae20: 0x3442001f  ori         $v0, $v0, 0x1F
    ctx->pc = 0x18ae20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31);
label_18ae24:
    // 0x18ae24: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18ae24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_18ae28:
    // 0x18ae28: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_18ae2c:
    if (ctx->pc == 0x18AE2Cu) {
        ctx->pc = 0x18AE30u;
        goto label_18ae30;
    }
    ctx->pc = 0x18AE28u;
    {
        const bool branch_taken_0x18ae28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ae28) {
            ctx->pc = 0x18AE54u;
            goto label_18ae54;
        }
    }
    ctx->pc = 0x18AE30u;
label_18ae30:
    // 0x18ae30: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x18ae30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_18ae34:
    // 0x18ae34: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
label_18ae38:
    if (ctx->pc == 0x18AE38u) {
        ctx->pc = 0x18AE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AE34u;
        // 0x18ae38: 0x30620800  andi        $v0, $v1, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AE3Cu;
        goto label_18ae3c;
    }
    ctx->pc = 0x18AE34u;
    {
        const bool branch_taken_0x18ae34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x18AE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AE34u;
        // 0x18ae38: 0x30620800  andi        $v0, $v1, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ae34) {
            ctx->pc = 0x18AE58u;
            goto label_18ae58;
        }
    }
    ctx->pc = 0x18AE3Cu;
label_18ae3c:
    // 0x18ae3c: 0x28820096  slti        $v0, $a0, 0x96
    ctx->pc = 0x18ae3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)150) ? 1 : 0);
label_18ae40:
    // 0x18ae40: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_18ae44:
    if (ctx->pc == 0x18AE44u) {
        ctx->pc = 0x18AE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AE40u;
        // 0x18ae44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AE48u;
        goto label_18ae48;
    }
    ctx->pc = 0x18AE40u;
    {
        const bool branch_taken_0x18ae40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18AE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AE40u;
        // 0x18ae44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ae40) {
            ctx->pc = 0x18AE4Cu;
            goto label_18ae4c;
        }
    }
    ctx->pc = 0x18AE48u;
label_18ae48:
    // 0x18ae48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18ae48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18ae4c:
    // 0x18ae4c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_18ae50:
    if (ctx->pc == 0x18AE50u) {
        ctx->pc = 0x18AE54u;
        goto label_18ae54;
    }
    ctx->pc = 0x18AE4Cu;
    {
        const bool branch_taken_0x18ae4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ae4c) {
            ctx->pc = 0x18AE74u;
            goto label_18ae74;
        }
    }
    ctx->pc = 0x18AE54u;
label_18ae54:
    // 0x18ae54: 0x30620800  andi        $v0, $v1, 0x800
    ctx->pc = 0x18ae54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
label_18ae58:
    // 0x18ae58: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_18ae5c:
    if (ctx->pc == 0x18AE5Cu) {
        ctx->pc = 0x18AE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AE58u;
        // 0x18ae5c: 0x24020078  addiu       $v0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AE60u;
        goto label_18ae60;
    }
    ctx->pc = 0x18AE58u;
    {
        const bool branch_taken_0x18ae58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18AE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AE58u;
        // 0x18ae5c: 0x24020078  addiu       $v0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ae58) {
            ctx->pc = 0x18AE74u;
            goto label_18ae74;
        }
    }
    ctx->pc = 0x18AE60u;
label_18ae60:
    // 0x18ae60: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
label_18ae64:
    if (ctx->pc == 0x18AE64u) {
        ctx->pc = 0x18AE68u;
        goto label_18ae68;
    }
    ctx->pc = 0x18AE60u;
    {
        const bool branch_taken_0x18ae60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x18ae60) {
            ctx->pc = 0x18AE74u;
            goto label_18ae74;
        }
    }
    ctx->pc = 0x18AE68u;
label_18ae68:
    // 0x18ae68: 0x24020079  addiu       $v0, $zero, 0x79
    ctx->pc = 0x18ae68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
label_18ae6c:
    // 0x18ae6c: 0x148200e9  bne         $a0, $v0, . + 4 + (0xE9 << 2)
label_18ae70:
    if (ctx->pc == 0x18AE70u) {
        ctx->pc = 0x18AE74u;
        goto label_18ae74;
    }
    ctx->pc = 0x18AE6Cu;
    {
        const bool branch_taken_0x18ae6c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x18ae6c) {
            ctx->pc = 0x18B214u;
            goto label_18b214;
        }
    }
    ctx->pc = 0x18AE74u;
label_18ae74:
    // 0x18ae74: 0xae600194  sw          $zero, 0x194($s3)
    ctx->pc = 0x18ae74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 404), GPR_U32(ctx, 0));
label_18ae78:
    // 0x18ae78: 0xa6600224  sh          $zero, 0x224($s3)
    ctx->pc = 0x18ae78u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 548), (uint16_t)GPR_U32(ctx, 0));
label_18ae7c:
    // 0x18ae7c: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x18ae7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_18ae80:
    // 0x18ae80: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x18ae80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18ae84:
    // 0x18ae84: 0x30820800  andi        $v0, $a0, 0x800
    ctx->pc = 0x18ae84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2048);
label_18ae88:
    // 0x18ae88: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_18ae8c:
    if (ctx->pc == 0x18AE8Cu) {
        ctx->pc = 0x18AE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AE88u;
        // 0x18ae8c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AE90u;
        goto label_18ae90;
    }
    ctx->pc = 0x18AE88u;
    {
        const bool branch_taken_0x18ae88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AE88u;
        // 0x18ae8c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ae88) {
            ctx->pc = 0x18AF1Cu;
            goto label_18af1c;
        }
    }
    ctx->pc = 0x18AE90u;
label_18ae90:
    // 0x18ae90: 0x92620233  lbu         $v0, 0x233($s3)
    ctx->pc = 0x18ae90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 563)));
label_18ae94:
    // 0x18ae94: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_18ae98:
    if (ctx->pc == 0x18AE98u) {
        ctx->pc = 0x18AE9Cu;
        goto label_18ae9c;
    }
    ctx->pc = 0x18AE94u;
    {
        const bool branch_taken_0x18ae94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ae94) {
            ctx->pc = 0x18AEB4u;
            goto label_18aeb4;
        }
    }
    ctx->pc = 0x18AE9Cu;
label_18ae9c:
    // 0x18ae9c: 0x92630232  lbu         $v1, 0x232($s3)
    ctx->pc = 0x18ae9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 562)));
label_18aea0:
    // 0x18aea0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x18aea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_18aea4:
    // 0x18aea4: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_18aea8:
    if (ctx->pc == 0x18AEA8u) {
        ctx->pc = 0x18AEACu;
        goto label_18aeac;
    }
    ctx->pc = 0x18AEA4u;
    {
        const bool branch_taken_0x18aea4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18aea4) {
            ctx->pc = 0x18AEB4u;
            goto label_18aeb4;
        }
    }
    ctx->pc = 0x18AEACu;
label_18aeac:
    // 0x18aeac: 0x1000001b  b           . + 4 + (0x1B << 2)
label_18aeb0:
    if (ctx->pc == 0x18AEB0u) {
        ctx->pc = 0x18AEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AEACu;
        // 0x18aeb0: 0xa260023d  sb          $zero, 0x23D($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 573), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AEB4u;
        goto label_18aeb4;
    }
    ctx->pc = 0x18AEACu;
    {
        const bool branch_taken_0x18aeac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AEACu;
        // 0x18aeb0: 0xa260023d  sb          $zero, 0x23D($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 573), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aeac) {
            ctx->pc = 0x18AF1Cu;
            goto label_18af1c;
        }
    }
    ctx->pc = 0x18AEB4u;
label_18aeb4:
    // 0x18aeb4: 0x92630232  lbu         $v1, 0x232($s3)
    ctx->pc = 0x18aeb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 562)));
label_18aeb8:
    // 0x18aeb8: 0x28610006  slti        $at, $v1, 0x6
    ctx->pc = 0x18aeb8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
label_18aebc:
    // 0x18aebc: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_18aec0:
    if (ctx->pc == 0x18AEC0u) {
        ctx->pc = 0x18AEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AEBCu;
        // 0x18aec0: 0x28610006  slti        $at, $v1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AEC4u;
        goto label_18aec4;
    }
    ctx->pc = 0x18AEBCu;
    {
        const bool branch_taken_0x18aebc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AEBCu;
        // 0x18aec0: 0x28610006  slti        $at, $v1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aebc) {
            ctx->pc = 0x18AEECu;
            goto label_18aeec;
        }
    }
    ctx->pc = 0x18AEC4u;
label_18aec4:
    // 0x18aec4: 0x30820020  andi        $v0, $a0, 0x20
    ctx->pc = 0x18aec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
label_18aec8:
    // 0x18aec8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_18aecc:
    if (ctx->pc == 0x18AECCu) {
        ctx->pc = 0x18AED0u;
        goto label_18aed0;
    }
    ctx->pc = 0x18AEC8u;
    {
        const bool branch_taken_0x18aec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18aec8) {
            ctx->pc = 0x18AEECu;
            goto label_18aeec;
        }
    }
    ctx->pc = 0x18AED0u;
label_18aed0:
    // 0x18aed0: 0x8e620194  lw          $v0, 0x194($s3)
    ctx->pc = 0x18aed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 404)));
label_18aed4:
    // 0x18aed4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x18aed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_18aed8:
    // 0x18aed8: 0xae620194  sw          $v0, 0x194($s3)
    ctx->pc = 0x18aed8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 404), GPR_U32(ctx, 2));
label_18aedc:
    // 0x18aedc: 0x8262023d  lb          $v0, 0x23D($s3)
    ctx->pc = 0x18aedcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 573)));
label_18aee0:
    // 0x18aee0: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x18aee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_18aee4:
    // 0x18aee4: 0x1000000d  b           . + 4 + (0xD << 2)
label_18aee8:
    if (ctx->pc == 0x18AEE8u) {
        ctx->pc = 0x18AEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AEE4u;
        // 0x18aee8: 0xa262023d  sb          $v0, 0x23D($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 573), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AEECu;
        goto label_18aeec;
    }
    ctx->pc = 0x18AEE4u;
    {
        const bool branch_taken_0x18aee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AEE4u;
        // 0x18aee8: 0xa262023d  sb          $v0, 0x23D($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 573), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aee4) {
            ctx->pc = 0x18AF1Cu;
            goto label_18af1c;
        }
    }
    ctx->pc = 0x18AEECu;
label_18aeec:
    // 0x18aeec: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_18aef0:
    if (ctx->pc == 0x18AEF0u) {
        ctx->pc = 0x18AEF4u;
        goto label_18aef4;
    }
    ctx->pc = 0x18AEECu;
    {
        const bool branch_taken_0x18aeec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18aeec) {
            ctx->pc = 0x18AF1Cu;
            goto label_18af1c;
        }
    }
    ctx->pc = 0x18AEF4u;
label_18aef4:
    // 0x18aef4: 0xa260023d  sb          $zero, 0x23D($s3)
    ctx->pc = 0x18aef4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 573), (uint8_t)GPR_U32(ctx, 0));
label_18aef8:
    // 0x18aef8: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x18aef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_18aefc:
    // 0x18aefc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18aefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18af00:
    // 0x18af00: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x18af00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_18af04:
    // 0x18af04: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_18af08:
    if (ctx->pc == 0x18AF08u) {
        ctx->pc = 0x18AF0Cu;
        goto label_18af0c;
    }
    ctx->pc = 0x18AF04u;
    {
        const bool branch_taken_0x18af04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18af04) {
            ctx->pc = 0x18AF1Cu;
            goto label_18af1c;
        }
    }
    ctx->pc = 0x18AF0Cu;
label_18af0c:
    // 0x18af0c: 0x8262023d  lb          $v0, 0x23D($s3)
    ctx->pc = 0x18af0cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 573)));
label_18af10:
    // 0x18af10: 0x304200f7  andi        $v0, $v0, 0xF7
    ctx->pc = 0x18af10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)247);
label_18af14:
    // 0x18af14: 0xa262023d  sb          $v0, 0x23D($s3)
    ctx->pc = 0x18af14u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 573), (uint8_t)GPR_U32(ctx, 2));
label_18af18:
    // 0x18af18: 0xa6600224  sh          $zero, 0x224($s3)
    ctx->pc = 0x18af18u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 548), (uint16_t)GPR_U32(ctx, 0));
label_18af1c:
    // 0x18af1c: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x18af1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_18af20:
    // 0x18af20: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18af20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18af24:
    // 0x18af24: 0x30620800  andi        $v0, $v1, 0x800
    ctx->pc = 0x18af24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
label_18af28:
    // 0x18af28: 0x1040007b  beqz        $v0, . + 4 + (0x7B << 2)
label_18af2c:
    if (ctx->pc == 0x18AF2Cu) {
        ctx->pc = 0x18AF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AF28u;
        // 0x18af2c: 0x30620040  andi        $v0, $v1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AF30u;
        goto label_18af30;
    }
    ctx->pc = 0x18AF28u;
    {
        const bool branch_taken_0x18af28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AF28u;
        // 0x18af2c: 0x30620040  andi        $v0, $v1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18af28) {
            ctx->pc = 0x18B118u;
            goto label_18b118;
        }
    }
    ctx->pc = 0x18AF30u;
label_18af30:
    // 0x18af30: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x18af30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_18af34:
    // 0x18af34: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18af34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_18af38:
    // 0x18af38: 0x10400076  beqz        $v0, . + 4 + (0x76 << 2)
label_18af3c:
    if (ctx->pc == 0x18AF3Cu) {
        ctx->pc = 0x18AF40u;
        goto label_18af40;
    }
    ctx->pc = 0x18AF38u;
    {
        const bool branch_taken_0x18af38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18af38) {
            ctx->pc = 0x18B114u;
            goto label_18b114;
        }
    }
    ctx->pc = 0x18AF40u;
label_18af40:
    // 0x18af40: 0x92620241  lbu         $v0, 0x241($s3)
    ctx->pc = 0x18af40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 577)));
label_18af44:
    // 0x18af44: 0x28410029  slti        $at, $v0, 0x29
    ctx->pc = 0x18af44u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)41) ? 1 : 0);
label_18af48:
    // 0x18af48: 0x102000b0  beqz        $at, . + 4 + (0xB0 << 2)
label_18af4c:
    if (ctx->pc == 0x18AF4Cu) {
        ctx->pc = 0x18AF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AF48u;
        // 0x18af4c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AF50u;
        goto label_18af50;
    }
    ctx->pc = 0x18AF48u;
    {
        const bool branch_taken_0x18af48 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AF48u;
        // 0x18af4c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18af48) {
            ctx->pc = 0x18B20Cu;
            goto label_18b20c;
        }
    }
    ctx->pc = 0x18AF50u;
label_18af50:
    // 0x18af50: 0x92710249  lbu         $s1, 0x249($s3)
    ctx->pc = 0x18af50u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 585)));
label_18af54:
    // 0x18af54: 0x2a220006  slti        $v0, $s1, 0x6
    ctx->pc = 0x18af54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
label_18af58:
    // 0x18af58: 0x144000ab  bnez        $v0, . + 4 + (0xAB << 2)
label_18af5c:
    if (ctx->pc == 0x18AF5Cu) {
        ctx->pc = 0x18AF60u;
        goto label_18af60;
    }
    ctx->pc = 0x18AF58u;
    {
        const bool branch_taken_0x18af58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18af58) {
            ctx->pc = 0x18B208u;
            goto label_18b208;
        }
    }
    ctx->pc = 0x18AF60u;
label_18af60:
    // 0x18af60: 0x8672021c  lh          $s2, 0x21C($s3)
    ctx->pc = 0x18af60u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 540)));
label_18af64:
    // 0x18af64: 0x1a4000a8  blez        $s2, . + 4 + (0xA8 << 2)
label_18af68:
    if (ctx->pc == 0x18AF68u) {
        ctx->pc = 0x18AF6Cu;
        goto label_18af6c;
    }
    ctx->pc = 0x18AF64u;
    {
        const bool branch_taken_0x18af64 = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x18af64) {
            ctx->pc = 0x18B208u;
            goto label_18b208;
        }
    }
    ctx->pc = 0x18AF6Cu;
label_18af6c:
    // 0x18af6c: 0x9662022c  lhu         $v0, 0x22C($s3)
    ctx->pc = 0x18af6cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 556)));
label_18af70:
    // 0x18af70: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x18af70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
label_18af74:
    // 0x18af74: 0x104000a4  beqz        $v0, . + 4 + (0xA4 << 2)
label_18af78:
    if (ctx->pc == 0x18AF78u) {
        ctx->pc = 0x18AF7Cu;
        goto label_18af7c;
    }
    ctx->pc = 0x18AF74u;
    {
        const bool branch_taken_0x18af74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18af74) {
            ctx->pc = 0x18B208u;
            goto label_18b208;
        }
    }
    ctx->pc = 0x18AF7Cu;
label_18af7c:
    // 0x18af7c: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x18af7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18af80:
    // 0x18af80: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18af80u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_18af84:
    // 0x18af84: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x18af84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_18af88:
    // 0x18af88: 0x0  nop
    ctx->pc = 0x18af88u;
    // NOP
label_18af8c:
    // 0x18af8c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_18af90:
    if (ctx->pc == 0x18AF90u) {
        ctx->pc = 0x18AF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AF8Cu;
        // 0x18af90: 0x310c3  sra         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AF94u;
        goto label_18af94;
    }
    ctx->pc = 0x18AF8Cu;
    {
        const bool branch_taken_0x18af8c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x18AF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AF8Cu;
        // 0x18af90: 0x310c3  sra         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18af8c) {
            ctx->pc = 0x18AF9Cu;
            goto label_18af9c;
        }
    }
    ctx->pc = 0x18AF94u;
label_18af94:
    // 0x18af94: 0x24620007  addiu       $v0, $v1, 0x7
    ctx->pc = 0x18af94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
label_18af98:
    // 0x18af98: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x18af98u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_18af9c:
    // 0x18af9c: 0x1440009a  bnez        $v0, . + 4 + (0x9A << 2)
label_18afa0:
    if (ctx->pc == 0x18AFA0u) {
        ctx->pc = 0x18AFA4u;
        goto label_18afa4;
    }
    ctx->pc = 0x18AF9Cu;
    {
        const bool branch_taken_0x18af9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18af9c) {
            ctx->pc = 0x18B208u;
            goto label_18b208;
        }
    }
    ctx->pc = 0x18AFA4u;
label_18afa4:
    // 0x18afa4: 0x92630236  lbu         $v1, 0x236($s3)
    ctx->pc = 0x18afa4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 566)));
label_18afa8:
    // 0x18afa8: 0x2861004a  slti        $at, $v1, 0x4A
    ctx->pc = 0x18afa8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)74) ? 1 : 0);
label_18afac:
    // 0x18afac: 0x10200096  beqz        $at, . + 4 + (0x96 << 2)
label_18afb0:
    if (ctx->pc == 0x18AFB0u) {
        ctx->pc = 0x18AFB4u;
        goto label_18afb4;
    }
    ctx->pc = 0x18AFACu;
    {
        const bool branch_taken_0x18afac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18afac) {
            ctx->pc = 0x18B208u;
            goto label_18b208;
        }
    }
    ctx->pc = 0x18AFB4u;
label_18afb4:
    // 0x18afb4: 0x92620235  lbu         $v0, 0x235($s3)
    ctx->pc = 0x18afb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 565)));
label_18afb8:
    // 0x18afb8: 0x28410009  slti        $at, $v0, 0x9
    ctx->pc = 0x18afb8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
label_18afbc:
    // 0x18afbc: 0x10200092  beqz        $at, . + 4 + (0x92 << 2)
label_18afc0:
    if (ctx->pc == 0x18AFC0u) {
        ctx->pc = 0x18AFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AFBCu;
        // 0x18afc0: 0x306400ff  andi        $a0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AFC4u;
        goto label_18afc4;
    }
    ctx->pc = 0x18AFBCu;
    {
        const bool branch_taken_0x18afbc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AFBCu;
        // 0x18afc0: 0x306400ff  andi        $a0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18afbc) {
            ctx->pc = 0x18B208u;
            goto label_18b208;
        }
    }
    ctx->pc = 0x18AFC4u;
label_18afc4:
    // 0x18afc4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18afc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_18afc8:
    // 0x18afc8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x18afc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_18afcc:
    // 0x18afcc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18afccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_18afd0:
    // 0x18afd0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x18afd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_18afd4:
    // 0x18afd4: 0x8f8384e0  lw          $v1, -0x7B20($gp)
    ctx->pc = 0x18afd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
label_18afd8:
    // 0x18afd8: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x18afd8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_18afdc:
    // 0x18afdc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18afdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_18afe0:
    // 0x18afe0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x18afe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_18afe4:
    // 0x18afe4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18afe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18afe8:
    // 0x18afe8: 0x10600087  beqz        $v1, . + 4 + (0x87 << 2)
label_18afec:
    if (ctx->pc == 0x18AFECu) {
        ctx->pc = 0x18AFF0u;
        goto label_18aff0;
    }
    ctx->pc = 0x18AFE8u;
    {
        const bool branch_taken_0x18afe8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18afe8) {
            ctx->pc = 0x18B208u;
            goto label_18b208;
        }
    }
    ctx->pc = 0x18AFF0u;
label_18aff0:
    // 0x18aff0: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x18aff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_18aff4:
    // 0x18aff4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18aff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18aff8:
    // 0x18aff8: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x18aff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
label_18affc:
    // 0x18affc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_18b000:
    if (ctx->pc == 0x18B000u) {
        ctx->pc = 0x18B004u;
        goto label_18b004;
    }
    ctx->pc = 0x18AFFCu;
    {
        const bool branch_taken_0x18affc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18affc) {
            ctx->pc = 0x18B03Cu;
            goto label_18b03c;
        }
    }
    ctx->pc = 0x18B004u;
label_18b004:
    // 0x18b004: 0x8462003c  lh          $v0, 0x3C($v1)
    ctx->pc = 0x18b004u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 60)));
label_18b008:
    // 0x18b008: 0x28420096  slti        $v0, $v0, 0x96
    ctx->pc = 0x18b008u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)150) ? 1 : 0);
label_18b00c:
    // 0x18b00c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_18b010:
    if (ctx->pc == 0x18B010u) {
        ctx->pc = 0x18B010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B00Cu;
        // 0x18b010: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B014u;
        goto label_18b014;
    }
    ctx->pc = 0x18B00Cu;
    {
        const bool branch_taken_0x18b00c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B00Cu;
        // 0x18b010: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b00c) {
            ctx->pc = 0x18B018u;
            goto label_18b018;
        }
    }
    ctx->pc = 0x18B014u;
label_18b014:
    // 0x18b014: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18b014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18b018:
    // 0x18b018: 0x1040007b  beqz        $v0, . + 4 + (0x7B << 2)
label_18b01c:
    if (ctx->pc == 0x18B01Cu) {
        ctx->pc = 0x18B020u;
        goto label_18b020;
    }
    ctx->pc = 0x18B018u;
    {
        const bool branch_taken_0x18b018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b018) {
            ctx->pc = 0x18B208u;
            goto label_18b208;
        }
    }
    ctx->pc = 0x18B020u;
label_18b020:
    // 0x18b020: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x18b020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_18b024:
    // 0x18b024: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x18b024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
label_18b028:
    // 0x18b028: 0x3442000c  ori         $v0, $v0, 0xC
    ctx->pc = 0x18b028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12);
label_18b02c:
    // 0x18b02c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x18b02cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_18b030:
    // 0x18b030: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18b030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_18b034:
    // 0x18b034: 0x10400074  beqz        $v0, . + 4 + (0x74 << 2)
label_18b038:
    if (ctx->pc == 0x18B038u) {
        ctx->pc = 0x18B03Cu;
        goto label_18b03c;
    }
    ctx->pc = 0x18B034u;
    {
        const bool branch_taken_0x18b034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b034) {
            ctx->pc = 0x18B208u;
            goto label_18b208;
        }
    }
    ctx->pc = 0x18B03Cu;
label_18b03c:
    // 0x18b03c: 0x92740230  lbu         $s4, 0x230($s3)
    ctx->pc = 0x18b03cu;
    SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 560)));
label_18b040:
    // 0x18b040: 0x2a820014  slti        $v0, $s4, 0x14
    ctx->pc = 0x18b040u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)20) ? 1 : 0);
label_18b044:
    // 0x18b044: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_18b048:
    if (ctx->pc == 0x18B048u) {
        ctx->pc = 0x18B048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B044u;
        // 0x18b048: 0x2682ffec  addiu       $v0, $s4, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967276));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B04Cu;
        goto label_18b04c;
    }
    ctx->pc = 0x18B044u;
    {
        const bool branch_taken_0x18b044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B044u;
        // 0x18b048: 0x2682ffec  addiu       $v0, $s4, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b044) {
            ctx->pc = 0x18B074u;
            goto label_18b074;
        }
    }
    ctx->pc = 0x18B04Cu;
label_18b04c:
    // 0x18b04c: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
label_18b050:
    if (ctx->pc == 0x18B050u) {
        ctx->pc = 0x18B050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B04Cu;
        // 0x18b050: 0x30430003  andi        $v1, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B054u;
        goto label_18b054;
    }
    ctx->pc = 0x18B04Cu;
    {
        const bool branch_taken_0x18b04c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x18B050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B04Cu;
        // 0x18b050: 0x30430003  andi        $v1, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b04c) {
            ctx->pc = 0x18B060u;
            goto label_18b060;
        }
    }
    ctx->pc = 0x18B054u;
label_18b054:
    // 0x18b054: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_18b058:
    if (ctx->pc == 0x18B058u) {
        ctx->pc = 0x18B05Cu;
        goto label_18b05c;
    }
    ctx->pc = 0x18B054u;
    {
        const bool branch_taken_0x18b054 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b054) {
            ctx->pc = 0x18B060u;
            goto label_18b060;
        }
    }
    ctx->pc = 0x18B05Cu;
label_18b05c:
    // 0x18b05c: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x18b05cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_18b060:
    // 0x18b060: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x18b060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_18b064:
    // 0x18b064: 0x24425384  addiu       $v0, $v0, 0x5384
    ctx->pc = 0x18b064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21380));
label_18b068:
    // 0x18b068: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18b068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18b06c:
    // 0x18b06c: 0x90540000  lbu         $s4, 0x0($v0)
    ctx->pc = 0x18b06cu;
    SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_18b070:
    // 0x18b070: 0x0  nop
    ctx->pc = 0x18b070u;
    // NOP
label_18b074:
    // 0x18b074: 0xc08f0cc  jal         func_23C330
label_18b078:
    if (ctx->pc == 0x18B078u) {
        ctx->pc = 0x18B07Cu;
        goto label_18b07c;
    }
    ctx->pc = 0x18B074u;
    SET_GPR_U32(ctx, 31, 0x18B07Cu);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x18B07Cu;
label_18b07c:
    // 0x18b07c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18b07cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18b080:
    // 0x18b080: 0x2623fffb  addiu       $v1, $s1, -0x5
    ctx->pc = 0x18b080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967291));
label_18b084:
    // 0x18b084: 0x86660220  lh          $a2, 0x220($s3)
    ctx->pc = 0x18b084u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 544)));
label_18b088:
    // 0x18b088: 0x3c0842c8  lui         $t0, 0x42C8
    ctx->pc = 0x18b088u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17096 << 16));
label_18b08c:
    // 0x18b08c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18b08cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_18b090:
    // 0x18b090: 0x328400ff  andi        $a0, $s4, 0xFF
    ctx->pc = 0x18b090u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
label_18b094:
    // 0x18b094: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x18b094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18b098:
    // 0x18b098: 0x3c074f00  lui         $a3, 0x4F00
    ctx->pc = 0x18b098u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20224 << 16));
label_18b09c:
    // 0x18b09c: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x18b09cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_18b0a0:
    // 0x18b0a0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x18b0a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_18b0a4:
    // 0x18b0a4: 0x521823  subu        $v1, $v0, $s2
    ctx->pc = 0x18b0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_18b0a8:
    // 0x18b0a8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x18b0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_18b0ac:
    // 0x18b0ac: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x18b0acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_18b0b0:
    // 0x18b0b0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18b0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_18b0b4:
    // 0x18b0b4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x18b0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18b0b8:
    // 0x18b0b8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x18b0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_18b0bc:
    // 0x18b0bc: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x18b0bcu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18b0c0:
    // 0x18b0c0: 0xc31818  mult        $v1, $a2, $v1
    ctx->pc = 0x18b0c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_18b0c4:
    // 0x18b0c4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x18b0c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_18b0c8:
    // 0x18b0c8: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x18b0c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_18b0cc:
    // 0x18b0cc: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x18b0ccu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18b0d0:
    // 0x18b0d0: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x18b0d0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_18b0d4:
    // 0x18b0d4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x18b0d4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_18b0d8:
    // 0x18b0d8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18b0d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_18b0dc:
    // 0x18b0dc: 0x1012  mflo        $v0
    ctx->pc = 0x18b0dcu;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_18b0e0:
    // 0x18b0e0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x18b0e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_18b0e4:
    // 0x18b0e4: 0x0  nop
    ctx->pc = 0x18b0e4u;
    // NOP
label_18b0e8:
    // 0x18b0e8: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x18b0e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_18b0ec:
    // 0x18b0ec: 0x10200046  beqz        $at, . + 4 + (0x46 << 2)
label_18b0f0:
    if (ctx->pc == 0x18B0F0u) {
        ctx->pc = 0x18B0F4u;
        goto label_18b0f4;
    }
    ctx->pc = 0x18B0ECu;
    {
        const bool branch_taken_0x18b0ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b0ec) {
            ctx->pc = 0x18B208u;
            goto label_18b208;
        }
    }
    ctx->pc = 0x18B0F4u;
label_18b0f4:
    // 0x18b0f4: 0x86630222  lh          $v1, 0x222($s3)
    ctx->pc = 0x18b0f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 546)));
label_18b0f8:
    // 0x18b0f8: 0x86620252  lh          $v0, 0x252($s3)
    ctx->pc = 0x18b0f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 594)));
label_18b0fc:
    // 0x18b0fc: 0x14620042  bne         $v1, $v0, . + 4 + (0x42 << 2)
label_18b100:
    if (ctx->pc == 0x18B100u) {
        ctx->pc = 0x18B104u;
        goto label_18b104;
    }
    ctx->pc = 0x18B0FCu;
    {
        const bool branch_taken_0x18b0fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18b0fc) {
            ctx->pc = 0x18B208u;
            goto label_18b208;
        }
    }
    ctx->pc = 0x18B104u;
label_18b104:
    // 0x18b104: 0x8e620194  lw          $v0, 0x194($s3)
    ctx->pc = 0x18b104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 404)));
label_18b108:
    // 0x18b108: 0x34421004  ori         $v0, $v0, 0x1004
    ctx->pc = 0x18b108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4100);
label_18b10c:
    // 0x18b10c: 0x1000003e  b           . + 4 + (0x3E << 2)
label_18b110:
    if (ctx->pc == 0x18B110u) {
        ctx->pc = 0x18B110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B10Cu;
        // 0x18b110: 0xae620194  sw          $v0, 0x194($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 404), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B114u;
        goto label_18b114;
    }
    ctx->pc = 0x18B10Cu;
    {
        const bool branch_taken_0x18b10c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B10Cu;
        // 0x18b110: 0xae620194  sw          $v0, 0x194($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 404), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b10c) {
            ctx->pc = 0x18B208u;
            goto label_18b208;
        }
    }
    ctx->pc = 0x18B114u;
label_18b114:
    // 0x18b114: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x18b114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
label_18b118:
    // 0x18b118: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
label_18b11c:
    if (ctx->pc == 0x18B11Cu) {
        ctx->pc = 0x18B120u;
        goto label_18b120;
    }
    ctx->pc = 0x18B118u;
    {
        const bool branch_taken_0x18b118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b118) {
            ctx->pc = 0x18B208u;
            goto label_18b208;
        }
    }
    ctx->pc = 0x18B120u;
label_18b120:
    // 0x18b120: 0x866301aa  lh          $v1, 0x1AA($s3)
    ctx->pc = 0x18b120u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 426)));
label_18b124:
    // 0x18b124: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_18b128:
    if (ctx->pc == 0x18B128u) {
        ctx->pc = 0x18B128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B124u;
        // 0x18b128: 0x310c3  sra         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B12Cu;
        goto label_18b12c;
    }
    ctx->pc = 0x18B124u;
    {
        const bool branch_taken_0x18b124 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x18B128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B124u;
        // 0x18b128: 0x310c3  sra         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b124) {
            ctx->pc = 0x18B134u;
            goto label_18b134;
        }
    }
    ctx->pc = 0x18B12Cu;
label_18b12c:
    // 0x18b12c: 0x24620007  addiu       $v0, $v1, 0x7
    ctx->pc = 0x18b12cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
label_18b130:
    // 0x18b130: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x18b130u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_18b134:
    // 0x18b134: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x18b134u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_18b138:
    // 0x18b138: 0x1020002c  beqz        $at, . + 4 + (0x2C << 2)
label_18b13c:
    if (ctx->pc == 0x18B13Cu) {
        ctx->pc = 0x18B140u;
        goto label_18b140;
    }
    ctx->pc = 0x18B138u;
    {
        const bool branch_taken_0x18b138 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b138) {
            ctx->pc = 0x18B1ECu;
            goto label_18b1ec;
        }
    }
    ctx->pc = 0x18B140u;
label_18b140:
    // 0x18b140: 0x92710230  lbu         $s1, 0x230($s3)
    ctx->pc = 0x18b140u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 560)));
label_18b144:
    // 0x18b144: 0x2a220014  slti        $v0, $s1, 0x14
    ctx->pc = 0x18b144u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)20) ? 1 : 0);
label_18b148:
    // 0x18b148: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_18b14c:
    if (ctx->pc == 0x18B14Cu) {
        ctx->pc = 0x18B14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B148u;
        // 0x18b14c: 0x2622ffec  addiu       $v0, $s1, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967276));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B150u;
        goto label_18b150;
    }
    ctx->pc = 0x18B148u;
    {
        const bool branch_taken_0x18b148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B148u;
        // 0x18b14c: 0x2622ffec  addiu       $v0, $s1, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b148) {
            ctx->pc = 0x18B178u;
            goto label_18b178;
        }
    }
    ctx->pc = 0x18B150u;
label_18b150:
    // 0x18b150: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
label_18b154:
    if (ctx->pc == 0x18B154u) {
        ctx->pc = 0x18B154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B150u;
        // 0x18b154: 0x30430003  andi        $v1, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B158u;
        goto label_18b158;
    }
    ctx->pc = 0x18B150u;
    {
        const bool branch_taken_0x18b150 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x18B154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B150u;
        // 0x18b154: 0x30430003  andi        $v1, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b150) {
            ctx->pc = 0x18B164u;
            goto label_18b164;
        }
    }
    ctx->pc = 0x18B158u;
label_18b158:
    // 0x18b158: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_18b15c:
    if (ctx->pc == 0x18B15Cu) {
        ctx->pc = 0x18B160u;
        goto label_18b160;
    }
    ctx->pc = 0x18B158u;
    {
        const bool branch_taken_0x18b158 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b158) {
            ctx->pc = 0x18B164u;
            goto label_18b164;
        }
    }
    ctx->pc = 0x18B160u;
label_18b160:
    // 0x18b160: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x18b160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_18b164:
    // 0x18b164: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x18b164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_18b168:
    // 0x18b168: 0x24425384  addiu       $v0, $v0, 0x5384
    ctx->pc = 0x18b168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21380));
label_18b16c:
    // 0x18b16c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18b16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18b170:
    // 0x18b170: 0x90510000  lbu         $s1, 0x0($v0)
    ctx->pc = 0x18b170u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_18b174:
    // 0x18b174: 0x0  nop
    ctx->pc = 0x18b174u;
    // NOP
label_18b178:
    // 0x18b178: 0xc08f0cc  jal         func_23C330
label_18b17c:
    if (ctx->pc == 0x18B17Cu) {
        ctx->pc = 0x18B180u;
        goto label_18b180;
    }
    ctx->pc = 0x18B178u;
    SET_GPR_U32(ctx, 31, 0x18B180u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x18B180u;
label_18b180:
    // 0x18b180: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18b180u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18b184:
    // 0x18b184: 0x3c0441a0  lui         $a0, 0x41A0
    ctx->pc = 0x18b184u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16800 << 16));
label_18b188:
    // 0x18b188: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x18b188u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18b18c:
    // 0x18b18c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x18b18cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_18b190:
    // 0x18b190: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x18b190u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_18b194:
    // 0x18b194: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x18b194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_18b198:
    // 0x18b198: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18b198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_18b19c:
    // 0x18b19c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x18b19cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_18b1a0:
    // 0x18b1a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18b1a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18b1a4:
    // 0x18b1a4: 0x0  nop
    ctx->pc = 0x18b1a4u;
    // NOP
label_18b1a8:
    // 0x18b1a8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x18b1a8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_18b1ac:
    // 0x18b1ac: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18b1acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_18b1b0:
    // 0x18b1b0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x18b1b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_18b1b4:
    // 0x18b1b4: 0x0  nop
    ctx->pc = 0x18b1b4u;
    // NOP
label_18b1b8:
    // 0x18b1b8: 0x24640028  addiu       $a0, $v1, 0x28
    ctx->pc = 0x18b1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
label_18b1bc:
    // 0x18b1bc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x18b1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_18b1c0:
    // 0x18b1c0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18b1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_18b1c4:
    // 0x18b1c4: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x18b1c4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_18b1c8:
    // 0x18b1c8: 0x0  nop
    ctx->pc = 0x18b1c8u;
    // NOP
label_18b1cc:
    // 0x18b1cc: 0x0  nop
    ctx->pc = 0x18b1ccu;
    // NOP
label_18b1d0:
    // 0x18b1d0: 0x1012  mflo        $v0
    ctx->pc = 0x18b1d0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_18b1d4:
    // 0x18b1d4: 0x28410100  slti        $at, $v0, 0x100
    ctx->pc = 0x18b1d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)256) ? 1 : 0);
label_18b1d8:
    // 0x18b1d8: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_18b1dc:
    if (ctx->pc == 0x18B1DCu) {
        ctx->pc = 0x18B1E0u;
        goto label_18b1e0;
    }
    ctx->pc = 0x18B1D8u;
    {
        const bool branch_taken_0x18b1d8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x18b1d8) {
            ctx->pc = 0x18B1E4u;
            goto label_18b1e4;
        }
    }
    ctx->pc = 0x18B1E0u;
label_18b1e0:
    // 0x18b1e0: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x18b1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_18b1e4:
    // 0x18b1e4: 0x10000008  b           . + 4 + (0x8 << 2)
label_18b1e8:
    if (ctx->pc == 0x18B1E8u) {
        ctx->pc = 0x18B1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B1E4u;
        // 0x18b1e8: 0xa262023e  sb          $v0, 0x23E($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 574), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B1ECu;
        goto label_18b1ec;
    }
    ctx->pc = 0x18B1E4u;
    {
        const bool branch_taken_0x18b1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B1E4u;
        // 0x18b1e8: 0xa262023e  sb          $v0, 0x23E($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 574), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b1e4) {
            ctx->pc = 0x18B208u;
            goto label_18b208;
        }
    }
    ctx->pc = 0x18B1ECu;
label_18b1ec:
    // 0x18b1ec: 0x9262023e  lbu         $v0, 0x23E($s3)
    ctx->pc = 0x18b1ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 574)));
label_18b1f0:
    // 0x18b1f0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x18b1f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_18b1f4:
    // 0x18b1f4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_18b1f8:
    if (ctx->pc == 0x18B1F8u) {
        ctx->pc = 0x18B1FCu;
        goto label_18b1fc;
    }
    ctx->pc = 0x18B1F4u;
    {
        const bool branch_taken_0x18b1f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18b1f4) {
            ctx->pc = 0x18B208u;
            goto label_18b208;
        }
    }
    ctx->pc = 0x18B1FCu;
label_18b1fc:
    // 0x18b1fc: 0x8e620194  lw          $v0, 0x194($s3)
    ctx->pc = 0x18b1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 404)));
label_18b200:
    // 0x18b200: 0x34420401  ori         $v0, $v0, 0x401
    ctx->pc = 0x18b200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1025);
label_18b204:
    // 0x18b204: 0xae620194  sw          $v0, 0x194($s3)
    ctx->pc = 0x18b204u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 404), GPR_U32(ctx, 2));
label_18b208:
    // 0x18b208: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x18b208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_18b20c:
    // 0x18b20c: 0xc062ca4  jal         func_18B290
label_18b210:
    if (ctx->pc == 0x18B210u) {
        ctx->pc = 0x18B214u;
        goto label_18b214;
    }
    ctx->pc = 0x18B20Cu;
    SET_GPR_U32(ctx, 31, 0x18B214u);
    ctx->pc = 0x18B290u;
    goto label_18b290;
    ctx->pc = 0x18B214u;
label_18b214:
    // 0x18b214: 0x8663003c  lh          $v1, 0x3C($s3)
    ctx->pc = 0x18b214u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 60)));
label_18b218:
    // 0x18b218: 0x2402007b  addiu       $v0, $zero, 0x7B
    ctx->pc = 0x18b218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
label_18b21c:
    // 0x18b21c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_18b220:
    if (ctx->pc == 0x18B220u) {
        ctx->pc = 0x18B220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B21Cu;
        // 0x18b220: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B224u;
        goto label_18b224;
    }
    ctx->pc = 0x18B21Cu;
    {
        const bool branch_taken_0x18b21c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18B220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B21Cu;
        // 0x18b220: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b21c) {
            ctx->pc = 0x18B230u;
            goto label_18b230;
        }
    }
    ctx->pc = 0x18B224u;
label_18b224:
    // 0x18b224: 0x2402007d  addiu       $v0, $zero, 0x7D
    ctx->pc = 0x18b224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
label_18b228:
    // 0x18b228: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
label_18b22c:
    if (ctx->pc == 0x18B22Cu) {
        ctx->pc = 0x18B230u;
        goto label_18b230;
    }
    ctx->pc = 0x18B228u;
    {
        const bool branch_taken_0x18b228 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18b228) {
            ctx->pc = 0x18B25Cu;
            goto label_18b25c;
        }
    }
    ctx->pc = 0x18B230u;
label_18b230:
    // 0x18b230: 0x92620232  lbu         $v0, 0x232($s3)
    ctx->pc = 0x18b230u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 562)));
label_18b234:
    // 0x18b234: 0x28410005  slti        $at, $v0, 0x5
    ctx->pc = 0x18b234u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
label_18b238:
    // 0x18b238: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_18b23c:
    if (ctx->pc == 0x18B23Cu) {
        ctx->pc = 0x18B240u;
        goto label_18b240;
    }
    ctx->pc = 0x18B238u;
    {
        const bool branch_taken_0x18b238 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b238) {
            ctx->pc = 0x18B25Cu;
            goto label_18b25c;
        }
    }
    ctx->pc = 0x18B240u;
label_18b240:
    // 0x18b240: 0x8e620194  lw          $v0, 0x194($s3)
    ctx->pc = 0x18b240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 404)));
label_18b244:
    // 0x18b244: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x18b244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18b248:
    // 0x18b248: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x18b248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_18b24c:
    // 0x18b24c: 0xae620194  sw          $v0, 0x194($s3)
    ctx->pc = 0x18b24cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 404), GPR_U32(ctx, 2));
label_18b250:
    // 0x18b250: 0x8262023d  lb          $v0, 0x23D($s3)
    ctx->pc = 0x18b250u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 573)));
label_18b254:
    // 0x18b254: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x18b254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_18b258:
    // 0x18b258: 0xa262023d  sb          $v0, 0x23D($s3)
    ctx->pc = 0x18b258u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 573), (uint8_t)GPR_U32(ctx, 2));
label_18b25c:
    // 0x18b25c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_18b260:
    if (ctx->pc == 0x18B260u) {
        ctx->pc = 0x18B260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B25Cu;
        // 0x18b260: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B264u;
        goto label_18b264;
    }
    ctx->pc = 0x18B25Cu;
    {
        const bool branch_taken_0x18b25c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B25Cu;
        // 0x18b260: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b25c) {
            ctx->pc = 0x18B26Cu;
            goto label_18b26c;
        }
    }
    ctx->pc = 0x18B264u;
label_18b264:
    // 0x18b264: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x18b264u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18b268:
    // 0x18b268: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x18b268u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18b26c:
    // 0x18b26c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x18b26cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_18b270:
    // 0x18b270: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x18b270u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_18b274:
    // 0x18b274: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18b274u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_18b278:
    // 0x18b278: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18b278u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18b27c:
    // 0x18b27c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18b27cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18b280:
    // 0x18b280: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18b280u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_18b284:
    // 0x18b284: 0x3e00008  jr          $ra
label_18b288:
    if (ctx->pc == 0x18B288u) {
        ctx->pc = 0x18B288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B284u;
        // 0x18b288: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B28Cu;
        goto label_18b28c;
    }
    ctx->pc = 0x18B284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B284u;
        // 0x18b288: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B284u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B28Cu;
label_18b28c:
    // 0x18b28c: 0x0  nop
    ctx->pc = 0x18b28cu;
    // NOP
label_18b290:
    // 0x18b290: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18b290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_18b294:
    // 0x18b294: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x18b294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_18b298:
    // 0x18b298: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x18b298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_18b29c:
    // 0x18b29c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x18b29cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_18b2a0:
    // 0x18b2a0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x18b2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_18b2a4:
    // 0x18b2a4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x18b2a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18b2a8:
    // 0x18b2a8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18b2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_18b2ac:
    // 0x18b2ac: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x18b2acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_18b2b0:
    // 0x18b2b0: 0x8483003c  lh          $v1, 0x3C($a0)
    ctx->pc = 0x18b2b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 60)));
label_18b2b4:
    // 0x18b2b4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_18b2b8:
    if (ctx->pc == 0x18B2B8u) {
        ctx->pc = 0x18B2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B2B4u;
        // 0x18b2b8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B2BCu;
        goto label_18b2bc;
    }
    ctx->pc = 0x18B2B4u;
    {
        const bool branch_taken_0x18b2b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18B2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B2B4u;
        // 0x18b2b8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b2b4) {
            ctx->pc = 0x18B2C8u;
            goto label_18b2c8;
        }
    }
    ctx->pc = 0x18B2BCu;
label_18b2bc:
    // 0x18b2bc: 0x24020079  addiu       $v0, $zero, 0x79
    ctx->pc = 0x18b2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
label_18b2c0:
    // 0x18b2c0: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_18b2c4:
    if (ctx->pc == 0x18B2C4u) {
        ctx->pc = 0x18B2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B2C0u;
        // 0x18b2c4: 0x2402003c  addiu       $v0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B2C8u;
        goto label_18b2c8;
    }
    ctx->pc = 0x18B2C0u;
    {
        const bool branch_taken_0x18b2c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x18B2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B2C0u;
        // 0x18b2c4: 0x2402003c  addiu       $v0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b2c0) {
            ctx->pc = 0x18B2E0u;
            goto label_18b2e0;
        }
    }
    ctx->pc = 0x18B2C8u;
label_18b2c8:
    // 0x18b2c8: 0xa640019e  sh          $zero, 0x19E($s2)
    ctx->pc = 0x18b2c8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 414), (uint16_t)GPR_U32(ctx, 0));
label_18b2cc:
    // 0x18b2cc: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x18b2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_18b2d0:
    // 0x18b2d0: 0xa640019c  sh          $zero, 0x19C($s2)
    ctx->pc = 0x18b2d0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 412), (uint16_t)GPR_U32(ctx, 0));
label_18b2d4:
    // 0x18b2d4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x18b2d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18b2d8:
    // 0x18b2d8: 0x100000e7  b           . + 4 + (0xE7 << 2)
label_18b2dc:
    if (ctx->pc == 0x18B2DCu) {
        ctx->pc = 0x18B2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B2D8u;
        // 0x18b2dc: 0xae420194  sw          $v0, 0x194($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B2E0u;
        goto label_18b2e0;
    }
    ctx->pc = 0x18B2D8u;
    {
        const bool branch_taken_0x18b2d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B2D8u;
        // 0x18b2dc: 0xae420194  sw          $v0, 0x194($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b2d8) {
            ctx->pc = 0x18B678u;
            { ctx->pc = 0x18b678; return; }
        }
    }
    ctx->pc = 0x18B2E0u;
label_18b2e0:
    // 0x18b2e0: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_18b2e4:
    if (ctx->pc == 0x18B2E4u) {
        ctx->pc = 0x18B2E8u;
        goto label_18b2e8;
    }
    ctx->pc = 0x18B2E0u;
    {
        const bool branch_taken_0x18b2e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18b2e0) {
            ctx->pc = 0x18B310u;
            goto label_18b310;
        }
    }
    ctx->pc = 0x18B2E8u;
label_18b2e8:
    // 0x18b2e8: 0xa640019e  sh          $zero, 0x19E($s2)
    ctx->pc = 0x18b2e8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 414), (uint16_t)GPR_U32(ctx, 0));
label_18b2ec:
    // 0x18b2ec: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x18b2ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18b2f0:
    // 0x18b2f0: 0xa640019c  sh          $zero, 0x19C($s2)
    ctx->pc = 0x18b2f0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 412), (uint16_t)GPR_U32(ctx, 0));
label_18b2f4:
    // 0x18b2f4: 0x8e420194  lw          $v0, 0x194($s2)
    ctx->pc = 0x18b2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 404)));
label_18b2f8:
    // 0x18b2f8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x18b2f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_18b2fc:
    // 0x18b2fc: 0xae420194  sw          $v0, 0x194($s2)
    ctx->pc = 0x18b2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 2));
label_18b300:
    // 0x18b300: 0x8242023d  lb          $v0, 0x23D($s2)
    ctx->pc = 0x18b300u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 573)));
label_18b304:
    // 0x18b304: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x18b304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_18b308:
    // 0x18b308: 0x100000db  b           . + 4 + (0xDB << 2)
label_18b30c:
    if (ctx->pc == 0x18B30Cu) {
        ctx->pc = 0x18B30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B308u;
        // 0x18b30c: 0xa242023d  sb          $v0, 0x23D($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 573), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B310u;
        goto label_18b310;
    }
    ctx->pc = 0x18B308u;
    {
        const bool branch_taken_0x18b308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B308u;
        // 0x18b30c: 0xa242023d  sb          $v0, 0x23D($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 573), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b308) {
            ctx->pc = 0x18B678u;
            { ctx->pc = 0x18b678; return; }
        }
    }
    ctx->pc = 0x18B310u;
label_18b310:
    // 0x18b310: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x18b310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_18b314:
    // 0x18b314: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18b314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18b318:
    // 0x18b318: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x18b318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
label_18b31c:
    // 0x18b31c: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
label_18b320:
    if (ctx->pc == 0x18B320u) {
        ctx->pc = 0x18B320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B31Cu;
        // 0x18b320: 0x24020033  addiu       $v0, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B324u;
        goto label_18b324;
    }
    ctx->pc = 0x18B31Cu;
    {
        const bool branch_taken_0x18b31c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B31Cu;
        // 0x18b320: 0x24020033  addiu       $v0, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b31c) {
            ctx->pc = 0x18B48Cu;
            { ctx->pc = 0x18b48c; return; }
        }
    }
    ctx->pc = 0x18B324u;
label_18b324:
    // 0x18b324: 0xc08f0cc  jal         func_23C330
label_18b328:
    if (ctx->pc == 0x18B328u) {
        ctx->pc = 0x18B328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B324u;
        // 0x18b328: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B32Cu;
        goto label_18b32c;
    }
    ctx->pc = 0x18B324u;
    SET_GPR_U32(ctx, 31, 0x18B32Cu);
    ctx->pc = 0x18B328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B324u;
    // 0x18b328: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x18B32Cu;
label_18b32c:
    // 0x18b32c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18b32cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18b330:
    // 0x18b330: 0x3c0643b4  lui         $a2, 0x43B4
    ctx->pc = 0x18b330u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17332 << 16));
label_18b334:
    // 0x18b334: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x18b334u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18b338:
    // 0x18b338: 0x3c054f00  lui         $a1, 0x4F00
    ctx->pc = 0x18b338u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20224 << 16));
label_18b33c:
    // 0x18b33c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x18b33cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_18b340:
    // 0x18b340: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x18b340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_18b344:
    // 0x18b344: 0x34440fdb  ori         $a0, $v0, 0xFDB
    ctx->pc = 0x18b344u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18b348:
    // 0x18b348: 0xae400194  sw          $zero, 0x194($s2)
    ctx->pc = 0x18b348u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 0));
label_18b34c:
    // 0x18b34c: 0x3c034334  lui         $v1, 0x4334
    ctx->pc = 0x18b34cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17204 << 16));
label_18b350:
    // 0x18b350: 0x864201aa  lh          $v0, 0x1AA($s2)
    ctx->pc = 0x18b350u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 426)));
label_18b354:
    // 0x18b354: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x18b354u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_18b358:
    // 0x18b358: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x18b358u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18b35c:
    // 0x18b35c: 0x0  nop
    ctx->pc = 0x18b35cu;
    // NOP
label_18b360:
    // 0x18b360: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x18b360u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_18b364:
    // 0x18b364: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18b364u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_18b368:
    // 0x18b368: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x18b368u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_18b36c:
    // 0x18b36c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x18b36cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18b370:
    // 0x18b370: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18b370u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18b374:
    // 0x18b374: 0x0  nop
    ctx->pc = 0x18b374u;
    // NOP
label_18b378:
    // 0x18b378: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x18b378u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_18b37c:
    // 0x18b37c: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x18b37cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
label_18b380:
    // 0x18b380: 0x0  nop
    ctx->pc = 0x18b380u;
    // NOP
label_18b384:
    // 0x18b384: 0x0  nop
    ctx->pc = 0x18b384u;
    // NOP
label_18b388:
    // 0x18b388: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x18b388u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_18b38c:
    // 0x18b38c: 0x10200037  beqz        $at, . + 4 + (0x37 << 2)
label_18b390:
    if (ctx->pc == 0x18B390u) {
        ctx->pc = 0x18B394u;
        goto label_18b394;
    }
    ctx->pc = 0x18B38Cu;
    {
        const bool branch_taken_0x18b38c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b38c) {
            ctx->pc = 0x18B46Cu;
            { ctx->pc = 0x18b46c; return; }
        }
    }
    ctx->pc = 0x18B394u;
label_18b394:
    // 0x18b394: 0x92420232  lbu         $v0, 0x232($s2)
    ctx->pc = 0x18b394u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 562)));
label_18b398:
    // 0x18b398: 0x28410006  slti        $at, $v0, 0x6
    ctx->pc = 0x18b398u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
label_18b39c:
    // 0x18b39c: 0x1020002f  beqz        $at, . + 4 + (0x2F << 2)
label_18b3a0:
    if (ctx->pc == 0x18B3A0u) {
        ctx->pc = 0x18B3A4u;
        goto label_18b3a4;
    }
    ctx->pc = 0x18B39Cu;
    {
        const bool branch_taken_0x18b39c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b39c) {
            ctx->pc = 0x18B45Cu;
            goto label_18b45c;
        }
    }
    ctx->pc = 0x18B3A4u;
label_18b3a4:
    // 0x18b3a4: 0xc08f0cc  jal         func_23C330
label_18b3a8:
    if (ctx->pc == 0x18B3A8u) {
        ctx->pc = 0x18B3ACu;
        goto label_18b3ac;
    }
    ctx->pc = 0x18B3A4u;
    SET_GPR_U32(ctx, 31, 0x18B3ACu);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x18B3ACu;
label_18b3ac:
    // 0x18b3ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18b3acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18b3b0:
    // 0x18b3b0: 0x92440230  lbu         $a0, 0x230($s2)
    ctx->pc = 0x18b3b0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 560)));
label_18b3b4:
    // 0x18b3b4: 0x3c054f00  lui         $a1, 0x4F00
    ctx->pc = 0x18b3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20224 << 16));
label_18b3b8:
    // 0x18b3b8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18b3b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_18b3bc:
    // 0x18b3bc: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x18b3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_18b3c0:
    // 0x18b3c0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x18b3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_18b3c4:
    // 0x18b3c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18b3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_18b3c8:
    // 0x18b3c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18b3c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18b3cc:
    // 0x18b3cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x18b3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_18b3d0:
    // 0x18b3d0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x18b3d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_18b3d4:
    // 0x18b3d4: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x18b3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_18b3d8:
    // 0x18b3d8: 0x24422b16  addiu       $v0, $v0, 0x2B16
    ctx->pc = 0x18b3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11030));
label_18b3dc:
    // 0x18b3dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18b3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18b3e0:
    // 0x18b3e0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x18b3e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_18b3e4:
    // 0x18b3e4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x18b3e4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18b3e8:
    // 0x18b3e8: 0x0  nop
    ctx->pc = 0x18b3e8u;
    // NOP
label_18b3ec:
    // 0x18b3ec: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x18b3ecu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_18b3f0:
    // 0x18b3f0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18b3f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_18b3f4:
    // 0x18b3f4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x18b3f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_18b3f8:
    // 0x18b3f8: 0x0  nop
    ctx->pc = 0x18b3f8u;
    // NOP
label_18b3fc:
    // 0x18b3fc: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x18b3fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_18b400:
    // 0x18b400: 0x14200016  bnez        $at, . + 4 + (0x16 << 2)
label_18b404:
    if (ctx->pc == 0x18B404u) {
        ctx->pc = 0x18B408u;
        goto label_18b408;
    }
    ctx->pc = 0x18B400u;
    {
        const bool branch_taken_0x18b400 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x18b400) {
            ctx->pc = 0x18B45Cu;
            goto label_18b45c;
        }
    }
    ctx->pc = 0x18B408u;
label_18b408:
    // 0x18b408: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x18b408u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18b40c:
    // 0x18b40c: 0xa242023e  sb          $v0, 0x23E($s2)
    ctx->pc = 0x18b40cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 574), (uint8_t)GPR_U32(ctx, 2));
label_18b410:
    // 0x18b410: 0x4409a000  mfc1        $t1, $f20
    ctx->pc = 0x18b410u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_18b414:
    // 0x18b414: 0x48a90800  qmtc2.ni    $t1, $vf1
    ctx->pc = 0x18b414u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
label_18b418:
    // 0x18b418: 0x4a000138  vcallms     0x20
    ctx->pc = 0x18b418u;
    {     ctx->vu0_tpc = 0x20;     runtime->executeVU0Microprogram(rdram, ctx, 0x20); }
label_18b41c:
    // 0x18b41c: 0x48290801  qmfc2.i     $t1, $vf1
    ctx->pc = 0x18b41cu;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[1]));
label_18b420:
    // 0x18b420: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x18b420u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18b424:
    // 0x18b424: 0x48291000  qmfc2.ni    $t1, $vf2
    ctx->pc = 0x18b424u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[2]));
label_18b428:
    // 0x18b428: 0x44891000  mtc1        $t1, $f2
    ctx->pc = 0x18b428u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_18b42c:
    // 0x18b42c: 0x3c0242fe  lui         $v0, 0x42FE
    ctx->pc = 0x18b42cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17150 << 16));
label_18b430:
    // 0x18b430: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18b430u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18b434:
    // 0x18b434: 0x0  nop
    ctx->pc = 0x18b434u;
    // NOP
label_18b438:
    // 0x18b438: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x18b438u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_18b43c:
    // 0x18b43c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x18b43cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_18b440:
    // 0x18b440: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18b440u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_18b444:
    // 0x18b444: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x18b444u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_18b448:
    // 0x18b448: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18b448u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_18b44c:
    // 0x18b44c: 0xa642019c  sh          $v0, 0x19C($s2)
    ctx->pc = 0x18b44cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 412), (uint16_t)GPR_U32(ctx, 2));
label_18b450:
    // 0x18b450: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x18b450u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_18b454:
    // 0x18b454: 0x10000088  b           . + 4 + (0x88 << 2)
label_18b458:
    if (ctx->pc == 0x18B458u) {
        ctx->pc = 0x18B458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B454u;
        // 0x18b458: 0xa642019e  sh          $v0, 0x19E($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 414), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18B45Cu;
        goto label_18b45c;
    }
    ctx->pc = 0x18B454u;
    {
        const bool branch_taken_0x18b454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B454u;
        // 0x18b458: 0xa642019e  sh          $v0, 0x19E($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 414), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b454) {
            ctx->pc = 0x18B678u;
            { ctx->pc = 0x18b678; return; }
        }
    }
    ctx->pc = 0x18B45Cu;
label_18b45c:
    // 0x18b45c: 0xa640019e  sh          $zero, 0x19E($s2)
    ctx->pc = 0x18b45cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 414), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x18b460u;
    return;
}

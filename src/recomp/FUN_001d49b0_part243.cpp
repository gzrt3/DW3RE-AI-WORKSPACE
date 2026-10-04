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

// Function: FUN_001d49b0
// Address: 0x1d49b0 - 0x254d4c
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_001d49b0_part243(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x24ac50u: goto label_24ac50;
        case 0x24ac54u: goto label_24ac54;
        case 0x24ac58u: goto label_24ac58;
        case 0x24ac5cu: goto label_24ac5c;
        case 0x24ac60u: goto label_24ac60;
        case 0x24ac64u: goto label_24ac64;
        case 0x24ac68u: goto label_24ac68;
        case 0x24ac6cu: goto label_24ac6c;
        case 0x24ac70u: goto label_24ac70;
        case 0x24ac74u: goto label_24ac74;
        case 0x24ac78u: goto label_24ac78;
        case 0x24ac7cu: goto label_24ac7c;
        case 0x24ac80u: goto label_24ac80;
        case 0x24ac84u: goto label_24ac84;
        case 0x24ac88u: goto label_24ac88;
        case 0x24ac8cu: goto label_24ac8c;
        case 0x24ac90u: goto label_24ac90;
        case 0x24ac94u: goto label_24ac94;
        case 0x24ac98u: goto label_24ac98;
        case 0x24ac9cu: goto label_24ac9c;
        case 0x24aca0u: goto label_24aca0;
        case 0x24aca4u: goto label_24aca4;
        case 0x24aca8u: goto label_24aca8;
        case 0x24acacu: goto label_24acac;
        case 0x24acb0u: goto label_24acb0;
        case 0x24acb4u: goto label_24acb4;
        case 0x24acb8u: goto label_24acb8;
        case 0x24acbcu: goto label_24acbc;
        case 0x24acc0u: goto label_24acc0;
        case 0x24acc4u: goto label_24acc4;
        case 0x24acc8u: goto label_24acc8;
        case 0x24acccu: goto label_24accc;
        case 0x24acd0u: goto label_24acd0;
        case 0x24acd4u: goto label_24acd4;
        case 0x24acd8u: goto label_24acd8;
        case 0x24acdcu: goto label_24acdc;
        case 0x24ace0u: goto label_24ace0;
        case 0x24ace4u: goto label_24ace4;
        case 0x24ace8u: goto label_24ace8;
        case 0x24acecu: goto label_24acec;
        case 0x24acf0u: goto label_24acf0;
        case 0x24acf4u: goto label_24acf4;
        case 0x24acf8u: goto label_24acf8;
        case 0x24acfcu: goto label_24acfc;
        case 0x24ad00u: goto label_24ad00;
        case 0x24ad04u: goto label_24ad04;
        case 0x24ad08u: goto label_24ad08;
        case 0x24ad0cu: goto label_24ad0c;
        case 0x24ad10u: goto label_24ad10;
        case 0x24ad14u: goto label_24ad14;
        case 0x24ad18u: goto label_24ad18;
        case 0x24ad1cu: goto label_24ad1c;
        case 0x24ad20u: goto label_24ad20;
        case 0x24ad24u: goto label_24ad24;
        case 0x24ad28u: goto label_24ad28;
        case 0x24ad2cu: goto label_24ad2c;
        case 0x24ad30u: goto label_24ad30;
        case 0x24ad34u: goto label_24ad34;
        case 0x24ad38u: goto label_24ad38;
        case 0x24ad3cu: goto label_24ad3c;
        case 0x24ad40u: goto label_24ad40;
        case 0x24ad44u: goto label_24ad44;
        case 0x24ad48u: goto label_24ad48;
        case 0x24ad4cu: goto label_24ad4c;
        case 0x24ad50u: goto label_24ad50;
        case 0x24ad54u: goto label_24ad54;
        case 0x24ad58u: goto label_24ad58;
        case 0x24ad5cu: goto label_24ad5c;
        case 0x24ad60u: goto label_24ad60;
        case 0x24ad64u: goto label_24ad64;
        case 0x24ad68u: goto label_24ad68;
        case 0x24ad6cu: goto label_24ad6c;
        case 0x24ad70u: goto label_24ad70;
        case 0x24ad74u: goto label_24ad74;
        case 0x24ad78u: goto label_24ad78;
        case 0x24ad7cu: goto label_24ad7c;
        case 0x24ad80u: goto label_24ad80;
        case 0x24ad84u: goto label_24ad84;
        case 0x24ad88u: goto label_24ad88;
        case 0x24ad8cu: goto label_24ad8c;
        case 0x24ad90u: goto label_24ad90;
        case 0x24ad94u: goto label_24ad94;
        case 0x24ad98u: goto label_24ad98;
        case 0x24ad9cu: goto label_24ad9c;
        case 0x24ada0u: goto label_24ada0;
        case 0x24ada4u: goto label_24ada4;
        case 0x24ada8u: goto label_24ada8;
        case 0x24adacu: goto label_24adac;
        case 0x24adb0u: goto label_24adb0;
        case 0x24adb4u: goto label_24adb4;
        case 0x24adb8u: goto label_24adb8;
        case 0x24adbcu: goto label_24adbc;
        case 0x24adc0u: goto label_24adc0;
        case 0x24adc4u: goto label_24adc4;
        case 0x24adc8u: goto label_24adc8;
        case 0x24adccu: goto label_24adcc;
        case 0x24add0u: goto label_24add0;
        case 0x24add4u: goto label_24add4;
        case 0x24add8u: goto label_24add8;
        case 0x24addcu: goto label_24addc;
        case 0x24ade0u: goto label_24ade0;
        case 0x24ade4u: goto label_24ade4;
        case 0x24ade8u: goto label_24ade8;
        case 0x24adecu: goto label_24adec;
        case 0x24adf0u: goto label_24adf0;
        case 0x24adf4u: goto label_24adf4;
        case 0x24adf8u: goto label_24adf8;
        case 0x24adfcu: goto label_24adfc;
        case 0x24ae00u: goto label_24ae00;
        case 0x24ae04u: goto label_24ae04;
        case 0x24ae08u: goto label_24ae08;
        case 0x24ae0cu: goto label_24ae0c;
        case 0x24ae10u: goto label_24ae10;
        case 0x24ae14u: goto label_24ae14;
        case 0x24ae18u: goto label_24ae18;
        case 0x24ae1cu: goto label_24ae1c;
        case 0x24ae20u: goto label_24ae20;
        case 0x24ae24u: goto label_24ae24;
        case 0x24ae28u: goto label_24ae28;
        case 0x24ae2cu: goto label_24ae2c;
        case 0x24ae30u: goto label_24ae30;
        case 0x24ae34u: goto label_24ae34;
        case 0x24ae38u: goto label_24ae38;
        case 0x24ae3cu: goto label_24ae3c;
        case 0x24ae40u: goto label_24ae40;
        case 0x24ae44u: goto label_24ae44;
        case 0x24ae48u: goto label_24ae48;
        case 0x24ae4cu: goto label_24ae4c;
        case 0x24ae50u: goto label_24ae50;
        case 0x24ae54u: goto label_24ae54;
        case 0x24ae58u: goto label_24ae58;
        case 0x24ae5cu: goto label_24ae5c;
        case 0x24ae60u: goto label_24ae60;
        case 0x24ae64u: goto label_24ae64;
        case 0x24ae68u: goto label_24ae68;
        case 0x24ae6cu: goto label_24ae6c;
        case 0x24ae70u: goto label_24ae70;
        case 0x24ae74u: goto label_24ae74;
        case 0x24ae78u: goto label_24ae78;
        case 0x24ae7cu: goto label_24ae7c;
        case 0x24ae80u: goto label_24ae80;
        case 0x24ae84u: goto label_24ae84;
        case 0x24ae88u: goto label_24ae88;
        case 0x24ae8cu: goto label_24ae8c;
        case 0x24ae90u: goto label_24ae90;
        case 0x24ae94u: goto label_24ae94;
        case 0x24ae98u: goto label_24ae98;
        case 0x24ae9cu: goto label_24ae9c;
        case 0x24aea0u: goto label_24aea0;
        case 0x24aea4u: goto label_24aea4;
        case 0x24aea8u: goto label_24aea8;
        case 0x24aeacu: goto label_24aeac;
        case 0x24aeb0u: goto label_24aeb0;
        case 0x24aeb4u: goto label_24aeb4;
        case 0x24aeb8u: goto label_24aeb8;
        case 0x24aebcu: goto label_24aebc;
        case 0x24aec0u: goto label_24aec0;
        case 0x24aec4u: goto label_24aec4;
        case 0x24aec8u: goto label_24aec8;
        case 0x24aeccu: goto label_24aecc;
        case 0x24aed0u: goto label_24aed0;
        case 0x24aed4u: goto label_24aed4;
        case 0x24aed8u: goto label_24aed8;
        case 0x24aedcu: goto label_24aedc;
        case 0x24aee0u: goto label_24aee0;
        case 0x24aee4u: goto label_24aee4;
        case 0x24aee8u: goto label_24aee8;
        case 0x24aeecu: goto label_24aeec;
        case 0x24aef0u: goto label_24aef0;
        case 0x24aef4u: goto label_24aef4;
        case 0x24aef8u: goto label_24aef8;
        case 0x24aefcu: goto label_24aefc;
        case 0x24af00u: goto label_24af00;
        case 0x24af04u: goto label_24af04;
        case 0x24af08u: goto label_24af08;
        case 0x24af0cu: goto label_24af0c;
        case 0x24af10u: goto label_24af10;
        case 0x24af14u: goto label_24af14;
        case 0x24af18u: goto label_24af18;
        case 0x24af1cu: goto label_24af1c;
        case 0x24af20u: goto label_24af20;
        case 0x24af24u: goto label_24af24;
        case 0x24af28u: goto label_24af28;
        case 0x24af2cu: goto label_24af2c;
        case 0x24af30u: goto label_24af30;
        case 0x24af34u: goto label_24af34;
        case 0x24af38u: goto label_24af38;
        case 0x24af3cu: goto label_24af3c;
        case 0x24af40u: goto label_24af40;
        case 0x24af44u: goto label_24af44;
        case 0x24af48u: goto label_24af48;
        case 0x24af4cu: goto label_24af4c;
        case 0x24af50u: goto label_24af50;
        case 0x24af54u: goto label_24af54;
        case 0x24af58u: goto label_24af58;
        case 0x24af5cu: goto label_24af5c;
        case 0x24af60u: goto label_24af60;
        case 0x24af64u: goto label_24af64;
        case 0x24af68u: goto label_24af68;
        case 0x24af6cu: goto label_24af6c;
        case 0x24af70u: goto label_24af70;
        case 0x24af74u: goto label_24af74;
        case 0x24af78u: goto label_24af78;
        case 0x24af7cu: goto label_24af7c;
        case 0x24af80u: goto label_24af80;
        case 0x24af84u: goto label_24af84;
        case 0x24af88u: goto label_24af88;
        case 0x24af8cu: goto label_24af8c;
        case 0x24af90u: goto label_24af90;
        case 0x24af94u: goto label_24af94;
        case 0x24af98u: goto label_24af98;
        case 0x24af9cu: goto label_24af9c;
        case 0x24afa0u: goto label_24afa0;
        case 0x24afa4u: goto label_24afa4;
        case 0x24afa8u: goto label_24afa8;
        case 0x24afacu: goto label_24afac;
        case 0x24afb0u: goto label_24afb0;
        case 0x24afb4u: goto label_24afb4;
        case 0x24afb8u: goto label_24afb8;
        case 0x24afbcu: goto label_24afbc;
        case 0x24afc0u: goto label_24afc0;
        case 0x24afc4u: goto label_24afc4;
        case 0x24afc8u: goto label_24afc8;
        case 0x24afccu: goto label_24afcc;
        case 0x24afd0u: goto label_24afd0;
        case 0x24afd4u: goto label_24afd4;
        case 0x24afd8u: goto label_24afd8;
        case 0x24afdcu: goto label_24afdc;
        case 0x24afe0u: goto label_24afe0;
        case 0x24afe4u: goto label_24afe4;
        case 0x24afe8u: goto label_24afe8;
        case 0x24afecu: goto label_24afec;
        case 0x24aff0u: goto label_24aff0;
        case 0x24aff4u: goto label_24aff4;
        case 0x24aff8u: goto label_24aff8;
        case 0x24affcu: goto label_24affc;
        case 0x24b000u: goto label_24b000;
        case 0x24b004u: goto label_24b004;
        case 0x24b008u: goto label_24b008;
        case 0x24b00cu: goto label_24b00c;
        case 0x24b010u: goto label_24b010;
        case 0x24b014u: goto label_24b014;
        case 0x24b018u: goto label_24b018;
        case 0x24b01cu: goto label_24b01c;
        case 0x24b020u: goto label_24b020;
        case 0x24b024u: goto label_24b024;
        case 0x24b028u: goto label_24b028;
        case 0x24b02cu: goto label_24b02c;
        case 0x24b030u: goto label_24b030;
        case 0x24b034u: goto label_24b034;
        case 0x24b038u: goto label_24b038;
        case 0x24b03cu: goto label_24b03c;
        case 0x24b040u: goto label_24b040;
        case 0x24b044u: goto label_24b044;
        case 0x24b048u: goto label_24b048;
        case 0x24b04cu: goto label_24b04c;
        case 0x24b050u: goto label_24b050;
        case 0x24b054u: goto label_24b054;
        case 0x24b058u: goto label_24b058;
        case 0x24b05cu: goto label_24b05c;
        case 0x24b060u: goto label_24b060;
        case 0x24b064u: goto label_24b064;
        case 0x24b068u: goto label_24b068;
        case 0x24b06cu: goto label_24b06c;
        case 0x24b070u: goto label_24b070;
        case 0x24b074u: goto label_24b074;
        case 0x24b078u: goto label_24b078;
        case 0x24b07cu: goto label_24b07c;
        case 0x24b080u: goto label_24b080;
        case 0x24b084u: goto label_24b084;
        case 0x24b088u: goto label_24b088;
        case 0x24b08cu: goto label_24b08c;
        case 0x24b090u: goto label_24b090;
        case 0x24b094u: goto label_24b094;
        case 0x24b098u: goto label_24b098;
        case 0x24b09cu: goto label_24b09c;
        case 0x24b0a0u: goto label_24b0a0;
        case 0x24b0a4u: goto label_24b0a4;
        case 0x24b0a8u: goto label_24b0a8;
        case 0x24b0acu: goto label_24b0ac;
        case 0x24b0b0u: goto label_24b0b0;
        case 0x24b0b4u: goto label_24b0b4;
        case 0x24b0b8u: goto label_24b0b8;
        case 0x24b0bcu: goto label_24b0bc;
        case 0x24b0c0u: goto label_24b0c0;
        case 0x24b0c4u: goto label_24b0c4;
        case 0x24b0c8u: goto label_24b0c8;
        case 0x24b0ccu: goto label_24b0cc;
        case 0x24b0d0u: goto label_24b0d0;
        case 0x24b0d4u: goto label_24b0d4;
        case 0x24b0d8u: goto label_24b0d8;
        case 0x24b0dcu: goto label_24b0dc;
        case 0x24b0e0u: goto label_24b0e0;
        case 0x24b0e4u: goto label_24b0e4;
        case 0x24b0e8u: goto label_24b0e8;
        case 0x24b0ecu: goto label_24b0ec;
        case 0x24b0f0u: goto label_24b0f0;
        case 0x24b0f4u: goto label_24b0f4;
        case 0x24b0f8u: goto label_24b0f8;
        case 0x24b0fcu: goto label_24b0fc;
        case 0x24b100u: goto label_24b100;
        case 0x24b104u: goto label_24b104;
        case 0x24b108u: goto label_24b108;
        case 0x24b10cu: goto label_24b10c;
        case 0x24b110u: goto label_24b110;
        case 0x24b114u: goto label_24b114;
        case 0x24b118u: goto label_24b118;
        case 0x24b11cu: goto label_24b11c;
        case 0x24b120u: goto label_24b120;
        case 0x24b124u: goto label_24b124;
        case 0x24b128u: goto label_24b128;
        case 0x24b12cu: goto label_24b12c;
        case 0x24b130u: goto label_24b130;
        case 0x24b134u: goto label_24b134;
        case 0x24b138u: goto label_24b138;
        case 0x24b13cu: goto label_24b13c;
        case 0x24b140u: goto label_24b140;
        case 0x24b144u: goto label_24b144;
        case 0x24b148u: goto label_24b148;
        case 0x24b14cu: goto label_24b14c;
        case 0x24b150u: goto label_24b150;
        case 0x24b154u: goto label_24b154;
        case 0x24b158u: goto label_24b158;
        case 0x24b15cu: goto label_24b15c;
        case 0x24b160u: goto label_24b160;
        case 0x24b164u: goto label_24b164;
        case 0x24b168u: goto label_24b168;
        case 0x24b16cu: goto label_24b16c;
        case 0x24b170u: goto label_24b170;
        case 0x24b174u: goto label_24b174;
        case 0x24b178u: goto label_24b178;
        case 0x24b17cu: goto label_24b17c;
        case 0x24b180u: goto label_24b180;
        case 0x24b184u: goto label_24b184;
        case 0x24b188u: goto label_24b188;
        case 0x24b18cu: goto label_24b18c;
        case 0x24b190u: goto label_24b190;
        case 0x24b194u: goto label_24b194;
        case 0x24b198u: goto label_24b198;
        case 0x24b19cu: goto label_24b19c;
        case 0x24b1a0u: goto label_24b1a0;
        case 0x24b1a4u: goto label_24b1a4;
        case 0x24b1a8u: goto label_24b1a8;
        case 0x24b1acu: goto label_24b1ac;
        case 0x24b1b0u: goto label_24b1b0;
        case 0x24b1b4u: goto label_24b1b4;
        case 0x24b1b8u: goto label_24b1b8;
        case 0x24b1bcu: goto label_24b1bc;
        case 0x24b1c0u: goto label_24b1c0;
        case 0x24b1c4u: goto label_24b1c4;
        case 0x24b1c8u: goto label_24b1c8;
        case 0x24b1ccu: goto label_24b1cc;
        case 0x24b1d0u: goto label_24b1d0;
        case 0x24b1d4u: goto label_24b1d4;
        case 0x24b1d8u: goto label_24b1d8;
        case 0x24b1dcu: goto label_24b1dc;
        case 0x24b1e0u: goto label_24b1e0;
        case 0x24b1e4u: goto label_24b1e4;
        case 0x24b1e8u: goto label_24b1e8;
        case 0x24b1ecu: goto label_24b1ec;
        case 0x24b1f0u: goto label_24b1f0;
        case 0x24b1f4u: goto label_24b1f4;
        case 0x24b1f8u: goto label_24b1f8;
        case 0x24b1fcu: goto label_24b1fc;
        case 0x24b200u: goto label_24b200;
        case 0x24b204u: goto label_24b204;
        case 0x24b208u: goto label_24b208;
        case 0x24b20cu: goto label_24b20c;
        case 0x24b210u: goto label_24b210;
        case 0x24b214u: goto label_24b214;
        case 0x24b218u: goto label_24b218;
        case 0x24b21cu: goto label_24b21c;
        case 0x24b220u: goto label_24b220;
        case 0x24b224u: goto label_24b224;
        case 0x24b228u: goto label_24b228;
        case 0x24b22cu: goto label_24b22c;
        case 0x24b230u: goto label_24b230;
        case 0x24b234u: goto label_24b234;
        case 0x24b238u: goto label_24b238;
        case 0x24b23cu: goto label_24b23c;
        case 0x24b240u: goto label_24b240;
        case 0x24b244u: goto label_24b244;
        case 0x24b248u: goto label_24b248;
        case 0x24b24cu: goto label_24b24c;
        case 0x24b250u: goto label_24b250;
        case 0x24b254u: goto label_24b254;
        case 0x24b258u: goto label_24b258;
        case 0x24b25cu: goto label_24b25c;
        case 0x24b260u: goto label_24b260;
        case 0x24b264u: goto label_24b264;
        case 0x24b268u: goto label_24b268;
        case 0x24b26cu: goto label_24b26c;
        case 0x24b270u: goto label_24b270;
        case 0x24b274u: goto label_24b274;
        case 0x24b278u: goto label_24b278;
        case 0x24b27cu: goto label_24b27c;
        case 0x24b280u: goto label_24b280;
        case 0x24b284u: goto label_24b284;
        case 0x24b288u: goto label_24b288;
        case 0x24b28cu: goto label_24b28c;
        case 0x24b290u: goto label_24b290;
        case 0x24b294u: goto label_24b294;
        case 0x24b298u: goto label_24b298;
        case 0x24b29cu: goto label_24b29c;
        case 0x24b2a0u: goto label_24b2a0;
        case 0x24b2a4u: goto label_24b2a4;
        case 0x24b2a8u: goto label_24b2a8;
        case 0x24b2acu: goto label_24b2ac;
        case 0x24b2b0u: goto label_24b2b0;
        case 0x24b2b4u: goto label_24b2b4;
        case 0x24b2b8u: goto label_24b2b8;
        case 0x24b2bcu: goto label_24b2bc;
        case 0x24b2c0u: goto label_24b2c0;
        case 0x24b2c4u: goto label_24b2c4;
        case 0x24b2c8u: goto label_24b2c8;
        case 0x24b2ccu: goto label_24b2cc;
        case 0x24b2d0u: goto label_24b2d0;
        case 0x24b2d4u: goto label_24b2d4;
        case 0x24b2d8u: goto label_24b2d8;
        case 0x24b2dcu: goto label_24b2dc;
        case 0x24b2e0u: goto label_24b2e0;
        case 0x24b2e4u: goto label_24b2e4;
        case 0x24b2e8u: goto label_24b2e8;
        case 0x24b2ecu: goto label_24b2ec;
        case 0x24b2f0u: goto label_24b2f0;
        case 0x24b2f4u: goto label_24b2f4;
        case 0x24b2f8u: goto label_24b2f8;
        case 0x24b2fcu: goto label_24b2fc;
        case 0x24b300u: goto label_24b300;
        case 0x24b304u: goto label_24b304;
        case 0x24b308u: goto label_24b308;
        case 0x24b30cu: goto label_24b30c;
        case 0x24b310u: goto label_24b310;
        case 0x24b314u: goto label_24b314;
        case 0x24b318u: goto label_24b318;
        case 0x24b31cu: goto label_24b31c;
        case 0x24b320u: goto label_24b320;
        case 0x24b324u: goto label_24b324;
        case 0x24b328u: goto label_24b328;
        case 0x24b32cu: goto label_24b32c;
        case 0x24b330u: goto label_24b330;
        case 0x24b334u: goto label_24b334;
        case 0x24b338u: goto label_24b338;
        case 0x24b33cu: goto label_24b33c;
        case 0x24b340u: goto label_24b340;
        case 0x24b344u: goto label_24b344;
        case 0x24b348u: goto label_24b348;
        case 0x24b34cu: goto label_24b34c;
        case 0x24b350u: goto label_24b350;
        case 0x24b354u: goto label_24b354;
        case 0x24b358u: goto label_24b358;
        case 0x24b35cu: goto label_24b35c;
        case 0x24b360u: goto label_24b360;
        case 0x24b364u: goto label_24b364;
        case 0x24b368u: goto label_24b368;
        case 0x24b36cu: goto label_24b36c;
        case 0x24b370u: goto label_24b370;
        case 0x24b374u: goto label_24b374;
        case 0x24b378u: goto label_24b378;
        case 0x24b37cu: goto label_24b37c;
        case 0x24b380u: goto label_24b380;
        case 0x24b384u: goto label_24b384;
        case 0x24b388u: goto label_24b388;
        case 0x24b38cu: goto label_24b38c;
        case 0x24b390u: goto label_24b390;
        case 0x24b394u: goto label_24b394;
        case 0x24b398u: goto label_24b398;
        case 0x24b39cu: goto label_24b39c;
        case 0x24b3a0u: goto label_24b3a0;
        case 0x24b3a4u: goto label_24b3a4;
        case 0x24b3a8u: goto label_24b3a8;
        case 0x24b3acu: goto label_24b3ac;
        case 0x24b3b0u: goto label_24b3b0;
        case 0x24b3b4u: goto label_24b3b4;
        case 0x24b3b8u: goto label_24b3b8;
        case 0x24b3bcu: goto label_24b3bc;
        case 0x24b3c0u: goto label_24b3c0;
        case 0x24b3c4u: goto label_24b3c4;
        case 0x24b3c8u: goto label_24b3c8;
        case 0x24b3ccu: goto label_24b3cc;
        case 0x24b3d0u: goto label_24b3d0;
        case 0x24b3d4u: goto label_24b3d4;
        case 0x24b3d8u: goto label_24b3d8;
        case 0x24b3dcu: goto label_24b3dc;
        case 0x24b3e0u: goto label_24b3e0;
        case 0x24b3e4u: goto label_24b3e4;
        case 0x24b3e8u: goto label_24b3e8;
        case 0x24b3ecu: goto label_24b3ec;
        case 0x24b3f0u: goto label_24b3f0;
        case 0x24b3f4u: goto label_24b3f4;
        case 0x24b3f8u: goto label_24b3f8;
        case 0x24b3fcu: goto label_24b3fc;
        case 0x24b400u: goto label_24b400;
        case 0x24b404u: goto label_24b404;
        case 0x24b408u: goto label_24b408;
        case 0x24b40cu: goto label_24b40c;
        case 0x24b410u: goto label_24b410;
        case 0x24b414u: goto label_24b414;
        case 0x24b418u: goto label_24b418;
        case 0x24b41cu: goto label_24b41c;
        default: return;
    }

label_24ac50:
    // 0x24ac50: 0x0  nop
    ctx->pc = 0x24ac50u;
    // NOP
label_24ac54:
    // 0x24ac54: 0x0  nop
    ctx->pc = 0x24ac54u;
    // NOP
label_24ac58:
    // 0x24ac58: 0x0  nop
    ctx->pc = 0x24ac58u;
    // NOP
label_24ac5c:
    // 0x24ac5c: 0x0  nop
    ctx->pc = 0x24ac5cu;
    // NOP
label_24ac60:
    // 0x24ac60: 0x0  nop
    ctx->pc = 0x24ac60u;
    // NOP
label_24ac64:
    // 0x24ac64: 0x0  nop
    ctx->pc = 0x24ac64u;
    // NOP
label_24ac68:
    // 0x24ac68: 0x0  nop
    ctx->pc = 0x24ac68u;
    // NOP
label_24ac6c:
    // 0x24ac6c: 0x0  nop
    ctx->pc = 0x24ac6cu;
    // NOP
label_24ac70:
    // 0x24ac70: 0x0  nop
    ctx->pc = 0x24ac70u;
    // NOP
label_24ac74:
    // 0x24ac74: 0x0  nop
    ctx->pc = 0x24ac74u;
    // NOP
label_24ac78:
    // 0x24ac78: 0x0  nop
    ctx->pc = 0x24ac78u;
    // NOP
label_24ac7c:
    // 0x24ac7c: 0x0  nop
    ctx->pc = 0x24ac7cu;
    // NOP
label_24ac80:
    // 0x24ac80: 0x278  dsll        $zero, $zero, 9
    ctx->pc = 0x24ac80u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 9);
label_24ac84:
    // 0x24ac84: 0x28b  .word       0x0000028B                   # movn        $zero, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ac84u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_24ac88:
    // 0x24ac88: 0x2a1  .word       0x000002A1                   # addu        $zero, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ac88u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_24ac8c:
    // 0x24ac8c: 0x2b4  teq         $zero, $zero, 10
    ctx->pc = 0x24ac8cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_24ac90:
    // 0x24ac90: 0x2c7  .word       0x000002C7                   # srav        $zero, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ac90u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_24ac94:
    // 0x24ac94: 0x2dd  .word       0x000002DD                   # dmultu      $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ac94u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x24AC94 raw=0x000002DD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ac98:
    // 0x24ac98: 0x2f3  tltu        $zero, $zero, 11
    ctx->pc = 0x24ac98u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_24ac9c:
    // 0x24ac9c: 0x305  .word       0x00000305                   # INVALID     $zero, $zero, 0x305 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ac9cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x24AC9C raw=0x00000305"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24aca0:
    // 0x24aca0: 0x31b  .word       0x0000031B                   # divu        $zero, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24aca0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_24aca4:
    // 0x24aca4: 0x333  tltu        $zero, $zero, 12
    ctx->pc = 0x24aca4u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_24aca8:
    // 0x24aca8: 0x344  .word       0x00000344                   # sllv        $zero, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24aca8u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_24acac:
    // 0x24acac: 0x35a  .word       0x0000035A                   # div         $zero, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24acacu;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_24acb0:
    // 0x24acb0: 0x36c  .word       0x0000036C                   # dadd        $zero, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24acb0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_24acb4:
    // 0x24acb4: 0x382  srl         $zero, $zero, 14
    ctx->pc = 0x24acb4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 14));
label_24acb8:
    // 0x24acb8: 0x399  .word       0x00000399                   # multu       $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24acb8u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_24acbc:
    // 0x24acbc: 0x3b1  tgeu        $zero, $zero, 14
    ctx->pc = 0x24acbcu;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_24acc0:
    // 0x24acc0: 0x3c4  .word       0x000003C4                   # sllv        $zero, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24acc0u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_24acc4:
    // 0x24acc4: 0x3d9  .word       0x000003D9                   # multu       $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24acc4u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_24acc8:
    // 0x24acc8: 0x3eb  .word       0x000003EB                   # sltu        $zero, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24acc8u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_24accc:
    // 0x24accc: 0x3fe  dsrl32      $zero, $zero, 15
    ctx->pc = 0x24acccu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 15));
label_24acd0:
    // 0x24acd0: 0x410  .word       0x00000410                   # mfhi        $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24acd0u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_24acd4:
    // 0x24acd4: 0x422  .word       0x00000422                   # neg         $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24acd4u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_24acd8:
    // 0x24acd8: 0x438  dsll        $zero, $zero, 16
    ctx->pc = 0x24acd8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 16);
label_24acdc:
    // 0x24acdc: 0x0  nop
    ctx->pc = 0x24acdcu;
    // NOP
label_24ace0:
    // 0x24ace0: 0x27a  dsrl        $zero, $zero, 9
    ctx->pc = 0x24ace0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> 9);
label_24ace4:
    // 0x24ace4: 0x28d  break       0, 10
    ctx->pc = 0x24ace4u;
    runtime->handleBreak(rdram, ctx);
label_24ace8:
    // 0x24ace8: 0x2a3  .word       0x000002A3                   # negu        $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ace8u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_24acec:
    // 0x24acec: 0x2b6  tne         $zero, $zero, 10
    ctx->pc = 0x24acecu;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_24acf0:
    // 0x24acf0: 0x2c9  .word       0x000002C9                   # jalr        $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
label_24acf4:
    if (ctx->pc == 0x24ACF4u) {
        ctx->pc = 0x24ACF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ACF0u;
        // 0x24acf4: 0x2df  .word       0x000002DF                   # ddivu       $zero, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x24ACF4 raw=0x000002DF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x24ACF8u;
        goto label_24acf8;
    }
    ctx->pc = 0x24ACF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x24ACF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ACF0u;
        // 0x24acf4: 0x2df  .word       0x000002DF                   # ddivu       $zero, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x24ACF4 raw=0x000002DF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24ACF0u, 0x24ACF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24ACF8u;
label_24acf8:
    // 0x24acf8: 0x2f5  .word       0x000002F5                   # INVALID     $zero, $zero, 0x2F5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24acf8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x24ACF8 raw=0x000002F5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24acfc:
    // 0x24acfc: 0x307  .word       0x00000307                   # srav        $zero, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24acfcu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_24ad00:
    // 0x24ad00: 0x31d  .word       0x0000031D                   # dmultu      $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ad00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x24AD00 raw=0x0000031D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ad04:
    // 0x24ad04: 0x335  .word       0x00000335                   # INVALID     $zero, $zero, 0x335 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ad04u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x24AD04 raw=0x00000335"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ad08:
    // 0x24ad08: 0x346  .word       0x00000346                   # srlv        $zero, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ad08u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_24ad0c:
    // 0x24ad0c: 0x35c  .word       0x0000035C                   # dmult       $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ad0cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x24AD0C raw=0x0000035C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ad10:
    // 0x24ad10: 0x36e  .word       0x0000036E                   # dsub        $zero, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ad10u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_24ad14:
    // 0x24ad14: 0x384  .word       0x00000384                   # sllv        $zero, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ad14u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_24ad18:
    // 0x24ad18: 0x39b  .word       0x0000039B                   # divu        $zero, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ad18u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_24ad1c:
    // 0x24ad1c: 0x3b3  tltu        $zero, $zero, 14
    ctx->pc = 0x24ad1cu;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_24ad20:
    // 0x24ad20: 0x3c6  .word       0x000003C6                   # srlv        $zero, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ad20u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_24ad24:
    // 0x24ad24: 0x3db  .word       0x000003DB                   # divu        $zero, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ad24u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_24ad28:
    // 0x24ad28: 0x3ed  .word       0x000003ED                   # daddu       $zero, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ad28u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24ad2c:
    // 0x24ad2c: 0x400  sll         $zero, $zero, 16
    ctx->pc = 0x24ad2cu;
    
label_24ad30:
    // 0x24ad30: 0x412  .word       0x00000412                   # mflo        $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ad30u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_24ad34:
    // 0x24ad34: 0x424  .word       0x00000424                   # and         $zero, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ad34u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_24ad38:
    // 0x24ad38: 0x43a  dsrl        $zero, $zero, 16
    ctx->pc = 0x24ad38u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> 16);
label_24ad3c:
    // 0x24ad3c: 0x0  nop
    ctx->pc = 0x24ad3cu;
    // NOP
label_24ad40:
    // 0x24ad40: 0x905  .word       0x00000905                   # INVALID     $zero, $zero, 0x905 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ad40u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x24AD40 raw=0x00000905"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ad44:
    // 0x24ad44: 0x90b  .word       0x0000090B                   # movn        $at, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ad44u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 1, GPR_VEC(ctx, 0));
label_24ad48:
    // 0x24ad48: 0x911  .word       0x00000911                   # mthi        $zero # 00000900 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ad48u;
    ctx->hi = GPR_U64(ctx, 0);
label_24ad4c:
    // 0x24ad4c: 0x917  .word       0x00000917                   # dsrav       $at, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ad4cu;
    SET_GPR_S64(ctx, 1, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_24ad50:
    // 0x24ad50: 0x91d  .word       0x0000091D                   # dmultu      $zero, $zero # 00000900 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ad50u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x24AD50 raw=0x0000091D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ad54:
    // 0x24ad54: 0x923  .word       0x00000923                   # negu        $at, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ad54u;
    SET_GPR_S32(ctx, 1, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_24ad58:
    // 0x24ad58: 0x929  .word       0x00000929                   # mtsa        $zero # 00000900 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x24ad58u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_24ad5c:
    // 0x24ad5c: 0x92f  .word       0x0000092F                   # dsubu       $at, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ad5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_24ad60:
    // 0x24ad60: 0x935  .word       0x00000935                   # INVALID     $zero, $zero, 0x935 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ad60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x24AD60 raw=0x00000935"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ad64:
    // 0x24ad64: 0x93b  dsra        $at, $zero, 4
    ctx->pc = 0x24ad64u;
    SET_GPR_S64(ctx, 1, GPR_S64(ctx, 0) >> 4);
label_24ad68:
    // 0x24ad68: 0x941  .word       0x00000941                   # INVALID     $zero, $zero, 0x941 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ad68u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x24AD68 raw=0x00000941"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ad6c:
    // 0x24ad6c: 0x947  .word       0x00000947                   # srav        $at, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ad6cu;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_24ad70:
    // 0x24ad70: 0x94d  break       0, 37
    ctx->pc = 0x24ad70u;
    runtime->handleBreak(rdram, ctx);
label_24ad74:
    // 0x24ad74: 0x953  .word       0x00000953                   # mtlo        $zero # 00000940 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ad74u;
    ctx->lo = GPR_U64(ctx, 0);
label_24ad78:
    // 0x24ad78: 0x95c  .word       0x0000095C                   # dmult       $zero, $zero # 00000940 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ad78u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x24AD78 raw=0x0000095C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ad7c:
    // 0x24ad7c: 0x962  .word       0x00000962                   # neg         $at, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ad7cu;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 1, (int32_t)tmp); }
label_24ad80:
    // 0x24ad80: 0x968  .word       0x00000968                   # mfsa        $at # 00000140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x24ad80u;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_24ad84:
    // 0x24ad84: 0x96e  .word       0x0000096E                   # dsub        $at, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ad84u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
label_24ad88:
    // 0x24ad88: 0x974  teq         $zero, $zero, 37
    ctx->pc = 0x24ad88u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_24ad8c:
    // 0x24ad8c: 0x97b  dsra        $at, $zero, 5
    ctx->pc = 0x24ad8cu;
    SET_GPR_S64(ctx, 1, GPR_S64(ctx, 0) >> 5);
label_24ad90:
    // 0x24ad90: 0x981  .word       0x00000981                   # INVALID     $zero, $zero, 0x981 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ad90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x24AD90 raw=0x00000981"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ad94:
    // 0x24ad94: 0x987  .word       0x00000987                   # srav        $at, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ad94u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_24ad98:
    // 0x24ad98: 0x990  .word       0x00000990                   # mfhi        $at # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ad98u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_24ad9c:
    // 0x24ad9c: 0x0  nop
    ctx->pc = 0x24ad9cu;
    // NOP
label_24ada0:
    // 0x24ada0: 0x27b  dsra        $zero, $zero, 9
    ctx->pc = 0x24ada0u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 9);
label_24ada4:
    // 0x24ada4: 0x28e  .word       0x0000028E                   # INVALID     $zero, $zero, 0x28E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ada4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x24ADA4 raw=0x0000028E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ada8:
    // 0x24ada8: 0x2a4  .word       0x000002A4                   # and         $zero, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ada8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_24adac:
    // 0x24adac: 0x2b7  .word       0x000002B7                   # INVALID     $zero, $zero, 0x2B7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24adacu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x24ADAC raw=0x000002B7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24adb0:
    // 0x24adb0: 0x2ca  .word       0x000002CA                   # movz        $zero, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24adb0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_24adb4:
    // 0x24adb4: 0x2e0  .word       0x000002E0                   # add         $zero, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24adb4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_24adb8:
    // 0x24adb8: 0x2f6  tne         $zero, $zero, 11
    ctx->pc = 0x24adb8u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_24adbc:
    // 0x24adbc: 0x308  .word       0x00000308                   # jr          $zero # 00000300 <InstrIdType: CPU_SPECIAL>
label_24adc0:
    if (ctx->pc == 0x24ADC0u) {
        ctx->pc = 0x24ADC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ADBCu;
        // 0x24adc0: 0x31e  .word       0x0000031E                   # ddiv        $zero, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x24ADC0 raw=0x0000031E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x24ADC4u;
        goto label_24adc4;
    }
    ctx->pc = 0x24ADBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x24ADC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ADBCu;
        // 0x24adc0: 0x31e  .word       0x0000031E                   # ddiv        $zero, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x24ADC0 raw=0x0000031E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24ADBCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x24ADC4u;
label_24adc4:
    // 0x24adc4: 0x336  tne         $zero, $zero, 12
    ctx->pc = 0x24adc4u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_24adc8:
    // 0x24adc8: 0x347  .word       0x00000347                   # srav        $zero, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24adc8u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_24adcc:
    // 0x24adcc: 0x35d  .word       0x0000035D                   # dmultu      $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24adccu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x24ADCC raw=0x0000035D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24add0:
    // 0x24add0: 0x36f  .word       0x0000036F                   # dsubu       $zero, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24add0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_24add4:
    // 0x24add4: 0x385  .word       0x00000385                   # INVALID     $zero, $zero, 0x385 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24add4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x24ADD4 raw=0x00000385"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24add8:
    // 0x24add8: 0x39c  .word       0x0000039C                   # dmult       $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24add8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x24ADD8 raw=0x0000039C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24addc:
    // 0x24addc: 0x3b4  teq         $zero, $zero, 14
    ctx->pc = 0x24addcu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_24ade0:
    // 0x24ade0: 0x3c7  .word       0x000003C7                   # srav        $zero, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ade0u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_24ade4:
    // 0x24ade4: 0x3dc  .word       0x000003DC                   # dmult       $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ade4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x24ADE4 raw=0x000003DC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ade8:
    // 0x24ade8: 0x3ee  .word       0x000003EE                   # dsub        $zero, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ade8u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_24adec:
    // 0x24adec: 0x401  .word       0x00000401                   # INVALID     $zero, $zero, 0x401 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24adecu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x24ADEC raw=0x00000401"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24adf0:
    // 0x24adf0: 0x413  .word       0x00000413                   # mtlo        $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24adf0u;
    ctx->lo = GPR_U64(ctx, 0);
label_24adf4:
    // 0x24adf4: 0x425  .word       0x00000425                   # move        $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24adf4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_24adf8:
    // 0x24adf8: 0x43b  dsra        $zero, $zero, 16
    ctx->pc = 0x24adf8u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 16);
label_24adfc:
    // 0x24adfc: 0x0  nop
    ctx->pc = 0x24adfcu;
    // NOP
label_24ae00:
    // 0x24ae00: 0x906  .word       0x00000906                   # srlv        $at, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ae00u;
    SET_GPR_S32(ctx, 1, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_24ae04:
    // 0x24ae04: 0x90c  syscall     36
    ctx->pc = 0x24ae04u;
    ctx->pc = 0x24AE08u;
runtime->handleSyscall(rdram, ctx, 0x24u);
label_24ae08:
    // 0x24ae08: 0x912  .word       0x00000912                   # mflo        $at # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ae08u;
    SET_GPR_U64(ctx, 1, ctx->lo);
label_24ae0c:
    // 0x24ae0c: 0x918  .word       0x00000918                   # mult        $at, $zero, $zero # 00000100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x24ae0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_24ae10:
    // 0x24ae10: 0x91e  .word       0x0000091E                   # ddiv        $at, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ae10u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x24AE10 raw=0x0000091E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ae14:
    // 0x24ae14: 0x924  .word       0x00000924                   # and         $at, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ae14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_24ae18:
    // 0x24ae18: 0x92a  .word       0x0000092A                   # slt         $at, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ae18u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_24ae1c:
    // 0x24ae1c: 0x930  tge         $zero, $zero, 36
    ctx->pc = 0x24ae1cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_24ae20:
    // 0x24ae20: 0x936  tne         $zero, $zero, 36
    ctx->pc = 0x24ae20u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_24ae24:
    // 0x24ae24: 0x93c  dsll32      $at, $zero, 4
    ctx->pc = 0x24ae24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << (32 + 4));
label_24ae28:
    // 0x24ae28: 0x942  srl         $at, $zero, 5
    ctx->pc = 0x24ae28u;
    SET_GPR_S32(ctx, 1, (int32_t)SRL32(GPR_U32(ctx, 0), 5));
label_24ae2c:
    // 0x24ae2c: 0x948  .word       0x00000948                   # jr          $zero # 00000940 <InstrIdType: CPU_SPECIAL>
label_24ae30:
    if (ctx->pc == 0x24AE30u) {
        ctx->pc = 0x24AE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AE2Cu;
        // 0x24ae30: 0x94e  .word       0x0000094E                   # INVALID     $zero, $zero, 0x94E # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x24AE30 raw=0x0000094E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AE34u;
        goto label_24ae34;
    }
    ctx->pc = 0x24AE2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x24AE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AE2Cu;
        // 0x24ae30: 0x94e  .word       0x0000094E                   # INVALID     $zero, $zero, 0x94E # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x24AE30 raw=0x0000094E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24AE2Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x24AE34u;
label_24ae34:
    // 0x24ae34: 0x954  .word       0x00000954                   # dsllv       $at, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ae34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_24ae38:
    // 0x24ae38: 0x95d  .word       0x0000095D                   # dmultu      $zero, $zero # 00000940 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ae38u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x24AE38 raw=0x0000095D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ae3c:
    // 0x24ae3c: 0x963  .word       0x00000963                   # negu        $at, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ae3cu;
    SET_GPR_S32(ctx, 1, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_24ae40:
    // 0x24ae40: 0x969  .word       0x00000969                   # mtsa        $zero # 00000940 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x24ae40u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_24ae44:
    // 0x24ae44: 0x96f  .word       0x0000096F                   # dsubu       $at, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ae44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_24ae48:
    // 0x24ae48: 0x975  .word       0x00000975                   # INVALID     $zero, $zero, 0x975 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ae48u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x24AE48 raw=0x00000975"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ae4c:
    // 0x24ae4c: 0x97c  dsll32      $at, $zero, 5
    ctx->pc = 0x24ae4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << (32 + 5));
label_24ae50:
    // 0x24ae50: 0x982  srl         $at, $zero, 6
    ctx->pc = 0x24ae50u;
    SET_GPR_S32(ctx, 1, (int32_t)SRL32(GPR_U32(ctx, 0), 6));
label_24ae54:
    // 0x24ae54: 0x988  .word       0x00000988                   # jr          $zero # 00000980 <InstrIdType: CPU_SPECIAL>
label_24ae58:
    if (ctx->pc == 0x24AE58u) {
        ctx->pc = 0x24AE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AE54u;
        // 0x24ae58: 0x991  .word       0x00000991                   # mthi        $zero # 00000980 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AE5Cu;
        goto label_24ae5c;
    }
    ctx->pc = 0x24AE54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x24AE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AE54u;
        // 0x24ae58: 0x991  .word       0x00000991                   # mthi        $zero # 00000980 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24AE54u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x24AE5Cu;
label_24ae5c:
    // 0x24ae5c: 0x0  nop
    ctx->pc = 0x24ae5cu;
    // NOP
label_24ae60:
    // 0x24ae60: 0x277  .word       0x00000277                   # INVALID     $zero, $zero, 0x277 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ae60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x24AE60 raw=0x00000277"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ae64:
    // 0x24ae64: 0x28a  .word       0x0000028A                   # movz        $zero, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ae64u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_24ae68:
    // 0x24ae68: 0x2a0  .word       0x000002A0                   # add         $zero, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ae68u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_24ae6c:
    // 0x24ae6c: 0x2b3  tltu        $zero, $zero, 10
    ctx->pc = 0x24ae6cu;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_24ae70:
    // 0x24ae70: 0x2c6  .word       0x000002C6                   # srlv        $zero, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ae70u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_24ae74:
    // 0x24ae74: 0x2dc  .word       0x000002DC                   # dmult       $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ae74u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x24AE74 raw=0x000002DC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ae78:
    // 0x24ae78: 0x2f2  tlt         $zero, $zero, 11
    ctx->pc = 0x24ae78u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_24ae7c:
    // 0x24ae7c: 0x304  .word       0x00000304                   # sllv        $zero, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ae7cu;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_24ae80:
    // 0x24ae80: 0x31a  .word       0x0000031A                   # div         $zero, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ae80u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_24ae84:
    // 0x24ae84: 0x332  tlt         $zero, $zero, 12
    ctx->pc = 0x24ae84u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_24ae88:
    // 0x24ae88: 0x343  sra         $zero, $zero, 13
    ctx->pc = 0x24ae88u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 13));
label_24ae8c:
    // 0x24ae8c: 0x359  .word       0x00000359                   # multu       $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ae8cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_24ae90:
    // 0x24ae90: 0x36b  .word       0x0000036B                   # sltu        $zero, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ae90u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_24ae94:
    // 0x24ae94: 0x381  .word       0x00000381                   # INVALID     $zero, $zero, 0x381 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ae94u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x24AE94 raw=0x00000381"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ae98:
    // 0x24ae98: 0x398  .word       0x00000398                   # mult        $zero, $zero, $zero # 00000380 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x24ae98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_24ae9c:
    // 0x24ae9c: 0x3b0  tge         $zero, $zero, 14
    ctx->pc = 0x24ae9cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_24aea0:
    // 0x24aea0: 0x3c3  sra         $zero, $zero, 15
    ctx->pc = 0x24aea0u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 15));
label_24aea4:
    // 0x24aea4: 0x3d8  .word       0x000003D8                   # mult        $zero, $zero, $zero # 000003C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x24aea4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_24aea8:
    // 0x24aea8: 0x3ea  .word       0x000003EA                   # slt         $zero, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24aea8u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_24aeac:
    // 0x24aeac: 0x3fd  .word       0x000003FD                   # INVALID     $zero, $zero, 0x3FD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24aeacu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x24AEAC raw=0x000003FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24aeb0:
    // 0x24aeb0: 0x40f  sync.p
    ctx->pc = 0x24aeb0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_24aeb4:
    // 0x24aeb4: 0x421  .word       0x00000421                   # addu        $zero, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24aeb4u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_24aeb8:
    // 0x24aeb8: 0x437  .word       0x00000437                   # INVALID     $zero, $zero, 0x437 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24aeb8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x24AEB8 raw=0x00000437"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24aebc:
    // 0x24aebc: 0x0  nop
    ctx->pc = 0x24aebcu;
    // NOP
label_24aec0:
    // 0x24aec0: 0x279  .word       0x00000279                   # INVALID     $zero, $zero, 0x279 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24aec0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x24AEC0 raw=0x00000279"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24aec4:
    // 0x24aec4: 0x28c  syscall     10
    ctx->pc = 0x24aec4u;
    ctx->pc = 0x24AEC8u;
runtime->handleSyscall(rdram, ctx, 0xAu);
label_24aec8:
    // 0x24aec8: 0x2a2  .word       0x000002A2                   # neg         $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24aec8u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_24aecc:
    // 0x24aecc: 0x2b5  .word       0x000002B5                   # INVALID     $zero, $zero, 0x2B5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24aeccu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x24AECC raw=0x000002B5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24aed0:
    // 0x24aed0: 0x2c8  .word       0x000002C8                   # jr          $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
label_24aed4:
    if (ctx->pc == 0x24AED4u) {
        ctx->pc = 0x24AED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AED0u;
        // 0x24aed4: 0x2de  .word       0x000002DE                   # ddiv        $zero, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x24AED4 raw=0x000002DE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AED8u;
        goto label_24aed8;
    }
    ctx->pc = 0x24AED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x24AED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AED0u;
        // 0x24aed4: 0x2de  .word       0x000002DE                   # ddiv        $zero, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x24AED4 raw=0x000002DE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24AED0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x24AED8u;
label_24aed8:
    // 0x24aed8: 0x2f4  teq         $zero, $zero, 11
    ctx->pc = 0x24aed8u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_24aedc:
    // 0x24aedc: 0x306  .word       0x00000306                   # srlv        $zero, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24aedcu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_24aee0:
    // 0x24aee0: 0x31c  .word       0x0000031C                   # dmult       $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24aee0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x24AEE0 raw=0x0000031C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24aee4:
    // 0x24aee4: 0x334  teq         $zero, $zero, 12
    ctx->pc = 0x24aee4u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_24aee8:
    // 0x24aee8: 0x345  .word       0x00000345                   # INVALID     $zero, $zero, 0x345 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24aee8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x24AEE8 raw=0x00000345"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24aeec:
    // 0x24aeec: 0x35b  .word       0x0000035B                   # divu        $zero, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24aeecu;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_24aef0:
    // 0x24aef0: 0x36d  .word       0x0000036D                   # daddu       $zero, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24aef0u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24aef4:
    // 0x24aef4: 0x383  sra         $zero, $zero, 14
    ctx->pc = 0x24aef4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 14));
label_24aef8:
    // 0x24aef8: 0x39a  .word       0x0000039A                   # div         $zero, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24aef8u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_24aefc:
    // 0x24aefc: 0x3b2  tlt         $zero, $zero, 14
    ctx->pc = 0x24aefcu;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_24af00:
    // 0x24af00: 0x3c5  .word       0x000003C5                   # INVALID     $zero, $zero, 0x3C5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24af00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x24AF00 raw=0x000003C5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24af04:
    // 0x24af04: 0x3da  .word       0x000003DA                   # div         $zero, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24af04u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_24af08:
    // 0x24af08: 0x3ec  .word       0x000003EC                   # dadd        $zero, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24af08u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_24af0c:
    // 0x24af0c: 0x3ff  dsra32      $zero, $zero, 15
    ctx->pc = 0x24af0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 15));
label_24af10:
    // 0x24af10: 0x411  .word       0x00000411                   # mthi        $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24af10u;
    ctx->hi = GPR_U64(ctx, 0);
label_24af14:
    // 0x24af14: 0x423  .word       0x00000423                   # negu        $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24af14u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_24af18:
    // 0x24af18: 0x439  .word       0x00000439                   # INVALID     $zero, $zero, 0x439 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24af18u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x24AF18 raw=0x00000439"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24af1c:
    // 0x24af1c: 0x0  nop
    ctx->pc = 0x24af1cu;
    // NOP
label_24af20:
    // 0x24af20: 0x904  .word       0x00000904                   # sllv        $at, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24af20u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_24af24:
    // 0x24af24: 0x90a  .word       0x0000090A                   # movz        $at, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24af24u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 1, GPR_VEC(ctx, 0));
label_24af28:
    // 0x24af28: 0x910  .word       0x00000910                   # mfhi        $at # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24af28u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_24af2c:
    // 0x24af2c: 0x916  .word       0x00000916                   # dsrlv       $at, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24af2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_24af30:
    // 0x24af30: 0x91c  .word       0x0000091C                   # dmult       $zero, $zero # 00000900 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24af30u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x24AF30 raw=0x0000091C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24af34:
    // 0x24af34: 0x922  .word       0x00000922                   # neg         $at, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24af34u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 1, (int32_t)tmp); }
label_24af38:
    // 0x24af38: 0x928  .word       0x00000928                   # mfsa        $at # 00000100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x24af38u;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_24af3c:
    // 0x24af3c: 0x92e  .word       0x0000092E                   # dsub        $at, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24af3cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
label_24af40:
    // 0x24af40: 0x934  teq         $zero, $zero, 36
    ctx->pc = 0x24af40u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_24af44:
    // 0x24af44: 0x93a  dsrl        $at, $zero, 4
    ctx->pc = 0x24af44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) >> 4);
label_24af48:
    // 0x24af48: 0x940  sll         $at, $zero, 5
    ctx->pc = 0x24af48u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_24af4c:
    // 0x24af4c: 0x946  .word       0x00000946                   # srlv        $at, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24af4cu;
    SET_GPR_S32(ctx, 1, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_24af50:
    // 0x24af50: 0x94c  syscall     37
    ctx->pc = 0x24af50u;
    ctx->pc = 0x24AF54u;
runtime->handleSyscall(rdram, ctx, 0x25u);
label_24af54:
    // 0x24af54: 0x952  .word       0x00000952                   # mflo        $at # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24af54u;
    SET_GPR_U64(ctx, 1, ctx->lo);
label_24af58:
    // 0x24af58: 0x95b  .word       0x0000095B                   # divu        $at, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24af58u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_24af5c:
    // 0x24af5c: 0x961  .word       0x00000961                   # addu        $at, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24af5cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_24af60:
    // 0x24af60: 0x967  .word       0x00000967                   # not         $at, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24af60u;
    SET_GPR_U64(ctx, 1, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_24af64:
    // 0x24af64: 0x96d  .word       0x0000096D                   # daddu       $at, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24af64u;
    SET_GPR_U64(ctx, 1, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24af68:
    // 0x24af68: 0x973  tltu        $zero, $zero, 37
    ctx->pc = 0x24af68u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_24af6c:
    // 0x24af6c: 0x97a  dsrl        $at, $zero, 5
    ctx->pc = 0x24af6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) >> 5);
label_24af70:
    // 0x24af70: 0x980  sll         $at, $zero, 6
    ctx->pc = 0x24af70u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
label_24af74:
    // 0x24af74: 0x986  .word       0x00000986                   # srlv        $at, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24af74u;
    SET_GPR_S32(ctx, 1, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_24af78:
    // 0x24af78: 0x98f  .word       0x0000098F                   # sync # 00000800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24af78u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_24af7c:
    // 0x24af7c: 0x0  nop
    ctx->pc = 0x24af7cu;
    // NOP
label_24af80:
    // 0x24af80: 0x27e  dsrl32      $zero, $zero, 9
    ctx->pc = 0x24af80u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 9));
label_24af84:
    // 0x24af84: 0x0  nop
    ctx->pc = 0x24af84u;
    // NOP
label_24af88:
    // 0x24af88: 0x2a7  .word       0x000002A7                   # not         $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24af88u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_24af8c:
    // 0x24af8c: 0x0  nop
    ctx->pc = 0x24af8cu;
    // NOP
label_24af90:
    // 0x24af90: 0x0  nop
    ctx->pc = 0x24af90u;
    // NOP
label_24af94:
    // 0x24af94: 0x0  nop
    ctx->pc = 0x24af94u;
    // NOP
label_24af98:
    // 0x24af98: 0x0  nop
    ctx->pc = 0x24af98u;
    // NOP
label_24af9c:
    // 0x24af9c: 0x0  nop
    ctx->pc = 0x24af9cu;
    // NOP
label_24afa0:
    // 0x24afa0: 0x321  .word       0x00000321                   # addu        $zero, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24afa0u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_24afa4:
    // 0x24afa4: 0x0  nop
    ctx->pc = 0x24afa4u;
    // NOP
label_24afa8:
    // 0x24afa8: 0x0  nop
    ctx->pc = 0x24afa8u;
    // NOP
label_24afac:
    // 0x24afac: 0x0  nop
    ctx->pc = 0x24afacu;
    // NOP
label_24afb0:
    // 0x24afb0: 0x0  nop
    ctx->pc = 0x24afb0u;
    // NOP
label_24afb4:
    // 0x24afb4: 0x0  nop
    ctx->pc = 0x24afb4u;
    // NOP
label_24afb8:
    // 0x24afb8: 0x0  nop
    ctx->pc = 0x24afb8u;
    // NOP
label_24afbc:
    // 0x24afbc: 0x0  nop
    ctx->pc = 0x24afbcu;
    // NOP
label_24afc0:
    // 0x24afc0: 0x0  nop
    ctx->pc = 0x24afc0u;
    // NOP
label_24afc4:
    // 0x24afc4: 0x0  nop
    ctx->pc = 0x24afc4u;
    // NOP
label_24afc8:
    // 0x24afc8: 0x0  nop
    ctx->pc = 0x24afc8u;
    // NOP
label_24afcc:
    // 0x24afcc: 0x0  nop
    ctx->pc = 0x24afccu;
    // NOP
label_24afd0:
    // 0x24afd0: 0x0  nop
    ctx->pc = 0x24afd0u;
    // NOP
label_24afd4:
    // 0x24afd4: 0x0  nop
    ctx->pc = 0x24afd4u;
    // NOP
label_24afd8:
    // 0x24afd8: 0x0  nop
    ctx->pc = 0x24afd8u;
    // NOP
label_24afdc:
    // 0x24afdc: 0x0  nop
    ctx->pc = 0x24afdcu;
    // NOP
label_24afe0:
    // 0x24afe0: 0x27d  .word       0x0000027D                   # INVALID     $zero, $zero, 0x27D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24afe0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x24AFE0 raw=0x0000027D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24afe4:
    // 0x24afe4: 0x0  nop
    ctx->pc = 0x24afe4u;
    // NOP
label_24afe8:
    // 0x24afe8: 0x2a6  .word       0x000002A6                   # xor         $zero, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24afe8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_24afec:
    // 0x24afec: 0x2b9  .word       0x000002B9                   # INVALID     $zero, $zero, 0x2B9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24afecu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x24AFEC raw=0x000002B9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24aff0:
    // 0x24aff0: 0x0  nop
    ctx->pc = 0x24aff0u;
    // NOP
label_24aff4:
    // 0x24aff4: 0x2e2  .word       0x000002E2                   # neg         $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24aff4u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_24aff8:
    // 0x24aff8: 0x2f8  dsll        $zero, $zero, 11
    ctx->pc = 0x24aff8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 11);
label_24affc:
    // 0x24affc: 0x30a  .word       0x0000030A                   # movz        $zero, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24affcu;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_24b000:
    // 0x24b000: 0x320  .word       0x00000320                   # add         $zero, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24b000u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_24b004:
    // 0x24b004: 0x0  nop
    ctx->pc = 0x24b004u;
    // NOP
label_24b008:
    // 0x24b008: 0x349  .word       0x00000349                   # jalr        $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
label_24b00c:
    if (ctx->pc == 0x24B00Cu) {
        ctx->pc = 0x24B00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B008u;
        // 0x24b00c: 0x35f  .word       0x0000035F                   # ddivu       $zero, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x24B00C raw=0x0000035F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B010u;
        goto label_24b010;
    }
    ctx->pc = 0x24B008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x24B00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B008u;
        // 0x24b00c: 0x35f  .word       0x0000035F                   # ddivu       $zero, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x24B00C raw=0x0000035F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B008u, 0x24B010u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24B010u;
label_24b010:
    // 0x24b010: 0x371  tgeu        $zero, $zero, 13
    ctx->pc = 0x24b010u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_24b014:
    // 0x24b014: 0x387  .word       0x00000387                   # srav        $zero, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24b014u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_24b018:
    // 0x24b018: 0x39e  .word       0x0000039E                   # ddiv        $zero, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24b018u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x24B018 raw=0x0000039E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b01c:
    // 0x24b01c: 0x3b7  .word       0x000003B7                   # INVALID     $zero, $zero, 0x3B7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24b01cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x24B01C raw=0x000003B7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b020:
    // 0x24b020: 0x0  nop
    ctx->pc = 0x24b020u;
    // NOP
label_24b024:
    // 0x24b024: 0x3de  .word       0x000003DE                   # ddiv        $zero, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24b024u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x24B024 raw=0x000003DE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b028:
    // 0x24b028: 0x3f0  tge         $zero, $zero, 15
    ctx->pc = 0x24b028u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_24b02c:
    // 0x24b02c: 0x403  sra         $zero, $zero, 16
    ctx->pc = 0x24b02cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 16));
label_24b030:
    // 0x24b030: 0x415  .word       0x00000415                   # INVALID     $zero, $zero, 0x415 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24b030u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x24B030 raw=0x00000415"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b034:
    // 0x24b034: 0x427  .word       0x00000427                   # not         $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24b034u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_24b038:
    // 0x24b038: 0x43d  .word       0x0000043D                   # INVALID     $zero, $zero, 0x43D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24b038u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x24B038 raw=0x0000043D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b03c:
    // 0x24b03c: 0x0  nop
    ctx->pc = 0x24b03cu;
    // NOP
label_24b040:
    // 0x24b040: 0x0  nop
    ctx->pc = 0x24b040u;
    // NOP
label_24b044:
    // 0x24b044: 0x290  .word       0x00000290                   # mfhi        $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24b044u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_24b048:
    // 0x24b048: 0x0  nop
    ctx->pc = 0x24b048u;
    // NOP
label_24b04c:
    // 0x24b04c: 0x0  nop
    ctx->pc = 0x24b04cu;
    // NOP
label_24b050:
    // 0x24b050: 0x2d0  .word       0x000002D0                   # mfhi        $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24b050u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_24b054:
    // 0x24b054: 0x0  nop
    ctx->pc = 0x24b054u;
    // NOP
label_24b058:
    // 0x24b058: 0x0  nop
    ctx->pc = 0x24b058u;
    // NOP
label_24b05c:
    // 0x24b05c: 0x30b  .word       0x0000030B                   # movn        $zero, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24b05cu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_24b060:
    // 0x24b060: 0x322  .word       0x00000322                   # neg         $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24b060u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_24b064:
    // 0x24b064: 0x0  nop
    ctx->pc = 0x24b064u;
    // NOP
label_24b068:
    // 0x24b068: 0x34e  .word       0x0000034E                   # INVALID     $zero, $zero, 0x34E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24b068u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x24B068 raw=0x0000034E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b06c:
    // 0x24b06c: 0x0  nop
    ctx->pc = 0x24b06cu;
    // NOP
label_24b070:
    // 0x24b070: 0x372  tlt         $zero, $zero, 13
    ctx->pc = 0x24b070u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_24b074:
    // 0x24b074: 0x388  .word       0x00000388                   # jr          $zero # 00000380 <InstrIdType: CPU_SPECIAL>
label_24b078:
    if (ctx->pc == 0x24B078u) {
        ctx->pc = 0x24B078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B074u;
        // 0x24b078: 0x39f  .word       0x0000039F                   # ddivu       $zero, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x24B078 raw=0x0000039F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B07Cu;
        goto label_24b07c;
    }
    ctx->pc = 0x24B074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x24B078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B074u;
        // 0x24b078: 0x39f  .word       0x0000039F                   # ddivu       $zero, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x24B078 raw=0x0000039F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B074u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x24B07Cu;
label_24b07c:
    // 0x24b07c: 0x0  nop
    ctx->pc = 0x24b07cu;
    // NOP
label_24b080:
    // 0x24b080: 0x3c9  .word       0x000003C9                   # jalr        $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
label_24b084:
    if (ctx->pc == 0x24B084u) {
        ctx->pc = 0x24B088u;
        goto label_24b088;
    }
    ctx->pc = 0x24B080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B080u, 0x24B088u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24B088u;
label_24b088:
    // 0x24b088: 0x0  nop
    ctx->pc = 0x24b088u;
    // NOP
label_24b08c:
    // 0x24b08c: 0x0  nop
    ctx->pc = 0x24b08cu;
    // NOP
label_24b090:
    // 0x24b090: 0x0  nop
    ctx->pc = 0x24b090u;
    // NOP
label_24b094:
    // 0x24b094: 0x428  .word       0x00000428                   # mfsa        $zero # 00000400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x24b094u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_24b098:
    // 0x24b098: 0x0  nop
    ctx->pc = 0x24b098u;
    // NOP
label_24b09c:
    // 0x24b09c: 0x0  nop
    ctx->pc = 0x24b09cu;
    // NOP
label_24b0a0:
    // 0x24b0a0: 0x0  nop
    ctx->pc = 0x24b0a0u;
    // NOP
label_24b0a4:
    // 0x24b0a4: 0x0  nop
    ctx->pc = 0x24b0a4u;
    // NOP
label_24b0a8:
    // 0x24b0a8: 0x0  nop
    ctx->pc = 0x24b0a8u;
    // NOP
label_24b0ac:
    // 0x24b0ac: 0x0  nop
    ctx->pc = 0x24b0acu;
    // NOP
label_24b0b0:
    // 0x24b0b0: 0x0  nop
    ctx->pc = 0x24b0b0u;
    // NOP
label_24b0b4:
    // 0x24b0b4: 0x0  nop
    ctx->pc = 0x24b0b4u;
    // NOP
label_24b0b8:
    // 0x24b0b8: 0x0  nop
    ctx->pc = 0x24b0b8u;
    // NOP
label_24b0bc:
    // 0x24b0bc: 0x0  nop
    ctx->pc = 0x24b0bcu;
    // NOP
label_24b0c0:
    // 0x24b0c0: 0x0  nop
    ctx->pc = 0x24b0c0u;
    // NOP
label_24b0c4:
    // 0x24b0c4: 0x0  nop
    ctx->pc = 0x24b0c4u;
    // NOP
label_24b0c8:
    // 0x24b0c8: 0x0  nop
    ctx->pc = 0x24b0c8u;
    // NOP
label_24b0cc:
    // 0x24b0cc: 0x0  nop
    ctx->pc = 0x24b0ccu;
    // NOP
label_24b0d0:
    // 0x24b0d0: 0x0  nop
    ctx->pc = 0x24b0d0u;
    // NOP
label_24b0d4:
    // 0x24b0d4: 0x95a  .word       0x0000095A                   # div         $at, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24b0d4u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_24b0d8:
    // 0x24b0d8: 0x0  nop
    ctx->pc = 0x24b0d8u;
    // NOP
label_24b0dc:
    // 0x24b0dc: 0x0  nop
    ctx->pc = 0x24b0dcu;
    // NOP
label_24b0e0:
    // 0x24b0e0: 0x0  nop
    ctx->pc = 0x24b0e0u;
    // NOP
label_24b0e4:
    // 0x24b0e4: 0x0  nop
    ctx->pc = 0x24b0e4u;
    // NOP
label_24b0e8:
    // 0x24b0e8: 0x975  .word       0x00000975                   # INVALID     $zero, $zero, 0x975 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24b0e8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x24B0E8 raw=0x00000975"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b0ec:
    // 0x24b0ec: 0x0  nop
    ctx->pc = 0x24b0ecu;
    // NOP
label_24b0f0:
    // 0x24b0f0: 0x0  nop
    ctx->pc = 0x24b0f0u;
    // NOP
label_24b0f4:
    // 0x24b0f4: 0x98e  .word       0x0000098E                   # INVALID     $zero, $zero, 0x98E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24b0f4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x24B0F4 raw=0x0000098E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b0f8:
    // 0x24b0f8: 0x0  nop
    ctx->pc = 0x24b0f8u;
    // NOP
label_24b0fc:
    // 0x24b0fc: 0x0  nop
    ctx->pc = 0x24b0fcu;
    // NOP
label_24b100:
    // 0x24b100: 0x0  nop
    ctx->pc = 0x24b100u;
    // NOP
label_24b104:
    // 0x24b104: 0x90000000  lbu         $zero, 0x0($zero)
    ctx->pc = 0x24b104u;
    SET_GPR_ZE32(ctx, 0, (uint8_t)FAST_READ8(0x0u));
label_24b108:
    // 0x24b108: 0x0  nop
    ctx->pc = 0x24b108u;
    // NOP
label_24b10c:
    // 0x24b10c: 0xff00  sll         $ra, $zero, 28
    ctx->pc = 0x24b10cu;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_24b110:
    // 0x24b110: 0x230805  .word       0x00230805                   # INVALID     $at, $v1, 0x805 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24b110u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x24B110 raw=0x00230805"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b114:
    // 0x24b114: 0x230000  .word       0x00230000                   # sll         $zero, $v1, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24b114u;
    
label_24b118:
    // 0x24b118: 0xb00  sll         $at, $zero, 12
    ctx->pc = 0x24b118u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_24b11c:
    // 0x24b11c: 0x0  nop
    ctx->pc = 0x24b11cu;
    // NOP
label_24b120:
    // 0x24b120: 0x0  nop
    ctx->pc = 0x24b120u;
    // NOP
label_24b124:
    // 0x24b124: 0x90000800  lbu         $zero, 0x800($zero)
    ctx->pc = 0x24b124u;
    SET_GPR_ZE32(ctx, 0, (uint8_t)FAST_READ8(0x800u));
label_24b128:
    // 0x24b128: 0x0  nop
    ctx->pc = 0x24b128u;
    // NOP
label_24b12c:
    // 0x24b12c: 0xff00  sll         $ra, $zero, 28
    ctx->pc = 0x24b12cu;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_24b130:
    // 0x24b130: 0x350000  .word       0x00350000                   # sll         $zero, $s5, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24b130u;
    
label_24b134:
    // 0x24b134: 0x210e0a  .word       0x00210E0A                   # movz        $at, $at, $at # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24b134u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 1, GPR_VEC(ctx, 1));
label_24b138:
    // 0x24b138: 0xb00  sll         $at, $zero, 12
    ctx->pc = 0x24b138u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_24b13c:
    // 0x24b13c: 0x0  nop
    ctx->pc = 0x24b13cu;
    // NOP
label_24b140:
    // 0x24b140: 0x0  nop
    ctx->pc = 0x24b140u;
    // NOP
label_24b144:
    // 0x24b144: 0x0  nop
    ctx->pc = 0x24b144u;
    // NOP
label_24b148:
    // 0x24b148: 0x0  nop
    ctx->pc = 0x24b148u;
    // NOP
label_24b14c:
    // 0x24b14c: 0x0  nop
    ctx->pc = 0x24b14cu;
    // NOP
label_24b150:
    // 0x24b150: 0x2c5380  .word       0x002C5380                   # sll         $t2, $t4, 14 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24b150u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 12), 14));
label_24b154:
    // 0x24b154: 0x2c5390  .word       0x002C5390                   # mfhi        $t2 # 002C0380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24b154u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_24b158:
    // 0x24b158: 0x2c53a0  .word       0x002C53A0                   # add         $t2, $at, $t4 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24b158u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_24b15c:
    // 0x24b15c: 0x2c53b0  tge         $at, $t4, 334
    ctx->pc = 0x24b15cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 12)) { runtime->handleTrap(rdram, ctx); }
label_24b160:
    // 0x24b160: 0x289110  .word       0x00289110                   # mfhi        $s2 # 00280100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24b160u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_24b164:
    // 0x24b164: 0x289110  .word       0x00289110                   # mfhi        $s2 # 00280100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24b164u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_24b168:
    // 0x24b168: 0x290cf0  tge         $at, $t1, 51
    ctx->pc = 0x24b168u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 9)) { runtime->handleTrap(rdram, ctx); }
label_24b16c:
    // 0x24b16c: 0x290c90  .word       0x00290C90                   # mfhi        $at # 00290480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24b16cu;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_24b170:
    // 0x24b170: 0x0  nop
    ctx->pc = 0x24b170u;
    // NOP
label_24b174:
    // 0x24b174: 0x0  nop
    ctx->pc = 0x24b174u;
    // NOP
label_24b178:
    // 0x24b178: 0x0  nop
    ctx->pc = 0x24b178u;
    // NOP
label_24b17c:
    // 0x24b17c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24b17cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24b180:
    // 0x24b180: 0x0  nop
    ctx->pc = 0x24b180u;
    // NOP
label_24b184:
    // 0x24b184: 0x0  nop
    ctx->pc = 0x24b184u;
    // NOP
label_24b188:
    // 0x24b188: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x24b188u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_24b18c:
    // 0x24b18c: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b18cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24B18C raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b190:
    // 0x24b190: 0x0  nop
    ctx->pc = 0x24b190u;
    // NOP
label_24b194:
    // 0x24b194: 0x0  nop
    ctx->pc = 0x24b194u;
    // NOP
label_24b198:
    // 0x24b198: 0x0  nop
    ctx->pc = 0x24b198u;
    // NOP
label_24b19c:
    // 0x24b19c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24b19cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24b1a0:
    // 0x24b1a0: 0x0  nop
    ctx->pc = 0x24b1a0u;
    // NOP
label_24b1a4:
    // 0x24b1a4: 0x0  nop
    ctx->pc = 0x24b1a4u;
    // NOP
label_24b1a8:
    // 0x24b1a8: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x24b1a8u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_24b1ac:
    // 0x24b1ac: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b1acu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24B1AC raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b1b0:
    // 0x24b1b0: 0x0  nop
    ctx->pc = 0x24b1b0u;
    // NOP
label_24b1b4:
    // 0x24b1b4: 0x0  nop
    ctx->pc = 0x24b1b4u;
    // NOP
label_24b1b8:
    // 0x24b1b8: 0x0  nop
    ctx->pc = 0x24b1b8u;
    // NOP
label_24b1bc:
    // 0x24b1bc: 0x0  nop
    ctx->pc = 0x24b1bcu;
    // NOP
label_24b1c0:
    // 0x24b1c0: 0x0  nop
    ctx->pc = 0x24b1c0u;
    // NOP
label_24b1c4:
    // 0x24b1c4: 0x0  nop
    ctx->pc = 0x24b1c4u;
    // NOP
label_24b1c8:
    // 0x24b1c8: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24b1c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b1cc:
    // 0x24b1cc: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24b1ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b1d0:
    // 0x24b1d0: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24b1d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b1d4:
    // 0x24b1d4: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b1d4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24B1D4 raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b1d8:
    // 0x24b1d8: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24b1d8u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24B1D8 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b1dc:
    // 0x24b1dc: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24b1dcu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24B1DC raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b1e0:
    // 0x24b1e0: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24b1e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b1e4:
    // 0x24b1e4: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24b1e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b1e8:
    // 0x24b1e8: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24b1e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b1ec:
    // 0x24b1ec: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b1ecu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24B1EC raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b1f0:
    // 0x24b1f0: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24b1f0u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24B1F0 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b1f4:
    // 0x24b1f4: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24b1f4u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24B1F4 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b1f8:
    // 0x24b1f8: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24b1f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b1fc:
    // 0x24b1fc: 0xc1b80000  ll          $t8, 0x0($t5)
    ctx->pc = 0x24b1fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b200:
    // 0x24b200: 0xc1100000  ll          $s0, 0x0($t0)
    ctx->pc = 0x24b200u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b204:
    // 0x24b204: 0x42840000  .word       0x42840000                   # INVALID     $s4, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b204u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24B204 raw=0x42840000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b208:
    // 0x24b208: 0x42100000  .word       0x42100000                   # INVALID     $s0, $s0, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24b208u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24B208 raw=0x42100000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b20c:
    // 0x24b20c: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b20cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x24B20C raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b210:
    // 0x24b210: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24b210u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b214:
    // 0x24b214: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x24b214u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b218:
    // 0x24b218: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24b218u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b21c:
    // 0x24b21c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b21cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24B21C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b220:
    // 0x24b220: 0x42340000  .word       0x42340000                   # INVALID     $s1, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b220u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x24B220 raw=0x42340000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b224:
    // 0x24b224: 0x41d80000  .word       0x41D80000                   # INVALID     $t6, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b224u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x24B224 raw=0x41D80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b228:
    // 0x24b228: 0xc1e80000  ll          $t0, 0x0($t7)
    ctx->pc = 0x24b228u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b22c:
    // 0x24b22c: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x24b22cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b230:
    // 0x24b230: 0xc2e00000  ll          $zero, 0x0($s7)
    ctx->pc = 0x24b230u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b234:
    // 0x24b234: 0x42cc0000  .word       0x42CC0000                   # INVALID     $s6, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b234u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x24B234 raw=0x42CC0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b238:
    // 0x24b238: 0x42a60000  .word       0x42A60000                   # INVALID     $s5, $a2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b238u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x24B238 raw=0x42A60000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b23c:
    // 0x24b23c: 0x43250000  .word       0x43250000                   # INVALID     $t9, $a1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b23cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x24B23C raw=0x43250000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b240:
    // 0x24b240: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x24b240u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b244:
    // 0x24b244: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24b244u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b248:
    // 0x24b248: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24b248u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b24c:
    // 0x24b24c: 0x420c0000  .word       0x420C0000                   # INVALID     $s0, $t4, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24b24cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24B24C raw=0x420C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b250:
    // 0x24b250: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24b250u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24B250 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b254:
    // 0x24b254: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b254u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x24B254 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b258:
    // 0x24b258: 0x42ed2e14  .word       0x42ED2E14                   # INVALID     $s7, $t5, 0x2E14 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b258u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x24B258 raw=0x42ED2E14"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b25c:
    // 0x24b25c: 0x9  jalr        $zero, $zero
label_24b260:
    if (ctx->pc == 0x24B260u) {
        ctx->pc = 0x24B260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B25Cu;
        // 0x24b260: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B264u;
        goto label_24b264;
    }
    ctx->pc = 0x24B25Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x24B260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B25Cu;
        // 0x24b260: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B25Cu, 0x24B264u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24B264u;
label_24b264:
    // 0x24b264: 0x780078  .word       0x00780078                   # dsll        $zero, $t8, 1 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24b264u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 24) << 1);
label_24b268:
    // 0x24b268: 0x826003f  j           func_9800FC
label_24b26c:
    if (ctx->pc == 0x24B26Cu) {
        ctx->pc = 0x24B26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B268u;
        // 0x24b26c: 0x8530105  j           func_14C0414 (Delay Slot)
        // J 0x14C0414 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B270u;
        goto label_24b270;
    }
    ctx->pc = 0x24B268u;
    ctx->pc = 0x24B26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B268u;
    // 0x24b26c: 0x8530105  j           func_14C0414 (Delay Slot)
    // J 0x14C0414 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x9800FCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x9800FCu, 0x24B268u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x24B270u;
label_24b270:
    // 0x24b270: 0x1940193  .word       0x01940193                   # mtlo        $t4 # 00140180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24b270u;
    ctx->lo = GPR_U64(ctx, 12);
label_24b274:
    // 0x24b274: 0x167013e  .word       0x0167013E                   # dsrl32      $zero, $a3, 4 # 01600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24b274u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 7) >> (32 + 4));
label_24b278:
    // 0x24b278: 0x320079  .word       0x00320079                   # INVALID     $at, $s2, 0x79 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24b278u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x24B278 raw=0x00320079"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b27c:
    // 0x24b27c: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x24b27cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_24b280:
    // 0x24b280: 0x0  nop
    ctx->pc = 0x24b280u;
    // NOP
label_24b284:
    // 0x24b284: 0x0  nop
    ctx->pc = 0x24b284u;
    // NOP
label_24b288:
    // 0x24b288: 0x0  nop
    ctx->pc = 0x24b288u;
    // NOP
label_24b28c:
    // 0x24b28c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24b28cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24b290:
    // 0x24b290: 0x0  nop
    ctx->pc = 0x24b290u;
    // NOP
label_24b294:
    // 0x24b294: 0x0  nop
    ctx->pc = 0x24b294u;
    // NOP
label_24b298:
    // 0x24b298: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x24b298u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_24b29c:
    // 0x24b29c: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b29cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24B29C raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b2a0:
    // 0x24b2a0: 0x0  nop
    ctx->pc = 0x24b2a0u;
    // NOP
label_24b2a4:
    // 0x24b2a4: 0x0  nop
    ctx->pc = 0x24b2a4u;
    // NOP
label_24b2a8:
    // 0x24b2a8: 0x0  nop
    ctx->pc = 0x24b2a8u;
    // NOP
label_24b2ac:
    // 0x24b2ac: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24b2acu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24b2b0:
    // 0x24b2b0: 0x0  nop
    ctx->pc = 0x24b2b0u;
    // NOP
label_24b2b4:
    // 0x24b2b4: 0x0  nop
    ctx->pc = 0x24b2b4u;
    // NOP
label_24b2b8:
    // 0x24b2b8: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x24b2b8u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_24b2bc:
    // 0x24b2bc: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b2bcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24B2BC raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b2c0:
    // 0x24b2c0: 0x0  nop
    ctx->pc = 0x24b2c0u;
    // NOP
label_24b2c4:
    // 0x24b2c4: 0x0  nop
    ctx->pc = 0x24b2c4u;
    // NOP
label_24b2c8:
    // 0x24b2c8: 0x0  nop
    ctx->pc = 0x24b2c8u;
    // NOP
label_24b2cc:
    // 0x24b2cc: 0x0  nop
    ctx->pc = 0x24b2ccu;
    // NOP
label_24b2d0:
    // 0x24b2d0: 0x0  nop
    ctx->pc = 0x24b2d0u;
    // NOP
label_24b2d4:
    // 0x24b2d4: 0x0  nop
    ctx->pc = 0x24b2d4u;
    // NOP
label_24b2d8:
    // 0x24b2d8: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24b2d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b2dc:
    // 0x24b2dc: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24b2dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b2e0:
    // 0x24b2e0: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24b2e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b2e4:
    // 0x24b2e4: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b2e4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24B2E4 raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b2e8:
    // 0x24b2e8: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24b2e8u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24B2E8 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b2ec:
    // 0x24b2ec: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24b2ecu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24B2EC raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b2f0:
    // 0x24b2f0: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24b2f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b2f4:
    // 0x24b2f4: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24b2f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b2f8:
    // 0x24b2f8: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24b2f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b2fc:
    // 0x24b2fc: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b2fcu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24B2FC raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b300:
    // 0x24b300: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24b300u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24B300 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b304:
    // 0x24b304: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24b304u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24B304 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b308:
    // 0x24b308: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24b308u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b30c:
    // 0x24b30c: 0xc1b80000  ll          $t8, 0x0($t5)
    ctx->pc = 0x24b30cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b310:
    // 0x24b310: 0xc1100000  ll          $s0, 0x0($t0)
    ctx->pc = 0x24b310u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b314:
    // 0x24b314: 0x42840000  .word       0x42840000                   # INVALID     $s4, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b314u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24B314 raw=0x42840000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b318:
    // 0x24b318: 0x42100000  .word       0x42100000                   # INVALID     $s0, $s0, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24b318u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24B318 raw=0x42100000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b31c:
    // 0x24b31c: 0x41600000  .word       0x41600000                   # INVALID     $t3, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b31cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xB at 0x24B31C raw=0x41600000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b320:
    // 0x24b320: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24b320u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b324:
    // 0x24b324: 0xc1900000  ll          $s0, 0x0($t4)
    ctx->pc = 0x24b324u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b328:
    // 0x24b328: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24b328u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b32c:
    // 0x24b32c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b32cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24B32C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b330:
    // 0x24b330: 0x42340000  .word       0x42340000                   # INVALID     $s1, $s4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b330u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x11 at 0x24B330 raw=0x42340000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b334:
    // 0x24b334: 0x41d80000  .word       0x41D80000                   # INVALID     $t6, $t8, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b334u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xE at 0x24B334 raw=0x41D80000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b338:
    // 0x24b338: 0xc1e80000  ll          $t0, 0x0($t7)
    ctx->pc = 0x24b338u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b33c:
    // 0x24b33c: 0xc1500000  ll          $s0, 0x0($t2)
    ctx->pc = 0x24b33cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); SET_GPR_S32(ctx, 16, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b340:
    // 0x24b340: 0xc2e00000  ll          $zero, 0x0($s7)
    ctx->pc = 0x24b340u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b344:
    // 0x24b344: 0x42cc0000  .word       0x42CC0000                   # INVALID     $s6, $t4, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b344u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x24B344 raw=0x42CC0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b348:
    // 0x24b348: 0x42a60000  .word       0x42A60000                   # INVALID     $s5, $a2, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b348u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x15 at 0x24B348 raw=0x42A60000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b34c:
    // 0x24b34c: 0x43250000  .word       0x43250000                   # INVALID     $t9, $a1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b34cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x24B34C raw=0x43250000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b350:
    // 0x24b350: 0xc0a00000  ll          $zero, 0x0($a1)
    ctx->pc = 0x24b350u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b354:
    // 0x24b354: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24b354u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b358:
    // 0x24b358: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24b358u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b35c:
    // 0x24b35c: 0x420c0000  .word       0x420C0000                   # INVALID     $s0, $t4, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24b35cu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24B35C raw=0x420C0000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b360:
    // 0x24b360: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24b360u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24B360 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b364:
    // 0x24b364: 0x42480000  .word       0x42480000                   # INVALID     $s2, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b364u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x24B364 raw=0x42480000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b368:
    // 0x24b368: 0x43050000  .word       0x43050000                   # INVALID     $t8, $a1, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b368u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x18 at 0x24B368 raw=0x43050000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b36c:
    // 0x24b36c: 0x10009  .word       0x00010009                   # jalr        $zero, $zero # 00010000 <InstrIdType: CPU_SPECIAL>
label_24b370:
    if (ctx->pc == 0x24B370u) {
        ctx->pc = 0x24B370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B36Cu;
        // 0x24b370: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B374u;
        goto label_24b374;
    }
    ctx->pc = 0x24B36Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x24B370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B36Cu;
        // 0x24b370: 0x10011  .word       0x00010011                   # mthi        $zero # 00010000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B36Cu, 0x24B374u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24B374u;
label_24b374:
    // 0x24b374: 0x7a007a  .word       0x007A007A                   # dsrl        $zero, $k0, 1 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24b374u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 26) >> 1);
label_24b378:
    // 0x24b378: 0x8270040  j           func_9C0100
label_24b37c:
    if (ctx->pc == 0x24B37Cu) {
        ctx->pc = 0x24B37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B378u;
        // 0x24b37c: 0x8540106  j           func_1500418 (Delay Slot)
        // J 0x1500418 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B380u;
        goto label_24b380;
    }
    ctx->pc = 0x24B378u;
    ctx->pc = 0x24B37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B378u;
    // 0x24b37c: 0x8540106  j           func_1500418 (Delay Slot)
    // J 0x1500418 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x9C0100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x9C0100u, 0x24B378u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x24B380u;
label_24b380:
    // 0x24b380: 0x1970196  .word       0x01970196                   # dsrlv       $zero, $s7, $t4 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24b380u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 23) >> (GPR_U32(ctx, 12) & 0x3F));
label_24b384:
    // 0x24b384: 0x168013f  .word       0x0168013F                   # dsra32      $zero, $t0, 4 # 01600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24b384u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 8) >> (32 + 4));
label_24b388:
    // 0x24b388: 0x33007b  .word       0x0033007B                   # dsra        $zero, $s3, 1 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24b388u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 19) >> 1);
label_24b38c:
    // 0x24b38c: 0x8  jr          $zero
label_24b390:
    if (ctx->pc == 0x24B390u) {
        ctx->pc = 0x24B394u;
        goto label_24b394;
    }
    ctx->pc = 0x24B38Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B38Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x24B394u;
label_24b394:
    // 0x24b394: 0x0  nop
    ctx->pc = 0x24b394u;
    // NOP
label_24b398:
    // 0x24b398: 0x0  nop
    ctx->pc = 0x24b398u;
    // NOP
label_24b39c:
    // 0x24b39c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24b39cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24b3a0:
    // 0x24b3a0: 0x0  nop
    ctx->pc = 0x24b3a0u;
    // NOP
label_24b3a4:
    // 0x24b3a4: 0x0  nop
    ctx->pc = 0x24b3a4u;
    // NOP
label_24b3a8:
    // 0x24b3a8: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x24b3a8u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_24b3ac:
    // 0x24b3ac: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b3acu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24B3AC raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b3b0:
    // 0x24b3b0: 0x0  nop
    ctx->pc = 0x24b3b0u;
    // NOP
label_24b3b4:
    // 0x24b3b4: 0x0  nop
    ctx->pc = 0x24b3b4u;
    // NOP
label_24b3b8:
    // 0x24b3b8: 0x0  nop
    ctx->pc = 0x24b3b8u;
    // NOP
label_24b3bc:
    // 0x24b3bc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x24b3bcu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
label_24b3c0:
    // 0x24b3c0: 0x0  nop
    ctx->pc = 0x24b3c0u;
    // NOP
label_24b3c4:
    // 0x24b3c4: 0x0  nop
    ctx->pc = 0x24b3c4u;
    // NOP
label_24b3c8:
    // 0x24b3c8: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x24b3c8u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_24b3cc:
    // 0x24b3cc: 0x41400000  .word       0x41400000                   # INVALID     $t2, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b3ccu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x24B3CC raw=0x41400000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b3d0:
    // 0x24b3d0: 0x0  nop
    ctx->pc = 0x24b3d0u;
    // NOP
label_24b3d4:
    // 0x24b3d4: 0x0  nop
    ctx->pc = 0x24b3d4u;
    // NOP
label_24b3d8:
    // 0x24b3d8: 0x0  nop
    ctx->pc = 0x24b3d8u;
    // NOP
label_24b3dc:
    // 0x24b3dc: 0x0  nop
    ctx->pc = 0x24b3dcu;
    // NOP
label_24b3e0:
    // 0x24b3e0: 0x0  nop
    ctx->pc = 0x24b3e0u;
    // NOP
label_24b3e4:
    // 0x24b3e4: 0x0  nop
    ctx->pc = 0x24b3e4u;
    // NOP
label_24b3e8:
    // 0x24b3e8: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24b3e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b3ec:
    // 0x24b3ec: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24b3ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b3f0:
    // 0x24b3f0: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24b3f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b3f4:
    // 0x24b3f4: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b3f4u;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24B3F4 raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b3f8:
    // 0x24b3f8: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24b3f8u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24B3F8 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b3fc:
    // 0x24b3fc: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24b3fcu;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24B3FC raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b400:
    // 0x24b400: 0xc1600000  ll          $zero, 0x0($t3)
    ctx->pc = 0x24b400u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b404:
    // 0x24b404: 0xc1800000  ll          $zero, 0x0($t4)
    ctx->pc = 0x24b404u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b408:
    // 0x24b408: 0xc1a80000  ll          $t0, 0x0($t5)
    ctx->pc = 0x24b408u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b40c:
    // 0x24b40c: 0x42800000  .word       0x42800000                   # INVALID     $s4, $zero, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x24b40cu;
// //     throw std::runtime_error("Unhandled COP0 instruction format: 0x14 at 0x24B40C raw=0x42800000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b410:
    // 0x24b410: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24b410u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24B410 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b414:
    // 0x24b414: 0x42000000  .word       0x42000000                   # INVALID     $s0, $zero, 0x0 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x24b414u;
// //     throw std::runtime_error("Unhandled COP0 CO-OP: 0x0 at 0x24B414 raw=0x42000000"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24b418:
    // 0x24b418: 0xc0800000  ll          $zero, 0x0($a0)
    ctx->pc = 0x24b418u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_24b41c:
    // 0x24b41c: 0xc1b80000  ll          $t8, 0x0($t5)
    ctx->pc = 0x24b41cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 24, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    ctx->pc = 0x24b420u;
    return;
}

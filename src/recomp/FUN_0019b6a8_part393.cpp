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


void FUN_0019b6a8_part393(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x25ad28u: goto label_25ad28;
        case 0x25ad2cu: goto label_25ad2c;
        case 0x25ad30u: goto label_25ad30;
        case 0x25ad34u: goto label_25ad34;
        case 0x25ad38u: goto label_25ad38;
        case 0x25ad3cu: goto label_25ad3c;
        case 0x25ad40u: goto label_25ad40;
        case 0x25ad44u: goto label_25ad44;
        case 0x25ad48u: goto label_25ad48;
        case 0x25ad4cu: goto label_25ad4c;
        case 0x25ad50u: goto label_25ad50;
        case 0x25ad54u: goto label_25ad54;
        case 0x25ad58u: goto label_25ad58;
        case 0x25ad5cu: goto label_25ad5c;
        case 0x25ad60u: goto label_25ad60;
        case 0x25ad64u: goto label_25ad64;
        case 0x25ad68u: goto label_25ad68;
        case 0x25ad6cu: goto label_25ad6c;
        case 0x25ad70u: goto label_25ad70;
        case 0x25ad74u: goto label_25ad74;
        case 0x25ad78u: goto label_25ad78;
        case 0x25ad7cu: goto label_25ad7c;
        case 0x25ad80u: goto label_25ad80;
        case 0x25ad84u: goto label_25ad84;
        case 0x25ad88u: goto label_25ad88;
        case 0x25ad8cu: goto label_25ad8c;
        case 0x25ad90u: goto label_25ad90;
        case 0x25ad94u: goto label_25ad94;
        case 0x25ad98u: goto label_25ad98;
        case 0x25ad9cu: goto label_25ad9c;
        case 0x25ada0u: goto label_25ada0;
        case 0x25ada4u: goto label_25ada4;
        case 0x25ada8u: goto label_25ada8;
        case 0x25adacu: goto label_25adac;
        case 0x25adb0u: goto label_25adb0;
        case 0x25adb4u: goto label_25adb4;
        case 0x25adb8u: goto label_25adb8;
        case 0x25adbcu: goto label_25adbc;
        case 0x25adc0u: goto label_25adc0;
        case 0x25adc4u: goto label_25adc4;
        case 0x25adc8u: goto label_25adc8;
        case 0x25adccu: goto label_25adcc;
        case 0x25add0u: goto label_25add0;
        case 0x25add4u: goto label_25add4;
        case 0x25add8u: goto label_25add8;
        case 0x25addcu: goto label_25addc;
        case 0x25ade0u: goto label_25ade0;
        case 0x25ade4u: goto label_25ade4;
        case 0x25ade8u: goto label_25ade8;
        case 0x25adecu: goto label_25adec;
        case 0x25adf0u: goto label_25adf0;
        case 0x25adf4u: goto label_25adf4;
        case 0x25adf8u: goto label_25adf8;
        case 0x25adfcu: goto label_25adfc;
        case 0x25ae00u: goto label_25ae00;
        case 0x25ae04u: goto label_25ae04;
        case 0x25ae08u: goto label_25ae08;
        case 0x25ae0cu: goto label_25ae0c;
        case 0x25ae10u: goto label_25ae10;
        case 0x25ae14u: goto label_25ae14;
        case 0x25ae18u: goto label_25ae18;
        case 0x25ae1cu: goto label_25ae1c;
        case 0x25ae20u: goto label_25ae20;
        case 0x25ae24u: goto label_25ae24;
        case 0x25ae28u: goto label_25ae28;
        case 0x25ae2cu: goto label_25ae2c;
        case 0x25ae30u: goto label_25ae30;
        case 0x25ae34u: goto label_25ae34;
        case 0x25ae38u: goto label_25ae38;
        case 0x25ae3cu: goto label_25ae3c;
        case 0x25ae40u: goto label_25ae40;
        case 0x25ae44u: goto label_25ae44;
        case 0x25ae48u: goto label_25ae48;
        case 0x25ae4cu: goto label_25ae4c;
        case 0x25ae50u: goto label_25ae50;
        case 0x25ae54u: goto label_25ae54;
        case 0x25ae58u: goto label_25ae58;
        case 0x25ae5cu: goto label_25ae5c;
        case 0x25ae60u: goto label_25ae60;
        case 0x25ae64u: goto label_25ae64;
        case 0x25ae68u: goto label_25ae68;
        case 0x25ae6cu: goto label_25ae6c;
        case 0x25ae70u: goto label_25ae70;
        case 0x25ae74u: goto label_25ae74;
        case 0x25ae78u: goto label_25ae78;
        case 0x25ae7cu: goto label_25ae7c;
        case 0x25ae80u: goto label_25ae80;
        case 0x25ae84u: goto label_25ae84;
        case 0x25ae88u: goto label_25ae88;
        case 0x25ae8cu: goto label_25ae8c;
        case 0x25ae90u: goto label_25ae90;
        case 0x25ae94u: goto label_25ae94;
        case 0x25ae98u: goto label_25ae98;
        case 0x25ae9cu: goto label_25ae9c;
        case 0x25aea0u: goto label_25aea0;
        case 0x25aea4u: goto label_25aea4;
        case 0x25aea8u: goto label_25aea8;
        case 0x25aeacu: goto label_25aeac;
        case 0x25aeb0u: goto label_25aeb0;
        case 0x25aeb4u: goto label_25aeb4;
        case 0x25aeb8u: goto label_25aeb8;
        case 0x25aebcu: goto label_25aebc;
        case 0x25aec0u: goto label_25aec0;
        case 0x25aec4u: goto label_25aec4;
        case 0x25aec8u: goto label_25aec8;
        case 0x25aeccu: goto label_25aecc;
        case 0x25aed0u: goto label_25aed0;
        case 0x25aed4u: goto label_25aed4;
        case 0x25aed8u: goto label_25aed8;
        case 0x25aedcu: goto label_25aedc;
        case 0x25aee0u: goto label_25aee0;
        case 0x25aee4u: goto label_25aee4;
        case 0x25aee8u: goto label_25aee8;
        case 0x25aeecu: goto label_25aeec;
        case 0x25aef0u: goto label_25aef0;
        case 0x25aef4u: goto label_25aef4;
        case 0x25aef8u: goto label_25aef8;
        case 0x25aefcu: goto label_25aefc;
        case 0x25af00u: goto label_25af00;
        case 0x25af04u: goto label_25af04;
        case 0x25af08u: goto label_25af08;
        case 0x25af0cu: goto label_25af0c;
        case 0x25af10u: goto label_25af10;
        case 0x25af14u: goto label_25af14;
        case 0x25af18u: goto label_25af18;
        case 0x25af1cu: goto label_25af1c;
        case 0x25af20u: goto label_25af20;
        case 0x25af24u: goto label_25af24;
        case 0x25af28u: goto label_25af28;
        case 0x25af2cu: goto label_25af2c;
        case 0x25af30u: goto label_25af30;
        case 0x25af34u: goto label_25af34;
        case 0x25af38u: goto label_25af38;
        case 0x25af3cu: goto label_25af3c;
        case 0x25af40u: goto label_25af40;
        case 0x25af44u: goto label_25af44;
        case 0x25af48u: goto label_25af48;
        case 0x25af4cu: goto label_25af4c;
        case 0x25af50u: goto label_25af50;
        case 0x25af54u: goto label_25af54;
        case 0x25af58u: goto label_25af58;
        case 0x25af5cu: goto label_25af5c;
        case 0x25af60u: goto label_25af60;
        case 0x25af64u: goto label_25af64;
        case 0x25af68u: goto label_25af68;
        case 0x25af6cu: goto label_25af6c;
        case 0x25af70u: goto label_25af70;
        case 0x25af74u: goto label_25af74;
        case 0x25af78u: goto label_25af78;
        case 0x25af7cu: goto label_25af7c;
        case 0x25af80u: goto label_25af80;
        case 0x25af84u: goto label_25af84;
        case 0x25af88u: goto label_25af88;
        case 0x25af8cu: goto label_25af8c;
        case 0x25af90u: goto label_25af90;
        case 0x25af94u: goto label_25af94;
        case 0x25af98u: goto label_25af98;
        case 0x25af9cu: goto label_25af9c;
        case 0x25afa0u: goto label_25afa0;
        case 0x25afa4u: goto label_25afa4;
        case 0x25afa8u: goto label_25afa8;
        case 0x25afacu: goto label_25afac;
        case 0x25afb0u: goto label_25afb0;
        case 0x25afb4u: goto label_25afb4;
        case 0x25afb8u: goto label_25afb8;
        case 0x25afbcu: goto label_25afbc;
        case 0x25afc0u: goto label_25afc0;
        case 0x25afc4u: goto label_25afc4;
        case 0x25afc8u: goto label_25afc8;
        case 0x25afccu: goto label_25afcc;
        case 0x25afd0u: goto label_25afd0;
        case 0x25afd4u: goto label_25afd4;
        case 0x25afd8u: goto label_25afd8;
        case 0x25afdcu: goto label_25afdc;
        case 0x25afe0u: goto label_25afe0;
        case 0x25afe4u: goto label_25afe4;
        case 0x25afe8u: goto label_25afe8;
        case 0x25afecu: goto label_25afec;
        case 0x25aff0u: goto label_25aff0;
        case 0x25aff4u: goto label_25aff4;
        case 0x25aff8u: goto label_25aff8;
        case 0x25affcu: goto label_25affc;
        case 0x25b000u: goto label_25b000;
        case 0x25b004u: goto label_25b004;
        case 0x25b008u: goto label_25b008;
        case 0x25b00cu: goto label_25b00c;
        case 0x25b010u: goto label_25b010;
        case 0x25b014u: goto label_25b014;
        case 0x25b018u: goto label_25b018;
        case 0x25b01cu: goto label_25b01c;
        case 0x25b020u: goto label_25b020;
        case 0x25b024u: goto label_25b024;
        case 0x25b028u: goto label_25b028;
        case 0x25b02cu: goto label_25b02c;
        case 0x25b030u: goto label_25b030;
        case 0x25b034u: goto label_25b034;
        case 0x25b038u: goto label_25b038;
        case 0x25b03cu: goto label_25b03c;
        case 0x25b040u: goto label_25b040;
        case 0x25b044u: goto label_25b044;
        case 0x25b048u: goto label_25b048;
        case 0x25b04cu: goto label_25b04c;
        case 0x25b050u: goto label_25b050;
        case 0x25b054u: goto label_25b054;
        case 0x25b058u: goto label_25b058;
        case 0x25b05cu: goto label_25b05c;
        case 0x25b060u: goto label_25b060;
        case 0x25b064u: goto label_25b064;
        case 0x25b068u: goto label_25b068;
        case 0x25b06cu: goto label_25b06c;
        case 0x25b070u: goto label_25b070;
        case 0x25b074u: goto label_25b074;
        case 0x25b078u: goto label_25b078;
        case 0x25b07cu: goto label_25b07c;
        case 0x25b080u: goto label_25b080;
        case 0x25b084u: goto label_25b084;
        case 0x25b088u: goto label_25b088;
        case 0x25b08cu: goto label_25b08c;
        case 0x25b090u: goto label_25b090;
        case 0x25b094u: goto label_25b094;
        case 0x25b098u: goto label_25b098;
        case 0x25b09cu: goto label_25b09c;
        case 0x25b0a0u: goto label_25b0a0;
        case 0x25b0a4u: goto label_25b0a4;
        case 0x25b0a8u: goto label_25b0a8;
        case 0x25b0acu: goto label_25b0ac;
        case 0x25b0b0u: goto label_25b0b0;
        case 0x25b0b4u: goto label_25b0b4;
        case 0x25b0b8u: goto label_25b0b8;
        case 0x25b0bcu: goto label_25b0bc;
        case 0x25b0c0u: goto label_25b0c0;
        case 0x25b0c4u: goto label_25b0c4;
        case 0x25b0c8u: goto label_25b0c8;
        case 0x25b0ccu: goto label_25b0cc;
        case 0x25b0d0u: goto label_25b0d0;
        case 0x25b0d4u: goto label_25b0d4;
        case 0x25b0d8u: goto label_25b0d8;
        case 0x25b0dcu: goto label_25b0dc;
        case 0x25b0e0u: goto label_25b0e0;
        case 0x25b0e4u: goto label_25b0e4;
        case 0x25b0e8u: goto label_25b0e8;
        case 0x25b0ecu: goto label_25b0ec;
        case 0x25b0f0u: goto label_25b0f0;
        case 0x25b0f4u: goto label_25b0f4;
        case 0x25b0f8u: goto label_25b0f8;
        case 0x25b0fcu: goto label_25b0fc;
        case 0x25b100u: goto label_25b100;
        case 0x25b104u: goto label_25b104;
        case 0x25b108u: goto label_25b108;
        case 0x25b10cu: goto label_25b10c;
        case 0x25b110u: goto label_25b110;
        case 0x25b114u: goto label_25b114;
        case 0x25b118u: goto label_25b118;
        case 0x25b11cu: goto label_25b11c;
        case 0x25b120u: goto label_25b120;
        case 0x25b124u: goto label_25b124;
        case 0x25b128u: goto label_25b128;
        case 0x25b12cu: goto label_25b12c;
        case 0x25b130u: goto label_25b130;
        case 0x25b134u: goto label_25b134;
        case 0x25b138u: goto label_25b138;
        case 0x25b13cu: goto label_25b13c;
        case 0x25b140u: goto label_25b140;
        case 0x25b144u: goto label_25b144;
        case 0x25b148u: goto label_25b148;
        case 0x25b14cu: goto label_25b14c;
        case 0x25b150u: goto label_25b150;
        case 0x25b154u: goto label_25b154;
        case 0x25b158u: goto label_25b158;
        case 0x25b15cu: goto label_25b15c;
        case 0x25b160u: goto label_25b160;
        case 0x25b164u: goto label_25b164;
        case 0x25b168u: goto label_25b168;
        case 0x25b16cu: goto label_25b16c;
        case 0x25b170u: goto label_25b170;
        case 0x25b174u: goto label_25b174;
        case 0x25b178u: goto label_25b178;
        case 0x25b17cu: goto label_25b17c;
        case 0x25b180u: goto label_25b180;
        case 0x25b184u: goto label_25b184;
        case 0x25b188u: goto label_25b188;
        case 0x25b18cu: goto label_25b18c;
        case 0x25b190u: goto label_25b190;
        case 0x25b194u: goto label_25b194;
        case 0x25b198u: goto label_25b198;
        case 0x25b19cu: goto label_25b19c;
        case 0x25b1a0u: goto label_25b1a0;
        case 0x25b1a4u: goto label_25b1a4;
        case 0x25b1a8u: goto label_25b1a8;
        case 0x25b1acu: goto label_25b1ac;
        case 0x25b1b0u: goto label_25b1b0;
        case 0x25b1b4u: goto label_25b1b4;
        case 0x25b1b8u: goto label_25b1b8;
        case 0x25b1bcu: goto label_25b1bc;
        case 0x25b1c0u: goto label_25b1c0;
        case 0x25b1c4u: goto label_25b1c4;
        case 0x25b1c8u: goto label_25b1c8;
        case 0x25b1ccu: goto label_25b1cc;
        case 0x25b1d0u: goto label_25b1d0;
        case 0x25b1d4u: goto label_25b1d4;
        case 0x25b1d8u: goto label_25b1d8;
        case 0x25b1dcu: goto label_25b1dc;
        case 0x25b1e0u: goto label_25b1e0;
        case 0x25b1e4u: goto label_25b1e4;
        case 0x25b1e8u: goto label_25b1e8;
        case 0x25b1ecu: goto label_25b1ec;
        case 0x25b1f0u: goto label_25b1f0;
        case 0x25b1f4u: goto label_25b1f4;
        case 0x25b1f8u: goto label_25b1f8;
        case 0x25b1fcu: goto label_25b1fc;
        case 0x25b200u: goto label_25b200;
        case 0x25b204u: goto label_25b204;
        case 0x25b208u: goto label_25b208;
        case 0x25b20cu: goto label_25b20c;
        case 0x25b210u: goto label_25b210;
        case 0x25b214u: goto label_25b214;
        case 0x25b218u: goto label_25b218;
        case 0x25b21cu: goto label_25b21c;
        case 0x25b220u: goto label_25b220;
        case 0x25b224u: goto label_25b224;
        case 0x25b228u: goto label_25b228;
        case 0x25b22cu: goto label_25b22c;
        case 0x25b230u: goto label_25b230;
        case 0x25b234u: goto label_25b234;
        case 0x25b238u: goto label_25b238;
        case 0x25b23cu: goto label_25b23c;
        case 0x25b240u: goto label_25b240;
        case 0x25b244u: goto label_25b244;
        case 0x25b248u: goto label_25b248;
        case 0x25b24cu: goto label_25b24c;
        case 0x25b250u: goto label_25b250;
        case 0x25b254u: goto label_25b254;
        case 0x25b258u: goto label_25b258;
        case 0x25b25cu: goto label_25b25c;
        case 0x25b260u: goto label_25b260;
        case 0x25b264u: goto label_25b264;
        case 0x25b268u: goto label_25b268;
        case 0x25b26cu: goto label_25b26c;
        case 0x25b270u: goto label_25b270;
        case 0x25b274u: goto label_25b274;
        case 0x25b278u: goto label_25b278;
        case 0x25b27cu: goto label_25b27c;
        case 0x25b280u: goto label_25b280;
        case 0x25b284u: goto label_25b284;
        case 0x25b288u: goto label_25b288;
        case 0x25b28cu: goto label_25b28c;
        case 0x25b290u: goto label_25b290;
        case 0x25b294u: goto label_25b294;
        case 0x25b298u: goto label_25b298;
        case 0x25b29cu: goto label_25b29c;
        case 0x25b2a0u: goto label_25b2a0;
        case 0x25b2a4u: goto label_25b2a4;
        case 0x25b2a8u: goto label_25b2a8;
        case 0x25b2acu: goto label_25b2ac;
        case 0x25b2b0u: goto label_25b2b0;
        case 0x25b2b4u: goto label_25b2b4;
        case 0x25b2b8u: goto label_25b2b8;
        case 0x25b2bcu: goto label_25b2bc;
        case 0x25b2c0u: goto label_25b2c0;
        case 0x25b2c4u: goto label_25b2c4;
        case 0x25b2c8u: goto label_25b2c8;
        case 0x25b2ccu: goto label_25b2cc;
        case 0x25b2d0u: goto label_25b2d0;
        case 0x25b2d4u: goto label_25b2d4;
        case 0x25b2d8u: goto label_25b2d8;
        case 0x25b2dcu: goto label_25b2dc;
        case 0x25b2e0u: goto label_25b2e0;
        case 0x25b2e4u: goto label_25b2e4;
        case 0x25b2e8u: goto label_25b2e8;
        case 0x25b2ecu: goto label_25b2ec;
        case 0x25b2f0u: goto label_25b2f0;
        case 0x25b2f4u: goto label_25b2f4;
        case 0x25b2f8u: goto label_25b2f8;
        case 0x25b2fcu: goto label_25b2fc;
        case 0x25b300u: goto label_25b300;
        case 0x25b304u: goto label_25b304;
        case 0x25b308u: goto label_25b308;
        case 0x25b30cu: goto label_25b30c;
        case 0x25b310u: goto label_25b310;
        case 0x25b314u: goto label_25b314;
        case 0x25b318u: goto label_25b318;
        case 0x25b31cu: goto label_25b31c;
        case 0x25b320u: goto label_25b320;
        case 0x25b324u: goto label_25b324;
        case 0x25b328u: goto label_25b328;
        case 0x25b32cu: goto label_25b32c;
        case 0x25b330u: goto label_25b330;
        case 0x25b334u: goto label_25b334;
        case 0x25b338u: goto label_25b338;
        case 0x25b33cu: goto label_25b33c;
        case 0x25b340u: goto label_25b340;
        case 0x25b344u: goto label_25b344;
        case 0x25b348u: goto label_25b348;
        case 0x25b34cu: goto label_25b34c;
        case 0x25b350u: goto label_25b350;
        case 0x25b354u: goto label_25b354;
        case 0x25b358u: goto label_25b358;
        case 0x25b35cu: goto label_25b35c;
        case 0x25b360u: goto label_25b360;
        case 0x25b364u: goto label_25b364;
        case 0x25b368u: goto label_25b368;
        case 0x25b36cu: goto label_25b36c;
        case 0x25b370u: goto label_25b370;
        case 0x25b374u: goto label_25b374;
        case 0x25b378u: goto label_25b378;
        case 0x25b37cu: goto label_25b37c;
        case 0x25b380u: goto label_25b380;
        case 0x25b384u: goto label_25b384;
        case 0x25b388u: goto label_25b388;
        case 0x25b38cu: goto label_25b38c;
        case 0x25b390u: goto label_25b390;
        case 0x25b394u: goto label_25b394;
        case 0x25b398u: goto label_25b398;
        case 0x25b39cu: goto label_25b39c;
        case 0x25b3a0u: goto label_25b3a0;
        case 0x25b3a4u: goto label_25b3a4;
        case 0x25b3a8u: goto label_25b3a8;
        case 0x25b3acu: goto label_25b3ac;
        case 0x25b3b0u: goto label_25b3b0;
        case 0x25b3b4u: goto label_25b3b4;
        case 0x25b3b8u: goto label_25b3b8;
        case 0x25b3bcu: goto label_25b3bc;
        case 0x25b3c0u: goto label_25b3c0;
        case 0x25b3c4u: goto label_25b3c4;
        case 0x25b3c8u: goto label_25b3c8;
        case 0x25b3ccu: goto label_25b3cc;
        case 0x25b3d0u: goto label_25b3d0;
        case 0x25b3d4u: goto label_25b3d4;
        case 0x25b3d8u: goto label_25b3d8;
        case 0x25b3dcu: goto label_25b3dc;
        case 0x25b3e0u: goto label_25b3e0;
        case 0x25b3e4u: goto label_25b3e4;
        case 0x25b3e8u: goto label_25b3e8;
        case 0x25b3ecu: goto label_25b3ec;
        case 0x25b3f0u: goto label_25b3f0;
        case 0x25b3f4u: goto label_25b3f4;
        case 0x25b3f8u: goto label_25b3f8;
        case 0x25b3fcu: goto label_25b3fc;
        case 0x25b400u: goto label_25b400;
        case 0x25b404u: goto label_25b404;
        case 0x25b408u: goto label_25b408;
        case 0x25b40cu: goto label_25b40c;
        case 0x25b410u: goto label_25b410;
        case 0x25b414u: goto label_25b414;
        case 0x25b418u: goto label_25b418;
        case 0x25b41cu: goto label_25b41c;
        case 0x25b420u: goto label_25b420;
        case 0x25b424u: goto label_25b424;
        case 0x25b428u: goto label_25b428;
        case 0x25b42cu: goto label_25b42c;
        case 0x25b430u: goto label_25b430;
        case 0x25b434u: goto label_25b434;
        case 0x25b438u: goto label_25b438;
        case 0x25b43cu: goto label_25b43c;
        case 0x25b440u: goto label_25b440;
        case 0x25b444u: goto label_25b444;
        case 0x25b448u: goto label_25b448;
        case 0x25b44cu: goto label_25b44c;
        case 0x25b450u: goto label_25b450;
        case 0x25b454u: goto label_25b454;
        case 0x25b458u: goto label_25b458;
        case 0x25b45cu: goto label_25b45c;
        case 0x25b460u: goto label_25b460;
        case 0x25b464u: goto label_25b464;
        case 0x25b468u: goto label_25b468;
        case 0x25b46cu: goto label_25b46c;
        case 0x25b470u: goto label_25b470;
        case 0x25b474u: goto label_25b474;
        case 0x25b478u: goto label_25b478;
        case 0x25b47cu: goto label_25b47c;
        case 0x25b480u: goto label_25b480;
        case 0x25b484u: goto label_25b484;
        case 0x25b488u: goto label_25b488;
        case 0x25b48cu: goto label_25b48c;
        case 0x25b490u: goto label_25b490;
        case 0x25b494u: goto label_25b494;
        case 0x25b498u: goto label_25b498;
        case 0x25b49cu: goto label_25b49c;
        case 0x25b4a0u: goto label_25b4a0;
        case 0x25b4a4u: goto label_25b4a4;
        case 0x25b4a8u: goto label_25b4a8;
        case 0x25b4acu: goto label_25b4ac;
        case 0x25b4b0u: goto label_25b4b0;
        case 0x25b4b4u: goto label_25b4b4;
        case 0x25b4b8u: goto label_25b4b8;
        case 0x25b4bcu: goto label_25b4bc;
        case 0x25b4c0u: goto label_25b4c0;
        case 0x25b4c4u: goto label_25b4c4;
        case 0x25b4c8u: goto label_25b4c8;
        case 0x25b4ccu: goto label_25b4cc;
        case 0x25b4d0u: goto label_25b4d0;
        case 0x25b4d4u: goto label_25b4d4;
        case 0x25b4d8u: goto label_25b4d8;
        case 0x25b4dcu: goto label_25b4dc;
        case 0x25b4e0u: goto label_25b4e0;
        case 0x25b4e4u: goto label_25b4e4;
        case 0x25b4e8u: goto label_25b4e8;
        case 0x25b4ecu: goto label_25b4ec;
        case 0x25b4f0u: goto label_25b4f0;
        case 0x25b4f4u: goto label_25b4f4;
        default: return;
    }

label_25ad28:
    // 0x25ad28: 0x0  nop
    ctx->pc = 0x25ad28u;
    // NOP
label_25ad2c:
    // 0x25ad2c: 0x0  nop
    ctx->pc = 0x25ad2cu;
    // NOP
label_25ad30:
    // 0x25ad30: 0x45e6  .word       0x000045E6                   # xor         $t0, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ad30u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_25ad34:
    // 0x25ad34: 0x6800  sll         $t5, $zero, 0
    ctx->pc = 0x25ad34u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_25ad38:
    // 0x25ad38: 0x0  nop
    ctx->pc = 0x25ad38u;
    // NOP
label_25ad3c:
    // 0x25ad3c: 0x0  nop
    ctx->pc = 0x25ad3cu;
    // NOP
label_25ad40:
    // 0x25ad40: 0x45f3  tltu        $zero, $zero, 279
    ctx->pc = 0x25ad40u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25ad44:
    // 0x25ad44: 0x7570  tge         $zero, $zero, 469
    ctx->pc = 0x25ad44u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25ad48:
    // 0x25ad48: 0x0  nop
    ctx->pc = 0x25ad48u;
    // NOP
label_25ad4c:
    // 0x25ad4c: 0x0  nop
    ctx->pc = 0x25ad4cu;
    // NOP
label_25ad50:
    // 0x25ad50: 0x4602  srl         $t0, $zero, 24
    ctx->pc = 0x25ad50u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 0), 24));
label_25ad54:
    // 0x25ad54: 0x7050  .word       0x00007050                   # mfhi        $t6 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ad54u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_25ad58:
    // 0x25ad58: 0x0  nop
    ctx->pc = 0x25ad58u;
    // NOP
label_25ad5c:
    // 0x25ad5c: 0x0  nop
    ctx->pc = 0x25ad5cu;
    // NOP
label_25ad60:
    // 0x25ad60: 0x4611  .word       0x00004611                   # mthi        $zero # 00004600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ad60u;
    ctx->hi = GPR_U64(ctx, 0);
label_25ad64:
    // 0x25ad64: 0x6c00  sll         $t5, $zero, 16
    ctx->pc = 0x25ad64u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_25ad68:
    // 0x25ad68: 0x0  nop
    ctx->pc = 0x25ad68u;
    // NOP
label_25ad6c:
    // 0x25ad6c: 0x0  nop
    ctx->pc = 0x25ad6cu;
    // NOP
label_25ad70:
    // 0x25ad70: 0x461f  .word       0x0000461F                   # ddivu       $t0, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ad70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x25AD70 raw=0x0000461F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25ad74:
    // 0x25ad74: 0x2b50  .word       0x00002B50                   # mfhi        $a1 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ad74u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_25ad78:
    // 0x25ad78: 0x0  nop
    ctx->pc = 0x25ad78u;
    // NOP
label_25ad7c:
    // 0x25ad7c: 0x0  nop
    ctx->pc = 0x25ad7cu;
    // NOP
label_25ad80:
    // 0x25ad80: 0x4625  .word       0x00004625                   # move        $t0, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ad80u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_25ad84:
    // 0x25ad84: 0x8900  sll         $s1, $zero, 4
    ctx->pc = 0x25ad84u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_25ad88:
    // 0x25ad88: 0x0  nop
    ctx->pc = 0x25ad88u;
    // NOP
label_25ad8c:
    // 0x25ad8c: 0x0  nop
    ctx->pc = 0x25ad8cu;
    // NOP
label_25ad90:
    // 0x25ad90: 0x4637  .word       0x00004637                   # INVALID     $zero, $zero, 0x4637 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ad90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x25AD90 raw=0x00004637"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25ad94:
    // 0x25ad94: 0x7e60  .word       0x00007E60                   # add         $t7, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ad94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_25ad98:
    // 0x25ad98: 0x0  nop
    ctx->pc = 0x25ad98u;
    // NOP
label_25ad9c:
    // 0x25ad9c: 0x0  nop
    ctx->pc = 0x25ad9cu;
    // NOP
label_25ada0:
    // 0x25ada0: 0x4647  .word       0x00004647                   # srav        $t0, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ada0u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25ada4:
    // 0x25ada4: 0x7450  .word       0x00007450                   # mfhi        $t6 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ada4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_25ada8:
    // 0x25ada8: 0x0  nop
    ctx->pc = 0x25ada8u;
    // NOP
label_25adac:
    // 0x25adac: 0x0  nop
    ctx->pc = 0x25adacu;
    // NOP
label_25adb0:
    // 0x25adb0: 0x4656  .word       0x00004656                   # dsrlv       $t0, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25adb0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_25adb4:
    // 0x25adb4: 0x6800  sll         $t5, $zero, 0
    ctx->pc = 0x25adb4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_25adb8:
    // 0x25adb8: 0x0  nop
    ctx->pc = 0x25adb8u;
    // NOP
label_25adbc:
    // 0x25adbc: 0x0  nop
    ctx->pc = 0x25adbcu;
    // NOP
label_25adc0:
    // 0x25adc0: 0x4663  .word       0x00004663                   # negu        $t0, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25adc0u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_25adc4:
    // 0x25adc4: 0x7ef0  tge         $zero, $zero, 507
    ctx->pc = 0x25adc4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25adc8:
    // 0x25adc8: 0x0  nop
    ctx->pc = 0x25adc8u;
    // NOP
label_25adcc:
    // 0x25adcc: 0x0  nop
    ctx->pc = 0x25adccu;
    // NOP
label_25add0:
    // 0x25add0: 0x4673  tltu        $zero, $zero, 281
    ctx->pc = 0x25add0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25add4:
    // 0x25add4: 0x86e0  .word       0x000086E0                   # add         $s0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25add4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_25add8:
    // 0x25add8: 0x0  nop
    ctx->pc = 0x25add8u;
    // NOP
label_25addc:
    // 0x25addc: 0x0  nop
    ctx->pc = 0x25addcu;
    // NOP
label_25ade0:
    // 0x25ade0: 0x4684  .word       0x00004684                   # sllv        $t0, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ade0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25ade4:
    // 0x25ade4: 0x69e0  .word       0x000069E0                   # add         $t5, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ade4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_25ade8:
    // 0x25ade8: 0x0  nop
    ctx->pc = 0x25ade8u;
    // NOP
label_25adec:
    // 0x25adec: 0x0  nop
    ctx->pc = 0x25adecu;
    // NOP
label_25adf0:
    // 0x25adf0: 0x4692  .word       0x00004692                   # mflo        $t0 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25adf0u;
    SET_GPR_U64(ctx, 8, ctx->lo);
label_25adf4:
    // 0x25adf4: 0x78c0  sll         $t7, $zero, 3
    ctx->pc = 0x25adf4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_25adf8:
    // 0x25adf8: 0x0  nop
    ctx->pc = 0x25adf8u;
    // NOP
label_25adfc:
    // 0x25adfc: 0x0  nop
    ctx->pc = 0x25adfcu;
    // NOP
label_25ae00:
    // 0x25ae00: 0x46a2  .word       0x000046A2                   # neg         $t0, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ae00u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
label_25ae04:
    // 0x25ae04: 0x90d0  .word       0x000090D0                   # mfhi        $s2 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ae04u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_25ae08:
    // 0x25ae08: 0x0  nop
    ctx->pc = 0x25ae08u;
    // NOP
label_25ae0c:
    // 0x25ae0c: 0x0  nop
    ctx->pc = 0x25ae0cu;
    // NOP
label_25ae10:
    // 0x25ae10: 0x46b5  .word       0x000046B5                   # INVALID     $zero, $zero, 0x46B5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ae10u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x25AE10 raw=0x000046B5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25ae14:
    // 0x25ae14: 0x80b0  tge         $zero, $zero, 514
    ctx->pc = 0x25ae14u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25ae18:
    // 0x25ae18: 0x0  nop
    ctx->pc = 0x25ae18u;
    // NOP
label_25ae1c:
    // 0x25ae1c: 0x0  nop
    ctx->pc = 0x25ae1cu;
    // NOP
label_25ae20:
    // 0x25ae20: 0x46c6  .word       0x000046C6                   # srlv        $t0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ae20u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25ae24:
    // 0x25ae24: 0x6c20  .word       0x00006C20                   # add         $t5, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ae24u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_25ae28:
    // 0x25ae28: 0x0  nop
    ctx->pc = 0x25ae28u;
    // NOP
label_25ae2c:
    // 0x25ae2c: 0x0  nop
    ctx->pc = 0x25ae2cu;
    // NOP
label_25ae30:
    // 0x25ae30: 0x46d4  .word       0x000046D4                   # dsllv       $t0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ae30u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_25ae34:
    // 0x25ae34: 0x6dd0  .word       0x00006DD0                   # mfhi        $t5 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ae34u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_25ae38:
    // 0x25ae38: 0x0  nop
    ctx->pc = 0x25ae38u;
    // NOP
label_25ae3c:
    // 0x25ae3c: 0x0  nop
    ctx->pc = 0x25ae3cu;
    // NOP
label_25ae40:
    // 0x25ae40: 0x46e2  .word       0x000046E2                   # neg         $t0, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ae40u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
label_25ae44:
    // 0x25ae44: 0x2e40  sll         $a1, $zero, 25
    ctx->pc = 0x25ae44u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_25ae48:
    // 0x25ae48: 0x0  nop
    ctx->pc = 0x25ae48u;
    // NOP
label_25ae4c:
    // 0x25ae4c: 0x0  nop
    ctx->pc = 0x25ae4cu;
    // NOP
label_25ae50:
    // 0x25ae50: 0x46e8  .word       0x000046E8                   # mfsa        $t0 # 000006C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25ae50u;
    SET_GPR_U32(ctx, 8, ctx->sa);
label_25ae54:
    // 0x25ae54: 0x2800  sll         $a1, $zero, 0
    ctx->pc = 0x25ae54u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_25ae58:
    // 0x25ae58: 0x0  nop
    ctx->pc = 0x25ae58u;
    // NOP
label_25ae5c:
    // 0x25ae5c: 0x0  nop
    ctx->pc = 0x25ae5cu;
    // NOP
label_25ae60:
    // 0x25ae60: 0x46ed  .word       0x000046ED                   # daddu       $t0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ae60u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25ae64:
    // 0x25ae64: 0x3310  .word       0x00003310                   # mfhi        $a2 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ae64u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_25ae68:
    // 0x25ae68: 0x0  nop
    ctx->pc = 0x25ae68u;
    // NOP
label_25ae6c:
    // 0x25ae6c: 0x0  nop
    ctx->pc = 0x25ae6cu;
    // NOP
label_25ae70:
    // 0x25ae70: 0x46f4  teq         $zero, $zero, 283
    ctx->pc = 0x25ae70u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25ae74:
    // 0x25ae74: 0x36f0  tge         $zero, $zero, 219
    ctx->pc = 0x25ae74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25ae78:
    // 0x25ae78: 0x0  nop
    ctx->pc = 0x25ae78u;
    // NOP
label_25ae7c:
    // 0x25ae7c: 0x0  nop
    ctx->pc = 0x25ae7cu;
    // NOP
label_25ae80:
    // 0x25ae80: 0x46fb  dsra        $t0, $zero, 27
    ctx->pc = 0x25ae80u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 0) >> 27);
label_25ae84:
    // 0x25ae84: 0x2a80  sll         $a1, $zero, 10
    ctx->pc = 0x25ae84u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_25ae88:
    // 0x25ae88: 0x0  nop
    ctx->pc = 0x25ae88u;
    // NOP
label_25ae8c:
    // 0x25ae8c: 0x0  nop
    ctx->pc = 0x25ae8cu;
    // NOP
label_25ae90:
    // 0x25ae90: 0x4701  .word       0x00004701                   # INVALID     $zero, $zero, 0x4701 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ae90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x25AE90 raw=0x00004701"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25ae94:
    // 0x25ae94: 0x2dd0  .word       0x00002DD0                   # mfhi        $a1 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25ae94u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_25ae98:
    // 0x25ae98: 0x0  nop
    ctx->pc = 0x25ae98u;
    // NOP
label_25ae9c:
    // 0x25ae9c: 0x0  nop
    ctx->pc = 0x25ae9cu;
    // NOP
label_25aea0:
    // 0x25aea0: 0x4707  .word       0x00004707                   # srav        $t0, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25aea0u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25aea4:
    // 0x25aea4: 0x3660  .word       0x00003660                   # add         $a2, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25aea4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_25aea8:
    // 0x25aea8: 0x0  nop
    ctx->pc = 0x25aea8u;
    // NOP
label_25aeac:
    // 0x25aeac: 0x0  nop
    ctx->pc = 0x25aeacu;
    // NOP
label_25aeb0:
    // 0x25aeb0: 0x470e  .word       0x0000470E                   # INVALID     $zero, $zero, 0x470E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25aeb0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x25AEB0 raw=0x0000470E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25aeb4:
    // 0x25aeb4: 0x1e80  sll         $v1, $zero, 26
    ctx->pc = 0x25aeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_25aeb8:
    // 0x25aeb8: 0x0  nop
    ctx->pc = 0x25aeb8u;
    // NOP
label_25aebc:
    // 0x25aebc: 0x0  nop
    ctx->pc = 0x25aebcu;
    // NOP
label_25aec0:
    // 0x25aec0: 0x4712  .word       0x00004712                   # mflo        $t0 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25aec0u;
    SET_GPR_U64(ctx, 8, ctx->lo);
label_25aec4:
    // 0x25aec4: 0x2930  tge         $zero, $zero, 164
    ctx->pc = 0x25aec4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25aec8:
    // 0x25aec8: 0x0  nop
    ctx->pc = 0x25aec8u;
    // NOP
label_25aecc:
    // 0x25aecc: 0x0  nop
    ctx->pc = 0x25aeccu;
    // NOP
label_25aed0:
    // 0x25aed0: 0x4718  .word       0x00004718                   # mult        $t0, $zero, $zero # 00000700 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25aed0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_25aed4:
    // 0x25aed4: 0x2f90  .word       0x00002F90                   # mfhi        $a1 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25aed4u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_25aed8:
    // 0x25aed8: 0x0  nop
    ctx->pc = 0x25aed8u;
    // NOP
label_25aedc:
    // 0x25aedc: 0x0  nop
    ctx->pc = 0x25aedcu;
    // NOP
label_25aee0:
    // 0x25aee0: 0x471e  .word       0x0000471E                   # ddiv        $t0, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25aee0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x25AEE0 raw=0x0000471E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25aee4:
    // 0x25aee4: 0x30b0  tge         $zero, $zero, 194
    ctx->pc = 0x25aee4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25aee8:
    // 0x25aee8: 0x0  nop
    ctx->pc = 0x25aee8u;
    // NOP
label_25aeec:
    // 0x25aeec: 0x0  nop
    ctx->pc = 0x25aeecu;
    // NOP
label_25aef0:
    // 0x25aef0: 0x4725  .word       0x00004725                   # move        $t0, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25aef0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_25aef4:
    // 0x25aef4: 0x3f70  tge         $zero, $zero, 253
    ctx->pc = 0x25aef4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25aef8:
    // 0x25aef8: 0x0  nop
    ctx->pc = 0x25aef8u;
    // NOP
label_25aefc:
    // 0x25aefc: 0x0  nop
    ctx->pc = 0x25aefcu;
    // NOP
label_25af00:
    // 0x25af00: 0x472d  .word       0x0000472D                   # daddu       $t0, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25af00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25af04:
    // 0x25af04: 0x2a70  tge         $zero, $zero, 169
    ctx->pc = 0x25af04u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25af08:
    // 0x25af08: 0x0  nop
    ctx->pc = 0x25af08u;
    // NOP
label_25af0c:
    // 0x25af0c: 0x0  nop
    ctx->pc = 0x25af0cu;
    // NOP
label_25af10:
    // 0x25af10: 0x4733  tltu        $zero, $zero, 284
    ctx->pc = 0x25af10u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25af14:
    // 0x25af14: 0x3c50  .word       0x00003C50                   # mfhi        $a3 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25af14u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_25af18:
    // 0x25af18: 0x0  nop
    ctx->pc = 0x25af18u;
    // NOP
label_25af1c:
    // 0x25af1c: 0x0  nop
    ctx->pc = 0x25af1cu;
    // NOP
label_25af20:
    // 0x25af20: 0x473b  dsra        $t0, $zero, 28
    ctx->pc = 0x25af20u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 0) >> 28);
label_25af24:
    // 0x25af24: 0x3690  .word       0x00003690                   # mfhi        $a2 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25af24u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_25af28:
    // 0x25af28: 0x0  nop
    ctx->pc = 0x25af28u;
    // NOP
label_25af2c:
    // 0x25af2c: 0x0  nop
    ctx->pc = 0x25af2cu;
    // NOP
label_25af30:
    // 0x25af30: 0x4742  srl         $t0, $zero, 29
    ctx->pc = 0x25af30u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 0), 29));
label_25af34:
    // 0x25af34: 0x31e0  .word       0x000031E0                   # add         $a2, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25af34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_25af38:
    // 0x25af38: 0x0  nop
    ctx->pc = 0x25af38u;
    // NOP
label_25af3c:
    // 0x25af3c: 0x0  nop
    ctx->pc = 0x25af3cu;
    // NOP
label_25af40:
    // 0x25af40: 0x4749  .word       0x00004749                   # jalr        $t0, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
label_25af44:
    if (ctx->pc == 0x25AF44u) {
        ctx->pc = 0x25AF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AF40u;
        // 0x25af44: 0x3e00  sll         $a3, $zero, 24 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25AF48u;
        goto label_25af48;
    }
    ctx->pc = 0x25AF40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 8, 0x25AF48u);
        ctx->pc = 0x25AF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AF40u;
        // 0x25af44: 0x3e00  sll         $a3, $zero, 24 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25AF40u, 0x25AF48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25AF48u;
label_25af48:
    // 0x25af48: 0x0  nop
    ctx->pc = 0x25af48u;
    // NOP
label_25af4c:
    // 0x25af4c: 0x0  nop
    ctx->pc = 0x25af4cu;
    // NOP
label_25af50:
    // 0x25af50: 0x4751  .word       0x00004751                   # mthi        $zero # 00004740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25af50u;
    ctx->hi = GPR_U64(ctx, 0);
label_25af54:
    // 0x25af54: 0x1d90  .word       0x00001D90                   # mfhi        $v1 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25af54u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_25af58:
    // 0x25af58: 0x0  nop
    ctx->pc = 0x25af58u;
    // NOP
label_25af5c:
    // 0x25af5c: 0x0  nop
    ctx->pc = 0x25af5cu;
    // NOP
label_25af60:
    // 0x25af60: 0x4755  .word       0x00004755                   # INVALID     $zero, $zero, 0x4755 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25af60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x25AF60 raw=0x00004755"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25af64:
    // 0x25af64: 0x2a50  .word       0x00002A50                   # mfhi        $a1 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25af64u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_25af68:
    // 0x25af68: 0x0  nop
    ctx->pc = 0x25af68u;
    // NOP
label_25af6c:
    // 0x25af6c: 0x0  nop
    ctx->pc = 0x25af6cu;
    // NOP
label_25af70:
    // 0x25af70: 0x475b  .word       0x0000475B                   # divu        $t0, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25af70u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_25af74:
    // 0x25af74: 0x4140  sll         $t0, $zero, 5
    ctx->pc = 0x25af74u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_25af78:
    // 0x25af78: 0x0  nop
    ctx->pc = 0x25af78u;
    // NOP
label_25af7c:
    // 0x25af7c: 0x0  nop
    ctx->pc = 0x25af7cu;
    // NOP
label_25af80:
    // 0x25af80: 0x4764  .word       0x00004764                   # and         $t0, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25af80u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_25af84:
    // 0x25af84: 0x3690  .word       0x00003690                   # mfhi        $a2 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25af84u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_25af88:
    // 0x25af88: 0x0  nop
    ctx->pc = 0x25af88u;
    // NOP
label_25af8c:
    // 0x25af8c: 0x0  nop
    ctx->pc = 0x25af8cu;
    // NOP
label_25af90:
    // 0x25af90: 0x476b  .word       0x0000476B                   # sltu        $t0, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25af90u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_25af94:
    // 0x25af94: 0x2920  .word       0x00002920                   # add         $a1, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25af94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_25af98:
    // 0x25af98: 0x0  nop
    ctx->pc = 0x25af98u;
    // NOP
label_25af9c:
    // 0x25af9c: 0x0  nop
    ctx->pc = 0x25af9cu;
    // NOP
label_25afa0:
    // 0x25afa0: 0x4771  tgeu        $zero, $zero, 285
    ctx->pc = 0x25afa0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25afa4:
    // 0x25afa4: 0x1f00  sll         $v1, $zero, 28
    ctx->pc = 0x25afa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_25afa8:
    // 0x25afa8: 0x0  nop
    ctx->pc = 0x25afa8u;
    // NOP
label_25afac:
    // 0x25afac: 0x0  nop
    ctx->pc = 0x25afacu;
    // NOP
label_25afb0:
    // 0x25afb0: 0x4775  .word       0x00004775                   # INVALID     $zero, $zero, 0x4775 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25afb0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x25AFB0 raw=0x00004775"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25afb4:
    // 0x25afb4: 0x3620  .word       0x00003620                   # add         $a2, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25afb4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_25afb8:
    // 0x25afb8: 0x0  nop
    ctx->pc = 0x25afb8u;
    // NOP
label_25afbc:
    // 0x25afbc: 0x0  nop
    ctx->pc = 0x25afbcu;
    // NOP
label_25afc0:
    // 0x25afc0: 0x477c  dsll32      $t0, $zero, 29
    ctx->pc = 0x25afc0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) << (32 + 29));
label_25afc4:
    // 0x25afc4: 0x3c90  .word       0x00003C90                   # mfhi        $a3 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25afc4u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_25afc8:
    // 0x25afc8: 0x0  nop
    ctx->pc = 0x25afc8u;
    // NOP
label_25afcc:
    // 0x25afcc: 0x0  nop
    ctx->pc = 0x25afccu;
    // NOP
label_25afd0:
    // 0x25afd0: 0x4784  .word       0x00004784                   # sllv        $t0, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25afd0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25afd4:
    // 0x25afd4: 0x4320  .word       0x00004320                   # add         $t0, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25afd4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_25afd8:
    // 0x25afd8: 0x0  nop
    ctx->pc = 0x25afd8u;
    // NOP
label_25afdc:
    // 0x25afdc: 0x0  nop
    ctx->pc = 0x25afdcu;
    // NOP
label_25afe0:
    // 0x25afe0: 0x478d  break       0, 286
    ctx->pc = 0x25afe0u;
    runtime->handleBreak(rdram, ctx);
label_25afe4:
    // 0x25afe4: 0x2c50  .word       0x00002C50                   # mfhi        $a1 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25afe4u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_25afe8:
    // 0x25afe8: 0x0  nop
    ctx->pc = 0x25afe8u;
    // NOP
label_25afec:
    // 0x25afec: 0x0  nop
    ctx->pc = 0x25afecu;
    // NOP
label_25aff0:
    // 0x25aff0: 0x4793  .word       0x00004793                   # mtlo        $zero # 00004780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25aff0u;
    ctx->lo = GPR_U64(ctx, 0);
label_25aff4:
    // 0x25aff4: 0x34c0  sll         $a2, $zero, 19
    ctx->pc = 0x25aff4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_25aff8:
    // 0x25aff8: 0x0  nop
    ctx->pc = 0x25aff8u;
    // NOP
label_25affc:
    // 0x25affc: 0x0  nop
    ctx->pc = 0x25affcu;
    // NOP
label_25b000:
    // 0x25b000: 0x479a  .word       0x0000479A                   # div         $t0, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b000u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_25b004:
    // 0x25b004: 0x27c0  sll         $a0, $zero, 31
    ctx->pc = 0x25b004u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_25b008:
    // 0x25b008: 0x0  nop
    ctx->pc = 0x25b008u;
    // NOP
label_25b00c:
    // 0x25b00c: 0x0  nop
    ctx->pc = 0x25b00cu;
    // NOP
label_25b010:
    // 0x25b010: 0x479f  .word       0x0000479F                   # ddivu       $t0, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b010u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x25B010 raw=0x0000479F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25b014:
    // 0x25b014: 0x3c70  tge         $zero, $zero, 241
    ctx->pc = 0x25b014u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25b018:
    // 0x25b018: 0x0  nop
    ctx->pc = 0x25b018u;
    // NOP
label_25b01c:
    // 0x25b01c: 0x0  nop
    ctx->pc = 0x25b01cu;
    // NOP
label_25b020:
    // 0x25b020: 0x47a7  .word       0x000047A7                   # not         $t0, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b020u;
    SET_GPR_U64(ctx, 8, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_25b024:
    // 0x25b024: 0x3b90  .word       0x00003B90                   # mfhi        $a3 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b024u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_25b028:
    // 0x25b028: 0x0  nop
    ctx->pc = 0x25b028u;
    // NOP
label_25b02c:
    // 0x25b02c: 0x0  nop
    ctx->pc = 0x25b02cu;
    // NOP
label_25b030:
    // 0x25b030: 0x47af  .word       0x000047AF                   # dsubu       $t0, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b030u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_25b034:
    // 0x25b034: 0x4280  sll         $t0, $zero, 10
    ctx->pc = 0x25b034u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_25b038:
    // 0x25b038: 0x0  nop
    ctx->pc = 0x25b038u;
    // NOP
label_25b03c:
    // 0x25b03c: 0x0  nop
    ctx->pc = 0x25b03cu;
    // NOP
label_25b040:
    // 0x25b040: 0x47b8  dsll        $t0, $zero, 30
    ctx->pc = 0x25b040u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) << 30);
label_25b044:
    // 0x25b044: 0x3cc0  sll         $a3, $zero, 19
    ctx->pc = 0x25b044u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_25b048:
    // 0x25b048: 0x0  nop
    ctx->pc = 0x25b048u;
    // NOP
label_25b04c:
    // 0x25b04c: 0x0  nop
    ctx->pc = 0x25b04cu;
    // NOP
label_25b050:
    // 0x25b050: 0x47c0  sll         $t0, $zero, 31
    ctx->pc = 0x25b050u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_25b054:
    // 0x25b054: 0x3810  mfhi        $a3
    ctx->pc = 0x25b054u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_25b058:
    // 0x25b058: 0x0  nop
    ctx->pc = 0x25b058u;
    // NOP
label_25b05c:
    // 0x25b05c: 0x0  nop
    ctx->pc = 0x25b05cu;
    // NOP
label_25b060:
    // 0x25b060: 0x47c8  .word       0x000047C8                   # jr          $zero # 000047C0 <InstrIdType: CPU_SPECIAL>
label_25b064:
    if (ctx->pc == 0x25B064u) {
        ctx->pc = 0x25B064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B060u;
        // 0x25b064: 0x3c70  tge         $zero, $zero, 241 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B068u;
        goto label_25b068;
    }
    ctx->pc = 0x25B060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x25B064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B060u;
        // 0x25b064: 0x3c70  tge         $zero, $zero, 241 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B060u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25B068u;
label_25b068:
    // 0x25b068: 0x0  nop
    ctx->pc = 0x25b068u;
    // NOP
label_25b06c:
    // 0x25b06c: 0x0  nop
    ctx->pc = 0x25b06cu;
    // NOP
label_25b070:
    // 0x25b070: 0x47d0  .word       0x000047D0                   # mfhi        $t0 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b070u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_25b074:
    // 0x25b074: 0x3e50  .word       0x00003E50                   # mfhi        $a3 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b074u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_25b078:
    // 0x25b078: 0x0  nop
    ctx->pc = 0x25b078u;
    // NOP
label_25b07c:
    // 0x25b07c: 0x0  nop
    ctx->pc = 0x25b07cu;
    // NOP
label_25b080:
    // 0x25b080: 0x47d8  .word       0x000047D8                   # mult        $t0, $zero, $zero # 000007C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25b080u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_25b084:
    // 0x25b084: 0x3670  tge         $zero, $zero, 217
    ctx->pc = 0x25b084u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25b088:
    // 0x25b088: 0x0  nop
    ctx->pc = 0x25b088u;
    // NOP
label_25b08c:
    // 0x25b08c: 0x0  nop
    ctx->pc = 0x25b08cu;
    // NOP
label_25b090:
    // 0x25b090: 0x47df  .word       0x000047DF                   # ddivu       $t0, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b090u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x25B090 raw=0x000047DF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25b094:
    // 0x25b094: 0x56f0  tge         $zero, $zero, 347
    ctx->pc = 0x25b094u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25b098:
    // 0x25b098: 0x0  nop
    ctx->pc = 0x25b098u;
    // NOP
label_25b09c:
    // 0x25b09c: 0x0  nop
    ctx->pc = 0x25b09cu;
    // NOP
label_25b0a0:
    // 0x25b0a0: 0x47ea  .word       0x000047EA                   # slt         $t0, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b0a0u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_25b0a4:
    // 0x25b0a4: 0x3d00  sll         $a3, $zero, 20
    ctx->pc = 0x25b0a4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_25b0a8:
    // 0x25b0a8: 0x0  nop
    ctx->pc = 0x25b0a8u;
    // NOP
label_25b0ac:
    // 0x25b0ac: 0x0  nop
    ctx->pc = 0x25b0acu;
    // NOP
label_25b0b0:
    // 0x25b0b0: 0x47f2  tlt         $zero, $zero, 287
    ctx->pc = 0x25b0b0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25b0b4:
    // 0x25b0b4: 0x43a0  .word       0x000043A0                   # add         $t0, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b0b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_25b0b8:
    // 0x25b0b8: 0x0  nop
    ctx->pc = 0x25b0b8u;
    // NOP
label_25b0bc:
    // 0x25b0bc: 0x0  nop
    ctx->pc = 0x25b0bcu;
    // NOP
label_25b0c0:
    // 0x25b0c0: 0x47fb  dsra        $t0, $zero, 31
    ctx->pc = 0x25b0c0u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 0) >> 31);
label_25b0c4:
    // 0x25b0c4: 0x28f0  tge         $zero, $zero, 163
    ctx->pc = 0x25b0c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25b0c8:
    // 0x25b0c8: 0x0  nop
    ctx->pc = 0x25b0c8u;
    // NOP
label_25b0cc:
    // 0x25b0cc: 0x0  nop
    ctx->pc = 0x25b0ccu;
    // NOP
label_25b0d0:
    // 0x25b0d0: 0x4801  .word       0x00004801                   # INVALID     $zero, $zero, 0x4801 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b0d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x25B0D0 raw=0x00004801"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25b0d4:
    // 0x25b0d4: 0x9570  tge         $zero, $zero, 597
    ctx->pc = 0x25b0d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25b0d8:
    // 0x25b0d8: 0x0  nop
    ctx->pc = 0x25b0d8u;
    // NOP
label_25b0dc:
    // 0x25b0dc: 0x0  nop
    ctx->pc = 0x25b0dcu;
    // NOP
label_25b0e0:
    // 0x25b0e0: 0x4814  dsllv       $t1, $zero, $zero
    ctx->pc = 0x25b0e0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_25b0e4:
    // 0x25b0e4: 0xc360  .word       0x0000C360                   # add         $t8, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b0e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_25b0e8:
    // 0x25b0e8: 0x0  nop
    ctx->pc = 0x25b0e8u;
    // NOP
label_25b0ec:
    // 0x25b0ec: 0x0  nop
    ctx->pc = 0x25b0ecu;
    // NOP
label_25b0f0:
    // 0x25b0f0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x25b0f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25b0f4:
    // 0x25b0f4: 0x73a0  .word       0x000073A0                   # add         $t6, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b0f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_25b0f8:
    // 0x25b0f8: 0x0  nop
    ctx->pc = 0x25b0f8u;
    // NOP
label_25b0fc:
    // 0x25b0fc: 0x0  nop
    ctx->pc = 0x25b0fcu;
    // NOP
label_25b100:
    // 0x25b100: 0x483c  dsll32      $t1, $zero, 0
    ctx->pc = 0x25b100u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) << (32 + 0));
label_25b104:
    // 0x25b104: 0x68e0  .word       0x000068E0                   # add         $t5, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b104u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_25b108:
    // 0x25b108: 0x0  nop
    ctx->pc = 0x25b108u;
    // NOP
label_25b10c:
    // 0x25b10c: 0x0  nop
    ctx->pc = 0x25b10cu;
    // NOP
label_25b110:
    // 0x25b110: 0x484a  .word       0x0000484A                   # movz        $t1, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b110u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
label_25b114:
    // 0x25b114: 0xc150  .word       0x0000C150                   # mfhi        $t8 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b114u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_25b118:
    // 0x25b118: 0x0  nop
    ctx->pc = 0x25b118u;
    // NOP
label_25b11c:
    // 0x25b11c: 0x0  nop
    ctx->pc = 0x25b11cu;
    // NOP
label_25b120:
    // 0x25b120: 0x4863  .word       0x00004863                   # negu        $t1, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b120u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_25b124:
    // 0x25b124: 0x9450  .word       0x00009450                   # mfhi        $s2 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b124u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_25b128:
    // 0x25b128: 0x0  nop
    ctx->pc = 0x25b128u;
    // NOP
label_25b12c:
    // 0x25b12c: 0x0  nop
    ctx->pc = 0x25b12cu;
    // NOP
label_25b130:
    // 0x25b130: 0x4876  tne         $zero, $zero, 289
    ctx->pc = 0x25b130u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25b134:
    // 0x25b134: 0xbd30  tge         $zero, $zero, 756
    ctx->pc = 0x25b134u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25b138:
    // 0x25b138: 0x0  nop
    ctx->pc = 0x25b138u;
    // NOP
label_25b13c:
    // 0x25b13c: 0x0  nop
    ctx->pc = 0x25b13cu;
    // NOP
label_25b140:
    // 0x25b140: 0x488e  .word       0x0000488E                   # INVALID     $zero, $zero, 0x488E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b140u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x25B140 raw=0x0000488E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25b144:
    // 0x25b144: 0x8210  .word       0x00008210                   # mfhi        $s0 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b144u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_25b148:
    // 0x25b148: 0x0  nop
    ctx->pc = 0x25b148u;
    // NOP
label_25b14c:
    // 0x25b14c: 0x0  nop
    ctx->pc = 0x25b14cu;
    // NOP
label_25b150:
    // 0x25b150: 0x489f  .word       0x0000489F                   # ddivu       $t1, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b150u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x25B150 raw=0x0000489F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25b154:
    // 0x25b154: 0x60d0  .word       0x000060D0                   # mfhi        $t4 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b154u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_25b158:
    // 0x25b158: 0x0  nop
    ctx->pc = 0x25b158u;
    // NOP
label_25b15c:
    // 0x25b15c: 0x0  nop
    ctx->pc = 0x25b15cu;
    // NOP
label_25b160:
    // 0x25b160: 0x48ac  .word       0x000048AC                   # dadd        $t1, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b160u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, r); }
label_25b164:
    // 0x25b164: 0x90a0  .word       0x000090A0                   # add         $s2, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b164u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_25b168:
    // 0x25b168: 0x0  nop
    ctx->pc = 0x25b168u;
    // NOP
label_25b16c:
    // 0x25b16c: 0x0  nop
    ctx->pc = 0x25b16cu;
    // NOP
label_25b170:
    // 0x25b170: 0x48bf  dsra32      $t1, $zero, 2
    ctx->pc = 0x25b170u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 0) >> (32 + 2));
label_25b174:
    // 0x25b174: 0x80c0  sll         $s0, $zero, 3
    ctx->pc = 0x25b174u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_25b178:
    // 0x25b178: 0x0  nop
    ctx->pc = 0x25b178u;
    // NOP
label_25b17c:
    // 0x25b17c: 0x0  nop
    ctx->pc = 0x25b17cu;
    // NOP
label_25b180:
    // 0x25b180: 0x48d0  .word       0x000048D0                   # mfhi        $t1 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b180u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_25b184:
    // 0x25b184: 0x9870  tge         $zero, $zero, 609
    ctx->pc = 0x25b184u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25b188:
    // 0x25b188: 0x0  nop
    ctx->pc = 0x25b188u;
    // NOP
label_25b18c:
    // 0x25b18c: 0x0  nop
    ctx->pc = 0x25b18cu;
    // NOP
label_25b190:
    // 0x25b190: 0x48e4  .word       0x000048E4                   # and         $t1, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b190u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_25b194:
    // 0x25b194: 0x8dc0  sll         $s1, $zero, 23
    ctx->pc = 0x25b194u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_25b198:
    // 0x25b198: 0x0  nop
    ctx->pc = 0x25b198u;
    // NOP
label_25b19c:
    // 0x25b19c: 0x0  nop
    ctx->pc = 0x25b19cu;
    // NOP
label_25b1a0:
    // 0x25b1a0: 0x48f6  tne         $zero, $zero, 291
    ctx->pc = 0x25b1a0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25b1a4:
    // 0x25b1a4: 0xd2e0  .word       0x0000D2E0                   # add         $k0, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b1a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_25b1a8:
    // 0x25b1a8: 0x0  nop
    ctx->pc = 0x25b1a8u;
    // NOP
label_25b1ac:
    // 0x25b1ac: 0x0  nop
    ctx->pc = 0x25b1acu;
    // NOP
label_25b1b0:
    // 0x25b1b0: 0x4911  .word       0x00004911                   # mthi        $zero # 00004900 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b1b0u;
    ctx->hi = GPR_U64(ctx, 0);
label_25b1b4:
    // 0x25b1b4: 0x64c0  sll         $t4, $zero, 19
    ctx->pc = 0x25b1b4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_25b1b8:
    // 0x25b1b8: 0x0  nop
    ctx->pc = 0x25b1b8u;
    // NOP
label_25b1bc:
    // 0x25b1bc: 0x0  nop
    ctx->pc = 0x25b1bcu;
    // NOP
label_25b1c0:
    // 0x25b1c0: 0x491e  .word       0x0000491E                   # ddiv        $t1, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b1c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x25B1C0 raw=0x0000491E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25b1c4:
    // 0x25b1c4: 0x6d50  .word       0x00006D50                   # mfhi        $t5 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b1c4u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_25b1c8:
    // 0x25b1c8: 0x0  nop
    ctx->pc = 0x25b1c8u;
    // NOP
label_25b1cc:
    // 0x25b1cc: 0x0  nop
    ctx->pc = 0x25b1ccu;
    // NOP
label_25b1d0:
    // 0x25b1d0: 0x492c  .word       0x0000492C                   # dadd        $t1, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b1d0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, r); }
label_25b1d4:
    // 0x25b1d4: 0x8570  tge         $zero, $zero, 533
    ctx->pc = 0x25b1d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25b1d8:
    // 0x25b1d8: 0x0  nop
    ctx->pc = 0x25b1d8u;
    // NOP
label_25b1dc:
    // 0x25b1dc: 0x0  nop
    ctx->pc = 0x25b1dcu;
    // NOP
label_25b1e0:
    // 0x25b1e0: 0x493d  .word       0x0000493D                   # INVALID     $zero, $zero, 0x493D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b1e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x25B1E0 raw=0x0000493D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25b1e4:
    // 0x25b1e4: 0x6d90  .word       0x00006D90                   # mfhi        $t5 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b1e4u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_25b1e8:
    // 0x25b1e8: 0x0  nop
    ctx->pc = 0x25b1e8u;
    // NOP
label_25b1ec:
    // 0x25b1ec: 0x0  nop
    ctx->pc = 0x25b1ecu;
    // NOP
label_25b1f0:
    // 0x25b1f0: 0x494b  .word       0x0000494B                   # movn        $t1, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b1f0u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
label_25b1f4:
    // 0x25b1f4: 0x6e20  .word       0x00006E20                   # add         $t5, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b1f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_25b1f8:
    // 0x25b1f8: 0x0  nop
    ctx->pc = 0x25b1f8u;
    // NOP
label_25b1fc:
    // 0x25b1fc: 0x0  nop
    ctx->pc = 0x25b1fcu;
    // NOP
label_25b200:
    // 0x25b200: 0x4959  .word       0x00004959                   # multu       $zero, $zero # 00004940 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b200u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_25b204:
    // 0x25b204: 0x8f70  tge         $zero, $zero, 573
    ctx->pc = 0x25b204u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25b208:
    // 0x25b208: 0x0  nop
    ctx->pc = 0x25b208u;
    // NOP
label_25b20c:
    // 0x25b20c: 0x0  nop
    ctx->pc = 0x25b20cu;
    // NOP
label_25b210:
    // 0x25b210: 0x496b  .word       0x0000496B                   # sltu        $t1, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b210u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_25b214:
    // 0x25b214: 0x7c00  sll         $t7, $zero, 16
    ctx->pc = 0x25b214u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_25b218:
    // 0x25b218: 0x0  nop
    ctx->pc = 0x25b218u;
    // NOP
label_25b21c:
    // 0x25b21c: 0x0  nop
    ctx->pc = 0x25b21cu;
    // NOP
label_25b220:
    // 0x25b220: 0x497b  dsra        $t1, $zero, 5
    ctx->pc = 0x25b220u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 0) >> 5);
label_25b224:
    // 0x25b224: 0x5990  .word       0x00005990                   # mfhi        $t3 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b224u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_25b228:
    // 0x25b228: 0x0  nop
    ctx->pc = 0x25b228u;
    // NOP
label_25b22c:
    // 0x25b22c: 0x0  nop
    ctx->pc = 0x25b22cu;
    // NOP
label_25b230:
    // 0x25b230: 0x4987  .word       0x00004987                   # srav        $t1, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b230u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25b234:
    // 0x25b234: 0x9280  sll         $s2, $zero, 10
    ctx->pc = 0x25b234u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_25b238:
    // 0x25b238: 0x0  nop
    ctx->pc = 0x25b238u;
    // NOP
label_25b23c:
    // 0x25b23c: 0x0  nop
    ctx->pc = 0x25b23cu;
    // NOP
label_25b240:
    // 0x25b240: 0x499a  .word       0x0000499A                   # div         $t1, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b240u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_25b244:
    // 0x25b244: 0xbac0  sll         $s7, $zero, 11
    ctx->pc = 0x25b244u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_25b248:
    // 0x25b248: 0x0  nop
    ctx->pc = 0x25b248u;
    // NOP
label_25b24c:
    // 0x25b24c: 0x0  nop
    ctx->pc = 0x25b24cu;
    // NOP
label_25b250:
    // 0x25b250: 0x49b2  tlt         $zero, $zero, 294
    ctx->pc = 0x25b250u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25b254:
    // 0x25b254: 0x5be0  .word       0x00005BE0                   # add         $t3, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b254u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_25b258:
    // 0x25b258: 0x0  nop
    ctx->pc = 0x25b258u;
    // NOP
label_25b25c:
    // 0x25b25c: 0x0  nop
    ctx->pc = 0x25b25cu;
    // NOP
label_25b260:
    // 0x25b260: 0x49be  dsrl32      $t1, $zero, 6
    ctx->pc = 0x25b260u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) >> (32 + 6));
label_25b264:
    // 0x25b264: 0x9490  .word       0x00009490                   # mfhi        $s2 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b264u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_25b268:
    // 0x25b268: 0x0  nop
    ctx->pc = 0x25b268u;
    // NOP
label_25b26c:
    // 0x25b26c: 0x0  nop
    ctx->pc = 0x25b26cu;
    // NOP
label_25b270:
    // 0x25b270: 0x49d1  .word       0x000049D1                   # mthi        $zero # 000049C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b270u;
    ctx->hi = GPR_U64(ctx, 0);
label_25b274:
    // 0x25b274: 0x8470  tge         $zero, $zero, 529
    ctx->pc = 0x25b274u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25b278:
    // 0x25b278: 0x0  nop
    ctx->pc = 0x25b278u;
    // NOP
label_25b27c:
    // 0x25b27c: 0x0  nop
    ctx->pc = 0x25b27cu;
    // NOP
label_25b280:
    // 0x25b280: 0x49e2  .word       0x000049E2                   # neg         $t1, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b280u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
label_25b284:
    // 0x25b284: 0x7600  sll         $t6, $zero, 24
    ctx->pc = 0x25b284u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_25b288:
    // 0x25b288: 0x0  nop
    ctx->pc = 0x25b288u;
    // NOP
label_25b28c:
    // 0x25b28c: 0x0  nop
    ctx->pc = 0x25b28cu;
    // NOP
label_25b290:
    // 0x25b290: 0x49f1  tgeu        $zero, $zero, 295
    ctx->pc = 0x25b290u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25b294:
    // 0x25b294: 0x7470  tge         $zero, $zero, 465
    ctx->pc = 0x25b294u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25b298:
    // 0x25b298: 0x0  nop
    ctx->pc = 0x25b298u;
    // NOP
label_25b29c:
    // 0x25b29c: 0x0  nop
    ctx->pc = 0x25b29cu;
    // NOP
label_25b2a0:
    // 0x25b2a0: 0x4a00  sll         $t1, $zero, 8
    ctx->pc = 0x25b2a0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_25b2a4:
    // 0x25b2a4: 0x68c0  sll         $t5, $zero, 3
    ctx->pc = 0x25b2a4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_25b2a8:
    // 0x25b2a8: 0x0  nop
    ctx->pc = 0x25b2a8u;
    // NOP
label_25b2ac:
    // 0x25b2ac: 0x0  nop
    ctx->pc = 0x25b2acu;
    // NOP
label_25b2b0:
    // 0x25b2b0: 0x4a0e  .word       0x00004A0E                   # INVALID     $zero, $zero, 0x4A0E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b2b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x25B2B0 raw=0x00004A0E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25b2b4:
    // 0x25b2b4: 0x55d0  .word       0x000055D0                   # mfhi        $t2 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b2b4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_25b2b8:
    // 0x25b2b8: 0x0  nop
    ctx->pc = 0x25b2b8u;
    // NOP
label_25b2bc:
    // 0x25b2bc: 0x0  nop
    ctx->pc = 0x25b2bcu;
    // NOP
label_25b2c0:
    // 0x25b2c0: 0x4a19  .word       0x00004A19                   # multu       $zero, $zero # 00004A00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b2c0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_25b2c4:
    // 0x25b2c4: 0x8650  .word       0x00008650                   # mfhi        $s0 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b2c4u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_25b2c8:
    // 0x25b2c8: 0x0  nop
    ctx->pc = 0x25b2c8u;
    // NOP
label_25b2cc:
    // 0x25b2cc: 0x0  nop
    ctx->pc = 0x25b2ccu;
    // NOP
label_25b2d0:
    // 0x25b2d0: 0x4a2a  .word       0x00004A2A                   # slt         $t1, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b2d0u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_25b2d4:
    // 0x25b2d4: 0x6260  .word       0x00006260                   # add         $t4, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b2d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_25b2d8:
    // 0x25b2d8: 0x0  nop
    ctx->pc = 0x25b2d8u;
    // NOP
label_25b2dc:
    // 0x25b2dc: 0x0  nop
    ctx->pc = 0x25b2dcu;
    // NOP
label_25b2e0:
    // 0x25b2e0: 0x4a37  .word       0x00004A37                   # INVALID     $zero, $zero, 0x4A37 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b2e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x25B2E0 raw=0x00004A37"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25b2e4:
    // 0x25b2e4: 0x9520  .word       0x00009520                   # add         $s2, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b2e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_25b2e8:
    // 0x25b2e8: 0x0  nop
    ctx->pc = 0x25b2e8u;
    // NOP
label_25b2ec:
    // 0x25b2ec: 0x0  nop
    ctx->pc = 0x25b2ecu;
    // NOP
label_25b2f0:
    // 0x25b2f0: 0x4a4a  .word       0x00004A4A                   # movz        $t1, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b2f0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
label_25b2f4:
    // 0x25b2f4: 0xa350  .word       0x0000A350                   # mfhi        $s4 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b2f4u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_25b2f8:
    // 0x25b2f8: 0x0  nop
    ctx->pc = 0x25b2f8u;
    // NOP
label_25b2fc:
    // 0x25b2fc: 0x0  nop
    ctx->pc = 0x25b2fcu;
    // NOP
label_25b300:
    // 0x25b300: 0x4a5f  .word       0x00004A5F                   # ddivu       $t1, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b300u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x25B300 raw=0x00004A5F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25b304:
    // 0x25b304: 0xc4c0  sll         $t8, $zero, 19
    ctx->pc = 0x25b304u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_25b308:
    // 0x25b308: 0x0  nop
    ctx->pc = 0x25b308u;
    // NOP
label_25b30c:
    // 0x25b30c: 0x0  nop
    ctx->pc = 0x25b30cu;
    // NOP
label_25b310:
    // 0x25b310: 0x4a78  dsll        $t1, $zero, 9
    ctx->pc = 0x25b310u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) << 9);
label_25b314:
    // 0x25b314: 0x8dc0  sll         $s1, $zero, 23
    ctx->pc = 0x25b314u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_25b318:
    // 0x25b318: 0x0  nop
    ctx->pc = 0x25b318u;
    // NOP
label_25b31c:
    // 0x25b31c: 0x0  nop
    ctx->pc = 0x25b31cu;
    // NOP
label_25b320:
    // 0x25b320: 0x4a8a  .word       0x00004A8A                   # movz        $t1, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b320u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
label_25b324:
    // 0x25b324: 0x90f0  tge         $zero, $zero, 579
    ctx->pc = 0x25b324u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25b328:
    // 0x25b328: 0x0  nop
    ctx->pc = 0x25b328u;
    // NOP
label_25b32c:
    // 0x25b32c: 0x0  nop
    ctx->pc = 0x25b32cu;
    // NOP
label_25b330:
    // 0x25b330: 0x4a9d  .word       0x00004A9D                   # dmultu      $zero, $zero # 00004A80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b330u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x25B330 raw=0x00004A9D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25b334:
    // 0x25b334: 0x7f30  tge         $zero, $zero, 508
    ctx->pc = 0x25b334u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25b338:
    // 0x25b338: 0x0  nop
    ctx->pc = 0x25b338u;
    // NOP
label_25b33c:
    // 0x25b33c: 0x0  nop
    ctx->pc = 0x25b33cu;
    // NOP
label_25b340:
    // 0x25b340: 0x4aad  .word       0x00004AAD                   # daddu       $t1, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b340u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25b344:
    // 0x25b344: 0x9a60  .word       0x00009A60                   # add         $s3, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b344u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_25b348:
    // 0x25b348: 0x0  nop
    ctx->pc = 0x25b348u;
    // NOP
label_25b34c:
    // 0x25b34c: 0x0  nop
    ctx->pc = 0x25b34cu;
    // NOP
label_25b350:
    // 0x25b350: 0x4ac1  .word       0x00004AC1                   # INVALID     $zero, $zero, 0x4AC1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b350u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x25B350 raw=0x00004AC1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25b354:
    // 0x25b354: 0xa090  .word       0x0000A090                   # mfhi        $s4 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b354u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_25b358:
    // 0x25b358: 0x0  nop
    ctx->pc = 0x25b358u;
    // NOP
label_25b35c:
    // 0x25b35c: 0x0  nop
    ctx->pc = 0x25b35cu;
    // NOP
label_25b360:
    // 0x25b360: 0x4ad6  .word       0x00004AD6                   # dsrlv       $t1, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b360u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_25b364:
    // 0x25b364: 0x8370  tge         $zero, $zero, 525
    ctx->pc = 0x25b364u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25b368:
    // 0x25b368: 0x0  nop
    ctx->pc = 0x25b368u;
    // NOP
label_25b36c:
    // 0x25b36c: 0x0  nop
    ctx->pc = 0x25b36cu;
    // NOP
label_25b370:
    // 0x25b370: 0x4ae7  .word       0x00004AE7                   # not         $t1, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b370u;
    SET_GPR_U64(ctx, 9, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_25b374:
    // 0x25b374: 0x5f90  .word       0x00005F90                   # mfhi        $t3 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b374u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_25b378:
    // 0x25b378: 0x0  nop
    ctx->pc = 0x25b378u;
    // NOP
label_25b37c:
    // 0x25b37c: 0x0  nop
    ctx->pc = 0x25b37cu;
    // NOP
label_25b380:
    // 0x25b380: 0x4af3  tltu        $zero, $zero, 299
    ctx->pc = 0x25b380u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25b384:
    // 0x25b384: 0x7100  sll         $t6, $zero, 4
    ctx->pc = 0x25b384u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_25b388:
    // 0x25b388: 0x0  nop
    ctx->pc = 0x25b388u;
    // NOP
label_25b38c:
    // 0x25b38c: 0x0  nop
    ctx->pc = 0x25b38cu;
    // NOP
label_25b390:
    // 0x25b390: 0x4b02  srl         $t1, $zero, 12
    ctx->pc = 0x25b390u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 0), 12));
label_25b394:
    // 0x25b394: 0x4b40  sll         $t1, $zero, 13
    ctx->pc = 0x25b394u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
label_25b398:
    // 0x25b398: 0x0  nop
    ctx->pc = 0x25b398u;
    // NOP
label_25b39c:
    // 0x25b39c: 0x0  nop
    ctx->pc = 0x25b39cu;
    // NOP
label_25b3a0:
    // 0x25b3a0: 0x4b0c  syscall     300
    ctx->pc = 0x25b3a0u;
    ctx->pc = 0x25B3A4u;
runtime->handleSyscall(rdram, ctx, 0x12Cu);
label_25b3a4:
    // 0x25b3a4: 0x7100  sll         $t6, $zero, 4
    ctx->pc = 0x25b3a4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_25b3a8:
    // 0x25b3a8: 0x0  nop
    ctx->pc = 0x25b3a8u;
    // NOP
label_25b3ac:
    // 0x25b3ac: 0x0  nop
    ctx->pc = 0x25b3acu;
    // NOP
label_25b3b0:
    // 0x25b3b0: 0x4b1b  .word       0x00004B1B                   # divu        $t1, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b3b0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_25b3b4:
    // 0x25b3b4: 0x6490  .word       0x00006490                   # mfhi        $t4 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b3b4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_25b3b8:
    // 0x25b3b8: 0x0  nop
    ctx->pc = 0x25b3b8u;
    // NOP
label_25b3bc:
    // 0x25b3bc: 0x0  nop
    ctx->pc = 0x25b3bcu;
    // NOP
label_25b3c0:
    // 0x25b3c0: 0x4b28  .word       0x00004B28                   # mfsa        $t1 # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25b3c0u;
    SET_GPR_U32(ctx, 9, ctx->sa);
label_25b3c4:
    // 0x25b3c4: 0x7340  sll         $t6, $zero, 13
    ctx->pc = 0x25b3c4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
label_25b3c8:
    // 0x25b3c8: 0x0  nop
    ctx->pc = 0x25b3c8u;
    // NOP
label_25b3cc:
    // 0x25b3cc: 0x0  nop
    ctx->pc = 0x25b3ccu;
    // NOP
label_25b3d0:
    // 0x25b3d0: 0x4b37  .word       0x00004B37                   # INVALID     $zero, $zero, 0x4B37 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b3d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x25B3D0 raw=0x00004B37"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25b3d4:
    // 0x25b3d4: 0x4220  .word       0x00004220                   # add         $t0, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b3d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_25b3d8:
    // 0x25b3d8: 0x0  nop
    ctx->pc = 0x25b3d8u;
    // NOP
label_25b3dc:
    // 0x25b3dc: 0x0  nop
    ctx->pc = 0x25b3dcu;
    // NOP
label_25b3e0:
    // 0x25b3e0: 0x4b40  sll         $t1, $zero, 13
    ctx->pc = 0x25b3e0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
label_25b3e4:
    // 0x25b3e4: 0x5720  .word       0x00005720                   # add         $t2, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b3e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_25b3e8:
    // 0x25b3e8: 0x0  nop
    ctx->pc = 0x25b3e8u;
    // NOP
label_25b3ec:
    // 0x25b3ec: 0x0  nop
    ctx->pc = 0x25b3ecu;
    // NOP
label_25b3f0:
    // 0x25b3f0: 0x4b4b  .word       0x00004B4B                   # movn        $t1, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b3f0u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
label_25b3f4:
    // 0x25b3f4: 0x5d00  sll         $t3, $zero, 20
    ctx->pc = 0x25b3f4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_25b3f8:
    // 0x25b3f8: 0x0  nop
    ctx->pc = 0x25b3f8u;
    // NOP
label_25b3fc:
    // 0x25b3fc: 0x0  nop
    ctx->pc = 0x25b3fcu;
    // NOP
label_25b400:
    // 0x25b400: 0x4b57  .word       0x00004B57                   # dsrav       $t1, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b400u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_25b404:
    // 0x25b404: 0x2ed0  .word       0x00002ED0                   # mfhi        $a1 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b404u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_25b408:
    // 0x25b408: 0x0  nop
    ctx->pc = 0x25b408u;
    // NOP
label_25b40c:
    // 0x25b40c: 0x0  nop
    ctx->pc = 0x25b40cu;
    // NOP
label_25b410:
    // 0x25b410: 0x4b5d  .word       0x00004B5D                   # dmultu      $zero, $zero # 00004B40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b410u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x25B410 raw=0x00004B5D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25b414:
    // 0x25b414: 0x2170  tge         $zero, $zero, 133
    ctx->pc = 0x25b414u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25b418:
    // 0x25b418: 0x0  nop
    ctx->pc = 0x25b418u;
    // NOP
label_25b41c:
    // 0x25b41c: 0x0  nop
    ctx->pc = 0x25b41cu;
    // NOP
label_25b420:
    // 0x25b420: 0x4b62  .word       0x00004B62                   # neg         $t1, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b420u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
label_25b424:
    // 0x25b424: 0x1b50  .word       0x00001B50                   # mfhi        $v1 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b424u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_25b428:
    // 0x25b428: 0x0  nop
    ctx->pc = 0x25b428u;
    // NOP
label_25b42c:
    // 0x25b42c: 0x0  nop
    ctx->pc = 0x25b42cu;
    // NOP
label_25b430:
    // 0x25b430: 0x4b66  .word       0x00004B66                   # xor         $t1, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b430u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_25b434:
    // 0x25b434: 0x1d20  .word       0x00001D20                   # add         $v1, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b434u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_25b438:
    // 0x25b438: 0x0  nop
    ctx->pc = 0x25b438u;
    // NOP
label_25b43c:
    // 0x25b43c: 0x0  nop
    ctx->pc = 0x25b43cu;
    // NOP
label_25b440:
    // 0x25b440: 0x4b6a  .word       0x00004B6A                   # slt         $t1, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b440u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_25b444:
    // 0x25b444: 0x6170  tge         $zero, $zero, 389
    ctx->pc = 0x25b444u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25b448:
    // 0x25b448: 0x0  nop
    ctx->pc = 0x25b448u;
    // NOP
label_25b44c:
    // 0x25b44c: 0x0  nop
    ctx->pc = 0x25b44cu;
    // NOP
label_25b450:
    // 0x25b450: 0x4b77  .word       0x00004B77                   # INVALID     $zero, $zero, 0x4B77 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b450u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x25B450 raw=0x00004B77"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25b454:
    // 0x25b454: 0x8020  add         $s0, $zero, $zero
    ctx->pc = 0x25b454u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_25b458:
    // 0x25b458: 0x0  nop
    ctx->pc = 0x25b458u;
    // NOP
label_25b45c:
    // 0x25b45c: 0x0  nop
    ctx->pc = 0x25b45cu;
    // NOP
label_25b460:
    // 0x25b460: 0x4b88  .word       0x00004B88                   # jr          $zero # 00004B80 <InstrIdType: CPU_SPECIAL>
label_25b464:
    if (ctx->pc == 0x25B464u) {
        ctx->pc = 0x25B464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B460u;
        // 0x25b464: 0x8020  add         $s0, $zero, $zero (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B468u;
        goto label_25b468;
    }
    ctx->pc = 0x25B460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x25B464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B460u;
        // 0x25b464: 0x8020  add         $s0, $zero, $zero (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B460u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25B468u;
label_25b468:
    // 0x25b468: 0x0  nop
    ctx->pc = 0x25b468u;
    // NOP
label_25b46c:
    // 0x25b46c: 0x0  nop
    ctx->pc = 0x25b46cu;
    // NOP
label_25b470:
    // 0x25b470: 0x4b99  .word       0x00004B99                   # multu       $zero, $zero # 00004B80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b470u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_25b474:
    // 0x25b474: 0x4800  sll         $t1, $zero, 0
    ctx->pc = 0x25b474u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_25b478:
    // 0x25b478: 0x0  nop
    ctx->pc = 0x25b478u;
    // NOP
label_25b47c:
    // 0x25b47c: 0x0  nop
    ctx->pc = 0x25b47cu;
    // NOP
label_25b480:
    // 0x25b480: 0x4ba2  .word       0x00004BA2                   # neg         $t1, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b480u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
label_25b484:
    // 0x25b484: 0x4a90  .word       0x00004A90                   # mfhi        $t1 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b484u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_25b488:
    // 0x25b488: 0x0  nop
    ctx->pc = 0x25b488u;
    // NOP
label_25b48c:
    // 0x25b48c: 0x0  nop
    ctx->pc = 0x25b48cu;
    // NOP
label_25b490:
    // 0x25b490: 0x4bac  .word       0x00004BAC                   # dadd        $t1, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b490u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, r); }
label_25b494:
    // 0x25b494: 0x58a0  .word       0x000058A0                   # add         $t3, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b494u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_25b498:
    // 0x25b498: 0x0  nop
    ctx->pc = 0x25b498u;
    // NOP
label_25b49c:
    // 0x25b49c: 0x0  nop
    ctx->pc = 0x25b49cu;
    // NOP
label_25b4a0:
    // 0x25b4a0: 0x4bb8  dsll        $t1, $zero, 14
    ctx->pc = 0x25b4a0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) << 14);
label_25b4a4:
    // 0x25b4a4: 0x4c90  .word       0x00004C90                   # mfhi        $t1 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b4a4u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_25b4a8:
    // 0x25b4a8: 0x0  nop
    ctx->pc = 0x25b4a8u;
    // NOP
label_25b4ac:
    // 0x25b4ac: 0x0  nop
    ctx->pc = 0x25b4acu;
    // NOP
label_25b4b0:
    // 0x25b4b0: 0x4bc2  srl         $t1, $zero, 15
    ctx->pc = 0x25b4b0u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 0), 15));
label_25b4b4:
    // 0x25b4b4: 0x5370  tge         $zero, $zero, 333
    ctx->pc = 0x25b4b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25b4b8:
    // 0x25b4b8: 0x0  nop
    ctx->pc = 0x25b4b8u;
    // NOP
label_25b4bc:
    // 0x25b4bc: 0x0  nop
    ctx->pc = 0x25b4bcu;
    // NOP
label_25b4c0:
    // 0x25b4c0: 0x4bcd  break       0, 303
    ctx->pc = 0x25b4c0u;
    runtime->handleBreak(rdram, ctx);
label_25b4c4:
    // 0x25b4c4: 0x6550  .word       0x00006550                   # mfhi        $t4 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b4c4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_25b4c8:
    // 0x25b4c8: 0x0  nop
    ctx->pc = 0x25b4c8u;
    // NOP
label_25b4cc:
    // 0x25b4cc: 0x0  nop
    ctx->pc = 0x25b4ccu;
    // NOP
label_25b4d0:
    // 0x25b4d0: 0x4bda  .word       0x00004BDA                   # div         $t1, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b4d0u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_25b4d4:
    // 0x25b4d4: 0x1e00  sll         $v1, $zero, 24
    ctx->pc = 0x25b4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_25b4d8:
    // 0x25b4d8: 0x0  nop
    ctx->pc = 0x25b4d8u;
    // NOP
label_25b4dc:
    // 0x25b4dc: 0x0  nop
    ctx->pc = 0x25b4dcu;
    // NOP
label_25b4e0:
    // 0x25b4e0: 0x4bde  .word       0x00004BDE                   # ddiv        $t1, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b4e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x25B4E0 raw=0x00004BDE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25b4e4:
    // 0x25b4e4: 0x5890  .word       0x00005890                   # mfhi        $t3 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b4e4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_25b4e8:
    // 0x25b4e8: 0x0  nop
    ctx->pc = 0x25b4e8u;
    // NOP
label_25b4ec:
    // 0x25b4ec: 0x0  nop
    ctx->pc = 0x25b4ecu;
    // NOP
label_25b4f0:
    // 0x25b4f0: 0x4bea  .word       0x00004BEA                   # slt         $t1, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b4f0u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_25b4f4:
    // 0x25b4f4: 0x6250  .word       0x00006250                   # mfhi        $t4 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25b4f4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
    ctx->pc = 0x25b4f8u;
    return;
}

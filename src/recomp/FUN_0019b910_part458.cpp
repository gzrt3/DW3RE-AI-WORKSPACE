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


void FUN_0019b910_part458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x27ab60u: goto label_27ab60;
        case 0x27ab64u: goto label_27ab64;
        case 0x27ab68u: goto label_27ab68;
        case 0x27ab6cu: goto label_27ab6c;
        case 0x27ab70u: goto label_27ab70;
        case 0x27ab74u: goto label_27ab74;
        case 0x27ab78u: goto label_27ab78;
        case 0x27ab7cu: goto label_27ab7c;
        case 0x27ab80u: goto label_27ab80;
        case 0x27ab84u: goto label_27ab84;
        case 0x27ab88u: goto label_27ab88;
        case 0x27ab8cu: goto label_27ab8c;
        case 0x27ab90u: goto label_27ab90;
        case 0x27ab94u: goto label_27ab94;
        case 0x27ab98u: goto label_27ab98;
        case 0x27ab9cu: goto label_27ab9c;
        case 0x27aba0u: goto label_27aba0;
        case 0x27aba4u: goto label_27aba4;
        case 0x27aba8u: goto label_27aba8;
        case 0x27abacu: goto label_27abac;
        case 0x27abb0u: goto label_27abb0;
        case 0x27abb4u: goto label_27abb4;
        case 0x27abb8u: goto label_27abb8;
        case 0x27abbcu: goto label_27abbc;
        case 0x27abc0u: goto label_27abc0;
        case 0x27abc4u: goto label_27abc4;
        case 0x27abc8u: goto label_27abc8;
        case 0x27abccu: goto label_27abcc;
        case 0x27abd0u: goto label_27abd0;
        case 0x27abd4u: goto label_27abd4;
        case 0x27abd8u: goto label_27abd8;
        case 0x27abdcu: goto label_27abdc;
        case 0x27abe0u: goto label_27abe0;
        case 0x27abe4u: goto label_27abe4;
        case 0x27abe8u: goto label_27abe8;
        case 0x27abecu: goto label_27abec;
        case 0x27abf0u: goto label_27abf0;
        case 0x27abf4u: goto label_27abf4;
        case 0x27abf8u: goto label_27abf8;
        case 0x27abfcu: goto label_27abfc;
        case 0x27ac00u: goto label_27ac00;
        case 0x27ac04u: goto label_27ac04;
        case 0x27ac08u: goto label_27ac08;
        case 0x27ac0cu: goto label_27ac0c;
        case 0x27ac10u: goto label_27ac10;
        case 0x27ac14u: goto label_27ac14;
        case 0x27ac18u: goto label_27ac18;
        case 0x27ac1cu: goto label_27ac1c;
        case 0x27ac20u: goto label_27ac20;
        case 0x27ac24u: goto label_27ac24;
        case 0x27ac28u: goto label_27ac28;
        case 0x27ac2cu: goto label_27ac2c;
        case 0x27ac30u: goto label_27ac30;
        case 0x27ac34u: goto label_27ac34;
        case 0x27ac38u: goto label_27ac38;
        case 0x27ac3cu: goto label_27ac3c;
        case 0x27ac40u: goto label_27ac40;
        case 0x27ac44u: goto label_27ac44;
        case 0x27ac48u: goto label_27ac48;
        case 0x27ac4cu: goto label_27ac4c;
        case 0x27ac50u: goto label_27ac50;
        case 0x27ac54u: goto label_27ac54;
        case 0x27ac58u: goto label_27ac58;
        case 0x27ac5cu: goto label_27ac5c;
        case 0x27ac60u: goto label_27ac60;
        case 0x27ac64u: goto label_27ac64;
        case 0x27ac68u: goto label_27ac68;
        case 0x27ac6cu: goto label_27ac6c;
        case 0x27ac70u: goto label_27ac70;
        case 0x27ac74u: goto label_27ac74;
        case 0x27ac78u: goto label_27ac78;
        case 0x27ac7cu: goto label_27ac7c;
        case 0x27ac80u: goto label_27ac80;
        case 0x27ac84u: goto label_27ac84;
        case 0x27ac88u: goto label_27ac88;
        case 0x27ac8cu: goto label_27ac8c;
        case 0x27ac90u: goto label_27ac90;
        case 0x27ac94u: goto label_27ac94;
        case 0x27ac98u: goto label_27ac98;
        case 0x27ac9cu: goto label_27ac9c;
        case 0x27aca0u: goto label_27aca0;
        case 0x27aca4u: goto label_27aca4;
        case 0x27aca8u: goto label_27aca8;
        case 0x27acacu: goto label_27acac;
        case 0x27acb0u: goto label_27acb0;
        case 0x27acb4u: goto label_27acb4;
        case 0x27acb8u: goto label_27acb8;
        case 0x27acbcu: goto label_27acbc;
        case 0x27acc0u: goto label_27acc0;
        case 0x27acc4u: goto label_27acc4;
        case 0x27acc8u: goto label_27acc8;
        case 0x27acccu: goto label_27accc;
        case 0x27acd0u: goto label_27acd0;
        case 0x27acd4u: goto label_27acd4;
        case 0x27acd8u: goto label_27acd8;
        case 0x27acdcu: goto label_27acdc;
        case 0x27ace0u: goto label_27ace0;
        case 0x27ace4u: goto label_27ace4;
        case 0x27ace8u: goto label_27ace8;
        case 0x27acecu: goto label_27acec;
        case 0x27acf0u: goto label_27acf0;
        case 0x27acf4u: goto label_27acf4;
        case 0x27acf8u: goto label_27acf8;
        case 0x27acfcu: goto label_27acfc;
        case 0x27ad00u: goto label_27ad00;
        case 0x27ad04u: goto label_27ad04;
        case 0x27ad08u: goto label_27ad08;
        case 0x27ad0cu: goto label_27ad0c;
        case 0x27ad10u: goto label_27ad10;
        case 0x27ad14u: goto label_27ad14;
        case 0x27ad18u: goto label_27ad18;
        case 0x27ad1cu: goto label_27ad1c;
        case 0x27ad20u: goto label_27ad20;
        case 0x27ad24u: goto label_27ad24;
        case 0x27ad28u: goto label_27ad28;
        case 0x27ad2cu: goto label_27ad2c;
        case 0x27ad30u: goto label_27ad30;
        case 0x27ad34u: goto label_27ad34;
        case 0x27ad38u: goto label_27ad38;
        case 0x27ad3cu: goto label_27ad3c;
        case 0x27ad40u: goto label_27ad40;
        case 0x27ad44u: goto label_27ad44;
        case 0x27ad48u: goto label_27ad48;
        case 0x27ad4cu: goto label_27ad4c;
        case 0x27ad50u: goto label_27ad50;
        case 0x27ad54u: goto label_27ad54;
        case 0x27ad58u: goto label_27ad58;
        case 0x27ad5cu: goto label_27ad5c;
        case 0x27ad60u: goto label_27ad60;
        case 0x27ad64u: goto label_27ad64;
        case 0x27ad68u: goto label_27ad68;
        case 0x27ad6cu: goto label_27ad6c;
        case 0x27ad70u: goto label_27ad70;
        case 0x27ad74u: goto label_27ad74;
        case 0x27ad78u: goto label_27ad78;
        case 0x27ad7cu: goto label_27ad7c;
        case 0x27ad80u: goto label_27ad80;
        case 0x27ad84u: goto label_27ad84;
        case 0x27ad88u: goto label_27ad88;
        case 0x27ad8cu: goto label_27ad8c;
        case 0x27ad90u: goto label_27ad90;
        case 0x27ad94u: goto label_27ad94;
        case 0x27ad98u: goto label_27ad98;
        case 0x27ad9cu: goto label_27ad9c;
        case 0x27ada0u: goto label_27ada0;
        case 0x27ada4u: goto label_27ada4;
        case 0x27ada8u: goto label_27ada8;
        case 0x27adacu: goto label_27adac;
        case 0x27adb0u: goto label_27adb0;
        case 0x27adb4u: goto label_27adb4;
        case 0x27adb8u: goto label_27adb8;
        case 0x27adbcu: goto label_27adbc;
        case 0x27adc0u: goto label_27adc0;
        case 0x27adc4u: goto label_27adc4;
        case 0x27adc8u: goto label_27adc8;
        case 0x27adccu: goto label_27adcc;
        case 0x27add0u: goto label_27add0;
        case 0x27add4u: goto label_27add4;
        case 0x27add8u: goto label_27add8;
        case 0x27addcu: goto label_27addc;
        case 0x27ade0u: goto label_27ade0;
        case 0x27ade4u: goto label_27ade4;
        case 0x27ade8u: goto label_27ade8;
        case 0x27adecu: goto label_27adec;
        case 0x27adf0u: goto label_27adf0;
        case 0x27adf4u: goto label_27adf4;
        case 0x27adf8u: goto label_27adf8;
        case 0x27adfcu: goto label_27adfc;
        case 0x27ae00u: goto label_27ae00;
        case 0x27ae04u: goto label_27ae04;
        case 0x27ae08u: goto label_27ae08;
        case 0x27ae0cu: goto label_27ae0c;
        case 0x27ae10u: goto label_27ae10;
        case 0x27ae14u: goto label_27ae14;
        case 0x27ae18u: goto label_27ae18;
        case 0x27ae1cu: goto label_27ae1c;
        case 0x27ae20u: goto label_27ae20;
        case 0x27ae24u: goto label_27ae24;
        case 0x27ae28u: goto label_27ae28;
        case 0x27ae2cu: goto label_27ae2c;
        case 0x27ae30u: goto label_27ae30;
        case 0x27ae34u: goto label_27ae34;
        case 0x27ae38u: goto label_27ae38;
        case 0x27ae3cu: goto label_27ae3c;
        case 0x27ae40u: goto label_27ae40;
        case 0x27ae44u: goto label_27ae44;
        case 0x27ae48u: goto label_27ae48;
        case 0x27ae4cu: goto label_27ae4c;
        case 0x27ae50u: goto label_27ae50;
        case 0x27ae54u: goto label_27ae54;
        case 0x27ae58u: goto label_27ae58;
        case 0x27ae5cu: goto label_27ae5c;
        case 0x27ae60u: goto label_27ae60;
        case 0x27ae64u: goto label_27ae64;
        case 0x27ae68u: goto label_27ae68;
        case 0x27ae6cu: goto label_27ae6c;
        case 0x27ae70u: goto label_27ae70;
        case 0x27ae74u: goto label_27ae74;
        case 0x27ae78u: goto label_27ae78;
        case 0x27ae7cu: goto label_27ae7c;
        case 0x27ae80u: goto label_27ae80;
        case 0x27ae84u: goto label_27ae84;
        case 0x27ae88u: goto label_27ae88;
        case 0x27ae8cu: goto label_27ae8c;
        case 0x27ae90u: goto label_27ae90;
        case 0x27ae94u: goto label_27ae94;
        case 0x27ae98u: goto label_27ae98;
        case 0x27ae9cu: goto label_27ae9c;
        case 0x27aea0u: goto label_27aea0;
        case 0x27aea4u: goto label_27aea4;
        case 0x27aea8u: goto label_27aea8;
        case 0x27aeacu: goto label_27aeac;
        case 0x27aeb0u: goto label_27aeb0;
        case 0x27aeb4u: goto label_27aeb4;
        case 0x27aeb8u: goto label_27aeb8;
        case 0x27aebcu: goto label_27aebc;
        case 0x27aec0u: goto label_27aec0;
        case 0x27aec4u: goto label_27aec4;
        case 0x27aec8u: goto label_27aec8;
        case 0x27aeccu: goto label_27aecc;
        case 0x27aed0u: goto label_27aed0;
        case 0x27aed4u: goto label_27aed4;
        case 0x27aed8u: goto label_27aed8;
        case 0x27aedcu: goto label_27aedc;
        case 0x27aee0u: goto label_27aee0;
        case 0x27aee4u: goto label_27aee4;
        case 0x27aee8u: goto label_27aee8;
        case 0x27aeecu: goto label_27aeec;
        case 0x27aef0u: goto label_27aef0;
        case 0x27aef4u: goto label_27aef4;
        case 0x27aef8u: goto label_27aef8;
        case 0x27aefcu: goto label_27aefc;
        case 0x27af00u: goto label_27af00;
        case 0x27af04u: goto label_27af04;
        case 0x27af08u: goto label_27af08;
        case 0x27af0cu: goto label_27af0c;
        case 0x27af10u: goto label_27af10;
        case 0x27af14u: goto label_27af14;
        case 0x27af18u: goto label_27af18;
        case 0x27af1cu: goto label_27af1c;
        case 0x27af20u: goto label_27af20;
        case 0x27af24u: goto label_27af24;
        case 0x27af28u: goto label_27af28;
        case 0x27af2cu: goto label_27af2c;
        case 0x27af30u: goto label_27af30;
        case 0x27af34u: goto label_27af34;
        case 0x27af38u: goto label_27af38;
        case 0x27af3cu: goto label_27af3c;
        case 0x27af40u: goto label_27af40;
        case 0x27af44u: goto label_27af44;
        case 0x27af48u: goto label_27af48;
        case 0x27af4cu: goto label_27af4c;
        case 0x27af50u: goto label_27af50;
        case 0x27af54u: goto label_27af54;
        case 0x27af58u: goto label_27af58;
        case 0x27af5cu: goto label_27af5c;
        case 0x27af60u: goto label_27af60;
        case 0x27af64u: goto label_27af64;
        case 0x27af68u: goto label_27af68;
        case 0x27af6cu: goto label_27af6c;
        case 0x27af70u: goto label_27af70;
        case 0x27af74u: goto label_27af74;
        case 0x27af78u: goto label_27af78;
        case 0x27af7cu: goto label_27af7c;
        case 0x27af80u: goto label_27af80;
        case 0x27af84u: goto label_27af84;
        case 0x27af88u: goto label_27af88;
        case 0x27af8cu: goto label_27af8c;
        case 0x27af90u: goto label_27af90;
        case 0x27af94u: goto label_27af94;
        case 0x27af98u: goto label_27af98;
        case 0x27af9cu: goto label_27af9c;
        case 0x27afa0u: goto label_27afa0;
        case 0x27afa4u: goto label_27afa4;
        case 0x27afa8u: goto label_27afa8;
        case 0x27afacu: goto label_27afac;
        case 0x27afb0u: goto label_27afb0;
        case 0x27afb4u: goto label_27afb4;
        case 0x27afb8u: goto label_27afb8;
        case 0x27afbcu: goto label_27afbc;
        case 0x27afc0u: goto label_27afc0;
        case 0x27afc4u: goto label_27afc4;
        case 0x27afc8u: goto label_27afc8;
        case 0x27afccu: goto label_27afcc;
        case 0x27afd0u: goto label_27afd0;
        case 0x27afd4u: goto label_27afd4;
        case 0x27afd8u: goto label_27afd8;
        case 0x27afdcu: goto label_27afdc;
        case 0x27afe0u: goto label_27afe0;
        case 0x27afe4u: goto label_27afe4;
        case 0x27afe8u: goto label_27afe8;
        case 0x27afecu: goto label_27afec;
        case 0x27aff0u: goto label_27aff0;
        case 0x27aff4u: goto label_27aff4;
        case 0x27aff8u: goto label_27aff8;
        case 0x27affcu: goto label_27affc;
        case 0x27b000u: goto label_27b000;
        case 0x27b004u: goto label_27b004;
        case 0x27b008u: goto label_27b008;
        case 0x27b00cu: goto label_27b00c;
        case 0x27b010u: goto label_27b010;
        case 0x27b014u: goto label_27b014;
        case 0x27b018u: goto label_27b018;
        case 0x27b01cu: goto label_27b01c;
        case 0x27b020u: goto label_27b020;
        case 0x27b024u: goto label_27b024;
        case 0x27b028u: goto label_27b028;
        case 0x27b02cu: goto label_27b02c;
        case 0x27b030u: goto label_27b030;
        case 0x27b034u: goto label_27b034;
        case 0x27b038u: goto label_27b038;
        case 0x27b03cu: goto label_27b03c;
        case 0x27b040u: goto label_27b040;
        case 0x27b044u: goto label_27b044;
        case 0x27b048u: goto label_27b048;
        case 0x27b04cu: goto label_27b04c;
        case 0x27b050u: goto label_27b050;
        case 0x27b054u: goto label_27b054;
        case 0x27b058u: goto label_27b058;
        case 0x27b05cu: goto label_27b05c;
        case 0x27b060u: goto label_27b060;
        case 0x27b064u: goto label_27b064;
        case 0x27b068u: goto label_27b068;
        case 0x27b06cu: goto label_27b06c;
        case 0x27b070u: goto label_27b070;
        case 0x27b074u: goto label_27b074;
        case 0x27b078u: goto label_27b078;
        case 0x27b07cu: goto label_27b07c;
        case 0x27b080u: goto label_27b080;
        case 0x27b084u: goto label_27b084;
        case 0x27b088u: goto label_27b088;
        case 0x27b08cu: goto label_27b08c;
        case 0x27b090u: goto label_27b090;
        case 0x27b094u: goto label_27b094;
        case 0x27b098u: goto label_27b098;
        case 0x27b09cu: goto label_27b09c;
        case 0x27b0a0u: goto label_27b0a0;
        case 0x27b0a4u: goto label_27b0a4;
        case 0x27b0a8u: goto label_27b0a8;
        case 0x27b0acu: goto label_27b0ac;
        case 0x27b0b0u: goto label_27b0b0;
        case 0x27b0b4u: goto label_27b0b4;
        case 0x27b0b8u: goto label_27b0b8;
        case 0x27b0bcu: goto label_27b0bc;
        case 0x27b0c0u: goto label_27b0c0;
        case 0x27b0c4u: goto label_27b0c4;
        case 0x27b0c8u: goto label_27b0c8;
        case 0x27b0ccu: goto label_27b0cc;
        case 0x27b0d0u: goto label_27b0d0;
        case 0x27b0d4u: goto label_27b0d4;
        case 0x27b0d8u: goto label_27b0d8;
        case 0x27b0dcu: goto label_27b0dc;
        case 0x27b0e0u: goto label_27b0e0;
        case 0x27b0e4u: goto label_27b0e4;
        case 0x27b0e8u: goto label_27b0e8;
        case 0x27b0ecu: goto label_27b0ec;
        case 0x27b0f0u: goto label_27b0f0;
        case 0x27b0f4u: goto label_27b0f4;
        case 0x27b0f8u: goto label_27b0f8;
        case 0x27b0fcu: goto label_27b0fc;
        case 0x27b100u: goto label_27b100;
        case 0x27b104u: goto label_27b104;
        case 0x27b108u: goto label_27b108;
        case 0x27b10cu: goto label_27b10c;
        case 0x27b110u: goto label_27b110;
        case 0x27b114u: goto label_27b114;
        case 0x27b118u: goto label_27b118;
        case 0x27b11cu: goto label_27b11c;
        case 0x27b120u: goto label_27b120;
        case 0x27b124u: goto label_27b124;
        case 0x27b128u: goto label_27b128;
        case 0x27b12cu: goto label_27b12c;
        case 0x27b130u: goto label_27b130;
        case 0x27b134u: goto label_27b134;
        case 0x27b138u: goto label_27b138;
        case 0x27b13cu: goto label_27b13c;
        case 0x27b140u: goto label_27b140;
        case 0x27b144u: goto label_27b144;
        case 0x27b148u: goto label_27b148;
        case 0x27b14cu: goto label_27b14c;
        case 0x27b150u: goto label_27b150;
        case 0x27b154u: goto label_27b154;
        case 0x27b158u: goto label_27b158;
        case 0x27b15cu: goto label_27b15c;
        case 0x27b160u: goto label_27b160;
        case 0x27b164u: goto label_27b164;
        case 0x27b168u: goto label_27b168;
        case 0x27b16cu: goto label_27b16c;
        case 0x27b170u: goto label_27b170;
        case 0x27b174u: goto label_27b174;
        case 0x27b178u: goto label_27b178;
        case 0x27b17cu: goto label_27b17c;
        case 0x27b180u: goto label_27b180;
        case 0x27b184u: goto label_27b184;
        case 0x27b188u: goto label_27b188;
        case 0x27b18cu: goto label_27b18c;
        case 0x27b190u: goto label_27b190;
        case 0x27b194u: goto label_27b194;
        case 0x27b198u: goto label_27b198;
        case 0x27b19cu: goto label_27b19c;
        case 0x27b1a0u: goto label_27b1a0;
        case 0x27b1a4u: goto label_27b1a4;
        case 0x27b1a8u: goto label_27b1a8;
        case 0x27b1acu: goto label_27b1ac;
        case 0x27b1b0u: goto label_27b1b0;
        case 0x27b1b4u: goto label_27b1b4;
        case 0x27b1b8u: goto label_27b1b8;
        case 0x27b1bcu: goto label_27b1bc;
        case 0x27b1c0u: goto label_27b1c0;
        case 0x27b1c4u: goto label_27b1c4;
        case 0x27b1c8u: goto label_27b1c8;
        case 0x27b1ccu: goto label_27b1cc;
        case 0x27b1d0u: goto label_27b1d0;
        case 0x27b1d4u: goto label_27b1d4;
        case 0x27b1d8u: goto label_27b1d8;
        case 0x27b1dcu: goto label_27b1dc;
        case 0x27b1e0u: goto label_27b1e0;
        case 0x27b1e4u: goto label_27b1e4;
        case 0x27b1e8u: goto label_27b1e8;
        case 0x27b1ecu: goto label_27b1ec;
        case 0x27b1f0u: goto label_27b1f0;
        case 0x27b1f4u: goto label_27b1f4;
        case 0x27b1f8u: goto label_27b1f8;
        case 0x27b1fcu: goto label_27b1fc;
        case 0x27b200u: goto label_27b200;
        case 0x27b204u: goto label_27b204;
        case 0x27b208u: goto label_27b208;
        case 0x27b20cu: goto label_27b20c;
        case 0x27b210u: goto label_27b210;
        case 0x27b214u: goto label_27b214;
        case 0x27b218u: goto label_27b218;
        case 0x27b21cu: goto label_27b21c;
        case 0x27b220u: goto label_27b220;
        case 0x27b224u: goto label_27b224;
        case 0x27b228u: goto label_27b228;
        case 0x27b22cu: goto label_27b22c;
        case 0x27b230u: goto label_27b230;
        case 0x27b234u: goto label_27b234;
        case 0x27b238u: goto label_27b238;
        case 0x27b23cu: goto label_27b23c;
        case 0x27b240u: goto label_27b240;
        case 0x27b244u: goto label_27b244;
        case 0x27b248u: goto label_27b248;
        case 0x27b24cu: goto label_27b24c;
        case 0x27b250u: goto label_27b250;
        case 0x27b254u: goto label_27b254;
        case 0x27b258u: goto label_27b258;
        case 0x27b25cu: goto label_27b25c;
        case 0x27b260u: goto label_27b260;
        case 0x27b264u: goto label_27b264;
        case 0x27b268u: goto label_27b268;
        case 0x27b26cu: goto label_27b26c;
        case 0x27b270u: goto label_27b270;
        case 0x27b274u: goto label_27b274;
        case 0x27b278u: goto label_27b278;
        case 0x27b27cu: goto label_27b27c;
        case 0x27b280u: goto label_27b280;
        case 0x27b284u: goto label_27b284;
        case 0x27b288u: goto label_27b288;
        case 0x27b28cu: goto label_27b28c;
        case 0x27b290u: goto label_27b290;
        case 0x27b294u: goto label_27b294;
        case 0x27b298u: goto label_27b298;
        case 0x27b29cu: goto label_27b29c;
        case 0x27b2a0u: goto label_27b2a0;
        case 0x27b2a4u: goto label_27b2a4;
        case 0x27b2a8u: goto label_27b2a8;
        case 0x27b2acu: goto label_27b2ac;
        case 0x27b2b0u: goto label_27b2b0;
        case 0x27b2b4u: goto label_27b2b4;
        case 0x27b2b8u: goto label_27b2b8;
        case 0x27b2bcu: goto label_27b2bc;
        case 0x27b2c0u: goto label_27b2c0;
        case 0x27b2c4u: goto label_27b2c4;
        case 0x27b2c8u: goto label_27b2c8;
        case 0x27b2ccu: goto label_27b2cc;
        case 0x27b2d0u: goto label_27b2d0;
        case 0x27b2d4u: goto label_27b2d4;
        case 0x27b2d8u: goto label_27b2d8;
        case 0x27b2dcu: goto label_27b2dc;
        case 0x27b2e0u: goto label_27b2e0;
        case 0x27b2e4u: goto label_27b2e4;
        case 0x27b2e8u: goto label_27b2e8;
        case 0x27b2ecu: goto label_27b2ec;
        case 0x27b2f0u: goto label_27b2f0;
        case 0x27b2f4u: goto label_27b2f4;
        case 0x27b2f8u: goto label_27b2f8;
        case 0x27b2fcu: goto label_27b2fc;
        case 0x27b300u: goto label_27b300;
        case 0x27b304u: goto label_27b304;
        case 0x27b308u: goto label_27b308;
        case 0x27b30cu: goto label_27b30c;
        case 0x27b310u: goto label_27b310;
        case 0x27b314u: goto label_27b314;
        case 0x27b318u: goto label_27b318;
        case 0x27b31cu: goto label_27b31c;
        case 0x27b320u: goto label_27b320;
        case 0x27b324u: goto label_27b324;
        case 0x27b328u: goto label_27b328;
        case 0x27b32cu: goto label_27b32c;
        default: return;
    }

label_27ab60:
    // 0x27ab60: 0x11835  .word       0x00011835                   # INVALID     $zero, $at, 0x1835 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ab60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x27AB60 raw=0x00011835"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27ab64:
    // 0x27ab64: 0x9840  sll         $s3, $zero, 1
    ctx->pc = 0x27ab64u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_27ab68:
    // 0x27ab68: 0x0  nop
    ctx->pc = 0x27ab68u;
    // NOP
label_27ab6c:
    // 0x27ab6c: 0x0  nop
    ctx->pc = 0x27ab6cu;
    // NOP
label_27ab70:
    // 0x27ab70: 0x11849  .word       0x00011849                   # jalr        $v1, $zero # 00010040 <InstrIdType: CPU_SPECIAL>
label_27ab74:
    if (ctx->pc == 0x27AB74u) {
        ctx->pc = 0x27AB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AB70u;
        // 0x27ab74: 0x6790  .word       0x00006790                   # mfhi        $t4 # 00000780 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 12, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27AB78u;
        goto label_27ab78;
    }
    ctx->pc = 0x27AB70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 3, 0x27AB78u);
        ctx->pc = 0x27AB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AB70u;
        // 0x27ab74: 0x6790  .word       0x00006790                   # mfhi        $t4 # 00000780 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 12, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27AB70u, 0x27AB78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27AB78u;
label_27ab78:
    // 0x27ab78: 0x0  nop
    ctx->pc = 0x27ab78u;
    // NOP
label_27ab7c:
    // 0x27ab7c: 0x0  nop
    ctx->pc = 0x27ab7cu;
    // NOP
label_27ab80:
    // 0x27ab80: 0x11856  .word       0x00011856                   # dsrlv       $v1, $at, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ab80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_27ab84:
    // 0x27ab84: 0x6cc0  sll         $t5, $zero, 19
    ctx->pc = 0x27ab84u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_27ab88:
    // 0x27ab88: 0x0  nop
    ctx->pc = 0x27ab88u;
    // NOP
label_27ab8c:
    // 0x27ab8c: 0x0  nop
    ctx->pc = 0x27ab8cu;
    // NOP
label_27ab90:
    // 0x27ab90: 0x11864  .word       0x00011864                   # and         $v1, $zero, $at # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ab90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_27ab94:
    // 0x27ab94: 0x6930  tge         $zero, $zero, 420
    ctx->pc = 0x27ab94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27ab98:
    // 0x27ab98: 0x0  nop
    ctx->pc = 0x27ab98u;
    // NOP
label_27ab9c:
    // 0x27ab9c: 0x0  nop
    ctx->pc = 0x27ab9cu;
    // NOP
label_27aba0:
    // 0x27aba0: 0x11872  tlt         $zero, $at, 97
    ctx->pc = 0x27aba0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27aba4:
    // 0x27aba4: 0x5ef0  tge         $zero, $zero, 379
    ctx->pc = 0x27aba4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27aba8:
    // 0x27aba8: 0x0  nop
    ctx->pc = 0x27aba8u;
    // NOP
label_27abac:
    // 0x27abac: 0x0  nop
    ctx->pc = 0x27abacu;
    // NOP
label_27abb0:
    // 0x27abb0: 0x1187e  dsrl32      $v1, $at, 1
    ctx->pc = 0x27abb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 1) >> (32 + 1));
label_27abb4:
    // 0x27abb4: 0x8a10  .word       0x00008A10                   # mfhi        $s1 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27abb4u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_27abb8:
    // 0x27abb8: 0x0  nop
    ctx->pc = 0x27abb8u;
    // NOP
label_27abbc:
    // 0x27abbc: 0x0  nop
    ctx->pc = 0x27abbcu;
    // NOP
label_27abc0:
    // 0x27abc0: 0x11890  .word       0x00011890                   # mfhi        $v1 # 00010080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27abc0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_27abc4:
    // 0x27abc4: 0x7d10  .word       0x00007D10                   # mfhi        $t7 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27abc4u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_27abc8:
    // 0x27abc8: 0x0  nop
    ctx->pc = 0x27abc8u;
    // NOP
label_27abcc:
    // 0x27abcc: 0x0  nop
    ctx->pc = 0x27abccu;
    // NOP
label_27abd0:
    // 0x27abd0: 0x118a0  .word       0x000118A0                   # add         $v1, $zero, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27abd0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_27abd4:
    // 0x27abd4: 0x7890  .word       0x00007890                   # mfhi        $t7 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27abd4u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_27abd8:
    // 0x27abd8: 0x0  nop
    ctx->pc = 0x27abd8u;
    // NOP
label_27abdc:
    // 0x27abdc: 0x0  nop
    ctx->pc = 0x27abdcu;
    // NOP
label_27abe0:
    // 0x27abe0: 0x118b0  tge         $zero, $at, 98
    ctx->pc = 0x27abe0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27abe4:
    // 0x27abe4: 0x8b90  .word       0x00008B90                   # mfhi        $s1 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27abe4u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_27abe8:
    // 0x27abe8: 0x0  nop
    ctx->pc = 0x27abe8u;
    // NOP
label_27abec:
    // 0x27abec: 0x0  nop
    ctx->pc = 0x27abecu;
    // NOP
label_27abf0:
    // 0x27abf0: 0x118c2  srl         $v1, $at, 3
    ctx->pc = 0x27abf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 1), 3));
label_27abf4:
    // 0x27abf4: 0x8f00  sll         $s1, $zero, 28
    ctx->pc = 0x27abf4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_27abf8:
    // 0x27abf8: 0x0  nop
    ctx->pc = 0x27abf8u;
    // NOP
label_27abfc:
    // 0x27abfc: 0x0  nop
    ctx->pc = 0x27abfcu;
    // NOP
label_27ac00:
    // 0x27ac00: 0x118d4  .word       0x000118D4                   # dsllv       $v1, $at, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ac00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 1) << (GPR_U32(ctx, 0) & 0x3F));
label_27ac04:
    // 0x27ac04: 0xf1e0  .word       0x0000F1E0                   # add         $fp, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ac04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_27ac08:
    // 0x27ac08: 0x0  nop
    ctx->pc = 0x27ac08u;
    // NOP
label_27ac0c:
    // 0x27ac0c: 0x0  nop
    ctx->pc = 0x27ac0cu;
    // NOP
label_27ac10:
    // 0x27ac10: 0x118f3  tltu        $zero, $at, 99
    ctx->pc = 0x27ac10u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27ac14:
    // 0x27ac14: 0xb630  tge         $zero, $zero, 728
    ctx->pc = 0x27ac14u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27ac18:
    // 0x27ac18: 0x0  nop
    ctx->pc = 0x27ac18u;
    // NOP
label_27ac1c:
    // 0x27ac1c: 0x0  nop
    ctx->pc = 0x27ac1cu;
    // NOP
label_27ac20:
    // 0x27ac20: 0x1190a  .word       0x0001190A                   # movz        $v1, $zero, $at # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ac20u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_27ac24:
    // 0x27ac24: 0x8a60  .word       0x00008A60                   # add         $s1, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ac24u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_27ac28:
    // 0x27ac28: 0x0  nop
    ctx->pc = 0x27ac28u;
    // NOP
label_27ac2c:
    // 0x27ac2c: 0x0  nop
    ctx->pc = 0x27ac2cu;
    // NOP
label_27ac30:
    // 0x27ac30: 0x1191c  .word       0x0001191C                   # dmult       $zero, $at # 00001900 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ac30u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x27AC30 raw=0x0001191C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27ac34:
    // 0x27ac34: 0x87f0  tge         $zero, $zero, 543
    ctx->pc = 0x27ac34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27ac38:
    // 0x27ac38: 0x0  nop
    ctx->pc = 0x27ac38u;
    // NOP
label_27ac3c:
    // 0x27ac3c: 0x0  nop
    ctx->pc = 0x27ac3cu;
    // NOP
label_27ac40:
    // 0x27ac40: 0x1192d  .word       0x0001192D                   # daddu       $v1, $zero, $at # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ac40u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_27ac44:
    // 0x27ac44: 0xa1f0  tge         $zero, $zero, 647
    ctx->pc = 0x27ac44u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27ac48:
    // 0x27ac48: 0x0  nop
    ctx->pc = 0x27ac48u;
    // NOP
label_27ac4c:
    // 0x27ac4c: 0x0  nop
    ctx->pc = 0x27ac4cu;
    // NOP
label_27ac50:
    // 0x27ac50: 0x11942  srl         $v1, $at, 5
    ctx->pc = 0x27ac50u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 1), 5));
label_27ac54:
    // 0x27ac54: 0x9950  .word       0x00009950                   # mfhi        $s3 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ac54u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_27ac58:
    // 0x27ac58: 0x0  nop
    ctx->pc = 0x27ac58u;
    // NOP
label_27ac5c:
    // 0x27ac5c: 0x0  nop
    ctx->pc = 0x27ac5cu;
    // NOP
label_27ac60:
    // 0x27ac60: 0x11956  .word       0x00011956                   # dsrlv       $v1, $at, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ac60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_27ac64:
    // 0x27ac64: 0x8d20  .word       0x00008D20                   # add         $s1, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ac64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_27ac68:
    // 0x27ac68: 0x0  nop
    ctx->pc = 0x27ac68u;
    // NOP
label_27ac6c:
    // 0x27ac6c: 0x0  nop
    ctx->pc = 0x27ac6cu;
    // NOP
label_27ac70:
    // 0x27ac70: 0x11968  .word       0x00011968                   # mfsa        $v1 # 00010140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x27ac70u;
    SET_GPR_U32(ctx, 3, ctx->sa);
label_27ac74:
    // 0x27ac74: 0xcbf0  tge         $zero, $zero, 815
    ctx->pc = 0x27ac74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27ac78:
    // 0x27ac78: 0x0  nop
    ctx->pc = 0x27ac78u;
    // NOP
label_27ac7c:
    // 0x27ac7c: 0x0  nop
    ctx->pc = 0x27ac7cu;
    // NOP
label_27ac80:
    // 0x27ac80: 0x11982  srl         $v1, $at, 6
    ctx->pc = 0x27ac80u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 1), 6));
label_27ac84:
    // 0x27ac84: 0xbd70  tge         $zero, $zero, 757
    ctx->pc = 0x27ac84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27ac88:
    // 0x27ac88: 0x0  nop
    ctx->pc = 0x27ac88u;
    // NOP
label_27ac8c:
    // 0x27ac8c: 0x0  nop
    ctx->pc = 0x27ac8cu;
    // NOP
label_27ac90:
    // 0x27ac90: 0x1199a  .word       0x0001199A                   # div         $v1, $zero, $at # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ac90u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_27ac94:
    // 0x27ac94: 0x71a0  .word       0x000071A0                   # add         $t6, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ac94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_27ac98:
    // 0x27ac98: 0x0  nop
    ctx->pc = 0x27ac98u;
    // NOP
label_27ac9c:
    // 0x27ac9c: 0x0  nop
    ctx->pc = 0x27ac9cu;
    // NOP
label_27aca0:
    // 0x27aca0: 0x119a9  .word       0x000119A9                   # mtsa        $zero # 00011980 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x27aca0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_27aca4:
    // 0x27aca4: 0x6e40  sll         $t5, $zero, 25
    ctx->pc = 0x27aca4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_27aca8:
    // 0x27aca8: 0x0  nop
    ctx->pc = 0x27aca8u;
    // NOP
label_27acac:
    // 0x27acac: 0x0  nop
    ctx->pc = 0x27acacu;
    // NOP
label_27acb0:
    // 0x27acb0: 0x119b7  .word       0x000119B7                   # INVALID     $zero, $at, 0x19B7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27acb0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x27ACB0 raw=0x000119B7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27acb4:
    // 0x27acb4: 0xa380  sll         $s4, $zero, 14
    ctx->pc = 0x27acb4u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 14));
label_27acb8:
    // 0x27acb8: 0x0  nop
    ctx->pc = 0x27acb8u;
    // NOP
label_27acbc:
    // 0x27acbc: 0x0  nop
    ctx->pc = 0x27acbcu;
    // NOP
label_27acc0:
    // 0x27acc0: 0x119cc  .word       0x000119CC                   # syscall     103 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27acc0u;
    ctx->pc = 0x27ACC4u;
runtime->handleSyscall(rdram, ctx, 0x467u);
label_27acc4:
    // 0x27acc4: 0x8d70  tge         $zero, $zero, 565
    ctx->pc = 0x27acc4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27acc8:
    // 0x27acc8: 0x0  nop
    ctx->pc = 0x27acc8u;
    // NOP
label_27accc:
    // 0x27accc: 0x0  nop
    ctx->pc = 0x27acccu;
    // NOP
label_27acd0:
    // 0x27acd0: 0x119de  .word       0x000119DE                   # ddiv        $v1, $zero, $at # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27acd0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x27ACD0 raw=0x000119DE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27acd4:
    // 0x27acd4: 0x8770  tge         $zero, $zero, 541
    ctx->pc = 0x27acd4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27acd8:
    // 0x27acd8: 0x0  nop
    ctx->pc = 0x27acd8u;
    // NOP
label_27acdc:
    // 0x27acdc: 0x0  nop
    ctx->pc = 0x27acdcu;
    // NOP
label_27ace0:
    // 0x27ace0: 0x119ef  .word       0x000119EF                   # dsubu       $v1, $zero, $at # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ace0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_27ace4:
    // 0x27ace4: 0xb6c0  sll         $s6, $zero, 27
    ctx->pc = 0x27ace4u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_27ace8:
    // 0x27ace8: 0x0  nop
    ctx->pc = 0x27ace8u;
    // NOP
label_27acec:
    // 0x27acec: 0x0  nop
    ctx->pc = 0x27acecu;
    // NOP
label_27acf0:
    // 0x27acf0: 0x11a06  .word       0x00011A06                   # srlv        $v1, $at, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27acf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27acf4:
    // 0x27acf4: 0x7ab0  tge         $zero, $zero, 490
    ctx->pc = 0x27acf4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27acf8:
    // 0x27acf8: 0x0  nop
    ctx->pc = 0x27acf8u;
    // NOP
label_27acfc:
    // 0x27acfc: 0x0  nop
    ctx->pc = 0x27acfcu;
    // NOP
label_27ad00:
    // 0x27ad00: 0x11a16  .word       0x00011A16                   # dsrlv       $v1, $at, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ad00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_27ad04:
    // 0x27ad04: 0x67a0  .word       0x000067A0                   # add         $t4, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ad04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_27ad08:
    // 0x27ad08: 0x0  nop
    ctx->pc = 0x27ad08u;
    // NOP
label_27ad0c:
    // 0x27ad0c: 0x0  nop
    ctx->pc = 0x27ad0cu;
    // NOP
label_27ad10:
    // 0x27ad10: 0x11a23  .word       0x00011A23                   # negu        $v1, $at # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ad10u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_27ad14:
    // 0x27ad14: 0x7150  .word       0x00007150                   # mfhi        $t6 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ad14u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_27ad18:
    // 0x27ad18: 0x0  nop
    ctx->pc = 0x27ad18u;
    // NOP
label_27ad1c:
    // 0x27ad1c: 0x0  nop
    ctx->pc = 0x27ad1cu;
    // NOP
label_27ad20:
    // 0x27ad20: 0x11a32  tlt         $zero, $at, 104
    ctx->pc = 0x27ad20u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27ad24:
    // 0x27ad24: 0x9520  .word       0x00009520                   # add         $s2, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ad24u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_27ad28:
    // 0x27ad28: 0x0  nop
    ctx->pc = 0x27ad28u;
    // NOP
label_27ad2c:
    // 0x27ad2c: 0x0  nop
    ctx->pc = 0x27ad2cu;
    // NOP
label_27ad30:
    // 0x27ad30: 0x11a45  .word       0x00011A45                   # INVALID     $zero, $at, 0x1A45 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ad30u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x27AD30 raw=0x00011A45"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27ad34:
    // 0x27ad34: 0x8020  add         $s0, $zero, $zero
    ctx->pc = 0x27ad34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_27ad38:
    // 0x27ad38: 0x0  nop
    ctx->pc = 0x27ad38u;
    // NOP
label_27ad3c:
    // 0x27ad3c: 0x0  nop
    ctx->pc = 0x27ad3cu;
    // NOP
label_27ad40:
    // 0x27ad40: 0x11a56  .word       0x00011A56                   # dsrlv       $v1, $at, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ad40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_27ad44:
    // 0x27ad44: 0x8310  .word       0x00008310                   # mfhi        $s0 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ad44u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_27ad48:
    // 0x27ad48: 0x0  nop
    ctx->pc = 0x27ad48u;
    // NOP
label_27ad4c:
    // 0x27ad4c: 0x0  nop
    ctx->pc = 0x27ad4cu;
    // NOP
label_27ad50:
    // 0x27ad50: 0x11a67  .word       0x00011A67                   # nor         $v1, $zero, $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ad50u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_27ad54:
    // 0x27ad54: 0x92d0  .word       0x000092D0                   # mfhi        $s2 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ad54u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_27ad58:
    // 0x27ad58: 0x0  nop
    ctx->pc = 0x27ad58u;
    // NOP
label_27ad5c:
    // 0x27ad5c: 0x0  nop
    ctx->pc = 0x27ad5cu;
    // NOP
label_27ad60:
    // 0x27ad60: 0x11a7a  dsrl        $v1, $at, 9
    ctx->pc = 0x27ad60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 1) >> 9);
label_27ad64:
    // 0x27ad64: 0xa840  sll         $s5, $zero, 1
    ctx->pc = 0x27ad64u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_27ad68:
    // 0x27ad68: 0x0  nop
    ctx->pc = 0x27ad68u;
    // NOP
label_27ad6c:
    // 0x27ad6c: 0x0  nop
    ctx->pc = 0x27ad6cu;
    // NOP
label_27ad70:
    // 0x27ad70: 0x11a90  .word       0x00011A90                   # mfhi        $v1 # 00010280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ad70u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_27ad74:
    // 0x27ad74: 0x79f0  tge         $zero, $zero, 487
    ctx->pc = 0x27ad74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27ad78:
    // 0x27ad78: 0x0  nop
    ctx->pc = 0x27ad78u;
    // NOP
label_27ad7c:
    // 0x27ad7c: 0x0  nop
    ctx->pc = 0x27ad7cu;
    // NOP
label_27ad80:
    // 0x27ad80: 0x11aa0  .word       0x00011AA0                   # add         $v1, $zero, $at # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ad80u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_27ad84:
    // 0x27ad84: 0x8630  tge         $zero, $zero, 536
    ctx->pc = 0x27ad84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27ad88:
    // 0x27ad88: 0x0  nop
    ctx->pc = 0x27ad88u;
    // NOP
label_27ad8c:
    // 0x27ad8c: 0x0  nop
    ctx->pc = 0x27ad8cu;
    // NOP
label_27ad90:
    // 0x27ad90: 0x11ab1  tgeu        $zero, $at, 106
    ctx->pc = 0x27ad90u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27ad94:
    // 0x27ad94: 0x91c0  sll         $s2, $zero, 7
    ctx->pc = 0x27ad94u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_27ad98:
    // 0x27ad98: 0x0  nop
    ctx->pc = 0x27ad98u;
    // NOP
label_27ad9c:
    // 0x27ad9c: 0x0  nop
    ctx->pc = 0x27ad9cu;
    // NOP
label_27ada0:
    // 0x27ada0: 0x11ac4  .word       0x00011AC4                   # sllv        $v1, $at, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ada0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27ada4:
    // 0x27ada4: 0xc560  .word       0x0000C560                   # add         $t8, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ada4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_27ada8:
    // 0x27ada8: 0x0  nop
    ctx->pc = 0x27ada8u;
    // NOP
label_27adac:
    // 0x27adac: 0x0  nop
    ctx->pc = 0x27adacu;
    // NOP
label_27adb0:
    // 0x27adb0: 0x11add  .word       0x00011ADD                   # dmultu      $zero, $at # 00001AC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27adb0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x27ADB0 raw=0x00011ADD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27adb4:
    // 0x27adb4: 0x9860  .word       0x00009860                   # add         $s3, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27adb4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_27adb8:
    // 0x27adb8: 0x0  nop
    ctx->pc = 0x27adb8u;
    // NOP
label_27adbc:
    // 0x27adbc: 0x0  nop
    ctx->pc = 0x27adbcu;
    // NOP
label_27adc0:
    // 0x27adc0: 0x11af1  tgeu        $zero, $at, 107
    ctx->pc = 0x27adc0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27adc4:
    // 0x27adc4: 0x8030  tge         $zero, $zero, 512
    ctx->pc = 0x27adc4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27adc8:
    // 0x27adc8: 0x0  nop
    ctx->pc = 0x27adc8u;
    // NOP
label_27adcc:
    // 0x27adcc: 0x0  nop
    ctx->pc = 0x27adccu;
    // NOP
label_27add0:
    // 0x27add0: 0x11b02  srl         $v1, $at, 12
    ctx->pc = 0x27add0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 1), 12));
label_27add4:
    // 0x27add4: 0x7f50  .word       0x00007F50                   # mfhi        $t7 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27add4u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_27add8:
    // 0x27add8: 0x0  nop
    ctx->pc = 0x27add8u;
    // NOP
label_27addc:
    // 0x27addc: 0x0  nop
    ctx->pc = 0x27addcu;
    // NOP
label_27ade0:
    // 0x27ade0: 0x11b12  .word       0x00011B12                   # mflo        $v1 # 00010300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ade0u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_27ade4:
    // 0x27ade4: 0xa990  .word       0x0000A990                   # mfhi        $s5 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ade4u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_27ade8:
    // 0x27ade8: 0x0  nop
    ctx->pc = 0x27ade8u;
    // NOP
label_27adec:
    // 0x27adec: 0x0  nop
    ctx->pc = 0x27adecu;
    // NOP
label_27adf0:
    // 0x27adf0: 0x11b28  .word       0x00011B28                   # mfsa        $v1 # 00010300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x27adf0u;
    SET_GPR_U32(ctx, 3, ctx->sa);
label_27adf4:
    // 0x27adf4: 0xbeb0  tge         $zero, $zero, 762
    ctx->pc = 0x27adf4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27adf8:
    // 0x27adf8: 0x0  nop
    ctx->pc = 0x27adf8u;
    // NOP
label_27adfc:
    // 0x27adfc: 0x0  nop
    ctx->pc = 0x27adfcu;
    // NOP
label_27ae00:
    // 0x27ae00: 0x11b40  sll         $v1, $at, 13
    ctx->pc = 0x27ae00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 1), 13));
label_27ae04:
    // 0x27ae04: 0xaf00  sll         $s5, $zero, 28
    ctx->pc = 0x27ae04u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_27ae08:
    // 0x27ae08: 0x0  nop
    ctx->pc = 0x27ae08u;
    // NOP
label_27ae0c:
    // 0x27ae0c: 0x0  nop
    ctx->pc = 0x27ae0cu;
    // NOP
label_27ae10:
    // 0x27ae10: 0x11b56  .word       0x00011B56                   # dsrlv       $v1, $at, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ae10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_27ae14:
    // 0x27ae14: 0xa6c0  sll         $s4, $zero, 27
    ctx->pc = 0x27ae14u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_27ae18:
    // 0x27ae18: 0x0  nop
    ctx->pc = 0x27ae18u;
    // NOP
label_27ae1c:
    // 0x27ae1c: 0x0  nop
    ctx->pc = 0x27ae1cu;
    // NOP
label_27ae20:
    // 0x27ae20: 0x11b6b  .word       0x00011B6B                   # sltu        $v1, $zero, $at # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ae20u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_27ae24:
    // 0x27ae24: 0x7e30  tge         $zero, $zero, 504
    ctx->pc = 0x27ae24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27ae28:
    // 0x27ae28: 0x0  nop
    ctx->pc = 0x27ae28u;
    // NOP
label_27ae2c:
    // 0x27ae2c: 0x0  nop
    ctx->pc = 0x27ae2cu;
    // NOP
label_27ae30:
    // 0x27ae30: 0x11b7b  dsra        $v1, $at, 13
    ctx->pc = 0x27ae30u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 1) >> 13);
label_27ae34:
    // 0x27ae34: 0xc120  .word       0x0000C120                   # add         $t8, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ae34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_27ae38:
    // 0x27ae38: 0x0  nop
    ctx->pc = 0x27ae38u;
    // NOP
label_27ae3c:
    // 0x27ae3c: 0x0  nop
    ctx->pc = 0x27ae3cu;
    // NOP
label_27ae40:
    // 0x27ae40: 0x11b94  .word       0x00011B94                   # dsllv       $v1, $at, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ae40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 1) << (GPR_U32(ctx, 0) & 0x3F));
label_27ae44:
    // 0x27ae44: 0x6320  .word       0x00006320                   # add         $t4, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ae44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_27ae48:
    // 0x27ae48: 0x0  nop
    ctx->pc = 0x27ae48u;
    // NOP
label_27ae4c:
    // 0x27ae4c: 0x0  nop
    ctx->pc = 0x27ae4cu;
    // NOP
label_27ae50:
    // 0x27ae50: 0x11ba1  .word       0x00011BA1                   # addu        $v1, $zero, $at # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ae50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_27ae54:
    // 0x27ae54: 0x9950  .word       0x00009950                   # mfhi        $s3 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ae54u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_27ae58:
    // 0x27ae58: 0x0  nop
    ctx->pc = 0x27ae58u;
    // NOP
label_27ae5c:
    // 0x27ae5c: 0x0  nop
    ctx->pc = 0x27ae5cu;
    // NOP
label_27ae60:
    // 0x27ae60: 0x11bb5  .word       0x00011BB5                   # INVALID     $zero, $at, 0x1BB5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ae60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x27AE60 raw=0x00011BB5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27ae64:
    // 0x27ae64: 0xc3e0  .word       0x0000C3E0                   # add         $t8, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ae64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_27ae68:
    // 0x27ae68: 0x0  nop
    ctx->pc = 0x27ae68u;
    // NOP
label_27ae6c:
    // 0x27ae6c: 0x0  nop
    ctx->pc = 0x27ae6cu;
    // NOP
label_27ae70:
    // 0x27ae70: 0x11bce  .word       0x00011BCE                   # INVALID     $zero, $at, 0x1BCE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ae70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x27AE70 raw=0x00011BCE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27ae74:
    // 0x27ae74: 0x9360  .word       0x00009360                   # add         $s2, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ae74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_27ae78:
    // 0x27ae78: 0x0  nop
    ctx->pc = 0x27ae78u;
    // NOP
label_27ae7c:
    // 0x27ae7c: 0x0  nop
    ctx->pc = 0x27ae7cu;
    // NOP
label_27ae80:
    // 0x27ae80: 0x11be1  .word       0x00011BE1                   # addu        $v1, $zero, $at # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ae80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_27ae84:
    // 0x27ae84: 0x9d70  tge         $zero, $zero, 629
    ctx->pc = 0x27ae84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27ae88:
    // 0x27ae88: 0x0  nop
    ctx->pc = 0x27ae88u;
    // NOP
label_27ae8c:
    // 0x27ae8c: 0x0  nop
    ctx->pc = 0x27ae8cu;
    // NOP
label_27ae90:
    // 0x27ae90: 0x11bf5  .word       0x00011BF5                   # INVALID     $zero, $at, 0x1BF5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ae90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x27AE90 raw=0x00011BF5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27ae94:
    // 0x27ae94: 0xdad0  .word       0x0000DAD0                   # mfhi        $k1 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ae94u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_27ae98:
    // 0x27ae98: 0x0  nop
    ctx->pc = 0x27ae98u;
    // NOP
label_27ae9c:
    // 0x27ae9c: 0x0  nop
    ctx->pc = 0x27ae9cu;
    // NOP
label_27aea0:
    // 0x27aea0: 0x11c11  .word       0x00011C11                   # mthi        $zero # 00011C00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27aea0u;
    ctx->hi = GPR_U64(ctx, 0);
label_27aea4:
    // 0x27aea4: 0x71b0  tge         $zero, $zero, 454
    ctx->pc = 0x27aea4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27aea8:
    // 0x27aea8: 0x0  nop
    ctx->pc = 0x27aea8u;
    // NOP
label_27aeac:
    // 0x27aeac: 0x0  nop
    ctx->pc = 0x27aeacu;
    // NOP
label_27aeb0:
    // 0x27aeb0: 0x11c20  .word       0x00011C20                   # add         $v1, $zero, $at # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27aeb0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_27aeb4:
    // 0x27aeb4: 0x94d0  .word       0x000094D0                   # mfhi        $s2 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27aeb4u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_27aeb8:
    // 0x27aeb8: 0x0  nop
    ctx->pc = 0x27aeb8u;
    // NOP
label_27aebc:
    // 0x27aebc: 0x0  nop
    ctx->pc = 0x27aebcu;
    // NOP
label_27aec0:
    // 0x27aec0: 0x11c33  tltu        $zero, $at, 112
    ctx->pc = 0x27aec0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27aec4:
    // 0x27aec4: 0x8950  .word       0x00008950                   # mfhi        $s1 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27aec4u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_27aec8:
    // 0x27aec8: 0x0  nop
    ctx->pc = 0x27aec8u;
    // NOP
label_27aecc:
    // 0x27aecc: 0x0  nop
    ctx->pc = 0x27aeccu;
    // NOP
label_27aed0:
    // 0x27aed0: 0x11c45  .word       0x00011C45                   # INVALID     $zero, $at, 0x1C45 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27aed0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x27AED0 raw=0x00011C45"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27aed4:
    // 0x27aed4: 0x9ba0  .word       0x00009BA0                   # add         $s3, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27aed4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_27aed8:
    // 0x27aed8: 0x0  nop
    ctx->pc = 0x27aed8u;
    // NOP
label_27aedc:
    // 0x27aedc: 0x0  nop
    ctx->pc = 0x27aedcu;
    // NOP
label_27aee0:
    // 0x27aee0: 0x11c59  .word       0x00011C59                   # multu       $zero, $at # 00001C40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27aee0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_27aee4:
    // 0x27aee4: 0x9330  tge         $zero, $zero, 588
    ctx->pc = 0x27aee4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27aee8:
    // 0x27aee8: 0x0  nop
    ctx->pc = 0x27aee8u;
    // NOP
label_27aeec:
    // 0x27aeec: 0x0  nop
    ctx->pc = 0x27aeecu;
    // NOP
label_27aef0:
    // 0x27aef0: 0x11c6c  .word       0x00011C6C                   # dadd        $v1, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27aef0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, r); }
label_27aef4:
    // 0x27aef4: 0x95a0  .word       0x000095A0                   # add         $s2, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27aef4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_27aef8:
    // 0x27aef8: 0x0  nop
    ctx->pc = 0x27aef8u;
    // NOP
label_27aefc:
    // 0x27aefc: 0x0  nop
    ctx->pc = 0x27aefcu;
    // NOP
label_27af00:
    // 0x27af00: 0x11c7f  dsra32      $v1, $at, 17
    ctx->pc = 0x27af00u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 1) >> (32 + 17));
label_27af04:
    // 0x27af04: 0xc4c0  sll         $t8, $zero, 19
    ctx->pc = 0x27af04u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_27af08:
    // 0x27af08: 0x0  nop
    ctx->pc = 0x27af08u;
    // NOP
label_27af0c:
    // 0x27af0c: 0x0  nop
    ctx->pc = 0x27af0cu;
    // NOP
label_27af10:
    // 0x27af10: 0x11c98  .word       0x00011C98                   # mult        $v1, $zero, $at # 00000480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x27af10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_27af14:
    // 0x27af14: 0xb450  .word       0x0000B450                   # mfhi        $s6 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27af14u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_27af18:
    // 0x27af18: 0x0  nop
    ctx->pc = 0x27af18u;
    // NOP
label_27af1c:
    // 0x27af1c: 0x0  nop
    ctx->pc = 0x27af1cu;
    // NOP
label_27af20:
    // 0x27af20: 0x11caf  .word       0x00011CAF                   # dsubu       $v1, $zero, $at # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27af20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_27af24:
    // 0x27af24: 0x77f0  tge         $zero, $zero, 479
    ctx->pc = 0x27af24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27af28:
    // 0x27af28: 0x0  nop
    ctx->pc = 0x27af28u;
    // NOP
label_27af2c:
    // 0x27af2c: 0x0  nop
    ctx->pc = 0x27af2cu;
    // NOP
label_27af30:
    // 0x27af30: 0x11cbe  dsrl32      $v1, $at, 18
    ctx->pc = 0x27af30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 1) >> (32 + 18));
label_27af34:
    // 0x27af34: 0x8540  sll         $s0, $zero, 21
    ctx->pc = 0x27af34u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_27af38:
    // 0x27af38: 0x0  nop
    ctx->pc = 0x27af38u;
    // NOP
label_27af3c:
    // 0x27af3c: 0x0  nop
    ctx->pc = 0x27af3cu;
    // NOP
label_27af40:
    // 0x27af40: 0x11ccf  .word       0x00011CCF                   # sync.p # 00011800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27af40u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_27af44:
    // 0x27af44: 0xbeb0  tge         $zero, $zero, 762
    ctx->pc = 0x27af44u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27af48:
    // 0x27af48: 0x0  nop
    ctx->pc = 0x27af48u;
    // NOP
label_27af4c:
    // 0x27af4c: 0x0  nop
    ctx->pc = 0x27af4cu;
    // NOP
label_27af50:
    // 0x27af50: 0x11ce7  .word       0x00011CE7                   # nor         $v1, $zero, $at # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27af50u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_27af54:
    // 0x27af54: 0x72c0  sll         $t6, $zero, 11
    ctx->pc = 0x27af54u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_27af58:
    // 0x27af58: 0x0  nop
    ctx->pc = 0x27af58u;
    // NOP
label_27af5c:
    // 0x27af5c: 0x0  nop
    ctx->pc = 0x27af5cu;
    // NOP
label_27af60:
    // 0x27af60: 0x11cf6  tne         $zero, $at, 115
    ctx->pc = 0x27af60u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27af64:
    // 0x27af64: 0xa260  .word       0x0000A260                   # add         $s4, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27af64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_27af68:
    // 0x27af68: 0x0  nop
    ctx->pc = 0x27af68u;
    // NOP
label_27af6c:
    // 0x27af6c: 0x0  nop
    ctx->pc = 0x27af6cu;
    // NOP
label_27af70:
    // 0x27af70: 0x11d0b  .word       0x00011D0B                   # movn        $v1, $zero, $at # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27af70u;
    if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_27af74:
    // 0x27af74: 0xada0  .word       0x0000ADA0                   # add         $s5, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27af74u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_27af78:
    // 0x27af78: 0x0  nop
    ctx->pc = 0x27af78u;
    // NOP
label_27af7c:
    // 0x27af7c: 0x0  nop
    ctx->pc = 0x27af7cu;
    // NOP
label_27af80:
    // 0x27af80: 0x11d21  .word       0x00011D21                   # addu        $v1, $zero, $at # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27af80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_27af84:
    // 0x27af84: 0x8b50  .word       0x00008B50                   # mfhi        $s1 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27af84u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_27af88:
    // 0x27af88: 0x0  nop
    ctx->pc = 0x27af88u;
    // NOP
label_27af8c:
    // 0x27af8c: 0x0  nop
    ctx->pc = 0x27af8cu;
    // NOP
label_27af90:
    // 0x27af90: 0x11d33  tltu        $zero, $at, 116
    ctx->pc = 0x27af90u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27af94:
    // 0x27af94: 0x6c70  tge         $zero, $zero, 433
    ctx->pc = 0x27af94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27af98:
    // 0x27af98: 0x0  nop
    ctx->pc = 0x27af98u;
    // NOP
label_27af9c:
    // 0x27af9c: 0x0  nop
    ctx->pc = 0x27af9cu;
    // NOP
label_27afa0:
    // 0x27afa0: 0x11d41  .word       0x00011D41                   # INVALID     $zero, $at, 0x1D41 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27afa0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x27AFA0 raw=0x00011D41"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27afa4:
    // 0x27afa4: 0x6bf0  tge         $zero, $zero, 431
    ctx->pc = 0x27afa4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27afa8:
    // 0x27afa8: 0x0  nop
    ctx->pc = 0x27afa8u;
    // NOP
label_27afac:
    // 0x27afac: 0x0  nop
    ctx->pc = 0x27afacu;
    // NOP
label_27afb0:
    // 0x27afb0: 0x11d4f  .word       0x00011D4F                   # sync.p # 00011800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27afb0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_27afb4:
    // 0x27afb4: 0x77e0  .word       0x000077E0                   # add         $t6, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27afb4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_27afb8:
    // 0x27afb8: 0x0  nop
    ctx->pc = 0x27afb8u;
    // NOP
label_27afbc:
    // 0x27afbc: 0x0  nop
    ctx->pc = 0x27afbcu;
    // NOP
label_27afc0:
    // 0x27afc0: 0x11d5e  .word       0x00011D5E                   # ddiv        $v1, $zero, $at # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27afc0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x27AFC0 raw=0x00011D5E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27afc4:
    // 0x27afc4: 0x7fb0  tge         $zero, $zero, 510
    ctx->pc = 0x27afc4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27afc8:
    // 0x27afc8: 0x0  nop
    ctx->pc = 0x27afc8u;
    // NOP
label_27afcc:
    // 0x27afcc: 0x0  nop
    ctx->pc = 0x27afccu;
    // NOP
label_27afd0:
    // 0x27afd0: 0x11d6e  .word       0x00011D6E                   # dsub        $v1, $zero, $at # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27afd0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, r); }
label_27afd4:
    // 0x27afd4: 0x6de0  .word       0x00006DE0                   # add         $t5, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27afd4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_27afd8:
    // 0x27afd8: 0x0  nop
    ctx->pc = 0x27afd8u;
    // NOP
label_27afdc:
    // 0x27afdc: 0x0  nop
    ctx->pc = 0x27afdcu;
    // NOP
label_27afe0:
    // 0x27afe0: 0x11d7c  dsll32      $v1, $at, 21
    ctx->pc = 0x27afe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 1) << (32 + 21));
label_27afe4:
    // 0x27afe4: 0x3360  .word       0x00003360                   # add         $a2, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27afe4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_27afe8:
    // 0x27afe8: 0x0  nop
    ctx->pc = 0x27afe8u;
    // NOP
label_27afec:
    // 0x27afec: 0x0  nop
    ctx->pc = 0x27afecu;
    // NOP
label_27aff0:
    // 0x27aff0: 0x11d83  sra         $v1, $at, 22
    ctx->pc = 0x27aff0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 1), 22));
label_27aff4:
    // 0x27aff4: 0x7030  tge         $zero, $zero, 448
    ctx->pc = 0x27aff4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27aff8:
    // 0x27aff8: 0x0  nop
    ctx->pc = 0x27aff8u;
    // NOP
label_27affc:
    // 0x27affc: 0x0  nop
    ctx->pc = 0x27affcu;
    // NOP
label_27b000:
    // 0x27b000: 0x11d92  .word       0x00011D92                   # mflo        $v1 # 00010580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b000u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_27b004:
    // 0x27b004: 0x4420  .word       0x00004420                   # add         $t0, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b004u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_27b008:
    // 0x27b008: 0x0  nop
    ctx->pc = 0x27b008u;
    // NOP
label_27b00c:
    // 0x27b00c: 0x0  nop
    ctx->pc = 0x27b00cu;
    // NOP
label_27b010:
    // 0x27b010: 0x11d9b  .word       0x00011D9B                   # divu        $v1, $zero, $at # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b010u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_27b014:
    // 0x27b014: 0x3f50  .word       0x00003F50                   # mfhi        $a3 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b014u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_27b018:
    // 0x27b018: 0x0  nop
    ctx->pc = 0x27b018u;
    // NOP
label_27b01c:
    // 0x27b01c: 0x0  nop
    ctx->pc = 0x27b01cu;
    // NOP
label_27b020:
    // 0x27b020: 0x11da3  .word       0x00011DA3                   # negu        $v1, $at # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b020u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_27b024:
    // 0x27b024: 0x47c0  sll         $t0, $zero, 31
    ctx->pc = 0x27b024u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_27b028:
    // 0x27b028: 0x0  nop
    ctx->pc = 0x27b028u;
    // NOP
label_27b02c:
    // 0x27b02c: 0x0  nop
    ctx->pc = 0x27b02cu;
    // NOP
label_27b030:
    // 0x27b030: 0x11dac  .word       0x00011DAC                   # dadd        $v1, $zero, $at # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b030u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, r); }
label_27b034:
    // 0x27b034: 0x4e00  sll         $t1, $zero, 24
    ctx->pc = 0x27b034u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_27b038:
    // 0x27b038: 0x0  nop
    ctx->pc = 0x27b038u;
    // NOP
label_27b03c:
    // 0x27b03c: 0x0  nop
    ctx->pc = 0x27b03cu;
    // NOP
label_27b040:
    // 0x27b040: 0x11db6  tne         $zero, $at, 118
    ctx->pc = 0x27b040u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27b044:
    // 0x27b044: 0x3090  .word       0x00003090                   # mfhi        $a2 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b044u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_27b048:
    // 0x27b048: 0x0  nop
    ctx->pc = 0x27b048u;
    // NOP
label_27b04c:
    // 0x27b04c: 0x0  nop
    ctx->pc = 0x27b04cu;
    // NOP
label_27b050:
    // 0x27b050: 0x11dbd  .word       0x00011DBD                   # INVALID     $zero, $at, 0x1DBD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b050u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x27B050 raw=0x00011DBD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27b054:
    // 0x27b054: 0x6c30  tge         $zero, $zero, 432
    ctx->pc = 0x27b054u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27b058:
    // 0x27b058: 0x0  nop
    ctx->pc = 0x27b058u;
    // NOP
label_27b05c:
    // 0x27b05c: 0x0  nop
    ctx->pc = 0x27b05cu;
    // NOP
label_27b060:
    // 0x27b060: 0x11dcb  .word       0x00011DCB                   # movn        $v1, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b060u;
    if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_27b064:
    // 0x27b064: 0x6a40  sll         $t5, $zero, 9
    ctx->pc = 0x27b064u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_27b068:
    // 0x27b068: 0x0  nop
    ctx->pc = 0x27b068u;
    // NOP
label_27b06c:
    // 0x27b06c: 0x0  nop
    ctx->pc = 0x27b06cu;
    // NOP
label_27b070:
    // 0x27b070: 0x11dd9  .word       0x00011DD9                   # multu       $zero, $at # 00001DC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b070u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_27b074:
    // 0x27b074: 0x8910  .word       0x00008910                   # mfhi        $s1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b074u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_27b078:
    // 0x27b078: 0x0  nop
    ctx->pc = 0x27b078u;
    // NOP
label_27b07c:
    // 0x27b07c: 0x0  nop
    ctx->pc = 0x27b07cu;
    // NOP
label_27b080:
    // 0x27b080: 0x11deb  .word       0x00011DEB                   # sltu        $v1, $zero, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b080u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_27b084:
    // 0x27b084: 0x7870  tge         $zero, $zero, 481
    ctx->pc = 0x27b084u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27b088:
    // 0x27b088: 0x0  nop
    ctx->pc = 0x27b088u;
    // NOP
label_27b08c:
    // 0x27b08c: 0x0  nop
    ctx->pc = 0x27b08cu;
    // NOP
label_27b090:
    // 0x27b090: 0x11dfb  dsra        $v1, $at, 23
    ctx->pc = 0x27b090u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 1) >> 23);
label_27b094:
    // 0x27b094: 0x3e90  .word       0x00003E90                   # mfhi        $a3 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b094u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_27b098:
    // 0x27b098: 0x0  nop
    ctx->pc = 0x27b098u;
    // NOP
label_27b09c:
    // 0x27b09c: 0x0  nop
    ctx->pc = 0x27b09cu;
    // NOP
label_27b0a0:
    // 0x27b0a0: 0x11e03  sra         $v1, $at, 24
    ctx->pc = 0x27b0a0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 1), 24));
label_27b0a4:
    // 0x27b0a4: 0x37e0  .word       0x000037E0                   # add         $a2, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b0a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_27b0a8:
    // 0x27b0a8: 0x0  nop
    ctx->pc = 0x27b0a8u;
    // NOP
label_27b0ac:
    // 0x27b0ac: 0x0  nop
    ctx->pc = 0x27b0acu;
    // NOP
label_27b0b0:
    // 0x27b0b0: 0x11e0a  .word       0x00011E0A                   # movz        $v1, $zero, $at # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b0b0u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_27b0b4:
    // 0x27b0b4: 0x3450  .word       0x00003450                   # mfhi        $a2 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b0b4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_27b0b8:
    // 0x27b0b8: 0x0  nop
    ctx->pc = 0x27b0b8u;
    // NOP
label_27b0bc:
    // 0x27b0bc: 0x0  nop
    ctx->pc = 0x27b0bcu;
    // NOP
label_27b0c0:
    // 0x27b0c0: 0x11e11  .word       0x00011E11                   # mthi        $zero # 00011E00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b0c0u;
    ctx->hi = GPR_U64(ctx, 0);
label_27b0c4:
    // 0x27b0c4: 0x40d0  .word       0x000040D0                   # mfhi        $t0 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b0c4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_27b0c8:
    // 0x27b0c8: 0x0  nop
    ctx->pc = 0x27b0c8u;
    // NOP
label_27b0cc:
    // 0x27b0cc: 0x0  nop
    ctx->pc = 0x27b0ccu;
    // NOP
label_27b0d0:
    // 0x27b0d0: 0x11e1a  .word       0x00011E1A                   # div         $v1, $zero, $at # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b0d0u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_27b0d4:
    // 0x27b0d4: 0x4140  sll         $t0, $zero, 5
    ctx->pc = 0x27b0d4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_27b0d8:
    // 0x27b0d8: 0x0  nop
    ctx->pc = 0x27b0d8u;
    // NOP
label_27b0dc:
    // 0x27b0dc: 0x0  nop
    ctx->pc = 0x27b0dcu;
    // NOP
label_27b0e0:
    // 0x27b0e0: 0x11e23  .word       0x00011E23                   # negu        $v1, $at # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_27b0e4:
    // 0x27b0e4: 0x6ba0  .word       0x00006BA0                   # add         $t5, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b0e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_27b0e8:
    // 0x27b0e8: 0x0  nop
    ctx->pc = 0x27b0e8u;
    // NOP
label_27b0ec:
    // 0x27b0ec: 0x0  nop
    ctx->pc = 0x27b0ecu;
    // NOP
label_27b0f0:
    // 0x27b0f0: 0x11e31  tgeu        $zero, $at, 120
    ctx->pc = 0x27b0f0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27b0f4:
    // 0x27b0f4: 0x7000  sll         $t6, $zero, 0
    ctx->pc = 0x27b0f4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_27b0f8:
    // 0x27b0f8: 0x0  nop
    ctx->pc = 0x27b0f8u;
    // NOP
label_27b0fc:
    // 0x27b0fc: 0x0  nop
    ctx->pc = 0x27b0fcu;
    // NOP
label_27b100:
    // 0x27b100: 0x11e3f  dsra32      $v1, $at, 24
    ctx->pc = 0x27b100u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 1) >> (32 + 24));
label_27b104:
    // 0x27b104: 0x4510  .word       0x00004510                   # mfhi        $t0 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b104u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_27b108:
    // 0x27b108: 0x0  nop
    ctx->pc = 0x27b108u;
    // NOP
label_27b10c:
    // 0x27b10c: 0x0  nop
    ctx->pc = 0x27b10cu;
    // NOP
label_27b110:
    // 0x27b110: 0x11e48  .word       0x00011E48                   # jr          $zero # 00011E40 <InstrIdType: CPU_SPECIAL>
label_27b114:
    if (ctx->pc == 0x27B114u) {
        ctx->pc = 0x27B114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B110u;
        // 0x27b114: 0x1f60  .word       0x00001F60                   # add         $v1, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27B118u;
        goto label_27b118;
    }
    ctx->pc = 0x27B110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x27B114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B110u;
        // 0x27b114: 0x1f60  .word       0x00001F60                   # add         $v1, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27B110u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x27B118u;
label_27b118:
    // 0x27b118: 0x0  nop
    ctx->pc = 0x27b118u;
    // NOP
label_27b11c:
    // 0x27b11c: 0x0  nop
    ctx->pc = 0x27b11cu;
    // NOP
label_27b120:
    // 0x27b120: 0x11e4c  .word       0x00011E4C                   # syscall     121 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b120u;
    ctx->pc = 0x27B124u;
runtime->handleSyscall(rdram, ctx, 0x479u);
label_27b124:
    // 0x27b124: 0xb8d0  .word       0x0000B8D0                   # mfhi        $s7 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b124u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_27b128:
    // 0x27b128: 0x0  nop
    ctx->pc = 0x27b128u;
    // NOP
label_27b12c:
    // 0x27b12c: 0x0  nop
    ctx->pc = 0x27b12cu;
    // NOP
label_27b130:
    // 0x27b130: 0x11e64  .word       0x00011E64                   # and         $v1, $zero, $at # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_27b134:
    // 0x27b134: 0x4b10  .word       0x00004B10                   # mfhi        $t1 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b134u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_27b138:
    // 0x27b138: 0x0  nop
    ctx->pc = 0x27b138u;
    // NOP
label_27b13c:
    // 0x27b13c: 0x0  nop
    ctx->pc = 0x27b13cu;
    // NOP
label_27b140:
    // 0x27b140: 0x11e6e  .word       0x00011E6E                   # dsub        $v1, $zero, $at # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b140u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, r); }
label_27b144:
    // 0x27b144: 0x6b50  .word       0x00006B50                   # mfhi        $t5 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b144u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_27b148:
    // 0x27b148: 0x0  nop
    ctx->pc = 0x27b148u;
    // NOP
label_27b14c:
    // 0x27b14c: 0x0  nop
    ctx->pc = 0x27b14cu;
    // NOP
label_27b150:
    // 0x27b150: 0x11e7c  dsll32      $v1, $at, 25
    ctx->pc = 0x27b150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 1) << (32 + 25));
label_27b154:
    // 0x27b154: 0x8b10  .word       0x00008B10                   # mfhi        $s1 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b154u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_27b158:
    // 0x27b158: 0x0  nop
    ctx->pc = 0x27b158u;
    // NOP
label_27b15c:
    // 0x27b15c: 0x0  nop
    ctx->pc = 0x27b15cu;
    // NOP
label_27b160:
    // 0x27b160: 0x11e8e  .word       0x00011E8E                   # INVALID     $zero, $at, 0x1E8E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b160u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x27B160 raw=0x00011E8E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27b164:
    // 0x27b164: 0x4960  .word       0x00004960                   # add         $t1, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b164u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_27b168:
    // 0x27b168: 0x0  nop
    ctx->pc = 0x27b168u;
    // NOP
label_27b16c:
    // 0x27b16c: 0x0  nop
    ctx->pc = 0x27b16cu;
    // NOP
label_27b170:
    // 0x27b170: 0x11e98  .word       0x00011E98                   # mult        $v1, $zero, $at # 00000680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x27b170u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_27b174:
    // 0x27b174: 0x5350  .word       0x00005350                   # mfhi        $t2 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b174u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_27b178:
    // 0x27b178: 0x0  nop
    ctx->pc = 0x27b178u;
    // NOP
label_27b17c:
    // 0x27b17c: 0x0  nop
    ctx->pc = 0x27b17cu;
    // NOP
label_27b180:
    // 0x27b180: 0x11ea3  .word       0x00011EA3                   # negu        $v1, $at # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b180u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_27b184:
    // 0x27b184: 0x89a0  .word       0x000089A0                   # add         $s1, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b184u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_27b188:
    // 0x27b188: 0x0  nop
    ctx->pc = 0x27b188u;
    // NOP
label_27b18c:
    // 0x27b18c: 0x0  nop
    ctx->pc = 0x27b18cu;
    // NOP
label_27b190:
    // 0x27b190: 0x11eb5  .word       0x00011EB5                   # INVALID     $zero, $at, 0x1EB5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b190u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x27B190 raw=0x00011EB5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27b194:
    // 0x27b194: 0xc930  tge         $zero, $zero, 804
    ctx->pc = 0x27b194u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27b198:
    // 0x27b198: 0x0  nop
    ctx->pc = 0x27b198u;
    // NOP
label_27b19c:
    // 0x27b19c: 0x0  nop
    ctx->pc = 0x27b19cu;
    // NOP
label_27b1a0:
    // 0x27b1a0: 0x11ecf  .word       0x00011ECF                   # sync.p # 00011800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b1a0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_27b1a4:
    // 0x27b1a4: 0x6d60  .word       0x00006D60                   # add         $t5, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b1a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_27b1a8:
    // 0x27b1a8: 0x0  nop
    ctx->pc = 0x27b1a8u;
    // NOP
label_27b1ac:
    // 0x27b1ac: 0x0  nop
    ctx->pc = 0x27b1acu;
    // NOP
label_27b1b0:
    // 0x27b1b0: 0x11edd  .word       0x00011EDD                   # dmultu      $zero, $at # 00001EC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b1b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x27B1B0 raw=0x00011EDD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27b1b4:
    // 0x27b1b4: 0x56e0  .word       0x000056E0                   # add         $t2, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b1b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_27b1b8:
    // 0x27b1b8: 0x0  nop
    ctx->pc = 0x27b1b8u;
    // NOP
label_27b1bc:
    // 0x27b1bc: 0x0  nop
    ctx->pc = 0x27b1bcu;
    // NOP
label_27b1c0:
    // 0x27b1c0: 0x11ee8  .word       0x00011EE8                   # mfsa        $v1 # 000106C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x27b1c0u;
    SET_GPR_U32(ctx, 3, ctx->sa);
label_27b1c4:
    // 0x27b1c4: 0x7230  tge         $zero, $zero, 456
    ctx->pc = 0x27b1c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27b1c8:
    // 0x27b1c8: 0x0  nop
    ctx->pc = 0x27b1c8u;
    // NOP
label_27b1cc:
    // 0x27b1cc: 0x0  nop
    ctx->pc = 0x27b1ccu;
    // NOP
label_27b1d0:
    // 0x27b1d0: 0x11ef7  .word       0x00011EF7                   # INVALID     $zero, $at, 0x1EF7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b1d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x27B1D0 raw=0x00011EF7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27b1d4:
    // 0x27b1d4: 0x7cf0  tge         $zero, $zero, 499
    ctx->pc = 0x27b1d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27b1d8:
    // 0x27b1d8: 0x0  nop
    ctx->pc = 0x27b1d8u;
    // NOP
label_27b1dc:
    // 0x27b1dc: 0x0  nop
    ctx->pc = 0x27b1dcu;
    // NOP
label_27b1e0:
    // 0x27b1e0: 0x11f07  .word       0x00011F07                   # srav        $v1, $at, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b1e0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27b1e4:
    // 0x27b1e4: 0x6e30  tge         $zero, $zero, 440
    ctx->pc = 0x27b1e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27b1e8:
    // 0x27b1e8: 0x0  nop
    ctx->pc = 0x27b1e8u;
    // NOP
label_27b1ec:
    // 0x27b1ec: 0x0  nop
    ctx->pc = 0x27b1ecu;
    // NOP
label_27b1f0:
    // 0x27b1f0: 0x11f15  .word       0x00011F15                   # INVALID     $zero, $at, 0x1F15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b1f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x27B1F0 raw=0x00011F15"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27b1f4:
    // 0x27b1f4: 0x3df0  tge         $zero, $zero, 247
    ctx->pc = 0x27b1f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27b1f8:
    // 0x27b1f8: 0x0  nop
    ctx->pc = 0x27b1f8u;
    // NOP
label_27b1fc:
    // 0x27b1fc: 0x0  nop
    ctx->pc = 0x27b1fcu;
    // NOP
label_27b200:
    // 0x27b200: 0x11f1d  .word       0x00011F1D                   # dmultu      $zero, $at # 00001F00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b200u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x27B200 raw=0x00011F1D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27b204:
    // 0x27b204: 0x48a0  .word       0x000048A0                   # add         $t1, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b204u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_27b208:
    // 0x27b208: 0x0  nop
    ctx->pc = 0x27b208u;
    // NOP
label_27b20c:
    // 0x27b20c: 0x0  nop
    ctx->pc = 0x27b20cu;
    // NOP
label_27b210:
    // 0x27b210: 0x11f27  .word       0x00011F27                   # nor         $v1, $zero, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b210u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_27b214:
    // 0x27b214: 0x7240  sll         $t6, $zero, 9
    ctx->pc = 0x27b214u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_27b218:
    // 0x27b218: 0x0  nop
    ctx->pc = 0x27b218u;
    // NOP
label_27b21c:
    // 0x27b21c: 0x0  nop
    ctx->pc = 0x27b21cu;
    // NOP
label_27b220:
    // 0x27b220: 0x11f36  tne         $zero, $at, 124
    ctx->pc = 0x27b220u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27b224:
    // 0x27b224: 0x3950  .word       0x00003950                   # mfhi        $a3 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b224u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_27b228:
    // 0x27b228: 0x0  nop
    ctx->pc = 0x27b228u;
    // NOP
label_27b22c:
    // 0x27b22c: 0x0  nop
    ctx->pc = 0x27b22cu;
    // NOP
label_27b230:
    // 0x27b230: 0x11f3e  dsrl32      $v1, $at, 28
    ctx->pc = 0x27b230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 1) >> (32 + 28));
label_27b234:
    // 0x27b234: 0x8bf0  tge         $zero, $zero, 559
    ctx->pc = 0x27b234u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27b238:
    // 0x27b238: 0x0  nop
    ctx->pc = 0x27b238u;
    // NOP
label_27b23c:
    // 0x27b23c: 0x0  nop
    ctx->pc = 0x27b23cu;
    // NOP
label_27b240:
    // 0x27b240: 0x11f50  .word       0x00011F50                   # mfhi        $v1 # 00010740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b240u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_27b244:
    // 0x27b244: 0xe390  .word       0x0000E390                   # mfhi        $gp # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b244u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_27b248:
    // 0x27b248: 0x0  nop
    ctx->pc = 0x27b248u;
    // NOP
label_27b24c:
    // 0x27b24c: 0x0  nop
    ctx->pc = 0x27b24cu;
    // NOP
label_27b250:
    // 0x27b250: 0x11f6d  .word       0x00011F6D                   # daddu       $v1, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b250u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_27b254:
    // 0x27b254: 0x7e90  .word       0x00007E90                   # mfhi        $t7 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b254u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_27b258:
    // 0x27b258: 0x0  nop
    ctx->pc = 0x27b258u;
    // NOP
label_27b25c:
    // 0x27b25c: 0x0  nop
    ctx->pc = 0x27b25cu;
    // NOP
label_27b260:
    // 0x27b260: 0x11f7d  .word       0x00011F7D                   # INVALID     $zero, $at, 0x1F7D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b260u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x27B260 raw=0x00011F7D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27b264:
    // 0x27b264: 0x6160  .word       0x00006160                   # add         $t4, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b264u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_27b268:
    // 0x27b268: 0x0  nop
    ctx->pc = 0x27b268u;
    // NOP
label_27b26c:
    // 0x27b26c: 0x0  nop
    ctx->pc = 0x27b26cu;
    // NOP
label_27b270:
    // 0x27b270: 0x11f8a  .word       0x00011F8A                   # movz        $v1, $zero, $at # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b270u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_27b274:
    // 0x27b274: 0x5d00  sll         $t3, $zero, 20
    ctx->pc = 0x27b274u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_27b278:
    // 0x27b278: 0x0  nop
    ctx->pc = 0x27b278u;
    // NOP
label_27b27c:
    // 0x27b27c: 0x0  nop
    ctx->pc = 0x27b27cu;
    // NOP
label_27b280:
    // 0x27b280: 0x11f96  .word       0x00011F96                   # dsrlv       $v1, $at, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_27b284:
    // 0x27b284: 0x7dc0  sll         $t7, $zero, 23
    ctx->pc = 0x27b284u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_27b288:
    // 0x27b288: 0x0  nop
    ctx->pc = 0x27b288u;
    // NOP
label_27b28c:
    // 0x27b28c: 0x0  nop
    ctx->pc = 0x27b28cu;
    // NOP
label_27b290:
    // 0x27b290: 0x11fa6  .word       0x00011FA6                   # xor         $v1, $zero, $at # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_27b294:
    // 0x27b294: 0x8b40  sll         $s1, $zero, 13
    ctx->pc = 0x27b294u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
label_27b298:
    // 0x27b298: 0x0  nop
    ctx->pc = 0x27b298u;
    // NOP
label_27b29c:
    // 0x27b29c: 0x0  nop
    ctx->pc = 0x27b29cu;
    // NOP
label_27b2a0:
    // 0x27b2a0: 0x11fb8  dsll        $v1, $at, 30
    ctx->pc = 0x27b2a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 1) << 30);
label_27b2a4:
    // 0x27b2a4: 0xb710  .word       0x0000B710                   # mfhi        $s6 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b2a4u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_27b2a8:
    // 0x27b2a8: 0x0  nop
    ctx->pc = 0x27b2a8u;
    // NOP
label_27b2ac:
    // 0x27b2ac: 0x0  nop
    ctx->pc = 0x27b2acu;
    // NOP
label_27b2b0:
    // 0x27b2b0: 0x11fcf  .word       0x00011FCF                   # sync.p # 00011800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b2b0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_27b2b4:
    // 0x27b2b4: 0x7740  sll         $t6, $zero, 29
    ctx->pc = 0x27b2b4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_27b2b8:
    // 0x27b2b8: 0x0  nop
    ctx->pc = 0x27b2b8u;
    // NOP
label_27b2bc:
    // 0x27b2bc: 0x0  nop
    ctx->pc = 0x27b2bcu;
    // NOP
label_27b2c0:
    // 0x27b2c0: 0x11fde  .word       0x00011FDE                   # ddiv        $v1, $zero, $at # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b2c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x27B2C0 raw=0x00011FDE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27b2c4:
    // 0x27b2c4: 0xaa70  tge         $zero, $zero, 681
    ctx->pc = 0x27b2c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27b2c8:
    // 0x27b2c8: 0x0  nop
    ctx->pc = 0x27b2c8u;
    // NOP
label_27b2cc:
    // 0x27b2cc: 0x0  nop
    ctx->pc = 0x27b2ccu;
    // NOP
label_27b2d0:
    // 0x27b2d0: 0x11ff4  teq         $zero, $at, 127
    ctx->pc = 0x27b2d0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27b2d4:
    // 0x27b2d4: 0x4880  sll         $t1, $zero, 2
    ctx->pc = 0x27b2d4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_27b2d8:
    // 0x27b2d8: 0x0  nop
    ctx->pc = 0x27b2d8u;
    // NOP
label_27b2dc:
    // 0x27b2dc: 0x0  nop
    ctx->pc = 0x27b2dcu;
    // NOP
label_27b2e0:
    // 0x27b2e0: 0x11ffe  dsrl32      $v1, $at, 31
    ctx->pc = 0x27b2e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 1) >> (32 + 31));
label_27b2e4:
    // 0x27b2e4: 0x6a80  sll         $t5, $zero, 10
    ctx->pc = 0x27b2e4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_27b2e8:
    // 0x27b2e8: 0x0  nop
    ctx->pc = 0x27b2e8u;
    // NOP
label_27b2ec:
    // 0x27b2ec: 0x0  nop
    ctx->pc = 0x27b2ecu;
    // NOP
label_27b2f0:
    // 0x27b2f0: 0x1200c  .word       0x0001200C                   # syscall     128 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b2f0u;
    ctx->pc = 0x27B2F4u;
runtime->handleSyscall(rdram, ctx, 0x480u);
label_27b2f4:
    // 0x27b2f4: 0x6540  sll         $t4, $zero, 21
    ctx->pc = 0x27b2f4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_27b2f8:
    // 0x27b2f8: 0x0  nop
    ctx->pc = 0x27b2f8u;
    // NOP
label_27b2fc:
    // 0x27b2fc: 0x0  nop
    ctx->pc = 0x27b2fcu;
    // NOP
label_27b300:
    // 0x27b300: 0x12019  .word       0x00012019                   # multu       $zero, $at # 00002000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b300u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_27b304:
    // 0x27b304: 0x69d0  .word       0x000069D0                   # mfhi        $t5 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b304u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_27b308:
    // 0x27b308: 0x0  nop
    ctx->pc = 0x27b308u;
    // NOP
label_27b30c:
    // 0x27b30c: 0x0  nop
    ctx->pc = 0x27b30cu;
    // NOP
label_27b310:
    // 0x27b310: 0x12027  nor         $a0, $zero, $at
    ctx->pc = 0x27b310u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_27b314:
    // 0x27b314: 0x7eb0  tge         $zero, $zero, 506
    ctx->pc = 0x27b314u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27b318:
    // 0x27b318: 0x0  nop
    ctx->pc = 0x27b318u;
    // NOP
label_27b31c:
    // 0x27b31c: 0x0  nop
    ctx->pc = 0x27b31cu;
    // NOP
label_27b320:
    // 0x27b320: 0x12037  .word       0x00012037                   # INVALID     $zero, $at, 0x2037 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b320u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x27B320 raw=0x00012037"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27b324:
    // 0x27b324: 0x6660  .word       0x00006660                   # add         $t4, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27b324u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_27b328:
    // 0x27b328: 0x0  nop
    ctx->pc = 0x27b328u;
    // NOP
label_27b32c:
    // 0x27b32c: 0x0  nop
    ctx->pc = 0x27b32cu;
    // NOP
    ctx->pc = 0x27b330u;
    return;
}

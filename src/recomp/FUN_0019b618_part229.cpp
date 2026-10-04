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

// Function: FUN_0019b618
// Address: 0x19b618 - 0x29b620
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b618_part229(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x20ab58u: goto label_20ab58;
        case 0x20ab5cu: goto label_20ab5c;
        case 0x20ab60u: goto label_20ab60;
        case 0x20ab64u: goto label_20ab64;
        case 0x20ab68u: goto label_20ab68;
        case 0x20ab6cu: goto label_20ab6c;
        case 0x20ab70u: goto label_20ab70;
        case 0x20ab74u: goto label_20ab74;
        case 0x20ab78u: goto label_20ab78;
        case 0x20ab7cu: goto label_20ab7c;
        case 0x20ab80u: goto label_20ab80;
        case 0x20ab84u: goto label_20ab84;
        case 0x20ab88u: goto label_20ab88;
        case 0x20ab8cu: goto label_20ab8c;
        case 0x20ab90u: goto label_20ab90;
        case 0x20ab94u: goto label_20ab94;
        case 0x20ab98u: goto label_20ab98;
        case 0x20ab9cu: goto label_20ab9c;
        case 0x20aba0u: goto label_20aba0;
        case 0x20aba4u: goto label_20aba4;
        case 0x20aba8u: goto label_20aba8;
        case 0x20abacu: goto label_20abac;
        case 0x20abb0u: goto label_20abb0;
        case 0x20abb4u: goto label_20abb4;
        case 0x20abb8u: goto label_20abb8;
        case 0x20abbcu: goto label_20abbc;
        case 0x20abc0u: goto label_20abc0;
        case 0x20abc4u: goto label_20abc4;
        case 0x20abc8u: goto label_20abc8;
        case 0x20abccu: goto label_20abcc;
        case 0x20abd0u: goto label_20abd0;
        case 0x20abd4u: goto label_20abd4;
        case 0x20abd8u: goto label_20abd8;
        case 0x20abdcu: goto label_20abdc;
        case 0x20abe0u: goto label_20abe0;
        case 0x20abe4u: goto label_20abe4;
        case 0x20abe8u: goto label_20abe8;
        case 0x20abecu: goto label_20abec;
        case 0x20abf0u: goto label_20abf0;
        case 0x20abf4u: goto label_20abf4;
        case 0x20abf8u: goto label_20abf8;
        case 0x20abfcu: goto label_20abfc;
        case 0x20ac00u: goto label_20ac00;
        case 0x20ac04u: goto label_20ac04;
        case 0x20ac08u: goto label_20ac08;
        case 0x20ac0cu: goto label_20ac0c;
        case 0x20ac10u: goto label_20ac10;
        case 0x20ac14u: goto label_20ac14;
        case 0x20ac18u: goto label_20ac18;
        case 0x20ac1cu: goto label_20ac1c;
        case 0x20ac20u: goto label_20ac20;
        case 0x20ac24u: goto label_20ac24;
        case 0x20ac28u: goto label_20ac28;
        case 0x20ac2cu: goto label_20ac2c;
        case 0x20ac30u: goto label_20ac30;
        case 0x20ac34u: goto label_20ac34;
        case 0x20ac38u: goto label_20ac38;
        case 0x20ac3cu: goto label_20ac3c;
        case 0x20ac40u: goto label_20ac40;
        case 0x20ac44u: goto label_20ac44;
        case 0x20ac48u: goto label_20ac48;
        case 0x20ac4cu: goto label_20ac4c;
        case 0x20ac50u: goto label_20ac50;
        case 0x20ac54u: goto label_20ac54;
        case 0x20ac58u: goto label_20ac58;
        case 0x20ac5cu: goto label_20ac5c;
        case 0x20ac60u: goto label_20ac60;
        case 0x20ac64u: goto label_20ac64;
        case 0x20ac68u: goto label_20ac68;
        case 0x20ac6cu: goto label_20ac6c;
        case 0x20ac70u: goto label_20ac70;
        case 0x20ac74u: goto label_20ac74;
        case 0x20ac78u: goto label_20ac78;
        case 0x20ac7cu: goto label_20ac7c;
        case 0x20ac80u: goto label_20ac80;
        case 0x20ac84u: goto label_20ac84;
        case 0x20ac88u: goto label_20ac88;
        case 0x20ac8cu: goto label_20ac8c;
        case 0x20ac90u: goto label_20ac90;
        case 0x20ac94u: goto label_20ac94;
        case 0x20ac98u: goto label_20ac98;
        case 0x20ac9cu: goto label_20ac9c;
        case 0x20aca0u: goto label_20aca0;
        case 0x20aca4u: goto label_20aca4;
        case 0x20aca8u: goto label_20aca8;
        case 0x20acacu: goto label_20acac;
        case 0x20acb0u: goto label_20acb0;
        case 0x20acb4u: goto label_20acb4;
        case 0x20acb8u: goto label_20acb8;
        case 0x20acbcu: goto label_20acbc;
        case 0x20acc0u: goto label_20acc0;
        case 0x20acc4u: goto label_20acc4;
        case 0x20acc8u: goto label_20acc8;
        case 0x20acccu: goto label_20accc;
        case 0x20acd0u: goto label_20acd0;
        case 0x20acd4u: goto label_20acd4;
        case 0x20acd8u: goto label_20acd8;
        case 0x20acdcu: goto label_20acdc;
        case 0x20ace0u: goto label_20ace0;
        case 0x20ace4u: goto label_20ace4;
        case 0x20ace8u: goto label_20ace8;
        case 0x20acecu: goto label_20acec;
        case 0x20acf0u: goto label_20acf0;
        case 0x20acf4u: goto label_20acf4;
        case 0x20acf8u: goto label_20acf8;
        case 0x20acfcu: goto label_20acfc;
        case 0x20ad00u: goto label_20ad00;
        case 0x20ad04u: goto label_20ad04;
        case 0x20ad08u: goto label_20ad08;
        case 0x20ad0cu: goto label_20ad0c;
        case 0x20ad10u: goto label_20ad10;
        case 0x20ad14u: goto label_20ad14;
        case 0x20ad18u: goto label_20ad18;
        case 0x20ad1cu: goto label_20ad1c;
        case 0x20ad20u: goto label_20ad20;
        case 0x20ad24u: goto label_20ad24;
        case 0x20ad28u: goto label_20ad28;
        case 0x20ad2cu: goto label_20ad2c;
        case 0x20ad30u: goto label_20ad30;
        case 0x20ad34u: goto label_20ad34;
        case 0x20ad38u: goto label_20ad38;
        case 0x20ad3cu: goto label_20ad3c;
        case 0x20ad40u: goto label_20ad40;
        case 0x20ad44u: goto label_20ad44;
        case 0x20ad48u: goto label_20ad48;
        case 0x20ad4cu: goto label_20ad4c;
        case 0x20ad50u: goto label_20ad50;
        case 0x20ad54u: goto label_20ad54;
        case 0x20ad58u: goto label_20ad58;
        case 0x20ad5cu: goto label_20ad5c;
        case 0x20ad60u: goto label_20ad60;
        case 0x20ad64u: goto label_20ad64;
        case 0x20ad68u: goto label_20ad68;
        case 0x20ad6cu: goto label_20ad6c;
        case 0x20ad70u: goto label_20ad70;
        case 0x20ad74u: goto label_20ad74;
        case 0x20ad78u: goto label_20ad78;
        case 0x20ad7cu: goto label_20ad7c;
        case 0x20ad80u: goto label_20ad80;
        case 0x20ad84u: goto label_20ad84;
        case 0x20ad88u: goto label_20ad88;
        case 0x20ad8cu: goto label_20ad8c;
        case 0x20ad90u: goto label_20ad90;
        case 0x20ad94u: goto label_20ad94;
        case 0x20ad98u: goto label_20ad98;
        case 0x20ad9cu: goto label_20ad9c;
        case 0x20ada0u: goto label_20ada0;
        case 0x20ada4u: goto label_20ada4;
        case 0x20ada8u: goto label_20ada8;
        case 0x20adacu: goto label_20adac;
        case 0x20adb0u: goto label_20adb0;
        case 0x20adb4u: goto label_20adb4;
        case 0x20adb8u: goto label_20adb8;
        case 0x20adbcu: goto label_20adbc;
        case 0x20adc0u: goto label_20adc0;
        case 0x20adc4u: goto label_20adc4;
        case 0x20adc8u: goto label_20adc8;
        case 0x20adccu: goto label_20adcc;
        case 0x20add0u: goto label_20add0;
        case 0x20add4u: goto label_20add4;
        case 0x20add8u: goto label_20add8;
        case 0x20addcu: goto label_20addc;
        case 0x20ade0u: goto label_20ade0;
        case 0x20ade4u: goto label_20ade4;
        case 0x20ade8u: goto label_20ade8;
        case 0x20adecu: goto label_20adec;
        case 0x20adf0u: goto label_20adf0;
        case 0x20adf4u: goto label_20adf4;
        case 0x20adf8u: goto label_20adf8;
        case 0x20adfcu: goto label_20adfc;
        case 0x20ae00u: goto label_20ae00;
        case 0x20ae04u: goto label_20ae04;
        case 0x20ae08u: goto label_20ae08;
        case 0x20ae0cu: goto label_20ae0c;
        case 0x20ae10u: goto label_20ae10;
        case 0x20ae14u: goto label_20ae14;
        case 0x20ae18u: goto label_20ae18;
        case 0x20ae1cu: goto label_20ae1c;
        case 0x20ae20u: goto label_20ae20;
        case 0x20ae24u: goto label_20ae24;
        case 0x20ae28u: goto label_20ae28;
        case 0x20ae2cu: goto label_20ae2c;
        case 0x20ae30u: goto label_20ae30;
        case 0x20ae34u: goto label_20ae34;
        case 0x20ae38u: goto label_20ae38;
        case 0x20ae3cu: goto label_20ae3c;
        case 0x20ae40u: goto label_20ae40;
        case 0x20ae44u: goto label_20ae44;
        case 0x20ae48u: goto label_20ae48;
        case 0x20ae4cu: goto label_20ae4c;
        case 0x20ae50u: goto label_20ae50;
        case 0x20ae54u: goto label_20ae54;
        case 0x20ae58u: goto label_20ae58;
        case 0x20ae5cu: goto label_20ae5c;
        case 0x20ae60u: goto label_20ae60;
        case 0x20ae64u: goto label_20ae64;
        case 0x20ae68u: goto label_20ae68;
        case 0x20ae6cu: goto label_20ae6c;
        case 0x20ae70u: goto label_20ae70;
        case 0x20ae74u: goto label_20ae74;
        case 0x20ae78u: goto label_20ae78;
        case 0x20ae7cu: goto label_20ae7c;
        case 0x20ae80u: goto label_20ae80;
        case 0x20ae84u: goto label_20ae84;
        case 0x20ae88u: goto label_20ae88;
        case 0x20ae8cu: goto label_20ae8c;
        case 0x20ae90u: goto label_20ae90;
        case 0x20ae94u: goto label_20ae94;
        case 0x20ae98u: goto label_20ae98;
        case 0x20ae9cu: goto label_20ae9c;
        case 0x20aea0u: goto label_20aea0;
        case 0x20aea4u: goto label_20aea4;
        case 0x20aea8u: goto label_20aea8;
        case 0x20aeacu: goto label_20aeac;
        case 0x20aeb0u: goto label_20aeb0;
        case 0x20aeb4u: goto label_20aeb4;
        case 0x20aeb8u: goto label_20aeb8;
        case 0x20aebcu: goto label_20aebc;
        case 0x20aec0u: goto label_20aec0;
        case 0x20aec4u: goto label_20aec4;
        case 0x20aec8u: goto label_20aec8;
        case 0x20aeccu: goto label_20aecc;
        case 0x20aed0u: goto label_20aed0;
        case 0x20aed4u: goto label_20aed4;
        case 0x20aed8u: goto label_20aed8;
        case 0x20aedcu: goto label_20aedc;
        case 0x20aee0u: goto label_20aee0;
        case 0x20aee4u: goto label_20aee4;
        case 0x20aee8u: goto label_20aee8;
        case 0x20aeecu: goto label_20aeec;
        case 0x20aef0u: goto label_20aef0;
        case 0x20aef4u: goto label_20aef4;
        case 0x20aef8u: goto label_20aef8;
        case 0x20aefcu: goto label_20aefc;
        case 0x20af00u: goto label_20af00;
        case 0x20af04u: goto label_20af04;
        case 0x20af08u: goto label_20af08;
        case 0x20af0cu: goto label_20af0c;
        case 0x20af10u: goto label_20af10;
        case 0x20af14u: goto label_20af14;
        case 0x20af18u: goto label_20af18;
        case 0x20af1cu: goto label_20af1c;
        case 0x20af20u: goto label_20af20;
        case 0x20af24u: goto label_20af24;
        case 0x20af28u: goto label_20af28;
        case 0x20af2cu: goto label_20af2c;
        case 0x20af30u: goto label_20af30;
        case 0x20af34u: goto label_20af34;
        case 0x20af38u: goto label_20af38;
        case 0x20af3cu: goto label_20af3c;
        case 0x20af40u: goto label_20af40;
        case 0x20af44u: goto label_20af44;
        case 0x20af48u: goto label_20af48;
        case 0x20af4cu: goto label_20af4c;
        case 0x20af50u: goto label_20af50;
        case 0x20af54u: goto label_20af54;
        case 0x20af58u: goto label_20af58;
        case 0x20af5cu: goto label_20af5c;
        case 0x20af60u: goto label_20af60;
        case 0x20af64u: goto label_20af64;
        case 0x20af68u: goto label_20af68;
        case 0x20af6cu: goto label_20af6c;
        case 0x20af70u: goto label_20af70;
        case 0x20af74u: goto label_20af74;
        case 0x20af78u: goto label_20af78;
        case 0x20af7cu: goto label_20af7c;
        case 0x20af80u: goto label_20af80;
        case 0x20af84u: goto label_20af84;
        case 0x20af88u: goto label_20af88;
        case 0x20af8cu: goto label_20af8c;
        case 0x20af90u: goto label_20af90;
        case 0x20af94u: goto label_20af94;
        case 0x20af98u: goto label_20af98;
        case 0x20af9cu: goto label_20af9c;
        case 0x20afa0u: goto label_20afa0;
        case 0x20afa4u: goto label_20afa4;
        case 0x20afa8u: goto label_20afa8;
        case 0x20afacu: goto label_20afac;
        case 0x20afb0u: goto label_20afb0;
        case 0x20afb4u: goto label_20afb4;
        case 0x20afb8u: goto label_20afb8;
        case 0x20afbcu: goto label_20afbc;
        case 0x20afc0u: goto label_20afc0;
        case 0x20afc4u: goto label_20afc4;
        case 0x20afc8u: goto label_20afc8;
        case 0x20afccu: goto label_20afcc;
        case 0x20afd0u: goto label_20afd0;
        case 0x20afd4u: goto label_20afd4;
        case 0x20afd8u: goto label_20afd8;
        case 0x20afdcu: goto label_20afdc;
        case 0x20afe0u: goto label_20afe0;
        case 0x20afe4u: goto label_20afe4;
        case 0x20afe8u: goto label_20afe8;
        case 0x20afecu: goto label_20afec;
        case 0x20aff0u: goto label_20aff0;
        case 0x20aff4u: goto label_20aff4;
        case 0x20aff8u: goto label_20aff8;
        case 0x20affcu: goto label_20affc;
        case 0x20b000u: goto label_20b000;
        case 0x20b004u: goto label_20b004;
        case 0x20b008u: goto label_20b008;
        case 0x20b00cu: goto label_20b00c;
        case 0x20b010u: goto label_20b010;
        case 0x20b014u: goto label_20b014;
        case 0x20b018u: goto label_20b018;
        case 0x20b01cu: goto label_20b01c;
        case 0x20b020u: goto label_20b020;
        case 0x20b024u: goto label_20b024;
        case 0x20b028u: goto label_20b028;
        case 0x20b02cu: goto label_20b02c;
        case 0x20b030u: goto label_20b030;
        case 0x20b034u: goto label_20b034;
        case 0x20b038u: goto label_20b038;
        case 0x20b03cu: goto label_20b03c;
        case 0x20b040u: goto label_20b040;
        case 0x20b044u: goto label_20b044;
        case 0x20b048u: goto label_20b048;
        case 0x20b04cu: goto label_20b04c;
        case 0x20b050u: goto label_20b050;
        case 0x20b054u: goto label_20b054;
        case 0x20b058u: goto label_20b058;
        case 0x20b05cu: goto label_20b05c;
        case 0x20b060u: goto label_20b060;
        case 0x20b064u: goto label_20b064;
        case 0x20b068u: goto label_20b068;
        case 0x20b06cu: goto label_20b06c;
        case 0x20b070u: goto label_20b070;
        case 0x20b074u: goto label_20b074;
        case 0x20b078u: goto label_20b078;
        case 0x20b07cu: goto label_20b07c;
        case 0x20b080u: goto label_20b080;
        case 0x20b084u: goto label_20b084;
        case 0x20b088u: goto label_20b088;
        case 0x20b08cu: goto label_20b08c;
        case 0x20b090u: goto label_20b090;
        case 0x20b094u: goto label_20b094;
        case 0x20b098u: goto label_20b098;
        case 0x20b09cu: goto label_20b09c;
        case 0x20b0a0u: goto label_20b0a0;
        case 0x20b0a4u: goto label_20b0a4;
        case 0x20b0a8u: goto label_20b0a8;
        case 0x20b0acu: goto label_20b0ac;
        case 0x20b0b0u: goto label_20b0b0;
        case 0x20b0b4u: goto label_20b0b4;
        case 0x20b0b8u: goto label_20b0b8;
        case 0x20b0bcu: goto label_20b0bc;
        case 0x20b0c0u: goto label_20b0c0;
        case 0x20b0c4u: goto label_20b0c4;
        case 0x20b0c8u: goto label_20b0c8;
        case 0x20b0ccu: goto label_20b0cc;
        case 0x20b0d0u: goto label_20b0d0;
        case 0x20b0d4u: goto label_20b0d4;
        case 0x20b0d8u: goto label_20b0d8;
        case 0x20b0dcu: goto label_20b0dc;
        case 0x20b0e0u: goto label_20b0e0;
        case 0x20b0e4u: goto label_20b0e4;
        case 0x20b0e8u: goto label_20b0e8;
        case 0x20b0ecu: goto label_20b0ec;
        case 0x20b0f0u: goto label_20b0f0;
        case 0x20b0f4u: goto label_20b0f4;
        case 0x20b0f8u: goto label_20b0f8;
        case 0x20b0fcu: goto label_20b0fc;
        case 0x20b100u: goto label_20b100;
        case 0x20b104u: goto label_20b104;
        case 0x20b108u: goto label_20b108;
        case 0x20b10cu: goto label_20b10c;
        case 0x20b110u: goto label_20b110;
        case 0x20b114u: goto label_20b114;
        case 0x20b118u: goto label_20b118;
        case 0x20b11cu: goto label_20b11c;
        case 0x20b120u: goto label_20b120;
        case 0x20b124u: goto label_20b124;
        case 0x20b128u: goto label_20b128;
        case 0x20b12cu: goto label_20b12c;
        case 0x20b130u: goto label_20b130;
        case 0x20b134u: goto label_20b134;
        case 0x20b138u: goto label_20b138;
        case 0x20b13cu: goto label_20b13c;
        case 0x20b140u: goto label_20b140;
        case 0x20b144u: goto label_20b144;
        case 0x20b148u: goto label_20b148;
        case 0x20b14cu: goto label_20b14c;
        case 0x20b150u: goto label_20b150;
        case 0x20b154u: goto label_20b154;
        case 0x20b158u: goto label_20b158;
        case 0x20b15cu: goto label_20b15c;
        case 0x20b160u: goto label_20b160;
        case 0x20b164u: goto label_20b164;
        case 0x20b168u: goto label_20b168;
        case 0x20b16cu: goto label_20b16c;
        case 0x20b170u: goto label_20b170;
        case 0x20b174u: goto label_20b174;
        case 0x20b178u: goto label_20b178;
        case 0x20b17cu: goto label_20b17c;
        case 0x20b180u: goto label_20b180;
        case 0x20b184u: goto label_20b184;
        case 0x20b188u: goto label_20b188;
        case 0x20b18cu: goto label_20b18c;
        case 0x20b190u: goto label_20b190;
        case 0x20b194u: goto label_20b194;
        case 0x20b198u: goto label_20b198;
        case 0x20b19cu: goto label_20b19c;
        case 0x20b1a0u: goto label_20b1a0;
        case 0x20b1a4u: goto label_20b1a4;
        case 0x20b1a8u: goto label_20b1a8;
        case 0x20b1acu: goto label_20b1ac;
        case 0x20b1b0u: goto label_20b1b0;
        case 0x20b1b4u: goto label_20b1b4;
        case 0x20b1b8u: goto label_20b1b8;
        case 0x20b1bcu: goto label_20b1bc;
        case 0x20b1c0u: goto label_20b1c0;
        case 0x20b1c4u: goto label_20b1c4;
        case 0x20b1c8u: goto label_20b1c8;
        case 0x20b1ccu: goto label_20b1cc;
        case 0x20b1d0u: goto label_20b1d0;
        case 0x20b1d4u: goto label_20b1d4;
        case 0x20b1d8u: goto label_20b1d8;
        case 0x20b1dcu: goto label_20b1dc;
        case 0x20b1e0u: goto label_20b1e0;
        case 0x20b1e4u: goto label_20b1e4;
        case 0x20b1e8u: goto label_20b1e8;
        case 0x20b1ecu: goto label_20b1ec;
        case 0x20b1f0u: goto label_20b1f0;
        case 0x20b1f4u: goto label_20b1f4;
        case 0x20b1f8u: goto label_20b1f8;
        case 0x20b1fcu: goto label_20b1fc;
        case 0x20b200u: goto label_20b200;
        case 0x20b204u: goto label_20b204;
        case 0x20b208u: goto label_20b208;
        case 0x20b20cu: goto label_20b20c;
        case 0x20b210u: goto label_20b210;
        case 0x20b214u: goto label_20b214;
        case 0x20b218u: goto label_20b218;
        case 0x20b21cu: goto label_20b21c;
        case 0x20b220u: goto label_20b220;
        case 0x20b224u: goto label_20b224;
        case 0x20b228u: goto label_20b228;
        case 0x20b22cu: goto label_20b22c;
        case 0x20b230u: goto label_20b230;
        case 0x20b234u: goto label_20b234;
        case 0x20b238u: goto label_20b238;
        case 0x20b23cu: goto label_20b23c;
        case 0x20b240u: goto label_20b240;
        case 0x20b244u: goto label_20b244;
        case 0x20b248u: goto label_20b248;
        case 0x20b24cu: goto label_20b24c;
        case 0x20b250u: goto label_20b250;
        case 0x20b254u: goto label_20b254;
        case 0x20b258u: goto label_20b258;
        case 0x20b25cu: goto label_20b25c;
        case 0x20b260u: goto label_20b260;
        case 0x20b264u: goto label_20b264;
        case 0x20b268u: goto label_20b268;
        case 0x20b26cu: goto label_20b26c;
        case 0x20b270u: goto label_20b270;
        case 0x20b274u: goto label_20b274;
        case 0x20b278u: goto label_20b278;
        case 0x20b27cu: goto label_20b27c;
        case 0x20b280u: goto label_20b280;
        case 0x20b284u: goto label_20b284;
        case 0x20b288u: goto label_20b288;
        case 0x20b28cu: goto label_20b28c;
        case 0x20b290u: goto label_20b290;
        case 0x20b294u: goto label_20b294;
        case 0x20b298u: goto label_20b298;
        case 0x20b29cu: goto label_20b29c;
        case 0x20b2a0u: goto label_20b2a0;
        case 0x20b2a4u: goto label_20b2a4;
        case 0x20b2a8u: goto label_20b2a8;
        case 0x20b2acu: goto label_20b2ac;
        case 0x20b2b0u: goto label_20b2b0;
        case 0x20b2b4u: goto label_20b2b4;
        case 0x20b2b8u: goto label_20b2b8;
        case 0x20b2bcu: goto label_20b2bc;
        case 0x20b2c0u: goto label_20b2c0;
        case 0x20b2c4u: goto label_20b2c4;
        case 0x20b2c8u: goto label_20b2c8;
        case 0x20b2ccu: goto label_20b2cc;
        case 0x20b2d0u: goto label_20b2d0;
        case 0x20b2d4u: goto label_20b2d4;
        case 0x20b2d8u: goto label_20b2d8;
        case 0x20b2dcu: goto label_20b2dc;
        case 0x20b2e0u: goto label_20b2e0;
        case 0x20b2e4u: goto label_20b2e4;
        case 0x20b2e8u: goto label_20b2e8;
        case 0x20b2ecu: goto label_20b2ec;
        case 0x20b2f0u: goto label_20b2f0;
        case 0x20b2f4u: goto label_20b2f4;
        case 0x20b2f8u: goto label_20b2f8;
        case 0x20b2fcu: goto label_20b2fc;
        case 0x20b300u: goto label_20b300;
        case 0x20b304u: goto label_20b304;
        case 0x20b308u: goto label_20b308;
        case 0x20b30cu: goto label_20b30c;
        case 0x20b310u: goto label_20b310;
        case 0x20b314u: goto label_20b314;
        case 0x20b318u: goto label_20b318;
        case 0x20b31cu: goto label_20b31c;
        case 0x20b320u: goto label_20b320;
        case 0x20b324u: goto label_20b324;
        default: return;
    }

label_20ab58:
    // 0x20ab58: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x20ab58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_20ab5c:
    // 0x20ab5c: 0x56a021  addu        $s4, $v0, $s6
    ctx->pc = 0x20ab5cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_20ab60:
    // 0x20ab60: 0xc05e234  jal         func_1788D0
label_20ab64:
    if (ctx->pc == 0x20AB64u) {
        ctx->pc = 0x20AB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AB60u;
        // 0x20ab64: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AB68u;
        goto label_20ab68;
    }
    ctx->pc = 0x20AB60u;
    SET_GPR_U32(ctx, 31, 0x20AB68u);
    ctx->pc = 0x20AB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AB60u;
    // 0x20ab64: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x20AB60u, 0x20AB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AB68u;
label_20ab68:
    // 0x20ab68: 0x240400c0  addiu       $a0, $zero, 0xC0
    ctx->pc = 0x20ab68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_20ab6c:
    // 0x20ab6c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x20ab6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_20ab70:
    // 0x20ab70: 0xc07091c  jal         func_1C2470
label_20ab74:
    if (ctx->pc == 0x20AB74u) {
        ctx->pc = 0x20AB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AB70u;
        // 0x20ab74: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AB78u;
        goto label_20ab78;
    }
    ctx->pc = 0x20AB70u;
    SET_GPR_U32(ctx, 31, 0x20AB78u);
    ctx->pc = 0x20AB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AB70u;
    // 0x20ab74: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2470u;
    { ctx->pc = 0x1c2470; return; }
    ctx->pc = 0x20AB78u;
label_20ab78:
    // 0x20ab78: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20ab78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20ab7c:
    // 0x20ab7c: 0x26840010  addiu       $a0, $s4, 0x10
    ctx->pc = 0x20ab7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_20ab80:
    // 0x20ab80: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x20ab80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_20ab84:
    // 0x20ab84: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x20ab84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_20ab88:
    // 0x20ab88: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x20ab88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_20ab8c:
    // 0x20ab8c: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x20ab8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_20ab90:
    // 0x20ab90: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20ab90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20ab94:
    // 0x20ab94: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x20ab94u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_20ab98:
    // 0x20ab98: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x20ab98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_20ab9c:
    // 0x20ab9c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x20ab9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20aba0:
    // 0x20aba0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20aba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20aba4:
    // 0x20aba4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x20aba4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20aba8:
    // 0x20aba8: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x20aba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_20abac:
    // 0x20abac: 0x240b00c0  addiu       $t3, $zero, 0xC0
    ctx->pc = 0x20abacu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_20abb0:
    // 0x20abb0: 0xc05de30  jal         func_1778C0
label_20abb4:
    if (ctx->pc == 0x20ABB4u) {
        ctx->pc = 0x20ABB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ABB0u;
        // 0x20abb4: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20ABB8u;
        goto label_20abb8;
    }
    ctx->pc = 0x20ABB0u;
    SET_GPR_U32(ctx, 31, 0x20ABB8u);
    ctx->pc = 0x20ABB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20ABB0u;
    // 0x20abb4: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x20ABB0u, 0x20ABB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ABB8u;
label_20abb8:
    // 0x20abb8: 0xc070834  jal         func_1C20D0
label_20abbc:
    if (ctx->pc == 0x20ABBCu) {
        ctx->pc = 0x20ABBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ABB8u;
        // 0x20abbc: 0x24040031  addiu       $a0, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20ABC0u;
        goto label_20abc0;
    }
    ctx->pc = 0x20ABB8u;
    SET_GPR_U32(ctx, 31, 0x20ABC0u);
    ctx->pc = 0x20ABBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20ABB8u;
    // 0x20abbc: 0x24040031  addiu       $a0, $zero, 0x31 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x20ABC0u;
label_20abc0:
    // 0x20abc0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20abc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20abc4:
    // 0x20abc4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20abc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20abc8:
    // 0x20abc8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x20abc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_20abcc:
    // 0x20abcc: 0x268400b0  addiu       $a0, $s4, 0xB0
    ctx->pc = 0x20abccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 176));
label_20abd0:
    // 0x20abd0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x20abd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_20abd4:
    // 0x20abd4: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x20abd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_20abd8:
    // 0x20abd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20abd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20abdc:
    // 0x20abdc: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x20abdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_20abe0:
    // 0x20abe0: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x20abe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_20abe4:
    // 0x20abe4: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x20abe4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_20abe8:
    // 0x20abe8: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x20abe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_20abec:
    // 0x20abec: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x20abecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_20abf0:
    // 0x20abf0: 0x24090158  addiu       $t1, $zero, 0x158
    ctx->pc = 0x20abf0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 344));
label_20abf4:
    // 0x20abf4: 0x240a00b0  addiu       $t2, $zero, 0xB0
    ctx->pc = 0x20abf4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_20abf8:
    // 0x20abf8: 0xc05de30  jal         func_1778C0
label_20abfc:
    if (ctx->pc == 0x20ABFCu) {
        ctx->pc = 0x20ABFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ABF8u;
        // 0x20abfc: 0x240b0050  addiu       $t3, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AC00u;
        goto label_20ac00;
    }
    ctx->pc = 0x20ABF8u;
    SET_GPR_U32(ctx, 31, 0x20AC00u);
    ctx->pc = 0x20ABFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20ABF8u;
    // 0x20abfc: 0x240b0050  addiu       $t3, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x20ABF8u, 0x20AC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AC00u;
label_20ac00:
    // 0x20ac00: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x20ac00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_20ac04:
    // 0x20ac04: 0x2a62001e  slti        $v0, $s3, 0x1E
    ctx->pc = 0x20ac04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)30) ? 1 : 0);
label_20ac08:
    // 0x20ac08: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
label_20ac0c:
    if (ctx->pc == 0x20AC0Cu) {
        ctx->pc = 0x20AC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AC08u;
        // 0x20ac0c: 0x26b502a0  addiu       $s5, $s5, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 672));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AC10u;
        goto label_20ac10;
    }
    ctx->pc = 0x20AC08u;
    {
        const bool branch_taken_0x20ac08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20AC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AC08u;
        // 0x20ac0c: 0x26b502a0  addiu       $s5, $s5, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ac08) {
            ctx->pc = 0x20AB48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x20ab48; return; }
        }
    }
    ctx->pc = 0x20AC10u;
label_20ac10:
    // 0x20ac10: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x20ac10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_20ac14:
    // 0x20ac14: 0x2405008f  addiu       $a1, $zero, 0x8F
    ctx->pc = 0x20ac14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
label_20ac18:
    // 0x20ac18: 0x24420280  addiu       $v0, $v0, 0x280
    ctx->pc = 0x20ac18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
label_20ac1c:
    // 0x20ac1c: 0x509821  addu        $s3, $v0, $s0
    ctx->pc = 0x20ac1cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_20ac20:
    // 0x20ac20: 0xc05e234  jal         func_1788D0
label_20ac24:
    if (ctx->pc == 0x20AC24u) {
        ctx->pc = 0x20AC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AC20u;
        // 0x20ac24: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AC28u;
        goto label_20ac28;
    }
    ctx->pc = 0x20AC20u;
    SET_GPR_U32(ctx, 31, 0x20AC28u);
    ctx->pc = 0x20AC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AC20u;
    // 0x20ac24: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x20AC20u, 0x20AC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AC28u;
label_20ac28:
    // 0x20ac28: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x20ac28u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_20ac2c:
    // 0x20ac2c: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x20ac2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_20ac30:
    // 0x20ac30: 0xffaa0000  sd          $t2, 0x0($sp)
    ctx->pc = 0x20ac30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 10));
label_20ac34:
    // 0x20ac34: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x20ac34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_20ac38:
    // 0x20ac38: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x20ac38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_20ac3c:
    // 0x20ac3c: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x20ac3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_20ac40:
    // 0x20ac40: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x20ac40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_20ac44:
    // 0x20ac44: 0x24050280  addiu       $a1, $zero, 0x280
    ctx->pc = 0x20ac44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_20ac48:
    // 0x20ac48: 0x240601c0  addiu       $a2, $zero, 0x1C0
    ctx->pc = 0x20ac48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_20ac4c:
    // 0x20ac4c: 0x3407fe00  ori         $a3, $zero, 0xFE00
    ctx->pc = 0x20ac4cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_20ac50:
    // 0x20ac50: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20ac50u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20ac54:
    // 0x20ac54: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x20ac54u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20ac58:
    // 0x20ac58: 0xc07c110  jal         func_1F0440
label_20ac5c:
    if (ctx->pc == 0x20AC5Cu) {
        ctx->pc = 0x20AC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AC58u;
        // 0x20ac5c: 0x240b0010  addiu       $t3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AC60u;
        goto label_20ac60;
    }
    ctx->pc = 0x20AC58u;
    SET_GPR_U32(ctx, 31, 0x20AC60u);
    ctx->pc = 0x20AC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AC58u;
    // 0x20ac5c: 0x240b0010  addiu       $t3, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0440u;
    { ctx->pc = 0x1f0440; return; }
    ctx->pc = 0x20AC60u;
label_20ac60:
    // 0x20ac60: 0xc07082c  jal         func_1C20B0
label_20ac64:
    if (ctx->pc == 0x20AC64u) {
        ctx->pc = 0x20AC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AC60u;
        // 0x20ac64: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AC68u;
        goto label_20ac68;
    }
    ctx->pc = 0x20AC60u;
    SET_GPR_U32(ctx, 31, 0x20AC68u);
    ctx->pc = 0x20AC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AC60u;
    // 0x20ac64: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20B0u;
    { ctx->pc = 0x1c20b0; return; }
    ctx->pc = 0x20AC68u;
label_20ac68:
    // 0x20ac68: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20ac68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20ac6c:
    // 0x20ac6c: 0x26640380  addiu       $a0, $s3, 0x380
    ctx->pc = 0x20ac6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 896));
label_20ac70:
    // 0x20ac70: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x20ac70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_20ac74:
    // 0x20ac74: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x20ac74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_20ac78:
    // 0x20ac78: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x20ac78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_20ac7c:
    // 0x20ac7c: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x20ac7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_20ac80:
    // 0x20ac80: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20ac80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20ac84:
    // 0x20ac84: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x20ac84u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_20ac88:
    // 0x20ac88: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x20ac88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_20ac8c:
    // 0x20ac8c: 0x24090078  addiu       $t1, $zero, 0x78
    ctx->pc = 0x20ac8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_20ac90:
    // 0x20ac90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20ac90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20ac94:
    // 0x20ac94: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x20ac94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_20ac98:
    // 0x20ac98: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x20ac98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_20ac9c:
    // 0x20ac9c: 0x240a01f0  addiu       $t2, $zero, 0x1F0
    ctx->pc = 0x20ac9cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 496));
label_20aca0:
    // 0x20aca0: 0xc05de30  jal         func_1778C0
label_20aca4:
    if (ctx->pc == 0x20ACA4u) {
        ctx->pc = 0x20ACA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ACA0u;
        // 0x20aca4: 0x240b0048  addiu       $t3, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20ACA8u;
        goto label_20aca8;
    }
    ctx->pc = 0x20ACA0u;
    SET_GPR_U32(ctx, 31, 0x20ACA8u);
    ctx->pc = 0x20ACA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20ACA0u;
    // 0x20aca4: 0x240b0048  addiu       $t3, $zero, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x20ACA0u, 0x20ACA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ACA8u;
label_20aca8:
    // 0x20aca8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x20aca8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20acac:
    // 0x20acac: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x20acacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20acb0:
    // 0x20acb0: 0x2741021  addu        $v0, $s3, $s4
    ctx->pc = 0x20acb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
label_20acb4:
    // 0x20acb4: 0x24430420  addiu       $v1, $v0, 0x420
    ctx->pc = 0x20acb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1056));
label_20acb8:
    // 0x20acb8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x20acb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20acbc:
    // 0x20acbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20acbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20acc0:
    // 0x20acc0: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x20acc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
label_20acc4:
    // 0x20acc4: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x20acc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_20acc8:
    // 0x20acc8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20acc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20accc:
    // 0x20accc: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x20acccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_20acd0:
    // 0x20acd0: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x20acd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_20acd4:
    // 0x20acd4: 0x240801c0  addiu       $t0, $zero, 0x1C0
    ctx->pc = 0x20acd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_20acd8:
    // 0x20acd8: 0x3409fe00  ori         $t1, $zero, 0xFE00
    ctx->pc = 0x20acd8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_20acdc:
    // 0x20acdc: 0x240a0050  addiu       $t2, $zero, 0x50
    ctx->pc = 0x20acdcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_20ace0:
    // 0x20ace0: 0xc054c60  jal         func_153180
label_20ace4:
    if (ctx->pc == 0x20ACE4u) {
        ctx->pc = 0x20ACE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ACE0u;
        // 0x20ace4: 0x240b0018  addiu       $t3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20ACE8u;
        goto label_20ace8;
    }
    ctx->pc = 0x20ACE0u;
    SET_GPR_U32(ctx, 31, 0x20ACE8u);
    ctx->pc = 0x20ACE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20ACE0u;
    // 0x20ace4: 0x240b0018  addiu       $t3, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153180u, 0x20ACE0u, 0x20ACE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ACE8u;
label_20ace8:
    // 0x20ace8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x20ace8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_20acec:
    // 0x20acec: 0x2aa20006  slti        $v0, $s5, 0x6
    ctx->pc = 0x20acecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)6) ? 1 : 0);
label_20acf0:
    // 0x20acf0: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_20acf4:
    if (ctx->pc == 0x20ACF4u) {
        ctx->pc = 0x20ACF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ACF0u;
        // 0x20acf4: 0x269400d0  addiu       $s4, $s4, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20ACF8u;
        goto label_20acf8;
    }
    ctx->pc = 0x20ACF0u;
    {
        const bool branch_taken_0x20acf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20ACF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ACF0u;
        // 0x20acf4: 0x269400d0  addiu       $s4, $s4, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20acf0) {
            ctx->pc = 0x20ACB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20acb0;
        }
    }
    ctx->pc = 0x20ACF8u;
label_20acf8:
    // 0x20acf8: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x20acf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_20acfc:
    // 0x20acfc: 0x2405002c  addiu       $a1, $zero, 0x2C
    ctx->pc = 0x20acfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_20ad00:
    // 0x20ad00: 0x2442fce0  addiu       $v0, $v0, -0x320
    ctx->pc = 0x20ad00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966496));
label_20ad04:
    // 0x20ad04: 0x519821  addu        $s3, $v0, $s1
    ctx->pc = 0x20ad04u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_20ad08:
    // 0x20ad08: 0xc05e234  jal         func_1788D0
label_20ad0c:
    if (ctx->pc == 0x20AD0Cu) {
        ctx->pc = 0x20AD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AD08u;
        // 0x20ad0c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AD10u;
        goto label_20ad10;
    }
    ctx->pc = 0x20AD08u;
    SET_GPR_U32(ctx, 31, 0x20AD10u);
    ctx->pc = 0x20AD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AD08u;
    // 0x20ad0c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x20AD08u, 0x20AD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AD10u;
label_20ad10:
    // 0x20ad10: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x20ad10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_20ad14:
    // 0x20ad14: 0x24050280  addiu       $a1, $zero, 0x280
    ctx->pc = 0x20ad14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_20ad18:
    // 0x20ad18: 0x240601c0  addiu       $a2, $zero, 0x1C0
    ctx->pc = 0x20ad18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_20ad1c:
    // 0x20ad1c: 0x3407fe00  ori         $a3, $zero, 0xFE00
    ctx->pc = 0x20ad1cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_20ad20:
    // 0x20ad20: 0x2408003c  addiu       $t0, $zero, 0x3C
    ctx->pc = 0x20ad20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_20ad24:
    // 0x20ad24: 0x24090028  addiu       $t1, $zero, 0x28
    ctx->pc = 0x20ad24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_20ad28:
    // 0x20ad28: 0xc07c084  jal         func_1F0210
label_20ad2c:
    if (ctx->pc == 0x20AD2Cu) {
        ctx->pc = 0x20AD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AD28u;
        // 0x20ad2c: 0x240a000a  addiu       $t2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AD30u;
        goto label_20ad30;
    }
    ctx->pc = 0x20AD28u;
    SET_GPR_U32(ctx, 31, 0x20AD30u);
    ctx->pc = 0x20AD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AD28u;
    // 0x20ad2c: 0x240a000a  addiu       $t2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0210u;
    { ctx->pc = 0x1f0210; return; }
    ctx->pc = 0x20AD30u;
label_20ad30:
    // 0x20ad30: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x20ad30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_20ad34:
    // 0x20ad34: 0x26f70830  addiu       $s7, $s7, 0x830
    ctx->pc = 0x20ad34u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 2096));
label_20ad38:
    // 0x20ad38: 0x2a430002  slti        $v1, $s2, 0x2
    ctx->pc = 0x20ad38u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_20ad3c:
    // 0x20ad3c: 0x26d60150  addiu       $s6, $s6, 0x150
    ctx->pc = 0x20ad3cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 336));
label_20ad40:
    // 0x20ad40: 0x26100900  addiu       $s0, $s0, 0x900
    ctx->pc = 0x20ad40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2304));
label_20ad44:
    // 0x20ad44: 0x1460ff54  bnez        $v1, . + 4 + (-0xAC << 2)
label_20ad48:
    if (ctx->pc == 0x20AD48u) {
        ctx->pc = 0x20AD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AD44u;
        // 0x20ad48: 0x263102d0  addiu       $s1, $s1, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 720));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AD4Cu;
        goto label_20ad4c;
    }
    ctx->pc = 0x20AD44u;
    {
        const bool branch_taken_0x20ad44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20AD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AD44u;
        // 0x20ad48: 0x263102d0  addiu       $s1, $s1, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 720));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ad44) {
            ctx->pc = 0x20AA98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x20aa98; return; }
        }
    }
    ctx->pc = 0x20AD4Cu;
label_20ad4c:
    // 0x20ad4c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x20ad4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_20ad50:
    // 0x20ad50: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x20ad50u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_20ad54:
    // 0x20ad54: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x20ad54u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_20ad58:
    // 0x20ad58: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x20ad58u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_20ad5c:
    // 0x20ad5c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x20ad5cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_20ad60:
    // 0x20ad60: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x20ad60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_20ad64:
    // 0x20ad64: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x20ad64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_20ad68:
    // 0x20ad68: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x20ad68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20ad6c:
    // 0x20ad6c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x20ad6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20ad70:
    // 0x20ad70: 0x3e00008  jr          $ra
label_20ad74:
    if (ctx->pc == 0x20AD74u) {
        ctx->pc = 0x20AD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AD70u;
        // 0x20ad74: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AD78u;
        goto label_20ad78;
    }
    ctx->pc = 0x20AD70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20AD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AD70u;
        // 0x20ad74: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AD70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20AD78u;
label_20ad78:
    // 0x20ad78: 0x0  nop
    ctx->pc = 0x20ad78u;
    // NOP
label_20ad7c:
    // 0x20ad7c: 0x0  nop
    ctx->pc = 0x20ad7cu;
    // NOP
label_20ad80:
    // 0x20ad80: 0x3e00008  jr          $ra
label_20ad84:
    if (ctx->pc == 0x20AD84u) {
        ctx->pc = 0x20AD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AD80u;
        // 0x20ad84: 0xaf84910c  sw          $a0, -0x6EF4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938892), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AD88u;
        goto label_20ad88;
    }
    ctx->pc = 0x20AD80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20AD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AD80u;
        // 0x20ad84: 0xaf84910c  sw          $a0, -0x6EF4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938892), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AD80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20AD88u;
label_20ad88:
    // 0x20ad88: 0x0  nop
    ctx->pc = 0x20ad88u;
    // NOP
label_20ad8c:
    // 0x20ad8c: 0x0  nop
    ctx->pc = 0x20ad8cu;
    // NOP
label_20ad90:
    // 0x20ad90: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x20ad90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_20ad94:
    // 0x20ad94: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x20ad94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_20ad98:
    // 0x20ad98: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x20ad98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_20ad9c:
    // 0x20ad9c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x20ad9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_20ada0:
    // 0x20ada0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x20ada0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_20ada4:
    // 0x20ada4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x20ada4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20ada8:
    // 0x20ada8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x20ada8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_20adac:
    // 0x20adac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20adacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_20adb0:
    // 0x20adb0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20adb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_20adb4:
    // 0x20adb4: 0x8f83910c  lw          $v1, -0x6EF4($gp)
    ctx->pc = 0x20adb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938892)));
label_20adb8:
    // 0x20adb8: 0x2861001e  slti        $at, $v1, 0x1E
    ctx->pc = 0x20adb8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)30) ? 1 : 0);
label_20adbc:
    // 0x20adbc: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_20adc0:
    if (ctx->pc == 0x20ADC0u) {
        ctx->pc = 0x20ADC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ADBCu;
        // 0x20adc0: 0x241100ab  addiu       $s1, $zero, 0xAB (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20ADC4u;
        goto label_20adc4;
    }
    ctx->pc = 0x20ADBCu;
    {
        const bool branch_taken_0x20adbc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x20ADC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ADBCu;
        // 0x20adc0: 0x241100ab  addiu       $s1, $zero, 0xAB (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20adbc) {
            ctx->pc = 0x20ADDCu;
            goto label_20addc;
        }
    }
    ctx->pc = 0x20ADC4u;
label_20adc4:
    // 0x20adc4: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x20adc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_20adc8:
    // 0x20adc8: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x20adc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
label_20adcc:
    // 0x20adcc: 0x2463fc60  addiu       $v1, $v1, -0x3A0
    ctx->pc = 0x20adccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966368));
label_20add0:
    // 0x20add0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x20add0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_20add4:
    // 0x20add4: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x20add4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20add8:
    // 0x20add8: 0x0  nop
    ctx->pc = 0x20add8u;
    // NOP
label_20addc:
    // 0x20addc: 0x620001e  bltz        $s1, . + 4 + (0x1E << 2)
label_20ade0:
    if (ctx->pc == 0x20ADE0u) {
        ctx->pc = 0x20ADE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ADDCu;
        // 0x20ade0: 0x2a2100ab  slti        $at, $s1, 0xAB (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)171) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20ADE4u;
        goto label_20ade4;
    }
    ctx->pc = 0x20ADDCu;
    {
        const bool branch_taken_0x20addc = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x20ADE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ADDCu;
        // 0x20ade0: 0x2a2100ab  slti        $at, $s1, 0xAB (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)171) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20addc) {
            ctx->pc = 0x20AE58u;
            goto label_20ae58;
        }
    }
    ctx->pc = 0x20ADE4u;
label_20ade4:
    // 0x20ade4: 0x1020001c  beqz        $at, . + 4 + (0x1C << 2)
label_20ade8:
    if (ctx->pc == 0x20ADE8u) {
        ctx->pc = 0x20ADE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ADE4u;
        // 0x20ade8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20ADECu;
        goto label_20adec;
    }
    ctx->pc = 0x20ADE4u;
    {
        const bool branch_taken_0x20ade4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x20ADE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ADE4u;
        // 0x20ade8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ade4) {
            ctx->pc = 0x20AE58u;
            goto label_20ae58;
        }
    }
    ctx->pc = 0x20ADECu;
label_20adec:
    // 0x20adec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x20adecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20adf0:
    // 0x20adf0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x20adf0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20adf4:
    // 0x20adf4: 0xc0901c0  jal         func_240700
label_20adf8:
    if (ctx->pc == 0x20ADF8u) {
        ctx->pc = 0x20ADF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ADF4u;
        // 0x20adf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20ADFCu;
        goto label_20adfc;
    }
    ctx->pc = 0x20ADF4u;
    SET_GPR_U32(ctx, 31, 0x20ADFCu);
    ctx->pc = 0x20ADF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20ADF4u;
    // 0x20adf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240700u;
    { ctx->pc = 0x240700; return; }
    ctx->pc = 0x20ADFCu;
label_20adfc:
    // 0x20adfc: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_20ae00:
    if (ctx->pc == 0x20AE00u) {
        ctx->pc = 0x20AE04u;
        goto label_20ae04;
    }
    ctx->pc = 0x20ADFCu;
    {
        const bool branch_taken_0x20adfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20adfc) {
            ctx->pc = 0x20AE48u;
            goto label_20ae48;
        }
    }
    ctx->pc = 0x20AE04u;
label_20ae04:
    // 0x20ae04: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x20ae04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_20ae08:
    // 0x20ae08: 0x24423b80  addiu       $v0, $v0, 0x3B80
    ctx->pc = 0x20ae08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15232));
label_20ae0c:
    // 0x20ae0c: 0x52a821  addu        $s5, $v0, $s2
    ctx->pc = 0x20ae0cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_20ae10:
    // 0x20ae10: 0x92a50002  lbu         $a1, 0x2($s5)
    ctx->pc = 0x20ae10u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2)));
label_20ae14:
    // 0x20ae14: 0xc065204  jal         func_194810
label_20ae18:
    if (ctx->pc == 0x20AE18u) {
        ctx->pc = 0x20AE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AE14u;
        // 0x20ae18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AE1Cu;
        goto label_20ae1c;
    }
    ctx->pc = 0x20AE14u;
    SET_GPR_U32(ctx, 31, 0x20AE1Cu);
    ctx->pc = 0x20AE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AE14u;
    // 0x20ae18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x194810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194810u, 0x20AE14u, 0x20AE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AE1Cu;
label_20ae1c:
    // 0x20ae1c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_20ae20:
    if (ctx->pc == 0x20AE20u) {
        ctx->pc = 0x20AE24u;
        goto label_20ae24;
    }
    ctx->pc = 0x20AE1Cu;
    {
        const bool branch_taken_0x20ae1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ae1c) {
            ctx->pc = 0x20AE48u;
            goto label_20ae48;
        }
    }
    ctx->pc = 0x20AE24u;
label_20ae24:
    // 0x20ae24: 0x92a40000  lbu         $a0, 0x0($s5)
    ctx->pc = 0x20ae24u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_20ae28:
    // 0x20ae28: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x20ae28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
label_20ae2c:
    // 0x20ae2c: 0x2463fbc0  addiu       $v1, $v1, -0x440
    ctx->pc = 0x20ae2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966208));
label_20ae30:
    // 0x20ae30: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x20ae30u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_20ae34:
    // 0x20ae34: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x20ae34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_20ae38:
    // 0x20ae38: 0x2a810006  slti        $at, $s4, 0x6
    ctx->pc = 0x20ae38u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)6) ? 1 : 0);
label_20ae3c:
    // 0x20ae3c: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x20ae3cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_20ae40:
    // 0x20ae40: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_20ae44:
    if (ctx->pc == 0x20AE44u) {
        ctx->pc = 0x20AE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AE40u;
        // 0x20ae44: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AE48u;
        goto label_20ae48;
    }
    ctx->pc = 0x20AE40u;
    {
        const bool branch_taken_0x20ae40 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AE40u;
        // 0x20ae44: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ae40) {
            ctx->pc = 0x20AE58u;
            goto label_20ae58;
        }
    }
    ctx->pc = 0x20AE48u;
label_20ae48:
    // 0x20ae48: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x20ae48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_20ae4c:
    // 0x20ae4c: 0x2a030029  slti        $v1, $s0, 0x29
    ctx->pc = 0x20ae4cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)41) ? 1 : 0);
label_20ae50:
    // 0x20ae50: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
label_20ae54:
    if (ctx->pc == 0x20AE54u) {
        ctx->pc = 0x20AE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AE50u;
        // 0x20ae54: 0x2652000f  addiu       $s2, $s2, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AE58u;
        goto label_20ae58;
    }
    ctx->pc = 0x20AE50u;
    {
        const bool branch_taken_0x20ae50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20AE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AE50u;
        // 0x20ae54: 0x2652000f  addiu       $s2, $s2, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ae50) {
            ctx->pc = 0x20ADF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20adf4;
        }
    }
    ctx->pc = 0x20AE58u;
label_20ae58:
    // 0x20ae58: 0x2a810006  slti        $at, $s4, 0x6
    ctx->pc = 0x20ae58u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)6) ? 1 : 0);
label_20ae5c:
    // 0x20ae5c: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
label_20ae60:
    if (ctx->pc == 0x20AE60u) {
        ctx->pc = 0x20AE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AE5Cu;
        // 0x20ae60: 0x143080  sll         $a2, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AE64u;
        goto label_20ae64;
    }
    ctx->pc = 0x20AE5Cu;
    {
        const bool branch_taken_0x20ae5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AE5Cu;
        // 0x20ae60: 0x143080  sll         $a2, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ae5c) {
            ctx->pc = 0x20AE90u;
            goto label_20ae90;
        }
    }
    ctx->pc = 0x20AE64u;
label_20ae64:
    // 0x20ae64: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x20ae64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_20ae68:
    // 0x20ae68: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x20ae68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_20ae6c:
    // 0x20ae6c: 0x2484fbc0  addiu       $a0, $a0, -0x440
    ctx->pc = 0x20ae6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966208));
label_20ae70:
    // 0x20ae70: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x20ae70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_20ae74:
    // 0x20ae74: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x20ae74u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_20ae78:
    // 0x20ae78: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x20ae78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_20ae7c:
    // 0x20ae7c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x20ae7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_20ae80:
    // 0x20ae80: 0x2a830006  slti        $v1, $s4, 0x6
    ctx->pc = 0x20ae80u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)6) ? 1 : 0);
label_20ae84:
    // 0x20ae84: 0x0  nop
    ctx->pc = 0x20ae84u;
    // NOP
label_20ae88:
    // 0x20ae88: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_20ae8c:
    if (ctx->pc == 0x20AE8Cu) {
        ctx->pc = 0x20AE90u;
        goto label_20ae90;
    }
    ctx->pc = 0x20AE88u;
    {
        const bool branch_taken_0x20ae88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x20ae88) {
            ctx->pc = 0x20AE70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20ae70;
        }
    }
    ctx->pc = 0x20AE90u;
label_20ae90:
    // 0x20ae90: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x20ae90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_20ae94:
    // 0x20ae94: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x20ae94u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_20ae98:
    // 0x20ae98: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x20ae98u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_20ae9c:
    // 0x20ae9c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x20ae9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20aea0:
    // 0x20aea0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x20aea0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20aea4:
    // 0x20aea4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20aea4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20aea8:
    // 0x20aea8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20aea8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_20aeac:
    // 0x20aeac: 0x3e00008  jr          $ra
label_20aeb0:
    if (ctx->pc == 0x20AEB0u) {
        ctx->pc = 0x20AEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AEACu;
        // 0x20aeb0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AEB4u;
        goto label_20aeb4;
    }
    ctx->pc = 0x20AEACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20AEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AEACu;
        // 0x20aeb0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AEACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20AEB4u;
label_20aeb4:
    // 0x20aeb4: 0x0  nop
    ctx->pc = 0x20aeb4u;
    // NOP
label_20aeb8:
    // 0x20aeb8: 0x0  nop
    ctx->pc = 0x20aeb8u;
    // NOP
label_20aebc:
    // 0x20aebc: 0x0  nop
    ctx->pc = 0x20aebcu;
    // NOP
label_20aec0:
    // 0x20aec0: 0x8f839118  lw          $v1, -0x6EE8($gp)
    ctx->pc = 0x20aec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938904)));
label_20aec4:
    // 0x20aec4: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_20aec8:
    if (ctx->pc == 0x20AEC8u) {
        ctx->pc = 0x20AECCu;
        goto label_20aecc;
    }
    ctx->pc = 0x20AEC4u;
    {
        const bool branch_taken_0x20aec4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20aec4) {
            ctx->pc = 0x20AEECu;
            goto label_20aeec;
        }
    }
    ctx->pc = 0x20AECCu;
label_20aecc:
    // 0x20aecc: 0x8f839114  lw          $v1, -0x6EEC($gp)
    ctx->pc = 0x20aeccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938900)));
label_20aed0:
    // 0x20aed0: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x20aed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_20aed4:
    // 0x20aed4: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
label_20aed8:
    if (ctx->pc == 0x20AED8u) {
        ctx->pc = 0x20AED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AED4u;
        // 0x20aed8: 0x3083003f  andi        $v1, $a0, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AEDCu;
        goto label_20aedc;
    }
    ctx->pc = 0x20AED4u;
    {
        const bool branch_taken_0x20aed4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x20AED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AED4u;
        // 0x20aed8: 0x3083003f  andi        $v1, $a0, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aed4) {
            ctx->pc = 0x20AEE8u;
            goto label_20aee8;
        }
    }
    ctx->pc = 0x20AEDCu;
label_20aedc:
    // 0x20aedc: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_20aee0:
    if (ctx->pc == 0x20AEE0u) {
        ctx->pc = 0x20AEE4u;
        goto label_20aee4;
    }
    ctx->pc = 0x20AEDCu;
    {
        const bool branch_taken_0x20aedc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20aedc) {
            ctx->pc = 0x20AEE8u;
            goto label_20aee8;
        }
    }
    ctx->pc = 0x20AEE4u;
label_20aee4:
    // 0x20aee4: 0x2463ffc0  addiu       $v1, $v1, -0x40
    ctx->pc = 0x20aee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
label_20aee8:
    // 0x20aee8: 0xaf839114  sw          $v1, -0x6EEC($gp)
    ctx->pc = 0x20aee8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938900), GPR_U32(ctx, 3));
label_20aeec:
    // 0x20aeec: 0x8f84911c  lw          $a0, -0x6EE4($gp)
    ctx->pc = 0x20aeecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938908)));
label_20aef0:
    // 0x20aef0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20aef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20aef4:
    // 0x20aef4: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
label_20aef8:
    if (ctx->pc == 0x20AEF8u) {
        ctx->pc = 0x20AEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AEF4u;
        // 0x20aef8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AEFCu;
        goto label_20aefc;
    }
    ctx->pc = 0x20AEF4u;
    {
        const bool branch_taken_0x20aef4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x20AEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AEF4u;
        // 0x20aef8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aef4) {
            ctx->pc = 0x20AF34u;
            goto label_20af34;
        }
    }
    ctx->pc = 0x20AEFCu;
label_20aefc:
    // 0x20aefc: 0x8f849118  lw          $a0, -0x6EE8($gp)
    ctx->pc = 0x20aefcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938904)));
label_20af00:
    // 0x20af00: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x20af00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_20af04:
    // 0x20af04: 0x2881000c  slti        $at, $a0, 0xC
    ctx->pc = 0x20af04u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)12) ? 1 : 0);
label_20af08:
    // 0x20af08: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_20af0c:
    if (ctx->pc == 0x20AF0Cu) {
        ctx->pc = 0x20AF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF08u;
        // 0x20af0c: 0xaf839118  sw          $v1, -0x6EE8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938904), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AF10u;
        goto label_20af10;
    }
    ctx->pc = 0x20AF08u;
    {
        const bool branch_taken_0x20af08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF08u;
        // 0x20af0c: 0xaf839118  sw          $v1, -0x6EE8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938904), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20af08) {
            ctx->pc = 0x20AF18u;
            goto label_20af18;
        }
    }
    ctx->pc = 0x20AF10u;
label_20af10:
    // 0x20af10: 0x10000002  b           . + 4 + (0x2 << 2)
label_20af14:
    if (ctx->pc == 0x20AF14u) {
        ctx->pc = 0x20AF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF10u;
        // 0x20af14: 0x8f839118  lw          $v1, -0x6EE8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938904)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AF18u;
        goto label_20af18;
    }
    ctx->pc = 0x20AF10u;
    {
        const bool branch_taken_0x20af10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF10u;
        // 0x20af14: 0x8f839118  lw          $v1, -0x6EE8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938904)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20af10) {
            ctx->pc = 0x20AF1Cu;
            goto label_20af1c;
        }
    }
    ctx->pc = 0x20AF18u;
label_20af18:
    // 0x20af18: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x20af18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_20af1c:
    // 0x20af1c: 0xaf839118  sw          $v1, -0x6EE8($gp)
    ctx->pc = 0x20af1cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938904), GPR_U32(ctx, 3));
label_20af20:
    // 0x20af20: 0x2863000c  slti        $v1, $v1, 0xC
    ctx->pc = 0x20af20u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)12) ? 1 : 0);
label_20af24:
    // 0x20af24: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
label_20af28:
    if (ctx->pc == 0x20AF28u) {
        ctx->pc = 0x20AF2Cu;
        goto label_20af2c;
    }
    ctx->pc = 0x20AF24u;
    {
        const bool branch_taken_0x20af24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x20af24) {
            ctx->pc = 0x20AF68u;
            goto label_20af68;
        }
    }
    ctx->pc = 0x20AF2Cu;
label_20af2c:
    // 0x20af2c: 0x1000000e  b           . + 4 + (0xE << 2)
label_20af30:
    if (ctx->pc == 0x20AF30u) {
        ctx->pc = 0x20AF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF2Cu;
        // 0x20af30: 0xaf80911c  sw          $zero, -0x6EE4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938908), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AF34u;
        goto label_20af34;
    }
    ctx->pc = 0x20AF2Cu;
    {
        const bool branch_taken_0x20af2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF2Cu;
        // 0x20af30: 0xaf80911c  sw          $zero, -0x6EE4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938908), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20af2c) {
            ctx->pc = 0x20AF68u;
            goto label_20af68;
        }
    }
    ctx->pc = 0x20AF34u;
label_20af34:
    // 0x20af34: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
label_20af38:
    if (ctx->pc == 0x20AF38u) {
        ctx->pc = 0x20AF3Cu;
        goto label_20af3c;
    }
    ctx->pc = 0x20AF34u;
    {
        const bool branch_taken_0x20af34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x20af34) {
            ctx->pc = 0x20AF68u;
            goto label_20af68;
        }
    }
    ctx->pc = 0x20AF3Cu;
label_20af3c:
    // 0x20af3c: 0x8f849118  lw          $a0, -0x6EE8($gp)
    ctx->pc = 0x20af3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938904)));
label_20af40:
    // 0x20af40: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x20af40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_20af44:
    // 0x20af44: 0x4082a  slt         $at, $zero, $a0
    ctx->pc = 0x20af44u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_20af48:
    // 0x20af48: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_20af4c:
    if (ctx->pc == 0x20AF4Cu) {
        ctx->pc = 0x20AF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF48u;
        // 0x20af4c: 0xaf839118  sw          $v1, -0x6EE8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938904), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AF50u;
        goto label_20af50;
    }
    ctx->pc = 0x20AF48u;
    {
        const bool branch_taken_0x20af48 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF48u;
        // 0x20af4c: 0xaf839118  sw          $v1, -0x6EE8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938904), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20af48) {
            ctx->pc = 0x20AF58u;
            goto label_20af58;
        }
    }
    ctx->pc = 0x20AF50u;
label_20af50:
    // 0x20af50: 0x10000002  b           . + 4 + (0x2 << 2)
label_20af54:
    if (ctx->pc == 0x20AF54u) {
        ctx->pc = 0x20AF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF50u;
        // 0x20af54: 0x8f839118  lw          $v1, -0x6EE8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938904)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AF58u;
        goto label_20af58;
    }
    ctx->pc = 0x20AF50u;
    {
        const bool branch_taken_0x20af50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF50u;
        // 0x20af54: 0x8f839118  lw          $v1, -0x6EE8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938904)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20af50) {
            ctx->pc = 0x20AF5Cu;
            goto label_20af5c;
        }
    }
    ctx->pc = 0x20AF58u;
label_20af58:
    // 0x20af58: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x20af58u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20af5c:
    // 0x20af5c: 0x1c600002  bgtz        $v1, . + 4 + (0x2 << 2)
label_20af60:
    if (ctx->pc == 0x20AF60u) {
        ctx->pc = 0x20AF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF5Cu;
        // 0x20af60: 0xaf839118  sw          $v1, -0x6EE8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938904), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AF64u;
        goto label_20af64;
    }
    ctx->pc = 0x20AF5Cu;
    {
        const bool branch_taken_0x20af5c = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x20AF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF5Cu;
        // 0x20af60: 0xaf839118  sw          $v1, -0x6EE8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938904), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20af5c) {
            ctx->pc = 0x20AF68u;
            goto label_20af68;
        }
    }
    ctx->pc = 0x20AF64u;
label_20af64:
    // 0x20af64: 0xaf80911c  sw          $zero, -0x6EE4($gp)
    ctx->pc = 0x20af64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938908), GPR_U32(ctx, 0));
label_20af68:
    // 0x20af68: 0x3e00008  jr          $ra
label_20af6c:
    if (ctx->pc == 0x20AF6Cu) {
        ctx->pc = 0x20AF70u;
        goto label_20af70;
    }
    ctx->pc = 0x20AF68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AF68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20AF70u;
label_20af70:
    // 0x20af70: 0x8f83911c  lw          $v1, -0x6EE4($gp)
    ctx->pc = 0x20af70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938908)));
label_20af74:
    // 0x20af74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20af74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20af78:
    // 0x20af78: 0x3e00008  jr          $ra
label_20af7c:
    if (ctx->pc == 0x20AF7Cu) {
        ctx->pc = 0x20AF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF78u;
        // 0x20af7c: 0x3100b  movn        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AF80u;
        goto label_20af80;
    }
    ctx->pc = 0x20AF78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20AF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF78u;
        // 0x20af7c: 0x3100b  movn        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AF78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20AF80u;
label_20af80:
    // 0x20af80: 0x3e00008  jr          $ra
label_20af84:
    if (ctx->pc == 0x20AF84u) {
        ctx->pc = 0x20AF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF80u;
        // 0x20af84: 0xaf849108  sw          $a0, -0x6EF8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938888), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AF88u;
        goto label_20af88;
    }
    ctx->pc = 0x20AF80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20AF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF80u;
        // 0x20af84: 0xaf849108  sw          $a0, -0x6EF8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938888), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AF80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20AF88u;
label_20af88:
    // 0x20af88: 0x0  nop
    ctx->pc = 0x20af88u;
    // NOP
label_20af8c:
    // 0x20af8c: 0x0  nop
    ctx->pc = 0x20af8cu;
    // NOP
label_20af90:
    // 0x20af90: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20af90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20af94:
    // 0x20af94: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20af94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20af98:
    // 0x20af98: 0x64280a  movz        $a1, $v1, $a0
    ctx->pc = 0x20af98u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_20af9c:
    // 0x20af9c: 0x3e00008  jr          $ra
label_20afa0:
    if (ctx->pc == 0x20AFA0u) {
        ctx->pc = 0x20AFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF9Cu;
        // 0x20afa0: 0xaf85911c  sw          $a1, -0x6EE4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938908), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AFA4u;
        goto label_20afa4;
    }
    ctx->pc = 0x20AF9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20AFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF9Cu;
        // 0x20afa0: 0xaf85911c  sw          $a1, -0x6EE4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938908), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AF9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20AFA4u;
label_20afa4:
    // 0x20afa4: 0x0  nop
    ctx->pc = 0x20afa4u;
    // NOP
label_20afa8:
    // 0x20afa8: 0x0  nop
    ctx->pc = 0x20afa8u;
    // NOP
label_20afac:
    // 0x20afac: 0x0  nop
    ctx->pc = 0x20afacu;
    // NOP
label_20afb0:
    // 0x20afb0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x20afb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_20afb4:
    // 0x20afb4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x20afb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_20afb8:
    // 0x20afb8: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x20afb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_20afbc:
    // 0x20afbc: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x20afbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_20afc0:
    // 0x20afc0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x20afc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_20afc4:
    // 0x20afc4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x20afc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_20afc8:
    // 0x20afc8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x20afc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_20afcc:
    // 0x20afcc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x20afccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_20afd0:
    // 0x20afd0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x20afd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_20afd4:
    // 0x20afd4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20afd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_20afd8:
    // 0x20afd8: 0x8f839118  lw          $v1, -0x6EE8($gp)
    ctx->pc = 0x20afd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938904)));
label_20afdc:
    // 0x20afdc: 0x10600269  beqz        $v1, . + 4 + (0x269 << 2)
label_20afe0:
    if (ctx->pc == 0x20AFE0u) {
        ctx->pc = 0x20AFE4u;
        goto label_20afe4;
    }
    ctx->pc = 0x20AFDCu;
    {
        const bool branch_taken_0x20afdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20afdc) {
            ctx->pc = 0x20B984u;
            { ctx->pc = 0x20b984; return; }
        }
    }
    ctx->pc = 0x20AFE4u;
label_20afe4:
    // 0x20afe4: 0x8f829104  lw          $v0, -0x6EFC($gp)
    ctx->pc = 0x20afe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938884)));
label_20afe8:
    // 0x20afe8: 0x1040016e  beqz        $v0, . + 4 + (0x16E << 2)
label_20afec:
    if (ctx->pc == 0x20AFECu) {
        ctx->pc = 0x20AFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AFE8u;
        // 0x20afec: 0x31023  negu        $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AFF0u;
        goto label_20aff0;
    }
    ctx->pc = 0x20AFE8u;
    {
        const bool branch_taken_0x20afe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AFE8u;
        // 0x20afec: 0x31023  negu        $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20afe8) {
            ctx->pc = 0x20B5A4u;
            { ctx->pc = 0x20b5a4; return; }
        }
    }
    ctx->pc = 0x20AFF0u;
label_20aff0:
    // 0x20aff0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x20aff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_20aff4:
    // 0x20aff4: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x20aff4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_20aff8:
    // 0x20aff8: 0x34453ffc  ori         $a1, $v0, 0x3FFC
    ctx->pc = 0x20aff8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16380);
label_20affc:
    // 0x20affc: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x20affcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_20b000:
    // 0x20b000: 0x31023  negu        $v0, $v1
    ctx->pc = 0x20b000u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_20b004:
    // 0x20b004: 0x8caa0000  lw          $t2, 0x0($a1)
    ctx->pc = 0x20b004u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20b008:
    // 0x20b008: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x20b008u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_20b00c:
    // 0x20b00c: 0x240600a0  addiu       $a2, $zero, 0xA0
    ctx->pc = 0x20b00cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_20b010:
    // 0x20b010: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x20b010u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20b014:
    // 0x20b014: 0x2407012c  addiu       $a3, $zero, 0x12C
    ctx->pc = 0x20b014u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
label_20b018:
    // 0x20b018: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x20b018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
label_20b01c:
    // 0x20b01c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x20b01cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_20b020:
    // 0x20b020: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x20b020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
label_20b024:
    // 0x20b024: 0x240800f0  addiu       $t0, $zero, 0xF0
    ctx->pc = 0x20b024u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_20b028:
    // 0x20b028: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x20b028u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_20b02c:
    // 0x20b02c: 0x32fc2  srl         $a1, $v1, 31
    ctx->pc = 0x20b02cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_20b030:
    // 0x20b030: 0xa4940  sll         $t1, $t2, 5
    ctx->pc = 0x20b030u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
label_20b034:
    // 0x20b034: 0x89b021  addu        $s6, $a0, $t1
    ctx->pc = 0x20b034u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
label_20b038:
    // 0x20b038: 0xa1980  sll         $v1, $t2, 6
    ctx->pc = 0x20b038u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 6));
label_20b03c:
    // 0x20b03c: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x20b03cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_20b040:
    // 0x20b040: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x20b040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_20b044:
    // 0x20b044: 0x24426340  addiu       $v0, $v0, 0x6340
    ctx->pc = 0x20b044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25408));
label_20b048:
    // 0x20b048: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x20b048u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_20b04c:
    // 0x20b04c: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x20b04cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_20b050:
    // 0x20b050: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x20b050u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_20b054:
    // 0x20b054: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x20b054u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20b058:
    // 0x20b058: 0x1010  mfhi        $v0
    ctx->pc = 0x20b058u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_20b05c:
    // 0x20b05c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x20b05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_20b060:
    // 0x20b060: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x20b060u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_20b064:
    // 0x20b064: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x20b064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_20b068:
    // 0x20b068: 0x24570280  addiu       $s7, $v0, 0x280
    ctx->pc = 0x20b068u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
label_20b06c:
    // 0x20b06c: 0xc07c25c  jal         func_1F0970
label_20b070:
    if (ctx->pc == 0x20B070u) {
        ctx->pc = 0x20B070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B06Cu;
        // 0x20b070: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B074u;
        goto label_20b074;
    }
    ctx->pc = 0x20B06Cu;
    SET_GPR_U32(ctx, 31, 0x20B074u);
    ctx->pc = 0x20B070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B06Cu;
    // 0x20b070: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0970u;
    { ctx->pc = 0x1f0970; return; }
    ctx->pc = 0x20B074u;
label_20b074:
    // 0x20b074: 0x171100  sll         $v0, $s7, 4
    ctx->pc = 0x20b074u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
label_20b078:
    // 0x20b078: 0x24037d60  addiu       $v1, $zero, 0x7D60
    ctx->pc = 0x20b078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32096));
label_20b07c:
    // 0x20b07c: 0x24426c00  addiu       $v0, $v0, 0x6C00
    ctx->pc = 0x20b07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_20b080:
    // 0x20b080: 0x3405fe00  ori         $a1, $zero, 0xFE00
    ctx->pc = 0x20b080u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_20b084:
    // 0x20b084: 0xa6020630  sh          $v0, 0x630($s0)
    ctx->pc = 0x20b084u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1584), (uint16_t)GPR_U32(ctx, 2));
label_20b088:
    // 0x20b088: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x20b088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_20b08c:
    // 0x20b08c: 0x26e20048  addiu       $v0, $s7, 0x48
    ctx->pc = 0x20b08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 72));
label_20b090:
    // 0x20b090: 0xa6030632  sh          $v1, 0x632($s0)
    ctx->pc = 0x20b090u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1586), (uint16_t)GPR_U32(ctx, 3));
label_20b094:
    // 0x20b094: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x20b094u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_20b098:
    // 0x20b098: 0xae050634  sw          $a1, 0x634($s0)
    ctx->pc = 0x20b098u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1588), GPR_U32(ctx, 5));
label_20b09c:
    // 0x20b09c: 0x24426c00  addiu       $v0, $v0, 0x6C00
    ctx->pc = 0x20b09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_20b0a0:
    // 0x20b0a0: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x20b0a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_20b0a4:
    // 0x20b0a4: 0xa6020640  sh          $v0, 0x640($s0)
    ctx->pc = 0x20b0a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1600), (uint16_t)GPR_U32(ctx, 2));
label_20b0a8:
    // 0x20b0a8: 0x24027de0  addiu       $v0, $zero, 0x7DE0
    ctx->pc = 0x20b0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32224));
label_20b0ac:
    // 0x20b0ac: 0xa6020642  sh          $v0, 0x642($s0)
    ctx->pc = 0x20b0acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1602), (uint16_t)GPR_U32(ctx, 2));
label_20b0b0:
    // 0x20b0b0: 0xae050644  sw          $a1, 0x644($s0)
    ctx->pc = 0x20b0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1604), GPR_U32(ctx, 5));
label_20b0b4:
    // 0x20b0b4: 0x8f829110  lw          $v0, -0x6EF0($gp)
    ctx->pc = 0x20b0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938896)));
label_20b0b8:
    // 0x20b0b8: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x20b0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_20b0bc:
    // 0x20b0bc: 0x24a5e050  addiu       $a1, $a1, -0x1FB0
    ctx->pc = 0x20b0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959184));
label_20b0c0:
    // 0x20b0c0: 0xc08f20e  jal         func_23C838
label_20b0c4:
    if (ctx->pc == 0x20B0C4u) {
        ctx->pc = 0x20B0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B0C0u;
        // 0x20b0c4: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B0C8u;
        goto label_20b0c8;
    }
    ctx->pc = 0x20B0C0u;
    SET_GPR_U32(ctx, 31, 0x20B0C8u);
    ctx->pc = 0x20B0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B0C0u;
    // 0x20b0c4: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x20B0C8u;
label_20b0c8:
    // 0x20b0c8: 0x26e6004c  addiu       $a2, $s7, 0x4C
    ctx->pc = 0x20b0c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 76));
label_20b0cc:
    // 0x20b0cc: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x20b0ccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_20b0d0:
    // 0x20b0d0: 0x26040650  addiu       $a0, $s0, 0x650
    ctx->pc = 0x20b0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1616));
label_20b0d4:
    // 0x20b0d4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x20b0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_20b0d8:
    // 0x20b0d8: 0x24070088  addiu       $a3, $zero, 0x88
    ctx->pc = 0x20b0d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
label_20b0dc:
    // 0x20b0dc: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x20b0dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_20b0e0:
    // 0x20b0e0: 0x240a0018  addiu       $t2, $zero, 0x18
    ctx->pc = 0x20b0e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_20b0e4:
    // 0x20b0e4: 0xc0708ac  jal         func_1C22B0
label_20b0e8:
    if (ctx->pc == 0x20B0E8u) {
        ctx->pc = 0x20B0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B0E4u;
        // 0x20b0e8: 0x27ab00a0  addiu       $t3, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B0ECu;
        goto label_20b0ec;
    }
    ctx->pc = 0x20B0E4u;
    SET_GPR_U32(ctx, 31, 0x20B0ECu);
    ctx->pc = 0x20B0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B0E4u;
    // 0x20b0e8: 0x27ab00a0  addiu       $t3, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    { ctx->pc = 0x1c22b0; return; }
    ctx->pc = 0x20B0ECu;
label_20b0ec:
    // 0x20b0ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20b0ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20b0f0:
    // 0x20b0f0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x20b0f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_20b0f4:
    // 0x20b0f4: 0x24060083  addiu       $a2, $zero, 0x83
    ctx->pc = 0x20b0f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
label_20b0f8:
    // 0x20b0f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20b0f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20b0fc:
    // 0x20b0fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20b0fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20b100:
    // 0x20b100: 0xc066c72  jal         func_19B1C8
label_20b104:
    if (ctx->pc == 0x20B104u) {
        ctx->pc = 0x20B104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B100u;
        // 0x20b104: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B108u;
        goto label_20b108;
    }
    ctx->pc = 0x20B100u;
    SET_GPR_U32(ctx, 31, 0x20B108u);
    ctx->pc = 0x20B104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B100u;
    // 0x20b104: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x20B100u, 0x20B108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B108u;
label_20b108:
    // 0x20b108: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x20b108u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20b10c:
    // 0x20b10c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x20b10cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20b110:
    // 0x20b110: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x20b110u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20b114:
    // 0x20b114: 0x0  nop
    ctx->pc = 0x20b114u;
    // NOP
label_20b118:
    // 0x20b118: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x20b118u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
label_20b11c:
    // 0x20b11c: 0x2463fc60  addiu       $v1, $v1, -0x3A0
    ctx->pc = 0x20b11cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966368));
label_20b120:
    // 0x20b120: 0x702821  addu        $a1, $v1, $s0
    ctx->pc = 0x20b120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_20b124:
    // 0x20b124: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x20b124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20b128:
    // 0x20b128: 0x46000b0  bltz        $v1, . + 4 + (0xB0 << 2)
label_20b12c:
    if (ctx->pc == 0x20B12Cu) {
        ctx->pc = 0x20B130u;
        goto label_20b130;
    }
    ctx->pc = 0x20B128u;
    {
        const bool branch_taken_0x20b128 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x20b128) {
            ctx->pc = 0x20B3ECu;
            { ctx->pc = 0x20b3ec; return; }
        }
    }
    ctx->pc = 0x20B130u;
label_20b130:
    // 0x20b130: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x20b130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_20b134:
    // 0x20b134: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x20b134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_20b138:
    // 0x20b138: 0x8c263ffc  lw          $a2, 0x3FFC($at)
    ctx->pc = 0x20b138u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_20b13c:
    // 0x20b13c: 0x24421480  addiu       $v0, $v0, 0x1480
    ctx->pc = 0x20b13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5248));
label_20b140:
    // 0x20b140: 0x551821  addu        $v1, $v0, $s5
    ctx->pc = 0x20b140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_20b144:
    // 0x20b144: 0x8f82910c  lw          $v0, -0x6EF4($gp)
    ctx->pc = 0x20b144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938892)));
label_20b148:
    // 0x20b148: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x20b148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_20b14c:
    // 0x20b14c: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x20b14cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_20b150:
    // 0x20b150: 0x863023  subu        $a2, $a0, $a2
    ctx->pc = 0x20b150u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_20b154:
    // 0x20b154: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x20b154u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_20b158:
    // 0x20b158: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x20b158u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_20b15c:
    // 0x20b15c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x20b15cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_20b160:
    // 0x20b160: 0x14530003  bne         $v0, $s3, . + 4 + (0x3 << 2)
label_20b164:
    if (ctx->pc == 0x20B164u) {
        ctx->pc = 0x20B164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B160u;
        // 0x20b164: 0x64a021  addu        $s4, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B168u;
        goto label_20b168;
    }
    ctx->pc = 0x20B160u;
    {
        const bool branch_taken_0x20b160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x20B164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B160u;
        // 0x20b164: 0x64a021  addu        $s4, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b160) {
            ctx->pc = 0x20B170u;
            goto label_20b170;
        }
    }
    ctx->pc = 0x20B168u;
label_20b168:
    // 0x20b168: 0x10000002  b           . + 4 + (0x2 << 2)
label_20b16c:
    if (ctx->pc == 0x20B16Cu) {
        ctx->pc = 0x20B16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B168u;
        // 0x20b16c: 0x24030080  addiu       $v1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B170u;
        goto label_20b170;
    }
    ctx->pc = 0x20B168u;
    {
        const bool branch_taken_0x20b168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B168u;
        // 0x20b16c: 0x24030080  addiu       $v1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b168) {
            ctx->pc = 0x20B174u;
            goto label_20b174;
        }
    }
    ctx->pc = 0x20B170u;
label_20b170:
    // 0x20b170: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x20b170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_20b174:
    // 0x20b174: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x20b174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_20b178:
    // 0x20b178: 0x2442fbe0  addiu       $v0, $v0, -0x420
    ctx->pc = 0x20b178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966240));
label_20b17c:
    // 0x20b17c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x20b17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_20b180:
    // 0x20b180: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x20b180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20b184:
    // 0x20b184: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_20b188:
    if (ctx->pc == 0x20B188u) {
        ctx->pc = 0x20B18Cu;
        goto label_20b18c;
    }
    ctx->pc = 0x20B184u;
    {
        const bool branch_taken_0x20b184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b184) {
            ctx->pc = 0x20B1DCu;
            goto label_20b1dc;
        }
    }
    ctx->pc = 0x20B18Cu;
label_20b18c:
    // 0x20b18c: 0x8f849114  lw          $a0, -0x6EEC($gp)
    ctx->pc = 0x20b18cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938900)));
label_20b190:
    // 0x20b190: 0x28810020  slti        $at, $a0, 0x20
    ctx->pc = 0x20b190u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
label_20b194:
    // 0x20b194: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_20b198:
    if (ctx->pc == 0x20B198u) {
        ctx->pc = 0x20B19Cu;
        goto label_20b19c;
    }
    ctx->pc = 0x20B194u;
    {
        const bool branch_taken_0x20b194 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b194) {
            ctx->pc = 0x20B1B8u;
            goto label_20b1b8;
        }
    }
    ctx->pc = 0x20B19Cu;
label_20b19c:
    // 0x20b19c: 0x41180  sll         $v0, $a0, 6
    ctx->pc = 0x20b19cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_20b1a0:
    // 0x20b1a0: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
label_20b1a4:
    if (ctx->pc == 0x20B1A4u) {
        ctx->pc = 0x20B1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B1A0u;
        // 0x20b1a4: 0x22143  sra         $a0, $v0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B1A8u;
        goto label_20b1a8;
    }
    ctx->pc = 0x20B1A0u;
    {
        const bool branch_taken_0x20b1a0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x20B1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B1A0u;
        // 0x20b1a4: 0x22143  sra         $a0, $v0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b1a0) {
            ctx->pc = 0x20B1D4u;
            goto label_20b1d4;
        }
    }
    ctx->pc = 0x20B1A8u;
label_20b1a8:
    // 0x20b1a8: 0x2442001f  addiu       $v0, $v0, 0x1F
    ctx->pc = 0x20b1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
label_20b1ac:
    // 0x20b1ac: 0x22143  sra         $a0, $v0, 5
    ctx->pc = 0x20b1acu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 5));
label_20b1b0:
    // 0x20b1b0: 0x10000008  b           . + 4 + (0x8 << 2)
label_20b1b4:
    if (ctx->pc == 0x20B1B4u) {
        ctx->pc = 0x20B1B8u;
        goto label_20b1b8;
    }
    ctx->pc = 0x20B1B0u;
    {
        const bool branch_taken_0x20b1b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b1b0) {
            ctx->pc = 0x20B1D4u;
            goto label_20b1d4;
        }
    }
    ctx->pc = 0x20B1B8u;
label_20b1b8:
    // 0x20b1b8: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x20b1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_20b1bc:
    // 0x20b1bc: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x20b1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_20b1c0:
    // 0x20b1c0: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x20b1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_20b1c4:
    // 0x20b1c4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_20b1c8:
    if (ctx->pc == 0x20B1C8u) {
        ctx->pc = 0x20B1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B1C4u;
        // 0x20b1c8: 0x22143  sra         $a0, $v0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B1CCu;
        goto label_20b1cc;
    }
    ctx->pc = 0x20B1C4u;
    {
        const bool branch_taken_0x20b1c4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x20B1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B1C4u;
        // 0x20b1c8: 0x22143  sra         $a0, $v0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b1c4) {
            ctx->pc = 0x20B1D4u;
            goto label_20b1d4;
        }
    }
    ctx->pc = 0x20B1CCu;
label_20b1cc:
    // 0x20b1cc: 0x2442001f  addiu       $v0, $v0, 0x1F
    ctx->pc = 0x20b1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
label_20b1d0:
    // 0x20b1d0: 0x22143  sra         $a0, $v0, 5
    ctx->pc = 0x20b1d0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 5));
label_20b1d4:
    // 0x20b1d4: 0x0  nop
    ctx->pc = 0x20b1d4u;
    // NOP
label_20b1d8:
    // 0x20b1d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x20b1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_20b1dc:
    // 0x20b1dc: 0x0  nop
    ctx->pc = 0x20b1dcu;
    // NOP
label_20b1e0:
    // 0x20b1e0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x20b1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_20b1e4:
    // 0x20b1e4: 0x262001a  div         $zero, $s3, $v0
    ctx->pc = 0x20b1e4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 19);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_20b1e8:
    // 0x20b1e8: 0x134fc2  srl         $t1, $s3, 31
    ctx->pc = 0x20b1e8u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 19), 31));
label_20b1ec:
    // 0x20b1ec: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x20b1ecu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
label_20b1f0:
    // 0x20b1f0: 0x3010  mfhi        $a2
    ctx->pc = 0x20b1f0u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_20b1f4:
    // 0x20b1f4: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x20b1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
label_20b1f8:
    // 0x20b1f8: 0x34446667  ori         $a0, $v0, 0x6667
    ctx->pc = 0x20b1f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
label_20b1fc:
    // 0x20b1fc: 0x3402fe00  ori         $v0, $zero, 0xFE00
    ctx->pc = 0x20b1fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_20b200:
    // 0x20b200: 0x930018  mult        $zero, $a0, $s3
    ctx->pc = 0x20b200u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_20b204:
    // 0x20b204: 0x62100  sll         $a0, $a2, 4
    ctx->pc = 0x20b204u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_20b208:
    // 0x20b208: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x20b208u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_20b20c:
    // 0x20b20c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x20b20cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_20b210:
    // 0x20b210: 0x2e48821  addu        $s1, $s7, $a0
    ctx->pc = 0x20b210u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
label_20b214:
    // 0x20b214: 0x112100  sll         $a0, $s1, 4
    ctx->pc = 0x20b214u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_20b218:
    // 0x20b218: 0x24866c00  addiu       $a2, $a0, 0x6C00
    ctx->pc = 0x20b218u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
label_20b21c:
    // 0x20b21c: 0x3810  mfhi        $a3
    ctx->pc = 0x20b21cu;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_20b220:
    // 0x20b220: 0xa6860090  sh          $a2, 0x90($s4)
    ctx->pc = 0x20b220u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 144), (uint16_t)GPR_U32(ctx, 6));
label_20b224:
    // 0x20b224: 0x2624003c  addiu       $a0, $s1, 0x3C
    ctx->pc = 0x20b224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
label_20b228:
    // 0x20b228: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x20b228u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_20b22c:
    // 0x20b22c: 0x73043  sra         $a2, $a3, 1
    ctx->pc = 0x20b22cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 7), 1));
label_20b230:
    // 0x20b230: 0x24846c00  addiu       $a0, $a0, 0x6C00
    ctx->pc = 0x20b230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
label_20b234:
    // 0x20b234: 0xc94821  addu        $t1, $a2, $t1
    ctx->pc = 0x20b234u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_20b238:
    // 0x20b238: 0x2626002d  addiu       $a2, $s1, 0x2D
    ctx->pc = 0x20b238u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 45));
label_20b23c:
    // 0x20b23c: 0x93880  sll         $a3, $t1, 2
    ctx->pc = 0x20b23cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_20b240:
    // 0x20b240: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x20b240u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_20b244:
    // 0x20b244: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x20b244u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
label_20b248:
    // 0x20b248: 0x24c76c00  addiu       $a3, $a2, 0x6C00
    ctx->pc = 0x20b248u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 27648));
label_20b24c:
    // 0x20b24c: 0x930c0  sll         $a2, $t1, 3
    ctx->pc = 0x20b24cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_20b250:
    // 0x20b250: 0x24d200a0  addiu       $s2, $a2, 0xA0
    ctx->pc = 0x20b250u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
label_20b254:
    // 0x20b254: 0x1248c0  sll         $t1, $s2, 3
    ctx->pc = 0x20b254u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_20b258:
    // 0x20b258: 0x26460028  addiu       $a2, $s2, 0x28
    ctx->pc = 0x20b258u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
label_20b25c:
    // 0x20b25c: 0x25297900  addiu       $t1, $t1, 0x7900
    ctx->pc = 0x20b25cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 30976));
label_20b260:
    // 0x20b260: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x20b260u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_20b264:
    // 0x20b264: 0xa6890092  sh          $t1, 0x92($s4)
    ctx->pc = 0x20b264u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 146), (uint16_t)GPR_U32(ctx, 9));
label_20b268:
    // 0x20b268: 0x24ca7900  addiu       $t2, $a2, 0x7900
    ctx->pc = 0x20b268u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), 30976));
label_20b26c:
    // 0x20b26c: 0xae820094  sw          $v0, 0x94($s4)
    ctx->pc = 0x20b26cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 148), GPR_U32(ctx, 2));
label_20b270:
    // 0x20b270: 0x26460023  addiu       $a2, $s2, 0x23
    ctx->pc = 0x20b270u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 35));
label_20b274:
    // 0x20b274: 0xa68400a0  sh          $a0, 0xA0($s4)
    ctx->pc = 0x20b274u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 160), (uint16_t)GPR_U32(ctx, 4));
label_20b278:
    // 0x20b278: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x20b278u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_20b27c:
    // 0x20b27c: 0xa68a00a2  sh          $t2, 0xA2($s4)
    ctx->pc = 0x20b27cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 162), (uint16_t)GPR_U32(ctx, 10));
label_20b280:
    // 0x20b280: 0x24c67900  addiu       $a2, $a2, 0x7900
    ctx->pc = 0x20b280u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30976));
label_20b284:
    // 0x20b284: 0xae8200a4  sw          $v0, 0xA4($s4)
    ctx->pc = 0x20b284u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 164), GPR_U32(ctx, 2));
label_20b288:
    // 0x20b288: 0xa2830080  sb          $v1, 0x80($s4)
    ctx->pc = 0x20b288u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 128), (uint8_t)GPR_U32(ctx, 3));
label_20b28c:
    // 0x20b28c: 0xa2830081  sb          $v1, 0x81($s4)
    ctx->pc = 0x20b28cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 129), (uint8_t)GPR_U32(ctx, 3));
label_20b290:
    // 0x20b290: 0xa2830082  sb          $v1, 0x82($s4)
    ctx->pc = 0x20b290u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 130), (uint8_t)GPR_U32(ctx, 3));
label_20b294:
    // 0x20b294: 0x83899108  lb          $t1, -0x6EF8($gp)
    ctx->pc = 0x20b294u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938888)));
label_20b298:
    // 0x20b298: 0xa2890083  sb          $t1, 0x83($s4)
    ctx->pc = 0x20b298u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 131), (uint8_t)GPR_U32(ctx, 9));
label_20b29c:
    // 0x20b29c: 0xae880084  sw          $t0, 0x84($s4)
    ctx->pc = 0x20b29cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 132), GPR_U32(ctx, 8));
label_20b2a0:
    // 0x20b2a0: 0xa6870130  sh          $a3, 0x130($s4)
    ctx->pc = 0x20b2a0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 304), (uint16_t)GPR_U32(ctx, 7));
label_20b2a4:
    // 0x20b2a4: 0xa6860132  sh          $a2, 0x132($s4)
    ctx->pc = 0x20b2a4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 306), (uint16_t)GPR_U32(ctx, 6));
label_20b2a8:
    // 0x20b2a8: 0xae820134  sw          $v0, 0x134($s4)
    ctx->pc = 0x20b2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 308), GPR_U32(ctx, 2));
label_20b2ac:
    // 0x20b2ac: 0xa6840140  sh          $a0, 0x140($s4)
    ctx->pc = 0x20b2acu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 320), (uint16_t)GPR_U32(ctx, 4));
label_20b2b0:
    // 0x20b2b0: 0xa68a0142  sh          $t2, 0x142($s4)
    ctx->pc = 0x20b2b0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 322), (uint16_t)GPR_U32(ctx, 10));
label_20b2b4:
    // 0x20b2b4: 0xae820144  sw          $v0, 0x144($s4)
    ctx->pc = 0x20b2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 324), GPR_U32(ctx, 2));
label_20b2b8:
    // 0x20b2b8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x20b2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20b2bc:
    // 0x20b2bc: 0x28820059  slti        $v0, $a0, 0x59
    ctx->pc = 0x20b2bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)89) ? 1 : 0);
label_20b2c0:
    // 0x20b2c0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_20b2c4:
    if (ctx->pc == 0x20B2C4u) {
        ctx->pc = 0x20B2C8u;
        goto label_20b2c8;
    }
    ctx->pc = 0x20B2C0u;
    {
        const bool branch_taken_0x20b2c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20b2c0) {
            ctx->pc = 0x20B2D4u;
            goto label_20b2d4;
        }
    }
    ctx->pc = 0x20B2C8u;
label_20b2c8:
    // 0x20b2c8: 0x240200ab  addiu       $v0, $zero, 0xAB
    ctx->pc = 0x20b2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
label_20b2cc:
    // 0x20b2cc: 0x14820009  bne         $a0, $v0, . + 4 + (0x9 << 2)
label_20b2d0:
    if (ctx->pc == 0x20B2D0u) {
        ctx->pc = 0x20B2D4u;
        goto label_20b2d4;
    }
    ctx->pc = 0x20B2CCu;
    {
        const bool branch_taken_0x20b2cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x20b2cc) {
            ctx->pc = 0x20B2F4u;
            goto label_20b2f4;
        }
    }
    ctx->pc = 0x20B2D4u;
label_20b2d4:
    // 0x20b2d4: 0x0  nop
    ctx->pc = 0x20b2d4u;
    // NOP
label_20b2d8:
    // 0x20b2d8: 0xa2830120  sb          $v1, 0x120($s4)
    ctx->pc = 0x20b2d8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 288), (uint8_t)GPR_U32(ctx, 3));
label_20b2dc:
    // 0x20b2dc: 0xa2830121  sb          $v1, 0x121($s4)
    ctx->pc = 0x20b2dcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 289), (uint8_t)GPR_U32(ctx, 3));
label_20b2e0:
    // 0x20b2e0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x20b2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_20b2e4:
    // 0x20b2e4: 0xa2830122  sb          $v1, 0x122($s4)
    ctx->pc = 0x20b2e4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 290), (uint8_t)GPR_U32(ctx, 3));
label_20b2e8:
    // 0x20b2e8: 0xa2800123  sb          $zero, 0x123($s4)
    ctx->pc = 0x20b2e8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 291), (uint8_t)GPR_U32(ctx, 0));
label_20b2ec:
    // 0x20b2ec: 0x10000008  b           . + 4 + (0x8 << 2)
label_20b2f0:
    if (ctx->pc == 0x20B2F0u) {
        ctx->pc = 0x20B2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B2ECu;
        // 0x20b2f0: 0xae820124  sw          $v0, 0x124($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 292), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B2F4u;
        goto label_20b2f4;
    }
    ctx->pc = 0x20B2ECu;
    {
        const bool branch_taken_0x20b2ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B2ECu;
        // 0x20b2f0: 0xae820124  sw          $v0, 0x124($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 292), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b2ec) {
            ctx->pc = 0x20B310u;
            goto label_20b310;
        }
    }
    ctx->pc = 0x20B2F4u;
label_20b2f4:
    // 0x20b2f4: 0x0  nop
    ctx->pc = 0x20b2f4u;
    // NOP
label_20b2f8:
    // 0x20b2f8: 0xa2830120  sb          $v1, 0x120($s4)
    ctx->pc = 0x20b2f8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 288), (uint8_t)GPR_U32(ctx, 3));
label_20b2fc:
    // 0x20b2fc: 0xa2830121  sb          $v1, 0x121($s4)
    ctx->pc = 0x20b2fcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 289), (uint8_t)GPR_U32(ctx, 3));
label_20b300:
    // 0x20b300: 0xa2830122  sb          $v1, 0x122($s4)
    ctx->pc = 0x20b300u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 290), (uint8_t)GPR_U32(ctx, 3));
label_20b304:
    // 0x20b304: 0x83829108  lb          $v0, -0x6EF8($gp)
    ctx->pc = 0x20b304u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938888)));
label_20b308:
    // 0x20b308: 0xa2820123  sb          $v0, 0x123($s4)
    ctx->pc = 0x20b308u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 291), (uint8_t)GPR_U32(ctx, 2));
label_20b30c:
    // 0x20b30c: 0xae880124  sw          $t0, 0x124($s4)
    ctx->pc = 0x20b30cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 292), GPR_U32(ctx, 8));
label_20b310:
    // 0x20b310: 0xc070c20  jal         func_1C3080
label_20b314:
    if (ctx->pc == 0x20B314u) {
        ctx->pc = 0x20B314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B310u;
        // 0x20b314: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20B318u;
        goto label_20b318;
    }
    ctx->pc = 0x20B310u;
    SET_GPR_U32(ctx, 31, 0x20B318u);
    ctx->pc = 0x20B314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B310u;
    // 0x20b314: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3080u;
    { ctx->pc = 0x1c3080; return; }
    ctx->pc = 0x20B318u;
label_20b318:
    // 0x20b318: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x20b318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_20b31c:
    // 0x20b31c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x20b31cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_20b320:
    // 0x20b320: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x20b320u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_20b324:
    // 0x20b324: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20b324u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x20b328u;
    return;
}

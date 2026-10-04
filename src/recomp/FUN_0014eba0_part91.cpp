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


void FUN_0014eba0_part91(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x17aac0u: goto label_17aac0;
        case 0x17aac4u: goto label_17aac4;
        case 0x17aac8u: goto label_17aac8;
        case 0x17aaccu: goto label_17aacc;
        case 0x17aad0u: goto label_17aad0;
        case 0x17aad4u: goto label_17aad4;
        case 0x17aad8u: goto label_17aad8;
        case 0x17aadcu: goto label_17aadc;
        case 0x17aae0u: goto label_17aae0;
        case 0x17aae4u: goto label_17aae4;
        case 0x17aae8u: goto label_17aae8;
        case 0x17aaecu: goto label_17aaec;
        case 0x17aaf0u: goto label_17aaf0;
        case 0x17aaf4u: goto label_17aaf4;
        case 0x17aaf8u: goto label_17aaf8;
        case 0x17aafcu: goto label_17aafc;
        case 0x17ab00u: goto label_17ab00;
        case 0x17ab04u: goto label_17ab04;
        case 0x17ab08u: goto label_17ab08;
        case 0x17ab0cu: goto label_17ab0c;
        case 0x17ab10u: goto label_17ab10;
        case 0x17ab14u: goto label_17ab14;
        case 0x17ab18u: goto label_17ab18;
        case 0x17ab1cu: goto label_17ab1c;
        case 0x17ab20u: goto label_17ab20;
        case 0x17ab24u: goto label_17ab24;
        case 0x17ab28u: goto label_17ab28;
        case 0x17ab2cu: goto label_17ab2c;
        case 0x17ab30u: goto label_17ab30;
        case 0x17ab34u: goto label_17ab34;
        case 0x17ab38u: goto label_17ab38;
        case 0x17ab3cu: goto label_17ab3c;
        case 0x17ab40u: goto label_17ab40;
        case 0x17ab44u: goto label_17ab44;
        case 0x17ab48u: goto label_17ab48;
        case 0x17ab4cu: goto label_17ab4c;
        case 0x17ab50u: goto label_17ab50;
        case 0x17ab54u: goto label_17ab54;
        case 0x17ab58u: goto label_17ab58;
        case 0x17ab5cu: goto label_17ab5c;
        case 0x17ab60u: goto label_17ab60;
        case 0x17ab64u: goto label_17ab64;
        case 0x17ab68u: goto label_17ab68;
        case 0x17ab6cu: goto label_17ab6c;
        case 0x17ab70u: goto label_17ab70;
        case 0x17ab74u: goto label_17ab74;
        case 0x17ab78u: goto label_17ab78;
        case 0x17ab7cu: goto label_17ab7c;
        case 0x17ab80u: goto label_17ab80;
        case 0x17ab84u: goto label_17ab84;
        case 0x17ab88u: goto label_17ab88;
        case 0x17ab8cu: goto label_17ab8c;
        case 0x17ab90u: goto label_17ab90;
        case 0x17ab94u: goto label_17ab94;
        case 0x17ab98u: goto label_17ab98;
        case 0x17ab9cu: goto label_17ab9c;
        case 0x17aba0u: goto label_17aba0;
        case 0x17aba4u: goto label_17aba4;
        case 0x17aba8u: goto label_17aba8;
        case 0x17abacu: goto label_17abac;
        case 0x17abb0u: goto label_17abb0;
        case 0x17abb4u: goto label_17abb4;
        case 0x17abb8u: goto label_17abb8;
        case 0x17abbcu: goto label_17abbc;
        case 0x17abc0u: goto label_17abc0;
        case 0x17abc4u: goto label_17abc4;
        case 0x17abc8u: goto label_17abc8;
        case 0x17abccu: goto label_17abcc;
        case 0x17abd0u: goto label_17abd0;
        case 0x17abd4u: goto label_17abd4;
        case 0x17abd8u: goto label_17abd8;
        case 0x17abdcu: goto label_17abdc;
        case 0x17abe0u: goto label_17abe0;
        case 0x17abe4u: goto label_17abe4;
        case 0x17abe8u: goto label_17abe8;
        case 0x17abecu: goto label_17abec;
        case 0x17abf0u: goto label_17abf0;
        case 0x17abf4u: goto label_17abf4;
        case 0x17abf8u: goto label_17abf8;
        case 0x17abfcu: goto label_17abfc;
        case 0x17ac00u: goto label_17ac00;
        case 0x17ac04u: goto label_17ac04;
        case 0x17ac08u: goto label_17ac08;
        case 0x17ac0cu: goto label_17ac0c;
        case 0x17ac10u: goto label_17ac10;
        case 0x17ac14u: goto label_17ac14;
        case 0x17ac18u: goto label_17ac18;
        case 0x17ac1cu: goto label_17ac1c;
        case 0x17ac20u: goto label_17ac20;
        case 0x17ac24u: goto label_17ac24;
        case 0x17ac28u: goto label_17ac28;
        case 0x17ac2cu: goto label_17ac2c;
        case 0x17ac30u: goto label_17ac30;
        case 0x17ac34u: goto label_17ac34;
        case 0x17ac38u: goto label_17ac38;
        case 0x17ac3cu: goto label_17ac3c;
        case 0x17ac40u: goto label_17ac40;
        case 0x17ac44u: goto label_17ac44;
        case 0x17ac48u: goto label_17ac48;
        case 0x17ac4cu: goto label_17ac4c;
        case 0x17ac50u: goto label_17ac50;
        case 0x17ac54u: goto label_17ac54;
        case 0x17ac58u: goto label_17ac58;
        case 0x17ac5cu: goto label_17ac5c;
        case 0x17ac60u: goto label_17ac60;
        case 0x17ac64u: goto label_17ac64;
        case 0x17ac68u: goto label_17ac68;
        case 0x17ac6cu: goto label_17ac6c;
        case 0x17ac70u: goto label_17ac70;
        case 0x17ac74u: goto label_17ac74;
        case 0x17ac78u: goto label_17ac78;
        case 0x17ac7cu: goto label_17ac7c;
        case 0x17ac80u: goto label_17ac80;
        case 0x17ac84u: goto label_17ac84;
        case 0x17ac88u: goto label_17ac88;
        case 0x17ac8cu: goto label_17ac8c;
        case 0x17ac90u: goto label_17ac90;
        case 0x17ac94u: goto label_17ac94;
        case 0x17ac98u: goto label_17ac98;
        case 0x17ac9cu: goto label_17ac9c;
        case 0x17aca0u: goto label_17aca0;
        case 0x17aca4u: goto label_17aca4;
        case 0x17aca8u: goto label_17aca8;
        case 0x17acacu: goto label_17acac;
        case 0x17acb0u: goto label_17acb0;
        case 0x17acb4u: goto label_17acb4;
        case 0x17acb8u: goto label_17acb8;
        case 0x17acbcu: goto label_17acbc;
        case 0x17acc0u: goto label_17acc0;
        case 0x17acc4u: goto label_17acc4;
        case 0x17acc8u: goto label_17acc8;
        case 0x17acccu: goto label_17accc;
        case 0x17acd0u: goto label_17acd0;
        case 0x17acd4u: goto label_17acd4;
        case 0x17acd8u: goto label_17acd8;
        case 0x17acdcu: goto label_17acdc;
        case 0x17ace0u: goto label_17ace0;
        case 0x17ace4u: goto label_17ace4;
        case 0x17ace8u: goto label_17ace8;
        case 0x17acecu: goto label_17acec;
        case 0x17acf0u: goto label_17acf0;
        case 0x17acf4u: goto label_17acf4;
        case 0x17acf8u: goto label_17acf8;
        case 0x17acfcu: goto label_17acfc;
        case 0x17ad00u: goto label_17ad00;
        case 0x17ad04u: goto label_17ad04;
        case 0x17ad08u: goto label_17ad08;
        case 0x17ad0cu: goto label_17ad0c;
        case 0x17ad10u: goto label_17ad10;
        case 0x17ad14u: goto label_17ad14;
        case 0x17ad18u: goto label_17ad18;
        case 0x17ad1cu: goto label_17ad1c;
        case 0x17ad20u: goto label_17ad20;
        case 0x17ad24u: goto label_17ad24;
        case 0x17ad28u: goto label_17ad28;
        case 0x17ad2cu: goto label_17ad2c;
        case 0x17ad30u: goto label_17ad30;
        case 0x17ad34u: goto label_17ad34;
        case 0x17ad38u: goto label_17ad38;
        case 0x17ad3cu: goto label_17ad3c;
        case 0x17ad40u: goto label_17ad40;
        case 0x17ad44u: goto label_17ad44;
        case 0x17ad48u: goto label_17ad48;
        case 0x17ad4cu: goto label_17ad4c;
        case 0x17ad50u: goto label_17ad50;
        case 0x17ad54u: goto label_17ad54;
        case 0x17ad58u: goto label_17ad58;
        case 0x17ad5cu: goto label_17ad5c;
        case 0x17ad60u: goto label_17ad60;
        case 0x17ad64u: goto label_17ad64;
        case 0x17ad68u: goto label_17ad68;
        case 0x17ad6cu: goto label_17ad6c;
        case 0x17ad70u: goto label_17ad70;
        case 0x17ad74u: goto label_17ad74;
        case 0x17ad78u: goto label_17ad78;
        case 0x17ad7cu: goto label_17ad7c;
        case 0x17ad80u: goto label_17ad80;
        case 0x17ad84u: goto label_17ad84;
        case 0x17ad88u: goto label_17ad88;
        case 0x17ad8cu: goto label_17ad8c;
        case 0x17ad90u: goto label_17ad90;
        case 0x17ad94u: goto label_17ad94;
        case 0x17ad98u: goto label_17ad98;
        case 0x17ad9cu: goto label_17ad9c;
        case 0x17ada0u: goto label_17ada0;
        case 0x17ada4u: goto label_17ada4;
        case 0x17ada8u: goto label_17ada8;
        case 0x17adacu: goto label_17adac;
        case 0x17adb0u: goto label_17adb0;
        case 0x17adb4u: goto label_17adb4;
        case 0x17adb8u: goto label_17adb8;
        case 0x17adbcu: goto label_17adbc;
        case 0x17adc0u: goto label_17adc0;
        case 0x17adc4u: goto label_17adc4;
        case 0x17adc8u: goto label_17adc8;
        case 0x17adccu: goto label_17adcc;
        case 0x17add0u: goto label_17add0;
        case 0x17add4u: goto label_17add4;
        case 0x17add8u: goto label_17add8;
        case 0x17addcu: goto label_17addc;
        case 0x17ade0u: goto label_17ade0;
        case 0x17ade4u: goto label_17ade4;
        case 0x17ade8u: goto label_17ade8;
        case 0x17adecu: goto label_17adec;
        case 0x17adf0u: goto label_17adf0;
        case 0x17adf4u: goto label_17adf4;
        case 0x17adf8u: goto label_17adf8;
        case 0x17adfcu: goto label_17adfc;
        case 0x17ae00u: goto label_17ae00;
        case 0x17ae04u: goto label_17ae04;
        case 0x17ae08u: goto label_17ae08;
        case 0x17ae0cu: goto label_17ae0c;
        case 0x17ae10u: goto label_17ae10;
        case 0x17ae14u: goto label_17ae14;
        case 0x17ae18u: goto label_17ae18;
        case 0x17ae1cu: goto label_17ae1c;
        case 0x17ae20u: goto label_17ae20;
        case 0x17ae24u: goto label_17ae24;
        case 0x17ae28u: goto label_17ae28;
        case 0x17ae2cu: goto label_17ae2c;
        case 0x17ae30u: goto label_17ae30;
        case 0x17ae34u: goto label_17ae34;
        case 0x17ae38u: goto label_17ae38;
        case 0x17ae3cu: goto label_17ae3c;
        case 0x17ae40u: goto label_17ae40;
        case 0x17ae44u: goto label_17ae44;
        case 0x17ae48u: goto label_17ae48;
        case 0x17ae4cu: goto label_17ae4c;
        case 0x17ae50u: goto label_17ae50;
        case 0x17ae54u: goto label_17ae54;
        case 0x17ae58u: goto label_17ae58;
        case 0x17ae5cu: goto label_17ae5c;
        case 0x17ae60u: goto label_17ae60;
        case 0x17ae64u: goto label_17ae64;
        case 0x17ae68u: goto label_17ae68;
        case 0x17ae6cu: goto label_17ae6c;
        case 0x17ae70u: goto label_17ae70;
        case 0x17ae74u: goto label_17ae74;
        case 0x17ae78u: goto label_17ae78;
        case 0x17ae7cu: goto label_17ae7c;
        case 0x17ae80u: goto label_17ae80;
        case 0x17ae84u: goto label_17ae84;
        case 0x17ae88u: goto label_17ae88;
        case 0x17ae8cu: goto label_17ae8c;
        case 0x17ae90u: goto label_17ae90;
        case 0x17ae94u: goto label_17ae94;
        case 0x17ae98u: goto label_17ae98;
        case 0x17ae9cu: goto label_17ae9c;
        case 0x17aea0u: goto label_17aea0;
        case 0x17aea4u: goto label_17aea4;
        case 0x17aea8u: goto label_17aea8;
        case 0x17aeacu: goto label_17aeac;
        case 0x17aeb0u: goto label_17aeb0;
        case 0x17aeb4u: goto label_17aeb4;
        case 0x17aeb8u: goto label_17aeb8;
        case 0x17aebcu: goto label_17aebc;
        case 0x17aec0u: goto label_17aec0;
        case 0x17aec4u: goto label_17aec4;
        case 0x17aec8u: goto label_17aec8;
        case 0x17aeccu: goto label_17aecc;
        case 0x17aed0u: goto label_17aed0;
        case 0x17aed4u: goto label_17aed4;
        case 0x17aed8u: goto label_17aed8;
        case 0x17aedcu: goto label_17aedc;
        case 0x17aee0u: goto label_17aee0;
        case 0x17aee4u: goto label_17aee4;
        case 0x17aee8u: goto label_17aee8;
        case 0x17aeecu: goto label_17aeec;
        case 0x17aef0u: goto label_17aef0;
        case 0x17aef4u: goto label_17aef4;
        case 0x17aef8u: goto label_17aef8;
        case 0x17aefcu: goto label_17aefc;
        case 0x17af00u: goto label_17af00;
        case 0x17af04u: goto label_17af04;
        case 0x17af08u: goto label_17af08;
        case 0x17af0cu: goto label_17af0c;
        case 0x17af10u: goto label_17af10;
        case 0x17af14u: goto label_17af14;
        case 0x17af18u: goto label_17af18;
        case 0x17af1cu: goto label_17af1c;
        case 0x17af20u: goto label_17af20;
        case 0x17af24u: goto label_17af24;
        case 0x17af28u: goto label_17af28;
        case 0x17af2cu: goto label_17af2c;
        case 0x17af30u: goto label_17af30;
        case 0x17af34u: goto label_17af34;
        case 0x17af38u: goto label_17af38;
        case 0x17af3cu: goto label_17af3c;
        case 0x17af40u: goto label_17af40;
        case 0x17af44u: goto label_17af44;
        case 0x17af48u: goto label_17af48;
        case 0x17af4cu: goto label_17af4c;
        case 0x17af50u: goto label_17af50;
        case 0x17af54u: goto label_17af54;
        case 0x17af58u: goto label_17af58;
        case 0x17af5cu: goto label_17af5c;
        case 0x17af60u: goto label_17af60;
        case 0x17af64u: goto label_17af64;
        case 0x17af68u: goto label_17af68;
        case 0x17af6cu: goto label_17af6c;
        case 0x17af70u: goto label_17af70;
        case 0x17af74u: goto label_17af74;
        case 0x17af78u: goto label_17af78;
        case 0x17af7cu: goto label_17af7c;
        case 0x17af80u: goto label_17af80;
        case 0x17af84u: goto label_17af84;
        case 0x17af88u: goto label_17af88;
        case 0x17af8cu: goto label_17af8c;
        case 0x17af90u: goto label_17af90;
        case 0x17af94u: goto label_17af94;
        case 0x17af98u: goto label_17af98;
        case 0x17af9cu: goto label_17af9c;
        case 0x17afa0u: goto label_17afa0;
        case 0x17afa4u: goto label_17afa4;
        case 0x17afa8u: goto label_17afa8;
        case 0x17afacu: goto label_17afac;
        case 0x17afb0u: goto label_17afb0;
        case 0x17afb4u: goto label_17afb4;
        case 0x17afb8u: goto label_17afb8;
        case 0x17afbcu: goto label_17afbc;
        case 0x17afc0u: goto label_17afc0;
        case 0x17afc4u: goto label_17afc4;
        case 0x17afc8u: goto label_17afc8;
        case 0x17afccu: goto label_17afcc;
        case 0x17afd0u: goto label_17afd0;
        case 0x17afd4u: goto label_17afd4;
        case 0x17afd8u: goto label_17afd8;
        case 0x17afdcu: goto label_17afdc;
        case 0x17afe0u: goto label_17afe0;
        case 0x17afe4u: goto label_17afe4;
        case 0x17afe8u: goto label_17afe8;
        case 0x17afecu: goto label_17afec;
        case 0x17aff0u: goto label_17aff0;
        case 0x17aff4u: goto label_17aff4;
        case 0x17aff8u: goto label_17aff8;
        case 0x17affcu: goto label_17affc;
        case 0x17b000u: goto label_17b000;
        case 0x17b004u: goto label_17b004;
        case 0x17b008u: goto label_17b008;
        case 0x17b00cu: goto label_17b00c;
        case 0x17b010u: goto label_17b010;
        case 0x17b014u: goto label_17b014;
        case 0x17b018u: goto label_17b018;
        case 0x17b01cu: goto label_17b01c;
        case 0x17b020u: goto label_17b020;
        case 0x17b024u: goto label_17b024;
        case 0x17b028u: goto label_17b028;
        case 0x17b02cu: goto label_17b02c;
        case 0x17b030u: goto label_17b030;
        case 0x17b034u: goto label_17b034;
        case 0x17b038u: goto label_17b038;
        case 0x17b03cu: goto label_17b03c;
        case 0x17b040u: goto label_17b040;
        case 0x17b044u: goto label_17b044;
        case 0x17b048u: goto label_17b048;
        case 0x17b04cu: goto label_17b04c;
        case 0x17b050u: goto label_17b050;
        case 0x17b054u: goto label_17b054;
        case 0x17b058u: goto label_17b058;
        case 0x17b05cu: goto label_17b05c;
        case 0x17b060u: goto label_17b060;
        case 0x17b064u: goto label_17b064;
        case 0x17b068u: goto label_17b068;
        case 0x17b06cu: goto label_17b06c;
        case 0x17b070u: goto label_17b070;
        case 0x17b074u: goto label_17b074;
        case 0x17b078u: goto label_17b078;
        case 0x17b07cu: goto label_17b07c;
        case 0x17b080u: goto label_17b080;
        case 0x17b084u: goto label_17b084;
        case 0x17b088u: goto label_17b088;
        case 0x17b08cu: goto label_17b08c;
        case 0x17b090u: goto label_17b090;
        case 0x17b094u: goto label_17b094;
        case 0x17b098u: goto label_17b098;
        case 0x17b09cu: goto label_17b09c;
        case 0x17b0a0u: goto label_17b0a0;
        case 0x17b0a4u: goto label_17b0a4;
        case 0x17b0a8u: goto label_17b0a8;
        case 0x17b0acu: goto label_17b0ac;
        case 0x17b0b0u: goto label_17b0b0;
        case 0x17b0b4u: goto label_17b0b4;
        case 0x17b0b8u: goto label_17b0b8;
        case 0x17b0bcu: goto label_17b0bc;
        case 0x17b0c0u: goto label_17b0c0;
        case 0x17b0c4u: goto label_17b0c4;
        case 0x17b0c8u: goto label_17b0c8;
        case 0x17b0ccu: goto label_17b0cc;
        case 0x17b0d0u: goto label_17b0d0;
        case 0x17b0d4u: goto label_17b0d4;
        case 0x17b0d8u: goto label_17b0d8;
        case 0x17b0dcu: goto label_17b0dc;
        case 0x17b0e0u: goto label_17b0e0;
        case 0x17b0e4u: goto label_17b0e4;
        case 0x17b0e8u: goto label_17b0e8;
        case 0x17b0ecu: goto label_17b0ec;
        case 0x17b0f0u: goto label_17b0f0;
        case 0x17b0f4u: goto label_17b0f4;
        case 0x17b0f8u: goto label_17b0f8;
        case 0x17b0fcu: goto label_17b0fc;
        case 0x17b100u: goto label_17b100;
        case 0x17b104u: goto label_17b104;
        case 0x17b108u: goto label_17b108;
        case 0x17b10cu: goto label_17b10c;
        case 0x17b110u: goto label_17b110;
        case 0x17b114u: goto label_17b114;
        case 0x17b118u: goto label_17b118;
        case 0x17b11cu: goto label_17b11c;
        case 0x17b120u: goto label_17b120;
        case 0x17b124u: goto label_17b124;
        case 0x17b128u: goto label_17b128;
        case 0x17b12cu: goto label_17b12c;
        case 0x17b130u: goto label_17b130;
        case 0x17b134u: goto label_17b134;
        case 0x17b138u: goto label_17b138;
        case 0x17b13cu: goto label_17b13c;
        case 0x17b140u: goto label_17b140;
        case 0x17b144u: goto label_17b144;
        case 0x17b148u: goto label_17b148;
        case 0x17b14cu: goto label_17b14c;
        case 0x17b150u: goto label_17b150;
        case 0x17b154u: goto label_17b154;
        case 0x17b158u: goto label_17b158;
        case 0x17b15cu: goto label_17b15c;
        case 0x17b160u: goto label_17b160;
        case 0x17b164u: goto label_17b164;
        case 0x17b168u: goto label_17b168;
        case 0x17b16cu: goto label_17b16c;
        case 0x17b170u: goto label_17b170;
        case 0x17b174u: goto label_17b174;
        case 0x17b178u: goto label_17b178;
        case 0x17b17cu: goto label_17b17c;
        case 0x17b180u: goto label_17b180;
        case 0x17b184u: goto label_17b184;
        case 0x17b188u: goto label_17b188;
        case 0x17b18cu: goto label_17b18c;
        case 0x17b190u: goto label_17b190;
        case 0x17b194u: goto label_17b194;
        case 0x17b198u: goto label_17b198;
        case 0x17b19cu: goto label_17b19c;
        case 0x17b1a0u: goto label_17b1a0;
        case 0x17b1a4u: goto label_17b1a4;
        case 0x17b1a8u: goto label_17b1a8;
        case 0x17b1acu: goto label_17b1ac;
        case 0x17b1b0u: goto label_17b1b0;
        case 0x17b1b4u: goto label_17b1b4;
        case 0x17b1b8u: goto label_17b1b8;
        case 0x17b1bcu: goto label_17b1bc;
        case 0x17b1c0u: goto label_17b1c0;
        case 0x17b1c4u: goto label_17b1c4;
        case 0x17b1c8u: goto label_17b1c8;
        case 0x17b1ccu: goto label_17b1cc;
        case 0x17b1d0u: goto label_17b1d0;
        case 0x17b1d4u: goto label_17b1d4;
        case 0x17b1d8u: goto label_17b1d8;
        case 0x17b1dcu: goto label_17b1dc;
        case 0x17b1e0u: goto label_17b1e0;
        case 0x17b1e4u: goto label_17b1e4;
        case 0x17b1e8u: goto label_17b1e8;
        case 0x17b1ecu: goto label_17b1ec;
        case 0x17b1f0u: goto label_17b1f0;
        case 0x17b1f4u: goto label_17b1f4;
        case 0x17b1f8u: goto label_17b1f8;
        case 0x17b1fcu: goto label_17b1fc;
        case 0x17b200u: goto label_17b200;
        case 0x17b204u: goto label_17b204;
        case 0x17b208u: goto label_17b208;
        case 0x17b20cu: goto label_17b20c;
        case 0x17b210u: goto label_17b210;
        case 0x17b214u: goto label_17b214;
        case 0x17b218u: goto label_17b218;
        case 0x17b21cu: goto label_17b21c;
        case 0x17b220u: goto label_17b220;
        case 0x17b224u: goto label_17b224;
        case 0x17b228u: goto label_17b228;
        case 0x17b22cu: goto label_17b22c;
        case 0x17b230u: goto label_17b230;
        case 0x17b234u: goto label_17b234;
        case 0x17b238u: goto label_17b238;
        case 0x17b23cu: goto label_17b23c;
        case 0x17b240u: goto label_17b240;
        case 0x17b244u: goto label_17b244;
        case 0x17b248u: goto label_17b248;
        case 0x17b24cu: goto label_17b24c;
        case 0x17b250u: goto label_17b250;
        case 0x17b254u: goto label_17b254;
        case 0x17b258u: goto label_17b258;
        case 0x17b25cu: goto label_17b25c;
        case 0x17b260u: goto label_17b260;
        case 0x17b264u: goto label_17b264;
        case 0x17b268u: goto label_17b268;
        case 0x17b26cu: goto label_17b26c;
        case 0x17b270u: goto label_17b270;
        case 0x17b274u: goto label_17b274;
        case 0x17b278u: goto label_17b278;
        case 0x17b27cu: goto label_17b27c;
        case 0x17b280u: goto label_17b280;
        case 0x17b284u: goto label_17b284;
        case 0x17b288u: goto label_17b288;
        case 0x17b28cu: goto label_17b28c;
        default: return;
    }

label_17aac0:
    // 0x17aac0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17aac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17aac4:
    // 0x17aac4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17aac4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17aac8:
    // 0x17aac8: 0x3e00008  jr          $ra
label_17aacc:
    if (ctx->pc == 0x17AACCu) {
        ctx->pc = 0x17AACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AAC8u;
        // 0x17aacc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17AAD0u;
        goto label_17aad0;
    }
    ctx->pc = 0x17AAC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AAC8u;
        // 0x17aacc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17AAC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17AAD0u;
label_17aad0:
    // 0x17aad0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17aad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_17aad4:
    // 0x17aad4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x17aad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_17aad8:
    // 0x17aad8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17aad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_17aadc:
    // 0x17aadc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17aadcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_17aae0:
    // 0x17aae0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x17aae0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17aae4:
    // 0x17aae4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17aae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_17aae8:
    // 0x17aae8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17aae8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17aaec:
    // 0x17aaec: 0xc05eac8  jal         func_17AB20
label_17aaf0:
    if (ctx->pc == 0x17AAF0u) {
        ctx->pc = 0x17AAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AAECu;
        // 0x17aaf0: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17AAF4u;
        goto label_17aaf4;
    }
    ctx->pc = 0x17AAECu;
    SET_GPR_U32(ctx, 31, 0x17AAF4u);
    ctx->pc = 0x17AAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AAECu;
    // 0x17aaf0: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AB20u;
    goto label_17ab20;
    ctx->pc = 0x17AAF4u;
label_17aaf4:
    // 0x17aaf4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17aaf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_17aaf8:
    // 0x17aaf8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17aaf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17aafc:
    // 0x17aafc: 0xc05eaf0  jal         func_17ABC0
label_17ab00:
    if (ctx->pc == 0x17AB00u) {
        ctx->pc = 0x17AB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AAFCu;
        // 0x17ab00: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17AB04u;
        goto label_17ab04;
    }
    ctx->pc = 0x17AAFCu;
    SET_GPR_U32(ctx, 31, 0x17AB04u);
    ctx->pc = 0x17AB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AAFCu;
    // 0x17ab00: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ABC0u;
    goto label_17abc0;
    ctx->pc = 0x17AB04u;
label_17ab04:
    // 0x17ab04: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x17ab04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_17ab08:
    // 0x17ab08: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17ab08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17ab0c:
    // 0x17ab0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17ab0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17ab10:
    // 0x17ab10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17ab10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17ab14:
    // 0x17ab14: 0x3e00008  jr          $ra
label_17ab18:
    if (ctx->pc == 0x17AB18u) {
        ctx->pc = 0x17AB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AB14u;
        // 0x17ab18: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17AB1Cu;
        goto label_17ab1c;
    }
    ctx->pc = 0x17AB14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AB14u;
        // 0x17ab18: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17AB14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17AB1Cu;
label_17ab1c:
    // 0x17ab1c: 0x0  nop
    ctx->pc = 0x17ab1cu;
    // NOP
label_17ab20:
    // 0x17ab20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17ab20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_17ab24:
    // 0x17ab24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17ab24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_17ab28:
    // 0x17ab28: 0xc066d0a  jal         func_19B428
label_17ab2c:
    if (ctx->pc == 0x17AB2Cu) {
        ctx->pc = 0x17AB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AB28u;
        // 0x17ab2c: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17AB30u;
        goto label_17ab30;
    }
    ctx->pc = 0x17AB28u;
    SET_GPR_U32(ctx, 31, 0x17AB30u);
    ctx->pc = 0x17AB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AB28u;
    // 0x17ab2c: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B428u;
    { ctx->pc = 0x19b428; return; }
    ctx->pc = 0x17AB30u;
label_17ab30:
    // 0x17ab30: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x17ab30u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
label_17ab34:
    // 0x17ab34: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x17ab34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_17ab38:
    // 0x17ab38: 0xfc400008  sd          $zero, 0x8($v0)
    ctx->pc = 0x17ab38u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 0));
label_17ab3c:
    // 0x17ab3c: 0x34640005  ori         $a0, $v1, 0x5
    ctx->pc = 0x17ab3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
label_17ab40:
    // 0x17ab40: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x17ab40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_17ab44:
    // 0x17ab44: 0x3c051100  lui         $a1, 0x1100
    ctx->pc = 0x17ab44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4352 << 16));
label_17ab48:
    // 0x17ab48: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x17ab48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
label_17ab4c:
    // 0x17ab4c: 0x7c400010  sq          $zero, 0x10($v0)
    ctx->pc = 0x17ab4cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 0));
label_17ab50:
    // 0x17ab50: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x17ab50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
label_17ab54:
    // 0x17ab54: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x17ab54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
label_17ab58:
    // 0x17ab58: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x17ab58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
label_17ab5c:
    // 0x17ab5c: 0x34038003  ori         $v1, $zero, 0x8003
    ctx->pc = 0x17ab5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32771);
label_17ab60:
    // 0x17ab60: 0xac450010  sw          $a1, 0x10($v0)
    ctx->pc = 0x17ab60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 5));
label_17ab64:
    // 0x17ab64: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x17ab64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_17ab68:
    // 0x17ab68: 0xfc430020  sd          $v1, 0x20($v0)
    ctx->pc = 0x17ab68u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 32), GPR_U64(ctx, 3));
label_17ab6c:
    // 0x17ab6c: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x17ab6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_17ab70:
    // 0x17ab70: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x17ab70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_17ab74:
    // 0x17ab74: 0xfc430028  sd          $v1, 0x28($v0)
    ctx->pc = 0x17ab74u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 40), GPR_U64(ctx, 3));
label_17ab78:
    // 0x17ab78: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x17ab78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
label_17ab7c:
    // 0x17ab7c: 0x3463000f  ori         $v1, $v1, 0xF
    ctx->pc = 0x17ab7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15);
label_17ab80:
    // 0x17ab80: 0xfc430030  sd          $v1, 0x30($v0)
    ctx->pc = 0x17ab80u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 48), GPR_U64(ctx, 3));
label_17ab84:
    // 0x17ab84: 0xfc440038  sd          $a0, 0x38($v0)
    ctx->pc = 0x17ab84u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 56), GPR_U64(ctx, 4));
label_17ab88:
    // 0x17ab88: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x17ab88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_17ab8c:
    // 0x17ab8c: 0xfc430040  sd          $v1, 0x40($v0)
    ctx->pc = 0x17ab8cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 64), GPR_U64(ctx, 3));
label_17ab90:
    // 0x17ab90: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x17ab90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_17ab94:
    // 0x17ab94: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x17ab94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_17ab98:
    // 0x17ab98: 0xfc440048  sd          $a0, 0x48($v0)
    ctx->pc = 0x17ab98u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 72), GPR_U64(ctx, 4));
label_17ab9c:
    // 0x17ab9c: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x17ab9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
label_17aba0:
    // 0x17aba0: 0x24040044  addiu       $a0, $zero, 0x44
    ctx->pc = 0x17aba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_17aba4:
    // 0x17aba4: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x17aba4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_17aba8:
    // 0x17aba8: 0x24030043  addiu       $v1, $zero, 0x43
    ctx->pc = 0x17aba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
label_17abac:
    // 0x17abac: 0xfc440050  sd          $a0, 0x50($v0)
    ctx->pc = 0x17abacu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 80), GPR_U64(ctx, 4));
label_17abb0:
    // 0x17abb0: 0xfc430058  sd          $v1, 0x58($v0)
    ctx->pc = 0x17abb0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 88), GPR_U64(ctx, 3));
label_17abb4:
    // 0x17abb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17abb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17abb8:
    // 0x17abb8: 0x3e00008  jr          $ra
label_17abbc:
    if (ctx->pc == 0x17ABBCu) {
        ctx->pc = 0x17ABBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ABB8u;
        // 0x17abbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17ABC0u;
        goto label_17abc0;
    }
    ctx->pc = 0x17ABB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17ABBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ABB8u;
        // 0x17abbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17ABB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17ABC0u;
label_17abc0:
    // 0x17abc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17abc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_17abc4:
    // 0x17abc4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x17abc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_17abc8:
    // 0x17abc8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17abc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_17abcc:
    // 0x17abcc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17abccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_17abd0:
    // 0x17abd0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x17abd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17abd4:
    // 0x17abd4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x17abd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_17abd8:
    // 0x17abd8: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x17abd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_17abdc:
    // 0x17abdc: 0xc066d0a  jal         func_19B428
label_17abe0:
    if (ctx->pc == 0x17ABE0u) {
        ctx->pc = 0x17ABE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ABDCu;
        // 0x17abe0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17ABE4u;
        goto label_17abe4;
    }
    ctx->pc = 0x17ABDCu;
    SET_GPR_U32(ctx, 31, 0x17ABE4u);
    ctx->pc = 0x17ABE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17ABDCu;
    // 0x17abe0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B428u;
    { ctx->pc = 0x19b428; return; }
    ctx->pc = 0x17ABE4u;
label_17abe4:
    // 0x17abe4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x17abe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_17abe8:
    // 0x17abe8: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x17abe8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
label_17abec:
    // 0x17abec: 0x34650007  ori         $a1, $v1, 0x7
    ctx->pc = 0x17abecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)7);
label_17abf0:
    // 0x17abf0: 0x3c041100  lui         $a0, 0x1100
    ctx->pc = 0x17abf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4352 << 16));
label_17abf4:
    // 0x17abf4: 0x3c036c06  lui         $v1, 0x6C06
    ctx->pc = 0x17abf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27654 << 16));
label_17abf8:
    // 0x17abf8: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x17abf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_17abfc:
    // 0x17abfc: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x17abfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
label_17ac00:
    // 0x17ac00: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x17ac00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
label_17ac04:
    // 0x17ac04: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x17ac04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
label_17ac08:
    // 0x17ac08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17ac08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17ac0c:
    // 0x17ac0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17ac0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_17ac10:
    // 0x17ac10: 0xc07f198  jal         func_1FC660
label_17ac14:
    if (ctx->pc == 0x17AC14u) {
        ctx->pc = 0x17AC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AC10u;
        // 0x17ac14: 0x7c400010  sq          $zero, 0x10($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17AC18u;
        goto label_17ac18;
    }
    ctx->pc = 0x17AC10u;
    SET_GPR_U32(ctx, 31, 0x17AC18u);
    ctx->pc = 0x17AC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AC10u;
    // 0x17ac14: 0x7c400010  sq          $zero, 0x10($v0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC660u;
    { ctx->pc = 0x1fc660; return; }
    ctx->pc = 0x17AC18u;
label_17ac18:
    // 0x17ac18: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x17ac18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_17ac1c:
    // 0x17ac1c: 0xc07f190  jal         func_1FC640
label_17ac20:
    if (ctx->pc == 0x17AC20u) {
        ctx->pc = 0x17AC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AC1Cu;
        // 0x17ac20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17AC24u;
        goto label_17ac24;
    }
    ctx->pc = 0x17AC1Cu;
    SET_GPR_U32(ctx, 31, 0x17AC24u);
    ctx->pc = 0x17AC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AC1Cu;
    // 0x17ac20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC640u;
    { ctx->pc = 0x1fc640; return; }
    ctx->pc = 0x17AC24u;
label_17ac24:
    // 0x17ac24: 0x3c02313e  lui         $v0, 0x313E
    ctx->pc = 0x17ac24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12606 << 16));
label_17ac28:
    // 0x17ac28: 0x121980  sll         $v1, $s2, 6
    ctx->pc = 0x17ac28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
label_17ac2c:
    // 0x17ac2c: 0x3444c000  ori         $a0, $v0, 0xC000
    ctx->pc = 0x17ac2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
label_17ac30:
    // 0x17ac30: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x17ac30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
label_17ac34:
    // 0x17ac34: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x17ac34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
label_17ac38:
    // 0x17ac38: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x17ac38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_17ac3c:
    // 0x17ac3c: 0x7e000020  sq          $zero, 0x20($s0)
    ctx->pc = 0x17ac3cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 0));
label_17ac40:
    // 0x17ac40: 0x453025  or          $a2, $v0, $a1
    ctx->pc = 0x17ac40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_17ac44:
    // 0x17ac44: 0x24040412  addiu       $a0, $zero, 0x412
    ctx->pc = 0x17ac44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
label_17ac48:
    // 0x17ac48: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x17ac48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_17ac4c:
    // 0x17ac4c: 0xfe060020  sd          $a2, 0x20($s0)
    ctx->pc = 0x17ac4cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 6));
label_17ac50:
    // 0x17ac50: 0x24429bc0  addiu       $v0, $v0, -0x6440
    ctx->pc = 0x17ac50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941632));
label_17ac54:
    // 0x17ac54: 0xfe040028  sd          $a0, 0x28($s0)
    ctx->pc = 0x17ac54u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 4));
label_17ac58:
    // 0x17ac58: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x17ac58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17ac5c:
    // 0x17ac5c: 0xc066e2a  jal         func_19B8A8
label_17ac60:
    if (ctx->pc == 0x17AC60u) {
        ctx->pc = 0x17AC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AC5Cu;
        // 0x17ac60: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17AC64u;
        goto label_17ac64;
    }
    ctx->pc = 0x17AC5Cu;
    SET_GPR_U32(ctx, 31, 0x17AC64u);
    ctx->pc = 0x17AC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AC5Cu;
    // 0x17ac60: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8A8u;
    { ctx->pc = 0x19b8a8; return; }
    ctx->pc = 0x17AC64u;
label_17ac64:
    // 0x17ac64: 0x7e000070  sq          $zero, 0x70($s0)
    ctx->pc = 0x17ac64u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 112), GPR_VEC(ctx, 0));
label_17ac68:
    // 0x17ac68: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
label_17ac6c:
    if (ctx->pc == 0x17AC6Cu) {
        ctx->pc = 0x17AC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AC68u;
        // 0x17ac6c: 0xaf918410  sw          $s1, -0x7BF0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935568), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17AC70u;
        goto label_17ac70;
    }
    ctx->pc = 0x17AC68u;
    {
        const bool branch_taken_0x17ac68 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x17AC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AC68u;
        // 0x17ac6c: 0xaf918410  sw          $s1, -0x7BF0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935568), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ac68) {
            ctx->pc = 0x17AC8Cu;
            goto label_17ac8c;
        }
    }
    ctx->pc = 0x17AC70u;
label_17ac70:
    // 0x17ac70: 0x3c040300  lui         $a0, 0x300
    ctx->pc = 0x17ac70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)768 << 16));
label_17ac74:
    // 0x17ac74: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x17ac74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
label_17ac78:
    // 0x17ac78: 0x348400dc  ori         $a0, $a0, 0xDC
    ctx->pc = 0x17ac78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)220);
label_17ac7c:
    // 0x17ac7c: 0x34630192  ori         $v1, $v1, 0x192
    ctx->pc = 0x17ac7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)402);
label_17ac80:
    // 0x17ac80: 0xae040078  sw          $a0, 0x78($s0)
    ctx->pc = 0x17ac80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 4));
label_17ac84:
    // 0x17ac84: 0x10000012  b           . + 4 + (0x12 << 2)
label_17ac88:
    if (ctx->pc == 0x17AC88u) {
        ctx->pc = 0x17AC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AC84u;
        // 0x17ac88: 0xae03007c  sw          $v1, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17AC8Cu;
        goto label_17ac8c;
    }
    ctx->pc = 0x17AC84u;
    {
        const bool branch_taken_0x17ac84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AC84u;
        // 0x17ac88: 0xae03007c  sw          $v1, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ac84) {
            ctx->pc = 0x17ACD0u;
            goto label_17acd0;
        }
    }
    ctx->pc = 0x17AC8Cu;
label_17ac8c:
    // 0x17ac8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17ac8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17ac90:
    // 0x17ac90: 0x16230008  bne         $s1, $v1, . + 4 + (0x8 << 2)
label_17ac94:
    if (ctx->pc == 0x17AC94u) {
        ctx->pc = 0x17AC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AC90u;
        // 0x17ac94: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17AC98u;
        goto label_17ac98;
    }
    ctx->pc = 0x17AC90u;
    {
        const bool branch_taken_0x17ac90 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x17AC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AC90u;
        // 0x17ac94: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ac90) {
            ctx->pc = 0x17ACB4u;
            goto label_17acb4;
        }
    }
    ctx->pc = 0x17AC98u;
label_17ac98:
    // 0x17ac98: 0x3c040300  lui         $a0, 0x300
    ctx->pc = 0x17ac98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)768 << 16));
label_17ac9c:
    // 0x17ac9c: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x17ac9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
label_17aca0:
    // 0x17aca0: 0x348400b6  ori         $a0, $a0, 0xB6
    ctx->pc = 0x17aca0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)182);
label_17aca4:
    // 0x17aca4: 0x346301a5  ori         $v1, $v1, 0x1A5
    ctx->pc = 0x17aca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)421);
label_17aca8:
    // 0x17aca8: 0xae040078  sw          $a0, 0x78($s0)
    ctx->pc = 0x17aca8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 4));
label_17acac:
    // 0x17acac: 0x10000008  b           . + 4 + (0x8 << 2)
label_17acb0:
    if (ctx->pc == 0x17ACB0u) {
        ctx->pc = 0x17ACB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ACACu;
        // 0x17acb0: 0xae03007c  sw          $v1, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17ACB4u;
        goto label_17acb4;
    }
    ctx->pc = 0x17ACACu;
    {
        const bool branch_taken_0x17acac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17ACB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ACACu;
        // 0x17acb0: 0xae03007c  sw          $v1, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17acac) {
            ctx->pc = 0x17ACD0u;
            goto label_17acd0;
        }
    }
    ctx->pc = 0x17ACB4u;
label_17acb4:
    // 0x17acb4: 0x16230006  bne         $s1, $v1, . + 4 + (0x6 << 2)
label_17acb8:
    if (ctx->pc == 0x17ACB8u) {
        ctx->pc = 0x17ACB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ACB4u;
        // 0x17acb8: 0x3c040300  lui         $a0, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)768 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17ACBCu;
        goto label_17acbc;
    }
    ctx->pc = 0x17ACB4u;
    {
        const bool branch_taken_0x17acb4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x17ACB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ACB4u;
        // 0x17acb8: 0x3c040300  lui         $a0, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17acb4) {
            ctx->pc = 0x17ACD0u;
            goto label_17acd0;
        }
    }
    ctx->pc = 0x17ACBCu;
label_17acbc:
    // 0x17acbc: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x17acbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
label_17acc0:
    // 0x17acc0: 0x3484006c  ori         $a0, $a0, 0x6C
    ctx->pc = 0x17acc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)108);
label_17acc4:
    // 0x17acc4: 0x346301ca  ori         $v1, $v1, 0x1CA
    ctx->pc = 0x17acc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)458);
label_17acc8:
    // 0x17acc8: 0xae040078  sw          $a0, 0x78($s0)
    ctx->pc = 0x17acc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 4));
label_17accc:
    // 0x17accc: 0xae03007c  sw          $v1, 0x7C($s0)
    ctx->pc = 0x17acccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 3));
label_17acd0:
    // 0x17acd0: 0x3c031400  lui         $v1, 0x1400
    ctx->pc = 0x17acd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5120 << 16));
label_17acd4:
    // 0x17acd4: 0x346303f8  ori         $v1, $v1, 0x3F8
    ctx->pc = 0x17acd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1016);
label_17acd8:
    // 0x17acd8: 0xae030070  sw          $v1, 0x70($s0)
    ctx->pc = 0x17acd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 3));
label_17acdc:
    // 0x17acdc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x17acdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_17ace0:
    // 0x17ace0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17ace0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17ace4:
    // 0x17ace4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17ace4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17ace8:
    // 0x17ace8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17ace8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17acec:
    // 0x17acec: 0x3e00008  jr          $ra
label_17acf0:
    if (ctx->pc == 0x17ACF0u) {
        ctx->pc = 0x17ACF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ACECu;
        // 0x17acf0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17ACF4u;
        goto label_17acf4;
    }
    ctx->pc = 0x17ACECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17ACF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ACECu;
        // 0x17acf0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17ACECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17ACF4u;
label_17acf4:
    // 0x17acf4: 0x0  nop
    ctx->pc = 0x17acf4u;
    // NOP
label_17acf8:
    // 0x17acf8: 0x0  nop
    ctx->pc = 0x17acf8u;
    // NOP
label_17acfc:
    // 0x17acfc: 0x0  nop
    ctx->pc = 0x17acfcu;
    // NOP
label_17ad00:
    // 0x17ad00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17ad00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_17ad04:
    // 0x17ad04: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x17ad04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_17ad08:
    // 0x17ad08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17ad08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_17ad0c:
    // 0x17ad0c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x17ad0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_17ad10:
    // 0x17ad10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17ad10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_17ad14:
    // 0x17ad14: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x17ad14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
label_17ad18:
    // 0x17ad18: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x17ad18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_17ad1c:
    // 0x17ad1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17ad1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17ad20:
    // 0x17ad20: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x17ad20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_17ad24:
    // 0x17ad24: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x17ad24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_17ad28:
    // 0x17ad28: 0xc066d0a  jal         func_19B428
label_17ad2c:
    if (ctx->pc == 0x17AD2Cu) {
        ctx->pc = 0x17AD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AD28u;
        // 0x17ad2c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17AD30u;
        goto label_17ad30;
    }
    ctx->pc = 0x17AD28u;
    SET_GPR_U32(ctx, 31, 0x17AD30u);
    ctx->pc = 0x17AD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AD28u;
    // 0x17ad2c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B428u;
    { ctx->pc = 0x19b428; return; }
    ctx->pc = 0x17AD30u;
label_17ad30:
    // 0x17ad30: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x17ad30u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
label_17ad34:
    // 0x17ad34: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x17ad34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_17ad38:
    // 0x17ad38: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x17ad38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_17ad3c:
    // 0x17ad3c: 0xfc400008  sd          $zero, 0x8($v0)
    ctx->pc = 0x17ad3cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 0));
label_17ad40:
    // 0x17ad40: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x17ad40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_17ad44:
    // 0x17ad44: 0x7c400010  sq          $zero, 0x10($v0)
    ctx->pc = 0x17ad44u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 0));
label_17ad48:
    // 0x17ad48: 0x3c031100  lui         $v1, 0x1100
    ctx->pc = 0x17ad48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4352 << 16));
label_17ad4c:
    // 0x17ad4c: 0xaf908410  sw          $s0, -0x7BF0($gp)
    ctx->pc = 0x17ad4cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935568), GPR_U32(ctx, 16));
label_17ad50:
    // 0x17ad50: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
label_17ad54:
    if (ctx->pc == 0x17AD54u) {
        ctx->pc = 0x17AD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AD50u;
        // 0x17ad54: 0xac430010  sw          $v1, 0x10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17AD58u;
        goto label_17ad58;
    }
    ctx->pc = 0x17AD50u;
    {
        const bool branch_taken_0x17ad50 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x17AD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AD50u;
        // 0x17ad54: 0xac430010  sw          $v1, 0x10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ad50) {
            ctx->pc = 0x17AD74u;
            goto label_17ad74;
        }
    }
    ctx->pc = 0x17AD58u;
label_17ad58:
    // 0x17ad58: 0x3c040300  lui         $a0, 0x300
    ctx->pc = 0x17ad58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)768 << 16));
label_17ad5c:
    // 0x17ad5c: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x17ad5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
label_17ad60:
    // 0x17ad60: 0x348400dc  ori         $a0, $a0, 0xDC
    ctx->pc = 0x17ad60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)220);
label_17ad64:
    // 0x17ad64: 0x34630192  ori         $v1, $v1, 0x192
    ctx->pc = 0x17ad64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)402);
label_17ad68:
    // 0x17ad68: 0xac440014  sw          $a0, 0x14($v0)
    ctx->pc = 0x17ad68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 4));
label_17ad6c:
    // 0x17ad6c: 0x10000012  b           . + 4 + (0x12 << 2)
label_17ad70:
    if (ctx->pc == 0x17AD70u) {
        ctx->pc = 0x17AD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AD6Cu;
        // 0x17ad70: 0xac430018  sw          $v1, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17AD74u;
        goto label_17ad74;
    }
    ctx->pc = 0x17AD6Cu;
    {
        const bool branch_taken_0x17ad6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AD6Cu;
        // 0x17ad70: 0xac430018  sw          $v1, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ad6c) {
            ctx->pc = 0x17ADB8u;
            goto label_17adb8;
        }
    }
    ctx->pc = 0x17AD74u;
label_17ad74:
    // 0x17ad74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17ad74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17ad78:
    // 0x17ad78: 0x16030008  bne         $s0, $v1, . + 4 + (0x8 << 2)
label_17ad7c:
    if (ctx->pc == 0x17AD7Cu) {
        ctx->pc = 0x17AD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AD78u;
        // 0x17ad7c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17AD80u;
        goto label_17ad80;
    }
    ctx->pc = 0x17AD78u;
    {
        const bool branch_taken_0x17ad78 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x17AD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AD78u;
        // 0x17ad7c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ad78) {
            ctx->pc = 0x17AD9Cu;
            goto label_17ad9c;
        }
    }
    ctx->pc = 0x17AD80u;
label_17ad80:
    // 0x17ad80: 0x3c040300  lui         $a0, 0x300
    ctx->pc = 0x17ad80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)768 << 16));
label_17ad84:
    // 0x17ad84: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x17ad84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
label_17ad88:
    // 0x17ad88: 0x348400b6  ori         $a0, $a0, 0xB6
    ctx->pc = 0x17ad88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)182);
label_17ad8c:
    // 0x17ad8c: 0x346301a5  ori         $v1, $v1, 0x1A5
    ctx->pc = 0x17ad8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)421);
label_17ad90:
    // 0x17ad90: 0xac440014  sw          $a0, 0x14($v0)
    ctx->pc = 0x17ad90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 4));
label_17ad94:
    // 0x17ad94: 0x10000008  b           . + 4 + (0x8 << 2)
label_17ad98:
    if (ctx->pc == 0x17AD98u) {
        ctx->pc = 0x17AD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AD94u;
        // 0x17ad98: 0xac430018  sw          $v1, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17AD9Cu;
        goto label_17ad9c;
    }
    ctx->pc = 0x17AD94u;
    {
        const bool branch_taken_0x17ad94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AD94u;
        // 0x17ad98: 0xac430018  sw          $v1, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ad94) {
            ctx->pc = 0x17ADB8u;
            goto label_17adb8;
        }
    }
    ctx->pc = 0x17AD9Cu;
label_17ad9c:
    // 0x17ad9c: 0x16030006  bne         $s0, $v1, . + 4 + (0x6 << 2)
label_17ada0:
    if (ctx->pc == 0x17ADA0u) {
        ctx->pc = 0x17ADA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AD9Cu;
        // 0x17ada0: 0x3c040300  lui         $a0, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)768 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17ADA4u;
        goto label_17ada4;
    }
    ctx->pc = 0x17AD9Cu;
    {
        const bool branch_taken_0x17ad9c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x17ADA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AD9Cu;
        // 0x17ada0: 0x3c040300  lui         $a0, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ad9c) {
            ctx->pc = 0x17ADB8u;
            goto label_17adb8;
        }
    }
    ctx->pc = 0x17ADA4u;
label_17ada4:
    // 0x17ada4: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x17ada4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
label_17ada8:
    // 0x17ada8: 0x3484006c  ori         $a0, $a0, 0x6C
    ctx->pc = 0x17ada8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)108);
label_17adac:
    // 0x17adac: 0x346301ca  ori         $v1, $v1, 0x1CA
    ctx->pc = 0x17adacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)458);
label_17adb0:
    // 0x17adb0: 0xac440014  sw          $a0, 0x14($v0)
    ctx->pc = 0x17adb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 4));
label_17adb4:
    // 0x17adb4: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x17adb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
label_17adb8:
    // 0x17adb8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17adb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17adbc:
    // 0x17adbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17adbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17adc0:
    // 0x17adc0: 0x3e00008  jr          $ra
label_17adc4:
    if (ctx->pc == 0x17ADC4u) {
        ctx->pc = 0x17ADC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ADC0u;
        // 0x17adc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17ADC8u;
        goto label_17adc8;
    }
    ctx->pc = 0x17ADC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17ADC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ADC0u;
        // 0x17adc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17ADC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17ADC8u;
label_17adc8:
    // 0x17adc8: 0x0  nop
    ctx->pc = 0x17adc8u;
    // NOP
label_17adcc:
    // 0x17adcc: 0x0  nop
    ctx->pc = 0x17adccu;
    // NOP
label_17add0:
    // 0x17add0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17add0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_17add4:
    // 0x17add4: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x17add4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_17add8:
    // 0x17add8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x17add8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_17addc:
    // 0x17addc: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x17addcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_17ade0:
    // 0x17ade0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17ade0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_17ade4:
    // 0x17ade4: 0x34633ffc  ori         $v1, $v1, 0x3FFC
    ctx->pc = 0x17ade4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16380);
label_17ade8:
    // 0x17ade8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17ade8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_17adec:
    // 0x17adec: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x17adecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
label_17adf0:
    // 0x17adf0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17adf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_17adf4:
    // 0x17adf4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x17adf4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17adf8:
    // 0x17adf8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x17adf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_17adfc:
    // 0x17adfc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17adfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17ae00:
    // 0x17ae00: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x17ae00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_17ae04:
    // 0x17ae04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17ae04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17ae08:
    // 0x17ae08: 0x2813c  dsll32      $s0, $v0, 4
    ctx->pc = 0x17ae08u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 4));
label_17ae0c:
    // 0x17ae0c: 0x10813e  dsrl32      $s0, $s0, 4
    ctx->pc = 0x17ae0cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 4));
label_17ae10:
    // 0x17ae10: 0xc066c5c  jal         func_19B170
label_17ae14:
    if (ctx->pc == 0x17AE14u) {
        ctx->pc = 0x17AE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AE10u;
        // 0x17ae14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17AE18u;
        goto label_17ae18;
    }
    ctx->pc = 0x17AE10u;
    SET_GPR_U32(ctx, 31, 0x17AE18u);
    ctx->pc = 0x17AE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AE10u;
    // 0x17ae14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B170u;
    { ctx->pc = 0x19b170; return; }
    ctx->pc = 0x17AE18u;
label_17ae18:
    // 0x17ae18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17ae18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17ae1c:
    // 0x17ae1c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17ae1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_17ae20:
    // 0x17ae20: 0xc066d10  jal         func_19B440
label_17ae24:
    if (ctx->pc == 0x17AE24u) {
        ctx->pc = 0x17AE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AE20u;
        // 0x17ae24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17AE28u;
        goto label_17ae28;
    }
    ctx->pc = 0x17AE20u;
    SET_GPR_U32(ctx, 31, 0x17AE28u);
    ctx->pc = 0x17AE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AE20u;
    // 0x17ae24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B440u;
    { ctx->pc = 0x19b440; return; }
    ctx->pc = 0x17AE28u;
label_17ae28:
    // 0x17ae28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17ae28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17ae2c:
    // 0x17ae2c: 0xc066d30  jal         func_19B4C0
label_17ae30:
    if (ctx->pc == 0x17AE30u) {
        ctx->pc = 0x17AE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AE2Cu;
        // 0x17ae30: 0x3c051100  lui         $a1, 0x1100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4352 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17AE34u;
        goto label_17ae34;
    }
    ctx->pc = 0x17AE2Cu;
    SET_GPR_U32(ctx, 31, 0x17AE34u);
    ctx->pc = 0x17AE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AE2Cu;
    // 0x17ae30: 0x3c051100  lui         $a1, 0x1100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4352 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B4C0u;
    { ctx->pc = 0x19b4c0; return; }
    ctx->pc = 0x17AE34u;
label_17ae34:
    // 0x17ae34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17ae34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17ae38:
    // 0x17ae38: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17ae38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_17ae3c:
    // 0x17ae3c: 0xc066d10  jal         func_19B440
label_17ae40:
    if (ctx->pc == 0x17AE40u) {
        ctx->pc = 0x17AE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AE3Cu;
        // 0x17ae40: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17AE44u;
        goto label_17ae44;
    }
    ctx->pc = 0x17AE3Cu;
    SET_GPR_U32(ctx, 31, 0x17AE44u);
    ctx->pc = 0x17AE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AE3Cu;
    // 0x17ae40: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B440u;
    { ctx->pc = 0x19b440; return; }
    ctx->pc = 0x17AE44u;
label_17ae44:
    // 0x17ae44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17ae44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17ae48:
    // 0x17ae48: 0xc066ce8  jal         func_19B3A0
label_17ae4c:
    if (ctx->pc == 0x17AE4Cu) {
        ctx->pc = 0x17AE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AE48u;
        // 0x17ae4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17AE50u;
        goto label_17ae50;
    }
    ctx->pc = 0x17AE48u;
    SET_GPR_U32(ctx, 31, 0x17AE50u);
    ctx->pc = 0x17AE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AE48u;
    // 0x17ae4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B3A0u;
    { ctx->pc = 0x19b3a0; return; }
    ctx->pc = 0x17AE50u;
label_17ae50:
    // 0x17ae50: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x17ae50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_17ae54:
    // 0x17ae54: 0x34038003  ori         $v1, $zero, 0x8003
    ctx->pc = 0x17ae54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32771);
label_17ae58:
    // 0x17ae58: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x17ae58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_17ae5c:
    // 0x17ae5c: 0x27b10048  addiu       $s1, $sp, 0x48
    ctx->pc = 0x17ae5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_17ae60:
    // 0x17ae60: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x17ae60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_17ae64:
    // 0x17ae64: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x17ae64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_17ae68:
    // 0x17ae68: 0xffa30040  sd          $v1, 0x40($sp)
    ctx->pc = 0x17ae68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 3));
label_17ae6c:
    // 0x17ae6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17ae6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17ae70:
    // 0x17ae70: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x17ae70u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
label_17ae74:
    // 0x17ae74: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x17ae74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_17ae78:
    // 0x17ae78: 0xc066d5c  jal         func_19B570
label_17ae7c:
    if (ctx->pc == 0x17AE7Cu) {
        ctx->pc = 0x17AE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AE78u;
        // 0x17ae7c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17AE80u;
        goto label_17ae80;
    }
    ctx->pc = 0x17AE78u;
    SET_GPR_U32(ctx, 31, 0x17AE80u);
    ctx->pc = 0x17AE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AE78u;
    // 0x17ae7c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B570u;
    { ctx->pc = 0x19b570; return; }
    ctx->pc = 0x17AE80u;
label_17ae80:
    // 0x17ae80: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x17ae80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_17ae84:
    // 0x17ae84: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x17ae84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_17ae88:
    // 0x17ae88: 0xffa30040  sd          $v1, 0x40($sp)
    ctx->pc = 0x17ae88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 3));
label_17ae8c:
    // 0x17ae8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17ae8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17ae90:
    // 0x17ae90: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x17ae90u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
label_17ae94:
    // 0x17ae94: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x17ae94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_17ae98:
    // 0x17ae98: 0xc066d5c  jal         func_19B570
label_17ae9c:
    if (ctx->pc == 0x17AE9Cu) {
        ctx->pc = 0x17AE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AE98u;
        // 0x17ae9c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17AEA0u;
        goto label_17aea0;
    }
    ctx->pc = 0x17AE98u;
    SET_GPR_U32(ctx, 31, 0x17AEA0u);
    ctx->pc = 0x17AE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AE98u;
    // 0x17ae9c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B570u;
    { ctx->pc = 0x19b570; return; }
    ctx->pc = 0x17AEA0u;
label_17aea0:
    // 0x17aea0: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x17aea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_17aea4:
    // 0x17aea4: 0x24020043  addiu       $v0, $zero, 0x43
    ctx->pc = 0x17aea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
label_17aea8:
    // 0x17aea8: 0xffa30040  sd          $v1, 0x40($sp)
    ctx->pc = 0x17aea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 3));
label_17aeac:
    // 0x17aeac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17aeacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17aeb0:
    // 0x17aeb0: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x17aeb0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
label_17aeb4:
    // 0x17aeb4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x17aeb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_17aeb8:
    // 0x17aeb8: 0xc066d5c  jal         func_19B570
label_17aebc:
    if (ctx->pc == 0x17AEBCu) {
        ctx->pc = 0x17AEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AEB8u;
        // 0x17aebc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17AEC0u;
        goto label_17aec0;
    }
    ctx->pc = 0x17AEB8u;
    SET_GPR_U32(ctx, 31, 0x17AEC0u);
    ctx->pc = 0x17AEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AEB8u;
    // 0x17aebc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B570u;
    { ctx->pc = 0x19b570; return; }
    ctx->pc = 0x17AEC0u;
label_17aec0:
    // 0x17aec0: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x17aec0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
label_17aec4:
    // 0x17aec4: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x17aec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_17aec8:
    // 0x17aec8: 0x34631ff9  ori         $v1, $v1, 0x1FF9
    ctx->pc = 0x17aec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8185);
label_17aecc:
    // 0x17aecc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17aeccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17aed0:
    // 0x17aed0: 0xffa30040  sd          $v1, 0x40($sp)
    ctx->pc = 0x17aed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 3));
label_17aed4:
    // 0x17aed4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x17aed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_17aed8:
    // 0x17aed8: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x17aed8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
label_17aedc:
    // 0x17aedc: 0xc066d5c  jal         func_19B570
label_17aee0:
    if (ctx->pc == 0x17AEE0u) {
        ctx->pc = 0x17AEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AEDCu;
        // 0x17aee0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17AEE4u;
        goto label_17aee4;
    }
    ctx->pc = 0x17AEDCu;
    SET_GPR_U32(ctx, 31, 0x17AEE4u);
    ctx->pc = 0x17AEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AEDCu;
    // 0x17aee0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B570u;
    { ctx->pc = 0x19b570; return; }
    ctx->pc = 0x17AEE4u;
label_17aee4:
    // 0x17aee4: 0xc066cfe  jal         func_19B3F8
label_17aee8:
    if (ctx->pc == 0x17AEE8u) {
        ctx->pc = 0x17AEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AEE4u;
        // 0x17aee8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17AEECu;
        goto label_17aeec;
    }
    ctx->pc = 0x17AEE4u;
    SET_GPR_U32(ctx, 31, 0x17AEECu);
    ctx->pc = 0x17AEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AEE4u;
    // 0x17aee8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B3F8u;
    { ctx->pc = 0x19b3f8; return; }
    ctx->pc = 0x17AEECu;
label_17aeec:
    // 0x17aeec: 0xc066c46  jal         func_19B118
label_17aef0:
    if (ctx->pc == 0x17AEF0u) {
        ctx->pc = 0x17AEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AEECu;
        // 0x17aef0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17AEF4u;
        goto label_17aef4;
    }
    ctx->pc = 0x17AEECu;
    SET_GPR_U32(ctx, 31, 0x17AEF4u);
    ctx->pc = 0x17AEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AEECu;
    // 0x17aef0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B118u;
    { ctx->pc = 0x19b118; return; }
    ctx->pc = 0x17AEF4u;
label_17aef4:
    // 0x17aef4: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x17aef4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
label_17aef8:
    // 0x17aef8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17aef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17aefc:
    // 0x17aefc: 0x24a521b0  addiu       $a1, $a1, 0x21B0
    ctx->pc = 0x17aefcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8624));
label_17af00:
    // 0x17af00: 0x24060085  addiu       $a2, $zero, 0x85
    ctx->pc = 0x17af00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
label_17af04:
    // 0x17af04: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17af04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17af08:
    // 0x17af08: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17af08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17af0c:
    // 0x17af0c: 0xc066c72  jal         func_19B1C8
label_17af10:
    if (ctx->pc == 0x17AF10u) {
        ctx->pc = 0x17AF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AF0Cu;
        // 0x17af10: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17AF14u;
        goto label_17af14;
    }
    ctx->pc = 0x17AF0Cu;
    SET_GPR_U32(ctx, 31, 0x17AF14u);
    ctx->pc = 0x17AF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AF0Cu;
    // 0x17af10: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x17AF14u;
label_17af14:
    // 0x17af14: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x17af14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_17af18:
    // 0x17af18: 0x121980  sll         $v1, $s2, 6
    ctx->pc = 0x17af18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
label_17af1c:
    // 0x17af1c: 0x8c2b3ffc  lw          $t3, 0x3FFC($at)
    ctx->pc = 0x17af1cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_17af20:
    // 0x17af20: 0x721823  subu        $v1, $v1, $s2
    ctx->pc = 0x17af20u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_17af24:
    // 0x17af24: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x17af24u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_17af28:
    // 0x17af28: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x17af28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_17af2c:
    // 0x17af2c: 0xd23821  addu        $a3, $a2, $s2
    ctx->pc = 0x17af2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
label_17af30:
    // 0x17af30: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x17af30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_17af34:
    // 0x17af34: 0x74140  sll         $t0, $a3, 5
    ctx->pc = 0x17af34u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
label_17af38:
    // 0x17af38: 0x24a55280  addiu       $a1, $a1, 0x5280
    ctx->pc = 0x17af38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21120));
label_17af3c:
    // 0x17af3c: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x17af3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_17af40:
    // 0x17af40: 0x24635270  addiu       $v1, $v1, 0x5270
    ctx->pc = 0x17af40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21104));
label_17af44:
    // 0x17af44: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x17af44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_17af48:
    // 0x17af48: 0x8f828754  lw          $v0, -0x78AC($gp)
    ctx->pc = 0x17af48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936404)));
label_17af4c:
    // 0x17af4c: 0xb4980  sll         $t1, $t3, 6
    ctx->pc = 0x17af4cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 11), 6));
label_17af50:
    // 0x17af50: 0x24a50000  addiu       $a1, $a1, 0x0
    ctx->pc = 0x17af50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 0));
label_17af54:
    // 0x17af54: 0x12b5023  subu        $t2, $t1, $t3
    ctx->pc = 0x17af54u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
label_17af58:
    // 0x17af58: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x17af58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_17af5c:
    // 0x17af5c: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x17af5cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
label_17af60:
    // 0x17af60: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x17af60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_17af64:
    // 0x17af64: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x17af64u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_17af68:
    // 0x17af68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17af68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17af6c:
    // 0x17af6c: 0xa5100  sll         $t2, $t2, 4
    ctx->pc = 0x17af6cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
label_17af70:
    // 0x17af70: 0x240600fd  addiu       $a2, $zero, 0xFD
    ctx->pc = 0x17af70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 253));
label_17af74:
    // 0x17af74: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x17af74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
label_17af78:
    // 0x17af78: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17af78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17af7c:
    // 0x17af7c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x17af7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_17af80:
    // 0x17af80: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17af80u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17af84:
    // 0x17af84: 0x8c253ffc  lw          $a1, 0x3FFC($at)
    ctx->pc = 0x17af84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_17af88:
    // 0x17af88: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17af88u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17af8c:
    // 0x17af8c: 0x51180  sll         $v0, $a1, 6
    ctx->pc = 0x17af8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_17af90:
    // 0x17af90: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x17af90u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_17af94:
    // 0x17af94: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17af94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_17af98:
    // 0x17af98: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x17af98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_17af9c:
    // 0x17af9c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x17af9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_17afa0:
    // 0x17afa0: 0xc066c72  jal         func_19B1C8
label_17afa4:
    if (ctx->pc == 0x17AFA4u) {
        ctx->pc = 0x17AFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AFA0u;
        // 0x17afa4: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17AFA8u;
        goto label_17afa8;
    }
    ctx->pc = 0x17AFA0u;
    SET_GPR_U32(ctx, 31, 0x17AFA8u);
    ctx->pc = 0x17AFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AFA0u;
    // 0x17afa4: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x17AFA8u;
label_17afa8:
    // 0x17afa8: 0xaf808754  sw          $zero, -0x78AC($gp)
    ctx->pc = 0x17afa8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936404), GPR_U32(ctx, 0));
label_17afac:
    // 0x17afac: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x17afacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_17afb0:
    // 0x17afb0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17afb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17afb4:
    // 0x17afb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17afb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17afb8:
    // 0x17afb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17afb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17afbc:
    // 0x17afbc: 0x3e00008  jr          $ra
label_17afc0:
    if (ctx->pc == 0x17AFC0u) {
        ctx->pc = 0x17AFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AFBCu;
        // 0x17afc0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17AFC4u;
        goto label_17afc4;
    }
    ctx->pc = 0x17AFBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AFBCu;
        // 0x17afc0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17AFBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17AFC4u;
label_17afc4:
    // 0x17afc4: 0x0  nop
    ctx->pc = 0x17afc4u;
    // NOP
label_17afc8:
    // 0x17afc8: 0x0  nop
    ctx->pc = 0x17afc8u;
    // NOP
label_17afcc:
    // 0x17afcc: 0x0  nop
    ctx->pc = 0x17afccu;
    // NOP
label_17afd0:
    // 0x17afd0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x17afd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_17afd4:
    // 0x17afd4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x17afd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_17afd8:
    // 0x17afd8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x17afd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_17afdc:
    // 0x17afdc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17afdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_17afe0:
    // 0x17afe0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17afe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_17afe4:
    // 0x17afe4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17afe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_17afe8:
    // 0x17afe8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17afe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_17afec:
    // 0x17afec: 0x8f938754  lw          $s3, -0x78AC($gp)
    ctx->pc = 0x17afecu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936404)));
label_17aff0:
    // 0x17aff0: 0x2e620032  sltiu       $v0, $s3, 0x32
    ctx->pc = 0x17aff0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)50) ? 1 : 0);
label_17aff4:
    // 0x17aff4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_17aff8:
    if (ctx->pc == 0x17AFF8u) {
        ctx->pc = 0x17AFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AFF4u;
        // 0x17aff8: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17AFFCu;
        goto label_17affc;
    }
    ctx->pc = 0x17AFF4u;
    {
        const bool branch_taken_0x17aff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17AFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AFF4u;
        // 0x17aff8: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17aff4) {
            ctx->pc = 0x17B004u;
            goto label_17b004;
        }
    }
    ctx->pc = 0x17AFFCu;
label_17affc:
    // 0x17affc: 0x10000058  b           . + 4 + (0x58 << 2)
label_17b000:
    if (ctx->pc == 0x17B000u) {
        ctx->pc = 0x17B000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AFFCu;
        // 0x17b000: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B004u;
        goto label_17b004;
    }
    ctx->pc = 0x17AFFCu;
    {
        const bool branch_taken_0x17affc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AFFCu;
        // 0x17b000: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17affc) {
            ctx->pc = 0x17B160u;
            goto label_17b160;
        }
    }
    ctx->pc = 0x17B004u;
label_17b004:
    // 0x17b004: 0xc6800030  lwc1        $f0, 0x30($s4)
    ctx->pc = 0x17b004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17b008:
    // 0x17b008: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17b008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_17b00c:
    // 0x17b00c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x17b00cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17b010:
    // 0x17b010: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x17b010u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17b014:
    // 0x17b014: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x17b014u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17b018:
    // 0x17b018: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x17b018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_17b01c:
    // 0x17b01c: 0xc6800034  lwc1        $f0, 0x34($s4)
    ctx->pc = 0x17b01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17b020:
    // 0x17b020: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x17b020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_17b024:
    // 0x17b024: 0xc6800038  lwc1        $f0, 0x38($s4)
    ctx->pc = 0x17b024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17b028:
    // 0x17b028: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x17b028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_17b02c:
    // 0x17b02c: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x17b02cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
label_17b030:
    // 0x17b030: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17b030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17b034:
    // 0x17b034: 0xc045200  jal         func_114800
label_17b038:
    if (ctx->pc == 0x17B038u) {
        ctx->pc = 0x17B038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B034u;
        // 0x17b038: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B03Cu;
        goto label_17b03c;
    }
    ctx->pc = 0x17B034u;
    SET_GPR_U32(ctx, 31, 0x17B03Cu);
    ctx->pc = 0x17B038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B034u;
    // 0x17b038: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114800u, 0x17B034u, 0x17B03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B03Cu;
label_17b03c:
    // 0x17b03c: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
label_17b040:
    if (ctx->pc == 0x17B040u) {
        ctx->pc = 0x17B040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B03Cu;
        // 0x17b040: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B044u;
        goto label_17b044;
    }
    ctx->pc = 0x17B03Cu;
    {
        const bool branch_taken_0x17b03c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B03Cu;
        // 0x17b040: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b03c) {
            ctx->pc = 0x17B0FCu;
            goto label_17b0fc;
        }
    }
    ctx->pc = 0x17B044u;
label_17b044:
    // 0x17b044: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x17b044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_17b048:
    // 0x17b048: 0x34633ffc  ori         $v1, $v1, 0x3FFC
    ctx->pc = 0x17b048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16380);
label_17b04c:
    // 0x17b04c: 0x24425270  addiu       $v0, $v0, 0x5270
    ctx->pc = 0x17b04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21104));
label_17b050:
    // 0x17b050: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x17b050u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_17b054:
    // 0x17b054: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x17b054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_17b058:
    // 0x17b058: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x17b058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_17b05c:
    // 0x17b05c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x17b05cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_17b060:
    // 0x17b060: 0x62180  sll         $a0, $a2, 6
    ctx->pc = 0x17b060u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_17b064:
    // 0x17b064: 0x131980  sll         $v1, $s3, 6
    ctx->pc = 0x17b064u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
label_17b068:
    // 0x17b068: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x17b068u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_17b06c:
    // 0x17b06c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x17b06cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_17b070:
    // 0x17b070: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x17b070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_17b074:
    // 0x17b074: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x17b074u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_17b078:
    // 0x17b078: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x17b078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_17b07c:
    // 0x17b07c: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x17b07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_17b080:
    // 0x17b080: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17b080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17b084:
    // 0x17b084: 0xc066e2a  jal         func_19B8A8
label_17b088:
    if (ctx->pc == 0x17B088u) {
        ctx->pc = 0x17B088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B084u;
        // 0x17b088: 0x24440020  addiu       $a0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B08Cu;
        goto label_17b08c;
    }
    ctx->pc = 0x17B084u;
    SET_GPR_U32(ctx, 31, 0x17B08Cu);
    ctx->pc = 0x17B088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B084u;
    // 0x17b088: 0x24440020  addiu       $a0, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8A8u;
    { ctx->pc = 0x19b8a8; return; }
    ctx->pc = 0x17B08Cu;
label_17b08c:
    // 0x17b08c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x17b08cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_17b090:
    // 0x17b090: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x17b090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_17b094:
    // 0x17b094: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x17b094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_17b098:
    // 0x17b098: 0x132100  sll         $a0, $s3, 4
    ctx->pc = 0x17b098u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_17b09c:
    // 0x17b09c: 0x24425270  addiu       $v0, $v0, 0x5270
    ctx->pc = 0x17b09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21104));
label_17b0a0:
    // 0x17b0a0: 0xdf8588c8  ld          $a1, -0x7738($gp)
    ctx->pc = 0x17b0a0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294936776)));
label_17b0a4:
    // 0x17b0a4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x17b0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_17b0a8:
    // 0x17b0a8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x17b0a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17b0ac:
    // 0x17b0ac: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x17b0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_17b0b0:
    // 0x17b0b0: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x17b0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_17b0b4:
    // 0x17b0b4: 0x523021  addu        $a2, $v0, $s2
    ctx->pc = 0x17b0b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_17b0b8:
    // 0x17b0b8: 0x31180  sll         $v0, $v1, 6
    ctx->pc = 0x17b0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_17b0bc:
    // 0x17b0bc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x17b0bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_17b0c0:
    // 0x17b0c0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x17b0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17b0c4:
    // 0x17b0c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17b0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_17b0c8:
    // 0x17b0c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17b0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17b0cc:
    // 0x17b0cc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x17b0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_17b0d0:
    // 0x17b0d0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x17b0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_17b0d4:
    // 0x17b0d4: 0xfc450ca0  sd          $a1, 0xCA0($v0)
    ctx->pc = 0x17b0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 3232), GPR_U64(ctx, 5));
label_17b0d8:
    // 0x17b0d8: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x17b0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_17b0dc:
    // 0x17b0dc: 0x31180  sll         $v0, $v1, 6
    ctx->pc = 0x17b0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_17b0e0:
    // 0x17b0e0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x17b0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17b0e4:
    // 0x17b0e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17b0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_17b0e8:
    // 0x17b0e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17b0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17b0ec:
    // 0x17b0ec: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x17b0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_17b0f0:
    // 0x17b0f0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x17b0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_17b0f4:
    // 0x17b0f4: 0x10000012  b           . + 4 + (0x12 << 2)
label_17b0f8:
    if (ctx->pc == 0x17B0F8u) {
        ctx->pc = 0x17B0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B0F4u;
        // 0x17b0f8: 0xfc440ca8  sd          $a0, 0xCA8($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 3240), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B0FCu;
        goto label_17b0fc;
    }
    ctx->pc = 0x17B0F4u;
    {
        const bool branch_taken_0x17b0f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B0F4u;
        // 0x17b0f8: 0xfc440ca8  sd          $a0, 0xCA8($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 3240), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b0f4) {
            ctx->pc = 0x17B140u;
            goto label_17b140;
        }
    }
    ctx->pc = 0x17B0FCu;
label_17b0fc:
    // 0x17b0fc: 0x0  nop
    ctx->pc = 0x17b0fcu;
    // NOP
label_17b100:
    // 0x17b100: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x17b100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_17b104:
    // 0x17b104: 0x8c243ffc  lw          $a0, 0x3FFC($at)
    ctx->pc = 0x17b104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_17b108:
    // 0x17b108: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x17b108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_17b10c:
    // 0x17b10c: 0x131980  sll         $v1, $s3, 6
    ctx->pc = 0x17b10cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
label_17b110:
    // 0x17b110: 0x24425270  addiu       $v0, $v0, 0x5270
    ctx->pc = 0x17b110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21104));
label_17b114:
    // 0x17b114: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17b114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17b118:
    // 0x17b118: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x17b118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_17b11c:
    // 0x17b11c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x17b11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_17b120:
    // 0x17b120: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x17b120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_17b124:
    // 0x17b124: 0x41980  sll         $v1, $a0, 6
    ctx->pc = 0x17b124u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_17b128:
    // 0x17b128: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x17b128u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_17b12c:
    // 0x17b12c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x17b12cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_17b130:
    // 0x17b130: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17b130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_17b134:
    // 0x17b134: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x17b134u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_17b138:
    // 0x17b138: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17b138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17b13c:
    // 0x17b13c: 0xac40005c  sw          $zero, 0x5C($v0)
    ctx->pc = 0x17b13cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 0));
label_17b140:
    // 0x17b140: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x17b140u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_17b144:
    // 0x17b144: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x17b144u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_17b148:
    // 0x17b148: 0x1440ffb9  bnez        $v0, . + 4 + (-0x47 << 2)
label_17b14c:
    if (ctx->pc == 0x17B14Cu) {
        ctx->pc = 0x17B14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B148u;
        // 0x17b14c: 0x26521fa0  addiu       $s2, $s2, 0x1FA0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B150u;
        goto label_17b150;
    }
    ctx->pc = 0x17B148u;
    {
        const bool branch_taken_0x17b148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B148u;
        // 0x17b14c: 0x26521fa0  addiu       $s2, $s2, 0x1FA0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b148) {
            ctx->pc = 0x17B030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17b030;
        }
    }
    ctx->pc = 0x17B150u;
label_17b150:
    // 0x17b150: 0x8f838754  lw          $v1, -0x78AC($gp)
    ctx->pc = 0x17b150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936404)));
label_17b154:
    // 0x17b154: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17b154u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17b158:
    // 0x17b158: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x17b158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_17b15c:
    // 0x17b15c: 0xaf838754  sw          $v1, -0x78AC($gp)
    ctx->pc = 0x17b15cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936404), GPR_U32(ctx, 3));
label_17b160:
    // 0x17b160: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x17b160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_17b164:
    // 0x17b164: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x17b164u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_17b168:
    // 0x17b168: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17b168u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_17b16c:
    // 0x17b16c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17b16cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17b170:
    // 0x17b170: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17b170u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17b174:
    // 0x17b174: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17b174u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17b178:
    // 0x17b178: 0x3e00008  jr          $ra
label_17b17c:
    if (ctx->pc == 0x17B17Cu) {
        ctx->pc = 0x17B17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B178u;
        // 0x17b17c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B180u;
        goto label_17b180;
    }
    ctx->pc = 0x17B178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B178u;
        // 0x17b17c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B180u;
label_17b180:
    // 0x17b180: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x17b180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_17b184:
    // 0x17b184: 0x3c046c84  lui         $a0, 0x6C84
    ctx->pc = 0x17b184u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27780 << 16));
label_17b188:
    // 0x17b188: 0xac2021b4  sw          $zero, 0x21B4($at)
    ctx->pc = 0x17b188u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8628), GPR_U32(ctx, 0));
label_17b18c:
    // 0x17b18c: 0x348501a8  ori         $a1, $a0, 0x1A8
    ctx->pc = 0x17b18cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)424);
label_17b190:
    // 0x17b190: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x17b190u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_17b194:
    // 0x17b194: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x17b194u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_17b198:
    // 0x17b198: 0xac2021b8  sw          $zero, 0x21B8($at)
    ctx->pc = 0x17b198u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8632), GPR_U32(ctx, 0));
label_17b19c:
    // 0x17b19c: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x17b19cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
label_17b1a0:
    // 0x17b1a0: 0x3c031100  lui         $v1, 0x1100
    ctx->pc = 0x17b1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4352 << 16));
label_17b1a4:
    // 0x17b1a4: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x17b1a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_17b1a8:
    // 0x17b1a8: 0xac2321b0  sw          $v1, 0x21B0($at)
    ctx->pc = 0x17b1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8624), GPR_U32(ctx, 3));
label_17b1ac:
    // 0x17b1ac: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x17b1acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_17b1b0:
    // 0x17b1b0: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x17b1b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_17b1b4:
    // 0x17b1b4: 0xdf8788d0  ld          $a3, -0x7730($gp)
    ctx->pc = 0x17b1b4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 28), 4294936784)));
label_17b1b8:
    // 0x17b1b8: 0xac2521bc  sw          $a1, 0x21BC($at)
    ctx->pc = 0x17b1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8636), GPR_U32(ctx, 5));
label_17b1bc:
    // 0x17b1bc: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x17b1bcu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17b1c0:
    // 0x17b1c0: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x17b1c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_17b1c4:
    // 0x17b1c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17b1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17b1c8:
    // 0x17b1c8: 0xfc2421c8  sd          $a0, 0x21C8($at)
    ctx->pc = 0x17b1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 8648), GPR_U64(ctx, 4));
label_17b1cc:
    // 0x17b1cc: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x17b1ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_17b1d0:
    // 0x17b1d0: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x17b1d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_17b1d4:
    // 0x17b1d4: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x17b1d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_17b1d8:
    // 0x17b1d8: 0xfc242858  sd          $a0, 0x2858($at)
    ctx->pc = 0x17b1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 10328), GPR_U64(ctx, 4));
label_17b1dc:
    // 0x17b1dc: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x17b1dcu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17b1e0:
    // 0x17b1e0: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x17b1e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_17b1e4:
    // 0x17b1e4: 0x3c04311d  lui         $a0, 0x311D
    ctx->pc = 0x17b1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12573 << 16));
label_17b1e8:
    // 0x17b1e8: 0xfc2521c0  sd          $a1, 0x21C0($at)
    ctx->pc = 0x17b1e8u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 8640), GPR_U64(ctx, 5));
label_17b1ec:
    // 0x17b1ec: 0x3484c000  ori         $a0, $a0, 0xC000
    ctx->pc = 0x17b1ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)49152);
label_17b1f0:
    // 0x17b1f0: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x17b1f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_17b1f4:
    // 0x17b1f4: 0xfc252850  sd          $a1, 0x2850($at)
    ctx->pc = 0x17b1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 10320), GPR_U64(ctx, 5));
label_17b1f8:
    // 0x17b1f8: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x17b1f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_17b1fc:
    // 0x17b1fc: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x17b1fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
label_17b200:
    // 0x17b200: 0xfc2621d8  sd          $a2, 0x21D8($at)
    ctx->pc = 0x17b200u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 8664), GPR_U64(ctx, 6));
label_17b204:
    // 0x17b204: 0x24040033  addiu       $a0, $zero, 0x33
    ctx->pc = 0x17b204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
label_17b208:
    // 0x17b208: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x17b208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_17b20c:
    // 0x17b20c: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x17b20cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_17b210:
    // 0x17b210: 0xfc262868  sd          $a2, 0x2868($at)
    ctx->pc = 0x17b210u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 10344), GPR_U64(ctx, 6));
label_17b214:
    // 0x17b214: 0x24050412  addiu       $a1, $zero, 0x412
    ctx->pc = 0x17b214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
label_17b218:
    // 0x17b218: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x17b218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_17b21c:
    // 0x17b21c: 0xdf8688c8  ld          $a2, -0x7738($gp)
    ctx->pc = 0x17b21cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 28), 4294936776)));
label_17b220:
    // 0x17b220: 0xfc2421e0  sd          $a0, 0x21E0($at)
    ctx->pc = 0x17b220u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 8672), GPR_U64(ctx, 4));
label_17b224:
    // 0x17b224: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x17b224u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_17b228:
    // 0x17b228: 0x3c04313d  lui         $a0, 0x313D
    ctx->pc = 0x17b228u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12605 << 16));
label_17b22c:
    // 0x17b22c: 0xfc2521e8  sd          $a1, 0x21E8($at)
    ctx->pc = 0x17b22cu;
    WRITE64(ADD32(GPR_U32(ctx, 1), 8680), GPR_U64(ctx, 5));
label_17b230:
    // 0x17b230: 0x3484c000  ori         $a0, $a0, 0xC000
    ctx->pc = 0x17b230u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)49152);
label_17b234:
    // 0x17b234: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x17b234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_17b238:
    // 0x17b238: 0xfc252878  sd          $a1, 0x2878($at)
    ctx->pc = 0x17b238u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 10360), GPR_U64(ctx, 5));
label_17b23c:
    // 0x17b23c: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x17b23cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
label_17b240:
    // 0x17b240: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x17b240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_17b244:
    // 0x17b244: 0x3404800c  ori         $a0, $zero, 0x800C
    ctx->pc = 0x17b244u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32780);
label_17b248:
    // 0x17b248: 0xfc2721d0  sd          $a3, 0x21D0($at)
    ctx->pc = 0x17b248u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 8656), GPR_U64(ctx, 7));
label_17b24c:
    // 0x17b24c: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x17b24cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_17b250:
    // 0x17b250: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x17b250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_17b254:
    // 0x17b254: 0xfc242870  sd          $a0, 0x2870($at)
    ctx->pc = 0x17b254u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 10352), GPR_U64(ctx, 4));
label_17b258:
    // 0x17b258: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x17b258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_17b25c:
    // 0x17b25c: 0xfc262860  sd          $a2, 0x2860($at)
    ctx->pc = 0x17b25cu;
    WRITE64(ADD32(GPR_U32(ctx, 1), 10336), GPR_U64(ctx, 6));
label_17b260:
    // 0x17b260: 0x3c046cfb  lui         $a0, 0x6CFB
    ctx->pc = 0x17b260u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27899 << 16));
label_17b264:
    // 0x17b264: 0x3c090036  lui         $t1, 0x36
    ctx->pc = 0x17b264u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)54 << 16));
label_17b268:
    // 0x17b268: 0x34870010  ori         $a3, $a0, 0x10
    ctx->pc = 0x17b268u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16);
label_17b26c:
    // 0x17b26c: 0x25295270  addiu       $t1, $t1, 0x5270
    ctx->pc = 0x17b26cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 21104));
label_17b270:
    // 0x17b270: 0x3c041400  lui         $a0, 0x1400
    ctx->pc = 0x17b270u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)5120 << 16));
label_17b274:
    // 0x17b274: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x17b274u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_17b278:
    // 0x17b278: 0x34850004  ori         $a1, $a0, 0x4
    ctx->pc = 0x17b278u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
label_17b27c:
    // 0x17b27c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x17b27cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17b280:
    // 0x17b280: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x17b280u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17b284:
    // 0x17b284: 0x12e2021  addu        $a0, $t1, $t6
    ctx->pc = 0x17b284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 14)));
label_17b288:
    // 0x17b288: 0x24880000  addiu       $t0, $a0, 0x0
    ctx->pc = 0x17b288u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
label_17b28c:
    // 0x17b28c: 0x0  nop
    ctx->pc = 0x17b28cu;
    // NOP
    ctx->pc = 0x17b290u;
    return;
}

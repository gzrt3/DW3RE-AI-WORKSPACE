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


void FUN_0019b6a8_part327(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x23a988u: goto label_23a988;
        case 0x23a98cu: goto label_23a98c;
        case 0x23a990u: goto label_23a990;
        case 0x23a994u: goto label_23a994;
        case 0x23a998u: goto label_23a998;
        case 0x23a99cu: goto label_23a99c;
        case 0x23a9a0u: goto label_23a9a0;
        case 0x23a9a4u: goto label_23a9a4;
        case 0x23a9a8u: goto label_23a9a8;
        case 0x23a9acu: goto label_23a9ac;
        case 0x23a9b0u: goto label_23a9b0;
        case 0x23a9b4u: goto label_23a9b4;
        case 0x23a9b8u: goto label_23a9b8;
        case 0x23a9bcu: goto label_23a9bc;
        case 0x23a9c0u: goto label_23a9c0;
        case 0x23a9c4u: goto label_23a9c4;
        case 0x23a9c8u: goto label_23a9c8;
        case 0x23a9ccu: goto label_23a9cc;
        case 0x23a9d0u: goto label_23a9d0;
        case 0x23a9d4u: goto label_23a9d4;
        case 0x23a9d8u: goto label_23a9d8;
        case 0x23a9dcu: goto label_23a9dc;
        case 0x23a9e0u: goto label_23a9e0;
        case 0x23a9e4u: goto label_23a9e4;
        case 0x23a9e8u: goto label_23a9e8;
        case 0x23a9ecu: goto label_23a9ec;
        case 0x23a9f0u: goto label_23a9f0;
        case 0x23a9f4u: goto label_23a9f4;
        case 0x23a9f8u: goto label_23a9f8;
        case 0x23a9fcu: goto label_23a9fc;
        case 0x23aa00u: goto label_23aa00;
        case 0x23aa04u: goto label_23aa04;
        case 0x23aa08u: goto label_23aa08;
        case 0x23aa0cu: goto label_23aa0c;
        case 0x23aa10u: goto label_23aa10;
        case 0x23aa14u: goto label_23aa14;
        case 0x23aa18u: goto label_23aa18;
        case 0x23aa1cu: goto label_23aa1c;
        case 0x23aa20u: goto label_23aa20;
        case 0x23aa24u: goto label_23aa24;
        case 0x23aa28u: goto label_23aa28;
        case 0x23aa2cu: goto label_23aa2c;
        case 0x23aa30u: goto label_23aa30;
        case 0x23aa34u: goto label_23aa34;
        case 0x23aa38u: goto label_23aa38;
        case 0x23aa3cu: goto label_23aa3c;
        case 0x23aa40u: goto label_23aa40;
        case 0x23aa44u: goto label_23aa44;
        case 0x23aa48u: goto label_23aa48;
        case 0x23aa4cu: goto label_23aa4c;
        case 0x23aa50u: goto label_23aa50;
        case 0x23aa54u: goto label_23aa54;
        case 0x23aa58u: goto label_23aa58;
        case 0x23aa5cu: goto label_23aa5c;
        case 0x23aa60u: goto label_23aa60;
        case 0x23aa64u: goto label_23aa64;
        case 0x23aa68u: goto label_23aa68;
        case 0x23aa6cu: goto label_23aa6c;
        case 0x23aa70u: goto label_23aa70;
        case 0x23aa74u: goto label_23aa74;
        case 0x23aa78u: goto label_23aa78;
        case 0x23aa7cu: goto label_23aa7c;
        case 0x23aa80u: goto label_23aa80;
        case 0x23aa84u: goto label_23aa84;
        case 0x23aa88u: goto label_23aa88;
        case 0x23aa8cu: goto label_23aa8c;
        case 0x23aa90u: goto label_23aa90;
        case 0x23aa94u: goto label_23aa94;
        case 0x23aa98u: goto label_23aa98;
        case 0x23aa9cu: goto label_23aa9c;
        case 0x23aaa0u: goto label_23aaa0;
        case 0x23aaa4u: goto label_23aaa4;
        case 0x23aaa8u: goto label_23aaa8;
        case 0x23aaacu: goto label_23aaac;
        case 0x23aab0u: goto label_23aab0;
        case 0x23aab4u: goto label_23aab4;
        case 0x23aab8u: goto label_23aab8;
        case 0x23aabcu: goto label_23aabc;
        case 0x23aac0u: goto label_23aac0;
        case 0x23aac4u: goto label_23aac4;
        case 0x23aac8u: goto label_23aac8;
        case 0x23aaccu: goto label_23aacc;
        case 0x23aad0u: goto label_23aad0;
        case 0x23aad4u: goto label_23aad4;
        case 0x23aad8u: goto label_23aad8;
        case 0x23aadcu: goto label_23aadc;
        case 0x23aae0u: goto label_23aae0;
        case 0x23aae4u: goto label_23aae4;
        case 0x23aae8u: goto label_23aae8;
        case 0x23aaecu: goto label_23aaec;
        case 0x23aaf0u: goto label_23aaf0;
        case 0x23aaf4u: goto label_23aaf4;
        case 0x23aaf8u: goto label_23aaf8;
        case 0x23aafcu: goto label_23aafc;
        case 0x23ab00u: goto label_23ab00;
        case 0x23ab04u: goto label_23ab04;
        case 0x23ab08u: goto label_23ab08;
        case 0x23ab0cu: goto label_23ab0c;
        case 0x23ab10u: goto label_23ab10;
        case 0x23ab14u: goto label_23ab14;
        case 0x23ab18u: goto label_23ab18;
        case 0x23ab1cu: goto label_23ab1c;
        case 0x23ab20u: goto label_23ab20;
        case 0x23ab24u: goto label_23ab24;
        case 0x23ab28u: goto label_23ab28;
        case 0x23ab2cu: goto label_23ab2c;
        case 0x23ab30u: goto label_23ab30;
        case 0x23ab34u: goto label_23ab34;
        case 0x23ab38u: goto label_23ab38;
        case 0x23ab3cu: goto label_23ab3c;
        case 0x23ab40u: goto label_23ab40;
        case 0x23ab44u: goto label_23ab44;
        case 0x23ab48u: goto label_23ab48;
        case 0x23ab4cu: goto label_23ab4c;
        case 0x23ab50u: goto label_23ab50;
        case 0x23ab54u: goto label_23ab54;
        case 0x23ab58u: goto label_23ab58;
        case 0x23ab5cu: goto label_23ab5c;
        case 0x23ab60u: goto label_23ab60;
        case 0x23ab64u: goto label_23ab64;
        case 0x23ab68u: goto label_23ab68;
        case 0x23ab6cu: goto label_23ab6c;
        case 0x23ab70u: goto label_23ab70;
        case 0x23ab74u: goto label_23ab74;
        case 0x23ab78u: goto label_23ab78;
        case 0x23ab7cu: goto label_23ab7c;
        case 0x23ab80u: goto label_23ab80;
        case 0x23ab84u: goto label_23ab84;
        case 0x23ab88u: goto label_23ab88;
        case 0x23ab8cu: goto label_23ab8c;
        case 0x23ab90u: goto label_23ab90;
        case 0x23ab94u: goto label_23ab94;
        case 0x23ab98u: goto label_23ab98;
        case 0x23ab9cu: goto label_23ab9c;
        case 0x23aba0u: goto label_23aba0;
        case 0x23aba4u: goto label_23aba4;
        case 0x23aba8u: goto label_23aba8;
        case 0x23abacu: goto label_23abac;
        case 0x23abb0u: goto label_23abb0;
        case 0x23abb4u: goto label_23abb4;
        case 0x23abb8u: goto label_23abb8;
        case 0x23abbcu: goto label_23abbc;
        case 0x23abc0u: goto label_23abc0;
        case 0x23abc4u: goto label_23abc4;
        case 0x23abc8u: goto label_23abc8;
        case 0x23abccu: goto label_23abcc;
        case 0x23abd0u: goto label_23abd0;
        case 0x23abd4u: goto label_23abd4;
        case 0x23abd8u: goto label_23abd8;
        case 0x23abdcu: goto label_23abdc;
        case 0x23abe0u: goto label_23abe0;
        case 0x23abe4u: goto label_23abe4;
        case 0x23abe8u: goto label_23abe8;
        case 0x23abecu: goto label_23abec;
        case 0x23abf0u: goto label_23abf0;
        case 0x23abf4u: goto label_23abf4;
        case 0x23abf8u: goto label_23abf8;
        case 0x23abfcu: goto label_23abfc;
        case 0x23ac00u: goto label_23ac00;
        case 0x23ac04u: goto label_23ac04;
        case 0x23ac08u: goto label_23ac08;
        case 0x23ac0cu: goto label_23ac0c;
        case 0x23ac10u: goto label_23ac10;
        case 0x23ac14u: goto label_23ac14;
        case 0x23ac18u: goto label_23ac18;
        case 0x23ac1cu: goto label_23ac1c;
        case 0x23ac20u: goto label_23ac20;
        case 0x23ac24u: goto label_23ac24;
        case 0x23ac28u: goto label_23ac28;
        case 0x23ac2cu: goto label_23ac2c;
        case 0x23ac30u: goto label_23ac30;
        case 0x23ac34u: goto label_23ac34;
        case 0x23ac38u: goto label_23ac38;
        case 0x23ac3cu: goto label_23ac3c;
        case 0x23ac40u: goto label_23ac40;
        case 0x23ac44u: goto label_23ac44;
        case 0x23ac48u: goto label_23ac48;
        case 0x23ac4cu: goto label_23ac4c;
        case 0x23ac50u: goto label_23ac50;
        case 0x23ac54u: goto label_23ac54;
        case 0x23ac58u: goto label_23ac58;
        case 0x23ac5cu: goto label_23ac5c;
        case 0x23ac60u: goto label_23ac60;
        case 0x23ac64u: goto label_23ac64;
        case 0x23ac68u: goto label_23ac68;
        case 0x23ac6cu: goto label_23ac6c;
        case 0x23ac70u: goto label_23ac70;
        case 0x23ac74u: goto label_23ac74;
        case 0x23ac78u: goto label_23ac78;
        case 0x23ac7cu: goto label_23ac7c;
        case 0x23ac80u: goto label_23ac80;
        case 0x23ac84u: goto label_23ac84;
        case 0x23ac88u: goto label_23ac88;
        case 0x23ac8cu: goto label_23ac8c;
        case 0x23ac90u: goto label_23ac90;
        case 0x23ac94u: goto label_23ac94;
        case 0x23ac98u: goto label_23ac98;
        case 0x23ac9cu: goto label_23ac9c;
        case 0x23aca0u: goto label_23aca0;
        case 0x23aca4u: goto label_23aca4;
        case 0x23aca8u: goto label_23aca8;
        case 0x23acacu: goto label_23acac;
        case 0x23acb0u: goto label_23acb0;
        case 0x23acb4u: goto label_23acb4;
        case 0x23acb8u: goto label_23acb8;
        case 0x23acbcu: goto label_23acbc;
        case 0x23acc0u: goto label_23acc0;
        case 0x23acc4u: goto label_23acc4;
        case 0x23acc8u: goto label_23acc8;
        case 0x23acccu: goto label_23accc;
        case 0x23acd0u: goto label_23acd0;
        case 0x23acd4u: goto label_23acd4;
        case 0x23acd8u: goto label_23acd8;
        case 0x23acdcu: goto label_23acdc;
        case 0x23ace0u: goto label_23ace0;
        case 0x23ace4u: goto label_23ace4;
        case 0x23ace8u: goto label_23ace8;
        case 0x23acecu: goto label_23acec;
        case 0x23acf0u: goto label_23acf0;
        case 0x23acf4u: goto label_23acf4;
        case 0x23acf8u: goto label_23acf8;
        case 0x23acfcu: goto label_23acfc;
        case 0x23ad00u: goto label_23ad00;
        case 0x23ad04u: goto label_23ad04;
        case 0x23ad08u: goto label_23ad08;
        case 0x23ad0cu: goto label_23ad0c;
        case 0x23ad10u: goto label_23ad10;
        case 0x23ad14u: goto label_23ad14;
        case 0x23ad18u: goto label_23ad18;
        case 0x23ad1cu: goto label_23ad1c;
        case 0x23ad20u: goto label_23ad20;
        case 0x23ad24u: goto label_23ad24;
        case 0x23ad28u: goto label_23ad28;
        case 0x23ad2cu: goto label_23ad2c;
        case 0x23ad30u: goto label_23ad30;
        case 0x23ad34u: goto label_23ad34;
        case 0x23ad38u: goto label_23ad38;
        case 0x23ad3cu: goto label_23ad3c;
        case 0x23ad40u: goto label_23ad40;
        case 0x23ad44u: goto label_23ad44;
        case 0x23ad48u: goto label_23ad48;
        case 0x23ad4cu: goto label_23ad4c;
        case 0x23ad50u: goto label_23ad50;
        case 0x23ad54u: goto label_23ad54;
        case 0x23ad58u: goto label_23ad58;
        case 0x23ad5cu: goto label_23ad5c;
        case 0x23ad60u: goto label_23ad60;
        case 0x23ad64u: goto label_23ad64;
        case 0x23ad68u: goto label_23ad68;
        case 0x23ad6cu: goto label_23ad6c;
        case 0x23ad70u: goto label_23ad70;
        case 0x23ad74u: goto label_23ad74;
        case 0x23ad78u: goto label_23ad78;
        case 0x23ad7cu: goto label_23ad7c;
        case 0x23ad80u: goto label_23ad80;
        case 0x23ad84u: goto label_23ad84;
        case 0x23ad88u: goto label_23ad88;
        case 0x23ad8cu: goto label_23ad8c;
        case 0x23ad90u: goto label_23ad90;
        case 0x23ad94u: goto label_23ad94;
        case 0x23ad98u: goto label_23ad98;
        case 0x23ad9cu: goto label_23ad9c;
        case 0x23ada0u: goto label_23ada0;
        case 0x23ada4u: goto label_23ada4;
        case 0x23ada8u: goto label_23ada8;
        case 0x23adacu: goto label_23adac;
        case 0x23adb0u: goto label_23adb0;
        case 0x23adb4u: goto label_23adb4;
        case 0x23adb8u: goto label_23adb8;
        case 0x23adbcu: goto label_23adbc;
        case 0x23adc0u: goto label_23adc0;
        case 0x23adc4u: goto label_23adc4;
        case 0x23adc8u: goto label_23adc8;
        case 0x23adccu: goto label_23adcc;
        case 0x23add0u: goto label_23add0;
        case 0x23add4u: goto label_23add4;
        case 0x23add8u: goto label_23add8;
        case 0x23addcu: goto label_23addc;
        case 0x23ade0u: goto label_23ade0;
        case 0x23ade4u: goto label_23ade4;
        case 0x23ade8u: goto label_23ade8;
        case 0x23adecu: goto label_23adec;
        case 0x23adf0u: goto label_23adf0;
        case 0x23adf4u: goto label_23adf4;
        case 0x23adf8u: goto label_23adf8;
        case 0x23adfcu: goto label_23adfc;
        case 0x23ae00u: goto label_23ae00;
        case 0x23ae04u: goto label_23ae04;
        case 0x23ae08u: goto label_23ae08;
        case 0x23ae0cu: goto label_23ae0c;
        case 0x23ae10u: goto label_23ae10;
        case 0x23ae14u: goto label_23ae14;
        case 0x23ae18u: goto label_23ae18;
        case 0x23ae1cu: goto label_23ae1c;
        case 0x23ae20u: goto label_23ae20;
        case 0x23ae24u: goto label_23ae24;
        case 0x23ae28u: goto label_23ae28;
        case 0x23ae2cu: goto label_23ae2c;
        case 0x23ae30u: goto label_23ae30;
        case 0x23ae34u: goto label_23ae34;
        case 0x23ae38u: goto label_23ae38;
        case 0x23ae3cu: goto label_23ae3c;
        case 0x23ae40u: goto label_23ae40;
        case 0x23ae44u: goto label_23ae44;
        case 0x23ae48u: goto label_23ae48;
        case 0x23ae4cu: goto label_23ae4c;
        case 0x23ae50u: goto label_23ae50;
        case 0x23ae54u: goto label_23ae54;
        case 0x23ae58u: goto label_23ae58;
        case 0x23ae5cu: goto label_23ae5c;
        case 0x23ae60u: goto label_23ae60;
        case 0x23ae64u: goto label_23ae64;
        case 0x23ae68u: goto label_23ae68;
        case 0x23ae6cu: goto label_23ae6c;
        case 0x23ae70u: goto label_23ae70;
        case 0x23ae74u: goto label_23ae74;
        case 0x23ae78u: goto label_23ae78;
        case 0x23ae7cu: goto label_23ae7c;
        case 0x23ae80u: goto label_23ae80;
        case 0x23ae84u: goto label_23ae84;
        case 0x23ae88u: goto label_23ae88;
        case 0x23ae8cu: goto label_23ae8c;
        case 0x23ae90u: goto label_23ae90;
        case 0x23ae94u: goto label_23ae94;
        case 0x23ae98u: goto label_23ae98;
        case 0x23ae9cu: goto label_23ae9c;
        case 0x23aea0u: goto label_23aea0;
        case 0x23aea4u: goto label_23aea4;
        case 0x23aea8u: goto label_23aea8;
        case 0x23aeacu: goto label_23aeac;
        case 0x23aeb0u: goto label_23aeb0;
        case 0x23aeb4u: goto label_23aeb4;
        case 0x23aeb8u: goto label_23aeb8;
        case 0x23aebcu: goto label_23aebc;
        case 0x23aec0u: goto label_23aec0;
        case 0x23aec4u: goto label_23aec4;
        case 0x23aec8u: goto label_23aec8;
        case 0x23aeccu: goto label_23aecc;
        case 0x23aed0u: goto label_23aed0;
        case 0x23aed4u: goto label_23aed4;
        case 0x23aed8u: goto label_23aed8;
        case 0x23aedcu: goto label_23aedc;
        case 0x23aee0u: goto label_23aee0;
        case 0x23aee4u: goto label_23aee4;
        case 0x23aee8u: goto label_23aee8;
        case 0x23aeecu: goto label_23aeec;
        case 0x23aef0u: goto label_23aef0;
        case 0x23aef4u: goto label_23aef4;
        case 0x23aef8u: goto label_23aef8;
        case 0x23aefcu: goto label_23aefc;
        case 0x23af00u: goto label_23af00;
        case 0x23af04u: goto label_23af04;
        case 0x23af08u: goto label_23af08;
        case 0x23af0cu: goto label_23af0c;
        case 0x23af10u: goto label_23af10;
        case 0x23af14u: goto label_23af14;
        case 0x23af18u: goto label_23af18;
        case 0x23af1cu: goto label_23af1c;
        case 0x23af20u: goto label_23af20;
        case 0x23af24u: goto label_23af24;
        case 0x23af28u: goto label_23af28;
        case 0x23af2cu: goto label_23af2c;
        case 0x23af30u: goto label_23af30;
        case 0x23af34u: goto label_23af34;
        case 0x23af38u: goto label_23af38;
        case 0x23af3cu: goto label_23af3c;
        case 0x23af40u: goto label_23af40;
        case 0x23af44u: goto label_23af44;
        case 0x23af48u: goto label_23af48;
        case 0x23af4cu: goto label_23af4c;
        case 0x23af50u: goto label_23af50;
        case 0x23af54u: goto label_23af54;
        case 0x23af58u: goto label_23af58;
        case 0x23af5cu: goto label_23af5c;
        case 0x23af60u: goto label_23af60;
        case 0x23af64u: goto label_23af64;
        case 0x23af68u: goto label_23af68;
        case 0x23af6cu: goto label_23af6c;
        case 0x23af70u: goto label_23af70;
        case 0x23af74u: goto label_23af74;
        case 0x23af78u: goto label_23af78;
        case 0x23af7cu: goto label_23af7c;
        case 0x23af80u: goto label_23af80;
        case 0x23af84u: goto label_23af84;
        case 0x23af88u: goto label_23af88;
        case 0x23af8cu: goto label_23af8c;
        case 0x23af90u: goto label_23af90;
        case 0x23af94u: goto label_23af94;
        case 0x23af98u: goto label_23af98;
        case 0x23af9cu: goto label_23af9c;
        case 0x23afa0u: goto label_23afa0;
        case 0x23afa4u: goto label_23afa4;
        case 0x23afa8u: goto label_23afa8;
        case 0x23afacu: goto label_23afac;
        case 0x23afb0u: goto label_23afb0;
        case 0x23afb4u: goto label_23afb4;
        case 0x23afb8u: goto label_23afb8;
        case 0x23afbcu: goto label_23afbc;
        case 0x23afc0u: goto label_23afc0;
        case 0x23afc4u: goto label_23afc4;
        case 0x23afc8u: goto label_23afc8;
        case 0x23afccu: goto label_23afcc;
        case 0x23afd0u: goto label_23afd0;
        case 0x23afd4u: goto label_23afd4;
        case 0x23afd8u: goto label_23afd8;
        case 0x23afdcu: goto label_23afdc;
        case 0x23afe0u: goto label_23afe0;
        case 0x23afe4u: goto label_23afe4;
        case 0x23afe8u: goto label_23afe8;
        case 0x23afecu: goto label_23afec;
        case 0x23aff0u: goto label_23aff0;
        case 0x23aff4u: goto label_23aff4;
        case 0x23aff8u: goto label_23aff8;
        case 0x23affcu: goto label_23affc;
        case 0x23b000u: goto label_23b000;
        case 0x23b004u: goto label_23b004;
        case 0x23b008u: goto label_23b008;
        case 0x23b00cu: goto label_23b00c;
        case 0x23b010u: goto label_23b010;
        case 0x23b014u: goto label_23b014;
        case 0x23b018u: goto label_23b018;
        case 0x23b01cu: goto label_23b01c;
        case 0x23b020u: goto label_23b020;
        case 0x23b024u: goto label_23b024;
        case 0x23b028u: goto label_23b028;
        case 0x23b02cu: goto label_23b02c;
        case 0x23b030u: goto label_23b030;
        case 0x23b034u: goto label_23b034;
        case 0x23b038u: goto label_23b038;
        case 0x23b03cu: goto label_23b03c;
        case 0x23b040u: goto label_23b040;
        case 0x23b044u: goto label_23b044;
        case 0x23b048u: goto label_23b048;
        case 0x23b04cu: goto label_23b04c;
        case 0x23b050u: goto label_23b050;
        case 0x23b054u: goto label_23b054;
        case 0x23b058u: goto label_23b058;
        case 0x23b05cu: goto label_23b05c;
        case 0x23b060u: goto label_23b060;
        case 0x23b064u: goto label_23b064;
        case 0x23b068u: goto label_23b068;
        case 0x23b06cu: goto label_23b06c;
        case 0x23b070u: goto label_23b070;
        case 0x23b074u: goto label_23b074;
        case 0x23b078u: goto label_23b078;
        case 0x23b07cu: goto label_23b07c;
        case 0x23b080u: goto label_23b080;
        case 0x23b084u: goto label_23b084;
        case 0x23b088u: goto label_23b088;
        case 0x23b08cu: goto label_23b08c;
        case 0x23b090u: goto label_23b090;
        case 0x23b094u: goto label_23b094;
        case 0x23b098u: goto label_23b098;
        case 0x23b09cu: goto label_23b09c;
        case 0x23b0a0u: goto label_23b0a0;
        case 0x23b0a4u: goto label_23b0a4;
        case 0x23b0a8u: goto label_23b0a8;
        case 0x23b0acu: goto label_23b0ac;
        case 0x23b0b0u: goto label_23b0b0;
        case 0x23b0b4u: goto label_23b0b4;
        case 0x23b0b8u: goto label_23b0b8;
        case 0x23b0bcu: goto label_23b0bc;
        case 0x23b0c0u: goto label_23b0c0;
        case 0x23b0c4u: goto label_23b0c4;
        case 0x23b0c8u: goto label_23b0c8;
        case 0x23b0ccu: goto label_23b0cc;
        case 0x23b0d0u: goto label_23b0d0;
        case 0x23b0d4u: goto label_23b0d4;
        case 0x23b0d8u: goto label_23b0d8;
        case 0x23b0dcu: goto label_23b0dc;
        case 0x23b0e0u: goto label_23b0e0;
        case 0x23b0e4u: goto label_23b0e4;
        case 0x23b0e8u: goto label_23b0e8;
        case 0x23b0ecu: goto label_23b0ec;
        case 0x23b0f0u: goto label_23b0f0;
        case 0x23b0f4u: goto label_23b0f4;
        case 0x23b0f8u: goto label_23b0f8;
        case 0x23b0fcu: goto label_23b0fc;
        case 0x23b100u: goto label_23b100;
        case 0x23b104u: goto label_23b104;
        case 0x23b108u: goto label_23b108;
        case 0x23b10cu: goto label_23b10c;
        case 0x23b110u: goto label_23b110;
        case 0x23b114u: goto label_23b114;
        case 0x23b118u: goto label_23b118;
        case 0x23b11cu: goto label_23b11c;
        case 0x23b120u: goto label_23b120;
        case 0x23b124u: goto label_23b124;
        case 0x23b128u: goto label_23b128;
        case 0x23b12cu: goto label_23b12c;
        case 0x23b130u: goto label_23b130;
        case 0x23b134u: goto label_23b134;
        case 0x23b138u: goto label_23b138;
        case 0x23b13cu: goto label_23b13c;
        case 0x23b140u: goto label_23b140;
        case 0x23b144u: goto label_23b144;
        case 0x23b148u: goto label_23b148;
        case 0x23b14cu: goto label_23b14c;
        case 0x23b150u: goto label_23b150;
        case 0x23b154u: goto label_23b154;
        default: return;
    }

label_23a988:
    // 0x23a988: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x23a988u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_23a98c:
    // 0x23a98c: 0x14c0fff0  bnez        $a2, . + 4 + (-0x10 << 2)
label_23a990:
    if (ctx->pc == 0x23A990u) {
        ctx->pc = 0x23A990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A98Cu;
        // 0x23a990: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A994u;
        goto label_23a994;
    }
    ctx->pc = 0x23A98Cu;
    {
        const bool branch_taken_0x23a98c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A98Cu;
        // 0x23a990: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a98c) {
            ctx->pc = 0x23A950u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x23a950; return; }
        }
    }
    ctx->pc = 0x23A994u;
label_23a994:
    // 0x23a994: 0x1260001a  beqz        $s3, . + 4 + (0x1A << 2)
label_23a998:
    if (ctx->pc == 0x23A998u) {
        ctx->pc = 0x23A998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A994u;
        // 0x23a998: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A99Cu;
        goto label_23a99c;
    }
    ctx->pc = 0x23A994u;
    {
        const bool branch_taken_0x23a994 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A994u;
        // 0x23a998: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a994) {
            ctx->pc = 0x23AA00u;
            goto label_23aa00;
        }
    }
    ctx->pc = 0x23A99Cu;
label_23a99c:
    // 0x23a99c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x23a99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_23a9a0:
    // 0x23a9a0: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x23a9a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_23a9a4:
    // 0x23a9a4: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_23a9a8:
    if (ctx->pc == 0x23A9A8u) {
        ctx->pc = 0x23A9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A9A4u;
        // 0x23a9a8: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A9ACu;
        goto label_23a9ac;
    }
    ctx->pc = 0x23A9A4u;
    {
        const bool branch_taken_0x23a9a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A9A4u;
        // 0x23a9a8: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a9a4) {
            ctx->pc = 0x23A9ECu;
            goto label_23a9ec;
        }
    }
    ctx->pc = 0x23A9ACu;
label_23a9ac:
    // 0x23a9ac: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x23a9acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_23a9b0:
    // 0x23a9b0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23a9b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_23a9b4:
    // 0x23a9b4: 0xc08ea10  jal         func_23A840
label_23a9b8:
    if (ctx->pc == 0x23A9B8u) {
        ctx->pc = 0x23A9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A9B4u;
        // 0x23a9b8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A9BCu;
        goto label_23a9bc;
    }
    ctx->pc = 0x23A9B4u;
    SET_GPR_U32(ctx, 31, 0x23A9BCu);
    ctx->pc = 0x23A9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A9B4u;
    // 0x23a9b8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A840u;
    { ctx->pc = 0x23a840; return; }
    ctx->pc = 0x23A9BCu;
label_23a9bc:
    // 0x23a9bc: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x23a9bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_23a9c0:
    // 0x23a9c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23a9c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23a9c4:
    // 0x23a9c4: 0x2625000c  addiu       $a1, $s1, 0xC
    ctx->pc = 0x23a9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_23a9c8:
    // 0x23a9c8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x23a9c8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_23a9cc:
    // 0x23a9cc: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x23a9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_23a9d0:
    // 0x23a9d0: 0xc08e93e  jal         func_23A4F8
label_23a9d4:
    if (ctx->pc == 0x23A9D4u) {
        ctx->pc = 0x23A9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A9D0u;
        // 0x23a9d4: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A9D8u;
        goto label_23a9d8;
    }
    ctx->pc = 0x23A9D0u;
    SET_GPR_U32(ctx, 31, 0x23A9D8u);
    ctx->pc = 0x23A9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A9D0u;
    // 0x23a9d4: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x23A9D8u;
label_23a9d8:
    // 0x23a9d8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23a9d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_23a9dc:
    // 0x23a9dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x23a9dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23a9e0:
    // 0x23a9e0: 0xc08ea3a  jal         func_23A8E8
label_23a9e4:
    if (ctx->pc == 0x23A9E4u) {
        ctx->pc = 0x23A9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A9E0u;
        // 0x23a9e4: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A9E8u;
        goto label_23a9e8;
    }
    ctx->pc = 0x23A9E0u;
    SET_GPR_U32(ctx, 31, 0x23A9E8u);
    ctx->pc = 0x23A9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A9E0u;
    // 0x23a9e4: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A8E8u;
    { ctx->pc = 0x23a8e8; return; }
    ctx->pc = 0x23A9E8u;
label_23a9e8:
    // 0x23a9e8: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x23a9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_23a9ec:
    // 0x23a9ec: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x23a9ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_23a9f0:
    // 0x23a9f0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x23a9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_23a9f4:
    // 0x23a9f4: 0xac530014  sw          $s3, 0x14($v0)
    ctx->pc = 0x23a9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 19));
label_23a9f8:
    // 0x23a9f8: 0xae320010  sw          $s2, 0x10($s1)
    ctx->pc = 0x23a9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 18));
label_23a9fc:
    // 0x23a9fc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x23a9fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23aa00:
    // 0x23aa00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23aa00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23aa04:
    // 0x23aa04: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23aa04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_23aa08:
    // 0x23aa08: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23aa08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23aa0c:
    // 0x23aa0c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x23aa0cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_23aa10:
    // 0x23aa10: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x23aa10u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23aa14:
    // 0x23aa14: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x23aa14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_23aa18:
    // 0x23aa18: 0x3e00008  jr          $ra
label_23aa1c:
    if (ctx->pc == 0x23AA1Cu) {
        ctx->pc = 0x23AA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AA18u;
        // 0x23aa1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AA20u;
        goto label_23aa20;
    }
    ctx->pc = 0x23AA18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23AA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AA18u;
        // 0x23aa1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23AA18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23AA20u;
label_23aa20:
    // 0x23aa20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23aa20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_23aa24:
    // 0x23aa24: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x23aa24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_23aa28:
    // 0x23aa28: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x23aa28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_23aa2c:
    // 0x23aa2c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x23aa2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_23aa30:
    // 0x23aa30: 0x26830008  addiu       $v1, $s4, 0x8
    ctx->pc = 0x23aa30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_23aa34:
    // 0x23aa34: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23aa34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23aa38:
    // 0x23aa38: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x23aa38u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_23aa3c:
    // 0x23aa3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23aa3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23aa40:
    // 0x23aa40: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23aa40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_23aa44:
    // 0x23aa44: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x23aa44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_23aa48:
    // 0x23aa48: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23aa48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_23aa4c:
    // 0x23aa4c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x23aa4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_23aa50:
    // 0x23aa50: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x23aa50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_23aa54:
    // 0x23aa54: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x23aa54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23aa58:
    // 0x23aa58: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x23aa58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_23aa5c:
    // 0x23aa5c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_23aa60:
    if (ctx->pc == 0x23AA60u) {
        ctx->pc = 0x23AA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AA5Cu;
        // 0x23aa60: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AA64u;
        goto label_23aa64;
    }
    ctx->pc = 0x23AA5Cu;
    {
        const bool branch_taken_0x23aa5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23aa5c) {
            ctx->pc = 0x23AA60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23AA5Cu;
            // 0x23aa60: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23AA64u;
            goto label_23aa64;
        }
    }
    ctx->pc = 0x23AA64u;
label_23aa64:
    // 0x23aa64: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x23aa64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23aa68:
    // 0x23aa68: 0x1812  mflo        $v1
    ctx->pc = 0x23aa68u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_23aa6c:
    // 0x23aa6c: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x23aa6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_23aa70:
    // 0x23aa70: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_23aa74:
    if (ctx->pc == 0x23AA74u) {
        ctx->pc = 0x23AA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AA70u;
        // 0x23aa74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AA78u;
        goto label_23aa78;
    }
    ctx->pc = 0x23AA70u;
    {
        const bool branch_taken_0x23aa70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AA70u;
        // 0x23aa74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23aa70) {
            ctx->pc = 0x23AA94u;
            goto label_23aa94;
        }
    }
    ctx->pc = 0x23AA78u;
label_23aa78:
    // 0x23aa78: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x23aa78u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_23aa7c:
    // 0x23aa7c: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x23aa7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_23aa80:
    // 0x23aa80: 0x0  nop
    ctx->pc = 0x23aa80u;
    // NOP
label_23aa84:
    // 0x23aa84: 0x0  nop
    ctx->pc = 0x23aa84u;
    // NOP
label_23aa88:
    // 0x23aa88: 0x0  nop
    ctx->pc = 0x23aa88u;
    // NOP
label_23aa8c:
    // 0x23aa8c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_23aa90:
    if (ctx->pc == 0x23AA90u) {
        ctx->pc = 0x23AA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AA8Cu;
        // 0x23aa90: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AA94u;
        goto label_23aa94;
    }
    ctx->pc = 0x23AA8Cu;
    {
        const bool branch_taken_0x23aa8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23AA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AA8Cu;
        // 0x23aa90: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23aa8c) {
            ctx->pc = 0x23AA78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23aa78;
        }
    }
    ctx->pc = 0x23AA94u;
label_23aa94:
    // 0x23aa94: 0xc08ea10  jal         func_23A840
label_23aa98:
    if (ctx->pc == 0x23AA98u) {
        ctx->pc = 0x23AA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AA94u;
        // 0x23aa98: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AA9Cu;
        goto label_23aa9c;
    }
    ctx->pc = 0x23AA94u;
    SET_GPR_U32(ctx, 31, 0x23AA9Cu);
    ctx->pc = 0x23AA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AA94u;
    // 0x23aa98: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A840u;
    { ctx->pc = 0x23a840; return; }
    ctx->pc = 0x23AA9Cu;
label_23aa9c:
    // 0x23aa9c: 0x2a43000a  slti        $v1, $s2, 0xA
    ctx->pc = 0x23aa9cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)10) ? 1 : 0);
label_23aaa0:
    // 0x23aaa0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x23aaa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23aaa4:
    // 0x23aaa4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23aaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23aaa8:
    // 0x23aaa8: 0xacb10014  sw          $s1, 0x14($a1)
    ctx->pc = 0x23aaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 17));
label_23aaac:
    // 0x23aaac: 0x24110009  addiu       $s1, $zero, 0x9
    ctx->pc = 0x23aaacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_23aab0:
    // 0x23aab0: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
label_23aab4:
    if (ctx->pc == 0x23AAB4u) {
        ctx->pc = 0x23AAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AAB0u;
        // 0x23aab4: 0xaca20010  sw          $v0, 0x10($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AAB8u;
        goto label_23aab8;
    }
    ctx->pc = 0x23AAB0u;
    {
        const bool branch_taken_0x23aab0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23AAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AAB0u;
        // 0x23aab4: 0xaca20010  sw          $v0, 0x10($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23aab0) {
            ctx->pc = 0x23AAF0u;
            goto label_23aaf0;
        }
    }
    ctx->pc = 0x23AAB8u;
label_23aab8:
    // 0x23aab8: 0x26100009  addiu       $s0, $s0, 0x9
    ctx->pc = 0x23aab8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9));
label_23aabc:
    // 0x23aabc: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x23aabcu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_23aac0:
    // 0x23aac0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x23aac0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_23aac4:
    // 0x23aac4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23aac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23aac8:
    // 0x23aac8: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x23aac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_23aacc:
    // 0x23aacc: 0x24e7ffd0  addiu       $a3, $a3, -0x30
    ctx->pc = 0x23aaccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967248));
label_23aad0:
    // 0x23aad0: 0xc08ea46  jal         func_23A918
label_23aad4:
    if (ctx->pc == 0x23AAD4u) {
        ctx->pc = 0x23AAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AAD0u;
        // 0x23aad4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AAD8u;
        goto label_23aad8;
    }
    ctx->pc = 0x23AAD0u;
    SET_GPR_U32(ctx, 31, 0x23AAD8u);
    ctx->pc = 0x23AAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AAD0u;
    // 0x23aad4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A918u;
    { ctx->pc = 0x23a918; return; }
    ctx->pc = 0x23AAD8u;
label_23aad8:
    // 0x23aad8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x23aad8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23aadc:
    // 0x23aadc: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x23aadcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_23aae0:
    // 0x23aae0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_23aae4:
    if (ctx->pc == 0x23AAE4u) {
        ctx->pc = 0x23AAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AAE0u;
        // 0x23aae4: 0x82070000  lb          $a3, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AAE8u;
        goto label_23aae8;
    }
    ctx->pc = 0x23AAE0u;
    {
        const bool branch_taken_0x23aae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23aae0) {
            ctx->pc = 0x23AAE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23AAE0u;
            // 0x23aae4: 0x82070000  lb          $a3, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23AAC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23aac0;
        }
    }
    ctx->pc = 0x23AAE8u;
label_23aae8:
    // 0x23aae8: 0x10000002  b           . + 4 + (0x2 << 2)
label_23aaec:
    if (ctx->pc == 0x23AAECu) {
        ctx->pc = 0x23AAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AAE8u;
        // 0x23aaec: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AAF0u;
        goto label_23aaf0;
    }
    ctx->pc = 0x23AAE8u;
    {
        const bool branch_taken_0x23aae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AAE8u;
        // 0x23aaec: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23aae8) {
            ctx->pc = 0x23AAF4u;
            goto label_23aaf4;
        }
    }
    ctx->pc = 0x23AAF0u;
label_23aaf0:
    // 0x23aaf0: 0x2610000a  addiu       $s0, $s0, 0xA
    ctx->pc = 0x23aaf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 10));
label_23aaf4:
    // 0x23aaf4: 0x234102a  slt         $v0, $s1, $s4
    ctx->pc = 0x23aaf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_23aaf8:
    // 0x23aaf8: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_23aafc:
    if (ctx->pc == 0x23AAFCu) {
        ctx->pc = 0x23AAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AAF8u;
        // 0x23aafc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AB00u;
        goto label_23ab00;
    }
    ctx->pc = 0x23AAF8u;
    {
        const bool branch_taken_0x23aaf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23aaf8) {
            ctx->pc = 0x23AAFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23AAF8u;
            // 0x23aafc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23AB30u;
            goto label_23ab30;
        }
    }
    ctx->pc = 0x23AB00u;
label_23ab00:
    // 0x23ab00: 0x2918823  subu        $s1, $s4, $s1
    ctx->pc = 0x23ab00u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
label_23ab04:
    // 0x23ab04: 0x0  nop
    ctx->pc = 0x23ab04u;
    // NOP
label_23ab08:
    // 0x23ab08: 0x82070000  lb          $a3, 0x0($s0)
    ctx->pc = 0x23ab08u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_23ab0c:
    // 0x23ab0c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x23ab0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_23ab10:
    // 0x23ab10: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23ab10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23ab14:
    // 0x23ab14: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x23ab14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_23ab18:
    // 0x23ab18: 0x24e7ffd0  addiu       $a3, $a3, -0x30
    ctx->pc = 0x23ab18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967248));
label_23ab1c:
    // 0x23ab1c: 0xc08ea46  jal         func_23A918
label_23ab20:
    if (ctx->pc == 0x23AB20u) {
        ctx->pc = 0x23AB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AB1Cu;
        // 0x23ab20: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AB24u;
        goto label_23ab24;
    }
    ctx->pc = 0x23AB1Cu;
    SET_GPR_U32(ctx, 31, 0x23AB24u);
    ctx->pc = 0x23AB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AB1Cu;
    // 0x23ab20: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A918u;
    { ctx->pc = 0x23a918; return; }
    ctx->pc = 0x23AB24u;
label_23ab24:
    // 0x23ab24: 0x1620fff8  bnez        $s1, . + 4 + (-0x8 << 2)
label_23ab28:
    if (ctx->pc == 0x23AB28u) {
        ctx->pc = 0x23AB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AB24u;
        // 0x23ab28: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AB2Cu;
        goto label_23ab2c;
    }
    ctx->pc = 0x23AB24u;
    {
        const bool branch_taken_0x23ab24 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x23AB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AB24u;
        // 0x23ab28: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ab24) {
            ctx->pc = 0x23AB08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23ab08;
        }
    }
    ctx->pc = 0x23AB2Cu;
label_23ab2c:
    // 0x23ab2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23ab2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23ab30:
    // 0x23ab30: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x23ab30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23ab34:
    // 0x23ab34: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23ab34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_23ab38:
    // 0x23ab38: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23ab38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23ab3c:
    // 0x23ab3c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x23ab3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_23ab40:
    // 0x23ab40: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x23ab40u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23ab44:
    // 0x23ab44: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x23ab44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_23ab48:
    // 0x23ab48: 0x3e00008  jr          $ra
label_23ab4c:
    if (ctx->pc == 0x23AB4Cu) {
        ctx->pc = 0x23AB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AB48u;
        // 0x23ab4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AB50u;
        goto label_23ab50;
    }
    ctx->pc = 0x23AB48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23AB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AB48u;
        // 0x23ab4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23AB48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23AB50u;
label_23ab50:
    // 0x23ab50: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x23ab50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_23ab54:
    // 0x23ab54: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x23ab54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_23ab58:
    // 0x23ab58: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_23ab5c:
    if (ctx->pc == 0x23AB5Cu) {
        ctx->pc = 0x23AB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AB58u;
        // 0x23ab5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AB60u;
        goto label_23ab60;
    }
    ctx->pc = 0x23AB58u;
    {
        const bool branch_taken_0x23ab58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23AB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AB58u;
        // 0x23ab5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ab58) {
            ctx->pc = 0x23AB68u;
            goto label_23ab68;
        }
    }
    ctx->pc = 0x23AB60u;
label_23ab60:
    // 0x23ab60: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x23ab60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_23ab64:
    // 0x23ab64: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x23ab64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_23ab68:
    // 0x23ab68: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x23ab68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
label_23ab6c:
    // 0x23ab6c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x23ab6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_23ab70:
    // 0x23ab70: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_23ab74:
    if (ctx->pc == 0x23AB74u) {
        ctx->pc = 0x23AB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AB70u;
        // 0x23ab74: 0x3c02f000  lui         $v0, 0xF000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AB78u;
        goto label_23ab78;
    }
    ctx->pc = 0x23AB70u;
    {
        const bool branch_taken_0x23ab70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23AB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AB70u;
        // 0x23ab74: 0x3c02f000  lui         $v0, 0xF000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ab70) {
            ctx->pc = 0x23AB80u;
            goto label_23ab80;
        }
    }
    ctx->pc = 0x23AB78u;
label_23ab78:
    // 0x23ab78: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x23ab78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_23ab7c:
    // 0x23ab7c: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x23ab7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_23ab80:
    // 0x23ab80: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x23ab80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_23ab84:
    // 0x23ab84: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_23ab88:
    if (ctx->pc == 0x23AB88u) {
        ctx->pc = 0x23AB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AB84u;
        // 0x23ab88: 0x3c02c000  lui         $v0, 0xC000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AB8Cu;
        goto label_23ab8c;
    }
    ctx->pc = 0x23AB84u;
    {
        const bool branch_taken_0x23ab84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23AB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AB84u;
        // 0x23ab88: 0x3c02c000  lui         $v0, 0xC000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ab84) {
            ctx->pc = 0x23AB94u;
            goto label_23ab94;
        }
    }
    ctx->pc = 0x23AB8Cu;
label_23ab8c:
    // 0x23ab8c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x23ab8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_23ab90:
    // 0x23ab90: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x23ab90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_23ab94:
    // 0x23ab94: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x23ab94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_23ab98:
    // 0x23ab98: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_23ab9c:
    if (ctx->pc == 0x23AB9Cu) {
        ctx->pc = 0x23ABA0u;
        goto label_23aba0;
    }
    ctx->pc = 0x23AB98u;
    {
        const bool branch_taken_0x23ab98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23ab98) {
            ctx->pc = 0x23ABA8u;
            goto label_23aba8;
        }
    }
    ctx->pc = 0x23ABA0u;
label_23aba0:
    // 0x23aba0: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x23aba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_23aba4:
    // 0x23aba4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x23aba4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_23aba8:
    // 0x23aba8: 0x4800007  bltz        $a0, . + 4 + (0x7 << 2)
label_23abac:
    if (ctx->pc == 0x23ABACu) {
        ctx->pc = 0x23ABACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ABA8u;
        // 0x23abac: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ABB0u;
        goto label_23abb0;
    }
    ctx->pc = 0x23ABA8u;
    {
        const bool branch_taken_0x23aba8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x23ABACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ABA8u;
        // 0x23abac: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23aba8) {
            ctx->pc = 0x23ABC8u;
            goto label_23abc8;
        }
    }
    ctx->pc = 0x23ABB0u;
label_23abb0:
    // 0x23abb0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x23abb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_23abb4:
    // 0x23abb4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x23abb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_23abb8:
    // 0x23abb8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x23abb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_23abbc:
    // 0x23abbc: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_23abc0:
    if (ctx->pc == 0x23ABC0u) {
        ctx->pc = 0x23ABC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ABBCu;
        // 0x23abc0: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ABC4u;
        goto label_23abc4;
    }
    ctx->pc = 0x23ABBCu;
    {
        const bool branch_taken_0x23abbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23ABC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ABBCu;
        // 0x23abc0: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23abbc) {
            ctx->pc = 0x23ABC8u;
            goto label_23abc8;
        }
    }
    ctx->pc = 0x23ABC4u;
label_23abc4:
    // 0x23abc4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x23abc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23abc8:
    // 0x23abc8: 0x3e00008  jr          $ra
label_23abcc:
    if (ctx->pc == 0x23ABCCu) {
        ctx->pc = 0x23ABD0u;
        goto label_23abd0;
    }
    ctx->pc = 0x23ABC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23ABC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23ABD0u;
label_23abd0:
    // 0x23abd0: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x23abd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23abd4:
    // 0x23abd4: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x23abd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
label_23abd8:
    // 0x23abd8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_23abdc:
    if (ctx->pc == 0x23ABDCu) {
        ctx->pc = 0x23ABDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ABD8u;
        // 0x23abdc: 0x30a30001  andi        $v1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ABE0u;
        goto label_23abe0;
    }
    ctx->pc = 0x23ABD8u;
    {
        const bool branch_taken_0x23abd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23ABDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ABD8u;
        // 0x23abdc: 0x30a30001  andi        $v1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23abd8) {
            ctx->pc = 0x23AC10u;
            goto label_23ac10;
        }
    }
    ctx->pc = 0x23ABE0u;
label_23abe0:
    // 0x23abe0: 0x14600028  bnez        $v1, . + 4 + (0x28 << 2)
label_23abe4:
    if (ctx->pc == 0x23ABE4u) {
        ctx->pc = 0x23ABE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ABE0u;
        // 0x23abe4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ABE8u;
        goto label_23abe8;
    }
    ctx->pc = 0x23ABE0u;
    {
        const bool branch_taken_0x23abe0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23ABE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ABE0u;
        // 0x23abe4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23abe0) {
            ctx->pc = 0x23AC84u;
            goto label_23ac84;
        }
    }
    ctx->pc = 0x23ABE8u;
label_23abe8:
    // 0x23abe8: 0x30a20002  andi        $v0, $a1, 0x2
    ctx->pc = 0x23abe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
label_23abec:
    // 0x23abec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_23abf0:
    if (ctx->pc == 0x23ABF0u) {
        ctx->pc = 0x23ABF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ABECu;
        // 0x23abf0: 0x51842  srl         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ABF4u;
        goto label_23abf4;
    }
    ctx->pc = 0x23ABECu;
    {
        const bool branch_taken_0x23abec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23ABF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ABECu;
        // 0x23abf0: 0x51842  srl         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23abec) {
            ctx->pc = 0x23AC00u;
            goto label_23ac00;
        }
    }
    ctx->pc = 0x23ABF4u;
label_23abf4:
    // 0x23abf4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23abf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23abf8:
    // 0x23abf8: 0x3e00008  jr          $ra
label_23abfc:
    if (ctx->pc == 0x23ABFCu) {
        ctx->pc = 0x23ABFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ABF8u;
        // 0x23abfc: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AC00u;
        goto label_23ac00;
    }
    ctx->pc = 0x23ABF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23ABFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ABF8u;
        // 0x23abfc: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23ABF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23AC00u;
label_23ac00:
    // 0x23ac00: 0x51882  srl         $v1, $a1, 2
    ctx->pc = 0x23ac00u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
label_23ac04:
    // 0x23ac04: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23ac04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23ac08:
    // 0x23ac08: 0x3e00008  jr          $ra
label_23ac0c:
    if (ctx->pc == 0x23AC0Cu) {
        ctx->pc = 0x23AC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AC08u;
        // 0x23ac0c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AC10u;
        goto label_23ac10;
    }
    ctx->pc = 0x23AC08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23AC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AC08u;
        // 0x23ac0c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23AC08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23AC10u;
label_23ac10:
    // 0x23ac10: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x23ac10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_23ac14:
    // 0x23ac14: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_23ac18:
    if (ctx->pc == 0x23AC18u) {
        ctx->pc = 0x23AC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AC14u;
        // 0x23ac18: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AC1Cu;
        goto label_23ac1c;
    }
    ctx->pc = 0x23AC14u;
    {
        const bool branch_taken_0x23ac14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23AC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AC14u;
        // 0x23ac18: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ac14) {
            ctx->pc = 0x23AC24u;
            goto label_23ac24;
        }
    }
    ctx->pc = 0x23AC1Cu;
label_23ac1c:
    // 0x23ac1c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x23ac1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_23ac20:
    // 0x23ac20: 0x52c02  srl         $a1, $a1, 16
    ctx->pc = 0x23ac20u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
label_23ac24:
    // 0x23ac24: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x23ac24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_23ac28:
    // 0x23ac28: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_23ac2c:
    if (ctx->pc == 0x23AC2Cu) {
        ctx->pc = 0x23AC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AC28u;
        // 0x23ac2c: 0x30a2000f  andi        $v0, $a1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AC30u;
        goto label_23ac30;
    }
    ctx->pc = 0x23AC28u;
    {
        const bool branch_taken_0x23ac28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23AC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AC28u;
        // 0x23ac2c: 0x30a2000f  andi        $v0, $a1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ac28) {
            ctx->pc = 0x23AC3Cu;
            goto label_23ac3c;
        }
    }
    ctx->pc = 0x23AC30u;
label_23ac30:
    // 0x23ac30: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x23ac30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_23ac34:
    // 0x23ac34: 0x52a02  srl         $a1, $a1, 8
    ctx->pc = 0x23ac34u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
label_23ac38:
    // 0x23ac38: 0x30a2000f  andi        $v0, $a1, 0xF
    ctx->pc = 0x23ac38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
label_23ac3c:
    // 0x23ac3c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_23ac40:
    if (ctx->pc == 0x23AC40u) {
        ctx->pc = 0x23AC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AC3Cu;
        // 0x23ac40: 0x30a20003  andi        $v0, $a1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AC44u;
        goto label_23ac44;
    }
    ctx->pc = 0x23AC3Cu;
    {
        const bool branch_taken_0x23ac3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23AC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AC3Cu;
        // 0x23ac40: 0x30a20003  andi        $v0, $a1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ac3c) {
            ctx->pc = 0x23AC50u;
            goto label_23ac50;
        }
    }
    ctx->pc = 0x23AC44u;
label_23ac44:
    // 0x23ac44: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x23ac44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_23ac48:
    // 0x23ac48: 0x52902  srl         $a1, $a1, 4
    ctx->pc = 0x23ac48u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
label_23ac4c:
    // 0x23ac4c: 0x30a20003  andi        $v0, $a1, 0x3
    ctx->pc = 0x23ac4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
label_23ac50:
    // 0x23ac50: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_23ac54:
    if (ctx->pc == 0x23AC54u) {
        ctx->pc = 0x23AC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AC50u;
        // 0x23ac54: 0x30a20001  andi        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AC58u;
        goto label_23ac58;
    }
    ctx->pc = 0x23AC50u;
    {
        const bool branch_taken_0x23ac50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23AC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AC50u;
        // 0x23ac54: 0x30a20001  andi        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ac50) {
            ctx->pc = 0x23AC64u;
            goto label_23ac64;
        }
    }
    ctx->pc = 0x23AC58u;
label_23ac58:
    // 0x23ac58: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x23ac58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_23ac5c:
    // 0x23ac5c: 0x52882  srl         $a1, $a1, 2
    ctx->pc = 0x23ac5cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
label_23ac60:
    // 0x23ac60: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x23ac60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_23ac64:
    // 0x23ac64: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_23ac68:
    if (ctx->pc == 0x23AC68u) {
        ctx->pc = 0x23AC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AC64u;
        // 0x23ac68: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AC6Cu;
        goto label_23ac6c;
    }
    ctx->pc = 0x23AC64u;
    {
        const bool branch_taken_0x23ac64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23ac64) {
            ctx->pc = 0x23AC68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23AC64u;
            // 0x23ac68: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23AC80u;
            goto label_23ac80;
        }
    }
    ctx->pc = 0x23AC6Cu;
label_23ac6c:
    // 0x23ac6c: 0x52842  srl         $a1, $a1, 1
    ctx->pc = 0x23ac6cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
label_23ac70:
    // 0x23ac70: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23ac70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_23ac74:
    // 0x23ac74: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_23ac78:
    if (ctx->pc == 0x23AC78u) {
        ctx->pc = 0x23AC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AC74u;
        // 0x23ac78: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AC7Cu;
        goto label_23ac7c;
    }
    ctx->pc = 0x23AC74u;
    {
        const bool branch_taken_0x23ac74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AC74u;
        // 0x23ac78: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ac74) {
            ctx->pc = 0x23AC84u;
            goto label_23ac84;
        }
    }
    ctx->pc = 0x23AC7Cu;
label_23ac7c:
    // 0x23ac7c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x23ac7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_23ac80:
    // 0x23ac80: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x23ac80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_23ac84:
    // 0x23ac84: 0x3e00008  jr          $ra
label_23ac88:
    if (ctx->pc == 0x23AC88u) {
        ctx->pc = 0x23AC8Cu;
        goto label_23ac8c;
    }
    ctx->pc = 0x23AC84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23AC84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23AC8Cu;
label_23ac8c:
    // 0x23ac8c: 0x0  nop
    ctx->pc = 0x23ac8cu;
    // NOP
label_23ac90:
    // 0x23ac90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23ac90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_23ac94:
    // 0x23ac94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23ac94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23ac98:
    // 0x23ac98: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x23ac98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23ac9c:
    // 0x23ac9c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x23ac9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_23aca0:
    // 0x23aca0: 0xc08ea10  jal         func_23A840
label_23aca4:
    if (ctx->pc == 0x23ACA4u) {
        ctx->pc = 0x23ACA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ACA0u;
        // 0x23aca4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ACA8u;
        goto label_23aca8;
    }
    ctx->pc = 0x23ACA0u;
    SET_GPR_U32(ctx, 31, 0x23ACA8u);
    ctx->pc = 0x23ACA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23ACA0u;
    // 0x23aca4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A840u;
    { ctx->pc = 0x23a840; return; }
    ctx->pc = 0x23ACA8u;
label_23aca8:
    // 0x23aca8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23aca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23acac:
    // 0x23acac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23acacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23acb0:
    // 0x23acb0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23acb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_23acb4:
    // 0x23acb4: 0xac900014  sw          $s0, 0x14($a0)
    ctx->pc = 0x23acb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 16));
label_23acb8:
    // 0x23acb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23acb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23acbc:
    // 0x23acbc: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x23acbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
label_23acc0:
    // 0x23acc0: 0x3e00008  jr          $ra
label_23acc4:
    if (ctx->pc == 0x23ACC4u) {
        ctx->pc = 0x23ACC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ACC0u;
        // 0x23acc4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ACC8u;
        goto label_23acc8;
    }
    ctx->pc = 0x23ACC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23ACC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ACC0u;
        // 0x23acc4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23ACC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23ACC8u;
label_23acc8:
    // 0x23acc8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23acc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_23accc:
    // 0x23accc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23acccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23acd0:
    // 0x23acd0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x23acd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23acd4:
    // 0x23acd4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23acd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_23acd8:
    // 0x23acd8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x23acd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_23acdc:
    // 0x23acdc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23acdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_23ace0:
    // 0x23ace0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x23ace0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_23ace4:
    // 0x23ace4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x23ace4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_23ace8:
    // 0x23ace8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x23ace8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_23acec:
    // 0x23acec: 0x8e130010  lw          $s3, 0x10($s0)
    ctx->pc = 0x23acecu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_23acf0:
    // 0x23acf0: 0x8e510010  lw          $s1, 0x10($s2)
    ctx->pc = 0x23acf0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_23acf4:
    // 0x23acf4: 0x271102a  slt         $v0, $s3, $s1
    ctx->pc = 0x23acf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_23acf8:
    // 0x23acf8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_23acfc:
    if (ctx->pc == 0x23ACFCu) {
        ctx->pc = 0x23ACFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ACF8u;
        // 0x23acfc: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AD00u;
        goto label_23ad00;
    }
    ctx->pc = 0x23ACF8u;
    {
        const bool branch_taken_0x23acf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23acf8) {
            ctx->pc = 0x23ACFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23ACF8u;
            // 0x23acfc: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23AD18u;
            goto label_23ad18;
        }
    }
    ctx->pc = 0x23AD00u;
label_23ad00:
    // 0x23ad00: 0x200c02d  daddu       $t8, $s0, $zero
    ctx->pc = 0x23ad00u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23ad04:
    // 0x23ad04: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x23ad04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23ad08:
    // 0x23ad08: 0x300902d  daddu       $s2, $t8, $zero
    ctx->pc = 0x23ad08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
label_23ad0c:
    // 0x23ad0c: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x23ad0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23ad10:
    // 0x23ad10: 0x8e510010  lw          $s1, 0x10($s2)
    ctx->pc = 0x23ad10u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_23ad14:
    // 0x23ad14: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x23ad14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_23ad18:
    // 0x23ad18: 0x271a021  addu        $s4, $s3, $s1
    ctx->pc = 0x23ad18u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_23ad1c:
    // 0x23ad1c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x23ad1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23ad20:
    // 0x23ad20: 0xb4282a  slt         $a1, $a1, $s4
    ctx->pc = 0x23ad20u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_23ad24:
    // 0x23ad24: 0xc08ea10  jal         func_23A840
label_23ad28:
    if (ctx->pc == 0x23AD28u) {
        ctx->pc = 0x23AD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AD24u;
        // 0x23ad28: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AD2Cu;
        goto label_23ad2c;
    }
    ctx->pc = 0x23AD24u;
    SET_GPR_U32(ctx, 31, 0x23AD2Cu);
    ctx->pc = 0x23AD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AD24u;
    // 0x23ad28: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A840u;
    { ctx->pc = 0x23a840; return; }
    ctx->pc = 0x23AD2Cu;
label_23ad2c:
    // 0x23ad2c: 0x14c880  sll         $t9, $s4, 2
    ctx->pc = 0x23ad2cu;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_23ad30:
    // 0x23ad30: 0x40c02d  daddu       $t8, $v0, $zero
    ctx->pc = 0x23ad30u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23ad34:
    // 0x23ad34: 0x270f0014  addiu       $t7, $t8, 0x14
    ctx->pc = 0x23ad34u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 24), 20));
label_23ad38:
    // 0x23ad38: 0x1f96821  addu        $t5, $t7, $t9
    ctx->pc = 0x23ad38u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 25)));
label_23ad3c:
    // 0x23ad3c: 0x1ed102b  sltu        $v0, $t7, $t5
    ctx->pc = 0x23ad3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
label_23ad40:
    // 0x23ad40: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_23ad44:
    if (ctx->pc == 0x23AD44u) {
        ctx->pc = 0x23AD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AD40u;
        // 0x23ad44: 0x1e0402d  daddu       $t0, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AD48u;
        goto label_23ad48;
    }
    ctx->pc = 0x23AD40u;
    {
        const bool branch_taken_0x23ad40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AD40u;
        // 0x23ad44: 0x1e0402d  daddu       $t0, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ad40) {
            ctx->pc = 0x23AD6Cu;
            goto label_23ad6c;
        }
    }
    ctx->pc = 0x23AD48u;
label_23ad48:
    // 0x23ad48: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x23ad48u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
label_23ad4c:
    // 0x23ad4c: 0x0  nop
    ctx->pc = 0x23ad4cu;
    // NOP
label_23ad50:
    // 0x23ad50: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x23ad50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_23ad54:
    // 0x23ad54: 0x10d102b  sltu        $v0, $t0, $t5
    ctx->pc = 0x23ad54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
label_23ad58:
    // 0x23ad58: 0x0  nop
    ctx->pc = 0x23ad58u;
    // NOP
label_23ad5c:
    // 0x23ad5c: 0x0  nop
    ctx->pc = 0x23ad5cu;
    // NOP
label_23ad60:
    // 0x23ad60: 0x0  nop
    ctx->pc = 0x23ad60u;
    // NOP
label_23ad64:
    // 0x23ad64: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
label_23ad68:
    if (ctx->pc == 0x23AD68u) {
        ctx->pc = 0x23AD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AD64u;
        // 0x23ad68: 0xad000000  sw          $zero, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AD6Cu;
        goto label_23ad6c;
    }
    ctx->pc = 0x23AD64u;
    {
        const bool branch_taken_0x23ad64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23ad64) {
            ctx->pc = 0x23AD68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23AD64u;
            // 0x23ad68: 0xad000000  sw          $zero, 0x0($t0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23AD50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23ad50;
        }
    }
    ctx->pc = 0x23AD6Cu;
label_23ad6c:
    // 0x23ad6c: 0x264b0014  addiu       $t3, $s2, 0x14
    ctx->pc = 0x23ad6cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
label_23ad70:
    // 0x23ad70: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x23ad70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_23ad74:
    // 0x23ad74: 0x1628821  addu        $s1, $t3, $v0
    ctx->pc = 0x23ad74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
label_23ad78:
    // 0x23ad78: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x23ad78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_23ad7c:
    // 0x23ad7c: 0x260d0014  addiu       $t5, $s0, 0x14
    ctx->pc = 0x23ad7cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_23ad80:
    // 0x23ad80: 0x171182b  sltu        $v1, $t3, $s1
    ctx->pc = 0x23ad80u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_23ad84:
    // 0x23ad84: 0x1a27021  addu        $t6, $t5, $v0
    ctx->pc = 0x23ad84u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
label_23ad88:
    // 0x23ad88: 0x1060003e  beqz        $v1, . + 4 + (0x3E << 2)
label_23ad8c:
    if (ctx->pc == 0x23AD8Cu) {
        ctx->pc = 0x23AD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AD88u;
        // 0x23ad8c: 0x1e0602d  daddu       $t4, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AD90u;
        goto label_23ad90;
    }
    ctx->pc = 0x23AD88u;
    {
        const bool branch_taken_0x23ad88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AD88u;
        // 0x23ad8c: 0x1e0602d  daddu       $t4, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ad88) {
            ctx->pc = 0x23AE84u;
            goto label_23ae84;
        }
    }
    ctx->pc = 0x23AD90u;
label_23ad90:
    // 0x23ad90: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x23ad90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_23ad94:
    // 0x23ad94: 0x3049ffff  andi        $t1, $v0, 0xFFFF
    ctx->pc = 0x23ad94u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_23ad98:
    // 0x23ad98: 0x11200019  beqz        $t1, . + 4 + (0x19 << 2)
label_23ad9c:
    if (ctx->pc == 0x23AD9Cu) {
        ctx->pc = 0x23AD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AD98u;
        // 0x23ad9c: 0x180382d  daddu       $a3, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ADA0u;
        goto label_23ada0;
    }
    ctx->pc = 0x23AD98u;
    {
        const bool branch_taken_0x23ad98 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AD98u;
        // 0x23ad9c: 0x180382d  daddu       $a3, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ad98) {
            ctx->pc = 0x23AE00u;
            goto label_23ae00;
        }
    }
    ctx->pc = 0x23ADA0u;
label_23ada0:
    // 0x23ada0: 0x1a0402d  daddu       $t0, $t5, $zero
    ctx->pc = 0x23ada0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_23ada4:
    // 0x23ada4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x23ada4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23ada8:
    // 0x23ada8: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x23ada8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_23adac:
    // 0x23adac: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x23adacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_23adb0:
    // 0x23adb0: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x23adb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_23adb4:
    // 0x23adb4: 0x10e302b  sltu        $a2, $t0, $t6
    ctx->pc = 0x23adb4u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
label_23adb8:
    // 0x23adb8: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x23adb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_23adbc:
    // 0x23adbc: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x23adbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
label_23adc0:
    // 0x23adc0: 0x491018  mult        $v0, $v0, $t1
    ctx->pc = 0x23adc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_23adc4:
    // 0x23adc4: 0x70691818  mult1       $v1, $v1, $t1
    ctx->pc = 0x23adc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 9); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_23adc8:
    // 0x23adc8: 0x30a4ffff  andi        $a0, $a1, 0xFFFF
    ctx->pc = 0x23adc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_23adcc:
    // 0x23adcc: 0x52c02  srl         $a1, $a1, 16
    ctx->pc = 0x23adccu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
label_23add0:
    // 0x23add0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x23add0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_23add4:
    // 0x23add4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x23add4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_23add8:
    // 0x23add8: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x23add8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_23addc:
    // 0x23addc: 0x25402  srl         $t2, $v0, 16
    ctx->pc = 0x23addcu;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
label_23ade0:
    // 0x23ade0: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x23ade0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
label_23ade4:
    // 0x23ade4: 0x6a1021  addu        $v0, $v1, $t2
    ctx->pc = 0x23ade4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_23ade8:
    // 0x23ade8: 0xa4e20002  sh          $v0, 0x2($a3)
    ctx->pc = 0x23ade8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 2));
label_23adec:
    // 0x23adec: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x23adecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_23adf0:
    // 0x23adf0: 0x14c0ffed  bnez        $a2, . + 4 + (-0x13 << 2)
label_23adf4:
    if (ctx->pc == 0x23ADF4u) {
        ctx->pc = 0x23ADF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ADF0u;
        // 0x23adf4: 0x25402  srl         $t2, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23ADF8u;
        goto label_23adf8;
    }
    ctx->pc = 0x23ADF0u;
    {
        const bool branch_taken_0x23adf0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x23ADF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ADF0u;
        // 0x23adf4: 0x25402  srl         $t2, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23adf0) {
            ctx->pc = 0x23ADA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23ada8;
        }
    }
    ctx->pc = 0x23ADF8u;
label_23adf8:
    // 0x23adf8: 0xacea0000  sw          $t2, 0x0($a3)
    ctx->pc = 0x23adf8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 10));
label_23adfc:
    // 0x23adfc: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x23adfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_23ae00:
    // 0x23ae00: 0x24c02  srl         $t1, $v0, 16
    ctx->pc = 0x23ae00u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
label_23ae04:
    // 0x23ae04: 0x1120001b  beqz        $t1, . + 4 + (0x1B << 2)
label_23ae08:
    if (ctx->pc == 0x23AE08u) {
        ctx->pc = 0x23AE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AE04u;
        // 0x23ae08: 0x180382d  daddu       $a3, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AE0Cu;
        goto label_23ae0c;
    }
    ctx->pc = 0x23AE04u;
    {
        const bool branch_taken_0x23ae04 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AE04u;
        // 0x23ae08: 0x180382d  daddu       $a3, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ae04) {
            ctx->pc = 0x23AE74u;
            goto label_23ae74;
        }
    }
    ctx->pc = 0x23AE0Cu;
label_23ae0c:
    // 0x23ae0c: 0x1a0402d  daddu       $t0, $t5, $zero
    ctx->pc = 0x23ae0cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_23ae10:
    // 0x23ae10: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x23ae10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_23ae14:
    // 0x23ae14: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x23ae14u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23ae18:
    // 0x23ae18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23ae18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23ae1c:
    // 0x23ae1c: 0x0  nop
    ctx->pc = 0x23ae1cu;
    // NOP
label_23ae20:
    // 0x23ae20: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x23ae20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_23ae24:
    // 0x23ae24: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x23ae24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_23ae28:
    // 0x23ae28: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x23ae28u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
label_23ae2c:
    // 0x23ae2c: 0x42402  srl         $a0, $a0, 16
    ctx->pc = 0x23ae2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
label_23ae30:
    // 0x23ae30: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x23ae30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_23ae34:
    // 0x23ae34: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x23ae34u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
label_23ae38:
    // 0x23ae38: 0x491018  mult        $v0, $v0, $t1
    ctx->pc = 0x23ae38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_23ae3c:
    // 0x23ae3c: 0x70691818  mult1       $v1, $v1, $t1
    ctx->pc = 0x23ae3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 9); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_23ae40:
    // 0x23ae40: 0x10e282b  sltu        $a1, $t0, $t6
    ctx->pc = 0x23ae40u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
label_23ae44:
    // 0x23ae44: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x23ae44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_23ae48:
    // 0x23ae48: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x23ae48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_23ae4c:
    // 0x23ae4c: 0xa4e20002  sh          $v0, 0x2($a3)
    ctx->pc = 0x23ae4cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 2));
label_23ae50:
    // 0x23ae50: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x23ae50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_23ae54:
    // 0x23ae54: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x23ae54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_23ae58:
    // 0x23ae58: 0x25402  srl         $t2, $v0, 16
    ctx->pc = 0x23ae58u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
label_23ae5c:
    // 0x23ae5c: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x23ae5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_23ae60:
    // 0x23ae60: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23ae60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_23ae64:
    // 0x23ae64: 0x6a1021  addu        $v0, $v1, $t2
    ctx->pc = 0x23ae64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_23ae68:
    // 0x23ae68: 0x14a0ffed  bnez        $a1, . + 4 + (-0x13 << 2)
label_23ae6c:
    if (ctx->pc == 0x23AE6Cu) {
        ctx->pc = 0x23AE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AE68u;
        // 0x23ae6c: 0x25402  srl         $t2, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AE70u;
        goto label_23ae70;
    }
    ctx->pc = 0x23AE68u;
    {
        const bool branch_taken_0x23ae68 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x23AE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AE68u;
        // 0x23ae6c: 0x25402  srl         $t2, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ae68) {
            ctx->pc = 0x23AE20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23ae20;
        }
    }
    ctx->pc = 0x23AE70u;
label_23ae70:
    // 0x23ae70: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x23ae70u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_23ae74:
    // 0x23ae74: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x23ae74u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
label_23ae78:
    // 0x23ae78: 0x171102b  sltu        $v0, $t3, $s1
    ctx->pc = 0x23ae78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_23ae7c:
    // 0x23ae7c: 0x1440ffc4  bnez        $v0, . + 4 + (-0x3C << 2)
label_23ae80:
    if (ctx->pc == 0x23AE80u) {
        ctx->pc = 0x23AE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AE7Cu;
        // 0x23ae80: 0x258c0004  addiu       $t4, $t4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AE84u;
        goto label_23ae84;
    }
    ctx->pc = 0x23AE7Cu;
    {
        const bool branch_taken_0x23ae7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23AE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AE7Cu;
        // 0x23ae80: 0x258c0004  addiu       $t4, $t4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ae7c) {
            ctx->pc = 0x23AD90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23ad90;
        }
    }
    ctx->pc = 0x23AE84u;
label_23ae84:
    // 0x23ae84: 0x1f93821  addu        $a3, $t7, $t9
    ctx->pc = 0x23ae84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 25)));
label_23ae88:
    // 0x23ae88: 0x5a800009  blezl       $s4, . + 4 + (0x9 << 2)
label_23ae8c:
    if (ctx->pc == 0x23AE8Cu) {
        ctx->pc = 0x23AE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AE88u;
        // 0x23ae8c: 0xaf140010  sw          $s4, 0x10($t8) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 24), 16), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AE90u;
        goto label_23ae90;
    }
    ctx->pc = 0x23AE88u;
    {
        const bool branch_taken_0x23ae88 = (GPR_S32(ctx, 20) <= 0);
        if (branch_taken_0x23ae88) {
            ctx->pc = 0x23AE8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23AE88u;
            // 0x23ae8c: 0xaf140010  sw          $s4, 0x10($t8) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 24), 16), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23AEB0u;
            goto label_23aeb0;
        }
    }
    ctx->pc = 0x23AE90u;
label_23ae90:
    // 0x23ae90: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x23ae90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
label_23ae94:
    // 0x23ae94: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x23ae94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_23ae98:
    // 0x23ae98: 0x0  nop
    ctx->pc = 0x23ae98u;
    // NOP
label_23ae9c:
    // 0x23ae9c: 0x0  nop
    ctx->pc = 0x23ae9cu;
    // NOP
label_23aea0:
    // 0x23aea0: 0x0  nop
    ctx->pc = 0x23aea0u;
    // NOP
label_23aea4:
    // 0x23aea4: 0x5040fff8  beql        $v0, $zero, . + 4 + (-0x8 << 2)
label_23aea8:
    if (ctx->pc == 0x23AEA8u) {
        ctx->pc = 0x23AEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AEA4u;
        // 0x23aea8: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AEACu;
        goto label_23aeac;
    }
    ctx->pc = 0x23AEA4u;
    {
        const bool branch_taken_0x23aea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23aea4) {
            ctx->pc = 0x23AEA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23AEA4u;
            // 0x23aea8: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23AE88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23ae88;
        }
    }
    ctx->pc = 0x23AEACu;
label_23aeac:
    // 0x23aeac: 0xaf140010  sw          $s4, 0x10($t8)
    ctx->pc = 0x23aeacu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 16), GPR_U32(ctx, 20));
label_23aeb0:
    // 0x23aeb0: 0x300102d  daddu       $v0, $t8, $zero
    ctx->pc = 0x23aeb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
label_23aeb4:
    // 0x23aeb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23aeb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23aeb8:
    // 0x23aeb8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23aeb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_23aebc:
    // 0x23aebc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23aebcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23aec0:
    // 0x23aec0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x23aec0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_23aec4:
    // 0x23aec4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x23aec4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23aec8:
    // 0x23aec8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x23aec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_23aecc:
    // 0x23aecc: 0x3e00008  jr          $ra
label_23aed0:
    if (ctx->pc == 0x23AED0u) {
        ctx->pc = 0x23AED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AECCu;
        // 0x23aed0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AED4u;
        goto label_23aed4;
    }
    ctx->pc = 0x23AECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23AED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AECCu;
        // 0x23aed0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23AECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23AED4u;
label_23aed4:
    // 0x23aed4: 0x0  nop
    ctx->pc = 0x23aed4u;
    // NOP
label_23aed8:
    // 0x23aed8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23aed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_23aedc:
    // 0x23aedc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23aedcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_23aee0:
    // 0x23aee0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x23aee0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_23aee4:
    // 0x23aee4: 0x32220003  andi        $v0, $s1, 0x3
    ctx->pc = 0x23aee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
label_23aee8:
    // 0x23aee8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23aee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_23aeec:
    // 0x23aeec: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x23aeecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_23aef0:
    // 0x23aef0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x23aef0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23aef4:
    // 0x23aef4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23aef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23aef8:
    // 0x23aef8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x23aef8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23aefc:
    // 0x23aefc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_23af00:
    if (ctx->pc == 0x23AF00u) {
        ctx->pc = 0x23AF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AEFCu;
        // 0x23af00: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AF04u;
        goto label_23af04;
    }
    ctx->pc = 0x23AEFCu;
    {
        const bool branch_taken_0x23aefc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AEFCu;
        // 0x23af00: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23aefc) {
            ctx->pc = 0x23AF20u;
            goto label_23af20;
        }
    }
    ctx->pc = 0x23AF04u;
label_23af04:
    // 0x23af04: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23af04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_23af08:
    // 0x23af08: 0x3c06002d  lui         $a2, 0x2D
    ctx->pc = 0x23af08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)45 << 16));
label_23af0c:
    // 0x23af0c: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x23af0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_23af10:
    // 0x23af10: 0x8cc6e3a4  lw          $a2, -0x1C5C($a2)
    ctx->pc = 0x23af10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294960036)));
label_23af14:
    // 0x23af14: 0xc08ea46  jal         func_23A918
label_23af18:
    if (ctx->pc == 0x23AF18u) {
        ctx->pc = 0x23AF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AF14u;
        // 0x23af18: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AF1Cu;
        goto label_23af1c;
    }
    ctx->pc = 0x23AF14u;
    SET_GPR_U32(ctx, 31, 0x23AF1Cu);
    ctx->pc = 0x23AF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AF14u;
    // 0x23af18: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A918u;
    { ctx->pc = 0x23a918; return; }
    ctx->pc = 0x23AF1Cu;
label_23af1c:
    // 0x23af1c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x23af1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23af20:
    // 0x23af20: 0x118883  sra         $s1, $s1, 2
    ctx->pc = 0x23af20u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 2));
label_23af24:
    // 0x23af24: 0x12200024  beqz        $s1, . + 4 + (0x24 << 2)
label_23af28:
    if (ctx->pc == 0x23AF28u) {
        ctx->pc = 0x23AF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AF24u;
        // 0x23af28: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AF2Cu;
        goto label_23af2c;
    }
    ctx->pc = 0x23AF24u;
    {
        const bool branch_taken_0x23af24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AF24u;
        // 0x23af28: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23af24) {
            ctx->pc = 0x23AFB8u;
            goto label_23afb8;
        }
    }
    ctx->pc = 0x23AF2Cu;
label_23af2c:
    // 0x23af2c: 0x8e700048  lw          $s0, 0x48($s3)
    ctx->pc = 0x23af2cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
label_23af30:
    // 0x23af30: 0x16000014  bnez        $s0, . + 4 + (0x14 << 2)
label_23af34:
    if (ctx->pc == 0x23AF34u) {
        ctx->pc = 0x23AF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AF30u;
        // 0x23af34: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AF38u;
        goto label_23af38;
    }
    ctx->pc = 0x23AF30u;
    {
        const bool branch_taken_0x23af30 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x23AF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AF30u;
        // 0x23af34: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23af30) {
            ctx->pc = 0x23AF84u;
            goto label_23af84;
        }
    }
    ctx->pc = 0x23AF38u;
label_23af38:
    // 0x23af38: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23af38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23af3c:
    // 0x23af3c: 0xc08eb24  jal         func_23AC90
label_23af40:
    if (ctx->pc == 0x23AF40u) {
        ctx->pc = 0x23AF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AF3Cu;
        // 0x23af40: 0x24050271  addiu       $a1, $zero, 0x271 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 625));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AF44u;
        goto label_23af44;
    }
    ctx->pc = 0x23AF3Cu;
    SET_GPR_U32(ctx, 31, 0x23AF44u);
    ctx->pc = 0x23AF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AF3Cu;
    // 0x23af40: 0x24050271  addiu       $a1, $zero, 0x271 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 625));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AC90u;
    goto label_23ac90;
    ctx->pc = 0x23AF44u;
label_23af44:
    // 0x23af44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23af44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23af48:
    // 0x23af48: 0xae620048  sw          $v0, 0x48($s3)
    ctx->pc = 0x23af48u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 2));
label_23af4c:
    // 0x23af4c: 0x1000000c  b           . + 4 + (0xC << 2)
label_23af50:
    if (ctx->pc == 0x23AF50u) {
        ctx->pc = 0x23AF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AF4Cu;
        // 0x23af50: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AF54u;
        goto label_23af54;
    }
    ctx->pc = 0x23AF4Cu;
    {
        const bool branch_taken_0x23af4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AF4Cu;
        // 0x23af50: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23af4c) {
            ctx->pc = 0x23AF80u;
            goto label_23af80;
        }
    }
    ctx->pc = 0x23AF54u;
label_23af54:
    // 0x23af54: 0x0  nop
    ctx->pc = 0x23af54u;
    // NOP
label_23af58:
    // 0x23af58: 0x54600009  bnel        $v1, $zero, . + 4 + (0x9 << 2)
label_23af5c:
    if (ctx->pc == 0x23AF5Cu) {
        ctx->pc = 0x23AF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AF58u;
        // 0x23af5c: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AF60u;
        goto label_23af60;
    }
    ctx->pc = 0x23AF58u;
    {
        const bool branch_taken_0x23af58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23af58) {
            ctx->pc = 0x23AF5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23AF58u;
            // 0x23af5c: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23AF80u;
            goto label_23af80;
        }
    }
    ctx->pc = 0x23AF60u;
label_23af60:
    // 0x23af60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23af60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23af64:
    // 0x23af64: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x23af64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23af68:
    // 0x23af68: 0xc08eb32  jal         func_23ACC8
label_23af6c:
    if (ctx->pc == 0x23AF6Cu) {
        ctx->pc = 0x23AF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AF68u;
        // 0x23af6c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AF70u;
        goto label_23af70;
    }
    ctx->pc = 0x23AF68u;
    SET_GPR_U32(ctx, 31, 0x23AF70u);
    ctx->pc = 0x23AF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AF68u;
    // 0x23af6c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23ACC8u;
    goto label_23acc8;
    ctx->pc = 0x23AF70u;
label_23af70:
    // 0x23af70: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23af70u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23af74:
    // 0x23af74: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x23af74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_23af78:
    // 0x23af78: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x23af78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_23af7c:
    // 0x23af7c: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x23af7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_23af80:
    // 0x23af80: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x23af80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_23af84:
    // 0x23af84: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_23af88:
    if (ctx->pc == 0x23AF88u) {
        ctx->pc = 0x23AF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AF84u;
        // 0x23af88: 0x118843  sra         $s1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AF8Cu;
        goto label_23af8c;
    }
    ctx->pc = 0x23AF84u;
    {
        const bool branch_taken_0x23af84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AF84u;
        // 0x23af88: 0x118843  sra         $s1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23af84) {
            ctx->pc = 0x23AFACu;
            goto label_23afac;
        }
    }
    ctx->pc = 0x23AF8Cu;
label_23af8c:
    // 0x23af8c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x23af8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23af90:
    // 0x23af90: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23af90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23af94:
    // 0x23af94: 0xc08eb32  jal         func_23ACC8
label_23af98:
    if (ctx->pc == 0x23AF98u) {
        ctx->pc = 0x23AF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AF94u;
        // 0x23af98: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AF9Cu;
        goto label_23af9c;
    }
    ctx->pc = 0x23AF94u;
    SET_GPR_U32(ctx, 31, 0x23AF9Cu);
    ctx->pc = 0x23AF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AF94u;
    // 0x23af98: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23ACC8u;
    goto label_23acc8;
    ctx->pc = 0x23AF9Cu;
label_23af9c:
    // 0x23af9c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23af9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23afa0:
    // 0x23afa0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x23afa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23afa4:
    // 0x23afa4: 0xc08ea3a  jal         func_23A8E8
label_23afa8:
    if (ctx->pc == 0x23AFA8u) {
        ctx->pc = 0x23AFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AFA4u;
        // 0x23afa8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AFACu;
        goto label_23afac;
    }
    ctx->pc = 0x23AFA4u;
    SET_GPR_U32(ctx, 31, 0x23AFACu);
    ctx->pc = 0x23AFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AFA4u;
    // 0x23afa8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A8E8u;
    { ctx->pc = 0x23a8e8; return; }
    ctx->pc = 0x23AFACu;
label_23afac:
    // 0x23afac: 0x5620ffea  bnel        $s1, $zero, . + 4 + (-0x16 << 2)
label_23afb0:
    if (ctx->pc == 0x23AFB0u) {
        ctx->pc = 0x23AFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AFACu;
        // 0x23afb0: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AFB4u;
        goto label_23afb4;
    }
    ctx->pc = 0x23AFACu;
    {
        const bool branch_taken_0x23afac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x23afac) {
            ctx->pc = 0x23AFB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23AFACu;
            // 0x23afb0: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23AF58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23af58;
        }
    }
    ctx->pc = 0x23AFB4u;
label_23afb4:
    // 0x23afb4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x23afb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23afb8:
    // 0x23afb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23afb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23afbc:
    // 0x23afbc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23afbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_23afc0:
    // 0x23afc0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23afc0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23afc4:
    // 0x23afc4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x23afc4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_23afc8:
    // 0x23afc8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23afc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23afcc:
    // 0x23afcc: 0x3e00008  jr          $ra
label_23afd0:
    if (ctx->pc == 0x23AFD0u) {
        ctx->pc = 0x23AFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AFCCu;
        // 0x23afd0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23AFD4u;
        goto label_23afd4;
    }
    ctx->pc = 0x23AFCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23AFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AFCCu;
        // 0x23afd0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23AFCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23AFD4u;
label_23afd4:
    // 0x23afd4: 0x0  nop
    ctx->pc = 0x23afd4u;
    // NOP
label_23afd8:
    // 0x23afd8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x23afd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_23afdc:
    // 0x23afdc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23afdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23afe0:
    // 0x23afe0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x23afe0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_23afe4:
    // 0x23afe4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23afe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_23afe8:
    // 0x23afe8: 0x108943  sra         $s1, $s0, 5
    ctx->pc = 0x23afe8u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 16), 5));
label_23afec:
    // 0x23afec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23afecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_23aff0:
    // 0x23aff0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x23aff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_23aff4:
    // 0x23aff4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x23aff4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23aff8:
    // 0x23aff8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x23aff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_23affc:
    // 0x23affc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x23affcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23b000:
    // 0x23b000: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x23b000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_23b004:
    // 0x23b004: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x23b004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_23b008:
    // 0x23b008: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x23b008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_23b00c:
    // 0x23b00c: 0x8e660008  lw          $a2, 0x8($s3)
    ctx->pc = 0x23b00cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_23b010:
    // 0x23b010: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x23b010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_23b014:
    // 0x23b014: 0x24720001  addiu       $s2, $v1, 0x1
    ctx->pc = 0x23b014u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_23b018:
    // 0x23b018: 0xd2102a  slt         $v0, $a2, $s2
    ctx->pc = 0x23b018u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_23b01c:
    // 0x23b01c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_23b020:
    if (ctx->pc == 0x23B020u) {
        ctx->pc = 0x23B020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B01Cu;
        // 0x23b020: 0x8e650004  lw          $a1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B024u;
        goto label_23b024;
    }
    ctx->pc = 0x23B01Cu;
    {
        const bool branch_taken_0x23b01c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B01Cu;
        // 0x23b020: 0x8e650004  lw          $a1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b01c) {
            ctx->pc = 0x23B044u;
            goto label_23b044;
        }
    }
    ctx->pc = 0x23B024u;
label_23b024:
    // 0x23b024: 0x0  nop
    ctx->pc = 0x23b024u;
    // NOP
label_23b028:
    // 0x23b028: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x23b028u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_23b02c:
    // 0x23b02c: 0xd2102a  slt         $v0, $a2, $s2
    ctx->pc = 0x23b02cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_23b030:
    // 0x23b030: 0x0  nop
    ctx->pc = 0x23b030u;
    // NOP
label_23b034:
    // 0x23b034: 0x0  nop
    ctx->pc = 0x23b034u;
    // NOP
label_23b038:
    // 0x23b038: 0x0  nop
    ctx->pc = 0x23b038u;
    // NOP
label_23b03c:
    // 0x23b03c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_23b040:
    if (ctx->pc == 0x23B040u) {
        ctx->pc = 0x23B040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B03Cu;
        // 0x23b040: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B044u;
        goto label_23b044;
    }
    ctx->pc = 0x23B03Cu;
    {
        const bool branch_taken_0x23b03c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23B040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B03Cu;
        // 0x23b040: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b03c) {
            ctx->pc = 0x23B028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23b028;
        }
    }
    ctx->pc = 0x23B044u;
label_23b044:
    // 0x23b044: 0xc08ea10  jal         func_23A840
label_23b048:
    if (ctx->pc == 0x23B048u) {
        ctx->pc = 0x23B048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B044u;
        // 0x23b048: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B04Cu;
        goto label_23b04c;
    }
    ctx->pc = 0x23B044u;
    SET_GPR_U32(ctx, 31, 0x23B04Cu);
    ctx->pc = 0x23B048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B044u;
    // 0x23b048: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A840u;
    { ctx->pc = 0x23a840; return; }
    ctx->pc = 0x23B04Cu;
label_23b04c:
    // 0x23b04c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x23b04cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23b050:
    // 0x23b050: 0x1a20000a  blez        $s1, . + 4 + (0xA << 2)
label_23b054:
    if (ctx->pc == 0x23B054u) {
        ctx->pc = 0x23B054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B050u;
        // 0x23b054: 0x26870014  addiu       $a3, $s4, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B058u;
        goto label_23b058;
    }
    ctx->pc = 0x23B050u;
    {
        const bool branch_taken_0x23b050 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x23B054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B050u;
        // 0x23b054: 0x26870014  addiu       $a3, $s4, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b050) {
            ctx->pc = 0x23B07Cu;
            goto label_23b07c;
        }
    }
    ctx->pc = 0x23B058u;
label_23b058:
    // 0x23b058: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x23b058u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23b05c:
    // 0x23b05c: 0x0  nop
    ctx->pc = 0x23b05cu;
    // NOP
label_23b060:
    // 0x23b060: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x23b060u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_23b064:
    // 0x23b064: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x23b064u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_23b068:
    // 0x23b068: 0x0  nop
    ctx->pc = 0x23b068u;
    // NOP
label_23b06c:
    // 0x23b06c: 0x0  nop
    ctx->pc = 0x23b06cu;
    // NOP
label_23b070:
    // 0x23b070: 0x0  nop
    ctx->pc = 0x23b070u;
    // NOP
label_23b074:
    // 0x23b074: 0x14c0fffa  bnez        $a2, . + 4 + (-0x6 << 2)
label_23b078:
    if (ctx->pc == 0x23B078u) {
        ctx->pc = 0x23B078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B074u;
        // 0x23b078: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B07Cu;
        goto label_23b07c;
    }
    ctx->pc = 0x23B074u;
    {
        const bool branch_taken_0x23b074 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x23B078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B074u;
        // 0x23b078: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b074) {
            ctx->pc = 0x23B060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23b060;
        }
    }
    ctx->pc = 0x23B07Cu;
label_23b07c:
    // 0x23b07c: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x23b07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_23b080:
    // 0x23b080: 0x26640014  addiu       $a0, $s3, 0x14
    ctx->pc = 0x23b080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
label_23b084:
    // 0x23b084: 0x3210001f  andi        $s0, $s0, 0x1F
    ctx->pc = 0x23b084u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
label_23b088:
    // 0x23b088: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23b088u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_23b08c:
    // 0x23b08c: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
label_23b090:
    if (ctx->pc == 0x23B090u) {
        ctx->pc = 0x23B090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B08Cu;
        // 0x23b090: 0x823021  addu        $a2, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B094u;
        goto label_23b094;
    }
    ctx->pc = 0x23B08Cu;
    {
        const bool branch_taken_0x23b08c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B08Cu;
        // 0x23b090: 0x823021  addu        $a2, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b08c) {
            ctx->pc = 0x23B0D8u;
            goto label_23b0d8;
        }
    }
    ctx->pc = 0x23B094u;
label_23b094:
    // 0x23b094: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x23b094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_23b098:
    // 0x23b098: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x23b098u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23b09c:
    // 0x23b09c: 0x502823  subu        $a1, $v0, $s0
    ctx->pc = 0x23b09cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_23b0a0:
    // 0x23b0a0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x23b0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23b0a4:
    // 0x23b0a4: 0x2021004  sllv        $v0, $v0, $s0
    ctx->pc = 0x23b0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
label_23b0a8:
    // 0x23b0a8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x23b0a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_23b0ac:
    // 0x23b0ac: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x23b0acu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_23b0b0:
    // 0x23b0b0: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x23b0b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_23b0b4:
    // 0x23b0b4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x23b0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23b0b8:
    // 0x23b0b8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x23b0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_23b0bc:
    // 0x23b0bc: 0x86102b  sltu        $v0, $a0, $a2
    ctx->pc = 0x23b0bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_23b0c0:
    // 0x23b0c0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_23b0c4:
    if (ctx->pc == 0x23B0C4u) {
        ctx->pc = 0x23B0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B0C0u;
        // 0x23b0c4: 0xa31806  srlv        $v1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B0C8u;
        goto label_23b0c8;
    }
    ctx->pc = 0x23B0C0u;
    {
        const bool branch_taken_0x23b0c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23B0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B0C0u;
        // 0x23b0c4: 0xa31806  srlv        $v1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b0c0) {
            ctx->pc = 0x23B0A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23b0a0;
        }
    }
    ctx->pc = 0x23B0C8u;
label_23b0c8:
    // 0x23b0c8: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_23b0cc:
    if (ctx->pc == 0x23B0CCu) {
        ctx->pc = 0x23B0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B0C8u;
        // 0x23b0cc: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B0D0u;
        goto label_23b0d0;
    }
    ctx->pc = 0x23B0C8u;
    {
        const bool branch_taken_0x23b0c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B0C8u;
        // 0x23b0cc: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b0c8) {
            ctx->pc = 0x23B0F4u;
            goto label_23b0f4;
        }
    }
    ctx->pc = 0x23B0D0u;
label_23b0d0:
    // 0x23b0d0: 0x10000008  b           . + 4 + (0x8 << 2)
label_23b0d4:
    if (ctx->pc == 0x23B0D4u) {
        ctx->pc = 0x23B0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B0D0u;
        // 0x23b0d4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B0D8u;
        goto label_23b0d8;
    }
    ctx->pc = 0x23B0D0u;
    {
        const bool branch_taken_0x23b0d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B0D0u;
        // 0x23b0d4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b0d0) {
            ctx->pc = 0x23B0F4u;
            goto label_23b0f4;
        }
    }
    ctx->pc = 0x23B0D8u;
label_23b0d8:
    // 0x23b0d8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x23b0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23b0dc:
    // 0x23b0dc: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x23b0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_23b0e0:
    // 0x23b0e0: 0x86182b  sltu        $v1, $a0, $a2
    ctx->pc = 0x23b0e0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_23b0e4:
    // 0x23b0e4: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x23b0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_23b0e8:
    // 0x23b0e8: 0x0  nop
    ctx->pc = 0x23b0e8u;
    // NOP
label_23b0ec:
    // 0x23b0ec: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_23b0f0:
    if (ctx->pc == 0x23B0F0u) {
        ctx->pc = 0x23B0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B0ECu;
        // 0x23b0f0: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B0F4u;
        goto label_23b0f4;
    }
    ctx->pc = 0x23B0ECu;
    {
        const bool branch_taken_0x23b0ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23B0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B0ECu;
        // 0x23b0f0: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b0ec) {
            ctx->pc = 0x23B0D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23b0d8;
        }
    }
    ctx->pc = 0x23B0F4u;
label_23b0f4:
    // 0x23b0f4: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x23b0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_23b0f8:
    // 0x23b0f8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x23b0f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_23b0fc:
    // 0x23b0fc: 0xae820010  sw          $v0, 0x10($s4)
    ctx->pc = 0x23b0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
label_23b100:
    // 0x23b100: 0xc08ea3a  jal         func_23A8E8
label_23b104:
    if (ctx->pc == 0x23B104u) {
        ctx->pc = 0x23B104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B100u;
        // 0x23b104: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B108u;
        goto label_23b108;
    }
    ctx->pc = 0x23B100u;
    SET_GPR_U32(ctx, 31, 0x23B108u);
    ctx->pc = 0x23B104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23B100u;
    // 0x23b104: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A8E8u;
    { ctx->pc = 0x23a8e8; return; }
    ctx->pc = 0x23B108u;
label_23b108:
    // 0x23b108: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x23b108u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_23b10c:
    // 0x23b10c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23b10cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23b110:
    // 0x23b110: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23b110u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_23b114:
    // 0x23b114: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23b114u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23b118:
    // 0x23b118: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x23b118u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_23b11c:
    // 0x23b11c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x23b11cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23b120:
    // 0x23b120: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x23b120u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_23b124:
    // 0x23b124: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x23b124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_23b128:
    // 0x23b128: 0x3e00008  jr          $ra
label_23b12c:
    if (ctx->pc == 0x23B12Cu) {
        ctx->pc = 0x23B12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B128u;
        // 0x23b12c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23B130u;
        goto label_23b130;
    }
    ctx->pc = 0x23B128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23B128u;
        // 0x23b12c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23B130u;
label_23b130:
    // 0x23b130: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x23b130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_23b134:
    // 0x23b134: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x23b134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_23b138:
    // 0x23b138: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x23b138u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_23b13c:
    // 0x23b13c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_23b140:
    if (ctx->pc == 0x23B140u) {
        ctx->pc = 0x23B144u;
        goto label_23b144;
    }
    ctx->pc = 0x23B13Cu;
    {
        const bool branch_taken_0x23b13c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23b13c) {
            ctx->pc = 0x23B190u;
            { ctx->pc = 0x23b190; return; }
        }
    }
    ctx->pc = 0x23B144u;
label_23b144:
    // 0x23b144: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23b144u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_23b148:
    // 0x23b148: 0x248a0014  addiu       $t2, $a0, 0x14
    ctx->pc = 0x23b148u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
label_23b14c:
    // 0x23b14c: 0x24a20014  addiu       $v0, $a1, 0x14
    ctx->pc = 0x23b14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
label_23b150:
    // 0x23b150: 0x1433821  addu        $a3, $t2, $v1
    ctx->pc = 0x23b150u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
label_23b154:
    // 0x23b154: 0x434821  addu        $t1, $v0, $v1
    ctx->pc = 0x23b154u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x23b158u;
    return;
}

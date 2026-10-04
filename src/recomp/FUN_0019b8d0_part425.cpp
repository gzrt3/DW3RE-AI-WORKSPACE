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


void FUN_0019b8d0_part425(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x26a950u: goto label_26a950;
        case 0x26a954u: goto label_26a954;
        case 0x26a958u: goto label_26a958;
        case 0x26a95cu: goto label_26a95c;
        case 0x26a960u: goto label_26a960;
        case 0x26a964u: goto label_26a964;
        case 0x26a968u: goto label_26a968;
        case 0x26a96cu: goto label_26a96c;
        case 0x26a970u: goto label_26a970;
        case 0x26a974u: goto label_26a974;
        case 0x26a978u: goto label_26a978;
        case 0x26a97cu: goto label_26a97c;
        case 0x26a980u: goto label_26a980;
        case 0x26a984u: goto label_26a984;
        case 0x26a988u: goto label_26a988;
        case 0x26a98cu: goto label_26a98c;
        case 0x26a990u: goto label_26a990;
        case 0x26a994u: goto label_26a994;
        case 0x26a998u: goto label_26a998;
        case 0x26a99cu: goto label_26a99c;
        case 0x26a9a0u: goto label_26a9a0;
        case 0x26a9a4u: goto label_26a9a4;
        case 0x26a9a8u: goto label_26a9a8;
        case 0x26a9acu: goto label_26a9ac;
        case 0x26a9b0u: goto label_26a9b0;
        case 0x26a9b4u: goto label_26a9b4;
        case 0x26a9b8u: goto label_26a9b8;
        case 0x26a9bcu: goto label_26a9bc;
        case 0x26a9c0u: goto label_26a9c0;
        case 0x26a9c4u: goto label_26a9c4;
        case 0x26a9c8u: goto label_26a9c8;
        case 0x26a9ccu: goto label_26a9cc;
        case 0x26a9d0u: goto label_26a9d0;
        case 0x26a9d4u: goto label_26a9d4;
        case 0x26a9d8u: goto label_26a9d8;
        case 0x26a9dcu: goto label_26a9dc;
        case 0x26a9e0u: goto label_26a9e0;
        case 0x26a9e4u: goto label_26a9e4;
        case 0x26a9e8u: goto label_26a9e8;
        case 0x26a9ecu: goto label_26a9ec;
        case 0x26a9f0u: goto label_26a9f0;
        case 0x26a9f4u: goto label_26a9f4;
        case 0x26a9f8u: goto label_26a9f8;
        case 0x26a9fcu: goto label_26a9fc;
        case 0x26aa00u: goto label_26aa00;
        case 0x26aa04u: goto label_26aa04;
        case 0x26aa08u: goto label_26aa08;
        case 0x26aa0cu: goto label_26aa0c;
        case 0x26aa10u: goto label_26aa10;
        case 0x26aa14u: goto label_26aa14;
        case 0x26aa18u: goto label_26aa18;
        case 0x26aa1cu: goto label_26aa1c;
        case 0x26aa20u: goto label_26aa20;
        case 0x26aa24u: goto label_26aa24;
        case 0x26aa28u: goto label_26aa28;
        case 0x26aa2cu: goto label_26aa2c;
        case 0x26aa30u: goto label_26aa30;
        case 0x26aa34u: goto label_26aa34;
        case 0x26aa38u: goto label_26aa38;
        case 0x26aa3cu: goto label_26aa3c;
        case 0x26aa40u: goto label_26aa40;
        case 0x26aa44u: goto label_26aa44;
        case 0x26aa48u: goto label_26aa48;
        case 0x26aa4cu: goto label_26aa4c;
        case 0x26aa50u: goto label_26aa50;
        case 0x26aa54u: goto label_26aa54;
        case 0x26aa58u: goto label_26aa58;
        case 0x26aa5cu: goto label_26aa5c;
        case 0x26aa60u: goto label_26aa60;
        case 0x26aa64u: goto label_26aa64;
        case 0x26aa68u: goto label_26aa68;
        case 0x26aa6cu: goto label_26aa6c;
        case 0x26aa70u: goto label_26aa70;
        case 0x26aa74u: goto label_26aa74;
        case 0x26aa78u: goto label_26aa78;
        case 0x26aa7cu: goto label_26aa7c;
        case 0x26aa80u: goto label_26aa80;
        case 0x26aa84u: goto label_26aa84;
        case 0x26aa88u: goto label_26aa88;
        case 0x26aa8cu: goto label_26aa8c;
        case 0x26aa90u: goto label_26aa90;
        case 0x26aa94u: goto label_26aa94;
        case 0x26aa98u: goto label_26aa98;
        case 0x26aa9cu: goto label_26aa9c;
        case 0x26aaa0u: goto label_26aaa0;
        case 0x26aaa4u: goto label_26aaa4;
        case 0x26aaa8u: goto label_26aaa8;
        case 0x26aaacu: goto label_26aaac;
        case 0x26aab0u: goto label_26aab0;
        case 0x26aab4u: goto label_26aab4;
        case 0x26aab8u: goto label_26aab8;
        case 0x26aabcu: goto label_26aabc;
        case 0x26aac0u: goto label_26aac0;
        case 0x26aac4u: goto label_26aac4;
        case 0x26aac8u: goto label_26aac8;
        case 0x26aaccu: goto label_26aacc;
        case 0x26aad0u: goto label_26aad0;
        case 0x26aad4u: goto label_26aad4;
        case 0x26aad8u: goto label_26aad8;
        case 0x26aadcu: goto label_26aadc;
        case 0x26aae0u: goto label_26aae0;
        case 0x26aae4u: goto label_26aae4;
        case 0x26aae8u: goto label_26aae8;
        case 0x26aaecu: goto label_26aaec;
        case 0x26aaf0u: goto label_26aaf0;
        case 0x26aaf4u: goto label_26aaf4;
        case 0x26aaf8u: goto label_26aaf8;
        case 0x26aafcu: goto label_26aafc;
        case 0x26ab00u: goto label_26ab00;
        case 0x26ab04u: goto label_26ab04;
        case 0x26ab08u: goto label_26ab08;
        case 0x26ab0cu: goto label_26ab0c;
        case 0x26ab10u: goto label_26ab10;
        case 0x26ab14u: goto label_26ab14;
        case 0x26ab18u: goto label_26ab18;
        case 0x26ab1cu: goto label_26ab1c;
        case 0x26ab20u: goto label_26ab20;
        case 0x26ab24u: goto label_26ab24;
        case 0x26ab28u: goto label_26ab28;
        case 0x26ab2cu: goto label_26ab2c;
        case 0x26ab30u: goto label_26ab30;
        case 0x26ab34u: goto label_26ab34;
        case 0x26ab38u: goto label_26ab38;
        case 0x26ab3cu: goto label_26ab3c;
        case 0x26ab40u: goto label_26ab40;
        case 0x26ab44u: goto label_26ab44;
        case 0x26ab48u: goto label_26ab48;
        case 0x26ab4cu: goto label_26ab4c;
        case 0x26ab50u: goto label_26ab50;
        case 0x26ab54u: goto label_26ab54;
        case 0x26ab58u: goto label_26ab58;
        case 0x26ab5cu: goto label_26ab5c;
        case 0x26ab60u: goto label_26ab60;
        case 0x26ab64u: goto label_26ab64;
        case 0x26ab68u: goto label_26ab68;
        case 0x26ab6cu: goto label_26ab6c;
        case 0x26ab70u: goto label_26ab70;
        case 0x26ab74u: goto label_26ab74;
        case 0x26ab78u: goto label_26ab78;
        case 0x26ab7cu: goto label_26ab7c;
        case 0x26ab80u: goto label_26ab80;
        case 0x26ab84u: goto label_26ab84;
        case 0x26ab88u: goto label_26ab88;
        case 0x26ab8cu: goto label_26ab8c;
        case 0x26ab90u: goto label_26ab90;
        case 0x26ab94u: goto label_26ab94;
        case 0x26ab98u: goto label_26ab98;
        case 0x26ab9cu: goto label_26ab9c;
        case 0x26aba0u: goto label_26aba0;
        case 0x26aba4u: goto label_26aba4;
        case 0x26aba8u: goto label_26aba8;
        case 0x26abacu: goto label_26abac;
        case 0x26abb0u: goto label_26abb0;
        case 0x26abb4u: goto label_26abb4;
        case 0x26abb8u: goto label_26abb8;
        case 0x26abbcu: goto label_26abbc;
        case 0x26abc0u: goto label_26abc0;
        case 0x26abc4u: goto label_26abc4;
        case 0x26abc8u: goto label_26abc8;
        case 0x26abccu: goto label_26abcc;
        case 0x26abd0u: goto label_26abd0;
        case 0x26abd4u: goto label_26abd4;
        case 0x26abd8u: goto label_26abd8;
        case 0x26abdcu: goto label_26abdc;
        case 0x26abe0u: goto label_26abe0;
        case 0x26abe4u: goto label_26abe4;
        case 0x26abe8u: goto label_26abe8;
        case 0x26abecu: goto label_26abec;
        case 0x26abf0u: goto label_26abf0;
        case 0x26abf4u: goto label_26abf4;
        case 0x26abf8u: goto label_26abf8;
        case 0x26abfcu: goto label_26abfc;
        case 0x26ac00u: goto label_26ac00;
        case 0x26ac04u: goto label_26ac04;
        case 0x26ac08u: goto label_26ac08;
        case 0x26ac0cu: goto label_26ac0c;
        case 0x26ac10u: goto label_26ac10;
        case 0x26ac14u: goto label_26ac14;
        case 0x26ac18u: goto label_26ac18;
        case 0x26ac1cu: goto label_26ac1c;
        case 0x26ac20u: goto label_26ac20;
        case 0x26ac24u: goto label_26ac24;
        case 0x26ac28u: goto label_26ac28;
        case 0x26ac2cu: goto label_26ac2c;
        case 0x26ac30u: goto label_26ac30;
        case 0x26ac34u: goto label_26ac34;
        case 0x26ac38u: goto label_26ac38;
        case 0x26ac3cu: goto label_26ac3c;
        case 0x26ac40u: goto label_26ac40;
        case 0x26ac44u: goto label_26ac44;
        case 0x26ac48u: goto label_26ac48;
        case 0x26ac4cu: goto label_26ac4c;
        case 0x26ac50u: goto label_26ac50;
        case 0x26ac54u: goto label_26ac54;
        case 0x26ac58u: goto label_26ac58;
        case 0x26ac5cu: goto label_26ac5c;
        case 0x26ac60u: goto label_26ac60;
        case 0x26ac64u: goto label_26ac64;
        case 0x26ac68u: goto label_26ac68;
        case 0x26ac6cu: goto label_26ac6c;
        case 0x26ac70u: goto label_26ac70;
        case 0x26ac74u: goto label_26ac74;
        case 0x26ac78u: goto label_26ac78;
        case 0x26ac7cu: goto label_26ac7c;
        case 0x26ac80u: goto label_26ac80;
        case 0x26ac84u: goto label_26ac84;
        case 0x26ac88u: goto label_26ac88;
        case 0x26ac8cu: goto label_26ac8c;
        case 0x26ac90u: goto label_26ac90;
        case 0x26ac94u: goto label_26ac94;
        case 0x26ac98u: goto label_26ac98;
        case 0x26ac9cu: goto label_26ac9c;
        case 0x26aca0u: goto label_26aca0;
        case 0x26aca4u: goto label_26aca4;
        case 0x26aca8u: goto label_26aca8;
        case 0x26acacu: goto label_26acac;
        case 0x26acb0u: goto label_26acb0;
        case 0x26acb4u: goto label_26acb4;
        case 0x26acb8u: goto label_26acb8;
        case 0x26acbcu: goto label_26acbc;
        case 0x26acc0u: goto label_26acc0;
        case 0x26acc4u: goto label_26acc4;
        case 0x26acc8u: goto label_26acc8;
        case 0x26acccu: goto label_26accc;
        case 0x26acd0u: goto label_26acd0;
        case 0x26acd4u: goto label_26acd4;
        case 0x26acd8u: goto label_26acd8;
        case 0x26acdcu: goto label_26acdc;
        case 0x26ace0u: goto label_26ace0;
        case 0x26ace4u: goto label_26ace4;
        case 0x26ace8u: goto label_26ace8;
        case 0x26acecu: goto label_26acec;
        case 0x26acf0u: goto label_26acf0;
        case 0x26acf4u: goto label_26acf4;
        case 0x26acf8u: goto label_26acf8;
        case 0x26acfcu: goto label_26acfc;
        case 0x26ad00u: goto label_26ad00;
        case 0x26ad04u: goto label_26ad04;
        case 0x26ad08u: goto label_26ad08;
        case 0x26ad0cu: goto label_26ad0c;
        case 0x26ad10u: goto label_26ad10;
        case 0x26ad14u: goto label_26ad14;
        case 0x26ad18u: goto label_26ad18;
        case 0x26ad1cu: goto label_26ad1c;
        case 0x26ad20u: goto label_26ad20;
        case 0x26ad24u: goto label_26ad24;
        case 0x26ad28u: goto label_26ad28;
        case 0x26ad2cu: goto label_26ad2c;
        case 0x26ad30u: goto label_26ad30;
        case 0x26ad34u: goto label_26ad34;
        case 0x26ad38u: goto label_26ad38;
        case 0x26ad3cu: goto label_26ad3c;
        case 0x26ad40u: goto label_26ad40;
        case 0x26ad44u: goto label_26ad44;
        case 0x26ad48u: goto label_26ad48;
        case 0x26ad4cu: goto label_26ad4c;
        case 0x26ad50u: goto label_26ad50;
        case 0x26ad54u: goto label_26ad54;
        case 0x26ad58u: goto label_26ad58;
        case 0x26ad5cu: goto label_26ad5c;
        case 0x26ad60u: goto label_26ad60;
        case 0x26ad64u: goto label_26ad64;
        case 0x26ad68u: goto label_26ad68;
        case 0x26ad6cu: goto label_26ad6c;
        case 0x26ad70u: goto label_26ad70;
        case 0x26ad74u: goto label_26ad74;
        case 0x26ad78u: goto label_26ad78;
        case 0x26ad7cu: goto label_26ad7c;
        case 0x26ad80u: goto label_26ad80;
        case 0x26ad84u: goto label_26ad84;
        case 0x26ad88u: goto label_26ad88;
        case 0x26ad8cu: goto label_26ad8c;
        case 0x26ad90u: goto label_26ad90;
        case 0x26ad94u: goto label_26ad94;
        case 0x26ad98u: goto label_26ad98;
        case 0x26ad9cu: goto label_26ad9c;
        case 0x26ada0u: goto label_26ada0;
        case 0x26ada4u: goto label_26ada4;
        case 0x26ada8u: goto label_26ada8;
        case 0x26adacu: goto label_26adac;
        case 0x26adb0u: goto label_26adb0;
        case 0x26adb4u: goto label_26adb4;
        case 0x26adb8u: goto label_26adb8;
        case 0x26adbcu: goto label_26adbc;
        case 0x26adc0u: goto label_26adc0;
        case 0x26adc4u: goto label_26adc4;
        case 0x26adc8u: goto label_26adc8;
        case 0x26adccu: goto label_26adcc;
        case 0x26add0u: goto label_26add0;
        case 0x26add4u: goto label_26add4;
        case 0x26add8u: goto label_26add8;
        case 0x26addcu: goto label_26addc;
        case 0x26ade0u: goto label_26ade0;
        case 0x26ade4u: goto label_26ade4;
        case 0x26ade8u: goto label_26ade8;
        case 0x26adecu: goto label_26adec;
        case 0x26adf0u: goto label_26adf0;
        case 0x26adf4u: goto label_26adf4;
        case 0x26adf8u: goto label_26adf8;
        case 0x26adfcu: goto label_26adfc;
        case 0x26ae00u: goto label_26ae00;
        case 0x26ae04u: goto label_26ae04;
        case 0x26ae08u: goto label_26ae08;
        case 0x26ae0cu: goto label_26ae0c;
        case 0x26ae10u: goto label_26ae10;
        case 0x26ae14u: goto label_26ae14;
        case 0x26ae18u: goto label_26ae18;
        case 0x26ae1cu: goto label_26ae1c;
        case 0x26ae20u: goto label_26ae20;
        case 0x26ae24u: goto label_26ae24;
        case 0x26ae28u: goto label_26ae28;
        case 0x26ae2cu: goto label_26ae2c;
        case 0x26ae30u: goto label_26ae30;
        case 0x26ae34u: goto label_26ae34;
        case 0x26ae38u: goto label_26ae38;
        case 0x26ae3cu: goto label_26ae3c;
        case 0x26ae40u: goto label_26ae40;
        case 0x26ae44u: goto label_26ae44;
        case 0x26ae48u: goto label_26ae48;
        case 0x26ae4cu: goto label_26ae4c;
        case 0x26ae50u: goto label_26ae50;
        case 0x26ae54u: goto label_26ae54;
        case 0x26ae58u: goto label_26ae58;
        case 0x26ae5cu: goto label_26ae5c;
        case 0x26ae60u: goto label_26ae60;
        case 0x26ae64u: goto label_26ae64;
        case 0x26ae68u: goto label_26ae68;
        case 0x26ae6cu: goto label_26ae6c;
        case 0x26ae70u: goto label_26ae70;
        case 0x26ae74u: goto label_26ae74;
        case 0x26ae78u: goto label_26ae78;
        case 0x26ae7cu: goto label_26ae7c;
        case 0x26ae80u: goto label_26ae80;
        case 0x26ae84u: goto label_26ae84;
        case 0x26ae88u: goto label_26ae88;
        case 0x26ae8cu: goto label_26ae8c;
        case 0x26ae90u: goto label_26ae90;
        case 0x26ae94u: goto label_26ae94;
        case 0x26ae98u: goto label_26ae98;
        case 0x26ae9cu: goto label_26ae9c;
        case 0x26aea0u: goto label_26aea0;
        case 0x26aea4u: goto label_26aea4;
        case 0x26aea8u: goto label_26aea8;
        case 0x26aeacu: goto label_26aeac;
        case 0x26aeb0u: goto label_26aeb0;
        case 0x26aeb4u: goto label_26aeb4;
        case 0x26aeb8u: goto label_26aeb8;
        case 0x26aebcu: goto label_26aebc;
        case 0x26aec0u: goto label_26aec0;
        case 0x26aec4u: goto label_26aec4;
        case 0x26aec8u: goto label_26aec8;
        case 0x26aeccu: goto label_26aecc;
        case 0x26aed0u: goto label_26aed0;
        case 0x26aed4u: goto label_26aed4;
        case 0x26aed8u: goto label_26aed8;
        case 0x26aedcu: goto label_26aedc;
        case 0x26aee0u: goto label_26aee0;
        case 0x26aee4u: goto label_26aee4;
        case 0x26aee8u: goto label_26aee8;
        case 0x26aeecu: goto label_26aeec;
        case 0x26aef0u: goto label_26aef0;
        case 0x26aef4u: goto label_26aef4;
        case 0x26aef8u: goto label_26aef8;
        case 0x26aefcu: goto label_26aefc;
        case 0x26af00u: goto label_26af00;
        case 0x26af04u: goto label_26af04;
        case 0x26af08u: goto label_26af08;
        case 0x26af0cu: goto label_26af0c;
        case 0x26af10u: goto label_26af10;
        case 0x26af14u: goto label_26af14;
        case 0x26af18u: goto label_26af18;
        case 0x26af1cu: goto label_26af1c;
        case 0x26af20u: goto label_26af20;
        case 0x26af24u: goto label_26af24;
        case 0x26af28u: goto label_26af28;
        case 0x26af2cu: goto label_26af2c;
        case 0x26af30u: goto label_26af30;
        case 0x26af34u: goto label_26af34;
        case 0x26af38u: goto label_26af38;
        case 0x26af3cu: goto label_26af3c;
        case 0x26af40u: goto label_26af40;
        case 0x26af44u: goto label_26af44;
        case 0x26af48u: goto label_26af48;
        case 0x26af4cu: goto label_26af4c;
        case 0x26af50u: goto label_26af50;
        case 0x26af54u: goto label_26af54;
        case 0x26af58u: goto label_26af58;
        case 0x26af5cu: goto label_26af5c;
        case 0x26af60u: goto label_26af60;
        case 0x26af64u: goto label_26af64;
        case 0x26af68u: goto label_26af68;
        case 0x26af6cu: goto label_26af6c;
        case 0x26af70u: goto label_26af70;
        case 0x26af74u: goto label_26af74;
        case 0x26af78u: goto label_26af78;
        case 0x26af7cu: goto label_26af7c;
        case 0x26af80u: goto label_26af80;
        case 0x26af84u: goto label_26af84;
        case 0x26af88u: goto label_26af88;
        case 0x26af8cu: goto label_26af8c;
        case 0x26af90u: goto label_26af90;
        case 0x26af94u: goto label_26af94;
        case 0x26af98u: goto label_26af98;
        case 0x26af9cu: goto label_26af9c;
        case 0x26afa0u: goto label_26afa0;
        case 0x26afa4u: goto label_26afa4;
        case 0x26afa8u: goto label_26afa8;
        case 0x26afacu: goto label_26afac;
        case 0x26afb0u: goto label_26afb0;
        case 0x26afb4u: goto label_26afb4;
        case 0x26afb8u: goto label_26afb8;
        case 0x26afbcu: goto label_26afbc;
        case 0x26afc0u: goto label_26afc0;
        case 0x26afc4u: goto label_26afc4;
        case 0x26afc8u: goto label_26afc8;
        case 0x26afccu: goto label_26afcc;
        case 0x26afd0u: goto label_26afd0;
        case 0x26afd4u: goto label_26afd4;
        case 0x26afd8u: goto label_26afd8;
        case 0x26afdcu: goto label_26afdc;
        case 0x26afe0u: goto label_26afe0;
        case 0x26afe4u: goto label_26afe4;
        case 0x26afe8u: goto label_26afe8;
        case 0x26afecu: goto label_26afec;
        case 0x26aff0u: goto label_26aff0;
        case 0x26aff4u: goto label_26aff4;
        case 0x26aff8u: goto label_26aff8;
        case 0x26affcu: goto label_26affc;
        case 0x26b000u: goto label_26b000;
        case 0x26b004u: goto label_26b004;
        case 0x26b008u: goto label_26b008;
        case 0x26b00cu: goto label_26b00c;
        case 0x26b010u: goto label_26b010;
        case 0x26b014u: goto label_26b014;
        case 0x26b018u: goto label_26b018;
        case 0x26b01cu: goto label_26b01c;
        case 0x26b020u: goto label_26b020;
        case 0x26b024u: goto label_26b024;
        case 0x26b028u: goto label_26b028;
        case 0x26b02cu: goto label_26b02c;
        case 0x26b030u: goto label_26b030;
        case 0x26b034u: goto label_26b034;
        case 0x26b038u: goto label_26b038;
        case 0x26b03cu: goto label_26b03c;
        case 0x26b040u: goto label_26b040;
        case 0x26b044u: goto label_26b044;
        case 0x26b048u: goto label_26b048;
        case 0x26b04cu: goto label_26b04c;
        case 0x26b050u: goto label_26b050;
        case 0x26b054u: goto label_26b054;
        case 0x26b058u: goto label_26b058;
        case 0x26b05cu: goto label_26b05c;
        case 0x26b060u: goto label_26b060;
        case 0x26b064u: goto label_26b064;
        case 0x26b068u: goto label_26b068;
        case 0x26b06cu: goto label_26b06c;
        case 0x26b070u: goto label_26b070;
        case 0x26b074u: goto label_26b074;
        case 0x26b078u: goto label_26b078;
        case 0x26b07cu: goto label_26b07c;
        case 0x26b080u: goto label_26b080;
        case 0x26b084u: goto label_26b084;
        case 0x26b088u: goto label_26b088;
        case 0x26b08cu: goto label_26b08c;
        case 0x26b090u: goto label_26b090;
        case 0x26b094u: goto label_26b094;
        case 0x26b098u: goto label_26b098;
        case 0x26b09cu: goto label_26b09c;
        case 0x26b0a0u: goto label_26b0a0;
        case 0x26b0a4u: goto label_26b0a4;
        case 0x26b0a8u: goto label_26b0a8;
        case 0x26b0acu: goto label_26b0ac;
        case 0x26b0b0u: goto label_26b0b0;
        case 0x26b0b4u: goto label_26b0b4;
        case 0x26b0b8u: goto label_26b0b8;
        case 0x26b0bcu: goto label_26b0bc;
        case 0x26b0c0u: goto label_26b0c0;
        case 0x26b0c4u: goto label_26b0c4;
        case 0x26b0c8u: goto label_26b0c8;
        case 0x26b0ccu: goto label_26b0cc;
        case 0x26b0d0u: goto label_26b0d0;
        case 0x26b0d4u: goto label_26b0d4;
        case 0x26b0d8u: goto label_26b0d8;
        case 0x26b0dcu: goto label_26b0dc;
        case 0x26b0e0u: goto label_26b0e0;
        case 0x26b0e4u: goto label_26b0e4;
        case 0x26b0e8u: goto label_26b0e8;
        case 0x26b0ecu: goto label_26b0ec;
        case 0x26b0f0u: goto label_26b0f0;
        case 0x26b0f4u: goto label_26b0f4;
        case 0x26b0f8u: goto label_26b0f8;
        case 0x26b0fcu: goto label_26b0fc;
        case 0x26b100u: goto label_26b100;
        case 0x26b104u: goto label_26b104;
        case 0x26b108u: goto label_26b108;
        case 0x26b10cu: goto label_26b10c;
        case 0x26b110u: goto label_26b110;
        case 0x26b114u: goto label_26b114;
        case 0x26b118u: goto label_26b118;
        case 0x26b11cu: goto label_26b11c;
        default: return;
    }

label_26a950:
    // 0x26a950: 0x59b  .word       0x0000059B                   # divu        $zero, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a950u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_26a954:
    // 0x26a954: 0x7b40  sll         $t7, $zero, 13
    ctx->pc = 0x26a954u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
label_26a958:
    // 0x26a958: 0x0  nop
    ctx->pc = 0x26a958u;
    // NOP
label_26a95c:
    // 0x26a95c: 0x0  nop
    ctx->pc = 0x26a95cu;
    // NOP
label_26a960:
    // 0x26a960: 0x5ab  .word       0x000005AB                   # sltu        $zero, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a960u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_26a964:
    // 0x26a964: 0x6480  sll         $t4, $zero, 18
    ctx->pc = 0x26a964u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_26a968:
    // 0x26a968: 0x0  nop
    ctx->pc = 0x26a968u;
    // NOP
label_26a96c:
    // 0x26a96c: 0x0  nop
    ctx->pc = 0x26a96cu;
    // NOP
label_26a970:
    // 0x26a970: 0x5b8  dsll        $zero, $zero, 22
    ctx->pc = 0x26a970u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 22);
label_26a974:
    // 0x26a974: 0xc630  tge         $zero, $zero, 792
    ctx->pc = 0x26a974u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26a978:
    // 0x26a978: 0x0  nop
    ctx->pc = 0x26a978u;
    // NOP
label_26a97c:
    // 0x26a97c: 0x0  nop
    ctx->pc = 0x26a97cu;
    // NOP
label_26a980:
    // 0x26a980: 0x5d1  .word       0x000005D1                   # mthi        $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a980u;
    ctx->hi = GPR_U64(ctx, 0);
label_26a984:
    // 0x26a984: 0xabc0  sll         $s5, $zero, 15
    ctx->pc = 0x26a984u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_26a988:
    // 0x26a988: 0x0  nop
    ctx->pc = 0x26a988u;
    // NOP
label_26a98c:
    // 0x26a98c: 0x0  nop
    ctx->pc = 0x26a98cu;
    // NOP
label_26a990:
    // 0x26a990: 0x5e7  .word       0x000005E7                   # not         $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a990u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_26a994:
    // 0x26a994: 0x9d20  .word       0x00009D20                   # add         $s3, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a994u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_26a998:
    // 0x26a998: 0x0  nop
    ctx->pc = 0x26a998u;
    // NOP
label_26a99c:
    // 0x26a99c: 0x0  nop
    ctx->pc = 0x26a99cu;
    // NOP
label_26a9a0:
    // 0x26a9a0: 0x5fb  dsra        $zero, $zero, 23
    ctx->pc = 0x26a9a0u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 23);
label_26a9a4:
    // 0x26a9a4: 0xb1f0  tge         $zero, $zero, 711
    ctx->pc = 0x26a9a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26a9a8:
    // 0x26a9a8: 0x0  nop
    ctx->pc = 0x26a9a8u;
    // NOP
label_26a9ac:
    // 0x26a9ac: 0x0  nop
    ctx->pc = 0x26a9acu;
    // NOP
label_26a9b0:
    // 0x26a9b0: 0x612  .word       0x00000612                   # mflo        $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a9b0u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_26a9b4:
    // 0x26a9b4: 0x6b20  .word       0x00006B20                   # add         $t5, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a9b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_26a9b8:
    // 0x26a9b8: 0x0  nop
    ctx->pc = 0x26a9b8u;
    // NOP
label_26a9bc:
    // 0x26a9bc: 0x0  nop
    ctx->pc = 0x26a9bcu;
    // NOP
label_26a9c0:
    // 0x26a9c0: 0x620  .word       0x00000620                   # add         $zero, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a9c0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_26a9c4:
    // 0x26a9c4: 0x8b20  .word       0x00008B20                   # add         $s1, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a9c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_26a9c8:
    // 0x26a9c8: 0x0  nop
    ctx->pc = 0x26a9c8u;
    // NOP
label_26a9cc:
    // 0x26a9cc: 0x0  nop
    ctx->pc = 0x26a9ccu;
    // NOP
label_26a9d0:
    // 0x26a9d0: 0x632  tlt         $zero, $zero, 24
    ctx->pc = 0x26a9d0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26a9d4:
    // 0x26a9d4: 0x76f0  tge         $zero, $zero, 475
    ctx->pc = 0x26a9d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26a9d8:
    // 0x26a9d8: 0x0  nop
    ctx->pc = 0x26a9d8u;
    // NOP
label_26a9dc:
    // 0x26a9dc: 0x0  nop
    ctx->pc = 0x26a9dcu;
    // NOP
label_26a9e0:
    // 0x26a9e0: 0x641  .word       0x00000641                   # INVALID     $zero, $zero, 0x641 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a9e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x26A9E0 raw=0x00000641"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26a9e4:
    // 0x26a9e4: 0x13c90  .word       0x00013C90                   # mfhi        $a3 # 00010480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a9e4u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_26a9e8:
    // 0x26a9e8: 0x0  nop
    ctx->pc = 0x26a9e8u;
    // NOP
label_26a9ec:
    // 0x26a9ec: 0x0  nop
    ctx->pc = 0x26a9ecu;
    // NOP
label_26a9f0:
    // 0x26a9f0: 0x669  .word       0x00000669                   # mtsa        $zero # 00000640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26a9f0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_26a9f4:
    // 0x26a9f4: 0x9bc0  sll         $s3, $zero, 15
    ctx->pc = 0x26a9f4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_26a9f8:
    // 0x26a9f8: 0x0  nop
    ctx->pc = 0x26a9f8u;
    // NOP
label_26a9fc:
    // 0x26a9fc: 0x0  nop
    ctx->pc = 0x26a9fcu;
    // NOP
label_26aa00:
    // 0x26aa00: 0x67d  .word       0x0000067D                   # INVALID     $zero, $zero, 0x67D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26aa00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x26AA00 raw=0x0000067D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26aa04:
    // 0x26aa04: 0x7ab0  tge         $zero, $zero, 490
    ctx->pc = 0x26aa04u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26aa08:
    // 0x26aa08: 0x0  nop
    ctx->pc = 0x26aa08u;
    // NOP
label_26aa0c:
    // 0x26aa0c: 0x0  nop
    ctx->pc = 0x26aa0cu;
    // NOP
label_26aa10:
    // 0x26aa10: 0x68d  break       0, 26
    ctx->pc = 0x26aa10u;
    runtime->handleBreak(rdram, ctx);
label_26aa14:
    // 0x26aa14: 0xbad0  .word       0x0000BAD0                   # mfhi        $s7 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26aa14u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_26aa18:
    // 0x26aa18: 0x0  nop
    ctx->pc = 0x26aa18u;
    // NOP
label_26aa1c:
    // 0x26aa1c: 0x0  nop
    ctx->pc = 0x26aa1cu;
    // NOP
label_26aa20:
    // 0x26aa20: 0x6a5  .word       0x000006A5                   # move        $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26aa20u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_26aa24:
    // 0x26aa24: 0xc980  sll         $t9, $zero, 6
    ctx->pc = 0x26aa24u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
label_26aa28:
    // 0x26aa28: 0x0  nop
    ctx->pc = 0x26aa28u;
    // NOP
label_26aa2c:
    // 0x26aa2c: 0x0  nop
    ctx->pc = 0x26aa2cu;
    // NOP
label_26aa30:
    // 0x26aa30: 0x6bf  dsra32      $zero, $zero, 26
    ctx->pc = 0x26aa30u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 26));
label_26aa34:
    // 0x26aa34: 0x64f0  tge         $zero, $zero, 403
    ctx->pc = 0x26aa34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26aa38:
    // 0x26aa38: 0x0  nop
    ctx->pc = 0x26aa38u;
    // NOP
label_26aa3c:
    // 0x26aa3c: 0x0  nop
    ctx->pc = 0x26aa3cu;
    // NOP
label_26aa40:
    // 0x26aa40: 0x6cc  syscall     27
    ctx->pc = 0x26aa40u;
    ctx->pc = 0x26AA44u;
runtime->handleSyscall(rdram, ctx, 0x1Bu);
label_26aa44:
    // 0x26aa44: 0x9a40  sll         $s3, $zero, 9
    ctx->pc = 0x26aa44u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_26aa48:
    // 0x26aa48: 0x0  nop
    ctx->pc = 0x26aa48u;
    // NOP
label_26aa4c:
    // 0x26aa4c: 0x0  nop
    ctx->pc = 0x26aa4cu;
    // NOP
label_26aa50:
    // 0x26aa50: 0x6e0  .word       0x000006E0                   # add         $zero, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26aa50u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_26aa54:
    // 0x26aa54: 0xc490  .word       0x0000C490                   # mfhi        $t8 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26aa54u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_26aa58:
    // 0x26aa58: 0x0  nop
    ctx->pc = 0x26aa58u;
    // NOP
label_26aa5c:
    // 0x26aa5c: 0x0  nop
    ctx->pc = 0x26aa5cu;
    // NOP
label_26aa60:
    // 0x26aa60: 0x6f9  .word       0x000006F9                   # INVALID     $zero, $zero, 0x6F9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26aa60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x26AA60 raw=0x000006F9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26aa64:
    // 0x26aa64: 0x7560  .word       0x00007560                   # add         $t6, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26aa64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_26aa68:
    // 0x26aa68: 0x0  nop
    ctx->pc = 0x26aa68u;
    // NOP
label_26aa6c:
    // 0x26aa6c: 0x0  nop
    ctx->pc = 0x26aa6cu;
    // NOP
label_26aa70:
    // 0x26aa70: 0x708  .word       0x00000708                   # jr          $zero # 00000700 <InstrIdType: CPU_SPECIAL>
label_26aa74:
    if (ctx->pc == 0x26AA74u) {
        ctx->pc = 0x26AA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AA70u;
        // 0x26aa74: 0x9a80  sll         $s3, $zero, 10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AA78u;
        goto label_26aa78;
    }
    ctx->pc = 0x26AA70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x26AA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AA70u;
        // 0x26aa74: 0x9a80  sll         $s3, $zero, 10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26AA70u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x26AA78u;
label_26aa78:
    // 0x26aa78: 0x0  nop
    ctx->pc = 0x26aa78u;
    // NOP
label_26aa7c:
    // 0x26aa7c: 0x0  nop
    ctx->pc = 0x26aa7cu;
    // NOP
label_26aa80:
    // 0x26aa80: 0x71c  .word       0x0000071C                   # dmult       $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26aa80u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x26AA80 raw=0x0000071C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26aa84:
    // 0x26aa84: 0x5820  add         $t3, $zero, $zero
    ctx->pc = 0x26aa84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_26aa88:
    // 0x26aa88: 0x0  nop
    ctx->pc = 0x26aa88u;
    // NOP
label_26aa8c:
    // 0x26aa8c: 0x0  nop
    ctx->pc = 0x26aa8cu;
    // NOP
label_26aa90:
    // 0x26aa90: 0x728  .word       0x00000728                   # mfsa        $zero # 00000700 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26aa90u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_26aa94:
    // 0x26aa94: 0x7c00  sll         $t7, $zero, 16
    ctx->pc = 0x26aa94u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_26aa98:
    // 0x26aa98: 0x0  nop
    ctx->pc = 0x26aa98u;
    // NOP
label_26aa9c:
    // 0x26aa9c: 0x0  nop
    ctx->pc = 0x26aa9cu;
    // NOP
label_26aaa0:
    // 0x26aaa0: 0x738  dsll        $zero, $zero, 28
    ctx->pc = 0x26aaa0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 28);
label_26aaa4:
    // 0x26aaa4: 0x6300  sll         $t4, $zero, 12
    ctx->pc = 0x26aaa4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_26aaa8:
    // 0x26aaa8: 0x0  nop
    ctx->pc = 0x26aaa8u;
    // NOP
label_26aaac:
    // 0x26aaac: 0x0  nop
    ctx->pc = 0x26aaacu;
    // NOP
label_26aab0:
    // 0x26aab0: 0x745  .word       0x00000745                   # INVALID     $zero, $zero, 0x745 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26aab0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x26AAB0 raw=0x00000745"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26aab4:
    // 0x26aab4: 0x4c60  .word       0x00004C60                   # add         $t1, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26aab4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_26aab8:
    // 0x26aab8: 0x0  nop
    ctx->pc = 0x26aab8u;
    // NOP
label_26aabc:
    // 0x26aabc: 0x0  nop
    ctx->pc = 0x26aabcu;
    // NOP
label_26aac0:
    // 0x26aac0: 0x74f  sync.p
    ctx->pc = 0x26aac0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_26aac4:
    // 0x26aac4: 0xd460  .word       0x0000D460                   # add         $k0, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26aac4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_26aac8:
    // 0x26aac8: 0x0  nop
    ctx->pc = 0x26aac8u;
    // NOP
label_26aacc:
    // 0x26aacc: 0x0  nop
    ctx->pc = 0x26aaccu;
    // NOP
label_26aad0:
    // 0x26aad0: 0x76a  .word       0x0000076A                   # slt         $zero, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26aad0u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_26aad4:
    // 0x26aad4: 0xd4d0  .word       0x0000D4D0                   # mfhi        $k0 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26aad4u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_26aad8:
    // 0x26aad8: 0x0  nop
    ctx->pc = 0x26aad8u;
    // NOP
label_26aadc:
    // 0x26aadc: 0x0  nop
    ctx->pc = 0x26aadcu;
    // NOP
label_26aae0:
    // 0x26aae0: 0x785  .word       0x00000785                   # INVALID     $zero, $zero, 0x785 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26aae0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x26AAE0 raw=0x00000785"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26aae4:
    // 0x26aae4: 0xba00  sll         $s7, $zero, 8
    ctx->pc = 0x26aae4u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_26aae8:
    // 0x26aae8: 0x0  nop
    ctx->pc = 0x26aae8u;
    // NOP
label_26aaec:
    // 0x26aaec: 0x0  nop
    ctx->pc = 0x26aaecu;
    // NOP
label_26aaf0:
    // 0x26aaf0: 0x79d  .word       0x0000079D                   # dmultu      $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26aaf0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x26AAF0 raw=0x0000079D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26aaf4:
    // 0x26aaf4: 0x9570  tge         $zero, $zero, 597
    ctx->pc = 0x26aaf4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26aaf8:
    // 0x26aaf8: 0x0  nop
    ctx->pc = 0x26aaf8u;
    // NOP
label_26aafc:
    // 0x26aafc: 0x0  nop
    ctx->pc = 0x26aafcu;
    // NOP
label_26ab00:
    // 0x26ab00: 0x7b0  tge         $zero, $zero, 30
    ctx->pc = 0x26ab00u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26ab04:
    // 0x26ab04: 0xb4e0  .word       0x0000B4E0                   # add         $s6, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ab04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_26ab08:
    // 0x26ab08: 0x0  nop
    ctx->pc = 0x26ab08u;
    // NOP
label_26ab0c:
    // 0x26ab0c: 0x0  nop
    ctx->pc = 0x26ab0cu;
    // NOP
label_26ab10:
    // 0x26ab10: 0x7c7  .word       0x000007C7                   # srav        $zero, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ab10u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26ab14:
    // 0x26ab14: 0xc740  sll         $t8, $zero, 29
    ctx->pc = 0x26ab14u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_26ab18:
    // 0x26ab18: 0x0  nop
    ctx->pc = 0x26ab18u;
    // NOP
label_26ab1c:
    // 0x26ab1c: 0x0  nop
    ctx->pc = 0x26ab1cu;
    // NOP
label_26ab20:
    // 0x26ab20: 0x7e0  .word       0x000007E0                   # add         $zero, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ab20u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_26ab24:
    // 0x26ab24: 0x9c70  tge         $zero, $zero, 625
    ctx->pc = 0x26ab24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26ab28:
    // 0x26ab28: 0x0  nop
    ctx->pc = 0x26ab28u;
    // NOP
label_26ab2c:
    // 0x26ab2c: 0x0  nop
    ctx->pc = 0x26ab2cu;
    // NOP
label_26ab30:
    // 0x26ab30: 0x7f4  teq         $zero, $zero, 31
    ctx->pc = 0x26ab30u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26ab34:
    // 0x26ab34: 0x18270  tge         $zero, $at, 521
    ctx->pc = 0x26ab34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_26ab38:
    // 0x26ab38: 0x0  nop
    ctx->pc = 0x26ab38u;
    // NOP
label_26ab3c:
    // 0x26ab3c: 0x0  nop
    ctx->pc = 0x26ab3cu;
    // NOP
label_26ab40:
    // 0x26ab40: 0x825  move        $at, $zero
    ctx->pc = 0x26ab40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_26ab44:
    // 0x26ab44: 0x7e30  tge         $zero, $zero, 504
    ctx->pc = 0x26ab44u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26ab48:
    // 0x26ab48: 0x0  nop
    ctx->pc = 0x26ab48u;
    // NOP
label_26ab4c:
    // 0x26ab4c: 0x0  nop
    ctx->pc = 0x26ab4cu;
    // NOP
label_26ab50:
    // 0x26ab50: 0x835  .word       0x00000835                   # INVALID     $zero, $zero, 0x835 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ab50u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x26AB50 raw=0x00000835"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26ab54:
    // 0x26ab54: 0xb390  .word       0x0000B390                   # mfhi        $s6 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ab54u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_26ab58:
    // 0x26ab58: 0x0  nop
    ctx->pc = 0x26ab58u;
    // NOP
label_26ab5c:
    // 0x26ab5c: 0x0  nop
    ctx->pc = 0x26ab5cu;
    // NOP
label_26ab60:
    // 0x26ab60: 0x84c  syscall     33
    ctx->pc = 0x26ab60u;
    ctx->pc = 0x26AB64u;
runtime->handleSyscall(rdram, ctx, 0x21u);
label_26ab64:
    // 0x26ab64: 0x68b0  tge         $zero, $zero, 418
    ctx->pc = 0x26ab64u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26ab68:
    // 0x26ab68: 0x0  nop
    ctx->pc = 0x26ab68u;
    // NOP
label_26ab6c:
    // 0x26ab6c: 0x0  nop
    ctx->pc = 0x26ab6cu;
    // NOP
label_26ab70:
    // 0x26ab70: 0x85a  .word       0x0000085A                   # div         $at, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ab70u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_26ab74:
    // 0x26ab74: 0x7e00  sll         $t7, $zero, 24
    ctx->pc = 0x26ab74u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_26ab78:
    // 0x26ab78: 0x0  nop
    ctx->pc = 0x26ab78u;
    // NOP
label_26ab7c:
    // 0x26ab7c: 0x0  nop
    ctx->pc = 0x26ab7cu;
    // NOP
label_26ab80:
    // 0x26ab80: 0x86a  .word       0x0000086A                   # slt         $at, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ab80u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_26ab84:
    // 0x26ab84: 0xd5f0  tge         $zero, $zero, 855
    ctx->pc = 0x26ab84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26ab88:
    // 0x26ab88: 0x0  nop
    ctx->pc = 0x26ab88u;
    // NOP
label_26ab8c:
    // 0x26ab8c: 0x0  nop
    ctx->pc = 0x26ab8cu;
    // NOP
label_26ab90:
    // 0x26ab90: 0x885  .word       0x00000885                   # INVALID     $zero, $zero, 0x885 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ab90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x26AB90 raw=0x00000885"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26ab94:
    // 0x26ab94: 0xb9d0  .word       0x0000B9D0                   # mfhi        $s7 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ab94u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_26ab98:
    // 0x26ab98: 0x0  nop
    ctx->pc = 0x26ab98u;
    // NOP
label_26ab9c:
    // 0x26ab9c: 0x0  nop
    ctx->pc = 0x26ab9cu;
    // NOP
label_26aba0:
    // 0x26aba0: 0x89d  .word       0x0000089D                   # dmultu      $zero, $zero # 00000880 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26aba0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x26ABA0 raw=0x0000089D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26aba4:
    // 0x26aba4: 0xee80  sll         $sp, $zero, 26
    ctx->pc = 0x26aba4u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_26aba8:
    // 0x26aba8: 0x0  nop
    ctx->pc = 0x26aba8u;
    // NOP
label_26abac:
    // 0x26abac: 0x0  nop
    ctx->pc = 0x26abacu;
    // NOP
label_26abb0:
    // 0x26abb0: 0x8bb  dsra        $at, $zero, 2
    ctx->pc = 0x26abb0u;
    SET_GPR_S64(ctx, 1, GPR_S64(ctx, 0) >> 2);
label_26abb4:
    // 0x26abb4: 0xae80  sll         $s5, $zero, 26
    ctx->pc = 0x26abb4u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_26abb8:
    // 0x26abb8: 0x0  nop
    ctx->pc = 0x26abb8u;
    // NOP
label_26abbc:
    // 0x26abbc: 0x0  nop
    ctx->pc = 0x26abbcu;
    // NOP
label_26abc0:
    // 0x26abc0: 0x8d1  .word       0x000008D1                   # mthi        $zero # 000008C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26abc0u;
    ctx->hi = GPR_U64(ctx, 0);
label_26abc4:
    // 0x26abc4: 0xb060  .word       0x0000B060                   # add         $s6, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26abc4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_26abc8:
    // 0x26abc8: 0x0  nop
    ctx->pc = 0x26abc8u;
    // NOP
label_26abcc:
    // 0x26abcc: 0x0  nop
    ctx->pc = 0x26abccu;
    // NOP
label_26abd0:
    // 0x26abd0: 0x8e8  .word       0x000008E8                   # mfsa        $at # 000000C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26abd0u;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_26abd4:
    // 0x26abd4: 0x4cb0  tge         $zero, $zero, 306
    ctx->pc = 0x26abd4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26abd8:
    // 0x26abd8: 0x0  nop
    ctx->pc = 0x26abd8u;
    // NOP
label_26abdc:
    // 0x26abdc: 0x0  nop
    ctx->pc = 0x26abdcu;
    // NOP
label_26abe0:
    // 0x26abe0: 0x8f2  tlt         $zero, $zero, 35
    ctx->pc = 0x26abe0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26abe4:
    // 0x26abe4: 0x6960  .word       0x00006960                   # add         $t5, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26abe4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_26abe8:
    // 0x26abe8: 0x0  nop
    ctx->pc = 0x26abe8u;
    // NOP
label_26abec:
    // 0x26abec: 0x0  nop
    ctx->pc = 0x26abecu;
    // NOP
label_26abf0:
    // 0x26abf0: 0x900  sll         $at, $zero, 4
    ctx->pc = 0x26abf0u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_26abf4:
    // 0x26abf4: 0x8050  .word       0x00008050                   # mfhi        $s0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26abf4u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_26abf8:
    // 0x26abf8: 0x0  nop
    ctx->pc = 0x26abf8u;
    // NOP
label_26abfc:
    // 0x26abfc: 0x0  nop
    ctx->pc = 0x26abfcu;
    // NOP
label_26ac00:
    // 0x26ac00: 0x911  .word       0x00000911                   # mthi        $zero # 00000900 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ac00u;
    ctx->hi = GPR_U64(ctx, 0);
label_26ac04:
    // 0x26ac04: 0x9880  sll         $s3, $zero, 2
    ctx->pc = 0x26ac04u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_26ac08:
    // 0x26ac08: 0x0  nop
    ctx->pc = 0x26ac08u;
    // NOP
label_26ac0c:
    // 0x26ac0c: 0x0  nop
    ctx->pc = 0x26ac0cu;
    // NOP
label_26ac10:
    // 0x26ac10: 0x925  .word       0x00000925                   # move        $at, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ac10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_26ac14:
    // 0x26ac14: 0x15970  tge         $zero, $at, 357
    ctx->pc = 0x26ac14u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_26ac18:
    // 0x26ac18: 0x0  nop
    ctx->pc = 0x26ac18u;
    // NOP
label_26ac1c:
    // 0x26ac1c: 0x0  nop
    ctx->pc = 0x26ac1cu;
    // NOP
label_26ac20:
    // 0x26ac20: 0x951  .word       0x00000951                   # mthi        $zero # 00000940 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ac20u;
    ctx->hi = GPR_U64(ctx, 0);
label_26ac24:
    // 0x26ac24: 0xe480  sll         $gp, $zero, 18
    ctx->pc = 0x26ac24u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_26ac28:
    // 0x26ac28: 0x0  nop
    ctx->pc = 0x26ac28u;
    // NOP
label_26ac2c:
    // 0x26ac2c: 0x0  nop
    ctx->pc = 0x26ac2cu;
    // NOP
label_26ac30:
    // 0x26ac30: 0x96e  .word       0x0000096E                   # dsub        $at, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ac30u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
label_26ac34:
    // 0x26ac34: 0xcc60  .word       0x0000CC60                   # add         $t9, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ac34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_26ac38:
    // 0x26ac38: 0x0  nop
    ctx->pc = 0x26ac38u;
    // NOP
label_26ac3c:
    // 0x26ac3c: 0x0  nop
    ctx->pc = 0x26ac3cu;
    // NOP
label_26ac40:
    // 0x26ac40: 0x988  .word       0x00000988                   # jr          $zero # 00000980 <InstrIdType: CPU_SPECIAL>
label_26ac44:
    if (ctx->pc == 0x26AC44u) {
        ctx->pc = 0x26AC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AC40u;
        // 0x26ac44: 0xde50  .word       0x0000DE50                   # mfhi        $k1 # 00000640 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 27, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AC48u;
        goto label_26ac48;
    }
    ctx->pc = 0x26AC40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x26AC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AC40u;
        // 0x26ac44: 0xde50  .word       0x0000DE50                   # mfhi        $k1 # 00000640 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 27, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26AC40u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x26AC48u;
label_26ac48:
    // 0x26ac48: 0x0  nop
    ctx->pc = 0x26ac48u;
    // NOP
label_26ac4c:
    // 0x26ac4c: 0x0  nop
    ctx->pc = 0x26ac4cu;
    // NOP
label_26ac50:
    // 0x26ac50: 0x9a4  .word       0x000009A4                   # and         $at, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ac50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_26ac54:
    // 0x26ac54: 0xbc90  .word       0x0000BC90                   # mfhi        $s7 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ac54u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_26ac58:
    // 0x26ac58: 0x0  nop
    ctx->pc = 0x26ac58u;
    // NOP
label_26ac5c:
    // 0x26ac5c: 0x0  nop
    ctx->pc = 0x26ac5cu;
    // NOP
label_26ac60:
    // 0x26ac60: 0x9bc  dsll32      $at, $zero, 6
    ctx->pc = 0x26ac60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << (32 + 6));
label_26ac64:
    // 0x26ac64: 0xb3a0  .word       0x0000B3A0                   # add         $s6, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ac64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_26ac68:
    // 0x26ac68: 0x0  nop
    ctx->pc = 0x26ac68u;
    // NOP
label_26ac6c:
    // 0x26ac6c: 0x0  nop
    ctx->pc = 0x26ac6cu;
    // NOP
label_26ac70:
    // 0x26ac70: 0x9d3  .word       0x000009D3                   # mtlo        $zero # 000009C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ac70u;
    ctx->lo = GPR_U64(ctx, 0);
label_26ac74:
    // 0x26ac74: 0xbc70  tge         $zero, $zero, 753
    ctx->pc = 0x26ac74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26ac78:
    // 0x26ac78: 0x0  nop
    ctx->pc = 0x26ac78u;
    // NOP
label_26ac7c:
    // 0x26ac7c: 0x0  nop
    ctx->pc = 0x26ac7cu;
    // NOP
label_26ac80:
    // 0x26ac80: 0x9eb  .word       0x000009EB                   # sltu        $at, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ac80u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_26ac84:
    // 0x26ac84: 0x18a10  .word       0x00018A10                   # mfhi        $s1 # 00010200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ac84u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_26ac88:
    // 0x26ac88: 0x0  nop
    ctx->pc = 0x26ac88u;
    // NOP
label_26ac8c:
    // 0x26ac8c: 0x0  nop
    ctx->pc = 0x26ac8cu;
    // NOP
label_26ac90:
    // 0x26ac90: 0xa1d  .word       0x00000A1D                   # dmultu      $zero, $zero # 00000A00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ac90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x26AC90 raw=0x00000A1D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26ac94:
    // 0x26ac94: 0xab80  sll         $s5, $zero, 14
    ctx->pc = 0x26ac94u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 14));
label_26ac98:
    // 0x26ac98: 0x0  nop
    ctx->pc = 0x26ac98u;
    // NOP
label_26ac9c:
    // 0x26ac9c: 0x0  nop
    ctx->pc = 0x26ac9cu;
    // NOP
label_26aca0:
    // 0x26aca0: 0xa33  tltu        $zero, $zero, 40
    ctx->pc = 0x26aca0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26aca4:
    // 0x26aca4: 0xe860  .word       0x0000E860                   # add         $sp, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26aca4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_26aca8:
    // 0x26aca8: 0x0  nop
    ctx->pc = 0x26aca8u;
    // NOP
label_26acac:
    // 0x26acac: 0x0  nop
    ctx->pc = 0x26acacu;
    // NOP
label_26acb0:
    // 0x26acb0: 0xa51  .word       0x00000A51                   # mthi        $zero # 00000A40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26acb0u;
    ctx->hi = GPR_U64(ctx, 0);
label_26acb4:
    // 0x26acb4: 0xa2d0  .word       0x0000A2D0                   # mfhi        $s4 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26acb4u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_26acb8:
    // 0x26acb8: 0x0  nop
    ctx->pc = 0x26acb8u;
    // NOP
label_26acbc:
    // 0x26acbc: 0x0  nop
    ctx->pc = 0x26acbcu;
    // NOP
label_26acc0:
    // 0x26acc0: 0xa66  .word       0x00000A66                   # xor         $at, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26acc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_26acc4:
    // 0x26acc4: 0x9300  sll         $s2, $zero, 12
    ctx->pc = 0x26acc4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_26acc8:
    // 0x26acc8: 0x0  nop
    ctx->pc = 0x26acc8u;
    // NOP
label_26accc:
    // 0x26accc: 0x0  nop
    ctx->pc = 0x26acccu;
    // NOP
label_26acd0:
    // 0x26acd0: 0xa79  .word       0x00000A79                   # INVALID     $zero, $zero, 0xA79 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26acd0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x26ACD0 raw=0x00000A79"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26acd4:
    // 0x26acd4: 0x8900  sll         $s1, $zero, 4
    ctx->pc = 0x26acd4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_26acd8:
    // 0x26acd8: 0x0  nop
    ctx->pc = 0x26acd8u;
    // NOP
label_26acdc:
    // 0x26acdc: 0x0  nop
    ctx->pc = 0x26acdcu;
    // NOP
label_26ace0:
    // 0x26ace0: 0xa8b  .word       0x00000A8B                   # movn        $at, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ace0u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 1, GPR_VEC(ctx, 0));
label_26ace4:
    // 0x26ace4: 0x9bd0  .word       0x00009BD0                   # mfhi        $s3 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ace4u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_26ace8:
    // 0x26ace8: 0x0  nop
    ctx->pc = 0x26ace8u;
    // NOP
label_26acec:
    // 0x26acec: 0x0  nop
    ctx->pc = 0x26acecu;
    // NOP
label_26acf0:
    // 0x26acf0: 0xa9f  .word       0x00000A9F                   # ddivu       $at, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26acf0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x26ACF0 raw=0x00000A9F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26acf4:
    // 0x26acf4: 0xde10  .word       0x0000DE10                   # mfhi        $k1 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26acf4u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_26acf8:
    // 0x26acf8: 0x0  nop
    ctx->pc = 0x26acf8u;
    // NOP
label_26acfc:
    // 0x26acfc: 0x0  nop
    ctx->pc = 0x26acfcu;
    // NOP
label_26ad00:
    // 0x26ad00: 0xabb  dsra        $at, $zero, 10
    ctx->pc = 0x26ad00u;
    SET_GPR_S64(ctx, 1, GPR_S64(ctx, 0) >> 10);
label_26ad04:
    // 0x26ad04: 0x9da0  .word       0x00009DA0                   # add         $s3, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ad04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_26ad08:
    // 0x26ad08: 0x0  nop
    ctx->pc = 0x26ad08u;
    // NOP
label_26ad0c:
    // 0x26ad0c: 0x0  nop
    ctx->pc = 0x26ad0cu;
    // NOP
label_26ad10:
    // 0x26ad10: 0xacf  .word       0x00000ACF                   # sync # 00000800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ad10u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_26ad14:
    // 0x26ad14: 0xa990  .word       0x0000A990                   # mfhi        $s5 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ad14u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_26ad18:
    // 0x26ad18: 0x0  nop
    ctx->pc = 0x26ad18u;
    // NOP
label_26ad1c:
    // 0x26ad1c: 0x0  nop
    ctx->pc = 0x26ad1cu;
    // NOP
label_26ad20:
    // 0x26ad20: 0xae5  .word       0x00000AE5                   # move        $at, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ad20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_26ad24:
    // 0x26ad24: 0xbeb0  tge         $zero, $zero, 762
    ctx->pc = 0x26ad24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26ad28:
    // 0x26ad28: 0x0  nop
    ctx->pc = 0x26ad28u;
    // NOP
label_26ad2c:
    // 0x26ad2c: 0x0  nop
    ctx->pc = 0x26ad2cu;
    // NOP
label_26ad30:
    // 0x26ad30: 0xafd  .word       0x00000AFD                   # INVALID     $zero, $zero, 0xAFD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ad30u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x26AD30 raw=0x00000AFD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26ad34:
    // 0x26ad34: 0xa4a0  .word       0x0000A4A0                   # add         $s4, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ad34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_26ad38:
    // 0x26ad38: 0x0  nop
    ctx->pc = 0x26ad38u;
    // NOP
label_26ad3c:
    // 0x26ad3c: 0x0  nop
    ctx->pc = 0x26ad3cu;
    // NOP
label_26ad40:
    // 0x26ad40: 0xb12  .word       0x00000B12                   # mflo        $at # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ad40u;
    SET_GPR_U64(ctx, 1, ctx->lo);
label_26ad44:
    // 0x26ad44: 0xe750  .word       0x0000E750                   # mfhi        $gp # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ad44u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_26ad48:
    // 0x26ad48: 0x0  nop
    ctx->pc = 0x26ad48u;
    // NOP
label_26ad4c:
    // 0x26ad4c: 0x0  nop
    ctx->pc = 0x26ad4cu;
    // NOP
label_26ad50:
    // 0x26ad50: 0xb2f  .word       0x00000B2F                   # dsubu       $at, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ad50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_26ad54:
    // 0x26ad54: 0x8dd0  .word       0x00008DD0                   # mfhi        $s1 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ad54u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_26ad58:
    // 0x26ad58: 0x0  nop
    ctx->pc = 0x26ad58u;
    // NOP
label_26ad5c:
    // 0x26ad5c: 0x0  nop
    ctx->pc = 0x26ad5cu;
    // NOP
label_26ad60:
    // 0x26ad60: 0xb41  .word       0x00000B41                   # INVALID     $zero, $zero, 0xB41 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ad60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x26AD60 raw=0x00000B41"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26ad64:
    // 0x26ad64: 0x9a70  tge         $zero, $zero, 617
    ctx->pc = 0x26ad64u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26ad68:
    // 0x26ad68: 0x0  nop
    ctx->pc = 0x26ad68u;
    // NOP
label_26ad6c:
    // 0x26ad6c: 0x0  nop
    ctx->pc = 0x26ad6cu;
    // NOP
label_26ad70:
    // 0x26ad70: 0xb55  .word       0x00000B55                   # INVALID     $zero, $zero, 0xB55 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ad70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x26AD70 raw=0x00000B55"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26ad74:
    // 0x26ad74: 0x103d0  .word       0x000103D0                   # mfhi        $zero # 000103C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ad74u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_26ad78:
    // 0x26ad78: 0x0  nop
    ctx->pc = 0x26ad78u;
    // NOP
label_26ad7c:
    // 0x26ad7c: 0x0  nop
    ctx->pc = 0x26ad7cu;
    // NOP
label_26ad80:
    // 0x26ad80: 0xb76  tne         $zero, $zero, 45
    ctx->pc = 0x26ad80u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26ad84:
    // 0x26ad84: 0xb540  sll         $s6, $zero, 21
    ctx->pc = 0x26ad84u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_26ad88:
    // 0x26ad88: 0x0  nop
    ctx->pc = 0x26ad88u;
    // NOP
label_26ad8c:
    // 0x26ad8c: 0x0  nop
    ctx->pc = 0x26ad8cu;
    // NOP
label_26ad90:
    // 0x26ad90: 0xb8d  break       0, 46
    ctx->pc = 0x26ad90u;
    runtime->handleBreak(rdram, ctx);
label_26ad94:
    // 0x26ad94: 0xdda0  .word       0x0000DDA0                   # add         $k1, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ad94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_26ad98:
    // 0x26ad98: 0x0  nop
    ctx->pc = 0x26ad98u;
    // NOP
label_26ad9c:
    // 0x26ad9c: 0x0  nop
    ctx->pc = 0x26ad9cu;
    // NOP
label_26ada0:
    // 0x26ada0: 0xba9  .word       0x00000BA9                   # mtsa        $zero # 00000B80 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26ada0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_26ada4:
    // 0x26ada4: 0xb630  tge         $zero, $zero, 728
    ctx->pc = 0x26ada4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26ada8:
    // 0x26ada8: 0x0  nop
    ctx->pc = 0x26ada8u;
    // NOP
label_26adac:
    // 0x26adac: 0x0  nop
    ctx->pc = 0x26adacu;
    // NOP
label_26adb0:
    // 0x26adb0: 0xbc0  sll         $at, $zero, 15
    ctx->pc = 0x26adb0u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_26adb4:
    // 0x26adb4: 0xd7e0  .word       0x0000D7E0                   # add         $k0, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26adb4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_26adb8:
    // 0x26adb8: 0x0  nop
    ctx->pc = 0x26adb8u;
    // NOP
label_26adbc:
    // 0x26adbc: 0x0  nop
    ctx->pc = 0x26adbcu;
    // NOP
label_26adc0:
    // 0x26adc0: 0xbdb  .word       0x00000BDB                   # divu        $at, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26adc0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_26adc4:
    // 0x26adc4: 0xb260  .word       0x0000B260                   # add         $s6, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26adc4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_26adc8:
    // 0x26adc8: 0x0  nop
    ctx->pc = 0x26adc8u;
    // NOP
label_26adcc:
    // 0x26adcc: 0x0  nop
    ctx->pc = 0x26adccu;
    // NOP
label_26add0:
    // 0x26add0: 0xbf2  tlt         $zero, $zero, 47
    ctx->pc = 0x26add0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26add4:
    // 0x26add4: 0x10e60  .word       0x00010E60                   # add         $at, $zero, $at # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26add4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_26add8:
    // 0x26add8: 0x0  nop
    ctx->pc = 0x26add8u;
    // NOP
label_26addc:
    // 0x26addc: 0x0  nop
    ctx->pc = 0x26addcu;
    // NOP
label_26ade0:
    // 0x26ade0: 0xc14  .word       0x00000C14                   # dsllv       $at, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ade0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_26ade4:
    // 0x26ade4: 0x9ef0  tge         $zero, $zero, 635
    ctx->pc = 0x26ade4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26ade8:
    // 0x26ade8: 0x0  nop
    ctx->pc = 0x26ade8u;
    // NOP
label_26adec:
    // 0x26adec: 0x0  nop
    ctx->pc = 0x26adecu;
    // NOP
label_26adf0:
    // 0x26adf0: 0xc28  .word       0x00000C28                   # mfsa        $at # 00000400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26adf0u;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_26adf4:
    // 0x26adf4: 0x97b0  tge         $zero, $zero, 606
    ctx->pc = 0x26adf4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26adf8:
    // 0x26adf8: 0x0  nop
    ctx->pc = 0x26adf8u;
    // NOP
label_26adfc:
    // 0x26adfc: 0x0  nop
    ctx->pc = 0x26adfcu;
    // NOP
label_26ae00:
    // 0x26ae00: 0xc3b  dsra        $at, $zero, 16
    ctx->pc = 0x26ae00u;
    SET_GPR_S64(ctx, 1, GPR_S64(ctx, 0) >> 16);
label_26ae04:
    // 0x26ae04: 0x7a50  .word       0x00007A50                   # mfhi        $t7 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ae04u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_26ae08:
    // 0x26ae08: 0x0  nop
    ctx->pc = 0x26ae08u;
    // NOP
label_26ae0c:
    // 0x26ae0c: 0x0  nop
    ctx->pc = 0x26ae0cu;
    // NOP
label_26ae10:
    // 0x26ae10: 0xc4b  .word       0x00000C4B                   # movn        $at, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ae10u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 1, GPR_VEC(ctx, 0));
label_26ae14:
    // 0x26ae14: 0x66c0  sll         $t4, $zero, 27
    ctx->pc = 0x26ae14u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_26ae18:
    // 0x26ae18: 0x0  nop
    ctx->pc = 0x26ae18u;
    // NOP
label_26ae1c:
    // 0x26ae1c: 0x0  nop
    ctx->pc = 0x26ae1cu;
    // NOP
label_26ae20:
    // 0x26ae20: 0xc58  .word       0x00000C58                   # mult        $at, $zero, $zero # 00000440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26ae20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_26ae24:
    // 0x26ae24: 0xb240  sll         $s6, $zero, 9
    ctx->pc = 0x26ae24u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_26ae28:
    // 0x26ae28: 0x0  nop
    ctx->pc = 0x26ae28u;
    // NOP
label_26ae2c:
    // 0x26ae2c: 0x0  nop
    ctx->pc = 0x26ae2cu;
    // NOP
label_26ae30:
    // 0x26ae30: 0xc6f  .word       0x00000C6F                   # dsubu       $at, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ae30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_26ae34:
    // 0x26ae34: 0x8240  sll         $s0, $zero, 9
    ctx->pc = 0x26ae34u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_26ae38:
    // 0x26ae38: 0x0  nop
    ctx->pc = 0x26ae38u;
    // NOP
label_26ae3c:
    // 0x26ae3c: 0x0  nop
    ctx->pc = 0x26ae3cu;
    // NOP
label_26ae40:
    // 0x26ae40: 0xc80  sll         $at, $zero, 18
    ctx->pc = 0x26ae40u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_26ae44:
    // 0x26ae44: 0x129a0  .word       0x000129A0                   # add         $a1, $zero, $at # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ae44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_26ae48:
    // 0x26ae48: 0x0  nop
    ctx->pc = 0x26ae48u;
    // NOP
label_26ae4c:
    // 0x26ae4c: 0x0  nop
    ctx->pc = 0x26ae4cu;
    // NOP
label_26ae50:
    // 0x26ae50: 0xca6  .word       0x00000CA6                   # xor         $at, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ae50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_26ae54:
    // 0x26ae54: 0x7b00  sll         $t7, $zero, 12
    ctx->pc = 0x26ae54u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_26ae58:
    // 0x26ae58: 0x0  nop
    ctx->pc = 0x26ae58u;
    // NOP
label_26ae5c:
    // 0x26ae5c: 0x0  nop
    ctx->pc = 0x26ae5cu;
    // NOP
label_26ae60:
    // 0x26ae60: 0xcb6  tne         $zero, $zero, 50
    ctx->pc = 0x26ae60u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26ae64:
    // 0x26ae64: 0x8d50  .word       0x00008D50                   # mfhi        $s1 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ae64u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_26ae68:
    // 0x26ae68: 0x0  nop
    ctx->pc = 0x26ae68u;
    // NOP
label_26ae6c:
    // 0x26ae6c: 0x0  nop
    ctx->pc = 0x26ae6cu;
    // NOP
label_26ae70:
    // 0x26ae70: 0xcc8  .word       0x00000CC8                   # jr          $zero # 00000CC0 <InstrIdType: CPU_SPECIAL>
label_26ae74:
    if (ctx->pc == 0x26AE74u) {
        ctx->pc = 0x26AE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AE70u;
        // 0x26ae74: 0x6ac0  sll         $t5, $zero, 11 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AE78u;
        goto label_26ae78;
    }
    ctx->pc = 0x26AE70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x26AE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AE70u;
        // 0x26ae74: 0x6ac0  sll         $t5, $zero, 11 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26AE70u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x26AE78u;
label_26ae78:
    // 0x26ae78: 0x0  nop
    ctx->pc = 0x26ae78u;
    // NOP
label_26ae7c:
    // 0x26ae7c: 0x0  nop
    ctx->pc = 0x26ae7cu;
    // NOP
label_26ae80:
    // 0x26ae80: 0xcd6  .word       0x00000CD6                   # dsrlv       $at, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ae80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_26ae84:
    // 0x26ae84: 0x5f70  tge         $zero, $zero, 381
    ctx->pc = 0x26ae84u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26ae88:
    // 0x26ae88: 0x0  nop
    ctx->pc = 0x26ae88u;
    // NOP
label_26ae8c:
    // 0x26ae8c: 0x0  nop
    ctx->pc = 0x26ae8cu;
    // NOP
label_26ae90:
    // 0x26ae90: 0xce2  .word       0x00000CE2                   # neg         $at, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ae90u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 1, (int32_t)tmp); }
label_26ae94:
    // 0x26ae94: 0x57a0  .word       0x000057A0                   # add         $t2, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26ae94u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_26ae98:
    // 0x26ae98: 0x0  nop
    ctx->pc = 0x26ae98u;
    // NOP
label_26ae9c:
    // 0x26ae9c: 0x0  nop
    ctx->pc = 0x26ae9cu;
    // NOP
label_26aea0:
    // 0x26aea0: 0xced  .word       0x00000CED                   # daddu       $at, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26aea0u;
    SET_GPR_U64(ctx, 1, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26aea4:
    // 0x26aea4: 0x7b70  tge         $zero, $zero, 493
    ctx->pc = 0x26aea4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26aea8:
    // 0x26aea8: 0x0  nop
    ctx->pc = 0x26aea8u;
    // NOP
label_26aeac:
    // 0x26aeac: 0x0  nop
    ctx->pc = 0x26aeacu;
    // NOP
label_26aeb0:
    // 0x26aeb0: 0xcfd  .word       0x00000CFD                   # INVALID     $zero, $zero, 0xCFD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26aeb0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x26AEB0 raw=0x00000CFD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26aeb4:
    // 0x26aeb4: 0xfb20  .word       0x0000FB20                   # add         $ra, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26aeb4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
label_26aeb8:
    // 0x26aeb8: 0x0  nop
    ctx->pc = 0x26aeb8u;
    // NOP
label_26aebc:
    // 0x26aebc: 0x0  nop
    ctx->pc = 0x26aebcu;
    // NOP
label_26aec0:
    // 0x26aec0: 0xd1d  .word       0x00000D1D                   # dmultu      $zero, $zero # 00000D00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26aec0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x26AEC0 raw=0x00000D1D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26aec4:
    // 0x26aec4: 0x8980  sll         $s1, $zero, 6
    ctx->pc = 0x26aec4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
label_26aec8:
    // 0x26aec8: 0x0  nop
    ctx->pc = 0x26aec8u;
    // NOP
label_26aecc:
    // 0x26aecc: 0x0  nop
    ctx->pc = 0x26aeccu;
    // NOP
label_26aed0:
    // 0x26aed0: 0xd2f  .word       0x00000D2F                   # dsubu       $at, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26aed0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_26aed4:
    // 0x26aed4: 0x6510  .word       0x00006510                   # mfhi        $t4 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26aed4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_26aed8:
    // 0x26aed8: 0x0  nop
    ctx->pc = 0x26aed8u;
    // NOP
label_26aedc:
    // 0x26aedc: 0x0  nop
    ctx->pc = 0x26aedcu;
    // NOP
label_26aee0:
    // 0x26aee0: 0xd3c  dsll32      $at, $zero, 20
    ctx->pc = 0x26aee0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << (32 + 20));
label_26aee4:
    // 0x26aee4: 0x57b0  tge         $zero, $zero, 350
    ctx->pc = 0x26aee4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26aee8:
    // 0x26aee8: 0x0  nop
    ctx->pc = 0x26aee8u;
    // NOP
label_26aeec:
    // 0x26aeec: 0x0  nop
    ctx->pc = 0x26aeecu;
    // NOP
label_26aef0:
    // 0x26aef0: 0xd47  .word       0x00000D47                   # srav        $at, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26aef0u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26aef4:
    // 0x26aef4: 0x5cb0  tge         $zero, $zero, 370
    ctx->pc = 0x26aef4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26aef8:
    // 0x26aef8: 0x0  nop
    ctx->pc = 0x26aef8u;
    // NOP
label_26aefc:
    // 0x26aefc: 0x0  nop
    ctx->pc = 0x26aefcu;
    // NOP
label_26af00:
    // 0x26af00: 0xd53  .word       0x00000D53                   # mtlo        $zero # 00000D40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26af00u;
    ctx->lo = GPR_U64(ctx, 0);
label_26af04:
    // 0x26af04: 0xa2f0  tge         $zero, $zero, 651
    ctx->pc = 0x26af04u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26af08:
    // 0x26af08: 0x0  nop
    ctx->pc = 0x26af08u;
    // NOP
label_26af0c:
    // 0x26af0c: 0x0  nop
    ctx->pc = 0x26af0cu;
    // NOP
label_26af10:
    // 0x26af10: 0xd68  .word       0x00000D68                   # mfsa        $at # 00000540 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26af10u;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_26af14:
    // 0x26af14: 0x44f0  tge         $zero, $zero, 275
    ctx->pc = 0x26af14u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26af18:
    // 0x26af18: 0x0  nop
    ctx->pc = 0x26af18u;
    // NOP
label_26af1c:
    // 0x26af1c: 0x0  nop
    ctx->pc = 0x26af1cu;
    // NOP
label_26af20:
    // 0x26af20: 0xd71  tgeu        $zero, $zero, 53
    ctx->pc = 0x26af20u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26af24:
    // 0x26af24: 0xdee0  .word       0x0000DEE0                   # add         $k1, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26af24u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_26af28:
    // 0x26af28: 0x0  nop
    ctx->pc = 0x26af28u;
    // NOP
label_26af2c:
    // 0x26af2c: 0x0  nop
    ctx->pc = 0x26af2cu;
    // NOP
label_26af30:
    // 0x26af30: 0xd8d  break       0, 54
    ctx->pc = 0x26af30u;
    runtime->handleBreak(rdram, ctx);
label_26af34:
    // 0x26af34: 0x92c0  sll         $s2, $zero, 11
    ctx->pc = 0x26af34u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_26af38:
    // 0x26af38: 0x0  nop
    ctx->pc = 0x26af38u;
    // NOP
label_26af3c:
    // 0x26af3c: 0x0  nop
    ctx->pc = 0x26af3cu;
    // NOP
label_26af40:
    // 0x26af40: 0xda0  .word       0x00000DA0                   # add         $at, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26af40u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_26af44:
    // 0x26af44: 0x8e90  .word       0x00008E90                   # mfhi        $s1 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26af44u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_26af48:
    // 0x26af48: 0x0  nop
    ctx->pc = 0x26af48u;
    // NOP
label_26af4c:
    // 0x26af4c: 0x0  nop
    ctx->pc = 0x26af4cu;
    // NOP
label_26af50:
    // 0x26af50: 0xdb2  tlt         $zero, $zero, 54
    ctx->pc = 0x26af50u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26af54:
    // 0x26af54: 0xa7c0  sll         $s4, $zero, 31
    ctx->pc = 0x26af54u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_26af58:
    // 0x26af58: 0x0  nop
    ctx->pc = 0x26af58u;
    // NOP
label_26af5c:
    // 0x26af5c: 0x0  nop
    ctx->pc = 0x26af5cu;
    // NOP
label_26af60:
    // 0x26af60: 0xdc7  .word       0x00000DC7                   # srav        $at, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26af60u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26af64:
    // 0x26af64: 0x82d0  .word       0x000082D0                   # mfhi        $s0 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26af64u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_26af68:
    // 0x26af68: 0x0  nop
    ctx->pc = 0x26af68u;
    // NOP
label_26af6c:
    // 0x26af6c: 0x0  nop
    ctx->pc = 0x26af6cu;
    // NOP
label_26af70:
    // 0x26af70: 0xdd8  .word       0x00000DD8                   # mult        $at, $zero, $zero # 000005C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26af70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_26af74:
    // 0x26af74: 0xabf0  tge         $zero, $zero, 687
    ctx->pc = 0x26af74u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26af78:
    // 0x26af78: 0x0  nop
    ctx->pc = 0x26af78u;
    // NOP
label_26af7c:
    // 0x26af7c: 0x0  nop
    ctx->pc = 0x26af7cu;
    // NOP
label_26af80:
    // 0x26af80: 0xdee  .word       0x00000DEE                   # dsub        $at, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26af80u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
label_26af84:
    // 0x26af84: 0xb820  add         $s7, $zero, $zero
    ctx->pc = 0x26af84u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_26af88:
    // 0x26af88: 0x0  nop
    ctx->pc = 0x26af88u;
    // NOP
label_26af8c:
    // 0x26af8c: 0x0  nop
    ctx->pc = 0x26af8cu;
    // NOP
label_26af90:
    // 0x26af90: 0xe06  .word       0x00000E06                   # srlv        $at, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26af90u;
    SET_GPR_S32(ctx, 1, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26af94:
    // 0x26af94: 0x185f0  tge         $zero, $at, 535
    ctx->pc = 0x26af94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_26af98:
    // 0x26af98: 0x0  nop
    ctx->pc = 0x26af98u;
    // NOP
label_26af9c:
    // 0x26af9c: 0x0  nop
    ctx->pc = 0x26af9cu;
    // NOP
label_26afa0:
    // 0x26afa0: 0xe37  .word       0x00000E37                   # INVALID     $zero, $zero, 0xE37 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26afa0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x26AFA0 raw=0x00000E37"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26afa4:
    // 0x26afa4: 0xc430  tge         $zero, $zero, 784
    ctx->pc = 0x26afa4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26afa8:
    // 0x26afa8: 0x0  nop
    ctx->pc = 0x26afa8u;
    // NOP
label_26afac:
    // 0x26afac: 0x0  nop
    ctx->pc = 0x26afacu;
    // NOP
label_26afb0:
    // 0x26afb0: 0xe50  .word       0x00000E50                   # mfhi        $at # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26afb0u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_26afb4:
    // 0x26afb4: 0xa920  .word       0x0000A920                   # add         $s5, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26afb4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_26afb8:
    // 0x26afb8: 0x0  nop
    ctx->pc = 0x26afb8u;
    // NOP
label_26afbc:
    // 0x26afbc: 0x0  nop
    ctx->pc = 0x26afbcu;
    // NOP
label_26afc0:
    // 0x26afc0: 0xe66  .word       0x00000E66                   # xor         $at, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26afc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_26afc4:
    // 0x26afc4: 0x9ec0  sll         $s3, $zero, 27
    ctx->pc = 0x26afc4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_26afc8:
    // 0x26afc8: 0x0  nop
    ctx->pc = 0x26afc8u;
    // NOP
label_26afcc:
    // 0x26afcc: 0x0  nop
    ctx->pc = 0x26afccu;
    // NOP
label_26afd0:
    // 0x26afd0: 0xe7a  dsrl        $at, $zero, 25
    ctx->pc = 0x26afd0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) >> 25);
label_26afd4:
    // 0x26afd4: 0x6ad0  .word       0x00006AD0                   # mfhi        $t5 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26afd4u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_26afd8:
    // 0x26afd8: 0x0  nop
    ctx->pc = 0x26afd8u;
    // NOP
label_26afdc:
    // 0x26afdc: 0x0  nop
    ctx->pc = 0x26afdcu;
    // NOP
label_26afe0:
    // 0x26afe0: 0xe88  .word       0x00000E88                   # jr          $zero # 00000E80 <InstrIdType: CPU_SPECIAL>
label_26afe4:
    if (ctx->pc == 0x26AFE4u) {
        ctx->pc = 0x26AFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AFE0u;
        // 0x26afe4: 0x8030  tge         $zero, $zero, 512 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26AFE8u;
        goto label_26afe8;
    }
    ctx->pc = 0x26AFE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x26AFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26AFE0u;
        // 0x26afe4: 0x8030  tge         $zero, $zero, 512 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26AFE0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x26AFE8u;
label_26afe8:
    // 0x26afe8: 0x0  nop
    ctx->pc = 0x26afe8u;
    // NOP
label_26afec:
    // 0x26afec: 0x0  nop
    ctx->pc = 0x26afecu;
    // NOP
label_26aff0:
    // 0x26aff0: 0xe99  .word       0x00000E99                   # multu       $zero, $zero # 00000E80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26aff0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_26aff4:
    // 0x26aff4: 0xa760  .word       0x0000A760                   # add         $s4, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26aff4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_26aff8:
    // 0x26aff8: 0x0  nop
    ctx->pc = 0x26aff8u;
    // NOP
label_26affc:
    // 0x26affc: 0x0  nop
    ctx->pc = 0x26affcu;
    // NOP
label_26b000:
    // 0x26b000: 0xeae  .word       0x00000EAE                   # dsub        $at, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b000u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
label_26b004:
    // 0x26b004: 0x1a590  .word       0x0001A590                   # mfhi        $s4 # 00010580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b004u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_26b008:
    // 0x26b008: 0x0  nop
    ctx->pc = 0x26b008u;
    // NOP
label_26b00c:
    // 0x26b00c: 0x0  nop
    ctx->pc = 0x26b00cu;
    // NOP
label_26b010:
    // 0x26b010: 0xee3  .word       0x00000EE3                   # negu        $at, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b010u;
    SET_GPR_S32(ctx, 1, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_26b014:
    // 0x26b014: 0x91c0  sll         $s2, $zero, 7
    ctx->pc = 0x26b014u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_26b018:
    // 0x26b018: 0x0  nop
    ctx->pc = 0x26b018u;
    // NOP
label_26b01c:
    // 0x26b01c: 0x0  nop
    ctx->pc = 0x26b01cu;
    // NOP
label_26b020:
    // 0x26b020: 0xef6  tne         $zero, $zero, 59
    ctx->pc = 0x26b020u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26b024:
    // 0x26b024: 0x6c00  sll         $t5, $zero, 16
    ctx->pc = 0x26b024u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_26b028:
    // 0x26b028: 0x0  nop
    ctx->pc = 0x26b028u;
    // NOP
label_26b02c:
    // 0x26b02c: 0x0  nop
    ctx->pc = 0x26b02cu;
    // NOP
label_26b030:
    // 0x26b030: 0xf04  .word       0x00000F04                   # sllv        $at, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b030u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26b034:
    // 0x26b034: 0xa600  sll         $s4, $zero, 24
    ctx->pc = 0x26b034u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_26b038:
    // 0x26b038: 0x0  nop
    ctx->pc = 0x26b038u;
    // NOP
label_26b03c:
    // 0x26b03c: 0x0  nop
    ctx->pc = 0x26b03cu;
    // NOP
label_26b040:
    // 0x26b040: 0xf19  .word       0x00000F19                   # multu       $zero, $zero # 00000F00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b040u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_26b044:
    // 0x26b044: 0x82e0  .word       0x000082E0                   # add         $s0, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b044u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_26b048:
    // 0x26b048: 0x0  nop
    ctx->pc = 0x26b048u;
    // NOP
label_26b04c:
    // 0x26b04c: 0x0  nop
    ctx->pc = 0x26b04cu;
    // NOP
label_26b050:
    // 0x26b050: 0xf2a  .word       0x00000F2A                   # slt         $at, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b050u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_26b054:
    // 0x26b054: 0x9360  .word       0x00009360                   # add         $s2, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b054u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_26b058:
    // 0x26b058: 0x0  nop
    ctx->pc = 0x26b058u;
    // NOP
label_26b05c:
    // 0x26b05c: 0x0  nop
    ctx->pc = 0x26b05cu;
    // NOP
label_26b060:
    // 0x26b060: 0xf3d  .word       0x00000F3D                   # INVALID     $zero, $zero, 0xF3D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b060u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x26B060 raw=0x00000F3D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26b064:
    // 0x26b064: 0xa700  sll         $s4, $zero, 28
    ctx->pc = 0x26b064u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_26b068:
    // 0x26b068: 0x0  nop
    ctx->pc = 0x26b068u;
    // NOP
label_26b06c:
    // 0x26b06c: 0x0  nop
    ctx->pc = 0x26b06cu;
    // NOP
label_26b070:
    // 0x26b070: 0xf52  .word       0x00000F52                   # mflo        $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b070u;
    SET_GPR_U64(ctx, 1, ctx->lo);
label_26b074:
    // 0x26b074: 0xf350  .word       0x0000F350                   # mfhi        $fp # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b074u;
    SET_GPR_U64(ctx, 30, ctx->hi);
label_26b078:
    // 0x26b078: 0x0  nop
    ctx->pc = 0x26b078u;
    // NOP
label_26b07c:
    // 0x26b07c: 0x0  nop
    ctx->pc = 0x26b07cu;
    // NOP
label_26b080:
    // 0x26b080: 0xf71  tgeu        $zero, $zero, 61
    ctx->pc = 0x26b080u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26b084:
    // 0x26b084: 0x104f0  tge         $zero, $at, 19
    ctx->pc = 0x26b084u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_26b088:
    // 0x26b088: 0x0  nop
    ctx->pc = 0x26b088u;
    // NOP
label_26b08c:
    // 0x26b08c: 0x0  nop
    ctx->pc = 0x26b08cu;
    // NOP
label_26b090:
    // 0x26b090: 0xf92  .word       0x00000F92                   # mflo        $at # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b090u;
    SET_GPR_U64(ctx, 1, ctx->lo);
label_26b094:
    // 0x26b094: 0xb620  .word       0x0000B620                   # add         $s6, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b094u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_26b098:
    // 0x26b098: 0x0  nop
    ctx->pc = 0x26b098u;
    // NOP
label_26b09c:
    // 0x26b09c: 0x0  nop
    ctx->pc = 0x26b09cu;
    // NOP
label_26b0a0:
    // 0x26b0a0: 0xfa9  .word       0x00000FA9                   # mtsa        $zero # 00000F80 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26b0a0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_26b0a4:
    // 0x26b0a4: 0x14260  .word       0x00014260                   # add         $t0, $zero, $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b0a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_26b0a8:
    // 0x26b0a8: 0x0  nop
    ctx->pc = 0x26b0a8u;
    // NOP
label_26b0ac:
    // 0x26b0ac: 0x0  nop
    ctx->pc = 0x26b0acu;
    // NOP
label_26b0b0:
    // 0x26b0b0: 0xfd2  .word       0x00000FD2                   # mflo        $at # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b0b0u;
    SET_GPR_U64(ctx, 1, ctx->lo);
label_26b0b4:
    // 0x26b0b4: 0xc7f0  tge         $zero, $zero, 799
    ctx->pc = 0x26b0b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26b0b8:
    // 0x26b0b8: 0x0  nop
    ctx->pc = 0x26b0b8u;
    // NOP
label_26b0bc:
    // 0x26b0bc: 0x0  nop
    ctx->pc = 0x26b0bcu;
    // NOP
label_26b0c0:
    // 0x26b0c0: 0xfeb  .word       0x00000FEB                   # sltu        $at, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b0c0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_26b0c4:
    // 0x26b0c4: 0x88b0  tge         $zero, $zero, 546
    ctx->pc = 0x26b0c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26b0c8:
    // 0x26b0c8: 0x0  nop
    ctx->pc = 0x26b0c8u;
    // NOP
label_26b0cc:
    // 0x26b0cc: 0x0  nop
    ctx->pc = 0x26b0ccu;
    // NOP
label_26b0d0:
    // 0x26b0d0: 0xffd  .word       0x00000FFD                   # INVALID     $zero, $zero, 0xFFD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b0d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x26B0D0 raw=0x00000FFD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26b0d4:
    // 0x26b0d4: 0x8b80  sll         $s1, $zero, 14
    ctx->pc = 0x26b0d4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 14));
label_26b0d8:
    // 0x26b0d8: 0x0  nop
    ctx->pc = 0x26b0d8u;
    // NOP
label_26b0dc:
    // 0x26b0dc: 0x0  nop
    ctx->pc = 0x26b0dcu;
    // NOP
label_26b0e0:
    // 0x26b0e0: 0x100f  .word       0x0000100F                   # sync # 00001000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b0e0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_26b0e4:
    // 0x26b0e4: 0x1a710  .word       0x0001A710                   # mfhi        $s4 # 00010700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b0e4u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_26b0e8:
    // 0x26b0e8: 0x0  nop
    ctx->pc = 0x26b0e8u;
    // NOP
label_26b0ec:
    // 0x26b0ec: 0x0  nop
    ctx->pc = 0x26b0ecu;
    // NOP
label_26b0f0:
    // 0x26b0f0: 0x1044  .word       0x00001044                   # sllv        $v0, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26b0f4:
    // 0x26b0f4: 0x4340  sll         $t0, $zero, 13
    ctx->pc = 0x26b0f4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
label_26b0f8:
    // 0x26b0f8: 0x0  nop
    ctx->pc = 0x26b0f8u;
    // NOP
label_26b0fc:
    // 0x26b0fc: 0x0  nop
    ctx->pc = 0x26b0fcu;
    // NOP
label_26b100:
    // 0x26b100: 0x104d  break       0, 65
    ctx->pc = 0x26b100u;
    runtime->handleBreak(rdram, ctx);
label_26b104:
    // 0x26b104: 0xb850  .word       0x0000B850                   # mfhi        $s7 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b104u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_26b108:
    // 0x26b108: 0x0  nop
    ctx->pc = 0x26b108u;
    // NOP
label_26b10c:
    // 0x26b10c: 0x0  nop
    ctx->pc = 0x26b10cu;
    // NOP
label_26b110:
    // 0x26b110: 0x1065  .word       0x00001065                   # move        $v0, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26b110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_26b114:
    // 0x26b114: 0x9080  sll         $s2, $zero, 2
    ctx->pc = 0x26b114u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_26b118:
    // 0x26b118: 0x0  nop
    ctx->pc = 0x26b118u;
    // NOP
label_26b11c:
    // 0x26b11c: 0x0  nop
    ctx->pc = 0x26b11cu;
    // NOP
    ctx->pc = 0x26b120u;
    return;
}

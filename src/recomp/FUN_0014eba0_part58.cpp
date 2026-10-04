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


void FUN_0014eba0_part58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x16a8f0u: goto label_16a8f0;
        case 0x16a8f4u: goto label_16a8f4;
        case 0x16a8f8u: goto label_16a8f8;
        case 0x16a8fcu: goto label_16a8fc;
        case 0x16a900u: goto label_16a900;
        case 0x16a904u: goto label_16a904;
        case 0x16a908u: goto label_16a908;
        case 0x16a90cu: goto label_16a90c;
        case 0x16a910u: goto label_16a910;
        case 0x16a914u: goto label_16a914;
        case 0x16a918u: goto label_16a918;
        case 0x16a91cu: goto label_16a91c;
        case 0x16a920u: goto label_16a920;
        case 0x16a924u: goto label_16a924;
        case 0x16a928u: goto label_16a928;
        case 0x16a92cu: goto label_16a92c;
        case 0x16a930u: goto label_16a930;
        case 0x16a934u: goto label_16a934;
        case 0x16a938u: goto label_16a938;
        case 0x16a93cu: goto label_16a93c;
        case 0x16a940u: goto label_16a940;
        case 0x16a944u: goto label_16a944;
        case 0x16a948u: goto label_16a948;
        case 0x16a94cu: goto label_16a94c;
        case 0x16a950u: goto label_16a950;
        case 0x16a954u: goto label_16a954;
        case 0x16a958u: goto label_16a958;
        case 0x16a95cu: goto label_16a95c;
        case 0x16a960u: goto label_16a960;
        case 0x16a964u: goto label_16a964;
        case 0x16a968u: goto label_16a968;
        case 0x16a96cu: goto label_16a96c;
        case 0x16a970u: goto label_16a970;
        case 0x16a974u: goto label_16a974;
        case 0x16a978u: goto label_16a978;
        case 0x16a97cu: goto label_16a97c;
        case 0x16a980u: goto label_16a980;
        case 0x16a984u: goto label_16a984;
        case 0x16a988u: goto label_16a988;
        case 0x16a98cu: goto label_16a98c;
        case 0x16a990u: goto label_16a990;
        case 0x16a994u: goto label_16a994;
        case 0x16a998u: goto label_16a998;
        case 0x16a99cu: goto label_16a99c;
        case 0x16a9a0u: goto label_16a9a0;
        case 0x16a9a4u: goto label_16a9a4;
        case 0x16a9a8u: goto label_16a9a8;
        case 0x16a9acu: goto label_16a9ac;
        case 0x16a9b0u: goto label_16a9b0;
        case 0x16a9b4u: goto label_16a9b4;
        case 0x16a9b8u: goto label_16a9b8;
        case 0x16a9bcu: goto label_16a9bc;
        case 0x16a9c0u: goto label_16a9c0;
        case 0x16a9c4u: goto label_16a9c4;
        case 0x16a9c8u: goto label_16a9c8;
        case 0x16a9ccu: goto label_16a9cc;
        case 0x16a9d0u: goto label_16a9d0;
        case 0x16a9d4u: goto label_16a9d4;
        case 0x16a9d8u: goto label_16a9d8;
        case 0x16a9dcu: goto label_16a9dc;
        case 0x16a9e0u: goto label_16a9e0;
        case 0x16a9e4u: goto label_16a9e4;
        case 0x16a9e8u: goto label_16a9e8;
        case 0x16a9ecu: goto label_16a9ec;
        case 0x16a9f0u: goto label_16a9f0;
        case 0x16a9f4u: goto label_16a9f4;
        case 0x16a9f8u: goto label_16a9f8;
        case 0x16a9fcu: goto label_16a9fc;
        case 0x16aa00u: goto label_16aa00;
        case 0x16aa04u: goto label_16aa04;
        case 0x16aa08u: goto label_16aa08;
        case 0x16aa0cu: goto label_16aa0c;
        case 0x16aa10u: goto label_16aa10;
        case 0x16aa14u: goto label_16aa14;
        case 0x16aa18u: goto label_16aa18;
        case 0x16aa1cu: goto label_16aa1c;
        case 0x16aa20u: goto label_16aa20;
        case 0x16aa24u: goto label_16aa24;
        case 0x16aa28u: goto label_16aa28;
        case 0x16aa2cu: goto label_16aa2c;
        case 0x16aa30u: goto label_16aa30;
        case 0x16aa34u: goto label_16aa34;
        case 0x16aa38u: goto label_16aa38;
        case 0x16aa3cu: goto label_16aa3c;
        case 0x16aa40u: goto label_16aa40;
        case 0x16aa44u: goto label_16aa44;
        case 0x16aa48u: goto label_16aa48;
        case 0x16aa4cu: goto label_16aa4c;
        case 0x16aa50u: goto label_16aa50;
        case 0x16aa54u: goto label_16aa54;
        case 0x16aa58u: goto label_16aa58;
        case 0x16aa5cu: goto label_16aa5c;
        case 0x16aa60u: goto label_16aa60;
        case 0x16aa64u: goto label_16aa64;
        case 0x16aa68u: goto label_16aa68;
        case 0x16aa6cu: goto label_16aa6c;
        case 0x16aa70u: goto label_16aa70;
        case 0x16aa74u: goto label_16aa74;
        case 0x16aa78u: goto label_16aa78;
        case 0x16aa7cu: goto label_16aa7c;
        case 0x16aa80u: goto label_16aa80;
        case 0x16aa84u: goto label_16aa84;
        case 0x16aa88u: goto label_16aa88;
        case 0x16aa8cu: goto label_16aa8c;
        case 0x16aa90u: goto label_16aa90;
        case 0x16aa94u: goto label_16aa94;
        case 0x16aa98u: goto label_16aa98;
        case 0x16aa9cu: goto label_16aa9c;
        case 0x16aaa0u: goto label_16aaa0;
        case 0x16aaa4u: goto label_16aaa4;
        case 0x16aaa8u: goto label_16aaa8;
        case 0x16aaacu: goto label_16aaac;
        case 0x16aab0u: goto label_16aab0;
        case 0x16aab4u: goto label_16aab4;
        case 0x16aab8u: goto label_16aab8;
        case 0x16aabcu: goto label_16aabc;
        case 0x16aac0u: goto label_16aac0;
        case 0x16aac4u: goto label_16aac4;
        case 0x16aac8u: goto label_16aac8;
        case 0x16aaccu: goto label_16aacc;
        case 0x16aad0u: goto label_16aad0;
        case 0x16aad4u: goto label_16aad4;
        case 0x16aad8u: goto label_16aad8;
        case 0x16aadcu: goto label_16aadc;
        case 0x16aae0u: goto label_16aae0;
        case 0x16aae4u: goto label_16aae4;
        case 0x16aae8u: goto label_16aae8;
        case 0x16aaecu: goto label_16aaec;
        case 0x16aaf0u: goto label_16aaf0;
        case 0x16aaf4u: goto label_16aaf4;
        case 0x16aaf8u: goto label_16aaf8;
        case 0x16aafcu: goto label_16aafc;
        case 0x16ab00u: goto label_16ab00;
        case 0x16ab04u: goto label_16ab04;
        case 0x16ab08u: goto label_16ab08;
        case 0x16ab0cu: goto label_16ab0c;
        case 0x16ab10u: goto label_16ab10;
        case 0x16ab14u: goto label_16ab14;
        case 0x16ab18u: goto label_16ab18;
        case 0x16ab1cu: goto label_16ab1c;
        case 0x16ab20u: goto label_16ab20;
        case 0x16ab24u: goto label_16ab24;
        case 0x16ab28u: goto label_16ab28;
        case 0x16ab2cu: goto label_16ab2c;
        case 0x16ab30u: goto label_16ab30;
        case 0x16ab34u: goto label_16ab34;
        case 0x16ab38u: goto label_16ab38;
        case 0x16ab3cu: goto label_16ab3c;
        case 0x16ab40u: goto label_16ab40;
        case 0x16ab44u: goto label_16ab44;
        case 0x16ab48u: goto label_16ab48;
        case 0x16ab4cu: goto label_16ab4c;
        case 0x16ab50u: goto label_16ab50;
        case 0x16ab54u: goto label_16ab54;
        case 0x16ab58u: goto label_16ab58;
        case 0x16ab5cu: goto label_16ab5c;
        case 0x16ab60u: goto label_16ab60;
        case 0x16ab64u: goto label_16ab64;
        case 0x16ab68u: goto label_16ab68;
        case 0x16ab6cu: goto label_16ab6c;
        case 0x16ab70u: goto label_16ab70;
        case 0x16ab74u: goto label_16ab74;
        case 0x16ab78u: goto label_16ab78;
        case 0x16ab7cu: goto label_16ab7c;
        case 0x16ab80u: goto label_16ab80;
        case 0x16ab84u: goto label_16ab84;
        case 0x16ab88u: goto label_16ab88;
        case 0x16ab8cu: goto label_16ab8c;
        case 0x16ab90u: goto label_16ab90;
        case 0x16ab94u: goto label_16ab94;
        case 0x16ab98u: goto label_16ab98;
        case 0x16ab9cu: goto label_16ab9c;
        case 0x16aba0u: goto label_16aba0;
        case 0x16aba4u: goto label_16aba4;
        case 0x16aba8u: goto label_16aba8;
        case 0x16abacu: goto label_16abac;
        case 0x16abb0u: goto label_16abb0;
        case 0x16abb4u: goto label_16abb4;
        case 0x16abb8u: goto label_16abb8;
        case 0x16abbcu: goto label_16abbc;
        case 0x16abc0u: goto label_16abc0;
        case 0x16abc4u: goto label_16abc4;
        case 0x16abc8u: goto label_16abc8;
        case 0x16abccu: goto label_16abcc;
        case 0x16abd0u: goto label_16abd0;
        case 0x16abd4u: goto label_16abd4;
        case 0x16abd8u: goto label_16abd8;
        case 0x16abdcu: goto label_16abdc;
        case 0x16abe0u: goto label_16abe0;
        case 0x16abe4u: goto label_16abe4;
        case 0x16abe8u: goto label_16abe8;
        case 0x16abecu: goto label_16abec;
        case 0x16abf0u: goto label_16abf0;
        case 0x16abf4u: goto label_16abf4;
        case 0x16abf8u: goto label_16abf8;
        case 0x16abfcu: goto label_16abfc;
        case 0x16ac00u: goto label_16ac00;
        case 0x16ac04u: goto label_16ac04;
        case 0x16ac08u: goto label_16ac08;
        case 0x16ac0cu: goto label_16ac0c;
        case 0x16ac10u: goto label_16ac10;
        case 0x16ac14u: goto label_16ac14;
        case 0x16ac18u: goto label_16ac18;
        case 0x16ac1cu: goto label_16ac1c;
        case 0x16ac20u: goto label_16ac20;
        case 0x16ac24u: goto label_16ac24;
        case 0x16ac28u: goto label_16ac28;
        case 0x16ac2cu: goto label_16ac2c;
        case 0x16ac30u: goto label_16ac30;
        case 0x16ac34u: goto label_16ac34;
        case 0x16ac38u: goto label_16ac38;
        case 0x16ac3cu: goto label_16ac3c;
        case 0x16ac40u: goto label_16ac40;
        case 0x16ac44u: goto label_16ac44;
        case 0x16ac48u: goto label_16ac48;
        case 0x16ac4cu: goto label_16ac4c;
        case 0x16ac50u: goto label_16ac50;
        case 0x16ac54u: goto label_16ac54;
        case 0x16ac58u: goto label_16ac58;
        case 0x16ac5cu: goto label_16ac5c;
        case 0x16ac60u: goto label_16ac60;
        case 0x16ac64u: goto label_16ac64;
        case 0x16ac68u: goto label_16ac68;
        case 0x16ac6cu: goto label_16ac6c;
        case 0x16ac70u: goto label_16ac70;
        case 0x16ac74u: goto label_16ac74;
        case 0x16ac78u: goto label_16ac78;
        case 0x16ac7cu: goto label_16ac7c;
        case 0x16ac80u: goto label_16ac80;
        case 0x16ac84u: goto label_16ac84;
        case 0x16ac88u: goto label_16ac88;
        case 0x16ac8cu: goto label_16ac8c;
        case 0x16ac90u: goto label_16ac90;
        case 0x16ac94u: goto label_16ac94;
        case 0x16ac98u: goto label_16ac98;
        case 0x16ac9cu: goto label_16ac9c;
        case 0x16aca0u: goto label_16aca0;
        case 0x16aca4u: goto label_16aca4;
        case 0x16aca8u: goto label_16aca8;
        case 0x16acacu: goto label_16acac;
        case 0x16acb0u: goto label_16acb0;
        case 0x16acb4u: goto label_16acb4;
        case 0x16acb8u: goto label_16acb8;
        case 0x16acbcu: goto label_16acbc;
        case 0x16acc0u: goto label_16acc0;
        case 0x16acc4u: goto label_16acc4;
        case 0x16acc8u: goto label_16acc8;
        case 0x16acccu: goto label_16accc;
        case 0x16acd0u: goto label_16acd0;
        case 0x16acd4u: goto label_16acd4;
        case 0x16acd8u: goto label_16acd8;
        case 0x16acdcu: goto label_16acdc;
        case 0x16ace0u: goto label_16ace0;
        case 0x16ace4u: goto label_16ace4;
        case 0x16ace8u: goto label_16ace8;
        case 0x16acecu: goto label_16acec;
        case 0x16acf0u: goto label_16acf0;
        case 0x16acf4u: goto label_16acf4;
        case 0x16acf8u: goto label_16acf8;
        case 0x16acfcu: goto label_16acfc;
        case 0x16ad00u: goto label_16ad00;
        case 0x16ad04u: goto label_16ad04;
        case 0x16ad08u: goto label_16ad08;
        case 0x16ad0cu: goto label_16ad0c;
        case 0x16ad10u: goto label_16ad10;
        case 0x16ad14u: goto label_16ad14;
        case 0x16ad18u: goto label_16ad18;
        case 0x16ad1cu: goto label_16ad1c;
        case 0x16ad20u: goto label_16ad20;
        case 0x16ad24u: goto label_16ad24;
        case 0x16ad28u: goto label_16ad28;
        case 0x16ad2cu: goto label_16ad2c;
        case 0x16ad30u: goto label_16ad30;
        case 0x16ad34u: goto label_16ad34;
        case 0x16ad38u: goto label_16ad38;
        case 0x16ad3cu: goto label_16ad3c;
        case 0x16ad40u: goto label_16ad40;
        case 0x16ad44u: goto label_16ad44;
        case 0x16ad48u: goto label_16ad48;
        case 0x16ad4cu: goto label_16ad4c;
        case 0x16ad50u: goto label_16ad50;
        case 0x16ad54u: goto label_16ad54;
        case 0x16ad58u: goto label_16ad58;
        case 0x16ad5cu: goto label_16ad5c;
        case 0x16ad60u: goto label_16ad60;
        case 0x16ad64u: goto label_16ad64;
        case 0x16ad68u: goto label_16ad68;
        case 0x16ad6cu: goto label_16ad6c;
        case 0x16ad70u: goto label_16ad70;
        case 0x16ad74u: goto label_16ad74;
        case 0x16ad78u: goto label_16ad78;
        case 0x16ad7cu: goto label_16ad7c;
        case 0x16ad80u: goto label_16ad80;
        case 0x16ad84u: goto label_16ad84;
        case 0x16ad88u: goto label_16ad88;
        case 0x16ad8cu: goto label_16ad8c;
        case 0x16ad90u: goto label_16ad90;
        case 0x16ad94u: goto label_16ad94;
        case 0x16ad98u: goto label_16ad98;
        case 0x16ad9cu: goto label_16ad9c;
        case 0x16ada0u: goto label_16ada0;
        case 0x16ada4u: goto label_16ada4;
        case 0x16ada8u: goto label_16ada8;
        case 0x16adacu: goto label_16adac;
        case 0x16adb0u: goto label_16adb0;
        case 0x16adb4u: goto label_16adb4;
        case 0x16adb8u: goto label_16adb8;
        case 0x16adbcu: goto label_16adbc;
        case 0x16adc0u: goto label_16adc0;
        case 0x16adc4u: goto label_16adc4;
        case 0x16adc8u: goto label_16adc8;
        case 0x16adccu: goto label_16adcc;
        case 0x16add0u: goto label_16add0;
        case 0x16add4u: goto label_16add4;
        case 0x16add8u: goto label_16add8;
        case 0x16addcu: goto label_16addc;
        case 0x16ade0u: goto label_16ade0;
        case 0x16ade4u: goto label_16ade4;
        case 0x16ade8u: goto label_16ade8;
        case 0x16adecu: goto label_16adec;
        case 0x16adf0u: goto label_16adf0;
        case 0x16adf4u: goto label_16adf4;
        case 0x16adf8u: goto label_16adf8;
        case 0x16adfcu: goto label_16adfc;
        case 0x16ae00u: goto label_16ae00;
        case 0x16ae04u: goto label_16ae04;
        case 0x16ae08u: goto label_16ae08;
        case 0x16ae0cu: goto label_16ae0c;
        case 0x16ae10u: goto label_16ae10;
        case 0x16ae14u: goto label_16ae14;
        case 0x16ae18u: goto label_16ae18;
        case 0x16ae1cu: goto label_16ae1c;
        case 0x16ae20u: goto label_16ae20;
        case 0x16ae24u: goto label_16ae24;
        case 0x16ae28u: goto label_16ae28;
        case 0x16ae2cu: goto label_16ae2c;
        case 0x16ae30u: goto label_16ae30;
        case 0x16ae34u: goto label_16ae34;
        case 0x16ae38u: goto label_16ae38;
        case 0x16ae3cu: goto label_16ae3c;
        case 0x16ae40u: goto label_16ae40;
        case 0x16ae44u: goto label_16ae44;
        case 0x16ae48u: goto label_16ae48;
        case 0x16ae4cu: goto label_16ae4c;
        case 0x16ae50u: goto label_16ae50;
        case 0x16ae54u: goto label_16ae54;
        case 0x16ae58u: goto label_16ae58;
        case 0x16ae5cu: goto label_16ae5c;
        case 0x16ae60u: goto label_16ae60;
        case 0x16ae64u: goto label_16ae64;
        case 0x16ae68u: goto label_16ae68;
        case 0x16ae6cu: goto label_16ae6c;
        case 0x16ae70u: goto label_16ae70;
        case 0x16ae74u: goto label_16ae74;
        case 0x16ae78u: goto label_16ae78;
        case 0x16ae7cu: goto label_16ae7c;
        case 0x16ae80u: goto label_16ae80;
        case 0x16ae84u: goto label_16ae84;
        case 0x16ae88u: goto label_16ae88;
        case 0x16ae8cu: goto label_16ae8c;
        case 0x16ae90u: goto label_16ae90;
        case 0x16ae94u: goto label_16ae94;
        case 0x16ae98u: goto label_16ae98;
        case 0x16ae9cu: goto label_16ae9c;
        case 0x16aea0u: goto label_16aea0;
        case 0x16aea4u: goto label_16aea4;
        case 0x16aea8u: goto label_16aea8;
        case 0x16aeacu: goto label_16aeac;
        case 0x16aeb0u: goto label_16aeb0;
        case 0x16aeb4u: goto label_16aeb4;
        case 0x16aeb8u: goto label_16aeb8;
        case 0x16aebcu: goto label_16aebc;
        case 0x16aec0u: goto label_16aec0;
        case 0x16aec4u: goto label_16aec4;
        case 0x16aec8u: goto label_16aec8;
        case 0x16aeccu: goto label_16aecc;
        case 0x16aed0u: goto label_16aed0;
        case 0x16aed4u: goto label_16aed4;
        case 0x16aed8u: goto label_16aed8;
        case 0x16aedcu: goto label_16aedc;
        case 0x16aee0u: goto label_16aee0;
        case 0x16aee4u: goto label_16aee4;
        case 0x16aee8u: goto label_16aee8;
        case 0x16aeecu: goto label_16aeec;
        case 0x16aef0u: goto label_16aef0;
        case 0x16aef4u: goto label_16aef4;
        case 0x16aef8u: goto label_16aef8;
        case 0x16aefcu: goto label_16aefc;
        case 0x16af00u: goto label_16af00;
        case 0x16af04u: goto label_16af04;
        case 0x16af08u: goto label_16af08;
        case 0x16af0cu: goto label_16af0c;
        case 0x16af10u: goto label_16af10;
        case 0x16af14u: goto label_16af14;
        case 0x16af18u: goto label_16af18;
        case 0x16af1cu: goto label_16af1c;
        case 0x16af20u: goto label_16af20;
        case 0x16af24u: goto label_16af24;
        case 0x16af28u: goto label_16af28;
        case 0x16af2cu: goto label_16af2c;
        case 0x16af30u: goto label_16af30;
        case 0x16af34u: goto label_16af34;
        case 0x16af38u: goto label_16af38;
        case 0x16af3cu: goto label_16af3c;
        case 0x16af40u: goto label_16af40;
        case 0x16af44u: goto label_16af44;
        case 0x16af48u: goto label_16af48;
        case 0x16af4cu: goto label_16af4c;
        case 0x16af50u: goto label_16af50;
        case 0x16af54u: goto label_16af54;
        case 0x16af58u: goto label_16af58;
        case 0x16af5cu: goto label_16af5c;
        case 0x16af60u: goto label_16af60;
        case 0x16af64u: goto label_16af64;
        case 0x16af68u: goto label_16af68;
        case 0x16af6cu: goto label_16af6c;
        case 0x16af70u: goto label_16af70;
        case 0x16af74u: goto label_16af74;
        case 0x16af78u: goto label_16af78;
        case 0x16af7cu: goto label_16af7c;
        case 0x16af80u: goto label_16af80;
        case 0x16af84u: goto label_16af84;
        case 0x16af88u: goto label_16af88;
        case 0x16af8cu: goto label_16af8c;
        case 0x16af90u: goto label_16af90;
        case 0x16af94u: goto label_16af94;
        case 0x16af98u: goto label_16af98;
        case 0x16af9cu: goto label_16af9c;
        case 0x16afa0u: goto label_16afa0;
        case 0x16afa4u: goto label_16afa4;
        case 0x16afa8u: goto label_16afa8;
        case 0x16afacu: goto label_16afac;
        case 0x16afb0u: goto label_16afb0;
        case 0x16afb4u: goto label_16afb4;
        case 0x16afb8u: goto label_16afb8;
        case 0x16afbcu: goto label_16afbc;
        case 0x16afc0u: goto label_16afc0;
        case 0x16afc4u: goto label_16afc4;
        case 0x16afc8u: goto label_16afc8;
        case 0x16afccu: goto label_16afcc;
        case 0x16afd0u: goto label_16afd0;
        case 0x16afd4u: goto label_16afd4;
        case 0x16afd8u: goto label_16afd8;
        case 0x16afdcu: goto label_16afdc;
        case 0x16afe0u: goto label_16afe0;
        case 0x16afe4u: goto label_16afe4;
        case 0x16afe8u: goto label_16afe8;
        case 0x16afecu: goto label_16afec;
        case 0x16aff0u: goto label_16aff0;
        case 0x16aff4u: goto label_16aff4;
        case 0x16aff8u: goto label_16aff8;
        case 0x16affcu: goto label_16affc;
        case 0x16b000u: goto label_16b000;
        case 0x16b004u: goto label_16b004;
        case 0x16b008u: goto label_16b008;
        case 0x16b00cu: goto label_16b00c;
        case 0x16b010u: goto label_16b010;
        case 0x16b014u: goto label_16b014;
        case 0x16b018u: goto label_16b018;
        case 0x16b01cu: goto label_16b01c;
        case 0x16b020u: goto label_16b020;
        case 0x16b024u: goto label_16b024;
        case 0x16b028u: goto label_16b028;
        case 0x16b02cu: goto label_16b02c;
        case 0x16b030u: goto label_16b030;
        case 0x16b034u: goto label_16b034;
        case 0x16b038u: goto label_16b038;
        case 0x16b03cu: goto label_16b03c;
        case 0x16b040u: goto label_16b040;
        case 0x16b044u: goto label_16b044;
        case 0x16b048u: goto label_16b048;
        case 0x16b04cu: goto label_16b04c;
        case 0x16b050u: goto label_16b050;
        case 0x16b054u: goto label_16b054;
        case 0x16b058u: goto label_16b058;
        case 0x16b05cu: goto label_16b05c;
        case 0x16b060u: goto label_16b060;
        case 0x16b064u: goto label_16b064;
        case 0x16b068u: goto label_16b068;
        case 0x16b06cu: goto label_16b06c;
        case 0x16b070u: goto label_16b070;
        case 0x16b074u: goto label_16b074;
        case 0x16b078u: goto label_16b078;
        case 0x16b07cu: goto label_16b07c;
        case 0x16b080u: goto label_16b080;
        case 0x16b084u: goto label_16b084;
        case 0x16b088u: goto label_16b088;
        case 0x16b08cu: goto label_16b08c;
        case 0x16b090u: goto label_16b090;
        case 0x16b094u: goto label_16b094;
        case 0x16b098u: goto label_16b098;
        case 0x16b09cu: goto label_16b09c;
        case 0x16b0a0u: goto label_16b0a0;
        case 0x16b0a4u: goto label_16b0a4;
        case 0x16b0a8u: goto label_16b0a8;
        case 0x16b0acu: goto label_16b0ac;
        case 0x16b0b0u: goto label_16b0b0;
        case 0x16b0b4u: goto label_16b0b4;
        case 0x16b0b8u: goto label_16b0b8;
        case 0x16b0bcu: goto label_16b0bc;
        default: return;
    }

label_16a8f0:
    // 0x16a8f0: 0x100001a0  b           . + 4 + (0x1A0 << 2)
label_16a8f4:
    if (ctx->pc == 0x16A8F4u) {
        ctx->pc = 0x16A8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A8F0u;
        // 0x16a8f4: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A8F8u;
        goto label_16a8f8;
    }
    ctx->pc = 0x16A8F0u;
    {
        const bool branch_taken_0x16a8f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A8F0u;
        // 0x16a8f4: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a8f0) {
            ctx->pc = 0x16AF74u;
            goto label_16af74;
        }
    }
    ctx->pc = 0x16A8F8u;
label_16a8f8:
    // 0x16a8f8: 0x3aa50001  xori        $a1, $s5, 0x1
    ctx->pc = 0x16a8f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) ^ (uint64_t)(uint16_t)1);
label_16a8fc:
    // 0x16a8fc: 0x278481c8  addiu       $a0, $gp, -0x7E38
    ctx->pc = 0x16a8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934984));
label_16a900:
    // 0x16a900: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x16a900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_16a904:
    // 0x16a904: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x16a904u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_16a908:
    // 0x16a908: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x16a908u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_16a90c:
    // 0x16a90c: 0x10830199  beq         $a0, $v1, . + 4 + (0x199 << 2)
label_16a910:
    if (ctx->pc == 0x16A910u) {
        ctx->pc = 0x16A914u;
        goto label_16a914;
    }
    ctx->pc = 0x16A90Cu;
    {
        const bool branch_taken_0x16a90c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16a90c) {
            ctx->pc = 0x16AF74u;
            goto label_16af74;
        }
    }
    ctx->pc = 0x16A914u;
label_16a914:
    // 0x16a914: 0x27848198  addiu       $a0, $gp, -0x7E68
    ctx->pc = 0x16a914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934936));
label_16a918:
    // 0x16a918: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x16a918u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_16a91c:
    // 0x16a91c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16a91cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16a920:
    // 0x16a920: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x16a920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_16a924:
    // 0x16a924: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x16a924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_16a928:
    // 0x16a928: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x16a928u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_16a92c:
    // 0x16a92c: 0xa2630000  sb          $v1, 0x0($s3)
    ctx->pc = 0x16a92cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
label_16a930:
    // 0x16a930: 0x2a210020  slti        $at, $s1, 0x20
    ctx->pc = 0x16a930u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
label_16a934:
    // 0x16a934: 0x10200078  beqz        $at, . + 4 + (0x78 << 2)
label_16a938:
    if (ctx->pc == 0x16A938u) {
        ctx->pc = 0x16A938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A934u;
        // 0x16a938: 0x92700000  lbu         $s0, 0x0($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A93Cu;
        goto label_16a93c;
    }
    ctx->pc = 0x16A934u;
    {
        const bool branch_taken_0x16a934 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A934u;
        // 0x16a938: 0x92700000  lbu         $s0, 0x0($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a934) {
            ctx->pc = 0x16AB18u;
            goto label_16ab18;
        }
    }
    ctx->pc = 0x16A93Cu;
label_16a93c:
    // 0x16a93c: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16a93cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16a940:
    // 0x16a940: 0x2252804  sllv        $a1, $a1, $s1
    ctx->pc = 0x16a940u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 17) & 0x1F));
label_16a944:
    // 0x16a944: 0x8c241ed8  lw          $a0, 0x1ED8($at)
    ctx->pc = 0x16a944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7896)));
label_16a948:
    // 0x16a948: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x16a948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_16a94c:
    // 0x16a94c: 0x14600073  bnez        $v1, . + 4 + (0x73 << 2)
label_16a950:
    if (ctx->pc == 0x16A950u) {
        ctx->pc = 0x16A950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A94Cu;
        // 0x16a950: 0x27838190  addiu       $v1, $gp, -0x7E70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934928));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A954u;
        goto label_16a954;
    }
    ctx->pc = 0x16A94Cu;
    {
        const bool branch_taken_0x16a94c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A94Cu;
        // 0x16a950: 0x27838190  addiu       $v1, $gp, -0x7E70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934928));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a94c) {
            ctx->pc = 0x16AB1Cu;
            goto label_16ab1c;
        }
    }
    ctx->pc = 0x16A954u;
label_16a954:
    // 0x16a954: 0x8f83817c  lw          $v1, -0x7E84($gp)
    ctx->pc = 0x16a954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934908)));
label_16a958:
    // 0x16a958: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x16a958u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_16a95c:
    // 0x16a95c: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16a95cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16a960:
    // 0x16a960: 0x1060006d  beqz        $v1, . + 4 + (0x6D << 2)
label_16a964:
    if (ctx->pc == 0x16A964u) {
        ctx->pc = 0x16A964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A960u;
        // 0x16a964: 0xac241ed8  sw          $a0, 0x1ED8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7896), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A968u;
        goto label_16a968;
    }
    ctx->pc = 0x16A960u;
    {
        const bool branch_taken_0x16a960 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A960u;
        // 0x16a964: 0xac241ed8  sw          $a0, 0x1ED8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7896), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a960) {
            ctx->pc = 0x16AB18u;
            goto label_16ab18;
        }
    }
    ctx->pc = 0x16A968u;
label_16a968:
    // 0x16a968: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16a968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16a96c:
    // 0x16a96c: 0x2c63007f  sltiu       $v1, $v1, 0x7F
    ctx->pc = 0x16a96cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
label_16a970:
    // 0x16a970: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_16a974:
    if (ctx->pc == 0x16A974u) {
        ctx->pc = 0x16A974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A970u;
        // 0x16a974: 0x112b80  sll         $a1, $s1, 14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A978u;
        goto label_16a978;
    }
    ctx->pc = 0x16A970u;
    {
        const bool branch_taken_0x16a970 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A970u;
        // 0x16a974: 0x112b80  sll         $a1, $s1, 14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a970) {
            ctx->pc = 0x16A9A0u;
            goto label_16a9a0;
        }
    }
    ctx->pc = 0x16A978u;
label_16a978:
    // 0x16a978: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16a978u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16a97c:
    // 0x16a97c: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16a97cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_16a980:
    // 0x16a980: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16a980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16a984:
    // 0x16a984: 0xc08d61c  jal         func_235870
label_16a988:
    if (ctx->pc == 0x16A988u) {
        ctx->pc = 0x16A988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A984u;
        // 0x16a988: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A98Cu;
        goto label_16a98c;
    }
    ctx->pc = 0x16A984u;
    SET_GPR_U32(ctx, 31, 0x16A98Cu);
    ctx->pc = 0x16A988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A984u;
    // 0x16a988: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    { ctx->pc = 0x235870; return; }
    ctx->pc = 0x16A98Cu;
label_16a98c:
    // 0x16a98c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16a98cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16a990:
    // 0x16a990: 0x1043fff9  beq         $v0, $v1, . + 4 + (-0x7 << 2)
label_16a994:
    if (ctx->pc == 0x16A994u) {
        ctx->pc = 0x16A998u;
        goto label_16a998;
    }
    ctx->pc = 0x16A990u;
    {
        const bool branch_taken_0x16a990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16a990) {
            ctx->pc = 0x16A978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16a978;
        }
    }
    ctx->pc = 0x16A998u;
label_16a998:
    // 0x16a998: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16a998u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_16a99c:
    // 0x16a99c: 0x112b80  sll         $a1, $s1, 14
    ctx->pc = 0x16a99cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 14));
label_16a9a0:
    // 0x16a9a0: 0x3c036000  lui         $v1, 0x6000
    ctx->pc = 0x16a9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24576 << 16));
label_16a9a4:
    // 0x16a9a4: 0x321000ff  andi        $s0, $s0, 0xFF
    ctx->pc = 0x16a9a4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_16a9a8:
    // 0x16a9a8: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x16a9a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_16a9ac:
    // 0x16a9ac: 0x1021c0  sll         $a0, $s0, 7
    ctx->pc = 0x16a9acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 7));
label_16a9b0:
    // 0x16a9b0: 0x3c038600  lui         $v1, 0x8600
    ctx->pc = 0x16a9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34304 << 16));
label_16a9b4:
    // 0x16a9b4: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x16a9b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_16a9b8:
    // 0x16a9b8: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x16a9b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_16a9bc:
    // 0x16a9bc: 0x832825  or          $a1, $a0, $v1
    ctx->pc = 0x16a9bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_16a9c0:
    // 0x16a9c0: 0x8f848710  lw          $a0, -0x78F0($gp)
    ctx->pc = 0x16a9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16a9c4:
    // 0x16a9c4: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x16a9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_16a9c8:
    // 0x16a9c8: 0x24633ef0  addiu       $v1, $v1, 0x3EF0
    ctx->pc = 0x16a9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16112));
label_16a9cc:
    // 0x16a9cc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16a9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16a9d0:
    // 0x16a9d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16a9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16a9d4:
    // 0x16a9d4: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x16a9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_16a9d8:
    // 0x16a9d8: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16a9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16a9dc:
    // 0x16a9dc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16a9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_16a9e0:
    // 0x16a9e0: 0xaf838710  sw          $v1, -0x78F0($gp)
    ctx->pc = 0x16a9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
label_16a9e4:
    // 0x16a9e4: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16a9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16a9e8:
    // 0x16a9e8: 0x2c63007f  sltiu       $v1, $v1, 0x7F
    ctx->pc = 0x16a9e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
label_16a9ec:
    // 0x16a9ec: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_16a9f0:
    if (ctx->pc == 0x16A9F0u) {
        ctx->pc = 0x16A9F4u;
        goto label_16a9f4;
    }
    ctx->pc = 0x16A9ECu;
    {
        const bool branch_taken_0x16a9ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16a9ec) {
            ctx->pc = 0x16AA18u;
            goto label_16aa18;
        }
    }
    ctx->pc = 0x16A9F4u;
label_16a9f4:
    // 0x16a9f4: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16a9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16a9f8:
    // 0x16a9f8: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16a9f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_16a9fc:
    // 0x16a9fc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16a9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16aa00:
    // 0x16aa00: 0xc08d61c  jal         func_235870
label_16aa04:
    if (ctx->pc == 0x16AA04u) {
        ctx->pc = 0x16AA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AA00u;
        // 0x16aa04: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16AA08u;
        goto label_16aa08;
    }
    ctx->pc = 0x16AA00u;
    SET_GPR_U32(ctx, 31, 0x16AA08u);
    ctx->pc = 0x16AA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AA00u;
    // 0x16aa04: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    { ctx->pc = 0x235870; return; }
    ctx->pc = 0x16AA08u;
label_16aa08:
    // 0x16aa08: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16aa08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16aa0c:
    // 0x16aa0c: 0x1043fff9  beq         $v0, $v1, . + 4 + (-0x7 << 2)
label_16aa10:
    if (ctx->pc == 0x16AA10u) {
        ctx->pc = 0x16AA14u;
        goto label_16aa14;
    }
    ctx->pc = 0x16AA0Cu;
    {
        const bool branch_taken_0x16aa0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16aa0c) {
            ctx->pc = 0x16A9F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16a9f4;
        }
    }
    ctx->pc = 0x16AA14u;
label_16aa14:
    // 0x16aa14: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16aa14u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_16aa18:
    // 0x16aa18: 0x1189c0  sll         $s1, $s1, 7
    ctx->pc = 0x16aa18u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 7));
label_16aa1c:
    // 0x16aa1c: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x16aa1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
label_16aa20:
    // 0x16aa20: 0x2232025  or          $a0, $s1, $v1
    ctx->pc = 0x16aa20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
label_16aa24:
    // 0x16aa24: 0x2048025  or          $s0, $s0, $a0
    ctx->pc = 0x16aa24u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
label_16aa28:
    // 0x16aa28: 0x3c034600  lui         $v1, 0x4600
    ctx->pc = 0x16aa28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17920 << 16));
label_16aa2c:
    // 0x16aa2c: 0x8f848710  lw          $a0, -0x78F0($gp)
    ctx->pc = 0x16aa2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16aa30:
    // 0x16aa30: 0x2032825  or          $a1, $s0, $v1
    ctx->pc = 0x16aa30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
label_16aa34:
    // 0x16aa34: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x16aa34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_16aa38:
    // 0x16aa38: 0x24633ef0  addiu       $v1, $v1, 0x3EF0
    ctx->pc = 0x16aa38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16112));
label_16aa3c:
    // 0x16aa3c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16aa3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16aa40:
    // 0x16aa40: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16aa40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16aa44:
    // 0x16aa44: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x16aa44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_16aa48:
    // 0x16aa48: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16aa48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16aa4c:
    // 0x16aa4c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16aa4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_16aa50:
    // 0x16aa50: 0xaf838710  sw          $v1, -0x78F0($gp)
    ctx->pc = 0x16aa50u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
label_16aa54:
    // 0x16aa54: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16aa54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16aa58:
    // 0x16aa58: 0x2c63007f  sltiu       $v1, $v1, 0x7F
    ctx->pc = 0x16aa58u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
label_16aa5c:
    // 0x16aa5c: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_16aa60:
    if (ctx->pc == 0x16AA60u) {
        ctx->pc = 0x16AA64u;
        goto label_16aa64;
    }
    ctx->pc = 0x16AA5Cu;
    {
        const bool branch_taken_0x16aa5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16aa5c) {
            ctx->pc = 0x16AA88u;
            goto label_16aa88;
        }
    }
    ctx->pc = 0x16AA64u;
label_16aa64:
    // 0x16aa64: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16aa64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16aa68:
    // 0x16aa68: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16aa68u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_16aa6c:
    // 0x16aa6c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16aa6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16aa70:
    // 0x16aa70: 0xc08d61c  jal         func_235870
label_16aa74:
    if (ctx->pc == 0x16AA74u) {
        ctx->pc = 0x16AA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AA70u;
        // 0x16aa74: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16AA78u;
        goto label_16aa78;
    }
    ctx->pc = 0x16AA70u;
    SET_GPR_U32(ctx, 31, 0x16AA78u);
    ctx->pc = 0x16AA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AA70u;
    // 0x16aa74: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    { ctx->pc = 0x235870; return; }
    ctx->pc = 0x16AA78u;
label_16aa78:
    // 0x16aa78: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16aa78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16aa7c:
    // 0x16aa7c: 0x1043fff9  beq         $v0, $v1, . + 4 + (-0x7 << 2)
label_16aa80:
    if (ctx->pc == 0x16AA80u) {
        ctx->pc = 0x16AA84u;
        goto label_16aa84;
    }
    ctx->pc = 0x16AA7Cu;
    {
        const bool branch_taken_0x16aa7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16aa7c) {
            ctx->pc = 0x16AA64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16aa64;
        }
    }
    ctx->pc = 0x16AA84u;
label_16aa84:
    // 0x16aa84: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16aa84u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_16aa88:
    // 0x16aa88: 0x8f848710  lw          $a0, -0x78F0($gp)
    ctx->pc = 0x16aa88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16aa8c:
    // 0x16aa8c: 0x3c03660f  lui         $v1, 0x660F
    ctx->pc = 0x16aa8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26127 << 16));
label_16aa90:
    // 0x16aa90: 0x34650040  ori         $a1, $v1, 0x40
    ctx->pc = 0x16aa90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_16aa94:
    // 0x16aa94: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x16aa94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_16aa98:
    // 0x16aa98: 0x2252825  or          $a1, $s1, $a1
    ctx->pc = 0x16aa98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | GPR_U64(ctx, 5));
label_16aa9c:
    // 0x16aa9c: 0x24633ef0  addiu       $v1, $v1, 0x3EF0
    ctx->pc = 0x16aa9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16112));
label_16aaa0:
    // 0x16aaa0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16aaa0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16aaa4:
    // 0x16aaa4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16aaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16aaa8:
    // 0x16aaa8: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x16aaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_16aaac:
    // 0x16aaac: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16aaacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16aab0:
    // 0x16aab0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16aab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_16aab4:
    // 0x16aab4: 0xaf838710  sw          $v1, -0x78F0($gp)
    ctx->pc = 0x16aab4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
label_16aab8:
    // 0x16aab8: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16aab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16aabc:
    // 0x16aabc: 0x2c63007f  sltiu       $v1, $v1, 0x7F
    ctx->pc = 0x16aabcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
label_16aac0:
    // 0x16aac0: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_16aac4:
    if (ctx->pc == 0x16AAC4u) {
        ctx->pc = 0x16AAC8u;
        goto label_16aac8;
    }
    ctx->pc = 0x16AAC0u;
    {
        const bool branch_taken_0x16aac0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16aac0) {
            ctx->pc = 0x16AAECu;
            goto label_16aaec;
        }
    }
    ctx->pc = 0x16AAC8u;
label_16aac8:
    // 0x16aac8: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16aac8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16aacc:
    // 0x16aacc: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16aaccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_16aad0:
    // 0x16aad0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16aad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16aad4:
    // 0x16aad4: 0xc08d61c  jal         func_235870
label_16aad8:
    if (ctx->pc == 0x16AAD8u) {
        ctx->pc = 0x16AAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AAD4u;
        // 0x16aad8: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16AADCu;
        goto label_16aadc;
    }
    ctx->pc = 0x16AAD4u;
    SET_GPR_U32(ctx, 31, 0x16AADCu);
    ctx->pc = 0x16AAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AAD4u;
    // 0x16aad8: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    { ctx->pc = 0x235870; return; }
    ctx->pc = 0x16AADCu;
label_16aadc:
    // 0x16aadc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16aadcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16aae0:
    // 0x16aae0: 0x1043fff9  beq         $v0, $v1, . + 4 + (-0x7 << 2)
label_16aae4:
    if (ctx->pc == 0x16AAE4u) {
        ctx->pc = 0x16AAE8u;
        goto label_16aae8;
    }
    ctx->pc = 0x16AAE0u;
    {
        const bool branch_taken_0x16aae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16aae0) {
            ctx->pc = 0x16AAC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16aac8;
        }
    }
    ctx->pc = 0x16AAE8u;
label_16aae8:
    // 0x16aae8: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16aae8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_16aaec:
    // 0x16aaec: 0x8f848710  lw          $a0, -0x78F0($gp)
    ctx->pc = 0x16aaecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16aaf0:
    // 0x16aaf0: 0x3c035600  lui         $v1, 0x5600
    ctx->pc = 0x16aaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22016 << 16));
label_16aaf4:
    // 0x16aaf4: 0x2032825  or          $a1, $s0, $v1
    ctx->pc = 0x16aaf4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
label_16aaf8:
    // 0x16aaf8: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x16aaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_16aafc:
    // 0x16aafc: 0x24633ef0  addiu       $v1, $v1, 0x3EF0
    ctx->pc = 0x16aafcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16112));
label_16ab00:
    // 0x16ab00: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16ab00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16ab04:
    // 0x16ab04: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16ab04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16ab08:
    // 0x16ab08: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x16ab08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_16ab0c:
    // 0x16ab0c: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16ab0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16ab10:
    // 0x16ab10: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16ab10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_16ab14:
    // 0x16ab14: 0xaf838710  sw          $v1, -0x78F0($gp)
    ctx->pc = 0x16ab14u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
label_16ab18:
    // 0x16ab18: 0x27838190  addiu       $v1, $gp, -0x7E70
    ctx->pc = 0x16ab18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934928));
label_16ab1c:
    // 0x16ab1c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x16ab1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_16ab20:
    // 0x16ab20: 0x10000114  b           . + 4 + (0x114 << 2)
label_16ab24:
    if (ctx->pc == 0x16AB24u) {
        ctx->pc = 0x16AB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AB20u;
        // 0x16ab24: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16AB28u;
        goto label_16ab28;
    }
    ctx->pc = 0x16AB20u;
    {
        const bool branch_taken_0x16ab20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AB20u;
        // 0x16ab24: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ab20) {
            ctx->pc = 0x16AF74u;
            goto label_16af74;
        }
    }
    ctx->pc = 0x16AB28u;
label_16ab28:
    // 0x16ab28: 0x27848190  addiu       $a0, $gp, -0x7E70
    ctx->pc = 0x16ab28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934928));
label_16ab2c:
    // 0x16ab2c: 0x923821  addu        $a3, $a0, $s2
    ctx->pc = 0x16ab2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_16ab30:
    // 0x16ab30: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x16ab30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_16ab34:
    // 0x16ab34: 0x24c50001  addiu       $a1, $a2, 0x1
    ctx->pc = 0x16ab34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_16ab38:
    // 0x16ab38: 0x30c40001  andi        $a0, $a2, 0x1
    ctx->pc = 0x16ab38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
label_16ab3c:
    // 0x16ab3c: 0x4c10004  bgez        $a2, . + 4 + (0x4 << 2)
label_16ab40:
    if (ctx->pc == 0x16AB40u) {
        ctx->pc = 0x16AB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AB3Cu;
        // 0x16ab40: 0xace50000  sw          $a1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16AB44u;
        goto label_16ab44;
    }
    ctx->pc = 0x16AB3Cu;
    {
        const bool branch_taken_0x16ab3c = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x16AB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AB3Cu;
        // 0x16ab40: 0xace50000  sw          $a1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ab3c) {
            ctx->pc = 0x16AB50u;
            goto label_16ab50;
        }
    }
    ctx->pc = 0x16AB44u;
label_16ab44:
    // 0x16ab44: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
label_16ab48:
    if (ctx->pc == 0x16AB48u) {
        ctx->pc = 0x16AB4Cu;
        goto label_16ab4c;
    }
    ctx->pc = 0x16AB44u;
    {
        const bool branch_taken_0x16ab44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ab44) {
            ctx->pc = 0x16AB50u;
            goto label_16ab50;
        }
    }
    ctx->pc = 0x16AB4Cu;
label_16ab4c:
    // 0x16ab4c: 0x2484fffe  addiu       $a0, $a0, -0x2
    ctx->pc = 0x16ab4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
label_16ab50:
    // 0x16ab50: 0x14800108  bnez        $a0, . + 4 + (0x108 << 2)
label_16ab54:
    if (ctx->pc == 0x16AB54u) {
        ctx->pc = 0x16AB58u;
        goto label_16ab58;
    }
    ctx->pc = 0x16AB50u;
    {
        const bool branch_taken_0x16ab50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x16ab50) {
            ctx->pc = 0x16AF74u;
            goto label_16af74;
        }
    }
    ctx->pc = 0x16AB58u;
label_16ab58:
    // 0x16ab58: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x16ab58u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_16ab5c:
    // 0x16ab5c: 0x92630000  lbu         $v1, 0x0($s3)
    ctx->pc = 0x16ab5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_16ab60:
    // 0x16ab60: 0x2a210020  slti        $at, $s1, 0x20
    ctx->pc = 0x16ab60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
label_16ab64:
    // 0x16ab64: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x16ab64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_16ab68:
    // 0x16ab68: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_16ab6c:
    if (ctx->pc == 0x16AB6Cu) {
        ctx->pc = 0x16AB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AB68u;
        // 0x16ab6c: 0xa2630000  sb          $v1, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16AB70u;
        goto label_16ab70;
    }
    ctx->pc = 0x16AB68u;
    {
        const bool branch_taken_0x16ab68 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AB68u;
        // 0x16ab6c: 0xa2630000  sb          $v1, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ab68) {
            ctx->pc = 0x16AB94u;
            goto label_16ab94;
        }
    }
    ctx->pc = 0x16AB70u;
label_16ab70:
    // 0x16ab70: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16ab70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16ab74:
    // 0x16ab74: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16ab74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16ab78:
    // 0x16ab78: 0x8c231ed8  lw          $v1, 0x1ED8($at)
    ctx->pc = 0x16ab78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7896)));
label_16ab7c:
    // 0x16ab7c: 0x2252004  sllv        $a0, $a1, $s1
    ctx->pc = 0x16ab7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 17) & 0x1F));
label_16ab80:
    // 0x16ab80: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x16ab80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_16ab84:
    // 0x16ab84: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_16ab88:
    if (ctx->pc == 0x16AB88u) {
        ctx->pc = 0x16AB8Cu;
        goto label_16ab8c;
    }
    ctx->pc = 0x16AB84u;
    {
        const bool branch_taken_0x16ab84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ab84) {
            ctx->pc = 0x16AB94u;
            goto label_16ab94;
        }
    }
    ctx->pc = 0x16AB8Cu;
label_16ab8c:
    // 0x16ab8c: 0x10000002  b           . + 4 + (0x2 << 2)
label_16ab90:
    if (ctx->pc == 0x16AB90u) {
        ctx->pc = 0x16AB94u;
        goto label_16ab94;
    }
    ctx->pc = 0x16AB8Cu;
    {
        const bool branch_taken_0x16ab8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ab8c) {
            ctx->pc = 0x16AB98u;
            goto label_16ab98;
        }
    }
    ctx->pc = 0x16AB94u;
label_16ab94:
    // 0x16ab94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16ab94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16ab98:
    // 0x16ab98: 0x10a000f6  beqz        $a1, . + 4 + (0xF6 << 2)
label_16ab9c:
    if (ctx->pc == 0x16AB9Cu) {
        ctx->pc = 0x16ABA0u;
        goto label_16aba0;
    }
    ctx->pc = 0x16AB98u;
    {
        const bool branch_taken_0x16ab98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ab98) {
            ctx->pc = 0x16AF74u;
            goto label_16af74;
        }
    }
    ctx->pc = 0x16ABA0u;
label_16aba0:
    // 0x16aba0: 0x2a210020  slti        $at, $s1, 0x20
    ctx->pc = 0x16aba0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
label_16aba4:
    // 0x16aba4: 0x102000f3  beqz        $at, . + 4 + (0xF3 << 2)
label_16aba8:
    if (ctx->pc == 0x16ABA8u) {
        ctx->pc = 0x16ABA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ABA4u;
        // 0x16aba8: 0x92700000  lbu         $s0, 0x0($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16ABACu;
        goto label_16abac;
    }
    ctx->pc = 0x16ABA4u;
    {
        const bool branch_taken_0x16aba4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16ABA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ABA4u;
        // 0x16aba8: 0x92700000  lbu         $s0, 0x0($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aba4) {
            ctx->pc = 0x16AF74u;
            goto label_16af74;
        }
    }
    ctx->pc = 0x16ABACu;
label_16abac:
    // 0x16abac: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16abacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16abb0:
    // 0x16abb0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16abb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16abb4:
    // 0x16abb4: 0x8c231ed8  lw          $v1, 0x1ED8($at)
    ctx->pc = 0x16abb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7896)));
label_16abb8:
    // 0x16abb8: 0x2242004  sllv        $a0, $a0, $s1
    ctx->pc = 0x16abb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 17) & 0x1F));
label_16abbc:
    // 0x16abbc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x16abbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_16abc0:
    // 0x16abc0: 0x106000ec  beqz        $v1, . + 4 + (0xEC << 2)
label_16abc4:
    if (ctx->pc == 0x16ABC4u) {
        ctx->pc = 0x16ABC8u;
        goto label_16abc8;
    }
    ctx->pc = 0x16ABC0u;
    {
        const bool branch_taken_0x16abc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16abc0) {
            ctx->pc = 0x16AF74u;
            goto label_16af74;
        }
    }
    ctx->pc = 0x16ABC8u;
label_16abc8:
    // 0x16abc8: 0x8f83817c  lw          $v1, -0x7E84($gp)
    ctx->pc = 0x16abc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934908)));
label_16abcc:
    // 0x16abcc: 0x106000e9  beqz        $v1, . + 4 + (0xE9 << 2)
label_16abd0:
    if (ctx->pc == 0x16ABD0u) {
        ctx->pc = 0x16ABD4u;
        goto label_16abd4;
    }
    ctx->pc = 0x16ABCCu;
    {
        const bool branch_taken_0x16abcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16abcc) {
            ctx->pc = 0x16AF74u;
            goto label_16af74;
        }
    }
    ctx->pc = 0x16ABD4u;
label_16abd4:
    // 0x16abd4: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16abd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16abd8:
    // 0x16abd8: 0x2c63007f  sltiu       $v1, $v1, 0x7F
    ctx->pc = 0x16abd8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
label_16abdc:
    // 0x16abdc: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_16abe0:
    if (ctx->pc == 0x16ABE0u) {
        ctx->pc = 0x16ABE4u;
        goto label_16abe4;
    }
    ctx->pc = 0x16ABDCu;
    {
        const bool branch_taken_0x16abdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16abdc) {
            ctx->pc = 0x16AC08u;
            goto label_16ac08;
        }
    }
    ctx->pc = 0x16ABE4u;
label_16abe4:
    // 0x16abe4: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16abe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16abe8:
    // 0x16abe8: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16abe8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_16abec:
    // 0x16abec: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16abecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16abf0:
    // 0x16abf0: 0xc08d61c  jal         func_235870
label_16abf4:
    if (ctx->pc == 0x16ABF4u) {
        ctx->pc = 0x16ABF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ABF0u;
        // 0x16abf4: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16ABF8u;
        goto label_16abf8;
    }
    ctx->pc = 0x16ABF0u;
    SET_GPR_U32(ctx, 31, 0x16ABF8u);
    ctx->pc = 0x16ABF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16ABF0u;
    // 0x16abf4: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    { ctx->pc = 0x235870; return; }
    ctx->pc = 0x16ABF8u;
label_16abf8:
    // 0x16abf8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16abf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16abfc:
    // 0x16abfc: 0x1043fff9  beq         $v0, $v1, . + 4 + (-0x7 << 2)
label_16ac00:
    if (ctx->pc == 0x16AC00u) {
        ctx->pc = 0x16AC04u;
        goto label_16ac04;
    }
    ctx->pc = 0x16ABFCu;
    {
        const bool branch_taken_0x16abfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16abfc) {
            ctx->pc = 0x16ABE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16abe4;
        }
    }
    ctx->pc = 0x16AC04u;
label_16ac04:
    // 0x16ac04: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16ac04u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_16ac08:
    // 0x16ac08: 0x1189c0  sll         $s1, $s1, 7
    ctx->pc = 0x16ac08u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 7));
label_16ac0c:
    // 0x16ac0c: 0x3c04000f  lui         $a0, 0xF
    ctx->pc = 0x16ac0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15 << 16));
label_16ac10:
    // 0x16ac10: 0x2243025  or          $a2, $s1, $a0
    ctx->pc = 0x16ac10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) | GPR_U64(ctx, 4));
label_16ac14:
    // 0x16ac14: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x16ac14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_16ac18:
    // 0x16ac18: 0x8f848710  lw          $a0, -0x78F0($gp)
    ctx->pc = 0x16ac18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16ac1c:
    // 0x16ac1c: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x16ac1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_16ac20:
    // 0x16ac20: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x16ac20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_16ac24:
    // 0x16ac24: 0x3c055600  lui         $a1, 0x5600
    ctx->pc = 0x16ac24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)22016 << 16));
label_16ac28:
    // 0x16ac28: 0x24633ef0  addiu       $v1, $v1, 0x3EF0
    ctx->pc = 0x16ac28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16112));
label_16ac2c:
    // 0x16ac2c: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x16ac2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_16ac30:
    // 0x16ac30: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16ac30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16ac34:
    // 0x16ac34: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16ac34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16ac38:
    // 0x16ac38: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x16ac38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_16ac3c:
    // 0x16ac3c: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16ac3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16ac40:
    // 0x16ac40: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16ac40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_16ac44:
    // 0x16ac44: 0xaf838710  sw          $v1, -0x78F0($gp)
    ctx->pc = 0x16ac44u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
label_16ac48:
    // 0x16ac48: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16ac48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16ac4c:
    // 0x16ac4c: 0x2c63007f  sltiu       $v1, $v1, 0x7F
    ctx->pc = 0x16ac4cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
label_16ac50:
    // 0x16ac50: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_16ac54:
    if (ctx->pc == 0x16AC54u) {
        ctx->pc = 0x16AC58u;
        goto label_16ac58;
    }
    ctx->pc = 0x16AC50u;
    {
        const bool branch_taken_0x16ac50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16ac50) {
            ctx->pc = 0x16AC7Cu;
            goto label_16ac7c;
        }
    }
    ctx->pc = 0x16AC58u;
label_16ac58:
    // 0x16ac58: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16ac58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16ac5c:
    // 0x16ac5c: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16ac5cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_16ac60:
    // 0x16ac60: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16ac60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16ac64:
    // 0x16ac64: 0xc08d61c  jal         func_235870
label_16ac68:
    if (ctx->pc == 0x16AC68u) {
        ctx->pc = 0x16AC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AC64u;
        // 0x16ac68: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16AC6Cu;
        goto label_16ac6c;
    }
    ctx->pc = 0x16AC64u;
    SET_GPR_U32(ctx, 31, 0x16AC6Cu);
    ctx->pc = 0x16AC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AC64u;
    // 0x16ac68: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    { ctx->pc = 0x235870; return; }
    ctx->pc = 0x16AC6Cu;
label_16ac6c:
    // 0x16ac6c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16ac6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16ac70:
    // 0x16ac70: 0x1043fff9  beq         $v0, $v1, . + 4 + (-0x7 << 2)
label_16ac74:
    if (ctx->pc == 0x16AC74u) {
        ctx->pc = 0x16AC78u;
        goto label_16ac78;
    }
    ctx->pc = 0x16AC70u;
    {
        const bool branch_taken_0x16ac70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16ac70) {
            ctx->pc = 0x16AC58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16ac58;
        }
    }
    ctx->pc = 0x16AC78u;
label_16ac78:
    // 0x16ac78: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16ac78u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_16ac7c:
    // 0x16ac7c: 0x8f848710  lw          $a0, -0x78F0($gp)
    ctx->pc = 0x16ac7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16ac80:
    // 0x16ac80: 0x3c03660f  lui         $v1, 0x660F
    ctx->pc = 0x16ac80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26127 << 16));
label_16ac84:
    // 0x16ac84: 0x34650040  ori         $a1, $v1, 0x40
    ctx->pc = 0x16ac84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_16ac88:
    // 0x16ac88: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x16ac88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_16ac8c:
    // 0x16ac8c: 0x2252825  or          $a1, $s1, $a1
    ctx->pc = 0x16ac8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | GPR_U64(ctx, 5));
label_16ac90:
    // 0x16ac90: 0x24633ef0  addiu       $v1, $v1, 0x3EF0
    ctx->pc = 0x16ac90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16112));
label_16ac94:
    // 0x16ac94: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16ac94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16ac98:
    // 0x16ac98: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16ac98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16ac9c:
    // 0x16ac9c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x16ac9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_16aca0:
    // 0x16aca0: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16aca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16aca4:
    // 0x16aca4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16aca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_16aca8:
    // 0x16aca8: 0x100000b2  b           . + 4 + (0xB2 << 2)
label_16acac:
    if (ctx->pc == 0x16ACACu) {
        ctx->pc = 0x16ACACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ACA8u;
        // 0x16acac: 0xaf838710  sw          $v1, -0x78F0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16ACB0u;
        goto label_16acb0;
    }
    ctx->pc = 0x16ACA8u;
    {
        const bool branch_taken_0x16aca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16ACACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ACA8u;
        // 0x16acac: 0xaf838710  sw          $v1, -0x78F0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aca8) {
            ctx->pc = 0x16AF74u;
            goto label_16af74;
        }
    }
    ctx->pc = 0x16ACB0u;
label_16acb0:
    // 0x16acb0: 0x278381c8  addiu       $v1, $gp, -0x7E38
    ctx->pc = 0x16acb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934984));
label_16acb4:
    // 0x16acb4: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x16acb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_16acb8:
    // 0x16acb8: 0x758021  addu        $s0, $v1, $s5
    ctx->pc = 0x16acb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_16acbc:
    // 0x16acbc: 0x92070000  lbu         $a3, 0x0($s0)
    ctx->pc = 0x16acbcu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_16acc0:
    // 0x16acc0: 0x10e500ac  beq         $a3, $a1, . + 4 + (0xAC << 2)
label_16acc4:
    if (ctx->pc == 0x16ACC4u) {
        ctx->pc = 0x16ACC8u;
        goto label_16acc8;
    }
    ctx->pc = 0x16ACC0u;
    {
        const bool branch_taken_0x16acc0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        if (branch_taken_0x16acc0) {
            ctx->pc = 0x16AF74u;
            goto label_16af74;
        }
    }
    ctx->pc = 0x16ACC8u;
label_16acc8:
    // 0x16acc8: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_16accc:
    if (ctx->pc == 0x16ACCCu) {
        ctx->pc = 0x16ACCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ACC8u;
        // 0x16accc: 0x27838188  addiu       $v1, $gp, -0x7E78 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934920));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16ACD0u;
        goto label_16acd0;
    }
    ctx->pc = 0x16ACC8u;
    {
        const bool branch_taken_0x16acc8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x16ACCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ACC8u;
        // 0x16accc: 0x27838188  addiu       $v1, $gp, -0x7E78 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16acc8) {
            ctx->pc = 0x16ACECu;
            goto label_16acec;
        }
    }
    ctx->pc = 0x16ACD0u;
label_16acd0:
    // 0x16acd0: 0x938481c8  lbu         $a0, -0x7E38($gp)
    ctx->pc = 0x16acd0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934984)));
label_16acd4:
    // 0x16acd4: 0x938381c9  lbu         $v1, -0x7E37($gp)
    ctx->pc = 0x16acd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934985)));
label_16acd8:
    // 0x16acd8: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_16acdc:
    if (ctx->pc == 0x16ACDCu) {
        ctx->pc = 0x16ACE0u;
        goto label_16ace0;
    }
    ctx->pc = 0x16ACD8u;
    {
        const bool branch_taken_0x16acd8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x16acd8) {
            ctx->pc = 0x16ACE8u;
            goto label_16ace8;
        }
    }
    ctx->pc = 0x16ACE0u;
label_16ace0:
    // 0x16ace0: 0x100000a4  b           . + 4 + (0xA4 << 2)
label_16ace4:
    if (ctx->pc == 0x16ACE4u) {
        ctx->pc = 0x16ACE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ACE0u;
        // 0x16ace4: 0xa2050000  sb          $a1, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16ACE8u;
        goto label_16ace8;
    }
    ctx->pc = 0x16ACE0u;
    {
        const bool branch_taken_0x16ace0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16ACE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ACE0u;
        // 0x16ace4: 0xa2050000  sb          $a1, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ace0) {
            ctx->pc = 0x16AF74u;
            goto label_16af74;
        }
    }
    ctx->pc = 0x16ACE8u;
label_16ace8:
    // 0x16ace8: 0x27838188  addiu       $v1, $gp, -0x7E78
    ctx->pc = 0x16ace8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934920));
label_16acec:
    // 0x16acec: 0x754021  addu        $t0, $v1, $s5
    ctx->pc = 0x16acecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_16acf0:
    // 0x16acf0: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x16acf0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_16acf4:
    // 0x16acf4: 0x1c60003e  bgtz        $v1, . + 4 + (0x3E << 2)
label_16acf8:
    if (ctx->pc == 0x16ACF8u) {
        ctx->pc = 0x16ACF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ACF4u;
        // 0x16acf8: 0x152080  sll         $a0, $s5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16ACFCu;
        goto label_16acfc;
    }
    ctx->pc = 0x16ACF4u;
    {
        const bool branch_taken_0x16acf4 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x16ACF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ACF4u;
        // 0x16acf8: 0x152080  sll         $a0, $s5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16acf4) {
            ctx->pc = 0x16ADF0u;
            goto label_16adf0;
        }
    }
    ctx->pc = 0x16ACFCu;
label_16acfc:
    // 0x16acfc: 0x30f100ff  andi        $s1, $a3, 0xFF
    ctx->pc = 0x16acfcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_16ad00:
    // 0x16ad00: 0x2a210020  slti        $at, $s1, 0x20
    ctx->pc = 0x16ad00u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
label_16ad04:
    // 0x16ad04: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_16ad08:
    if (ctx->pc == 0x16AD08u) {
        ctx->pc = 0x16AD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AD04u;
        // 0x16ad08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16AD0Cu;
        goto label_16ad0c;
    }
    ctx->pc = 0x16AD04u;
    {
        const bool branch_taken_0x16ad04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AD04u;
        // 0x16ad08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ad04) {
            ctx->pc = 0x16AD34u;
            goto label_16ad34;
        }
    }
    ctx->pc = 0x16AD0Cu;
label_16ad0c:
    // 0x16ad0c: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16ad0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16ad10:
    // 0x16ad10: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16ad10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16ad14:
    // 0x16ad14: 0x8c231ed8  lw          $v1, 0x1ED8($at)
    ctx->pc = 0x16ad14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7896)));
label_16ad18:
    // 0x16ad18: 0x2252004  sllv        $a0, $a1, $s1
    ctx->pc = 0x16ad18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 17) & 0x1F));
label_16ad1c:
    // 0x16ad1c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x16ad1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_16ad20:
    // 0x16ad20: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_16ad24:
    if (ctx->pc == 0x16AD24u) {
        ctx->pc = 0x16AD28u;
        goto label_16ad28;
    }
    ctx->pc = 0x16AD20u;
    {
        const bool branch_taken_0x16ad20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ad20) {
            ctx->pc = 0x16AD30u;
            goto label_16ad30;
        }
    }
    ctx->pc = 0x16AD28u;
label_16ad28:
    // 0x16ad28: 0x10000002  b           . + 4 + (0x2 << 2)
label_16ad2c:
    if (ctx->pc == 0x16AD2Cu) {
        ctx->pc = 0x16AD30u;
        goto label_16ad30;
    }
    ctx->pc = 0x16AD28u;
    {
        const bool branch_taken_0x16ad28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ad28) {
            ctx->pc = 0x16AD34u;
            goto label_16ad34;
        }
    }
    ctx->pc = 0x16AD30u;
label_16ad30:
    // 0x16ad30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16ad30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16ad34:
    // 0x16ad34: 0x10a0002b  beqz        $a1, . + 4 + (0x2B << 2)
label_16ad38:
    if (ctx->pc == 0x16AD38u) {
        ctx->pc = 0x16AD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AD34u;
        // 0x16ad38: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16AD3Cu;
        goto label_16ad3c;
    }
    ctx->pc = 0x16AD34u;
    {
        const bool branch_taken_0x16ad34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AD34u;
        // 0x16ad38: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ad34) {
            ctx->pc = 0x16ADE4u;
            goto label_16ade4;
        }
    }
    ctx->pc = 0x16AD3Cu;
label_16ad3c:
    // 0x16ad3c: 0x2a210020  slti        $at, $s1, 0x20
    ctx->pc = 0x16ad3cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
label_16ad40:
    // 0x16ad40: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
label_16ad44:
    if (ctx->pc == 0x16AD44u) {
        ctx->pc = 0x16AD48u;
        goto label_16ad48;
    }
    ctx->pc = 0x16AD40u;
    {
        const bool branch_taken_0x16ad40 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ad40) {
            ctx->pc = 0x16ADE0u;
            goto label_16ade0;
        }
    }
    ctx->pc = 0x16AD48u;
label_16ad48:
    // 0x16ad48: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16ad48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16ad4c:
    // 0x16ad4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16ad4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16ad50:
    // 0x16ad50: 0x8c251ed8  lw          $a1, 0x1ED8($at)
    ctx->pc = 0x16ad50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7896)));
label_16ad54:
    // 0x16ad54: 0x2232004  sllv        $a0, $v1, $s1
    ctx->pc = 0x16ad54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 17) & 0x1F));
label_16ad58:
    // 0x16ad58: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x16ad58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_16ad5c:
    // 0x16ad5c: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
label_16ad60:
    if (ctx->pc == 0x16AD60u) {
        ctx->pc = 0x16AD64u;
        goto label_16ad64;
    }
    ctx->pc = 0x16AD5Cu;
    {
        const bool branch_taken_0x16ad5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ad5c) {
            ctx->pc = 0x16ADE0u;
            goto label_16ade0;
        }
    }
    ctx->pc = 0x16AD64u;
label_16ad64:
    // 0x16ad64: 0x8f83817c  lw          $v1, -0x7E84($gp)
    ctx->pc = 0x16ad64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934908)));
label_16ad68:
    // 0x16ad68: 0x802027  not         $a0, $a0
    ctx->pc = 0x16ad68u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 4) | GPR_U64(ctx, 0)));
label_16ad6c:
    // 0x16ad6c: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x16ad6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_16ad70:
    // 0x16ad70: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16ad70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16ad74:
    // 0x16ad74: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
label_16ad78:
    if (ctx->pc == 0x16AD78u) {
        ctx->pc = 0x16AD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AD74u;
        // 0x16ad78: 0xac241ed8  sw          $a0, 0x1ED8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7896), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16AD7Cu;
        goto label_16ad7c;
    }
    ctx->pc = 0x16AD74u;
    {
        const bool branch_taken_0x16ad74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AD74u;
        // 0x16ad78: 0xac241ed8  sw          $a0, 0x1ED8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7896), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ad74) {
            ctx->pc = 0x16ADE0u;
            goto label_16ade0;
        }
    }
    ctx->pc = 0x16AD7Cu;
label_16ad7c:
    // 0x16ad7c: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16ad7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16ad80:
    // 0x16ad80: 0x2c63007f  sltiu       $v1, $v1, 0x7F
    ctx->pc = 0x16ad80u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
label_16ad84:
    // 0x16ad84: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_16ad88:
    if (ctx->pc == 0x16AD88u) {
        ctx->pc = 0x16AD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AD84u;
        // 0x16ad88: 0x1121c0  sll         $a0, $s1, 7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16AD8Cu;
        goto label_16ad8c;
    }
    ctx->pc = 0x16AD84u;
    {
        const bool branch_taken_0x16ad84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16AD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AD84u;
        // 0x16ad88: 0x1121c0  sll         $a0, $s1, 7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ad84) {
            ctx->pc = 0x16ADB4u;
            goto label_16adb4;
        }
    }
    ctx->pc = 0x16AD8Cu;
label_16ad8c:
    // 0x16ad8c: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16ad8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16ad90:
    // 0x16ad90: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16ad90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_16ad94:
    // 0x16ad94: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16ad94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16ad98:
    // 0x16ad98: 0xc08d61c  jal         func_235870
label_16ad9c:
    if (ctx->pc == 0x16AD9Cu) {
        ctx->pc = 0x16AD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AD98u;
        // 0x16ad9c: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16ADA0u;
        goto label_16ada0;
    }
    ctx->pc = 0x16AD98u;
    SET_GPR_U32(ctx, 31, 0x16ADA0u);
    ctx->pc = 0x16AD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AD98u;
    // 0x16ad9c: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    { ctx->pc = 0x235870; return; }
    ctx->pc = 0x16ADA0u;
label_16ada0:
    // 0x16ada0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16ada0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16ada4:
    // 0x16ada4: 0x1043fff9  beq         $v0, $v1, . + 4 + (-0x7 << 2)
label_16ada8:
    if (ctx->pc == 0x16ADA8u) {
        ctx->pc = 0x16ADACu;
        goto label_16adac;
    }
    ctx->pc = 0x16ADA4u;
    {
        const bool branch_taken_0x16ada4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16ada4) {
            ctx->pc = 0x16AD8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16ad8c;
        }
    }
    ctx->pc = 0x16ADACu;
label_16adac:
    // 0x16adac: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16adacu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_16adb0:
    // 0x16adb0: 0x1121c0  sll         $a0, $s1, 7
    ctx->pc = 0x16adb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 7));
label_16adb4:
    // 0x16adb4: 0x3c03460f  lui         $v1, 0x460F
    ctx->pc = 0x16adb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17935 << 16));
label_16adb8:
    // 0x16adb8: 0x832825  or          $a1, $a0, $v1
    ctx->pc = 0x16adb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_16adbc:
    // 0x16adbc: 0x8f848710  lw          $a0, -0x78F0($gp)
    ctx->pc = 0x16adbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16adc0:
    // 0x16adc0: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x16adc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_16adc4:
    // 0x16adc4: 0x24633ef0  addiu       $v1, $v1, 0x3EF0
    ctx->pc = 0x16adc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16112));
label_16adc8:
    // 0x16adc8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16adc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16adcc:
    // 0x16adcc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16adccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16add0:
    // 0x16add0: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x16add0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_16add4:
    // 0x16add4: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16add4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16add8:
    // 0x16add8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16add8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_16addc:
    // 0x16addc: 0xaf838710  sw          $v1, -0x78F0($gp)
    ctx->pc = 0x16addcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
label_16ade0:
    // 0x16ade0: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x16ade0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_16ade4:
    // 0x16ade4: 0x10000063  b           . + 4 + (0x63 << 2)
label_16ade8:
    if (ctx->pc == 0x16ADE8u) {
        ctx->pc = 0x16ADE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ADE4u;
        // 0x16ade8: 0xa2030000  sb          $v1, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16ADECu;
        goto label_16adec;
    }
    ctx->pc = 0x16ADE4u;
    {
        const bool branch_taken_0x16ade4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16ADE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ADE4u;
        // 0x16ade8: 0xa2030000  sb          $v1, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ade4) {
            ctx->pc = 0x16AF74u;
            goto label_16af74;
        }
    }
    ctx->pc = 0x16ADECu;
label_16adec:
    // 0x16adec: 0x152080  sll         $a0, $s5, 2
    ctx->pc = 0x16adecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_16adf0:
    // 0x16adf0: 0x27838190  addiu       $v1, $gp, -0x7E70
    ctx->pc = 0x16adf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934928));
label_16adf4:
    // 0x16adf4: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x16adf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16adf8:
    // 0x16adf8: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x16adf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_16adfc:
    // 0x16adfc: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x16adfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_16ae00:
    // 0x16ae00: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x16ae00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_16ae04:
    // 0x16ae04: 0x4a10004  bgez        $a1, . + 4 + (0x4 << 2)
label_16ae08:
    if (ctx->pc == 0x16AE08u) {
        ctx->pc = 0x16AE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AE04u;
        // 0x16ae08: 0xacc40000  sw          $a0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16AE0Cu;
        goto label_16ae0c;
    }
    ctx->pc = 0x16AE04u;
    {
        const bool branch_taken_0x16ae04 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x16AE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AE04u;
        // 0x16ae08: 0xacc40000  sw          $a0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ae04) {
            ctx->pc = 0x16AE18u;
            goto label_16ae18;
        }
    }
    ctx->pc = 0x16AE0Cu;
label_16ae0c:
    // 0x16ae0c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_16ae10:
    if (ctx->pc == 0x16AE10u) {
        ctx->pc = 0x16AE14u;
        goto label_16ae14;
    }
    ctx->pc = 0x16AE0Cu;
    {
        const bool branch_taken_0x16ae0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ae0c) {
            ctx->pc = 0x16AE18u;
            goto label_16ae18;
        }
    }
    ctx->pc = 0x16AE14u;
label_16ae14:
    // 0x16ae14: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x16ae14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
label_16ae18:
    // 0x16ae18: 0x14600056  bnez        $v1, . + 4 + (0x56 << 2)
label_16ae1c:
    if (ctx->pc == 0x16AE1Cu) {
        ctx->pc = 0x16AE20u;
        goto label_16ae20;
    }
    ctx->pc = 0x16AE18u;
    {
        const bool branch_taken_0x16ae18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16ae18) {
            ctx->pc = 0x16AF74u;
            goto label_16af74;
        }
    }
    ctx->pc = 0x16AE20u;
label_16ae20:
    // 0x16ae20: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x16ae20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_16ae24:
    // 0x16ae24: 0x30f100ff  andi        $s1, $a3, 0xFF
    ctx->pc = 0x16ae24u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_16ae28:
    // 0x16ae28: 0x2a210020  slti        $at, $s1, 0x20
    ctx->pc = 0x16ae28u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
label_16ae2c:
    // 0x16ae2c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x16ae2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_16ae30:
    // 0x16ae30: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_16ae34:
    if (ctx->pc == 0x16AE34u) {
        ctx->pc = 0x16AE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AE30u;
        // 0x16ae34: 0xa1030000  sb          $v1, 0x0($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16AE38u;
        goto label_16ae38;
    }
    ctx->pc = 0x16AE30u;
    {
        const bool branch_taken_0x16ae30 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AE30u;
        // 0x16ae34: 0xa1030000  sb          $v1, 0x0($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ae30) {
            ctx->pc = 0x16AE5Cu;
            goto label_16ae5c;
        }
    }
    ctx->pc = 0x16AE38u;
label_16ae38:
    // 0x16ae38: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16ae38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16ae3c:
    // 0x16ae3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16ae3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16ae40:
    // 0x16ae40: 0x8c231ed8  lw          $v1, 0x1ED8($at)
    ctx->pc = 0x16ae40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7896)));
label_16ae44:
    // 0x16ae44: 0x2252004  sllv        $a0, $a1, $s1
    ctx->pc = 0x16ae44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 17) & 0x1F));
label_16ae48:
    // 0x16ae48: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x16ae48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_16ae4c:
    // 0x16ae4c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_16ae50:
    if (ctx->pc == 0x16AE50u) {
        ctx->pc = 0x16AE54u;
        goto label_16ae54;
    }
    ctx->pc = 0x16AE4Cu;
    {
        const bool branch_taken_0x16ae4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ae4c) {
            ctx->pc = 0x16AE5Cu;
            goto label_16ae5c;
        }
    }
    ctx->pc = 0x16AE54u;
label_16ae54:
    // 0x16ae54: 0x10000002  b           . + 4 + (0x2 << 2)
label_16ae58:
    if (ctx->pc == 0x16AE58u) {
        ctx->pc = 0x16AE5Cu;
        goto label_16ae5c;
    }
    ctx->pc = 0x16AE54u;
    {
        const bool branch_taken_0x16ae54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ae54) {
            ctx->pc = 0x16AE60u;
            goto label_16ae60;
        }
    }
    ctx->pc = 0x16AE5Cu;
label_16ae5c:
    // 0x16ae5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16ae5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16ae60:
    // 0x16ae60: 0x10a00044  beqz        $a1, . + 4 + (0x44 << 2)
label_16ae64:
    if (ctx->pc == 0x16AE64u) {
        ctx->pc = 0x16AE68u;
        goto label_16ae68;
    }
    ctx->pc = 0x16AE60u;
    {
        const bool branch_taken_0x16ae60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ae60) {
            ctx->pc = 0x16AF74u;
            goto label_16af74;
        }
    }
    ctx->pc = 0x16AE68u;
label_16ae68:
    // 0x16ae68: 0x2a210020  slti        $at, $s1, 0x20
    ctx->pc = 0x16ae68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
label_16ae6c:
    // 0x16ae6c: 0x10200041  beqz        $at, . + 4 + (0x41 << 2)
label_16ae70:
    if (ctx->pc == 0x16AE70u) {
        ctx->pc = 0x16AE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AE6Cu;
        // 0x16ae70: 0x91100000  lbu         $s0, 0x0($t0) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16AE74u;
        goto label_16ae74;
    }
    ctx->pc = 0x16AE6Cu;
    {
        const bool branch_taken_0x16ae6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AE6Cu;
        // 0x16ae70: 0x91100000  lbu         $s0, 0x0($t0) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ae6c) {
            ctx->pc = 0x16AF74u;
            goto label_16af74;
        }
    }
    ctx->pc = 0x16AE74u;
label_16ae74:
    // 0x16ae74: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16ae74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16ae78:
    // 0x16ae78: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16ae78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16ae7c:
    // 0x16ae7c: 0x8c231ed8  lw          $v1, 0x1ED8($at)
    ctx->pc = 0x16ae7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7896)));
label_16ae80:
    // 0x16ae80: 0x2242004  sllv        $a0, $a0, $s1
    ctx->pc = 0x16ae80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 17) & 0x1F));
label_16ae84:
    // 0x16ae84: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x16ae84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_16ae88:
    // 0x16ae88: 0x1060003a  beqz        $v1, . + 4 + (0x3A << 2)
label_16ae8c:
    if (ctx->pc == 0x16AE8Cu) {
        ctx->pc = 0x16AE90u;
        goto label_16ae90;
    }
    ctx->pc = 0x16AE88u;
    {
        const bool branch_taken_0x16ae88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ae88) {
            ctx->pc = 0x16AF74u;
            goto label_16af74;
        }
    }
    ctx->pc = 0x16AE90u;
label_16ae90:
    // 0x16ae90: 0x8f83817c  lw          $v1, -0x7E84($gp)
    ctx->pc = 0x16ae90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934908)));
label_16ae94:
    // 0x16ae94: 0x10600037  beqz        $v1, . + 4 + (0x37 << 2)
label_16ae98:
    if (ctx->pc == 0x16AE98u) {
        ctx->pc = 0x16AE9Cu;
        goto label_16ae9c;
    }
    ctx->pc = 0x16AE94u;
    {
        const bool branch_taken_0x16ae94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ae94) {
            ctx->pc = 0x16AF74u;
            goto label_16af74;
        }
    }
    ctx->pc = 0x16AE9Cu;
label_16ae9c:
    // 0x16ae9c: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16ae9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16aea0:
    // 0x16aea0: 0x2c63007f  sltiu       $v1, $v1, 0x7F
    ctx->pc = 0x16aea0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
label_16aea4:
    // 0x16aea4: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_16aea8:
    if (ctx->pc == 0x16AEA8u) {
        ctx->pc = 0x16AEACu;
        goto label_16aeac;
    }
    ctx->pc = 0x16AEA4u;
    {
        const bool branch_taken_0x16aea4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16aea4) {
            ctx->pc = 0x16AED0u;
            goto label_16aed0;
        }
    }
    ctx->pc = 0x16AEACu;
label_16aeac:
    // 0x16aeac: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16aeacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16aeb0:
    // 0x16aeb0: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16aeb0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_16aeb4:
    // 0x16aeb4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16aeb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16aeb8:
    // 0x16aeb8: 0xc08d61c  jal         func_235870
label_16aebc:
    if (ctx->pc == 0x16AEBCu) {
        ctx->pc = 0x16AEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AEB8u;
        // 0x16aebc: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16AEC0u;
        goto label_16aec0;
    }
    ctx->pc = 0x16AEB8u;
    SET_GPR_U32(ctx, 31, 0x16AEC0u);
    ctx->pc = 0x16AEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AEB8u;
    // 0x16aebc: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    { ctx->pc = 0x235870; return; }
    ctx->pc = 0x16AEC0u;
label_16aec0:
    // 0x16aec0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16aec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16aec4:
    // 0x16aec4: 0x1043fff9  beq         $v0, $v1, . + 4 + (-0x7 << 2)
label_16aec8:
    if (ctx->pc == 0x16AEC8u) {
        ctx->pc = 0x16AECCu;
        goto label_16aecc;
    }
    ctx->pc = 0x16AEC4u;
    {
        const bool branch_taken_0x16aec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16aec4) {
            ctx->pc = 0x16AEACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16aeac;
        }
    }
    ctx->pc = 0x16AECCu;
label_16aecc:
    // 0x16aecc: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16aeccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_16aed0:
    // 0x16aed0: 0x1189c0  sll         $s1, $s1, 7
    ctx->pc = 0x16aed0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 7));
label_16aed4:
    // 0x16aed4: 0x3c04000f  lui         $a0, 0xF
    ctx->pc = 0x16aed4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15 << 16));
label_16aed8:
    // 0x16aed8: 0x2243025  or          $a2, $s1, $a0
    ctx->pc = 0x16aed8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) | GPR_U64(ctx, 4));
label_16aedc:
    // 0x16aedc: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x16aedcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_16aee0:
    // 0x16aee0: 0x8f848710  lw          $a0, -0x78F0($gp)
    ctx->pc = 0x16aee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16aee4:
    // 0x16aee4: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x16aee4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_16aee8:
    // 0x16aee8: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x16aee8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_16aeec:
    // 0x16aeec: 0x3c055600  lui         $a1, 0x5600
    ctx->pc = 0x16aeecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)22016 << 16));
label_16aef0:
    // 0x16aef0: 0x24633ef0  addiu       $v1, $v1, 0x3EF0
    ctx->pc = 0x16aef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16112));
label_16aef4:
    // 0x16aef4: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x16aef4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_16aef8:
    // 0x16aef8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16aef8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16aefc:
    // 0x16aefc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16aefcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16af00:
    // 0x16af00: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x16af00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_16af04:
    // 0x16af04: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16af04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16af08:
    // 0x16af08: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16af08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_16af0c:
    // 0x16af0c: 0xaf838710  sw          $v1, -0x78F0($gp)
    ctx->pc = 0x16af0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
label_16af10:
    // 0x16af10: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16af10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16af14:
    // 0x16af14: 0x2c63007f  sltiu       $v1, $v1, 0x7F
    ctx->pc = 0x16af14u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
label_16af18:
    // 0x16af18: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_16af1c:
    if (ctx->pc == 0x16AF1Cu) {
        ctx->pc = 0x16AF20u;
        goto label_16af20;
    }
    ctx->pc = 0x16AF18u;
    {
        const bool branch_taken_0x16af18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16af18) {
            ctx->pc = 0x16AF44u;
            goto label_16af44;
        }
    }
    ctx->pc = 0x16AF20u;
label_16af20:
    // 0x16af20: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16af20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16af24:
    // 0x16af24: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16af24u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_16af28:
    // 0x16af28: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16af28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16af2c:
    // 0x16af2c: 0xc08d61c  jal         func_235870
label_16af30:
    if (ctx->pc == 0x16AF30u) {
        ctx->pc = 0x16AF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AF2Cu;
        // 0x16af30: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16AF34u;
        goto label_16af34;
    }
    ctx->pc = 0x16AF2Cu;
    SET_GPR_U32(ctx, 31, 0x16AF34u);
    ctx->pc = 0x16AF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AF2Cu;
    // 0x16af30: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    { ctx->pc = 0x235870; return; }
    ctx->pc = 0x16AF34u;
label_16af34:
    // 0x16af34: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16af34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16af38:
    // 0x16af38: 0x1043fff9  beq         $v0, $v1, . + 4 + (-0x7 << 2)
label_16af3c:
    if (ctx->pc == 0x16AF3Cu) {
        ctx->pc = 0x16AF40u;
        goto label_16af40;
    }
    ctx->pc = 0x16AF38u;
    {
        const bool branch_taken_0x16af38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16af38) {
            ctx->pc = 0x16AF20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16af20;
        }
    }
    ctx->pc = 0x16AF40u;
label_16af40:
    // 0x16af40: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16af40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_16af44:
    // 0x16af44: 0x8f848710  lw          $a0, -0x78F0($gp)
    ctx->pc = 0x16af44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16af48:
    // 0x16af48: 0x3c03660f  lui         $v1, 0x660F
    ctx->pc = 0x16af48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26127 << 16));
label_16af4c:
    // 0x16af4c: 0x34650040  ori         $a1, $v1, 0x40
    ctx->pc = 0x16af4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_16af50:
    // 0x16af50: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x16af50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_16af54:
    // 0x16af54: 0x2252825  or          $a1, $s1, $a1
    ctx->pc = 0x16af54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | GPR_U64(ctx, 5));
label_16af58:
    // 0x16af58: 0x24633ef0  addiu       $v1, $v1, 0x3EF0
    ctx->pc = 0x16af58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16112));
label_16af5c:
    // 0x16af5c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16af5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16af60:
    // 0x16af60: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16af60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16af64:
    // 0x16af64: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x16af64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_16af68:
    // 0x16af68: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16af68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16af6c:
    // 0x16af6c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16af6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_16af70:
    // 0x16af70: 0xaf838710  sw          $v1, -0x78F0($gp)
    ctx->pc = 0x16af70u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
label_16af74:
    // 0x16af74: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x16af74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_16af78:
    // 0x16af78: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x16af78u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_16af7c:
    // 0x16af7c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x16af7cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_16af80:
    // 0x16af80: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x16af80u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_16af84:
    // 0x16af84: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x16af84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_16af88:
    // 0x16af88: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16af88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16af8c:
    // 0x16af8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16af8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16af90:
    // 0x16af90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16af90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_16af94:
    // 0x16af94: 0x3e00008  jr          $ra
label_16af98:
    if (ctx->pc == 0x16AF98u) {
        ctx->pc = 0x16AF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AF94u;
        // 0x16af98: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16AF9Cu;
        goto label_16af9c;
    }
    ctx->pc = 0x16AF94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AF94u;
        // 0x16af98: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16AF94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16AF9Cu;
label_16af9c:
    // 0x16af9c: 0x0  nop
    ctx->pc = 0x16af9cu;
    // NOP
label_16afa0:
    // 0x16afa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16afa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_16afa4:
    // 0x16afa4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x16afa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_16afa8:
    // 0x16afa8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16afa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_16afac:
    // 0x16afac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16afacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_16afb0:
    // 0x16afb0: 0x8f9185b0  lw          $s1, -0x7A50($gp)
    ctx->pc = 0x16afb0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935984)));
label_16afb4:
    // 0x16afb4: 0x12200043  beqz        $s1, . + 4 + (0x43 << 2)
label_16afb8:
    if (ctx->pc == 0x16AFB8u) {
        ctx->pc = 0x16AFBCu;
        goto label_16afbc;
    }
    ctx->pc = 0x16AFB4u;
    {
        const bool branch_taken_0x16afb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x16afb4) {
            ctx->pc = 0x16B0C4u;
            { ctx->pc = 0x16b0c4; return; }
        }
    }
    ctx->pc = 0x16AFBCu;
label_16afbc:
    // 0x16afbc: 0x9626000e  lhu         $a2, 0xE($s1)
    ctx->pc = 0x16afbcu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_16afc0:
    // 0x16afc0: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x16afc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_16afc4:
    // 0x16afc4: 0x28810020  slti        $at, $a0, 0x20
    ctx->pc = 0x16afc4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
label_16afc8:
    // 0x16afc8: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_16afcc:
    if (ctx->pc == 0x16AFCCu) {
        ctx->pc = 0x16AFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AFC8u;
        // 0x16afcc: 0x3c010028  lui         $at, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16AFD0u;
        goto label_16afd0;
    }
    ctx->pc = 0x16AFC8u;
    {
        const bool branch_taken_0x16afc8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AFC8u;
        // 0x16afcc: 0x3c010028  lui         $at, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16afc8) {
            ctx->pc = 0x16AFF0u;
            goto label_16aff0;
        }
    }
    ctx->pc = 0x16AFD0u;
label_16afd0:
    // 0x16afd0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16afd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16afd4:
    // 0x16afd4: 0x8c231edc  lw          $v1, 0x1EDC($at)
    ctx->pc = 0x16afd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7900)));
label_16afd8:
    // 0x16afd8: 0x852004  sllv        $a0, $a1, $a0
    ctx->pc = 0x16afd8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
label_16afdc:
    // 0x16afdc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x16afdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_16afe0:
    // 0x16afe0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_16afe4:
    if (ctx->pc == 0x16AFE4u) {
        ctx->pc = 0x16AFE8u;
        goto label_16afe8;
    }
    ctx->pc = 0x16AFE0u;
    {
        const bool branch_taken_0x16afe0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16afe0) {
            ctx->pc = 0x16AFF0u;
            goto label_16aff0;
        }
    }
    ctx->pc = 0x16AFE8u;
label_16afe8:
    // 0x16afe8: 0x10000002  b           . + 4 + (0x2 << 2)
label_16afec:
    if (ctx->pc == 0x16AFECu) {
        ctx->pc = 0x16AFF0u;
        goto label_16aff0;
    }
    ctx->pc = 0x16AFE8u;
    {
        const bool branch_taken_0x16afe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16afe8) {
            ctx->pc = 0x16AFF4u;
            goto label_16aff4;
        }
    }
    ctx->pc = 0x16AFF0u;
label_16aff0:
    // 0x16aff0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16aff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16aff4:
    // 0x16aff4: 0x0  nop
    ctx->pc = 0x16aff4u;
    // NOP
label_16aff8:
    // 0x16aff8: 0x10a0002e  beqz        $a1, . + 4 + (0x2E << 2)
label_16affc:
    if (ctx->pc == 0x16AFFCu) {
        ctx->pc = 0x16AFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AFF8u;
        // 0x16affc: 0x30d000ff  andi        $s0, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B000u;
        goto label_16b000;
    }
    ctx->pc = 0x16AFF8u;
    {
        const bool branch_taken_0x16aff8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AFF8u;
        // 0x16affc: 0x30d000ff  andi        $s0, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aff8) {
            ctx->pc = 0x16B0B4u;
            goto label_16b0b4;
        }
    }
    ctx->pc = 0x16B000u;
label_16b000:
    // 0x16b000: 0x2a010020  slti        $at, $s0, 0x20
    ctx->pc = 0x16b000u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
label_16b004:
    // 0x16b004: 0x1020002a  beqz        $at, . + 4 + (0x2A << 2)
label_16b008:
    if (ctx->pc == 0x16B008u) {
        ctx->pc = 0x16B008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B004u;
        // 0x16b008: 0x3c010028  lui         $at, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B00Cu;
        goto label_16b00c;
    }
    ctx->pc = 0x16B004u;
    {
        const bool branch_taken_0x16b004 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B004u;
        // 0x16b008: 0x3c010028  lui         $at, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b004) {
            ctx->pc = 0x16B0B0u;
            goto label_16b0b0;
        }
    }
    ctx->pc = 0x16B00Cu;
label_16b00c:
    // 0x16b00c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16b00cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16b010:
    // 0x16b010: 0x8c251edc  lw          $a1, 0x1EDC($at)
    ctx->pc = 0x16b010u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7900)));
label_16b014:
    // 0x16b014: 0x2032004  sllv        $a0, $v1, $s0
    ctx->pc = 0x16b014u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 16) & 0x1F));
label_16b018:
    // 0x16b018: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x16b018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_16b01c:
    // 0x16b01c: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
label_16b020:
    if (ctx->pc == 0x16B020u) {
        ctx->pc = 0x16B024u;
        goto label_16b024;
    }
    ctx->pc = 0x16B01Cu;
    {
        const bool branch_taken_0x16b01c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b01c) {
            ctx->pc = 0x16B0B0u;
            goto label_16b0b0;
        }
    }
    ctx->pc = 0x16B024u;
label_16b024:
    // 0x16b024: 0x8f83817c  lw          $v1, -0x7E84($gp)
    ctx->pc = 0x16b024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934908)));
label_16b028:
    // 0x16b028: 0x802027  not         $a0, $a0
    ctx->pc = 0x16b028u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 4) | GPR_U64(ctx, 0)));
label_16b02c:
    // 0x16b02c: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x16b02cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_16b030:
    // 0x16b030: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16b030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16b034:
    // 0x16b034: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
label_16b038:
    if (ctx->pc == 0x16B038u) {
        ctx->pc = 0x16B038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B034u;
        // 0x16b038: 0xac241edc  sw          $a0, 0x1EDC($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7900), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B03Cu;
        goto label_16b03c;
    }
    ctx->pc = 0x16B034u;
    {
        const bool branch_taken_0x16b034 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B034u;
        // 0x16b038: 0xac241edc  sw          $a0, 0x1EDC($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7900), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b034) {
            ctx->pc = 0x16B0B0u;
            goto label_16b0b0;
        }
    }
    ctx->pc = 0x16B03Cu;
label_16b03c:
    // 0x16b03c: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16b03cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16b040:
    // 0x16b040: 0x2c63007f  sltiu       $v1, $v1, 0x7F
    ctx->pc = 0x16b040u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
label_16b044:
    // 0x16b044: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_16b048:
    if (ctx->pc == 0x16B048u) {
        ctx->pc = 0x16B04Cu;
        goto label_16b04c;
    }
    ctx->pc = 0x16B044u;
    {
        const bool branch_taken_0x16b044 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16b044) {
            ctx->pc = 0x16B074u;
            goto label_16b074;
        }
    }
    ctx->pc = 0x16B04Cu;
label_16b04c:
    // 0x16b04c: 0x0  nop
    ctx->pc = 0x16b04cu;
    // NOP
label_16b050:
    // 0x16b050: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16b050u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16b054:
    // 0x16b054: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16b054u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_16b058:
    // 0x16b058: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16b058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16b05c:
    // 0x16b05c: 0xc08d61c  jal         func_235870
label_16b060:
    if (ctx->pc == 0x16B060u) {
        ctx->pc = 0x16B060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B05Cu;
        // 0x16b060: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16B064u;
        goto label_16b064;
    }
    ctx->pc = 0x16B05Cu;
    SET_GPR_U32(ctx, 31, 0x16B064u);
    ctx->pc = 0x16B060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B05Cu;
    // 0x16b060: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    { ctx->pc = 0x235870; return; }
    ctx->pc = 0x16B064u;
label_16b064:
    // 0x16b064: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16b064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16b068:
    // 0x16b068: 0x1043fff8  beq         $v0, $v1, . + 4 + (-0x8 << 2)
label_16b06c:
    if (ctx->pc == 0x16B06Cu) {
        ctx->pc = 0x16B070u;
        goto label_16b070;
    }
    ctx->pc = 0x16B068u;
    {
        const bool branch_taken_0x16b068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16b068) {
            ctx->pc = 0x16B04Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16b04c;
        }
    }
    ctx->pc = 0x16B070u;
label_16b070:
    // 0x16b070: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16b070u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_16b074:
    // 0x16b074: 0x0  nop
    ctx->pc = 0x16b074u;
    // NOP
label_16b078:
    // 0x16b078: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x16b078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_16b07c:
    // 0x16b07c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x16b07cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_16b080:
    // 0x16b080: 0x429c0  sll         $a1, $a0, 7
    ctx->pc = 0x16b080u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
label_16b084:
    // 0x16b084: 0x3c03460f  lui         $v1, 0x460F
    ctx->pc = 0x16b084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17935 << 16));
label_16b088:
    // 0x16b088: 0x8f848710  lw          $a0, -0x78F0($gp)
    ctx->pc = 0x16b088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16b08c:
    // 0x16b08c: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x16b08cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_16b090:
    // 0x16b090: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x16b090u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_16b094:
    // 0x16b094: 0x24633ef0  addiu       $v1, $v1, 0x3EF0
    ctx->pc = 0x16b094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16112));
label_16b098:
    // 0x16b098: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16b098u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16b09c:
    // 0x16b09c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16b09cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16b0a0:
    // 0x16b0a0: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x16b0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_16b0a4:
    // 0x16b0a4: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16b0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16b0a8:
    // 0x16b0a8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16b0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_16b0ac:
    // 0x16b0ac: 0xaf838710  sw          $v1, -0x78F0($gp)
    ctx->pc = 0x16b0acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
label_16b0b0:
    // 0x16b0b0: 0xa620000c  sh          $zero, 0xC($s1)
    ctx->pc = 0x16b0b0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 0));
label_16b0b4:
    // 0x16b0b4: 0x0  nop
    ctx->pc = 0x16b0b4u;
    // NOP
label_16b0b8:
    // 0x16b0b8: 0x8e310004  lw          $s1, 0x4($s1)
    ctx->pc = 0x16b0b8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_16b0bc:
    // 0x16b0bc: 0x1620ffbf  bnez        $s1, . + 4 + (-0x41 << 2)
    ctx->pc = 0x16b0c0u;
    return;
}

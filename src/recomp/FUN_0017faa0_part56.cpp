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

// Function: FUN_0017faa0
// Address: 0x17faa0 - 0x2bfb1c
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0017faa0_part56(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x19a850u: goto label_19a850;
        case 0x19a854u: goto label_19a854;
        case 0x19a858u: goto label_19a858;
        case 0x19a85cu: goto label_19a85c;
        case 0x19a860u: goto label_19a860;
        case 0x19a864u: goto label_19a864;
        case 0x19a868u: goto label_19a868;
        case 0x19a86cu: goto label_19a86c;
        case 0x19a870u: goto label_19a870;
        case 0x19a874u: goto label_19a874;
        case 0x19a878u: goto label_19a878;
        case 0x19a87cu: goto label_19a87c;
        case 0x19a880u: goto label_19a880;
        case 0x19a884u: goto label_19a884;
        case 0x19a888u: goto label_19a888;
        case 0x19a88cu: goto label_19a88c;
        case 0x19a890u: goto label_19a890;
        case 0x19a894u: goto label_19a894;
        case 0x19a898u: goto label_19a898;
        case 0x19a89cu: goto label_19a89c;
        case 0x19a8a0u: goto label_19a8a0;
        case 0x19a8a4u: goto label_19a8a4;
        case 0x19a8a8u: goto label_19a8a8;
        case 0x19a8acu: goto label_19a8ac;
        case 0x19a8b0u: goto label_19a8b0;
        case 0x19a8b4u: goto label_19a8b4;
        case 0x19a8b8u: goto label_19a8b8;
        case 0x19a8bcu: goto label_19a8bc;
        case 0x19a8c0u: goto label_19a8c0;
        case 0x19a8c4u: goto label_19a8c4;
        case 0x19a8c8u: goto label_19a8c8;
        case 0x19a8ccu: goto label_19a8cc;
        case 0x19a8d0u: goto label_19a8d0;
        case 0x19a8d4u: goto label_19a8d4;
        case 0x19a8d8u: goto label_19a8d8;
        case 0x19a8dcu: goto label_19a8dc;
        case 0x19a8e0u: goto label_19a8e0;
        case 0x19a8e4u: goto label_19a8e4;
        case 0x19a8e8u: goto label_19a8e8;
        case 0x19a8ecu: goto label_19a8ec;
        case 0x19a8f0u: goto label_19a8f0;
        case 0x19a8f4u: goto label_19a8f4;
        case 0x19a8f8u: goto label_19a8f8;
        case 0x19a8fcu: goto label_19a8fc;
        case 0x19a900u: goto label_19a900;
        case 0x19a904u: goto label_19a904;
        case 0x19a908u: goto label_19a908;
        case 0x19a90cu: goto label_19a90c;
        case 0x19a910u: goto label_19a910;
        case 0x19a914u: goto label_19a914;
        case 0x19a918u: goto label_19a918;
        case 0x19a91cu: goto label_19a91c;
        case 0x19a920u: goto label_19a920;
        case 0x19a924u: goto label_19a924;
        case 0x19a928u: goto label_19a928;
        case 0x19a92cu: goto label_19a92c;
        case 0x19a930u: goto label_19a930;
        case 0x19a934u: goto label_19a934;
        case 0x19a938u: goto label_19a938;
        case 0x19a93cu: goto label_19a93c;
        case 0x19a940u: goto label_19a940;
        case 0x19a944u: goto label_19a944;
        case 0x19a948u: goto label_19a948;
        case 0x19a94cu: goto label_19a94c;
        case 0x19a950u: goto label_19a950;
        case 0x19a954u: goto label_19a954;
        case 0x19a958u: goto label_19a958;
        case 0x19a95cu: goto label_19a95c;
        case 0x19a960u: goto label_19a960;
        case 0x19a964u: goto label_19a964;
        case 0x19a968u: goto label_19a968;
        case 0x19a96cu: goto label_19a96c;
        case 0x19a970u: goto label_19a970;
        case 0x19a974u: goto label_19a974;
        case 0x19a978u: goto label_19a978;
        case 0x19a97cu: goto label_19a97c;
        case 0x19a980u: goto label_19a980;
        case 0x19a984u: goto label_19a984;
        case 0x19a988u: goto label_19a988;
        case 0x19a98cu: goto label_19a98c;
        case 0x19a990u: goto label_19a990;
        case 0x19a994u: goto label_19a994;
        case 0x19a998u: goto label_19a998;
        case 0x19a99cu: goto label_19a99c;
        case 0x19a9a0u: goto label_19a9a0;
        case 0x19a9a4u: goto label_19a9a4;
        case 0x19a9a8u: goto label_19a9a8;
        case 0x19a9acu: goto label_19a9ac;
        case 0x19a9b0u: goto label_19a9b0;
        case 0x19a9b4u: goto label_19a9b4;
        case 0x19a9b8u: goto label_19a9b8;
        case 0x19a9bcu: goto label_19a9bc;
        case 0x19a9c0u: goto label_19a9c0;
        case 0x19a9c4u: goto label_19a9c4;
        case 0x19a9c8u: goto label_19a9c8;
        case 0x19a9ccu: goto label_19a9cc;
        case 0x19a9d0u: goto label_19a9d0;
        case 0x19a9d4u: goto label_19a9d4;
        case 0x19a9d8u: goto label_19a9d8;
        case 0x19a9dcu: goto label_19a9dc;
        case 0x19a9e0u: goto label_19a9e0;
        case 0x19a9e4u: goto label_19a9e4;
        case 0x19a9e8u: goto label_19a9e8;
        case 0x19a9ecu: goto label_19a9ec;
        case 0x19a9f0u: goto label_19a9f0;
        case 0x19a9f4u: goto label_19a9f4;
        case 0x19a9f8u: goto label_19a9f8;
        case 0x19a9fcu: goto label_19a9fc;
        case 0x19aa00u: goto label_19aa00;
        case 0x19aa04u: goto label_19aa04;
        case 0x19aa08u: goto label_19aa08;
        case 0x19aa0cu: goto label_19aa0c;
        case 0x19aa10u: goto label_19aa10;
        case 0x19aa14u: goto label_19aa14;
        case 0x19aa18u: goto label_19aa18;
        case 0x19aa1cu: goto label_19aa1c;
        case 0x19aa20u: goto label_19aa20;
        case 0x19aa24u: goto label_19aa24;
        case 0x19aa28u: goto label_19aa28;
        case 0x19aa2cu: goto label_19aa2c;
        case 0x19aa30u: goto label_19aa30;
        case 0x19aa34u: goto label_19aa34;
        case 0x19aa38u: goto label_19aa38;
        case 0x19aa3cu: goto label_19aa3c;
        case 0x19aa40u: goto label_19aa40;
        case 0x19aa44u: goto label_19aa44;
        case 0x19aa48u: goto label_19aa48;
        case 0x19aa4cu: goto label_19aa4c;
        case 0x19aa50u: goto label_19aa50;
        case 0x19aa54u: goto label_19aa54;
        case 0x19aa58u: goto label_19aa58;
        case 0x19aa5cu: goto label_19aa5c;
        case 0x19aa60u: goto label_19aa60;
        case 0x19aa64u: goto label_19aa64;
        case 0x19aa68u: goto label_19aa68;
        case 0x19aa6cu: goto label_19aa6c;
        case 0x19aa70u: goto label_19aa70;
        case 0x19aa74u: goto label_19aa74;
        case 0x19aa78u: goto label_19aa78;
        case 0x19aa7cu: goto label_19aa7c;
        case 0x19aa80u: goto label_19aa80;
        case 0x19aa84u: goto label_19aa84;
        case 0x19aa88u: goto label_19aa88;
        case 0x19aa8cu: goto label_19aa8c;
        case 0x19aa90u: goto label_19aa90;
        case 0x19aa94u: goto label_19aa94;
        case 0x19aa98u: goto label_19aa98;
        case 0x19aa9cu: goto label_19aa9c;
        case 0x19aaa0u: goto label_19aaa0;
        case 0x19aaa4u: goto label_19aaa4;
        case 0x19aaa8u: goto label_19aaa8;
        case 0x19aaacu: goto label_19aaac;
        case 0x19aab0u: goto label_19aab0;
        case 0x19aab4u: goto label_19aab4;
        case 0x19aab8u: goto label_19aab8;
        case 0x19aabcu: goto label_19aabc;
        case 0x19aac0u: goto label_19aac0;
        case 0x19aac4u: goto label_19aac4;
        case 0x19aac8u: goto label_19aac8;
        case 0x19aaccu: goto label_19aacc;
        case 0x19aad0u: goto label_19aad0;
        case 0x19aad4u: goto label_19aad4;
        case 0x19aad8u: goto label_19aad8;
        case 0x19aadcu: goto label_19aadc;
        case 0x19aae0u: goto label_19aae0;
        case 0x19aae4u: goto label_19aae4;
        case 0x19aae8u: goto label_19aae8;
        case 0x19aaecu: goto label_19aaec;
        case 0x19aaf0u: goto label_19aaf0;
        case 0x19aaf4u: goto label_19aaf4;
        case 0x19aaf8u: goto label_19aaf8;
        case 0x19aafcu: goto label_19aafc;
        case 0x19ab00u: goto label_19ab00;
        case 0x19ab04u: goto label_19ab04;
        case 0x19ab08u: goto label_19ab08;
        case 0x19ab0cu: goto label_19ab0c;
        case 0x19ab10u: goto label_19ab10;
        case 0x19ab14u: goto label_19ab14;
        case 0x19ab18u: goto label_19ab18;
        case 0x19ab1cu: goto label_19ab1c;
        case 0x19ab20u: goto label_19ab20;
        case 0x19ab24u: goto label_19ab24;
        case 0x19ab28u: goto label_19ab28;
        case 0x19ab2cu: goto label_19ab2c;
        case 0x19ab30u: goto label_19ab30;
        case 0x19ab34u: goto label_19ab34;
        case 0x19ab38u: goto label_19ab38;
        case 0x19ab3cu: goto label_19ab3c;
        case 0x19ab40u: goto label_19ab40;
        case 0x19ab44u: goto label_19ab44;
        case 0x19ab48u: goto label_19ab48;
        case 0x19ab4cu: goto label_19ab4c;
        case 0x19ab50u: goto label_19ab50;
        case 0x19ab54u: goto label_19ab54;
        case 0x19ab58u: goto label_19ab58;
        case 0x19ab5cu: goto label_19ab5c;
        case 0x19ab60u: goto label_19ab60;
        case 0x19ab64u: goto label_19ab64;
        case 0x19ab68u: goto label_19ab68;
        case 0x19ab6cu: goto label_19ab6c;
        case 0x19ab70u: goto label_19ab70;
        case 0x19ab74u: goto label_19ab74;
        case 0x19ab78u: goto label_19ab78;
        case 0x19ab7cu: goto label_19ab7c;
        case 0x19ab80u: goto label_19ab80;
        case 0x19ab84u: goto label_19ab84;
        case 0x19ab88u: goto label_19ab88;
        case 0x19ab8cu: goto label_19ab8c;
        case 0x19ab90u: goto label_19ab90;
        case 0x19ab94u: goto label_19ab94;
        case 0x19ab98u: goto label_19ab98;
        case 0x19ab9cu: goto label_19ab9c;
        case 0x19aba0u: goto label_19aba0;
        case 0x19aba4u: goto label_19aba4;
        case 0x19aba8u: goto label_19aba8;
        case 0x19abacu: goto label_19abac;
        case 0x19abb0u: goto label_19abb0;
        case 0x19abb4u: goto label_19abb4;
        case 0x19abb8u: goto label_19abb8;
        case 0x19abbcu: goto label_19abbc;
        case 0x19abc0u: goto label_19abc0;
        case 0x19abc4u: goto label_19abc4;
        case 0x19abc8u: goto label_19abc8;
        case 0x19abccu: goto label_19abcc;
        case 0x19abd0u: goto label_19abd0;
        case 0x19abd4u: goto label_19abd4;
        case 0x19abd8u: goto label_19abd8;
        case 0x19abdcu: goto label_19abdc;
        case 0x19abe0u: goto label_19abe0;
        case 0x19abe4u: goto label_19abe4;
        case 0x19abe8u: goto label_19abe8;
        case 0x19abecu: goto label_19abec;
        case 0x19abf0u: goto label_19abf0;
        case 0x19abf4u: goto label_19abf4;
        case 0x19abf8u: goto label_19abf8;
        case 0x19abfcu: goto label_19abfc;
        case 0x19ac00u: goto label_19ac00;
        case 0x19ac04u: goto label_19ac04;
        case 0x19ac08u: goto label_19ac08;
        case 0x19ac0cu: goto label_19ac0c;
        case 0x19ac10u: goto label_19ac10;
        case 0x19ac14u: goto label_19ac14;
        case 0x19ac18u: goto label_19ac18;
        case 0x19ac1cu: goto label_19ac1c;
        case 0x19ac20u: goto label_19ac20;
        case 0x19ac24u: goto label_19ac24;
        case 0x19ac28u: goto label_19ac28;
        case 0x19ac2cu: goto label_19ac2c;
        case 0x19ac30u: goto label_19ac30;
        case 0x19ac34u: goto label_19ac34;
        case 0x19ac38u: goto label_19ac38;
        case 0x19ac3cu: goto label_19ac3c;
        case 0x19ac40u: goto label_19ac40;
        case 0x19ac44u: goto label_19ac44;
        case 0x19ac48u: goto label_19ac48;
        case 0x19ac4cu: goto label_19ac4c;
        case 0x19ac50u: goto label_19ac50;
        case 0x19ac54u: goto label_19ac54;
        case 0x19ac58u: goto label_19ac58;
        case 0x19ac5cu: goto label_19ac5c;
        case 0x19ac60u: goto label_19ac60;
        case 0x19ac64u: goto label_19ac64;
        case 0x19ac68u: goto label_19ac68;
        case 0x19ac6cu: goto label_19ac6c;
        case 0x19ac70u: goto label_19ac70;
        case 0x19ac74u: goto label_19ac74;
        case 0x19ac78u: goto label_19ac78;
        case 0x19ac7cu: goto label_19ac7c;
        case 0x19ac80u: goto label_19ac80;
        case 0x19ac84u: goto label_19ac84;
        case 0x19ac88u: goto label_19ac88;
        case 0x19ac8cu: goto label_19ac8c;
        case 0x19ac90u: goto label_19ac90;
        case 0x19ac94u: goto label_19ac94;
        case 0x19ac98u: goto label_19ac98;
        case 0x19ac9cu: goto label_19ac9c;
        case 0x19aca0u: goto label_19aca0;
        case 0x19aca4u: goto label_19aca4;
        case 0x19aca8u: goto label_19aca8;
        case 0x19acacu: goto label_19acac;
        case 0x19acb0u: goto label_19acb0;
        case 0x19acb4u: goto label_19acb4;
        case 0x19acb8u: goto label_19acb8;
        case 0x19acbcu: goto label_19acbc;
        case 0x19acc0u: goto label_19acc0;
        case 0x19acc4u: goto label_19acc4;
        case 0x19acc8u: goto label_19acc8;
        case 0x19acccu: goto label_19accc;
        case 0x19acd0u: goto label_19acd0;
        case 0x19acd4u: goto label_19acd4;
        case 0x19acd8u: goto label_19acd8;
        case 0x19acdcu: goto label_19acdc;
        case 0x19ace0u: goto label_19ace0;
        case 0x19ace4u: goto label_19ace4;
        case 0x19ace8u: goto label_19ace8;
        case 0x19acecu: goto label_19acec;
        case 0x19acf0u: goto label_19acf0;
        case 0x19acf4u: goto label_19acf4;
        case 0x19acf8u: goto label_19acf8;
        case 0x19acfcu: goto label_19acfc;
        case 0x19ad00u: goto label_19ad00;
        case 0x19ad04u: goto label_19ad04;
        case 0x19ad08u: goto label_19ad08;
        case 0x19ad0cu: goto label_19ad0c;
        case 0x19ad10u: goto label_19ad10;
        case 0x19ad14u: goto label_19ad14;
        case 0x19ad18u: goto label_19ad18;
        case 0x19ad1cu: goto label_19ad1c;
        case 0x19ad20u: goto label_19ad20;
        case 0x19ad24u: goto label_19ad24;
        case 0x19ad28u: goto label_19ad28;
        case 0x19ad2cu: goto label_19ad2c;
        case 0x19ad30u: goto label_19ad30;
        case 0x19ad34u: goto label_19ad34;
        case 0x19ad38u: goto label_19ad38;
        case 0x19ad3cu: goto label_19ad3c;
        case 0x19ad40u: goto label_19ad40;
        case 0x19ad44u: goto label_19ad44;
        case 0x19ad48u: goto label_19ad48;
        case 0x19ad4cu: goto label_19ad4c;
        case 0x19ad50u: goto label_19ad50;
        case 0x19ad54u: goto label_19ad54;
        case 0x19ad58u: goto label_19ad58;
        case 0x19ad5cu: goto label_19ad5c;
        case 0x19ad60u: goto label_19ad60;
        case 0x19ad64u: goto label_19ad64;
        case 0x19ad68u: goto label_19ad68;
        case 0x19ad6cu: goto label_19ad6c;
        case 0x19ad70u: goto label_19ad70;
        case 0x19ad74u: goto label_19ad74;
        case 0x19ad78u: goto label_19ad78;
        case 0x19ad7cu: goto label_19ad7c;
        case 0x19ad80u: goto label_19ad80;
        case 0x19ad84u: goto label_19ad84;
        case 0x19ad88u: goto label_19ad88;
        case 0x19ad8cu: goto label_19ad8c;
        case 0x19ad90u: goto label_19ad90;
        case 0x19ad94u: goto label_19ad94;
        case 0x19ad98u: goto label_19ad98;
        case 0x19ad9cu: goto label_19ad9c;
        case 0x19ada0u: goto label_19ada0;
        case 0x19ada4u: goto label_19ada4;
        case 0x19ada8u: goto label_19ada8;
        case 0x19adacu: goto label_19adac;
        case 0x19adb0u: goto label_19adb0;
        case 0x19adb4u: goto label_19adb4;
        case 0x19adb8u: goto label_19adb8;
        case 0x19adbcu: goto label_19adbc;
        case 0x19adc0u: goto label_19adc0;
        case 0x19adc4u: goto label_19adc4;
        case 0x19adc8u: goto label_19adc8;
        case 0x19adccu: goto label_19adcc;
        case 0x19add0u: goto label_19add0;
        case 0x19add4u: goto label_19add4;
        case 0x19add8u: goto label_19add8;
        case 0x19addcu: goto label_19addc;
        case 0x19ade0u: goto label_19ade0;
        case 0x19ade4u: goto label_19ade4;
        case 0x19ade8u: goto label_19ade8;
        case 0x19adecu: goto label_19adec;
        case 0x19adf0u: goto label_19adf0;
        case 0x19adf4u: goto label_19adf4;
        case 0x19adf8u: goto label_19adf8;
        case 0x19adfcu: goto label_19adfc;
        case 0x19ae00u: goto label_19ae00;
        case 0x19ae04u: goto label_19ae04;
        case 0x19ae08u: goto label_19ae08;
        case 0x19ae0cu: goto label_19ae0c;
        case 0x19ae10u: goto label_19ae10;
        case 0x19ae14u: goto label_19ae14;
        case 0x19ae18u: goto label_19ae18;
        case 0x19ae1cu: goto label_19ae1c;
        case 0x19ae20u: goto label_19ae20;
        case 0x19ae24u: goto label_19ae24;
        case 0x19ae28u: goto label_19ae28;
        case 0x19ae2cu: goto label_19ae2c;
        case 0x19ae30u: goto label_19ae30;
        case 0x19ae34u: goto label_19ae34;
        case 0x19ae38u: goto label_19ae38;
        case 0x19ae3cu: goto label_19ae3c;
        case 0x19ae40u: goto label_19ae40;
        case 0x19ae44u: goto label_19ae44;
        case 0x19ae48u: goto label_19ae48;
        case 0x19ae4cu: goto label_19ae4c;
        case 0x19ae50u: goto label_19ae50;
        case 0x19ae54u: goto label_19ae54;
        case 0x19ae58u: goto label_19ae58;
        case 0x19ae5cu: goto label_19ae5c;
        case 0x19ae60u: goto label_19ae60;
        case 0x19ae64u: goto label_19ae64;
        case 0x19ae68u: goto label_19ae68;
        case 0x19ae6cu: goto label_19ae6c;
        case 0x19ae70u: goto label_19ae70;
        case 0x19ae74u: goto label_19ae74;
        case 0x19ae78u: goto label_19ae78;
        case 0x19ae7cu: goto label_19ae7c;
        case 0x19ae80u: goto label_19ae80;
        case 0x19ae84u: goto label_19ae84;
        case 0x19ae88u: goto label_19ae88;
        case 0x19ae8cu: goto label_19ae8c;
        case 0x19ae90u: goto label_19ae90;
        case 0x19ae94u: goto label_19ae94;
        case 0x19ae98u: goto label_19ae98;
        case 0x19ae9cu: goto label_19ae9c;
        case 0x19aea0u: goto label_19aea0;
        case 0x19aea4u: goto label_19aea4;
        case 0x19aea8u: goto label_19aea8;
        case 0x19aeacu: goto label_19aeac;
        case 0x19aeb0u: goto label_19aeb0;
        case 0x19aeb4u: goto label_19aeb4;
        case 0x19aeb8u: goto label_19aeb8;
        case 0x19aebcu: goto label_19aebc;
        case 0x19aec0u: goto label_19aec0;
        case 0x19aec4u: goto label_19aec4;
        case 0x19aec8u: goto label_19aec8;
        case 0x19aeccu: goto label_19aecc;
        case 0x19aed0u: goto label_19aed0;
        case 0x19aed4u: goto label_19aed4;
        case 0x19aed8u: goto label_19aed8;
        case 0x19aedcu: goto label_19aedc;
        case 0x19aee0u: goto label_19aee0;
        case 0x19aee4u: goto label_19aee4;
        case 0x19aee8u: goto label_19aee8;
        case 0x19aeecu: goto label_19aeec;
        case 0x19aef0u: goto label_19aef0;
        case 0x19aef4u: goto label_19aef4;
        case 0x19aef8u: goto label_19aef8;
        case 0x19aefcu: goto label_19aefc;
        case 0x19af00u: goto label_19af00;
        case 0x19af04u: goto label_19af04;
        case 0x19af08u: goto label_19af08;
        case 0x19af0cu: goto label_19af0c;
        case 0x19af10u: goto label_19af10;
        case 0x19af14u: goto label_19af14;
        case 0x19af18u: goto label_19af18;
        case 0x19af1cu: goto label_19af1c;
        case 0x19af20u: goto label_19af20;
        case 0x19af24u: goto label_19af24;
        case 0x19af28u: goto label_19af28;
        case 0x19af2cu: goto label_19af2c;
        case 0x19af30u: goto label_19af30;
        case 0x19af34u: goto label_19af34;
        case 0x19af38u: goto label_19af38;
        case 0x19af3cu: goto label_19af3c;
        case 0x19af40u: goto label_19af40;
        case 0x19af44u: goto label_19af44;
        case 0x19af48u: goto label_19af48;
        case 0x19af4cu: goto label_19af4c;
        case 0x19af50u: goto label_19af50;
        case 0x19af54u: goto label_19af54;
        case 0x19af58u: goto label_19af58;
        case 0x19af5cu: goto label_19af5c;
        case 0x19af60u: goto label_19af60;
        case 0x19af64u: goto label_19af64;
        case 0x19af68u: goto label_19af68;
        case 0x19af6cu: goto label_19af6c;
        case 0x19af70u: goto label_19af70;
        case 0x19af74u: goto label_19af74;
        case 0x19af78u: goto label_19af78;
        case 0x19af7cu: goto label_19af7c;
        case 0x19af80u: goto label_19af80;
        case 0x19af84u: goto label_19af84;
        case 0x19af88u: goto label_19af88;
        case 0x19af8cu: goto label_19af8c;
        case 0x19af90u: goto label_19af90;
        case 0x19af94u: goto label_19af94;
        case 0x19af98u: goto label_19af98;
        case 0x19af9cu: goto label_19af9c;
        case 0x19afa0u: goto label_19afa0;
        case 0x19afa4u: goto label_19afa4;
        case 0x19afa8u: goto label_19afa8;
        case 0x19afacu: goto label_19afac;
        case 0x19afb0u: goto label_19afb0;
        case 0x19afb4u: goto label_19afb4;
        case 0x19afb8u: goto label_19afb8;
        case 0x19afbcu: goto label_19afbc;
        case 0x19afc0u: goto label_19afc0;
        case 0x19afc4u: goto label_19afc4;
        case 0x19afc8u: goto label_19afc8;
        case 0x19afccu: goto label_19afcc;
        case 0x19afd0u: goto label_19afd0;
        case 0x19afd4u: goto label_19afd4;
        case 0x19afd8u: goto label_19afd8;
        case 0x19afdcu: goto label_19afdc;
        case 0x19afe0u: goto label_19afe0;
        case 0x19afe4u: goto label_19afe4;
        case 0x19afe8u: goto label_19afe8;
        case 0x19afecu: goto label_19afec;
        case 0x19aff0u: goto label_19aff0;
        case 0x19aff4u: goto label_19aff4;
        case 0x19aff8u: goto label_19aff8;
        case 0x19affcu: goto label_19affc;
        case 0x19b000u: goto label_19b000;
        case 0x19b004u: goto label_19b004;
        case 0x19b008u: goto label_19b008;
        case 0x19b00cu: goto label_19b00c;
        case 0x19b010u: goto label_19b010;
        case 0x19b014u: goto label_19b014;
        case 0x19b018u: goto label_19b018;
        case 0x19b01cu: goto label_19b01c;
        default: return;
    }

label_19a850:
    // 0x19a850: 0x485025  or          $t2, $v0, $t0
    ctx->pc = 0x19a850u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
label_19a854:
    // 0x19a854: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x19a854u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_19a858:
    // 0x19a858: 0x3463ff3f  ori         $v1, $v1, 0xFF3F
    ctx->pc = 0x19a858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65343);
label_19a85c:
    // 0x19a85c: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x19a85cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_19a860:
    // 0x19a860: 0x1431824  and         $v1, $t2, $v1
    ctx->pc = 0x19a860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
label_19a864:
    // 0x19a864: 0x90e40000  lbu         $a0, 0x0($a3)
    ctx->pc = 0x19a864u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_19a868:
    // 0x19a868: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x19a868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_19a86c:
    // 0x19a86c: 0x665025  or          $t2, $v1, $a2
    ctx->pc = 0x19a86cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_19a870:
    // 0x19a870: 0x3442fff3  ori         $v0, $v0, 0xFFF3
    ctx->pc = 0x19a870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65523);
label_19a874:
    // 0x19a874: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x19a874u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_19a878:
    // 0x19a878: 0x1421024  and         $v0, $t2, $v0
    ctx->pc = 0x19a878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
label_19a87c:
    // 0x19a87c: 0x1160000a  beqz        $t3, . + 4 + (0xA << 2)
label_19a880:
    if (ctx->pc == 0x19A880u) {
        ctx->pc = 0x19A880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A87Cu;
        // 0x19a880: 0x445025  or          $t2, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A884u;
        goto label_19a884;
    }
    ctx->pc = 0x19A87Cu;
    {
        const bool branch_taken_0x19a87c = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A87Cu;
        // 0x19a880: 0x445025  or          $t2, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a87c) {
            ctx->pc = 0x19A8A8u;
            goto label_19a8a8;
        }
    }
    ctx->pc = 0x19A884u;
label_19a884:
    // 0x19a884: 0x91230003  lbu         $v1, 0x3($t1)
    ctx->pc = 0x19a884u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 3)));
label_19a888:
    // 0x19a888: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x19a888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_19a88c:
    // 0x19a88c: 0x354a0002  ori         $t2, $t2, 0x2
    ctx->pc = 0x19a88cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)2);
label_19a890:
    // 0x19a890: 0x3442fcff  ori         $v0, $v0, 0xFCFF
    ctx->pc = 0x19a890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64767);
label_19a894:
    // 0x19a894: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x19a894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_19a898:
    // 0x19a898: 0x1421024  and         $v0, $t2, $v0
    ctx->pc = 0x19a898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
label_19a89c:
    // 0x19a89c: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x19a89cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_19a8a0:
    // 0x19a8a0: 0x10000004  b           . + 4 + (0x4 << 2)
label_19a8a4:
    if (ctx->pc == 0x19A8A4u) {
        ctx->pc = 0x19A8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A8A0u;
        // 0x19a8a4: 0x435025  or          $t2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A8A8u;
        goto label_19a8a8;
    }
    ctx->pc = 0x19A8A0u;
    {
        const bool branch_taken_0x19a8a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A8A0u;
        // 0x19a8a4: 0x435025  or          $t2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a8a0) {
            ctx->pc = 0x19A8B4u;
            goto label_19a8b4;
        }
    }
    ctx->pc = 0x19A8A8u;
label_19a8a8:
    // 0x19a8a8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x19a8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_19a8ac:
    // 0x19a8ac: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x19a8acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
label_19a8b0:
    // 0x19a8b0: 0x1425024  and         $t2, $t2, $v0
    ctx->pc = 0x19a8b0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
label_19a8b4:
    // 0x19a8b4: 0x95220004  lhu         $v0, 0x4($t1)
    ctx->pc = 0x19a8b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 4)));
label_19a8b8:
    // 0x19a8b8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x19a8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_19a8bc:
    // 0x19a8bc: 0x95260006  lhu         $a2, 0x6($t1)
    ctx->pc = 0x19a8bcu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 6)));
label_19a8c0:
    // 0x19a8c0: 0x3484e000  ori         $a0, $a0, 0xE000
    ctx->pc = 0x19a8c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)57344);
label_19a8c4:
    // 0x19a8c4: 0x9525000a  lhu         $a1, 0xA($t1)
    ctx->pc = 0x19a8c4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 10)));
label_19a8c8:
    // 0x19a8c8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x19a8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_19a8cc:
    // 0x19a8cc: 0x8d280010  lw          $t0, 0x10($t1)
    ctx->pc = 0x19a8ccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
label_19a8d0:
    // 0x19a8d0: 0x463025  or          $a2, $v0, $a2
    ctx->pc = 0x19a8d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_19a8d4:
    // 0x19a8d4: 0x95270008  lhu         $a3, 0x8($t1)
    ctx->pc = 0x19a8d4u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 8)));
label_19a8d8:
    // 0x19a8d8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x19a8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_19a8dc:
    // 0x19a8dc: 0xac8a0000  sw          $t2, 0x0($a0)
    ctx->pc = 0x19a8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 10));
label_19a8e0:
    // 0x19a8e0: 0x3463e020  ori         $v1, $v1, 0xE020
    ctx->pc = 0x19a8e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57376);
label_19a8e4:
    // 0x19a8e4: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x19a8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
label_19a8e8:
    // 0x19a8e8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x19a8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_19a8ec:
    // 0x19a8ec: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x19a8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_19a8f0:
    // 0x19a8f0: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x19a8f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
label_19a8f4:
    // 0x19a8f4: 0x3442e030  ori         $v0, $v0, 0xE030
    ctx->pc = 0x19a8f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57392);
label_19a8f8:
    // 0x19a8f8: 0x8d26000c  lw          $a2, 0xC($t1)
    ctx->pc = 0x19a8f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
label_19a8fc:
    // 0x19a8fc: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x19a8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_19a900:
    // 0x19a900: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x19a900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_19a904:
    // 0x19a904: 0x3463e050  ori         $v1, $v1, 0xE050
    ctx->pc = 0x19a904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57424);
label_19a908:
    // 0x19a908: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x19a908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_19a90c:
    // 0x19a90c: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x19a90cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_19a910:
    // 0x19a910: 0x3442e040  ori         $v0, $v0, 0xE040
    ctx->pc = 0x19a910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57408);
label_19a914:
    // 0x19a914: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x19a914u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
label_19a918:
    // 0x19a918: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x19a918u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_19a91c:
    // 0x19a91c: 0x24665888  addiu       $a2, $v1, 0x5888
    ctx->pc = 0x19a91cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 22664));
label_19a920:
    // 0x19a920: 0x69220007  ldl         $v0, 0x7($t1)
    ctx->pc = 0x19a920u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_19a924:
    // 0x19a924: 0x6d220000  ldr         $v0, 0x0($t1)
    ctx->pc = 0x19a924u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_19a928:
    // 0x19a928: 0x6924000f  ldl         $a0, 0xF($t1)
    ctx->pc = 0x19a928u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_19a92c:
    // 0x19a92c: 0x6d240008  ldr         $a0, 0x8($t1)
    ctx->pc = 0x19a92cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_19a930:
    // 0x19a930: 0x8d250010  lw          $a1, 0x10($t1)
    ctx->pc = 0x19a930u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
label_19a934:
    // 0x19a934: 0xb0c20007  sdl         $v0, 0x7($a2)
    ctx->pc = 0x19a934u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_19a938:
    // 0x19a938: 0xb4c20000  sdr         $v0, 0x0($a2)
    ctx->pc = 0x19a938u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_19a93c:
    // 0x19a93c: 0xb0c4000f  sdl         $a0, 0xF($a2)
    ctx->pc = 0x19a93cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_19a940:
    // 0x19a940: 0xb4c40008  sdr         $a0, 0x8($a2)
    ctx->pc = 0x19a940u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_19a944:
    // 0x19a944: 0xacc50010  sw          $a1, 0x10($a2)
    ctx->pc = 0x19a944u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 5));
label_19a948:
    // 0x19a948: 0x3e00008  jr          $ra
label_19a94c:
    if (ctx->pc == 0x19A94Cu) {
        ctx->pc = 0x19A94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A948u;
        // 0x19a94c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A950u;
        goto label_19a950;
    }
    ctx->pc = 0x19A948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A948u;
        // 0x19a94c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19A950u;
label_19a950:
    // 0x19a950: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x19a950u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_19a954:
    // 0x19a954: 0x24685888  addiu       $t0, $v1, 0x5888
    ctx->pc = 0x19a954u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 22664));
label_19a958:
    // 0x19a958: 0x69050007  ldl         $a1, 0x7($t0)
    ctx->pc = 0x19a958u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_19a95c:
    // 0x19a95c: 0x6d050000  ldr         $a1, 0x0($t0)
    ctx->pc = 0x19a95cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_19a960:
    // 0x19a960: 0x6906000f  ldl         $a2, 0xF($t0)
    ctx->pc = 0x19a960u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_19a964:
    // 0x19a964: 0x6d060008  ldr         $a2, 0x8($t0)
    ctx->pc = 0x19a964u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_19a968:
    // 0x19a968: 0x8d070010  lw          $a3, 0x10($t0)
    ctx->pc = 0x19a968u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
label_19a96c:
    // 0x19a96c: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x19a96cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_19a970:
    // 0x19a970: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x19a970u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_19a974:
    // 0x19a974: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x19a974u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_19a978:
    // 0x19a978: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x19a978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_19a97c:
    // 0x19a97c: 0xac870010  sw          $a3, 0x10($a0)
    ctx->pc = 0x19a97cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 7));
label_19a980:
    // 0x19a980: 0x3e00008  jr          $ra
label_19a984:
    if (ctx->pc == 0x19A984u) {
        ctx->pc = 0x19A984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A980u;
        // 0x19a984: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A988u;
        goto label_19a988;
    }
    ctx->pc = 0x19A980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A980u;
        // 0x19a984: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19A988u;
label_19a988:
    // 0x19a988: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x19a988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_19a98c:
    // 0x19a98c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x19a98cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_19a990:
    // 0x19a990: 0x3442e060  ori         $v0, $v0, 0xE060
    ctx->pc = 0x19a990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57440);
label_19a994:
    // 0x19a994: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x19a994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_19a998:
    // 0x19a998: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_19a99c:
    if (ctx->pc == 0x19A99Cu) {
        ctx->pc = 0x19A99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A998u;
        // 0x19a99c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A9A0u;
        goto label_19a9a0;
    }
    ctx->pc = 0x19A998u;
    {
        const bool branch_taken_0x19a998 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x19A99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A998u;
        // 0x19a99c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a998) {
            ctx->pc = 0x19A9A8u;
            goto label_19a9a8;
        }
    }
    ctx->pc = 0x19A9A0u;
label_19a9a0:
    // 0x19a9a0: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x19a9a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
label_19a9a4:
    // 0x19a9a4: 0xac24e060  sw          $a0, -0x1FA0($at)
    ctx->pc = 0x19a9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959200), GPR_U32(ctx, 4));
label_19a9a8:
    // 0x19a9a8: 0x3e00008  jr          $ra
label_19a9ac:
    if (ctx->pc == 0x19A9ACu) {
        ctx->pc = 0x19A9B0u;
        goto label_19a9b0;
    }
    ctx->pc = 0x19A9A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A9A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19A9B0u;
label_19a9b0:
    // 0x19a9b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19a9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_19a9b4:
    // 0x19a9b4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x19a9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_19a9b8:
    // 0x19a9b8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x19a9b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_19a9bc:
    // 0x19a9bc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x19a9bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19a9c0:
    // 0x19a9c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19a9c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19a9c4:
    // 0x19a9c4: 0x3c110100  lui         $s1, 0x100
    ctx->pc = 0x19a9c4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)256 << 16));
label_19a9c8:
    // 0x19a9c8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x19a9c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_19a9cc:
    // 0x19a9cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19a9ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19a9d0:
    // 0x19a9d0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x19a9d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_19a9d4:
    // 0x19a9d4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19a9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19a9d8:
    // 0x19a9d8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x19a9d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_19a9dc:
    // 0x19a9dc: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_19a9e0:
    if (ctx->pc == 0x19A9E0u) {
        ctx->pc = 0x19A9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A9DCu;
        // 0x19a9e0: 0x3c12002d  lui         $s2, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A9E4u;
        goto label_19a9e4;
    }
    ctx->pc = 0x19A9DCu;
    {
        const bool branch_taken_0x19a9dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A9DCu;
        // 0x19a9e0: 0x3c12002d  lui         $s2, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a9dc) {
            ctx->pc = 0x19AA40u;
            goto label_19aa40;
        }
    }
    ctx->pc = 0x19A9E4u;
label_19a9e4:
    // 0x19a9e4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x19a9e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_19a9e8:
    // 0x19a9e8: 0x6210011  bgez        $s1, . + 4 + (0x11 << 2)
label_19a9ec:
    if (ctx->pc == 0x19A9ECu) {
        ctx->pc = 0x19A9F0u;
        goto label_19a9f0;
    }
    ctx->pc = 0x19A9E8u;
    {
        const bool branch_taken_0x19a9e8 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x19a9e8) {
            ctx->pc = 0x19AA30u;
            goto label_19aa30;
        }
    }
    ctx->pc = 0x19A9F0u;
label_19a9f0:
    // 0x19a9f0: 0xc08ee2e  jal         func_23B8B8
label_19a9f4:
    if (ctx->pc == 0x19A9F4u) {
        ctx->pc = 0x19A9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A9F0u;
        // 0x19a9f4: 0x26449f90  addiu       $a0, $s2, -0x6070 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294942608));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A9F8u;
        goto label_19a9f8;
    }
    ctx->pc = 0x19A9F0u;
    SET_GPR_U32(ctx, 31, 0x19A9F8u);
    ctx->pc = 0x19A9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A9F0u;
    // 0x19a9f4: 0x26449f90  addiu       $a0, $s2, -0x6070 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294942608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8B8u;
    { ctx->pc = 0x23b8b8; return; }
    ctx->pc = 0x19A9F8u;
label_19a9f8:
    // 0x19a9f8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x19a9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19a9fc:
    // 0x19a9fc: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x19a9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
label_19aa00:
    // 0x19aa00: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19aa00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_19aa04:
    // 0x19aa04: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_19aa08:
    if (ctx->pc == 0x19AA08u) {
        ctx->pc = 0x19AA0Cu;
        goto label_19aa0c;
    }
    ctx->pc = 0x19AA04u;
    {
        const bool branch_taken_0x19aa04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19aa04) {
            ctx->pc = 0x19AA30u;
            goto label_19aa30;
        }
    }
    ctx->pc = 0x19AA0Cu;
label_19aa0c:
    // 0x19aa0c: 0x2405feff  addiu       $a1, $zero, -0x101
    ctx->pc = 0x19aa0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
label_19aa10:
    // 0x19aa10: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x19aa10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_19aa14:
    // 0x19aa14: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19aa14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19aa18:
    // 0x19aa18: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x19aa18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_19aa1c:
    // 0x19aa1c: 0x0  nop
    ctx->pc = 0x19aa1cu;
    // NOP
label_19aa20:
    // 0x19aa20: 0x0  nop
    ctx->pc = 0x19aa20u;
    // NOP
label_19aa24:
    // 0x19aa24: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_19aa28:
    if (ctx->pc == 0x19AA28u) {
        ctx->pc = 0x19AA2Cu;
        goto label_19aa2c;
    }
    ctx->pc = 0x19AA24u;
    {
        const bool branch_taken_0x19aa24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19aa24) {
            ctx->pc = 0x19AA10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19aa10;
        }
    }
    ctx->pc = 0x19AA2Cu;
label_19aa2c:
    // 0x19aa2c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x19aa2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_19aa30:
    // 0x19aa30: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19aa30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19aa34:
    // 0x19aa34: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x19aa34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_19aa38:
    // 0x19aa38: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_19aa3c:
    if (ctx->pc == 0x19AA3Cu) {
        ctx->pc = 0x19AA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AA38u;
        // 0x19aa3c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AA40u;
        goto label_19aa40;
    }
    ctx->pc = 0x19AA38u;
    {
        const bool branch_taken_0x19aa38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19AA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AA38u;
        // 0x19aa3c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aa38) {
            ctx->pc = 0x19A9E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19a9e8;
        }
    }
    ctx->pc = 0x19AA40u;
label_19aa40:
    // 0x19aa40: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x19aa40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_19aa44:
    // 0x19aa44: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x19aa44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_19aa48:
    // 0x19aa48: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x19aa48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_19aa4c:
    // 0x19aa4c: 0x54620001  bnel        $v1, $v0, . + 4 + (0x1 << 2)
label_19aa50:
    if (ctx->pc == 0x19AA50u) {
        ctx->pc = 0x19AA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AA4Cu;
        // 0x19aa50: 0xae130030  sw          $s3, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AA54u;
        goto label_19aa54;
    }
    ctx->pc = 0x19AA4Cu;
    {
        const bool branch_taken_0x19aa4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19aa4c) {
            ctx->pc = 0x19AA50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19AA4Cu;
            // 0x19aa50: 0xae130030  sw          $s3, 0x30($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19AA54u;
            goto label_19aa54;
        }
    }
    ctx->pc = 0x19AA54u;
label_19aa54:
    // 0x19aa54: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19aa54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19aa58:
    // 0x19aa58: 0x2403fff3  addiu       $v1, $zero, -0xD
    ctx->pc = 0x19aa58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
label_19aa5c:
    // 0x19aa5c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x19aa5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_19aa60:
    // 0x19aa60: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x19aa60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_19aa64:
    // 0x19aa64: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19aa64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_19aa68:
    // 0x19aa68: 0x34420105  ori         $v0, $v0, 0x105
    ctx->pc = 0x19aa68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)261);
label_19aa6c:
    // 0x19aa6c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x19aa6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19aa70:
    // 0x19aa70: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x19aa70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_19aa74:
    // 0x19aa74: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x19aa74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19aa78:
    // 0x19aa78: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x19aa78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19aa7c:
    // 0x19aa7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19aa7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19aa80:
    // 0x19aa80: 0x3e00008  jr          $ra
label_19aa84:
    if (ctx->pc == 0x19AA84u) {
        ctx->pc = 0x19AA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AA80u;
        // 0x19aa84: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AA88u;
        goto label_19aa88;
    }
    ctx->pc = 0x19AA80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19AA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AA80u;
        // 0x19aa84: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19AA80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19AA88u;
label_19aa88:
    // 0x19aa88: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x19aa88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_19aa8c:
    // 0x19aa8c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x19aa8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_19aa90:
    // 0x19aa90: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x19aa90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_19aa94:
    // 0x19aa94: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x19aa94u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_19aa98:
    // 0x19aa98: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x19aa98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_19aa9c:
    // 0x19aa9c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x19aa9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19aaa0:
    // 0x19aaa0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19aaa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19aaa4:
    // 0x19aaa4: 0x3c110100  lui         $s1, 0x100
    ctx->pc = 0x19aaa4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)256 << 16));
label_19aaa8:
    // 0x19aaa8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x19aaa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_19aaac:
    // 0x19aaac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19aaacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19aab0:
    // 0x19aab0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x19aab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_19aab4:
    // 0x19aab4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19aab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19aab8:
    // 0x19aab8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x19aab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_19aabc:
    // 0x19aabc: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_19aac0:
    if (ctx->pc == 0x19AAC0u) {
        ctx->pc = 0x19AAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AABCu;
        // 0x19aac0: 0x3c12002d  lui         $s2, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AAC4u;
        goto label_19aac4;
    }
    ctx->pc = 0x19AABCu;
    {
        const bool branch_taken_0x19aabc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AABCu;
        // 0x19aac0: 0x3c12002d  lui         $s2, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aabc) {
            ctx->pc = 0x19AB20u;
            goto label_19ab20;
        }
    }
    ctx->pc = 0x19AAC4u;
label_19aac4:
    // 0x19aac4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x19aac4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_19aac8:
    // 0x19aac8: 0x6210011  bgez        $s1, . + 4 + (0x11 << 2)
label_19aacc:
    if (ctx->pc == 0x19AACCu) {
        ctx->pc = 0x19AAD0u;
        goto label_19aad0;
    }
    ctx->pc = 0x19AAC8u;
    {
        const bool branch_taken_0x19aac8 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x19aac8) {
            ctx->pc = 0x19AB10u;
            goto label_19ab10;
        }
    }
    ctx->pc = 0x19AAD0u;
label_19aad0:
    // 0x19aad0: 0xc08ee2e  jal         func_23B8B8
label_19aad4:
    if (ctx->pc == 0x19AAD4u) {
        ctx->pc = 0x19AAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AAD0u;
        // 0x19aad4: 0x26449f90  addiu       $a0, $s2, -0x6070 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294942608));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AAD8u;
        goto label_19aad8;
    }
    ctx->pc = 0x19AAD0u;
    SET_GPR_U32(ctx, 31, 0x19AAD8u);
    ctx->pc = 0x19AAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AAD0u;
    // 0x19aad4: 0x26449f90  addiu       $a0, $s2, -0x6070 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294942608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8B8u;
    { ctx->pc = 0x23b8b8; return; }
    ctx->pc = 0x19AAD8u;
label_19aad8:
    // 0x19aad8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x19aad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19aadc:
    // 0x19aadc: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x19aadcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
label_19aae0:
    // 0x19aae0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19aae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_19aae4:
    // 0x19aae4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_19aae8:
    if (ctx->pc == 0x19AAE8u) {
        ctx->pc = 0x19AAECu;
        goto label_19aaec;
    }
    ctx->pc = 0x19AAE4u;
    {
        const bool branch_taken_0x19aae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19aae4) {
            ctx->pc = 0x19AB10u;
            goto label_19ab10;
        }
    }
    ctx->pc = 0x19AAECu;
label_19aaec:
    // 0x19aaec: 0x2405feff  addiu       $a1, $zero, -0x101
    ctx->pc = 0x19aaecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
label_19aaf0:
    // 0x19aaf0: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x19aaf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_19aaf4:
    // 0x19aaf4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19aaf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19aaf8:
    // 0x19aaf8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x19aaf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_19aafc:
    // 0x19aafc: 0x0  nop
    ctx->pc = 0x19aafcu;
    // NOP
label_19ab00:
    // 0x19ab00: 0x0  nop
    ctx->pc = 0x19ab00u;
    // NOP
label_19ab04:
    // 0x19ab04: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_19ab08:
    if (ctx->pc == 0x19AB08u) {
        ctx->pc = 0x19AB0Cu;
        goto label_19ab0c;
    }
    ctx->pc = 0x19AB04u;
    {
        const bool branch_taken_0x19ab04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19ab04) {
            ctx->pc = 0x19AAF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19aaf0;
        }
    }
    ctx->pc = 0x19AB0Cu;
label_19ab0c:
    // 0x19ab0c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x19ab0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_19ab10:
    // 0x19ab10: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19ab10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19ab14:
    // 0x19ab14: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x19ab14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_19ab18:
    // 0x19ab18: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_19ab1c:
    if (ctx->pc == 0x19AB1Cu) {
        ctx->pc = 0x19AB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AB18u;
        // 0x19ab1c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AB20u;
        goto label_19ab20;
    }
    ctx->pc = 0x19AB18u;
    {
        const bool branch_taken_0x19ab18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19AB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AB18u;
        // 0x19ab1c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ab18) {
            ctx->pc = 0x19AAC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19aac8;
        }
    }
    ctx->pc = 0x19AB20u;
label_19ab20:
    // 0x19ab20: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x19ab20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_19ab24:
    // 0x19ab24: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x19ab24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_19ab28:
    // 0x19ab28: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x19ab28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_19ab2c:
    // 0x19ab2c: 0x54620001  bnel        $v1, $v0, . + 4 + (0x1 << 2)
label_19ab30:
    if (ctx->pc == 0x19AB30u) {
        ctx->pc = 0x19AB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AB2Cu;
        // 0x19ab30: 0xae130010  sw          $s3, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AB34u;
        goto label_19ab34;
    }
    ctx->pc = 0x19AB2Cu;
    {
        const bool branch_taken_0x19ab2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19ab2c) {
            ctx->pc = 0x19AB30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19AB2Cu;
            // 0x19ab30: 0xae130010  sw          $s3, 0x10($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19AB34u;
            goto label_19ab34;
        }
    }
    ctx->pc = 0x19AB34u;
label_19ab34:
    // 0x19ab34: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19ab34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19ab38:
    // 0x19ab38: 0x2403fff3  addiu       $v1, $zero, -0xD
    ctx->pc = 0x19ab38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
label_19ab3c:
    // 0x19ab3c: 0xae140020  sw          $s4, 0x20($s0)
    ctx->pc = 0x19ab3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 20));
label_19ab40:
    // 0x19ab40: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x19ab40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_19ab44:
    // 0x19ab44: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x19ab44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_19ab48:
    // 0x19ab48: 0x34420101  ori         $v0, $v0, 0x101
    ctx->pc = 0x19ab48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)257);
label_19ab4c:
    // 0x19ab4c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x19ab4cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_19ab50:
    // 0x19ab50: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x19ab50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_19ab54:
    // 0x19ab54: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x19ab54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19ab58:
    // 0x19ab58: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x19ab58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19ab5c:
    // 0x19ab5c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x19ab5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19ab60:
    // 0x19ab60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19ab60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19ab64:
    // 0x19ab64: 0x3e00008  jr          $ra
label_19ab68:
    if (ctx->pc == 0x19AB68u) {
        ctx->pc = 0x19AB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AB64u;
        // 0x19ab68: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AB6Cu;
        goto label_19ab6c;
    }
    ctx->pc = 0x19AB64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19AB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AB64u;
        // 0x19ab68: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19AB64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19AB6Cu;
label_19ab6c:
    // 0x19ab6c: 0x0  nop
    ctx->pc = 0x19ab6cu;
    // NOP
label_19ab70:
    // 0x19ab70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x19ab70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_19ab74:
    // 0x19ab74: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x19ab74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_19ab78:
    // 0x19ab78: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x19ab78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_19ab7c:
    // 0x19ab7c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x19ab7cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_19ab80:
    // 0x19ab80: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x19ab80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_19ab84:
    // 0x19ab84: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x19ab84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19ab88:
    // 0x19ab88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19ab88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19ab8c:
    // 0x19ab8c: 0x3c110100  lui         $s1, 0x100
    ctx->pc = 0x19ab8cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)256 << 16));
label_19ab90:
    // 0x19ab90: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x19ab90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_19ab94:
    // 0x19ab94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19ab94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19ab98:
    // 0x19ab98: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x19ab98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_19ab9c:
    // 0x19ab9c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19ab9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19aba0:
    // 0x19aba0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x19aba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_19aba4:
    // 0x19aba4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_19aba8:
    if (ctx->pc == 0x19ABA8u) {
        ctx->pc = 0x19ABA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ABA4u;
        // 0x19aba8: 0x3c12002d  lui         $s2, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19ABACu;
        goto label_19abac;
    }
    ctx->pc = 0x19ABA4u;
    {
        const bool branch_taken_0x19aba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19ABA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ABA4u;
        // 0x19aba8: 0x3c12002d  lui         $s2, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aba4) {
            ctx->pc = 0x19AC08u;
            goto label_19ac08;
        }
    }
    ctx->pc = 0x19ABACu;
label_19abac:
    // 0x19abac: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x19abacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_19abb0:
    // 0x19abb0: 0x6210011  bgez        $s1, . + 4 + (0x11 << 2)
label_19abb4:
    if (ctx->pc == 0x19ABB4u) {
        ctx->pc = 0x19ABB8u;
        goto label_19abb8;
    }
    ctx->pc = 0x19ABB0u;
    {
        const bool branch_taken_0x19abb0 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x19abb0) {
            ctx->pc = 0x19ABF8u;
            goto label_19abf8;
        }
    }
    ctx->pc = 0x19ABB8u;
label_19abb8:
    // 0x19abb8: 0xc08ee2e  jal         func_23B8B8
label_19abbc:
    if (ctx->pc == 0x19ABBCu) {
        ctx->pc = 0x19ABBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ABB8u;
        // 0x19abbc: 0x26449f90  addiu       $a0, $s2, -0x6070 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294942608));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19ABC0u;
        goto label_19abc0;
    }
    ctx->pc = 0x19ABB8u;
    SET_GPR_U32(ctx, 31, 0x19ABC0u);
    ctx->pc = 0x19ABBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19ABB8u;
    // 0x19abbc: 0x26449f90  addiu       $a0, $s2, -0x6070 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294942608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8B8u;
    { ctx->pc = 0x23b8b8; return; }
    ctx->pc = 0x19ABC0u;
label_19abc0:
    // 0x19abc0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x19abc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19abc4:
    // 0x19abc4: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x19abc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
label_19abc8:
    // 0x19abc8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19abc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_19abcc:
    // 0x19abcc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_19abd0:
    if (ctx->pc == 0x19ABD0u) {
        ctx->pc = 0x19ABD4u;
        goto label_19abd4;
    }
    ctx->pc = 0x19ABCCu;
    {
        const bool branch_taken_0x19abcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19abcc) {
            ctx->pc = 0x19ABF8u;
            goto label_19abf8;
        }
    }
    ctx->pc = 0x19ABD4u;
label_19abd4:
    // 0x19abd4: 0x2405feff  addiu       $a1, $zero, -0x101
    ctx->pc = 0x19abd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
label_19abd8:
    // 0x19abd8: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x19abd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_19abdc:
    // 0x19abdc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19abdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19abe0:
    // 0x19abe0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x19abe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_19abe4:
    // 0x19abe4: 0x0  nop
    ctx->pc = 0x19abe4u;
    // NOP
label_19abe8:
    // 0x19abe8: 0x0  nop
    ctx->pc = 0x19abe8u;
    // NOP
label_19abec:
    // 0x19abec: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_19abf0:
    if (ctx->pc == 0x19ABF0u) {
        ctx->pc = 0x19ABF4u;
        goto label_19abf4;
    }
    ctx->pc = 0x19ABECu;
    {
        const bool branch_taken_0x19abec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19abec) {
            ctx->pc = 0x19ABD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19abd8;
        }
    }
    ctx->pc = 0x19ABF4u;
label_19abf4:
    // 0x19abf4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x19abf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_19abf8:
    // 0x19abf8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19abf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19abfc:
    // 0x19abfc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x19abfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_19ac00:
    // 0x19ac00: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_19ac04:
    if (ctx->pc == 0x19AC04u) {
        ctx->pc = 0x19AC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AC00u;
        // 0x19ac04: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AC08u;
        goto label_19ac08;
    }
    ctx->pc = 0x19AC00u;
    {
        const bool branch_taken_0x19ac00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19AC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AC00u;
        // 0x19ac04: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ac00) {
            ctx->pc = 0x19ABB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19abb0;
        }
    }
    ctx->pc = 0x19AC08u;
label_19ac08:
    // 0x19ac08: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x19ac08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_19ac0c:
    // 0x19ac0c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x19ac0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_19ac10:
    // 0x19ac10: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x19ac10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_19ac14:
    // 0x19ac14: 0x54620001  bnel        $v1, $v0, . + 4 + (0x1 << 2)
label_19ac18:
    if (ctx->pc == 0x19AC18u) {
        ctx->pc = 0x19AC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AC14u;
        // 0x19ac18: 0xae130010  sw          $s3, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AC1Cu;
        goto label_19ac1c;
    }
    ctx->pc = 0x19AC14u;
    {
        const bool branch_taken_0x19ac14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19ac14) {
            ctx->pc = 0x19AC18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19AC14u;
            // 0x19ac18: 0xae130010  sw          $s3, 0x10($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19AC1Cu;
            goto label_19ac1c;
        }
    }
    ctx->pc = 0x19AC1Cu;
label_19ac1c:
    // 0x19ac1c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19ac1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19ac20:
    // 0x19ac20: 0x2403fff3  addiu       $v1, $zero, -0xD
    ctx->pc = 0x19ac20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
label_19ac24:
    // 0x19ac24: 0xae140020  sw          $s4, 0x20($s0)
    ctx->pc = 0x19ac24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 20));
label_19ac28:
    // 0x19ac28: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x19ac28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_19ac2c:
    // 0x19ac2c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x19ac2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_19ac30:
    // 0x19ac30: 0x34420109  ori         $v0, $v0, 0x109
    ctx->pc = 0x19ac30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)265);
label_19ac34:
    // 0x19ac34: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x19ac34u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_19ac38:
    // 0x19ac38: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x19ac38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_19ac3c:
    // 0x19ac3c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x19ac3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19ac40:
    // 0x19ac40: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x19ac40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19ac44:
    // 0x19ac44: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x19ac44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19ac48:
    // 0x19ac48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19ac48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19ac4c:
    // 0x19ac4c: 0x3e00008  jr          $ra
label_19ac50:
    if (ctx->pc == 0x19AC50u) {
        ctx->pc = 0x19AC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AC4Cu;
        // 0x19ac50: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AC54u;
        goto label_19ac54;
    }
    ctx->pc = 0x19AC4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19AC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AC4Cu;
        // 0x19ac50: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19AC4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19AC54u;
label_19ac54:
    // 0x19ac54: 0x0  nop
    ctx->pc = 0x19ac54u;
    // NOP
label_19ac58:
    // 0x19ac58: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19ac58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_19ac5c:
    // 0x19ac5c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x19ac5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_19ac60:
    // 0x19ac60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19ac60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19ac64:
    // 0x19ac64: 0x3c110100  lui         $s1, 0x100
    ctx->pc = 0x19ac64u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)256 << 16));
label_19ac68:
    // 0x19ac68: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x19ac68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_19ac6c:
    // 0x19ac6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19ac6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19ac70:
    // 0x19ac70: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x19ac70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_19ac74:
    // 0x19ac74: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19ac74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19ac78:
    // 0x19ac78: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x19ac78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_19ac7c:
    // 0x19ac7c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_19ac80:
    if (ctx->pc == 0x19AC80u) {
        ctx->pc = 0x19AC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AC7Cu;
        // 0x19ac80: 0x3c12002d  lui         $s2, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AC84u;
        goto label_19ac84;
    }
    ctx->pc = 0x19AC7Cu;
    {
        const bool branch_taken_0x19ac7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AC7Cu;
        // 0x19ac80: 0x3c12002d  lui         $s2, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ac7c) {
            ctx->pc = 0x19ACE0u;
            goto label_19ace0;
        }
    }
    ctx->pc = 0x19AC84u;
label_19ac84:
    // 0x19ac84: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x19ac84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_19ac88:
    // 0x19ac88: 0x6210011  bgez        $s1, . + 4 + (0x11 << 2)
label_19ac8c:
    if (ctx->pc == 0x19AC8Cu) {
        ctx->pc = 0x19AC90u;
        goto label_19ac90;
    }
    ctx->pc = 0x19AC88u;
    {
        const bool branch_taken_0x19ac88 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x19ac88) {
            ctx->pc = 0x19ACD0u;
            goto label_19acd0;
        }
    }
    ctx->pc = 0x19AC90u;
label_19ac90:
    // 0x19ac90: 0xc08ee2e  jal         func_23B8B8
label_19ac94:
    if (ctx->pc == 0x19AC94u) {
        ctx->pc = 0x19AC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AC90u;
        // 0x19ac94: 0x26449f90  addiu       $a0, $s2, -0x6070 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294942608));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AC98u;
        goto label_19ac98;
    }
    ctx->pc = 0x19AC90u;
    SET_GPR_U32(ctx, 31, 0x19AC98u);
    ctx->pc = 0x19AC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AC90u;
    // 0x19ac94: 0x26449f90  addiu       $a0, $s2, -0x6070 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294942608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8B8u;
    { ctx->pc = 0x23b8b8; return; }
    ctx->pc = 0x19AC98u;
label_19ac98:
    // 0x19ac98: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x19ac98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19ac9c:
    // 0x19ac9c: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x19ac9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
label_19aca0:
    // 0x19aca0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19aca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_19aca4:
    // 0x19aca4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_19aca8:
    if (ctx->pc == 0x19ACA8u) {
        ctx->pc = 0x19ACACu;
        goto label_19acac;
    }
    ctx->pc = 0x19ACA4u;
    {
        const bool branch_taken_0x19aca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19aca4) {
            ctx->pc = 0x19ACD0u;
            goto label_19acd0;
        }
    }
    ctx->pc = 0x19ACACu;
label_19acac:
    // 0x19acac: 0x2405feff  addiu       $a1, $zero, -0x101
    ctx->pc = 0x19acacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
label_19acb0:
    // 0x19acb0: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x19acb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_19acb4:
    // 0x19acb4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19acb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19acb8:
    // 0x19acb8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x19acb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_19acbc:
    // 0x19acbc: 0x0  nop
    ctx->pc = 0x19acbcu;
    // NOP
label_19acc0:
    // 0x19acc0: 0x0  nop
    ctx->pc = 0x19acc0u;
    // NOP
label_19acc4:
    // 0x19acc4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_19acc8:
    if (ctx->pc == 0x19ACC8u) {
        ctx->pc = 0x19ACCCu;
        goto label_19accc;
    }
    ctx->pc = 0x19ACC4u;
    {
        const bool branch_taken_0x19acc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19acc4) {
            ctx->pc = 0x19ACB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19acb0;
        }
    }
    ctx->pc = 0x19ACCCu;
label_19accc:
    // 0x19accc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x19acccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_19acd0:
    // 0x19acd0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19acd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19acd4:
    // 0x19acd4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x19acd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_19acd8:
    // 0x19acd8: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_19acdc:
    if (ctx->pc == 0x19ACDCu) {
        ctx->pc = 0x19ACDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ACD8u;
        // 0x19acdc: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19ACE0u;
        goto label_19ace0;
    }
    ctx->pc = 0x19ACD8u;
    {
        const bool branch_taken_0x19acd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19ACDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ACD8u;
        // 0x19acdc: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19acd8) {
            ctx->pc = 0x19AC88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19ac88;
        }
    }
    ctx->pc = 0x19ACE0u;
label_19ace0:
    // 0x19ace0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19ace0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19ace4:
    // 0x19ace4: 0x2403fff3  addiu       $v1, $zero, -0xD
    ctx->pc = 0x19ace4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
label_19ace8:
    // 0x19ace8: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x19ace8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_19acec:
    // 0x19acec: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x19acecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_19acf0:
    // 0x19acf0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x19acf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_19acf4:
    // 0x19acf4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x19acf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19acf8:
    // 0x19acf8: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x19acf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_19acfc:
    // 0x19acfc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x19acfcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19ad00:
    // 0x19ad00: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x19ad00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_19ad04:
    // 0x19ad04: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x19ad04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19ad08:
    // 0x19ad08: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x19ad08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_19ad0c:
    // 0x19ad0c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x19ad0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_19ad10:
    // 0x19ad10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19ad10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19ad14:
    // 0x19ad14: 0x3e00008  jr          $ra
label_19ad18:
    if (ctx->pc == 0x19AD18u) {
        ctx->pc = 0x19AD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AD14u;
        // 0x19ad18: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AD1Cu;
        goto label_19ad1c;
    }
    ctx->pc = 0x19AD14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19AD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AD14u;
        // 0x19ad18: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19AD14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19AD1Cu;
label_19ad1c:
    // 0x19ad1c: 0x0  nop
    ctx->pc = 0x19ad1cu;
    // NOP
label_19ad20:
    // 0x19ad20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x19ad20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_19ad24:
    // 0x19ad24: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x19ad24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_19ad28:
    // 0x19ad28: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x19ad28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_19ad2c:
    // 0x19ad2c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x19ad2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_19ad30:
    // 0x19ad30: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x19ad30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_19ad34:
    // 0x19ad34: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x19ad34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19ad38:
    // 0x19ad38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19ad38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19ad3c:
    // 0x19ad3c: 0x3c110100  lui         $s1, 0x100
    ctx->pc = 0x19ad3cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)256 << 16));
label_19ad40:
    // 0x19ad40: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x19ad40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_19ad44:
    // 0x19ad44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19ad44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19ad48:
    // 0x19ad48: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x19ad48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_19ad4c:
    // 0x19ad4c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19ad4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19ad50:
    // 0x19ad50: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x19ad50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_19ad54:
    // 0x19ad54: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_19ad58:
    if (ctx->pc == 0x19AD58u) {
        ctx->pc = 0x19AD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AD54u;
        // 0x19ad58: 0x3c12002d  lui         $s2, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AD5Cu;
        goto label_19ad5c;
    }
    ctx->pc = 0x19AD54u;
    {
        const bool branch_taken_0x19ad54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AD54u;
        // 0x19ad58: 0x3c12002d  lui         $s2, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ad54) {
            ctx->pc = 0x19ADB8u;
            goto label_19adb8;
        }
    }
    ctx->pc = 0x19AD5Cu;
label_19ad5c:
    // 0x19ad5c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x19ad5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_19ad60:
    // 0x19ad60: 0x6210011  bgez        $s1, . + 4 + (0x11 << 2)
label_19ad64:
    if (ctx->pc == 0x19AD64u) {
        ctx->pc = 0x19AD68u;
        goto label_19ad68;
    }
    ctx->pc = 0x19AD60u;
    {
        const bool branch_taken_0x19ad60 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x19ad60) {
            ctx->pc = 0x19ADA8u;
            goto label_19ada8;
        }
    }
    ctx->pc = 0x19AD68u;
label_19ad68:
    // 0x19ad68: 0xc08ee2e  jal         func_23B8B8
label_19ad6c:
    if (ctx->pc == 0x19AD6Cu) {
        ctx->pc = 0x19AD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AD68u;
        // 0x19ad6c: 0x26449f90  addiu       $a0, $s2, -0x6070 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294942608));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AD70u;
        goto label_19ad70;
    }
    ctx->pc = 0x19AD68u;
    SET_GPR_U32(ctx, 31, 0x19AD70u);
    ctx->pc = 0x19AD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AD68u;
    // 0x19ad6c: 0x26449f90  addiu       $a0, $s2, -0x6070 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294942608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8B8u;
    { ctx->pc = 0x23b8b8; return; }
    ctx->pc = 0x19AD70u;
label_19ad70:
    // 0x19ad70: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x19ad70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19ad74:
    // 0x19ad74: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x19ad74u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
label_19ad78:
    // 0x19ad78: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19ad78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_19ad7c:
    // 0x19ad7c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_19ad80:
    if (ctx->pc == 0x19AD80u) {
        ctx->pc = 0x19AD84u;
        goto label_19ad84;
    }
    ctx->pc = 0x19AD7Cu;
    {
        const bool branch_taken_0x19ad7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ad7c) {
            ctx->pc = 0x19ADA8u;
            goto label_19ada8;
        }
    }
    ctx->pc = 0x19AD84u;
label_19ad84:
    // 0x19ad84: 0x2405feff  addiu       $a1, $zero, -0x101
    ctx->pc = 0x19ad84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
label_19ad88:
    // 0x19ad88: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x19ad88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_19ad8c:
    // 0x19ad8c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19ad8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19ad90:
    // 0x19ad90: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x19ad90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_19ad94:
    // 0x19ad94: 0x0  nop
    ctx->pc = 0x19ad94u;
    // NOP
label_19ad98:
    // 0x19ad98: 0x0  nop
    ctx->pc = 0x19ad98u;
    // NOP
label_19ad9c:
    // 0x19ad9c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_19ada0:
    if (ctx->pc == 0x19ADA0u) {
        ctx->pc = 0x19ADA4u;
        goto label_19ada4;
    }
    ctx->pc = 0x19AD9Cu;
    {
        const bool branch_taken_0x19ad9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19ad9c) {
            ctx->pc = 0x19AD88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19ad88;
        }
    }
    ctx->pc = 0x19ADA4u;
label_19ada4:
    // 0x19ada4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x19ada4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_19ada8:
    // 0x19ada8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19ada8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19adac:
    // 0x19adac: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x19adacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_19adb0:
    // 0x19adb0: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_19adb4:
    if (ctx->pc == 0x19ADB4u) {
        ctx->pc = 0x19ADB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ADB0u;
        // 0x19adb4: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19ADB8u;
        goto label_19adb8;
    }
    ctx->pc = 0x19ADB0u;
    {
        const bool branch_taken_0x19adb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19ADB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ADB0u;
        // 0x19adb4: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19adb0) {
            ctx->pc = 0x19AD60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19ad60;
        }
    }
    ctx->pc = 0x19ADB8u;
label_19adb8:
    // 0x19adb8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x19adb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_19adbc:
    // 0x19adbc: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x19adbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_19adc0:
    // 0x19adc0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x19adc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_19adc4:
    // 0x19adc4: 0x54620001  bnel        $v1, $v0, . + 4 + (0x1 << 2)
label_19adc8:
    if (ctx->pc == 0x19ADC8u) {
        ctx->pc = 0x19ADC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ADC4u;
        // 0x19adc8: 0xae130010  sw          $s3, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19ADCCu;
        goto label_19adcc;
    }
    ctx->pc = 0x19ADC4u;
    {
        const bool branch_taken_0x19adc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19adc4) {
            ctx->pc = 0x19ADC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19ADC4u;
            // 0x19adc8: 0xae130010  sw          $s3, 0x10($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19ADCCu;
            goto label_19adcc;
        }
    }
    ctx->pc = 0x19ADCCu;
label_19adcc:
    // 0x19adcc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19adccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19add0:
    // 0x19add0: 0x2403fff3  addiu       $v1, $zero, -0xD
    ctx->pc = 0x19add0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
label_19add4:
    // 0x19add4: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x19add4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_19add8:
    // 0x19add8: 0xae140020  sw          $s4, 0x20($s0)
    ctx->pc = 0x19add8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 20));
label_19addc:
    // 0x19addc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x19addcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_19ade0:
    // 0x19ade0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x19ade0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_19ade4:
    // 0x19ade4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x19ade4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_19ade8:
    // 0x19ade8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x19ade8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_19adec:
    // 0x19adec: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x19adecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_19adf0:
    // 0x19adf0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x19adf0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19adf4:
    // 0x19adf4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x19adf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_19adf8:
    // 0x19adf8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x19adf8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19adfc:
    // 0x19adfc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x19adfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19ae00:
    // 0x19ae00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19ae00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19ae04:
    // 0x19ae04: 0x3e00008  jr          $ra
label_19ae08:
    if (ctx->pc == 0x19AE08u) {
        ctx->pc = 0x19AE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AE04u;
        // 0x19ae08: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AE0Cu;
        goto label_19ae0c;
    }
    ctx->pc = 0x19AE04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19AE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AE04u;
        // 0x19ae08: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19AE04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19AE0Cu;
label_19ae0c:
    // 0x19ae0c: 0x0  nop
    ctx->pc = 0x19ae0cu;
    // NOP
label_19ae10:
    // 0x19ae10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x19ae10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_19ae14:
    // 0x19ae14: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x19ae14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_19ae18:
    // 0x19ae18: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x19ae18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_19ae1c:
    // 0x19ae1c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x19ae1cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_19ae20:
    // 0x19ae20: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x19ae20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_19ae24:
    // 0x19ae24: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x19ae24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19ae28:
    // 0x19ae28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19ae28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19ae2c:
    // 0x19ae2c: 0x3c110100  lui         $s1, 0x100
    ctx->pc = 0x19ae2cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)256 << 16));
label_19ae30:
    // 0x19ae30: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x19ae30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_19ae34:
    // 0x19ae34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19ae34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19ae38:
    // 0x19ae38: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x19ae38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_19ae3c:
    // 0x19ae3c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19ae3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19ae40:
    // 0x19ae40: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x19ae40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_19ae44:
    // 0x19ae44: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_19ae48:
    if (ctx->pc == 0x19AE48u) {
        ctx->pc = 0x19AE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AE44u;
        // 0x19ae48: 0x3c12002d  lui         $s2, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AE4Cu;
        goto label_19ae4c;
    }
    ctx->pc = 0x19AE44u;
    {
        const bool branch_taken_0x19ae44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AE44u;
        // 0x19ae48: 0x3c12002d  lui         $s2, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ae44) {
            ctx->pc = 0x19AEA8u;
            goto label_19aea8;
        }
    }
    ctx->pc = 0x19AE4Cu;
label_19ae4c:
    // 0x19ae4c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x19ae4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_19ae50:
    // 0x19ae50: 0x6210011  bgez        $s1, . + 4 + (0x11 << 2)
label_19ae54:
    if (ctx->pc == 0x19AE54u) {
        ctx->pc = 0x19AE58u;
        goto label_19ae58;
    }
    ctx->pc = 0x19AE50u;
    {
        const bool branch_taken_0x19ae50 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x19ae50) {
            ctx->pc = 0x19AE98u;
            goto label_19ae98;
        }
    }
    ctx->pc = 0x19AE58u;
label_19ae58:
    // 0x19ae58: 0xc08ee2e  jal         func_23B8B8
label_19ae5c:
    if (ctx->pc == 0x19AE5Cu) {
        ctx->pc = 0x19AE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AE58u;
        // 0x19ae5c: 0x26449f90  addiu       $a0, $s2, -0x6070 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294942608));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AE60u;
        goto label_19ae60;
    }
    ctx->pc = 0x19AE58u;
    SET_GPR_U32(ctx, 31, 0x19AE60u);
    ctx->pc = 0x19AE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AE58u;
    // 0x19ae5c: 0x26449f90  addiu       $a0, $s2, -0x6070 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294942608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8B8u;
    { ctx->pc = 0x23b8b8; return; }
    ctx->pc = 0x19AE60u;
label_19ae60:
    // 0x19ae60: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x19ae60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19ae64:
    // 0x19ae64: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x19ae64u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
label_19ae68:
    // 0x19ae68: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19ae68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_19ae6c:
    // 0x19ae6c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_19ae70:
    if (ctx->pc == 0x19AE70u) {
        ctx->pc = 0x19AE74u;
        goto label_19ae74;
    }
    ctx->pc = 0x19AE6Cu;
    {
        const bool branch_taken_0x19ae6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ae6c) {
            ctx->pc = 0x19AE98u;
            goto label_19ae98;
        }
    }
    ctx->pc = 0x19AE74u;
label_19ae74:
    // 0x19ae74: 0x2405feff  addiu       $a1, $zero, -0x101
    ctx->pc = 0x19ae74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
label_19ae78:
    // 0x19ae78: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x19ae78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_19ae7c:
    // 0x19ae7c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19ae7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19ae80:
    // 0x19ae80: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x19ae80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_19ae84:
    // 0x19ae84: 0x0  nop
    ctx->pc = 0x19ae84u;
    // NOP
label_19ae88:
    // 0x19ae88: 0x0  nop
    ctx->pc = 0x19ae88u;
    // NOP
label_19ae8c:
    // 0x19ae8c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_19ae90:
    if (ctx->pc == 0x19AE90u) {
        ctx->pc = 0x19AE94u;
        goto label_19ae94;
    }
    ctx->pc = 0x19AE8Cu;
    {
        const bool branch_taken_0x19ae8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19ae8c) {
            ctx->pc = 0x19AE78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19ae78;
        }
    }
    ctx->pc = 0x19AE94u;
label_19ae94:
    // 0x19ae94: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x19ae94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_19ae98:
    // 0x19ae98: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19ae98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19ae9c:
    // 0x19ae9c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x19ae9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_19aea0:
    // 0x19aea0: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_19aea4:
    if (ctx->pc == 0x19AEA4u) {
        ctx->pc = 0x19AEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AEA0u;
        // 0x19aea4: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AEA8u;
        goto label_19aea8;
    }
    ctx->pc = 0x19AEA0u;
    {
        const bool branch_taken_0x19aea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19AEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AEA0u;
        // 0x19aea4: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aea0) {
            ctx->pc = 0x19AE50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19ae50;
        }
    }
    ctx->pc = 0x19AEA8u;
label_19aea8:
    // 0x19aea8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x19aea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_19aeac:
    // 0x19aeac: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x19aeacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_19aeb0:
    // 0x19aeb0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x19aeb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_19aeb4:
    // 0x19aeb4: 0x54620001  bnel        $v1, $v0, . + 4 + (0x1 << 2)
label_19aeb8:
    if (ctx->pc == 0x19AEB8u) {
        ctx->pc = 0x19AEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AEB4u;
        // 0x19aeb8: 0xae130010  sw          $s3, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AEBCu;
        goto label_19aebc;
    }
    ctx->pc = 0x19AEB4u;
    {
        const bool branch_taken_0x19aeb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19aeb4) {
            ctx->pc = 0x19AEB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19AEB4u;
            // 0x19aeb8: 0xae130010  sw          $s3, 0x10($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19AEBCu;
            goto label_19aebc;
        }
    }
    ctx->pc = 0x19AEBCu;
label_19aebc:
    // 0x19aebc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19aebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19aec0:
    // 0x19aec0: 0x2403fff3  addiu       $v1, $zero, -0xD
    ctx->pc = 0x19aec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
label_19aec4:
    // 0x19aec4: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x19aec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_19aec8:
    // 0x19aec8: 0xae140020  sw          $s4, 0x20($s0)
    ctx->pc = 0x19aec8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 20));
label_19aecc:
    // 0x19aecc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x19aeccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_19aed0:
    // 0x19aed0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x19aed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_19aed4:
    // 0x19aed4: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x19aed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_19aed8:
    // 0x19aed8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x19aed8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_19aedc:
    // 0x19aedc: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x19aedcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_19aee0:
    // 0x19aee0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x19aee0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19aee4:
    // 0x19aee4: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x19aee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_19aee8:
    // 0x19aee8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x19aee8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19aeec:
    // 0x19aeec: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x19aeecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_19aef0:
    // 0x19aef0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x19aef0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19aef4:
    // 0x19aef4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19aef4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19aef8:
    // 0x19aef8: 0x3e00008  jr          $ra
label_19aefc:
    if (ctx->pc == 0x19AEFCu) {
        ctx->pc = 0x19AEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AEF8u;
        // 0x19aefc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AF00u;
        goto label_19af00;
    }
    ctx->pc = 0x19AEF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19AEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AEF8u;
        // 0x19aefc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19AEF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19AF00u;
label_19af00:
    // 0x19af00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19af00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_19af04:
    // 0x19af04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19af04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19af08:
    // 0x19af08: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x19af08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_19af0c:
    // 0x19af0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19af0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19af10:
    // 0x19af10: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19af10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19af14:
    // 0x19af14: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x19af14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_19af18:
    // 0x19af18: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x19af18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_19af1c:
    // 0x19af1c: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
label_19af20:
    if (ctx->pc == 0x19AF20u) {
        ctx->pc = 0x19AF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AF1Cu;
        // 0x19af20: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AF24u;
        goto label_19af24;
    }
    ctx->pc = 0x19AF1Cu;
    {
        const bool branch_taken_0x19af1c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x19AF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AF1Cu;
        // 0x19af20: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19af1c) {
            ctx->pc = 0x19AF34u;
            goto label_19af34;
        }
    }
    ctx->pc = 0x19AF24u;
label_19af24:
    // 0x19af24: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x19af24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_19af28:
    // 0x19af28: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x19af28u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_19af2c:
    // 0x19af2c: 0x1000001f  b           . + 4 + (0x1F << 2)
label_19af30:
    if (ctx->pc == 0x19AF30u) {
        ctx->pc = 0x19AF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AF2Cu;
        // 0x19af30: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AF34u;
        goto label_19af34;
    }
    ctx->pc = 0x19AF2Cu;
    {
        const bool branch_taken_0x19af2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AF2Cu;
        // 0x19af30: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19af2c) {
            ctx->pc = 0x19AFACu;
            goto label_19afac;
        }
    }
    ctx->pc = 0x19AF34u;
label_19af34:
    // 0x19af34: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x19af34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_19af38:
    // 0x19af38: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x19af38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_19af3c:
    // 0x19af3c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x19af3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_19af40:
    // 0x19af40: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_19af44:
    if (ctx->pc == 0x19AF44u) {
        ctx->pc = 0x19AF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AF40u;
        // 0x19af44: 0x70800a  movz        $s0, $v1, $s0 (Delay Slot)
        if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AF48u;
        goto label_19af48;
    }
    ctx->pc = 0x19AF40u;
    {
        const bool branch_taken_0x19af40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AF40u;
        // 0x19af44: 0x70800a  movz        $s0, $v1, $s0 (Delay Slot)
        if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19af40) {
            ctx->pc = 0x19AFA8u;
            goto label_19afa8;
        }
    }
    ctx->pc = 0x19AF48u;
label_19af48:
    // 0x19af48: 0x3c12002d  lui         $s2, 0x2D
    ctx->pc = 0x19af48u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)45 << 16));
label_19af4c:
    // 0x19af4c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x19af4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_19af50:
    // 0x19af50: 0x6010011  bgez        $s0, . + 4 + (0x11 << 2)
label_19af54:
    if (ctx->pc == 0x19AF54u) {
        ctx->pc = 0x19AF58u;
        goto label_19af58;
    }
    ctx->pc = 0x19AF50u;
    {
        const bool branch_taken_0x19af50 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x19af50) {
            ctx->pc = 0x19AF98u;
            goto label_19af98;
        }
    }
    ctx->pc = 0x19AF58u;
label_19af58:
    // 0x19af58: 0xc08ee2e  jal         func_23B8B8
label_19af5c:
    if (ctx->pc == 0x19AF5Cu) {
        ctx->pc = 0x19AF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AF58u;
        // 0x19af5c: 0x26449f90  addiu       $a0, $s2, -0x6070 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294942608));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AF60u;
        goto label_19af60;
    }
    ctx->pc = 0x19AF58u;
    SET_GPR_U32(ctx, 31, 0x19AF60u);
    ctx->pc = 0x19AF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AF58u;
    // 0x19af5c: 0x26449f90  addiu       $a0, $s2, -0x6070 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294942608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8B8u;
    { ctx->pc = 0x23b8b8; return; }
    ctx->pc = 0x19AF60u;
label_19af60:
    // 0x19af60: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x19af60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_19af64:
    // 0x19af64: 0x41202  srl         $v0, $a0, 8
    ctx->pc = 0x19af64u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
label_19af68:
    // 0x19af68: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19af68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_19af6c:
    // 0x19af6c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_19af70:
    if (ctx->pc == 0x19AF70u) {
        ctx->pc = 0x19AF74u;
        goto label_19af74;
    }
    ctx->pc = 0x19AF6Cu;
    {
        const bool branch_taken_0x19af6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19af6c) {
            ctx->pc = 0x19AF98u;
            goto label_19af98;
        }
    }
    ctx->pc = 0x19AF74u;
label_19af74:
    // 0x19af74: 0x2405feff  addiu       $a1, $zero, -0x101
    ctx->pc = 0x19af74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
label_19af78:
    // 0x19af78: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x19af78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_19af7c:
    // 0x19af7c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19af7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19af80:
    // 0x19af80: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x19af80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_19af84:
    // 0x19af84: 0x0  nop
    ctx->pc = 0x19af84u;
    // NOP
label_19af88:
    // 0x19af88: 0x0  nop
    ctx->pc = 0x19af88u;
    // NOP
label_19af8c:
    // 0x19af8c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_19af90:
    if (ctx->pc == 0x19AF90u) {
        ctx->pc = 0x19AF94u;
        goto label_19af94;
    }
    ctx->pc = 0x19AF8Cu;
    {
        const bool branch_taken_0x19af8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19af8c) {
            ctx->pc = 0x19AF78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19af78;
        }
    }
    ctx->pc = 0x19AF94u;
label_19af94:
    // 0x19af94: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x19af94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_19af98:
    // 0x19af98: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x19af98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_19af9c:
    // 0x19af9c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x19af9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_19afa0:
    // 0x19afa0: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_19afa4:
    if (ctx->pc == 0x19AFA4u) {
        ctx->pc = 0x19AFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AFA0u;
        // 0x19afa4: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AFA8u;
        goto label_19afa8;
    }
    ctx->pc = 0x19AFA0u;
    {
        const bool branch_taken_0x19afa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19AFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AFA0u;
        // 0x19afa4: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19afa0) {
            ctx->pc = 0x19AF50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19af50;
        }
    }
    ctx->pc = 0x19AFA8u;
label_19afa8:
    // 0x19afa8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19afa8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19afac:
    // 0x19afac: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x19afacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19afb0:
    // 0x19afb0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x19afb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19afb4:
    // 0x19afb4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x19afb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19afb8:
    // 0x19afb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19afb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19afbc:
    // 0x19afbc: 0x3e00008  jr          $ra
label_19afc0:
    if (ctx->pc == 0x19AFC0u) {
        ctx->pc = 0x19AFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AFBCu;
        // 0x19afc0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AFC4u;
        goto label_19afc4;
    }
    ctx->pc = 0x19AFBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19AFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AFBCu;
        // 0x19afc0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19AFBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19AFC4u;
label_19afc4:
    // 0x19afc4: 0x0  nop
    ctx->pc = 0x19afc4u;
    // NOP
label_19afc8:
    // 0x19afc8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19afc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_19afcc:
    // 0x19afcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19afccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19afd0:
    // 0x19afd0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x19afd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_19afd4:
    // 0x19afd4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x19afd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_19afd8:
    // 0x19afd8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x19afd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19afdc:
    // 0x19afdc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19afdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19afe0:
    // 0x19afe0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19afe0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19afe4:
    // 0x19afe4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x19afe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_19afe8:
    // 0x19afe8: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x19afe8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_19afec:
    // 0x19afec: 0x14c20004  bne         $a2, $v0, . + 4 + (0x4 << 2)
label_19aff0:
    if (ctx->pc == 0x19AFF0u) {
        ctx->pc = 0x19AFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AFECu;
        // 0x19aff0: 0xffb30030  sd          $s3, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AFF4u;
        goto label_19aff4;
    }
    ctx->pc = 0x19AFECu;
    {
        const bool branch_taken_0x19afec = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x19AFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AFECu;
        // 0x19aff0: 0xffb30030  sd          $s3, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19afec) {
            ctx->pc = 0x19B000u;
            goto label_19b000;
        }
    }
    ctx->pc = 0x19AFF4u;
label_19aff4:
    // 0x19aff4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x19aff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_19aff8:
    // 0x19aff8: 0x10000020  b           . + 4 + (0x20 << 2)
label_19affc:
    if (ctx->pc == 0x19AFFCu) {
        ctx->pc = 0x19AFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AFF8u;
        // 0x19affc: 0x52102b  sltu        $v0, $v0, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B000u;
        goto label_19b000;
    }
    ctx->pc = 0x19AFF8u;
    {
        const bool branch_taken_0x19aff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AFF8u;
        // 0x19affc: 0x52102b  sltu        $v0, $v0, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19aff8) {
            ctx->pc = 0x19B07Cu;
            { ctx->pc = 0x19b07c; return; }
        }
    }
    ctx->pc = 0x19B000u;
label_19b000:
    // 0x19b000: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x19b000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_19b004:
    // 0x19b004: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x19b004u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_19b008:
    // 0x19b008: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x19b008u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_19b00c:
    // 0x19b00c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_19b010:
    if (ctx->pc == 0x19B010u) {
        ctx->pc = 0x19B010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B00Cu;
        // 0x19b010: 0x70800a  movz        $s0, $v1, $s0 (Delay Slot)
        if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B014u;
        goto label_19b014;
    }
    ctx->pc = 0x19B00Cu;
    {
        const bool branch_taken_0x19b00c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B00Cu;
        // 0x19b010: 0x70800a  movz        $s0, $v1, $s0 (Delay Slot)
        if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b00c) {
            ctx->pc = 0x19B078u;
            { ctx->pc = 0x19b078; return; }
        }
    }
    ctx->pc = 0x19B014u;
label_19b014:
    // 0x19b014: 0x3c13002d  lui         $s3, 0x2D
    ctx->pc = 0x19b014u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)45 << 16));
label_19b018:
    // 0x19b018: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x19b018u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_19b01c:
    // 0x19b01c: 0x0  nop
    ctx->pc = 0x19b01cu;
    // NOP
    ctx->pc = 0x19b020u;
    return;
}

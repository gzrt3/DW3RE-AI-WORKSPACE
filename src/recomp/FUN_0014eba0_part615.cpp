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


void FUN_0014eba0_part615(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x27a880u: goto label_27a880;
        case 0x27a884u: goto label_27a884;
        case 0x27a888u: goto label_27a888;
        case 0x27a88cu: goto label_27a88c;
        case 0x27a890u: goto label_27a890;
        case 0x27a894u: goto label_27a894;
        case 0x27a898u: goto label_27a898;
        case 0x27a89cu: goto label_27a89c;
        case 0x27a8a0u: goto label_27a8a0;
        case 0x27a8a4u: goto label_27a8a4;
        case 0x27a8a8u: goto label_27a8a8;
        case 0x27a8acu: goto label_27a8ac;
        case 0x27a8b0u: goto label_27a8b0;
        case 0x27a8b4u: goto label_27a8b4;
        case 0x27a8b8u: goto label_27a8b8;
        case 0x27a8bcu: goto label_27a8bc;
        case 0x27a8c0u: goto label_27a8c0;
        case 0x27a8c4u: goto label_27a8c4;
        case 0x27a8c8u: goto label_27a8c8;
        case 0x27a8ccu: goto label_27a8cc;
        case 0x27a8d0u: goto label_27a8d0;
        case 0x27a8d4u: goto label_27a8d4;
        case 0x27a8d8u: goto label_27a8d8;
        case 0x27a8dcu: goto label_27a8dc;
        case 0x27a8e0u: goto label_27a8e0;
        case 0x27a8e4u: goto label_27a8e4;
        case 0x27a8e8u: goto label_27a8e8;
        case 0x27a8ecu: goto label_27a8ec;
        case 0x27a8f0u: goto label_27a8f0;
        case 0x27a8f4u: goto label_27a8f4;
        case 0x27a8f8u: goto label_27a8f8;
        case 0x27a8fcu: goto label_27a8fc;
        case 0x27a900u: goto label_27a900;
        case 0x27a904u: goto label_27a904;
        case 0x27a908u: goto label_27a908;
        case 0x27a90cu: goto label_27a90c;
        case 0x27a910u: goto label_27a910;
        case 0x27a914u: goto label_27a914;
        case 0x27a918u: goto label_27a918;
        case 0x27a91cu: goto label_27a91c;
        case 0x27a920u: goto label_27a920;
        case 0x27a924u: goto label_27a924;
        case 0x27a928u: goto label_27a928;
        case 0x27a92cu: goto label_27a92c;
        case 0x27a930u: goto label_27a930;
        case 0x27a934u: goto label_27a934;
        case 0x27a938u: goto label_27a938;
        case 0x27a93cu: goto label_27a93c;
        case 0x27a940u: goto label_27a940;
        case 0x27a944u: goto label_27a944;
        case 0x27a948u: goto label_27a948;
        case 0x27a94cu: goto label_27a94c;
        case 0x27a950u: goto label_27a950;
        case 0x27a954u: goto label_27a954;
        case 0x27a958u: goto label_27a958;
        case 0x27a95cu: goto label_27a95c;
        case 0x27a960u: goto label_27a960;
        case 0x27a964u: goto label_27a964;
        case 0x27a968u: goto label_27a968;
        case 0x27a96cu: goto label_27a96c;
        case 0x27a970u: goto label_27a970;
        case 0x27a974u: goto label_27a974;
        case 0x27a978u: goto label_27a978;
        case 0x27a97cu: goto label_27a97c;
        case 0x27a980u: goto label_27a980;
        case 0x27a984u: goto label_27a984;
        case 0x27a988u: goto label_27a988;
        case 0x27a98cu: goto label_27a98c;
        case 0x27a990u: goto label_27a990;
        case 0x27a994u: goto label_27a994;
        case 0x27a998u: goto label_27a998;
        case 0x27a99cu: goto label_27a99c;
        case 0x27a9a0u: goto label_27a9a0;
        case 0x27a9a4u: goto label_27a9a4;
        case 0x27a9a8u: goto label_27a9a8;
        case 0x27a9acu: goto label_27a9ac;
        case 0x27a9b0u: goto label_27a9b0;
        case 0x27a9b4u: goto label_27a9b4;
        case 0x27a9b8u: goto label_27a9b8;
        case 0x27a9bcu: goto label_27a9bc;
        case 0x27a9c0u: goto label_27a9c0;
        case 0x27a9c4u: goto label_27a9c4;
        case 0x27a9c8u: goto label_27a9c8;
        case 0x27a9ccu: goto label_27a9cc;
        case 0x27a9d0u: goto label_27a9d0;
        case 0x27a9d4u: goto label_27a9d4;
        case 0x27a9d8u: goto label_27a9d8;
        case 0x27a9dcu: goto label_27a9dc;
        case 0x27a9e0u: goto label_27a9e0;
        case 0x27a9e4u: goto label_27a9e4;
        case 0x27a9e8u: goto label_27a9e8;
        case 0x27a9ecu: goto label_27a9ec;
        case 0x27a9f0u: goto label_27a9f0;
        case 0x27a9f4u: goto label_27a9f4;
        case 0x27a9f8u: goto label_27a9f8;
        case 0x27a9fcu: goto label_27a9fc;
        case 0x27aa00u: goto label_27aa00;
        case 0x27aa04u: goto label_27aa04;
        case 0x27aa08u: goto label_27aa08;
        case 0x27aa0cu: goto label_27aa0c;
        case 0x27aa10u: goto label_27aa10;
        case 0x27aa14u: goto label_27aa14;
        case 0x27aa18u: goto label_27aa18;
        case 0x27aa1cu: goto label_27aa1c;
        case 0x27aa20u: goto label_27aa20;
        case 0x27aa24u: goto label_27aa24;
        case 0x27aa28u: goto label_27aa28;
        case 0x27aa2cu: goto label_27aa2c;
        case 0x27aa30u: goto label_27aa30;
        case 0x27aa34u: goto label_27aa34;
        case 0x27aa38u: goto label_27aa38;
        case 0x27aa3cu: goto label_27aa3c;
        case 0x27aa40u: goto label_27aa40;
        case 0x27aa44u: goto label_27aa44;
        case 0x27aa48u: goto label_27aa48;
        case 0x27aa4cu: goto label_27aa4c;
        case 0x27aa50u: goto label_27aa50;
        case 0x27aa54u: goto label_27aa54;
        case 0x27aa58u: goto label_27aa58;
        case 0x27aa5cu: goto label_27aa5c;
        case 0x27aa60u: goto label_27aa60;
        case 0x27aa64u: goto label_27aa64;
        case 0x27aa68u: goto label_27aa68;
        case 0x27aa6cu: goto label_27aa6c;
        case 0x27aa70u: goto label_27aa70;
        case 0x27aa74u: goto label_27aa74;
        case 0x27aa78u: goto label_27aa78;
        case 0x27aa7cu: goto label_27aa7c;
        case 0x27aa80u: goto label_27aa80;
        case 0x27aa84u: goto label_27aa84;
        case 0x27aa88u: goto label_27aa88;
        case 0x27aa8cu: goto label_27aa8c;
        case 0x27aa90u: goto label_27aa90;
        case 0x27aa94u: goto label_27aa94;
        case 0x27aa98u: goto label_27aa98;
        case 0x27aa9cu: goto label_27aa9c;
        case 0x27aaa0u: goto label_27aaa0;
        case 0x27aaa4u: goto label_27aaa4;
        case 0x27aaa8u: goto label_27aaa8;
        case 0x27aaacu: goto label_27aaac;
        case 0x27aab0u: goto label_27aab0;
        case 0x27aab4u: goto label_27aab4;
        case 0x27aab8u: goto label_27aab8;
        case 0x27aabcu: goto label_27aabc;
        case 0x27aac0u: goto label_27aac0;
        case 0x27aac4u: goto label_27aac4;
        case 0x27aac8u: goto label_27aac8;
        case 0x27aaccu: goto label_27aacc;
        case 0x27aad0u: goto label_27aad0;
        case 0x27aad4u: goto label_27aad4;
        case 0x27aad8u: goto label_27aad8;
        case 0x27aadcu: goto label_27aadc;
        case 0x27aae0u: goto label_27aae0;
        case 0x27aae4u: goto label_27aae4;
        case 0x27aae8u: goto label_27aae8;
        case 0x27aaecu: goto label_27aaec;
        case 0x27aaf0u: goto label_27aaf0;
        case 0x27aaf4u: goto label_27aaf4;
        case 0x27aaf8u: goto label_27aaf8;
        case 0x27aafcu: goto label_27aafc;
        case 0x27ab00u: goto label_27ab00;
        case 0x27ab04u: goto label_27ab04;
        case 0x27ab08u: goto label_27ab08;
        case 0x27ab0cu: goto label_27ab0c;
        case 0x27ab10u: goto label_27ab10;
        case 0x27ab14u: goto label_27ab14;
        case 0x27ab18u: goto label_27ab18;
        case 0x27ab1cu: goto label_27ab1c;
        case 0x27ab20u: goto label_27ab20;
        case 0x27ab24u: goto label_27ab24;
        case 0x27ab28u: goto label_27ab28;
        case 0x27ab2cu: goto label_27ab2c;
        case 0x27ab30u: goto label_27ab30;
        case 0x27ab34u: goto label_27ab34;
        case 0x27ab38u: goto label_27ab38;
        case 0x27ab3cu: goto label_27ab3c;
        case 0x27ab40u: goto label_27ab40;
        case 0x27ab44u: goto label_27ab44;
        case 0x27ab48u: goto label_27ab48;
        case 0x27ab4cu: goto label_27ab4c;
        case 0x27ab50u: goto label_27ab50;
        case 0x27ab54u: goto label_27ab54;
        case 0x27ab58u: goto label_27ab58;
        case 0x27ab5cu: goto label_27ab5c;
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
        default: return;
    }

label_27a880:
    // 0x27a880: 0x1161f  .word       0x0001161F                   # ddivu       $v0, $zero, $at # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a880u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x27A880 raw=0x0001161F");
 /* MITIGATED */
label_27a884:
    // 0x27a884: 0xa0f0  tge         $zero, $zero, 643
    ctx->pc = 0x27a884u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27a888:
    // 0x27a888: 0x0  nop
    ctx->pc = 0x27a888u;
    // NOP
label_27a88c:
    // 0x27a88c: 0x0  nop
    ctx->pc = 0x27a88cu;
    // NOP
label_27a890:
    // 0x27a890: 0x11634  teq         $zero, $at, 88
    ctx->pc = 0x27a890u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27a894:
    // 0x27a894: 0x38b0  tge         $zero, $zero, 226
    ctx->pc = 0x27a894u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27a898:
    // 0x27a898: 0x0  nop
    ctx->pc = 0x27a898u;
    // NOP
label_27a89c:
    // 0x27a89c: 0x0  nop
    ctx->pc = 0x27a89cu;
    // NOP
label_27a8a0:
    // 0x27a8a0: 0x1163c  dsll32      $v0, $at, 24
    ctx->pc = 0x27a8a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 1) << (32 + 24));
label_27a8a4:
    // 0x27a8a4: 0x3310  .word       0x00003310                   # mfhi        $a2 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a8a4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_27a8a8:
    // 0x27a8a8: 0x0  nop
    ctx->pc = 0x27a8a8u;
    // NOP
label_27a8ac:
    // 0x27a8ac: 0x0  nop
    ctx->pc = 0x27a8acu;
    // NOP
label_27a8b0:
    // 0x27a8b0: 0x11643  sra         $v0, $at, 25
    ctx->pc = 0x27a8b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 1), 25));
label_27a8b4:
    // 0x27a8b4: 0x3880  sll         $a3, $zero, 2
    ctx->pc = 0x27a8b4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_27a8b8:
    // 0x27a8b8: 0x0  nop
    ctx->pc = 0x27a8b8u;
    // NOP
label_27a8bc:
    // 0x27a8bc: 0x0  nop
    ctx->pc = 0x27a8bcu;
    // NOP
label_27a8c0:
    // 0x27a8c0: 0x1164b  .word       0x0001164B                   # movn        $v0, $zero, $at # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a8c0u;
    if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_27a8c4:
    // 0x27a8c4: 0x4070  tge         $zero, $zero, 257
    ctx->pc = 0x27a8c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27a8c8:
    // 0x27a8c8: 0x0  nop
    ctx->pc = 0x27a8c8u;
    // NOP
label_27a8cc:
    // 0x27a8cc: 0x0  nop
    ctx->pc = 0x27a8ccu;
    // NOP
label_27a8d0:
    // 0x27a8d0: 0x11654  .word       0x00011654                   # dsllv       $v0, $at, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a8d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 1) << (GPR_U32(ctx, 0) & 0x3F));
label_27a8d4:
    // 0x27a8d4: 0x3ef0  tge         $zero, $zero, 251
    ctx->pc = 0x27a8d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27a8d8:
    // 0x27a8d8: 0x0  nop
    ctx->pc = 0x27a8d8u;
    // NOP
label_27a8dc:
    // 0x27a8dc: 0x0  nop
    ctx->pc = 0x27a8dcu;
    // NOP
label_27a8e0:
    // 0x27a8e0: 0x1165c  .word       0x0001165C                   # dmult       $zero, $at # 00001640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a8e0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x27A8E0 raw=0x0001165C");
 /* MITIGATED */
label_27a8e4:
    // 0x27a8e4: 0x4210  .word       0x00004210                   # mfhi        $t0 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a8e4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_27a8e8:
    // 0x27a8e8: 0x0  nop
    ctx->pc = 0x27a8e8u;
    // NOP
label_27a8ec:
    // 0x27a8ec: 0x0  nop
    ctx->pc = 0x27a8ecu;
    // NOP
label_27a8f0:
    // 0x27a8f0: 0x11665  .word       0x00011665                   # or          $v0, $zero, $at # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a8f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | GPR_U64(ctx, 1));
label_27a8f4:
    // 0x27a8f4: 0x4250  .word       0x00004250                   # mfhi        $t0 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a8f4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_27a8f8:
    // 0x27a8f8: 0x0  nop
    ctx->pc = 0x27a8f8u;
    // NOP
label_27a8fc:
    // 0x27a8fc: 0x0  nop
    ctx->pc = 0x27a8fcu;
    // NOP
label_27a900:
    // 0x27a900: 0x1166e  .word       0x0001166E                   # dsub        $v0, $zero, $at # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a900u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, r); }
label_27a904:
    // 0x27a904: 0x3de0  .word       0x00003DE0                   # add         $a3, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a904u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_27a908:
    // 0x27a908: 0x0  nop
    ctx->pc = 0x27a908u;
    // NOP
label_27a90c:
    // 0x27a90c: 0x0  nop
    ctx->pc = 0x27a90cu;
    // NOP
label_27a910:
    // 0x27a910: 0x11676  tne         $zero, $at, 89
    ctx->pc = 0x27a910u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27a914:
    // 0x27a914: 0x3980  sll         $a3, $zero, 6
    ctx->pc = 0x27a914u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
label_27a918:
    // 0x27a918: 0x0  nop
    ctx->pc = 0x27a918u;
    // NOP
label_27a91c:
    // 0x27a91c: 0x0  nop
    ctx->pc = 0x27a91cu;
    // NOP
label_27a920:
    // 0x27a920: 0x1167e  dsrl32      $v0, $at, 25
    ctx->pc = 0x27a920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 1) >> (32 + 25));
label_27a924:
    // 0x27a924: 0x2cf0  tge         $zero, $zero, 179
    ctx->pc = 0x27a924u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27a928:
    // 0x27a928: 0x0  nop
    ctx->pc = 0x27a928u;
    // NOP
label_27a92c:
    // 0x27a92c: 0x0  nop
    ctx->pc = 0x27a92cu;
    // NOP
label_27a930:
    // 0x27a930: 0x11684  .word       0x00011684                   # sllv        $v0, $at, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a930u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27a934:
    // 0x27a934: 0x2b70  tge         $zero, $zero, 173
    ctx->pc = 0x27a934u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27a938:
    // 0x27a938: 0x0  nop
    ctx->pc = 0x27a938u;
    // NOP
label_27a93c:
    // 0x27a93c: 0x0  nop
    ctx->pc = 0x27a93cu;
    // NOP
label_27a940:
    // 0x27a940: 0x1168a  .word       0x0001168A                   # movz        $v0, $zero, $at # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a940u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_27a944:
    // 0x27a944: 0x7000  sll         $t6, $zero, 0
    ctx->pc = 0x27a944u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_27a948:
    // 0x27a948: 0x0  nop
    ctx->pc = 0x27a948u;
    // NOP
label_27a94c:
    // 0x27a94c: 0x0  nop
    ctx->pc = 0x27a94cu;
    // NOP
label_27a950:
    // 0x27a950: 0x11698  .word       0x00011698                   # mult        $v0, $zero, $at # 00000680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x27a950u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_27a954:
    // 0x27a954: 0x4220  .word       0x00004220                   # add         $t0, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a954u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_27a958:
    // 0x27a958: 0x0  nop
    ctx->pc = 0x27a958u;
    // NOP
label_27a95c:
    // 0x27a95c: 0x0  nop
    ctx->pc = 0x27a95cu;
    // NOP
label_27a960:
    // 0x27a960: 0x116a1  .word       0x000116A1                   # addu        $v0, $zero, $at # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_27a964:
    // 0x27a964: 0x3780  sll         $a2, $zero, 30
    ctx->pc = 0x27a964u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 30));
label_27a968:
    // 0x27a968: 0x0  nop
    ctx->pc = 0x27a968u;
    // NOP
label_27a96c:
    // 0x27a96c: 0x0  nop
    ctx->pc = 0x27a96cu;
    // NOP
label_27a970:
    // 0x27a970: 0x116a8  .word       0x000116A8                   # mfsa        $v0 # 00010680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x27a970u;
    SET_GPR_U32(ctx, 2, ctx->sa);
label_27a974:
    // 0x27a974: 0x7e30  tge         $zero, $zero, 504
    ctx->pc = 0x27a974u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27a978:
    // 0x27a978: 0x0  nop
    ctx->pc = 0x27a978u;
    // NOP
label_27a97c:
    // 0x27a97c: 0x0  nop
    ctx->pc = 0x27a97cu;
    // NOP
label_27a980:
    // 0x27a980: 0x116b8  dsll        $v0, $at, 26
    ctx->pc = 0x27a980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 1) << 26);
label_27a984:
    // 0x27a984: 0x5780  sll         $t2, $zero, 30
    ctx->pc = 0x27a984u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 30));
label_27a988:
    // 0x27a988: 0x0  nop
    ctx->pc = 0x27a988u;
    // NOP
label_27a98c:
    // 0x27a98c: 0x0  nop
    ctx->pc = 0x27a98cu;
    // NOP
label_27a990:
    // 0x27a990: 0x116c3  sra         $v0, $at, 27
    ctx->pc = 0x27a990u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 1), 27));
label_27a994:
    // 0x27a994: 0x3c20  .word       0x00003C20                   # add         $a3, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a994u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_27a998:
    // 0x27a998: 0x0  nop
    ctx->pc = 0x27a998u;
    // NOP
label_27a99c:
    // 0x27a99c: 0x0  nop
    ctx->pc = 0x27a99cu;
    // NOP
label_27a9a0:
    // 0x27a9a0: 0x116cb  .word       0x000116CB                   # movn        $v0, $zero, $at # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a9a0u;
    if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_27a9a4:
    // 0x27a9a4: 0x3a90  .word       0x00003A90                   # mfhi        $a3 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a9a4u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_27a9a8:
    // 0x27a9a8: 0x0  nop
    ctx->pc = 0x27a9a8u;
    // NOP
label_27a9ac:
    // 0x27a9ac: 0x0  nop
    ctx->pc = 0x27a9acu;
    // NOP
label_27a9b0:
    // 0x27a9b0: 0x116d3  .word       0x000116D3                   # mtlo        $zero # 000116C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a9b0u;
    ctx->lo = GPR_U64(ctx, 0);
label_27a9b4:
    // 0x27a9b4: 0x4a30  tge         $zero, $zero, 296
    ctx->pc = 0x27a9b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27a9b8:
    // 0x27a9b8: 0x0  nop
    ctx->pc = 0x27a9b8u;
    // NOP
label_27a9bc:
    // 0x27a9bc: 0x0  nop
    ctx->pc = 0x27a9bcu;
    // NOP
label_27a9c0:
    // 0x27a9c0: 0x116dd  .word       0x000116DD                   # dmultu      $zero, $at # 000016C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a9c0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x27A9C0 raw=0x000116DD");
 /* MITIGATED */
label_27a9c4:
    // 0x27a9c4: 0x3b80  sll         $a3, $zero, 14
    ctx->pc = 0x27a9c4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 14));
label_27a9c8:
    // 0x27a9c8: 0x0  nop
    ctx->pc = 0x27a9c8u;
    // NOP
label_27a9cc:
    // 0x27a9cc: 0x0  nop
    ctx->pc = 0x27a9ccu;
    // NOP
label_27a9d0:
    // 0x27a9d0: 0x116e5  .word       0x000116E5                   # or          $v0, $zero, $at # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a9d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | GPR_U64(ctx, 1));
label_27a9d4:
    // 0x27a9d4: 0x3dc0  sll         $a3, $zero, 23
    ctx->pc = 0x27a9d4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_27a9d8:
    // 0x27a9d8: 0x0  nop
    ctx->pc = 0x27a9d8u;
    // NOP
label_27a9dc:
    // 0x27a9dc: 0x0  nop
    ctx->pc = 0x27a9dcu;
    // NOP
label_27a9e0:
    // 0x27a9e0: 0x116ed  .word       0x000116ED                   # daddu       $v0, $zero, $at # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a9e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_27a9e4:
    // 0x27a9e4: 0x5820  add         $t3, $zero, $zero
    ctx->pc = 0x27a9e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_27a9e8:
    // 0x27a9e8: 0x0  nop
    ctx->pc = 0x27a9e8u;
    // NOP
label_27a9ec:
    // 0x27a9ec: 0x0  nop
    ctx->pc = 0x27a9ecu;
    // NOP
label_27a9f0:
    // 0x27a9f0: 0x116f9  .word       0x000116F9                   # INVALID     $zero, $at, 0x16F9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a9f0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x27A9F0 raw=0x000116F9");
 /* MITIGATED */
label_27a9f4:
    // 0x27a9f4: 0x3760  .word       0x00003760                   # add         $a2, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a9f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_27a9f8:
    // 0x27a9f8: 0x0  nop
    ctx->pc = 0x27a9f8u;
    // NOP
label_27a9fc:
    // 0x27a9fc: 0x0  nop
    ctx->pc = 0x27a9fcu;
    // NOP
label_27aa00:
    // 0x27aa00: 0x11700  sll         $v0, $at, 28
    ctx->pc = 0x27aa00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 1), 28));
label_27aa04:
    // 0x27aa04: 0x4450  .word       0x00004450                   # mfhi        $t0 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27aa04u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_27aa08:
    // 0x27aa08: 0x0  nop
    ctx->pc = 0x27aa08u;
    // NOP
label_27aa0c:
    // 0x27aa0c: 0x0  nop
    ctx->pc = 0x27aa0cu;
    // NOP
label_27aa10:
    // 0x27aa10: 0x11709  .word       0x00011709                   # jalr        $v0, $zero # 00010700 <InstrIdType: CPU_SPECIAL>
label_27aa14:
    if (ctx->pc == 0x27AA14u) {
        ctx->pc = 0x27AA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AA10u;
        // 0x27aa14: 0x48c0  sll         $t1, $zero, 3 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27AA18u;
        goto label_27aa18;
    }
    ctx->pc = 0x27AA10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 2, 0x27AA18u);
        ctx->pc = 0x27AA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AA10u;
        // 0x27aa14: 0x48c0  sll         $t1, $zero, 3 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27AA10u, 0x27AA18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27AA18u;
label_27aa18:
    // 0x27aa18: 0x0  nop
    ctx->pc = 0x27aa18u;
    // NOP
label_27aa1c:
    // 0x27aa1c: 0x0  nop
    ctx->pc = 0x27aa1cu;
    // NOP
label_27aa20:
    // 0x27aa20: 0x11713  .word       0x00011713                   # mtlo        $zero # 00011700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27aa20u;
    ctx->lo = GPR_U64(ctx, 0);
label_27aa24:
    // 0x27aa24: 0x4c20  .word       0x00004C20                   # add         $t1, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27aa24u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_27aa28:
    // 0x27aa28: 0x0  nop
    ctx->pc = 0x27aa28u;
    // NOP
label_27aa2c:
    // 0x27aa2c: 0x0  nop
    ctx->pc = 0x27aa2cu;
    // NOP
label_27aa30:
    // 0x27aa30: 0x1171d  .word       0x0001171D                   # dmultu      $zero, $at # 00001700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27aa30u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x27AA30 raw=0x0001171D");
 /* MITIGATED */
label_27aa34:
    // 0x27aa34: 0x2cf0  tge         $zero, $zero, 179
    ctx->pc = 0x27aa34u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27aa38:
    // 0x27aa38: 0x0  nop
    ctx->pc = 0x27aa38u;
    // NOP
label_27aa3c:
    // 0x27aa3c: 0x0  nop
    ctx->pc = 0x27aa3cu;
    // NOP
label_27aa40:
    // 0x27aa40: 0x11723  .word       0x00011723                   # negu        $v0, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27aa40u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_27aa44:
    // 0x27aa44: 0x5760  .word       0x00005760                   # add         $t2, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27aa44u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_27aa48:
    // 0x27aa48: 0x0  nop
    ctx->pc = 0x27aa48u;
    // NOP
label_27aa4c:
    // 0x27aa4c: 0x0  nop
    ctx->pc = 0x27aa4cu;
    // NOP
label_27aa50:
    // 0x27aa50: 0x1172e  .word       0x0001172E                   # dsub        $v0, $zero, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27aa50u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, r); }
label_27aa54:
    // 0x27aa54: 0x5520  .word       0x00005520                   # add         $t2, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27aa54u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_27aa58:
    // 0x27aa58: 0x0  nop
    ctx->pc = 0x27aa58u;
    // NOP
label_27aa5c:
    // 0x27aa5c: 0x0  nop
    ctx->pc = 0x27aa5cu;
    // NOP
label_27aa60:
    // 0x27aa60: 0x11739  .word       0x00011739                   # INVALID     $zero, $at, 0x1739 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27aa60u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x27AA60 raw=0x00011739");
 /* MITIGATED */
label_27aa64:
    // 0x27aa64: 0x4b20  .word       0x00004B20                   # add         $t1, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27aa64u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_27aa68:
    // 0x27aa68: 0x0  nop
    ctx->pc = 0x27aa68u;
    // NOP
label_27aa6c:
    // 0x27aa6c: 0x0  nop
    ctx->pc = 0x27aa6cu;
    // NOP
label_27aa70:
    // 0x27aa70: 0x11743  sra         $v0, $at, 29
    ctx->pc = 0x27aa70u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 1), 29));
label_27aa74:
    // 0x27aa74: 0x2040  sll         $a0, $zero, 1
    ctx->pc = 0x27aa74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_27aa78:
    // 0x27aa78: 0x0  nop
    ctx->pc = 0x27aa78u;
    // NOP
label_27aa7c:
    // 0x27aa7c: 0x0  nop
    ctx->pc = 0x27aa7cu;
    // NOP
label_27aa80:
    // 0x27aa80: 0x11748  .word       0x00011748                   # jr          $zero # 00011740 <InstrIdType: CPU_SPECIAL>
label_27aa84:
    if (ctx->pc == 0x27AA84u) {
        ctx->pc = 0x27AA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AA80u;
        // 0x27aa84: 0x3ee0  .word       0x00003EE0                   # add         $a3, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27AA88u;
        goto label_27aa88;
    }
    ctx->pc = 0x27AA80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x27AA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AA80u;
        // 0x27aa84: 0x3ee0  .word       0x00003EE0                   # add         $a3, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27AA80u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x27AA88u;
label_27aa88:
    // 0x27aa88: 0x0  nop
    ctx->pc = 0x27aa88u;
    // NOP
label_27aa8c:
    // 0x27aa8c: 0x0  nop
    ctx->pc = 0x27aa8cu;
    // NOP
label_27aa90:
    // 0x27aa90: 0x11750  .word       0x00011750                   # mfhi        $v0 # 00010740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27aa90u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_27aa94:
    // 0x27aa94: 0xd1f0  tge         $zero, $zero, 839
    ctx->pc = 0x27aa94u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27aa98:
    // 0x27aa98: 0x0  nop
    ctx->pc = 0x27aa98u;
    // NOP
label_27aa9c:
    // 0x27aa9c: 0x0  nop
    ctx->pc = 0x27aa9cu;
    // NOP
label_27aaa0:
    // 0x27aaa0: 0x1176b  .word       0x0001176B                   # sltu        $v0, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27aaa0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_27aaa4:
    // 0x27aaa4: 0x3720  .word       0x00003720                   # add         $a2, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27aaa4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_27aaa8:
    // 0x27aaa8: 0x0  nop
    ctx->pc = 0x27aaa8u;
    // NOP
label_27aaac:
    // 0x27aaac: 0x0  nop
    ctx->pc = 0x27aaacu;
    // NOP
label_27aab0:
    // 0x27aab0: 0x11772  tlt         $zero, $at, 93
    ctx->pc = 0x27aab0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27aab4:
    // 0x27aab4: 0x39c0  sll         $a3, $zero, 7
    ctx->pc = 0x27aab4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_27aab8:
    // 0x27aab8: 0x0  nop
    ctx->pc = 0x27aab8u;
    // NOP
label_27aabc:
    // 0x27aabc: 0x0  nop
    ctx->pc = 0x27aabcu;
    // NOP
label_27aac0:
    // 0x27aac0: 0x1177a  dsrl        $v0, $at, 29
    ctx->pc = 0x27aac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 1) >> 29);
label_27aac4:
    // 0x27aac4: 0x8a60  .word       0x00008A60                   # add         $s1, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27aac4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_27aac8:
    // 0x27aac8: 0x0  nop
    ctx->pc = 0x27aac8u;
    // NOP
label_27aacc:
    // 0x27aacc: 0x0  nop
    ctx->pc = 0x27aaccu;
    // NOP
label_27aad0:
    // 0x27aad0: 0x1178c  .word       0x0001178C                   # syscall     94 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27aad0u;
    ctx->pc = 0x27AAD4u;
runtime->handleSyscall(rdram, ctx, 0x45Eu);
label_27aad4:
    // 0x27aad4: 0xa0d0  .word       0x0000A0D0                   # mfhi        $s4 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27aad4u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_27aad8:
    // 0x27aad8: 0x0  nop
    ctx->pc = 0x27aad8u;
    // NOP
label_27aadc:
    // 0x27aadc: 0x0  nop
    ctx->pc = 0x27aadcu;
    // NOP
label_27aae0:
    // 0x27aae0: 0x117a1  .word       0x000117A1                   # addu        $v0, $zero, $at # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27aae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_27aae4:
    // 0x27aae4: 0x7840  sll         $t7, $zero, 1
    ctx->pc = 0x27aae4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_27aae8:
    // 0x27aae8: 0x0  nop
    ctx->pc = 0x27aae8u;
    // NOP
label_27aaec:
    // 0x27aaec: 0x0  nop
    ctx->pc = 0x27aaecu;
    // NOP
label_27aaf0:
    // 0x27aaf0: 0x117b1  tgeu        $zero, $at, 94
    ctx->pc = 0x27aaf0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27aaf4:
    // 0x27aaf4: 0x88f0  tge         $zero, $zero, 547
    ctx->pc = 0x27aaf4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27aaf8:
    // 0x27aaf8: 0x0  nop
    ctx->pc = 0x27aaf8u;
    // NOP
label_27aafc:
    // 0x27aafc: 0x0  nop
    ctx->pc = 0x27aafcu;
    // NOP
label_27ab00:
    // 0x27ab00: 0x117c3  sra         $v0, $at, 31
    ctx->pc = 0x27ab00u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 1), 31));
label_27ab04:
    // 0x27ab04: 0x83a0  .word       0x000083A0                   # add         $s0, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ab04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_27ab08:
    // 0x27ab08: 0x0  nop
    ctx->pc = 0x27ab08u;
    // NOP
label_27ab0c:
    // 0x27ab0c: 0x0  nop
    ctx->pc = 0x27ab0cu;
    // NOP
label_27ab10:
    // 0x27ab10: 0x117d4  .word       0x000117D4                   # dsllv       $v0, $at, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ab10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 1) << (GPR_U32(ctx, 0) & 0x3F));
label_27ab14:
    // 0x27ab14: 0xade0  .word       0x0000ADE0                   # add         $s5, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ab14u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_27ab18:
    // 0x27ab18: 0x0  nop
    ctx->pc = 0x27ab18u;
    // NOP
label_27ab1c:
    // 0x27ab1c: 0x0  nop
    ctx->pc = 0x27ab1cu;
    // NOP
label_27ab20:
    // 0x27ab20: 0x117ea  .word       0x000117EA                   # slt         $v0, $zero, $at # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ab20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_27ab24:
    // 0x27ab24: 0xaa50  .word       0x0000AA50                   # mfhi        $s5 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ab24u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_27ab28:
    // 0x27ab28: 0x0  nop
    ctx->pc = 0x27ab28u;
    // NOP
label_27ab2c:
    // 0x27ab2c: 0x0  nop
    ctx->pc = 0x27ab2cu;
    // NOP
label_27ab30:
    // 0x27ab30: 0x11800  sll         $v1, $at, 0
    ctx->pc = 0x27ab30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 1), 0));
label_27ab34:
    // 0x27ab34: 0x65c0  sll         $t4, $zero, 23
    ctx->pc = 0x27ab34u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_27ab38:
    // 0x27ab38: 0x0  nop
    ctx->pc = 0x27ab38u;
    // NOP
label_27ab3c:
    // 0x27ab3c: 0x0  nop
    ctx->pc = 0x27ab3cu;
    // NOP
label_27ab40:
    // 0x27ab40: 0x1180d  break       1, 96
    ctx->pc = 0x27ab40u;
    runtime->handleBreak(rdram, ctx);
label_27ab44:
    // 0x27ab44: 0xa010  mfhi        $s4
    ctx->pc = 0x27ab44u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_27ab48:
    // 0x27ab48: 0x0  nop
    ctx->pc = 0x27ab48u;
    // NOP
label_27ab4c:
    // 0x27ab4c: 0x0  nop
    ctx->pc = 0x27ab4cu;
    // NOP
label_27ab50:
    // 0x27ab50: 0x11822  neg         $v1, $at
    ctx->pc = 0x27ab50u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 1), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
label_27ab54:
    // 0x27ab54: 0x9080  sll         $s2, $zero, 2
    ctx->pc = 0x27ab54u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_27ab58:
    // 0x27ab58: 0x0  nop
    ctx->pc = 0x27ab58u;
    // NOP
label_27ab5c:
    // 0x27ab5c: 0x0  nop
    ctx->pc = 0x27ab5cu;
    // NOP
label_27ab60:
    // 0x27ab60: 0x11835  .word       0x00011835                   # INVALID     $zero, $at, 0x1835 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27ab60u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x27AB60 raw=0x00011835");
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x27AC30 raw=0x0001191C");
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x27ACB0 raw=0x000119B7");
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x27ACD0 raw=0x000119DE");
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x27AD30 raw=0x00011A45");
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x27ADB0 raw=0x00011ADD");
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x27AE60 raw=0x00011BB5");
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x27AE70 raw=0x00011BCE");
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x27AE90 raw=0x00011BF5");
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x27AED0 raw=0x00011C45");
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x27AFA0 raw=0x00011D41");
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x27AFC0 raw=0x00011D5E");
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
    ctx->pc = 0x27b050u;
    return;
}

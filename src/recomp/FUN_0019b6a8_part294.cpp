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


void FUN_0019b6a8_part294(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x22a7b8u: goto label_22a7b8;
        case 0x22a7bcu: goto label_22a7bc;
        case 0x22a7c0u: goto label_22a7c0;
        case 0x22a7c4u: goto label_22a7c4;
        case 0x22a7c8u: goto label_22a7c8;
        case 0x22a7ccu: goto label_22a7cc;
        case 0x22a7d0u: goto label_22a7d0;
        case 0x22a7d4u: goto label_22a7d4;
        case 0x22a7d8u: goto label_22a7d8;
        case 0x22a7dcu: goto label_22a7dc;
        case 0x22a7e0u: goto label_22a7e0;
        case 0x22a7e4u: goto label_22a7e4;
        case 0x22a7e8u: goto label_22a7e8;
        case 0x22a7ecu: goto label_22a7ec;
        case 0x22a7f0u: goto label_22a7f0;
        case 0x22a7f4u: goto label_22a7f4;
        case 0x22a7f8u: goto label_22a7f8;
        case 0x22a7fcu: goto label_22a7fc;
        case 0x22a800u: goto label_22a800;
        case 0x22a804u: goto label_22a804;
        case 0x22a808u: goto label_22a808;
        case 0x22a80cu: goto label_22a80c;
        case 0x22a810u: goto label_22a810;
        case 0x22a814u: goto label_22a814;
        case 0x22a818u: goto label_22a818;
        case 0x22a81cu: goto label_22a81c;
        case 0x22a820u: goto label_22a820;
        case 0x22a824u: goto label_22a824;
        case 0x22a828u: goto label_22a828;
        case 0x22a82cu: goto label_22a82c;
        case 0x22a830u: goto label_22a830;
        case 0x22a834u: goto label_22a834;
        case 0x22a838u: goto label_22a838;
        case 0x22a83cu: goto label_22a83c;
        case 0x22a840u: goto label_22a840;
        case 0x22a844u: goto label_22a844;
        case 0x22a848u: goto label_22a848;
        case 0x22a84cu: goto label_22a84c;
        case 0x22a850u: goto label_22a850;
        case 0x22a854u: goto label_22a854;
        case 0x22a858u: goto label_22a858;
        case 0x22a85cu: goto label_22a85c;
        case 0x22a860u: goto label_22a860;
        case 0x22a864u: goto label_22a864;
        case 0x22a868u: goto label_22a868;
        case 0x22a86cu: goto label_22a86c;
        case 0x22a870u: goto label_22a870;
        case 0x22a874u: goto label_22a874;
        case 0x22a878u: goto label_22a878;
        case 0x22a87cu: goto label_22a87c;
        case 0x22a880u: goto label_22a880;
        case 0x22a884u: goto label_22a884;
        case 0x22a888u: goto label_22a888;
        case 0x22a88cu: goto label_22a88c;
        case 0x22a890u: goto label_22a890;
        case 0x22a894u: goto label_22a894;
        case 0x22a898u: goto label_22a898;
        case 0x22a89cu: goto label_22a89c;
        case 0x22a8a0u: goto label_22a8a0;
        case 0x22a8a4u: goto label_22a8a4;
        case 0x22a8a8u: goto label_22a8a8;
        case 0x22a8acu: goto label_22a8ac;
        case 0x22a8b0u: goto label_22a8b0;
        case 0x22a8b4u: goto label_22a8b4;
        case 0x22a8b8u: goto label_22a8b8;
        case 0x22a8bcu: goto label_22a8bc;
        case 0x22a8c0u: goto label_22a8c0;
        case 0x22a8c4u: goto label_22a8c4;
        case 0x22a8c8u: goto label_22a8c8;
        case 0x22a8ccu: goto label_22a8cc;
        case 0x22a8d0u: goto label_22a8d0;
        case 0x22a8d4u: goto label_22a8d4;
        case 0x22a8d8u: goto label_22a8d8;
        case 0x22a8dcu: goto label_22a8dc;
        case 0x22a8e0u: goto label_22a8e0;
        case 0x22a8e4u: goto label_22a8e4;
        case 0x22a8e8u: goto label_22a8e8;
        case 0x22a8ecu: goto label_22a8ec;
        case 0x22a8f0u: goto label_22a8f0;
        case 0x22a8f4u: goto label_22a8f4;
        case 0x22a8f8u: goto label_22a8f8;
        case 0x22a8fcu: goto label_22a8fc;
        case 0x22a900u: goto label_22a900;
        case 0x22a904u: goto label_22a904;
        case 0x22a908u: goto label_22a908;
        case 0x22a90cu: goto label_22a90c;
        case 0x22a910u: goto label_22a910;
        case 0x22a914u: goto label_22a914;
        case 0x22a918u: goto label_22a918;
        case 0x22a91cu: goto label_22a91c;
        case 0x22a920u: goto label_22a920;
        case 0x22a924u: goto label_22a924;
        case 0x22a928u: goto label_22a928;
        case 0x22a92cu: goto label_22a92c;
        case 0x22a930u: goto label_22a930;
        case 0x22a934u: goto label_22a934;
        case 0x22a938u: goto label_22a938;
        case 0x22a93cu: goto label_22a93c;
        case 0x22a940u: goto label_22a940;
        case 0x22a944u: goto label_22a944;
        case 0x22a948u: goto label_22a948;
        case 0x22a94cu: goto label_22a94c;
        case 0x22a950u: goto label_22a950;
        case 0x22a954u: goto label_22a954;
        case 0x22a958u: goto label_22a958;
        case 0x22a95cu: goto label_22a95c;
        case 0x22a960u: goto label_22a960;
        case 0x22a964u: goto label_22a964;
        case 0x22a968u: goto label_22a968;
        case 0x22a96cu: goto label_22a96c;
        case 0x22a970u: goto label_22a970;
        case 0x22a974u: goto label_22a974;
        case 0x22a978u: goto label_22a978;
        case 0x22a97cu: goto label_22a97c;
        case 0x22a980u: goto label_22a980;
        case 0x22a984u: goto label_22a984;
        case 0x22a988u: goto label_22a988;
        case 0x22a98cu: goto label_22a98c;
        case 0x22a990u: goto label_22a990;
        case 0x22a994u: goto label_22a994;
        case 0x22a998u: goto label_22a998;
        case 0x22a99cu: goto label_22a99c;
        case 0x22a9a0u: goto label_22a9a0;
        case 0x22a9a4u: goto label_22a9a4;
        case 0x22a9a8u: goto label_22a9a8;
        case 0x22a9acu: goto label_22a9ac;
        case 0x22a9b0u: goto label_22a9b0;
        case 0x22a9b4u: goto label_22a9b4;
        case 0x22a9b8u: goto label_22a9b8;
        case 0x22a9bcu: goto label_22a9bc;
        case 0x22a9c0u: goto label_22a9c0;
        case 0x22a9c4u: goto label_22a9c4;
        case 0x22a9c8u: goto label_22a9c8;
        case 0x22a9ccu: goto label_22a9cc;
        case 0x22a9d0u: goto label_22a9d0;
        case 0x22a9d4u: goto label_22a9d4;
        case 0x22a9d8u: goto label_22a9d8;
        case 0x22a9dcu: goto label_22a9dc;
        case 0x22a9e0u: goto label_22a9e0;
        case 0x22a9e4u: goto label_22a9e4;
        case 0x22a9e8u: goto label_22a9e8;
        case 0x22a9ecu: goto label_22a9ec;
        case 0x22a9f0u: goto label_22a9f0;
        case 0x22a9f4u: goto label_22a9f4;
        case 0x22a9f8u: goto label_22a9f8;
        case 0x22a9fcu: goto label_22a9fc;
        case 0x22aa00u: goto label_22aa00;
        case 0x22aa04u: goto label_22aa04;
        case 0x22aa08u: goto label_22aa08;
        case 0x22aa0cu: goto label_22aa0c;
        case 0x22aa10u: goto label_22aa10;
        case 0x22aa14u: goto label_22aa14;
        case 0x22aa18u: goto label_22aa18;
        case 0x22aa1cu: goto label_22aa1c;
        case 0x22aa20u: goto label_22aa20;
        case 0x22aa24u: goto label_22aa24;
        case 0x22aa28u: goto label_22aa28;
        case 0x22aa2cu: goto label_22aa2c;
        case 0x22aa30u: goto label_22aa30;
        case 0x22aa34u: goto label_22aa34;
        case 0x22aa38u: goto label_22aa38;
        case 0x22aa3cu: goto label_22aa3c;
        case 0x22aa40u: goto label_22aa40;
        case 0x22aa44u: goto label_22aa44;
        case 0x22aa48u: goto label_22aa48;
        case 0x22aa4cu: goto label_22aa4c;
        case 0x22aa50u: goto label_22aa50;
        case 0x22aa54u: goto label_22aa54;
        case 0x22aa58u: goto label_22aa58;
        case 0x22aa5cu: goto label_22aa5c;
        case 0x22aa60u: goto label_22aa60;
        case 0x22aa64u: goto label_22aa64;
        case 0x22aa68u: goto label_22aa68;
        case 0x22aa6cu: goto label_22aa6c;
        case 0x22aa70u: goto label_22aa70;
        case 0x22aa74u: goto label_22aa74;
        case 0x22aa78u: goto label_22aa78;
        case 0x22aa7cu: goto label_22aa7c;
        case 0x22aa80u: goto label_22aa80;
        case 0x22aa84u: goto label_22aa84;
        case 0x22aa88u: goto label_22aa88;
        case 0x22aa8cu: goto label_22aa8c;
        case 0x22aa90u: goto label_22aa90;
        case 0x22aa94u: goto label_22aa94;
        case 0x22aa98u: goto label_22aa98;
        case 0x22aa9cu: goto label_22aa9c;
        case 0x22aaa0u: goto label_22aaa0;
        case 0x22aaa4u: goto label_22aaa4;
        case 0x22aaa8u: goto label_22aaa8;
        case 0x22aaacu: goto label_22aaac;
        case 0x22aab0u: goto label_22aab0;
        case 0x22aab4u: goto label_22aab4;
        case 0x22aab8u: goto label_22aab8;
        case 0x22aabcu: goto label_22aabc;
        case 0x22aac0u: goto label_22aac0;
        case 0x22aac4u: goto label_22aac4;
        case 0x22aac8u: goto label_22aac8;
        case 0x22aaccu: goto label_22aacc;
        case 0x22aad0u: goto label_22aad0;
        case 0x22aad4u: goto label_22aad4;
        case 0x22aad8u: goto label_22aad8;
        case 0x22aadcu: goto label_22aadc;
        case 0x22aae0u: goto label_22aae0;
        case 0x22aae4u: goto label_22aae4;
        case 0x22aae8u: goto label_22aae8;
        case 0x22aaecu: goto label_22aaec;
        case 0x22aaf0u: goto label_22aaf0;
        case 0x22aaf4u: goto label_22aaf4;
        case 0x22aaf8u: goto label_22aaf8;
        case 0x22aafcu: goto label_22aafc;
        case 0x22ab00u: goto label_22ab00;
        case 0x22ab04u: goto label_22ab04;
        case 0x22ab08u: goto label_22ab08;
        case 0x22ab0cu: goto label_22ab0c;
        case 0x22ab10u: goto label_22ab10;
        case 0x22ab14u: goto label_22ab14;
        case 0x22ab18u: goto label_22ab18;
        case 0x22ab1cu: goto label_22ab1c;
        case 0x22ab20u: goto label_22ab20;
        case 0x22ab24u: goto label_22ab24;
        case 0x22ab28u: goto label_22ab28;
        case 0x22ab2cu: goto label_22ab2c;
        case 0x22ab30u: goto label_22ab30;
        case 0x22ab34u: goto label_22ab34;
        case 0x22ab38u: goto label_22ab38;
        case 0x22ab3cu: goto label_22ab3c;
        case 0x22ab40u: goto label_22ab40;
        case 0x22ab44u: goto label_22ab44;
        case 0x22ab48u: goto label_22ab48;
        case 0x22ab4cu: goto label_22ab4c;
        case 0x22ab50u: goto label_22ab50;
        case 0x22ab54u: goto label_22ab54;
        case 0x22ab58u: goto label_22ab58;
        case 0x22ab5cu: goto label_22ab5c;
        case 0x22ab60u: goto label_22ab60;
        case 0x22ab64u: goto label_22ab64;
        case 0x22ab68u: goto label_22ab68;
        case 0x22ab6cu: goto label_22ab6c;
        case 0x22ab70u: goto label_22ab70;
        case 0x22ab74u: goto label_22ab74;
        case 0x22ab78u: goto label_22ab78;
        case 0x22ab7cu: goto label_22ab7c;
        case 0x22ab80u: goto label_22ab80;
        case 0x22ab84u: goto label_22ab84;
        case 0x22ab88u: goto label_22ab88;
        case 0x22ab8cu: goto label_22ab8c;
        case 0x22ab90u: goto label_22ab90;
        case 0x22ab94u: goto label_22ab94;
        case 0x22ab98u: goto label_22ab98;
        case 0x22ab9cu: goto label_22ab9c;
        case 0x22aba0u: goto label_22aba0;
        case 0x22aba4u: goto label_22aba4;
        case 0x22aba8u: goto label_22aba8;
        case 0x22abacu: goto label_22abac;
        case 0x22abb0u: goto label_22abb0;
        case 0x22abb4u: goto label_22abb4;
        case 0x22abb8u: goto label_22abb8;
        case 0x22abbcu: goto label_22abbc;
        case 0x22abc0u: goto label_22abc0;
        case 0x22abc4u: goto label_22abc4;
        case 0x22abc8u: goto label_22abc8;
        case 0x22abccu: goto label_22abcc;
        case 0x22abd0u: goto label_22abd0;
        case 0x22abd4u: goto label_22abd4;
        case 0x22abd8u: goto label_22abd8;
        case 0x22abdcu: goto label_22abdc;
        case 0x22abe0u: goto label_22abe0;
        case 0x22abe4u: goto label_22abe4;
        case 0x22abe8u: goto label_22abe8;
        case 0x22abecu: goto label_22abec;
        case 0x22abf0u: goto label_22abf0;
        case 0x22abf4u: goto label_22abf4;
        case 0x22abf8u: goto label_22abf8;
        case 0x22abfcu: goto label_22abfc;
        case 0x22ac00u: goto label_22ac00;
        case 0x22ac04u: goto label_22ac04;
        case 0x22ac08u: goto label_22ac08;
        case 0x22ac0cu: goto label_22ac0c;
        case 0x22ac10u: goto label_22ac10;
        case 0x22ac14u: goto label_22ac14;
        case 0x22ac18u: goto label_22ac18;
        case 0x22ac1cu: goto label_22ac1c;
        case 0x22ac20u: goto label_22ac20;
        case 0x22ac24u: goto label_22ac24;
        case 0x22ac28u: goto label_22ac28;
        case 0x22ac2cu: goto label_22ac2c;
        case 0x22ac30u: goto label_22ac30;
        case 0x22ac34u: goto label_22ac34;
        case 0x22ac38u: goto label_22ac38;
        case 0x22ac3cu: goto label_22ac3c;
        case 0x22ac40u: goto label_22ac40;
        case 0x22ac44u: goto label_22ac44;
        case 0x22ac48u: goto label_22ac48;
        case 0x22ac4cu: goto label_22ac4c;
        case 0x22ac50u: goto label_22ac50;
        case 0x22ac54u: goto label_22ac54;
        case 0x22ac58u: goto label_22ac58;
        case 0x22ac5cu: goto label_22ac5c;
        case 0x22ac60u: goto label_22ac60;
        case 0x22ac64u: goto label_22ac64;
        case 0x22ac68u: goto label_22ac68;
        case 0x22ac6cu: goto label_22ac6c;
        case 0x22ac70u: goto label_22ac70;
        case 0x22ac74u: goto label_22ac74;
        case 0x22ac78u: goto label_22ac78;
        case 0x22ac7cu: goto label_22ac7c;
        case 0x22ac80u: goto label_22ac80;
        case 0x22ac84u: goto label_22ac84;
        case 0x22ac88u: goto label_22ac88;
        case 0x22ac8cu: goto label_22ac8c;
        case 0x22ac90u: goto label_22ac90;
        case 0x22ac94u: goto label_22ac94;
        case 0x22ac98u: goto label_22ac98;
        case 0x22ac9cu: goto label_22ac9c;
        case 0x22aca0u: goto label_22aca0;
        case 0x22aca4u: goto label_22aca4;
        case 0x22aca8u: goto label_22aca8;
        case 0x22acacu: goto label_22acac;
        case 0x22acb0u: goto label_22acb0;
        case 0x22acb4u: goto label_22acb4;
        case 0x22acb8u: goto label_22acb8;
        case 0x22acbcu: goto label_22acbc;
        case 0x22acc0u: goto label_22acc0;
        case 0x22acc4u: goto label_22acc4;
        case 0x22acc8u: goto label_22acc8;
        case 0x22acccu: goto label_22accc;
        case 0x22acd0u: goto label_22acd0;
        case 0x22acd4u: goto label_22acd4;
        case 0x22acd8u: goto label_22acd8;
        case 0x22acdcu: goto label_22acdc;
        case 0x22ace0u: goto label_22ace0;
        case 0x22ace4u: goto label_22ace4;
        case 0x22ace8u: goto label_22ace8;
        case 0x22acecu: goto label_22acec;
        case 0x22acf0u: goto label_22acf0;
        case 0x22acf4u: goto label_22acf4;
        case 0x22acf8u: goto label_22acf8;
        case 0x22acfcu: goto label_22acfc;
        case 0x22ad00u: goto label_22ad00;
        case 0x22ad04u: goto label_22ad04;
        case 0x22ad08u: goto label_22ad08;
        case 0x22ad0cu: goto label_22ad0c;
        case 0x22ad10u: goto label_22ad10;
        case 0x22ad14u: goto label_22ad14;
        case 0x22ad18u: goto label_22ad18;
        case 0x22ad1cu: goto label_22ad1c;
        case 0x22ad20u: goto label_22ad20;
        case 0x22ad24u: goto label_22ad24;
        case 0x22ad28u: goto label_22ad28;
        case 0x22ad2cu: goto label_22ad2c;
        case 0x22ad30u: goto label_22ad30;
        case 0x22ad34u: goto label_22ad34;
        case 0x22ad38u: goto label_22ad38;
        case 0x22ad3cu: goto label_22ad3c;
        case 0x22ad40u: goto label_22ad40;
        case 0x22ad44u: goto label_22ad44;
        case 0x22ad48u: goto label_22ad48;
        case 0x22ad4cu: goto label_22ad4c;
        case 0x22ad50u: goto label_22ad50;
        case 0x22ad54u: goto label_22ad54;
        case 0x22ad58u: goto label_22ad58;
        case 0x22ad5cu: goto label_22ad5c;
        case 0x22ad60u: goto label_22ad60;
        case 0x22ad64u: goto label_22ad64;
        case 0x22ad68u: goto label_22ad68;
        case 0x22ad6cu: goto label_22ad6c;
        case 0x22ad70u: goto label_22ad70;
        case 0x22ad74u: goto label_22ad74;
        case 0x22ad78u: goto label_22ad78;
        case 0x22ad7cu: goto label_22ad7c;
        case 0x22ad80u: goto label_22ad80;
        case 0x22ad84u: goto label_22ad84;
        case 0x22ad88u: goto label_22ad88;
        case 0x22ad8cu: goto label_22ad8c;
        case 0x22ad90u: goto label_22ad90;
        case 0x22ad94u: goto label_22ad94;
        case 0x22ad98u: goto label_22ad98;
        case 0x22ad9cu: goto label_22ad9c;
        case 0x22ada0u: goto label_22ada0;
        case 0x22ada4u: goto label_22ada4;
        case 0x22ada8u: goto label_22ada8;
        case 0x22adacu: goto label_22adac;
        case 0x22adb0u: goto label_22adb0;
        case 0x22adb4u: goto label_22adb4;
        case 0x22adb8u: goto label_22adb8;
        case 0x22adbcu: goto label_22adbc;
        case 0x22adc0u: goto label_22adc0;
        case 0x22adc4u: goto label_22adc4;
        case 0x22adc8u: goto label_22adc8;
        case 0x22adccu: goto label_22adcc;
        case 0x22add0u: goto label_22add0;
        case 0x22add4u: goto label_22add4;
        case 0x22add8u: goto label_22add8;
        case 0x22addcu: goto label_22addc;
        case 0x22ade0u: goto label_22ade0;
        case 0x22ade4u: goto label_22ade4;
        case 0x22ade8u: goto label_22ade8;
        case 0x22adecu: goto label_22adec;
        case 0x22adf0u: goto label_22adf0;
        case 0x22adf4u: goto label_22adf4;
        case 0x22adf8u: goto label_22adf8;
        case 0x22adfcu: goto label_22adfc;
        case 0x22ae00u: goto label_22ae00;
        case 0x22ae04u: goto label_22ae04;
        case 0x22ae08u: goto label_22ae08;
        case 0x22ae0cu: goto label_22ae0c;
        case 0x22ae10u: goto label_22ae10;
        case 0x22ae14u: goto label_22ae14;
        case 0x22ae18u: goto label_22ae18;
        case 0x22ae1cu: goto label_22ae1c;
        case 0x22ae20u: goto label_22ae20;
        case 0x22ae24u: goto label_22ae24;
        case 0x22ae28u: goto label_22ae28;
        case 0x22ae2cu: goto label_22ae2c;
        case 0x22ae30u: goto label_22ae30;
        case 0x22ae34u: goto label_22ae34;
        case 0x22ae38u: goto label_22ae38;
        case 0x22ae3cu: goto label_22ae3c;
        case 0x22ae40u: goto label_22ae40;
        case 0x22ae44u: goto label_22ae44;
        case 0x22ae48u: goto label_22ae48;
        case 0x22ae4cu: goto label_22ae4c;
        case 0x22ae50u: goto label_22ae50;
        case 0x22ae54u: goto label_22ae54;
        case 0x22ae58u: goto label_22ae58;
        case 0x22ae5cu: goto label_22ae5c;
        case 0x22ae60u: goto label_22ae60;
        case 0x22ae64u: goto label_22ae64;
        case 0x22ae68u: goto label_22ae68;
        case 0x22ae6cu: goto label_22ae6c;
        case 0x22ae70u: goto label_22ae70;
        case 0x22ae74u: goto label_22ae74;
        case 0x22ae78u: goto label_22ae78;
        case 0x22ae7cu: goto label_22ae7c;
        case 0x22ae80u: goto label_22ae80;
        case 0x22ae84u: goto label_22ae84;
        case 0x22ae88u: goto label_22ae88;
        case 0x22ae8cu: goto label_22ae8c;
        case 0x22ae90u: goto label_22ae90;
        case 0x22ae94u: goto label_22ae94;
        case 0x22ae98u: goto label_22ae98;
        case 0x22ae9cu: goto label_22ae9c;
        case 0x22aea0u: goto label_22aea0;
        case 0x22aea4u: goto label_22aea4;
        case 0x22aea8u: goto label_22aea8;
        case 0x22aeacu: goto label_22aeac;
        case 0x22aeb0u: goto label_22aeb0;
        case 0x22aeb4u: goto label_22aeb4;
        case 0x22aeb8u: goto label_22aeb8;
        case 0x22aebcu: goto label_22aebc;
        case 0x22aec0u: goto label_22aec0;
        case 0x22aec4u: goto label_22aec4;
        case 0x22aec8u: goto label_22aec8;
        case 0x22aeccu: goto label_22aecc;
        case 0x22aed0u: goto label_22aed0;
        case 0x22aed4u: goto label_22aed4;
        case 0x22aed8u: goto label_22aed8;
        case 0x22aedcu: goto label_22aedc;
        case 0x22aee0u: goto label_22aee0;
        case 0x22aee4u: goto label_22aee4;
        case 0x22aee8u: goto label_22aee8;
        case 0x22aeecu: goto label_22aeec;
        case 0x22aef0u: goto label_22aef0;
        case 0x22aef4u: goto label_22aef4;
        case 0x22aef8u: goto label_22aef8;
        case 0x22aefcu: goto label_22aefc;
        case 0x22af00u: goto label_22af00;
        case 0x22af04u: goto label_22af04;
        case 0x22af08u: goto label_22af08;
        case 0x22af0cu: goto label_22af0c;
        case 0x22af10u: goto label_22af10;
        case 0x22af14u: goto label_22af14;
        case 0x22af18u: goto label_22af18;
        case 0x22af1cu: goto label_22af1c;
        case 0x22af20u: goto label_22af20;
        case 0x22af24u: goto label_22af24;
        case 0x22af28u: goto label_22af28;
        case 0x22af2cu: goto label_22af2c;
        case 0x22af30u: goto label_22af30;
        case 0x22af34u: goto label_22af34;
        case 0x22af38u: goto label_22af38;
        case 0x22af3cu: goto label_22af3c;
        case 0x22af40u: goto label_22af40;
        case 0x22af44u: goto label_22af44;
        case 0x22af48u: goto label_22af48;
        case 0x22af4cu: goto label_22af4c;
        case 0x22af50u: goto label_22af50;
        case 0x22af54u: goto label_22af54;
        case 0x22af58u: goto label_22af58;
        case 0x22af5cu: goto label_22af5c;
        case 0x22af60u: goto label_22af60;
        case 0x22af64u: goto label_22af64;
        case 0x22af68u: goto label_22af68;
        case 0x22af6cu: goto label_22af6c;
        case 0x22af70u: goto label_22af70;
        case 0x22af74u: goto label_22af74;
        case 0x22af78u: goto label_22af78;
        case 0x22af7cu: goto label_22af7c;
        case 0x22af80u: goto label_22af80;
        case 0x22af84u: goto label_22af84;
        default: return;
    }

label_22a7b8:
    // 0x22a7b8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x22a7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_22a7bc:
    // 0x22a7bc: 0x284100fa  slti        $at, $v0, 0xFA
    ctx->pc = 0x22a7bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)250) ? 1 : 0);
label_22a7c0:
    // 0x22a7c0: 0x81100a  movz        $v0, $a0, $at
    ctx->pc = 0x22a7c0u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_22a7c4:
    // 0x22a7c4: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x22a7c4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
label_22a7c8:
    // 0x22a7c8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x22a7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22a7cc:
    // 0x22a7cc: 0x3c021062  lui         $v0, 0x1062
    ctx->pc = 0x22a7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4194 << 16));
label_22a7d0:
    // 0x22a7d0: 0x938492ec  lbu         $a0, -0x6D14($gp)
    ctx->pc = 0x22a7d0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939372)));
label_22a7d4:
    // 0x22a7d4: 0x34424dd3  ori         $v0, $v0, 0x4DD3
    ctx->pc = 0x22a7d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19923);
label_22a7d8:
    // 0x22a7d8: 0x9065000f  lbu         $a1, 0xF($v1)
    ctx->pc = 0x22a7d8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 15)));
label_22a7dc:
    // 0x22a7dc: 0x2466000f  addiu       $a2, $v1, 0xF
    ctx->pc = 0x22a7dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
label_22a7e0:
    // 0x22a7e0: 0xa51818  mult        $v1, $a1, $a1
    ctx->pc = 0x22a7e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_22a7e4:
    // 0x22a7e4: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x22a7e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_22a7e8:
    // 0x22a7e8: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x22a7e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_22a7ec:
    // 0x22a7ec: 0x0  nop
    ctx->pc = 0x22a7ecu;
    // NOP
label_22a7f0:
    // 0x22a7f0: 0x0  nop
    ctx->pc = 0x22a7f0u;
    // NOP
label_22a7f4:
    // 0x22a7f4: 0x1010  mfhi        $v0
    ctx->pc = 0x22a7f4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_22a7f8:
    // 0x22a7f8: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x22a7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_22a7fc:
    // 0x22a7fc: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x22a7fcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_22a800:
    // 0x22a800: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22a800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22a804:
    // 0x22a804: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x22a804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_22a808:
    // 0x22a808: 0x284100fa  slti        $at, $v0, 0xFA
    ctx->pc = 0x22a808u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)250) ? 1 : 0);
label_22a80c:
    // 0x22a80c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_22a810:
    if (ctx->pc == 0x22A810u) {
        ctx->pc = 0x22A814u;
        goto label_22a814;
    }
    ctx->pc = 0x22A80Cu;
    {
        const bool branch_taken_0x22a80c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a80c) {
            ctx->pc = 0x22A81Cu;
            goto label_22a81c;
        }
    }
    ctx->pc = 0x22A814u;
label_22a814:
    // 0x22a814: 0x10000003  b           . + 4 + (0x3 << 2)
label_22a818:
    if (ctx->pc == 0x22A818u) {
        ctx->pc = 0x22A818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A814u;
        // 0x22a818: 0xa0c20000  sb          $v0, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A81Cu;
        goto label_22a81c;
    }
    ctx->pc = 0x22A814u;
    {
        const bool branch_taken_0x22a814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A814u;
        // 0x22a818: 0xa0c20000  sb          $v0, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a814) {
            ctx->pc = 0x22A824u;
            goto label_22a824;
        }
    }
    ctx->pc = 0x22A81Cu;
label_22a81c:
    // 0x22a81c: 0x240200fa  addiu       $v0, $zero, 0xFA
    ctx->pc = 0x22a81cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_22a820:
    // 0x22a820: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x22a820u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
label_22a824:
    // 0x22a824: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x22a824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22a828:
    // 0x22a828: 0x938392ec  lbu         $v1, -0x6D14($gp)
    ctx->pc = 0x22a828u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939372)));
label_22a82c:
    // 0x22a82c: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x22a82cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_22a830:
    // 0x22a830: 0x24450008  addiu       $a1, $v0, 0x8
    ctx->pc = 0x22a830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_22a834:
    // 0x22a834: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x22a834u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_22a838:
    // 0x22a838: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22a838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22a83c:
    // 0x22a83c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x22a83cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_22a840:
    // 0x22a840: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x22a840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_22a844:
    // 0x22a844: 0x28410190  slti        $at, $v0, 0x190
    ctx->pc = 0x22a844u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)400) ? 1 : 0);
label_22a848:
    // 0x22a848: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_22a84c:
    if (ctx->pc == 0x22A84Cu) {
        ctx->pc = 0x22A850u;
        goto label_22a850;
    }
    ctx->pc = 0x22A848u;
    {
        const bool branch_taken_0x22a848 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a848) {
            ctx->pc = 0x22A858u;
            goto label_22a858;
        }
    }
    ctx->pc = 0x22A850u;
label_22a850:
    // 0x22a850: 0x10000003  b           . + 4 + (0x3 << 2)
label_22a854:
    if (ctx->pc == 0x22A854u) {
        ctx->pc = 0x22A854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A850u;
        // 0x22a854: 0xa4a20000  sh          $v0, 0x0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A858u;
        goto label_22a858;
    }
    ctx->pc = 0x22A850u;
    {
        const bool branch_taken_0x22a850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A850u;
        // 0x22a854: 0xa4a20000  sh          $v0, 0x0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a850) {
            ctx->pc = 0x22A860u;
            goto label_22a860;
        }
    }
    ctx->pc = 0x22A858u;
label_22a858:
    // 0x22a858: 0x24020190  addiu       $v0, $zero, 0x190
    ctx->pc = 0x22a858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
label_22a85c:
    // 0x22a85c: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x22a85cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
label_22a860:
    // 0x22a860: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x22a860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22a864:
    // 0x22a864: 0x938292ec  lbu         $v0, -0x6D14($gp)
    ctx->pc = 0x22a864u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939372)));
label_22a868:
    // 0x22a868: 0x90650018  lbu         $a1, 0x18($v1)
    ctx->pc = 0x22a868u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 24)));
label_22a86c:
    // 0x22a86c: 0x24660018  addiu       $a2, $v1, 0x18
    ctx->pc = 0x22a86cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
label_22a870:
    // 0x22a870: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x22a870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_22a874:
    // 0x22a874: 0x22043  sra         $a0, $v0, 1
    ctx->pc = 0x22a874u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
label_22a878:
    // 0x22a878: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_22a87c:
    if (ctx->pc == 0x22A87Cu) {
        ctx->pc = 0x22A87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A878u;
        // 0x22a87c: 0x30a3000f  andi        $v1, $a1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A880u;
        goto label_22a880;
    }
    ctx->pc = 0x22A878u;
    {
        const bool branch_taken_0x22a878 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x22A87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A878u;
        // 0x22a87c: 0x30a3000f  andi        $v1, $a1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a878) {
            ctx->pc = 0x22A888u;
            goto label_22a888;
        }
    }
    ctx->pc = 0x22A880u;
label_22a880:
    // 0x22a880: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22a880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_22a884:
    // 0x22a884: 0x22043  sra         $a0, $v0, 1
    ctx->pc = 0x22a884u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
label_22a888:
    // 0x22a888: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x22a888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_22a88c:
    // 0x22a88c: 0x28610007  slti        $at, $v1, 0x7
    ctx->pc = 0x22a88cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
label_22a890:
    // 0x22a890: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_22a894:
    if (ctx->pc == 0x22A894u) {
        ctx->pc = 0x22A898u;
        goto label_22a898;
    }
    ctx->pc = 0x22A890u;
    {
        const bool branch_taken_0x22a890 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a890) {
            ctx->pc = 0x22A8A0u;
            goto label_22a8a0;
        }
    }
    ctx->pc = 0x22A898u;
label_22a898:
    // 0x22a898: 0x10000003  b           . + 4 + (0x3 << 2)
label_22a89c:
    if (ctx->pc == 0x22A89Cu) {
        ctx->pc = 0x22A89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A898u;
        // 0x22a89c: 0x51103  sra         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A8A0u;
        goto label_22a8a0;
    }
    ctx->pc = 0x22A898u;
    {
        const bool branch_taken_0x22a898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A898u;
        // 0x22a89c: 0x51103  sra         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a898) {
            ctx->pc = 0x22A8A8u;
            goto label_22a8a8;
        }
    }
    ctx->pc = 0x22A8A0u;
label_22a8a0:
    // 0x22a8a0: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x22a8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_22a8a4:
    // 0x22a8a4: 0x51103  sra         $v0, $a1, 4
    ctx->pc = 0x22a8a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 4));
label_22a8a8:
    // 0x22a8a8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x22a8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_22a8ac:
    // 0x22a8ac: 0x28410007  slti        $at, $v0, 0x7
    ctx->pc = 0x22a8acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)7) ? 1 : 0);
label_22a8b0:
    // 0x22a8b0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_22a8b4:
    if (ctx->pc == 0x22A8B4u) {
        ctx->pc = 0x22A8B8u;
        goto label_22a8b8;
    }
    ctx->pc = 0x22A8B0u;
    {
        const bool branch_taken_0x22a8b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a8b0) {
            ctx->pc = 0x22A8C0u;
            goto label_22a8c0;
        }
    }
    ctx->pc = 0x22A8B8u;
label_22a8b8:
    // 0x22a8b8: 0x10000003  b           . + 4 + (0x3 << 2)
label_22a8bc:
    if (ctx->pc == 0x22A8BCu) {
        ctx->pc = 0x22A8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A8B8u;
        // 0x22a8bc: 0x21100  sll         $v0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A8C0u;
        goto label_22a8c0;
    }
    ctx->pc = 0x22A8B8u;
    {
        const bool branch_taken_0x22a8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A8B8u;
        // 0x22a8bc: 0x21100  sll         $v0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a8b8) {
            ctx->pc = 0x22A8C8u;
            goto label_22a8c8;
        }
    }
    ctx->pc = 0x22A8C0u;
label_22a8c0:
    // 0x22a8c0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x22a8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_22a8c4:
    // 0x22a8c4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x22a8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_22a8c8:
    // 0x22a8c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22a8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22a8cc:
    // 0x22a8cc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x22a8ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_22a8d0:
    // 0x22a8d0: 0xc08aaa4  jal         func_22AA90
label_22a8d4:
    if (ctx->pc == 0x22A8D4u) {
        ctx->pc = 0x22A8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A8D0u;
        // 0x22a8d4: 0xa0c20000  sb          $v0, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A8D8u;
        goto label_22a8d8;
    }
    ctx->pc = 0x22A8D0u;
    SET_GPR_U32(ctx, 31, 0x22A8D8u);
    ctx->pc = 0x22A8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A8D0u;
    // 0x22a8d4: 0xa0c20000  sb          $v0, 0x0($a2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AA90u;
    goto label_22aa90;
    ctx->pc = 0x22A8D8u;
label_22a8d8:
    // 0x22a8d8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x22a8d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_22a8dc:
    // 0x22a8dc: 0x2a030058  slti        $v1, $s0, 0x58
    ctx->pc = 0x22a8dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)88) ? 1 : 0);
label_22a8e0:
    // 0x22a8e0: 0x1460ff8a  bnez        $v1, . + 4 + (-0x76 << 2)
label_22a8e4:
    if (ctx->pc == 0x22A8E4u) {
        ctx->pc = 0x22A8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A8E0u;
        // 0x22a8e4: 0x26310048  addiu       $s1, $s1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A8E8u;
        goto label_22a8e8;
    }
    ctx->pc = 0x22A8E0u;
    {
        const bool branch_taken_0x22a8e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A8E0u;
        // 0x22a8e4: 0x26310048  addiu       $s1, $s1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a8e0) {
            ctx->pc = 0x22A70Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x22a70c; return; }
        }
    }
    ctx->pc = 0x22A8E8u;
label_22a8e8:
    // 0x22a8e8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x22a8e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_22a8ec:
    // 0x22a8ec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22a8ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22a8f0:
    // 0x22a8f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22a8f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22a8f4:
    // 0x22a8f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22a8f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22a8f8:
    // 0x22a8f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22a8f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22a8fc:
    // 0x22a8fc: 0x3e00008  jr          $ra
label_22a900:
    if (ctx->pc == 0x22A900u) {
        ctx->pc = 0x22A900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A8FCu;
        // 0x22a900: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A904u;
        goto label_22a904;
    }
    ctx->pc = 0x22A8FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A8FCu;
        // 0x22a900: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A8FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22A904u;
label_22a904:
    // 0x22a904: 0x0  nop
    ctx->pc = 0x22a904u;
    // NOP
label_22a908:
    // 0x22a908: 0x0  nop
    ctx->pc = 0x22a908u;
    // NOP
label_22a90c:
    // 0x22a90c: 0x0  nop
    ctx->pc = 0x22a90cu;
    // NOP
label_22a910:
    // 0x22a910: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x22a910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_22a914:
    // 0x22a914: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x22a914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_22a918:
    // 0x22a918: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x22a918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_22a91c:
    // 0x22a91c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x22a91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_22a920:
    // 0x22a920: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x22a920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_22a924:
    // 0x22a924: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22a924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_22a928:
    // 0x22a928: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22a928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_22a92c:
    // 0x22a92c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22a92cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22a930:
    // 0x22a930: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x22a930u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22a934:
    // 0x22a934: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22a934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22a938:
    // 0x22a938: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x22a938u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22a93c:
    // 0x22a93c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22a93cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22a940:
    // 0x22a940: 0x26240001  addiu       $a0, $s1, 0x1
    ctx->pc = 0x22a940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_22a944:
    // 0x22a944: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x22a944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
label_22a948:
    // 0x22a948: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x22a948u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_22a94c:
    // 0x22a94c: 0x24422570  addiu       $v0, $v0, 0x2570
    ctx->pc = 0x22a94cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9584));
label_22a950:
    // 0x22a950: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x22a950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_22a954:
    // 0x22a954: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x22a954u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_22a958:
    // 0x22a958: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22a958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22a95c:
    // 0x22a95c: 0xc044894  jal         func_112250
label_22a960:
    if (ctx->pc == 0x22A960u) {
        ctx->pc = 0x22A960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A95Cu;
        // 0x22a960: 0x244447b8  addiu       $a0, $v0, 0x47B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 18360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A964u;
        goto label_22a964;
    }
    ctx->pc = 0x22A95Cu;
    SET_GPR_U32(ctx, 31, 0x22A964u);
    ctx->pc = 0x22A960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A95Cu;
    // 0x22a960: 0x244447b8  addiu       $a0, $v0, 0x47B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 18360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112250u, 0x22A95Cu, 0x22A964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A964u;
label_22a964:
    // 0x22a964: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_22a968:
    if (ctx->pc == 0x22A968u) {
        ctx->pc = 0x22A96Cu;
        goto label_22a96c;
    }
    ctx->pc = 0x22A964u;
    {
        const bool branch_taken_0x22a964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a964) {
            ctx->pc = 0x22A970u;
            goto label_22a970;
        }
    }
    ctx->pc = 0x22A96Cu;
label_22a96c:
    // 0x22a96c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x22a96cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_22a970:
    // 0x22a970: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x22a970u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_22a974:
    // 0x22a974: 0x2a230007  slti        $v1, $s1, 0x7
    ctx->pc = 0x22a974u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)7) ? 1 : 0);
label_22a978:
    // 0x22a978: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
label_22a97c:
    if (ctx->pc == 0x22A97Cu) {
        ctx->pc = 0x22A97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A978u;
        // 0x22a97c: 0x26240001  addiu       $a0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A980u;
        goto label_22a980;
    }
    ctx->pc = 0x22A978u;
    {
        const bool branch_taken_0x22a978 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A978u;
        // 0x22a97c: 0x26240001  addiu       $a0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a978) {
            ctx->pc = 0x22A944u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22a944;
        }
    }
    ctx->pc = 0x22A980u;
label_22a980:
    // 0x22a980: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x22a980u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22a984:
    // 0x22a984: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x22a984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22a988:
    // 0x22a988: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x22a988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_22a98c:
    // 0x22a98c: 0x9484000a  lhu         $a0, 0xA($a0)
    ctx->pc = 0x22a98cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
label_22a990:
    // 0x22a990: 0x10830031  beq         $a0, $v1, . + 4 + (0x31 << 2)
label_22a994:
    if (ctx->pc == 0x22A994u) {
        ctx->pc = 0x22A998u;
        goto label_22a998;
    }
    ctx->pc = 0x22A990u;
    {
        const bool branch_taken_0x22a990 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x22a990) {
            ctx->pc = 0x22AA58u;
            goto label_22aa58;
        }
    }
    ctx->pc = 0x22A998u;
label_22a998:
    // 0x22a998: 0xc08f0cc  jal         func_23C330
label_22a99c:
    if (ctx->pc == 0x22A99Cu) {
        ctx->pc = 0x22A9A0u;
        goto label_22a9a0;
    }
    ctx->pc = 0x22A998u;
    SET_GPR_U32(ctx, 31, 0x22A9A0u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x22A9A0u;
label_22a9a0:
    // 0x22a9a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22a9a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22a9a4:
    // 0x22a9a4: 0x3c15002f  lui         $s5, 0x2F
    ctx->pc = 0x22a9a4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)47 << 16));
label_22a9a8:
    // 0x22a9a8: 0x26b56d70  addiu       $s5, $s5, 0x6D70
    ctx->pc = 0x22a9a8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 28016));
label_22a9ac:
    // 0x22a9ac: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x22a9acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22a9b0:
    // 0x22a9b0: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x22a9b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_22a9b4:
    // 0x22a9b4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x22a9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_22a9b8:
    // 0x22a9b8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x22a9b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22a9bc:
    // 0x22a9bc: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x22a9bcu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22a9c0:
    // 0x22a9c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22a9c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22a9c4:
    // 0x22a9c4: 0x0  nop
    ctx->pc = 0x22a9c4u;
    // NOP
label_22a9c8:
    // 0x22a9c8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x22a9c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_22a9cc:
    // 0x22a9cc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x22a9ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_22a9d0:
    // 0x22a9d0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x22a9d0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_22a9d4:
    // 0x22a9d4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x22a9d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_22a9d8:
    // 0x22a9d8: 0x44140000  mfc1        $s4, $f0
    ctx->pc = 0x22a9d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 20, bits); }
label_22a9dc:
    // 0x22a9dc: 0x0  nop
    ctx->pc = 0x22a9dcu;
    // NOP
label_22a9e0:
    // 0x22a9e0: 0xc044894  jal         func_112250
label_22a9e4:
    if (ctx->pc == 0x22A9E4u) {
        ctx->pc = 0x22A9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A9E0u;
        // 0x22a9e4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A9E8u;
        goto label_22a9e8;
    }
    ctx->pc = 0x22A9E0u;
    SET_GPR_U32(ctx, 31, 0x22A9E8u);
    ctx->pc = 0x22A9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A9E0u;
    // 0x22a9e4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112250u, 0x22A9E0u, 0x22A9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A9E8u;
label_22a9e8:
    // 0x22a9e8: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_22a9ec:
    if (ctx->pc == 0x22A9ECu) {
        ctx->pc = 0x22A9F0u;
        goto label_22a9f0;
    }
    ctx->pc = 0x22A9E8u;
    {
        const bool branch_taken_0x22a9e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a9e8) {
            ctx->pc = 0x22AA44u;
            goto label_22aa44;
        }
    }
    ctx->pc = 0x22A9F0u;
label_22a9f0:
    // 0x22a9f0: 0x16740013  bne         $s3, $s4, . + 4 + (0x13 << 2)
label_22a9f4:
    if (ctx->pc == 0x22A9F4u) {
        ctx->pc = 0x22A9F8u;
        goto label_22a9f8;
    }
    ctx->pc = 0x22A9F0u;
    {
        const bool branch_taken_0x22a9f0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 20));
        if (branch_taken_0x22a9f0) {
            ctx->pc = 0x22AA40u;
            goto label_22aa40;
        }
    }
    ctx->pc = 0x22A9F8u;
label_22a9f8:
    // 0x22a9f8: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x22a9f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22a9fc:
    // 0x22a9fc: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x22a9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
label_22aa00:
    // 0x22aa00: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x22aa00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_22aa04:
    // 0x22aa04: 0x2484b4e0  addiu       $a0, $a0, -0x4B20
    ctx->pc = 0x22aa04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948064));
label_22aa08:
    // 0x22aa08: 0x94e6000a  lhu         $a2, 0xA($a3)
    ctx->pc = 0x22aa08u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
label_22aa0c:
    // 0x22aa0c: 0x9465000a  lhu         $a1, 0xA($v1)
    ctx->pc = 0x22aa0cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
label_22aa10:
    // 0x22aa10: 0xa4e5000a  sh          $a1, 0xA($a3)
    ctx->pc = 0x22aa10u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 10), (uint16_t)GPR_U32(ctx, 5));
label_22aa14:
    // 0x22aa14: 0x92030035  lbu         $v1, 0x35($s0)
    ctx->pc = 0x22aa14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 53)));
label_22aa18:
    // 0x22aa18: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x22aa18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_22aa1c:
    // 0x22aa1c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x22aa1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_22aa20:
    // 0x22aa20: 0xa4650c8a  sh          $a1, 0xC8A($v1)
    ctx->pc = 0x22aa20u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 3210), (uint16_t)GPR_U32(ctx, 5));
label_22aa24:
    // 0x22aa24: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x22aa24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_22aa28:
    // 0x22aa28: 0xa466000a  sh          $a2, 0xA($v1)
    ctx->pc = 0x22aa28u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 6));
label_22aa2c:
    // 0x22aa2c: 0x92a30035  lbu         $v1, 0x35($s5)
    ctx->pc = 0x22aa2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 53)));
label_22aa30:
    // 0x22aa30: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x22aa30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_22aa34:
    // 0x22aa34: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x22aa34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_22aa38:
    // 0x22aa38: 0x10000007  b           . + 4 + (0x7 << 2)
label_22aa3c:
    if (ctx->pc == 0x22AA3Cu) {
        ctx->pc = 0x22AA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AA38u;
        // 0x22aa3c: 0xa4660c8a  sh          $a2, 0xC8A($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 3210), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22AA40u;
        goto label_22aa40;
    }
    ctx->pc = 0x22AA38u;
    {
        const bool branch_taken_0x22aa38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AA38u;
        // 0x22aa3c: 0xa4660c8a  sh          $a2, 0xC8A($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 3210), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22aa38) {
            ctx->pc = 0x22AA58u;
            goto label_22aa58;
        }
    }
    ctx->pc = 0x22AA40u;
label_22aa40:
    // 0x22aa40: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x22aa40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_22aa44:
    // 0x22aa44: 0x0  nop
    ctx->pc = 0x22aa44u;
    // NOP
label_22aa48:
    // 0x22aa48: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x22aa48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_22aa4c:
    // 0x22aa4c: 0x2a230007  slti        $v1, $s1, 0x7
    ctx->pc = 0x22aa4cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)7) ? 1 : 0);
label_22aa50:
    // 0x22aa50: 0x1460ffe2  bnez        $v1, . + 4 + (-0x1E << 2)
label_22aa54:
    if (ctx->pc == 0x22AA54u) {
        ctx->pc = 0x22AA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AA50u;
        // 0x22aa54: 0x26b50048  addiu       $s5, $s5, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22AA58u;
        goto label_22aa58;
    }
    ctx->pc = 0x22AA50u;
    {
        const bool branch_taken_0x22aa50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22AA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AA50u;
        // 0x22aa54: 0x26b50048  addiu       $s5, $s5, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22aa50) {
            ctx->pc = 0x22A9DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22a9dc;
        }
    }
    ctx->pc = 0x22AA58u;
label_22aa58:
    // 0x22aa58: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x22aa58u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_22aa5c:
    // 0x22aa5c: 0x2ac30002  slti        $v1, $s6, 0x2
    ctx->pc = 0x22aa5cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)2) ? 1 : 0);
label_22aa60:
    // 0x22aa60: 0x1460ffc8  bnez        $v1, . + 4 + (-0x38 << 2)
label_22aa64:
    if (ctx->pc == 0x22AA64u) {
        ctx->pc = 0x22AA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AA60u;
        // 0x22aa64: 0x26100048  addiu       $s0, $s0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22AA68u;
        goto label_22aa68;
    }
    ctx->pc = 0x22AA60u;
    {
        const bool branch_taken_0x22aa60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22AA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AA60u;
        // 0x22aa64: 0x26100048  addiu       $s0, $s0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22aa60) {
            ctx->pc = 0x22A984u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22a984;
        }
    }
    ctx->pc = 0x22AA68u;
label_22aa68:
    // 0x22aa68: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x22aa68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_22aa6c:
    // 0x22aa6c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x22aa6cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_22aa70:
    // 0x22aa70: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x22aa70u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_22aa74:
    // 0x22aa74: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x22aa74u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_22aa78:
    // 0x22aa78: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22aa78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22aa7c:
    // 0x22aa7c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22aa7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22aa80:
    // 0x22aa80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22aa80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22aa84:
    // 0x22aa84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22aa84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22aa88:
    // 0x22aa88: 0x3e00008  jr          $ra
label_22aa8c:
    if (ctx->pc == 0x22AA8Cu) {
        ctx->pc = 0x22AA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AA88u;
        // 0x22aa8c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22AA90u;
        goto label_22aa90;
    }
    ctx->pc = 0x22AA88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22AA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AA88u;
        // 0x22aa8c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22AA88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22AA90u;
label_22aa90:
    // 0x22aa90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22aa90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_22aa94:
    // 0x22aa94: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x22aa94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_22aa98:
    // 0x22aa98: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22aa98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_22aa9c:
    // 0x22aa9c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22aa9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22aaa0:
    // 0x22aaa0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22aaa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22aaa4:
    // 0x22aaa4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22aaa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22aaa8:
    // 0x22aaa8: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x22aaa8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22aaac:
    // 0x22aaac: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x22aaacu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_22aab0:
    // 0x22aab0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_22aab4:
    if (ctx->pc == 0x22AAB4u) {
        ctx->pc = 0x22AAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AAB0u;
        // 0x22aab4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22AAB8u;
        goto label_22aab8;
    }
    ctx->pc = 0x22AAB0u;
    {
        const bool branch_taken_0x22aab0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x22AAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AAB0u;
        // 0x22aab4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22aab0) {
            ctx->pc = 0x22AAC4u;
            goto label_22aac4;
        }
    }
    ctx->pc = 0x22AAB8u;
label_22aab8:
    // 0x22aab8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22aab8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22aabc:
    // 0x22aabc: 0x10000008  b           . + 4 + (0x8 << 2)
label_22aac0:
    if (ctx->pc == 0x22AAC0u) {
        ctx->pc = 0x22AAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AABCu;
        // 0x22aac0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22AAC4u;
        goto label_22aac4;
    }
    ctx->pc = 0x22AABCu;
    {
        const bool branch_taken_0x22aabc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AABCu;
        // 0x22aac0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22aabc) {
            ctx->pc = 0x22AAE0u;
            goto label_22aae0;
        }
    }
    ctx->pc = 0x22AAC4u;
label_22aac4:
    // 0x22aac4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x22aac4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_22aac8:
    // 0x22aac8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22aac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_22aacc:
    // 0x22aacc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x22aaccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_22aad0:
    // 0x22aad0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22aad0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22aad4:
    // 0x22aad4: 0x0  nop
    ctx->pc = 0x22aad4u;
    // NOP
label_22aad8:
    // 0x22aad8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22aad8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_22aadc:
    // 0x22aadc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x22aadcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_22aae0:
    // 0x22aae0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x22aae0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_22aae4:
    // 0x22aae4: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x22aae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_22aae8:
    // 0x22aae8: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x22aae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_22aaec:
    // 0x22aaec: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x22aaecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_22aaf0:
    // 0x22aaf0: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x22aaf0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_22aaf4:
    // 0x22aaf4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_22aaf8:
    if (ctx->pc == 0x22AAF8u) {
        ctx->pc = 0x22AAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AAF4u;
        // 0x22aaf8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22AAFCu;
        goto label_22aafc;
    }
    ctx->pc = 0x22AAF4u;
    {
        const bool branch_taken_0x22aaf4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x22AAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AAF4u;
        // 0x22aaf8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22aaf4) {
            ctx->pc = 0x22AB08u;
            goto label_22ab08;
        }
    }
    ctx->pc = 0x22AAFCu;
label_22aafc:
    // 0x22aafc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22aafcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22ab00:
    // 0x22ab00: 0x10000007  b           . + 4 + (0x7 << 2)
label_22ab04:
    if (ctx->pc == 0x22AB04u) {
        ctx->pc = 0x22AB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AB00u;
        // 0x22ab04: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22AB08u;
        goto label_22ab08;
    }
    ctx->pc = 0x22AB00u;
    {
        const bool branch_taken_0x22ab00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AB00u;
        // 0x22ab04: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ab00) {
            ctx->pc = 0x22AB20u;
            goto label_22ab20;
        }
    }
    ctx->pc = 0x22AB08u;
label_22ab08:
    // 0x22ab08: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22ab08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_22ab0c:
    // 0x22ab0c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x22ab0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_22ab10:
    // 0x22ab10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22ab10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22ab14:
    // 0x22ab14: 0x0  nop
    ctx->pc = 0x22ab14u;
    // NOP
label_22ab18:
    // 0x22ab18: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x22ab18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_22ab1c:
    // 0x22ab1c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x22ab1cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_22ab20:
    // 0x22ab20: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x22ab20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_22ab24:
    // 0x22ab24: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x22ab24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_22ab28:
    // 0x22ab28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22ab28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22ab2c:
    // 0x22ab2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22ab2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22ab30:
    // 0x22ab30: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x22ab30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_22ab34:
    // 0x22ab34: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22ab34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_22ab38:
    // 0x22ab38: 0x240200f0  addiu       $v0, $zero, 0xF0
    ctx->pc = 0x22ab38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_22ab3c:
    // 0x22ab3c: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x22ab3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_22ab40:
    // 0x22ab40: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x22ab40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_22ab44:
    // 0x22ab44: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x22ab44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_22ab48:
    // 0x22ab48: 0xa220003b  sb          $zero, 0x3B($s1)
    ctx->pc = 0x22ab48u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 59), (uint8_t)GPR_U32(ctx, 0));
label_22ab4c:
    // 0x22ab4c: 0xa223003c  sb          $v1, 0x3C($s1)
    ctx->pc = 0x22ab4cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 60), (uint8_t)GPR_U32(ctx, 3));
label_22ab50:
    // 0x22ab50: 0xa6220040  sh          $v0, 0x40($s1)
    ctx->pc = 0x22ab50u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 64), (uint16_t)GPR_U32(ctx, 2));
label_22ab54:
    // 0x22ab54: 0xa2200036  sb          $zero, 0x36($s1)
    ctx->pc = 0x22ab54u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 54), (uint8_t)GPR_U32(ctx, 0));
label_22ab58:
    // 0x22ab58: 0xc0445bc  jal         func_1116F0
label_22ab5c:
    if (ctx->pc == 0x22AB5Cu) {
        ctx->pc = 0x22AB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AB58u;
        // 0x22ab5c: 0xa6200042  sh          $zero, 0x42($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 66), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22AB60u;
        goto label_22ab60;
    }
    ctx->pc = 0x22AB58u;
    SET_GPR_U32(ctx, 31, 0x22AB60u);
    ctx->pc = 0x22AB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AB58u;
    // 0x22ab5c: 0xa6200042  sh          $zero, 0x42($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 66), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1116F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1116F0u, 0x22AB58u, 0x22AB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AB60u;
label_22ab60:
    // 0x22ab60: 0x9222003a  lbu         $v0, 0x3A($s1)
    ctx->pc = 0x22ab60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 58)));
label_22ab64:
    // 0x22ab64: 0xa2220044  sb          $v0, 0x44($s1)
    ctx->pc = 0x22ab64u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 68), (uint8_t)GPR_U32(ctx, 2));
label_22ab68:
    // 0x22ab68: 0x92220026  lbu         $v0, 0x26($s1)
    ctx->pc = 0x22ab68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 38)));
label_22ab6c:
    // 0x22ab6c: 0xa2220022  sb          $v0, 0x22($s1)
    ctx->pc = 0x22ab6cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 34), (uint8_t)GPR_U32(ctx, 2));
label_22ab70:
    // 0x22ab70: 0xa2220028  sb          $v0, 0x28($s1)
    ctx->pc = 0x22ab70u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 40), (uint8_t)GPR_U32(ctx, 2));
label_22ab74:
    // 0x22ab74: 0x92220027  lbu         $v0, 0x27($s1)
    ctx->pc = 0x22ab74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 39)));
label_22ab78:
    // 0x22ab78: 0xa2220023  sb          $v0, 0x23($s1)
    ctx->pc = 0x22ab78u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 35), (uint8_t)GPR_U32(ctx, 2));
label_22ab7c:
    // 0x22ab7c: 0xa2220029  sb          $v0, 0x29($s1)
    ctx->pc = 0x22ab7cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 2));
label_22ab80:
    // 0x22ab80: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x22ab80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
label_22ab84:
    // 0x22ab84: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_22ab88:
    if (ctx->pc == 0x22AB88u) {
        ctx->pc = 0x22AB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AB84u;
        // 0x22ab88: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22AB8Cu;
        goto label_22ab8c;
    }
    ctx->pc = 0x22AB84u;
    {
        const bool branch_taken_0x22ab84 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x22AB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AB84u;
        // 0x22ab88: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ab84) {
            ctx->pc = 0x22AB98u;
            goto label_22ab98;
        }
    }
    ctx->pc = 0x22AB8Cu;
label_22ab8c:
    // 0x22ab8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22ab8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22ab90:
    // 0x22ab90: 0x10000007  b           . + 4 + (0x7 << 2)
label_22ab94:
    if (ctx->pc == 0x22AB94u) {
        ctx->pc = 0x22AB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AB90u;
        // 0x22ab94: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x22AB98u;
        goto label_22ab98;
    }
    ctx->pc = 0x22AB90u;
    {
        const bool branch_taken_0x22ab90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AB90u;
        // 0x22ab94: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ab90) {
            ctx->pc = 0x22ABB0u;
            goto label_22abb0;
        }
    }
    ctx->pc = 0x22AB98u;
label_22ab98:
    // 0x22ab98: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22ab98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_22ab9c:
    // 0x22ab9c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x22ab9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_22aba0:
    // 0x22aba0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22aba0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22aba4:
    // 0x22aba4: 0x0  nop
    ctx->pc = 0x22aba4u;
    // NOP
label_22aba8:
    // 0x22aba8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x22aba8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_22abac:
    // 0x22abac: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x22abacu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_22abb0:
    // 0x22abb0: 0x3c034234  lui         $v1, 0x4234
    ctx->pc = 0x22abb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16948 << 16));
label_22abb4:
    // 0x22abb4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x22abb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_22abb8:
    // 0x22abb8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22abb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22abbc:
    // 0x22abbc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22abbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_22abc0:
    // 0x22abc0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x22abc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_22abc4:
    // 0x22abc4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22abc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_22abc8:
    // 0x22abc8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22abc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22abcc:
    // 0x22abcc: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x22abccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_22abd0:
    // 0x22abd0: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x22abd0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_22abd4:
    // 0x22abd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22abd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22abd8:
    // 0x22abd8: 0x0  nop
    ctx->pc = 0x22abd8u;
    // NOP
label_22abdc:
    // 0x22abdc: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x22abdcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
label_22abe0:
    // 0x22abe0: 0x0  nop
    ctx->pc = 0x22abe0u;
    // NOP
label_22abe4:
    // 0x22abe4: 0x0  nop
    ctx->pc = 0x22abe4u;
    // NOP
label_22abe8:
    // 0x22abe8: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x22abe8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22abec:
    // 0x22abec: 0x0  nop
    ctx->pc = 0x22abecu;
    // NOP
label_22abf0:
    // 0x22abf0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_22abf4:
    if (ctx->pc == 0x22ABF4u) {
        ctx->pc = 0x22ABF8u;
        goto label_22abf8;
    }
    ctx->pc = 0x22ABF0u;
    {
        const bool branch_taken_0x22abf0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22abf0) {
            ctx->pc = 0x22ABFCu;
            goto label_22abfc;
        }
    }
    ctx->pc = 0x22ABF8u;
label_22abf8:
    // 0x22abf8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x22abf8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22abfc:
    // 0x22abfc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_22ac00:
    if (ctx->pc == 0x22AC00u) {
        ctx->pc = 0x22AC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ABFCu;
        // 0x22ac00: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22AC04u;
        goto label_22ac04;
    }
    ctx->pc = 0x22ABFCu;
    {
        const bool branch_taken_0x22abfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ABFCu;
        // 0x22ac00: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22abfc) {
            ctx->pc = 0x22AC18u;
            goto label_22ac18;
        }
    }
    ctx->pc = 0x22AC04u;
label_22ac04:
    // 0x22ac04: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x22ac04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_22ac08:
    // 0x22ac08: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22ac08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_22ac0c:
    // 0x22ac0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22ac0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22ac10:
    // 0x22ac10: 0x1000000d  b           . + 4 + (0xD << 2)
label_22ac14:
    if (ctx->pc == 0x22AC14u) {
        ctx->pc = 0x22AC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AC10u;
        // 0x22ac14: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22AC18u;
        goto label_22ac18;
    }
    ctx->pc = 0x22AC10u;
    {
        const bool branch_taken_0x22ac10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AC10u;
        // 0x22ac14: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ac10) {
            ctx->pc = 0x22AC48u;
            goto label_22ac48;
        }
    }
    ctx->pc = 0x22AC18u;
label_22ac18:
    // 0x22ac18: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22ac18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_22ac1c:
    // 0x22ac1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22ac1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22ac20:
    // 0x22ac20: 0x0  nop
    ctx->pc = 0x22ac20u;
    // NOP
label_22ac24:
    // 0x22ac24: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22ac24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22ac28:
    // 0x22ac28: 0x0  nop
    ctx->pc = 0x22ac28u;
    // NOP
label_22ac2c:
    // 0x22ac2c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_22ac30:
    if (ctx->pc == 0x22AC30u) {
        ctx->pc = 0x22AC34u;
        goto label_22ac34;
    }
    ctx->pc = 0x22AC2Cu;
    {
        const bool branch_taken_0x22ac2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22ac2c) {
            ctx->pc = 0x22AC48u;
            goto label_22ac48;
        }
    }
    ctx->pc = 0x22AC34u;
label_22ac34:
    // 0x22ac34: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x22ac34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_22ac38:
    // 0x22ac38: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22ac38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_22ac3c:
    // 0x22ac3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22ac3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22ac40:
    // 0x22ac40: 0x10000001  b           . + 4 + (0x1 << 2)
label_22ac44:
    if (ctx->pc == 0x22AC44u) {
        ctx->pc = 0x22AC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AC40u;
        // 0x22ac44: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22AC48u;
        goto label_22ac48;
    }
    ctx->pc = 0x22AC40u;
    {
        const bool branch_taken_0x22ac40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AC40u;
        // 0x22ac44: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ac40) {
            ctx->pc = 0x22AC48u;
            goto label_22ac48;
        }
    }
    ctx->pc = 0x22AC48u;
label_22ac48:
    // 0x22ac48: 0xe621001c  swc1        $f1, 0x1C($s1)
    ctx->pc = 0x22ac48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
label_22ac4c:
    // 0x22ac4c: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x22ac4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
label_22ac50:
    // 0x22ac50: 0x92060004  lbu         $a2, 0x4($s0)
    ctx->pc = 0x22ac50u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
label_22ac54:
    // 0x22ac54: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x22ac54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
label_22ac58:
    // 0x22ac58: 0x34435556  ori         $v1, $v0, 0x5556
    ctx->pc = 0x22ac58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
label_22ac5c:
    // 0x22ac5c: 0x24843b8e  addiu       $a0, $a0, 0x3B8E
    ctx->pc = 0x22ac5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15246));
label_22ac60:
    // 0x22ac60: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x22ac60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22ac64:
    // 0x22ac64: 0xa2260020  sb          $a2, 0x20($s1)
    ctx->pc = 0x22ac64u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 32), (uint8_t)GPR_U32(ctx, 6));
label_22ac68:
    // 0x22ac68: 0xa620002c  sh          $zero, 0x2C($s1)
    ctx->pc = 0x22ac68u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 44), (uint16_t)GPR_U32(ctx, 0));
label_22ac6c:
    // 0x22ac6c: 0xa2200046  sb          $zero, 0x46($s1)
    ctx->pc = 0x22ac6cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 70), (uint8_t)GPR_U32(ctx, 0));
label_22ac70:
    // 0x22ac70: 0x9607000a  lhu         $a3, 0xA($s0)
    ctx->pc = 0x22ac70u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
label_22ac74:
    // 0x22ac74: 0x73100  sll         $a2, $a3, 4
    ctx->pc = 0x22ac74u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_22ac78:
    // 0x22ac78: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x22ac78u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_22ac7c:
    // 0x22ac7c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x22ac7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_22ac80:
    // 0x22ac80: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x22ac80u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_22ac84:
    // 0x22ac84: 0xa2240047  sb          $a0, 0x47($s1)
    ctx->pc = 0x22ac84u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 71), (uint8_t)GPR_U32(ctx, 4));
label_22ac88:
    // 0x22ac88: 0x92040010  lbu         $a0, 0x10($s0)
    ctx->pc = 0x22ac88u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_22ac8c:
    // 0x22ac8c: 0xa224002a  sb          $a0, 0x2A($s1)
    ctx->pc = 0x22ac8cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 42), (uint8_t)GPR_U32(ctx, 4));
label_22ac90:
    // 0x22ac90: 0x86040008  lh          $a0, 0x8($s0)
    ctx->pc = 0x22ac90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_22ac94:
    // 0x22ac94: 0xa624002e  sh          $a0, 0x2E($s1)
    ctx->pc = 0x22ac94u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 46), (uint16_t)GPR_U32(ctx, 4));
label_22ac98:
    // 0x22ac98: 0x86070008  lh          $a3, 0x8($s0)
    ctx->pc = 0x22ac98u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_22ac9c:
    // 0x22ac9c: 0x92060010  lbu         $a2, 0x10($s0)
    ctx->pc = 0x22ac9cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_22aca0:
    // 0x22aca0: 0x72040  sll         $a0, $a3, 1
    ctx->pc = 0x22aca0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_22aca4:
    // 0x22aca4: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x22aca4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_22aca8:
    // 0x22aca8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x22aca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_22acac:
    // 0x22acac: 0x0  nop
    ctx->pc = 0x22acacu;
    // NOP
label_22acb0:
    // 0x22acb0: 0x1810  mfhi        $v1
    ctx->pc = 0x22acb0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_22acb4:
    // 0x22acb4: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x22acb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_22acb8:
    // 0x22acb8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x22acb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_22acbc:
    // 0x22acbc: 0xc31818  mult        $v1, $a2, $v1
    ctx->pc = 0x22acbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_22acc0:
    // 0x22acc0: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x22acc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_22acc4:
    // 0x22acc4: 0xa6230030  sh          $v1, 0x30($s1)
    ctx->pc = 0x22acc4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 48), (uint16_t)GPR_U32(ctx, 3));
label_22acc8:
    // 0x22acc8: 0xa6230032  sh          $v1, 0x32($s1)
    ctx->pc = 0x22acc8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 50), (uint16_t)GPR_U32(ctx, 3));
label_22accc:
    // 0x22accc: 0xa2220045  sb          $v0, 0x45($s1)
    ctx->pc = 0x22acccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 69), (uint8_t)GPR_U32(ctx, 2));
label_22acd0:
    // 0x22acd0: 0x92040005  lbu         $a0, 0x5($s0)
    ctx->pc = 0x22acd0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
label_22acd4:
    // 0x22acd4: 0xc0448dc  jal         func_112370
label_22acd8:
    if (ctx->pc == 0x22ACD8u) {
        ctx->pc = 0x22ACD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ACD4u;
        // 0x22acd8: 0x26250022  addiu       $a1, $s1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 34));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22ACDCu;
        goto label_22acdc;
    }
    ctx->pc = 0x22ACD4u;
    SET_GPR_U32(ctx, 31, 0x22ACDCu);
    ctx->pc = 0x22ACD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22ACD4u;
    // 0x22acd8: 0x26250022  addiu       $a1, $s1, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112370u, 0x22ACD4u, 0x22ACDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ACDCu;
label_22acdc:
    // 0x22acdc: 0xa2220037  sb          $v0, 0x37($s1)
    ctx->pc = 0x22acdcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 55), (uint8_t)GPR_U32(ctx, 2));
label_22ace0:
    // 0x22ace0: 0x9223002a  lbu         $v1, 0x2A($s1)
    ctx->pc = 0x22ace0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 42)));
label_22ace4:
    // 0x22ace4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_22ace8:
    if (ctx->pc == 0x22ACE8u) {
        ctx->pc = 0x22ACE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ACE4u;
        // 0x22ace8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22ACECu;
        goto label_22acec;
    }
    ctx->pc = 0x22ACE4u;
    {
        const bool branch_taken_0x22ace4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22ACE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ACE4u;
        // 0x22ace8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ace4) {
            ctx->pc = 0x22ACF4u;
            goto label_22acf4;
        }
    }
    ctx->pc = 0x22ACECu;
label_22acec:
    // 0x22acec: 0x10000002  b           . + 4 + (0x2 << 2)
label_22acf0:
    if (ctx->pc == 0x22ACF0u) {
        ctx->pc = 0x22ACF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ACECu;
        // 0x22acf0: 0xa223003d  sb          $v1, 0x3D($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 61), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22ACF4u;
        goto label_22acf4;
    }
    ctx->pc = 0x22ACECu;
    {
        const bool branch_taken_0x22acec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22ACF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ACECu;
        // 0x22acf0: 0xa223003d  sb          $v1, 0x3D($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 61), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22acec) {
            ctx->pc = 0x22ACF8u;
            goto label_22acf8;
        }
    }
    ctx->pc = 0x22ACF4u;
label_22acf4:
    // 0x22acf4: 0xa220003d  sb          $zero, 0x3D($s1)
    ctx->pc = 0x22acf4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 61), (uint8_t)GPR_U32(ctx, 0));
label_22acf8:
    // 0x22acf8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22acf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_22acfc:
    // 0x22acfc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22acfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22ad00:
    // 0x22ad00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22ad00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22ad04:
    // 0x22ad04: 0x3e00008  jr          $ra
label_22ad08:
    if (ctx->pc == 0x22AD08u) {
        ctx->pc = 0x22AD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AD04u;
        // 0x22ad08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22AD0Cu;
        goto label_22ad0c;
    }
    ctx->pc = 0x22AD04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22AD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AD04u;
        // 0x22ad08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22AD04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22AD0Cu;
label_22ad0c:
    // 0x22ad0c: 0x0  nop
    ctx->pc = 0x22ad0cu;
    // NOP
label_22ad10:
    // 0x22ad10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22ad10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_22ad14:
    // 0x22ad14: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x22ad14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
label_22ad18:
    // 0x22ad18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22ad18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_22ad1c:
    // 0x22ad1c: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x22ad1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
label_22ad20:
    // 0x22ad20: 0x2484c160  addiu       $a0, $a0, -0x3EA0
    ctx->pc = 0x22ad20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951264));
label_22ad24:
    // 0x22ad24: 0x24a5d4c0  addiu       $a1, $a1, -0x2B40
    ctx->pc = 0x22ad24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956224));
label_22ad28:
    // 0x22ad28: 0x24060b00  addiu       $a2, $zero, 0xB00
    ctx->pc = 0x22ad28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2816));
label_22ad2c:
    // 0x22ad2c: 0xa38092ec  sb          $zero, -0x6D14($gp)
    ctx->pc = 0x22ad2cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939372), (uint8_t)GPR_U32(ctx, 0));
label_22ad30:
    // 0x22ad30: 0xc08e93e  jal         func_23A4F8
label_22ad34:
    if (ctx->pc == 0x22AD34u) {
        ctx->pc = 0x22AD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AD30u;
        // 0x22ad34: 0xaf8092f0  sw          $zero, -0x6D10($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939376), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22AD38u;
        goto label_22ad38;
    }
    ctx->pc = 0x22AD30u;
    SET_GPR_U32(ctx, 31, 0x22AD38u);
    ctx->pc = 0x22AD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AD30u;
    // 0x22ad34: 0xaf8092f0  sw          $zero, -0x6D10($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939376), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x22AD38u;
label_22ad38:
    // 0x22ad38: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x22ad38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_22ad3c:
    // 0x22ad3c: 0xac20a280  sw          $zero, -0x5D80($at)
    ctx->pc = 0x22ad3cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943360), GPR_U32(ctx, 0));
label_22ad40:
    // 0x22ad40: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x22ad40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_22ad44:
    // 0x22ad44: 0xac20a284  sw          $zero, -0x5D7C($at)
    ctx->pc = 0x22ad44u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943364), GPR_U32(ctx, 0));
label_22ad48:
    // 0x22ad48: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x22ad48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_22ad4c:
    // 0x22ad4c: 0xac20a288  sw          $zero, -0x5D78($at)
    ctx->pc = 0x22ad4cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943368), GPR_U32(ctx, 0));
label_22ad50:
    // 0x22ad50: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x22ad50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_22ad54:
    // 0x22ad54: 0xac20a28c  sw          $zero, -0x5D74($at)
    ctx->pc = 0x22ad54u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943372), GPR_U32(ctx, 0));
label_22ad58:
    // 0x22ad58: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x22ad58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_22ad5c:
    // 0x22ad5c: 0xac20a290  sw          $zero, -0x5D70($at)
    ctx->pc = 0x22ad5cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943376), GPR_U32(ctx, 0));
label_22ad60:
    // 0x22ad60: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x22ad60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_22ad64:
    // 0x22ad64: 0xac20a294  sw          $zero, -0x5D6C($at)
    ctx->pc = 0x22ad64u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943380), GPR_U32(ctx, 0));
label_22ad68:
    // 0x22ad68: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x22ad68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_22ad6c:
    // 0x22ad6c: 0xac20a298  sw          $zero, -0x5D68($at)
    ctx->pc = 0x22ad6cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943384), GPR_U32(ctx, 0));
label_22ad70:
    // 0x22ad70: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x22ad70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_22ad74:
    // 0x22ad74: 0xac20a29c  sw          $zero, -0x5D64($at)
    ctx->pc = 0x22ad74u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943388), GPR_U32(ctx, 0));
label_22ad78:
    // 0x22ad78: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x22ad78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_22ad7c:
    // 0x22ad7c: 0xac20a2a0  sw          $zero, -0x5D60($at)
    ctx->pc = 0x22ad7cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943392), GPR_U32(ctx, 0));
label_22ad80:
    // 0x22ad80: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x22ad80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_22ad84:
    // 0x22ad84: 0xac20a2a4  sw          $zero, -0x5D5C($at)
    ctx->pc = 0x22ad84u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943396), GPR_U32(ctx, 0));
label_22ad88:
    // 0x22ad88: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x22ad88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_22ad8c:
    // 0x22ad8c: 0xac20a2a8  sw          $zero, -0x5D58($at)
    ctx->pc = 0x22ad8cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943400), GPR_U32(ctx, 0));
label_22ad90:
    // 0x22ad90: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x22ad90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_22ad94:
    // 0x22ad94: 0xac20a2ac  sw          $zero, -0x5D54($at)
    ctx->pc = 0x22ad94u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943404), GPR_U32(ctx, 0));
label_22ad98:
    // 0x22ad98: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x22ad98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_22ad9c:
    // 0x22ad9c: 0xac20a270  sw          $zero, -0x5D90($at)
    ctx->pc = 0x22ad9cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943344), GPR_U32(ctx, 0));
label_22ada0:
    // 0x22ada0: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x22ada0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_22ada4:
    // 0x22ada4: 0xac20a274  sw          $zero, -0x5D8C($at)
    ctx->pc = 0x22ada4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943348), GPR_U32(ctx, 0));
label_22ada8:
    // 0x22ada8: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x22ada8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_22adac:
    // 0x22adac: 0xac20a278  sw          $zero, -0x5D88($at)
    ctx->pc = 0x22adacu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943352), GPR_U32(ctx, 0));
label_22adb0:
    // 0x22adb0: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x22adb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_22adb4:
    // 0x22adb4: 0xac20a27c  sw          $zero, -0x5D84($at)
    ctx->pc = 0x22adb4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943356), GPR_U32(ctx, 0));
label_22adb8:
    // 0x22adb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22adb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22adbc:
    // 0x22adbc: 0x3e00008  jr          $ra
label_22adc0:
    if (ctx->pc == 0x22ADC0u) {
        ctx->pc = 0x22ADC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ADBCu;
        // 0x22adc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22ADC4u;
        goto label_22adc4;
    }
    ctx->pc = 0x22ADBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22ADC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ADBCu;
        // 0x22adc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22ADBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22ADC4u;
label_22adc4:
    // 0x22adc4: 0x0  nop
    ctx->pc = 0x22adc4u;
    // NOP
label_22adc8:
    // 0x22adc8: 0x0  nop
    ctx->pc = 0x22adc8u;
    // NOP
label_22adcc:
    // 0x22adcc: 0x0  nop
    ctx->pc = 0x22adccu;
    // NOP
label_22add0:
    // 0x22add0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22add0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_22add4:
    // 0x22add4: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x22add4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
label_22add8:
    // 0x22add8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22add8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_22addc:
    // 0x22addc: 0x246352f4  addiu       $v1, $v1, 0x52F4
    ctx->pc = 0x22addcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21236));
label_22ade0:
    // 0x22ade0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22ade0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22ade4:
    // 0x22ade4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22ade4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22ade8:
    // 0x22ade8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22ade8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22adec:
    // 0x22adec: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x22adecu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_22adf0:
    // 0x22adf0: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x22adf0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_22adf4:
    // 0x22adf4: 0x852823  subu        $a1, $a0, $a1
    ctx->pc = 0x22adf4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_22adf8:
    // 0x22adf8: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x22adf8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_22adfc:
    // 0x22adfc: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x22adfcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_22ae00:
    // 0x22ae00: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x22ae00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_22ae04:
    // 0x22ae04: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x22ae04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_22ae08:
    // 0x22ae08: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x22ae08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_22ae0c:
    // 0x22ae0c: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
label_22ae10:
    if (ctx->pc == 0x22AE10u) {
        ctx->pc = 0x22AE14u;
        goto label_22ae14;
    }
    ctx->pc = 0x22AE0Cu;
    {
        const bool branch_taken_0x22ae0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ae0c) {
            ctx->pc = 0x22AEBCu;
            goto label_22aebc;
        }
    }
    ctx->pc = 0x22AE14u;
label_22ae14:
    // 0x22ae14: 0x8f9085d0  lw          $s0, -0x7A30($gp)
    ctx->pc = 0x22ae14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936016)));
label_22ae18:
    // 0x22ae18: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_22ae1c:
    if (ctx->pc == 0x22AE1Cu) {
        ctx->pc = 0x22AE20u;
        goto label_22ae20;
    }
    ctx->pc = 0x22AE18u;
    {
        const bool branch_taken_0x22ae18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ae18) {
            ctx->pc = 0x22AE54u;
            goto label_22ae54;
        }
    }
    ctx->pc = 0x22AE20u;
label_22ae20:
    // 0x22ae20: 0x92240004  lbu         $a0, 0x4($s1)
    ctx->pc = 0x22ae20u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
label_22ae24:
    // 0x22ae24: 0x0  nop
    ctx->pc = 0x22ae24u;
    // NOP
label_22ae28:
    // 0x22ae28: 0x92030096  lbu         $v1, 0x96($s0)
    ctx->pc = 0x22ae28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 150)));
label_22ae2c:
    // 0x22ae2c: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
label_22ae30:
    if (ctx->pc == 0x22AE30u) {
        ctx->pc = 0x22AE34u;
        goto label_22ae34;
    }
    ctx->pc = 0x22AE2Cu;
    {
        const bool branch_taken_0x22ae2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x22ae2c) {
            ctx->pc = 0x22AE44u;
            goto label_22ae44;
        }
    }
    ctx->pc = 0x22AE34u;
label_22ae34:
    // 0x22ae34: 0x9203009c  lbu         $v1, 0x9C($s0)
    ctx->pc = 0x22ae34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 156)));
label_22ae38:
    // 0x22ae38: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x22ae38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_22ae3c:
    // 0x22ae3c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_22ae40:
    if (ctx->pc == 0x22AE40u) {
        ctx->pc = 0x22AE44u;
        goto label_22ae44;
    }
    ctx->pc = 0x22AE3Cu;
    {
        const bool branch_taken_0x22ae3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ae3c) {
            ctx->pc = 0x22AE54u;
            goto label_22ae54;
        }
    }
    ctx->pc = 0x22AE44u;
label_22ae44:
    // 0x22ae44: 0x0  nop
    ctx->pc = 0x22ae44u;
    // NOP
label_22ae48:
    // 0x22ae48: 0x8e100084  lw          $s0, 0x84($s0)
    ctx->pc = 0x22ae48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_22ae4c:
    // 0x22ae4c: 0x1600fff6  bnez        $s0, . + 4 + (-0xA << 2)
label_22ae50:
    if (ctx->pc == 0x22AE50u) {
        ctx->pc = 0x22AE54u;
        goto label_22ae54;
    }
    ctx->pc = 0x22AE4Cu;
    {
        const bool branch_taken_0x22ae4c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ae4c) {
            ctx->pc = 0x22AE28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22ae28;
        }
    }
    ctx->pc = 0x22AE54u;
label_22ae54:
    // 0x22ae54: 0x0  nop
    ctx->pc = 0x22ae54u;
    // NOP
label_22ae58:
    // 0x22ae58: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
label_22ae5c:
    if (ctx->pc == 0x22AE5Cu) {
        ctx->pc = 0x22AE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AE58u;
        // 0x22ae5c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22AE60u;
        goto label_22ae60;
    }
    ctx->pc = 0x22AE58u;
    {
        const bool branch_taken_0x22ae58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AE58u;
        // 0x22ae5c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ae58) {
            ctx->pc = 0x22AEBCu;
            goto label_22aebc;
        }
    }
    ctx->pc = 0x22AE60u;
label_22ae60:
    // 0x22ae60: 0xc0590dc  jal         func_164370
label_22ae64:
    if (ctx->pc == 0x22AE64u) {
        ctx->pc = 0x22AE68u;
        goto label_22ae68;
    }
    ctx->pc = 0x22AE60u;
    SET_GPR_U32(ctx, 31, 0x22AE68u);
    ctx->pc = 0x164370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164370u, 0x22AE60u, 0x22AE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AE68u;
label_22ae68:
    // 0x22ae68: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_22ae6c:
    if (ctx->pc == 0x22AE6Cu) {
        ctx->pc = 0x22AE70u;
        goto label_22ae70;
    }
    ctx->pc = 0x22AE68u;
    {
        const bool branch_taken_0x22ae68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ae68) {
            ctx->pc = 0x22AEBCu;
            goto label_22aebc;
        }
    }
    ctx->pc = 0x22AE70u;
label_22ae70:
    // 0x22ae70: 0x86250002  lh          $a1, 0x2($s1)
    ctx->pc = 0x22ae70u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_22ae74:
    // 0x22ae74: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x22ae74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
label_22ae78:
    // 0x22ae78: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x22ae78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
label_22ae7c:
    // 0x22ae7c: 0x24845060  addiu       $a0, $a0, 0x5060
    ctx->pc = 0x22ae7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20576));
label_22ae80:
    // 0x22ae80: 0x2463aed0  addiu       $v1, $v1, -0x5130
    ctx->pc = 0x22ae80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946512));
label_22ae84:
    // 0x22ae84: 0xa4450014  sh          $a1, 0x14($v0)
    ctx->pc = 0x22ae84u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 20), (uint16_t)GPR_U32(ctx, 5));
label_22ae88:
    // 0x22ae88: 0x86260002  lh          $a2, 0x2($s1)
    ctx->pc = 0x22ae88u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_22ae8c:
    // 0x22ae8c: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x22ae8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_22ae90:
    // 0x22ae90: 0xa63023  subu        $a2, $a1, $a2
    ctx->pc = 0x22ae90u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_22ae94:
    // 0x22ae94: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x22ae94u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_22ae98:
    // 0x22ae98: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x22ae98u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_22ae9c:
    // 0x22ae9c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x22ae9cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_22aea0:
    // 0x22aea0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x22aea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_22aea4:
    // 0x22aea4: 0xac44005c  sw          $a0, 0x5C($v0)
    ctx->pc = 0x22aea4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 4));
label_22aea8:
    // 0x22aea8: 0xac500060  sw          $s0, 0x60($v0)
    ctx->pc = 0x22aea8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 16));
label_22aeac:
    // 0x22aeac: 0x9204009c  lbu         $a0, 0x9C($s0)
    ctx->pc = 0x22aeacu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 156)));
label_22aeb0:
    // 0x22aeb0: 0x34840020  ori         $a0, $a0, 0x20
    ctx->pc = 0x22aeb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32);
label_22aeb4:
    // 0x22aeb4: 0xa204009c  sb          $a0, 0x9C($s0)
    ctx->pc = 0x22aeb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 156), (uint8_t)GPR_U32(ctx, 4));
label_22aeb8:
    // 0x22aeb8: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x22aeb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
label_22aebc:
    // 0x22aebc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22aebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_22aec0:
    // 0x22aec0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22aec0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22aec4:
    // 0x22aec4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22aec4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22aec8:
    // 0x22aec8: 0x3e00008  jr          $ra
label_22aecc:
    if (ctx->pc == 0x22AECCu) {
        ctx->pc = 0x22AECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AEC8u;
        // 0x22aecc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22AED0u;
        goto label_22aed0;
    }
    ctx->pc = 0x22AEC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22AECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AEC8u;
        // 0x22aecc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22AEC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22AED0u;
label_22aed0:
    // 0x22aed0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22aed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_22aed4:
    // 0x22aed4: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x22aed4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
label_22aed8:
    // 0x22aed8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22aed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_22aedc:
    // 0x22aedc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x22aedcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22aee0:
    // 0x22aee0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22aee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22aee4:
    // 0x22aee4: 0x9025a3ea  lbu         $a1, -0x5C16($at)
    ctx->pc = 0x22aee4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294943722)));
label_22aee8:
    // 0x22aee8: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_22aeec:
    if (ctx->pc == 0x22AEECu) {
        ctx->pc = 0x22AEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AEE8u;
        // 0x22aeec: 0x8c900060  lw          $s0, 0x60($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22AEF0u;
        goto label_22aef0;
    }
    ctx->pc = 0x22AEE8u;
    {
        const bool branch_taken_0x22aee8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x22AEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AEE8u;
        // 0x22aeec: 0x8c900060  lw          $s0, 0x60($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22aee8) {
            ctx->pc = 0x22AEF8u;
            goto label_22aef8;
        }
    }
    ctx->pc = 0x22AEF0u;
label_22aef0:
    // 0x22aef0: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
label_22aef4:
    if (ctx->pc == 0x22AEF4u) {
        ctx->pc = 0x22AEF8u;
        goto label_22aef8;
    }
    ctx->pc = 0x22AEF0u;
    {
        const bool branch_taken_0x22aef0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x22aef0) {
            ctx->pc = 0x22AF10u;
            goto label_22af10;
        }
    }
    ctx->pc = 0x22AEF8u;
label_22aef8:
    // 0x22aef8: 0x9202009c  lbu         $v0, 0x9C($s0)
    ctx->pc = 0x22aef8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 156)));
label_22aefc:
    // 0x22aefc: 0x304200df  andi        $v0, $v0, 0xDF
    ctx->pc = 0x22aefcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)223);
label_22af00:
    // 0x22af00: 0xc0591f4  jal         func_1647D0
label_22af04:
    if (ctx->pc == 0x22AF04u) {
        ctx->pc = 0x22AF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AF00u;
        // 0x22af04: 0xa202009c  sb          $v0, 0x9C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 156), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22AF08u;
        goto label_22af08;
    }
    ctx->pc = 0x22AF00u;
    SET_GPR_U32(ctx, 31, 0x22AF08u);
    ctx->pc = 0x22AF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AF00u;
    // 0x22af04: 0xa202009c  sb          $v0, 0x9C($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 156), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x22AF00u, 0x22AF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AF08u;
label_22af08:
    // 0x22af08: 0x1000002d  b           . + 4 + (0x2D << 2)
label_22af0c:
    if (ctx->pc == 0x22AF0Cu) {
        ctx->pc = 0x22AF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AF08u;
        // 0x22af0c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22AF10u;
        goto label_22af10;
    }
    ctx->pc = 0x22AF08u;
    {
        const bool branch_taken_0x22af08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AF08u;
        // 0x22af0c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22af08) {
            ctx->pc = 0x22AFC0u;
            { ctx->pc = 0x22afc0; return; }
        }
    }
    ctx->pc = 0x22AF10u;
label_22af10:
    // 0x22af10: 0x94860014  lhu         $a2, 0x14($a0)
    ctx->pc = 0x22af10u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
label_22af14:
    // 0x22af14: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x22af14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
label_22af18:
    // 0x22af18: 0x246352f4  addiu       $v1, $v1, 0x52F4
    ctx->pc = 0x22af18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21236));
label_22af1c:
    // 0x22af1c: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x22af1cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_22af20:
    // 0x22af20: 0xa63023  subu        $a2, $a1, $a2
    ctx->pc = 0x22af20u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_22af24:
    // 0x22af24: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x22af24u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_22af28:
    // 0x22af28: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x22af28u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_22af2c:
    // 0x22af2c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x22af2cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_22af30:
    // 0x22af30: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x22af30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_22af34:
    // 0x22af34: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x22af34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_22af38:
    // 0x22af38: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_22af3c:
    if (ctx->pc == 0x22AF3Cu) {
        ctx->pc = 0x22AF40u;
        goto label_22af40;
    }
    ctx->pc = 0x22AF38u;
    {
        const bool branch_taken_0x22af38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22af38) {
            ctx->pc = 0x22AF58u;
            goto label_22af58;
        }
    }
    ctx->pc = 0x22AF40u;
label_22af40:
    // 0x22af40: 0x9202009c  lbu         $v0, 0x9C($s0)
    ctx->pc = 0x22af40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 156)));
label_22af44:
    // 0x22af44: 0x304200df  andi        $v0, $v0, 0xDF
    ctx->pc = 0x22af44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)223);
label_22af48:
    // 0x22af48: 0xc0591f4  jal         func_1647D0
label_22af4c:
    if (ctx->pc == 0x22AF4Cu) {
        ctx->pc = 0x22AF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AF48u;
        // 0x22af4c: 0xa202009c  sb          $v0, 0x9C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 156), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22AF50u;
        goto label_22af50;
    }
    ctx->pc = 0x22AF48u;
    SET_GPR_U32(ctx, 31, 0x22AF50u);
    ctx->pc = 0x22AF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AF48u;
    // 0x22af4c: 0xa202009c  sb          $v0, 0x9C($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 156), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x22AF48u, 0x22AF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AF50u;
label_22af50:
    // 0x22af50: 0x1000001a  b           . + 4 + (0x1A << 2)
label_22af54:
    if (ctx->pc == 0x22AF54u) {
        ctx->pc = 0x22AF58u;
        goto label_22af58;
    }
    ctx->pc = 0x22AF50u;
    {
        const bool branch_taken_0x22af50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22af50) {
            ctx->pc = 0x22AFBCu;
            { ctx->pc = 0x22afbc; return; }
        }
    }
    ctx->pc = 0x22AF58u;
label_22af58:
    // 0x22af58: 0x8c83005c  lw          $v1, 0x5C($a0)
    ctx->pc = 0x22af58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_22af5c:
    // 0x22af5c: 0x8c6301b0  lw          $v1, 0x1B0($v1)
    ctx->pc = 0x22af5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 432)));
label_22af60:
    // 0x22af60: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
label_22af64:
    if (ctx->pc == 0x22AF64u) {
        ctx->pc = 0x22AF68u;
        goto label_22af68;
    }
    ctx->pc = 0x22AF60u;
    {
        const bool branch_taken_0x22af60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22af60) {
            ctx->pc = 0x22AFBCu;
            { ctx->pc = 0x22afbc; return; }
        }
    }
    ctx->pc = 0x22AF68u;
label_22af68:
    // 0x22af68: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x22af68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_22af6c:
    // 0x22af6c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x22af6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_22af70:
    // 0x22af70: 0x8c223ffc  lw          $v0, 0x3FFC($at)
    ctx->pc = 0x22af70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_22af74:
    // 0x22af74: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x22af74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_22af78:
    // 0x22af78: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x22af78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_22af7c:
    // 0x22af7c: 0x24a21280  addiu       $v0, $a1, 0x1280
    ctx->pc = 0x22af7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4736));
label_22af80:
    // 0x22af80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22af80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22af84:
    // 0x22af84: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x22af84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x22af88u;
    return;
}

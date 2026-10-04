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

// Function: FUN_0017d410
// Address: 0x17d410 - 0x27d534
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0017d410_part323(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x21a7b0u: goto label_21a7b0;
        case 0x21a7b4u: goto label_21a7b4;
        case 0x21a7b8u: goto label_21a7b8;
        case 0x21a7bcu: goto label_21a7bc;
        case 0x21a7c0u: goto label_21a7c0;
        case 0x21a7c4u: goto label_21a7c4;
        case 0x21a7c8u: goto label_21a7c8;
        case 0x21a7ccu: goto label_21a7cc;
        case 0x21a7d0u: goto label_21a7d0;
        case 0x21a7d4u: goto label_21a7d4;
        case 0x21a7d8u: goto label_21a7d8;
        case 0x21a7dcu: goto label_21a7dc;
        case 0x21a7e0u: goto label_21a7e0;
        case 0x21a7e4u: goto label_21a7e4;
        case 0x21a7e8u: goto label_21a7e8;
        case 0x21a7ecu: goto label_21a7ec;
        case 0x21a7f0u: goto label_21a7f0;
        case 0x21a7f4u: goto label_21a7f4;
        case 0x21a7f8u: goto label_21a7f8;
        case 0x21a7fcu: goto label_21a7fc;
        case 0x21a800u: goto label_21a800;
        case 0x21a804u: goto label_21a804;
        case 0x21a808u: goto label_21a808;
        case 0x21a80cu: goto label_21a80c;
        case 0x21a810u: goto label_21a810;
        case 0x21a814u: goto label_21a814;
        case 0x21a818u: goto label_21a818;
        case 0x21a81cu: goto label_21a81c;
        case 0x21a820u: goto label_21a820;
        case 0x21a824u: goto label_21a824;
        case 0x21a828u: goto label_21a828;
        case 0x21a82cu: goto label_21a82c;
        case 0x21a830u: goto label_21a830;
        case 0x21a834u: goto label_21a834;
        case 0x21a838u: goto label_21a838;
        case 0x21a83cu: goto label_21a83c;
        case 0x21a840u: goto label_21a840;
        case 0x21a844u: goto label_21a844;
        case 0x21a848u: goto label_21a848;
        case 0x21a84cu: goto label_21a84c;
        case 0x21a850u: goto label_21a850;
        case 0x21a854u: goto label_21a854;
        case 0x21a858u: goto label_21a858;
        case 0x21a85cu: goto label_21a85c;
        case 0x21a860u: goto label_21a860;
        case 0x21a864u: goto label_21a864;
        case 0x21a868u: goto label_21a868;
        case 0x21a86cu: goto label_21a86c;
        case 0x21a870u: goto label_21a870;
        case 0x21a874u: goto label_21a874;
        case 0x21a878u: goto label_21a878;
        case 0x21a87cu: goto label_21a87c;
        case 0x21a880u: goto label_21a880;
        case 0x21a884u: goto label_21a884;
        case 0x21a888u: goto label_21a888;
        case 0x21a88cu: goto label_21a88c;
        case 0x21a890u: goto label_21a890;
        case 0x21a894u: goto label_21a894;
        case 0x21a898u: goto label_21a898;
        case 0x21a89cu: goto label_21a89c;
        case 0x21a8a0u: goto label_21a8a0;
        case 0x21a8a4u: goto label_21a8a4;
        case 0x21a8a8u: goto label_21a8a8;
        case 0x21a8acu: goto label_21a8ac;
        case 0x21a8b0u: goto label_21a8b0;
        case 0x21a8b4u: goto label_21a8b4;
        case 0x21a8b8u: goto label_21a8b8;
        case 0x21a8bcu: goto label_21a8bc;
        case 0x21a8c0u: goto label_21a8c0;
        case 0x21a8c4u: goto label_21a8c4;
        case 0x21a8c8u: goto label_21a8c8;
        case 0x21a8ccu: goto label_21a8cc;
        case 0x21a8d0u: goto label_21a8d0;
        case 0x21a8d4u: goto label_21a8d4;
        case 0x21a8d8u: goto label_21a8d8;
        case 0x21a8dcu: goto label_21a8dc;
        case 0x21a8e0u: goto label_21a8e0;
        case 0x21a8e4u: goto label_21a8e4;
        case 0x21a8e8u: goto label_21a8e8;
        case 0x21a8ecu: goto label_21a8ec;
        case 0x21a8f0u: goto label_21a8f0;
        case 0x21a8f4u: goto label_21a8f4;
        case 0x21a8f8u: goto label_21a8f8;
        case 0x21a8fcu: goto label_21a8fc;
        case 0x21a900u: goto label_21a900;
        case 0x21a904u: goto label_21a904;
        case 0x21a908u: goto label_21a908;
        case 0x21a90cu: goto label_21a90c;
        case 0x21a910u: goto label_21a910;
        case 0x21a914u: goto label_21a914;
        case 0x21a918u: goto label_21a918;
        case 0x21a91cu: goto label_21a91c;
        case 0x21a920u: goto label_21a920;
        case 0x21a924u: goto label_21a924;
        case 0x21a928u: goto label_21a928;
        case 0x21a92cu: goto label_21a92c;
        case 0x21a930u: goto label_21a930;
        case 0x21a934u: goto label_21a934;
        case 0x21a938u: goto label_21a938;
        case 0x21a93cu: goto label_21a93c;
        case 0x21a940u: goto label_21a940;
        case 0x21a944u: goto label_21a944;
        case 0x21a948u: goto label_21a948;
        case 0x21a94cu: goto label_21a94c;
        case 0x21a950u: goto label_21a950;
        case 0x21a954u: goto label_21a954;
        case 0x21a958u: goto label_21a958;
        case 0x21a95cu: goto label_21a95c;
        case 0x21a960u: goto label_21a960;
        case 0x21a964u: goto label_21a964;
        case 0x21a968u: goto label_21a968;
        case 0x21a96cu: goto label_21a96c;
        case 0x21a970u: goto label_21a970;
        case 0x21a974u: goto label_21a974;
        case 0x21a978u: goto label_21a978;
        case 0x21a97cu: goto label_21a97c;
        case 0x21a980u: goto label_21a980;
        case 0x21a984u: goto label_21a984;
        case 0x21a988u: goto label_21a988;
        case 0x21a98cu: goto label_21a98c;
        case 0x21a990u: goto label_21a990;
        case 0x21a994u: goto label_21a994;
        case 0x21a998u: goto label_21a998;
        case 0x21a99cu: goto label_21a99c;
        case 0x21a9a0u: goto label_21a9a0;
        case 0x21a9a4u: goto label_21a9a4;
        case 0x21a9a8u: goto label_21a9a8;
        case 0x21a9acu: goto label_21a9ac;
        case 0x21a9b0u: goto label_21a9b0;
        case 0x21a9b4u: goto label_21a9b4;
        case 0x21a9b8u: goto label_21a9b8;
        case 0x21a9bcu: goto label_21a9bc;
        case 0x21a9c0u: goto label_21a9c0;
        case 0x21a9c4u: goto label_21a9c4;
        case 0x21a9c8u: goto label_21a9c8;
        case 0x21a9ccu: goto label_21a9cc;
        case 0x21a9d0u: goto label_21a9d0;
        case 0x21a9d4u: goto label_21a9d4;
        case 0x21a9d8u: goto label_21a9d8;
        case 0x21a9dcu: goto label_21a9dc;
        case 0x21a9e0u: goto label_21a9e0;
        case 0x21a9e4u: goto label_21a9e4;
        case 0x21a9e8u: goto label_21a9e8;
        case 0x21a9ecu: goto label_21a9ec;
        case 0x21a9f0u: goto label_21a9f0;
        case 0x21a9f4u: goto label_21a9f4;
        case 0x21a9f8u: goto label_21a9f8;
        case 0x21a9fcu: goto label_21a9fc;
        case 0x21aa00u: goto label_21aa00;
        case 0x21aa04u: goto label_21aa04;
        case 0x21aa08u: goto label_21aa08;
        case 0x21aa0cu: goto label_21aa0c;
        case 0x21aa10u: goto label_21aa10;
        case 0x21aa14u: goto label_21aa14;
        case 0x21aa18u: goto label_21aa18;
        case 0x21aa1cu: goto label_21aa1c;
        case 0x21aa20u: goto label_21aa20;
        case 0x21aa24u: goto label_21aa24;
        case 0x21aa28u: goto label_21aa28;
        case 0x21aa2cu: goto label_21aa2c;
        case 0x21aa30u: goto label_21aa30;
        case 0x21aa34u: goto label_21aa34;
        case 0x21aa38u: goto label_21aa38;
        case 0x21aa3cu: goto label_21aa3c;
        case 0x21aa40u: goto label_21aa40;
        case 0x21aa44u: goto label_21aa44;
        case 0x21aa48u: goto label_21aa48;
        case 0x21aa4cu: goto label_21aa4c;
        case 0x21aa50u: goto label_21aa50;
        case 0x21aa54u: goto label_21aa54;
        case 0x21aa58u: goto label_21aa58;
        case 0x21aa5cu: goto label_21aa5c;
        case 0x21aa60u: goto label_21aa60;
        case 0x21aa64u: goto label_21aa64;
        case 0x21aa68u: goto label_21aa68;
        case 0x21aa6cu: goto label_21aa6c;
        case 0x21aa70u: goto label_21aa70;
        case 0x21aa74u: goto label_21aa74;
        case 0x21aa78u: goto label_21aa78;
        case 0x21aa7cu: goto label_21aa7c;
        case 0x21aa80u: goto label_21aa80;
        case 0x21aa84u: goto label_21aa84;
        case 0x21aa88u: goto label_21aa88;
        case 0x21aa8cu: goto label_21aa8c;
        case 0x21aa90u: goto label_21aa90;
        case 0x21aa94u: goto label_21aa94;
        case 0x21aa98u: goto label_21aa98;
        case 0x21aa9cu: goto label_21aa9c;
        case 0x21aaa0u: goto label_21aaa0;
        case 0x21aaa4u: goto label_21aaa4;
        case 0x21aaa8u: goto label_21aaa8;
        case 0x21aaacu: goto label_21aaac;
        case 0x21aab0u: goto label_21aab0;
        case 0x21aab4u: goto label_21aab4;
        case 0x21aab8u: goto label_21aab8;
        case 0x21aabcu: goto label_21aabc;
        case 0x21aac0u: goto label_21aac0;
        case 0x21aac4u: goto label_21aac4;
        case 0x21aac8u: goto label_21aac8;
        case 0x21aaccu: goto label_21aacc;
        case 0x21aad0u: goto label_21aad0;
        case 0x21aad4u: goto label_21aad4;
        case 0x21aad8u: goto label_21aad8;
        case 0x21aadcu: goto label_21aadc;
        case 0x21aae0u: goto label_21aae0;
        case 0x21aae4u: goto label_21aae4;
        case 0x21aae8u: goto label_21aae8;
        case 0x21aaecu: goto label_21aaec;
        case 0x21aaf0u: goto label_21aaf0;
        case 0x21aaf4u: goto label_21aaf4;
        case 0x21aaf8u: goto label_21aaf8;
        case 0x21aafcu: goto label_21aafc;
        case 0x21ab00u: goto label_21ab00;
        case 0x21ab04u: goto label_21ab04;
        case 0x21ab08u: goto label_21ab08;
        case 0x21ab0cu: goto label_21ab0c;
        case 0x21ab10u: goto label_21ab10;
        case 0x21ab14u: goto label_21ab14;
        case 0x21ab18u: goto label_21ab18;
        case 0x21ab1cu: goto label_21ab1c;
        case 0x21ab20u: goto label_21ab20;
        case 0x21ab24u: goto label_21ab24;
        case 0x21ab28u: goto label_21ab28;
        case 0x21ab2cu: goto label_21ab2c;
        case 0x21ab30u: goto label_21ab30;
        case 0x21ab34u: goto label_21ab34;
        case 0x21ab38u: goto label_21ab38;
        case 0x21ab3cu: goto label_21ab3c;
        case 0x21ab40u: goto label_21ab40;
        case 0x21ab44u: goto label_21ab44;
        case 0x21ab48u: goto label_21ab48;
        case 0x21ab4cu: goto label_21ab4c;
        case 0x21ab50u: goto label_21ab50;
        case 0x21ab54u: goto label_21ab54;
        case 0x21ab58u: goto label_21ab58;
        case 0x21ab5cu: goto label_21ab5c;
        case 0x21ab60u: goto label_21ab60;
        case 0x21ab64u: goto label_21ab64;
        case 0x21ab68u: goto label_21ab68;
        case 0x21ab6cu: goto label_21ab6c;
        case 0x21ab70u: goto label_21ab70;
        case 0x21ab74u: goto label_21ab74;
        case 0x21ab78u: goto label_21ab78;
        case 0x21ab7cu: goto label_21ab7c;
        case 0x21ab80u: goto label_21ab80;
        case 0x21ab84u: goto label_21ab84;
        case 0x21ab88u: goto label_21ab88;
        case 0x21ab8cu: goto label_21ab8c;
        case 0x21ab90u: goto label_21ab90;
        case 0x21ab94u: goto label_21ab94;
        case 0x21ab98u: goto label_21ab98;
        case 0x21ab9cu: goto label_21ab9c;
        case 0x21aba0u: goto label_21aba0;
        case 0x21aba4u: goto label_21aba4;
        case 0x21aba8u: goto label_21aba8;
        case 0x21abacu: goto label_21abac;
        case 0x21abb0u: goto label_21abb0;
        case 0x21abb4u: goto label_21abb4;
        case 0x21abb8u: goto label_21abb8;
        case 0x21abbcu: goto label_21abbc;
        case 0x21abc0u: goto label_21abc0;
        case 0x21abc4u: goto label_21abc4;
        case 0x21abc8u: goto label_21abc8;
        case 0x21abccu: goto label_21abcc;
        case 0x21abd0u: goto label_21abd0;
        case 0x21abd4u: goto label_21abd4;
        case 0x21abd8u: goto label_21abd8;
        case 0x21abdcu: goto label_21abdc;
        case 0x21abe0u: goto label_21abe0;
        case 0x21abe4u: goto label_21abe4;
        case 0x21abe8u: goto label_21abe8;
        case 0x21abecu: goto label_21abec;
        case 0x21abf0u: goto label_21abf0;
        case 0x21abf4u: goto label_21abf4;
        case 0x21abf8u: goto label_21abf8;
        case 0x21abfcu: goto label_21abfc;
        case 0x21ac00u: goto label_21ac00;
        case 0x21ac04u: goto label_21ac04;
        case 0x21ac08u: goto label_21ac08;
        case 0x21ac0cu: goto label_21ac0c;
        case 0x21ac10u: goto label_21ac10;
        case 0x21ac14u: goto label_21ac14;
        case 0x21ac18u: goto label_21ac18;
        case 0x21ac1cu: goto label_21ac1c;
        case 0x21ac20u: goto label_21ac20;
        case 0x21ac24u: goto label_21ac24;
        case 0x21ac28u: goto label_21ac28;
        case 0x21ac2cu: goto label_21ac2c;
        case 0x21ac30u: goto label_21ac30;
        case 0x21ac34u: goto label_21ac34;
        case 0x21ac38u: goto label_21ac38;
        case 0x21ac3cu: goto label_21ac3c;
        case 0x21ac40u: goto label_21ac40;
        case 0x21ac44u: goto label_21ac44;
        case 0x21ac48u: goto label_21ac48;
        case 0x21ac4cu: goto label_21ac4c;
        case 0x21ac50u: goto label_21ac50;
        case 0x21ac54u: goto label_21ac54;
        case 0x21ac58u: goto label_21ac58;
        case 0x21ac5cu: goto label_21ac5c;
        case 0x21ac60u: goto label_21ac60;
        case 0x21ac64u: goto label_21ac64;
        case 0x21ac68u: goto label_21ac68;
        case 0x21ac6cu: goto label_21ac6c;
        case 0x21ac70u: goto label_21ac70;
        case 0x21ac74u: goto label_21ac74;
        case 0x21ac78u: goto label_21ac78;
        case 0x21ac7cu: goto label_21ac7c;
        case 0x21ac80u: goto label_21ac80;
        case 0x21ac84u: goto label_21ac84;
        case 0x21ac88u: goto label_21ac88;
        case 0x21ac8cu: goto label_21ac8c;
        case 0x21ac90u: goto label_21ac90;
        case 0x21ac94u: goto label_21ac94;
        case 0x21ac98u: goto label_21ac98;
        case 0x21ac9cu: goto label_21ac9c;
        case 0x21aca0u: goto label_21aca0;
        case 0x21aca4u: goto label_21aca4;
        case 0x21aca8u: goto label_21aca8;
        case 0x21acacu: goto label_21acac;
        case 0x21acb0u: goto label_21acb0;
        case 0x21acb4u: goto label_21acb4;
        case 0x21acb8u: goto label_21acb8;
        case 0x21acbcu: goto label_21acbc;
        case 0x21acc0u: goto label_21acc0;
        case 0x21acc4u: goto label_21acc4;
        case 0x21acc8u: goto label_21acc8;
        case 0x21acccu: goto label_21accc;
        case 0x21acd0u: goto label_21acd0;
        case 0x21acd4u: goto label_21acd4;
        case 0x21acd8u: goto label_21acd8;
        case 0x21acdcu: goto label_21acdc;
        case 0x21ace0u: goto label_21ace0;
        case 0x21ace4u: goto label_21ace4;
        case 0x21ace8u: goto label_21ace8;
        case 0x21acecu: goto label_21acec;
        case 0x21acf0u: goto label_21acf0;
        case 0x21acf4u: goto label_21acf4;
        case 0x21acf8u: goto label_21acf8;
        case 0x21acfcu: goto label_21acfc;
        case 0x21ad00u: goto label_21ad00;
        case 0x21ad04u: goto label_21ad04;
        case 0x21ad08u: goto label_21ad08;
        case 0x21ad0cu: goto label_21ad0c;
        case 0x21ad10u: goto label_21ad10;
        case 0x21ad14u: goto label_21ad14;
        case 0x21ad18u: goto label_21ad18;
        case 0x21ad1cu: goto label_21ad1c;
        case 0x21ad20u: goto label_21ad20;
        case 0x21ad24u: goto label_21ad24;
        case 0x21ad28u: goto label_21ad28;
        case 0x21ad2cu: goto label_21ad2c;
        case 0x21ad30u: goto label_21ad30;
        case 0x21ad34u: goto label_21ad34;
        case 0x21ad38u: goto label_21ad38;
        case 0x21ad3cu: goto label_21ad3c;
        case 0x21ad40u: goto label_21ad40;
        case 0x21ad44u: goto label_21ad44;
        case 0x21ad48u: goto label_21ad48;
        case 0x21ad4cu: goto label_21ad4c;
        case 0x21ad50u: goto label_21ad50;
        case 0x21ad54u: goto label_21ad54;
        case 0x21ad58u: goto label_21ad58;
        case 0x21ad5cu: goto label_21ad5c;
        case 0x21ad60u: goto label_21ad60;
        case 0x21ad64u: goto label_21ad64;
        case 0x21ad68u: goto label_21ad68;
        case 0x21ad6cu: goto label_21ad6c;
        case 0x21ad70u: goto label_21ad70;
        case 0x21ad74u: goto label_21ad74;
        case 0x21ad78u: goto label_21ad78;
        case 0x21ad7cu: goto label_21ad7c;
        case 0x21ad80u: goto label_21ad80;
        case 0x21ad84u: goto label_21ad84;
        case 0x21ad88u: goto label_21ad88;
        case 0x21ad8cu: goto label_21ad8c;
        case 0x21ad90u: goto label_21ad90;
        case 0x21ad94u: goto label_21ad94;
        case 0x21ad98u: goto label_21ad98;
        case 0x21ad9cu: goto label_21ad9c;
        case 0x21ada0u: goto label_21ada0;
        case 0x21ada4u: goto label_21ada4;
        case 0x21ada8u: goto label_21ada8;
        case 0x21adacu: goto label_21adac;
        case 0x21adb0u: goto label_21adb0;
        case 0x21adb4u: goto label_21adb4;
        case 0x21adb8u: goto label_21adb8;
        case 0x21adbcu: goto label_21adbc;
        case 0x21adc0u: goto label_21adc0;
        case 0x21adc4u: goto label_21adc4;
        case 0x21adc8u: goto label_21adc8;
        case 0x21adccu: goto label_21adcc;
        case 0x21add0u: goto label_21add0;
        case 0x21add4u: goto label_21add4;
        case 0x21add8u: goto label_21add8;
        case 0x21addcu: goto label_21addc;
        case 0x21ade0u: goto label_21ade0;
        case 0x21ade4u: goto label_21ade4;
        case 0x21ade8u: goto label_21ade8;
        case 0x21adecu: goto label_21adec;
        case 0x21adf0u: goto label_21adf0;
        case 0x21adf4u: goto label_21adf4;
        case 0x21adf8u: goto label_21adf8;
        case 0x21adfcu: goto label_21adfc;
        case 0x21ae00u: goto label_21ae00;
        case 0x21ae04u: goto label_21ae04;
        case 0x21ae08u: goto label_21ae08;
        case 0x21ae0cu: goto label_21ae0c;
        case 0x21ae10u: goto label_21ae10;
        case 0x21ae14u: goto label_21ae14;
        case 0x21ae18u: goto label_21ae18;
        case 0x21ae1cu: goto label_21ae1c;
        case 0x21ae20u: goto label_21ae20;
        case 0x21ae24u: goto label_21ae24;
        case 0x21ae28u: goto label_21ae28;
        case 0x21ae2cu: goto label_21ae2c;
        case 0x21ae30u: goto label_21ae30;
        case 0x21ae34u: goto label_21ae34;
        case 0x21ae38u: goto label_21ae38;
        case 0x21ae3cu: goto label_21ae3c;
        case 0x21ae40u: goto label_21ae40;
        case 0x21ae44u: goto label_21ae44;
        case 0x21ae48u: goto label_21ae48;
        case 0x21ae4cu: goto label_21ae4c;
        case 0x21ae50u: goto label_21ae50;
        case 0x21ae54u: goto label_21ae54;
        case 0x21ae58u: goto label_21ae58;
        case 0x21ae5cu: goto label_21ae5c;
        case 0x21ae60u: goto label_21ae60;
        case 0x21ae64u: goto label_21ae64;
        case 0x21ae68u: goto label_21ae68;
        case 0x21ae6cu: goto label_21ae6c;
        case 0x21ae70u: goto label_21ae70;
        case 0x21ae74u: goto label_21ae74;
        case 0x21ae78u: goto label_21ae78;
        case 0x21ae7cu: goto label_21ae7c;
        case 0x21ae80u: goto label_21ae80;
        case 0x21ae84u: goto label_21ae84;
        case 0x21ae88u: goto label_21ae88;
        case 0x21ae8cu: goto label_21ae8c;
        case 0x21ae90u: goto label_21ae90;
        case 0x21ae94u: goto label_21ae94;
        case 0x21ae98u: goto label_21ae98;
        case 0x21ae9cu: goto label_21ae9c;
        case 0x21aea0u: goto label_21aea0;
        case 0x21aea4u: goto label_21aea4;
        case 0x21aea8u: goto label_21aea8;
        case 0x21aeacu: goto label_21aeac;
        case 0x21aeb0u: goto label_21aeb0;
        case 0x21aeb4u: goto label_21aeb4;
        case 0x21aeb8u: goto label_21aeb8;
        case 0x21aebcu: goto label_21aebc;
        case 0x21aec0u: goto label_21aec0;
        case 0x21aec4u: goto label_21aec4;
        case 0x21aec8u: goto label_21aec8;
        case 0x21aeccu: goto label_21aecc;
        case 0x21aed0u: goto label_21aed0;
        case 0x21aed4u: goto label_21aed4;
        case 0x21aed8u: goto label_21aed8;
        case 0x21aedcu: goto label_21aedc;
        case 0x21aee0u: goto label_21aee0;
        case 0x21aee4u: goto label_21aee4;
        case 0x21aee8u: goto label_21aee8;
        case 0x21aeecu: goto label_21aeec;
        case 0x21aef0u: goto label_21aef0;
        case 0x21aef4u: goto label_21aef4;
        case 0x21aef8u: goto label_21aef8;
        case 0x21aefcu: goto label_21aefc;
        case 0x21af00u: goto label_21af00;
        case 0x21af04u: goto label_21af04;
        case 0x21af08u: goto label_21af08;
        case 0x21af0cu: goto label_21af0c;
        case 0x21af10u: goto label_21af10;
        case 0x21af14u: goto label_21af14;
        case 0x21af18u: goto label_21af18;
        case 0x21af1cu: goto label_21af1c;
        case 0x21af20u: goto label_21af20;
        case 0x21af24u: goto label_21af24;
        case 0x21af28u: goto label_21af28;
        case 0x21af2cu: goto label_21af2c;
        case 0x21af30u: goto label_21af30;
        case 0x21af34u: goto label_21af34;
        case 0x21af38u: goto label_21af38;
        case 0x21af3cu: goto label_21af3c;
        case 0x21af40u: goto label_21af40;
        case 0x21af44u: goto label_21af44;
        case 0x21af48u: goto label_21af48;
        case 0x21af4cu: goto label_21af4c;
        case 0x21af50u: goto label_21af50;
        case 0x21af54u: goto label_21af54;
        case 0x21af58u: goto label_21af58;
        case 0x21af5cu: goto label_21af5c;
        case 0x21af60u: goto label_21af60;
        case 0x21af64u: goto label_21af64;
        case 0x21af68u: goto label_21af68;
        case 0x21af6cu: goto label_21af6c;
        case 0x21af70u: goto label_21af70;
        case 0x21af74u: goto label_21af74;
        case 0x21af78u: goto label_21af78;
        case 0x21af7cu: goto label_21af7c;
        default: return;
    }

label_21a7b0:
    // 0x21a7b0: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_21a7b4:
    if (ctx->pc == 0x21A7B4u) {
        ctx->pc = 0x21A7B8u;
        goto label_21a7b8;
    }
    ctx->pc = 0x21A7B0u;
    {
        const bool branch_taken_0x21a7b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x21a7b0) {
            ctx->pc = 0x21A7E8u;
            goto label_21a7e8;
        }
    }
    ctx->pc = 0x21A7B8u;
label_21a7b8:
    // 0x21a7b8: 0x8f8292a8  lw          $v0, -0x6D58($gp)
    ctx->pc = 0x21a7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939304)));
label_21a7bc:
    // 0x21a7bc: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x21a7bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
label_21a7c0:
    // 0x21a7c0: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_21a7c4:
    if (ctx->pc == 0x21A7C4u) {
        ctx->pc = 0x21A7C8u;
        goto label_21a7c8;
    }
    ctx->pc = 0x21A7C0u;
    {
        const bool branch_taken_0x21a7c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a7c0) {
            ctx->pc = 0x21A7E8u;
            goto label_21a7e8;
        }
    }
    ctx->pc = 0x21A7C8u;
label_21a7c8:
    // 0x21a7c8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x21a7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_21a7cc:
    // 0x21a7cc: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x21a7ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
label_21a7d0:
    // 0x21a7d0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_21a7d4:
    if (ctx->pc == 0x21A7D4u) {
        ctx->pc = 0x21A7D8u;
        goto label_21a7d8;
    }
    ctx->pc = 0x21A7D0u;
    {
        const bool branch_taken_0x21a7d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a7d0) {
            ctx->pc = 0x21A7E0u;
            goto label_21a7e0;
        }
    }
    ctx->pc = 0x21A7D8u;
label_21a7d8:
    // 0x21a7d8: 0x10000003  b           . + 4 + (0x3 << 2)
label_21a7dc:
    if (ctx->pc == 0x21A7DCu) {
        ctx->pc = 0x21A7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A7D8u;
        // 0x21a7dc: 0xaf8292a8  sw          $v0, -0x6D58($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939304), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A7E0u;
        goto label_21a7e0;
    }
    ctx->pc = 0x21A7D8u;
    {
        const bool branch_taken_0x21a7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A7D8u;
        // 0x21a7dc: 0xaf8292a8  sw          $v0, -0x6D58($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939304), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a7d8) {
            ctx->pc = 0x21A7E8u;
            goto label_21a7e8;
        }
    }
    ctx->pc = 0x21A7E0u;
label_21a7e0:
    // 0x21a7e0: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x21a7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_21a7e4:
    // 0x21a7e4: 0xaf8292a8  sw          $v0, -0x6D58($gp)
    ctx->pc = 0x21a7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939304), GPR_U32(ctx, 2));
label_21a7e8:
    // 0x21a7e8: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
label_21a7ec:
    if (ctx->pc == 0x21A7ECu) {
        ctx->pc = 0x21A7F0u;
        goto label_21a7f0;
    }
    ctx->pc = 0x21A7E8u;
    {
        const bool branch_taken_0x21a7e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a7e8) {
            ctx->pc = 0x21A858u;
            goto label_21a858;
        }
    }
    ctx->pc = 0x21A7F0u;
label_21a7f0:
    // 0x21a7f0: 0x8f829280  lw          $v0, -0x6D80($gp)
    ctx->pc = 0x21a7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939264)));
label_21a7f4:
    // 0x21a7f4: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x21a7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_21a7f8:
    // 0x21a7f8: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
label_21a7fc:
    if (ctx->pc == 0x21A7FCu) {
        ctx->pc = 0x21A7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A7F8u;
        // 0x21a7fc: 0x3062007f  andi        $v0, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A800u;
        goto label_21a800;
    }
    ctx->pc = 0x21A7F8u;
    {
        const bool branch_taken_0x21a7f8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x21A7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A7F8u;
        // 0x21a7fc: 0x3062007f  andi        $v0, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a7f8) {
            ctx->pc = 0x21A80Cu;
            goto label_21a80c;
        }
    }
    ctx->pc = 0x21A800u;
label_21a800:
    // 0x21a800: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_21a804:
    if (ctx->pc == 0x21A804u) {
        ctx->pc = 0x21A808u;
        goto label_21a808;
    }
    ctx->pc = 0x21A800u;
    {
        const bool branch_taken_0x21a800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a800) {
            ctx->pc = 0x21A80Cu;
            goto label_21a80c;
        }
    }
    ctx->pc = 0x21A808u;
label_21a808:
    // 0x21a808: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x21a808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
label_21a80c:
    // 0x21a80c: 0xaf829280  sw          $v0, -0x6D80($gp)
    ctx->pc = 0x21a80cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939264), GPR_U32(ctx, 2));
label_21a810:
    // 0x21a810: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21a810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21a814:
    // 0x21a814: 0x14820010  bne         $a0, $v0, . + 4 + (0x10 << 2)
label_21a818:
    if (ctx->pc == 0x21A818u) {
        ctx->pc = 0x21A81Cu;
        goto label_21a81c;
    }
    ctx->pc = 0x21A814u;
    {
        const bool branch_taken_0x21a814 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x21a814) {
            ctx->pc = 0x21A858u;
            goto label_21a858;
        }
    }
    ctx->pc = 0x21A81Cu;
label_21a81c:
    // 0x21a81c: 0x8f839284  lw          $v1, -0x6D7C($gp)
    ctx->pc = 0x21a81cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939268)));
label_21a820:
    // 0x21a820: 0x8f8292b8  lw          $v0, -0x6D48($gp)
    ctx->pc = 0x21a820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939320)));
label_21a824:
    // 0x21a824: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x21a824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_21a828:
    // 0x21a828: 0xaf839284  sw          $v1, -0x6D7C($gp)
    ctx->pc = 0x21a828u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939268), GPR_U32(ctx, 3));
label_21a82c:
    // 0x21a82c: 0x8f849284  lw          $a0, -0x6D7C($gp)
    ctx->pc = 0x21a82cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939268)));
label_21a830:
    // 0x21a830: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x21a830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_21a834:
    // 0x21a834: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x21a834u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_21a838:
    // 0x21a838: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21a838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_21a83c:
    // 0x21a83c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21a83cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_21a840:
    // 0x21a840: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x21a840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
label_21a844:
    // 0x21a844: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x21a844u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_21a848:
    // 0x21a848: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_21a84c:
    if (ctx->pc == 0x21A84Cu) {
        ctx->pc = 0x21A850u;
        goto label_21a850;
    }
    ctx->pc = 0x21A848u;
    {
        const bool branch_taken_0x21a848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21a848) {
            ctx->pc = 0x21A858u;
            goto label_21a858;
        }
    }
    ctx->pc = 0x21A850u;
label_21a850:
    // 0x21a850: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21a850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_21a854:
    // 0x21a854: 0xaf829288  sw          $v0, -0x6D78($gp)
    ctx->pc = 0x21a854u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939272), GPR_U32(ctx, 2));
label_21a858:
    // 0x21a858: 0x8f839290  lw          $v1, -0x6D70($gp)
    ctx->pc = 0x21a858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939280)));
label_21a85c:
    // 0x21a85c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21a85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21a860:
    // 0x21a860: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
label_21a864:
    if (ctx->pc == 0x21A864u) {
        ctx->pc = 0x21A868u;
        goto label_21a868;
    }
    ctx->pc = 0x21A860u;
    {
        const bool branch_taken_0x21a860 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x21a860) {
            ctx->pc = 0x21A8A0u;
            goto label_21a8a0;
        }
    }
    ctx->pc = 0x21A868u;
label_21a868:
    // 0x21a868: 0x8f82928c  lw          $v0, -0x6D74($gp)
    ctx->pc = 0x21a868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939276)));
label_21a86c:
    // 0x21a86c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x21a86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_21a870:
    // 0x21a870: 0x28410110  slti        $at, $v0, 0x110
    ctx->pc = 0x21a870u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)272) ? 1 : 0);
label_21a874:
    // 0x21a874: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_21a878:
    if (ctx->pc == 0x21A878u) {
        ctx->pc = 0x21A87Cu;
        goto label_21a87c;
    }
    ctx->pc = 0x21A874u;
    {
        const bool branch_taken_0x21a874 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a874) {
            ctx->pc = 0x21A884u;
            goto label_21a884;
        }
    }
    ctx->pc = 0x21A87Cu;
label_21a87c:
    // 0x21a87c: 0x10000003  b           . + 4 + (0x3 << 2)
label_21a880:
    if (ctx->pc == 0x21A880u) {
        ctx->pc = 0x21A880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A87Cu;
        // 0x21a880: 0xaf82928c  sw          $v0, -0x6D74($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939276), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A884u;
        goto label_21a884;
    }
    ctx->pc = 0x21A87Cu;
    {
        const bool branch_taken_0x21a87c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A87Cu;
        // 0x21a880: 0xaf82928c  sw          $v0, -0x6D74($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939276), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a87c) {
            ctx->pc = 0x21A88Cu;
            goto label_21a88c;
        }
    }
    ctx->pc = 0x21A884u;
label_21a884:
    // 0x21a884: 0x24020110  addiu       $v0, $zero, 0x110
    ctx->pc = 0x21a884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
label_21a888:
    // 0x21a888: 0xaf82928c  sw          $v0, -0x6D74($gp)
    ctx->pc = 0x21a888u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939276), GPR_U32(ctx, 2));
label_21a88c:
    // 0x21a88c: 0x28420110  slti        $v0, $v0, 0x110
    ctx->pc = 0x21a88cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)272) ? 1 : 0);
label_21a890:
    // 0x21a890: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_21a894:
    if (ctx->pc == 0x21A894u) {
        ctx->pc = 0x21A898u;
        goto label_21a898;
    }
    ctx->pc = 0x21A890u;
    {
        const bool branch_taken_0x21a890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21a890) {
            ctx->pc = 0x21A8A0u;
            goto label_21a8a0;
        }
    }
    ctx->pc = 0x21A898u;
label_21a898:
    // 0x21a898: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21a898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_21a89c:
    // 0x21a89c: 0xaf829290  sw          $v0, -0x6D70($gp)
    ctx->pc = 0x21a89cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939280), GPR_U32(ctx, 2));
label_21a8a0:
    // 0x21a8a0: 0xc078030  jal         func_1E00C0
label_21a8a4:
    if (ctx->pc == 0x21A8A4u) {
        ctx->pc = 0x21A8A8u;
        goto label_21a8a8;
    }
    ctx->pc = 0x21A8A0u;
    SET_GPR_U32(ctx, 31, 0x21A8A8u);
    ctx->pc = 0x1E00C0u;
    { ctx->pc = 0x1e00c0; return; }
    ctx->pc = 0x21A8A8u;
label_21a8a8:
    // 0x21a8a8: 0xc04e168  jal         func_1385A0
label_21a8ac:
    if (ctx->pc == 0x21A8ACu) {
        ctx->pc = 0x21A8B0u;
        goto label_21a8b0;
    }
    ctx->pc = 0x21A8A8u;
    SET_GPR_U32(ctx, 31, 0x21A8B0u);
    ctx->pc = 0x1385A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385A0u, 0x21A8A8u, 0x21A8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A8B0u;
label_21a8b0:
    // 0x21a8b0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x21a8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_21a8b4:
    // 0x21a8b4: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x21a8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_21a8b8:
    // 0x21a8b8: 0x34433ffc  ori         $v1, $v0, 0x3FFC
    ctx->pc = 0x21a8b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16380);
label_21a8bc:
    // 0x21a8bc: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x21a8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_21a8c0:
    // 0x21a8c0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x21a8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_21a8c4:
    // 0x21a8c4: 0x278292b0  addiu       $v0, $gp, -0x6D50
    ctx->pc = 0x21a8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939312));
label_21a8c8:
    // 0x21a8c8: 0x8f8792ac  lw          $a3, -0x6D54($gp)
    ctx->pc = 0x21a8c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939308)));
label_21a8cc:
    // 0x21a8cc: 0x8f8692b8  lw          $a2, -0x6D48($gp)
    ctx->pc = 0x21a8ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939320)));
label_21a8d0:
    // 0x21a8d0: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x21a8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_21a8d4:
    // 0x21a8d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21a8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_21a8d8:
    // 0x21a8d8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x21a8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_21a8dc:
    // 0x21a8dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21a8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_21a8e0:
    // 0x21a8e0: 0x10e60004  beq         $a3, $a2, . + 4 + (0x4 << 2)
label_21a8e4:
    if (ctx->pc == 0x21A8E4u) {
        ctx->pc = 0x21A8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A8E0u;
        // 0x21a8e4: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A8E8u;
        goto label_21a8e8;
    }
    ctx->pc = 0x21A8E0u;
    {
        const bool branch_taken_0x21a8e0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        ctx->pc = 0x21A8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A8E0u;
        // 0x21a8e4: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a8e0) {
            ctx->pc = 0x21A8F4u;
            goto label_21a8f4;
        }
    }
    ctx->pc = 0x21A8E8u;
label_21a8e8:
    // 0x21a8e8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x21a8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_21a8ec:
    // 0x21a8ec: 0x14c20004  bne         $a2, $v0, . + 4 + (0x4 << 2)
label_21a8f0:
    if (ctx->pc == 0x21A8F0u) {
        ctx->pc = 0x21A8F4u;
        goto label_21a8f4;
    }
    ctx->pc = 0x21A8ECu;
    {
        const bool branch_taken_0x21a8ec = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x21a8ec) {
            ctx->pc = 0x21A900u;
            goto label_21a900;
        }
    }
    ctx->pc = 0x21A8F4u;
label_21a8f4:
    // 0x21a8f4: 0x0  nop
    ctx->pc = 0x21a8f4u;
    // NOP
label_21a8f8:
    // 0x21a8f8: 0x1000000e  b           . + 4 + (0xE << 2)
label_21a8fc:
    if (ctx->pc == 0x21A8FCu) {
        ctx->pc = 0x21A8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A8F8u;
        // 0x21a8fc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A900u;
        goto label_21a900;
    }
    ctx->pc = 0x21A8F8u;
    {
        const bool branch_taken_0x21a8f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A8F8u;
        // 0x21a8fc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a8f8) {
            ctx->pc = 0x21A934u;
            goto label_21a934;
        }
    }
    ctx->pc = 0x21A900u;
label_21a900:
    // 0x21a900: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21a900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_21a904:
    // 0x21a904: 0x14c2000b  bne         $a2, $v0, . + 4 + (0xB << 2)
label_21a908:
    if (ctx->pc == 0x21A908u) {
        ctx->pc = 0x21A908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A904u;
        // 0x21a908: 0x8f8392a8  lw          $v1, -0x6D58($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939304)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A90Cu;
        goto label_21a90c;
    }
    ctx->pc = 0x21A904u;
    {
        const bool branch_taken_0x21a904 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x21A908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A904u;
        // 0x21a908: 0x8f8392a8  lw          $v1, -0x6D58($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a904) {
            ctx->pc = 0x21A934u;
            goto label_21a934;
        }
    }
    ctx->pc = 0x21A90Cu;
label_21a90c:
    // 0x21a90c: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
label_21a910:
    if (ctx->pc == 0x21A910u) {
        ctx->pc = 0x21A914u;
        goto label_21a914;
    }
    ctx->pc = 0x21A90Cu;
    {
        const bool branch_taken_0x21a90c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x21a90c) {
            ctx->pc = 0x21A924u;
            goto label_21a924;
        }
    }
    ctx->pc = 0x21A914u;
label_21a914:
    // 0x21a914: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21a914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_21a918:
    // 0x21a918: 0xdc228ce8  ld          $v0, -0x7318($at)
    ctx->pc = 0x21a918u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 1), 4294937832)));
label_21a91c:
    // 0x21a91c: 0x10000005  b           . + 4 + (0x5 << 2)
label_21a920:
    if (ctx->pc == 0x21A920u) {
        ctx->pc = 0x21A920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A91Cu;
        // 0x21a920: 0xfca20110  sd          $v0, 0x110($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 272), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A924u;
        goto label_21a924;
    }
    ctx->pc = 0x21A91Cu;
    {
        const bool branch_taken_0x21a91c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A91Cu;
        // 0x21a920: 0xfca20110  sd          $v0, 0x110($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 272), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a91c) {
            ctx->pc = 0x21A934u;
            goto label_21a934;
        }
    }
    ctx->pc = 0x21A924u;
label_21a924:
    // 0x21a924: 0x0  nop
    ctx->pc = 0x21a924u;
    // NOP
label_21a928:
    // 0x21a928: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21a928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_21a92c:
    // 0x21a92c: 0xdc228cf0  ld          $v0, -0x7310($at)
    ctx->pc = 0x21a92cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 1), 4294937840)));
label_21a930:
    // 0x21a930: 0xfca20110  sd          $v0, 0x110($a1)
    ctx->pc = 0x21a930u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 272), GPR_U64(ctx, 2));
label_21a934:
    // 0x21a934: 0x0  nop
    ctx->pc = 0x21a934u;
    // NOP
label_21a938:
    // 0x21a938: 0xa0a30123  sb          $v1, 0x123($a1)
    ctx->pc = 0x21a938u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 291), (uint8_t)GPR_U32(ctx, 3));
label_21a93c:
    // 0x21a93c: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x21a93cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_21a940:
    // 0x21a940: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21a940u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21a944:
    // 0x21a944: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21a944u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21a948:
    // 0x21a948: 0xc066c72  jal         func_19B1C8
label_21a94c:
    if (ctx->pc == 0x21A94Cu) {
        ctx->pc = 0x21A94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A948u;
        // 0x21a94c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A950u;
        goto label_21a950;
    }
    ctx->pc = 0x21A948u;
    SET_GPR_U32(ctx, 31, 0x21A950u);
    ctx->pc = 0x21A94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A948u;
    // 0x21a94c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x21A950u;
label_21a950:
    // 0x21a950: 0xc086ea0  jal         func_21BA80
label_21a954:
    if (ctx->pc == 0x21A954u) {
        ctx->pc = 0x21A958u;
        goto label_21a958;
    }
    ctx->pc = 0x21A950u;
    SET_GPR_U32(ctx, 31, 0x21A958u);
    ctx->pc = 0x21BA80u;
    { ctx->pc = 0x21ba80; return; }
    ctx->pc = 0x21A958u;
label_21a958:
    // 0x21a958: 0x8f829290  lw          $v0, -0x6D70($gp)
    ctx->pc = 0x21a958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939280)));
label_21a95c:
    // 0x21a95c: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_21a960:
    if (ctx->pc == 0x21A960u) {
        ctx->pc = 0x21A964u;
        goto label_21a964;
    }
    ctx->pc = 0x21A95Cu;
    {
        const bool branch_taken_0x21a95c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a95c) {
            ctx->pc = 0x21A9F8u;
            goto label_21a9f8;
        }
    }
    ctx->pc = 0x21A964u;
label_21a964:
    // 0x21a964: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x21a964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_21a968:
    // 0x21a968: 0x240200dc  addiu       $v0, $zero, 0xDC
    ctx->pc = 0x21a968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
label_21a96c:
    // 0x21a96c: 0x8c283ffc  lw          $t0, 0x3FFC($at)
    ctx->pc = 0x21a96cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_21a970:
    // 0x21a970: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x21a970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_21a974:
    // 0x21a974: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x21a974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
label_21a978:
    // 0x21a978: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x21a978u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_21a97c:
    // 0x21a97c: 0x3442c00a  ori         $v0, $v0, 0xC00A
    ctx->pc = 0x21a97cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49162);
label_21a980:
    // 0x21a980: 0x8785928c  lh          $a1, -0x6D74($gp)
    ctx->pc = 0x21a980u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939276)));
label_21a984:
    // 0x21a984: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x21a984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_21a988:
    // 0x21a988: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x21a988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_21a98c:
    // 0x21a98c: 0x27879298  addiu       $a3, $gp, -0x6D68
    ctx->pc = 0x21a98cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939288));
label_21a990:
    // 0x21a990: 0x240c0008  addiu       $t4, $zero, 0x8
    ctx->pc = 0x21a990u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_21a994:
    // 0x21a994: 0x240b0f88  addiu       $t3, $zero, 0xF88
    ctx->pc = 0x21a994u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3976));
label_21a998:
    // 0x21a998: 0x240a0388  addiu       $t2, $zero, 0x388
    ctx->pc = 0x21a998u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 904));
label_21a99c:
    // 0x21a99c: 0x81940  sll         $v1, $t0, 5
    ctx->pc = 0x21a99cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
label_21a9a0:
    // 0x21a9a0: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x21a9a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_21a9a4:
    // 0x21a9a4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x21a9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_21a9a8:
    // 0x21a9a8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x21a9a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21a9ac:
    // 0x21a9ac: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x21a9acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_21a9b0:
    // 0x21a9b0: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x21a9b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_21a9b4:
    // 0x21a9b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21a9b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21a9b8:
    // 0x21a9b8: 0x24a3ff08  addiu       $v1, $a1, -0xF8
    ctx->pc = 0x21a9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967048));
label_21a9bc:
    // 0x21a9bc: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x21a9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_21a9c0:
    // 0x21a9c0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x21a9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_21a9c4:
    // 0x21a9c4: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x21a9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_21a9c8:
    // 0x21a9c8: 0xa4a30090  sh          $v1, 0x90($a1)
    ctx->pc = 0x21a9c8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 144), (uint16_t)GPR_U32(ctx, 3));
label_21a9cc:
    // 0x21a9cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21a9ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21a9d0:
    // 0x21a9d0: 0x8783928c  lh          $v1, -0x6D74($gp)
    ctx->pc = 0x21a9d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939276)));
label_21a9d4:
    // 0x21a9d4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x21a9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_21a9d8:
    // 0x21a9d8: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x21a9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_21a9dc:
    // 0x21a9dc: 0xa4a300a0  sh          $v1, 0xA0($a1)
    ctx->pc = 0x21a9dcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 160), (uint16_t)GPR_U32(ctx, 3));
label_21a9e0:
    // 0x21a9e0: 0xa4ac0088  sh          $t4, 0x88($a1)
    ctx->pc = 0x21a9e0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 136), (uint16_t)GPR_U32(ctx, 12));
label_21a9e4:
    // 0x21a9e4: 0xa4ac008a  sh          $t4, 0x8A($a1)
    ctx->pc = 0x21a9e4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 138), (uint16_t)GPR_U32(ctx, 12));
label_21a9e8:
    // 0x21a9e8: 0xa4ab0098  sh          $t3, 0x98($a1)
    ctx->pc = 0x21a9e8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 152), (uint16_t)GPR_U32(ctx, 11));
label_21a9ec:
    // 0x21a9ec: 0xa4aa009a  sh          $t2, 0x9A($a1)
    ctx->pc = 0x21a9ecu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 154), (uint16_t)GPR_U32(ctx, 10));
label_21a9f0:
    // 0x21a9f0: 0xc066c72  jal         func_19B1C8
label_21a9f4:
    if (ctx->pc == 0x21A9F4u) {
        ctx->pc = 0x21A9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A9F0u;
        // 0x21a9f4: 0xfca20050  sd          $v0, 0x50($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 80), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A9F8u;
        goto label_21a9f8;
    }
    ctx->pc = 0x21A9F0u;
    SET_GPR_U32(ctx, 31, 0x21A9F8u);
    ctx->pc = 0x21A9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A9F0u;
    // 0x21a9f4: 0xfca20050  sd          $v0, 0x50($a1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 5), 80), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x21A9F8u;
label_21a9f8:
    // 0x21a9f8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x21a9f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_21a9fc:
    // 0x21a9fc: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x21a9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_21aa00:
    // 0x21aa00: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x21aa00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_21aa04:
    // 0x21aa04: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x21aa04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_21aa08:
    // 0x21aa08: 0x278292a0  addiu       $v0, $gp, -0x6D60
    ctx->pc = 0x21aa08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939296));
label_21aa0c:
    // 0x21aa0c: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x21aa0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_21aa10:
    // 0x21aa10: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21aa10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21aa14:
    // 0x21aa14: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21aa14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21aa18:
    // 0x21aa18: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x21aa18u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_21aa1c:
    // 0x21aa1c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21aa1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_21aa20:
    // 0x21aa20: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x21aa20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_21aa24:
    // 0x21aa24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21aa24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_21aa28:
    // 0x21aa28: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x21aa28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21aa2c:
    // 0x21aa2c: 0xc066c72  jal         func_19B1C8
label_21aa30:
    if (ctx->pc == 0x21AA30u) {
        ctx->pc = 0x21AA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AA2Cu;
        // 0x21aa30: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AA34u;
        goto label_21aa34;
    }
    ctx->pc = 0x21AA2Cu;
    SET_GPR_U32(ctx, 31, 0x21AA34u);
    ctx->pc = 0x21AA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AA2Cu;
    // 0x21aa30: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x21AA34u;
label_21aa34:
    // 0x21aa34: 0xc077fc4  jal         func_1DFF10
label_21aa38:
    if (ctx->pc == 0x21AA38u) {
        ctx->pc = 0x21AA3Cu;
        goto label_21aa3c;
    }
    ctx->pc = 0x21AA34u;
    SET_GPR_U32(ctx, 31, 0x21AA3Cu);
    ctx->pc = 0x1DFF10u;
    { ctx->pc = 0x1dff10; return; }
    ctx->pc = 0x21AA3Cu;
label_21aa3c:
    // 0x21aa3c: 0xc04e120  jal         func_138480
label_21aa40:
    if (ctx->pc == 0x21AA40u) {
        ctx->pc = 0x21AA44u;
        goto label_21aa44;
    }
    ctx->pc = 0x21AA3Cu;
    SET_GPR_U32(ctx, 31, 0x21AA44u);
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x21AA3Cu, 0x21AA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AA44u;
label_21aa44:
    // 0x21aa44: 0xc05b578  jal         func_16D5E0
label_21aa48:
    if (ctx->pc == 0x21AA48u) {
        ctx->pc = 0x21AA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AA44u;
        // 0x21aa48: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AA4Cu;
        goto label_21aa4c;
    }
    ctx->pc = 0x21AA44u;
    SET_GPR_U32(ctx, 31, 0x21AA4Cu);
    ctx->pc = 0x21AA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AA44u;
    // 0x21aa48: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x21AA44u, 0x21AA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AA4Cu;
label_21aa4c:
    // 0x21aa4c: 0xc060258  jal         func_180960
label_21aa50:
    if (ctx->pc == 0x21AA50u) {
        ctx->pc = 0x21AA54u;
        goto label_21aa54;
    }
    ctx->pc = 0x21AA4Cu;
    SET_GPR_U32(ctx, 31, 0x21AA54u);
    ctx->pc = 0x180960u;
    { ctx->pc = 0x180960; return; }
    ctx->pc = 0x21AA54u;
label_21aa54:
    // 0x21aa54: 0x8f828730  lw          $v0, -0x78D0($gp)
    ctx->pc = 0x21aa54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936368)));
label_21aa58:
    // 0x21aa58: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_21aa5c:
    if (ctx->pc == 0x21AA5Cu) {
        ctx->pc = 0x21AA60u;
        goto label_21aa60;
    }
    ctx->pc = 0x21AA58u;
    {
        const bool branch_taken_0x21aa58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21aa58) {
            ctx->pc = 0x21AA68u;
            goto label_21aa68;
        }
    }
    ctx->pc = 0x21AA60u;
label_21aa60:
    // 0x21aa60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21aa60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21aa64:
    // 0x21aa64: 0xaf8292c0  sw          $v0, -0x6D40($gp)
    ctx->pc = 0x21aa64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939328), GPR_U32(ctx, 2));
label_21aa68:
    // 0x21aa68: 0x8f849288  lw          $a0, -0x6D78($gp)
    ctx->pc = 0x21aa68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939272)));
label_21aa6c:
    // 0x21aa6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21aa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21aa70:
    // 0x21aa70: 0x1082ff4d  beq         $a0, $v0, . + 4 + (-0xB3 << 2)
label_21aa74:
    if (ctx->pc == 0x21AA74u) {
        ctx->pc = 0x21AA78u;
        goto label_21aa78;
    }
    ctx->pc = 0x21AA70u;
    {
        const bool branch_taken_0x21aa70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x21aa70) {
            ctx->pc = 0x21A7A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x21a7a8; return; }
        }
    }
    ctx->pc = 0x21AA78u;
label_21aa78:
    // 0x21aa78: 0xaf80927c  sw          $zero, -0x6D84($gp)
    ctx->pc = 0x21aa78u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939260), GPR_U32(ctx, 0));
label_21aa7c:
    // 0x21aa7c: 0xaf8092ac  sw          $zero, -0x6D54($gp)
    ctx->pc = 0x21aa7cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939308), GPR_U32(ctx, 0));
label_21aa80:
    // 0x21aa80: 0xaf8092a8  sw          $zero, -0x6D58($gp)
    ctx->pc = 0x21aa80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939304), GPR_U32(ctx, 0));
label_21aa84:
    // 0x21aa84: 0x8f8292c0  lw          $v0, -0x6D40($gp)
    ctx->pc = 0x21aa84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939328)));
label_21aa88:
    // 0x21aa88: 0x144001b0  bnez        $v0, . + 4 + (0x1B0 << 2)
label_21aa8c:
    if (ctx->pc == 0x21AA8Cu) {
        ctx->pc = 0x21AA90u;
        goto label_21aa90;
    }
    ctx->pc = 0x21AA88u;
    {
        const bool branch_taken_0x21aa88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21aa88) {
            ctx->pc = 0x21B14Cu;
            { ctx->pc = 0x21b14c; return; }
        }
    }
    ctx->pc = 0x21AA90u;
label_21aa90:
    // 0x21aa90: 0xdf8287c8  ld          $v0, -0x7838($gp)
    ctx->pc = 0x21aa90u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936520)));
label_21aa94:
    // 0x21aa94: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x21aa94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
label_21aa98:
    // 0x21aa98: 0x104000d5  beqz        $v0, . + 4 + (0xD5 << 2)
label_21aa9c:
    if (ctx->pc == 0x21AA9Cu) {
        ctx->pc = 0x21AAA0u;
        goto label_21aaa0;
    }
    ctx->pc = 0x21AA98u;
    {
        const bool branch_taken_0x21aa98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21aa98) {
            ctx->pc = 0x21ADF0u;
            goto label_21adf0;
        }
    }
    ctx->pc = 0x21AAA0u;
label_21aaa0:
    // 0x21aaa0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x21aaa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_21aaa4:
    // 0x21aaa4: 0xc05b420  jal         func_16D080
label_21aaa8:
    if (ctx->pc == 0x21AAA8u) {
        ctx->pc = 0x21AAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AAA4u;
        // 0x21aaa8: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AAACu;
        goto label_21aaac;
    }
    ctx->pc = 0x21AAA4u;
    SET_GPR_U32(ctx, 31, 0x21AAACu);
    ctx->pc = 0x21AAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AAA4u;
    // 0x21aaa8: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x21AAA4u, 0x21AAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AAACu;
label_21aaac:
    // 0x21aaac: 0xaf9092bc  sw          $s0, -0x6D44($gp)
    ctx->pc = 0x21aaacu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939324), GPR_U32(ctx, 16));
label_21aab0:
    // 0x21aab0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x21aab0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21aab4:
    // 0x21aab4: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
label_21aab8:
    if (ctx->pc == 0x21AAB8u) {
        ctx->pc = 0x21AAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AAB4u;
        // 0x21aab8: 0x3203000f  andi        $v1, $s0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AABCu;
        goto label_21aabc;
    }
    ctx->pc = 0x21AAB4u;
    {
        const bool branch_taken_0x21aab4 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x21AAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AAB4u;
        // 0x21aab8: 0x3203000f  andi        $v1, $s0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21aab4) {
            ctx->pc = 0x21AAC8u;
            goto label_21aac8;
        }
    }
    ctx->pc = 0x21AABCu;
label_21aabc:
    // 0x21aabc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_21aac0:
    if (ctx->pc == 0x21AAC0u) {
        ctx->pc = 0x21AAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AABCu;
        // 0x21aac0: 0x28610008  slti        $at, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AAC4u;
        goto label_21aac4;
    }
    ctx->pc = 0x21AABCu;
    {
        const bool branch_taken_0x21aabc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AABCu;
        // 0x21aac0: 0x28610008  slti        $at, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21aabc) {
            ctx->pc = 0x21AACCu;
            goto label_21aacc;
        }
    }
    ctx->pc = 0x21AAC4u;
label_21aac4:
    // 0x21aac4: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x21aac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
label_21aac8:
    // 0x21aac8: 0x28610008  slti        $at, $v1, 0x8
    ctx->pc = 0x21aac8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
label_21aacc:
    // 0x21aacc: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_21aad0:
    if (ctx->pc == 0x21AAD0u) {
        ctx->pc = 0x21AAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AACCu;
        // 0x21aad0: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AAD4u;
        goto label_21aad4;
    }
    ctx->pc = 0x21AACCu;
    {
        const bool branch_taken_0x21aacc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AACCu;
        // 0x21aad0: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21aacc) {
            ctx->pc = 0x21AAF4u;
            goto label_21aaf4;
        }
    }
    ctx->pc = 0x21AAD4u;
label_21aad4:
    // 0x21aad4: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x21aad4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_21aad8:
    // 0x21aad8: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
label_21aadc:
    if (ctx->pc == 0x21AADCu) {
        ctx->pc = 0x21AADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AAD8u;
        // 0x21aadc: 0x218c3  sra         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AAE0u;
        goto label_21aae0;
    }
    ctx->pc = 0x21AAD8u;
    {
        const bool branch_taken_0x21aad8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x21AADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AAD8u;
        // 0x21aadc: 0x218c3  sra         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21aad8) {
            ctx->pc = 0x21AB0Cu;
            goto label_21ab0c;
        }
    }
    ctx->pc = 0x21AAE0u;
label_21aae0:
    // 0x21aae0: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x21aae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
label_21aae4:
    // 0x21aae4: 0x218c3  sra         $v1, $v0, 3
    ctx->pc = 0x21aae4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
label_21aae8:
    // 0x21aae8: 0x10000009  b           . + 4 + (0x9 << 2)
label_21aaec:
    if (ctx->pc == 0x21AAECu) {
        ctx->pc = 0x21AAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AAE8u;
        // 0x21aaec: 0xaf839278  sw          $v1, -0x6D88($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939256), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AAF0u;
        goto label_21aaf0;
    }
    ctx->pc = 0x21AAE8u;
    {
        const bool branch_taken_0x21aae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AAE8u;
        // 0x21aaec: 0xaf839278  sw          $v1, -0x6D88($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939256), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21aae8) {
            ctx->pc = 0x21AB10u;
            goto label_21ab10;
        }
    }
    ctx->pc = 0x21AAF0u;
label_21aaf0:
    // 0x21aaf0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x21aaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_21aaf4:
    // 0x21aaf4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x21aaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_21aaf8:
    // 0x21aaf8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x21aaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_21aafc:
    // 0x21aafc: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_21ab00:
    if (ctx->pc == 0x21AB00u) {
        ctx->pc = 0x21AB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AAFCu;
        // 0x21ab00: 0x218c3  sra         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AB04u;
        goto label_21ab04;
    }
    ctx->pc = 0x21AAFCu;
    {
        const bool branch_taken_0x21aafc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x21AB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AAFCu;
        // 0x21ab00: 0x218c3  sra         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21aafc) {
            ctx->pc = 0x21AB0Cu;
            goto label_21ab0c;
        }
    }
    ctx->pc = 0x21AB04u;
label_21ab04:
    // 0x21ab04: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x21ab04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
label_21ab08:
    // 0x21ab08: 0x218c3  sra         $v1, $v0, 3
    ctx->pc = 0x21ab08u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
label_21ab0c:
    // 0x21ab0c: 0xaf839278  sw          $v1, -0x6D88($gp)
    ctx->pc = 0x21ab0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939256), GPR_U32(ctx, 3));
label_21ab10:
    // 0x21ab10: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x21ab10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_21ab14:
    // 0x21ab14: 0x8f8392ac  lw          $v1, -0x6D54($gp)
    ctx->pc = 0x21ab14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939308)));
label_21ab18:
    // 0x21ab18: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_21ab1c:
    if (ctx->pc == 0x21AB1Cu) {
        ctx->pc = 0x21AB20u;
        goto label_21ab20;
    }
    ctx->pc = 0x21AB18u;
    {
        const bool branch_taken_0x21ab18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x21ab18) {
            ctx->pc = 0x21AB50u;
            goto label_21ab50;
        }
    }
    ctx->pc = 0x21AB20u;
label_21ab20:
    // 0x21ab20: 0x8f8292a8  lw          $v0, -0x6D58($gp)
    ctx->pc = 0x21ab20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939304)));
label_21ab24:
    // 0x21ab24: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x21ab24u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
label_21ab28:
    // 0x21ab28: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_21ab2c:
    if (ctx->pc == 0x21AB2Cu) {
        ctx->pc = 0x21AB30u;
        goto label_21ab30;
    }
    ctx->pc = 0x21AB28u;
    {
        const bool branch_taken_0x21ab28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ab28) {
            ctx->pc = 0x21AB50u;
            goto label_21ab50;
        }
    }
    ctx->pc = 0x21AB30u;
label_21ab30:
    // 0x21ab30: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x21ab30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_21ab34:
    // 0x21ab34: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x21ab34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
label_21ab38:
    // 0x21ab38: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_21ab3c:
    if (ctx->pc == 0x21AB3Cu) {
        ctx->pc = 0x21AB40u;
        goto label_21ab40;
    }
    ctx->pc = 0x21AB38u;
    {
        const bool branch_taken_0x21ab38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ab38) {
            ctx->pc = 0x21AB48u;
            goto label_21ab48;
        }
    }
    ctx->pc = 0x21AB40u;
label_21ab40:
    // 0x21ab40: 0x10000003  b           . + 4 + (0x3 << 2)
label_21ab44:
    if (ctx->pc == 0x21AB44u) {
        ctx->pc = 0x21AB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AB40u;
        // 0x21ab44: 0xaf8292a8  sw          $v0, -0x6D58($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939304), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AB48u;
        goto label_21ab48;
    }
    ctx->pc = 0x21AB40u;
    {
        const bool branch_taken_0x21ab40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AB40u;
        // 0x21ab44: 0xaf8292a8  sw          $v0, -0x6D58($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939304), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ab40) {
            ctx->pc = 0x21AB50u;
            goto label_21ab50;
        }
    }
    ctx->pc = 0x21AB48u;
label_21ab48:
    // 0x21ab48: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x21ab48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_21ab4c:
    // 0x21ab4c: 0xaf8292a8  sw          $v0, -0x6D58($gp)
    ctx->pc = 0x21ab4cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939304), GPR_U32(ctx, 2));
label_21ab50:
    // 0x21ab50: 0x8f849288  lw          $a0, -0x6D78($gp)
    ctx->pc = 0x21ab50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939272)));
label_21ab54:
    // 0x21ab54: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
label_21ab58:
    if (ctx->pc == 0x21AB58u) {
        ctx->pc = 0x21AB5Cu;
        goto label_21ab5c;
    }
    ctx->pc = 0x21AB54u;
    {
        const bool branch_taken_0x21ab54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ab54) {
            ctx->pc = 0x21ABC4u;
            goto label_21abc4;
        }
    }
    ctx->pc = 0x21AB5Cu;
label_21ab5c:
    // 0x21ab5c: 0x8f829280  lw          $v0, -0x6D80($gp)
    ctx->pc = 0x21ab5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939264)));
label_21ab60:
    // 0x21ab60: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x21ab60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_21ab64:
    // 0x21ab64: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
label_21ab68:
    if (ctx->pc == 0x21AB68u) {
        ctx->pc = 0x21AB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AB64u;
        // 0x21ab68: 0x3062007f  andi        $v0, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AB6Cu;
        goto label_21ab6c;
    }
    ctx->pc = 0x21AB64u;
    {
        const bool branch_taken_0x21ab64 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x21AB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AB64u;
        // 0x21ab68: 0x3062007f  andi        $v0, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ab64) {
            ctx->pc = 0x21AB78u;
            goto label_21ab78;
        }
    }
    ctx->pc = 0x21AB6Cu;
label_21ab6c:
    // 0x21ab6c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_21ab70:
    if (ctx->pc == 0x21AB70u) {
        ctx->pc = 0x21AB74u;
        goto label_21ab74;
    }
    ctx->pc = 0x21AB6Cu;
    {
        const bool branch_taken_0x21ab6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ab6c) {
            ctx->pc = 0x21AB78u;
            goto label_21ab78;
        }
    }
    ctx->pc = 0x21AB74u;
label_21ab74:
    // 0x21ab74: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x21ab74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
label_21ab78:
    // 0x21ab78: 0xaf829280  sw          $v0, -0x6D80($gp)
    ctx->pc = 0x21ab78u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939264), GPR_U32(ctx, 2));
label_21ab7c:
    // 0x21ab7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21ab7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21ab80:
    // 0x21ab80: 0x14820010  bne         $a0, $v0, . + 4 + (0x10 << 2)
label_21ab84:
    if (ctx->pc == 0x21AB84u) {
        ctx->pc = 0x21AB88u;
        goto label_21ab88;
    }
    ctx->pc = 0x21AB80u;
    {
        const bool branch_taken_0x21ab80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x21ab80) {
            ctx->pc = 0x21ABC4u;
            goto label_21abc4;
        }
    }
    ctx->pc = 0x21AB88u;
label_21ab88:
    // 0x21ab88: 0x8f839284  lw          $v1, -0x6D7C($gp)
    ctx->pc = 0x21ab88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939268)));
label_21ab8c:
    // 0x21ab8c: 0x8f8292b8  lw          $v0, -0x6D48($gp)
    ctx->pc = 0x21ab8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939320)));
label_21ab90:
    // 0x21ab90: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x21ab90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_21ab94:
    // 0x21ab94: 0xaf839284  sw          $v1, -0x6D7C($gp)
    ctx->pc = 0x21ab94u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939268), GPR_U32(ctx, 3));
label_21ab98:
    // 0x21ab98: 0x8f849284  lw          $a0, -0x6D7C($gp)
    ctx->pc = 0x21ab98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939268)));
label_21ab9c:
    // 0x21ab9c: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x21ab9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_21aba0:
    // 0x21aba0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x21aba0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_21aba4:
    // 0x21aba4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21aba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_21aba8:
    // 0x21aba8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21aba8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_21abac:
    // 0x21abac: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x21abacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
label_21abb0:
    // 0x21abb0: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x21abb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_21abb4:
    // 0x21abb4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_21abb8:
    if (ctx->pc == 0x21ABB8u) {
        ctx->pc = 0x21ABBCu;
        goto label_21abbc;
    }
    ctx->pc = 0x21ABB4u;
    {
        const bool branch_taken_0x21abb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21abb4) {
            ctx->pc = 0x21ABC4u;
            goto label_21abc4;
        }
    }
    ctx->pc = 0x21ABBCu;
label_21abbc:
    // 0x21abbc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21abbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_21abc0:
    // 0x21abc0: 0xaf829288  sw          $v0, -0x6D78($gp)
    ctx->pc = 0x21abc0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939272), GPR_U32(ctx, 2));
label_21abc4:
    // 0x21abc4: 0x0  nop
    ctx->pc = 0x21abc4u;
    // NOP
label_21abc8:
    // 0x21abc8: 0x8f839290  lw          $v1, -0x6D70($gp)
    ctx->pc = 0x21abc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939280)));
label_21abcc:
    // 0x21abcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21abccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21abd0:
    // 0x21abd0: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
label_21abd4:
    if (ctx->pc == 0x21ABD4u) {
        ctx->pc = 0x21ABD8u;
        goto label_21abd8;
    }
    ctx->pc = 0x21ABD0u;
    {
        const bool branch_taken_0x21abd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x21abd0) {
            ctx->pc = 0x21AC10u;
            goto label_21ac10;
        }
    }
    ctx->pc = 0x21ABD8u;
label_21abd8:
    // 0x21abd8: 0x8f82928c  lw          $v0, -0x6D74($gp)
    ctx->pc = 0x21abd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939276)));
label_21abdc:
    // 0x21abdc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x21abdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_21abe0:
    // 0x21abe0: 0x28410110  slti        $at, $v0, 0x110
    ctx->pc = 0x21abe0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)272) ? 1 : 0);
label_21abe4:
    // 0x21abe4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_21abe8:
    if (ctx->pc == 0x21ABE8u) {
        ctx->pc = 0x21ABECu;
        goto label_21abec;
    }
    ctx->pc = 0x21ABE4u;
    {
        const bool branch_taken_0x21abe4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21abe4) {
            ctx->pc = 0x21ABF4u;
            goto label_21abf4;
        }
    }
    ctx->pc = 0x21ABECu;
label_21abec:
    // 0x21abec: 0x10000003  b           . + 4 + (0x3 << 2)
label_21abf0:
    if (ctx->pc == 0x21ABF0u) {
        ctx->pc = 0x21ABF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ABECu;
        // 0x21abf0: 0xaf82928c  sw          $v0, -0x6D74($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939276), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21ABF4u;
        goto label_21abf4;
    }
    ctx->pc = 0x21ABECu;
    {
        const bool branch_taken_0x21abec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21ABF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ABECu;
        // 0x21abf0: 0xaf82928c  sw          $v0, -0x6D74($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939276), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21abec) {
            ctx->pc = 0x21ABFCu;
            goto label_21abfc;
        }
    }
    ctx->pc = 0x21ABF4u;
label_21abf4:
    // 0x21abf4: 0x24020110  addiu       $v0, $zero, 0x110
    ctx->pc = 0x21abf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
label_21abf8:
    // 0x21abf8: 0xaf82928c  sw          $v0, -0x6D74($gp)
    ctx->pc = 0x21abf8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939276), GPR_U32(ctx, 2));
label_21abfc:
    // 0x21abfc: 0x28420110  slti        $v0, $v0, 0x110
    ctx->pc = 0x21abfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)272) ? 1 : 0);
label_21ac00:
    // 0x21ac00: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_21ac04:
    if (ctx->pc == 0x21AC04u) {
        ctx->pc = 0x21AC08u;
        goto label_21ac08;
    }
    ctx->pc = 0x21AC00u;
    {
        const bool branch_taken_0x21ac00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21ac00) {
            ctx->pc = 0x21AC10u;
            goto label_21ac10;
        }
    }
    ctx->pc = 0x21AC08u;
label_21ac08:
    // 0x21ac08: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21ac08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_21ac0c:
    // 0x21ac0c: 0xaf829290  sw          $v0, -0x6D70($gp)
    ctx->pc = 0x21ac0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939280), GPR_U32(ctx, 2));
label_21ac10:
    // 0x21ac10: 0xc078030  jal         func_1E00C0
label_21ac14:
    if (ctx->pc == 0x21AC14u) {
        ctx->pc = 0x21AC18u;
        goto label_21ac18;
    }
    ctx->pc = 0x21AC10u;
    SET_GPR_U32(ctx, 31, 0x21AC18u);
    ctx->pc = 0x1E00C0u;
    { ctx->pc = 0x1e00c0; return; }
    ctx->pc = 0x21AC18u;
label_21ac18:
    // 0x21ac18: 0xc04e168  jal         func_1385A0
label_21ac1c:
    if (ctx->pc == 0x21AC1Cu) {
        ctx->pc = 0x21AC20u;
        goto label_21ac20;
    }
    ctx->pc = 0x21AC18u;
    SET_GPR_U32(ctx, 31, 0x21AC20u);
    ctx->pc = 0x1385A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385A0u, 0x21AC18u, 0x21AC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AC20u;
label_21ac20:
    // 0x21ac20: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x21ac20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
label_21ac24:
    // 0x21ac24: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x21ac24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_21ac28:
    // 0x21ac28: 0x34433ffc  ori         $v1, $v0, 0x3FFC
    ctx->pc = 0x21ac28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16380);
label_21ac2c:
    // 0x21ac2c: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x21ac2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_21ac30:
    // 0x21ac30: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x21ac30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_21ac34:
    // 0x21ac34: 0x278292b0  addiu       $v0, $gp, -0x6D50
    ctx->pc = 0x21ac34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939312));
label_21ac38:
    // 0x21ac38: 0x8f8792ac  lw          $a3, -0x6D54($gp)
    ctx->pc = 0x21ac38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939308)));
label_21ac3c:
    // 0x21ac3c: 0x8f8692b8  lw          $a2, -0x6D48($gp)
    ctx->pc = 0x21ac3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939320)));
label_21ac40:
    // 0x21ac40: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x21ac40u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_21ac44:
    // 0x21ac44: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21ac44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_21ac48:
    // 0x21ac48: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x21ac48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_21ac4c:
    // 0x21ac4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21ac4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_21ac50:
    // 0x21ac50: 0x10e60004  beq         $a3, $a2, . + 4 + (0x4 << 2)
label_21ac54:
    if (ctx->pc == 0x21AC54u) {
        ctx->pc = 0x21AC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AC50u;
        // 0x21ac54: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AC58u;
        goto label_21ac58;
    }
    ctx->pc = 0x21AC50u;
    {
        const bool branch_taken_0x21ac50 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        ctx->pc = 0x21AC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AC50u;
        // 0x21ac54: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ac50) {
            ctx->pc = 0x21AC64u;
            goto label_21ac64;
        }
    }
    ctx->pc = 0x21AC58u;
label_21ac58:
    // 0x21ac58: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x21ac58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_21ac5c:
    // 0x21ac5c: 0x14c20004  bne         $a2, $v0, . + 4 + (0x4 << 2)
label_21ac60:
    if (ctx->pc == 0x21AC60u) {
        ctx->pc = 0x21AC64u;
        goto label_21ac64;
    }
    ctx->pc = 0x21AC5Cu;
    {
        const bool branch_taken_0x21ac5c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x21ac5c) {
            ctx->pc = 0x21AC70u;
            goto label_21ac70;
        }
    }
    ctx->pc = 0x21AC64u;
label_21ac64:
    // 0x21ac64: 0x0  nop
    ctx->pc = 0x21ac64u;
    // NOP
label_21ac68:
    // 0x21ac68: 0x1000000e  b           . + 4 + (0xE << 2)
label_21ac6c:
    if (ctx->pc == 0x21AC6Cu) {
        ctx->pc = 0x21AC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AC68u;
        // 0x21ac6c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AC70u;
        goto label_21ac70;
    }
    ctx->pc = 0x21AC68u;
    {
        const bool branch_taken_0x21ac68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AC68u;
        // 0x21ac6c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ac68) {
            ctx->pc = 0x21ACA4u;
            goto label_21aca4;
        }
    }
    ctx->pc = 0x21AC70u;
label_21ac70:
    // 0x21ac70: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21ac70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_21ac74:
    // 0x21ac74: 0x14c2000b  bne         $a2, $v0, . + 4 + (0xB << 2)
label_21ac78:
    if (ctx->pc == 0x21AC78u) {
        ctx->pc = 0x21AC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AC74u;
        // 0x21ac78: 0x8f8392a8  lw          $v1, -0x6D58($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939304)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AC7Cu;
        goto label_21ac7c;
    }
    ctx->pc = 0x21AC74u;
    {
        const bool branch_taken_0x21ac74 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x21AC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AC74u;
        // 0x21ac78: 0x8f8392a8  lw          $v1, -0x6D58($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ac74) {
            ctx->pc = 0x21ACA4u;
            goto label_21aca4;
        }
    }
    ctx->pc = 0x21AC7Cu;
label_21ac7c:
    // 0x21ac7c: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
label_21ac80:
    if (ctx->pc == 0x21AC80u) {
        ctx->pc = 0x21AC84u;
        goto label_21ac84;
    }
    ctx->pc = 0x21AC7Cu;
    {
        const bool branch_taken_0x21ac7c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x21ac7c) {
            ctx->pc = 0x21AC94u;
            goto label_21ac94;
        }
    }
    ctx->pc = 0x21AC84u;
label_21ac84:
    // 0x21ac84: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21ac84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_21ac88:
    // 0x21ac88: 0xdc228ce8  ld          $v0, -0x7318($at)
    ctx->pc = 0x21ac88u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 1), 4294937832)));
label_21ac8c:
    // 0x21ac8c: 0x10000005  b           . + 4 + (0x5 << 2)
label_21ac90:
    if (ctx->pc == 0x21AC90u) {
        ctx->pc = 0x21AC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AC8Cu;
        // 0x21ac90: 0xfca20110  sd          $v0, 0x110($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 272), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AC94u;
        goto label_21ac94;
    }
    ctx->pc = 0x21AC8Cu;
    {
        const bool branch_taken_0x21ac8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AC8Cu;
        // 0x21ac90: 0xfca20110  sd          $v0, 0x110($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 272), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ac8c) {
            ctx->pc = 0x21ACA4u;
            goto label_21aca4;
        }
    }
    ctx->pc = 0x21AC94u;
label_21ac94:
    // 0x21ac94: 0x0  nop
    ctx->pc = 0x21ac94u;
    // NOP
label_21ac98:
    // 0x21ac98: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x21ac98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_21ac9c:
    // 0x21ac9c: 0xdc228cf0  ld          $v0, -0x7310($at)
    ctx->pc = 0x21ac9cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 1), 4294937840)));
label_21aca0:
    // 0x21aca0: 0xfca20110  sd          $v0, 0x110($a1)
    ctx->pc = 0x21aca0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 272), GPR_U64(ctx, 2));
label_21aca4:
    // 0x21aca4: 0x0  nop
    ctx->pc = 0x21aca4u;
    // NOP
label_21aca8:
    // 0x21aca8: 0xa0a30123  sb          $v1, 0x123($a1)
    ctx->pc = 0x21aca8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 291), (uint8_t)GPR_U32(ctx, 3));
label_21acac:
    // 0x21acac: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x21acacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_21acb0:
    // 0x21acb0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21acb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21acb4:
    // 0x21acb4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21acb4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21acb8:
    // 0x21acb8: 0xc066c72  jal         func_19B1C8
label_21acbc:
    if (ctx->pc == 0x21ACBCu) {
        ctx->pc = 0x21ACBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ACB8u;
        // 0x21acbc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21ACC0u;
        goto label_21acc0;
    }
    ctx->pc = 0x21ACB8u;
    SET_GPR_U32(ctx, 31, 0x21ACC0u);
    ctx->pc = 0x21ACBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21ACB8u;
    // 0x21acbc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x21ACC0u;
label_21acc0:
    // 0x21acc0: 0xc086ea0  jal         func_21BA80
label_21acc4:
    if (ctx->pc == 0x21ACC4u) {
        ctx->pc = 0x21ACC8u;
        goto label_21acc8;
    }
    ctx->pc = 0x21ACC0u;
    SET_GPR_U32(ctx, 31, 0x21ACC8u);
    ctx->pc = 0x21BA80u;
    { ctx->pc = 0x21ba80; return; }
    ctx->pc = 0x21ACC8u;
label_21acc8:
    // 0x21acc8: 0x8f829290  lw          $v0, -0x6D70($gp)
    ctx->pc = 0x21acc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939280)));
label_21accc:
    // 0x21accc: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_21acd0:
    if (ctx->pc == 0x21ACD0u) {
        ctx->pc = 0x21ACD4u;
        goto label_21acd4;
    }
    ctx->pc = 0x21ACCCu;
    {
        const bool branch_taken_0x21accc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21accc) {
            ctx->pc = 0x21AD68u;
            goto label_21ad68;
        }
    }
    ctx->pc = 0x21ACD4u;
label_21acd4:
    // 0x21acd4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x21acd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_21acd8:
    // 0x21acd8: 0x240200dc  addiu       $v0, $zero, 0xDC
    ctx->pc = 0x21acd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
label_21acdc:
    // 0x21acdc: 0x8c283ffc  lw          $t0, 0x3FFC($at)
    ctx->pc = 0x21acdcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_21ace0:
    // 0x21ace0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x21ace0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_21ace4:
    // 0x21ace4: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x21ace4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
label_21ace8:
    // 0x21ace8: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x21ace8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_21acec:
    // 0x21acec: 0x3442c00a  ori         $v0, $v0, 0xC00A
    ctx->pc = 0x21acecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49162);
label_21acf0:
    // 0x21acf0: 0x8785928c  lh          $a1, -0x6D74($gp)
    ctx->pc = 0x21acf0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939276)));
label_21acf4:
    // 0x21acf4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x21acf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_21acf8:
    // 0x21acf8: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x21acf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_21acfc:
    // 0x21acfc: 0x27879298  addiu       $a3, $gp, -0x6D68
    ctx->pc = 0x21acfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939288));
label_21ad00:
    // 0x21ad00: 0x240c0008  addiu       $t4, $zero, 0x8
    ctx->pc = 0x21ad00u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_21ad04:
    // 0x21ad04: 0x240b0f88  addiu       $t3, $zero, 0xF88
    ctx->pc = 0x21ad04u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3976));
label_21ad08:
    // 0x21ad08: 0x240a0388  addiu       $t2, $zero, 0x388
    ctx->pc = 0x21ad08u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 904));
label_21ad0c:
    // 0x21ad0c: 0x81940  sll         $v1, $t0, 5
    ctx->pc = 0x21ad0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
label_21ad10:
    // 0x21ad10: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x21ad10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_21ad14:
    // 0x21ad14: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x21ad14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_21ad18:
    // 0x21ad18: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x21ad18u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21ad1c:
    // 0x21ad1c: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x21ad1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_21ad20:
    // 0x21ad20: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x21ad20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_21ad24:
    // 0x21ad24: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21ad24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21ad28:
    // 0x21ad28: 0x24a3ff08  addiu       $v1, $a1, -0xF8
    ctx->pc = 0x21ad28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967048));
label_21ad2c:
    // 0x21ad2c: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x21ad2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_21ad30:
    // 0x21ad30: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x21ad30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_21ad34:
    // 0x21ad34: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x21ad34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_21ad38:
    // 0x21ad38: 0xa4a30090  sh          $v1, 0x90($a1)
    ctx->pc = 0x21ad38u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 144), (uint16_t)GPR_U32(ctx, 3));
label_21ad3c:
    // 0x21ad3c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21ad3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21ad40:
    // 0x21ad40: 0x8783928c  lh          $v1, -0x6D74($gp)
    ctx->pc = 0x21ad40u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939276)));
label_21ad44:
    // 0x21ad44: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x21ad44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_21ad48:
    // 0x21ad48: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x21ad48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_21ad4c:
    // 0x21ad4c: 0xa4a300a0  sh          $v1, 0xA0($a1)
    ctx->pc = 0x21ad4cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 160), (uint16_t)GPR_U32(ctx, 3));
label_21ad50:
    // 0x21ad50: 0xa4ac0088  sh          $t4, 0x88($a1)
    ctx->pc = 0x21ad50u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 136), (uint16_t)GPR_U32(ctx, 12));
label_21ad54:
    // 0x21ad54: 0xa4ac008a  sh          $t4, 0x8A($a1)
    ctx->pc = 0x21ad54u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 138), (uint16_t)GPR_U32(ctx, 12));
label_21ad58:
    // 0x21ad58: 0xa4ab0098  sh          $t3, 0x98($a1)
    ctx->pc = 0x21ad58u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 152), (uint16_t)GPR_U32(ctx, 11));
label_21ad5c:
    // 0x21ad5c: 0xa4aa009a  sh          $t2, 0x9A($a1)
    ctx->pc = 0x21ad5cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 154), (uint16_t)GPR_U32(ctx, 10));
label_21ad60:
    // 0x21ad60: 0xc066c72  jal         func_19B1C8
label_21ad64:
    if (ctx->pc == 0x21AD64u) {
        ctx->pc = 0x21AD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AD60u;
        // 0x21ad64: 0xfca20050  sd          $v0, 0x50($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 80), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AD68u;
        goto label_21ad68;
    }
    ctx->pc = 0x21AD60u;
    SET_GPR_U32(ctx, 31, 0x21AD68u);
    ctx->pc = 0x21AD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AD60u;
    // 0x21ad64: 0xfca20050  sd          $v0, 0x50($a1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 5), 80), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x21AD68u;
label_21ad68:
    // 0x21ad68: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x21ad68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_21ad6c:
    // 0x21ad6c: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x21ad6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_21ad70:
    // 0x21ad70: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x21ad70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_21ad74:
    // 0x21ad74: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x21ad74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_21ad78:
    // 0x21ad78: 0x278292a0  addiu       $v0, $gp, -0x6D60
    ctx->pc = 0x21ad78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939296));
label_21ad7c:
    // 0x21ad7c: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x21ad7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_21ad80:
    // 0x21ad80: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21ad80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21ad84:
    // 0x21ad84: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21ad84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21ad88:
    // 0x21ad88: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x21ad88u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_21ad8c:
    // 0x21ad8c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21ad8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_21ad90:
    // 0x21ad90: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x21ad90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_21ad94:
    // 0x21ad94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21ad94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_21ad98:
    // 0x21ad98: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x21ad98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21ad9c:
    // 0x21ad9c: 0xc066c72  jal         func_19B1C8
label_21ada0:
    if (ctx->pc == 0x21ADA0u) {
        ctx->pc = 0x21ADA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AD9Cu;
        // 0x21ada0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21ADA4u;
        goto label_21ada4;
    }
    ctx->pc = 0x21AD9Cu;
    SET_GPR_U32(ctx, 31, 0x21ADA4u);
    ctx->pc = 0x21ADA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AD9Cu;
    // 0x21ada0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x21ADA4u;
label_21ada4:
    // 0x21ada4: 0xc077fc4  jal         func_1DFF10
label_21ada8:
    if (ctx->pc == 0x21ADA8u) {
        ctx->pc = 0x21ADACu;
        goto label_21adac;
    }
    ctx->pc = 0x21ADA4u;
    SET_GPR_U32(ctx, 31, 0x21ADACu);
    ctx->pc = 0x1DFF10u;
    { ctx->pc = 0x1dff10; return; }
    ctx->pc = 0x21ADACu;
label_21adac:
    // 0x21adac: 0xc04e120  jal         func_138480
label_21adb0:
    if (ctx->pc == 0x21ADB0u) {
        ctx->pc = 0x21ADB4u;
        goto label_21adb4;
    }
    ctx->pc = 0x21ADACu;
    SET_GPR_U32(ctx, 31, 0x21ADB4u);
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x21ADACu, 0x21ADB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21ADB4u;
label_21adb4:
    // 0x21adb4: 0xc05b578  jal         func_16D5E0
label_21adb8:
    if (ctx->pc == 0x21ADB8u) {
        ctx->pc = 0x21ADB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ADB4u;
        // 0x21adb8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21ADBCu;
        goto label_21adbc;
    }
    ctx->pc = 0x21ADB4u;
    SET_GPR_U32(ctx, 31, 0x21ADBCu);
    ctx->pc = 0x21ADB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21ADB4u;
    // 0x21adb8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x21ADB4u, 0x21ADBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21ADBCu;
label_21adbc:
    // 0x21adbc: 0xc060258  jal         func_180960
label_21adc0:
    if (ctx->pc == 0x21ADC0u) {
        ctx->pc = 0x21ADC4u;
        goto label_21adc4;
    }
    ctx->pc = 0x21ADBCu;
    SET_GPR_U32(ctx, 31, 0x21ADC4u);
    ctx->pc = 0x180960u;
    { ctx->pc = 0x180960; return; }
    ctx->pc = 0x21ADC4u;
label_21adc4:
    // 0x21adc4: 0x8f828730  lw          $v0, -0x78D0($gp)
    ctx->pc = 0x21adc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936368)));
label_21adc8:
    // 0x21adc8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_21adcc:
    if (ctx->pc == 0x21ADCCu) {
        ctx->pc = 0x21ADD0u;
        goto label_21add0;
    }
    ctx->pc = 0x21ADC8u;
    {
        const bool branch_taken_0x21adc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21adc8) {
            ctx->pc = 0x21ADD8u;
            goto label_21add8;
        }
    }
    ctx->pc = 0x21ADD0u;
label_21add0:
    // 0x21add0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21add0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21add4:
    // 0x21add4: 0xaf8292c0  sw          $v0, -0x6D40($gp)
    ctx->pc = 0x21add4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939328), GPR_U32(ctx, 2));
label_21add8:
    // 0x21add8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21add8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_21addc:
    // 0x21addc: 0x2a010031  slti        $at, $s0, 0x31
    ctx->pc = 0x21addcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)49) ? 1 : 0);
label_21ade0:
    // 0x21ade0: 0x1420ff34  bnez        $at, . + 4 + (-0xCC << 2)
label_21ade4:
    if (ctx->pc == 0x21ADE4u) {
        ctx->pc = 0x21ADE8u;
        goto label_21ade8;
    }
    ctx->pc = 0x21ADE0u;
    {
        const bool branch_taken_0x21ade0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x21ade0) {
            ctx->pc = 0x21AAB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21aab4;
        }
    }
    ctx->pc = 0x21ADE8u;
label_21ade8:
    // 0x21ade8: 0x100000d8  b           . + 4 + (0xD8 << 2)
label_21adec:
    if (ctx->pc == 0x21ADECu) {
        ctx->pc = 0x21ADF0u;
        goto label_21adf0;
    }
    ctx->pc = 0x21ADE8u;
    {
        const bool branch_taken_0x21ade8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ade8) {
            ctx->pc = 0x21B14Cu;
            { ctx->pc = 0x21b14c; return; }
        }
    }
    ctx->pc = 0x21ADF0u;
label_21adf0:
    // 0x21adf0: 0xdf8287c0  ld          $v0, -0x7840($gp)
    ctx->pc = 0x21adf0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936512)));
label_21adf4:
    // 0x21adf4: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x21adf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_21adf8:
    // 0x21adf8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_21adfc:
    if (ctx->pc == 0x21ADFCu) {
        ctx->pc = 0x21AE00u;
        goto label_21ae00;
    }
    ctx->pc = 0x21ADF8u;
    {
        const bool branch_taken_0x21adf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21adf8) {
            ctx->pc = 0x21AE34u;
            goto label_21ae34;
        }
    }
    ctx->pc = 0x21AE00u;
label_21ae00:
    // 0x21ae00: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21ae00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21ae04:
    // 0x21ae04: 0xc05b420  jal         func_16D080
label_21ae08:
    if (ctx->pc == 0x21AE08u) {
        ctx->pc = 0x21AE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AE04u;
        // 0x21ae08: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AE0Cu;
        goto label_21ae0c;
    }
    ctx->pc = 0x21AE04u;
    SET_GPR_U32(ctx, 31, 0x21AE0Cu);
    ctx->pc = 0x21AE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AE04u;
    // 0x21ae08: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x21AE04u, 0x21AE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AE0Cu;
label_21ae0c:
    // 0x21ae0c: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
label_21ae10:
    if (ctx->pc == 0x21AE10u) {
        ctx->pc = 0x21AE14u;
        goto label_21ae14;
    }
    ctx->pc = 0x21AE0Cu;
    {
        const bool branch_taken_0x21ae0c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x21ae0c) {
            ctx->pc = 0x21AE20u;
            goto label_21ae20;
        }
    }
    ctx->pc = 0x21AE14u;
label_21ae14:
    // 0x21ae14: 0x8f8292b8  lw          $v0, -0x6D48($gp)
    ctx->pc = 0x21ae14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939320)));
label_21ae18:
    // 0x21ae18: 0x10000002  b           . + 4 + (0x2 << 2)
label_21ae1c:
    if (ctx->pc == 0x21AE1Cu) {
        ctx->pc = 0x21AE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AE18u;
        // 0x21ae1c: 0x2450ffff  addiu       $s0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AE20u;
        goto label_21ae20;
    }
    ctx->pc = 0x21AE18u;
    {
        const bool branch_taken_0x21ae18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AE18u;
        // 0x21ae1c: 0x2450ffff  addiu       $s0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ae18) {
            ctx->pc = 0x21AE24u;
            goto label_21ae24;
        }
    }
    ctx->pc = 0x21AE20u;
label_21ae20:
    // 0x21ae20: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x21ae20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_21ae24:
    // 0x21ae24: 0xaf90927c  sw          $s0, -0x6D84($gp)
    ctx->pc = 0x21ae24u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939260), GPR_U32(ctx, 16));
label_21ae28:
    // 0x21ae28: 0xaf9092ac  sw          $s0, -0x6D54($gp)
    ctx->pc = 0x21ae28u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939308), GPR_U32(ctx, 16));
label_21ae2c:
    // 0x21ae2c: 0x10000013  b           . + 4 + (0x13 << 2)
label_21ae30:
    if (ctx->pc == 0x21AE30u) {
        ctx->pc = 0x21AE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AE2Cu;
        // 0x21ae30: 0xaf8092a8  sw          $zero, -0x6D58($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939304), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AE34u;
        goto label_21ae34;
    }
    ctx->pc = 0x21AE2Cu;
    {
        const bool branch_taken_0x21ae2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AE2Cu;
        // 0x21ae30: 0xaf8092a8  sw          $zero, -0x6D58($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939304), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ae2c) {
            ctx->pc = 0x21AE7Cu;
            goto label_21ae7c;
        }
    }
    ctx->pc = 0x21AE34u;
label_21ae34:
    // 0x21ae34: 0x0  nop
    ctx->pc = 0x21ae34u;
    // NOP
label_21ae38:
    // 0x21ae38: 0xdf8287c0  ld          $v0, -0x7840($gp)
    ctx->pc = 0x21ae38u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936512)));
label_21ae3c:
    // 0x21ae3c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x21ae3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_21ae40:
    // 0x21ae40: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_21ae44:
    if (ctx->pc == 0x21AE44u) {
        ctx->pc = 0x21AE48u;
        goto label_21ae48;
    }
    ctx->pc = 0x21AE40u;
    {
        const bool branch_taken_0x21ae40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ae40) {
            ctx->pc = 0x21AE7Cu;
            goto label_21ae7c;
        }
    }
    ctx->pc = 0x21AE48u;
label_21ae48:
    // 0x21ae48: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21ae48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21ae4c:
    // 0x21ae4c: 0xc05b420  jal         func_16D080
label_21ae50:
    if (ctx->pc == 0x21AE50u) {
        ctx->pc = 0x21AE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AE4Cu;
        // 0x21ae50: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AE54u;
        goto label_21ae54;
    }
    ctx->pc = 0x21AE4Cu;
    SET_GPR_U32(ctx, 31, 0x21AE54u);
    ctx->pc = 0x21AE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21AE4Cu;
    // 0x21ae50: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x21AE4Cu, 0x21AE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21AE54u;
label_21ae54:
    // 0x21ae54: 0x8f8292b8  lw          $v0, -0x6D48($gp)
    ctx->pc = 0x21ae54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939320)));
label_21ae58:
    // 0x21ae58: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x21ae58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_21ae5c:
    // 0x21ae5c: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
label_21ae60:
    if (ctx->pc == 0x21AE60u) {
        ctx->pc = 0x21AE64u;
        goto label_21ae64;
    }
    ctx->pc = 0x21AE5Cu;
    {
        const bool branch_taken_0x21ae5c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x21ae5c) {
            ctx->pc = 0x21AE6Cu;
            goto label_21ae6c;
        }
    }
    ctx->pc = 0x21AE64u;
label_21ae64:
    // 0x21ae64: 0x10000002  b           . + 4 + (0x2 << 2)
label_21ae68:
    if (ctx->pc == 0x21AE68u) {
        ctx->pc = 0x21AE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AE64u;
        // 0x21ae68: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AE6Cu;
        goto label_21ae6c;
    }
    ctx->pc = 0x21AE64u;
    {
        const bool branch_taken_0x21ae64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AE64u;
        // 0x21ae68: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ae64) {
            ctx->pc = 0x21AE70u;
            goto label_21ae70;
        }
    }
    ctx->pc = 0x21AE6Cu;
label_21ae6c:
    // 0x21ae6c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21ae6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_21ae70:
    // 0x21ae70: 0xaf90927c  sw          $s0, -0x6D84($gp)
    ctx->pc = 0x21ae70u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939260), GPR_U32(ctx, 16));
label_21ae74:
    // 0x21ae74: 0xaf9092ac  sw          $s0, -0x6D54($gp)
    ctx->pc = 0x21ae74u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939308), GPR_U32(ctx, 16));
label_21ae78:
    // 0x21ae78: 0xaf8092a8  sw          $zero, -0x6D58($gp)
    ctx->pc = 0x21ae78u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939304), GPR_U32(ctx, 0));
label_21ae7c:
    // 0x21ae7c: 0x0  nop
    ctx->pc = 0x21ae7cu;
    // NOP
label_21ae80:
    // 0x21ae80: 0x8f8392ac  lw          $v1, -0x6D54($gp)
    ctx->pc = 0x21ae80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939308)));
label_21ae84:
    // 0x21ae84: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x21ae84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_21ae88:
    // 0x21ae88: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_21ae8c:
    if (ctx->pc == 0x21AE8Cu) {
        ctx->pc = 0x21AE90u;
        goto label_21ae90;
    }
    ctx->pc = 0x21AE88u;
    {
        const bool branch_taken_0x21ae88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x21ae88) {
            ctx->pc = 0x21AEC0u;
            goto label_21aec0;
        }
    }
    ctx->pc = 0x21AE90u;
label_21ae90:
    // 0x21ae90: 0x8f8292a8  lw          $v0, -0x6D58($gp)
    ctx->pc = 0x21ae90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939304)));
label_21ae94:
    // 0x21ae94: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x21ae94u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
label_21ae98:
    // 0x21ae98: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_21ae9c:
    if (ctx->pc == 0x21AE9Cu) {
        ctx->pc = 0x21AEA0u;
        goto label_21aea0;
    }
    ctx->pc = 0x21AE98u;
    {
        const bool branch_taken_0x21ae98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ae98) {
            ctx->pc = 0x21AEC0u;
            goto label_21aec0;
        }
    }
    ctx->pc = 0x21AEA0u;
label_21aea0:
    // 0x21aea0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x21aea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_21aea4:
    // 0x21aea4: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x21aea4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
label_21aea8:
    // 0x21aea8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_21aeac:
    if (ctx->pc == 0x21AEACu) {
        ctx->pc = 0x21AEB0u;
        goto label_21aeb0;
    }
    ctx->pc = 0x21AEA8u;
    {
        const bool branch_taken_0x21aea8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21aea8) {
            ctx->pc = 0x21AEB8u;
            goto label_21aeb8;
        }
    }
    ctx->pc = 0x21AEB0u;
label_21aeb0:
    // 0x21aeb0: 0x10000003  b           . + 4 + (0x3 << 2)
label_21aeb4:
    if (ctx->pc == 0x21AEB4u) {
        ctx->pc = 0x21AEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AEB0u;
        // 0x21aeb4: 0xaf8292a8  sw          $v0, -0x6D58($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939304), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AEB8u;
        goto label_21aeb8;
    }
    ctx->pc = 0x21AEB0u;
    {
        const bool branch_taken_0x21aeb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AEB0u;
        // 0x21aeb4: 0xaf8292a8  sw          $v0, -0x6D58($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939304), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21aeb0) {
            ctx->pc = 0x21AEC0u;
            goto label_21aec0;
        }
    }
    ctx->pc = 0x21AEB8u;
label_21aeb8:
    // 0x21aeb8: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x21aeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_21aebc:
    // 0x21aebc: 0xaf8292a8  sw          $v0, -0x6D58($gp)
    ctx->pc = 0x21aebcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939304), GPR_U32(ctx, 2));
label_21aec0:
    // 0x21aec0: 0x8f849288  lw          $a0, -0x6D78($gp)
    ctx->pc = 0x21aec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939272)));
label_21aec4:
    // 0x21aec4: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
label_21aec8:
    if (ctx->pc == 0x21AEC8u) {
        ctx->pc = 0x21AECCu;
        goto label_21aecc;
    }
    ctx->pc = 0x21AEC4u;
    {
        const bool branch_taken_0x21aec4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x21aec4) {
            ctx->pc = 0x21AF34u;
            goto label_21af34;
        }
    }
    ctx->pc = 0x21AECCu;
label_21aecc:
    // 0x21aecc: 0x8f829280  lw          $v0, -0x6D80($gp)
    ctx->pc = 0x21aeccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939264)));
label_21aed0:
    // 0x21aed0: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x21aed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_21aed4:
    // 0x21aed4: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
label_21aed8:
    if (ctx->pc == 0x21AED8u) {
        ctx->pc = 0x21AED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AED4u;
        // 0x21aed8: 0x3062007f  andi        $v0, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AEDCu;
        goto label_21aedc;
    }
    ctx->pc = 0x21AED4u;
    {
        const bool branch_taken_0x21aed4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x21AED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AED4u;
        // 0x21aed8: 0x3062007f  andi        $v0, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21aed4) {
            ctx->pc = 0x21AEE8u;
            goto label_21aee8;
        }
    }
    ctx->pc = 0x21AEDCu;
label_21aedc:
    // 0x21aedc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_21aee0:
    if (ctx->pc == 0x21AEE0u) {
        ctx->pc = 0x21AEE4u;
        goto label_21aee4;
    }
    ctx->pc = 0x21AEDCu;
    {
        const bool branch_taken_0x21aedc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21aedc) {
            ctx->pc = 0x21AEE8u;
            goto label_21aee8;
        }
    }
    ctx->pc = 0x21AEE4u;
label_21aee4:
    // 0x21aee4: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x21aee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
label_21aee8:
    // 0x21aee8: 0xaf829280  sw          $v0, -0x6D80($gp)
    ctx->pc = 0x21aee8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939264), GPR_U32(ctx, 2));
label_21aeec:
    // 0x21aeec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21aeecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21aef0:
    // 0x21aef0: 0x14820010  bne         $a0, $v0, . + 4 + (0x10 << 2)
label_21aef4:
    if (ctx->pc == 0x21AEF4u) {
        ctx->pc = 0x21AEF8u;
        goto label_21aef8;
    }
    ctx->pc = 0x21AEF0u;
    {
        const bool branch_taken_0x21aef0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x21aef0) {
            ctx->pc = 0x21AF34u;
            goto label_21af34;
        }
    }
    ctx->pc = 0x21AEF8u;
label_21aef8:
    // 0x21aef8: 0x8f839284  lw          $v1, -0x6D7C($gp)
    ctx->pc = 0x21aef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939268)));
label_21aefc:
    // 0x21aefc: 0x8f8292b8  lw          $v0, -0x6D48($gp)
    ctx->pc = 0x21aefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939320)));
label_21af00:
    // 0x21af00: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x21af00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_21af04:
    // 0x21af04: 0xaf839284  sw          $v1, -0x6D7C($gp)
    ctx->pc = 0x21af04u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939268), GPR_U32(ctx, 3));
label_21af08:
    // 0x21af08: 0x8f849284  lw          $a0, -0x6D7C($gp)
    ctx->pc = 0x21af08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939268)));
label_21af0c:
    // 0x21af0c: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x21af0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_21af10:
    // 0x21af10: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x21af10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_21af14:
    // 0x21af14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21af14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_21af18:
    // 0x21af18: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21af18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_21af1c:
    // 0x21af1c: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x21af1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
label_21af20:
    // 0x21af20: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x21af20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_21af24:
    // 0x21af24: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_21af28:
    if (ctx->pc == 0x21AF28u) {
        ctx->pc = 0x21AF2Cu;
        goto label_21af2c;
    }
    ctx->pc = 0x21AF24u;
    {
        const bool branch_taken_0x21af24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21af24) {
            ctx->pc = 0x21AF34u;
            goto label_21af34;
        }
    }
    ctx->pc = 0x21AF2Cu;
label_21af2c:
    // 0x21af2c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21af2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_21af30:
    // 0x21af30: 0xaf829288  sw          $v0, -0x6D78($gp)
    ctx->pc = 0x21af30u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939272), GPR_U32(ctx, 2));
label_21af34:
    // 0x21af34: 0x0  nop
    ctx->pc = 0x21af34u;
    // NOP
label_21af38:
    // 0x21af38: 0x8f839290  lw          $v1, -0x6D70($gp)
    ctx->pc = 0x21af38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939280)));
label_21af3c:
    // 0x21af3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21af3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21af40:
    // 0x21af40: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
label_21af44:
    if (ctx->pc == 0x21AF44u) {
        ctx->pc = 0x21AF48u;
        goto label_21af48;
    }
    ctx->pc = 0x21AF40u;
    {
        const bool branch_taken_0x21af40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x21af40) {
            ctx->pc = 0x21AF80u;
            { ctx->pc = 0x21af80; return; }
        }
    }
    ctx->pc = 0x21AF48u;
label_21af48:
    // 0x21af48: 0x8f82928c  lw          $v0, -0x6D74($gp)
    ctx->pc = 0x21af48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939276)));
label_21af4c:
    // 0x21af4c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x21af4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_21af50:
    // 0x21af50: 0x28410110  slti        $at, $v0, 0x110
    ctx->pc = 0x21af50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)272) ? 1 : 0);
label_21af54:
    // 0x21af54: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_21af58:
    if (ctx->pc == 0x21AF58u) {
        ctx->pc = 0x21AF5Cu;
        goto label_21af5c;
    }
    ctx->pc = 0x21AF54u;
    {
        const bool branch_taken_0x21af54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21af54) {
            ctx->pc = 0x21AF64u;
            goto label_21af64;
        }
    }
    ctx->pc = 0x21AF5Cu;
label_21af5c:
    // 0x21af5c: 0x10000003  b           . + 4 + (0x3 << 2)
label_21af60:
    if (ctx->pc == 0x21AF60u) {
        ctx->pc = 0x21AF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AF5Cu;
        // 0x21af60: 0xaf82928c  sw          $v0, -0x6D74($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939276), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21AF64u;
        goto label_21af64;
    }
    ctx->pc = 0x21AF5Cu;
    {
        const bool branch_taken_0x21af5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21AF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21AF5Cu;
        // 0x21af60: 0xaf82928c  sw          $v0, -0x6D74($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939276), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21af5c) {
            ctx->pc = 0x21AF6Cu;
            goto label_21af6c;
        }
    }
    ctx->pc = 0x21AF64u;
label_21af64:
    // 0x21af64: 0x24020110  addiu       $v0, $zero, 0x110
    ctx->pc = 0x21af64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
label_21af68:
    // 0x21af68: 0xaf82928c  sw          $v0, -0x6D74($gp)
    ctx->pc = 0x21af68u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939276), GPR_U32(ctx, 2));
label_21af6c:
    // 0x21af6c: 0x28420110  slti        $v0, $v0, 0x110
    ctx->pc = 0x21af6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)272) ? 1 : 0);
label_21af70:
    // 0x21af70: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_21af74:
    if (ctx->pc == 0x21AF74u) {
        ctx->pc = 0x21AF78u;
        goto label_21af78;
    }
    ctx->pc = 0x21AF70u;
    {
        const bool branch_taken_0x21af70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21af70) {
            ctx->pc = 0x21AF80u;
            { ctx->pc = 0x21af80; return; }
        }
    }
    ctx->pc = 0x21AF78u;
label_21af78:
    // 0x21af78: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21af78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_21af7c:
    // 0x21af7c: 0xaf829290  sw          $v0, -0x6D70($gp)
    ctx->pc = 0x21af7cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939280), GPR_U32(ctx, 2));
    ctx->pc = 0x21af80u;
    return;
}

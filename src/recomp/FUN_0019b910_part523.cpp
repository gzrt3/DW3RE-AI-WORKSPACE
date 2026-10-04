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


void FUN_0019b910_part523(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x29a730u: goto label_29a730;
        case 0x29a734u: goto label_29a734;
        case 0x29a738u: goto label_29a738;
        case 0x29a73cu: goto label_29a73c;
        case 0x29a740u: goto label_29a740;
        case 0x29a744u: goto label_29a744;
        case 0x29a748u: goto label_29a748;
        case 0x29a74cu: goto label_29a74c;
        case 0x29a750u: goto label_29a750;
        case 0x29a754u: goto label_29a754;
        case 0x29a758u: goto label_29a758;
        case 0x29a75cu: goto label_29a75c;
        case 0x29a760u: goto label_29a760;
        case 0x29a764u: goto label_29a764;
        case 0x29a768u: goto label_29a768;
        case 0x29a76cu: goto label_29a76c;
        case 0x29a770u: goto label_29a770;
        case 0x29a774u: goto label_29a774;
        case 0x29a778u: goto label_29a778;
        case 0x29a77cu: goto label_29a77c;
        case 0x29a780u: goto label_29a780;
        case 0x29a784u: goto label_29a784;
        case 0x29a788u: goto label_29a788;
        case 0x29a78cu: goto label_29a78c;
        case 0x29a790u: goto label_29a790;
        case 0x29a794u: goto label_29a794;
        case 0x29a798u: goto label_29a798;
        case 0x29a79cu: goto label_29a79c;
        case 0x29a7a0u: goto label_29a7a0;
        case 0x29a7a4u: goto label_29a7a4;
        case 0x29a7a8u: goto label_29a7a8;
        case 0x29a7acu: goto label_29a7ac;
        case 0x29a7b0u: goto label_29a7b0;
        case 0x29a7b4u: goto label_29a7b4;
        case 0x29a7b8u: goto label_29a7b8;
        case 0x29a7bcu: goto label_29a7bc;
        case 0x29a7c0u: goto label_29a7c0;
        case 0x29a7c4u: goto label_29a7c4;
        case 0x29a7c8u: goto label_29a7c8;
        case 0x29a7ccu: goto label_29a7cc;
        case 0x29a7d0u: goto label_29a7d0;
        case 0x29a7d4u: goto label_29a7d4;
        case 0x29a7d8u: goto label_29a7d8;
        case 0x29a7dcu: goto label_29a7dc;
        case 0x29a7e0u: goto label_29a7e0;
        case 0x29a7e4u: goto label_29a7e4;
        case 0x29a7e8u: goto label_29a7e8;
        case 0x29a7ecu: goto label_29a7ec;
        case 0x29a7f0u: goto label_29a7f0;
        case 0x29a7f4u: goto label_29a7f4;
        case 0x29a7f8u: goto label_29a7f8;
        case 0x29a7fcu: goto label_29a7fc;
        case 0x29a800u: goto label_29a800;
        case 0x29a804u: goto label_29a804;
        case 0x29a808u: goto label_29a808;
        case 0x29a80cu: goto label_29a80c;
        case 0x29a810u: goto label_29a810;
        case 0x29a814u: goto label_29a814;
        case 0x29a818u: goto label_29a818;
        case 0x29a81cu: goto label_29a81c;
        case 0x29a820u: goto label_29a820;
        case 0x29a824u: goto label_29a824;
        case 0x29a828u: goto label_29a828;
        case 0x29a82cu: goto label_29a82c;
        case 0x29a830u: goto label_29a830;
        case 0x29a834u: goto label_29a834;
        case 0x29a838u: goto label_29a838;
        case 0x29a83cu: goto label_29a83c;
        case 0x29a840u: goto label_29a840;
        case 0x29a844u: goto label_29a844;
        case 0x29a848u: goto label_29a848;
        case 0x29a84cu: goto label_29a84c;
        case 0x29a850u: goto label_29a850;
        case 0x29a854u: goto label_29a854;
        case 0x29a858u: goto label_29a858;
        case 0x29a85cu: goto label_29a85c;
        case 0x29a860u: goto label_29a860;
        case 0x29a864u: goto label_29a864;
        case 0x29a868u: goto label_29a868;
        case 0x29a86cu: goto label_29a86c;
        case 0x29a870u: goto label_29a870;
        case 0x29a874u: goto label_29a874;
        case 0x29a878u: goto label_29a878;
        case 0x29a87cu: goto label_29a87c;
        case 0x29a880u: goto label_29a880;
        case 0x29a884u: goto label_29a884;
        case 0x29a888u: goto label_29a888;
        case 0x29a88cu: goto label_29a88c;
        case 0x29a890u: goto label_29a890;
        case 0x29a894u: goto label_29a894;
        case 0x29a898u: goto label_29a898;
        case 0x29a89cu: goto label_29a89c;
        case 0x29a8a0u: goto label_29a8a0;
        case 0x29a8a4u: goto label_29a8a4;
        case 0x29a8a8u: goto label_29a8a8;
        case 0x29a8acu: goto label_29a8ac;
        case 0x29a8b0u: goto label_29a8b0;
        case 0x29a8b4u: goto label_29a8b4;
        case 0x29a8b8u: goto label_29a8b8;
        case 0x29a8bcu: goto label_29a8bc;
        case 0x29a8c0u: goto label_29a8c0;
        case 0x29a8c4u: goto label_29a8c4;
        case 0x29a8c8u: goto label_29a8c8;
        case 0x29a8ccu: goto label_29a8cc;
        case 0x29a8d0u: goto label_29a8d0;
        case 0x29a8d4u: goto label_29a8d4;
        case 0x29a8d8u: goto label_29a8d8;
        case 0x29a8dcu: goto label_29a8dc;
        case 0x29a8e0u: goto label_29a8e0;
        case 0x29a8e4u: goto label_29a8e4;
        case 0x29a8e8u: goto label_29a8e8;
        case 0x29a8ecu: goto label_29a8ec;
        case 0x29a8f0u: goto label_29a8f0;
        case 0x29a8f4u: goto label_29a8f4;
        case 0x29a8f8u: goto label_29a8f8;
        case 0x29a8fcu: goto label_29a8fc;
        case 0x29a900u: goto label_29a900;
        case 0x29a904u: goto label_29a904;
        case 0x29a908u: goto label_29a908;
        case 0x29a90cu: goto label_29a90c;
        case 0x29a910u: goto label_29a910;
        case 0x29a914u: goto label_29a914;
        case 0x29a918u: goto label_29a918;
        case 0x29a91cu: goto label_29a91c;
        case 0x29a920u: goto label_29a920;
        case 0x29a924u: goto label_29a924;
        case 0x29a928u: goto label_29a928;
        case 0x29a92cu: goto label_29a92c;
        case 0x29a930u: goto label_29a930;
        case 0x29a934u: goto label_29a934;
        case 0x29a938u: goto label_29a938;
        case 0x29a93cu: goto label_29a93c;
        case 0x29a940u: goto label_29a940;
        case 0x29a944u: goto label_29a944;
        case 0x29a948u: goto label_29a948;
        case 0x29a94cu: goto label_29a94c;
        case 0x29a950u: goto label_29a950;
        case 0x29a954u: goto label_29a954;
        case 0x29a958u: goto label_29a958;
        case 0x29a95cu: goto label_29a95c;
        case 0x29a960u: goto label_29a960;
        case 0x29a964u: goto label_29a964;
        case 0x29a968u: goto label_29a968;
        case 0x29a96cu: goto label_29a96c;
        case 0x29a970u: goto label_29a970;
        case 0x29a974u: goto label_29a974;
        case 0x29a978u: goto label_29a978;
        case 0x29a97cu: goto label_29a97c;
        case 0x29a980u: goto label_29a980;
        case 0x29a984u: goto label_29a984;
        case 0x29a988u: goto label_29a988;
        case 0x29a98cu: goto label_29a98c;
        case 0x29a990u: goto label_29a990;
        case 0x29a994u: goto label_29a994;
        case 0x29a998u: goto label_29a998;
        case 0x29a99cu: goto label_29a99c;
        case 0x29a9a0u: goto label_29a9a0;
        case 0x29a9a4u: goto label_29a9a4;
        case 0x29a9a8u: goto label_29a9a8;
        case 0x29a9acu: goto label_29a9ac;
        case 0x29a9b0u: goto label_29a9b0;
        case 0x29a9b4u: goto label_29a9b4;
        case 0x29a9b8u: goto label_29a9b8;
        case 0x29a9bcu: goto label_29a9bc;
        case 0x29a9c0u: goto label_29a9c0;
        case 0x29a9c4u: goto label_29a9c4;
        case 0x29a9c8u: goto label_29a9c8;
        case 0x29a9ccu: goto label_29a9cc;
        case 0x29a9d0u: goto label_29a9d0;
        case 0x29a9d4u: goto label_29a9d4;
        case 0x29a9d8u: goto label_29a9d8;
        case 0x29a9dcu: goto label_29a9dc;
        case 0x29a9e0u: goto label_29a9e0;
        case 0x29a9e4u: goto label_29a9e4;
        case 0x29a9e8u: goto label_29a9e8;
        case 0x29a9ecu: goto label_29a9ec;
        case 0x29a9f0u: goto label_29a9f0;
        case 0x29a9f4u: goto label_29a9f4;
        case 0x29a9f8u: goto label_29a9f8;
        case 0x29a9fcu: goto label_29a9fc;
        case 0x29aa00u: goto label_29aa00;
        case 0x29aa04u: goto label_29aa04;
        case 0x29aa08u: goto label_29aa08;
        case 0x29aa0cu: goto label_29aa0c;
        case 0x29aa10u: goto label_29aa10;
        case 0x29aa14u: goto label_29aa14;
        case 0x29aa18u: goto label_29aa18;
        case 0x29aa1cu: goto label_29aa1c;
        case 0x29aa20u: goto label_29aa20;
        case 0x29aa24u: goto label_29aa24;
        case 0x29aa28u: goto label_29aa28;
        case 0x29aa2cu: goto label_29aa2c;
        case 0x29aa30u: goto label_29aa30;
        case 0x29aa34u: goto label_29aa34;
        case 0x29aa38u: goto label_29aa38;
        case 0x29aa3cu: goto label_29aa3c;
        case 0x29aa40u: goto label_29aa40;
        case 0x29aa44u: goto label_29aa44;
        case 0x29aa48u: goto label_29aa48;
        case 0x29aa4cu: goto label_29aa4c;
        case 0x29aa50u: goto label_29aa50;
        case 0x29aa54u: goto label_29aa54;
        case 0x29aa58u: goto label_29aa58;
        case 0x29aa5cu: goto label_29aa5c;
        case 0x29aa60u: goto label_29aa60;
        case 0x29aa64u: goto label_29aa64;
        case 0x29aa68u: goto label_29aa68;
        case 0x29aa6cu: goto label_29aa6c;
        case 0x29aa70u: goto label_29aa70;
        case 0x29aa74u: goto label_29aa74;
        case 0x29aa78u: goto label_29aa78;
        case 0x29aa7cu: goto label_29aa7c;
        case 0x29aa80u: goto label_29aa80;
        case 0x29aa84u: goto label_29aa84;
        case 0x29aa88u: goto label_29aa88;
        case 0x29aa8cu: goto label_29aa8c;
        case 0x29aa90u: goto label_29aa90;
        case 0x29aa94u: goto label_29aa94;
        case 0x29aa98u: goto label_29aa98;
        case 0x29aa9cu: goto label_29aa9c;
        case 0x29aaa0u: goto label_29aaa0;
        case 0x29aaa4u: goto label_29aaa4;
        case 0x29aaa8u: goto label_29aaa8;
        case 0x29aaacu: goto label_29aaac;
        case 0x29aab0u: goto label_29aab0;
        case 0x29aab4u: goto label_29aab4;
        case 0x29aab8u: goto label_29aab8;
        case 0x29aabcu: goto label_29aabc;
        case 0x29aac0u: goto label_29aac0;
        case 0x29aac4u: goto label_29aac4;
        case 0x29aac8u: goto label_29aac8;
        case 0x29aaccu: goto label_29aacc;
        case 0x29aad0u: goto label_29aad0;
        case 0x29aad4u: goto label_29aad4;
        case 0x29aad8u: goto label_29aad8;
        case 0x29aadcu: goto label_29aadc;
        case 0x29aae0u: goto label_29aae0;
        case 0x29aae4u: goto label_29aae4;
        case 0x29aae8u: goto label_29aae8;
        case 0x29aaecu: goto label_29aaec;
        case 0x29aaf0u: goto label_29aaf0;
        case 0x29aaf4u: goto label_29aaf4;
        case 0x29aaf8u: goto label_29aaf8;
        case 0x29aafcu: goto label_29aafc;
        case 0x29ab00u: goto label_29ab00;
        case 0x29ab04u: goto label_29ab04;
        case 0x29ab08u: goto label_29ab08;
        case 0x29ab0cu: goto label_29ab0c;
        case 0x29ab10u: goto label_29ab10;
        case 0x29ab14u: goto label_29ab14;
        case 0x29ab18u: goto label_29ab18;
        case 0x29ab1cu: goto label_29ab1c;
        case 0x29ab20u: goto label_29ab20;
        case 0x29ab24u: goto label_29ab24;
        case 0x29ab28u: goto label_29ab28;
        case 0x29ab2cu: goto label_29ab2c;
        case 0x29ab30u: goto label_29ab30;
        case 0x29ab34u: goto label_29ab34;
        case 0x29ab38u: goto label_29ab38;
        case 0x29ab3cu: goto label_29ab3c;
        case 0x29ab40u: goto label_29ab40;
        case 0x29ab44u: goto label_29ab44;
        case 0x29ab48u: goto label_29ab48;
        case 0x29ab4cu: goto label_29ab4c;
        case 0x29ab50u: goto label_29ab50;
        case 0x29ab54u: goto label_29ab54;
        case 0x29ab58u: goto label_29ab58;
        case 0x29ab5cu: goto label_29ab5c;
        case 0x29ab60u: goto label_29ab60;
        case 0x29ab64u: goto label_29ab64;
        case 0x29ab68u: goto label_29ab68;
        case 0x29ab6cu: goto label_29ab6c;
        case 0x29ab70u: goto label_29ab70;
        case 0x29ab74u: goto label_29ab74;
        case 0x29ab78u: goto label_29ab78;
        case 0x29ab7cu: goto label_29ab7c;
        case 0x29ab80u: goto label_29ab80;
        case 0x29ab84u: goto label_29ab84;
        case 0x29ab88u: goto label_29ab88;
        case 0x29ab8cu: goto label_29ab8c;
        case 0x29ab90u: goto label_29ab90;
        case 0x29ab94u: goto label_29ab94;
        case 0x29ab98u: goto label_29ab98;
        case 0x29ab9cu: goto label_29ab9c;
        case 0x29aba0u: goto label_29aba0;
        case 0x29aba4u: goto label_29aba4;
        case 0x29aba8u: goto label_29aba8;
        case 0x29abacu: goto label_29abac;
        case 0x29abb0u: goto label_29abb0;
        case 0x29abb4u: goto label_29abb4;
        case 0x29abb8u: goto label_29abb8;
        case 0x29abbcu: goto label_29abbc;
        case 0x29abc0u: goto label_29abc0;
        case 0x29abc4u: goto label_29abc4;
        case 0x29abc8u: goto label_29abc8;
        case 0x29abccu: goto label_29abcc;
        case 0x29abd0u: goto label_29abd0;
        case 0x29abd4u: goto label_29abd4;
        case 0x29abd8u: goto label_29abd8;
        case 0x29abdcu: goto label_29abdc;
        case 0x29abe0u: goto label_29abe0;
        case 0x29abe4u: goto label_29abe4;
        case 0x29abe8u: goto label_29abe8;
        case 0x29abecu: goto label_29abec;
        case 0x29abf0u: goto label_29abf0;
        case 0x29abf4u: goto label_29abf4;
        case 0x29abf8u: goto label_29abf8;
        case 0x29abfcu: goto label_29abfc;
        case 0x29ac00u: goto label_29ac00;
        case 0x29ac04u: goto label_29ac04;
        case 0x29ac08u: goto label_29ac08;
        case 0x29ac0cu: goto label_29ac0c;
        case 0x29ac10u: goto label_29ac10;
        case 0x29ac14u: goto label_29ac14;
        case 0x29ac18u: goto label_29ac18;
        case 0x29ac1cu: goto label_29ac1c;
        case 0x29ac20u: goto label_29ac20;
        case 0x29ac24u: goto label_29ac24;
        case 0x29ac28u: goto label_29ac28;
        case 0x29ac2cu: goto label_29ac2c;
        case 0x29ac30u: goto label_29ac30;
        case 0x29ac34u: goto label_29ac34;
        case 0x29ac38u: goto label_29ac38;
        case 0x29ac3cu: goto label_29ac3c;
        case 0x29ac40u: goto label_29ac40;
        case 0x29ac44u: goto label_29ac44;
        case 0x29ac48u: goto label_29ac48;
        case 0x29ac4cu: goto label_29ac4c;
        case 0x29ac50u: goto label_29ac50;
        case 0x29ac54u: goto label_29ac54;
        case 0x29ac58u: goto label_29ac58;
        case 0x29ac5cu: goto label_29ac5c;
        case 0x29ac60u: goto label_29ac60;
        case 0x29ac64u: goto label_29ac64;
        case 0x29ac68u: goto label_29ac68;
        case 0x29ac6cu: goto label_29ac6c;
        case 0x29ac70u: goto label_29ac70;
        case 0x29ac74u: goto label_29ac74;
        case 0x29ac78u: goto label_29ac78;
        case 0x29ac7cu: goto label_29ac7c;
        case 0x29ac80u: goto label_29ac80;
        case 0x29ac84u: goto label_29ac84;
        case 0x29ac88u: goto label_29ac88;
        case 0x29ac8cu: goto label_29ac8c;
        case 0x29ac90u: goto label_29ac90;
        case 0x29ac94u: goto label_29ac94;
        case 0x29ac98u: goto label_29ac98;
        case 0x29ac9cu: goto label_29ac9c;
        case 0x29aca0u: goto label_29aca0;
        case 0x29aca4u: goto label_29aca4;
        case 0x29aca8u: goto label_29aca8;
        case 0x29acacu: goto label_29acac;
        case 0x29acb0u: goto label_29acb0;
        case 0x29acb4u: goto label_29acb4;
        case 0x29acb8u: goto label_29acb8;
        case 0x29acbcu: goto label_29acbc;
        case 0x29acc0u: goto label_29acc0;
        case 0x29acc4u: goto label_29acc4;
        case 0x29acc8u: goto label_29acc8;
        case 0x29acccu: goto label_29accc;
        case 0x29acd0u: goto label_29acd0;
        case 0x29acd4u: goto label_29acd4;
        case 0x29acd8u: goto label_29acd8;
        case 0x29acdcu: goto label_29acdc;
        case 0x29ace0u: goto label_29ace0;
        case 0x29ace4u: goto label_29ace4;
        case 0x29ace8u: goto label_29ace8;
        case 0x29acecu: goto label_29acec;
        case 0x29acf0u: goto label_29acf0;
        case 0x29acf4u: goto label_29acf4;
        case 0x29acf8u: goto label_29acf8;
        case 0x29acfcu: goto label_29acfc;
        case 0x29ad00u: goto label_29ad00;
        case 0x29ad04u: goto label_29ad04;
        case 0x29ad08u: goto label_29ad08;
        case 0x29ad0cu: goto label_29ad0c;
        case 0x29ad10u: goto label_29ad10;
        case 0x29ad14u: goto label_29ad14;
        case 0x29ad18u: goto label_29ad18;
        case 0x29ad1cu: goto label_29ad1c;
        case 0x29ad20u: goto label_29ad20;
        case 0x29ad24u: goto label_29ad24;
        case 0x29ad28u: goto label_29ad28;
        case 0x29ad2cu: goto label_29ad2c;
        case 0x29ad30u: goto label_29ad30;
        case 0x29ad34u: goto label_29ad34;
        case 0x29ad38u: goto label_29ad38;
        case 0x29ad3cu: goto label_29ad3c;
        case 0x29ad40u: goto label_29ad40;
        case 0x29ad44u: goto label_29ad44;
        case 0x29ad48u: goto label_29ad48;
        case 0x29ad4cu: goto label_29ad4c;
        case 0x29ad50u: goto label_29ad50;
        case 0x29ad54u: goto label_29ad54;
        case 0x29ad58u: goto label_29ad58;
        case 0x29ad5cu: goto label_29ad5c;
        case 0x29ad60u: goto label_29ad60;
        case 0x29ad64u: goto label_29ad64;
        case 0x29ad68u: goto label_29ad68;
        case 0x29ad6cu: goto label_29ad6c;
        case 0x29ad70u: goto label_29ad70;
        case 0x29ad74u: goto label_29ad74;
        case 0x29ad78u: goto label_29ad78;
        case 0x29ad7cu: goto label_29ad7c;
        case 0x29ad80u: goto label_29ad80;
        case 0x29ad84u: goto label_29ad84;
        case 0x29ad88u: goto label_29ad88;
        case 0x29ad8cu: goto label_29ad8c;
        case 0x29ad90u: goto label_29ad90;
        case 0x29ad94u: goto label_29ad94;
        case 0x29ad98u: goto label_29ad98;
        case 0x29ad9cu: goto label_29ad9c;
        case 0x29ada0u: goto label_29ada0;
        case 0x29ada4u: goto label_29ada4;
        case 0x29ada8u: goto label_29ada8;
        case 0x29adacu: goto label_29adac;
        case 0x29adb0u: goto label_29adb0;
        case 0x29adb4u: goto label_29adb4;
        case 0x29adb8u: goto label_29adb8;
        case 0x29adbcu: goto label_29adbc;
        case 0x29adc0u: goto label_29adc0;
        case 0x29adc4u: goto label_29adc4;
        case 0x29adc8u: goto label_29adc8;
        case 0x29adccu: goto label_29adcc;
        case 0x29add0u: goto label_29add0;
        case 0x29add4u: goto label_29add4;
        case 0x29add8u: goto label_29add8;
        case 0x29addcu: goto label_29addc;
        case 0x29ade0u: goto label_29ade0;
        case 0x29ade4u: goto label_29ade4;
        case 0x29ade8u: goto label_29ade8;
        case 0x29adecu: goto label_29adec;
        case 0x29adf0u: goto label_29adf0;
        case 0x29adf4u: goto label_29adf4;
        case 0x29adf8u: goto label_29adf8;
        case 0x29adfcu: goto label_29adfc;
        case 0x29ae00u: goto label_29ae00;
        case 0x29ae04u: goto label_29ae04;
        case 0x29ae08u: goto label_29ae08;
        case 0x29ae0cu: goto label_29ae0c;
        case 0x29ae10u: goto label_29ae10;
        case 0x29ae14u: goto label_29ae14;
        case 0x29ae18u: goto label_29ae18;
        case 0x29ae1cu: goto label_29ae1c;
        case 0x29ae20u: goto label_29ae20;
        case 0x29ae24u: goto label_29ae24;
        case 0x29ae28u: goto label_29ae28;
        case 0x29ae2cu: goto label_29ae2c;
        case 0x29ae30u: goto label_29ae30;
        case 0x29ae34u: goto label_29ae34;
        case 0x29ae38u: goto label_29ae38;
        case 0x29ae3cu: goto label_29ae3c;
        case 0x29ae40u: goto label_29ae40;
        case 0x29ae44u: goto label_29ae44;
        case 0x29ae48u: goto label_29ae48;
        case 0x29ae4cu: goto label_29ae4c;
        case 0x29ae50u: goto label_29ae50;
        case 0x29ae54u: goto label_29ae54;
        case 0x29ae58u: goto label_29ae58;
        case 0x29ae5cu: goto label_29ae5c;
        case 0x29ae60u: goto label_29ae60;
        case 0x29ae64u: goto label_29ae64;
        case 0x29ae68u: goto label_29ae68;
        case 0x29ae6cu: goto label_29ae6c;
        case 0x29ae70u: goto label_29ae70;
        case 0x29ae74u: goto label_29ae74;
        case 0x29ae78u: goto label_29ae78;
        case 0x29ae7cu: goto label_29ae7c;
        case 0x29ae80u: goto label_29ae80;
        case 0x29ae84u: goto label_29ae84;
        case 0x29ae88u: goto label_29ae88;
        case 0x29ae8cu: goto label_29ae8c;
        case 0x29ae90u: goto label_29ae90;
        case 0x29ae94u: goto label_29ae94;
        case 0x29ae98u: goto label_29ae98;
        case 0x29ae9cu: goto label_29ae9c;
        case 0x29aea0u: goto label_29aea0;
        case 0x29aea4u: goto label_29aea4;
        case 0x29aea8u: goto label_29aea8;
        case 0x29aeacu: goto label_29aeac;
        case 0x29aeb0u: goto label_29aeb0;
        case 0x29aeb4u: goto label_29aeb4;
        case 0x29aeb8u: goto label_29aeb8;
        case 0x29aebcu: goto label_29aebc;
        case 0x29aec0u: goto label_29aec0;
        case 0x29aec4u: goto label_29aec4;
        case 0x29aec8u: goto label_29aec8;
        case 0x29aeccu: goto label_29aecc;
        case 0x29aed0u: goto label_29aed0;
        case 0x29aed4u: goto label_29aed4;
        case 0x29aed8u: goto label_29aed8;
        case 0x29aedcu: goto label_29aedc;
        case 0x29aee0u: goto label_29aee0;
        case 0x29aee4u: goto label_29aee4;
        case 0x29aee8u: goto label_29aee8;
        case 0x29aeecu: goto label_29aeec;
        case 0x29aef0u: goto label_29aef0;
        case 0x29aef4u: goto label_29aef4;
        case 0x29aef8u: goto label_29aef8;
        case 0x29aefcu: goto label_29aefc;
        default: return;
    }

label_29a730:
    // 0x29a730: 0x3047e  dsrl32      $zero, $v1, 17
    ctx->pc = 0x29a730u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 3) >> (32 + 17));
label_29a734:
    // 0x29a734: 0x2c  dadd        $zero, $zero, $zero
    ctx->pc = 0x29a734u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_29a738:
    // 0x29a738: 0x15d74  teq         $zero, $at, 373
    ctx->pc = 0x29a738u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_29a73c:
    // 0x29a73c: 0x0  nop
    ctx->pc = 0x29a73cu;
    // NOP
label_29a740:
    // 0x29a740: 0x304aa  .word       0x000304AA                   # slt         $zero, $zero, $v1 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a740u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_29a744:
    // 0x29a744: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x29a744u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_29a748:
    // 0x29a748: 0xa18  .word       0x00000A18                   # mult        $at, $zero, $zero # 00000200 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29a748u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_29a74c:
    // 0x29a74c: 0x0  nop
    ctx->pc = 0x29a74cu;
    // NOP
label_29a750:
    // 0x29a750: 0x304ac  .word       0x000304AC                   # dadd        $zero, $zero, $v1 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a750u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 3); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_29a754:
    // 0x29a754: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x29a754u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_29a758:
    // 0x29a758: 0xa18  .word       0x00000A18                   # mult        $at, $zero, $zero # 00000200 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29a758u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_29a75c:
    // 0x29a75c: 0x0  nop
    ctx->pc = 0x29a75cu;
    // NOP
label_29a760:
    // 0x29a760: 0x304ae  .word       0x000304AE                   # dsub        $zero, $zero, $v1 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a760u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 3); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_29a764:
    // 0x29a764: 0x1c  dmult       $zero, $zero
    ctx->pc = 0x29a764u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x29A764 raw=0x0000001C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29a768:
    // 0x29a768: 0xdf18  .word       0x0000DF18                   # mult        $k1, $zero, $zero # 00000700 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29a768u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 27, (int32_t)result); }
label_29a76c:
    // 0x29a76c: 0x0  nop
    ctx->pc = 0x29a76cu;
    // NOP
label_29a770:
    // 0x29a770: 0x304ca  .word       0x000304CA                   # movz        $zero, $zero, $v1 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a770u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_29a774:
    // 0x29a774: 0x1c  dmult       $zero, $zero
    ctx->pc = 0x29a774u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x29A774 raw=0x0000001C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29a778:
    // 0x29a778: 0xdf08  .word       0x0000DF08                   # jr          $zero # 0000DF00 <InstrIdType: CPU_SPECIAL>
label_29a77c:
    if (ctx->pc == 0x29A77Cu) {
        ctx->pc = 0x29A780u;
        goto label_29a780;
    }
    ctx->pc = 0x29A778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A778u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29A780u;
label_29a780:
    // 0x29a780: 0x304e6  .word       0x000304E6                   # xor         $zero, $zero, $v1 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a780u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 3));
label_29a784:
    // 0x29a784: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x29a784u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_29a788:
    // 0x29a788: 0x166c  .word       0x0000166C                   # dadd        $v0, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a788u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, r); }
label_29a78c:
    // 0x29a78c: 0x0  nop
    ctx->pc = 0x29a78cu;
    // NOP
label_29a790:
    // 0x29a790: 0x304e9  .word       0x000304E9                   # mtsa        $zero # 000304C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29a790u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_29a794:
    // 0x29a794: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x29a794u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_29a798:
    // 0x29a798: 0x166c  .word       0x0000166C                   # dadd        $v0, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a798u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, r); }
label_29a79c:
    // 0x29a79c: 0x0  nop
    ctx->pc = 0x29a79cu;
    // NOP
label_29a7a0:
    // 0x29a7a0: 0x304ec  .word       0x000304EC                   # dadd        $zero, $zero, $v1 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a7a0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 3); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_29a7a4:
    // 0x29a7a4: 0x46  .word       0x00000046                   # srlv        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a7a4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29a7a8:
    // 0x29a7a8: 0x2299c  .word       0x0002299C                   # dmult       $zero, $v0 # 00002980 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a7a8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x29A7A8 raw=0x0002299C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29a7ac:
    // 0x29a7ac: 0x0  nop
    ctx->pc = 0x29a7acu;
    // NOP
label_29a7b0:
    // 0x29a7b0: 0x30532  tlt         $zero, $v1, 20
    ctx->pc = 0x29a7b0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29a7b4:
    // 0x29a7b4: 0x46  .word       0x00000046                   # srlv        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a7b4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29a7b8:
    // 0x29a7b8: 0x228d0  .word       0x000228D0                   # mfhi        $a1 # 000200C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a7b8u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_29a7bc:
    // 0x29a7bc: 0x0  nop
    ctx->pc = 0x29a7bcu;
    // NOP
label_29a7c0:
    // 0x29a7c0: 0x30578  dsll        $zero, $v1, 21
    ctx->pc = 0x29a7c0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 3) << 21);
label_29a7c4:
    // 0x29a7c4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x29a7c4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_29a7c8:
    // 0x29a7c8: 0xe40  sll         $at, $zero, 25
    ctx->pc = 0x29a7c8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_29a7cc:
    // 0x29a7cc: 0x0  nop
    ctx->pc = 0x29a7ccu;
    // NOP
label_29a7d0:
    // 0x29a7d0: 0x3057a  dsrl        $zero, $v1, 21
    ctx->pc = 0x29a7d0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 3) >> 21);
label_29a7d4:
    // 0x29a7d4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x29a7d4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_29a7d8:
    // 0x29a7d8: 0xe40  sll         $at, $zero, 25
    ctx->pc = 0x29a7d8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_29a7dc:
    // 0x29a7dc: 0x0  nop
    ctx->pc = 0x29a7dcu;
    // NOP
label_29a7e0:
    // 0x29a7e0: 0x3057c  dsll32      $zero, $v1, 21
    ctx->pc = 0x29a7e0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 3) << (32 + 21));
label_29a7e4:
    // 0x29a7e4: 0x38  dsll        $zero, $zero, 0
    ctx->pc = 0x29a7e4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 0);
label_29a7e8:
    // 0x29a7e8: 0x1ba1c  .word       0x0001BA1C                   # dmult       $zero, $at # 0000BA00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a7e8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x29A7E8 raw=0x0001BA1C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29a7ec:
    // 0x29a7ec: 0x0  nop
    ctx->pc = 0x29a7ecu;
    // NOP
label_29a7f0:
    // 0x29a7f0: 0x305b4  teq         $zero, $v1, 22
    ctx->pc = 0x29a7f0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29a7f4:
    // 0x29a7f4: 0x38  dsll        $zero, $zero, 0
    ctx->pc = 0x29a7f4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 0);
label_29a7f8:
    // 0x29a7f8: 0x1b9b8  dsll        $s7, $at, 6
    ctx->pc = 0x29a7f8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 1) << 6);
label_29a7fc:
    // 0x29a7fc: 0x0  nop
    ctx->pc = 0x29a7fcu;
    // NOP
label_29a800:
    // 0x29a800: 0x305ec  .word       0x000305EC                   # dadd        $zero, $zero, $v1 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a800u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 3); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_29a804:
    // 0x29a804: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a804u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29A804 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29a808:
    // 0x29a808: 0x1f0  tge         $zero, $zero, 7
    ctx->pc = 0x29a808u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29a80c:
    // 0x29a80c: 0x0  nop
    ctx->pc = 0x29a80cu;
    // NOP
label_29a810:
    // 0x29a810: 0x305ed  .word       0x000305ED                   # daddu       $zero, $zero, $v1 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a810u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 3));
label_29a814:
    // 0x29a814: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a814u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29A814 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29a818:
    // 0x29a818: 0x1f0  tge         $zero, $zero, 7
    ctx->pc = 0x29a818u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29a81c:
    // 0x29a81c: 0x0  nop
    ctx->pc = 0x29a81cu;
    // NOP
label_29a820:
    // 0x29a820: 0x305ee  .word       0x000305EE                   # dsub        $zero, $zero, $v1 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a820u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 3); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_29a824:
    // 0x29a824: 0x58  .word       0x00000058                   # mult        $zero, $zero, $zero # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29a824u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_29a828:
    // 0x29a828: 0x2bd5c  .word       0x0002BD5C                   # dmult       $zero, $v0 # 0000BD40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a828u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x29A828 raw=0x0002BD5C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29a82c:
    // 0x29a82c: 0x0  nop
    ctx->pc = 0x29a82cu;
    // NOP
label_29a830:
    // 0x29a830: 0x30646  .word       0x00030646                   # srlv        $zero, $v1, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a830u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 0) & 0x1F));
label_29a834:
    // 0x29a834: 0x58  .word       0x00000058                   # mult        $zero, $zero, $zero # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29a834u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_29a838:
    // 0x29a838: 0x2bc84  .word       0x0002BC84                   # sllv        $s7, $v0, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a838u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 0) & 0x1F));
label_29a83c:
    // 0x29a83c: 0x0  nop
    ctx->pc = 0x29a83cu;
    // NOP
label_29a840:
    // 0x29a840: 0x3069e  .word       0x0003069E                   # ddiv        $zero, $zero, $v1 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a840u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x29A840 raw=0x0003069E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29a844:
    // 0x29a844: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a844u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x29A844 raw=0x00000005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29a848:
    // 0x29a848: 0x2558  .word       0x00002558                   # mult        $a0, $zero, $zero # 00000540 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29a848u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_29a84c:
    // 0x29a84c: 0x0  nop
    ctx->pc = 0x29a84cu;
    // NOP
label_29a850:
    // 0x29a850: 0x306a3  .word       0x000306A3                   # negu        $zero, $v1 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a850u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_29a854:
    // 0x29a854: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a854u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x29A854 raw=0x00000005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29a858:
    // 0x29a858: 0x2558  .word       0x00002558                   # mult        $a0, $zero, $zero # 00000540 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29a858u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_29a85c:
    // 0x29a85c: 0x0  nop
    ctx->pc = 0x29a85cu;
    // NOP
label_29a860:
    // 0x29a860: 0x306a8  .word       0x000306A8                   # mfsa        $zero # 00030680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29a860u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_29a864:
    // 0x29a864: 0x40  sll         $zero, $zero, 1
    ctx->pc = 0x29a864u;
    
label_29a868:
    // 0x29a868: 0x1f8ac  .word       0x0001F8AC                   # dadd        $ra, $zero, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a868u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, r); }
label_29a86c:
    // 0x29a86c: 0x0  nop
    ctx->pc = 0x29a86cu;
    // NOP
label_29a870:
    // 0x29a870: 0x306e8  .word       0x000306E8                   # mfsa        $zero # 000306C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29a870u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_29a874:
    // 0x29a874: 0x3f  dsra32      $zero, $zero, 0
    ctx->pc = 0x29a874u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 0));
label_29a878:
    // 0x29a878: 0x1f774  teq         $zero, $at, 989
    ctx->pc = 0x29a878u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_29a87c:
    // 0x29a87c: 0x0  nop
    ctx->pc = 0x29a87cu;
    // NOP
label_29a880:
    // 0x29a880: 0x30727  .word       0x00030727                   # nor         $zero, $zero, $v1 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a880u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
label_29a884:
    // 0x29a884: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a884u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x29A884 raw=0x00000005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29a888:
    // 0x29a888: 0x2174  teq         $zero, $zero, 133
    ctx->pc = 0x29a888u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29a88c:
    // 0x29a88c: 0x0  nop
    ctx->pc = 0x29a88cu;
    // NOP
label_29a890:
    // 0x29a890: 0x3072c  .word       0x0003072C                   # dadd        $zero, $zero, $v1 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a890u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 3); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_29a894:
    // 0x29a894: 0x5  .word       0x00000005                   # INVALID     $zero, $zero, 0x5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a894u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x29A894 raw=0x00000005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29a898:
    // 0x29a898: 0x2174  teq         $zero, $zero, 133
    ctx->pc = 0x29a898u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29a89c:
    // 0x29a89c: 0x0  nop
    ctx->pc = 0x29a89cu;
    // NOP
label_29a8a0:
    // 0x29a8a0: 0x30731  tgeu        $zero, $v1, 28
    ctx->pc = 0x29a8a0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29a8a4:
    // 0x29a8a4: 0x11  mthi        $zero
    ctx->pc = 0x29a8a4u;
    ctx->hi = GPR_U64(ctx, 0);
label_29a8a8:
    // 0x29a8a8: 0x87e8  .word       0x000087E8                   # mfsa        $s0 # 000007C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29a8a8u;
    SET_GPR_U32(ctx, 16, ctx->sa);
label_29a8ac:
    // 0x29a8ac: 0x0  nop
    ctx->pc = 0x29a8acu;
    // NOP
label_29a8b0:
    // 0x29a8b0: 0x30742  srl         $zero, $v1, 29
    ctx->pc = 0x29a8b0u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 3), 29));
label_29a8b4:
    // 0x29a8b4: 0x11  mthi        $zero
    ctx->pc = 0x29a8b4u;
    ctx->hi = GPR_U64(ctx, 0);
label_29a8b8:
    // 0x29a8b8: 0x87b0  tge         $zero, $zero, 542
    ctx->pc = 0x29a8b8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29a8bc:
    // 0x29a8bc: 0x0  nop
    ctx->pc = 0x29a8bcu;
    // NOP
label_29a8c0:
    // 0x29a8c0: 0x30753  .word       0x00030753                   # mtlo        $zero # 00030740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a8c0u;
    ctx->lo = GPR_U64(ctx, 0);
label_29a8c4:
    // 0x29a8c4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x29a8c4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_29a8c8:
    // 0x29a8c8: 0x858  .word       0x00000858                   # mult        $at, $zero, $zero # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29a8c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_29a8cc:
    // 0x29a8cc: 0x0  nop
    ctx->pc = 0x29a8ccu;
    // NOP
label_29a8d0:
    // 0x29a8d0: 0x30755  .word       0x00030755                   # INVALID     $zero, $v1, 0x755 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a8d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x29A8D0 raw=0x00030755"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29a8d4:
    // 0x29a8d4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x29a8d4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_29a8d8:
    // 0x29a8d8: 0x858  .word       0x00000858                   # mult        $at, $zero, $zero # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29a8d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_29a8dc:
    // 0x29a8dc: 0x0  nop
    ctx->pc = 0x29a8dcu;
    // NOP
label_29a8e0:
    // 0x29a8e0: 0x30757  .word       0x00030757                   # dsrav       $zero, $v1, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a8e0u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 3) >> (GPR_U32(ctx, 0) & 0x3F));
label_29a8e4:
    // 0x29a8e4: 0x2b  sltu        $zero, $zero, $zero
    ctx->pc = 0x29a8e4u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_29a8e8:
    // 0x29a8e8: 0x15464  .word       0x00015464                   # and         $t2, $zero, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a8e8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_29a8ec:
    // 0x29a8ec: 0x0  nop
    ctx->pc = 0x29a8ecu;
    // NOP
label_29a8f0:
    // 0x29a8f0: 0x30782  srl         $zero, $v1, 30
    ctx->pc = 0x29a8f0u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 3), 30));
label_29a8f4:
    // 0x29a8f4: 0x2b  sltu        $zero, $zero, $zero
    ctx->pc = 0x29a8f4u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_29a8f8:
    // 0x29a8f8: 0x1542c  .word       0x0001542C                   # dadd        $t2, $zero, $at # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a8f8u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 10, r); }
label_29a8fc:
    // 0x29a8fc: 0x0  nop
    ctx->pc = 0x29a8fcu;
    // NOP
label_29a900:
    // 0x29a900: 0x307ad  .word       0x000307AD                   # daddu       $zero, $zero, $v1 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a900u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 3));
label_29a904:
    // 0x29a904: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a904u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29A904 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29a908:
    // 0x29a908: 0x1f0  tge         $zero, $zero, 7
    ctx->pc = 0x29a908u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29a90c:
    // 0x29a90c: 0x0  nop
    ctx->pc = 0x29a90cu;
    // NOP
label_29a910:
    // 0x29a910: 0x307ae  .word       0x000307AE                   # dsub        $zero, $zero, $v1 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a910u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 3); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_29a914:
    // 0x29a914: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a914u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29A914 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29a918:
    // 0x29a918: 0x1f0  tge         $zero, $zero, 7
    ctx->pc = 0x29a918u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29a91c:
    // 0x29a91c: 0x0  nop
    ctx->pc = 0x29a91cu;
    // NOP
label_29a920:
    // 0x29a920: 0x307af  .word       0x000307AF                   # dsubu       $zero, $zero, $v1 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a920u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 3));
label_29a924:
    // 0x29a924: 0x36  tne         $zero, $zero, 0
    ctx->pc = 0x29a924u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29a928:
    // 0x29a928: 0x1a904  .word       0x0001A904                   # sllv        $s5, $at, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a928u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_29a92c:
    // 0x29a92c: 0x0  nop
    ctx->pc = 0x29a92cu;
    // NOP
label_29a930:
    // 0x29a930: 0x307e5  .word       0x000307E5                   # or          $zero, $zero, $v1 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a930u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 3));
label_29a934:
    // 0x29a934: 0x36  tne         $zero, $zero, 0
    ctx->pc = 0x29a934u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29a938:
    // 0x29a938: 0x1a890  .word       0x0001A890                   # mfhi        $s5 # 00010080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a938u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_29a93c:
    // 0x29a93c: 0x0  nop
    ctx->pc = 0x29a93cu;
    // NOP
label_29a940:
    // 0x29a940: 0x3081b  divu        $at, $zero, $v1
    ctx->pc = 0x29a940u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_29a944:
    // 0x29a944: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x29a944u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_29a948:
    // 0x29a948: 0xd00  sll         $at, $zero, 20
    ctx->pc = 0x29a948u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_29a94c:
    // 0x29a94c: 0x0  nop
    ctx->pc = 0x29a94cu;
    // NOP
label_29a950:
    // 0x29a950: 0x3081d  .word       0x0003081D                   # dmultu      $zero, $v1 # 00000800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a950u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x29A950 raw=0x0003081D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29a954:
    // 0x29a954: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x29a954u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_29a958:
    // 0x29a958: 0xd00  sll         $at, $zero, 20
    ctx->pc = 0x29a958u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_29a95c:
    // 0x29a95c: 0x0  nop
    ctx->pc = 0x29a95cu;
    // NOP
label_29a960:
    // 0x29a960: 0x3081f  ddivu       $at, $zero, $v1
    ctx->pc = 0x29a960u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x29A960 raw=0x0003081F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29a964:
    // 0x29a964: 0x2d  daddu       $zero, $zero, $zero
    ctx->pc = 0x29a964u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29a968:
    // 0x29a968: 0x163f4  teq         $zero, $at, 399
    ctx->pc = 0x29a968u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_29a96c:
    // 0x29a96c: 0x0  nop
    ctx->pc = 0x29a96cu;
    // NOP
label_29a970:
    // 0x29a970: 0x3084c  .word       0x0003084C                   # syscall     33 # 00030000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a970u;
    ctx->pc = 0x29A974u;
runtime->handleSyscall(rdram, ctx, 0xC21u);
label_29a974:
    // 0x29a974: 0x2d  daddu       $zero, $zero, $zero
    ctx->pc = 0x29a974u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29a978:
    // 0x29a978: 0x16368  .word       0x00016368                   # mfsa        $t4 # 00010340 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29a978u;
    SET_GPR_U32(ctx, 12, ctx->sa);
label_29a97c:
    // 0x29a97c: 0x0  nop
    ctx->pc = 0x29a97cu;
    // NOP
label_29a980:
    // 0x29a980: 0x30879  .word       0x00030879                   # INVALID     $zero, $v1, 0x879 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a980u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x29A980 raw=0x00030879"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29a984:
    // 0x29a984: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x29a984u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_29a988:
    // 0x29a988: 0xc68  .word       0x00000C68                   # mfsa        $at # 00000440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29a988u;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_29a98c:
    // 0x29a98c: 0x0  nop
    ctx->pc = 0x29a98cu;
    // NOP
label_29a990:
    // 0x29a990: 0x3087b  dsra        $at, $v1, 1
    ctx->pc = 0x29a990u;
    SET_GPR_S64(ctx, 1, GPR_S64(ctx, 3) >> 1);
label_29a994:
    // 0x29a994: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x29a994u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_29a998:
    // 0x29a998: 0xc68  .word       0x00000C68                   # mfsa        $at # 00000440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29a998u;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_29a99c:
    // 0x29a99c: 0x0  nop
    ctx->pc = 0x29a99cu;
    // NOP
label_29a9a0:
    // 0x29a9a0: 0x3087d  .word       0x0003087D                   # INVALID     $zero, $v1, 0x87D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a9a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x29A9A0 raw=0x0003087D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29a9a4:
    // 0x29a9a4: 0x1a  div         $zero, $zero, $zero
    ctx->pc = 0x29a9a4u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_29a9a8:
    // 0x29a9a8: 0xca68  .word       0x0000CA68                   # mfsa        $t9 # 00000240 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29a9a8u;
    SET_GPR_U32(ctx, 25, ctx->sa);
label_29a9ac:
    // 0x29a9ac: 0x0  nop
    ctx->pc = 0x29a9acu;
    // NOP
label_29a9b0:
    // 0x29a9b0: 0x30897  .word       0x00030897                   # dsrav       $at, $v1, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a9b0u;
    SET_GPR_S64(ctx, 1, GPR_S64(ctx, 3) >> (GPR_U32(ctx, 0) & 0x3F));
label_29a9b4:
    // 0x29a9b4: 0x1a  div         $zero, $zero, $zero
    ctx->pc = 0x29a9b4u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_29a9b8:
    // 0x29a9b8: 0xc9d4  .word       0x0000C9D4                   # dsllv       $t9, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a9b8u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_29a9bc:
    // 0x29a9bc: 0x0  nop
    ctx->pc = 0x29a9bcu;
    // NOP
label_29a9c0:
    // 0x29a9c0: 0x308b1  tgeu        $zero, $v1, 34
    ctx->pc = 0x29a9c0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29a9c4:
    // 0x29a9c4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a9c4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29A9C4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29a9c8:
    // 0x29a9c8: 0x1f0  tge         $zero, $zero, 7
    ctx->pc = 0x29a9c8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29a9cc:
    // 0x29a9cc: 0x0  nop
    ctx->pc = 0x29a9ccu;
    // NOP
label_29a9d0:
    // 0x29a9d0: 0x308b2  tlt         $zero, $v1, 34
    ctx->pc = 0x29a9d0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29a9d4:
    // 0x29a9d4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a9d4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29A9D4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29a9d8:
    // 0x29a9d8: 0x1f0  tge         $zero, $zero, 7
    ctx->pc = 0x29a9d8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29a9dc:
    // 0x29a9dc: 0x0  nop
    ctx->pc = 0x29a9dcu;
    // NOP
label_29a9e0:
    // 0x29a9e0: 0x308b3  tltu        $zero, $v1, 34
    ctx->pc = 0x29a9e0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29a9e4:
    // 0x29a9e4: 0x22  neg         $zero, $zero
    ctx->pc = 0x29a9e4u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_29a9e8:
    // 0x29a9e8: 0x10d1c  .word       0x00010D1C                   # dmult       $zero, $at # 00000D00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a9e8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x29A9E8 raw=0x00010D1C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29a9ec:
    // 0x29a9ec: 0x0  nop
    ctx->pc = 0x29a9ecu;
    // NOP
label_29a9f0:
    // 0x29a9f0: 0x308d5  .word       0x000308D5                   # INVALID     $zero, $v1, 0x8D5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a9f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x29A9F0 raw=0x000308D5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29a9f4:
    // 0x29a9f4: 0x22  neg         $zero, $zero
    ctx->pc = 0x29a9f4u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_29a9f8:
    // 0x29a9f8: 0x10cc4  .word       0x00010CC4                   # sllv        $at, $at, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a9f8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_29a9fc:
    // 0x29a9fc: 0x0  nop
    ctx->pc = 0x29a9fcu;
    // NOP
label_29aa00:
    // 0x29aa00: 0x308f7  .word       0x000308F7                   # INVALID     $zero, $v1, 0x8F7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29aa00u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x29AA00 raw=0x000308F7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29aa04:
    // 0x29aa04: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x29aa04u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29aa08:
    // 0x29aa08: 0x3758  .word       0x00003758                   # mult        $a2, $zero, $zero # 00000740 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29aa08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_29aa0c:
    // 0x29aa0c: 0x0  nop
    ctx->pc = 0x29aa0cu;
    // NOP
label_29aa10:
    // 0x29aa10: 0x308fe  dsrl32      $at, $v1, 3
    ctx->pc = 0x29aa10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 3) >> (32 + 3));
label_29aa14:
    // 0x29aa14: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x29aa14u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29aa18:
    // 0x29aa18: 0x3758  .word       0x00003758                   # mult        $a2, $zero, $zero # 00000740 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29aa18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_29aa1c:
    // 0x29aa1c: 0x0  nop
    ctx->pc = 0x29aa1cu;
    // NOP
label_29aa20:
    // 0x29aa20: 0x30905  .word       0x00030905                   # INVALID     $zero, $v1, 0x905 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29aa20u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x29AA20 raw=0x00030905"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29aa24:
    // 0x29aa24: 0x57  .word       0x00000057                   # dsrav       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29aa24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_29aa28:
    // 0x29aa28: 0x2b0e0  .word       0x0002B0E0                   # add         $s6, $zero, $v0 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29aa28u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_29aa2c:
    // 0x29aa2c: 0x0  nop
    ctx->pc = 0x29aa2cu;
    // NOP
label_29aa30:
    // 0x29aa30: 0x3095c  .word       0x0003095C                   # dmult       $zero, $v1 # 00000940 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29aa30u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x29AA30 raw=0x0003095C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29aa34:
    // 0x29aa34: 0x57  .word       0x00000057                   # dsrav       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29aa34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_29aa38:
    // 0x29aa38: 0x2b0a8  .word       0x0002B0A8                   # mfsa        $s6 # 00020080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29aa38u;
    SET_GPR_U32(ctx, 22, ctx->sa);
label_29aa3c:
    // 0x29aa3c: 0x0  nop
    ctx->pc = 0x29aa3cu;
    // NOP
label_29aa40:
    // 0x29aa40: 0x309b3  tltu        $zero, $v1, 38
    ctx->pc = 0x29aa40u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29aa44:
    // 0x29aa44: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x29aa44u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_29aa48:
    // 0x29aa48: 0x1290  .word       0x00001290                   # mfhi        $v0 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29aa48u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_29aa4c:
    // 0x29aa4c: 0x0  nop
    ctx->pc = 0x29aa4cu;
    // NOP
label_29aa50:
    // 0x29aa50: 0x309b6  tne         $zero, $v1, 38
    ctx->pc = 0x29aa50u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29aa54:
    // 0x29aa54: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x29aa54u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_29aa58:
    // 0x29aa58: 0x1290  .word       0x00001290                   # mfhi        $v0 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29aa58u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_29aa5c:
    // 0x29aa5c: 0x0  nop
    ctx->pc = 0x29aa5cu;
    // NOP
label_29aa60:
    // 0x29aa60: 0x309b9  .word       0x000309B9                   # INVALID     $zero, $v1, 0x9B9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29aa60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x29AA60 raw=0x000309B9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29aa64:
    // 0x29aa64: 0x25  move        $zero, $zero
    ctx->pc = 0x29aa64u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_29aa68:
    // 0x29aa68: 0x12320  .word       0x00012320                   # add         $a0, $zero, $at # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29aa68u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_29aa6c:
    // 0x29aa6c: 0x0  nop
    ctx->pc = 0x29aa6cu;
    // NOP
label_29aa70:
    // 0x29aa70: 0x309de  .word       0x000309DE                   # ddiv        $at, $zero, $v1 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29aa70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x29AA70 raw=0x000309DE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29aa74:
    // 0x29aa74: 0x25  move        $zero, $zero
    ctx->pc = 0x29aa74u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_29aa78:
    // 0x29aa78: 0x122cc  .word       0x000122CC                   # syscall     139 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29aa78u;
    ctx->pc = 0x29AA7Cu;
runtime->handleSyscall(rdram, ctx, 0x48Bu);
label_29aa7c:
    // 0x29aa7c: 0x0  nop
    ctx->pc = 0x29aa7cu;
    // NOP
label_29aa80:
    // 0x29aa80: 0x30a03  sra         $at, $v1, 8
    ctx->pc = 0x29aa80u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 3), 8));
label_29aa84:
    // 0x29aa84: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29aa84u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29AA84 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29aa88:
    // 0x29aa88: 0x1f0  tge         $zero, $zero, 7
    ctx->pc = 0x29aa88u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29aa8c:
    // 0x29aa8c: 0x0  nop
    ctx->pc = 0x29aa8cu;
    // NOP
label_29aa90:
    // 0x29aa90: 0x30a04  .word       0x00030A04                   # sllv        $at, $v1, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29aa90u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 0) & 0x1F));
label_29aa94:
    // 0x29aa94: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29aa94u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29AA94 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29aa98:
    // 0x29aa98: 0x1f0  tge         $zero, $zero, 7
    ctx->pc = 0x29aa98u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29aa9c:
    // 0x29aa9c: 0x0  nop
    ctx->pc = 0x29aa9cu;
    // NOP
label_29aaa0:
    // 0x29aaa0: 0x30a05  .word       0x00030A05                   # INVALID     $zero, $v1, 0xA05 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29aaa0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x29AAA0 raw=0x00030A05"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29aaa4:
    // 0x29aaa4: 0x2c  dadd        $zero, $zero, $zero
    ctx->pc = 0x29aaa4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_29aaa8:
    // 0x29aaa8: 0x15af0  tge         $zero, $at, 363
    ctx->pc = 0x29aaa8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_29aaac:
    // 0x29aaac: 0x0  nop
    ctx->pc = 0x29aaacu;
    // NOP
label_29aab0:
    // 0x29aab0: 0x30a31  tgeu        $zero, $v1, 40
    ctx->pc = 0x29aab0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29aab4:
    // 0x29aab4: 0x2c  dadd        $zero, $zero, $zero
    ctx->pc = 0x29aab4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_29aab8:
    // 0x29aab8: 0x15af0  tge         $zero, $at, 363
    ctx->pc = 0x29aab8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_29aabc:
    // 0x29aabc: 0x0  nop
    ctx->pc = 0x29aabcu;
    // NOP
label_29aac0:
    // 0x29aac0: 0x30a5d  .word       0x00030A5D                   # dmultu      $zero, $v1 # 00000A40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29aac0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x29AAC0 raw=0x00030A5D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29aac4:
    // 0x29aac4: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x29aac4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29aac8:
    // 0x29aac8: 0x2b7c  dsll32      $a1, $zero, 13
    ctx->pc = 0x29aac8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) << (32 + 13));
label_29aacc:
    // 0x29aacc: 0x0  nop
    ctx->pc = 0x29aaccu;
    // NOP
label_29aad0:
    // 0x29aad0: 0x30a63  .word       0x00030A63                   # negu        $at, $v1 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29aad0u;
    SET_GPR_S32(ctx, 1, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_29aad4:
    // 0x29aad4: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x29aad4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29aad8:
    // 0x29aad8: 0x2b70  tge         $zero, $zero, 173
    ctx->pc = 0x29aad8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29aadc:
    // 0x29aadc: 0x0  nop
    ctx->pc = 0x29aadcu;
    // NOP
label_29aae0:
    // 0x29aae0: 0x30a69  .word       0x00030A69                   # mtsa        $zero # 00030A40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29aae0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_29aae4:
    // 0x29aae4: 0x2f  dsubu       $zero, $zero, $zero
    ctx->pc = 0x29aae4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_29aae8:
    // 0x29aae8: 0x171c0  sll         $t6, $at, 7
    ctx->pc = 0x29aae8u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 1), 7));
label_29aaec:
    // 0x29aaec: 0x0  nop
    ctx->pc = 0x29aaecu;
    // NOP
label_29aaf0:
    // 0x29aaf0: 0x30a98  .word       0x00030A98                   # mult        $at, $zero, $v1 # 00000280 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29aaf0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_29aaf4:
    // 0x29aaf4: 0x2f  dsubu       $zero, $zero, $zero
    ctx->pc = 0x29aaf4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_29aaf8:
    // 0x29aaf8: 0x17198  .word       0x00017198                   # mult        $t6, $zero, $at # 00000180 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29aaf8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_29aafc:
    // 0x29aafc: 0x0  nop
    ctx->pc = 0x29aafcu;
    // NOP
label_29ab00:
    // 0x29ab00: 0x30ac7  .word       0x00030AC7                   # srav        $at, $v1, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ab00u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 0) & 0x1F));
label_29ab04:
    // 0x29ab04: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x29ab04u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_29ab08:
    // 0x29ab08: 0xdd8  .word       0x00000DD8                   # mult        $at, $zero, $zero # 000005C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29ab08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_29ab0c:
    // 0x29ab0c: 0x0  nop
    ctx->pc = 0x29ab0cu;
    // NOP
label_29ab10:
    // 0x29ab10: 0x30ac9  .word       0x00030AC9                   # jalr        $at, $zero # 000302C0 <InstrIdType: CPU_SPECIAL>
label_29ab14:
    if (ctx->pc == 0x29AB14u) {
        ctx->pc = 0x29AB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AB10u;
        // 0x29ab14: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29AB18u;
        goto label_29ab18;
    }
    ctx->pc = 0x29AB10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 1, 0x29AB18u);
        ctx->pc = 0x29AB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AB10u;
        // 0x29ab14: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29AB10u, 0x29AB18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29AB18u;
label_29ab18:
    // 0x29ab18: 0xdd8  .word       0x00000DD8                   # mult        $at, $zero, $zero # 000005C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29ab18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_29ab1c:
    // 0x29ab1c: 0x0  nop
    ctx->pc = 0x29ab1cu;
    // NOP
label_29ab20:
    // 0x29ab20: 0x30acb  .word       0x00030ACB                   # movn        $at, $zero, $v1 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ab20u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 1, GPR_VEC(ctx, 0));
label_29ab24:
    // 0x29ab24: 0x38  dsll        $zero, $zero, 0
    ctx->pc = 0x29ab24u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 0);
label_29ab28:
    // 0x29ab28: 0x1bf50  .word       0x0001BF50                   # mfhi        $s7 # 00010740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ab28u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_29ab2c:
    // 0x29ab2c: 0x0  nop
    ctx->pc = 0x29ab2cu;
    // NOP
label_29ab30:
    // 0x29ab30: 0x30b03  sra         $at, $v1, 12
    ctx->pc = 0x29ab30u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 3), 12));
label_29ab34:
    // 0x29ab34: 0x38  dsll        $zero, $zero, 0
    ctx->pc = 0x29ab34u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 0);
label_29ab38:
    // 0x29ab38: 0x1be68  .word       0x0001BE68                   # mfsa        $s7 # 00010640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29ab38u;
    SET_GPR_U32(ctx, 23, ctx->sa);
label_29ab3c:
    // 0x29ab3c: 0x0  nop
    ctx->pc = 0x29ab3cu;
    // NOP
label_29ab40:
    // 0x29ab40: 0x30b3b  dsra        $at, $v1, 12
    ctx->pc = 0x29ab40u;
    SET_GPR_S64(ctx, 1, GPR_S64(ctx, 3) >> 12);
label_29ab44:
    // 0x29ab44: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x29ab44u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29ab48:
    // 0x29ab48: 0x2c50  .word       0x00002C50                   # mfhi        $a1 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ab48u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_29ab4c:
    // 0x29ab4c: 0x0  nop
    ctx->pc = 0x29ab4cu;
    // NOP
label_29ab50:
    // 0x29ab50: 0x30b41  .word       0x00030B41                   # INVALID     $zero, $v1, 0xB41 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ab50u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29AB50 raw=0x00030B41"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29ab54:
    // 0x29ab54: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x29ab54u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29ab58:
    // 0x29ab58: 0x2c50  .word       0x00002C50                   # mfhi        $a1 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ab58u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_29ab5c:
    // 0x29ab5c: 0x0  nop
    ctx->pc = 0x29ab5cu;
    // NOP
label_29ab60:
    // 0x29ab60: 0x30b47  .word       0x00030B47                   # srav        $at, $v1, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ab60u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 0) & 0x1F));
label_29ab64:
    // 0x29ab64: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x29ab64u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_29ab68:
    // 0x29ab68: 0xadb0  tge         $zero, $zero, 694
    ctx->pc = 0x29ab68u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29ab6c:
    // 0x29ab6c: 0x0  nop
    ctx->pc = 0x29ab6cu;
    // NOP
label_29ab70:
    // 0x29ab70: 0x30b5d  .word       0x00030B5D                   # dmultu      $zero, $v1 # 00000B40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ab70u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x29AB70 raw=0x00030B5D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29ab74:
    // 0x29ab74: 0x16  dsrlv       $zero, $zero, $zero
    ctx->pc = 0x29ab74u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_29ab78:
    // 0x29ab78: 0xadb0  tge         $zero, $zero, 694
    ctx->pc = 0x29ab78u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29ab7c:
    // 0x29ab7c: 0x0  nop
    ctx->pc = 0x29ab7cu;
    // NOP
label_29ab80:
    // 0x29ab80: 0x30b73  tltu        $zero, $v1, 45
    ctx->pc = 0x29ab80u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29ab84:
    // 0x29ab84: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29ab84u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29ab88:
    // 0x29ab88: 0x1e8c  syscall     122
    ctx->pc = 0x29ab88u;
    ctx->pc = 0x29AB8Cu;
runtime->handleSyscall(rdram, ctx, 0x7Au);
label_29ab8c:
    // 0x29ab8c: 0x0  nop
    ctx->pc = 0x29ab8cu;
    // NOP
label_29ab90:
    // 0x29ab90: 0x30b77  .word       0x00030B77                   # INVALID     $zero, $v1, 0xB77 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ab90u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x29AB90 raw=0x00030B77"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29ab94:
    // 0x29ab94: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29ab94u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29ab98:
    // 0x29ab98: 0x1e8c  syscall     122
    ctx->pc = 0x29ab98u;
    ctx->pc = 0x29AB9Cu;
runtime->handleSyscall(rdram, ctx, 0x7Au);
label_29ab9c:
    // 0x29ab9c: 0x0  nop
    ctx->pc = 0x29ab9cu;
    // NOP
label_29aba0:
    // 0x29aba0: 0x30b7b  dsra        $at, $v1, 13
    ctx->pc = 0x29aba0u;
    SET_GPR_S64(ctx, 1, GPR_S64(ctx, 3) >> 13);
label_29aba4:
    // 0x29aba4: 0x14  dsllv       $zero, $zero, $zero
    ctx->pc = 0x29aba4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_29aba8:
    // 0x29aba8: 0x9a3c  dsll32      $s3, $zero, 8
    ctx->pc = 0x29aba8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) << (32 + 8));
label_29abac:
    // 0x29abac: 0x0  nop
    ctx->pc = 0x29abacu;
    // NOP
label_29abb0:
    // 0x29abb0: 0x30b8f  .word       0x00030B8F                   # sync # 00030800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29abb0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_29abb4:
    // 0x29abb4: 0x14  dsllv       $zero, $zero, $zero
    ctx->pc = 0x29abb4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_29abb8:
    // 0x29abb8: 0x99fc  dsll32      $s3, $zero, 7
    ctx->pc = 0x29abb8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) << (32 + 7));
label_29abbc:
    // 0x29abbc: 0x0  nop
    ctx->pc = 0x29abbcu;
    // NOP
label_29abc0:
    // 0x29abc0: 0x30ba3  .word       0x00030BA3                   # negu        $at, $v1 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29abc0u;
    SET_GPR_S32(ctx, 1, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_29abc4:
    // 0x29abc4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29abc4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29abc8:
    // 0x29abc8: 0x18bc  dsll32      $v1, $zero, 2
    ctx->pc = 0x29abc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) << (32 + 2));
label_29abcc:
    // 0x29abcc: 0x0  nop
    ctx->pc = 0x29abccu;
    // NOP
label_29abd0:
    // 0x29abd0: 0x30ba7  .word       0x00030BA7                   # nor         $at, $zero, $v1 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29abd0u;
    SET_GPR_U64(ctx, 1, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
label_29abd4:
    // 0x29abd4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29abd4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29abd8:
    // 0x29abd8: 0x18bc  dsll32      $v1, $zero, 2
    ctx->pc = 0x29abd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) << (32 + 2));
label_29abdc:
    // 0x29abdc: 0x0  nop
    ctx->pc = 0x29abdcu;
    // NOP
label_29abe0:
    // 0x29abe0: 0x30bab  .word       0x00030BAB                   # sltu        $at, $zero, $v1 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29abe0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_29abe4:
    // 0x29abe4: 0x18  mult        $zero, $zero, $zero
    ctx->pc = 0x29abe4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_29abe8:
    // 0x29abe8: 0xbbc4  .word       0x0000BBC4                   # sllv        $s7, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29abe8u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29abec:
    // 0x29abec: 0x0  nop
    ctx->pc = 0x29abecu;
    // NOP
label_29abf0:
    // 0x29abf0: 0x30bc3  sra         $at, $v1, 15
    ctx->pc = 0x29abf0u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 3), 15));
label_29abf4:
    // 0x29abf4: 0x18  mult        $zero, $zero, $zero
    ctx->pc = 0x29abf4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_29abf8:
    // 0x29abf8: 0xbbac  .word       0x0000BBAC                   # dadd        $s7, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29abf8u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 23, r); }
label_29abfc:
    // 0x29abfc: 0x0  nop
    ctx->pc = 0x29abfcu;
    // NOP
label_29ac00:
    // 0x29ac00: 0x30bdb  .word       0x00030BDB                   # divu        $at, $zero, $v1 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ac00u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_29ac04:
    // 0x29ac04: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29ac04u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29ac08:
    // 0x29ac08: 0x1a90  .word       0x00001A90                   # mfhi        $v1 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ac08u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_29ac0c:
    // 0x29ac0c: 0x0  nop
    ctx->pc = 0x29ac0cu;
    // NOP
label_29ac10:
    // 0x29ac10: 0x30bdf  .word       0x00030BDF                   # ddivu       $at, $zero, $v1 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ac10u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x29AC10 raw=0x00030BDF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29ac14:
    // 0x29ac14: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x29ac14u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29ac18:
    // 0x29ac18: 0x1a90  .word       0x00001A90                   # mfhi        $v1 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ac18u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_29ac1c:
    // 0x29ac1c: 0x0  nop
    ctx->pc = 0x29ac1cu;
    // NOP
label_29ac20:
    // 0x29ac20: 0x30be3  .word       0x00030BE3                   # negu        $at, $v1 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ac20u;
    SET_GPR_S32(ctx, 1, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_29ac24:
    // 0x29ac24: 0x14d  break       0, 5
    ctx->pc = 0x29ac24u;
    runtime->handleBreak(rdram, ctx);
label_29ac28:
    // 0x29ac28: 0xa6740  sll         $t4, $t2, 29
    ctx->pc = 0x29ac28u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 10), 29));
label_29ac2c:
    // 0x29ac2c: 0x0  nop
    ctx->pc = 0x29ac2cu;
    // NOP
label_29ac30:
    // 0x29ac30: 0x30d30  tge         $zero, $v1, 52
    ctx->pc = 0x29ac30u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29ac34:
    // 0x29ac34: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ac34u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29AC34 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29ac38:
    // 0x29ac38: 0x650  .word       0x00000650                   # mfhi        $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ac38u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29ac3c:
    // 0x29ac3c: 0x0  nop
    ctx->pc = 0x29ac3cu;
    // NOP
label_29ac40:
    // 0x29ac40: 0x30d31  tgeu        $zero, $v1, 52
    ctx->pc = 0x29ac40u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29ac44:
    // 0x29ac44: 0x13e  dsrl32      $zero, $zero, 4
    ctx->pc = 0x29ac44u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 4));
label_29ac48:
    // 0x29ac48: 0x9e8b0  tge         $zero, $t1, 930
    ctx->pc = 0x29ac48u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 9)) { runtime->handleTrap(rdram, ctx); }
label_29ac4c:
    // 0x29ac4c: 0x0  nop
    ctx->pc = 0x29ac4cu;
    // NOP
label_29ac50:
    // 0x29ac50: 0x30e6f  .word       0x00030E6F                   # dsubu       $at, $zero, $v1 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ac50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) - GPR_U64(ctx, 3));
label_29ac54:
    // 0x29ac54: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ac54u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29AC54 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29ac58:
    // 0x29ac58: 0x6b0  tge         $zero, $zero, 26
    ctx->pc = 0x29ac58u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29ac5c:
    // 0x29ac5c: 0x0  nop
    ctx->pc = 0x29ac5cu;
    // NOP
label_29ac60:
    // 0x29ac60: 0x30e70  tge         $zero, $v1, 57
    ctx->pc = 0x29ac60u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29ac64:
    // 0x29ac64: 0x21b  .word       0x0000021B                   # divu        $zero, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ac64u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_29ac68:
    // 0x29ac68: 0x10d310  .word       0x0010D310                   # mfhi        $k0 # 00100300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ac68u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_29ac6c:
    // 0x29ac6c: 0x0  nop
    ctx->pc = 0x29ac6cu;
    // NOP
label_29ac70:
    // 0x29ac70: 0x3108b  .word       0x0003108B                   # movn        $v0, $zero, $v1 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ac70u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_29ac74:
    // 0x29ac74: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ac74u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29AC74 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29ac78:
    // 0x29ac78: 0x650  .word       0x00000650                   # mfhi        $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ac78u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29ac7c:
    // 0x29ac7c: 0x0  nop
    ctx->pc = 0x29ac7cu;
    // NOP
label_29ac80:
    // 0x29ac80: 0x3108c  .word       0x0003108C                   # syscall     66 # 00030000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ac80u;
    ctx->pc = 0x29AC84u;
runtime->handleSyscall(rdram, ctx, 0xC42u);
label_29ac84:
    // 0x29ac84: 0x233  tltu        $zero, $zero, 8
    ctx->pc = 0x29ac84u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29ac88:
    // 0x29ac88: 0x119380  sll         $s2, $s1, 14
    ctx->pc = 0x29ac88u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 14));
label_29ac8c:
    // 0x29ac8c: 0x0  nop
    ctx->pc = 0x29ac8cu;
    // NOP
label_29ac90:
    // 0x29ac90: 0x312bf  dsra32      $v0, $v1, 10
    ctx->pc = 0x29ac90u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 3) >> (32 + 10));
label_29ac94:
    // 0x29ac94: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ac94u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29AC94 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29ac98:
    // 0x29ac98: 0x750  .word       0x00000750                   # mfhi        $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ac98u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29ac9c:
    // 0x29ac9c: 0x0  nop
    ctx->pc = 0x29ac9cu;
    // NOP
label_29aca0:
    // 0x29aca0: 0x312c0  sll         $v0, $v1, 11
    ctx->pc = 0x29aca0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
label_29aca4:
    // 0x29aca4: 0x233  tltu        $zero, $zero, 8
    ctx->pc = 0x29aca4u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29aca8:
    // 0x29aca8: 0x119380  sll         $s2, $s1, 14
    ctx->pc = 0x29aca8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 14));
label_29acac:
    // 0x29acac: 0x0  nop
    ctx->pc = 0x29acacu;
    // NOP
label_29acb0:
    // 0x29acb0: 0x314f3  tltu        $zero, $v1, 83
    ctx->pc = 0x29acb0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29acb4:
    // 0x29acb4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29acb4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29ACB4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29acb8:
    // 0x29acb8: 0x750  .word       0x00000750                   # mfhi        $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29acb8u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29acbc:
    // 0x29acbc: 0x0  nop
    ctx->pc = 0x29acbcu;
    // NOP
label_29acc0:
    // 0x29acc0: 0x314f4  teq         $zero, $v1, 83
    ctx->pc = 0x29acc0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29acc4:
    // 0x29acc4: 0xae  .word       0x000000AE                   # dsub        $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29acc4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_29acc8:
    // 0x29acc8: 0x56c20  .word       0x00056C20                   # add         $t5, $zero, $a1 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29acc8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 5);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_29accc:
    // 0x29accc: 0x0  nop
    ctx->pc = 0x29acccu;
    // NOP
label_29acd0:
    // 0x29acd0: 0x315a2  .word       0x000315A2                   # neg         $v0, $v1 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29acd0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 3), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
label_29acd4:
    // 0x29acd4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29acd4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29ACD4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29acd8:
    // 0x29acd8: 0x6f0  tge         $zero, $zero, 27
    ctx->pc = 0x29acd8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29acdc:
    // 0x29acdc: 0x0  nop
    ctx->pc = 0x29acdcu;
    // NOP
label_29ace0:
    // 0x29ace0: 0x315a3  .word       0x000315A3                   # negu        $v0, $v1 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ace0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_29ace4:
    // 0x29ace4: 0x109  .word       0x00000109                   # jalr        $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
label_29ace8:
    if (ctx->pc == 0x29ACE8u) {
        ctx->pc = 0x29ACE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ACE4u;
        // 0x29ace8: 0x845a0  .word       0x000845A0                   # add         $t0, $zero, $t0 # 00000580 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 8);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29ACECu;
        goto label_29acec;
    }
    ctx->pc = 0x29ACE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29ACE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ACE4u;
        // 0x29ace8: 0x845a0  .word       0x000845A0                   # add         $t0, $zero, $t0 # 00000580 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 8);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29ACE4u, 0x29ACECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29ACECu;
label_29acec:
    // 0x29acec: 0x0  nop
    ctx->pc = 0x29acecu;
    // NOP
label_29acf0:
    // 0x29acf0: 0x316ac  .word       0x000316AC                   # dadd        $v0, $zero, $v1 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29acf0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 3); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, r); }
label_29acf4:
    // 0x29acf4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29acf4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29ACF4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29acf8:
    // 0x29acf8: 0x650  .word       0x00000650                   # mfhi        $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29acf8u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29acfc:
    // 0x29acfc: 0x0  nop
    ctx->pc = 0x29acfcu;
    // NOP
label_29ad00:
    // 0x29ad00: 0x316ad  .word       0x000316AD                   # daddu       $v0, $zero, $v1 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ad00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 3));
label_29ad04:
    // 0x29ad04: 0x16c  .word       0x0000016C                   # dadd        $zero, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ad04u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_29ad08:
    // 0x29ad08: 0xb5970  tge         $zero, $t3, 357
    ctx->pc = 0x29ad08u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 11)) { runtime->handleTrap(rdram, ctx); }
label_29ad0c:
    // 0x29ad0c: 0x0  nop
    ctx->pc = 0x29ad0cu;
    // NOP
label_29ad10:
    // 0x29ad10: 0x31819  .word       0x00031819                   # multu       $zero, $v1 # 00001800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ad10u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_29ad14:
    // 0x29ad14: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ad14u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29AD14 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29ad18:
    // 0x29ad18: 0x6b0  tge         $zero, $zero, 26
    ctx->pc = 0x29ad18u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29ad1c:
    // 0x29ad1c: 0x0  nop
    ctx->pc = 0x29ad1cu;
    // NOP
label_29ad20:
    // 0x29ad20: 0x3181a  div         $v1, $zero, $v1
    ctx->pc = 0x29ad20u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_29ad24:
    // 0x29ad24: 0x162  .word       0x00000162                   # neg         $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ad24u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_29ad28:
    // 0x29ad28: 0xb0b70  tge         $zero, $t3, 45
    ctx->pc = 0x29ad28u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 11)) { runtime->handleTrap(rdram, ctx); }
label_29ad2c:
    // 0x29ad2c: 0x0  nop
    ctx->pc = 0x29ad2cu;
    // NOP
label_29ad30:
    // 0x29ad30: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x29ad30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
label_29ad34:
    // 0x29ad34: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ad34u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29AD34 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29ad38:
    // 0x29ad38: 0x6d0  .word       0x000006D0                   # mfhi        $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ad38u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29ad3c:
    // 0x29ad3c: 0x0  nop
    ctx->pc = 0x29ad3cu;
    // NOP
label_29ad40:
    // 0x29ad40: 0x3197d  .word       0x0003197D                   # INVALID     $zero, $v1, 0x197D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ad40u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x29AD40 raw=0x0003197D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29ad44:
    // 0x29ad44: 0x158  .word       0x00000158                   # mult        $zero, $zero, $zero # 00000140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29ad44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_29ad48:
    // 0x29ad48: 0xaba80  sll         $s7, $t2, 10
    ctx->pc = 0x29ad48u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 10), 10));
label_29ad4c:
    // 0x29ad4c: 0x0  nop
    ctx->pc = 0x29ad4cu;
    // NOP
label_29ad50:
    // 0x29ad50: 0x31ad5  .word       0x00031AD5                   # INVALID     $zero, $v1, 0x1AD5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ad50u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x29AD50 raw=0x00031AD5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29ad54:
    // 0x29ad54: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ad54u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29AD54 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29ad58:
    // 0x29ad58: 0x6d0  .word       0x000006D0                   # mfhi        $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ad58u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29ad5c:
    // 0x29ad5c: 0x0  nop
    ctx->pc = 0x29ad5cu;
    // NOP
label_29ad60:
    // 0x29ad60: 0x31ad6  .word       0x00031AD6                   # dsrlv       $v1, $v1, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ad60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (GPR_U32(ctx, 0) & 0x3F));
label_29ad64:
    // 0x29ad64: 0x1ac  .word       0x000001AC                   # dadd        $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ad64u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_29ad68:
    // 0x29ad68: 0xd58f0  tge         $zero, $t5, 355
    ctx->pc = 0x29ad68u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 13)) { runtime->handleTrap(rdram, ctx); }
label_29ad6c:
    // 0x29ad6c: 0x0  nop
    ctx->pc = 0x29ad6cu;
    // NOP
label_29ad70:
    // 0x29ad70: 0x31c82  srl         $v1, $v1, 18
    ctx->pc = 0x29ad70u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 18));
label_29ad74:
    // 0x29ad74: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ad74u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29AD74 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29ad78:
    // 0x29ad78: 0x750  .word       0x00000750                   # mfhi        $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ad78u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29ad7c:
    // 0x29ad7c: 0x0  nop
    ctx->pc = 0x29ad7cu;
    // NOP
label_29ad80:
    // 0x29ad80: 0x31c83  sra         $v1, $v1, 18
    ctx->pc = 0x29ad80u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 18));
label_29ad84:
    // 0x29ad84: 0x197  .word       0x00000197                   # dsrav       $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ad84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_29ad88:
    // 0x29ad88: 0xcb5c0  sll         $s6, $t4, 23
    ctx->pc = 0x29ad88u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 12), 23));
label_29ad8c:
    // 0x29ad8c: 0x0  nop
    ctx->pc = 0x29ad8cu;
    // NOP
label_29ad90:
    // 0x29ad90: 0x31e1a  .word       0x00031E1A                   # div         $v1, $zero, $v1 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ad90u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_29ad94:
    // 0x29ad94: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ad94u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29AD94 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29ad98:
    // 0x29ad98: 0x750  .word       0x00000750                   # mfhi        $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ad98u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29ad9c:
    // 0x29ad9c: 0x0  nop
    ctx->pc = 0x29ad9cu;
    // NOP
label_29ada0:
    // 0x29ada0: 0x31e1b  .word       0x00031E1B                   # divu        $v1, $zero, $v1 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ada0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_29ada4:
    // 0x29ada4: 0x256  .word       0x00000256                   # dsrlv       $zero, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ada4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_29ada8:
    // 0x29ada8: 0x12afa0  .word       0x0012AFA0                   # add         $s5, $zero, $s2 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ada8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 18);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_29adac:
    // 0x29adac: 0x0  nop
    ctx->pc = 0x29adacu;
    // NOP
label_29adb0:
    // 0x29adb0: 0x32071  tgeu        $zero, $v1, 129
    ctx->pc = 0x29adb0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29adb4:
    // 0x29adb4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29adb4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29ADB4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29adb8:
    // 0x29adb8: 0x6b0  tge         $zero, $zero, 26
    ctx->pc = 0x29adb8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29adbc:
    // 0x29adbc: 0x0  nop
    ctx->pc = 0x29adbcu;
    // NOP
label_29adc0:
    // 0x29adc0: 0x32072  tlt         $zero, $v1, 129
    ctx->pc = 0x29adc0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29adc4:
    // 0x29adc4: 0x256  .word       0x00000256                   # dsrlv       $zero, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29adc4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_29adc8:
    // 0x29adc8: 0x12afa0  .word       0x0012AFA0                   # add         $s5, $zero, $s2 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29adc8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 18);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_29adcc:
    // 0x29adcc: 0x0  nop
    ctx->pc = 0x29adccu;
    // NOP
label_29add0:
    // 0x29add0: 0x322c8  .word       0x000322C8                   # jr          $zero # 000322C0 <InstrIdType: CPU_SPECIAL>
label_29add4:
    if (ctx->pc == 0x29ADD4u) {
        ctx->pc = 0x29ADD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ADD0u;
        // 0x29add4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29ADD4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x29ADD8u;
        goto label_29add8;
    }
    ctx->pc = 0x29ADD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29ADD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ADD0u;
        // 0x29add4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29ADD4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29ADD0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29ADD8u;
label_29add8:
    // 0x29add8: 0x6b0  tge         $zero, $zero, 26
    ctx->pc = 0x29add8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29addc:
    // 0x29addc: 0x0  nop
    ctx->pc = 0x29addcu;
    // NOP
label_29ade0:
    // 0x29ade0: 0x322c9  .word       0x000322C9                   # jalr        $a0, $zero # 000302C0 <InstrIdType: CPU_SPECIAL>
label_29ade4:
    if (ctx->pc == 0x29ADE4u) {
        ctx->pc = 0x29ADE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ADE0u;
        // 0x29ade4: 0x251  .word       0x00000251                   # mthi        $zero # 00000240 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29ADE8u;
        goto label_29ade8;
    }
    ctx->pc = 0x29ADE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 4, 0x29ADE8u);
        ctx->pc = 0x29ADE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29ADE0u;
        // 0x29ade4: 0x251  .word       0x00000251                   # mthi        $zero # 00000240 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->hi = GPR_U64(ctx, 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29ADE0u, 0x29ADE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29ADE8u;
label_29ade8:
    // 0x29ade8: 0x1286d0  .word       0x001286D0                   # mfhi        $s0 # 001206C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ade8u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_29adec:
    // 0x29adec: 0x0  nop
    ctx->pc = 0x29adecu;
    // NOP
label_29adf0:
    // 0x29adf0: 0x3251a  .word       0x0003251A                   # div         $a0, $zero, $v1 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29adf0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_29adf4:
    // 0x29adf4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29adf4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29ADF4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29adf8:
    // 0x29adf8: 0x6d0  .word       0x000006D0                   # mfhi        $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29adf8u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29adfc:
    // 0x29adfc: 0x0  nop
    ctx->pc = 0x29adfcu;
    // NOP
label_29ae00:
    // 0x29ae00: 0x3251b  .word       0x0003251B                   # divu        $a0, $zero, $v1 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ae00u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_29ae04:
    // 0x29ae04: 0x24c  syscall     9
    ctx->pc = 0x29ae04u;
    ctx->pc = 0x29AE08u;
runtime->handleSyscall(rdram, ctx, 0x9u);
label_29ae08:
    // 0x29ae08: 0x125d90  .word       0x00125D90                   # mfhi        $t3 # 00120580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ae08u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_29ae0c:
    // 0x29ae0c: 0x0  nop
    ctx->pc = 0x29ae0cu;
    // NOP
label_29ae10:
    // 0x29ae10: 0x32767  .word       0x00032767                   # nor         $a0, $zero, $v1 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ae10u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
label_29ae14:
    // 0x29ae14: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ae14u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29AE14 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29ae18:
    // 0x29ae18: 0x6d0  .word       0x000006D0                   # mfhi        $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ae18u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29ae1c:
    // 0x29ae1c: 0x0  nop
    ctx->pc = 0x29ae1cu;
    // NOP
label_29ae20:
    // 0x29ae20: 0x32768  .word       0x00032768                   # mfsa        $a0 # 00030740 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29ae20u;
    SET_GPR_U32(ctx, 4, ctx->sa);
label_29ae24:
    // 0x29ae24: 0x170  tge         $zero, $zero, 5
    ctx->pc = 0x29ae24u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29ae28:
    // 0x29ae28: 0xb78b0  tge         $zero, $t3, 482
    ctx->pc = 0x29ae28u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 11)) { runtime->handleTrap(rdram, ctx); }
label_29ae2c:
    // 0x29ae2c: 0x0  nop
    ctx->pc = 0x29ae2cu;
    // NOP
label_29ae30:
    // 0x29ae30: 0x328d8  .word       0x000328D8                   # mult        $a1, $zero, $v1 # 000000C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29ae30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_29ae34:
    // 0x29ae34: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ae34u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29AE34 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29ae38:
    // 0x29ae38: 0x750  .word       0x00000750                   # mfhi        $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ae38u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29ae3c:
    // 0x29ae3c: 0x0  nop
    ctx->pc = 0x29ae3cu;
    // NOP
label_29ae40:
    // 0x29ae40: 0x328d9  .word       0x000328D9                   # multu       $zero, $v1 # 000028C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ae40u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_29ae44:
    // 0x29ae44: 0x183  sra         $zero, $zero, 6
    ctx->pc = 0x29ae44u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 6));
label_29ae48:
    // 0x29ae48: 0xc10c0  sll         $v0, $t4, 3
    ctx->pc = 0x29ae48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
label_29ae4c:
    // 0x29ae4c: 0x0  nop
    ctx->pc = 0x29ae4cu;
    // NOP
label_29ae50:
    // 0x29ae50: 0x32a5c  .word       0x00032A5C                   # dmult       $zero, $v1 # 00002A40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ae50u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x29AE50 raw=0x00032A5C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29ae54:
    // 0x29ae54: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ae54u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29AE54 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29ae58:
    // 0x29ae58: 0x750  .word       0x00000750                   # mfhi        $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ae58u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29ae5c:
    // 0x29ae5c: 0x0  nop
    ctx->pc = 0x29ae5cu;
    // NOP
label_29ae60:
    // 0x29ae60: 0x32a5d  .word       0x00032A5D                   # dmultu      $zero, $v1 # 00002A40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ae60u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x29AE60 raw=0x00032A5D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29ae64:
    // 0x29ae64: 0x159  .word       0x00000159                   # multu       $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ae64u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_29ae68:
    // 0x29ae68: 0xac7b0  tge         $zero, $t2, 798
    ctx->pc = 0x29ae68u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 10)) { runtime->handleTrap(rdram, ctx); }
label_29ae6c:
    // 0x29ae6c: 0x0  nop
    ctx->pc = 0x29ae6cu;
    // NOP
label_29ae70:
    // 0x29ae70: 0x32bb6  tne         $zero, $v1, 174
    ctx->pc = 0x29ae70u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29ae74:
    // 0x29ae74: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ae74u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29AE74 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29ae78:
    // 0x29ae78: 0x750  .word       0x00000750                   # mfhi        $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ae78u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29ae7c:
    // 0x29ae7c: 0x0  nop
    ctx->pc = 0x29ae7cu;
    // NOP
label_29ae80:
    // 0x29ae80: 0x32bb7  .word       0x00032BB7                   # INVALID     $zero, $v1, 0x2BB7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ae80u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x29AE80 raw=0x00032BB7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29ae84:
    // 0x29ae84: 0x17a  dsrl        $zero, $zero, 5
    ctx->pc = 0x29ae84u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> 5);
label_29ae88:
    // 0x29ae88: 0xbca50  .word       0x000BCA50                   # mfhi        $t9 # 000B0240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ae88u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_29ae8c:
    // 0x29ae8c: 0x0  nop
    ctx->pc = 0x29ae8cu;
    // NOP
label_29ae90:
    // 0x29ae90: 0x32d31  tgeu        $zero, $v1, 180
    ctx->pc = 0x29ae90u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29ae94:
    // 0x29ae94: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ae94u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29AE94 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29ae98:
    // 0x29ae98: 0x750  .word       0x00000750                   # mfhi        $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29ae98u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29ae9c:
    // 0x29ae9c: 0x0  nop
    ctx->pc = 0x29ae9cu;
    // NOP
label_29aea0:
    // 0x29aea0: 0x32d32  tlt         $zero, $v1, 180
    ctx->pc = 0x29aea0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29aea4:
    // 0x29aea4: 0xf6  tne         $zero, $zero, 3
    ctx->pc = 0x29aea4u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29aea8:
    // 0x29aea8: 0x7ab60  .word       0x0007AB60                   # add         $s5, $zero, $a3 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29aea8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 7);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_29aeac:
    // 0x29aeac: 0x0  nop
    ctx->pc = 0x29aeacu;
    // NOP
label_29aeb0:
    // 0x29aeb0: 0x32e28  .word       0x00032E28                   # mfsa        $a1 # 00030600 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29aeb0u;
    SET_GPR_U32(ctx, 5, ctx->sa);
label_29aeb4:
    // 0x29aeb4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29aeb4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29AEB4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29aeb8:
    // 0x29aeb8: 0x6b0  tge         $zero, $zero, 26
    ctx->pc = 0x29aeb8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29aebc:
    // 0x29aebc: 0x0  nop
    ctx->pc = 0x29aebcu;
    // NOP
label_29aec0:
    // 0x29aec0: 0x32e29  .word       0x00032E29                   # mtsa        $zero # 00032E00 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29aec0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_29aec4:
    // 0x29aec4: 0x161  .word       0x00000161                   # addu        $zero, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29aec4u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_29aec8:
    // 0x29aec8: 0xb0030  tge         $zero, $t3, 0
    ctx->pc = 0x29aec8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 11)) { runtime->handleTrap(rdram, ctx); }
label_29aecc:
    // 0x29aecc: 0x0  nop
    ctx->pc = 0x29aeccu;
    // NOP
label_29aed0:
    // 0x29aed0: 0x32f8a  .word       0x00032F8A                   # movz        $a1, $zero, $v1 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29aed0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_29aed4:
    // 0x29aed4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29aed4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29AED4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29aed8:
    // 0x29aed8: 0x5d0  .word       0x000005D0                   # mfhi        $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29aed8u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29aedc:
    // 0x29aedc: 0x0  nop
    ctx->pc = 0x29aedcu;
    // NOP
label_29aee0:
    // 0x29aee0: 0x32f8b  .word       0x00032F8B                   # movn        $a1, $zero, $v1 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29aee0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_29aee4:
    // 0x29aee4: 0x128  .word       0x00000128                   # mfsa        $zero # 00000100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29aee4u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_29aee8:
    // 0x29aee8: 0x93f10  .word       0x00093F10                   # mfhi        $a3 # 00090700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29aee8u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_29aeec:
    // 0x29aeec: 0x0  nop
    ctx->pc = 0x29aeecu;
    // NOP
label_29aef0:
    // 0x29aef0: 0x330b3  tltu        $zero, $v1, 194
    ctx->pc = 0x29aef0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_29aef4:
    // 0x29aef4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29aef4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29AEF4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29aef8:
    // 0x29aef8: 0x6f0  tge         $zero, $zero, 27
    ctx->pc = 0x29aef8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29aefc:
    // 0x29aefc: 0x0  nop
    ctx->pc = 0x29aefcu;
    // NOP
    ctx->pc = 0x29af00u;
    return;
}

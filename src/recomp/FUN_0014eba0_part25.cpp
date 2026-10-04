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


void FUN_0014eba0_part25(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x15a720u: goto label_15a720;
        case 0x15a724u: goto label_15a724;
        case 0x15a728u: goto label_15a728;
        case 0x15a72cu: goto label_15a72c;
        case 0x15a730u: goto label_15a730;
        case 0x15a734u: goto label_15a734;
        case 0x15a738u: goto label_15a738;
        case 0x15a73cu: goto label_15a73c;
        case 0x15a740u: goto label_15a740;
        case 0x15a744u: goto label_15a744;
        case 0x15a748u: goto label_15a748;
        case 0x15a74cu: goto label_15a74c;
        case 0x15a750u: goto label_15a750;
        case 0x15a754u: goto label_15a754;
        case 0x15a758u: goto label_15a758;
        case 0x15a75cu: goto label_15a75c;
        case 0x15a760u: goto label_15a760;
        case 0x15a764u: goto label_15a764;
        case 0x15a768u: goto label_15a768;
        case 0x15a76cu: goto label_15a76c;
        case 0x15a770u: goto label_15a770;
        case 0x15a774u: goto label_15a774;
        case 0x15a778u: goto label_15a778;
        case 0x15a77cu: goto label_15a77c;
        case 0x15a780u: goto label_15a780;
        case 0x15a784u: goto label_15a784;
        case 0x15a788u: goto label_15a788;
        case 0x15a78cu: goto label_15a78c;
        case 0x15a790u: goto label_15a790;
        case 0x15a794u: goto label_15a794;
        case 0x15a798u: goto label_15a798;
        case 0x15a79cu: goto label_15a79c;
        case 0x15a7a0u: goto label_15a7a0;
        case 0x15a7a4u: goto label_15a7a4;
        case 0x15a7a8u: goto label_15a7a8;
        case 0x15a7acu: goto label_15a7ac;
        case 0x15a7b0u: goto label_15a7b0;
        case 0x15a7b4u: goto label_15a7b4;
        case 0x15a7b8u: goto label_15a7b8;
        case 0x15a7bcu: goto label_15a7bc;
        case 0x15a7c0u: goto label_15a7c0;
        case 0x15a7c4u: goto label_15a7c4;
        case 0x15a7c8u: goto label_15a7c8;
        case 0x15a7ccu: goto label_15a7cc;
        case 0x15a7d0u: goto label_15a7d0;
        case 0x15a7d4u: goto label_15a7d4;
        case 0x15a7d8u: goto label_15a7d8;
        case 0x15a7dcu: goto label_15a7dc;
        case 0x15a7e0u: goto label_15a7e0;
        case 0x15a7e4u: goto label_15a7e4;
        case 0x15a7e8u: goto label_15a7e8;
        case 0x15a7ecu: goto label_15a7ec;
        case 0x15a7f0u: goto label_15a7f0;
        case 0x15a7f4u: goto label_15a7f4;
        case 0x15a7f8u: goto label_15a7f8;
        case 0x15a7fcu: goto label_15a7fc;
        case 0x15a800u: goto label_15a800;
        case 0x15a804u: goto label_15a804;
        case 0x15a808u: goto label_15a808;
        case 0x15a80cu: goto label_15a80c;
        case 0x15a810u: goto label_15a810;
        case 0x15a814u: goto label_15a814;
        case 0x15a818u: goto label_15a818;
        case 0x15a81cu: goto label_15a81c;
        case 0x15a820u: goto label_15a820;
        case 0x15a824u: goto label_15a824;
        case 0x15a828u: goto label_15a828;
        case 0x15a82cu: goto label_15a82c;
        case 0x15a830u: goto label_15a830;
        case 0x15a834u: goto label_15a834;
        case 0x15a838u: goto label_15a838;
        case 0x15a83cu: goto label_15a83c;
        case 0x15a840u: goto label_15a840;
        case 0x15a844u: goto label_15a844;
        case 0x15a848u: goto label_15a848;
        case 0x15a84cu: goto label_15a84c;
        case 0x15a850u: goto label_15a850;
        case 0x15a854u: goto label_15a854;
        case 0x15a858u: goto label_15a858;
        case 0x15a85cu: goto label_15a85c;
        case 0x15a860u: goto label_15a860;
        case 0x15a864u: goto label_15a864;
        case 0x15a868u: goto label_15a868;
        case 0x15a86cu: goto label_15a86c;
        case 0x15a870u: goto label_15a870;
        case 0x15a874u: goto label_15a874;
        case 0x15a878u: goto label_15a878;
        case 0x15a87cu: goto label_15a87c;
        case 0x15a880u: goto label_15a880;
        case 0x15a884u: goto label_15a884;
        case 0x15a888u: goto label_15a888;
        case 0x15a88cu: goto label_15a88c;
        case 0x15a890u: goto label_15a890;
        case 0x15a894u: goto label_15a894;
        case 0x15a898u: goto label_15a898;
        case 0x15a89cu: goto label_15a89c;
        case 0x15a8a0u: goto label_15a8a0;
        case 0x15a8a4u: goto label_15a8a4;
        case 0x15a8a8u: goto label_15a8a8;
        case 0x15a8acu: goto label_15a8ac;
        case 0x15a8b0u: goto label_15a8b0;
        case 0x15a8b4u: goto label_15a8b4;
        case 0x15a8b8u: goto label_15a8b8;
        case 0x15a8bcu: goto label_15a8bc;
        case 0x15a8c0u: goto label_15a8c0;
        case 0x15a8c4u: goto label_15a8c4;
        case 0x15a8c8u: goto label_15a8c8;
        case 0x15a8ccu: goto label_15a8cc;
        case 0x15a8d0u: goto label_15a8d0;
        case 0x15a8d4u: goto label_15a8d4;
        case 0x15a8d8u: goto label_15a8d8;
        case 0x15a8dcu: goto label_15a8dc;
        case 0x15a8e0u: goto label_15a8e0;
        case 0x15a8e4u: goto label_15a8e4;
        case 0x15a8e8u: goto label_15a8e8;
        case 0x15a8ecu: goto label_15a8ec;
        case 0x15a8f0u: goto label_15a8f0;
        case 0x15a8f4u: goto label_15a8f4;
        case 0x15a8f8u: goto label_15a8f8;
        case 0x15a8fcu: goto label_15a8fc;
        case 0x15a900u: goto label_15a900;
        case 0x15a904u: goto label_15a904;
        case 0x15a908u: goto label_15a908;
        case 0x15a90cu: goto label_15a90c;
        case 0x15a910u: goto label_15a910;
        case 0x15a914u: goto label_15a914;
        case 0x15a918u: goto label_15a918;
        case 0x15a91cu: goto label_15a91c;
        case 0x15a920u: goto label_15a920;
        case 0x15a924u: goto label_15a924;
        case 0x15a928u: goto label_15a928;
        case 0x15a92cu: goto label_15a92c;
        case 0x15a930u: goto label_15a930;
        case 0x15a934u: goto label_15a934;
        case 0x15a938u: goto label_15a938;
        case 0x15a93cu: goto label_15a93c;
        case 0x15a940u: goto label_15a940;
        case 0x15a944u: goto label_15a944;
        case 0x15a948u: goto label_15a948;
        case 0x15a94cu: goto label_15a94c;
        case 0x15a950u: goto label_15a950;
        case 0x15a954u: goto label_15a954;
        case 0x15a958u: goto label_15a958;
        case 0x15a95cu: goto label_15a95c;
        case 0x15a960u: goto label_15a960;
        case 0x15a964u: goto label_15a964;
        case 0x15a968u: goto label_15a968;
        case 0x15a96cu: goto label_15a96c;
        case 0x15a970u: goto label_15a970;
        case 0x15a974u: goto label_15a974;
        case 0x15a978u: goto label_15a978;
        case 0x15a97cu: goto label_15a97c;
        case 0x15a980u: goto label_15a980;
        case 0x15a984u: goto label_15a984;
        case 0x15a988u: goto label_15a988;
        case 0x15a98cu: goto label_15a98c;
        case 0x15a990u: goto label_15a990;
        case 0x15a994u: goto label_15a994;
        case 0x15a998u: goto label_15a998;
        case 0x15a99cu: goto label_15a99c;
        case 0x15a9a0u: goto label_15a9a0;
        case 0x15a9a4u: goto label_15a9a4;
        case 0x15a9a8u: goto label_15a9a8;
        case 0x15a9acu: goto label_15a9ac;
        case 0x15a9b0u: goto label_15a9b0;
        case 0x15a9b4u: goto label_15a9b4;
        case 0x15a9b8u: goto label_15a9b8;
        case 0x15a9bcu: goto label_15a9bc;
        case 0x15a9c0u: goto label_15a9c0;
        case 0x15a9c4u: goto label_15a9c4;
        case 0x15a9c8u: goto label_15a9c8;
        case 0x15a9ccu: goto label_15a9cc;
        case 0x15a9d0u: goto label_15a9d0;
        case 0x15a9d4u: goto label_15a9d4;
        case 0x15a9d8u: goto label_15a9d8;
        case 0x15a9dcu: goto label_15a9dc;
        case 0x15a9e0u: goto label_15a9e0;
        case 0x15a9e4u: goto label_15a9e4;
        case 0x15a9e8u: goto label_15a9e8;
        case 0x15a9ecu: goto label_15a9ec;
        case 0x15a9f0u: goto label_15a9f0;
        case 0x15a9f4u: goto label_15a9f4;
        case 0x15a9f8u: goto label_15a9f8;
        case 0x15a9fcu: goto label_15a9fc;
        case 0x15aa00u: goto label_15aa00;
        case 0x15aa04u: goto label_15aa04;
        case 0x15aa08u: goto label_15aa08;
        case 0x15aa0cu: goto label_15aa0c;
        case 0x15aa10u: goto label_15aa10;
        case 0x15aa14u: goto label_15aa14;
        case 0x15aa18u: goto label_15aa18;
        case 0x15aa1cu: goto label_15aa1c;
        case 0x15aa20u: goto label_15aa20;
        case 0x15aa24u: goto label_15aa24;
        case 0x15aa28u: goto label_15aa28;
        case 0x15aa2cu: goto label_15aa2c;
        case 0x15aa30u: goto label_15aa30;
        case 0x15aa34u: goto label_15aa34;
        case 0x15aa38u: goto label_15aa38;
        case 0x15aa3cu: goto label_15aa3c;
        case 0x15aa40u: goto label_15aa40;
        case 0x15aa44u: goto label_15aa44;
        case 0x15aa48u: goto label_15aa48;
        case 0x15aa4cu: goto label_15aa4c;
        case 0x15aa50u: goto label_15aa50;
        case 0x15aa54u: goto label_15aa54;
        case 0x15aa58u: goto label_15aa58;
        case 0x15aa5cu: goto label_15aa5c;
        case 0x15aa60u: goto label_15aa60;
        case 0x15aa64u: goto label_15aa64;
        case 0x15aa68u: goto label_15aa68;
        case 0x15aa6cu: goto label_15aa6c;
        case 0x15aa70u: goto label_15aa70;
        case 0x15aa74u: goto label_15aa74;
        case 0x15aa78u: goto label_15aa78;
        case 0x15aa7cu: goto label_15aa7c;
        case 0x15aa80u: goto label_15aa80;
        case 0x15aa84u: goto label_15aa84;
        case 0x15aa88u: goto label_15aa88;
        case 0x15aa8cu: goto label_15aa8c;
        case 0x15aa90u: goto label_15aa90;
        case 0x15aa94u: goto label_15aa94;
        case 0x15aa98u: goto label_15aa98;
        case 0x15aa9cu: goto label_15aa9c;
        case 0x15aaa0u: goto label_15aaa0;
        case 0x15aaa4u: goto label_15aaa4;
        case 0x15aaa8u: goto label_15aaa8;
        case 0x15aaacu: goto label_15aaac;
        case 0x15aab0u: goto label_15aab0;
        case 0x15aab4u: goto label_15aab4;
        case 0x15aab8u: goto label_15aab8;
        case 0x15aabcu: goto label_15aabc;
        case 0x15aac0u: goto label_15aac0;
        case 0x15aac4u: goto label_15aac4;
        case 0x15aac8u: goto label_15aac8;
        case 0x15aaccu: goto label_15aacc;
        case 0x15aad0u: goto label_15aad0;
        case 0x15aad4u: goto label_15aad4;
        case 0x15aad8u: goto label_15aad8;
        case 0x15aadcu: goto label_15aadc;
        case 0x15aae0u: goto label_15aae0;
        case 0x15aae4u: goto label_15aae4;
        case 0x15aae8u: goto label_15aae8;
        case 0x15aaecu: goto label_15aaec;
        case 0x15aaf0u: goto label_15aaf0;
        case 0x15aaf4u: goto label_15aaf4;
        case 0x15aaf8u: goto label_15aaf8;
        case 0x15aafcu: goto label_15aafc;
        case 0x15ab00u: goto label_15ab00;
        case 0x15ab04u: goto label_15ab04;
        case 0x15ab08u: goto label_15ab08;
        case 0x15ab0cu: goto label_15ab0c;
        case 0x15ab10u: goto label_15ab10;
        case 0x15ab14u: goto label_15ab14;
        case 0x15ab18u: goto label_15ab18;
        case 0x15ab1cu: goto label_15ab1c;
        case 0x15ab20u: goto label_15ab20;
        case 0x15ab24u: goto label_15ab24;
        case 0x15ab28u: goto label_15ab28;
        case 0x15ab2cu: goto label_15ab2c;
        case 0x15ab30u: goto label_15ab30;
        case 0x15ab34u: goto label_15ab34;
        case 0x15ab38u: goto label_15ab38;
        case 0x15ab3cu: goto label_15ab3c;
        case 0x15ab40u: goto label_15ab40;
        case 0x15ab44u: goto label_15ab44;
        case 0x15ab48u: goto label_15ab48;
        case 0x15ab4cu: goto label_15ab4c;
        case 0x15ab50u: goto label_15ab50;
        case 0x15ab54u: goto label_15ab54;
        case 0x15ab58u: goto label_15ab58;
        case 0x15ab5cu: goto label_15ab5c;
        case 0x15ab60u: goto label_15ab60;
        case 0x15ab64u: goto label_15ab64;
        case 0x15ab68u: goto label_15ab68;
        case 0x15ab6cu: goto label_15ab6c;
        case 0x15ab70u: goto label_15ab70;
        case 0x15ab74u: goto label_15ab74;
        case 0x15ab78u: goto label_15ab78;
        case 0x15ab7cu: goto label_15ab7c;
        case 0x15ab80u: goto label_15ab80;
        case 0x15ab84u: goto label_15ab84;
        case 0x15ab88u: goto label_15ab88;
        case 0x15ab8cu: goto label_15ab8c;
        case 0x15ab90u: goto label_15ab90;
        case 0x15ab94u: goto label_15ab94;
        case 0x15ab98u: goto label_15ab98;
        case 0x15ab9cu: goto label_15ab9c;
        case 0x15aba0u: goto label_15aba0;
        case 0x15aba4u: goto label_15aba4;
        case 0x15aba8u: goto label_15aba8;
        case 0x15abacu: goto label_15abac;
        case 0x15abb0u: goto label_15abb0;
        case 0x15abb4u: goto label_15abb4;
        case 0x15abb8u: goto label_15abb8;
        case 0x15abbcu: goto label_15abbc;
        case 0x15abc0u: goto label_15abc0;
        case 0x15abc4u: goto label_15abc4;
        case 0x15abc8u: goto label_15abc8;
        case 0x15abccu: goto label_15abcc;
        case 0x15abd0u: goto label_15abd0;
        case 0x15abd4u: goto label_15abd4;
        case 0x15abd8u: goto label_15abd8;
        case 0x15abdcu: goto label_15abdc;
        case 0x15abe0u: goto label_15abe0;
        case 0x15abe4u: goto label_15abe4;
        case 0x15abe8u: goto label_15abe8;
        case 0x15abecu: goto label_15abec;
        case 0x15abf0u: goto label_15abf0;
        case 0x15abf4u: goto label_15abf4;
        case 0x15abf8u: goto label_15abf8;
        case 0x15abfcu: goto label_15abfc;
        case 0x15ac00u: goto label_15ac00;
        case 0x15ac04u: goto label_15ac04;
        case 0x15ac08u: goto label_15ac08;
        case 0x15ac0cu: goto label_15ac0c;
        case 0x15ac10u: goto label_15ac10;
        case 0x15ac14u: goto label_15ac14;
        case 0x15ac18u: goto label_15ac18;
        case 0x15ac1cu: goto label_15ac1c;
        case 0x15ac20u: goto label_15ac20;
        case 0x15ac24u: goto label_15ac24;
        case 0x15ac28u: goto label_15ac28;
        case 0x15ac2cu: goto label_15ac2c;
        case 0x15ac30u: goto label_15ac30;
        case 0x15ac34u: goto label_15ac34;
        case 0x15ac38u: goto label_15ac38;
        case 0x15ac3cu: goto label_15ac3c;
        case 0x15ac40u: goto label_15ac40;
        case 0x15ac44u: goto label_15ac44;
        case 0x15ac48u: goto label_15ac48;
        case 0x15ac4cu: goto label_15ac4c;
        case 0x15ac50u: goto label_15ac50;
        case 0x15ac54u: goto label_15ac54;
        case 0x15ac58u: goto label_15ac58;
        case 0x15ac5cu: goto label_15ac5c;
        case 0x15ac60u: goto label_15ac60;
        case 0x15ac64u: goto label_15ac64;
        case 0x15ac68u: goto label_15ac68;
        case 0x15ac6cu: goto label_15ac6c;
        case 0x15ac70u: goto label_15ac70;
        case 0x15ac74u: goto label_15ac74;
        case 0x15ac78u: goto label_15ac78;
        case 0x15ac7cu: goto label_15ac7c;
        case 0x15ac80u: goto label_15ac80;
        case 0x15ac84u: goto label_15ac84;
        case 0x15ac88u: goto label_15ac88;
        case 0x15ac8cu: goto label_15ac8c;
        case 0x15ac90u: goto label_15ac90;
        case 0x15ac94u: goto label_15ac94;
        case 0x15ac98u: goto label_15ac98;
        case 0x15ac9cu: goto label_15ac9c;
        case 0x15aca0u: goto label_15aca0;
        case 0x15aca4u: goto label_15aca4;
        case 0x15aca8u: goto label_15aca8;
        case 0x15acacu: goto label_15acac;
        case 0x15acb0u: goto label_15acb0;
        case 0x15acb4u: goto label_15acb4;
        case 0x15acb8u: goto label_15acb8;
        case 0x15acbcu: goto label_15acbc;
        case 0x15acc0u: goto label_15acc0;
        case 0x15acc4u: goto label_15acc4;
        case 0x15acc8u: goto label_15acc8;
        case 0x15acccu: goto label_15accc;
        case 0x15acd0u: goto label_15acd0;
        case 0x15acd4u: goto label_15acd4;
        case 0x15acd8u: goto label_15acd8;
        case 0x15acdcu: goto label_15acdc;
        case 0x15ace0u: goto label_15ace0;
        case 0x15ace4u: goto label_15ace4;
        case 0x15ace8u: goto label_15ace8;
        case 0x15acecu: goto label_15acec;
        case 0x15acf0u: goto label_15acf0;
        case 0x15acf4u: goto label_15acf4;
        case 0x15acf8u: goto label_15acf8;
        case 0x15acfcu: goto label_15acfc;
        case 0x15ad00u: goto label_15ad00;
        case 0x15ad04u: goto label_15ad04;
        case 0x15ad08u: goto label_15ad08;
        case 0x15ad0cu: goto label_15ad0c;
        case 0x15ad10u: goto label_15ad10;
        case 0x15ad14u: goto label_15ad14;
        case 0x15ad18u: goto label_15ad18;
        case 0x15ad1cu: goto label_15ad1c;
        case 0x15ad20u: goto label_15ad20;
        case 0x15ad24u: goto label_15ad24;
        case 0x15ad28u: goto label_15ad28;
        case 0x15ad2cu: goto label_15ad2c;
        case 0x15ad30u: goto label_15ad30;
        case 0x15ad34u: goto label_15ad34;
        case 0x15ad38u: goto label_15ad38;
        case 0x15ad3cu: goto label_15ad3c;
        case 0x15ad40u: goto label_15ad40;
        case 0x15ad44u: goto label_15ad44;
        case 0x15ad48u: goto label_15ad48;
        case 0x15ad4cu: goto label_15ad4c;
        case 0x15ad50u: goto label_15ad50;
        case 0x15ad54u: goto label_15ad54;
        case 0x15ad58u: goto label_15ad58;
        case 0x15ad5cu: goto label_15ad5c;
        case 0x15ad60u: goto label_15ad60;
        case 0x15ad64u: goto label_15ad64;
        case 0x15ad68u: goto label_15ad68;
        case 0x15ad6cu: goto label_15ad6c;
        case 0x15ad70u: goto label_15ad70;
        case 0x15ad74u: goto label_15ad74;
        case 0x15ad78u: goto label_15ad78;
        case 0x15ad7cu: goto label_15ad7c;
        case 0x15ad80u: goto label_15ad80;
        case 0x15ad84u: goto label_15ad84;
        case 0x15ad88u: goto label_15ad88;
        case 0x15ad8cu: goto label_15ad8c;
        case 0x15ad90u: goto label_15ad90;
        case 0x15ad94u: goto label_15ad94;
        case 0x15ad98u: goto label_15ad98;
        case 0x15ad9cu: goto label_15ad9c;
        case 0x15ada0u: goto label_15ada0;
        case 0x15ada4u: goto label_15ada4;
        case 0x15ada8u: goto label_15ada8;
        case 0x15adacu: goto label_15adac;
        case 0x15adb0u: goto label_15adb0;
        case 0x15adb4u: goto label_15adb4;
        case 0x15adb8u: goto label_15adb8;
        case 0x15adbcu: goto label_15adbc;
        case 0x15adc0u: goto label_15adc0;
        case 0x15adc4u: goto label_15adc4;
        case 0x15adc8u: goto label_15adc8;
        case 0x15adccu: goto label_15adcc;
        case 0x15add0u: goto label_15add0;
        case 0x15add4u: goto label_15add4;
        case 0x15add8u: goto label_15add8;
        case 0x15addcu: goto label_15addc;
        case 0x15ade0u: goto label_15ade0;
        case 0x15ade4u: goto label_15ade4;
        case 0x15ade8u: goto label_15ade8;
        case 0x15adecu: goto label_15adec;
        case 0x15adf0u: goto label_15adf0;
        case 0x15adf4u: goto label_15adf4;
        case 0x15adf8u: goto label_15adf8;
        case 0x15adfcu: goto label_15adfc;
        case 0x15ae00u: goto label_15ae00;
        case 0x15ae04u: goto label_15ae04;
        case 0x15ae08u: goto label_15ae08;
        case 0x15ae0cu: goto label_15ae0c;
        case 0x15ae10u: goto label_15ae10;
        case 0x15ae14u: goto label_15ae14;
        case 0x15ae18u: goto label_15ae18;
        case 0x15ae1cu: goto label_15ae1c;
        case 0x15ae20u: goto label_15ae20;
        case 0x15ae24u: goto label_15ae24;
        case 0x15ae28u: goto label_15ae28;
        case 0x15ae2cu: goto label_15ae2c;
        case 0x15ae30u: goto label_15ae30;
        case 0x15ae34u: goto label_15ae34;
        case 0x15ae38u: goto label_15ae38;
        case 0x15ae3cu: goto label_15ae3c;
        case 0x15ae40u: goto label_15ae40;
        case 0x15ae44u: goto label_15ae44;
        case 0x15ae48u: goto label_15ae48;
        case 0x15ae4cu: goto label_15ae4c;
        case 0x15ae50u: goto label_15ae50;
        case 0x15ae54u: goto label_15ae54;
        case 0x15ae58u: goto label_15ae58;
        case 0x15ae5cu: goto label_15ae5c;
        case 0x15ae60u: goto label_15ae60;
        case 0x15ae64u: goto label_15ae64;
        case 0x15ae68u: goto label_15ae68;
        case 0x15ae6cu: goto label_15ae6c;
        case 0x15ae70u: goto label_15ae70;
        case 0x15ae74u: goto label_15ae74;
        case 0x15ae78u: goto label_15ae78;
        case 0x15ae7cu: goto label_15ae7c;
        case 0x15ae80u: goto label_15ae80;
        case 0x15ae84u: goto label_15ae84;
        case 0x15ae88u: goto label_15ae88;
        case 0x15ae8cu: goto label_15ae8c;
        case 0x15ae90u: goto label_15ae90;
        case 0x15ae94u: goto label_15ae94;
        case 0x15ae98u: goto label_15ae98;
        case 0x15ae9cu: goto label_15ae9c;
        case 0x15aea0u: goto label_15aea0;
        case 0x15aea4u: goto label_15aea4;
        case 0x15aea8u: goto label_15aea8;
        case 0x15aeacu: goto label_15aeac;
        case 0x15aeb0u: goto label_15aeb0;
        case 0x15aeb4u: goto label_15aeb4;
        case 0x15aeb8u: goto label_15aeb8;
        case 0x15aebcu: goto label_15aebc;
        case 0x15aec0u: goto label_15aec0;
        case 0x15aec4u: goto label_15aec4;
        case 0x15aec8u: goto label_15aec8;
        case 0x15aeccu: goto label_15aecc;
        case 0x15aed0u: goto label_15aed0;
        case 0x15aed4u: goto label_15aed4;
        case 0x15aed8u: goto label_15aed8;
        case 0x15aedcu: goto label_15aedc;
        case 0x15aee0u: goto label_15aee0;
        case 0x15aee4u: goto label_15aee4;
        case 0x15aee8u: goto label_15aee8;
        case 0x15aeecu: goto label_15aeec;
        default: return;
    }

label_15a720:
    // 0x15a720: 0x1810  mfhi        $v1
    ctx->pc = 0x15a720u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_15a724:
    // 0x15a724: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x15a724u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_15a728:
    // 0x15a728: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x15a728u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_15a72c:
    // 0x15a72c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15a72cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15a730:
    // 0x15a730: 0x1000000d  b           . + 4 + (0xD << 2)
label_15a734:
    if (ctx->pc == 0x15A734u) {
        ctx->pc = 0x15A734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A730u;
        // 0x15a734: 0xa0234af2  sb          $v1, 0x4AF2($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 19186), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A738u;
        goto label_15a738;
    }
    ctx->pc = 0x15A730u;
    {
        const bool branch_taken_0x15a730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A730u;
        // 0x15a734: 0xa0234af2  sb          $v1, 0x4AF2($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 19186), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a730) {
            ctx->pc = 0x15A768u;
            goto label_15a768;
        }
    }
    ctx->pc = 0x15A738u;
label_15a738:
    // 0x15a738: 0x1483000a  bne         $a0, $v1, . + 4 + (0xA << 2)
label_15a73c:
    if (ctx->pc == 0x15A73Cu) {
        ctx->pc = 0x15A73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A738u;
        // 0x15a73c: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A740u;
        goto label_15a740;
    }
    ctx->pc = 0x15A738u;
    {
        const bool branch_taken_0x15a738 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x15A73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A738u;
        // 0x15a73c: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a738) {
            ctx->pc = 0x15A764u;
            goto label_15a764;
        }
    }
    ctx->pc = 0x15A740u;
label_15a740:
    // 0x15a740: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15a740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_15a744:
    // 0x15a744: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x15a744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_15a748:
    // 0x15a748: 0x9024490c  lbu         $a0, 0x490C($at)
    ctx->pc = 0x15a748u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_15a74c:
    // 0x15a74c: 0x246354c0  addiu       $v1, $v1, 0x54C0
    ctx->pc = 0x15a74cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21696));
label_15a750:
    // 0x15a750: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15a750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15a754:
    // 0x15a754: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15a754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_15a758:
    // 0x15a758: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x15a758u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_15a75c:
    // 0x15a75c: 0x10000002  b           . + 4 + (0x2 << 2)
label_15a760:
    if (ctx->pc == 0x15A760u) {
        ctx->pc = 0x15A760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A75Cu;
        // 0x15a760: 0xa0234af2  sb          $v1, 0x4AF2($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 19186), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A764u;
        goto label_15a764;
    }
    ctx->pc = 0x15A75Cu;
    {
        const bool branch_taken_0x15a75c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A75Cu;
        // 0x15a760: 0xa0234af2  sb          $v1, 0x4AF2($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 19186), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a75c) {
            ctx->pc = 0x15A768u;
            goto label_15a768;
        }
    }
    ctx->pc = 0x15A764u;
label_15a764:
    // 0x15a764: 0xa0204af2  sb          $zero, 0x4AF2($at)
    ctx->pc = 0x15a764u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19186), (uint8_t)GPR_U32(ctx, 0));
label_15a768:
    // 0x15a768: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15a768u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_15a76c:
    // 0x15a76c: 0x80244af2  lb          $a0, 0x4AF2($at)
    ctx->pc = 0x15a76cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 19186)));
label_15a770:
    // 0x15a770: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x15a770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
label_15a774:
    // 0x15a774: 0x8023c994  lb          $v1, -0x366C($at)
    ctx->pc = 0x15a774u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294953364)));
label_15a778:
    // 0x15a778: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x15a778u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_15a77c:
    // 0x15a77c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15a77cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_15a780:
    // 0x15a780: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x15a780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_15a784:
    // 0x15a784: 0xa0234af2  sb          $v1, 0x4AF2($at)
    ctx->pc = 0x15a784u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19186), (uint8_t)GPR_U32(ctx, 3));
label_15a788:
    // 0x15a788: 0x3e00008  jr          $ra
label_15a78c:
    if (ctx->pc == 0x15A78Cu) {
        ctx->pc = 0x15A790u;
        goto label_15a790;
    }
    ctx->pc = 0x15A788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A790u;
label_15a790:
    // 0x15a790: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x15a790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
label_15a794:
    // 0x15a794: 0x8c23e290  lw          $v1, -0x1D70($at)
    ctx->pc = 0x15a794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294959760)));
label_15a798:
    // 0x15a798: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_15a79c:
    if (ctx->pc == 0x15A79Cu) {
        ctx->pc = 0x15A79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A798u;
        // 0x15a79c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A7A0u;
        goto label_15a7a0;
    }
    ctx->pc = 0x15A798u;
    {
        const bool branch_taken_0x15a798 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A798u;
        // 0x15a79c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a798) {
            ctx->pc = 0x15A7B4u;
            goto label_15a7b4;
        }
    }
    ctx->pc = 0x15A7A0u;
label_15a7a0:
    // 0x15a7a0: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x15a7a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
label_15a7a4:
    // 0x15a7a4: 0x8c23e294  lw          $v1, -0x1D6C($at)
    ctx->pc = 0x15a7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294959764)));
label_15a7a8:
    // 0x15a7a8: 0x14640002  bne         $v1, $a0, . + 4 + (0x2 << 2)
label_15a7ac:
    if (ctx->pc == 0x15A7ACu) {
        ctx->pc = 0x15A7B0u;
        goto label_15a7b0;
    }
    ctx->pc = 0x15A7A8u;
    {
        const bool branch_taken_0x15a7a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x15a7a8) {
            ctx->pc = 0x15A7B4u;
            goto label_15a7b4;
        }
    }
    ctx->pc = 0x15A7B0u;
label_15a7b0:
    // 0x15a7b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15a7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15a7b4:
    // 0x15a7b4: 0x3e00008  jr          $ra
label_15a7b8:
    if (ctx->pc == 0x15A7B8u) {
        ctx->pc = 0x15A7BCu;
        goto label_15a7bc;
    }
    ctx->pc = 0x15A7B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A7B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A7BCu;
label_15a7bc:
    // 0x15a7bc: 0x0  nop
    ctx->pc = 0x15a7bcu;
    // NOP
label_15a7c0:
    // 0x15a7c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15a7c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15a7c4:
    // 0x15a7c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15a7c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15a7c8:
    // 0x15a7c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15a7c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15a7cc:
    // 0x15a7cc: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x15a7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
label_15a7d0:
    // 0x15a7d0: 0x2484c990  addiu       $a0, $a0, -0x3670
    ctx->pc = 0x15a7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953360));
label_15a7d4:
    // 0x15a7d4: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x15a7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_15a7d8:
    // 0x15a7d8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x15a7d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_15a7dc:
    // 0x15a7dc: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x15a7dcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_15a7e0:
    // 0x15a7e0: 0x902330f1  lbu         $v1, 0x30F1($at)
    ctx->pc = 0x15a7e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 12529)));
label_15a7e4:
    // 0x15a7e4: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
label_15a7e8:
    if (ctx->pc == 0x15A7E8u) {
        ctx->pc = 0x15A7ECu;
        goto label_15a7ec;
    }
    ctx->pc = 0x15A7E4u;
    {
        const bool branch_taken_0x15a7e4 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x15a7e4) {
            ctx->pc = 0x15A7F4u;
            goto label_15a7f4;
        }
    }
    ctx->pc = 0x15A7ECu;
label_15a7ec:
    // 0x15a7ec: 0x10000005  b           . + 4 + (0x5 << 2)
label_15a7f0:
    if (ctx->pc == 0x15A7F0u) {
        ctx->pc = 0x15A7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A7ECu;
        // 0x15a7f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A7F4u;
        goto label_15a7f4;
    }
    ctx->pc = 0x15A7ECu;
    {
        const bool branch_taken_0x15a7ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A7ECu;
        // 0x15a7f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a7ec) {
            ctx->pc = 0x15A804u;
            goto label_15a804;
        }
    }
    ctx->pc = 0x15A7F4u;
label_15a7f4:
    // 0x15a7f4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15a7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_15a7f8:
    // 0x15a7f8: 0x28a30003  slti        $v1, $a1, 0x3
    ctx->pc = 0x15a7f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_15a7fc:
    // 0x15a7fc: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
label_15a800:
    if (ctx->pc == 0x15A800u) {
        ctx->pc = 0x15A800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A7FCu;
        // 0x15a800: 0x24c601a8  addiu       $a2, $a2, 0x1A8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 424));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A804u;
        goto label_15a804;
    }
    ctx->pc = 0x15A7FCu;
    {
        const bool branch_taken_0x15a7fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15A800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A7FCu;
        // 0x15a800: 0x24c601a8  addiu       $a2, $a2, 0x1A8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a7fc) {
            ctx->pc = 0x15A7D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15a7d4;
        }
    }
    ctx->pc = 0x15A804u;
label_15a804:
    // 0x15a804: 0x0  nop
    ctx->pc = 0x15a804u;
    // NOP
label_15a808:
    // 0x15a808: 0x3e00008  jr          $ra
label_15a80c:
    if (ctx->pc == 0x15A80Cu) {
        ctx->pc = 0x15A810u;
        goto label_15a810;
    }
    ctx->pc = 0x15A808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A810u;
label_15a810:
    // 0x15a810: 0x28a3000a  slti        $v1, $a1, 0xA
    ctx->pc = 0x15a810u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
label_15a814:
    // 0x15a814: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_15a818:
    if (ctx->pc == 0x15A818u) {
        ctx->pc = 0x15A818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A814u;
        // 0x15a818: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A81Cu;
        goto label_15a81c;
    }
    ctx->pc = 0x15A814u;
    {
        const bool branch_taken_0x15a814 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15A818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A814u;
        // 0x15a818: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a814) {
            ctx->pc = 0x15A828u;
            goto label_15a828;
        }
    }
    ctx->pc = 0x15A81Cu;
label_15a81c:
    // 0x15a81c: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x15a81cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_15a820:
    // 0x15a820: 0x10000012  b           . + 4 + (0x12 << 2)
label_15a824:
    if (ctx->pc == 0x15A824u) {
        ctx->pc = 0x15A824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A820u;
        // 0x15a824: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A828u;
        goto label_15a828;
    }
    ctx->pc = 0x15A820u;
    {
        const bool branch_taken_0x15a820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A820u;
        // 0x15a824: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a820) {
            ctx->pc = 0x15A86Cu;
            goto label_15a86c;
        }
    }
    ctx->pc = 0x15A828u;
label_15a828:
    // 0x15a828: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x15a828u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_15a82c:
    // 0x15a82c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15a82cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15a830:
    // 0x15a830: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x15a830u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
label_15a834:
    // 0x15a834: 0x34080  sll         $t0, $v1, 2
    ctx->pc = 0x15a834u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_15a838:
    // 0x15a838: 0x248435a0  addiu       $a0, $a0, 0x35A0
    ctx->pc = 0x15a838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13728));
label_15a83c:
    // 0x15a83c: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x15a83cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_15a840:
    // 0x15a840: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x15a840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_15a844:
    // 0x15a844: 0x246335a1  addiu       $v1, $v1, 0x35A1
    ctx->pc = 0x15a844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13729));
label_15a848:
    // 0x15a848: 0x24840000  addiu       $a0, $a0, 0x0
    ctx->pc = 0x15a848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
label_15a84c:
    // 0x15a84c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x15a84cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_15a850:
    // 0x15a850: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x15a850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_15a854:
    // 0x15a854: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x15a854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_15a858:
    // 0x15a858: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x15a858u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_15a85c:
    // 0x15a85c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x15a85cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_15a860:
    // 0x15a860: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x15a860u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
label_15a864:
    // 0x15a864: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x15a864u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_15a868:
    // 0x15a868: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x15a868u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_15a86c:
    // 0x15a86c: 0x3e00008  jr          $ra
label_15a870:
    if (ctx->pc == 0x15A870u) {
        ctx->pc = 0x15A874u;
        goto label_15a874;
    }
    ctx->pc = 0x15A86Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A86Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A874u;
label_15a874:
    // 0x15a874: 0x0  nop
    ctx->pc = 0x15a874u;
    // NOP
label_15a878:
    // 0x15a878: 0x0  nop
    ctx->pc = 0x15a878u;
    // NOP
label_15a87c:
    // 0x15a87c: 0x0  nop
    ctx->pc = 0x15a87cu;
    // NOP
label_15a880:
    // 0x15a880: 0x3e00008  jr          $ra
label_15a884:
    if (ctx->pc == 0x15A884u) {
        ctx->pc = 0x15A884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A880u;
        // 0x15a884: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A888u;
        goto label_15a888;
    }
    ctx->pc = 0x15A880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A880u;
        // 0x15a884: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A888u;
label_15a888:
    // 0x15a888: 0x0  nop
    ctx->pc = 0x15a888u;
    // NOP
label_15a88c:
    // 0x15a88c: 0x0  nop
    ctx->pc = 0x15a88cu;
    // NOP
label_15a890:
    // 0x15a890: 0x41200  sll         $v0, $a0, 8
    ctx->pc = 0x15a890u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_15a894:
    // 0x15a894: 0x3c03002f  lui         $v1, 0x2F
    ctx->pc = 0x15a894u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47 << 16));
label_15a898:
    // 0x15a898: 0x442823  subu        $a1, $v0, $a0
    ctx->pc = 0x15a898u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_15a89c:
    // 0x15a89c: 0x24632570  addiu       $v1, $v1, 0x2570
    ctx->pc = 0x15a89cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9584));
label_15a8a0:
    // 0x15a8a0: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x15a8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_15a8a4:
    // 0x15a8a4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x15a8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_15a8a8:
    // 0x15a8a8: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x15a8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_15a8ac:
    // 0x15a8ac: 0x24423b80  addiu       $v0, $v0, 0x3B80
    ctx->pc = 0x15a8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15232));
label_15a8b0:
    // 0x15a8b0: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x15a8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_15a8b4:
    // 0x15a8b4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15a8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15a8b8:
    // 0x15a8b8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x15a8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_15a8bc:
    // 0x15a8bc: 0x9464000a  lhu         $a0, 0xA($v1)
    ctx->pc = 0x15a8bcu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
label_15a8c0:
    // 0x15a8c0: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x15a8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_15a8c4:
    // 0x15a8c4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x15a8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15a8c8:
    // 0x15a8c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15a8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15a8cc:
    // 0x15a8cc: 0x3e00008  jr          $ra
label_15a8d0:
    if (ctx->pc == 0x15A8D0u) {
        ctx->pc = 0x15A8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A8CCu;
        // 0x15a8d0: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A8D4u;
        goto label_15a8d4;
    }
    ctx->pc = 0x15A8CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A8CCu;
        // 0x15a8d0: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A8CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A8D4u;
label_15a8d4:
    // 0x15a8d4: 0x0  nop
    ctx->pc = 0x15a8d4u;
    // NOP
label_15a8d8:
    // 0x15a8d8: 0x0  nop
    ctx->pc = 0x15a8d8u;
    // NOP
label_15a8dc:
    // 0x15a8dc: 0x0  nop
    ctx->pc = 0x15a8dcu;
    // NOP
label_15a8e0:
    // 0x15a8e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15a8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_15a8e4:
    // 0x15a8e4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x15a8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_15a8e8:
    // 0x15a8e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15a8e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_15a8ec:
    // 0x15a8ec: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15a8ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_15a8f0:
    // 0x15a8f0: 0x9026490c  lbu         $a2, 0x490C($at)
    ctx->pc = 0x15a8f0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_15a8f4:
    // 0x15a8f4: 0x244238e0  addiu       $v0, $v0, 0x38E0
    ctx->pc = 0x15a8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14560));
label_15a8f8:
    // 0x15a8f8: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x15a8f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_15a8fc:
    // 0x15a8fc: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x15a8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_15a900:
    // 0x15a900: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15a900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_15a904:
    // 0x15a904: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x15a904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_15a908:
    // 0x15a908: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x15a908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_15a90c:
    // 0x15a90c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x15a90cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_15a910:
    // 0x15a910: 0x1045001a  beq         $v0, $a1, . + 4 + (0x1A << 2)
label_15a914:
    if (ctx->pc == 0x15A914u) {
        ctx->pc = 0x15A914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A910u;
        // 0x15a914: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A918u;
        goto label_15a918;
    }
    ctx->pc = 0x15A910u;
    {
        const bool branch_taken_0x15a910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x15A914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A910u;
        // 0x15a914: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a910) {
            ctx->pc = 0x15A97Cu;
            goto label_15a97c;
        }
    }
    ctx->pc = 0x15A918u;
label_15a918:
    // 0x15a918: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_15a91c:
    if (ctx->pc == 0x15A91Cu) {
        ctx->pc = 0x15A920u;
        goto label_15a920;
    }
    ctx->pc = 0x15A918u;
    {
        const bool branch_taken_0x15a918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x15a918) {
            ctx->pc = 0x15A928u;
            goto label_15a928;
        }
    }
    ctx->pc = 0x15A920u;
label_15a920:
    // 0x15a920: 0x10000091  b           . + 4 + (0x91 << 2)
label_15a924:
    if (ctx->pc == 0x15A924u) {
        ctx->pc = 0x15A924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A920u;
        // 0x15a924: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A928u;
        goto label_15a928;
    }
    ctx->pc = 0x15A920u;
    {
        const bool branch_taken_0x15a920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A920u;
        // 0x15a924: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a920) {
            ctx->pc = 0x15AB68u;
            goto label_15ab68;
        }
    }
    ctx->pc = 0x15A928u;
label_15a928:
    // 0x15a928: 0x41a00  sll         $v1, $a0, 8
    ctx->pc = 0x15a928u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_15a92c:
    // 0x15a92c: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x15a92cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
label_15a930:
    // 0x15a930: 0x643823  subu        $a3, $v1, $a0
    ctx->pc = 0x15a930u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15a934:
    // 0x15a934: 0x24a52570  addiu       $a1, $a1, 0x2570
    ctx->pc = 0x15a934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9584));
label_15a938:
    // 0x15a938: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x15a938u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_15a93c:
    // 0x15a93c: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x15a93cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
label_15a940:
    // 0x15a940: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x15a940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_15a944:
    // 0x15a944: 0x24843b80  addiu       $a0, $a0, 0x3B80
    ctx->pc = 0x15a944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15232));
label_15a948:
    // 0x15a948: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x15a948u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_15a94c:
    // 0x15a94c: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x15a94cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_15a950:
    // 0x15a950: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x15a950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_15a954:
    // 0x15a954: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x15a954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_15a958:
    // 0x15a958: 0x94a6000a  lhu         $a2, 0xA($a1)
    ctx->pc = 0x15a958u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
label_15a95c:
    // 0x15a95c: 0x62900  sll         $a1, $a2, 4
    ctx->pc = 0x15a95cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_15a960:
    // 0x15a960: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x15a960u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_15a964:
    // 0x15a964: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x15a964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_15a968:
    // 0x15a968: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x15a968u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_15a96c:
    // 0x15a96c: 0x1483007d  bne         $a0, $v1, . + 4 + (0x7D << 2)
label_15a970:
    if (ctx->pc == 0x15A970u) {
        ctx->pc = 0x15A974u;
        goto label_15a974;
    }
    ctx->pc = 0x15A96Cu;
    {
        const bool branch_taken_0x15a96c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x15a96c) {
            ctx->pc = 0x15AB64u;
            goto label_15ab64;
        }
    }
    ctx->pc = 0x15A974u;
label_15a974:
    // 0x15a974: 0x1000007b  b           . + 4 + (0x7B << 2)
label_15a978:
    if (ctx->pc == 0x15A978u) {
        ctx->pc = 0x15A978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A974u;
        // 0x15a978: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A97Cu;
        goto label_15a97c;
    }
    ctx->pc = 0x15A974u;
    {
        const bool branch_taken_0x15a974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A974u;
        // 0x15a978: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a974) {
            ctx->pc = 0x15AB64u;
            goto label_15ab64;
        }
    }
    ctx->pc = 0x15A97Cu;
label_15a97c:
    // 0x15a97c: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x15a97cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_15a980:
    // 0x15a980: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x15a980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_15a984:
    // 0x15a984: 0x10830076  beq         $a0, $v1, . + 4 + (0x76 << 2)
label_15a988:
    if (ctx->pc == 0x15A988u) {
        ctx->pc = 0x15A988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A984u;
        // 0x15a988: 0x24030037  addiu       $v1, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A98Cu;
        goto label_15a98c;
    }
    ctx->pc = 0x15A984u;
    {
        const bool branch_taken_0x15a984 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x15A988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A984u;
        // 0x15a988: 0x24030037  addiu       $v1, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a984) {
            ctx->pc = 0x15AB60u;
            goto label_15ab60;
        }
    }
    ctx->pc = 0x15A98Cu;
label_15a98c:
    // 0x15a98c: 0x10830074  beq         $a0, $v1, . + 4 + (0x74 << 2)
label_15a990:
    if (ctx->pc == 0x15A990u) {
        ctx->pc = 0x15A994u;
        goto label_15a994;
    }
    ctx->pc = 0x15A98Cu;
    {
        const bool branch_taken_0x15a98c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15a98c) {
            ctx->pc = 0x15AB60u;
            goto label_15ab60;
        }
    }
    ctx->pc = 0x15A994u;
label_15a994:
    // 0x15a994: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x15a994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_15a998:
    // 0x15a998: 0x10830057  beq         $a0, $v1, . + 4 + (0x57 << 2)
label_15a99c:
    if (ctx->pc == 0x15A99Cu) {
        ctx->pc = 0x15A99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A998u;
        // 0x15a99c: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A9A0u;
        goto label_15a9a0;
    }
    ctx->pc = 0x15A998u;
    {
        const bool branch_taken_0x15a998 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x15A99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A998u;
        // 0x15a99c: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a998) {
            ctx->pc = 0x15AAF8u;
            goto label_15aaf8;
        }
    }
    ctx->pc = 0x15A9A0u;
label_15a9a0:
    // 0x15a9a0: 0x2403002c  addiu       $v1, $zero, 0x2C
    ctx->pc = 0x15a9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_15a9a4:
    // 0x15a9a4: 0x10830033  beq         $a0, $v1, . + 4 + (0x33 << 2)
label_15a9a8:
    if (ctx->pc == 0x15A9A8u) {
        ctx->pc = 0x15A9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A9A4u;
        // 0x15a9a8: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A9ACu;
        goto label_15a9ac;
    }
    ctx->pc = 0x15A9A4u;
    {
        const bool branch_taken_0x15a9a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x15A9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A9A4u;
        // 0x15a9a8: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a9a4) {
            ctx->pc = 0x15AA74u;
            goto label_15aa74;
        }
    }
    ctx->pc = 0x15A9ACu;
label_15a9ac:
    // 0x15a9ac: 0x2403002b  addiu       $v1, $zero, 0x2B
    ctx->pc = 0x15a9acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_15a9b0:
    // 0x15a9b0: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_15a9b4:
    if (ctx->pc == 0x15A9B4u) {
        ctx->pc = 0x15A9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A9B0u;
        // 0x15a9b4: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A9B8u;
        goto label_15a9b8;
    }
    ctx->pc = 0x15A9B0u;
    {
        const bool branch_taken_0x15a9b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x15A9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A9B0u;
        // 0x15a9b4: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a9b0) {
            ctx->pc = 0x15A9C0u;
            goto label_15a9c0;
        }
    }
    ctx->pc = 0x15A9B8u;
label_15a9b8:
    // 0x15a9b8: 0x1000006a  b           . + 4 + (0x6A << 2)
label_15a9bc:
    if (ctx->pc == 0x15A9BCu) {
        ctx->pc = 0x15A9C0u;
        goto label_15a9c0;
    }
    ctx->pc = 0x15A9B8u;
    {
        const bool branch_taken_0x15a9b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a9b8) {
            ctx->pc = 0x15AB64u;
            goto label_15ab64;
        }
    }
    ctx->pc = 0x15A9C0u;
label_15a9c0:
    // 0x15a9c0: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x15a9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_15a9c4:
    // 0x15a9c4: 0x8c244970  lw          $a0, 0x4970($at)
    ctx->pc = 0x15a9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18800)));
label_15a9c8:
    // 0x15a9c8: 0x1083001c  beq         $a0, $v1, . + 4 + (0x1C << 2)
label_15a9cc:
    if (ctx->pc == 0x15A9CCu) {
        ctx->pc = 0x15A9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A9C8u;
        // 0x15a9cc: 0x24030026  addiu       $v1, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A9D0u;
        goto label_15a9d0;
    }
    ctx->pc = 0x15A9C8u;
    {
        const bool branch_taken_0x15a9c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x15A9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A9C8u;
        // 0x15a9cc: 0x24030026  addiu       $v1, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a9c8) {
            ctx->pc = 0x15AA3Cu;
            goto label_15aa3c;
        }
    }
    ctx->pc = 0x15A9D0u;
label_15a9d0:
    // 0x15a9d0: 0x1083001a  beq         $a0, $v1, . + 4 + (0x1A << 2)
label_15a9d4:
    if (ctx->pc == 0x15A9D4u) {
        ctx->pc = 0x15A9D8u;
        goto label_15a9d8;
    }
    ctx->pc = 0x15A9D0u;
    {
        const bool branch_taken_0x15a9d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15a9d0) {
            ctx->pc = 0x15AA3Cu;
            goto label_15aa3c;
        }
    }
    ctx->pc = 0x15A9D8u;
label_15a9d8:
    // 0x15a9d8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x15a9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_15a9dc:
    // 0x15a9dc: 0x10830015  beq         $a0, $v1, . + 4 + (0x15 << 2)
label_15a9e0:
    if (ctx->pc == 0x15A9E0u) {
        ctx->pc = 0x15A9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A9DCu;
        // 0x15a9e0: 0x24030013  addiu       $v1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A9E4u;
        goto label_15a9e4;
    }
    ctx->pc = 0x15A9DCu;
    {
        const bool branch_taken_0x15a9dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x15A9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A9DCu;
        // 0x15a9e0: 0x24030013  addiu       $v1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a9dc) {
            ctx->pc = 0x15AA34u;
            goto label_15aa34;
        }
    }
    ctx->pc = 0x15A9E4u;
label_15a9e4:
    // 0x15a9e4: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
label_15a9e8:
    if (ctx->pc == 0x15A9E8u) {
        ctx->pc = 0x15A9ECu;
        goto label_15a9ec;
    }
    ctx->pc = 0x15A9E4u;
    {
        const bool branch_taken_0x15a9e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15a9e4) {
            ctx->pc = 0x15AA2Cu;
            goto label_15aa2c;
        }
    }
    ctx->pc = 0x15A9ECu;
label_15a9ec:
    // 0x15a9ec: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x15a9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_15a9f0:
    // 0x15a9f0: 0x1083000e  beq         $a0, $v1, . + 4 + (0xE << 2)
label_15a9f4:
    if (ctx->pc == 0x15A9F4u) {
        ctx->pc = 0x15A9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A9F0u;
        // 0x15a9f4: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15A9F8u;
        goto label_15a9f8;
    }
    ctx->pc = 0x15A9F0u;
    {
        const bool branch_taken_0x15a9f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x15A9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A9F0u;
        // 0x15a9f4: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a9f0) {
            ctx->pc = 0x15AA2Cu;
            goto label_15aa2c;
        }
    }
    ctx->pc = 0x15A9F8u;
label_15a9f8:
    // 0x15a9f8: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
label_15a9fc:
    if (ctx->pc == 0x15A9FCu) {
        ctx->pc = 0x15AA00u;
        goto label_15aa00;
    }
    ctx->pc = 0x15A9F8u;
    {
        const bool branch_taken_0x15a9f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15a9f8) {
            ctx->pc = 0x15AA24u;
            goto label_15aa24;
        }
    }
    ctx->pc = 0x15AA00u;
label_15aa00:
    // 0x15aa00: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x15aa00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_15aa04:
    // 0x15aa04: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
label_15aa08:
    if (ctx->pc == 0x15AA08u) {
        ctx->pc = 0x15AA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AA04u;
        // 0x15aa08: 0x24030022  addiu       $v1, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AA0Cu;
        goto label_15aa0c;
    }
    ctx->pc = 0x15AA04u;
    {
        const bool branch_taken_0x15aa04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x15AA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AA04u;
        // 0x15aa08: 0x24030022  addiu       $v1, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aa04) {
            ctx->pc = 0x15AA24u;
            goto label_15aa24;
        }
    }
    ctx->pc = 0x15AA0Cu;
label_15aa0c:
    // 0x15aa0c: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_15aa10:
    if (ctx->pc == 0x15AA10u) {
        ctx->pc = 0x15AA14u;
        goto label_15aa14;
    }
    ctx->pc = 0x15AA0Cu;
    {
        const bool branch_taken_0x15aa0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15aa0c) {
            ctx->pc = 0x15AA1Cu;
            goto label_15aa1c;
        }
    }
    ctx->pc = 0x15AA14u;
label_15aa14:
    // 0x15aa14: 0x10000053  b           . + 4 + (0x53 << 2)
label_15aa18:
    if (ctx->pc == 0x15AA18u) {
        ctx->pc = 0x15AA1Cu;
        goto label_15aa1c;
    }
    ctx->pc = 0x15AA14u;
    {
        const bool branch_taken_0x15aa14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15aa14) {
            ctx->pc = 0x15AB64u;
            goto label_15ab64;
        }
    }
    ctx->pc = 0x15AA1Cu;
label_15aa1c:
    // 0x15aa1c: 0x10000051  b           . + 4 + (0x51 << 2)
label_15aa20:
    if (ctx->pc == 0x15AA20u) {
        ctx->pc = 0x15AA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AA1Cu;
        // 0x15aa20: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AA24u;
        goto label_15aa24;
    }
    ctx->pc = 0x15AA1Cu;
    {
        const bool branch_taken_0x15aa1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AA1Cu;
        // 0x15aa20: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aa1c) {
            ctx->pc = 0x15AB64u;
            goto label_15ab64;
        }
    }
    ctx->pc = 0x15AA24u;
label_15aa24:
    // 0x15aa24: 0x1000004f  b           . + 4 + (0x4F << 2)
label_15aa28:
    if (ctx->pc == 0x15AA28u) {
        ctx->pc = 0x15AA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AA24u;
        // 0x15aa28: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AA2Cu;
        goto label_15aa2c;
    }
    ctx->pc = 0x15AA24u;
    {
        const bool branch_taken_0x15aa24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AA24u;
        // 0x15aa28: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aa24) {
            ctx->pc = 0x15AB64u;
            goto label_15ab64;
        }
    }
    ctx->pc = 0x15AA2Cu;
label_15aa2c:
    // 0x15aa2c: 0x1000004d  b           . + 4 + (0x4D << 2)
label_15aa30:
    if (ctx->pc == 0x15AA30u) {
        ctx->pc = 0x15AA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AA2Cu;
        // 0x15aa30: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AA34u;
        goto label_15aa34;
    }
    ctx->pc = 0x15AA2Cu;
    {
        const bool branch_taken_0x15aa2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AA2Cu;
        // 0x15aa30: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aa2c) {
            ctx->pc = 0x15AB64u;
            goto label_15ab64;
        }
    }
    ctx->pc = 0x15AA34u;
label_15aa34:
    // 0x15aa34: 0x1000004b  b           . + 4 + (0x4B << 2)
label_15aa38:
    if (ctx->pc == 0x15AA38u) {
        ctx->pc = 0x15AA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AA34u;
        // 0x15aa38: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AA3Cu;
        goto label_15aa3c;
    }
    ctx->pc = 0x15AA34u;
    {
        const bool branch_taken_0x15aa34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AA34u;
        // 0x15aa38: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aa34) {
            ctx->pc = 0x15AB64u;
            goto label_15ab64;
        }
    }
    ctx->pc = 0x15AA3Cu;
label_15aa3c:
    // 0x15aa3c: 0xc084af4  jal         func_212BD0
label_15aa40:
    if (ctx->pc == 0x15AA40u) {
        ctx->pc = 0x15AA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AA3Cu;
        // 0x15aa40: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AA44u;
        goto label_15aa44;
    }
    ctx->pc = 0x15AA3Cu;
    SET_GPR_U32(ctx, 31, 0x15AA44u);
    ctx->pc = 0x15AA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AA3Cu;
    // 0x15aa40: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212BD0u;
    { ctx->pc = 0x212bd0; return; }
    ctx->pc = 0x15AA44u;
label_15aa44:
    // 0x15aa44: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_15aa48:
    if (ctx->pc == 0x15AA48u) {
        ctx->pc = 0x15AA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AA44u;
        // 0x15aa48: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AA4Cu;
        goto label_15aa4c;
    }
    ctx->pc = 0x15AA44u;
    {
        const bool branch_taken_0x15aa44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AA44u;
        // 0x15aa48: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aa44) {
            ctx->pc = 0x15AA54u;
            goto label_15aa54;
        }
    }
    ctx->pc = 0x15AA4Cu;
label_15aa4c:
    // 0x15aa4c: 0x10000045  b           . + 4 + (0x45 << 2)
label_15aa50:
    if (ctx->pc == 0x15AA50u) {
        ctx->pc = 0x15AA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AA4Cu;
        // 0x15aa50: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AA54u;
        goto label_15aa54;
    }
    ctx->pc = 0x15AA4Cu;
    {
        const bool branch_taken_0x15aa4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AA4Cu;
        // 0x15aa50: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aa4c) {
            ctx->pc = 0x15AB64u;
            goto label_15ab64;
        }
    }
    ctx->pc = 0x15AA54u;
label_15aa54:
    // 0x15aa54: 0xc084af4  jal         func_212BD0
label_15aa58:
    if (ctx->pc == 0x15AA58u) {
        ctx->pc = 0x15AA5Cu;
        goto label_15aa5c;
    }
    ctx->pc = 0x15AA54u;
    SET_GPR_U32(ctx, 31, 0x15AA5Cu);
    ctx->pc = 0x212BD0u;
    { ctx->pc = 0x212bd0; return; }
    ctx->pc = 0x15AA5Cu;
label_15aa5c:
    // 0x15aa5c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_15aa60:
    if (ctx->pc == 0x15AA60u) {
        ctx->pc = 0x15AA64u;
        goto label_15aa64;
    }
    ctx->pc = 0x15AA5Cu;
    {
        const bool branch_taken_0x15aa5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15aa5c) {
            ctx->pc = 0x15AA6Cu;
            goto label_15aa6c;
        }
    }
    ctx->pc = 0x15AA64u;
label_15aa64:
    // 0x15aa64: 0x1000003f  b           . + 4 + (0x3F << 2)
label_15aa68:
    if (ctx->pc == 0x15AA68u) {
        ctx->pc = 0x15AA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AA64u;
        // 0x15aa68: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AA6Cu;
        goto label_15aa6c;
    }
    ctx->pc = 0x15AA64u;
    {
        const bool branch_taken_0x15aa64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AA64u;
        // 0x15aa68: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aa64) {
            ctx->pc = 0x15AB64u;
            goto label_15ab64;
        }
    }
    ctx->pc = 0x15AA6Cu;
label_15aa6c:
    // 0x15aa6c: 0x1000003d  b           . + 4 + (0x3D << 2)
label_15aa70:
    if (ctx->pc == 0x15AA70u) {
        ctx->pc = 0x15AA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AA6Cu;
        // 0x15aa70: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AA74u;
        goto label_15aa74;
    }
    ctx->pc = 0x15AA6Cu;
    {
        const bool branch_taken_0x15aa6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AA6Cu;
        // 0x15aa70: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aa6c) {
            ctx->pc = 0x15AB64u;
            goto label_15ab64;
        }
    }
    ctx->pc = 0x15AA74u;
label_15aa74:
    // 0x15aa74: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x15aa74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_15aa78:
    // 0x15aa78: 0x8c244970  lw          $a0, 0x4970($at)
    ctx->pc = 0x15aa78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18800)));
label_15aa7c:
    // 0x15aa7c: 0x1083001c  beq         $a0, $v1, . + 4 + (0x1C << 2)
label_15aa80:
    if (ctx->pc == 0x15AA80u) {
        ctx->pc = 0x15AA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AA7Cu;
        // 0x15aa80: 0x24030021  addiu       $v1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AA84u;
        goto label_15aa84;
    }
    ctx->pc = 0x15AA7Cu;
    {
        const bool branch_taken_0x15aa7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x15AA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AA7Cu;
        // 0x15aa80: 0x24030021  addiu       $v1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aa7c) {
            ctx->pc = 0x15AAF0u;
            goto label_15aaf0;
        }
    }
    ctx->pc = 0x15AA84u;
label_15aa84:
    // 0x15aa84: 0x10830018  beq         $a0, $v1, . + 4 + (0x18 << 2)
label_15aa88:
    if (ctx->pc == 0x15AA88u) {
        ctx->pc = 0x15AA8Cu;
        goto label_15aa8c;
    }
    ctx->pc = 0x15AA84u;
    {
        const bool branch_taken_0x15aa84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15aa84) {
            ctx->pc = 0x15AAE8u;
            goto label_15aae8;
        }
    }
    ctx->pc = 0x15AA8Cu;
label_15aa8c:
    // 0x15aa8c: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x15aa8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_15aa90:
    // 0x15aa90: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
label_15aa94:
    if (ctx->pc == 0x15AA94u) {
        ctx->pc = 0x15AA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AA90u;
        // 0x15aa94: 0x24030015  addiu       $v1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AA98u;
        goto label_15aa98;
    }
    ctx->pc = 0x15AA90u;
    {
        const bool branch_taken_0x15aa90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x15AA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AA90u;
        // 0x15aa94: 0x24030015  addiu       $v1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aa90) {
            ctx->pc = 0x15AAE0u;
            goto label_15aae0;
        }
    }
    ctx->pc = 0x15AA98u;
label_15aa98:
    // 0x15aa98: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
label_15aa9c:
    if (ctx->pc == 0x15AA9Cu) {
        ctx->pc = 0x15AAA0u;
        goto label_15aaa0;
    }
    ctx->pc = 0x15AA98u;
    {
        const bool branch_taken_0x15aa98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15aa98) {
            ctx->pc = 0x15AAE0u;
            goto label_15aae0;
        }
    }
    ctx->pc = 0x15AAA0u;
label_15aaa0:
    // 0x15aaa0: 0x2403001a  addiu       $v1, $zero, 0x1A
    ctx->pc = 0x15aaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_15aaa4:
    // 0x15aaa4: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
label_15aaa8:
    if (ctx->pc == 0x15AAA8u) {
        ctx->pc = 0x15AAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AAA4u;
        // 0x15aaa8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AAACu;
        goto label_15aaac;
    }
    ctx->pc = 0x15AAA4u;
    {
        const bool branch_taken_0x15aaa4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x15AAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AAA4u;
        // 0x15aaa8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aaa4) {
            ctx->pc = 0x15AAD8u;
            goto label_15aad8;
        }
    }
    ctx->pc = 0x15AAACu;
label_15aaac:
    // 0x15aaac: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
label_15aab0:
    if (ctx->pc == 0x15AAB0u) {
        ctx->pc = 0x15AAB4u;
        goto label_15aab4;
    }
    ctx->pc = 0x15AAACu;
    {
        const bool branch_taken_0x15aaac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15aaac) {
            ctx->pc = 0x15AAD8u;
            goto label_15aad8;
        }
    }
    ctx->pc = 0x15AAB4u;
label_15aab4:
    // 0x15aab4: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x15aab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_15aab8:
    // 0x15aab8: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
label_15aabc:
    if (ctx->pc == 0x15AABCu) {
        ctx->pc = 0x15AABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AAB8u;
        // 0x15aabc: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AAC0u;
        goto label_15aac0;
    }
    ctx->pc = 0x15AAB8u;
    {
        const bool branch_taken_0x15aab8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x15AABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AAB8u;
        // 0x15aabc: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aab8) {
            ctx->pc = 0x15AAD0u;
            goto label_15aad0;
        }
    }
    ctx->pc = 0x15AAC0u;
label_15aac0:
    // 0x15aac0: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_15aac4:
    if (ctx->pc == 0x15AAC4u) {
        ctx->pc = 0x15AAC8u;
        goto label_15aac8;
    }
    ctx->pc = 0x15AAC0u;
    {
        const bool branch_taken_0x15aac0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15aac0) {
            ctx->pc = 0x15AAD0u;
            goto label_15aad0;
        }
    }
    ctx->pc = 0x15AAC8u;
label_15aac8:
    // 0x15aac8: 0x10000026  b           . + 4 + (0x26 << 2)
label_15aacc:
    if (ctx->pc == 0x15AACCu) {
        ctx->pc = 0x15AAD0u;
        goto label_15aad0;
    }
    ctx->pc = 0x15AAC8u;
    {
        const bool branch_taken_0x15aac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15aac8) {
            ctx->pc = 0x15AB64u;
            goto label_15ab64;
        }
    }
    ctx->pc = 0x15AAD0u;
label_15aad0:
    // 0x15aad0: 0x10000024  b           . + 4 + (0x24 << 2)
label_15aad4:
    if (ctx->pc == 0x15AAD4u) {
        ctx->pc = 0x15AAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AAD0u;
        // 0x15aad4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AAD8u;
        goto label_15aad8;
    }
    ctx->pc = 0x15AAD0u;
    {
        const bool branch_taken_0x15aad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AAD0u;
        // 0x15aad4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aad0) {
            ctx->pc = 0x15AB64u;
            goto label_15ab64;
        }
    }
    ctx->pc = 0x15AAD8u;
label_15aad8:
    // 0x15aad8: 0x10000022  b           . + 4 + (0x22 << 2)
label_15aadc:
    if (ctx->pc == 0x15AADCu) {
        ctx->pc = 0x15AADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AAD8u;
        // 0x15aadc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AAE0u;
        goto label_15aae0;
    }
    ctx->pc = 0x15AAD8u;
    {
        const bool branch_taken_0x15aad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AAD8u;
        // 0x15aadc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aad8) {
            ctx->pc = 0x15AB64u;
            goto label_15ab64;
        }
    }
    ctx->pc = 0x15AAE0u;
label_15aae0:
    // 0x15aae0: 0x10000020  b           . + 4 + (0x20 << 2)
label_15aae4:
    if (ctx->pc == 0x15AAE4u) {
        ctx->pc = 0x15AAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AAE0u;
        // 0x15aae4: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AAE8u;
        goto label_15aae8;
    }
    ctx->pc = 0x15AAE0u;
    {
        const bool branch_taken_0x15aae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AAE0u;
        // 0x15aae4: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aae0) {
            ctx->pc = 0x15AB64u;
            goto label_15ab64;
        }
    }
    ctx->pc = 0x15AAE8u;
label_15aae8:
    // 0x15aae8: 0x1000001e  b           . + 4 + (0x1E << 2)
label_15aaec:
    if (ctx->pc == 0x15AAECu) {
        ctx->pc = 0x15AAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AAE8u;
        // 0x15aaec: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AAF0u;
        goto label_15aaf0;
    }
    ctx->pc = 0x15AAE8u;
    {
        const bool branch_taken_0x15aae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AAE8u;
        // 0x15aaec: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aae8) {
            ctx->pc = 0x15AB64u;
            goto label_15ab64;
        }
    }
    ctx->pc = 0x15AAF0u;
label_15aaf0:
    // 0x15aaf0: 0x1000001c  b           . + 4 + (0x1C << 2)
label_15aaf4:
    if (ctx->pc == 0x15AAF4u) {
        ctx->pc = 0x15AAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AAF0u;
        // 0x15aaf4: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AAF8u;
        goto label_15aaf8;
    }
    ctx->pc = 0x15AAF0u;
    {
        const bool branch_taken_0x15aaf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AAF0u;
        // 0x15aaf4: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aaf0) {
            ctx->pc = 0x15AB64u;
            goto label_15ab64;
        }
    }
    ctx->pc = 0x15AAF8u;
label_15aaf8:
    // 0x15aaf8: 0x8c244970  lw          $a0, 0x4970($at)
    ctx->pc = 0x15aaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18800)));
label_15aafc:
    // 0x15aafc: 0x1085000a  beq         $a0, $a1, . + 4 + (0xA << 2)
label_15ab00:
    if (ctx->pc == 0x15AB00u) {
        ctx->pc = 0x15AB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AAFCu;
        // 0x15ab00: 0x24030026  addiu       $v1, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AB04u;
        goto label_15ab04;
    }
    ctx->pc = 0x15AAFCu;
    {
        const bool branch_taken_0x15aafc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x15AB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AAFCu;
        // 0x15ab00: 0x24030026  addiu       $v1, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aafc) {
            ctx->pc = 0x15AB28u;
            goto label_15ab28;
        }
    }
    ctx->pc = 0x15AB04u;
label_15ab04:
    // 0x15ab04: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
label_15ab08:
    if (ctx->pc == 0x15AB08u) {
        ctx->pc = 0x15AB0Cu;
        goto label_15ab0c;
    }
    ctx->pc = 0x15AB04u;
    {
        const bool branch_taken_0x15ab04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15ab04) {
            ctx->pc = 0x15AB20u;
            goto label_15ab20;
        }
    }
    ctx->pc = 0x15AB0Cu;
label_15ab0c:
    // 0x15ab0c: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x15ab0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_15ab10:
    // 0x15ab10: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_15ab14:
    if (ctx->pc == 0x15AB14u) {
        ctx->pc = 0x15AB18u;
        goto label_15ab18;
    }
    ctx->pc = 0x15AB10u;
    {
        const bool branch_taken_0x15ab10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15ab10) {
            ctx->pc = 0x15AB20u;
            goto label_15ab20;
        }
    }
    ctx->pc = 0x15AB18u;
label_15ab18:
    // 0x15ab18: 0x10000012  b           . + 4 + (0x12 << 2)
label_15ab1c:
    if (ctx->pc == 0x15AB1Cu) {
        ctx->pc = 0x15AB20u;
        goto label_15ab20;
    }
    ctx->pc = 0x15AB18u;
    {
        const bool branch_taken_0x15ab18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ab18) {
            ctx->pc = 0x15AB64u;
            goto label_15ab64;
        }
    }
    ctx->pc = 0x15AB20u;
label_15ab20:
    // 0x15ab20: 0x10000010  b           . + 4 + (0x10 << 2)
label_15ab24:
    if (ctx->pc == 0x15AB24u) {
        ctx->pc = 0x15AB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AB20u;
        // 0x15ab24: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AB28u;
        goto label_15ab28;
    }
    ctx->pc = 0x15AB20u;
    {
        const bool branch_taken_0x15ab20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AB20u;
        // 0x15ab24: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ab20) {
            ctx->pc = 0x15AB64u;
            goto label_15ab64;
        }
    }
    ctx->pc = 0x15AB28u;
label_15ab28:
    // 0x15ab28: 0xc084af4  jal         func_212BD0
label_15ab2c:
    if (ctx->pc == 0x15AB2Cu) {
        ctx->pc = 0x15AB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AB28u;
        // 0x15ab2c: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AB30u;
        goto label_15ab30;
    }
    ctx->pc = 0x15AB28u;
    SET_GPR_U32(ctx, 31, 0x15AB30u);
    ctx->pc = 0x15AB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AB28u;
    // 0x15ab2c: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212BD0u;
    { ctx->pc = 0x212bd0; return; }
    ctx->pc = 0x15AB30u;
label_15ab30:
    // 0x15ab30: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_15ab34:
    if (ctx->pc == 0x15AB34u) {
        ctx->pc = 0x15AB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AB30u;
        // 0x15ab34: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AB38u;
        goto label_15ab38;
    }
    ctx->pc = 0x15AB30u;
    {
        const bool branch_taken_0x15ab30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AB30u;
        // 0x15ab34: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ab30) {
            ctx->pc = 0x15AB40u;
            goto label_15ab40;
        }
    }
    ctx->pc = 0x15AB38u;
label_15ab38:
    // 0x15ab38: 0x1000000a  b           . + 4 + (0xA << 2)
label_15ab3c:
    if (ctx->pc == 0x15AB3Cu) {
        ctx->pc = 0x15AB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AB38u;
        // 0x15ab3c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AB40u;
        goto label_15ab40;
    }
    ctx->pc = 0x15AB38u;
    {
        const bool branch_taken_0x15ab38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AB38u;
        // 0x15ab3c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ab38) {
            ctx->pc = 0x15AB64u;
            goto label_15ab64;
        }
    }
    ctx->pc = 0x15AB40u;
label_15ab40:
    // 0x15ab40: 0xc084af4  jal         func_212BD0
label_15ab44:
    if (ctx->pc == 0x15AB44u) {
        ctx->pc = 0x15AB48u;
        goto label_15ab48;
    }
    ctx->pc = 0x15AB40u;
    SET_GPR_U32(ctx, 31, 0x15AB48u);
    ctx->pc = 0x212BD0u;
    { ctx->pc = 0x212bd0; return; }
    ctx->pc = 0x15AB48u;
label_15ab48:
    // 0x15ab48: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_15ab4c:
    if (ctx->pc == 0x15AB4Cu) {
        ctx->pc = 0x15AB50u;
        goto label_15ab50;
    }
    ctx->pc = 0x15AB48u;
    {
        const bool branch_taken_0x15ab48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ab48) {
            ctx->pc = 0x15AB58u;
            goto label_15ab58;
        }
    }
    ctx->pc = 0x15AB50u;
label_15ab50:
    // 0x15ab50: 0x10000004  b           . + 4 + (0x4 << 2)
label_15ab54:
    if (ctx->pc == 0x15AB54u) {
        ctx->pc = 0x15AB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AB50u;
        // 0x15ab54: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AB58u;
        goto label_15ab58;
    }
    ctx->pc = 0x15AB50u;
    {
        const bool branch_taken_0x15ab50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AB50u;
        // 0x15ab54: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ab50) {
            ctx->pc = 0x15AB64u;
            goto label_15ab64;
        }
    }
    ctx->pc = 0x15AB58u;
label_15ab58:
    // 0x15ab58: 0x10000002  b           . + 4 + (0x2 << 2)
label_15ab5c:
    if (ctx->pc == 0x15AB5Cu) {
        ctx->pc = 0x15AB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AB58u;
        // 0x15ab5c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AB60u;
        goto label_15ab60;
    }
    ctx->pc = 0x15AB58u;
    {
        const bool branch_taken_0x15ab58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AB58u;
        // 0x15ab5c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ab58) {
            ctx->pc = 0x15AB64u;
            goto label_15ab64;
        }
    }
    ctx->pc = 0x15AB60u;
label_15ab60:
    // 0x15ab60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15ab60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15ab64:
    // 0x15ab64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15ab64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15ab68:
    // 0x15ab68: 0x3e00008  jr          $ra
label_15ab6c:
    if (ctx->pc == 0x15AB6Cu) {
        ctx->pc = 0x15AB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AB68u;
        // 0x15ab6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AB70u;
        goto label_15ab70;
    }
    ctx->pc = 0x15AB68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15AB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AB68u;
        // 0x15ab6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15AB68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15AB70u;
label_15ab70:
    // 0x15ab70: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15ab70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_15ab74:
    // 0x15ab74: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x15ab74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_15ab78:
    // 0x15ab78: 0x84244af4  lh          $a0, 0x4AF4($at)
    ctx->pc = 0x15ab78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19188)));
label_15ab7c:
    // 0x15ab7c: 0x14850003  bne         $a0, $a1, . + 4 + (0x3 << 2)
label_15ab80:
    if (ctx->pc == 0x15AB80u) {
        ctx->pc = 0x15AB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AB7Cu;
        // 0x15ab80: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AB84u;
        goto label_15ab84;
    }
    ctx->pc = 0x15AB7Cu;
    {
        const bool branch_taken_0x15ab7c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x15AB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AB7Cu;
        // 0x15ab80: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ab7c) {
            ctx->pc = 0x15AB8Cu;
            goto label_15ab8c;
        }
    }
    ctx->pc = 0x15AB84u;
label_15ab84:
    // 0x15ab84: 0x1000007c  b           . + 4 + (0x7C << 2)
label_15ab88:
    if (ctx->pc == 0x15AB88u) {
        ctx->pc = 0x15AB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AB84u;
        // 0x15ab88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AB8Cu;
        goto label_15ab8c;
    }
    ctx->pc = 0x15AB84u;
    {
        const bool branch_taken_0x15ab84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AB84u;
        // 0x15ab88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ab84) {
            ctx->pc = 0x15AD78u;
            goto label_15ad78;
        }
    }
    ctx->pc = 0x15AB8Cu;
label_15ab8c:
    // 0x15ab8c: 0x14830011  bne         $a0, $v1, . + 4 + (0x11 << 2)
label_15ab90:
    if (ctx->pc == 0x15AB90u) {
        ctx->pc = 0x15AB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AB8Cu;
        // 0x15ab90: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AB94u;
        goto label_15ab94;
    }
    ctx->pc = 0x15AB8Cu;
    {
        const bool branch_taken_0x15ab8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x15AB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AB8Cu;
        // 0x15ab90: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ab8c) {
            ctx->pc = 0x15ABD4u;
            goto label_15abd4;
        }
    }
    ctx->pc = 0x15AB94u;
label_15ab94:
    // 0x15ab94: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15ab94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_15ab98:
    // 0x15ab98: 0x24020063  addiu       $v0, $zero, 0x63
    ctx->pc = 0x15ab98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
label_15ab9c:
    // 0x15ab9c: 0x9023490c  lbu         $v1, 0x490C($at)
    ctx->pc = 0x15ab9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_15aba0:
    // 0x15aba0: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_15aba4:
    if (ctx->pc == 0x15ABA4u) {
        ctx->pc = 0x15ABA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ABA0u;
        // 0x15aba4: 0x2402001d  addiu       $v0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15ABA8u;
        goto label_15aba8;
    }
    ctx->pc = 0x15ABA0u;
    {
        const bool branch_taken_0x15aba0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x15ABA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ABA0u;
        // 0x15aba4: 0x2402001d  addiu       $v0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aba0) {
            ctx->pc = 0x15ABCCu;
            goto label_15abcc;
        }
    }
    ctx->pc = 0x15ABA8u;
label_15aba8:
    // 0x15aba8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15aba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_15abac:
    // 0x15abac: 0x90234910  lbu         $v1, 0x4910($at)
    ctx->pc = 0x15abacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18704)));
label_15abb0:
    // 0x15abb0: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
label_15abb4:
    if (ctx->pc == 0x15ABB4u) {
        ctx->pc = 0x15ABB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ABB0u;
        // 0x15abb4: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15ABB8u;
        goto label_15abb8;
    }
    ctx->pc = 0x15ABB0u;
    {
        const bool branch_taken_0x15abb0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x15ABB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ABB0u;
        // 0x15abb4: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15abb0) {
            ctx->pc = 0x15ABC4u;
            goto label_15abc4;
        }
    }
    ctx->pc = 0x15ABB8u;
label_15abb8:
    // 0x15abb8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_15abbc:
    if (ctx->pc == 0x15ABBCu) {
        ctx->pc = 0x15ABC0u;
        goto label_15abc0;
    }
    ctx->pc = 0x15ABB8u;
    {
        const bool branch_taken_0x15abb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15abb8) {
            ctx->pc = 0x15ABC4u;
            goto label_15abc4;
        }
    }
    ctx->pc = 0x15ABC0u;
label_15abc0:
    // 0x15abc0: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x15abc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_15abc4:
    // 0x15abc4: 0x1000006c  b           . + 4 + (0x6C << 2)
label_15abc8:
    if (ctx->pc == 0x15ABC8u) {
        ctx->pc = 0x15ABC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ABC4u;
        // 0x15abc8: 0x2442001e  addiu       $v0, $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15ABCCu;
        goto label_15abcc;
    }
    ctx->pc = 0x15ABC4u;
    {
        const bool branch_taken_0x15abc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15ABC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ABC4u;
        // 0x15abc8: 0x2442001e  addiu       $v0, $v0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15abc4) {
            ctx->pc = 0x15AD78u;
            goto label_15ad78;
        }
    }
    ctx->pc = 0x15ABCCu;
label_15abcc:
    // 0x15abcc: 0x1000006a  b           . + 4 + (0x6A << 2)
label_15abd0:
    if (ctx->pc == 0x15ABD0u) {
        ctx->pc = 0x15ABD4u;
        goto label_15abd4;
    }
    ctx->pc = 0x15ABCCu;
    {
        const bool branch_taken_0x15abcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15abcc) {
            ctx->pc = 0x15AD78u;
            goto label_15ad78;
        }
    }
    ctx->pc = 0x15ABD4u;
label_15abd4:
    // 0x15abd4: 0x9023490d  lbu         $v1, 0x490D($at)
    ctx->pc = 0x15abd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
label_15abd8:
    // 0x15abd8: 0x2c610017  sltiu       $at, $v1, 0x17
    ctx->pc = 0x15abd8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
label_15abdc:
    // 0x15abdc: 0x10200066  beqz        $at, . + 4 + (0x66 << 2)
label_15abe0:
    if (ctx->pc == 0x15ABE0u) {
        ctx->pc = 0x15ABE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ABDCu;
        // 0x15abe0: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15ABE4u;
        goto label_15abe4;
    }
    ctx->pc = 0x15ABDCu;
    {
        const bool branch_taken_0x15abdc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15ABE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ABDCu;
        // 0x15abe0: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15abdc) {
            ctx->pc = 0x15AD78u;
            goto label_15ad78;
        }
    }
    ctx->pc = 0x15ABE4u;
label_15abe4:
    // 0x15abe4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15abe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_15abe8:
    // 0x15abe8: 0x24848810  addiu       $a0, $a0, -0x77F0
    ctx->pc = 0x15abe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936592));
label_15abec:
    // 0x15abec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15abecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15abf0:
    // 0x15abf0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x15abf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_15abf4:
    // 0x15abf4: 0x600008  jr          $v1
label_15abf8:
    if (ctx->pc == 0x15ABF8u) {
        ctx->pc = 0x15ABFCu;
        goto label_15abfc;
    }
    ctx->pc = 0x15ABF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15ABFCu: goto label_15abfc;
            case 0x15AC20u: goto label_15ac20;
            case 0x15AC28u: goto label_15ac28;
            case 0x15AC30u: goto label_15ac30;
            case 0x15AC38u: goto label_15ac38;
            case 0x15AC40u: goto label_15ac40;
            case 0x15AC48u: goto label_15ac48;
            case 0x15AC6Cu: goto label_15ac6c;
            case 0x15AC74u: goto label_15ac74;
            case 0x15ACA8u: goto label_15aca8;
            case 0x15ACB0u: goto label_15acb0;
            case 0x15ACB8u: goto label_15acb8;
            case 0x15ACECu: goto label_15acec;
            case 0x15ACF4u: goto label_15acf4;
            case 0x15ACFCu: goto label_15acfc;
            case 0x15AD04u: goto label_15ad04;
            case 0x15AD0Cu: goto label_15ad0c;
            case 0x15AD14u: goto label_15ad14;
            case 0x15AD1Cu: goto label_15ad1c;
            case 0x15AD40u: goto label_15ad40;
            case 0x15AD64u: goto label_15ad64;
            case 0x15AD6Cu: goto label_15ad6c;
            case 0x15AD74u: goto label_15ad74;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15ABF4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x15ABFCu;
label_15abfc:
    // 0x15abfc: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15abfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_15ac00:
    // 0x15ac00: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x15ac00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_15ac04:
    // 0x15ac04: 0x9023490c  lbu         $v1, 0x490C($at)
    ctx->pc = 0x15ac04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_15ac08:
    // 0x15ac08: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_15ac0c:
    if (ctx->pc == 0x15AC0Cu) {
        ctx->pc = 0x15AC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AC08u;
        // 0x15ac0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AC10u;
        goto label_15ac10;
    }
    ctx->pc = 0x15AC08u;
    {
        const bool branch_taken_0x15ac08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x15AC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AC08u;
        // 0x15ac0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ac08) {
            ctx->pc = 0x15AC18u;
            goto label_15ac18;
        }
    }
    ctx->pc = 0x15AC10u;
label_15ac10:
    // 0x15ac10: 0x10000059  b           . + 4 + (0x59 << 2)
label_15ac14:
    if (ctx->pc == 0x15AC14u) {
        ctx->pc = 0x15AC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AC10u;
        // 0x15ac14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AC18u;
        goto label_15ac18;
    }
    ctx->pc = 0x15AC10u;
    {
        const bool branch_taken_0x15ac10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AC10u;
        // 0x15ac14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ac10) {
            ctx->pc = 0x15AD78u;
            goto label_15ad78;
        }
    }
    ctx->pc = 0x15AC18u;
label_15ac18:
    // 0x15ac18: 0x10000057  b           . + 4 + (0x57 << 2)
label_15ac1c:
    if (ctx->pc == 0x15AC1Cu) {
        ctx->pc = 0x15AC20u;
        goto label_15ac20;
    }
    ctx->pc = 0x15AC18u;
    {
        const bool branch_taken_0x15ac18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ac18) {
            ctx->pc = 0x15AD78u;
            goto label_15ad78;
        }
    }
    ctx->pc = 0x15AC20u;
label_15ac20:
    // 0x15ac20: 0x10000055  b           . + 4 + (0x55 << 2)
label_15ac24:
    if (ctx->pc == 0x15AC24u) {
        ctx->pc = 0x15AC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AC20u;
        // 0x15ac24: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AC28u;
        goto label_15ac28;
    }
    ctx->pc = 0x15AC20u;
    {
        const bool branch_taken_0x15ac20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AC20u;
        // 0x15ac24: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ac20) {
            ctx->pc = 0x15AD78u;
            goto label_15ad78;
        }
    }
    ctx->pc = 0x15AC28u;
label_15ac28:
    // 0x15ac28: 0x10000053  b           . + 4 + (0x53 << 2)
label_15ac2c:
    if (ctx->pc == 0x15AC2Cu) {
        ctx->pc = 0x15AC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AC28u;
        // 0x15ac2c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AC30u;
        goto label_15ac30;
    }
    ctx->pc = 0x15AC28u;
    {
        const bool branch_taken_0x15ac28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AC28u;
        // 0x15ac2c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ac28) {
            ctx->pc = 0x15AD78u;
            goto label_15ad78;
        }
    }
    ctx->pc = 0x15AC30u;
label_15ac30:
    // 0x15ac30: 0x10000051  b           . + 4 + (0x51 << 2)
label_15ac34:
    if (ctx->pc == 0x15AC34u) {
        ctx->pc = 0x15AC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AC30u;
        // 0x15ac34: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AC38u;
        goto label_15ac38;
    }
    ctx->pc = 0x15AC30u;
    {
        const bool branch_taken_0x15ac30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AC30u;
        // 0x15ac34: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ac30) {
            ctx->pc = 0x15AD78u;
            goto label_15ad78;
        }
    }
    ctx->pc = 0x15AC38u;
label_15ac38:
    // 0x15ac38: 0x1000004f  b           . + 4 + (0x4F << 2)
label_15ac3c:
    if (ctx->pc == 0x15AC3Cu) {
        ctx->pc = 0x15AC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AC38u;
        // 0x15ac3c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AC40u;
        goto label_15ac40;
    }
    ctx->pc = 0x15AC38u;
    {
        const bool branch_taken_0x15ac38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AC38u;
        // 0x15ac3c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ac38) {
            ctx->pc = 0x15AD78u;
            goto label_15ad78;
        }
    }
    ctx->pc = 0x15AC40u;
label_15ac40:
    // 0x15ac40: 0x1000004d  b           . + 4 + (0x4D << 2)
label_15ac44:
    if (ctx->pc == 0x15AC44u) {
        ctx->pc = 0x15AC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AC40u;
        // 0x15ac44: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AC48u;
        goto label_15ac48;
    }
    ctx->pc = 0x15AC40u;
    {
        const bool branch_taken_0x15ac40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AC40u;
        // 0x15ac44: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ac40) {
            ctx->pc = 0x15AD78u;
            goto label_15ad78;
        }
    }
    ctx->pc = 0x15AC48u;
label_15ac48:
    // 0x15ac48: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15ac48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_15ac4c:
    // 0x15ac4c: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x15ac4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_15ac50:
    // 0x15ac50: 0x9023490c  lbu         $v1, 0x490C($at)
    ctx->pc = 0x15ac50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_15ac54:
    // 0x15ac54: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_15ac58:
    if (ctx->pc == 0x15AC58u) {
        ctx->pc = 0x15AC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AC54u;
        // 0x15ac58: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AC5Cu;
        goto label_15ac5c;
    }
    ctx->pc = 0x15AC54u;
    {
        const bool branch_taken_0x15ac54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x15AC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AC54u;
        // 0x15ac58: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ac54) {
            ctx->pc = 0x15AC64u;
            goto label_15ac64;
        }
    }
    ctx->pc = 0x15AC5Cu;
label_15ac5c:
    // 0x15ac5c: 0x10000046  b           . + 4 + (0x46 << 2)
label_15ac60:
    if (ctx->pc == 0x15AC60u) {
        ctx->pc = 0x15AC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AC5Cu;
        // 0x15ac60: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AC64u;
        goto label_15ac64;
    }
    ctx->pc = 0x15AC5Cu;
    {
        const bool branch_taken_0x15ac5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AC5Cu;
        // 0x15ac60: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ac5c) {
            ctx->pc = 0x15AD78u;
            goto label_15ad78;
        }
    }
    ctx->pc = 0x15AC64u;
label_15ac64:
    // 0x15ac64: 0x10000044  b           . + 4 + (0x44 << 2)
label_15ac68:
    if (ctx->pc == 0x15AC68u) {
        ctx->pc = 0x15AC6Cu;
        goto label_15ac6c;
    }
    ctx->pc = 0x15AC64u;
    {
        const bool branch_taken_0x15ac64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ac64) {
            ctx->pc = 0x15AD78u;
            goto label_15ad78;
        }
    }
    ctx->pc = 0x15AC6Cu;
label_15ac6c:
    // 0x15ac6c: 0x10000042  b           . + 4 + (0x42 << 2)
label_15ac70:
    if (ctx->pc == 0x15AC70u) {
        ctx->pc = 0x15AC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AC6Cu;
        // 0x15ac70: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AC74u;
        goto label_15ac74;
    }
    ctx->pc = 0x15AC6Cu;
    {
        const bool branch_taken_0x15ac6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AC6Cu;
        // 0x15ac70: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ac6c) {
            ctx->pc = 0x15AD78u;
            goto label_15ad78;
        }
    }
    ctx->pc = 0x15AC74u;
label_15ac74:
    // 0x15ac74: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15ac74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_15ac78:
    // 0x15ac78: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x15ac78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_15ac7c:
    // 0x15ac7c: 0x9023490c  lbu         $v1, 0x490C($at)
    ctx->pc = 0x15ac7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_15ac80:
    // 0x15ac80: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_15ac84:
    if (ctx->pc == 0x15AC84u) {
        ctx->pc = 0x15AC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AC80u;
        // 0x15ac84: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AC88u;
        goto label_15ac88;
    }
    ctx->pc = 0x15AC80u;
    {
        const bool branch_taken_0x15ac80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15AC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AC80u;
        // 0x15ac84: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ac80) {
            ctx->pc = 0x15AC98u;
            goto label_15ac98;
        }
    }
    ctx->pc = 0x15AC88u;
label_15ac88:
    // 0x15ac88: 0x24020049  addiu       $v0, $zero, 0x49
    ctx->pc = 0x15ac88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
label_15ac8c:
    // 0x15ac8c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_15ac90:
    if (ctx->pc == 0x15AC90u) {
        ctx->pc = 0x15AC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AC8Cu;
        // 0x15ac90: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AC94u;
        goto label_15ac94;
    }
    ctx->pc = 0x15AC8Cu;
    {
        const bool branch_taken_0x15ac8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x15AC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AC8Cu;
        // 0x15ac90: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ac8c) {
            ctx->pc = 0x15ACA0u;
            goto label_15aca0;
        }
    }
    ctx->pc = 0x15AC94u;
label_15ac94:
    // 0x15ac94: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x15ac94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_15ac98:
    // 0x15ac98: 0x10000037  b           . + 4 + (0x37 << 2)
label_15ac9c:
    if (ctx->pc == 0x15AC9Cu) {
        ctx->pc = 0x15ACA0u;
        goto label_15aca0;
    }
    ctx->pc = 0x15AC98u;
    {
        const bool branch_taken_0x15ac98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ac98) {
            ctx->pc = 0x15AD78u;
            goto label_15ad78;
        }
    }
    ctx->pc = 0x15ACA0u;
label_15aca0:
    // 0x15aca0: 0x10000035  b           . + 4 + (0x35 << 2)
label_15aca4:
    if (ctx->pc == 0x15ACA4u) {
        ctx->pc = 0x15ACA8u;
        goto label_15aca8;
    }
    ctx->pc = 0x15ACA0u;
    {
        const bool branch_taken_0x15aca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15aca0) {
            ctx->pc = 0x15AD78u;
            goto label_15ad78;
        }
    }
    ctx->pc = 0x15ACA8u;
label_15aca8:
    // 0x15aca8: 0x10000033  b           . + 4 + (0x33 << 2)
label_15acac:
    if (ctx->pc == 0x15ACACu) {
        ctx->pc = 0x15ACACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ACA8u;
        // 0x15acac: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15ACB0u;
        goto label_15acb0;
    }
    ctx->pc = 0x15ACA8u;
    {
        const bool branch_taken_0x15aca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15ACACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ACA8u;
        // 0x15acac: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aca8) {
            ctx->pc = 0x15AD78u;
            goto label_15ad78;
        }
    }
    ctx->pc = 0x15ACB0u;
label_15acb0:
    // 0x15acb0: 0x10000031  b           . + 4 + (0x31 << 2)
label_15acb4:
    if (ctx->pc == 0x15ACB4u) {
        ctx->pc = 0x15ACB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ACB0u;
        // 0x15acb4: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15ACB8u;
        goto label_15acb8;
    }
    ctx->pc = 0x15ACB0u;
    {
        const bool branch_taken_0x15acb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15ACB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ACB0u;
        // 0x15acb4: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15acb0) {
            ctx->pc = 0x15AD78u;
            goto label_15ad78;
        }
    }
    ctx->pc = 0x15ACB8u;
label_15acb8:
    // 0x15acb8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15acb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_15acbc:
    // 0x15acbc: 0x2402004e  addiu       $v0, $zero, 0x4E
    ctx->pc = 0x15acbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
label_15acc0:
    // 0x15acc0: 0x9023490c  lbu         $v1, 0x490C($at)
    ctx->pc = 0x15acc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_15acc4:
    // 0x15acc4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_15acc8:
    if (ctx->pc == 0x15ACC8u) {
        ctx->pc = 0x15ACC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ACC4u;
        // 0x15acc8: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15ACCCu;
        goto label_15accc;
    }
    ctx->pc = 0x15ACC4u;
    {
        const bool branch_taken_0x15acc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15ACC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ACC4u;
        // 0x15acc8: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15acc4) {
            ctx->pc = 0x15ACDCu;
            goto label_15acdc;
        }
    }
    ctx->pc = 0x15ACCCu;
label_15accc:
    // 0x15accc: 0x2402004f  addiu       $v0, $zero, 0x4F
    ctx->pc = 0x15acccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
label_15acd0:
    // 0x15acd0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_15acd4:
    if (ctx->pc == 0x15ACD4u) {
        ctx->pc = 0x15ACD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ACD0u;
        // 0x15acd4: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15ACD8u;
        goto label_15acd8;
    }
    ctx->pc = 0x15ACD0u;
    {
        const bool branch_taken_0x15acd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x15ACD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ACD0u;
        // 0x15acd4: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15acd0) {
            ctx->pc = 0x15ACE4u;
            goto label_15ace4;
        }
    }
    ctx->pc = 0x15ACD8u;
label_15acd8:
    // 0x15acd8: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x15acd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_15acdc:
    // 0x15acdc: 0x10000026  b           . + 4 + (0x26 << 2)
label_15ace0:
    if (ctx->pc == 0x15ACE0u) {
        ctx->pc = 0x15ACE4u;
        goto label_15ace4;
    }
    ctx->pc = 0x15ACDCu;
    {
        const bool branch_taken_0x15acdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15acdc) {
            ctx->pc = 0x15AD78u;
            goto label_15ad78;
        }
    }
    ctx->pc = 0x15ACE4u;
label_15ace4:
    // 0x15ace4: 0x10000024  b           . + 4 + (0x24 << 2)
label_15ace8:
    if (ctx->pc == 0x15ACE8u) {
        ctx->pc = 0x15ACECu;
        goto label_15acec;
    }
    ctx->pc = 0x15ACE4u;
    {
        const bool branch_taken_0x15ace4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ace4) {
            ctx->pc = 0x15AD78u;
            goto label_15ad78;
        }
    }
    ctx->pc = 0x15ACECu;
label_15acec:
    // 0x15acec: 0x10000022  b           . + 4 + (0x22 << 2)
label_15acf0:
    if (ctx->pc == 0x15ACF0u) {
        ctx->pc = 0x15ACF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ACECu;
        // 0x15acf0: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15ACF4u;
        goto label_15acf4;
    }
    ctx->pc = 0x15ACECu;
    {
        const bool branch_taken_0x15acec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15ACF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ACECu;
        // 0x15acf0: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15acec) {
            ctx->pc = 0x15AD78u;
            goto label_15ad78;
        }
    }
    ctx->pc = 0x15ACF4u;
label_15acf4:
    // 0x15acf4: 0x10000020  b           . + 4 + (0x20 << 2)
label_15acf8:
    if (ctx->pc == 0x15ACF8u) {
        ctx->pc = 0x15ACF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ACF4u;
        // 0x15acf8: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15ACFCu;
        goto label_15acfc;
    }
    ctx->pc = 0x15ACF4u;
    {
        const bool branch_taken_0x15acf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15ACF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ACF4u;
        // 0x15acf8: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15acf4) {
            ctx->pc = 0x15AD78u;
            goto label_15ad78;
        }
    }
    ctx->pc = 0x15ACFCu;
label_15acfc:
    // 0x15acfc: 0x1000001e  b           . + 4 + (0x1E << 2)
label_15ad00:
    if (ctx->pc == 0x15AD00u) {
        ctx->pc = 0x15AD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ACFCu;
        // 0x15ad00: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AD04u;
        goto label_15ad04;
    }
    ctx->pc = 0x15ACFCu;
    {
        const bool branch_taken_0x15acfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ACFCu;
        // 0x15ad00: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15acfc) {
            ctx->pc = 0x15AD78u;
            goto label_15ad78;
        }
    }
    ctx->pc = 0x15AD04u;
label_15ad04:
    // 0x15ad04: 0x1000001c  b           . + 4 + (0x1C << 2)
label_15ad08:
    if (ctx->pc == 0x15AD08u) {
        ctx->pc = 0x15AD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AD04u;
        // 0x15ad08: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AD0Cu;
        goto label_15ad0c;
    }
    ctx->pc = 0x15AD04u;
    {
        const bool branch_taken_0x15ad04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AD04u;
        // 0x15ad08: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ad04) {
            ctx->pc = 0x15AD78u;
            goto label_15ad78;
        }
    }
    ctx->pc = 0x15AD0Cu;
label_15ad0c:
    // 0x15ad0c: 0x1000001a  b           . + 4 + (0x1A << 2)
label_15ad10:
    if (ctx->pc == 0x15AD10u) {
        ctx->pc = 0x15AD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AD0Cu;
        // 0x15ad10: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AD14u;
        goto label_15ad14;
    }
    ctx->pc = 0x15AD0Cu;
    {
        const bool branch_taken_0x15ad0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AD0Cu;
        // 0x15ad10: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ad0c) {
            ctx->pc = 0x15AD78u;
            goto label_15ad78;
        }
    }
    ctx->pc = 0x15AD14u;
label_15ad14:
    // 0x15ad14: 0x10000018  b           . + 4 + (0x18 << 2)
label_15ad18:
    if (ctx->pc == 0x15AD18u) {
        ctx->pc = 0x15AD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AD14u;
        // 0x15ad18: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AD1Cu;
        goto label_15ad1c;
    }
    ctx->pc = 0x15AD14u;
    {
        const bool branch_taken_0x15ad14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AD14u;
        // 0x15ad18: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ad14) {
            ctx->pc = 0x15AD78u;
            goto label_15ad78;
        }
    }
    ctx->pc = 0x15AD1Cu;
label_15ad1c:
    // 0x15ad1c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15ad1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_15ad20:
    // 0x15ad20: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x15ad20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_15ad24:
    // 0x15ad24: 0x9023490c  lbu         $v1, 0x490C($at)
    ctx->pc = 0x15ad24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_15ad28:
    // 0x15ad28: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_15ad2c:
    if (ctx->pc == 0x15AD2Cu) {
        ctx->pc = 0x15AD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AD28u;
        // 0x15ad2c: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AD30u;
        goto label_15ad30;
    }
    ctx->pc = 0x15AD28u;
    {
        const bool branch_taken_0x15ad28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x15AD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AD28u;
        // 0x15ad2c: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ad28) {
            ctx->pc = 0x15AD38u;
            goto label_15ad38;
        }
    }
    ctx->pc = 0x15AD30u;
label_15ad30:
    // 0x15ad30: 0x10000011  b           . + 4 + (0x11 << 2)
label_15ad34:
    if (ctx->pc == 0x15AD34u) {
        ctx->pc = 0x15AD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AD30u;
        // 0x15ad34: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AD38u;
        goto label_15ad38;
    }
    ctx->pc = 0x15AD30u;
    {
        const bool branch_taken_0x15ad30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AD30u;
        // 0x15ad34: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ad30) {
            ctx->pc = 0x15AD78u;
            goto label_15ad78;
        }
    }
    ctx->pc = 0x15AD38u;
label_15ad38:
    // 0x15ad38: 0x1000000f  b           . + 4 + (0xF << 2)
label_15ad3c:
    if (ctx->pc == 0x15AD3Cu) {
        ctx->pc = 0x15AD40u;
        goto label_15ad40;
    }
    ctx->pc = 0x15AD38u;
    {
        const bool branch_taken_0x15ad38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ad38) {
            ctx->pc = 0x15AD78u;
            goto label_15ad78;
        }
    }
    ctx->pc = 0x15AD40u;
label_15ad40:
    // 0x15ad40: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15ad40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_15ad44:
    // 0x15ad44: 0x2402005d  addiu       $v0, $zero, 0x5D
    ctx->pc = 0x15ad44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
label_15ad48:
    // 0x15ad48: 0x9023490c  lbu         $v1, 0x490C($at)
    ctx->pc = 0x15ad48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_15ad4c:
    // 0x15ad4c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_15ad50:
    if (ctx->pc == 0x15AD50u) {
        ctx->pc = 0x15AD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AD4Cu;
        // 0x15ad50: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AD54u;
        goto label_15ad54;
    }
    ctx->pc = 0x15AD4Cu;
    {
        const bool branch_taken_0x15ad4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x15AD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AD4Cu;
        // 0x15ad50: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ad4c) {
            ctx->pc = 0x15AD5Cu;
            goto label_15ad5c;
        }
    }
    ctx->pc = 0x15AD54u;
label_15ad54:
    // 0x15ad54: 0x10000008  b           . + 4 + (0x8 << 2)
label_15ad58:
    if (ctx->pc == 0x15AD58u) {
        ctx->pc = 0x15AD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AD54u;
        // 0x15ad58: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AD5Cu;
        goto label_15ad5c;
    }
    ctx->pc = 0x15AD54u;
    {
        const bool branch_taken_0x15ad54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AD54u;
        // 0x15ad58: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ad54) {
            ctx->pc = 0x15AD78u;
            goto label_15ad78;
        }
    }
    ctx->pc = 0x15AD5Cu;
label_15ad5c:
    // 0x15ad5c: 0x10000006  b           . + 4 + (0x6 << 2)
label_15ad60:
    if (ctx->pc == 0x15AD60u) {
        ctx->pc = 0x15AD64u;
        goto label_15ad64;
    }
    ctx->pc = 0x15AD5Cu;
    {
        const bool branch_taken_0x15ad5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ad5c) {
            ctx->pc = 0x15AD78u;
            goto label_15ad78;
        }
    }
    ctx->pc = 0x15AD64u;
label_15ad64:
    // 0x15ad64: 0x10000004  b           . + 4 + (0x4 << 2)
label_15ad68:
    if (ctx->pc == 0x15AD68u) {
        ctx->pc = 0x15AD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AD64u;
        // 0x15ad68: 0x2402001a  addiu       $v0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AD6Cu;
        goto label_15ad6c;
    }
    ctx->pc = 0x15AD64u;
    {
        const bool branch_taken_0x15ad64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AD64u;
        // 0x15ad68: 0x2402001a  addiu       $v0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ad64) {
            ctx->pc = 0x15AD78u;
            goto label_15ad78;
        }
    }
    ctx->pc = 0x15AD6Cu;
label_15ad6c:
    // 0x15ad6c: 0x10000002  b           . + 4 + (0x2 << 2)
label_15ad70:
    if (ctx->pc == 0x15AD70u) {
        ctx->pc = 0x15AD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AD6Cu;
        // 0x15ad70: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AD74u;
        goto label_15ad74;
    }
    ctx->pc = 0x15AD6Cu;
    {
        const bool branch_taken_0x15ad6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AD6Cu;
        // 0x15ad70: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ad6c) {
            ctx->pc = 0x15AD78u;
            goto label_15ad78;
        }
    }
    ctx->pc = 0x15AD74u;
label_15ad74:
    // 0x15ad74: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x15ad74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_15ad78:
    // 0x15ad78: 0x3e00008  jr          $ra
label_15ad7c:
    if (ctx->pc == 0x15AD7Cu) {
        ctx->pc = 0x15AD80u;
        goto label_15ad80;
    }
    ctx->pc = 0x15AD78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15AD78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15AD80u;
label_15ad80:
    // 0x15ad80: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15ad80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_15ad84:
    // 0x15ad84: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x15ad84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_15ad88:
    // 0x15ad88: 0x84234af4  lh          $v1, 0x4AF4($at)
    ctx->pc = 0x15ad88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19188)));
label_15ad8c:
    // 0x15ad8c: 0x10660004  beq         $v1, $a2, . + 4 + (0x4 << 2)
label_15ad90:
    if (ctx->pc == 0x15AD90u) {
        ctx->pc = 0x15AD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AD8Cu;
        // 0x15ad90: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AD94u;
        goto label_15ad94;
    }
    ctx->pc = 0x15AD8Cu;
    {
        const bool branch_taken_0x15ad8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x15AD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AD8Cu;
        // 0x15ad90: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ad8c) {
            ctx->pc = 0x15ADA0u;
            goto label_15ada0;
        }
    }
    ctx->pc = 0x15AD94u;
label_15ad94:
    // 0x15ad94: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x15ad94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_15ad98:
    // 0x15ad98: 0x14650009  bne         $v1, $a1, . + 4 + (0x9 << 2)
label_15ad9c:
    if (ctx->pc == 0x15AD9Cu) {
        ctx->pc = 0x15ADA0u;
        goto label_15ada0;
    }
    ctx->pc = 0x15AD98u;
    {
        const bool branch_taken_0x15ad98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x15ad98) {
            ctx->pc = 0x15ADC0u;
            goto label_15adc0;
        }
    }
    ctx->pc = 0x15ADA0u;
label_15ada0:
    // 0x15ada0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x15ada0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_15ada4:
    // 0x15ada4: 0x90234910  lbu         $v1, 0x4910($at)
    ctx->pc = 0x15ada4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18704)));
label_15ada8:
    // 0x15ada8: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x15ada8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_15adac:
    // 0x15adac: 0x0  nop
    ctx->pc = 0x15adacu;
    // NOP
label_15adb0:
    // 0x15adb0: 0x0  nop
    ctx->pc = 0x15adb0u;
    // NOP
label_15adb4:
    // 0x15adb4: 0x1010  mfhi        $v0
    ctx->pc = 0x15adb4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_15adb8:
    // 0x15adb8: 0x10000237  b           . + 4 + (0x237 << 2)
label_15adbc:
    if (ctx->pc == 0x15ADBCu) {
        ctx->pc = 0x15ADBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ADB8u;
        // 0x15adbc: 0x24420030  addiu       $v0, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15ADC0u;
        goto label_15adc0;
    }
    ctx->pc = 0x15ADB8u;
    {
        const bool branch_taken_0x15adb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15ADBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ADB8u;
        // 0x15adbc: 0x24420030  addiu       $v0, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15adb8) {
            ctx->pc = 0x15B698u;
            { ctx->pc = 0x15b698; return; }
        }
    }
    ctx->pc = 0x15ADC0u;
label_15adc0:
    // 0x15adc0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15adc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_15adc4:
    // 0x15adc4: 0x9023490d  lbu         $v1, 0x490D($at)
    ctx->pc = 0x15adc4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
label_15adc8:
    // 0x15adc8: 0x2c610017  sltiu       $at, $v1, 0x17
    ctx->pc = 0x15adc8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
label_15adcc:
    // 0x15adcc: 0x10200232  beqz        $at, . + 4 + (0x232 << 2)
label_15add0:
    if (ctx->pc == 0x15ADD0u) {
        ctx->pc = 0x15ADD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ADCCu;
        // 0x15add0: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15ADD4u;
        goto label_15add4;
    }
    ctx->pc = 0x15ADCCu;
    {
        const bool branch_taken_0x15adcc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15ADD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ADCCu;
        // 0x15add0: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15adcc) {
            ctx->pc = 0x15B698u;
            { ctx->pc = 0x15b698; return; }
        }
    }
    ctx->pc = 0x15ADD4u;
label_15add4:
    // 0x15add4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15add4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_15add8:
    // 0x15add8: 0x24848870  addiu       $a0, $a0, -0x7790
    ctx->pc = 0x15add8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936688));
label_15addc:
    // 0x15addc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15addcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15ade0:
    // 0x15ade0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x15ade0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_15ade4:
    // 0x15ade4: 0x600008  jr          $v1
label_15ade8:
    if (ctx->pc == 0x15ADE8u) {
        ctx->pc = 0x15ADECu;
        goto label_15adec;
    }
    ctx->pc = 0x15ADE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15ADECu: goto label_15adec;
            case 0x15ADF4u: goto label_15adf4;
            case 0x15ADFCu: goto label_15adfc;
            case 0x15AE04u: goto label_15ae04;
            case 0x15AE0Cu: goto label_15ae0c;
            case 0x15AE14u: goto label_15ae14;
            case 0x15AE1Cu: goto label_15ae1c;
            case 0x15AE24u: goto label_15ae24;
            case 0x15AE2Cu: goto label_15ae2c;
            case 0x15AEACu: goto label_15aeac;
            case 0x15AEB4u: goto label_15aeb4;
            case 0x15AEBCu: goto label_15aebc;
            case 0x15AF08u: { ctx->pc = 0x15af08; return; }
            case 0x15AF10u: { ctx->pc = 0x15af10; return; }
            case 0x15AF18u: { ctx->pc = 0x15af18; return; }
            case 0x15AF9Cu: { ctx->pc = 0x15af9c; return; }
            case 0x15AFD0u: { ctx->pc = 0x15afd0; return; }
            case 0x15AFD8u: { ctx->pc = 0x15afd8; return; }
            case 0x15AFE0u: { ctx->pc = 0x15afe0; return; }
            case 0x15B334u: { ctx->pc = 0x15b334; return; }
            case 0x15B684u: { ctx->pc = 0x15b684; return; }
            case 0x15B68Cu: { ctx->pc = 0x15b68c; return; }
            case 0x15B694u: { ctx->pc = 0x15b694; return; }
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15ADE4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x15ADECu;
label_15adec:
    // 0x15adec: 0x1000022a  b           . + 4 + (0x22A << 2)
label_15adf0:
    if (ctx->pc == 0x15ADF0u) {
        ctx->pc = 0x15ADF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ADECu;
        // 0x15adf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15ADF4u;
        goto label_15adf4;
    }
    ctx->pc = 0x15ADECu;
    {
        const bool branch_taken_0x15adec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15ADF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ADECu;
        // 0x15adf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15adec) {
            ctx->pc = 0x15B698u;
            { ctx->pc = 0x15b698; return; }
        }
    }
    ctx->pc = 0x15ADF4u;
label_15adf4:
    // 0x15adf4: 0x10000228  b           . + 4 + (0x228 << 2)
label_15adf8:
    if (ctx->pc == 0x15ADF8u) {
        ctx->pc = 0x15ADF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ADF4u;
        // 0x15adf8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15ADFCu;
        goto label_15adfc;
    }
    ctx->pc = 0x15ADF4u;
    {
        const bool branch_taken_0x15adf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15ADF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ADF4u;
        // 0x15adf8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15adf4) {
            ctx->pc = 0x15B698u;
            { ctx->pc = 0x15b698; return; }
        }
    }
    ctx->pc = 0x15ADFCu;
label_15adfc:
    // 0x15adfc: 0x10000226  b           . + 4 + (0x226 << 2)
label_15ae00:
    if (ctx->pc == 0x15AE00u) {
        ctx->pc = 0x15AE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ADFCu;
        // 0x15ae00: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AE04u;
        goto label_15ae04;
    }
    ctx->pc = 0x15ADFCu;
    {
        const bool branch_taken_0x15adfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ADFCu;
        // 0x15ae00: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15adfc) {
            ctx->pc = 0x15B698u;
            { ctx->pc = 0x15b698; return; }
        }
    }
    ctx->pc = 0x15AE04u;
label_15ae04:
    // 0x15ae04: 0x10000224  b           . + 4 + (0x224 << 2)
label_15ae08:
    if (ctx->pc == 0x15AE08u) {
        ctx->pc = 0x15AE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AE04u;
        // 0x15ae08: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AE0Cu;
        goto label_15ae0c;
    }
    ctx->pc = 0x15AE04u;
    {
        const bool branch_taken_0x15ae04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AE04u;
        // 0x15ae08: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ae04) {
            ctx->pc = 0x15B698u;
            { ctx->pc = 0x15b698; return; }
        }
    }
    ctx->pc = 0x15AE0Cu;
label_15ae0c:
    // 0x15ae0c: 0x10000222  b           . + 4 + (0x222 << 2)
label_15ae10:
    if (ctx->pc == 0x15AE10u) {
        ctx->pc = 0x15AE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AE0Cu;
        // 0x15ae10: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AE14u;
        goto label_15ae14;
    }
    ctx->pc = 0x15AE0Cu;
    {
        const bool branch_taken_0x15ae0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AE0Cu;
        // 0x15ae10: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ae0c) {
            ctx->pc = 0x15B698u;
            { ctx->pc = 0x15b698; return; }
        }
    }
    ctx->pc = 0x15AE14u;
label_15ae14:
    // 0x15ae14: 0x10000220  b           . + 4 + (0x220 << 2)
label_15ae18:
    if (ctx->pc == 0x15AE18u) {
        ctx->pc = 0x15AE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AE14u;
        // 0x15ae18: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AE1Cu;
        goto label_15ae1c;
    }
    ctx->pc = 0x15AE14u;
    {
        const bool branch_taken_0x15ae14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AE14u;
        // 0x15ae18: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ae14) {
            ctx->pc = 0x15B698u;
            { ctx->pc = 0x15b698; return; }
        }
    }
    ctx->pc = 0x15AE1Cu;
label_15ae1c:
    // 0x15ae1c: 0x1000021e  b           . + 4 + (0x21E << 2)
label_15ae20:
    if (ctx->pc == 0x15AE20u) {
        ctx->pc = 0x15AE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AE1Cu;
        // 0x15ae20: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AE24u;
        goto label_15ae24;
    }
    ctx->pc = 0x15AE1Cu;
    {
        const bool branch_taken_0x15ae1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AE1Cu;
        // 0x15ae20: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ae1c) {
            ctx->pc = 0x15B698u;
            { ctx->pc = 0x15b698; return; }
        }
    }
    ctx->pc = 0x15AE24u;
label_15ae24:
    // 0x15ae24: 0x1000021c  b           . + 4 + (0x21C << 2)
label_15ae28:
    if (ctx->pc == 0x15AE28u) {
        ctx->pc = 0x15AE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AE24u;
        // 0x15ae28: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AE2Cu;
        goto label_15ae2c;
    }
    ctx->pc = 0x15AE24u;
    {
        const bool branch_taken_0x15ae24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AE24u;
        // 0x15ae28: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ae24) {
            ctx->pc = 0x15B698u;
            { ctx->pc = 0x15b698; return; }
        }
    }
    ctx->pc = 0x15AE2Cu;
label_15ae2c:
    // 0x15ae2c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15ae2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_15ae30:
    // 0x15ae30: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x15ae30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_15ae34:
    // 0x15ae34: 0x9023490c  lbu         $v1, 0x490C($at)
    ctx->pc = 0x15ae34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_15ae38:
    // 0x15ae38: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_15ae3c:
    if (ctx->pc == 0x15AE3Cu) {
        ctx->pc = 0x15AE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AE38u;
        // 0x15ae3c: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AE40u;
        goto label_15ae40;
    }
    ctx->pc = 0x15AE38u;
    {
        const bool branch_taken_0x15ae38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x15AE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AE38u;
        // 0x15ae3c: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ae38) {
            ctx->pc = 0x15AE48u;
            goto label_15ae48;
        }
    }
    ctx->pc = 0x15AE40u;
label_15ae40:
    // 0x15ae40: 0x10000215  b           . + 4 + (0x215 << 2)
label_15ae44:
    if (ctx->pc == 0x15AE44u) {
        ctx->pc = 0x15AE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AE40u;
        // 0x15ae44: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AE48u;
        goto label_15ae48;
    }
    ctx->pc = 0x15AE40u;
    {
        const bool branch_taken_0x15ae40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AE40u;
        // 0x15ae44: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ae40) {
            ctx->pc = 0x15B698u;
            { ctx->pc = 0x15b698; return; }
        }
    }
    ctx->pc = 0x15AE48u;
label_15ae48:
    // 0x15ae48: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
label_15ae4c:
    if (ctx->pc == 0x15AE4Cu) {
        ctx->pc = 0x15AE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AE48u;
        // 0x15ae4c: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AE50u;
        goto label_15ae50;
    }
    ctx->pc = 0x15AE48u;
    {
        const bool branch_taken_0x15ae48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x15AE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AE48u;
        // 0x15ae4c: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ae48) {
            ctx->pc = 0x15AE80u;
            goto label_15ae80;
        }
    }
    ctx->pc = 0x15AE50u;
label_15ae50:
    // 0x15ae50: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15ae50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_15ae54:
    // 0x15ae54: 0x9023490f  lbu         $v1, 0x490F($at)
    ctx->pc = 0x15ae54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18703)));
label_15ae58:
    // 0x15ae58: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_15ae5c:
    if (ctx->pc == 0x15AE5Cu) {
        ctx->pc = 0x15AE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AE58u;
        // 0x15ae5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AE60u;
        goto label_15ae60;
    }
    ctx->pc = 0x15AE58u;
    {
        const bool branch_taken_0x15ae58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15AE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AE58u;
        // 0x15ae5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ae58) {
            ctx->pc = 0x15AE68u;
            goto label_15ae68;
        }
    }
    ctx->pc = 0x15AE60u;
label_15ae60:
    // 0x15ae60: 0x1000020d  b           . + 4 + (0x20D << 2)
label_15ae64:
    if (ctx->pc == 0x15AE64u) {
        ctx->pc = 0x15AE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AE60u;
        // 0x15ae64: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AE68u;
        goto label_15ae68;
    }
    ctx->pc = 0x15AE60u;
    {
        const bool branch_taken_0x15ae60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AE60u;
        // 0x15ae64: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ae60) {
            ctx->pc = 0x15B698u;
            { ctx->pc = 0x15b698; return; }
        }
    }
    ctx->pc = 0x15AE68u;
label_15ae68:
    // 0x15ae68: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_15ae6c:
    if (ctx->pc == 0x15AE6Cu) {
        ctx->pc = 0x15AE70u;
        goto label_15ae70;
    }
    ctx->pc = 0x15AE68u;
    {
        const bool branch_taken_0x15ae68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x15ae68) {
            ctx->pc = 0x15AE78u;
            goto label_15ae78;
        }
    }
    ctx->pc = 0x15AE70u;
label_15ae70:
    // 0x15ae70: 0x10000209  b           . + 4 + (0x209 << 2)
label_15ae74:
    if (ctx->pc == 0x15AE74u) {
        ctx->pc = 0x15AE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AE70u;
        // 0x15ae74: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AE78u;
        goto label_15ae78;
    }
    ctx->pc = 0x15AE70u;
    {
        const bool branch_taken_0x15ae70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AE70u;
        // 0x15ae74: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ae70) {
            ctx->pc = 0x15B698u;
            { ctx->pc = 0x15b698; return; }
        }
    }
    ctx->pc = 0x15AE78u;
label_15ae78:
    // 0x15ae78: 0x10000207  b           . + 4 + (0x207 << 2)
label_15ae7c:
    if (ctx->pc == 0x15AE7Cu) {
        ctx->pc = 0x15AE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AE78u;
        // 0x15ae7c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AE80u;
        goto label_15ae80;
    }
    ctx->pc = 0x15AE78u;
    {
        const bool branch_taken_0x15ae78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AE78u;
        // 0x15ae7c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ae78) {
            ctx->pc = 0x15B698u;
            { ctx->pc = 0x15b698; return; }
        }
    }
    ctx->pc = 0x15AE80u;
label_15ae80:
    // 0x15ae80: 0x9023490f  lbu         $v1, 0x490F($at)
    ctx->pc = 0x15ae80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18703)));
label_15ae84:
    // 0x15ae84: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_15ae88:
    if (ctx->pc == 0x15AE88u) {
        ctx->pc = 0x15AE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AE84u;
        // 0x15ae88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AE8Cu;
        goto label_15ae8c;
    }
    ctx->pc = 0x15AE84u;
    {
        const bool branch_taken_0x15ae84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15AE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AE84u;
        // 0x15ae88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ae84) {
            ctx->pc = 0x15AE94u;
            goto label_15ae94;
        }
    }
    ctx->pc = 0x15AE8Cu;
label_15ae8c:
    // 0x15ae8c: 0x10000202  b           . + 4 + (0x202 << 2)
label_15ae90:
    if (ctx->pc == 0x15AE90u) {
        ctx->pc = 0x15AE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AE8Cu;
        // 0x15ae90: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AE94u;
        goto label_15ae94;
    }
    ctx->pc = 0x15AE8Cu;
    {
        const bool branch_taken_0x15ae8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AE8Cu;
        // 0x15ae90: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ae8c) {
            ctx->pc = 0x15B698u;
            { ctx->pc = 0x15b698; return; }
        }
    }
    ctx->pc = 0x15AE94u;
label_15ae94:
    // 0x15ae94: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_15ae98:
    if (ctx->pc == 0x15AE98u) {
        ctx->pc = 0x15AE9Cu;
        goto label_15ae9c;
    }
    ctx->pc = 0x15AE94u;
    {
        const bool branch_taken_0x15ae94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x15ae94) {
            ctx->pc = 0x15AEA4u;
            goto label_15aea4;
        }
    }
    ctx->pc = 0x15AE9Cu;
label_15ae9c:
    // 0x15ae9c: 0x100001fe  b           . + 4 + (0x1FE << 2)
label_15aea0:
    if (ctx->pc == 0x15AEA0u) {
        ctx->pc = 0x15AEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AE9Cu;
        // 0x15aea0: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AEA4u;
        goto label_15aea4;
    }
    ctx->pc = 0x15AE9Cu;
    {
        const bool branch_taken_0x15ae9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AE9Cu;
        // 0x15aea0: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ae9c) {
            ctx->pc = 0x15B698u;
            { ctx->pc = 0x15b698; return; }
        }
    }
    ctx->pc = 0x15AEA4u;
label_15aea4:
    // 0x15aea4: 0x100001fc  b           . + 4 + (0x1FC << 2)
label_15aea8:
    if (ctx->pc == 0x15AEA8u) {
        ctx->pc = 0x15AEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AEA4u;
        // 0x15aea8: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AEACu;
        goto label_15aeac;
    }
    ctx->pc = 0x15AEA4u;
    {
        const bool branch_taken_0x15aea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AEA4u;
        // 0x15aea8: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aea4) {
            ctx->pc = 0x15B698u;
            { ctx->pc = 0x15b698; return; }
        }
    }
    ctx->pc = 0x15AEACu;
label_15aeac:
    // 0x15aeac: 0x100001fa  b           . + 4 + (0x1FA << 2)
label_15aeb0:
    if (ctx->pc == 0x15AEB0u) {
        ctx->pc = 0x15AEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AEACu;
        // 0x15aeb0: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AEB4u;
        goto label_15aeb4;
    }
    ctx->pc = 0x15AEACu;
    {
        const bool branch_taken_0x15aeac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AEACu;
        // 0x15aeb0: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aeac) {
            ctx->pc = 0x15B698u;
            { ctx->pc = 0x15b698; return; }
        }
    }
    ctx->pc = 0x15AEB4u;
label_15aeb4:
    // 0x15aeb4: 0x100001f8  b           . + 4 + (0x1F8 << 2)
label_15aeb8:
    if (ctx->pc == 0x15AEB8u) {
        ctx->pc = 0x15AEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AEB4u;
        // 0x15aeb8: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AEBCu;
        goto label_15aebc;
    }
    ctx->pc = 0x15AEB4u;
    {
        const bool branch_taken_0x15aeb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AEB4u;
        // 0x15aeb8: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aeb4) {
            ctx->pc = 0x15B698u;
            { ctx->pc = 0x15b698; return; }
        }
    }
    ctx->pc = 0x15AEBCu;
label_15aebc:
    // 0x15aebc: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15aebcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_15aec0:
    // 0x15aec0: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x15aec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_15aec4:
    // 0x15aec4: 0x9023490c  lbu         $v1, 0x490C($at)
    ctx->pc = 0x15aec4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_15aec8:
    // 0x15aec8: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
label_15aecc:
    if (ctx->pc == 0x15AECCu) {
        ctx->pc = 0x15AECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AEC8u;
        // 0x15aecc: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AED0u;
        goto label_15aed0;
    }
    ctx->pc = 0x15AEC8u;
    {
        const bool branch_taken_0x15aec8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x15AECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AEC8u;
        // 0x15aecc: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aec8) {
            ctx->pc = 0x15AF00u;
            { ctx->pc = 0x15af00; return; }
        }
    }
    ctx->pc = 0x15AED0u;
label_15aed0:
    // 0x15aed0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15aed0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_15aed4:
    // 0x15aed4: 0x9023490f  lbu         $v1, 0x490F($at)
    ctx->pc = 0x15aed4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18703)));
label_15aed8:
    // 0x15aed8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_15aedc:
    if (ctx->pc == 0x15AEDCu) {
        ctx->pc = 0x15AEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AED8u;
        // 0x15aedc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AEE0u;
        goto label_15aee0;
    }
    ctx->pc = 0x15AED8u;
    {
        const bool branch_taken_0x15aed8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15AEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AED8u;
        // 0x15aedc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aed8) {
            ctx->pc = 0x15AEE8u;
            goto label_15aee8;
        }
    }
    ctx->pc = 0x15AEE0u;
label_15aee0:
    // 0x15aee0: 0x100001ed  b           . + 4 + (0x1ED << 2)
label_15aee4:
    if (ctx->pc == 0x15AEE4u) {
        ctx->pc = 0x15AEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AEE0u;
        // 0x15aee4: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AEE8u;
        goto label_15aee8;
    }
    ctx->pc = 0x15AEE0u;
    {
        const bool branch_taken_0x15aee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AEE0u;
        // 0x15aee4: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aee0) {
            ctx->pc = 0x15B698u;
            { ctx->pc = 0x15b698; return; }
        }
    }
    ctx->pc = 0x15AEE8u;
label_15aee8:
    // 0x15aee8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_15aeec:
    if (ctx->pc == 0x15AEECu) {
        ctx->pc = 0x15AEF0u;
        { ctx->pc = 0x15aef0; return; }
    }
    ctx->pc = 0x15AEE8u;
    {
        const bool branch_taken_0x15aee8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x15aee8) {
            ctx->pc = 0x15AEF8u;
            { ctx->pc = 0x15aef8; return; }
        }
    }
    ctx->pc = 0x15AEF0u;
    ctx->pc = 0x15aef0u;
    return;
}

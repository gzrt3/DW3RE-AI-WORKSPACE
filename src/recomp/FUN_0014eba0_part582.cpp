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


void FUN_0014eba0_part582(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x26a6b0u: goto label_26a6b0;
        case 0x26a6b4u: goto label_26a6b4;
        case 0x26a6b8u: goto label_26a6b8;
        case 0x26a6bcu: goto label_26a6bc;
        case 0x26a6c0u: goto label_26a6c0;
        case 0x26a6c4u: goto label_26a6c4;
        case 0x26a6c8u: goto label_26a6c8;
        case 0x26a6ccu: goto label_26a6cc;
        case 0x26a6d0u: goto label_26a6d0;
        case 0x26a6d4u: goto label_26a6d4;
        case 0x26a6d8u: goto label_26a6d8;
        case 0x26a6dcu: goto label_26a6dc;
        case 0x26a6e0u: goto label_26a6e0;
        case 0x26a6e4u: goto label_26a6e4;
        case 0x26a6e8u: goto label_26a6e8;
        case 0x26a6ecu: goto label_26a6ec;
        case 0x26a6f0u: goto label_26a6f0;
        case 0x26a6f4u: goto label_26a6f4;
        case 0x26a6f8u: goto label_26a6f8;
        case 0x26a6fcu: goto label_26a6fc;
        case 0x26a700u: goto label_26a700;
        case 0x26a704u: goto label_26a704;
        case 0x26a708u: goto label_26a708;
        case 0x26a70cu: goto label_26a70c;
        case 0x26a710u: goto label_26a710;
        case 0x26a714u: goto label_26a714;
        case 0x26a718u: goto label_26a718;
        case 0x26a71cu: goto label_26a71c;
        case 0x26a720u: goto label_26a720;
        case 0x26a724u: goto label_26a724;
        case 0x26a728u: goto label_26a728;
        case 0x26a72cu: goto label_26a72c;
        case 0x26a730u: goto label_26a730;
        case 0x26a734u: goto label_26a734;
        case 0x26a738u: goto label_26a738;
        case 0x26a73cu: goto label_26a73c;
        case 0x26a740u: goto label_26a740;
        case 0x26a744u: goto label_26a744;
        case 0x26a748u: goto label_26a748;
        case 0x26a74cu: goto label_26a74c;
        case 0x26a750u: goto label_26a750;
        case 0x26a754u: goto label_26a754;
        case 0x26a758u: goto label_26a758;
        case 0x26a75cu: goto label_26a75c;
        case 0x26a760u: goto label_26a760;
        case 0x26a764u: goto label_26a764;
        case 0x26a768u: goto label_26a768;
        case 0x26a76cu: goto label_26a76c;
        case 0x26a770u: goto label_26a770;
        case 0x26a774u: goto label_26a774;
        case 0x26a778u: goto label_26a778;
        case 0x26a77cu: goto label_26a77c;
        case 0x26a780u: goto label_26a780;
        case 0x26a784u: goto label_26a784;
        case 0x26a788u: goto label_26a788;
        case 0x26a78cu: goto label_26a78c;
        case 0x26a790u: goto label_26a790;
        case 0x26a794u: goto label_26a794;
        case 0x26a798u: goto label_26a798;
        case 0x26a79cu: goto label_26a79c;
        case 0x26a7a0u: goto label_26a7a0;
        case 0x26a7a4u: goto label_26a7a4;
        case 0x26a7a8u: goto label_26a7a8;
        case 0x26a7acu: goto label_26a7ac;
        case 0x26a7b0u: goto label_26a7b0;
        case 0x26a7b4u: goto label_26a7b4;
        case 0x26a7b8u: goto label_26a7b8;
        case 0x26a7bcu: goto label_26a7bc;
        case 0x26a7c0u: goto label_26a7c0;
        case 0x26a7c4u: goto label_26a7c4;
        case 0x26a7c8u: goto label_26a7c8;
        case 0x26a7ccu: goto label_26a7cc;
        case 0x26a7d0u: goto label_26a7d0;
        case 0x26a7d4u: goto label_26a7d4;
        case 0x26a7d8u: goto label_26a7d8;
        case 0x26a7dcu: goto label_26a7dc;
        case 0x26a7e0u: goto label_26a7e0;
        case 0x26a7e4u: goto label_26a7e4;
        case 0x26a7e8u: goto label_26a7e8;
        case 0x26a7ecu: goto label_26a7ec;
        case 0x26a7f0u: goto label_26a7f0;
        case 0x26a7f4u: goto label_26a7f4;
        case 0x26a7f8u: goto label_26a7f8;
        case 0x26a7fcu: goto label_26a7fc;
        case 0x26a800u: goto label_26a800;
        case 0x26a804u: goto label_26a804;
        case 0x26a808u: goto label_26a808;
        case 0x26a80cu: goto label_26a80c;
        case 0x26a810u: goto label_26a810;
        case 0x26a814u: goto label_26a814;
        case 0x26a818u: goto label_26a818;
        case 0x26a81cu: goto label_26a81c;
        case 0x26a820u: goto label_26a820;
        case 0x26a824u: goto label_26a824;
        case 0x26a828u: goto label_26a828;
        case 0x26a82cu: goto label_26a82c;
        case 0x26a830u: goto label_26a830;
        case 0x26a834u: goto label_26a834;
        case 0x26a838u: goto label_26a838;
        case 0x26a83cu: goto label_26a83c;
        case 0x26a840u: goto label_26a840;
        case 0x26a844u: goto label_26a844;
        case 0x26a848u: goto label_26a848;
        case 0x26a84cu: goto label_26a84c;
        case 0x26a850u: goto label_26a850;
        case 0x26a854u: goto label_26a854;
        case 0x26a858u: goto label_26a858;
        case 0x26a85cu: goto label_26a85c;
        case 0x26a860u: goto label_26a860;
        case 0x26a864u: goto label_26a864;
        case 0x26a868u: goto label_26a868;
        case 0x26a86cu: goto label_26a86c;
        case 0x26a870u: goto label_26a870;
        case 0x26a874u: goto label_26a874;
        case 0x26a878u: goto label_26a878;
        case 0x26a87cu: goto label_26a87c;
        case 0x26a880u: goto label_26a880;
        case 0x26a884u: goto label_26a884;
        case 0x26a888u: goto label_26a888;
        case 0x26a88cu: goto label_26a88c;
        case 0x26a890u: goto label_26a890;
        case 0x26a894u: goto label_26a894;
        case 0x26a898u: goto label_26a898;
        case 0x26a89cu: goto label_26a89c;
        case 0x26a8a0u: goto label_26a8a0;
        case 0x26a8a4u: goto label_26a8a4;
        case 0x26a8a8u: goto label_26a8a8;
        case 0x26a8acu: goto label_26a8ac;
        case 0x26a8b0u: goto label_26a8b0;
        case 0x26a8b4u: goto label_26a8b4;
        case 0x26a8b8u: goto label_26a8b8;
        case 0x26a8bcu: goto label_26a8bc;
        case 0x26a8c0u: goto label_26a8c0;
        case 0x26a8c4u: goto label_26a8c4;
        case 0x26a8c8u: goto label_26a8c8;
        case 0x26a8ccu: goto label_26a8cc;
        case 0x26a8d0u: goto label_26a8d0;
        case 0x26a8d4u: goto label_26a8d4;
        case 0x26a8d8u: goto label_26a8d8;
        case 0x26a8dcu: goto label_26a8dc;
        case 0x26a8e0u: goto label_26a8e0;
        case 0x26a8e4u: goto label_26a8e4;
        case 0x26a8e8u: goto label_26a8e8;
        case 0x26a8ecu: goto label_26a8ec;
        case 0x26a8f0u: goto label_26a8f0;
        case 0x26a8f4u: goto label_26a8f4;
        case 0x26a8f8u: goto label_26a8f8;
        case 0x26a8fcu: goto label_26a8fc;
        case 0x26a900u: goto label_26a900;
        case 0x26a904u: goto label_26a904;
        case 0x26a908u: goto label_26a908;
        case 0x26a90cu: goto label_26a90c;
        case 0x26a910u: goto label_26a910;
        case 0x26a914u: goto label_26a914;
        case 0x26a918u: goto label_26a918;
        case 0x26a91cu: goto label_26a91c;
        case 0x26a920u: goto label_26a920;
        case 0x26a924u: goto label_26a924;
        case 0x26a928u: goto label_26a928;
        case 0x26a92cu: goto label_26a92c;
        case 0x26a930u: goto label_26a930;
        case 0x26a934u: goto label_26a934;
        case 0x26a938u: goto label_26a938;
        case 0x26a93cu: goto label_26a93c;
        case 0x26a940u: goto label_26a940;
        case 0x26a944u: goto label_26a944;
        case 0x26a948u: goto label_26a948;
        case 0x26a94cu: goto label_26a94c;
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
        default: return;
    }

label_26a6b0:
    // 0x26a6b0: 0x255  .word       0x00000255                   # INVALID     $zero, $zero, 0x255 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a6b0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x26A6B0 raw=0x00000255");
 /* MITIGATED */
label_26a6b4:
    // 0x26a6b4: 0x92c0  sll         $s2, $zero, 11
    ctx->pc = 0x26a6b4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_26a6b8:
    // 0x26a6b8: 0x0  nop
    ctx->pc = 0x26a6b8u;
    // NOP
label_26a6bc:
    // 0x26a6bc: 0x0  nop
    ctx->pc = 0x26a6bcu;
    // NOP
label_26a6c0:
    // 0x26a6c0: 0x268  .word       0x00000268                   # mfsa        $zero # 00000240 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26a6c0u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_26a6c4:
    // 0x26a6c4: 0xac30  tge         $zero, $zero, 688
    ctx->pc = 0x26a6c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26a6c8:
    // 0x26a6c8: 0x0  nop
    ctx->pc = 0x26a6c8u;
    // NOP
label_26a6cc:
    // 0x26a6cc: 0x0  nop
    ctx->pc = 0x26a6ccu;
    // NOP
label_26a6d0:
    // 0x26a6d0: 0x27e  dsrl32      $zero, $zero, 9
    ctx->pc = 0x26a6d0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 9));
label_26a6d4:
    // 0x26a6d4: 0xd160  .word       0x0000D160                   # add         $k0, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a6d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_26a6d8:
    // 0x26a6d8: 0x0  nop
    ctx->pc = 0x26a6d8u;
    // NOP
label_26a6dc:
    // 0x26a6dc: 0x0  nop
    ctx->pc = 0x26a6dcu;
    // NOP
label_26a6e0:
    // 0x26a6e0: 0x299  .word       0x00000299                   # multu       $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a6e0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_26a6e4:
    // 0x26a6e4: 0x67a0  .word       0x000067A0                   # add         $t4, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a6e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_26a6e8:
    // 0x26a6e8: 0x0  nop
    ctx->pc = 0x26a6e8u;
    // NOP
label_26a6ec:
    // 0x26a6ec: 0x0  nop
    ctx->pc = 0x26a6ecu;
    // NOP
label_26a6f0:
    // 0x26a6f0: 0x2a6  .word       0x000002A6                   # xor         $zero, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a6f0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_26a6f4:
    // 0x26a6f4: 0x6d90  .word       0x00006D90                   # mfhi        $t5 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a6f4u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_26a6f8:
    // 0x26a6f8: 0x0  nop
    ctx->pc = 0x26a6f8u;
    // NOP
label_26a6fc:
    // 0x26a6fc: 0x0  nop
    ctx->pc = 0x26a6fcu;
    // NOP
label_26a700:
    // 0x26a700: 0x2b4  teq         $zero, $zero, 10
    ctx->pc = 0x26a700u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26a704:
    // 0x26a704: 0xa940  sll         $s5, $zero, 5
    ctx->pc = 0x26a704u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_26a708:
    // 0x26a708: 0x0  nop
    ctx->pc = 0x26a708u;
    // NOP
label_26a70c:
    // 0x26a70c: 0x0  nop
    ctx->pc = 0x26a70cu;
    // NOP
label_26a710:
    // 0x26a710: 0x2ca  .word       0x000002CA                   # movz        $zero, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a710u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_26a714:
    // 0x26a714: 0x8a00  sll         $s1, $zero, 8
    ctx->pc = 0x26a714u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_26a718:
    // 0x26a718: 0x0  nop
    ctx->pc = 0x26a718u;
    // NOP
label_26a71c:
    // 0x26a71c: 0x0  nop
    ctx->pc = 0x26a71cu;
    // NOP
label_26a720:
    // 0x26a720: 0x2dc  .word       0x000002DC                   # dmult       $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a720u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x26A720 raw=0x000002DC");
 /* MITIGATED */
label_26a724:
    // 0x26a724: 0x8e60  .word       0x00008E60                   # add         $s1, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a724u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_26a728:
    // 0x26a728: 0x0  nop
    ctx->pc = 0x26a728u;
    // NOP
label_26a72c:
    // 0x26a72c: 0x0  nop
    ctx->pc = 0x26a72cu;
    // NOP
label_26a730:
    // 0x26a730: 0x2ee  .word       0x000002EE                   # dsub        $zero, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a730u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_26a734:
    // 0x26a734: 0x9740  sll         $s2, $zero, 29
    ctx->pc = 0x26a734u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_26a738:
    // 0x26a738: 0x0  nop
    ctx->pc = 0x26a738u;
    // NOP
label_26a73c:
    // 0x26a73c: 0x0  nop
    ctx->pc = 0x26a73cu;
    // NOP
label_26a740:
    // 0x26a740: 0x301  .word       0x00000301                   # INVALID     $zero, $zero, 0x301 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a740u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x26A740 raw=0x00000301");
 /* MITIGATED */
label_26a744:
    // 0x26a744: 0xfd00  sll         $ra, $zero, 20
    ctx->pc = 0x26a744u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_26a748:
    // 0x26a748: 0x0  nop
    ctx->pc = 0x26a748u;
    // NOP
label_26a74c:
    // 0x26a74c: 0x0  nop
    ctx->pc = 0x26a74cu;
    // NOP
label_26a750:
    // 0x26a750: 0x321  .word       0x00000321                   # addu        $zero, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a750u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_26a754:
    // 0x26a754: 0x8d80  sll         $s1, $zero, 22
    ctx->pc = 0x26a754u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_26a758:
    // 0x26a758: 0x0  nop
    ctx->pc = 0x26a758u;
    // NOP
label_26a75c:
    // 0x26a75c: 0x0  nop
    ctx->pc = 0x26a75cu;
    // NOP
label_26a760:
    // 0x26a760: 0x333  tltu        $zero, $zero, 12
    ctx->pc = 0x26a760u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26a764:
    // 0x26a764: 0x9f10  .word       0x00009F10                   # mfhi        $s3 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a764u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_26a768:
    // 0x26a768: 0x0  nop
    ctx->pc = 0x26a768u;
    // NOP
label_26a76c:
    // 0x26a76c: 0x0  nop
    ctx->pc = 0x26a76cu;
    // NOP
label_26a770:
    // 0x26a770: 0x347  .word       0x00000347                   # srav        $zero, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a770u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26a774:
    // 0x26a774: 0xad60  .word       0x0000AD60                   # add         $s5, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a774u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_26a778:
    // 0x26a778: 0x0  nop
    ctx->pc = 0x26a778u;
    // NOP
label_26a77c:
    // 0x26a77c: 0x0  nop
    ctx->pc = 0x26a77cu;
    // NOP
label_26a780:
    // 0x26a780: 0x35d  .word       0x0000035D                   # dmultu      $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a780u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x26A780 raw=0x0000035D");
 /* MITIGATED */
label_26a784:
    // 0x26a784: 0xa000  sll         $s4, $zero, 0
    ctx->pc = 0x26a784u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_26a788:
    // 0x26a788: 0x0  nop
    ctx->pc = 0x26a788u;
    // NOP
label_26a78c:
    // 0x26a78c: 0x0  nop
    ctx->pc = 0x26a78cu;
    // NOP
label_26a790:
    // 0x26a790: 0x371  tgeu        $zero, $zero, 13
    ctx->pc = 0x26a790u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26a794:
    // 0x26a794: 0x8050  .word       0x00008050                   # mfhi        $s0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a794u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_26a798:
    // 0x26a798: 0x0  nop
    ctx->pc = 0x26a798u;
    // NOP
label_26a79c:
    // 0x26a79c: 0x0  nop
    ctx->pc = 0x26a79cu;
    // NOP
label_26a7a0:
    // 0x26a7a0: 0x382  srl         $zero, $zero, 14
    ctx->pc = 0x26a7a0u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 14));
label_26a7a4:
    // 0x26a7a4: 0xa750  .word       0x0000A750                   # mfhi        $s4 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a7a4u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_26a7a8:
    // 0x26a7a8: 0x0  nop
    ctx->pc = 0x26a7a8u;
    // NOP
label_26a7ac:
    // 0x26a7ac: 0x0  nop
    ctx->pc = 0x26a7acu;
    // NOP
label_26a7b0:
    // 0x26a7b0: 0x397  .word       0x00000397                   # dsrav       $zero, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a7b0u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_26a7b4:
    // 0x26a7b4: 0xd9d0  .word       0x0000D9D0                   # mfhi        $k1 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a7b4u;
    SET_GPR_U64(ctx, 27, ctx->hi);
label_26a7b8:
    // 0x26a7b8: 0x0  nop
    ctx->pc = 0x26a7b8u;
    // NOP
label_26a7bc:
    // 0x26a7bc: 0x0  nop
    ctx->pc = 0x26a7bcu;
    // NOP
label_26a7c0:
    // 0x26a7c0: 0x3b3  tltu        $zero, $zero, 14
    ctx->pc = 0x26a7c0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26a7c4:
    // 0x26a7c4: 0x77b0  tge         $zero, $zero, 478
    ctx->pc = 0x26a7c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26a7c8:
    // 0x26a7c8: 0x0  nop
    ctx->pc = 0x26a7c8u;
    // NOP
label_26a7cc:
    // 0x26a7cc: 0x0  nop
    ctx->pc = 0x26a7ccu;
    // NOP
label_26a7d0:
    // 0x26a7d0: 0x3c2  srl         $zero, $zero, 15
    ctx->pc = 0x26a7d0u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 15));
label_26a7d4:
    // 0x26a7d4: 0x91d0  .word       0x000091D0                   # mfhi        $s2 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a7d4u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_26a7d8:
    // 0x26a7d8: 0x0  nop
    ctx->pc = 0x26a7d8u;
    // NOP
label_26a7dc:
    // 0x26a7dc: 0x0  nop
    ctx->pc = 0x26a7dcu;
    // NOP
label_26a7e0:
    // 0x26a7e0: 0x3d5  .word       0x000003D5                   # INVALID     $zero, $zero, 0x3D5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a7e0u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x26A7E0 raw=0x000003D5");
 /* MITIGATED */
label_26a7e4:
    // 0x26a7e4: 0x93c0  sll         $s2, $zero, 15
    ctx->pc = 0x26a7e4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_26a7e8:
    // 0x26a7e8: 0x0  nop
    ctx->pc = 0x26a7e8u;
    // NOP
label_26a7ec:
    // 0x26a7ec: 0x0  nop
    ctx->pc = 0x26a7ecu;
    // NOP
label_26a7f0:
    // 0x26a7f0: 0x3e8  .word       0x000003E8                   # mfsa        $zero # 000003C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26a7f0u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_26a7f4:
    // 0x26a7f4: 0x52b0  tge         $zero, $zero, 330
    ctx->pc = 0x26a7f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26a7f8:
    // 0x26a7f8: 0x0  nop
    ctx->pc = 0x26a7f8u;
    // NOP
label_26a7fc:
    // 0x26a7fc: 0x0  nop
    ctx->pc = 0x26a7fcu;
    // NOP
label_26a800:
    // 0x26a800: 0x3f3  tltu        $zero, $zero, 15
    ctx->pc = 0x26a800u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26a804:
    // 0x26a804: 0xc8a0  .word       0x0000C8A0                   # add         $t9, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a804u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_26a808:
    // 0x26a808: 0x0  nop
    ctx->pc = 0x26a808u;
    // NOP
label_26a80c:
    // 0x26a80c: 0x0  nop
    ctx->pc = 0x26a80cu;
    // NOP
label_26a810:
    // 0x26a810: 0x40d  break       0, 16
    ctx->pc = 0x26a810u;
    runtime->handleBreak(rdram, ctx);
label_26a814:
    // 0x26a814: 0x6390  .word       0x00006390                   # mfhi        $t4 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a814u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_26a818:
    // 0x26a818: 0x0  nop
    ctx->pc = 0x26a818u;
    // NOP
label_26a81c:
    // 0x26a81c: 0x0  nop
    ctx->pc = 0x26a81cu;
    // NOP
label_26a820:
    // 0x26a820: 0x41a  .word       0x0000041A                   # div         $zero, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a820u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_26a824:
    // 0x26a824: 0xd700  sll         $k0, $zero, 28
    ctx->pc = 0x26a824u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_26a828:
    // 0x26a828: 0x0  nop
    ctx->pc = 0x26a828u;
    // NOP
label_26a82c:
    // 0x26a82c: 0x0  nop
    ctx->pc = 0x26a82cu;
    // NOP
label_26a830:
    // 0x26a830: 0x435  .word       0x00000435                   # INVALID     $zero, $zero, 0x435 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a830u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x26A830 raw=0x00000435");
 /* MITIGATED */
label_26a834:
    // 0x26a834: 0x6be0  .word       0x00006BE0                   # add         $t5, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a834u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_26a838:
    // 0x26a838: 0x0  nop
    ctx->pc = 0x26a838u;
    // NOP
label_26a83c:
    // 0x26a83c: 0x0  nop
    ctx->pc = 0x26a83cu;
    // NOP
label_26a840:
    // 0x26a840: 0x443  sra         $zero, $zero, 17
    ctx->pc = 0x26a840u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 17));
label_26a844:
    // 0x26a844: 0xa010  mfhi        $s4
    ctx->pc = 0x26a844u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_26a848:
    // 0x26a848: 0x0  nop
    ctx->pc = 0x26a848u;
    // NOP
label_26a84c:
    // 0x26a84c: 0x0  nop
    ctx->pc = 0x26a84cu;
    // NOP
label_26a850:
    // 0x26a850: 0x458  .word       0x00000458                   # mult        $zero, $zero, $zero # 00000440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26a850u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_26a854:
    // 0x26a854: 0x3190  .word       0x00003190                   # mfhi        $a2 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a854u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_26a858:
    // 0x26a858: 0x0  nop
    ctx->pc = 0x26a858u;
    // NOP
label_26a85c:
    // 0x26a85c: 0x0  nop
    ctx->pc = 0x26a85cu;
    // NOP
label_26a860:
    // 0x26a860: 0x45f  .word       0x0000045F                   # ddivu       $zero, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a860u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x26A860 raw=0x0000045F");
 /* MITIGATED */
label_26a864:
    // 0x26a864: 0x6fd0  .word       0x00006FD0                   # mfhi        $t5 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a864u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_26a868:
    // 0x26a868: 0x0  nop
    ctx->pc = 0x26a868u;
    // NOP
label_26a86c:
    // 0x26a86c: 0x0  nop
    ctx->pc = 0x26a86cu;
    // NOP
label_26a870:
    // 0x26a870: 0x46d  .word       0x0000046D                   # daddu       $zero, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a870u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26a874:
    // 0x26a874: 0xa720  .word       0x0000A720                   # add         $s4, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a874u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_26a878:
    // 0x26a878: 0x0  nop
    ctx->pc = 0x26a878u;
    // NOP
label_26a87c:
    // 0x26a87c: 0x0  nop
    ctx->pc = 0x26a87cu;
    // NOP
label_26a880:
    // 0x26a880: 0x482  srl         $zero, $zero, 18
    ctx->pc = 0x26a880u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 18));
label_26a884:
    // 0x26a884: 0x9700  sll         $s2, $zero, 28
    ctx->pc = 0x26a884u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_26a888:
    // 0x26a888: 0x0  nop
    ctx->pc = 0x26a888u;
    // NOP
label_26a88c:
    // 0x26a88c: 0x0  nop
    ctx->pc = 0x26a88cu;
    // NOP
label_26a890:
    // 0x26a890: 0x495  .word       0x00000495                   # INVALID     $zero, $zero, 0x495 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a890u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x26A890 raw=0x00000495");
 /* MITIGATED */
label_26a894:
    // 0x26a894: 0xe0c0  sll         $gp, $zero, 3
    ctx->pc = 0x26a894u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_26a898:
    // 0x26a898: 0x0  nop
    ctx->pc = 0x26a898u;
    // NOP
label_26a89c:
    // 0x26a89c: 0x0  nop
    ctx->pc = 0x26a89cu;
    // NOP
label_26a8a0:
    // 0x26a8a0: 0x4b2  tlt         $zero, $zero, 18
    ctx->pc = 0x26a8a0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26a8a4:
    // 0x26a8a4: 0xb0e0  .word       0x0000B0E0                   # add         $s6, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a8a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_26a8a8:
    // 0x26a8a8: 0x0  nop
    ctx->pc = 0x26a8a8u;
    // NOP
label_26a8ac:
    // 0x26a8ac: 0x0  nop
    ctx->pc = 0x26a8acu;
    // NOP
label_26a8b0:
    // 0x26a8b0: 0x4c9  .word       0x000004C9                   # jalr        $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
label_26a8b4:
    if (ctx->pc == 0x26A8B4u) {
        ctx->pc = 0x26A8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A8B0u;
        // 0x26a8b4: 0x8a20  .word       0x00008A20                   # add         $s1, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A8B8u;
        goto label_26a8b8;
    }
    ctx->pc = 0x26A8B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x26A8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A8B0u;
        // 0x26a8b4: 0x8a20  .word       0x00008A20                   # add         $s1, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26A8B0u, 0x26A8B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26A8B8u;
label_26a8b8:
    // 0x26a8b8: 0x0  nop
    ctx->pc = 0x26a8b8u;
    // NOP
label_26a8bc:
    // 0x26a8bc: 0x0  nop
    ctx->pc = 0x26a8bcu;
    // NOP
label_26a8c0:
    // 0x26a8c0: 0x4db  .word       0x000004DB                   # divu        $zero, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a8c0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_26a8c4:
    // 0x26a8c4: 0xc6a0  .word       0x0000C6A0                   # add         $t8, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a8c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_26a8c8:
    // 0x26a8c8: 0x0  nop
    ctx->pc = 0x26a8c8u;
    // NOP
label_26a8cc:
    // 0x26a8cc: 0x0  nop
    ctx->pc = 0x26a8ccu;
    // NOP
label_26a8d0:
    // 0x26a8d0: 0x4f4  teq         $zero, $zero, 19
    ctx->pc = 0x26a8d0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26a8d4:
    // 0x26a8d4: 0x5cd0  .word       0x00005CD0                   # mfhi        $t3 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a8d4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_26a8d8:
    // 0x26a8d8: 0x0  nop
    ctx->pc = 0x26a8d8u;
    // NOP
label_26a8dc:
    // 0x26a8dc: 0x0  nop
    ctx->pc = 0x26a8dcu;
    // NOP
label_26a8e0:
    // 0x26a8e0: 0x500  sll         $zero, $zero, 20
    ctx->pc = 0x26a8e0u;
    
label_26a8e4:
    // 0x26a8e4: 0x6480  sll         $t4, $zero, 18
    ctx->pc = 0x26a8e4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_26a8e8:
    // 0x26a8e8: 0x0  nop
    ctx->pc = 0x26a8e8u;
    // NOP
label_26a8ec:
    // 0x26a8ec: 0x0  nop
    ctx->pc = 0x26a8ecu;
    // NOP
label_26a8f0:
    // 0x26a8f0: 0x50d  break       0, 20
    ctx->pc = 0x26a8f0u;
    runtime->handleBreak(rdram, ctx);
label_26a8f4:
    // 0x26a8f4: 0x8170  tge         $zero, $zero, 517
    ctx->pc = 0x26a8f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26a8f8:
    // 0x26a8f8: 0x0  nop
    ctx->pc = 0x26a8f8u;
    // NOP
label_26a8fc:
    // 0x26a8fc: 0x0  nop
    ctx->pc = 0x26a8fcu;
    // NOP
label_26a900:
    // 0x26a900: 0x51e  .word       0x0000051E                   # ddiv        $zero, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a900u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x26A900 raw=0x0000051E");
 /* MITIGATED */
label_26a904:
    // 0x26a904: 0x14930  tge         $zero, $at, 292
    ctx->pc = 0x26a904u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_26a908:
    // 0x26a908: 0x0  nop
    ctx->pc = 0x26a908u;
    // NOP
label_26a90c:
    // 0x26a90c: 0x0  nop
    ctx->pc = 0x26a90cu;
    // NOP
label_26a910:
    // 0x26a910: 0x548  .word       0x00000548                   # jr          $zero # 00000540 <InstrIdType: CPU_SPECIAL>
label_26a914:
    if (ctx->pc == 0x26A914u) {
        ctx->pc = 0x26A914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A910u;
        // 0x26a914: 0x97a0  .word       0x000097A0                   # add         $s2, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A918u;
        goto label_26a918;
    }
    ctx->pc = 0x26A910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x26A914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A910u;
        // 0x26a914: 0x97a0  .word       0x000097A0                   # add         $s2, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26A910u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x26A918u;
label_26a918:
    // 0x26a918: 0x0  nop
    ctx->pc = 0x26a918u;
    // NOP
label_26a91c:
    // 0x26a91c: 0x0  nop
    ctx->pc = 0x26a91cu;
    // NOP
label_26a920:
    // 0x26a920: 0x55b  .word       0x0000055B                   # divu        $zero, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a920u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_26a924:
    // 0x26a924: 0xb920  .word       0x0000B920                   # add         $s7, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a924u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_26a928:
    // 0x26a928: 0x0  nop
    ctx->pc = 0x26a928u;
    // NOP
label_26a92c:
    // 0x26a92c: 0x0  nop
    ctx->pc = 0x26a92cu;
    // NOP
label_26a930:
    // 0x26a930: 0x573  tltu        $zero, $zero, 21
    ctx->pc = 0x26a930u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26a934:
    // 0x26a934: 0xa230  tge         $zero, $zero, 648
    ctx->pc = 0x26a934u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26a938:
    // 0x26a938: 0x0  nop
    ctx->pc = 0x26a938u;
    // NOP
label_26a93c:
    // 0x26a93c: 0x0  nop
    ctx->pc = 0x26a93cu;
    // NOP
label_26a940:
    // 0x26a940: 0x588  .word       0x00000588                   # jr          $zero # 00000580 <InstrIdType: CPU_SPECIAL>
label_26a944:
    if (ctx->pc == 0x26A944u) {
        ctx->pc = 0x26A944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A940u;
        // 0x26a944: 0x9430  tge         $zero, $zero, 592 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A948u;
        goto label_26a948;
    }
    ctx->pc = 0x26A940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x26A944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A940u;
        // 0x26a944: 0x9430  tge         $zero, $zero, 592 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26A940u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x26A948u;
label_26a948:
    // 0x26a948: 0x0  nop
    ctx->pc = 0x26a948u;
    // NOP
label_26a94c:
    // 0x26a94c: 0x0  nop
    ctx->pc = 0x26a94cu;
    // NOP
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x26A9E0 raw=0x00000641");
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x26AA00 raw=0x0000067D");
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x26AA60 raw=0x000006F9");
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x26AA80 raw=0x0000071C");
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x26AAB0 raw=0x00000745");
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x26AAE0 raw=0x00000785");
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x26AAF0 raw=0x0000079D");
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x26AB50 raw=0x00000835");
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x26AB90 raw=0x00000885");
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x26ABA0 raw=0x0000089D");
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x26AC90 raw=0x00000A1D");
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x26ACD0 raw=0x00000A79");
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x26ACF0 raw=0x00000A9F");
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x26AD30 raw=0x00000AFD");
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x26AD60 raw=0x00000B41");
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
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x26AD70 raw=0x00000B55");
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
    ctx->pc = 0x26ae80u;
    return;
}

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


void FUN_0017d410_part28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x18a700u: goto label_18a700;
        case 0x18a704u: goto label_18a704;
        case 0x18a708u: goto label_18a708;
        case 0x18a70cu: goto label_18a70c;
        case 0x18a710u: goto label_18a710;
        case 0x18a714u: goto label_18a714;
        case 0x18a718u: goto label_18a718;
        case 0x18a71cu: goto label_18a71c;
        case 0x18a720u: goto label_18a720;
        case 0x18a724u: goto label_18a724;
        case 0x18a728u: goto label_18a728;
        case 0x18a72cu: goto label_18a72c;
        case 0x18a730u: goto label_18a730;
        case 0x18a734u: goto label_18a734;
        case 0x18a738u: goto label_18a738;
        case 0x18a73cu: goto label_18a73c;
        case 0x18a740u: goto label_18a740;
        case 0x18a744u: goto label_18a744;
        case 0x18a748u: goto label_18a748;
        case 0x18a74cu: goto label_18a74c;
        case 0x18a750u: goto label_18a750;
        case 0x18a754u: goto label_18a754;
        case 0x18a758u: goto label_18a758;
        case 0x18a75cu: goto label_18a75c;
        case 0x18a760u: goto label_18a760;
        case 0x18a764u: goto label_18a764;
        case 0x18a768u: goto label_18a768;
        case 0x18a76cu: goto label_18a76c;
        case 0x18a770u: goto label_18a770;
        case 0x18a774u: goto label_18a774;
        case 0x18a778u: goto label_18a778;
        case 0x18a77cu: goto label_18a77c;
        case 0x18a780u: goto label_18a780;
        case 0x18a784u: goto label_18a784;
        case 0x18a788u: goto label_18a788;
        case 0x18a78cu: goto label_18a78c;
        case 0x18a790u: goto label_18a790;
        case 0x18a794u: goto label_18a794;
        case 0x18a798u: goto label_18a798;
        case 0x18a79cu: goto label_18a79c;
        case 0x18a7a0u: goto label_18a7a0;
        case 0x18a7a4u: goto label_18a7a4;
        case 0x18a7a8u: goto label_18a7a8;
        case 0x18a7acu: goto label_18a7ac;
        case 0x18a7b0u: goto label_18a7b0;
        case 0x18a7b4u: goto label_18a7b4;
        case 0x18a7b8u: goto label_18a7b8;
        case 0x18a7bcu: goto label_18a7bc;
        case 0x18a7c0u: goto label_18a7c0;
        case 0x18a7c4u: goto label_18a7c4;
        case 0x18a7c8u: goto label_18a7c8;
        case 0x18a7ccu: goto label_18a7cc;
        case 0x18a7d0u: goto label_18a7d0;
        case 0x18a7d4u: goto label_18a7d4;
        case 0x18a7d8u: goto label_18a7d8;
        case 0x18a7dcu: goto label_18a7dc;
        case 0x18a7e0u: goto label_18a7e0;
        case 0x18a7e4u: goto label_18a7e4;
        case 0x18a7e8u: goto label_18a7e8;
        case 0x18a7ecu: goto label_18a7ec;
        case 0x18a7f0u: goto label_18a7f0;
        case 0x18a7f4u: goto label_18a7f4;
        case 0x18a7f8u: goto label_18a7f8;
        case 0x18a7fcu: goto label_18a7fc;
        case 0x18a800u: goto label_18a800;
        case 0x18a804u: goto label_18a804;
        case 0x18a808u: goto label_18a808;
        case 0x18a80cu: goto label_18a80c;
        case 0x18a810u: goto label_18a810;
        case 0x18a814u: goto label_18a814;
        case 0x18a818u: goto label_18a818;
        case 0x18a81cu: goto label_18a81c;
        case 0x18a820u: goto label_18a820;
        case 0x18a824u: goto label_18a824;
        case 0x18a828u: goto label_18a828;
        case 0x18a82cu: goto label_18a82c;
        case 0x18a830u: goto label_18a830;
        case 0x18a834u: goto label_18a834;
        case 0x18a838u: goto label_18a838;
        case 0x18a83cu: goto label_18a83c;
        case 0x18a840u: goto label_18a840;
        case 0x18a844u: goto label_18a844;
        case 0x18a848u: goto label_18a848;
        case 0x18a84cu: goto label_18a84c;
        case 0x18a850u: goto label_18a850;
        case 0x18a854u: goto label_18a854;
        case 0x18a858u: goto label_18a858;
        case 0x18a85cu: goto label_18a85c;
        case 0x18a860u: goto label_18a860;
        case 0x18a864u: goto label_18a864;
        case 0x18a868u: goto label_18a868;
        case 0x18a86cu: goto label_18a86c;
        case 0x18a870u: goto label_18a870;
        case 0x18a874u: goto label_18a874;
        case 0x18a878u: goto label_18a878;
        case 0x18a87cu: goto label_18a87c;
        case 0x18a880u: goto label_18a880;
        case 0x18a884u: goto label_18a884;
        case 0x18a888u: goto label_18a888;
        case 0x18a88cu: goto label_18a88c;
        case 0x18a890u: goto label_18a890;
        case 0x18a894u: goto label_18a894;
        case 0x18a898u: goto label_18a898;
        case 0x18a89cu: goto label_18a89c;
        case 0x18a8a0u: goto label_18a8a0;
        case 0x18a8a4u: goto label_18a8a4;
        case 0x18a8a8u: goto label_18a8a8;
        case 0x18a8acu: goto label_18a8ac;
        case 0x18a8b0u: goto label_18a8b0;
        case 0x18a8b4u: goto label_18a8b4;
        case 0x18a8b8u: goto label_18a8b8;
        case 0x18a8bcu: goto label_18a8bc;
        case 0x18a8c0u: goto label_18a8c0;
        case 0x18a8c4u: goto label_18a8c4;
        case 0x18a8c8u: goto label_18a8c8;
        case 0x18a8ccu: goto label_18a8cc;
        case 0x18a8d0u: goto label_18a8d0;
        case 0x18a8d4u: goto label_18a8d4;
        case 0x18a8d8u: goto label_18a8d8;
        case 0x18a8dcu: goto label_18a8dc;
        case 0x18a8e0u: goto label_18a8e0;
        case 0x18a8e4u: goto label_18a8e4;
        case 0x18a8e8u: goto label_18a8e8;
        case 0x18a8ecu: goto label_18a8ec;
        case 0x18a8f0u: goto label_18a8f0;
        case 0x18a8f4u: goto label_18a8f4;
        case 0x18a8f8u: goto label_18a8f8;
        case 0x18a8fcu: goto label_18a8fc;
        case 0x18a900u: goto label_18a900;
        case 0x18a904u: goto label_18a904;
        case 0x18a908u: goto label_18a908;
        case 0x18a90cu: goto label_18a90c;
        case 0x18a910u: goto label_18a910;
        case 0x18a914u: goto label_18a914;
        case 0x18a918u: goto label_18a918;
        case 0x18a91cu: goto label_18a91c;
        case 0x18a920u: goto label_18a920;
        case 0x18a924u: goto label_18a924;
        case 0x18a928u: goto label_18a928;
        case 0x18a92cu: goto label_18a92c;
        case 0x18a930u: goto label_18a930;
        case 0x18a934u: goto label_18a934;
        case 0x18a938u: goto label_18a938;
        case 0x18a93cu: goto label_18a93c;
        case 0x18a940u: goto label_18a940;
        case 0x18a944u: goto label_18a944;
        case 0x18a948u: goto label_18a948;
        case 0x18a94cu: goto label_18a94c;
        case 0x18a950u: goto label_18a950;
        case 0x18a954u: goto label_18a954;
        case 0x18a958u: goto label_18a958;
        case 0x18a95cu: goto label_18a95c;
        case 0x18a960u: goto label_18a960;
        case 0x18a964u: goto label_18a964;
        case 0x18a968u: goto label_18a968;
        case 0x18a96cu: goto label_18a96c;
        case 0x18a970u: goto label_18a970;
        case 0x18a974u: goto label_18a974;
        case 0x18a978u: goto label_18a978;
        case 0x18a97cu: goto label_18a97c;
        case 0x18a980u: goto label_18a980;
        case 0x18a984u: goto label_18a984;
        case 0x18a988u: goto label_18a988;
        case 0x18a98cu: goto label_18a98c;
        case 0x18a990u: goto label_18a990;
        case 0x18a994u: goto label_18a994;
        case 0x18a998u: goto label_18a998;
        case 0x18a99cu: goto label_18a99c;
        case 0x18a9a0u: goto label_18a9a0;
        case 0x18a9a4u: goto label_18a9a4;
        case 0x18a9a8u: goto label_18a9a8;
        case 0x18a9acu: goto label_18a9ac;
        case 0x18a9b0u: goto label_18a9b0;
        case 0x18a9b4u: goto label_18a9b4;
        case 0x18a9b8u: goto label_18a9b8;
        case 0x18a9bcu: goto label_18a9bc;
        case 0x18a9c0u: goto label_18a9c0;
        case 0x18a9c4u: goto label_18a9c4;
        case 0x18a9c8u: goto label_18a9c8;
        case 0x18a9ccu: goto label_18a9cc;
        case 0x18a9d0u: goto label_18a9d0;
        case 0x18a9d4u: goto label_18a9d4;
        case 0x18a9d8u: goto label_18a9d8;
        case 0x18a9dcu: goto label_18a9dc;
        case 0x18a9e0u: goto label_18a9e0;
        case 0x18a9e4u: goto label_18a9e4;
        case 0x18a9e8u: goto label_18a9e8;
        case 0x18a9ecu: goto label_18a9ec;
        case 0x18a9f0u: goto label_18a9f0;
        case 0x18a9f4u: goto label_18a9f4;
        case 0x18a9f8u: goto label_18a9f8;
        case 0x18a9fcu: goto label_18a9fc;
        case 0x18aa00u: goto label_18aa00;
        case 0x18aa04u: goto label_18aa04;
        case 0x18aa08u: goto label_18aa08;
        case 0x18aa0cu: goto label_18aa0c;
        case 0x18aa10u: goto label_18aa10;
        case 0x18aa14u: goto label_18aa14;
        case 0x18aa18u: goto label_18aa18;
        case 0x18aa1cu: goto label_18aa1c;
        case 0x18aa20u: goto label_18aa20;
        case 0x18aa24u: goto label_18aa24;
        case 0x18aa28u: goto label_18aa28;
        case 0x18aa2cu: goto label_18aa2c;
        case 0x18aa30u: goto label_18aa30;
        case 0x18aa34u: goto label_18aa34;
        case 0x18aa38u: goto label_18aa38;
        case 0x18aa3cu: goto label_18aa3c;
        case 0x18aa40u: goto label_18aa40;
        case 0x18aa44u: goto label_18aa44;
        case 0x18aa48u: goto label_18aa48;
        case 0x18aa4cu: goto label_18aa4c;
        case 0x18aa50u: goto label_18aa50;
        case 0x18aa54u: goto label_18aa54;
        case 0x18aa58u: goto label_18aa58;
        case 0x18aa5cu: goto label_18aa5c;
        case 0x18aa60u: goto label_18aa60;
        case 0x18aa64u: goto label_18aa64;
        case 0x18aa68u: goto label_18aa68;
        case 0x18aa6cu: goto label_18aa6c;
        case 0x18aa70u: goto label_18aa70;
        case 0x18aa74u: goto label_18aa74;
        case 0x18aa78u: goto label_18aa78;
        case 0x18aa7cu: goto label_18aa7c;
        case 0x18aa80u: goto label_18aa80;
        case 0x18aa84u: goto label_18aa84;
        case 0x18aa88u: goto label_18aa88;
        case 0x18aa8cu: goto label_18aa8c;
        case 0x18aa90u: goto label_18aa90;
        case 0x18aa94u: goto label_18aa94;
        case 0x18aa98u: goto label_18aa98;
        case 0x18aa9cu: goto label_18aa9c;
        case 0x18aaa0u: goto label_18aaa0;
        case 0x18aaa4u: goto label_18aaa4;
        case 0x18aaa8u: goto label_18aaa8;
        case 0x18aaacu: goto label_18aaac;
        case 0x18aab0u: goto label_18aab0;
        case 0x18aab4u: goto label_18aab4;
        case 0x18aab8u: goto label_18aab8;
        case 0x18aabcu: goto label_18aabc;
        case 0x18aac0u: goto label_18aac0;
        case 0x18aac4u: goto label_18aac4;
        case 0x18aac8u: goto label_18aac8;
        case 0x18aaccu: goto label_18aacc;
        case 0x18aad0u: goto label_18aad0;
        case 0x18aad4u: goto label_18aad4;
        case 0x18aad8u: goto label_18aad8;
        case 0x18aadcu: goto label_18aadc;
        case 0x18aae0u: goto label_18aae0;
        case 0x18aae4u: goto label_18aae4;
        case 0x18aae8u: goto label_18aae8;
        case 0x18aaecu: goto label_18aaec;
        case 0x18aaf0u: goto label_18aaf0;
        case 0x18aaf4u: goto label_18aaf4;
        case 0x18aaf8u: goto label_18aaf8;
        case 0x18aafcu: goto label_18aafc;
        case 0x18ab00u: goto label_18ab00;
        case 0x18ab04u: goto label_18ab04;
        case 0x18ab08u: goto label_18ab08;
        case 0x18ab0cu: goto label_18ab0c;
        case 0x18ab10u: goto label_18ab10;
        case 0x18ab14u: goto label_18ab14;
        case 0x18ab18u: goto label_18ab18;
        case 0x18ab1cu: goto label_18ab1c;
        case 0x18ab20u: goto label_18ab20;
        case 0x18ab24u: goto label_18ab24;
        case 0x18ab28u: goto label_18ab28;
        case 0x18ab2cu: goto label_18ab2c;
        case 0x18ab30u: goto label_18ab30;
        case 0x18ab34u: goto label_18ab34;
        case 0x18ab38u: goto label_18ab38;
        case 0x18ab3cu: goto label_18ab3c;
        case 0x18ab40u: goto label_18ab40;
        case 0x18ab44u: goto label_18ab44;
        case 0x18ab48u: goto label_18ab48;
        case 0x18ab4cu: goto label_18ab4c;
        case 0x18ab50u: goto label_18ab50;
        case 0x18ab54u: goto label_18ab54;
        case 0x18ab58u: goto label_18ab58;
        case 0x18ab5cu: goto label_18ab5c;
        case 0x18ab60u: goto label_18ab60;
        case 0x18ab64u: goto label_18ab64;
        case 0x18ab68u: goto label_18ab68;
        case 0x18ab6cu: goto label_18ab6c;
        case 0x18ab70u: goto label_18ab70;
        case 0x18ab74u: goto label_18ab74;
        case 0x18ab78u: goto label_18ab78;
        case 0x18ab7cu: goto label_18ab7c;
        case 0x18ab80u: goto label_18ab80;
        case 0x18ab84u: goto label_18ab84;
        case 0x18ab88u: goto label_18ab88;
        case 0x18ab8cu: goto label_18ab8c;
        case 0x18ab90u: goto label_18ab90;
        case 0x18ab94u: goto label_18ab94;
        case 0x18ab98u: goto label_18ab98;
        case 0x18ab9cu: goto label_18ab9c;
        case 0x18aba0u: goto label_18aba0;
        case 0x18aba4u: goto label_18aba4;
        case 0x18aba8u: goto label_18aba8;
        case 0x18abacu: goto label_18abac;
        case 0x18abb0u: goto label_18abb0;
        case 0x18abb4u: goto label_18abb4;
        case 0x18abb8u: goto label_18abb8;
        case 0x18abbcu: goto label_18abbc;
        case 0x18abc0u: goto label_18abc0;
        case 0x18abc4u: goto label_18abc4;
        case 0x18abc8u: goto label_18abc8;
        case 0x18abccu: goto label_18abcc;
        case 0x18abd0u: goto label_18abd0;
        case 0x18abd4u: goto label_18abd4;
        case 0x18abd8u: goto label_18abd8;
        case 0x18abdcu: goto label_18abdc;
        case 0x18abe0u: goto label_18abe0;
        case 0x18abe4u: goto label_18abe4;
        case 0x18abe8u: goto label_18abe8;
        case 0x18abecu: goto label_18abec;
        case 0x18abf0u: goto label_18abf0;
        case 0x18abf4u: goto label_18abf4;
        case 0x18abf8u: goto label_18abf8;
        case 0x18abfcu: goto label_18abfc;
        case 0x18ac00u: goto label_18ac00;
        case 0x18ac04u: goto label_18ac04;
        case 0x18ac08u: goto label_18ac08;
        case 0x18ac0cu: goto label_18ac0c;
        case 0x18ac10u: goto label_18ac10;
        case 0x18ac14u: goto label_18ac14;
        case 0x18ac18u: goto label_18ac18;
        case 0x18ac1cu: goto label_18ac1c;
        case 0x18ac20u: goto label_18ac20;
        case 0x18ac24u: goto label_18ac24;
        case 0x18ac28u: goto label_18ac28;
        case 0x18ac2cu: goto label_18ac2c;
        case 0x18ac30u: goto label_18ac30;
        case 0x18ac34u: goto label_18ac34;
        case 0x18ac38u: goto label_18ac38;
        case 0x18ac3cu: goto label_18ac3c;
        case 0x18ac40u: goto label_18ac40;
        case 0x18ac44u: goto label_18ac44;
        case 0x18ac48u: goto label_18ac48;
        case 0x18ac4cu: goto label_18ac4c;
        case 0x18ac50u: goto label_18ac50;
        case 0x18ac54u: goto label_18ac54;
        case 0x18ac58u: goto label_18ac58;
        case 0x18ac5cu: goto label_18ac5c;
        case 0x18ac60u: goto label_18ac60;
        case 0x18ac64u: goto label_18ac64;
        case 0x18ac68u: goto label_18ac68;
        case 0x18ac6cu: goto label_18ac6c;
        case 0x18ac70u: goto label_18ac70;
        case 0x18ac74u: goto label_18ac74;
        case 0x18ac78u: goto label_18ac78;
        case 0x18ac7cu: goto label_18ac7c;
        case 0x18ac80u: goto label_18ac80;
        case 0x18ac84u: goto label_18ac84;
        case 0x18ac88u: goto label_18ac88;
        case 0x18ac8cu: goto label_18ac8c;
        case 0x18ac90u: goto label_18ac90;
        case 0x18ac94u: goto label_18ac94;
        case 0x18ac98u: goto label_18ac98;
        case 0x18ac9cu: goto label_18ac9c;
        case 0x18aca0u: goto label_18aca0;
        case 0x18aca4u: goto label_18aca4;
        case 0x18aca8u: goto label_18aca8;
        case 0x18acacu: goto label_18acac;
        case 0x18acb0u: goto label_18acb0;
        case 0x18acb4u: goto label_18acb4;
        case 0x18acb8u: goto label_18acb8;
        case 0x18acbcu: goto label_18acbc;
        case 0x18acc0u: goto label_18acc0;
        case 0x18acc4u: goto label_18acc4;
        case 0x18acc8u: goto label_18acc8;
        case 0x18acccu: goto label_18accc;
        case 0x18acd0u: goto label_18acd0;
        case 0x18acd4u: goto label_18acd4;
        case 0x18acd8u: goto label_18acd8;
        case 0x18acdcu: goto label_18acdc;
        case 0x18ace0u: goto label_18ace0;
        case 0x18ace4u: goto label_18ace4;
        case 0x18ace8u: goto label_18ace8;
        case 0x18acecu: goto label_18acec;
        case 0x18acf0u: goto label_18acf0;
        case 0x18acf4u: goto label_18acf4;
        case 0x18acf8u: goto label_18acf8;
        case 0x18acfcu: goto label_18acfc;
        case 0x18ad00u: goto label_18ad00;
        case 0x18ad04u: goto label_18ad04;
        case 0x18ad08u: goto label_18ad08;
        case 0x18ad0cu: goto label_18ad0c;
        case 0x18ad10u: goto label_18ad10;
        case 0x18ad14u: goto label_18ad14;
        case 0x18ad18u: goto label_18ad18;
        case 0x18ad1cu: goto label_18ad1c;
        case 0x18ad20u: goto label_18ad20;
        case 0x18ad24u: goto label_18ad24;
        case 0x18ad28u: goto label_18ad28;
        case 0x18ad2cu: goto label_18ad2c;
        case 0x18ad30u: goto label_18ad30;
        case 0x18ad34u: goto label_18ad34;
        case 0x18ad38u: goto label_18ad38;
        case 0x18ad3cu: goto label_18ad3c;
        case 0x18ad40u: goto label_18ad40;
        case 0x18ad44u: goto label_18ad44;
        case 0x18ad48u: goto label_18ad48;
        case 0x18ad4cu: goto label_18ad4c;
        case 0x18ad50u: goto label_18ad50;
        case 0x18ad54u: goto label_18ad54;
        case 0x18ad58u: goto label_18ad58;
        case 0x18ad5cu: goto label_18ad5c;
        case 0x18ad60u: goto label_18ad60;
        case 0x18ad64u: goto label_18ad64;
        case 0x18ad68u: goto label_18ad68;
        case 0x18ad6cu: goto label_18ad6c;
        case 0x18ad70u: goto label_18ad70;
        case 0x18ad74u: goto label_18ad74;
        case 0x18ad78u: goto label_18ad78;
        case 0x18ad7cu: goto label_18ad7c;
        case 0x18ad80u: goto label_18ad80;
        case 0x18ad84u: goto label_18ad84;
        case 0x18ad88u: goto label_18ad88;
        case 0x18ad8cu: goto label_18ad8c;
        case 0x18ad90u: goto label_18ad90;
        case 0x18ad94u: goto label_18ad94;
        case 0x18ad98u: goto label_18ad98;
        case 0x18ad9cu: goto label_18ad9c;
        case 0x18ada0u: goto label_18ada0;
        case 0x18ada4u: goto label_18ada4;
        case 0x18ada8u: goto label_18ada8;
        case 0x18adacu: goto label_18adac;
        case 0x18adb0u: goto label_18adb0;
        case 0x18adb4u: goto label_18adb4;
        case 0x18adb8u: goto label_18adb8;
        case 0x18adbcu: goto label_18adbc;
        case 0x18adc0u: goto label_18adc0;
        case 0x18adc4u: goto label_18adc4;
        case 0x18adc8u: goto label_18adc8;
        case 0x18adccu: goto label_18adcc;
        case 0x18add0u: goto label_18add0;
        case 0x18add4u: goto label_18add4;
        case 0x18add8u: goto label_18add8;
        case 0x18addcu: goto label_18addc;
        case 0x18ade0u: goto label_18ade0;
        case 0x18ade4u: goto label_18ade4;
        case 0x18ade8u: goto label_18ade8;
        case 0x18adecu: goto label_18adec;
        case 0x18adf0u: goto label_18adf0;
        case 0x18adf4u: goto label_18adf4;
        case 0x18adf8u: goto label_18adf8;
        case 0x18adfcu: goto label_18adfc;
        case 0x18ae00u: goto label_18ae00;
        case 0x18ae04u: goto label_18ae04;
        case 0x18ae08u: goto label_18ae08;
        case 0x18ae0cu: goto label_18ae0c;
        case 0x18ae10u: goto label_18ae10;
        case 0x18ae14u: goto label_18ae14;
        case 0x18ae18u: goto label_18ae18;
        case 0x18ae1cu: goto label_18ae1c;
        case 0x18ae20u: goto label_18ae20;
        case 0x18ae24u: goto label_18ae24;
        case 0x18ae28u: goto label_18ae28;
        case 0x18ae2cu: goto label_18ae2c;
        case 0x18ae30u: goto label_18ae30;
        case 0x18ae34u: goto label_18ae34;
        case 0x18ae38u: goto label_18ae38;
        case 0x18ae3cu: goto label_18ae3c;
        case 0x18ae40u: goto label_18ae40;
        case 0x18ae44u: goto label_18ae44;
        case 0x18ae48u: goto label_18ae48;
        case 0x18ae4cu: goto label_18ae4c;
        case 0x18ae50u: goto label_18ae50;
        case 0x18ae54u: goto label_18ae54;
        case 0x18ae58u: goto label_18ae58;
        case 0x18ae5cu: goto label_18ae5c;
        case 0x18ae60u: goto label_18ae60;
        case 0x18ae64u: goto label_18ae64;
        case 0x18ae68u: goto label_18ae68;
        case 0x18ae6cu: goto label_18ae6c;
        case 0x18ae70u: goto label_18ae70;
        case 0x18ae74u: goto label_18ae74;
        case 0x18ae78u: goto label_18ae78;
        case 0x18ae7cu: goto label_18ae7c;
        case 0x18ae80u: goto label_18ae80;
        case 0x18ae84u: goto label_18ae84;
        case 0x18ae88u: goto label_18ae88;
        case 0x18ae8cu: goto label_18ae8c;
        case 0x18ae90u: goto label_18ae90;
        case 0x18ae94u: goto label_18ae94;
        case 0x18ae98u: goto label_18ae98;
        case 0x18ae9cu: goto label_18ae9c;
        case 0x18aea0u: goto label_18aea0;
        case 0x18aea4u: goto label_18aea4;
        case 0x18aea8u: goto label_18aea8;
        case 0x18aeacu: goto label_18aeac;
        case 0x18aeb0u: goto label_18aeb0;
        case 0x18aeb4u: goto label_18aeb4;
        case 0x18aeb8u: goto label_18aeb8;
        case 0x18aebcu: goto label_18aebc;
        case 0x18aec0u: goto label_18aec0;
        case 0x18aec4u: goto label_18aec4;
        case 0x18aec8u: goto label_18aec8;
        case 0x18aeccu: goto label_18aecc;
        default: return;
    }

label_18a700:
    // 0x18a700: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18a700u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_18a704:
    // 0x18a704: 0xa643019c  sh          $v1, 0x19C($s2)
    ctx->pc = 0x18a704u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 412), (uint16_t)GPR_U32(ctx, 3));
label_18a708:
    // 0x18a708: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x18a708u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_18a70c:
    // 0x18a70c: 0x100000b4  b           . + 4 + (0xB4 << 2)
label_18a710:
    if (ctx->pc == 0x18A710u) {
        ctx->pc = 0x18A710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A70Cu;
        // 0x18a710: 0xa643019e  sh          $v1, 0x19E($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 414), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A714u;
        goto label_18a714;
    }
    ctx->pc = 0x18A70Cu;
    {
        const bool branch_taken_0x18a70c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A70Cu;
        // 0x18a710: 0xa643019e  sh          $v1, 0x19E($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 414), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a70c) {
            ctx->pc = 0x18A9E0u;
            goto label_18a9e0;
        }
    }
    ctx->pc = 0x18A714u;
label_18a714:
    // 0x18a714: 0xc08f0cc  jal         func_23C330
label_18a718:
    if (ctx->pc == 0x18A718u) {
        ctx->pc = 0x18A71Cu;
        goto label_18a71c;
    }
    ctx->pc = 0x18A714u;
    SET_GPR_U32(ctx, 31, 0x18A71Cu);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x18A71Cu;
label_18a71c:
    // 0x18a71c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18a71cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18a720:
    // 0x18a720: 0x0  nop
    ctx->pc = 0x18a720u;
    // NOP
label_18a724:
    // 0x18a724: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18a724u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_18a728:
    // 0x18a728: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x18a728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_18a72c:
    // 0x18a72c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18a72cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18a730:
    // 0x18a730: 0x0  nop
    ctx->pc = 0x18a730u;
    // NOP
label_18a734:
    // 0x18a734: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x18a734u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_18a738:
    // 0x18a738: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x18a738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_18a73c:
    // 0x18a73c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18a73cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18a740:
    // 0x18a740: 0x0  nop
    ctx->pc = 0x18a740u;
    // NOP
label_18a744:
    // 0x18a744: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x18a744u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_18a748:
    // 0x18a748: 0x0  nop
    ctx->pc = 0x18a748u;
    // NOP
label_18a74c:
    // 0x18a74c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18a74cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_18a750:
    // 0x18a750: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x18a750u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_18a754:
    // 0x18a754: 0x0  nop
    ctx->pc = 0x18a754u;
    // NOP
label_18a758:
    // 0x18a758: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_18a75c:
    if (ctx->pc == 0x18A75Cu) {
        ctx->pc = 0x18A75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A758u;
        // 0x18a75c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A760u;
        goto label_18a760;
    }
    ctx->pc = 0x18A758u;
    {
        const bool branch_taken_0x18a758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A758u;
        // 0x18a75c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a758) {
            ctx->pc = 0x18A764u;
            goto label_18a764;
        }
    }
    ctx->pc = 0x18A760u;
label_18a760:
    // 0x18a760: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x18a760u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18a764:
    // 0x18a764: 0x9243023f  lbu         $v1, 0x23F($s2)
    ctx->pc = 0x18a764u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 575)));
label_18a768:
    // 0x18a768: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18a768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18a76c:
    // 0x18a76c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_18a770:
    if (ctx->pc == 0x18A770u) {
        ctx->pc = 0x18A770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A76Cu;
        // 0x18a770: 0x24110016  addiu       $s1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A774u;
        goto label_18a774;
    }
    ctx->pc = 0x18A76Cu;
    {
        const bool branch_taken_0x18a76c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x18A770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A76Cu;
        // 0x18a770: 0x24110016  addiu       $s1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a76c) {
            ctx->pc = 0x18A778u;
            goto label_18a778;
        }
    }
    ctx->pc = 0x18A774u;
label_18a774:
    // 0x18a774: 0x24110026  addiu       $s1, $zero, 0x26
    ctx->pc = 0x18a774u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_18a778:
    // 0x18a778: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_18a77c:
    if (ctx->pc == 0x18A77Cu) {
        ctx->pc = 0x18A780u;
        goto label_18a780;
    }
    ctx->pc = 0x18A778u;
    {
        const bool branch_taken_0x18a778 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a778) {
            ctx->pc = 0x18A798u;
            goto label_18a798;
        }
    }
    ctx->pc = 0x18A780u;
label_18a780:
    // 0x18a780: 0xc6410044  lwc1        $f1, 0x44($s2)
    ctx->pc = 0x18a780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18a784:
    // 0x18a784: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x18a784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
label_18a788:
    // 0x18a788: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18a788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18a78c:
    // 0x18a78c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18a78cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18a790:
    // 0x18a790: 0x10000007  b           . + 4 + (0x7 << 2)
label_18a794:
    if (ctx->pc == 0x18A794u) {
        ctx->pc = 0x18A794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A790u;
        // 0x18a794: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A798u;
        goto label_18a798;
    }
    ctx->pc = 0x18A790u;
    {
        const bool branch_taken_0x18a790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A790u;
        // 0x18a794: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a790) {
            ctx->pc = 0x18A7B0u;
            goto label_18a7b0;
        }
    }
    ctx->pc = 0x18A798u;
label_18a798:
    // 0x18a798: 0xc6410044  lwc1        $f1, 0x44($s2)
    ctx->pc = 0x18a798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18a79c:
    // 0x18a79c: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x18a79cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
label_18a7a0:
    // 0x18a7a0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18a7a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18a7a4:
    // 0x18a7a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18a7a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18a7a8:
    // 0x18a7a8: 0x0  nop
    ctx->pc = 0x18a7a8u;
    // NOP
label_18a7ac:
    // 0x18a7ac: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18a7acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_18a7b0:
    // 0x18a7b0: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x18a7b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_18a7b4:
    // 0x18a7b4: 0x48a90800  qmtc2.ni    $t1, $vf1
    ctx->pc = 0x18a7b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
label_18a7b8:
    // 0x18a7b8: 0x4a000138  vcallms     0x20
    ctx->pc = 0x18a7b8u;
    {     ctx->vu0_tpc = 0x20;     runtime->executeVU0Microprogram(rdram, ctx, 0x20); }
label_18a7bc:
    // 0x18a7bc: 0x48290801  qmfc2.i     $t1, $vf1
    ctx->pc = 0x18a7bcu;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[1]));
label_18a7c0:
    // 0x18a7c0: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x18a7c0u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18a7c4:
    // 0x18a7c4: 0x48291000  qmfc2.ni    $t1, $vf2
    ctx->pc = 0x18a7c4u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[2]));
label_18a7c8:
    // 0x18a7c8: 0x44891800  mtc1        $t1, $f3
    ctx->pc = 0x18a7c8u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_18a7cc:
    // 0x18a7cc: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x18a7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_18a7d0:
    // 0x18a7d0: 0x26440150  addiu       $a0, $s2, 0x150
    ctx->pc = 0x18a7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
label_18a7d4:
    // 0x18a7d4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x18a7d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_18a7d8:
    // 0x18a7d8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x18a7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_18a7dc:
    // 0x18a7dc: 0xc6410150  lwc1        $f1, 0x150($s2)
    ctx->pc = 0x18a7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18a7e0:
    // 0x18a7e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18a7e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18a7e4:
    // 0x18a7e4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x18a7e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_18a7e8:
    // 0x18a7e8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x18a7e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_18a7ec:
    // 0x18a7ec: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x18a7ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_18a7f0:
    // 0x18a7f0: 0xc6410158  lwc1        $f1, 0x158($s2)
    ctx->pc = 0x18a7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18a7f4:
    // 0x18a7f4: 0x46031002  mul.s       $f0, $f2, $f3
    ctx->pc = 0x18a7f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_18a7f8:
    // 0x18a7f8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18a7f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_18a7fc:
    // 0x18a7fc: 0xc042484  jal         func_109210
label_18a800:
    if (ctx->pc == 0x18A800u) {
        ctx->pc = 0x18A800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A7FCu;
        // 0x18a800: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A804u;
        goto label_18a804;
    }
    ctx->pc = 0x18A7FCu;
    SET_GPR_U32(ctx, 31, 0x18A804u);
    ctx->pc = 0x18A800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A7FCu;
    // 0x18a800: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x109210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109210u, 0x18A7FCu, 0x18A804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A804u;
label_18a804:
    // 0x18a804: 0x2221824  and         $v1, $s1, $v0
    ctx->pc = 0x18a804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
label_18a808:
    // 0x18a808: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
label_18a80c:
    if (ctx->pc == 0x18A80Cu) {
        ctx->pc = 0x18A810u;
        goto label_18a810;
    }
    ctx->pc = 0x18A808u;
    {
        const bool branch_taken_0x18a808 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a808) {
            ctx->pc = 0x18A84Cu;
            goto label_18a84c;
        }
    }
    ctx->pc = 0x18A810u;
label_18a810:
    // 0x18a810: 0x92430231  lbu         $v1, 0x231($s2)
    ctx->pc = 0x18a810u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 561)));
label_18a814:
    // 0x18a814: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x18a814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_18a818:
    // 0x18a818: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_18a81c:
    if (ctx->pc == 0x18A81Cu) {
        ctx->pc = 0x18A81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A818u;
        // 0x18a81c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A820u;
        goto label_18a820;
    }
    ctx->pc = 0x18A818u;
    {
        const bool branch_taken_0x18a818 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x18A81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A818u;
        // 0x18a81c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a818) {
            ctx->pc = 0x18A838u;
            goto label_18a838;
        }
    }
    ctx->pc = 0x18A820u;
label_18a820:
    // 0x18a820: 0x92420246  lbu         $v0, 0x246($s2)
    ctx->pc = 0x18a820u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 582)));
label_18a824:
    // 0x18a824: 0x28420007  slti        $v0, $v0, 0x7
    ctx->pc = 0x18a824u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)7) ? 1 : 0);
label_18a828:
    // 0x18a828: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_18a82c:
    if (ctx->pc == 0x18A82Cu) {
        ctx->pc = 0x18A82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A828u;
        // 0x18a82c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A830u;
        goto label_18a830;
    }
    ctx->pc = 0x18A828u;
    {
        const bool branch_taken_0x18a828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A828u;
        // 0x18a82c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a828) {
            ctx->pc = 0x18A838u;
            goto label_18a838;
        }
    }
    ctx->pc = 0x18A830u;
label_18a830:
    // 0x18a830: 0x10000001  b           . + 4 + (0x1 << 2)
label_18a834:
    if (ctx->pc == 0x18A834u) {
        ctx->pc = 0x18A834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A830u;
        // 0x18a834: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A838u;
        goto label_18a838;
    }
    ctx->pc = 0x18A830u;
    {
        const bool branch_taken_0x18a830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A830u;
        // 0x18a834: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a830) {
            ctx->pc = 0x18A838u;
            goto label_18a838;
        }
    }
    ctx->pc = 0x18A838u;
label_18a838:
    // 0x18a838: 0x26440150  addiu       $a0, $s2, 0x150
    ctx->pc = 0x18a838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
label_18a83c:
    // 0x18a83c: 0xc04259c  jal         func_109670
label_18a840:
    if (ctx->pc == 0x18A840u) {
        ctx->pc = 0x18A840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A83Cu;
        // 0x18a840: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A844u;
        goto label_18a844;
    }
    ctx->pc = 0x18A83Cu;
    SET_GPR_U32(ctx, 31, 0x18A844u);
    ctx->pc = 0x18A840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A83Cu;
    // 0x18a840: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109670u, 0x18A83Cu, 0x18A844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A844u;
label_18a844:
    // 0x18a844: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
label_18a848:
    if (ctx->pc == 0x18A848u) {
        ctx->pc = 0x18A84Cu;
        goto label_18a84c;
    }
    ctx->pc = 0x18A844u;
    {
        const bool branch_taken_0x18a844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a844) {
            ctx->pc = 0x18A918u;
            goto label_18a918;
        }
    }
    ctx->pc = 0x18A84Cu;
label_18a84c:
    // 0x18a84c: 0xc6410260  lwc1        $f1, 0x260($s2)
    ctx->pc = 0x18a84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18a850:
    // 0x18a850: 0x3c03481c  lui         $v1, 0x481C
    ctx->pc = 0x18a850u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18460 << 16));
label_18a854:
    // 0x18a854: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x18a854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_18a858:
    // 0x18a858: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18a858u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18a85c:
    // 0x18a85c: 0x0  nop
    ctx->pc = 0x18a85cu;
    // NOP
label_18a860:
    // 0x18a860: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18a860u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18a864:
    // 0x18a864: 0x0  nop
    ctx->pc = 0x18a864u;
    // NOP
label_18a868:
    // 0x18a868: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_18a86c:
    if (ctx->pc == 0x18A86Cu) {
        ctx->pc = 0x18A86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A868u;
        // 0x18a86c: 0x3c033fb2  lui         $v1, 0x3FB2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16306 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A870u;
        goto label_18a870;
    }
    ctx->pc = 0x18A868u;
    {
        const bool branch_taken_0x18a868 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18A86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A868u;
        // 0x18a86c: 0x3c033fb2  lui         $v1, 0x3FB2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16306 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a868) {
            ctx->pc = 0x18A8A4u;
            goto label_18a8a4;
        }
    }
    ctx->pc = 0x18A870u;
label_18a870:
    // 0x18a870: 0x92440237  lbu         $a0, 0x237($s2)
    ctx->pc = 0x18a870u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 567)));
label_18a874:
    // 0x18a874: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x18a874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_18a878:
    // 0x18a878: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
label_18a87c:
    if (ctx->pc == 0x18A87Cu) {
        ctx->pc = 0x18A880u;
        goto label_18a880;
    }
    ctx->pc = 0x18A878u;
    {
        const bool branch_taken_0x18a878 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x18a878) {
            ctx->pc = 0x18A8A0u;
            goto label_18a8a0;
        }
    }
    ctx->pc = 0x18A880u;
label_18a880:
    // 0x18a880: 0x92430232  lbu         $v1, 0x232($s2)
    ctx->pc = 0x18a880u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 562)));
label_18a884:
    // 0x18a884: 0x28610005  slti        $at, $v1, 0x5
    ctx->pc = 0x18a884u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
label_18a888:
    // 0x18a888: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_18a88c:
    if (ctx->pc == 0x18A88Cu) {
        ctx->pc = 0x18A88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A888u;
        // 0x18a88c: 0x3c034006  lui         $v1, 0x4006 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16390 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A890u;
        goto label_18a890;
    }
    ctx->pc = 0x18A888u;
    {
        const bool branch_taken_0x18a888 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A888u;
        // 0x18a88c: 0x3c034006  lui         $v1, 0x4006 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16390 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a888) {
            ctx->pc = 0x18A8A0u;
            goto label_18a8a0;
        }
    }
    ctx->pc = 0x18A890u;
label_18a890:
    // 0x18a890: 0x34630a92  ori         $v1, $v1, 0xA92
    ctx->pc = 0x18a890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2706);
label_18a894:
    // 0x18a894: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x18a894u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18a898:
    // 0x18a898: 0x10000005  b           . + 4 + (0x5 << 2)
label_18a89c:
    if (ctx->pc == 0x18A89Cu) {
        ctx->pc = 0x18A89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A898u;
        // 0x18a89c: 0x3a030001  xori        $v1, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A8A0u;
        goto label_18a8a0;
    }
    ctx->pc = 0x18A898u;
    {
        const bool branch_taken_0x18a898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A898u;
        // 0x18a89c: 0x3a030001  xori        $v1, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a898) {
            ctx->pc = 0x18A8B0u;
            goto label_18a8b0;
        }
    }
    ctx->pc = 0x18A8A0u;
label_18a8a0:
    // 0x18a8a0: 0x3c033fb2  lui         $v1, 0x3FB2
    ctx->pc = 0x18a8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16306 << 16));
label_18a8a4:
    // 0x18a8a4: 0x3463b8c3  ori         $v1, $v1, 0xB8C3
    ctx->pc = 0x18a8a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)47299);
label_18a8a8:
    // 0x18a8a8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x18a8a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18a8ac:
    // 0x18a8ac: 0x3a030001  xori        $v1, $s0, 0x1
    ctx->pc = 0x18a8acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)1);
label_18a8b0:
    // 0x18a8b0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_18a8b4:
    if (ctx->pc == 0x18A8B4u) {
        ctx->pc = 0x18A8B8u;
        goto label_18a8b8;
    }
    ctx->pc = 0x18A8B0u;
    {
        const bool branch_taken_0x18a8b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a8b0) {
            ctx->pc = 0x18A8C4u;
            goto label_18a8c4;
        }
    }
    ctx->pc = 0x18A8B8u;
label_18a8b8:
    // 0x18a8b8: 0xc6400044  lwc1        $f0, 0x44($s2)
    ctx->pc = 0x18a8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18a8bc:
    // 0x18a8bc: 0x10000003  b           . + 4 + (0x3 << 2)
label_18a8c0:
    if (ctx->pc == 0x18A8C0u) {
        ctx->pc = 0x18A8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A8BCu;
        // 0x18a8c0: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A8C4u;
        goto label_18a8c4;
    }
    ctx->pc = 0x18A8BCu;
    {
        const bool branch_taken_0x18a8bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A8BCu;
        // 0x18a8c0: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a8bc) {
            ctx->pc = 0x18A8CCu;
            goto label_18a8cc;
        }
    }
    ctx->pc = 0x18A8C4u;
label_18a8c4:
    // 0x18a8c4: 0xc6400044  lwc1        $f0, 0x44($s2)
    ctx->pc = 0x18a8c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18a8c8:
    // 0x18a8c8: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x18a8c8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_18a8cc:
    // 0x18a8cc: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x18a8ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_18a8d0:
    // 0x18a8d0: 0x48a90800  qmtc2.ni    $t1, $vf1
    ctx->pc = 0x18a8d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
label_18a8d4:
    // 0x18a8d4: 0x4a000138  vcallms     0x20
    ctx->pc = 0x18a8d4u;
    {     ctx->vu0_tpc = 0x20;     runtime->executeVU0Microprogram(rdram, ctx, 0x20); }
label_18a8d8:
    // 0x18a8d8: 0x48290801  qmfc2.i     $t1, $vf1
    ctx->pc = 0x18a8d8u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[1]));
label_18a8dc:
    // 0x18a8dc: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x18a8dcu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18a8e0:
    // 0x18a8e0: 0x48291000  qmfc2.ni    $t1, $vf2
    ctx->pc = 0x18a8e0u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[2]));
label_18a8e4:
    // 0x18a8e4: 0x44891000  mtc1        $t1, $f2
    ctx->pc = 0x18a8e4u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_18a8e8:
    // 0x18a8e8: 0x3c0342fe  lui         $v1, 0x42FE
    ctx->pc = 0x18a8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17150 << 16));
label_18a8ec:
    // 0x18a8ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18a8ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18a8f0:
    // 0x18a8f0: 0x0  nop
    ctx->pc = 0x18a8f0u;
    // NOP
label_18a8f4:
    // 0x18a8f4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x18a8f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_18a8f8:
    // 0x18a8f8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x18a8f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_18a8fc:
    // 0x18a8fc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18a8fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_18a900:
    // 0x18a900: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x18a900u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_18a904:
    // 0x18a904: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18a904u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_18a908:
    // 0x18a908: 0xa643019c  sh          $v1, 0x19C($s2)
    ctx->pc = 0x18a908u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 412), (uint16_t)GPR_U32(ctx, 3));
label_18a90c:
    // 0x18a90c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x18a90cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_18a910:
    // 0x18a910: 0x10000033  b           . + 4 + (0x33 << 2)
label_18a914:
    if (ctx->pc == 0x18A914u) {
        ctx->pc = 0x18A914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A910u;
        // 0x18a914: 0xa643019e  sh          $v1, 0x19E($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 414), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A918u;
        goto label_18a918;
    }
    ctx->pc = 0x18A910u;
    {
        const bool branch_taken_0x18a910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A910u;
        // 0x18a914: 0xa643019e  sh          $v1, 0x19E($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 414), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a910) {
            ctx->pc = 0x18A9E0u;
            goto label_18a9e0;
        }
    }
    ctx->pc = 0x18A918u;
label_18a918:
    // 0x18a918: 0xc6410260  lwc1        $f1, 0x260($s2)
    ctx->pc = 0x18a918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18a91c:
    // 0x18a91c: 0x3c03481c  lui         $v1, 0x481C
    ctx->pc = 0x18a91cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18460 << 16));
label_18a920:
    // 0x18a920: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x18a920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_18a924:
    // 0x18a924: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18a924u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18a928:
    // 0x18a928: 0x0  nop
    ctx->pc = 0x18a928u;
    // NOP
label_18a92c:
    // 0x18a92c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18a92cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18a930:
    // 0x18a930: 0x0  nop
    ctx->pc = 0x18a930u;
    // NOP
label_18a934:
    // 0x18a934: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_18a938:
    if (ctx->pc == 0x18A938u) {
        ctx->pc = 0x18A938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A934u;
        // 0x18a938: 0x3c033fb2  lui         $v1, 0x3FB2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16306 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A93Cu;
        goto label_18a93c;
    }
    ctx->pc = 0x18A934u;
    {
        const bool branch_taken_0x18a934 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18A938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A934u;
        // 0x18a938: 0x3c033fb2  lui         $v1, 0x3FB2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16306 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a934) {
            ctx->pc = 0x18A970u;
            goto label_18a970;
        }
    }
    ctx->pc = 0x18A93Cu;
label_18a93c:
    // 0x18a93c: 0x92440237  lbu         $a0, 0x237($s2)
    ctx->pc = 0x18a93cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 567)));
label_18a940:
    // 0x18a940: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x18a940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_18a944:
    // 0x18a944: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
label_18a948:
    if (ctx->pc == 0x18A948u) {
        ctx->pc = 0x18A94Cu;
        goto label_18a94c;
    }
    ctx->pc = 0x18A944u;
    {
        const bool branch_taken_0x18a944 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x18a944) {
            ctx->pc = 0x18A96Cu;
            goto label_18a96c;
        }
    }
    ctx->pc = 0x18A94Cu;
label_18a94c:
    // 0x18a94c: 0x92430232  lbu         $v1, 0x232($s2)
    ctx->pc = 0x18a94cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 562)));
label_18a950:
    // 0x18a950: 0x28610005  slti        $at, $v1, 0x5
    ctx->pc = 0x18a950u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
label_18a954:
    // 0x18a954: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_18a958:
    if (ctx->pc == 0x18A958u) {
        ctx->pc = 0x18A958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A954u;
        // 0x18a958: 0x3c034006  lui         $v1, 0x4006 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16390 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A95Cu;
        goto label_18a95c;
    }
    ctx->pc = 0x18A954u;
    {
        const bool branch_taken_0x18a954 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A954u;
        // 0x18a958: 0x3c034006  lui         $v1, 0x4006 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16390 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a954) {
            ctx->pc = 0x18A96Cu;
            goto label_18a96c;
        }
    }
    ctx->pc = 0x18A95Cu;
label_18a95c:
    // 0x18a95c: 0x34630a92  ori         $v1, $v1, 0xA92
    ctx->pc = 0x18a95cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2706);
label_18a960:
    // 0x18a960: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x18a960u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18a964:
    // 0x18a964: 0x10000004  b           . + 4 + (0x4 << 2)
label_18a968:
    if (ctx->pc == 0x18A968u) {
        ctx->pc = 0x18A96Cu;
        goto label_18a96c;
    }
    ctx->pc = 0x18A964u;
    {
        const bool branch_taken_0x18a964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a964) {
            ctx->pc = 0x18A978u;
            goto label_18a978;
        }
    }
    ctx->pc = 0x18A96Cu;
label_18a96c:
    // 0x18a96c: 0x3c033fb2  lui         $v1, 0x3FB2
    ctx->pc = 0x18a96cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16306 << 16));
label_18a970:
    // 0x18a970: 0x3463b8c3  ori         $v1, $v1, 0xB8C3
    ctx->pc = 0x18a970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)47299);
label_18a974:
    // 0x18a974: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x18a974u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18a978:
    // 0x18a978: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_18a97c:
    if (ctx->pc == 0x18A97Cu) {
        ctx->pc = 0x18A980u;
        goto label_18a980;
    }
    ctx->pc = 0x18A978u;
    {
        const bool branch_taken_0x18a978 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a978) {
            ctx->pc = 0x18A98Cu;
            goto label_18a98c;
        }
    }
    ctx->pc = 0x18A980u;
label_18a980:
    // 0x18a980: 0xc6400044  lwc1        $f0, 0x44($s2)
    ctx->pc = 0x18a980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18a984:
    // 0x18a984: 0x10000003  b           . + 4 + (0x3 << 2)
label_18a988:
    if (ctx->pc == 0x18A988u) {
        ctx->pc = 0x18A988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A984u;
        // 0x18a988: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A98Cu;
        goto label_18a98c;
    }
    ctx->pc = 0x18A984u;
    {
        const bool branch_taken_0x18a984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A984u;
        // 0x18a988: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a984) {
            ctx->pc = 0x18A994u;
            goto label_18a994;
        }
    }
    ctx->pc = 0x18A98Cu;
label_18a98c:
    // 0x18a98c: 0xc6400044  lwc1        $f0, 0x44($s2)
    ctx->pc = 0x18a98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18a990:
    // 0x18a990: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x18a990u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_18a994:
    // 0x18a994: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x18a994u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_18a998:
    // 0x18a998: 0x48a90800  qmtc2.ni    $t1, $vf1
    ctx->pc = 0x18a998u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
label_18a99c:
    // 0x18a99c: 0x4a000138  vcallms     0x20
    ctx->pc = 0x18a99cu;
    {     ctx->vu0_tpc = 0x20;     runtime->executeVU0Microprogram(rdram, ctx, 0x20); }
label_18a9a0:
    // 0x18a9a0: 0x48290801  qmfc2.i     $t1, $vf1
    ctx->pc = 0x18a9a0u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[1]));
label_18a9a4:
    // 0x18a9a4: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x18a9a4u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18a9a8:
    // 0x18a9a8: 0x48291000  qmfc2.ni    $t1, $vf2
    ctx->pc = 0x18a9a8u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[2]));
label_18a9ac:
    // 0x18a9ac: 0x44891000  mtc1        $t1, $f2
    ctx->pc = 0x18a9acu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_18a9b0:
    // 0x18a9b0: 0x3c0342fe  lui         $v1, 0x42FE
    ctx->pc = 0x18a9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17150 << 16));
label_18a9b4:
    // 0x18a9b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18a9b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18a9b8:
    // 0x18a9b8: 0x0  nop
    ctx->pc = 0x18a9b8u;
    // NOP
label_18a9bc:
    // 0x18a9bc: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x18a9bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_18a9c0:
    // 0x18a9c0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x18a9c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_18a9c4:
    // 0x18a9c4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18a9c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_18a9c8:
    // 0x18a9c8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x18a9c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_18a9cc:
    // 0x18a9cc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18a9ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_18a9d0:
    // 0x18a9d0: 0xa643019c  sh          $v1, 0x19C($s2)
    ctx->pc = 0x18a9d0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 412), (uint16_t)GPR_U32(ctx, 3));
label_18a9d4:
    // 0x18a9d4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x18a9d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_18a9d8:
    // 0x18a9d8: 0x0  nop
    ctx->pc = 0x18a9d8u;
    // NOP
label_18a9dc:
    // 0x18a9dc: 0xa643019e  sh          $v1, 0x19E($s2)
    ctx->pc = 0x18a9dcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 414), (uint16_t)GPR_U32(ctx, 3));
label_18a9e0:
    // 0x18a9e0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x18a9e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_18a9e4:
    // 0x18a9e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18a9e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18a9e8:
    // 0x18a9e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18a9e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18a9ec:
    // 0x18a9ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18a9ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_18a9f0:
    // 0x18a9f0: 0x3e00008  jr          $ra
label_18a9f4:
    if (ctx->pc == 0x18A9F4u) {
        ctx->pc = 0x18A9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A9F0u;
        // 0x18a9f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A9F8u;
        goto label_18a9f8;
    }
    ctx->pc = 0x18A9F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A9F0u;
        // 0x18a9f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A9F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18A9F8u;
label_18a9f8:
    // 0x18a9f8: 0x0  nop
    ctx->pc = 0x18a9f8u;
    // NOP
label_18a9fc:
    // 0x18a9fc: 0x0  nop
    ctx->pc = 0x18a9fcu;
    // NOP
label_18aa00:
    // 0x18aa00: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x18aa00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_18aa04:
    // 0x18aa04: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x18aa04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_18aa08:
    // 0x18aa08: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x18aa08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_18aa0c:
    // 0x18aa0c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x18aa0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_18aa10:
    // 0x18aa10: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x18aa10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_18aa14:
    // 0x18aa14: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x18aa14u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18aa18:
    // 0x18aa18: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x18aa18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_18aa1c:
    // 0x18aa1c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x18aa1cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18aa20:
    // 0x18aa20: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18aa20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_18aa24:
    // 0x18aa24: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18aa24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_18aa28:
    // 0x18aa28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18aa28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_18aa2c:
    // 0x18aa2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18aa2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_18aa30:
    // 0x18aa30: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x18aa30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18aa34:
    // 0x18aa34: 0x90630013  lbu         $v1, 0x13($v1)
    ctx->pc = 0x18aa34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 19)));
label_18aa38:
    // 0x18aa38: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_18aa3c:
    if (ctx->pc == 0x18AA3Cu) {
        ctx->pc = 0x18AA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AA38u;
        // 0x18aa3c: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AA40u;
        goto label_18aa40;
    }
    ctx->pc = 0x18AA38u;
    {
        const bool branch_taken_0x18aa38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x18AA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AA38u;
        // 0x18aa3c: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aa38) {
            ctx->pc = 0x18AA60u;
            goto label_18aa60;
        }
    }
    ctx->pc = 0x18AA40u;
label_18aa40:
    // 0x18aa40: 0x92a30026  lbu         $v1, 0x26($s5)
    ctx->pc = 0x18aa40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 38)));
label_18aa44:
    // 0x18aa44: 0x92a20022  lbu         $v0, 0x22($s5)
    ctx->pc = 0x18aa44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 34)));
label_18aa48:
    // 0x18aa48: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_18aa4c:
    if (ctx->pc == 0x18AA4Cu) {
        ctx->pc = 0x18AA50u;
        goto label_18aa50;
    }
    ctx->pc = 0x18AA48u;
    {
        const bool branch_taken_0x18aa48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18aa48) {
            ctx->pc = 0x18AA60u;
            goto label_18aa60;
        }
    }
    ctx->pc = 0x18AA50u;
label_18aa50:
    // 0x18aa50: 0x92a30027  lbu         $v1, 0x27($s5)
    ctx->pc = 0x18aa50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 39)));
label_18aa54:
    // 0x18aa54: 0x92a20023  lbu         $v0, 0x23($s5)
    ctx->pc = 0x18aa54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 35)));
label_18aa58:
    // 0x18aa58: 0x10620039  beq         $v1, $v0, . + 4 + (0x39 << 2)
label_18aa5c:
    if (ctx->pc == 0x18AA5Cu) {
        ctx->pc = 0x18AA60u;
        goto label_18aa60;
    }
    ctx->pc = 0x18AA58u;
    {
        const bool branch_taken_0x18aa58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18aa58) {
            ctx->pc = 0x18AB40u;
            goto label_18ab40;
        }
    }
    ctx->pc = 0x18AA60u;
label_18aa60:
    // 0x18aa60: 0x9282002d  lbu         $v0, 0x2D($s4)
    ctx->pc = 0x18aa60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 45)));
label_18aa64:
    // 0x18aa64: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x18aa64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18aa68:
    // 0x18aa68: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x18aa68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18aa6c:
    // 0x18aa6c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18aa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_18aa70:
    // 0x18aa70: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x18aa70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_18aa74:
    // 0x18aa74: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x18aa74u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18aa78:
    // 0x18aa78: 0x0  nop
    ctx->pc = 0x18aa78u;
    // NOP
label_18aa7c:
    // 0x18aa7c: 0x2931021  addu        $v0, $s4, $s3
    ctx->pc = 0x18aa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
label_18aa80:
    // 0x18aa80: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x18aa80u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18aa84:
    // 0x18aa84: 0x1220002a  beqz        $s1, . + 4 + (0x2A << 2)
label_18aa88:
    if (ctx->pc == 0x18AA88u) {
        ctx->pc = 0x18AA8Cu;
        goto label_18aa8c;
    }
    ctx->pc = 0x18AA84u;
    {
        const bool branch_taken_0x18aa84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x18aa84) {
            ctx->pc = 0x18AB30u;
            goto label_18ab30;
        }
    }
    ctx->pc = 0x18AA8Cu;
label_18aa8c:
    // 0x18aa8c: 0x9222023a  lbu         $v0, 0x23A($s1)
    ctx->pc = 0x18aa8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 570)));
label_18aa90:
    // 0x18aa90: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
label_18aa94:
    if (ctx->pc == 0x18AA94u) {
        ctx->pc = 0x18AA98u;
        goto label_18aa98;
    }
    ctx->pc = 0x18AA90u;
    {
        const bool branch_taken_0x18aa90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18aa90) {
            ctx->pc = 0x18AB30u;
            goto label_18ab30;
        }
    }
    ctx->pc = 0x18AA98u;
label_18aa98:
    // 0x18aa98: 0x9282002d  lbu         $v0, 0x2D($s4)
    ctx->pc = 0x18aa98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 45)));
label_18aa9c:
    // 0x18aa9c: 0x1450000c  bne         $v0, $s0, . + 4 + (0xC << 2)
label_18aaa0:
    if (ctx->pc == 0x18AAA0u) {
        ctx->pc = 0x18AAA4u;
        goto label_18aaa4;
    }
    ctx->pc = 0x18AA9Cu;
    {
        const bool branch_taken_0x18aa9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x18aa9c) {
            ctx->pc = 0x18AAD0u;
            goto label_18aad0;
        }
    }
    ctx->pc = 0x18AAA4u;
label_18aaa4:
    // 0x18aaa4: 0xc6a00014  lwc1        $f0, 0x14($s5)
    ctx->pc = 0x18aaa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18aaa8:
    // 0x18aaa8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18aaa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18aaac:
    // 0x18aaac: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x18aaacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_18aab0:
    // 0x18aab0: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x18aab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_18aab4:
    // 0x18aab4: 0xc6a00018  lwc1        $f0, 0x18($s5)
    ctx->pc = 0x18aab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18aab8:
    // 0x18aab8: 0xc062adc  jal         func_18AB70
label_18aabc:
    if (ctx->pc == 0x18AABCu) {
        ctx->pc = 0x18AABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AAB8u;
        // 0x18aabc: 0xe7a00088  swc1        $f0, 0x88($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AAC0u;
        goto label_18aac0;
    }
    ctx->pc = 0x18AAB8u;
    SET_GPR_U32(ctx, 31, 0x18AAC0u);
    ctx->pc = 0x18AABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AAB8u;
    // 0x18aabc: 0xe7a00088  swc1        $f0, 0x88($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AB70u;
    goto label_18ab70;
    ctx->pc = 0x18AAC0u;
label_18aac0:
    // 0x18aac0: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
label_18aac4:
    if (ctx->pc == 0x18AAC4u) {
        ctx->pc = 0x18AAC8u;
        goto label_18aac8;
    }
    ctx->pc = 0x18AAC0u;
    {
        const bool branch_taken_0x18aac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18aac0) {
            ctx->pc = 0x18AB30u;
            goto label_18ab30;
        }
    }
    ctx->pc = 0x18AAC8u;
label_18aac8:
    // 0x18aac8: 0x1000001d  b           . + 4 + (0x1D << 2)
label_18aacc:
    if (ctx->pc == 0x18AACCu) {
        ctx->pc = 0x18AACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AAC8u;
        // 0x18aacc: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AAD0u;
        goto label_18aad0;
    }
    ctx->pc = 0x18AAC8u;
    {
        const bool branch_taken_0x18aac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AAC8u;
        // 0x18aacc: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aac8) {
            ctx->pc = 0x18AB40u;
            goto label_18ab40;
        }
    }
    ctx->pc = 0x18AAD0u;
label_18aad0:
    // 0x18aad0: 0xc6410150  lwc1        $f1, 0x150($s2)
    ctx->pc = 0x18aad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18aad4:
    // 0x18aad4: 0xc6200150  lwc1        $f0, 0x150($s1)
    ctx->pc = 0x18aad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18aad8:
    // 0x18aad8: 0xc06d448  jal         func_1B5120
label_18aadc:
    if (ctx->pc == 0x18AADCu) {
        ctx->pc = 0x18AADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AAD8u;
        // 0x18aadc: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AAE0u;
        goto label_18aae0;
    }
    ctx->pc = 0x18AAD8u;
    SET_GPR_U32(ctx, 31, 0x18AAE0u);
    ctx->pc = 0x18AADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AAD8u;
    // 0x18aadc: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x18AAE0u;
label_18aae0:
    // 0x18aae0: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x18aae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
label_18aae4:
    // 0x18aae4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18aae4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18aae8:
    // 0x18aae8: 0x0  nop
    ctx->pc = 0x18aae8u;
    // NOP
label_18aaec:
    // 0x18aaec: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x18aaecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18aaf0:
    // 0x18aaf0: 0x0  nop
    ctx->pc = 0x18aaf0u;
    // NOP
label_18aaf4:
    // 0x18aaf4: 0x4500000c  bc1f        . + 4 + (0xC << 2)
label_18aaf8:
    if (ctx->pc == 0x18AAF8u) {
        ctx->pc = 0x18AAFCu;
        goto label_18aafc;
    }
    ctx->pc = 0x18AAF4u;
    {
        const bool branch_taken_0x18aaf4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18aaf4) {
            ctx->pc = 0x18AB28u;
            goto label_18ab28;
        }
    }
    ctx->pc = 0x18AAFCu;
label_18aafc:
    // 0x18aafc: 0xc6200158  lwc1        $f0, 0x158($s1)
    ctx->pc = 0x18aafcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18ab00:
    // 0x18ab00: 0xc6410158  lwc1        $f1, 0x158($s2)
    ctx->pc = 0x18ab00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18ab04:
    // 0x18ab04: 0xc06d448  jal         func_1B5120
label_18ab08:
    if (ctx->pc == 0x18AB08u) {
        ctx->pc = 0x18AB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AB04u;
        // 0x18ab08: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AB0Cu;
        goto label_18ab0c;
    }
    ctx->pc = 0x18AB04u;
    SET_GPR_U32(ctx, 31, 0x18AB0Cu);
    ctx->pc = 0x18AB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AB04u;
    // 0x18ab08: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5120u;
    { ctx->pc = 0x1b5120; return; }
    ctx->pc = 0x18AB0Cu;
label_18ab0c:
    // 0x18ab0c: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x18ab0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
label_18ab10:
    // 0x18ab10: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18ab10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18ab14:
    // 0x18ab14: 0x0  nop
    ctx->pc = 0x18ab14u;
    // NOP
label_18ab18:
    // 0x18ab18: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x18ab18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18ab1c:
    // 0x18ab1c: 0x0  nop
    ctx->pc = 0x18ab1cu;
    // NOP
label_18ab20:
    // 0x18ab20: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_18ab24:
    if (ctx->pc == 0x18AB24u) {
        ctx->pc = 0x18AB28u;
        goto label_18ab28;
    }
    ctx->pc = 0x18AB20u;
    {
        const bool branch_taken_0x18ab20 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18ab20) {
            ctx->pc = 0x18AB30u;
            goto label_18ab30;
        }
    }
    ctx->pc = 0x18AB28u;
label_18ab28:
    // 0x18ab28: 0x10000005  b           . + 4 + (0x5 << 2)
label_18ab2c:
    if (ctx->pc == 0x18AB2Cu) {
        ctx->pc = 0x18AB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AB28u;
        // 0x18ab2c: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AB30u;
        goto label_18ab30;
    }
    ctx->pc = 0x18AB28u;
    {
        const bool branch_taken_0x18ab28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AB28u;
        // 0x18ab2c: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ab28) {
            ctx->pc = 0x18AB40u;
            goto label_18ab40;
        }
    }
    ctx->pc = 0x18AB30u;
label_18ab30:
    // 0x18ab30: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18ab30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_18ab34:
    // 0x18ab34: 0x2a020009  slti        $v0, $s0, 0x9
    ctx->pc = 0x18ab34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
label_18ab38:
    // 0x18ab38: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
label_18ab3c:
    if (ctx->pc == 0x18AB3Cu) {
        ctx->pc = 0x18AB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AB38u;
        // 0x18ab3c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AB40u;
        goto label_18ab40;
    }
    ctx->pc = 0x18AB38u;
    {
        const bool branch_taken_0x18ab38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18AB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AB38u;
        // 0x18ab3c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ab38) {
            ctx->pc = 0x18AA7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18aa7c;
        }
    }
    ctx->pc = 0x18AB40u;
label_18ab40:
    // 0x18ab40: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x18ab40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_18ab44:
    // 0x18ab44: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x18ab44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_18ab48:
    // 0x18ab48: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x18ab48u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_18ab4c:
    // 0x18ab4c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x18ab4cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_18ab50:
    // 0x18ab50: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x18ab50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_18ab54:
    // 0x18ab54: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18ab54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_18ab58:
    // 0x18ab58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18ab58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18ab5c:
    // 0x18ab5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18ab5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18ab60:
    // 0x18ab60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18ab60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_18ab64:
    // 0x18ab64: 0x3e00008  jr          $ra
label_18ab68:
    if (ctx->pc == 0x18AB68u) {
        ctx->pc = 0x18AB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AB64u;
        // 0x18ab68: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AB6Cu;
        goto label_18ab6c;
    }
    ctx->pc = 0x18AB64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18AB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AB64u;
        // 0x18ab68: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18AB64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18AB6Cu;
label_18ab6c:
    // 0x18ab6c: 0x0  nop
    ctx->pc = 0x18ab6cu;
    // NOP
label_18ab70:
    // 0x18ab70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x18ab70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_18ab74:
    // 0x18ab74: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x18ab74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
label_18ab78:
    // 0x18ab78: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x18ab78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_18ab7c:
    // 0x18ab7c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x18ab7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_18ab80:
    // 0x18ab80: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18ab80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_18ab84:
    // 0x18ab84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18ab84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18ab88:
    // 0x18ab88: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x18ab88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_18ab8c:
    // 0x18ab8c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x18ab8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18ab90:
    // 0x18ab90: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x18ab90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_18ab94:
    // 0x18ab94: 0xc4810150  lwc1        $f1, 0x150($a0)
    ctx->pc = 0x18ab94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18ab98:
    // 0x18ab98: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x18ab98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_18ab9c:
    // 0x18ab9c: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x18ab9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_18aba0:
    // 0x18aba0: 0xc4800158  lwc1        $f0, 0x158($a0)
    ctx->pc = 0x18aba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18aba4:
    // 0x18aba4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x18aba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_18aba8:
    // 0x18aba8: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x18aba8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_18abac:
    // 0x18abac: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x18abacu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_18abb0:
    // 0x18abb0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18abb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_18abb4:
    // 0x18abb4: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x18abb4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
label_18abb8:
    // 0x18abb8: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
label_18abbc:
    if (ctx->pc == 0x18ABBCu) {
        ctx->pc = 0x18ABBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ABB8u;
        // 0x18abbc: 0x4600051c  madd.s      $f20, $f0, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18ABC0u;
        goto label_18abc0;
    }
    ctx->pc = 0x18ABB8u;
    {
        const bool branch_taken_0x18abb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18ABBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ABB8u;
        // 0x18abbc: 0x4600051c  madd.s      $f20, $f0, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18abb8) {
            ctx->pc = 0x18AC9Cu;
            goto label_18ac9c;
        }
    }
    ctx->pc = 0x18ABC0u;
label_18abc0:
    // 0x18abc0: 0x92230246  lbu         $v1, 0x246($s1)
    ctx->pc = 0x18abc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 582)));
label_18abc4:
    // 0x18abc4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x18abc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_18abc8:
    // 0x18abc8: 0x1462001c  bne         $v1, $v0, . + 4 + (0x1C << 2)
label_18abcc:
    if (ctx->pc == 0x18ABCCu) {
        ctx->pc = 0x18ABCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ABC8u;
        // 0x18abcc: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS> (Delay Slot)
        { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18ABD0u;
        goto label_18abd0;
    }
    ctx->pc = 0x18ABC8u;
    {
        const bool branch_taken_0x18abc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x18ABCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ABC8u;
        // 0x18abcc: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS> (Delay Slot)
        { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18abc8) {
            ctx->pc = 0x18AC3Cu;
            goto label_18ac3c;
        }
    }
    ctx->pc = 0x18ABD0u;
label_18abd0:
    // 0x18abd0: 0x3c0268db  lui         $v0, 0x68DB
    ctx->pc = 0x18abd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26843 << 16));
label_18abd4:
    // 0x18abd4: 0x34468bad  ori         $a2, $v0, 0x8BAD
    ctx->pc = 0x18abd4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35757);
label_18abd8:
    // 0x18abd8: 0x92220218  lbu         $v0, 0x218($s1)
    ctx->pc = 0x18abd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 536)));
label_18abdc:
    // 0x18abdc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x18abdcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_18abe0:
    // 0x18abe0: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18abe0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_18abe4:
    // 0x18abe4: 0x32fc2  srl         $a1, $v1, 31
    ctx->pc = 0x18abe4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_18abe8:
    // 0x18abe8: 0xc30018  mult        $zero, $a2, $v1
    ctx->pc = 0x18abe8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_18abec:
    // 0x18abec: 0x0  nop
    ctx->pc = 0x18abecu;
    // NOP
label_18abf0:
    // 0x18abf0: 0x0  nop
    ctx->pc = 0x18abf0u;
    // NOP
label_18abf4:
    // 0x18abf4: 0x2010  mfhi        $a0
    ctx->pc = 0x18abf4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_18abf8:
    // 0x18abf8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x18abf8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_18abfc:
    // 0x18abfc: 0x0  nop
    ctx->pc = 0x18abfcu;
    // NOP
label_18ac00:
    // 0x18ac00: 0xc30018  mult        $zero, $a2, $v1
    ctx->pc = 0x18ac00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_18ac04:
    // 0x18ac04: 0x422c3  sra         $a0, $a0, 11
    ctx->pc = 0x18ac04u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 11));
label_18ac08:
    // 0x18ac08: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x18ac08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_18ac0c:
    // 0x18ac0c: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x18ac0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_18ac10:
    // 0x18ac10: 0x1810  mfhi        $v1
    ctx->pc = 0x18ac10u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_18ac14:
    // 0x18ac14: 0x31ac3  sra         $v1, $v1, 11
    ctx->pc = 0x18ac14u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 11));
label_18ac18:
    // 0x18ac18: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18ac18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_18ac1c:
    // 0x18ac1c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x18ac1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_18ac20:
    // 0x18ac20: 0x14620035  bne         $v1, $v0, . + 4 + (0x35 << 2)
label_18ac24:
    if (ctx->pc == 0x18AC24u) {
        ctx->pc = 0x18AC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AC20u;
        // 0x18ac24: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AC28u;
        goto label_18ac28;
    }
    ctx->pc = 0x18AC20u;
    {
        const bool branch_taken_0x18ac20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x18AC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AC20u;
        // 0x18ac24: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ac20) {
            ctx->pc = 0x18ACF8u;
            goto label_18acf8;
        }
    }
    ctx->pc = 0x18AC28u;
label_18ac28:
    // 0x18ac28: 0x92220219  lbu         $v0, 0x219($s1)
    ctx->pc = 0x18ac28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 537)));
label_18ac2c:
    // 0x18ac2c: 0x14a20032  bne         $a1, $v0, . + 4 + (0x32 << 2)
label_18ac30:
    if (ctx->pc == 0x18AC30u) {
        ctx->pc = 0x18AC34u;
        goto label_18ac34;
    }
    ctx->pc = 0x18AC2Cu;
    {
        const bool branch_taken_0x18ac2c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x18ac2c) {
            ctx->pc = 0x18ACF8u;
            goto label_18acf8;
        }
    }
    ctx->pc = 0x18AC34u;
label_18ac34:
    // 0x18ac34: 0x10000030  b           . + 4 + (0x30 << 2)
label_18ac38:
    if (ctx->pc == 0x18AC38u) {
        ctx->pc = 0x18AC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AC34u;
        // 0x18ac38: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AC3Cu;
        goto label_18ac3c;
    }
    ctx->pc = 0x18AC34u;
    {
        const bool branch_taken_0x18ac34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AC34u;
        // 0x18ac38: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ac34) {
            ctx->pc = 0x18ACF8u;
            goto label_18acf8;
        }
    }
    ctx->pc = 0x18AC3Cu;
label_18ac3c:
    // 0x18ac3c: 0xc062ee0  jal         func_18BB80
label_18ac40:
    if (ctx->pc == 0x18AC40u) {
        ctx->pc = 0x18AC44u;
        goto label_18ac44;
    }
    ctx->pc = 0x18AC3Cu;
    SET_GPR_U32(ctx, 31, 0x18AC44u);
    ctx->pc = 0x18BB80u;
    { ctx->pc = 0x18bb80; return; }
    ctx->pc = 0x18AC44u;
label_18ac44:
    // 0x18ac44: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_18ac48:
    if (ctx->pc == 0x18AC48u) {
        ctx->pc = 0x18AC4Cu;
        goto label_18ac4c;
    }
    ctx->pc = 0x18AC44u;
    {
        const bool branch_taken_0x18ac44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ac44) {
            ctx->pc = 0x18AC74u;
            goto label_18ac74;
        }
    }
    ctx->pc = 0x18AC4Cu;
label_18ac4c:
    // 0x18ac4c: 0x3c024599  lui         $v0, 0x4599
    ctx->pc = 0x18ac4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17817 << 16));
label_18ac50:
    // 0x18ac50: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x18ac50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
label_18ac54:
    // 0x18ac54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ac54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18ac58:
    // 0x18ac58: 0x0  nop
    ctx->pc = 0x18ac58u;
    // NOP
label_18ac5c:
    // 0x18ac5c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x18ac5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18ac60:
    // 0x18ac60: 0x0  nop
    ctx->pc = 0x18ac60u;
    // NOP
label_18ac64:
    // 0x18ac64: 0x45000024  bc1f        . + 4 + (0x24 << 2)
label_18ac68:
    if (ctx->pc == 0x18AC68u) {
        ctx->pc = 0x18AC6Cu;
        goto label_18ac6c;
    }
    ctx->pc = 0x18AC64u;
    {
        const bool branch_taken_0x18ac64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18ac64) {
            ctx->pc = 0x18ACF8u;
            goto label_18acf8;
        }
    }
    ctx->pc = 0x18AC6Cu;
label_18ac6c:
    // 0x18ac6c: 0x10000022  b           . + 4 + (0x22 << 2)
label_18ac70:
    if (ctx->pc == 0x18AC70u) {
        ctx->pc = 0x18AC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AC6Cu;
        // 0x18ac70: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AC74u;
        goto label_18ac74;
    }
    ctx->pc = 0x18AC6Cu;
    {
        const bool branch_taken_0x18ac6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AC6Cu;
        // 0x18ac70: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ac6c) {
            ctx->pc = 0x18ACF8u;
            goto label_18acf8;
        }
    }
    ctx->pc = 0x18AC74u;
label_18ac74:
    // 0x18ac74: 0x3c0247af  lui         $v0, 0x47AF
    ctx->pc = 0x18ac74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18351 << 16));
label_18ac78:
    // 0x18ac78: 0x3442c800  ori         $v0, $v0, 0xC800
    ctx->pc = 0x18ac78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51200);
label_18ac7c:
    // 0x18ac7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ac7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18ac80:
    // 0x18ac80: 0x0  nop
    ctx->pc = 0x18ac80u;
    // NOP
label_18ac84:
    // 0x18ac84: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x18ac84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18ac88:
    // 0x18ac88: 0x0  nop
    ctx->pc = 0x18ac88u;
    // NOP
label_18ac8c:
    // 0x18ac8c: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
label_18ac90:
    if (ctx->pc == 0x18AC90u) {
        ctx->pc = 0x18AC94u;
        goto label_18ac94;
    }
    ctx->pc = 0x18AC8Cu;
    {
        const bool branch_taken_0x18ac8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18ac8c) {
            ctx->pc = 0x18ACF8u;
            goto label_18acf8;
        }
    }
    ctx->pc = 0x18AC94u;
label_18ac94:
    // 0x18ac94: 0x10000018  b           . + 4 + (0x18 << 2)
label_18ac98:
    if (ctx->pc == 0x18AC98u) {
        ctx->pc = 0x18AC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AC94u;
        // 0x18ac98: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AC9Cu;
        goto label_18ac9c;
    }
    ctx->pc = 0x18AC94u;
    {
        const bool branch_taken_0x18ac94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AC94u;
        // 0x18ac98: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ac94) {
            ctx->pc = 0x18ACF8u;
            goto label_18acf8;
        }
    }
    ctx->pc = 0x18AC9Cu;
label_18ac9c:
    // 0x18ac9c: 0xc062ee0  jal         func_18BB80
label_18aca0:
    if (ctx->pc == 0x18ACA0u) {
        ctx->pc = 0x18ACA4u;
        goto label_18aca4;
    }
    ctx->pc = 0x18AC9Cu;
    SET_GPR_U32(ctx, 31, 0x18ACA4u);
    ctx->pc = 0x18BB80u;
    { ctx->pc = 0x18bb80; return; }
    ctx->pc = 0x18ACA4u;
label_18aca4:
    // 0x18aca4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_18aca8:
    if (ctx->pc == 0x18ACA8u) {
        ctx->pc = 0x18ACACu;
        goto label_18acac;
    }
    ctx->pc = 0x18ACA4u;
    {
        const bool branch_taken_0x18aca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18aca4) {
            ctx->pc = 0x18ACD4u;
            goto label_18acd4;
        }
    }
    ctx->pc = 0x18ACACu;
label_18acac:
    // 0x18acac: 0x3c024599  lui         $v0, 0x4599
    ctx->pc = 0x18acacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17817 << 16));
label_18acb0:
    // 0x18acb0: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x18acb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
label_18acb4:
    // 0x18acb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18acb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18acb8:
    // 0x18acb8: 0x0  nop
    ctx->pc = 0x18acb8u;
    // NOP
label_18acbc:
    // 0x18acbc: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x18acbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18acc0:
    // 0x18acc0: 0x0  nop
    ctx->pc = 0x18acc0u;
    // NOP
label_18acc4:
    // 0x18acc4: 0x4500000c  bc1f        . + 4 + (0xC << 2)
label_18acc8:
    if (ctx->pc == 0x18ACC8u) {
        ctx->pc = 0x18ACCCu;
        goto label_18accc;
    }
    ctx->pc = 0x18ACC4u;
    {
        const bool branch_taken_0x18acc4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18acc4) {
            ctx->pc = 0x18ACF8u;
            goto label_18acf8;
        }
    }
    ctx->pc = 0x18ACCCu;
label_18accc:
    // 0x18accc: 0x1000000a  b           . + 4 + (0xA << 2)
label_18acd0:
    if (ctx->pc == 0x18ACD0u) {
        ctx->pc = 0x18ACD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ACCCu;
        // 0x18acd0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18ACD4u;
        goto label_18acd4;
    }
    ctx->pc = 0x18ACCCu;
    {
        const bool branch_taken_0x18accc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18ACD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ACCCu;
        // 0x18acd0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18accc) {
            ctx->pc = 0x18ACF8u;
            goto label_18acf8;
        }
    }
    ctx->pc = 0x18ACD4u;
label_18acd4:
    // 0x18acd4: 0x3c02473d  lui         $v0, 0x473D
    ctx->pc = 0x18acd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18237 << 16));
label_18acd8:
    // 0x18acd8: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x18acd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
label_18acdc:
    // 0x18acdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18acdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18ace0:
    // 0x18ace0: 0x0  nop
    ctx->pc = 0x18ace0u;
    // NOP
label_18ace4:
    // 0x18ace4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x18ace4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18ace8:
    // 0x18ace8: 0x0  nop
    ctx->pc = 0x18ace8u;
    // NOP
label_18acec:
    // 0x18acec: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_18acf0:
    if (ctx->pc == 0x18ACF0u) {
        ctx->pc = 0x18ACF4u;
        goto label_18acf4;
    }
    ctx->pc = 0x18ACECu;
    {
        const bool branch_taken_0x18acec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18acec) {
            ctx->pc = 0x18ACF8u;
            goto label_18acf8;
        }
    }
    ctx->pc = 0x18ACF4u;
label_18acf4:
    // 0x18acf4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x18acf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18acf8:
    // 0x18acf8: 0x16000017  bnez        $s0, . + 4 + (0x17 << 2)
label_18acfc:
    if (ctx->pc == 0x18ACFCu) {
        ctx->pc = 0x18ACFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ACF8u;
        // 0x18acfc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AD00u;
        goto label_18ad00;
    }
    ctx->pc = 0x18ACF8u;
    {
        const bool branch_taken_0x18acf8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x18ACFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ACF8u;
        // 0x18acfc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18acf8) {
            ctx->pc = 0x18AD58u;
            goto label_18ad58;
        }
    }
    ctx->pc = 0x18AD00u;
label_18ad00:
    // 0x18ad00: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x18ad00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_18ad04:
    // 0x18ad04: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x18ad04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
label_18ad08:
    // 0x18ad08: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x18ad08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_18ad0c:
    // 0x18ad0c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18ad0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_18ad10:
    // 0x18ad10: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_18ad14:
    if (ctx->pc == 0x18AD14u) {
        ctx->pc = 0x18AD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AD10u;
        // 0x18ad14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AD18u;
        goto label_18ad18;
    }
    ctx->pc = 0x18AD10u;
    {
        const bool branch_taken_0x18ad10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AD10u;
        // 0x18ad14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ad10) {
            ctx->pc = 0x18AD54u;
            goto label_18ad54;
        }
    }
    ctx->pc = 0x18AD18u;
label_18ad18:
    // 0x18ad18: 0xc062ee0  jal         func_18BB80
label_18ad1c:
    if (ctx->pc == 0x18AD1Cu) {
        ctx->pc = 0x18AD20u;
        goto label_18ad20;
    }
    ctx->pc = 0x18AD18u;
    SET_GPR_U32(ctx, 31, 0x18AD20u);
    ctx->pc = 0x18BB80u;
    { ctx->pc = 0x18bb80; return; }
    ctx->pc = 0x18AD20u;
label_18ad20:
    // 0x18ad20: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_18ad24:
    if (ctx->pc == 0x18AD24u) {
        ctx->pc = 0x18AD28u;
        goto label_18ad28;
    }
    ctx->pc = 0x18AD20u;
    {
        const bool branch_taken_0x18ad20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ad20) {
            ctx->pc = 0x18AD54u;
            goto label_18ad54;
        }
    }
    ctx->pc = 0x18AD28u;
label_18ad28:
    // 0x18ad28: 0x3c024974  lui         $v0, 0x4974
    ctx->pc = 0x18ad28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18804 << 16));
label_18ad2c:
    // 0x18ad2c: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x18ad2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
label_18ad30:
    // 0x18ad30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ad30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18ad34:
    // 0x18ad34: 0x0  nop
    ctx->pc = 0x18ad34u;
    // NOP
label_18ad38:
    // 0x18ad38: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x18ad38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18ad3c:
    // 0x18ad3c: 0x0  nop
    ctx->pc = 0x18ad3cu;
    // NOP
label_18ad40:
    // 0x18ad40: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_18ad44:
    if (ctx->pc == 0x18AD44u) {
        ctx->pc = 0x18AD48u;
        goto label_18ad48;
    }
    ctx->pc = 0x18AD40u;
    {
        const bool branch_taken_0x18ad40 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18ad40) {
            ctx->pc = 0x18AD54u;
            goto label_18ad54;
        }
    }
    ctx->pc = 0x18AD48u;
label_18ad48:
    // 0x18ad48: 0x8e220194  lw          $v0, 0x194($s1)
    ctx->pc = 0x18ad48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
label_18ad4c:
    // 0x18ad4c: 0x34424010  ori         $v0, $v0, 0x4010
    ctx->pc = 0x18ad4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16400);
label_18ad50:
    // 0x18ad50: 0xae220194  sw          $v0, 0x194($s1)
    ctx->pc = 0x18ad50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 404), GPR_U32(ctx, 2));
label_18ad54:
    // 0x18ad54: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x18ad54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18ad58:
    // 0x18ad58: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x18ad58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_18ad5c:
    // 0x18ad5c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x18ad5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18ad60:
    // 0x18ad60: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x18ad60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_18ad64:
    // 0x18ad64: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18ad64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18ad68:
    // 0x18ad68: 0x3e00008  jr          $ra
label_18ad6c:
    if (ctx->pc == 0x18AD6Cu) {
        ctx->pc = 0x18AD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AD68u;
        // 0x18ad6c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AD70u;
        goto label_18ad70;
    }
    ctx->pc = 0x18AD68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18AD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AD68u;
        // 0x18ad6c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18AD68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18AD70u;
label_18ad70:
    // 0x18ad70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x18ad70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_18ad74:
    // 0x18ad74: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x18ad74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_18ad78:
    // 0x18ad78: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x18ad78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_18ad7c:
    // 0x18ad7c: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x18ad7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_18ad80:
    // 0x18ad80: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x18ad80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_18ad84:
    // 0x18ad84: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18ad84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_18ad88:
    // 0x18ad88: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18ad88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_18ad8c:
    // 0x18ad8c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x18ad8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18ad90:
    // 0x18ad90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18ad90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_18ad94:
    // 0x18ad94: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18ad94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_18ad98:
    // 0x18ad98: 0x9023490c  lbu         $v1, 0x490C($at)
    ctx->pc = 0x18ad98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_18ad9c:
    // 0x18ad9c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_18ada0:
    if (ctx->pc == 0x18ADA0u) {
        ctx->pc = 0x18ADA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AD9Cu;
        // 0x18ada0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18ADA4u;
        goto label_18ada4;
    }
    ctx->pc = 0x18AD9Cu;
    {
        const bool branch_taken_0x18ad9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x18ADA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AD9Cu;
        // 0x18ada0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ad9c) {
            ctx->pc = 0x18ADACu;
            goto label_18adac;
        }
    }
    ctx->pc = 0x18ADA4u;
label_18ada4:
    // 0x18ada4: 0x10000131  b           . + 4 + (0x131 << 2)
label_18ada8:
    if (ctx->pc == 0x18ADA8u) {
        ctx->pc = 0x18ADA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ADA4u;
        // 0x18ada8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18ADACu;
        goto label_18adac;
    }
    ctx->pc = 0x18ADA4u;
    {
        const bool branch_taken_0x18ada4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18ADA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ADA4u;
        // 0x18ada8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ada4) {
            ctx->pc = 0x18B26Cu;
            { ctx->pc = 0x18b26c; return; }
        }
    }
    ctx->pc = 0x18ADACu;
label_18adac:
    // 0x18adac: 0x8664003c  lh          $a0, 0x3C($s3)
    ctx->pc = 0x18adacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 60)));
label_18adb0:
    // 0x18adb0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x18adb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_18adb4:
    // 0x18adb4: 0x1482000c  bne         $a0, $v0, . + 4 + (0xC << 2)
label_18adb8:
    if (ctx->pc == 0x18ADB8u) {
        ctx->pc = 0x18ADBCu;
        goto label_18adbc;
    }
    ctx->pc = 0x18ADB4u;
    {
        const bool branch_taken_0x18adb4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x18adb4) {
            ctx->pc = 0x18ADE8u;
            goto label_18ade8;
        }
    }
    ctx->pc = 0x18ADBCu;
label_18adbc:
    // 0x18adbc: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x18adbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18adc0:
    // 0x18adc0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18adc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18adc4:
    // 0x18adc4: 0x0  nop
    ctx->pc = 0x18adc4u;
    // NOP
label_18adc8:
    // 0x18adc8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18adc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18adcc:
    // 0x18adcc: 0x0  nop
    ctx->pc = 0x18adccu;
    // NOP
label_18add0:
    // 0x18add0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_18add4:
    if (ctx->pc == 0x18ADD4u) {
        ctx->pc = 0x18ADD8u;
        goto label_18add8;
    }
    ctx->pc = 0x18ADD0u;
    {
        const bool branch_taken_0x18add0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18add0) {
            ctx->pc = 0x18ADE8u;
            goto label_18ade8;
        }
    }
    ctx->pc = 0x18ADD8u;
label_18add8:
    // 0x18add8: 0x8e620194  lw          $v0, 0x194($s3)
    ctx->pc = 0x18add8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 404)));
label_18addc:
    // 0x18addc: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x18addcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_18ade0:
    // 0x18ade0: 0x1000010c  b           . + 4 + (0x10C << 2)
label_18ade4:
    if (ctx->pc == 0x18ADE4u) {
        ctx->pc = 0x18ADE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ADE0u;
        // 0x18ade4: 0xae620194  sw          $v0, 0x194($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 404), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18ADE8u;
        goto label_18ade8;
    }
    ctx->pc = 0x18ADE0u;
    {
        const bool branch_taken_0x18ade0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18ADE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ADE0u;
        // 0x18ade4: 0xae620194  sw          $v0, 0x194($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 404), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ade0) {
            ctx->pc = 0x18B214u;
            { ctx->pc = 0x18b214; return; }
        }
    }
    ctx->pc = 0x18ADE8u;
label_18ade8:
    // 0x18ade8: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x18ade8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_18adec:
    // 0x18adec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18adecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18adf0:
    // 0x18adf0: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x18adf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_18adf4:
    // 0x18adf4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_18adf8:
    if (ctx->pc == 0x18ADF8u) {
        ctx->pc = 0x18ADF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ADF4u;
        // 0x18adf8: 0x3c02a640  lui         $v0, 0xA640 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42560 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18ADFCu;
        goto label_18adfc;
    }
    ctx->pc = 0x18ADF4u;
    {
        const bool branch_taken_0x18adf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18ADF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ADF4u;
        // 0x18adf8: 0x3c02a640  lui         $v0, 0xA640 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42560 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18adf4) {
            ctx->pc = 0x18AE20u;
            goto label_18ae20;
        }
    }
    ctx->pc = 0x18ADFCu;
label_18adfc:
    // 0x18adfc: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x18adfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18ae00:
    // 0x18ae00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18ae00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18ae04:
    // 0x18ae04: 0x0  nop
    ctx->pc = 0x18ae04u;
    // NOP
label_18ae08:
    // 0x18ae08: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18ae08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18ae0c:
    // 0x18ae0c: 0x0  nop
    ctx->pc = 0x18ae0cu;
    // NOP
label_18ae10:
    // 0x18ae10: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_18ae14:
    if (ctx->pc == 0x18AE14u) {
        ctx->pc = 0x18AE18u;
        goto label_18ae18;
    }
    ctx->pc = 0x18AE10u;
    {
        const bool branch_taken_0x18ae10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18ae10) {
            ctx->pc = 0x18AE20u;
            goto label_18ae20;
        }
    }
    ctx->pc = 0x18AE18u;
label_18ae18:
    // 0x18ae18: 0x100000fe  b           . + 4 + (0xFE << 2)
label_18ae1c:
    if (ctx->pc == 0x18AE1Cu) {
        ctx->pc = 0x18AE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AE18u;
        // 0x18ae1c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AE20u;
        goto label_18ae20;
    }
    ctx->pc = 0x18AE18u;
    {
        const bool branch_taken_0x18ae18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AE18u;
        // 0x18ae1c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ae18) {
            ctx->pc = 0x18B214u;
            { ctx->pc = 0x18b214; return; }
        }
    }
    ctx->pc = 0x18AE20u;
label_18ae20:
    // 0x18ae20: 0x3442001f  ori         $v0, $v0, 0x1F
    ctx->pc = 0x18ae20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31);
label_18ae24:
    // 0x18ae24: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18ae24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_18ae28:
    // 0x18ae28: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_18ae2c:
    if (ctx->pc == 0x18AE2Cu) {
        ctx->pc = 0x18AE30u;
        goto label_18ae30;
    }
    ctx->pc = 0x18AE28u;
    {
        const bool branch_taken_0x18ae28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ae28) {
            ctx->pc = 0x18AE54u;
            goto label_18ae54;
        }
    }
    ctx->pc = 0x18AE30u;
label_18ae30:
    // 0x18ae30: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x18ae30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_18ae34:
    // 0x18ae34: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
label_18ae38:
    if (ctx->pc == 0x18AE38u) {
        ctx->pc = 0x18AE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AE34u;
        // 0x18ae38: 0x30620800  andi        $v0, $v1, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AE3Cu;
        goto label_18ae3c;
    }
    ctx->pc = 0x18AE34u;
    {
        const bool branch_taken_0x18ae34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x18AE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AE34u;
        // 0x18ae38: 0x30620800  andi        $v0, $v1, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ae34) {
            ctx->pc = 0x18AE58u;
            goto label_18ae58;
        }
    }
    ctx->pc = 0x18AE3Cu;
label_18ae3c:
    // 0x18ae3c: 0x28820096  slti        $v0, $a0, 0x96
    ctx->pc = 0x18ae3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)150) ? 1 : 0);
label_18ae40:
    // 0x18ae40: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_18ae44:
    if (ctx->pc == 0x18AE44u) {
        ctx->pc = 0x18AE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AE40u;
        // 0x18ae44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AE48u;
        goto label_18ae48;
    }
    ctx->pc = 0x18AE40u;
    {
        const bool branch_taken_0x18ae40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18AE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AE40u;
        // 0x18ae44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ae40) {
            ctx->pc = 0x18AE4Cu;
            goto label_18ae4c;
        }
    }
    ctx->pc = 0x18AE48u;
label_18ae48:
    // 0x18ae48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18ae48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18ae4c:
    // 0x18ae4c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_18ae50:
    if (ctx->pc == 0x18AE50u) {
        ctx->pc = 0x18AE54u;
        goto label_18ae54;
    }
    ctx->pc = 0x18AE4Cu;
    {
        const bool branch_taken_0x18ae4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ae4c) {
            ctx->pc = 0x18AE74u;
            goto label_18ae74;
        }
    }
    ctx->pc = 0x18AE54u;
label_18ae54:
    // 0x18ae54: 0x30620800  andi        $v0, $v1, 0x800
    ctx->pc = 0x18ae54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
label_18ae58:
    // 0x18ae58: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_18ae5c:
    if (ctx->pc == 0x18AE5Cu) {
        ctx->pc = 0x18AE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AE58u;
        // 0x18ae5c: 0x24020078  addiu       $v0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AE60u;
        goto label_18ae60;
    }
    ctx->pc = 0x18AE58u;
    {
        const bool branch_taken_0x18ae58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18AE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AE58u;
        // 0x18ae5c: 0x24020078  addiu       $v0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ae58) {
            ctx->pc = 0x18AE74u;
            goto label_18ae74;
        }
    }
    ctx->pc = 0x18AE60u;
label_18ae60:
    // 0x18ae60: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
label_18ae64:
    if (ctx->pc == 0x18AE64u) {
        ctx->pc = 0x18AE68u;
        goto label_18ae68;
    }
    ctx->pc = 0x18AE60u;
    {
        const bool branch_taken_0x18ae60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x18ae60) {
            ctx->pc = 0x18AE74u;
            goto label_18ae74;
        }
    }
    ctx->pc = 0x18AE68u;
label_18ae68:
    // 0x18ae68: 0x24020079  addiu       $v0, $zero, 0x79
    ctx->pc = 0x18ae68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
label_18ae6c:
    // 0x18ae6c: 0x148200e9  bne         $a0, $v0, . + 4 + (0xE9 << 2)
label_18ae70:
    if (ctx->pc == 0x18AE70u) {
        ctx->pc = 0x18AE74u;
        goto label_18ae74;
    }
    ctx->pc = 0x18AE6Cu;
    {
        const bool branch_taken_0x18ae6c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x18ae6c) {
            ctx->pc = 0x18B214u;
            { ctx->pc = 0x18b214; return; }
        }
    }
    ctx->pc = 0x18AE74u;
label_18ae74:
    // 0x18ae74: 0xae600194  sw          $zero, 0x194($s3)
    ctx->pc = 0x18ae74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 404), GPR_U32(ctx, 0));
label_18ae78:
    // 0x18ae78: 0xa6600224  sh          $zero, 0x224($s3)
    ctx->pc = 0x18ae78u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 548), (uint16_t)GPR_U32(ctx, 0));
label_18ae7c:
    // 0x18ae7c: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x18ae7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_18ae80:
    // 0x18ae80: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x18ae80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18ae84:
    // 0x18ae84: 0x30820800  andi        $v0, $a0, 0x800
    ctx->pc = 0x18ae84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2048);
label_18ae88:
    // 0x18ae88: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_18ae8c:
    if (ctx->pc == 0x18AE8Cu) {
        ctx->pc = 0x18AE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AE88u;
        // 0x18ae8c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AE90u;
        goto label_18ae90;
    }
    ctx->pc = 0x18AE88u;
    {
        const bool branch_taken_0x18ae88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AE88u;
        // 0x18ae8c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ae88) {
            ctx->pc = 0x18AF1Cu;
            { ctx->pc = 0x18af1c; return; }
        }
    }
    ctx->pc = 0x18AE90u;
label_18ae90:
    // 0x18ae90: 0x92620233  lbu         $v0, 0x233($s3)
    ctx->pc = 0x18ae90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 563)));
label_18ae94:
    // 0x18ae94: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_18ae98:
    if (ctx->pc == 0x18AE98u) {
        ctx->pc = 0x18AE9Cu;
        goto label_18ae9c;
    }
    ctx->pc = 0x18AE94u;
    {
        const bool branch_taken_0x18ae94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ae94) {
            ctx->pc = 0x18AEB4u;
            goto label_18aeb4;
        }
    }
    ctx->pc = 0x18AE9Cu;
label_18ae9c:
    // 0x18ae9c: 0x92630232  lbu         $v1, 0x232($s3)
    ctx->pc = 0x18ae9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 562)));
label_18aea0:
    // 0x18aea0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x18aea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_18aea4:
    // 0x18aea4: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_18aea8:
    if (ctx->pc == 0x18AEA8u) {
        ctx->pc = 0x18AEACu;
        goto label_18aeac;
    }
    ctx->pc = 0x18AEA4u;
    {
        const bool branch_taken_0x18aea4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18aea4) {
            ctx->pc = 0x18AEB4u;
            goto label_18aeb4;
        }
    }
    ctx->pc = 0x18AEACu;
label_18aeac:
    // 0x18aeac: 0x1000001b  b           . + 4 + (0x1B << 2)
label_18aeb0:
    if (ctx->pc == 0x18AEB0u) {
        ctx->pc = 0x18AEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AEACu;
        // 0x18aeb0: 0xa260023d  sb          $zero, 0x23D($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 573), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AEB4u;
        goto label_18aeb4;
    }
    ctx->pc = 0x18AEACu;
    {
        const bool branch_taken_0x18aeac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AEACu;
        // 0x18aeb0: 0xa260023d  sb          $zero, 0x23D($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 573), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aeac) {
            ctx->pc = 0x18AF1Cu;
            { ctx->pc = 0x18af1c; return; }
        }
    }
    ctx->pc = 0x18AEB4u;
label_18aeb4:
    // 0x18aeb4: 0x92630232  lbu         $v1, 0x232($s3)
    ctx->pc = 0x18aeb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 562)));
label_18aeb8:
    // 0x18aeb8: 0x28610006  slti        $at, $v1, 0x6
    ctx->pc = 0x18aeb8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
label_18aebc:
    // 0x18aebc: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_18aec0:
    if (ctx->pc == 0x18AEC0u) {
        ctx->pc = 0x18AEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AEBCu;
        // 0x18aec0: 0x28610006  slti        $at, $v1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18AEC4u;
        goto label_18aec4;
    }
    ctx->pc = 0x18AEBCu;
    {
        const bool branch_taken_0x18aebc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AEBCu;
        // 0x18aec0: 0x28610006  slti        $at, $v1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aebc) {
            ctx->pc = 0x18AEECu;
            { ctx->pc = 0x18aeec; return; }
        }
    }
    ctx->pc = 0x18AEC4u;
label_18aec4:
    // 0x18aec4: 0x30820020  andi        $v0, $a0, 0x20
    ctx->pc = 0x18aec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
label_18aec8:
    // 0x18aec8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_18aecc:
    if (ctx->pc == 0x18AECCu) {
        ctx->pc = 0x18AED0u;
        { ctx->pc = 0x18aed0; return; }
    }
    ctx->pc = 0x18AEC8u;
    {
        const bool branch_taken_0x18aec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18aec8) {
            ctx->pc = 0x18AEECu;
            { ctx->pc = 0x18aeec; return; }
        }
    }
    ctx->pc = 0x18AED0u;
    ctx->pc = 0x18aed0u;
    return;
}

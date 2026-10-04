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


void FUN_0017d410_part290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x20a5e0u: goto label_20a5e0;
        case 0x20a5e4u: goto label_20a5e4;
        case 0x20a5e8u: goto label_20a5e8;
        case 0x20a5ecu: goto label_20a5ec;
        case 0x20a5f0u: goto label_20a5f0;
        case 0x20a5f4u: goto label_20a5f4;
        case 0x20a5f8u: goto label_20a5f8;
        case 0x20a5fcu: goto label_20a5fc;
        case 0x20a600u: goto label_20a600;
        case 0x20a604u: goto label_20a604;
        case 0x20a608u: goto label_20a608;
        case 0x20a60cu: goto label_20a60c;
        case 0x20a610u: goto label_20a610;
        case 0x20a614u: goto label_20a614;
        case 0x20a618u: goto label_20a618;
        case 0x20a61cu: goto label_20a61c;
        case 0x20a620u: goto label_20a620;
        case 0x20a624u: goto label_20a624;
        case 0x20a628u: goto label_20a628;
        case 0x20a62cu: goto label_20a62c;
        case 0x20a630u: goto label_20a630;
        case 0x20a634u: goto label_20a634;
        case 0x20a638u: goto label_20a638;
        case 0x20a63cu: goto label_20a63c;
        case 0x20a640u: goto label_20a640;
        case 0x20a644u: goto label_20a644;
        case 0x20a648u: goto label_20a648;
        case 0x20a64cu: goto label_20a64c;
        case 0x20a650u: goto label_20a650;
        case 0x20a654u: goto label_20a654;
        case 0x20a658u: goto label_20a658;
        case 0x20a65cu: goto label_20a65c;
        case 0x20a660u: goto label_20a660;
        case 0x20a664u: goto label_20a664;
        case 0x20a668u: goto label_20a668;
        case 0x20a66cu: goto label_20a66c;
        case 0x20a670u: goto label_20a670;
        case 0x20a674u: goto label_20a674;
        case 0x20a678u: goto label_20a678;
        case 0x20a67cu: goto label_20a67c;
        case 0x20a680u: goto label_20a680;
        case 0x20a684u: goto label_20a684;
        case 0x20a688u: goto label_20a688;
        case 0x20a68cu: goto label_20a68c;
        case 0x20a690u: goto label_20a690;
        case 0x20a694u: goto label_20a694;
        case 0x20a698u: goto label_20a698;
        case 0x20a69cu: goto label_20a69c;
        case 0x20a6a0u: goto label_20a6a0;
        case 0x20a6a4u: goto label_20a6a4;
        case 0x20a6a8u: goto label_20a6a8;
        case 0x20a6acu: goto label_20a6ac;
        case 0x20a6b0u: goto label_20a6b0;
        case 0x20a6b4u: goto label_20a6b4;
        case 0x20a6b8u: goto label_20a6b8;
        case 0x20a6bcu: goto label_20a6bc;
        case 0x20a6c0u: goto label_20a6c0;
        case 0x20a6c4u: goto label_20a6c4;
        case 0x20a6c8u: goto label_20a6c8;
        case 0x20a6ccu: goto label_20a6cc;
        case 0x20a6d0u: goto label_20a6d0;
        case 0x20a6d4u: goto label_20a6d4;
        case 0x20a6d8u: goto label_20a6d8;
        case 0x20a6dcu: goto label_20a6dc;
        case 0x20a6e0u: goto label_20a6e0;
        case 0x20a6e4u: goto label_20a6e4;
        case 0x20a6e8u: goto label_20a6e8;
        case 0x20a6ecu: goto label_20a6ec;
        case 0x20a6f0u: goto label_20a6f0;
        case 0x20a6f4u: goto label_20a6f4;
        case 0x20a6f8u: goto label_20a6f8;
        case 0x20a6fcu: goto label_20a6fc;
        case 0x20a700u: goto label_20a700;
        case 0x20a704u: goto label_20a704;
        case 0x20a708u: goto label_20a708;
        case 0x20a70cu: goto label_20a70c;
        case 0x20a710u: goto label_20a710;
        case 0x20a714u: goto label_20a714;
        case 0x20a718u: goto label_20a718;
        case 0x20a71cu: goto label_20a71c;
        case 0x20a720u: goto label_20a720;
        case 0x20a724u: goto label_20a724;
        case 0x20a728u: goto label_20a728;
        case 0x20a72cu: goto label_20a72c;
        case 0x20a730u: goto label_20a730;
        case 0x20a734u: goto label_20a734;
        case 0x20a738u: goto label_20a738;
        case 0x20a73cu: goto label_20a73c;
        case 0x20a740u: goto label_20a740;
        case 0x20a744u: goto label_20a744;
        case 0x20a748u: goto label_20a748;
        case 0x20a74cu: goto label_20a74c;
        case 0x20a750u: goto label_20a750;
        case 0x20a754u: goto label_20a754;
        case 0x20a758u: goto label_20a758;
        case 0x20a75cu: goto label_20a75c;
        case 0x20a760u: goto label_20a760;
        case 0x20a764u: goto label_20a764;
        case 0x20a768u: goto label_20a768;
        case 0x20a76cu: goto label_20a76c;
        case 0x20a770u: goto label_20a770;
        case 0x20a774u: goto label_20a774;
        case 0x20a778u: goto label_20a778;
        case 0x20a77cu: goto label_20a77c;
        case 0x20a780u: goto label_20a780;
        case 0x20a784u: goto label_20a784;
        case 0x20a788u: goto label_20a788;
        case 0x20a78cu: goto label_20a78c;
        case 0x20a790u: goto label_20a790;
        case 0x20a794u: goto label_20a794;
        case 0x20a798u: goto label_20a798;
        case 0x20a79cu: goto label_20a79c;
        case 0x20a7a0u: goto label_20a7a0;
        case 0x20a7a4u: goto label_20a7a4;
        case 0x20a7a8u: goto label_20a7a8;
        case 0x20a7acu: goto label_20a7ac;
        case 0x20a7b0u: goto label_20a7b0;
        case 0x20a7b4u: goto label_20a7b4;
        case 0x20a7b8u: goto label_20a7b8;
        case 0x20a7bcu: goto label_20a7bc;
        case 0x20a7c0u: goto label_20a7c0;
        case 0x20a7c4u: goto label_20a7c4;
        case 0x20a7c8u: goto label_20a7c8;
        case 0x20a7ccu: goto label_20a7cc;
        case 0x20a7d0u: goto label_20a7d0;
        case 0x20a7d4u: goto label_20a7d4;
        case 0x20a7d8u: goto label_20a7d8;
        case 0x20a7dcu: goto label_20a7dc;
        case 0x20a7e0u: goto label_20a7e0;
        case 0x20a7e4u: goto label_20a7e4;
        case 0x20a7e8u: goto label_20a7e8;
        case 0x20a7ecu: goto label_20a7ec;
        case 0x20a7f0u: goto label_20a7f0;
        case 0x20a7f4u: goto label_20a7f4;
        case 0x20a7f8u: goto label_20a7f8;
        case 0x20a7fcu: goto label_20a7fc;
        case 0x20a800u: goto label_20a800;
        case 0x20a804u: goto label_20a804;
        case 0x20a808u: goto label_20a808;
        case 0x20a80cu: goto label_20a80c;
        case 0x20a810u: goto label_20a810;
        case 0x20a814u: goto label_20a814;
        case 0x20a818u: goto label_20a818;
        case 0x20a81cu: goto label_20a81c;
        case 0x20a820u: goto label_20a820;
        case 0x20a824u: goto label_20a824;
        case 0x20a828u: goto label_20a828;
        case 0x20a82cu: goto label_20a82c;
        case 0x20a830u: goto label_20a830;
        case 0x20a834u: goto label_20a834;
        case 0x20a838u: goto label_20a838;
        case 0x20a83cu: goto label_20a83c;
        case 0x20a840u: goto label_20a840;
        case 0x20a844u: goto label_20a844;
        case 0x20a848u: goto label_20a848;
        case 0x20a84cu: goto label_20a84c;
        case 0x20a850u: goto label_20a850;
        case 0x20a854u: goto label_20a854;
        case 0x20a858u: goto label_20a858;
        case 0x20a85cu: goto label_20a85c;
        case 0x20a860u: goto label_20a860;
        case 0x20a864u: goto label_20a864;
        case 0x20a868u: goto label_20a868;
        case 0x20a86cu: goto label_20a86c;
        case 0x20a870u: goto label_20a870;
        case 0x20a874u: goto label_20a874;
        case 0x20a878u: goto label_20a878;
        case 0x20a87cu: goto label_20a87c;
        case 0x20a880u: goto label_20a880;
        case 0x20a884u: goto label_20a884;
        case 0x20a888u: goto label_20a888;
        case 0x20a88cu: goto label_20a88c;
        case 0x20a890u: goto label_20a890;
        case 0x20a894u: goto label_20a894;
        case 0x20a898u: goto label_20a898;
        case 0x20a89cu: goto label_20a89c;
        case 0x20a8a0u: goto label_20a8a0;
        case 0x20a8a4u: goto label_20a8a4;
        case 0x20a8a8u: goto label_20a8a8;
        case 0x20a8acu: goto label_20a8ac;
        case 0x20a8b0u: goto label_20a8b0;
        case 0x20a8b4u: goto label_20a8b4;
        case 0x20a8b8u: goto label_20a8b8;
        case 0x20a8bcu: goto label_20a8bc;
        case 0x20a8c0u: goto label_20a8c0;
        case 0x20a8c4u: goto label_20a8c4;
        case 0x20a8c8u: goto label_20a8c8;
        case 0x20a8ccu: goto label_20a8cc;
        case 0x20a8d0u: goto label_20a8d0;
        case 0x20a8d4u: goto label_20a8d4;
        case 0x20a8d8u: goto label_20a8d8;
        case 0x20a8dcu: goto label_20a8dc;
        case 0x20a8e0u: goto label_20a8e0;
        case 0x20a8e4u: goto label_20a8e4;
        case 0x20a8e8u: goto label_20a8e8;
        case 0x20a8ecu: goto label_20a8ec;
        case 0x20a8f0u: goto label_20a8f0;
        case 0x20a8f4u: goto label_20a8f4;
        case 0x20a8f8u: goto label_20a8f8;
        case 0x20a8fcu: goto label_20a8fc;
        case 0x20a900u: goto label_20a900;
        case 0x20a904u: goto label_20a904;
        case 0x20a908u: goto label_20a908;
        case 0x20a90cu: goto label_20a90c;
        case 0x20a910u: goto label_20a910;
        case 0x20a914u: goto label_20a914;
        case 0x20a918u: goto label_20a918;
        case 0x20a91cu: goto label_20a91c;
        case 0x20a920u: goto label_20a920;
        case 0x20a924u: goto label_20a924;
        case 0x20a928u: goto label_20a928;
        case 0x20a92cu: goto label_20a92c;
        case 0x20a930u: goto label_20a930;
        case 0x20a934u: goto label_20a934;
        case 0x20a938u: goto label_20a938;
        case 0x20a93cu: goto label_20a93c;
        case 0x20a940u: goto label_20a940;
        case 0x20a944u: goto label_20a944;
        case 0x20a948u: goto label_20a948;
        case 0x20a94cu: goto label_20a94c;
        case 0x20a950u: goto label_20a950;
        case 0x20a954u: goto label_20a954;
        case 0x20a958u: goto label_20a958;
        case 0x20a95cu: goto label_20a95c;
        case 0x20a960u: goto label_20a960;
        case 0x20a964u: goto label_20a964;
        case 0x20a968u: goto label_20a968;
        case 0x20a96cu: goto label_20a96c;
        case 0x20a970u: goto label_20a970;
        case 0x20a974u: goto label_20a974;
        case 0x20a978u: goto label_20a978;
        case 0x20a97cu: goto label_20a97c;
        case 0x20a980u: goto label_20a980;
        case 0x20a984u: goto label_20a984;
        case 0x20a988u: goto label_20a988;
        case 0x20a98cu: goto label_20a98c;
        case 0x20a990u: goto label_20a990;
        case 0x20a994u: goto label_20a994;
        case 0x20a998u: goto label_20a998;
        case 0x20a99cu: goto label_20a99c;
        case 0x20a9a0u: goto label_20a9a0;
        case 0x20a9a4u: goto label_20a9a4;
        case 0x20a9a8u: goto label_20a9a8;
        case 0x20a9acu: goto label_20a9ac;
        case 0x20a9b0u: goto label_20a9b0;
        case 0x20a9b4u: goto label_20a9b4;
        case 0x20a9b8u: goto label_20a9b8;
        case 0x20a9bcu: goto label_20a9bc;
        case 0x20a9c0u: goto label_20a9c0;
        case 0x20a9c4u: goto label_20a9c4;
        case 0x20a9c8u: goto label_20a9c8;
        case 0x20a9ccu: goto label_20a9cc;
        case 0x20a9d0u: goto label_20a9d0;
        case 0x20a9d4u: goto label_20a9d4;
        case 0x20a9d8u: goto label_20a9d8;
        case 0x20a9dcu: goto label_20a9dc;
        case 0x20a9e0u: goto label_20a9e0;
        case 0x20a9e4u: goto label_20a9e4;
        case 0x20a9e8u: goto label_20a9e8;
        case 0x20a9ecu: goto label_20a9ec;
        case 0x20a9f0u: goto label_20a9f0;
        case 0x20a9f4u: goto label_20a9f4;
        case 0x20a9f8u: goto label_20a9f8;
        case 0x20a9fcu: goto label_20a9fc;
        case 0x20aa00u: goto label_20aa00;
        case 0x20aa04u: goto label_20aa04;
        case 0x20aa08u: goto label_20aa08;
        case 0x20aa0cu: goto label_20aa0c;
        case 0x20aa10u: goto label_20aa10;
        case 0x20aa14u: goto label_20aa14;
        case 0x20aa18u: goto label_20aa18;
        case 0x20aa1cu: goto label_20aa1c;
        case 0x20aa20u: goto label_20aa20;
        case 0x20aa24u: goto label_20aa24;
        case 0x20aa28u: goto label_20aa28;
        case 0x20aa2cu: goto label_20aa2c;
        case 0x20aa30u: goto label_20aa30;
        case 0x20aa34u: goto label_20aa34;
        case 0x20aa38u: goto label_20aa38;
        case 0x20aa3cu: goto label_20aa3c;
        case 0x20aa40u: goto label_20aa40;
        case 0x20aa44u: goto label_20aa44;
        case 0x20aa48u: goto label_20aa48;
        case 0x20aa4cu: goto label_20aa4c;
        case 0x20aa50u: goto label_20aa50;
        case 0x20aa54u: goto label_20aa54;
        case 0x20aa58u: goto label_20aa58;
        case 0x20aa5cu: goto label_20aa5c;
        case 0x20aa60u: goto label_20aa60;
        case 0x20aa64u: goto label_20aa64;
        case 0x20aa68u: goto label_20aa68;
        case 0x20aa6cu: goto label_20aa6c;
        case 0x20aa70u: goto label_20aa70;
        case 0x20aa74u: goto label_20aa74;
        case 0x20aa78u: goto label_20aa78;
        case 0x20aa7cu: goto label_20aa7c;
        case 0x20aa80u: goto label_20aa80;
        case 0x20aa84u: goto label_20aa84;
        case 0x20aa88u: goto label_20aa88;
        case 0x20aa8cu: goto label_20aa8c;
        case 0x20aa90u: goto label_20aa90;
        case 0x20aa94u: goto label_20aa94;
        case 0x20aa98u: goto label_20aa98;
        case 0x20aa9cu: goto label_20aa9c;
        case 0x20aaa0u: goto label_20aaa0;
        case 0x20aaa4u: goto label_20aaa4;
        case 0x20aaa8u: goto label_20aaa8;
        case 0x20aaacu: goto label_20aaac;
        case 0x20aab0u: goto label_20aab0;
        case 0x20aab4u: goto label_20aab4;
        case 0x20aab8u: goto label_20aab8;
        case 0x20aabcu: goto label_20aabc;
        case 0x20aac0u: goto label_20aac0;
        case 0x20aac4u: goto label_20aac4;
        case 0x20aac8u: goto label_20aac8;
        case 0x20aaccu: goto label_20aacc;
        case 0x20aad0u: goto label_20aad0;
        case 0x20aad4u: goto label_20aad4;
        case 0x20aad8u: goto label_20aad8;
        case 0x20aadcu: goto label_20aadc;
        case 0x20aae0u: goto label_20aae0;
        case 0x20aae4u: goto label_20aae4;
        case 0x20aae8u: goto label_20aae8;
        case 0x20aaecu: goto label_20aaec;
        case 0x20aaf0u: goto label_20aaf0;
        case 0x20aaf4u: goto label_20aaf4;
        case 0x20aaf8u: goto label_20aaf8;
        case 0x20aafcu: goto label_20aafc;
        case 0x20ab00u: goto label_20ab00;
        case 0x20ab04u: goto label_20ab04;
        case 0x20ab08u: goto label_20ab08;
        case 0x20ab0cu: goto label_20ab0c;
        case 0x20ab10u: goto label_20ab10;
        case 0x20ab14u: goto label_20ab14;
        case 0x20ab18u: goto label_20ab18;
        case 0x20ab1cu: goto label_20ab1c;
        case 0x20ab20u: goto label_20ab20;
        case 0x20ab24u: goto label_20ab24;
        case 0x20ab28u: goto label_20ab28;
        case 0x20ab2cu: goto label_20ab2c;
        case 0x20ab30u: goto label_20ab30;
        case 0x20ab34u: goto label_20ab34;
        case 0x20ab38u: goto label_20ab38;
        case 0x20ab3cu: goto label_20ab3c;
        case 0x20ab40u: goto label_20ab40;
        case 0x20ab44u: goto label_20ab44;
        case 0x20ab48u: goto label_20ab48;
        case 0x20ab4cu: goto label_20ab4c;
        case 0x20ab50u: goto label_20ab50;
        case 0x20ab54u: goto label_20ab54;
        case 0x20ab58u: goto label_20ab58;
        case 0x20ab5cu: goto label_20ab5c;
        case 0x20ab60u: goto label_20ab60;
        case 0x20ab64u: goto label_20ab64;
        case 0x20ab68u: goto label_20ab68;
        case 0x20ab6cu: goto label_20ab6c;
        case 0x20ab70u: goto label_20ab70;
        case 0x20ab74u: goto label_20ab74;
        case 0x20ab78u: goto label_20ab78;
        case 0x20ab7cu: goto label_20ab7c;
        case 0x20ab80u: goto label_20ab80;
        case 0x20ab84u: goto label_20ab84;
        case 0x20ab88u: goto label_20ab88;
        case 0x20ab8cu: goto label_20ab8c;
        case 0x20ab90u: goto label_20ab90;
        case 0x20ab94u: goto label_20ab94;
        case 0x20ab98u: goto label_20ab98;
        case 0x20ab9cu: goto label_20ab9c;
        case 0x20aba0u: goto label_20aba0;
        case 0x20aba4u: goto label_20aba4;
        case 0x20aba8u: goto label_20aba8;
        case 0x20abacu: goto label_20abac;
        case 0x20abb0u: goto label_20abb0;
        case 0x20abb4u: goto label_20abb4;
        case 0x20abb8u: goto label_20abb8;
        case 0x20abbcu: goto label_20abbc;
        case 0x20abc0u: goto label_20abc0;
        case 0x20abc4u: goto label_20abc4;
        case 0x20abc8u: goto label_20abc8;
        case 0x20abccu: goto label_20abcc;
        case 0x20abd0u: goto label_20abd0;
        case 0x20abd4u: goto label_20abd4;
        case 0x20abd8u: goto label_20abd8;
        case 0x20abdcu: goto label_20abdc;
        case 0x20abe0u: goto label_20abe0;
        case 0x20abe4u: goto label_20abe4;
        case 0x20abe8u: goto label_20abe8;
        case 0x20abecu: goto label_20abec;
        case 0x20abf0u: goto label_20abf0;
        case 0x20abf4u: goto label_20abf4;
        case 0x20abf8u: goto label_20abf8;
        case 0x20abfcu: goto label_20abfc;
        case 0x20ac00u: goto label_20ac00;
        case 0x20ac04u: goto label_20ac04;
        case 0x20ac08u: goto label_20ac08;
        case 0x20ac0cu: goto label_20ac0c;
        case 0x20ac10u: goto label_20ac10;
        case 0x20ac14u: goto label_20ac14;
        case 0x20ac18u: goto label_20ac18;
        case 0x20ac1cu: goto label_20ac1c;
        case 0x20ac20u: goto label_20ac20;
        case 0x20ac24u: goto label_20ac24;
        case 0x20ac28u: goto label_20ac28;
        case 0x20ac2cu: goto label_20ac2c;
        case 0x20ac30u: goto label_20ac30;
        case 0x20ac34u: goto label_20ac34;
        case 0x20ac38u: goto label_20ac38;
        case 0x20ac3cu: goto label_20ac3c;
        case 0x20ac40u: goto label_20ac40;
        case 0x20ac44u: goto label_20ac44;
        case 0x20ac48u: goto label_20ac48;
        case 0x20ac4cu: goto label_20ac4c;
        case 0x20ac50u: goto label_20ac50;
        case 0x20ac54u: goto label_20ac54;
        case 0x20ac58u: goto label_20ac58;
        case 0x20ac5cu: goto label_20ac5c;
        case 0x20ac60u: goto label_20ac60;
        case 0x20ac64u: goto label_20ac64;
        case 0x20ac68u: goto label_20ac68;
        case 0x20ac6cu: goto label_20ac6c;
        case 0x20ac70u: goto label_20ac70;
        case 0x20ac74u: goto label_20ac74;
        case 0x20ac78u: goto label_20ac78;
        case 0x20ac7cu: goto label_20ac7c;
        case 0x20ac80u: goto label_20ac80;
        case 0x20ac84u: goto label_20ac84;
        case 0x20ac88u: goto label_20ac88;
        case 0x20ac8cu: goto label_20ac8c;
        case 0x20ac90u: goto label_20ac90;
        case 0x20ac94u: goto label_20ac94;
        case 0x20ac98u: goto label_20ac98;
        case 0x20ac9cu: goto label_20ac9c;
        case 0x20aca0u: goto label_20aca0;
        case 0x20aca4u: goto label_20aca4;
        case 0x20aca8u: goto label_20aca8;
        case 0x20acacu: goto label_20acac;
        case 0x20acb0u: goto label_20acb0;
        case 0x20acb4u: goto label_20acb4;
        case 0x20acb8u: goto label_20acb8;
        case 0x20acbcu: goto label_20acbc;
        case 0x20acc0u: goto label_20acc0;
        case 0x20acc4u: goto label_20acc4;
        case 0x20acc8u: goto label_20acc8;
        case 0x20acccu: goto label_20accc;
        case 0x20acd0u: goto label_20acd0;
        case 0x20acd4u: goto label_20acd4;
        case 0x20acd8u: goto label_20acd8;
        case 0x20acdcu: goto label_20acdc;
        case 0x20ace0u: goto label_20ace0;
        case 0x20ace4u: goto label_20ace4;
        case 0x20ace8u: goto label_20ace8;
        case 0x20acecu: goto label_20acec;
        case 0x20acf0u: goto label_20acf0;
        case 0x20acf4u: goto label_20acf4;
        case 0x20acf8u: goto label_20acf8;
        case 0x20acfcu: goto label_20acfc;
        case 0x20ad00u: goto label_20ad00;
        case 0x20ad04u: goto label_20ad04;
        case 0x20ad08u: goto label_20ad08;
        case 0x20ad0cu: goto label_20ad0c;
        case 0x20ad10u: goto label_20ad10;
        case 0x20ad14u: goto label_20ad14;
        case 0x20ad18u: goto label_20ad18;
        case 0x20ad1cu: goto label_20ad1c;
        case 0x20ad20u: goto label_20ad20;
        case 0x20ad24u: goto label_20ad24;
        case 0x20ad28u: goto label_20ad28;
        case 0x20ad2cu: goto label_20ad2c;
        case 0x20ad30u: goto label_20ad30;
        case 0x20ad34u: goto label_20ad34;
        case 0x20ad38u: goto label_20ad38;
        case 0x20ad3cu: goto label_20ad3c;
        case 0x20ad40u: goto label_20ad40;
        case 0x20ad44u: goto label_20ad44;
        case 0x20ad48u: goto label_20ad48;
        case 0x20ad4cu: goto label_20ad4c;
        case 0x20ad50u: goto label_20ad50;
        case 0x20ad54u: goto label_20ad54;
        case 0x20ad58u: goto label_20ad58;
        case 0x20ad5cu: goto label_20ad5c;
        case 0x20ad60u: goto label_20ad60;
        case 0x20ad64u: goto label_20ad64;
        case 0x20ad68u: goto label_20ad68;
        case 0x20ad6cu: goto label_20ad6c;
        case 0x20ad70u: goto label_20ad70;
        case 0x20ad74u: goto label_20ad74;
        case 0x20ad78u: goto label_20ad78;
        case 0x20ad7cu: goto label_20ad7c;
        case 0x20ad80u: goto label_20ad80;
        case 0x20ad84u: goto label_20ad84;
        case 0x20ad88u: goto label_20ad88;
        case 0x20ad8cu: goto label_20ad8c;
        case 0x20ad90u: goto label_20ad90;
        case 0x20ad94u: goto label_20ad94;
        case 0x20ad98u: goto label_20ad98;
        case 0x20ad9cu: goto label_20ad9c;
        case 0x20ada0u: goto label_20ada0;
        case 0x20ada4u: goto label_20ada4;
        case 0x20ada8u: goto label_20ada8;
        case 0x20adacu: goto label_20adac;
        default: return;
    }

label_20a5e0:
    // 0x20a5e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20a5e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20a5e4:
    // 0x20a5e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20a5e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20a5e8:
    // 0x20a5e8: 0xc066c72  jal         func_19B1C8
label_20a5ec:
    if (ctx->pc == 0x20A5ECu) {
        ctx->pc = 0x20A5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A5E8u;
        // 0x20a5ec: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A5F0u;
        goto label_20a5f0;
    }
    ctx->pc = 0x20A5E8u;
    SET_GPR_U32(ctx, 31, 0x20A5F0u);
    ctx->pc = 0x20A5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A5E8u;
    // 0x20a5ec: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x20A5F0u;
label_20a5f0:
    // 0x20a5f0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x20a5f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_20a5f4:
    // 0x20a5f4: 0x2a630005  slti        $v1, $s3, 0x5
    ctx->pc = 0x20a5f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)5) ? 1 : 0);
label_20a5f8:
    // 0x20a5f8: 0x26d60160  addiu       $s6, $s6, 0x160
    ctx->pc = 0x20a5f8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 352));
label_20a5fc:
    // 0x20a5fc: 0x2631003c  addiu       $s1, $s1, 0x3C
    ctx->pc = 0x20a5fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
label_20a600:
    // 0x20a600: 0x1460ff8a  bnez        $v1, . + 4 + (-0x76 << 2)
label_20a604:
    if (ctx->pc == 0x20A604u) {
        ctx->pc = 0x20A604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A600u;
        // 0x20a604: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A608u;
        goto label_20a608;
    }
    ctx->pc = 0x20A600u;
    {
        const bool branch_taken_0x20a600 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20A604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A600u;
        // 0x20a604: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a600) {
            ctx->pc = 0x20A42Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x20a42c; return; }
        }
    }
    ctx->pc = 0x20A608u;
label_20a608:
    // 0x20a608: 0x8f869100  lw          $a2, -0x6F00($gp)
    ctx->pc = 0x20a608u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_20a60c:
    // 0x20a60c: 0x8cc45728  lw          $a0, 0x5728($a2)
    ctx->pc = 0x20a60cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 22312)));
label_20a610:
    // 0x20a610: 0x18800065  blez        $a0, . + 4 + (0x65 << 2)
label_20a614:
    if (ctx->pc == 0x20A614u) {
        ctx->pc = 0x20A618u;
        goto label_20a618;
    }
    ctx->pc = 0x20A610u;
    {
        const bool branch_taken_0x20a610 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x20a610) {
            ctx->pc = 0x20A7A8u;
            goto label_20a7a8;
        }
    }
    ctx->pc = 0x20A618u;
label_20a618:
    // 0x20a618: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x20a618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_20a61c:
    // 0x20a61c: 0x8cc757f0  lw          $a3, 0x57F0($a2)
    ctx->pc = 0x20a61cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 22512)));
label_20a620:
    // 0x20a620: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x20a620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_20a624:
    // 0x20a624: 0x30e50007  andi        $a1, $a3, 0x7
    ctx->pc = 0x20a624u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)7);
label_20a628:
    // 0x20a628: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x20a628u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_20a62c:
    // 0x20a62c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20a62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20a630:
    // 0x20a630: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x20a630u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_20a634:
    // 0x20a634: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20a634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20a638:
    // 0x20a638: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x20a638u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_20a63c:
    // 0x20a63c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x20a63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_20a640:
    // 0x20a640: 0x4e10004  bgez        $a3, . + 4 + (0x4 << 2)
label_20a644:
    if (ctx->pc == 0x20A644u) {
        ctx->pc = 0x20A644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A640u;
        // 0x20a644: 0x24513de0  addiu       $s1, $v0, 0x3DE0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 15840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A648u;
        goto label_20a648;
    }
    ctx->pc = 0x20A640u;
    {
        const bool branch_taken_0x20a640 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x20A644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A640u;
        // 0x20a644: 0x24513de0  addiu       $s1, $v0, 0x3DE0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 15840));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a640) {
            ctx->pc = 0x20A654u;
            goto label_20a654;
        }
    }
    ctx->pc = 0x20A648u;
label_20a648:
    // 0x20a648: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_20a64c:
    if (ctx->pc == 0x20A64Cu) {
        ctx->pc = 0x20A64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A648u;
        // 0x20a64c: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A650u;
        goto label_20a650;
    }
    ctx->pc = 0x20A648u;
    {
        const bool branch_taken_0x20a648 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A648u;
        // 0x20a64c: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a648) {
            ctx->pc = 0x20A658u;
            goto label_20a658;
        }
    }
    ctx->pc = 0x20A650u;
label_20a650:
    // 0x20a650: 0x24a5fff8  addiu       $a1, $a1, -0x8
    ctx->pc = 0x20a650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
label_20a654:
    // 0x20a654: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x20a654u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_20a658:
    // 0x20a658: 0x718c3  sra         $v1, $a3, 3
    ctx->pc = 0x20a658u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 7), 3));
label_20a65c:
    // 0x20a65c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x20a65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_20a660:
    // 0x20a660: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x20a660u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_20a664:
    // 0x20a664: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
label_20a668:
    if (ctx->pc == 0x20A668u) {
        ctx->pc = 0x20A668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A664u;
        // 0x20a668: 0x24450046  addiu       $a1, $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 70));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A66Cu;
        goto label_20a66c;
    }
    ctx->pc = 0x20A664u;
    {
        const bool branch_taken_0x20a664 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x20A668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A664u;
        // 0x20a668: 0x24450046  addiu       $a1, $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a664) {
            ctx->pc = 0x20A674u;
            goto label_20a674;
        }
    }
    ctx->pc = 0x20A66Cu;
label_20a66c:
    // 0x20a66c: 0x24e20007  addiu       $v0, $a3, 0x7
    ctx->pc = 0x20a66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 7));
label_20a670:
    // 0x20a670: 0x218c3  sra         $v1, $v0, 3
    ctx->pc = 0x20a670u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
label_20a674:
    // 0x20a674: 0x8cc957ec  lw          $t1, 0x57EC($a2)
    ctx->pc = 0x20a674u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 22508)));
label_20a678:
    // 0x20a678: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x20a678u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_20a67c:
    // 0x20a67c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x20a67cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20a680:
    // 0x20a680: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x20a680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
label_20a684:
    // 0x20a684: 0x330c0  sll         $a2, $v1, 3
    ctx->pc = 0x20a684u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_20a688:
    // 0x20a688: 0x24c600b5  addiu       $a2, $a2, 0xB5
    ctx->pc = 0x20a688u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 181));
label_20a68c:
    // 0x20a68c: 0x3443aaab  ori         $v1, $v0, 0xAAAB
    ctx->pc = 0x20a68cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
label_20a690:
    // 0x20a690: 0x24c7ff8c  addiu       $a3, $a2, -0x74
    ctx->pc = 0x20a690u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967180));
label_20a694:
    // 0x20a694: 0x3402fe00  ori         $v0, $zero, 0xFE00
    ctx->pc = 0x20a694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_20a698:
    // 0x20a698: 0x70e44018  mult1       $t0, $a3, $a0
    ctx->pc = 0x20a698u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_20a69c:
    // 0x20a69c: 0x43023  negu        $a2, $a0
    ctx->pc = 0x20a69cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_20a6a0:
    // 0x20a6a0: 0x93900  sll         $a3, $t1, 4
    ctx->pc = 0x20a6a0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_20a6a4:
    // 0x20a6a4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x20a6a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_20a6a8:
    // 0x20a6a8: 0xe93823  subu        $a3, $a3, $t1
    ctx->pc = 0x20a6a8u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
label_20a6ac:
    // 0x20a6ac: 0xc43023  subu        $a2, $a2, $a0
    ctx->pc = 0x20a6acu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_20a6b0:
    // 0x20a6b0: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x20a6b0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_20a6b4:
    // 0x20a6b4: 0x84fc2  srl         $t1, $t0, 31
    ctx->pc = 0x20a6b4u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
label_20a6b8:
    // 0x20a6b8: 0x24ec0050  addiu       $t4, $a3, 0x50
    ctx->pc = 0x20a6b8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
label_20a6bc:
    // 0x20a6bc: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x20a6bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_20a6c0:
    // 0x20a6c0: 0xac5023  subu        $t2, $a1, $t4
    ctx->pc = 0x20a6c0u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
label_20a6c4:
    // 0x20a6c4: 0x63fc2  srl         $a3, $a2, 31
    ctx->pc = 0x20a6c4u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
label_20a6c8:
    // 0x20a6c8: 0x8a5018  mult        $t2, $a0, $t2
    ctx->pc = 0x20a6c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_20a6cc:
    // 0x20a6cc: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x20a6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_20a6d0:
    // 0x20a6d0: 0x6a0018  mult        $zero, $v1, $t2
    ctx->pc = 0x20a6d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_20a6d4:
    // 0x20a6d4: 0xa5fc2  srl         $t3, $t2, 31
    ctx->pc = 0x20a6d4u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
label_20a6d8:
    // 0x20a6d8: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x20a6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_20a6dc:
    // 0x20a6dc: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x20a6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_20a6e0:
    // 0x20a6e0: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x20a6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_20a6e4:
    // 0x20a6e4: 0x5010  mfhi        $t2
    ctx->pc = 0x20a6e4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_20a6e8:
    // 0x20a6e8: 0x680018  mult        $zero, $v1, $t0
    ctx->pc = 0x20a6e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_20a6ec:
    // 0x20a6ec: 0xa4043  sra         $t0, $t2, 1
    ctx->pc = 0x20a6ecu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 10), 1));
label_20a6f0:
    // 0x20a6f0: 0x10b4021  addu        $t0, $t0, $t3
    ctx->pc = 0x20a6f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
label_20a6f4:
    // 0x20a6f4: 0x1885021  addu        $t2, $t4, $t0
    ctx->pc = 0x20a6f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
label_20a6f8:
    // 0x20a6f8: 0xa4100  sll         $t0, $t2, 4
    ctx->pc = 0x20a6f8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
label_20a6fc:
    // 0x20a6fc: 0x25086c00  addiu       $t0, $t0, 0x6C00
    ctx->pc = 0x20a6fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 27648));
label_20a700:
    // 0x20a700: 0xa6280090  sh          $t0, 0x90($s1)
    ctx->pc = 0x20a700u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 144), (uint16_t)GPR_U32(ctx, 8));
label_20a704:
    // 0x20a704: 0x4010  mfhi        $t0
    ctx->pc = 0x20a704u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_20a708:
    // 0x20a708: 0x660018  mult        $zero, $v1, $a2
    ctx->pc = 0x20a708u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_20a70c:
    // 0x20a70c: 0x83043  sra         $a2, $t0, 1
    ctx->pc = 0x20a70cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 8), 1));
label_20a710:
    // 0x20a710: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x20a710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_20a714:
    // 0x20a714: 0x24c80074  addiu       $t0, $a2, 0x74
    ctx->pc = 0x20a714u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 116));
label_20a718:
    // 0x20a718: 0x830c0  sll         $a2, $t0, 3
    ctx->pc = 0x20a718u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_20a71c:
    // 0x20a71c: 0x24c67900  addiu       $a2, $a2, 0x7900
    ctx->pc = 0x20a71cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30976));
label_20a720:
    // 0x20a720: 0xa6260092  sh          $a2, 0x92($s1)
    ctx->pc = 0x20a720u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 146), (uint16_t)GPR_U32(ctx, 6));
label_20a724:
    // 0x20a724: 0x3010  mfhi        $a2
    ctx->pc = 0x20a724u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_20a728:
    // 0x20a728: 0xae220094  sw          $v0, 0x94($s1)
    ctx->pc = 0x20a728u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 2));
label_20a72c:
    // 0x20a72c: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x20a72cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_20a730:
    // 0x20a730: 0x61843  sra         $v1, $a2, 1
    ctx->pc = 0x20a730u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 1));
label_20a734:
    // 0x20a734: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x20a734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_20a738:
    // 0x20a738: 0x2463003c  addiu       $v1, $v1, 0x3C
    ctx->pc = 0x20a738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
label_20a73c:
    // 0x20a73c: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x20a73cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
label_20a740:
    // 0x20a740: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x20a740u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_20a744:
    // 0x20a744: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x20a744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_20a748:
    // 0x20a748: 0xa62300a0  sh          $v1, 0xA0($s1)
    ctx->pc = 0x20a748u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 160), (uint16_t)GPR_U32(ctx, 3));
label_20a74c:
    // 0x20a74c: 0x1810  mfhi        $v1
    ctx->pc = 0x20a74cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_20a750:
    // 0x20a750: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x20a750u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_20a754:
    // 0x20a754: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x20a754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_20a758:
    // 0x20a758: 0x24630036  addiu       $v1, $v1, 0x36
    ctx->pc = 0x20a758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 54));
label_20a75c:
    // 0x20a75c: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x20a75cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_20a760:
    // 0x20a760: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x20a760u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_20a764:
    // 0x20a764: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x20a764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
label_20a768:
    // 0x20a768: 0xa62300a2  sh          $v1, 0xA2($s1)
    ctx->pc = 0x20a768u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 162), (uint16_t)GPR_U32(ctx, 3));
label_20a76c:
    // 0x20a76c: 0xae2200a4  sw          $v0, 0xA4($s1)
    ctx->pc = 0x20a76cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 2));
label_20a770:
    // 0x20a770: 0x8f829100  lw          $v0, -0x6F00($gp)
    ctx->pc = 0x20a770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_20a774:
    // 0x20a774: 0x8c4357f0  lw          $v1, 0x57F0($v0)
    ctx->pc = 0x20a774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22512)));
label_20a778:
    // 0x20a778: 0x24425748  addiu       $v0, $v0, 0x5748
    ctx->pc = 0x20a778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22344));
label_20a77c:
    // 0x20a77c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20a77cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_20a780:
    // 0x20a780: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20a780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20a784:
    // 0x20a784: 0xc070d40  jal         func_1C3500
label_20a788:
    if (ctx->pc == 0x20A788u) {
        ctx->pc = 0x20A788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A784u;
        // 0x20a788: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A78Cu;
        goto label_20a78c;
    }
    ctx->pc = 0x20A784u;
    SET_GPR_U32(ctx, 31, 0x20A78Cu);
    ctx->pc = 0x20A788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A784u;
    // 0x20a788: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3500u;
    { ctx->pc = 0x1c3500; return; }
    ctx->pc = 0x20A78Cu;
label_20a78c:
    // 0x20a78c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20a78cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20a790:
    // 0x20a790: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20a790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20a794:
    // 0x20a794: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x20a794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_20a798:
    // 0x20a798: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20a798u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20a79c:
    // 0x20a79c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20a79cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20a7a0:
    // 0x20a7a0: 0xc066c72  jal         func_19B1C8
label_20a7a4:
    if (ctx->pc == 0x20A7A4u) {
        ctx->pc = 0x20A7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A7A0u;
        // 0x20a7a4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A7A8u;
        goto label_20a7a8;
    }
    ctx->pc = 0x20A7A0u;
    SET_GPR_U32(ctx, 31, 0x20A7A8u);
    ctx->pc = 0x20A7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A7A0u;
    // 0x20a7a4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x20A7A8u;
label_20a7a8:
    // 0x20a7a8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x20a7a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_20a7ac:
    // 0x20a7ac: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x20a7acu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_20a7b0:
    // 0x20a7b0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x20a7b0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_20a7b4:
    // 0x20a7b4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x20a7b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_20a7b8:
    // 0x20a7b8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x20a7b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_20a7bc:
    // 0x20a7bc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x20a7bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20a7c0:
    // 0x20a7c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x20a7c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20a7c4:
    // 0x20a7c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20a7c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20a7c8:
    // 0x20a7c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20a7c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_20a7cc:
    // 0x20a7cc: 0x3e00008  jr          $ra
label_20a7d0:
    if (ctx->pc == 0x20A7D0u) {
        ctx->pc = 0x20A7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A7CCu;
        // 0x20a7d0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A7D4u;
        goto label_20a7d4;
    }
    ctx->pc = 0x20A7CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A7CCu;
        // 0x20a7d0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A7CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20A7D4u;
label_20a7d4:
    // 0x20a7d4: 0x0  nop
    ctx->pc = 0x20a7d4u;
    // NOP
label_20a7d8:
    // 0x20a7d8: 0x0  nop
    ctx->pc = 0x20a7d8u;
    // NOP
label_20a7dc:
    // 0x20a7dc: 0x0  nop
    ctx->pc = 0x20a7dcu;
    // NOP
label_20a7e0:
    // 0x20a7e0: 0x1080002d  beqz        $a0, . + 4 + (0x2D << 2)
label_20a7e4:
    if (ctx->pc == 0x20A7E4u) {
        ctx->pc = 0x20A7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A7E0u;
        // 0x20a7e4: 0xaf849104  sw          $a0, -0x6EFC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938884), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A7E8u;
        goto label_20a7e8;
    }
    ctx->pc = 0x20A7E0u;
    {
        const bool branch_taken_0x20a7e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A7E0u;
        // 0x20a7e4: 0xaf849104  sw          $a0, -0x6EFC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938884), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a7e0) {
            ctx->pc = 0x20A898u;
            goto label_20a898;
        }
    }
    ctx->pc = 0x20A7E8u;
label_20a7e8:
    // 0x20a7e8: 0xaf859110  sw          $a1, -0x6EF0($gp)
    ctx->pc = 0x20a7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938896), GPR_U32(ctx, 5));
label_20a7ec:
    // 0x20a7ec: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x20a7ecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20a7f0:
    // 0x20a7f0: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x20a7f0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20a7f4:
    // 0x20a7f4: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x20a7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_20a7f8:
    // 0x20a7f8: 0x3c09002a  lui         $t1, 0x2A
    ctx->pc = 0x20a7f8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)42 << 16));
label_20a7fc:
    // 0x20a7fc: 0x3c070058  lui         $a3, 0x58
    ctx->pc = 0x20a7fcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)88 << 16));
label_20a800:
    // 0x20a800: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x20a800u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_20a804:
    // 0x20a804: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x20a804u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_20a808:
    // 0x20a808: 0x2529c990  addiu       $t1, $t1, -0x3670
    ctx->pc = 0x20a808u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294953360));
label_20a80c:
    // 0x20a80c: 0x240800ab  addiu       $t0, $zero, 0xAB
    ctx->pc = 0x20a80cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
label_20a810:
    // 0x20a810: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x20a810u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_20a814:
    // 0x20a814: 0x24e7fc60  addiu       $a3, $a3, -0x3A0
    ctx->pc = 0x20a814u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966368));
label_20a818:
    // 0x20a818: 0x2484fbe0  addiu       $a0, $a0, -0x420
    ctx->pc = 0x20a818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966240));
label_20a81c:
    // 0x20a81c: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x20a81cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_20a820:
    // 0x20a820: 0x1455821  addu        $t3, $t2, $a1
    ctx->pc = 0x20a820u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
label_20a824:
    // 0x20a824: 0x296100ab  slti        $at, $t3, 0xAB
    ctx->pc = 0x20a824u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)171) ? 1 : 0);
label_20a828:
    // 0x20a828: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
label_20a82c:
    if (ctx->pc == 0x20A82Cu) {
        ctx->pc = 0x20A82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A828u;
        // 0x20a82c: 0xb1840  sll         $v1, $t3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A830u;
        goto label_20a830;
    }
    ctx->pc = 0x20A828u;
    {
        const bool branch_taken_0x20a828 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A828u;
        // 0x20a82c: 0xb1840  sll         $v1, $t3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a828) {
            ctx->pc = 0x20A86Cu;
            goto label_20a86c;
        }
    }
    ctx->pc = 0x20A830u;
label_20a830:
    // 0x20a830: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x20a830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_20a834:
    // 0x20a834: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x20a834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_20a838:
    // 0x20a838: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x20a838u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_20a83c:
    // 0x20a83c: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x20a83cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
label_20a840:
    // 0x20a840: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x20a840u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_20a844:
    // 0x20a844: 0x90233a1b  lbu         $v1, 0x3A1B($at)
    ctx->pc = 0x20a844u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 14875)));
label_20a848:
    // 0x20a848: 0x14680004  bne         $v1, $t0, . + 4 + (0x4 << 2)
label_20a84c:
    if (ctx->pc == 0x20A84Cu) {
        ctx->pc = 0x20A850u;
        goto label_20a850;
    }
    ctx->pc = 0x20A848u;
    {
        const bool branch_taken_0x20a848 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        if (branch_taken_0x20a848) {
            ctx->pc = 0x20A85Cu;
            goto label_20a85c;
        }
    }
    ctx->pc = 0x20A850u;
label_20a850:
    // 0x20a850: 0xec1821  addu        $v1, $a3, $t4
    ctx->pc = 0x20a850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
label_20a854:
    // 0x20a854: 0x10000008  b           . + 4 + (0x8 << 2)
label_20a858:
    if (ctx->pc == 0x20A858u) {
        ctx->pc = 0x20A858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A854u;
        // 0x20a858: 0xac680000  sw          $t0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A85Cu;
        goto label_20a85c;
    }
    ctx->pc = 0x20A854u;
    {
        const bool branch_taken_0x20a854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A854u;
        // 0x20a858: 0xac680000  sw          $t0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a854) {
            ctx->pc = 0x20A878u;
            goto label_20a878;
        }
    }
    ctx->pc = 0x20A85Cu;
label_20a85c:
    // 0x20a85c: 0x0  nop
    ctx->pc = 0x20a85cu;
    // NOP
label_20a860:
    // 0x20a860: 0xec1821  addu        $v1, $a3, $t4
    ctx->pc = 0x20a860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
label_20a864:
    // 0x20a864: 0x10000004  b           . + 4 + (0x4 << 2)
label_20a868:
    if (ctx->pc == 0x20A868u) {
        ctx->pc = 0x20A868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A864u;
        // 0x20a868: 0xac6b0000  sw          $t3, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A86Cu;
        goto label_20a86c;
    }
    ctx->pc = 0x20A864u;
    {
        const bool branch_taken_0x20a864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A864u;
        // 0x20a868: 0xac6b0000  sw          $t3, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a864) {
            ctx->pc = 0x20A878u;
            goto label_20a878;
        }
    }
    ctx->pc = 0x20A86Cu;
label_20a86c:
    // 0x20a86c: 0x0  nop
    ctx->pc = 0x20a86cu;
    // NOP
label_20a870:
    // 0x20a870: 0xec1821  addu        $v1, $a3, $t4
    ctx->pc = 0x20a870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
label_20a874:
    // 0x20a874: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x20a874u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_20a878:
    // 0x20a878: 0x8c1821  addu        $v1, $a0, $t4
    ctx->pc = 0x20a878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
label_20a87c:
    // 0x20a87c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x20a87cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_20a880:
    // 0x20a880: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x20a880u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_20a884:
    // 0x20a884: 0x2943001e  slti        $v1, $t2, 0x1E
    ctx->pc = 0x20a884u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)30) ? 1 : 0);
label_20a888:
    // 0x20a888: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
label_20a88c:
    if (ctx->pc == 0x20A88Cu) {
        ctx->pc = 0x20A88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A888u;
        // 0x20a88c: 0x258c0004  addiu       $t4, $t4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A890u;
        goto label_20a890;
    }
    ctx->pc = 0x20A888u;
    {
        const bool branch_taken_0x20a888 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20A88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A888u;
        // 0x20a88c: 0x258c0004  addiu       $t4, $t4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a888) {
            ctx->pc = 0x20A820u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20a820;
        }
    }
    ctx->pc = 0x20A890u;
label_20a890:
    // 0x20a890: 0x1000001c  b           . + 4 + (0x1C << 2)
label_20a894:
    if (ctx->pc == 0x20A894u) {
        ctx->pc = 0x20A898u;
        goto label_20a898;
    }
    ctx->pc = 0x20A890u;
    {
        const bool branch_taken_0x20a890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a890) {
            ctx->pc = 0x20A904u;
            goto label_20a904;
        }
    }
    ctx->pc = 0x20A898u;
label_20a898:
    // 0x20a898: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x20a898u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20a89c:
    // 0x20a89c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20a89cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20a8a0:
    // 0x20a8a0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x20a8a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20a8a4:
    // 0x20a8a4: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x20a8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_20a8a8:
    // 0x20a8a8: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x20a8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_20a8ac:
    // 0x20a8ac: 0x3c07002a  lui         $a3, 0x2A
    ctx->pc = 0x20a8acu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)42 << 16));
label_20a8b0:
    // 0x20a8b0: 0x24a5fc60  addiu       $a1, $a1, -0x3A0
    ctx->pc = 0x20a8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966368));
label_20a8b4:
    // 0x20a8b4: 0x2484fbe0  addiu       $a0, $a0, -0x420
    ctx->pc = 0x20a8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966240));
label_20a8b8:
    // 0x20a8b8: 0x24e7c990  addiu       $a3, $a3, -0x3670
    ctx->pc = 0x20a8b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953360));
label_20a8bc:
    // 0x20a8bc: 0x240600ab  addiu       $a2, $zero, 0xAB
    ctx->pc = 0x20a8bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
label_20a8c0:
    // 0x20a8c0: 0xe81821  addu        $v1, $a3, $t0
    ctx->pc = 0x20a8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_20a8c4:
    // 0x20a8c4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x20a8c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_20a8c8:
    // 0x20a8c8: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x20a8c8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_20a8cc:
    // 0x20a8cc: 0x90234a3b  lbu         $v1, 0x4A3B($at)
    ctx->pc = 0x20a8ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19003)));
label_20a8d0:
    // 0x20a8d0: 0x14660003  bne         $v1, $a2, . + 4 + (0x3 << 2)
label_20a8d4:
    if (ctx->pc == 0x20A8D4u) {
        ctx->pc = 0x20A8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A8D0u;
        // 0x20a8d4: 0xa91821  addu        $v1, $a1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A8D8u;
        goto label_20a8d8;
    }
    ctx->pc = 0x20A8D0u;
    {
        const bool branch_taken_0x20a8d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x20A8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A8D0u;
        // 0x20a8d4: 0xa91821  addu        $v1, $a1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a8d0) {
            ctx->pc = 0x20A8E0u;
            goto label_20a8e0;
        }
    }
    ctx->pc = 0x20A8D8u;
label_20a8d8:
    // 0x20a8d8: 0x10000003  b           . + 4 + (0x3 << 2)
label_20a8dc:
    if (ctx->pc == 0x20A8DCu) {
        ctx->pc = 0x20A8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A8D8u;
        // 0x20a8dc: 0xac660000  sw          $a2, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A8E0u;
        goto label_20a8e0;
    }
    ctx->pc = 0x20A8D8u;
    {
        const bool branch_taken_0x20a8d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A8D8u;
        // 0x20a8dc: 0xac660000  sw          $a2, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a8d8) {
            ctx->pc = 0x20A8E8u;
            goto label_20a8e8;
        }
    }
    ctx->pc = 0x20A8E0u;
label_20a8e0:
    // 0x20a8e0: 0xa91821  addu        $v1, $a1, $t1
    ctx->pc = 0x20a8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_20a8e4:
    // 0x20a8e4: 0xac6a0000  sw          $t2, 0x0($v1)
    ctx->pc = 0x20a8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 10));
label_20a8e8:
    // 0x20a8e8: 0x891821  addu        $v1, $a0, $t1
    ctx->pc = 0x20a8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
label_20a8ec:
    // 0x20a8ec: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x20a8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_20a8f0:
    // 0x20a8f0: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x20a8f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_20a8f4:
    // 0x20a8f4: 0x2943000f  slti        $v1, $t2, 0xF
    ctx->pc = 0x20a8f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)15) ? 1 : 0);
label_20a8f8:
    // 0x20a8f8: 0x25080018  addiu       $t0, $t0, 0x18
    ctx->pc = 0x20a8f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 24));
label_20a8fc:
    // 0x20a8fc: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
label_20a900:
    if (ctx->pc == 0x20A900u) {
        ctx->pc = 0x20A900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A8FCu;
        // 0x20a900: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A904u;
        goto label_20a904;
    }
    ctx->pc = 0x20A8FCu;
    {
        const bool branch_taken_0x20a8fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20A900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A8FCu;
        // 0x20a900: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a8fc) {
            ctx->pc = 0x20A8C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20a8c0;
        }
    }
    ctx->pc = 0x20A904u;
label_20a904:
    // 0x20a904: 0x0  nop
    ctx->pc = 0x20a904u;
    // NOP
label_20a908:
    // 0x20a908: 0x3e00008  jr          $ra
label_20a90c:
    if (ctx->pc == 0x20A90Cu) {
        ctx->pc = 0x20A910u;
        goto label_20a910;
    }
    ctx->pc = 0x20A908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A908u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20A910u;
label_20a910:
    // 0x20a910: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x20a910u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
label_20a914:
    // 0x20a914: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x20a914u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_20a918:
    // 0x20a918: 0x2463fbe0  addiu       $v1, $v1, -0x420
    ctx->pc = 0x20a918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966240));
label_20a91c:
    // 0x20a91c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20a91cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20a920:
    // 0x20a920: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x20a920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_20a924:
    // 0x20a924: 0x3e00008  jr          $ra
label_20a928:
    if (ctx->pc == 0x20A928u) {
        ctx->pc = 0x20A928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A924u;
        // 0x20a928: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A92Cu;
        goto label_20a92c;
    }
    ctx->pc = 0x20A924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A924u;
        // 0x20a928: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20A92Cu;
label_20a92c:
    // 0x20a92c: 0x0  nop
    ctx->pc = 0x20a92cu;
    // NOP
label_20a930:
    // 0x20a930: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20a930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_20a934:
    // 0x20a934: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x20a934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_20a938:
    // 0x20a938: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20a938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_20a93c:
    // 0x20a93c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20a93cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_20a940:
    // 0x20a940: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20a940u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20a944:
    // 0x20a944: 0xaf91910c  sw          $s1, -0x6EF4($gp)
    ctx->pc = 0x20a944u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938892), GPR_U32(ctx, 17));
label_20a948:
    // 0x20a948: 0xc082b64  jal         func_20AD90
label_20a94c:
    if (ctx->pc == 0x20A94Cu) {
        ctx->pc = 0x20A94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A948u;
        // 0x20a94c: 0x241000ab  addiu       $s0, $zero, 0xAB (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A950u;
        goto label_20a950;
    }
    ctx->pc = 0x20A948u;
    SET_GPR_U32(ctx, 31, 0x20A950u);
    ctx->pc = 0x20A94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A948u;
    // 0x20a94c: 0x241000ab  addiu       $s0, $zero, 0xAB (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20AD90u;
    goto label_20ad90;
    ctx->pc = 0x20A950u;
label_20a950:
    // 0x20a950: 0x2a21001e  slti        $at, $s1, 0x1E
    ctx->pc = 0x20a950u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)30) ? 1 : 0);
label_20a954:
    // 0x20a954: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_20a958:
    if (ctx->pc == 0x20A958u) {
        ctx->pc = 0x20A958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A954u;
        // 0x20a958: 0x2a0100ab  slti        $at, $s0, 0xAB (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)171) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A95Cu;
        goto label_20a95c;
    }
    ctx->pc = 0x20A954u;
    {
        const bool branch_taken_0x20a954 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A954u;
        // 0x20a958: 0x2a0100ab  slti        $at, $s0, 0xAB (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)171) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a954) {
            ctx->pc = 0x20A978u;
            goto label_20a978;
        }
    }
    ctx->pc = 0x20A95Cu;
label_20a95c:
    // 0x20a95c: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x20a95cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_20a960:
    // 0x20a960: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x20a960u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_20a964:
    // 0x20a964: 0x2442fc60  addiu       $v0, $v0, -0x3A0
    ctx->pc = 0x20a964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966368));
label_20a968:
    // 0x20a968: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20a968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20a96c:
    // 0x20a96c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x20a96cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20a970:
    // 0x20a970: 0x0  nop
    ctx->pc = 0x20a970u;
    // NOP
label_20a974:
    // 0x20a974: 0x2a0100ab  slti        $at, $s0, 0xAB
    ctx->pc = 0x20a974u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)171) ? 1 : 0);
label_20a978:
    // 0x20a978: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_20a97c:
    if (ctx->pc == 0x20A97Cu) {
        ctx->pc = 0x20A97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A978u;
        // 0x20a97c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A980u;
        goto label_20a980;
    }
    ctx->pc = 0x20A978u;
    {
        const bool branch_taken_0x20a978 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A978u;
        // 0x20a97c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a978) {
            ctx->pc = 0x20A9A0u;
            goto label_20a9a0;
        }
    }
    ctx->pc = 0x20A980u;
label_20a980:
    // 0x20a980: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x20a980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20a984:
    // 0x20a984: 0x240601a0  addiu       $a2, $zero, 0x1A0
    ctx->pc = 0x20a984u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
label_20a988:
    // 0x20a988: 0x24070030  addiu       $a3, $zero, 0x30
    ctx->pc = 0x20a988u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_20a98c:
    // 0x20a98c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20a98cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20a990:
    // 0x20a990: 0xc07fadc  jal         func_1FEB70
label_20a994:
    if (ctx->pc == 0x20A994u) {
        ctx->pc = 0x20A994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A990u;
        // 0x20a994: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A998u;
        goto label_20a998;
    }
    ctx->pc = 0x20A990u;
    SET_GPR_U32(ctx, 31, 0x20A998u);
    ctx->pc = 0x20A994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A990u;
    // 0x20a994: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB70u;
    { ctx->pc = 0x1feb70; return; }
    ctx->pc = 0x20A998u;
label_20a998:
    // 0x20a998: 0x10000004  b           . + 4 + (0x4 << 2)
label_20a99c:
    if (ctx->pc == 0x20A99Cu) {
        ctx->pc = 0x20A99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A998u;
        // 0x20a99c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A9A0u;
        goto label_20a9a0;
    }
    ctx->pc = 0x20A998u;
    {
        const bool branch_taken_0x20a998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A998u;
        // 0x20a99c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a998) {
            ctx->pc = 0x20A9ACu;
            goto label_20a9ac;
        }
    }
    ctx->pc = 0x20A9A0u;
label_20a9a0:
    // 0x20a9a0: 0xc07fa38  jal         func_1FE8E0
label_20a9a4:
    if (ctx->pc == 0x20A9A4u) {
        ctx->pc = 0x20A9A8u;
        goto label_20a9a8;
    }
    ctx->pc = 0x20A9A0u;
    SET_GPR_U32(ctx, 31, 0x20A9A8u);
    ctx->pc = 0x1FE8E0u;
    { ctx->pc = 0x1fe8e0; return; }
    ctx->pc = 0x20A9A8u;
label_20a9a8:
    // 0x20a9a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20a9a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_20a9ac:
    // 0x20a9ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20a9acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20a9b0:
    // 0x20a9b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20a9b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_20a9b4:
    // 0x20a9b4: 0x3e00008  jr          $ra
label_20a9b8:
    if (ctx->pc == 0x20A9B8u) {
        ctx->pc = 0x20A9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A9B4u;
        // 0x20a9b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A9BCu;
        goto label_20a9bc;
    }
    ctx->pc = 0x20A9B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A9B4u;
        // 0x20a9b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A9B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20A9BCu;
label_20a9bc:
    // 0x20a9bc: 0x0  nop
    ctx->pc = 0x20a9bcu;
    // NOP
label_20a9c0:
    // 0x20a9c0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x20a9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_20a9c4:
    // 0x20a9c4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20a9c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20a9c8:
    // 0x20a9c8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x20a9c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_20a9cc:
    // 0x20a9cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20a9ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20a9d0:
    // 0x20a9d0: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x20a9d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_20a9d4:
    // 0x20a9d4: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x20a9d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_20a9d8:
    // 0x20a9d8: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x20a9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_20a9dc:
    // 0x20a9dc: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x20a9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_20a9e0:
    // 0x20a9e0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x20a9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_20a9e4:
    // 0x20a9e4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x20a9e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_20a9e8:
    // 0x20a9e8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x20a9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_20a9ec:
    // 0x20a9ec: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x20a9ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_20a9f0:
    // 0x20a9f0: 0xaf80911c  sw          $zero, -0x6EE4($gp)
    ctx->pc = 0x20a9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938908), GPR_U32(ctx, 0));
label_20a9f4:
    // 0x20a9f4: 0xaf809118  sw          $zero, -0x6EE8($gp)
    ctx->pc = 0x20a9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938904), GPR_U32(ctx, 0));
label_20a9f8:
    // 0x20a9f8: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x20a9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
label_20a9fc:
    // 0x20a9fc: 0x2463fc60  addiu       $v1, $v1, -0x3A0
    ctx->pc = 0x20a9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966368));
label_20aa00:
    // 0x20aa00: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x20aa00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_20aa04:
    // 0x20aa04: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x20aa04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_20aa08:
    // 0x20aa08: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x20aa08u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_20aa0c:
    // 0x20aa0c: 0x28820016  slti        $v0, $a0, 0x16
    ctx->pc = 0x20aa0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)22) ? 1 : 0);
label_20aa10:
    // 0x20aa10: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x20aa10u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
label_20aa14:
    // 0x20aa14: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x20aa14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_20aa18:
    // 0x20aa18: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x20aa18u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
label_20aa1c:
    // 0x20aa1c: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x20aa1cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
label_20aa20:
    // 0x20aa20: 0xacc00010  sw          $zero, 0x10($a2)
    ctx->pc = 0x20aa20u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
label_20aa24:
    // 0x20aa24: 0xacc00014  sw          $zero, 0x14($a2)
    ctx->pc = 0x20aa24u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 0));
label_20aa28:
    // 0x20aa28: 0xacc00018  sw          $zero, 0x18($a2)
    ctx->pc = 0x20aa28u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 0));
label_20aa2c:
    // 0x20aa2c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_20aa30:
    if (ctx->pc == 0x20AA30u) {
        ctx->pc = 0x20AA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AA2Cu;
        // 0x20aa30: 0xacc0001c  sw          $zero, 0x1C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AA34u;
        goto label_20aa34;
    }
    ctx->pc = 0x20AA2Cu;
    {
        const bool branch_taken_0x20aa2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20AA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AA2Cu;
        // 0x20aa30: 0xacc0001c  sw          $zero, 0x1C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aa2c) {
            ctx->pc = 0x20AA00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20aa00;
        }
    }
    ctx->pc = 0x20AA34u;
label_20aa34:
    // 0x20aa34: 0x2881001e  slti        $at, $a0, 0x1E
    ctx->pc = 0x20aa34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)30) ? 1 : 0);
label_20aa38:
    // 0x20aa38: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_20aa3c:
    if (ctx->pc == 0x20AA3Cu) {
        ctx->pc = 0x20AA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AA38u;
        // 0x20aa3c: 0x42880  sll         $a1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AA40u;
        goto label_20aa40;
    }
    ctx->pc = 0x20AA38u;
    {
        const bool branch_taken_0x20aa38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AA38u;
        // 0x20aa3c: 0x42880  sll         $a1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aa38) {
            ctx->pc = 0x20AA68u;
            goto label_20aa68;
        }
    }
    ctx->pc = 0x20AA40u;
label_20aa40:
    // 0x20aa40: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x20aa40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
label_20aa44:
    // 0x20aa44: 0x2463fc60  addiu       $v1, $v1, -0x3A0
    ctx->pc = 0x20aa44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966368));
label_20aa48:
    // 0x20aa48: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x20aa48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_20aa4c:
    // 0x20aa4c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x20aa4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_20aa50:
    // 0x20aa50: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x20aa50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_20aa54:
    // 0x20aa54: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x20aa54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_20aa58:
    // 0x20aa58: 0x2882001e  slti        $v0, $a0, 0x1E
    ctx->pc = 0x20aa58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)30) ? 1 : 0);
label_20aa5c:
    // 0x20aa5c: 0x0  nop
    ctx->pc = 0x20aa5cu;
    // NOP
label_20aa60:
    // 0x20aa60: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_20aa64:
    if (ctx->pc == 0x20AA64u) {
        ctx->pc = 0x20AA68u;
        goto label_20aa68;
    }
    ctx->pc = 0x20AA60u;
    {
        const bool branch_taken_0x20aa60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20aa60) {
            ctx->pc = 0x20AA48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20aa48;
        }
    }
    ctx->pc = 0x20AA68u;
label_20aa68:
    // 0x20aa68: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x20aa68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_20aa6c:
    // 0x20aa6c: 0xaf829108  sw          $v0, -0x6EF8($gp)
    ctx->pc = 0x20aa6cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938888), GPR_U32(ctx, 2));
label_20aa70:
    // 0x20aa70: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x20aa70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_20aa74:
    // 0x20aa74: 0xaf809114  sw          $zero, -0x6EEC($gp)
    ctx->pc = 0x20aa74u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938900), GPR_U32(ctx, 0));
label_20aa78:
    // 0x20aa78: 0xaf82910c  sw          $v0, -0x6EF4($gp)
    ctx->pc = 0x20aa78u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938892), GPR_U32(ctx, 2));
label_20aa7c:
    // 0x20aa7c: 0xc082b64  jal         func_20AD90
label_20aa80:
    if (ctx->pc == 0x20AA80u) {
        ctx->pc = 0x20AA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AA7Cu;
        // 0x20aa80: 0xaf809110  sw          $zero, -0x6EF0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938896), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AA84u;
        goto label_20aa84;
    }
    ctx->pc = 0x20AA7Cu;
    SET_GPR_U32(ctx, 31, 0x20AA84u);
    ctx->pc = 0x20AA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AA7Cu;
    // 0x20aa80: 0xaf809110  sw          $zero, -0x6EF0($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938896), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20AD90u;
    goto label_20ad90;
    ctx->pc = 0x20AA84u;
label_20aa84:
    // 0x20aa84: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x20aa84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20aa88:
    // 0x20aa88: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x20aa88u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20aa8c:
    // 0x20aa8c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x20aa8cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20aa90:
    // 0x20aa90: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x20aa90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20aa94:
    // 0x20aa94: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x20aa94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20aa98:
    // 0x20aa98: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x20aa98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_20aa9c:
    // 0x20aa9c: 0x24050082  addiu       $a1, $zero, 0x82
    ctx->pc = 0x20aa9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
label_20aaa0:
    // 0x20aaa0: 0x24426340  addiu       $v0, $v0, 0x6340
    ctx->pc = 0x20aaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25408));
label_20aaa4:
    // 0x20aaa4: 0x579821  addu        $s3, $v0, $s7
    ctx->pc = 0x20aaa4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_20aaa8:
    // 0x20aaa8: 0xc05e234  jal         func_1788D0
label_20aaac:
    if (ctx->pc == 0x20AAACu) {
        ctx->pc = 0x20AAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AAA8u;
        // 0x20aaac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AAB0u;
        goto label_20aab0;
    }
    ctx->pc = 0x20AAA8u;
    SET_GPR_U32(ctx, 31, 0x20AAB0u);
    ctx->pc = 0x20AAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AAA8u;
    // 0x20aaac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x20AAA8u, 0x20AAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AAB0u;
label_20aab0:
    // 0x20aab0: 0x3407fe00  ori         $a3, $zero, 0xFE00
    ctx->pc = 0x20aab0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_20aab4:
    // 0x20aab4: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x20aab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_20aab8:
    // 0x20aab8: 0x24050280  addiu       $a1, $zero, 0x280
    ctx->pc = 0x20aab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_20aabc:
    // 0x20aabc: 0x240601c0  addiu       $a2, $zero, 0x1C0
    ctx->pc = 0x20aabcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_20aac0:
    // 0x20aac0: 0x2408012c  addiu       $t0, $zero, 0x12C
    ctx->pc = 0x20aac0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
label_20aac4:
    // 0x20aac4: 0x240900f0  addiu       $t1, $zero, 0xF0
    ctx->pc = 0x20aac4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_20aac8:
    // 0x20aac8: 0xc07c1f4  jal         func_1F07D0
label_20aacc:
    if (ctx->pc == 0x20AACCu) {
        ctx->pc = 0x20AACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AAC8u;
        // 0x20aacc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AAD0u;
        goto label_20aad0;
    }
    ctx->pc = 0x20AAC8u;
    SET_GPR_U32(ctx, 31, 0x20AAD0u);
    ctx->pc = 0x20AACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AAC8u;
    // 0x20aacc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F07D0u;
    { ctx->pc = 0x1f07d0; return; }
    ctx->pc = 0x20AAD0u;
label_20aad0:
    // 0x20aad0: 0xc07082c  jal         func_1C20B0
label_20aad4:
    if (ctx->pc == 0x20AAD4u) {
        ctx->pc = 0x20AAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AAD0u;
        // 0x20aad4: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AAD8u;
        goto label_20aad8;
    }
    ctx->pc = 0x20AAD0u;
    SET_GPR_U32(ctx, 31, 0x20AAD8u);
    ctx->pc = 0x20AAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AAD0u;
    // 0x20aad4: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20B0u;
    { ctx->pc = 0x1c20b0; return; }
    ctx->pc = 0x20AAD8u;
label_20aad8:
    // 0x20aad8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20aad8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20aadc:
    // 0x20aadc: 0x266405b0  addiu       $a0, $s3, 0x5B0
    ctx->pc = 0x20aadcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1456));
label_20aae0:
    // 0x20aae0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x20aae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_20aae4:
    // 0x20aae4: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x20aae4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_20aae8:
    // 0x20aae8: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x20aae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_20aaec:
    // 0x20aaec: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x20aaecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_20aaf0:
    // 0x20aaf0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20aaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20aaf4:
    // 0x20aaf4: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x20aaf4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_20aaf8:
    // 0x20aaf8: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x20aaf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_20aafc:
    // 0x20aafc: 0x24090030  addiu       $t1, $zero, 0x30
    ctx->pc = 0x20aafcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_20ab00:
    // 0x20ab00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20ab00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20ab04:
    // 0x20ab04: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x20ab04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_20ab08:
    // 0x20ab08: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x20ab08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_20ab0c:
    // 0x20ab0c: 0x240a01f0  addiu       $t2, $zero, 0x1F0
    ctx->pc = 0x20ab0cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 496));
label_20ab10:
    // 0x20ab10: 0xc05de30  jal         func_1778C0
label_20ab14:
    if (ctx->pc == 0x20AB14u) {
        ctx->pc = 0x20AB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AB10u;
        // 0x20ab14: 0x240b0048  addiu       $t3, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AB18u;
        goto label_20ab18;
    }
    ctx->pc = 0x20AB10u;
    SET_GPR_U32(ctx, 31, 0x20AB18u);
    ctx->pc = 0x20AB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AB10u;
    // 0x20ab14: 0x240b0048  addiu       $t3, $zero, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x20AB10u, 0x20AB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AB18u;
label_20ab18:
    // 0x20ab18: 0x3c0b002d  lui         $t3, 0x2D
    ctx->pc = 0x20ab18u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)45 << 16));
label_20ab1c:
    // 0x20ab1c: 0x26640650  addiu       $a0, $s3, 0x650
    ctx->pc = 0x20ab1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1616));
label_20ab20:
    // 0x20ab20: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x20ab20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_20ab24:
    // 0x20ab24: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x20ab24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_20ab28:
    // 0x20ab28: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x20ab28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_20ab2c:
    // 0x20ab2c: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x20ab2cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_20ab30:
    // 0x20ab30: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x20ab30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_20ab34:
    // 0x20ab34: 0x240a0018  addiu       $t2, $zero, 0x18
    ctx->pc = 0x20ab34u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_20ab38:
    // 0x20ab38: 0xc0708ac  jal         func_1C22B0
label_20ab3c:
    if (ctx->pc == 0x20AB3Cu) {
        ctx->pc = 0x20AB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AB38u;
        // 0x20ab3c: 0x256be048  addiu       $t3, $t3, -0x1FB8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294959176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AB40u;
        goto label_20ab40;
    }
    ctx->pc = 0x20AB38u;
    SET_GPR_U32(ctx, 31, 0x20AB40u);
    ctx->pc = 0x20AB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AB38u;
    // 0x20ab3c: 0x256be048  addiu       $t3, $t3, -0x1FB8 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294959176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    { ctx->pc = 0x1c22b0; return; }
    ctx->pc = 0x20AB40u;
label_20ab40:
    // 0x20ab40: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x20ab40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20ab44:
    // 0x20ab44: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x20ab44u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20ab48:
    // 0x20ab48: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x20ab48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_20ab4c:
    // 0x20ab4c: 0x24421480  addiu       $v0, $v0, 0x1480
    ctx->pc = 0x20ab4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5248));
label_20ab50:
    // 0x20ab50: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x20ab50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_20ab54:
    // 0x20ab54: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x20ab54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_20ab58:
    // 0x20ab58: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x20ab58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
label_20ab5c:
    // 0x20ab5c: 0x56a021  addu        $s4, $v0, $s6
    ctx->pc = 0x20ab5cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_20ab60:
    // 0x20ab60: 0xc05e234  jal         func_1788D0
label_20ab64:
    if (ctx->pc == 0x20AB64u) {
        ctx->pc = 0x20AB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AB60u;
        // 0x20ab64: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AB68u;
        goto label_20ab68;
    }
    ctx->pc = 0x20AB60u;
    SET_GPR_U32(ctx, 31, 0x20AB68u);
    ctx->pc = 0x20AB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AB60u;
    // 0x20ab64: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x20AB60u, 0x20AB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AB68u;
label_20ab68:
    // 0x20ab68: 0x240400c0  addiu       $a0, $zero, 0xC0
    ctx->pc = 0x20ab68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_20ab6c:
    // 0x20ab6c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x20ab6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_20ab70:
    // 0x20ab70: 0xc07091c  jal         func_1C2470
label_20ab74:
    if (ctx->pc == 0x20AB74u) {
        ctx->pc = 0x20AB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AB70u;
        // 0x20ab74: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AB78u;
        goto label_20ab78;
    }
    ctx->pc = 0x20AB70u;
    SET_GPR_U32(ctx, 31, 0x20AB78u);
    ctx->pc = 0x20AB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AB70u;
    // 0x20ab74: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2470u;
    { ctx->pc = 0x1c2470; return; }
    ctx->pc = 0x20AB78u;
label_20ab78:
    // 0x20ab78: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20ab78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20ab7c:
    // 0x20ab7c: 0x26840010  addiu       $a0, $s4, 0x10
    ctx->pc = 0x20ab7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_20ab80:
    // 0x20ab80: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x20ab80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_20ab84:
    // 0x20ab84: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x20ab84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_20ab88:
    // 0x20ab88: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x20ab88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_20ab8c:
    // 0x20ab8c: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x20ab8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_20ab90:
    // 0x20ab90: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20ab90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20ab94:
    // 0x20ab94: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x20ab94u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_20ab98:
    // 0x20ab98: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x20ab98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_20ab9c:
    // 0x20ab9c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x20ab9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20aba0:
    // 0x20aba0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20aba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20aba4:
    // 0x20aba4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x20aba4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20aba8:
    // 0x20aba8: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x20aba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_20abac:
    // 0x20abac: 0x240b00c0  addiu       $t3, $zero, 0xC0
    ctx->pc = 0x20abacu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_20abb0:
    // 0x20abb0: 0xc05de30  jal         func_1778C0
label_20abb4:
    if (ctx->pc == 0x20ABB4u) {
        ctx->pc = 0x20ABB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ABB0u;
        // 0x20abb4: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20ABB8u;
        goto label_20abb8;
    }
    ctx->pc = 0x20ABB0u;
    SET_GPR_U32(ctx, 31, 0x20ABB8u);
    ctx->pc = 0x20ABB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20ABB0u;
    // 0x20abb4: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x20ABB0u, 0x20ABB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ABB8u;
label_20abb8:
    // 0x20abb8: 0xc070834  jal         func_1C20D0
label_20abbc:
    if (ctx->pc == 0x20ABBCu) {
        ctx->pc = 0x20ABBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ABB8u;
        // 0x20abbc: 0x24040031  addiu       $a0, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20ABC0u;
        goto label_20abc0;
    }
    ctx->pc = 0x20ABB8u;
    SET_GPR_U32(ctx, 31, 0x20ABC0u);
    ctx->pc = 0x20ABBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20ABB8u;
    // 0x20abbc: 0x24040031  addiu       $a0, $zero, 0x31 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x20ABC0u;
label_20abc0:
    // 0x20abc0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20abc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20abc4:
    // 0x20abc4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20abc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20abc8:
    // 0x20abc8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x20abc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_20abcc:
    // 0x20abcc: 0x268400b0  addiu       $a0, $s4, 0xB0
    ctx->pc = 0x20abccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 176));
label_20abd0:
    // 0x20abd0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x20abd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_20abd4:
    // 0x20abd4: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x20abd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_20abd8:
    // 0x20abd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20abd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20abdc:
    // 0x20abdc: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x20abdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_20abe0:
    // 0x20abe0: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x20abe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_20abe4:
    // 0x20abe4: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x20abe4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_20abe8:
    // 0x20abe8: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x20abe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_20abec:
    // 0x20abec: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x20abecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_20abf0:
    // 0x20abf0: 0x24090158  addiu       $t1, $zero, 0x158
    ctx->pc = 0x20abf0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 344));
label_20abf4:
    // 0x20abf4: 0x240a00b0  addiu       $t2, $zero, 0xB0
    ctx->pc = 0x20abf4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_20abf8:
    // 0x20abf8: 0xc05de30  jal         func_1778C0
label_20abfc:
    if (ctx->pc == 0x20ABFCu) {
        ctx->pc = 0x20ABFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ABF8u;
        // 0x20abfc: 0x240b0050  addiu       $t3, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AC00u;
        goto label_20ac00;
    }
    ctx->pc = 0x20ABF8u;
    SET_GPR_U32(ctx, 31, 0x20AC00u);
    ctx->pc = 0x20ABFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20ABF8u;
    // 0x20abfc: 0x240b0050  addiu       $t3, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x20ABF8u, 0x20AC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AC00u;
label_20ac00:
    // 0x20ac00: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x20ac00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_20ac04:
    // 0x20ac04: 0x2a62001e  slti        $v0, $s3, 0x1E
    ctx->pc = 0x20ac04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)30) ? 1 : 0);
label_20ac08:
    // 0x20ac08: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
label_20ac0c:
    if (ctx->pc == 0x20AC0Cu) {
        ctx->pc = 0x20AC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AC08u;
        // 0x20ac0c: 0x26b502a0  addiu       $s5, $s5, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 672));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AC10u;
        goto label_20ac10;
    }
    ctx->pc = 0x20AC08u;
    {
        const bool branch_taken_0x20ac08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20AC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AC08u;
        // 0x20ac0c: 0x26b502a0  addiu       $s5, $s5, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ac08) {
            ctx->pc = 0x20AB48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20ab48;
        }
    }
    ctx->pc = 0x20AC10u;
label_20ac10:
    // 0x20ac10: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x20ac10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_20ac14:
    // 0x20ac14: 0x2405008f  addiu       $a1, $zero, 0x8F
    ctx->pc = 0x20ac14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
label_20ac18:
    // 0x20ac18: 0x24420280  addiu       $v0, $v0, 0x280
    ctx->pc = 0x20ac18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
label_20ac1c:
    // 0x20ac1c: 0x509821  addu        $s3, $v0, $s0
    ctx->pc = 0x20ac1cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_20ac20:
    // 0x20ac20: 0xc05e234  jal         func_1788D0
label_20ac24:
    if (ctx->pc == 0x20AC24u) {
        ctx->pc = 0x20AC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AC20u;
        // 0x20ac24: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AC28u;
        goto label_20ac28;
    }
    ctx->pc = 0x20AC20u;
    SET_GPR_U32(ctx, 31, 0x20AC28u);
    ctx->pc = 0x20AC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AC20u;
    // 0x20ac24: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x20AC20u, 0x20AC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AC28u;
label_20ac28:
    // 0x20ac28: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x20ac28u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_20ac2c:
    // 0x20ac2c: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x20ac2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_20ac30:
    // 0x20ac30: 0xffaa0000  sd          $t2, 0x0($sp)
    ctx->pc = 0x20ac30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 10));
label_20ac34:
    // 0x20ac34: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x20ac34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_20ac38:
    // 0x20ac38: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x20ac38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_20ac3c:
    // 0x20ac3c: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x20ac3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_20ac40:
    // 0x20ac40: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x20ac40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_20ac44:
    // 0x20ac44: 0x24050280  addiu       $a1, $zero, 0x280
    ctx->pc = 0x20ac44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_20ac48:
    // 0x20ac48: 0x240601c0  addiu       $a2, $zero, 0x1C0
    ctx->pc = 0x20ac48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_20ac4c:
    // 0x20ac4c: 0x3407fe00  ori         $a3, $zero, 0xFE00
    ctx->pc = 0x20ac4cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_20ac50:
    // 0x20ac50: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20ac50u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20ac54:
    // 0x20ac54: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x20ac54u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20ac58:
    // 0x20ac58: 0xc07c110  jal         func_1F0440
label_20ac5c:
    if (ctx->pc == 0x20AC5Cu) {
        ctx->pc = 0x20AC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AC58u;
        // 0x20ac5c: 0x240b0010  addiu       $t3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AC60u;
        goto label_20ac60;
    }
    ctx->pc = 0x20AC58u;
    SET_GPR_U32(ctx, 31, 0x20AC60u);
    ctx->pc = 0x20AC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AC58u;
    // 0x20ac5c: 0x240b0010  addiu       $t3, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0440u;
    { ctx->pc = 0x1f0440; return; }
    ctx->pc = 0x20AC60u;
label_20ac60:
    // 0x20ac60: 0xc07082c  jal         func_1C20B0
label_20ac64:
    if (ctx->pc == 0x20AC64u) {
        ctx->pc = 0x20AC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AC60u;
        // 0x20ac64: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AC68u;
        goto label_20ac68;
    }
    ctx->pc = 0x20AC60u;
    SET_GPR_U32(ctx, 31, 0x20AC68u);
    ctx->pc = 0x20AC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AC60u;
    // 0x20ac64: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20B0u;
    { ctx->pc = 0x1c20b0; return; }
    ctx->pc = 0x20AC68u;
label_20ac68:
    // 0x20ac68: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20ac68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20ac6c:
    // 0x20ac6c: 0x26640380  addiu       $a0, $s3, 0x380
    ctx->pc = 0x20ac6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 896));
label_20ac70:
    // 0x20ac70: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x20ac70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_20ac74:
    // 0x20ac74: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x20ac74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_20ac78:
    // 0x20ac78: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x20ac78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_20ac7c:
    // 0x20ac7c: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x20ac7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_20ac80:
    // 0x20ac80: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20ac80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20ac84:
    // 0x20ac84: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x20ac84u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_20ac88:
    // 0x20ac88: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x20ac88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_20ac8c:
    // 0x20ac8c: 0x24090078  addiu       $t1, $zero, 0x78
    ctx->pc = 0x20ac8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_20ac90:
    // 0x20ac90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20ac90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20ac94:
    // 0x20ac94: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x20ac94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_20ac98:
    // 0x20ac98: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x20ac98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_20ac9c:
    // 0x20ac9c: 0x240a01f0  addiu       $t2, $zero, 0x1F0
    ctx->pc = 0x20ac9cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 496));
label_20aca0:
    // 0x20aca0: 0xc05de30  jal         func_1778C0
label_20aca4:
    if (ctx->pc == 0x20ACA4u) {
        ctx->pc = 0x20ACA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ACA0u;
        // 0x20aca4: 0x240b0048  addiu       $t3, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20ACA8u;
        goto label_20aca8;
    }
    ctx->pc = 0x20ACA0u;
    SET_GPR_U32(ctx, 31, 0x20ACA8u);
    ctx->pc = 0x20ACA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20ACA0u;
    // 0x20aca4: 0x240b0048  addiu       $t3, $zero, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x20ACA0u, 0x20ACA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ACA8u;
label_20aca8:
    // 0x20aca8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x20aca8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20acac:
    // 0x20acac: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x20acacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20acb0:
    // 0x20acb0: 0x2741021  addu        $v0, $s3, $s4
    ctx->pc = 0x20acb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
label_20acb4:
    // 0x20acb4: 0x24430420  addiu       $v1, $v0, 0x420
    ctx->pc = 0x20acb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1056));
label_20acb8:
    // 0x20acb8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x20acb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20acbc:
    // 0x20acbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20acbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20acc0:
    // 0x20acc0: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x20acc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
label_20acc4:
    // 0x20acc4: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x20acc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_20acc8:
    // 0x20acc8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20acc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20accc:
    // 0x20accc: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x20acccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_20acd0:
    // 0x20acd0: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x20acd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_20acd4:
    // 0x20acd4: 0x240801c0  addiu       $t0, $zero, 0x1C0
    ctx->pc = 0x20acd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_20acd8:
    // 0x20acd8: 0x3409fe00  ori         $t1, $zero, 0xFE00
    ctx->pc = 0x20acd8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_20acdc:
    // 0x20acdc: 0x240a0050  addiu       $t2, $zero, 0x50
    ctx->pc = 0x20acdcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_20ace0:
    // 0x20ace0: 0xc054c60  jal         func_153180
label_20ace4:
    if (ctx->pc == 0x20ACE4u) {
        ctx->pc = 0x20ACE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ACE0u;
        // 0x20ace4: 0x240b0018  addiu       $t3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20ACE8u;
        goto label_20ace8;
    }
    ctx->pc = 0x20ACE0u;
    SET_GPR_U32(ctx, 31, 0x20ACE8u);
    ctx->pc = 0x20ACE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20ACE0u;
    // 0x20ace4: 0x240b0018  addiu       $t3, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153180u, 0x20ACE0u, 0x20ACE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ACE8u;
label_20ace8:
    // 0x20ace8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x20ace8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_20acec:
    // 0x20acec: 0x2aa20006  slti        $v0, $s5, 0x6
    ctx->pc = 0x20acecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)6) ? 1 : 0);
label_20acf0:
    // 0x20acf0: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_20acf4:
    if (ctx->pc == 0x20ACF4u) {
        ctx->pc = 0x20ACF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ACF0u;
        // 0x20acf4: 0x269400d0  addiu       $s4, $s4, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20ACF8u;
        goto label_20acf8;
    }
    ctx->pc = 0x20ACF0u;
    {
        const bool branch_taken_0x20acf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20ACF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ACF0u;
        // 0x20acf4: 0x269400d0  addiu       $s4, $s4, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20acf0) {
            ctx->pc = 0x20ACB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20acb0;
        }
    }
    ctx->pc = 0x20ACF8u;
label_20acf8:
    // 0x20acf8: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x20acf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_20acfc:
    // 0x20acfc: 0x2405002c  addiu       $a1, $zero, 0x2C
    ctx->pc = 0x20acfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_20ad00:
    // 0x20ad00: 0x2442fce0  addiu       $v0, $v0, -0x320
    ctx->pc = 0x20ad00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966496));
label_20ad04:
    // 0x20ad04: 0x519821  addu        $s3, $v0, $s1
    ctx->pc = 0x20ad04u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_20ad08:
    // 0x20ad08: 0xc05e234  jal         func_1788D0
label_20ad0c:
    if (ctx->pc == 0x20AD0Cu) {
        ctx->pc = 0x20AD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AD08u;
        // 0x20ad0c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AD10u;
        goto label_20ad10;
    }
    ctx->pc = 0x20AD08u;
    SET_GPR_U32(ctx, 31, 0x20AD10u);
    ctx->pc = 0x20AD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AD08u;
    // 0x20ad0c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x20AD08u, 0x20AD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AD10u;
label_20ad10:
    // 0x20ad10: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x20ad10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_20ad14:
    // 0x20ad14: 0x24050280  addiu       $a1, $zero, 0x280
    ctx->pc = 0x20ad14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_20ad18:
    // 0x20ad18: 0x240601c0  addiu       $a2, $zero, 0x1C0
    ctx->pc = 0x20ad18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_20ad1c:
    // 0x20ad1c: 0x3407fe00  ori         $a3, $zero, 0xFE00
    ctx->pc = 0x20ad1cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_20ad20:
    // 0x20ad20: 0x2408003c  addiu       $t0, $zero, 0x3C
    ctx->pc = 0x20ad20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_20ad24:
    // 0x20ad24: 0x24090028  addiu       $t1, $zero, 0x28
    ctx->pc = 0x20ad24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_20ad28:
    // 0x20ad28: 0xc07c084  jal         func_1F0210
label_20ad2c:
    if (ctx->pc == 0x20AD2Cu) {
        ctx->pc = 0x20AD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AD28u;
        // 0x20ad2c: 0x240a000a  addiu       $t2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AD30u;
        goto label_20ad30;
    }
    ctx->pc = 0x20AD28u;
    SET_GPR_U32(ctx, 31, 0x20AD30u);
    ctx->pc = 0x20AD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AD28u;
    // 0x20ad2c: 0x240a000a  addiu       $t2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0210u;
    { ctx->pc = 0x1f0210; return; }
    ctx->pc = 0x20AD30u;
label_20ad30:
    // 0x20ad30: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x20ad30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_20ad34:
    // 0x20ad34: 0x26f70830  addiu       $s7, $s7, 0x830
    ctx->pc = 0x20ad34u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 2096));
label_20ad38:
    // 0x20ad38: 0x2a430002  slti        $v1, $s2, 0x2
    ctx->pc = 0x20ad38u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_20ad3c:
    // 0x20ad3c: 0x26d60150  addiu       $s6, $s6, 0x150
    ctx->pc = 0x20ad3cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 336));
label_20ad40:
    // 0x20ad40: 0x26100900  addiu       $s0, $s0, 0x900
    ctx->pc = 0x20ad40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2304));
label_20ad44:
    // 0x20ad44: 0x1460ff54  bnez        $v1, . + 4 + (-0xAC << 2)
label_20ad48:
    if (ctx->pc == 0x20AD48u) {
        ctx->pc = 0x20AD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AD44u;
        // 0x20ad48: 0x263102d0  addiu       $s1, $s1, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 720));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AD4Cu;
        goto label_20ad4c;
    }
    ctx->pc = 0x20AD44u;
    {
        const bool branch_taken_0x20ad44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20AD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AD44u;
        // 0x20ad48: 0x263102d0  addiu       $s1, $s1, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 720));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ad44) {
            ctx->pc = 0x20AA98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20aa98;
        }
    }
    ctx->pc = 0x20AD4Cu;
label_20ad4c:
    // 0x20ad4c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x20ad4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_20ad50:
    // 0x20ad50: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x20ad50u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_20ad54:
    // 0x20ad54: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x20ad54u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_20ad58:
    // 0x20ad58: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x20ad58u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_20ad5c:
    // 0x20ad5c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x20ad5cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_20ad60:
    // 0x20ad60: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x20ad60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_20ad64:
    // 0x20ad64: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x20ad64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_20ad68:
    // 0x20ad68: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x20ad68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20ad6c:
    // 0x20ad6c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x20ad6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20ad70:
    // 0x20ad70: 0x3e00008  jr          $ra
label_20ad74:
    if (ctx->pc == 0x20AD74u) {
        ctx->pc = 0x20AD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AD70u;
        // 0x20ad74: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AD78u;
        goto label_20ad78;
    }
    ctx->pc = 0x20AD70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20AD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AD70u;
        // 0x20ad74: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AD70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20AD78u;
label_20ad78:
    // 0x20ad78: 0x0  nop
    ctx->pc = 0x20ad78u;
    // NOP
label_20ad7c:
    // 0x20ad7c: 0x0  nop
    ctx->pc = 0x20ad7cu;
    // NOP
label_20ad80:
    // 0x20ad80: 0x3e00008  jr          $ra
label_20ad84:
    if (ctx->pc == 0x20AD84u) {
        ctx->pc = 0x20AD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AD80u;
        // 0x20ad84: 0xaf84910c  sw          $a0, -0x6EF4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938892), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AD88u;
        goto label_20ad88;
    }
    ctx->pc = 0x20AD80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20AD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AD80u;
        // 0x20ad84: 0xaf84910c  sw          $a0, -0x6EF4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938892), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AD80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20AD88u;
label_20ad88:
    // 0x20ad88: 0x0  nop
    ctx->pc = 0x20ad88u;
    // NOP
label_20ad8c:
    // 0x20ad8c: 0x0  nop
    ctx->pc = 0x20ad8cu;
    // NOP
label_20ad90:
    // 0x20ad90: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x20ad90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_20ad94:
    // 0x20ad94: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x20ad94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_20ad98:
    // 0x20ad98: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x20ad98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_20ad9c:
    // 0x20ad9c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x20ad9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_20ada0:
    // 0x20ada0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x20ada0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_20ada4:
    // 0x20ada4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x20ada4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20ada8:
    // 0x20ada8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x20ada8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_20adac:
    // 0x20adac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20adacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    ctx->pc = 0x20adb0u;
    return;
}

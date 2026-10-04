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


void FUN_0017faa0_part416(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x24a4d0u: goto label_24a4d0;
        case 0x24a4d4u: goto label_24a4d4;
        case 0x24a4d8u: goto label_24a4d8;
        case 0x24a4dcu: goto label_24a4dc;
        case 0x24a4e0u: goto label_24a4e0;
        case 0x24a4e4u: goto label_24a4e4;
        case 0x24a4e8u: goto label_24a4e8;
        case 0x24a4ecu: goto label_24a4ec;
        case 0x24a4f0u: goto label_24a4f0;
        case 0x24a4f4u: goto label_24a4f4;
        case 0x24a4f8u: goto label_24a4f8;
        case 0x24a4fcu: goto label_24a4fc;
        case 0x24a500u: goto label_24a500;
        case 0x24a504u: goto label_24a504;
        case 0x24a508u: goto label_24a508;
        case 0x24a50cu: goto label_24a50c;
        case 0x24a510u: goto label_24a510;
        case 0x24a514u: goto label_24a514;
        case 0x24a518u: goto label_24a518;
        case 0x24a51cu: goto label_24a51c;
        case 0x24a520u: goto label_24a520;
        case 0x24a524u: goto label_24a524;
        case 0x24a528u: goto label_24a528;
        case 0x24a52cu: goto label_24a52c;
        case 0x24a530u: goto label_24a530;
        case 0x24a534u: goto label_24a534;
        case 0x24a538u: goto label_24a538;
        case 0x24a53cu: goto label_24a53c;
        case 0x24a540u: goto label_24a540;
        case 0x24a544u: goto label_24a544;
        case 0x24a548u: goto label_24a548;
        case 0x24a54cu: goto label_24a54c;
        case 0x24a550u: goto label_24a550;
        case 0x24a554u: goto label_24a554;
        case 0x24a558u: goto label_24a558;
        case 0x24a55cu: goto label_24a55c;
        case 0x24a560u: goto label_24a560;
        case 0x24a564u: goto label_24a564;
        case 0x24a568u: goto label_24a568;
        case 0x24a56cu: goto label_24a56c;
        case 0x24a570u: goto label_24a570;
        case 0x24a574u: goto label_24a574;
        case 0x24a578u: goto label_24a578;
        case 0x24a57cu: goto label_24a57c;
        case 0x24a580u: goto label_24a580;
        case 0x24a584u: goto label_24a584;
        case 0x24a588u: goto label_24a588;
        case 0x24a58cu: goto label_24a58c;
        case 0x24a590u: goto label_24a590;
        case 0x24a594u: goto label_24a594;
        case 0x24a598u: goto label_24a598;
        case 0x24a59cu: goto label_24a59c;
        case 0x24a5a0u: goto label_24a5a0;
        case 0x24a5a4u: goto label_24a5a4;
        case 0x24a5a8u: goto label_24a5a8;
        case 0x24a5acu: goto label_24a5ac;
        case 0x24a5b0u: goto label_24a5b0;
        case 0x24a5b4u: goto label_24a5b4;
        case 0x24a5b8u: goto label_24a5b8;
        case 0x24a5bcu: goto label_24a5bc;
        case 0x24a5c0u: goto label_24a5c0;
        case 0x24a5c4u: goto label_24a5c4;
        case 0x24a5c8u: goto label_24a5c8;
        case 0x24a5ccu: goto label_24a5cc;
        case 0x24a5d0u: goto label_24a5d0;
        case 0x24a5d4u: goto label_24a5d4;
        case 0x24a5d8u: goto label_24a5d8;
        case 0x24a5dcu: goto label_24a5dc;
        case 0x24a5e0u: goto label_24a5e0;
        case 0x24a5e4u: goto label_24a5e4;
        case 0x24a5e8u: goto label_24a5e8;
        case 0x24a5ecu: goto label_24a5ec;
        case 0x24a5f0u: goto label_24a5f0;
        case 0x24a5f4u: goto label_24a5f4;
        case 0x24a5f8u: goto label_24a5f8;
        case 0x24a5fcu: goto label_24a5fc;
        case 0x24a600u: goto label_24a600;
        case 0x24a604u: goto label_24a604;
        case 0x24a608u: goto label_24a608;
        case 0x24a60cu: goto label_24a60c;
        case 0x24a610u: goto label_24a610;
        case 0x24a614u: goto label_24a614;
        case 0x24a618u: goto label_24a618;
        case 0x24a61cu: goto label_24a61c;
        case 0x24a620u: goto label_24a620;
        case 0x24a624u: goto label_24a624;
        case 0x24a628u: goto label_24a628;
        case 0x24a62cu: goto label_24a62c;
        case 0x24a630u: goto label_24a630;
        case 0x24a634u: goto label_24a634;
        case 0x24a638u: goto label_24a638;
        case 0x24a63cu: goto label_24a63c;
        case 0x24a640u: goto label_24a640;
        case 0x24a644u: goto label_24a644;
        case 0x24a648u: goto label_24a648;
        case 0x24a64cu: goto label_24a64c;
        case 0x24a650u: goto label_24a650;
        case 0x24a654u: goto label_24a654;
        case 0x24a658u: goto label_24a658;
        case 0x24a65cu: goto label_24a65c;
        case 0x24a660u: goto label_24a660;
        case 0x24a664u: goto label_24a664;
        case 0x24a668u: goto label_24a668;
        case 0x24a66cu: goto label_24a66c;
        case 0x24a670u: goto label_24a670;
        case 0x24a674u: goto label_24a674;
        case 0x24a678u: goto label_24a678;
        case 0x24a67cu: goto label_24a67c;
        case 0x24a680u: goto label_24a680;
        case 0x24a684u: goto label_24a684;
        case 0x24a688u: goto label_24a688;
        case 0x24a68cu: goto label_24a68c;
        case 0x24a690u: goto label_24a690;
        case 0x24a694u: goto label_24a694;
        case 0x24a698u: goto label_24a698;
        case 0x24a69cu: goto label_24a69c;
        case 0x24a6a0u: goto label_24a6a0;
        case 0x24a6a4u: goto label_24a6a4;
        case 0x24a6a8u: goto label_24a6a8;
        case 0x24a6acu: goto label_24a6ac;
        case 0x24a6b0u: goto label_24a6b0;
        case 0x24a6b4u: goto label_24a6b4;
        case 0x24a6b8u: goto label_24a6b8;
        case 0x24a6bcu: goto label_24a6bc;
        case 0x24a6c0u: goto label_24a6c0;
        case 0x24a6c4u: goto label_24a6c4;
        case 0x24a6c8u: goto label_24a6c8;
        case 0x24a6ccu: goto label_24a6cc;
        case 0x24a6d0u: goto label_24a6d0;
        case 0x24a6d4u: goto label_24a6d4;
        case 0x24a6d8u: goto label_24a6d8;
        case 0x24a6dcu: goto label_24a6dc;
        case 0x24a6e0u: goto label_24a6e0;
        case 0x24a6e4u: goto label_24a6e4;
        case 0x24a6e8u: goto label_24a6e8;
        case 0x24a6ecu: goto label_24a6ec;
        case 0x24a6f0u: goto label_24a6f0;
        case 0x24a6f4u: goto label_24a6f4;
        case 0x24a6f8u: goto label_24a6f8;
        case 0x24a6fcu: goto label_24a6fc;
        case 0x24a700u: goto label_24a700;
        case 0x24a704u: goto label_24a704;
        case 0x24a708u: goto label_24a708;
        case 0x24a70cu: goto label_24a70c;
        case 0x24a710u: goto label_24a710;
        case 0x24a714u: goto label_24a714;
        case 0x24a718u: goto label_24a718;
        case 0x24a71cu: goto label_24a71c;
        case 0x24a720u: goto label_24a720;
        case 0x24a724u: goto label_24a724;
        case 0x24a728u: goto label_24a728;
        case 0x24a72cu: goto label_24a72c;
        case 0x24a730u: goto label_24a730;
        case 0x24a734u: goto label_24a734;
        case 0x24a738u: goto label_24a738;
        case 0x24a73cu: goto label_24a73c;
        case 0x24a740u: goto label_24a740;
        case 0x24a744u: goto label_24a744;
        case 0x24a748u: goto label_24a748;
        case 0x24a74cu: goto label_24a74c;
        case 0x24a750u: goto label_24a750;
        case 0x24a754u: goto label_24a754;
        case 0x24a758u: goto label_24a758;
        case 0x24a75cu: goto label_24a75c;
        case 0x24a760u: goto label_24a760;
        case 0x24a764u: goto label_24a764;
        case 0x24a768u: goto label_24a768;
        case 0x24a76cu: goto label_24a76c;
        case 0x24a770u: goto label_24a770;
        case 0x24a774u: goto label_24a774;
        case 0x24a778u: goto label_24a778;
        case 0x24a77cu: goto label_24a77c;
        case 0x24a780u: goto label_24a780;
        case 0x24a784u: goto label_24a784;
        case 0x24a788u: goto label_24a788;
        case 0x24a78cu: goto label_24a78c;
        case 0x24a790u: goto label_24a790;
        case 0x24a794u: goto label_24a794;
        case 0x24a798u: goto label_24a798;
        case 0x24a79cu: goto label_24a79c;
        case 0x24a7a0u: goto label_24a7a0;
        case 0x24a7a4u: goto label_24a7a4;
        case 0x24a7a8u: goto label_24a7a8;
        case 0x24a7acu: goto label_24a7ac;
        case 0x24a7b0u: goto label_24a7b0;
        case 0x24a7b4u: goto label_24a7b4;
        case 0x24a7b8u: goto label_24a7b8;
        case 0x24a7bcu: goto label_24a7bc;
        case 0x24a7c0u: goto label_24a7c0;
        case 0x24a7c4u: goto label_24a7c4;
        case 0x24a7c8u: goto label_24a7c8;
        case 0x24a7ccu: goto label_24a7cc;
        case 0x24a7d0u: goto label_24a7d0;
        case 0x24a7d4u: goto label_24a7d4;
        case 0x24a7d8u: goto label_24a7d8;
        case 0x24a7dcu: goto label_24a7dc;
        case 0x24a7e0u: goto label_24a7e0;
        case 0x24a7e4u: goto label_24a7e4;
        case 0x24a7e8u: goto label_24a7e8;
        case 0x24a7ecu: goto label_24a7ec;
        case 0x24a7f0u: goto label_24a7f0;
        case 0x24a7f4u: goto label_24a7f4;
        case 0x24a7f8u: goto label_24a7f8;
        case 0x24a7fcu: goto label_24a7fc;
        case 0x24a800u: goto label_24a800;
        case 0x24a804u: goto label_24a804;
        case 0x24a808u: goto label_24a808;
        case 0x24a80cu: goto label_24a80c;
        case 0x24a810u: goto label_24a810;
        case 0x24a814u: goto label_24a814;
        case 0x24a818u: goto label_24a818;
        case 0x24a81cu: goto label_24a81c;
        case 0x24a820u: goto label_24a820;
        case 0x24a824u: goto label_24a824;
        case 0x24a828u: goto label_24a828;
        case 0x24a82cu: goto label_24a82c;
        case 0x24a830u: goto label_24a830;
        case 0x24a834u: goto label_24a834;
        case 0x24a838u: goto label_24a838;
        case 0x24a83cu: goto label_24a83c;
        case 0x24a840u: goto label_24a840;
        case 0x24a844u: goto label_24a844;
        case 0x24a848u: goto label_24a848;
        case 0x24a84cu: goto label_24a84c;
        case 0x24a850u: goto label_24a850;
        case 0x24a854u: goto label_24a854;
        case 0x24a858u: goto label_24a858;
        case 0x24a85cu: goto label_24a85c;
        case 0x24a860u: goto label_24a860;
        case 0x24a864u: goto label_24a864;
        case 0x24a868u: goto label_24a868;
        case 0x24a86cu: goto label_24a86c;
        case 0x24a870u: goto label_24a870;
        case 0x24a874u: goto label_24a874;
        case 0x24a878u: goto label_24a878;
        case 0x24a87cu: goto label_24a87c;
        case 0x24a880u: goto label_24a880;
        case 0x24a884u: goto label_24a884;
        case 0x24a888u: goto label_24a888;
        case 0x24a88cu: goto label_24a88c;
        case 0x24a890u: goto label_24a890;
        case 0x24a894u: goto label_24a894;
        case 0x24a898u: goto label_24a898;
        case 0x24a89cu: goto label_24a89c;
        case 0x24a8a0u: goto label_24a8a0;
        case 0x24a8a4u: goto label_24a8a4;
        case 0x24a8a8u: goto label_24a8a8;
        case 0x24a8acu: goto label_24a8ac;
        case 0x24a8b0u: goto label_24a8b0;
        case 0x24a8b4u: goto label_24a8b4;
        case 0x24a8b8u: goto label_24a8b8;
        case 0x24a8bcu: goto label_24a8bc;
        case 0x24a8c0u: goto label_24a8c0;
        case 0x24a8c4u: goto label_24a8c4;
        case 0x24a8c8u: goto label_24a8c8;
        case 0x24a8ccu: goto label_24a8cc;
        case 0x24a8d0u: goto label_24a8d0;
        case 0x24a8d4u: goto label_24a8d4;
        case 0x24a8d8u: goto label_24a8d8;
        case 0x24a8dcu: goto label_24a8dc;
        case 0x24a8e0u: goto label_24a8e0;
        case 0x24a8e4u: goto label_24a8e4;
        case 0x24a8e8u: goto label_24a8e8;
        case 0x24a8ecu: goto label_24a8ec;
        case 0x24a8f0u: goto label_24a8f0;
        case 0x24a8f4u: goto label_24a8f4;
        case 0x24a8f8u: goto label_24a8f8;
        case 0x24a8fcu: goto label_24a8fc;
        case 0x24a900u: goto label_24a900;
        case 0x24a904u: goto label_24a904;
        case 0x24a908u: goto label_24a908;
        case 0x24a90cu: goto label_24a90c;
        case 0x24a910u: goto label_24a910;
        case 0x24a914u: goto label_24a914;
        case 0x24a918u: goto label_24a918;
        case 0x24a91cu: goto label_24a91c;
        case 0x24a920u: goto label_24a920;
        case 0x24a924u: goto label_24a924;
        case 0x24a928u: goto label_24a928;
        case 0x24a92cu: goto label_24a92c;
        case 0x24a930u: goto label_24a930;
        case 0x24a934u: goto label_24a934;
        case 0x24a938u: goto label_24a938;
        case 0x24a93cu: goto label_24a93c;
        case 0x24a940u: goto label_24a940;
        case 0x24a944u: goto label_24a944;
        case 0x24a948u: goto label_24a948;
        case 0x24a94cu: goto label_24a94c;
        case 0x24a950u: goto label_24a950;
        case 0x24a954u: goto label_24a954;
        case 0x24a958u: goto label_24a958;
        case 0x24a95cu: goto label_24a95c;
        case 0x24a960u: goto label_24a960;
        case 0x24a964u: goto label_24a964;
        case 0x24a968u: goto label_24a968;
        case 0x24a96cu: goto label_24a96c;
        case 0x24a970u: goto label_24a970;
        case 0x24a974u: goto label_24a974;
        case 0x24a978u: goto label_24a978;
        case 0x24a97cu: goto label_24a97c;
        case 0x24a980u: goto label_24a980;
        case 0x24a984u: goto label_24a984;
        case 0x24a988u: goto label_24a988;
        case 0x24a98cu: goto label_24a98c;
        case 0x24a990u: goto label_24a990;
        case 0x24a994u: goto label_24a994;
        case 0x24a998u: goto label_24a998;
        case 0x24a99cu: goto label_24a99c;
        case 0x24a9a0u: goto label_24a9a0;
        case 0x24a9a4u: goto label_24a9a4;
        case 0x24a9a8u: goto label_24a9a8;
        case 0x24a9acu: goto label_24a9ac;
        case 0x24a9b0u: goto label_24a9b0;
        case 0x24a9b4u: goto label_24a9b4;
        case 0x24a9b8u: goto label_24a9b8;
        case 0x24a9bcu: goto label_24a9bc;
        case 0x24a9c0u: goto label_24a9c0;
        case 0x24a9c4u: goto label_24a9c4;
        case 0x24a9c8u: goto label_24a9c8;
        case 0x24a9ccu: goto label_24a9cc;
        case 0x24a9d0u: goto label_24a9d0;
        case 0x24a9d4u: goto label_24a9d4;
        case 0x24a9d8u: goto label_24a9d8;
        case 0x24a9dcu: goto label_24a9dc;
        case 0x24a9e0u: goto label_24a9e0;
        case 0x24a9e4u: goto label_24a9e4;
        case 0x24a9e8u: goto label_24a9e8;
        case 0x24a9ecu: goto label_24a9ec;
        case 0x24a9f0u: goto label_24a9f0;
        case 0x24a9f4u: goto label_24a9f4;
        case 0x24a9f8u: goto label_24a9f8;
        case 0x24a9fcu: goto label_24a9fc;
        case 0x24aa00u: goto label_24aa00;
        case 0x24aa04u: goto label_24aa04;
        case 0x24aa08u: goto label_24aa08;
        case 0x24aa0cu: goto label_24aa0c;
        case 0x24aa10u: goto label_24aa10;
        case 0x24aa14u: goto label_24aa14;
        case 0x24aa18u: goto label_24aa18;
        case 0x24aa1cu: goto label_24aa1c;
        case 0x24aa20u: goto label_24aa20;
        case 0x24aa24u: goto label_24aa24;
        case 0x24aa28u: goto label_24aa28;
        case 0x24aa2cu: goto label_24aa2c;
        case 0x24aa30u: goto label_24aa30;
        case 0x24aa34u: goto label_24aa34;
        case 0x24aa38u: goto label_24aa38;
        case 0x24aa3cu: goto label_24aa3c;
        case 0x24aa40u: goto label_24aa40;
        case 0x24aa44u: goto label_24aa44;
        case 0x24aa48u: goto label_24aa48;
        case 0x24aa4cu: goto label_24aa4c;
        case 0x24aa50u: goto label_24aa50;
        case 0x24aa54u: goto label_24aa54;
        case 0x24aa58u: goto label_24aa58;
        case 0x24aa5cu: goto label_24aa5c;
        case 0x24aa60u: goto label_24aa60;
        case 0x24aa64u: goto label_24aa64;
        case 0x24aa68u: goto label_24aa68;
        case 0x24aa6cu: goto label_24aa6c;
        case 0x24aa70u: goto label_24aa70;
        case 0x24aa74u: goto label_24aa74;
        case 0x24aa78u: goto label_24aa78;
        case 0x24aa7cu: goto label_24aa7c;
        case 0x24aa80u: goto label_24aa80;
        case 0x24aa84u: goto label_24aa84;
        case 0x24aa88u: goto label_24aa88;
        case 0x24aa8cu: goto label_24aa8c;
        case 0x24aa90u: goto label_24aa90;
        case 0x24aa94u: goto label_24aa94;
        case 0x24aa98u: goto label_24aa98;
        case 0x24aa9cu: goto label_24aa9c;
        case 0x24aaa0u: goto label_24aaa0;
        case 0x24aaa4u: goto label_24aaa4;
        case 0x24aaa8u: goto label_24aaa8;
        case 0x24aaacu: goto label_24aaac;
        case 0x24aab0u: goto label_24aab0;
        case 0x24aab4u: goto label_24aab4;
        case 0x24aab8u: goto label_24aab8;
        case 0x24aabcu: goto label_24aabc;
        case 0x24aac0u: goto label_24aac0;
        case 0x24aac4u: goto label_24aac4;
        case 0x24aac8u: goto label_24aac8;
        case 0x24aaccu: goto label_24aacc;
        case 0x24aad0u: goto label_24aad0;
        case 0x24aad4u: goto label_24aad4;
        case 0x24aad8u: goto label_24aad8;
        case 0x24aadcu: goto label_24aadc;
        case 0x24aae0u: goto label_24aae0;
        case 0x24aae4u: goto label_24aae4;
        case 0x24aae8u: goto label_24aae8;
        case 0x24aaecu: goto label_24aaec;
        case 0x24aaf0u: goto label_24aaf0;
        case 0x24aaf4u: goto label_24aaf4;
        case 0x24aaf8u: goto label_24aaf8;
        case 0x24aafcu: goto label_24aafc;
        case 0x24ab00u: goto label_24ab00;
        case 0x24ab04u: goto label_24ab04;
        case 0x24ab08u: goto label_24ab08;
        case 0x24ab0cu: goto label_24ab0c;
        case 0x24ab10u: goto label_24ab10;
        case 0x24ab14u: goto label_24ab14;
        case 0x24ab18u: goto label_24ab18;
        case 0x24ab1cu: goto label_24ab1c;
        case 0x24ab20u: goto label_24ab20;
        case 0x24ab24u: goto label_24ab24;
        case 0x24ab28u: goto label_24ab28;
        case 0x24ab2cu: goto label_24ab2c;
        case 0x24ab30u: goto label_24ab30;
        case 0x24ab34u: goto label_24ab34;
        case 0x24ab38u: goto label_24ab38;
        case 0x24ab3cu: goto label_24ab3c;
        case 0x24ab40u: goto label_24ab40;
        case 0x24ab44u: goto label_24ab44;
        case 0x24ab48u: goto label_24ab48;
        case 0x24ab4cu: goto label_24ab4c;
        case 0x24ab50u: goto label_24ab50;
        case 0x24ab54u: goto label_24ab54;
        case 0x24ab58u: goto label_24ab58;
        case 0x24ab5cu: goto label_24ab5c;
        case 0x24ab60u: goto label_24ab60;
        case 0x24ab64u: goto label_24ab64;
        case 0x24ab68u: goto label_24ab68;
        case 0x24ab6cu: goto label_24ab6c;
        case 0x24ab70u: goto label_24ab70;
        case 0x24ab74u: goto label_24ab74;
        case 0x24ab78u: goto label_24ab78;
        case 0x24ab7cu: goto label_24ab7c;
        case 0x24ab80u: goto label_24ab80;
        case 0x24ab84u: goto label_24ab84;
        case 0x24ab88u: goto label_24ab88;
        case 0x24ab8cu: goto label_24ab8c;
        case 0x24ab90u: goto label_24ab90;
        case 0x24ab94u: goto label_24ab94;
        case 0x24ab98u: goto label_24ab98;
        case 0x24ab9cu: goto label_24ab9c;
        case 0x24aba0u: goto label_24aba0;
        case 0x24aba4u: goto label_24aba4;
        case 0x24aba8u: goto label_24aba8;
        case 0x24abacu: goto label_24abac;
        case 0x24abb0u: goto label_24abb0;
        case 0x24abb4u: goto label_24abb4;
        case 0x24abb8u: goto label_24abb8;
        case 0x24abbcu: goto label_24abbc;
        case 0x24abc0u: goto label_24abc0;
        case 0x24abc4u: goto label_24abc4;
        case 0x24abc8u: goto label_24abc8;
        case 0x24abccu: goto label_24abcc;
        case 0x24abd0u: goto label_24abd0;
        case 0x24abd4u: goto label_24abd4;
        case 0x24abd8u: goto label_24abd8;
        case 0x24abdcu: goto label_24abdc;
        case 0x24abe0u: goto label_24abe0;
        case 0x24abe4u: goto label_24abe4;
        case 0x24abe8u: goto label_24abe8;
        case 0x24abecu: goto label_24abec;
        case 0x24abf0u: goto label_24abf0;
        case 0x24abf4u: goto label_24abf4;
        case 0x24abf8u: goto label_24abf8;
        case 0x24abfcu: goto label_24abfc;
        case 0x24ac00u: goto label_24ac00;
        case 0x24ac04u: goto label_24ac04;
        case 0x24ac08u: goto label_24ac08;
        case 0x24ac0cu: goto label_24ac0c;
        case 0x24ac10u: goto label_24ac10;
        case 0x24ac14u: goto label_24ac14;
        case 0x24ac18u: goto label_24ac18;
        case 0x24ac1cu: goto label_24ac1c;
        case 0x24ac20u: goto label_24ac20;
        case 0x24ac24u: goto label_24ac24;
        case 0x24ac28u: goto label_24ac28;
        case 0x24ac2cu: goto label_24ac2c;
        case 0x24ac30u: goto label_24ac30;
        case 0x24ac34u: goto label_24ac34;
        case 0x24ac38u: goto label_24ac38;
        case 0x24ac3cu: goto label_24ac3c;
        case 0x24ac40u: goto label_24ac40;
        case 0x24ac44u: goto label_24ac44;
        case 0x24ac48u: goto label_24ac48;
        case 0x24ac4cu: goto label_24ac4c;
        case 0x24ac50u: goto label_24ac50;
        case 0x24ac54u: goto label_24ac54;
        case 0x24ac58u: goto label_24ac58;
        case 0x24ac5cu: goto label_24ac5c;
        case 0x24ac60u: goto label_24ac60;
        case 0x24ac64u: goto label_24ac64;
        case 0x24ac68u: goto label_24ac68;
        case 0x24ac6cu: goto label_24ac6c;
        case 0x24ac70u: goto label_24ac70;
        case 0x24ac74u: goto label_24ac74;
        case 0x24ac78u: goto label_24ac78;
        case 0x24ac7cu: goto label_24ac7c;
        case 0x24ac80u: goto label_24ac80;
        case 0x24ac84u: goto label_24ac84;
        case 0x24ac88u: goto label_24ac88;
        case 0x24ac8cu: goto label_24ac8c;
        case 0x24ac90u: goto label_24ac90;
        case 0x24ac94u: goto label_24ac94;
        case 0x24ac98u: goto label_24ac98;
        case 0x24ac9cu: goto label_24ac9c;
        default: return;
    }

label_24a4d0:
    // 0x24a4d0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x24a4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_24a4d4:
    // 0x24a4d4: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x24a4d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_24a4d8:
    // 0x24a4d8: 0x8f8292fc  lw          $v0, -0x6D04($gp)
    ctx->pc = 0x24a4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_24a4dc:
    // 0x24a4dc: 0x1000000c  b           . + 4 + (0xC << 2)
label_24a4e0:
    if (ctx->pc == 0x24A4E0u) {
        ctx->pc = 0x24A4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A4DCu;
        // 0x24a4e0: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A4E4u;
        goto label_24a4e4;
    }
    ctx->pc = 0x24A4DCu;
    {
        const bool branch_taken_0x24a4dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A4DCu;
        // 0x24a4e0: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a4dc) {
            ctx->pc = 0x24A510u;
            goto label_24a510;
        }
    }
    ctx->pc = 0x24A4E4u;
label_24a4e4:
    // 0x24a4e4: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x24a4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
label_24a4e8:
    // 0x24a4e8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x24a4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_24a4ec:
    // 0x24a4ec: 0x24421d7c  addiu       $v0, $v0, 0x1D7C
    ctx->pc = 0x24a4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7548));
label_24a4f0:
    // 0x24a4f0: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x24a4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_24a4f4:
    // 0x24a4f4: 0x84770000  lh          $s7, 0x0($v1)
    ctx->pc = 0x24a4f4u;
    SET_GPR_S32(ctx, 23, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_24a4f8:
    // 0x24a4f8: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x24a4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
label_24a4fc:
    // 0x24a4fc: 0x24421d7e  addiu       $v0, $v0, 0x1D7E
    ctx->pc = 0x24a4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7550));
label_24a500:
    // 0x24a500: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x24a500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_24a504:
    // 0x24a504: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x24a504u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_24a508:
    // 0x24a508: 0x8f8292fc  lw          $v0, -0x6D04($gp)
    ctx->pc = 0x24a508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_24a50c:
    // 0x24a50c: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x24a50cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
label_24a510:
    // 0x24a510: 0x8f8292fc  lw          $v0, -0x6D04($gp)
    ctx->pc = 0x24a510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_24a514:
    // 0x24a514: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x24a514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_24a518:
    // 0x24a518: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x24a518u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_24a51c:
    // 0x24a51c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24a51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24a520:
    // 0x24a520: 0xc0700b4  jal         func_1C02D0
label_24a524:
    if (ctx->pc == 0x24A524u) {
        ctx->pc = 0x24A524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A520u;
        // 0x24a524: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A528u;
        goto label_24a528;
    }
    ctx->pc = 0x24A520u;
    SET_GPR_U32(ctx, 31, 0x24A528u);
    ctx->pc = 0x24A524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A520u;
    // 0x24a524: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C02D0u;
    { ctx->pc = 0x1c02d0; return; }
    ctx->pc = 0x24A528u;
label_24a528:
    // 0x24a528: 0x8f8392fc  lw          $v1, -0x6D04($gp)
    ctx->pc = 0x24a528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_24a52c:
    // 0x24a52c: 0x240407e5  addiu       $a0, $zero, 0x7E5
    ctx->pc = 0x24a52cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2021));
label_24a530:
    // 0x24a530: 0xc041738  jal         func_105CE0
label_24a534:
    if (ctx->pc == 0x24A534u) {
        ctx->pc = 0x24A534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A530u;
        // 0x24a534: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A538u;
        goto label_24a538;
    }
    ctx->pc = 0x24A530u;
    SET_GPR_U32(ctx, 31, 0x24A538u);
    ctx->pc = 0x24A534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A530u;
    // 0x24a534: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x24A530u, 0x24A538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A538u;
label_24a538:
    // 0x24a538: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x24a538u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_24a53c:
    // 0x24a53c: 0xc070080  jal         func_1C0200
label_24a540:
    if (ctx->pc == 0x24A540u) {
        ctx->pc = 0x24A540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A53Cu;
        // 0x24a540: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A544u;
        goto label_24a544;
    }
    ctx->pc = 0x24A53Cu;
    SET_GPR_U32(ctx, 31, 0x24A544u);
    ctx->pc = 0x24A540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A53Cu;
    // 0x24a540: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x24A544u;
label_24a544:
    // 0x24a544: 0x240407e5  addiu       $a0, $zero, 0x7E5
    ctx->pc = 0x24a544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2021));
label_24a548:
    // 0x24a548: 0xc0416e4  jal         func_105B90
label_24a54c:
    if (ctx->pc == 0x24A54Cu) {
        ctx->pc = 0x24A54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A548u;
        // 0x24a54c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A550u;
        goto label_24a550;
    }
    ctx->pc = 0x24A548u;
    SET_GPR_U32(ctx, 31, 0x24A550u);
    ctx->pc = 0x24A54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A548u;
    // 0x24a54c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B90u, 0x24A548u, 0x24A550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A550u;
label_24a550:
    // 0x24a550: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x24a550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_24a554:
    // 0x24a554: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x24a554u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24a558:
    // 0x24a558: 0xc0700b4  jal         func_1C02D0
label_24a55c:
    if (ctx->pc == 0x24A55Cu) {
        ctx->pc = 0x24A55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A558u;
        // 0x24a55c: 0x102080  sll         $a0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A560u;
        goto label_24a560;
    }
    ctx->pc = 0x24A558u;
    SET_GPR_U32(ctx, 31, 0x24A560u);
    ctx->pc = 0x24A55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A558u;
    // 0x24a55c: 0x102080  sll         $a0, $s0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C02D0u;
    { ctx->pc = 0x1c02d0; return; }
    ctx->pc = 0x24A560u;
label_24a560:
    // 0x24a560: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x24a560u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_24a564:
    // 0x24a564: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x24a564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
label_24a568:
    // 0x24a568: 0x1020002a  beqz        $at, . + 4 + (0x2A << 2)
label_24a56c:
    if (ctx->pc == 0x24A56Cu) {
        ctx->pc = 0x24A56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A568u;
        // 0x24a56c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A570u;
        goto label_24a570;
    }
    ctx->pc = 0x24A568u;
    {
        const bool branch_taken_0x24a568 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A568u;
        // 0x24a56c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a568) {
            ctx->pc = 0x24A614u;
            goto label_24a614;
        }
    }
    ctx->pc = 0x24A570u;
label_24a570:
    // 0x24a570: 0x2a010009  slti        $at, $s0, 0x9
    ctx->pc = 0x24a570u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
label_24a574:
    // 0x24a574: 0x1420001a  bnez        $at, . + 4 + (0x1A << 2)
label_24a578:
    if (ctx->pc == 0x24A578u) {
        ctx->pc = 0x24A578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A574u;
        // 0x24a578: 0x2606fff8  addiu       $a2, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A57Cu;
        goto label_24a57c;
    }
    ctx->pc = 0x24A574u;
    {
        const bool branch_taken_0x24a574 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x24A578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A574u;
        // 0x24a578: 0x2606fff8  addiu       $a2, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a574) {
            ctx->pc = 0x24A5E0u;
            goto label_24a5e0;
        }
    }
    ctx->pc = 0x24A57Cu;
label_24a57c:
    // 0x24a57c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x24a57cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24a580:
    // 0x24a580: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x24a580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_24a584:
    // 0x24a584: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x24a584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_24a588:
    // 0x24a588: 0x472021  addu        $a0, $v0, $a3
    ctx->pc = 0x24a588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_24a58c:
    // 0x24a58c: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x24a58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_24a590:
    // 0x24a590: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x24a590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_24a594:
    // 0x24a594: 0x474021  addu        $t0, $v0, $a3
    ctx->pc = 0x24a594u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_24a598:
    // 0x24a598: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x24a598u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
label_24a59c:
    // 0x24a59c: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x24a59cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_24a5a0:
    // 0x24a5a0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x24a5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_24a5a4:
    // 0x24a5a4: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x24a5a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
label_24a5a8:
    // 0x24a5a8: 0xad030004  sw          $v1, 0x4($t0)
    ctx->pc = 0x24a5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
label_24a5ac:
    // 0x24a5ac: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x24a5acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_24a5b0:
    // 0x24a5b0: 0xad030008  sw          $v1, 0x8($t0)
    ctx->pc = 0x24a5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 3));
label_24a5b4:
    // 0x24a5b4: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x24a5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_24a5b8:
    // 0x24a5b8: 0xad03000c  sw          $v1, 0xC($t0)
    ctx->pc = 0x24a5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 3));
label_24a5bc:
    // 0x24a5bc: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x24a5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_24a5c0:
    // 0x24a5c0: 0xad030010  sw          $v1, 0x10($t0)
    ctx->pc = 0x24a5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 3));
label_24a5c4:
    // 0x24a5c4: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x24a5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_24a5c8:
    // 0x24a5c8: 0xad030014  sw          $v1, 0x14($t0)
    ctx->pc = 0x24a5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 3));
label_24a5cc:
    // 0x24a5cc: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x24a5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_24a5d0:
    // 0x24a5d0: 0xad030018  sw          $v1, 0x18($t0)
    ctx->pc = 0x24a5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 3));
label_24a5d4:
    // 0x24a5d4: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x24a5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_24a5d8:
    // 0x24a5d8: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
label_24a5dc:
    if (ctx->pc == 0x24A5DCu) {
        ctx->pc = 0x24A5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A5D8u;
        // 0x24a5dc: 0xad03001c  sw          $v1, 0x1C($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A5E0u;
        goto label_24a5e0;
    }
    ctx->pc = 0x24A5D8u;
    {
        const bool branch_taken_0x24a5d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24A5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A5D8u;
        // 0x24a5dc: 0xad03001c  sw          $v1, 0x1C($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a5d8) {
            ctx->pc = 0x24A580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24a580;
        }
    }
    ctx->pc = 0x24A5E0u;
label_24a5e0:
    // 0x24a5e0: 0xb0082a  slt         $at, $a1, $s0
    ctx->pc = 0x24a5e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_24a5e4:
    // 0x24a5e4: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_24a5e8:
    if (ctx->pc == 0x24A5E8u) {
        ctx->pc = 0x24A5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A5E4u;
        // 0x24a5e8: 0x53080  sll         $a2, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A5ECu;
        goto label_24a5ec;
    }
    ctx->pc = 0x24A5E4u;
    {
        const bool branch_taken_0x24a5e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A5E4u;
        // 0x24a5e8: 0x53080  sll         $a2, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a5e4) {
            ctx->pc = 0x24A614u;
            goto label_24a614;
        }
    }
    ctx->pc = 0x24A5ECu;
label_24a5ec:
    // 0x24a5ec: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x24a5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_24a5f0:
    // 0x24a5f0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x24a5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_24a5f4:
    // 0x24a5f4: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x24a5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_24a5f8:
    // 0x24a5f8: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x24a5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_24a5fc:
    // 0x24a5fc: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x24a5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_24a600:
    // 0x24a600: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x24a600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_24a604:
    // 0x24a604: 0xb0102a  slt         $v0, $a1, $s0
    ctx->pc = 0x24a604u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_24a608:
    // 0x24a608: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x24a608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_24a60c:
    // 0x24a60c: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_24a610:
    if (ctx->pc == 0x24A610u) {
        ctx->pc = 0x24A610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A60Cu;
        // 0x24a610: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A614u;
        goto label_24a614;
    }
    ctx->pc = 0x24A60Cu;
    {
        const bool branch_taken_0x24a60c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24A610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A60Cu;
        // 0x24a610: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a60c) {
            ctx->pc = 0x24A5ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24a5ec;
        }
    }
    ctx->pc = 0x24A614u;
label_24a614:
    // 0x24a614: 0x0  nop
    ctx->pc = 0x24a614u;
    // NOP
label_24a618:
    // 0x24a618: 0x171080  sll         $v0, $s7, 2
    ctx->pc = 0x24a618u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
label_24a61c:
    // 0x24a61c: 0x2e0f02d  daddu       $fp, $s7, $zero
    ctx->pc = 0x24a61cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_24a620:
    // 0x24a620: 0x10000073  b           . + 4 + (0x73 << 2)
label_24a624:
    if (ctx->pc == 0x24A624u) {
        ctx->pc = 0x24A624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A620u;
        // 0x24a624: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A628u;
        goto label_24a628;
    }
    ctx->pc = 0x24A620u;
    {
        const bool branch_taken_0x24a620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A620u;
        // 0x24a624: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a620) {
            ctx->pc = 0x24A7F0u;
            goto label_24a7f0;
        }
    }
    ctx->pc = 0x24A628u;
label_24a628:
    // 0x24a628: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x24a628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_24a62c:
    // 0x24a62c: 0x3d73023  subu        $a2, $fp, $s7
    ctx->pc = 0x24a62cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 23)));
label_24a630:
    // 0x24a630: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x24a630u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_24a634:
    // 0x24a634: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x24a634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_24a638:
    // 0x24a638: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x24a638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_24a63c:
    // 0x24a63c: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x24a63cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_24a640:
    // 0x24a640: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x24a640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_24a644:
    // 0x24a644: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x24a644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24a648:
    // 0x24a648: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x24a648u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_24a64c:
    // 0x24a64c: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x24a64cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_24a650:
    // 0x24a650: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x24a650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_24a654:
    // 0x24a654: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24a654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24a658:
    // 0x24a658: 0xc0923a4  jal         func_248E90
label_24a65c:
    if (ctx->pc == 0x24A65Cu) {
        ctx->pc = 0x24A65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A658u;
        // 0x24a65c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A660u;
        goto label_24a660;
    }
    ctx->pc = 0x24A658u;
    SET_GPR_U32(ctx, 31, 0x24A660u);
    ctx->pc = 0x24A65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A658u;
    // 0x24a65c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248E90u;
    { ctx->pc = 0x248e90; return; }
    ctx->pc = 0x24A660u;
label_24a660:
    // 0x24a660: 0x8e130000  lw          $s3, 0x0($s0)
    ctx->pc = 0x24a660u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_24a664:
    // 0x24a664: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x24a664u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24a668:
    // 0x24a668: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x24a668u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24a66c:
    // 0x24a66c: 0xc08f3d6  jal         func_23CF58
label_24a670:
    if (ctx->pc == 0x24A670u) {
        ctx->pc = 0x24A670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A66Cu;
        // 0x24a670: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A674u;
        goto label_24a674;
    }
    ctx->pc = 0x24A66Cu;
    SET_GPR_U32(ctx, 31, 0x24A674u);
    ctx->pc = 0x24A670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A66Cu;
    // 0x24a670: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF58u;
    { ctx->pc = 0x23cf58; return; }
    ctx->pc = 0x24A674u;
label_24a674:
    // 0x24a674: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x24a674u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_24a678:
    // 0x24a678: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
label_24a67c:
    if (ctx->pc == 0x24A67Cu) {
        ctx->pc = 0x24A680u;
        goto label_24a680;
    }
    ctx->pc = 0x24A678u;
    {
        const bool branch_taken_0x24a678 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a678) {
            ctx->pc = 0x24A6D8u;
            goto label_24a6d8;
        }
    }
    ctx->pc = 0x24A680u;
label_24a680:
    // 0x24a680: 0x272a021  addu        $s4, $s3, $s2
    ctx->pc = 0x24a680u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
label_24a684:
    // 0x24a684: 0x82830000  lb          $v1, 0x0($s4)
    ctx->pc = 0x24a684u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_24a688:
    // 0x24a688: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x24a688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_24a68c:
    // 0x24a68c: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_24a690:
    if (ctx->pc == 0x24A690u) {
        ctx->pc = 0x24A690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A68Cu;
        // 0x24a690: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A694u;
        goto label_24a694;
    }
    ctx->pc = 0x24A68Cu;
    {
        const bool branch_taken_0x24a68c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24A690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A68Cu;
        // 0x24a690: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a68c) {
            ctx->pc = 0x24A6BCu;
            goto label_24a6bc;
        }
    }
    ctx->pc = 0x24A694u;
label_24a694:
    // 0x24a694: 0xc08f3d6  jal         func_23CF58
label_24a698:
    if (ctx->pc == 0x24A698u) {
        ctx->pc = 0x24A69Cu;
        goto label_24a69c;
    }
    ctx->pc = 0x24A694u;
    SET_GPR_U32(ctx, 31, 0x24A69Cu);
    ctx->pc = 0x23CF58u;
    { ctx->pc = 0x23cf58; return; }
    ctx->pc = 0x24A69Cu;
label_24a69c:
    // 0x24a69c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x24a69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_24a6a0:
    // 0x24a6a0: 0x242082a  slt         $at, $s2, $v0
    ctx->pc = 0x24a6a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_24a6a4:
    // 0x24a6a4: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_24a6a8:
    if (ctx->pc == 0x24A6A8u) {
        ctx->pc = 0x24A6ACu;
        goto label_24a6ac;
    }
    ctx->pc = 0x24A6A4u;
    {
        const bool branch_taken_0x24a6a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a6a4) {
            ctx->pc = 0x24A6BCu;
            goto label_24a6bc;
        }
    }
    ctx->pc = 0x24A6ACu;
label_24a6ac:
    // 0x24a6ac: 0x82820001  lb          $v0, 0x1($s4)
    ctx->pc = 0x24a6acu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
label_24a6b0:
    // 0x24a6b0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_24a6b4:
    if (ctx->pc == 0x24A6B4u) {
        ctx->pc = 0x24A6B8u;
        goto label_24a6b8;
    }
    ctx->pc = 0x24A6B0u;
    {
        const bool branch_taken_0x24a6b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a6b0) {
            ctx->pc = 0x24A6BCu;
            goto label_24a6bc;
        }
    }
    ctx->pc = 0x24A6B8u;
label_24a6b8:
    // 0x24a6b8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x24a6b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_24a6bc:
    // 0x24a6bc: 0x0  nop
    ctx->pc = 0x24a6bcu;
    // NOP
label_24a6c0:
    // 0x24a6c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24a6c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_24a6c4:
    // 0x24a6c4: 0xc08f3d6  jal         func_23CF58
label_24a6c8:
    if (ctx->pc == 0x24A6C8u) {
        ctx->pc = 0x24A6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A6C4u;
        // 0x24a6c8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A6CCu;
        goto label_24a6cc;
    }
    ctx->pc = 0x24A6C4u;
    SET_GPR_U32(ctx, 31, 0x24A6CCu);
    ctx->pc = 0x24A6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A6C4u;
    // 0x24a6c8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF58u;
    { ctx->pc = 0x23cf58; return; }
    ctx->pc = 0x24A6CCu;
label_24a6cc:
    // 0x24a6cc: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x24a6ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_24a6d0:
    // 0x24a6d0: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_24a6d4:
    if (ctx->pc == 0x24A6D4u) {
        ctx->pc = 0x24A6D8u;
        goto label_24a6d8;
    }
    ctx->pc = 0x24A6D0u;
    {
        const bool branch_taken_0x24a6d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24a6d0) {
            ctx->pc = 0x24A680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24a680;
        }
    }
    ctx->pc = 0x24A6D8u;
label_24a6d8:
    // 0x24a6d8: 0x2602000c  addiu       $v0, $s0, 0xC
    ctx->pc = 0x24a6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_24a6dc:
    // 0x24a6dc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_24a6e0:
    if (ctx->pc == 0x24A6E0u) {
        ctx->pc = 0x24A6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A6DCu;
        // 0x24a6e0: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A6E4u;
        goto label_24a6e4;
    }
    ctx->pc = 0x24A6DCu;
    {
        const bool branch_taken_0x24a6dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A6DCu;
        // 0x24a6e0: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a6dc) {
            ctx->pc = 0x24A6E8u;
            goto label_24a6e8;
        }
    }
    ctx->pc = 0x24A6E4u;
label_24a6e4:
    // 0x24a6e4: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x24a6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_24a6e8:
    // 0x24a6e8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x24a6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_24a6ec:
    // 0x24a6ec: 0xc0700b4  jal         func_1C02D0
label_24a6f0:
    if (ctx->pc == 0x24A6F0u) {
        ctx->pc = 0x24A6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A6ECu;
        // 0x24a6f0: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A6F4u;
        goto label_24a6f4;
    }
    ctx->pc = 0x24A6ECu;
    SET_GPR_U32(ctx, 31, 0x24A6F4u);
    ctx->pc = 0x24A6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A6ECu;
    // 0x24a6f0: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C02D0u;
    { ctx->pc = 0x1c02d0; return; }
    ctx->pc = 0x24A6F4u;
label_24a6f4:
    // 0x24a6f4: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x24a6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_24a6f8:
    // 0x24a6f8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x24a6f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24a6fc:
    // 0x24a6fc: 0x10000007  b           . + 4 + (0x7 << 2)
label_24a700:
    if (ctx->pc == 0x24A700u) {
        ctx->pc = 0x24A700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A6FCu;
        // 0x24a700: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A704u;
        goto label_24a704;
    }
    ctx->pc = 0x24A6FCu;
    {
        const bool branch_taken_0x24a6fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A6FCu;
        // 0x24a700: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a6fc) {
            ctx->pc = 0x24A71Cu;
            goto label_24a71c;
        }
    }
    ctx->pc = 0x24A704u;
label_24a704:
    // 0x24a704: 0x0  nop
    ctx->pc = 0x24a704u;
    // NOP
label_24a708:
    // 0x24a708: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x24a708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_24a70c:
    // 0x24a70c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x24a70cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_24a710:
    // 0x24a710: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x24a710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_24a714:
    // 0x24a714: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x24a714u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_24a718:
    // 0x24a718: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x24a718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_24a71c:
    // 0x24a71c: 0x0  nop
    ctx->pc = 0x24a71cu;
    // NOP
label_24a720:
    // 0x24a720: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x24a720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_24a724:
    // 0x24a724: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x24a724u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_24a728:
    // 0x24a728: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_24a72c:
    if (ctx->pc == 0x24A72Cu) {
        ctx->pc = 0x24A730u;
        goto label_24a730;
    }
    ctx->pc = 0x24A728u;
    {
        const bool branch_taken_0x24a728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24a728) {
            ctx->pc = 0x24A704u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24a704;
        }
    }
    ctx->pc = 0x24A730u;
label_24a730:
    // 0x24a730: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x24a730u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_24a734:
    // 0x24a734: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x24a734u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24a738:
    // 0x24a738: 0x8e130010  lw          $s3, 0x10($s0)
    ctx->pc = 0x24a738u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_24a73c:
    // 0x24a73c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x24a73cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24a740:
    // 0x24a740: 0xc08f3d6  jal         func_23CF58
label_24a744:
    if (ctx->pc == 0x24A744u) {
        ctx->pc = 0x24A744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A740u;
        // 0x24a744: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A748u;
        goto label_24a748;
    }
    ctx->pc = 0x24A740u;
    SET_GPR_U32(ctx, 31, 0x24A748u);
    ctx->pc = 0x24A744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A740u;
    // 0x24a744: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF58u;
    { ctx->pc = 0x23cf58; return; }
    ctx->pc = 0x24A748u;
label_24a748:
    // 0x24a748: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x24a748u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_24a74c:
    // 0x24a74c: 0x10200020  beqz        $at, . + 4 + (0x20 << 2)
label_24a750:
    if (ctx->pc == 0x24A750u) {
        ctx->pc = 0x24A750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A74Cu;
        // 0x24a750: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A754u;
        goto label_24a754;
    }
    ctx->pc = 0x24A74Cu;
    {
        const bool branch_taken_0x24a74c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A74Cu;
        // 0x24a750: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a74c) {
            ctx->pc = 0x24A7D0u;
            goto label_24a7d0;
        }
    }
    ctx->pc = 0x24A754u;
label_24a754:
    // 0x24a754: 0x0  nop
    ctx->pc = 0x24a754u;
    // NOP
label_24a758:
    // 0x24a758: 0x251b021  addu        $s6, $s2, $s1
    ctx->pc = 0x24a758u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_24a75c:
    // 0x24a75c: 0x82c30000  lb          $v1, 0x0($s6)
    ctx->pc = 0x24a75cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_24a760:
    // 0x24a760: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x24a760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_24a764:
    // 0x24a764: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
label_24a768:
    if (ctx->pc == 0x24A768u) {
        ctx->pc = 0x24A768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A764u;
        // 0x24a768: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A76Cu;
        goto label_24a76c;
    }
    ctx->pc = 0x24A764u;
    {
        const bool branch_taken_0x24a764 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24A768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A764u;
        // 0x24a768: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a764) {
            ctx->pc = 0x24A79Cu;
            goto label_24a79c;
        }
    }
    ctx->pc = 0x24A76Cu;
label_24a76c:
    // 0x24a76c: 0xc08f3d6  jal         func_23CF58
label_24a770:
    if (ctx->pc == 0x24A770u) {
        ctx->pc = 0x24A774u;
        goto label_24a774;
    }
    ctx->pc = 0x24A76Cu;
    SET_GPR_U32(ctx, 31, 0x24A774u);
    ctx->pc = 0x23CF58u;
    { ctx->pc = 0x23cf58; return; }
    ctx->pc = 0x24A774u;
label_24a774:
    // 0x24a774: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x24a774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_24a778:
    // 0x24a778: 0x222082a  slt         $at, $s1, $v0
    ctx->pc = 0x24a778u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_24a77c:
    // 0x24a77c: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_24a780:
    if (ctx->pc == 0x24A780u) {
        ctx->pc = 0x24A784u;
        goto label_24a784;
    }
    ctx->pc = 0x24A77Cu;
    {
        const bool branch_taken_0x24a77c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a77c) {
            ctx->pc = 0x24A7B4u;
            goto label_24a7b4;
        }
    }
    ctx->pc = 0x24A784u;
label_24a784:
    // 0x24a784: 0x82c20001  lb          $v0, 0x1($s6)
    ctx->pc = 0x24a784u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 1)));
label_24a788:
    // 0x24a788: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_24a78c:
    if (ctx->pc == 0x24A78Cu) {
        ctx->pc = 0x24A790u;
        goto label_24a790;
    }
    ctx->pc = 0x24A788u;
    {
        const bool branch_taken_0x24a788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a788) {
            ctx->pc = 0x24A7B4u;
            goto label_24a7b4;
        }
    }
    ctx->pc = 0x24A790u;
label_24a790:
    // 0x24a790: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x24a790u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_24a794:
    // 0x24a794: 0x10000007  b           . + 4 + (0x7 << 2)
label_24a798:
    if (ctx->pc == 0x24A798u) {
        ctx->pc = 0x24A798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A794u;
        // 0x24a798: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A79Cu;
        goto label_24a79c;
    }
    ctx->pc = 0x24A794u;
    {
        const bool branch_taken_0x24a794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A794u;
        // 0x24a798: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a794) {
            ctx->pc = 0x24A7B4u;
            goto label_24a7b4;
        }
    }
    ctx->pc = 0x24A79Cu;
label_24a79c:
    // 0x24a79c: 0x0  nop
    ctx->pc = 0x24a79cu;
    // NOP
label_24a7a0:
    // 0x24a7a0: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
label_24a7a4:
    if (ctx->pc == 0x24A7A4u) {
        ctx->pc = 0x24A7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A7A0u;
        // 0x24a7a4: 0x2741821  addu        $v1, $s3, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A7A8u;
        goto label_24a7a8;
    }
    ctx->pc = 0x24A7A0u;
    {
        const bool branch_taken_0x24a7a0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A7A0u;
        // 0x24a7a4: 0x2741821  addu        $v1, $s3, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a7a0) {
            ctx->pc = 0x24A7B4u;
            goto label_24a7b4;
        }
    }
    ctx->pc = 0x24A7A8u;
label_24a7a8:
    // 0x24a7a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x24a7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_24a7ac:
    // 0x24a7ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24a7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_24a7b0:
    // 0x24a7b0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x24a7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_24a7b4:
    // 0x24a7b4: 0x0  nop
    ctx->pc = 0x24a7b4u;
    // NOP
label_24a7b8:
    // 0x24a7b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24a7b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_24a7bc:
    // 0x24a7bc: 0xc08f3d6  jal         func_23CF58
label_24a7c0:
    if (ctx->pc == 0x24A7C0u) {
        ctx->pc = 0x24A7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A7BCu;
        // 0x24a7c0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A7C4u;
        goto label_24a7c4;
    }
    ctx->pc = 0x24A7BCu;
    SET_GPR_U32(ctx, 31, 0x24A7C4u);
    ctx->pc = 0x24A7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A7BCu;
    // 0x24a7c0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CF58u;
    { ctx->pc = 0x23cf58; return; }
    ctx->pc = 0x24A7C4u;
label_24a7c4:
    // 0x24a7c4: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x24a7c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_24a7c8:
    // 0x24a7c8: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
label_24a7cc:
    if (ctx->pc == 0x24A7CCu) {
        ctx->pc = 0x24A7D0u;
        goto label_24a7d0;
    }
    ctx->pc = 0x24A7C8u;
    {
        const bool branch_taken_0x24a7c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24a7c8) {
            ctx->pc = 0x24A754u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24a754;
        }
    }
    ctx->pc = 0x24A7D0u;
label_24a7d0:
    // 0x24a7d0: 0x2602000c  addiu       $v0, $s0, 0xC
    ctx->pc = 0x24a7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_24a7d4:
    // 0x24a7d4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_24a7d8:
    if (ctx->pc == 0x24A7D8u) {
        ctx->pc = 0x24A7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A7D4u;
        // 0x24a7d8: 0x26a20001  addiu       $v0, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A7DCu;
        goto label_24a7dc;
    }
    ctx->pc = 0x24A7D4u;
    {
        const bool branch_taken_0x24a7d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A7D4u;
        // 0x24a7d8: 0x26a20001  addiu       $v0, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a7d4) {
            ctx->pc = 0x24A7E0u;
            goto label_24a7e0;
        }
    }
    ctx->pc = 0x24A7DCu;
label_24a7dc:
    // 0x24a7dc: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x24a7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_24a7e0:
    // 0x24a7e0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x24a7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_24a7e4:
    // 0x24a7e4: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x24a7e4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_24a7e8:
    // 0x24a7e8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x24a7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_24a7ec:
    // 0x24a7ec: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x24a7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_24a7f0:
    // 0x24a7f0: 0x8f8392fc  lw          $v1, -0x6D04($gp)
    ctx->pc = 0x24a7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_24a7f4:
    // 0x24a7f4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x24a7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_24a7f8:
    // 0x24a7f8: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x24a7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_24a7fc:
    // 0x24a7fc: 0x3c2102b  sltu        $v0, $fp, $v0
    ctx->pc = 0x24a7fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_24a800:
    // 0x24a800: 0x1440ff89  bnez        $v0, . + 4 + (-0x77 << 2)
label_24a804:
    if (ctx->pc == 0x24A804u) {
        ctx->pc = 0x24A808u;
        goto label_24a808;
    }
    ctx->pc = 0x24A800u;
    {
        const bool branch_taken_0x24a800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24a800) {
            ctx->pc = 0x24A628u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24a628;
        }
    }
    ctx->pc = 0x24A808u;
label_24a808:
    // 0x24a808: 0xc070038  jal         func_1C00E0
label_24a80c:
    if (ctx->pc == 0x24A80Cu) {
        ctx->pc = 0x24A80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A808u;
        // 0x24a80c: 0x8fa400bc  lw          $a0, 0xBC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A810u;
        goto label_24a810;
    }
    ctx->pc = 0x24A808u;
    SET_GPR_U32(ctx, 31, 0x24A810u);
    ctx->pc = 0x24A80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A808u;
    // 0x24a80c: 0x8fa400bc  lw          $a0, 0xBC($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x24A810u;
label_24a810:
    // 0x24a810: 0xc070038  jal         func_1C00E0
label_24a814:
    if (ctx->pc == 0x24A814u) {
        ctx->pc = 0x24A814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A810u;
        // 0x24a814: 0x8fa400a0  lw          $a0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A818u;
        goto label_24a818;
    }
    ctx->pc = 0x24A810u;
    SET_GPR_U32(ctx, 31, 0x24A818u);
    ctx->pc = 0x24A814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A810u;
    // 0x24a814: 0x8fa400a0  lw          $a0, 0xA0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x24A818u;
label_24a818:
    // 0x24a818: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x24a818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_24a81c:
    // 0x24a81c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x24a81cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_24a820:
    // 0x24a820: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x24a820u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_24a824:
    // 0x24a824: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x24a824u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_24a828:
    // 0x24a828: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x24a828u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_24a82c:
    // 0x24a82c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x24a82cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_24a830:
    // 0x24a830: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x24a830u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_24a834:
    // 0x24a834: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x24a834u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_24a838:
    // 0x24a838: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x24a838u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_24a83c:
    // 0x24a83c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24a83cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_24a840:
    // 0x24a840: 0x3e00008  jr          $ra
label_24a844:
    if (ctx->pc == 0x24A844u) {
        ctx->pc = 0x24A844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A840u;
        // 0x24a844: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A848u;
        goto label_24a848;
    }
    ctx->pc = 0x24A840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A840u;
        // 0x24a844: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A848u;
label_24a848:
    // 0x24a848: 0x0  nop
    ctx->pc = 0x24a848u;
    // NOP
label_24a84c:
    // 0x24a84c: 0x0  nop
    ctx->pc = 0x24a84cu;
    // NOP
label_24a850:
    // 0x24a850: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24a850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_24a854:
    // 0x24a854: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x24a854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24a858:
    // 0x24a858: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x24a858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_24a85c:
    // 0x24a85c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24a85cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24a860:
    // 0x24a860: 0xc066440  jal         func_199100
label_24a864:
    if (ctx->pc == 0x24A864u) {
        ctx->pc = 0x24A864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A860u;
        // 0x24a864: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A868u;
        goto label_24a868;
    }
    ctx->pc = 0x24A860u;
    SET_GPR_U32(ctx, 31, 0x24A868u);
    ctx->pc = 0x24A864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A860u;
    // 0x24a864: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199100u;
    { ctx->pc = 0x199100; return; }
    ctx->pc = 0x24A868u;
label_24a868:
    // 0x24a868: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x24a868u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_24a86c:
    // 0x24a86c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_24a870:
    if (ctx->pc == 0x24A870u) {
        ctx->pc = 0x24A870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A86Cu;
        // 0x24a870: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A874u;
        goto label_24a874;
    }
    ctx->pc = 0x24A86Cu;
    {
        const bool branch_taken_0x24a86c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A86Cu;
        // 0x24a870: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a86c) {
            ctx->pc = 0x24A880u;
            goto label_24a880;
        }
    }
    ctx->pc = 0x24A874u;
label_24a874:
    // 0x24a874: 0xc06614e  jal         func_198538
label_24a878:
    if (ctx->pc == 0x24A878u) {
        ctx->pc = 0x24A87Cu;
        goto label_24a87c;
    }
    ctx->pc = 0x24A874u;
    SET_GPR_U32(ctx, 31, 0x24A87Cu);
    ctx->pc = 0x198538u;
    { ctx->pc = 0x198538; return; }
    ctx->pc = 0x24A87Cu;
label_24a87c:
    // 0x24a87c: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x24a87cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_24a880:
    // 0x24a880: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x24a880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_24a884:
    // 0x24a884: 0x34633ffc  ori         $v1, $v1, 0x3FFC
    ctx->pc = 0x24a884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16380);
label_24a888:
    // 0x24a888: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x24a888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
label_24a88c:
    // 0x24a88c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x24a88cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_24a890:
    // 0x24a890: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x24a890u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_24a894:
    // 0x24a894: 0xc066c42  jal         func_19B108
label_24a898:
    if (ctx->pc == 0x24A898u) {
        ctx->pc = 0x24A898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A894u;
        // 0x24a898: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A89Cu;
        goto label_24a89c;
    }
    ctx->pc = 0x24A894u;
    SET_GPR_U32(ctx, 31, 0x24A89Cu);
    ctx->pc = 0x24A898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A894u;
    // 0x24a898: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B108u;
    { ctx->pc = 0x19b108; return; }
    ctx->pc = 0x24A89Cu;
label_24a89c:
    // 0x24a89c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x24a89cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_24a8a0:
    // 0x24a8a0: 0x8f8392fc  lw          $v1, -0x6D04($gp)
    ctx->pc = 0x24a8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_24a8a4:
    // 0x24a8a4: 0x8c223ffc  lw          $v0, 0x3FFC($at)
    ctx->pc = 0x24a8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_24a8a8:
    // 0x24a8a8: 0x8c650018  lw          $a1, 0x18($v1)
    ctx->pc = 0x24a8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_24a8ac:
    // 0x24a8ac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24a8acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_24a8b0:
    // 0x24a8b0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x24a8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_24a8b4:
    // 0x24a8b4: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_24a8b8:
    if (ctx->pc == 0x24A8B8u) {
        ctx->pc = 0x24A8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A8B4u;
        // 0x24a8b8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A8BCu;
        goto label_24a8bc;
    }
    ctx->pc = 0x24A8B4u;
    {
        const bool branch_taken_0x24a8b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A8B4u;
        // 0x24a8b8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a8b4) {
            ctx->pc = 0x24A8D4u;
            goto label_24a8d4;
        }
    }
    ctx->pc = 0x24A8BCu;
label_24a8bc:
    // 0x24a8bc: 0xa0f809  jalr        $a1
label_24a8c0:
    if (ctx->pc == 0x24A8C0u) {
        ctx->pc = 0x24A8C4u;
        goto label_24a8c4;
    }
    ctx->pc = 0x24A8BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x24A8C4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A8BCu, 0x24A8C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24A8C4u;
label_24a8c4:
    // 0x24a8c4: 0x8f8392fc  lw          $v1, -0x6D04($gp)
    ctx->pc = 0x24a8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_24a8c8:
    // 0x24a8c8: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x24a8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_24a8cc:
    // 0x24a8cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24a8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_24a8d0:
    // 0x24a8d0: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x24a8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_24a8d4:
    // 0x24a8d4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x24a8d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_24a8d8:
    // 0x24a8d8: 0x8f8292fc  lw          $v0, -0x6D04($gp)
    ctx->pc = 0x24a8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_24a8dc:
    // 0x24a8dc: 0x8c243ffc  lw          $a0, 0x3FFC($at)
    ctx->pc = 0x24a8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_24a8e0:
    // 0x24a8e0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x24a8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_24a8e4:
    // 0x24a8e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24a8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24a8e8:
    // 0x24a8e8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x24a8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24a8ec:
    // 0x24a8ec: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
label_24a8f0:
    if (ctx->pc == 0x24A8F0u) {
        ctx->pc = 0x24A8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A8ECu;
        // 0x24a8f0: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A8F4u;
        goto label_24a8f4;
    }
    ctx->pc = 0x24A8ECu;
    {
        const bool branch_taken_0x24a8ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A8ECu;
        // 0x24a8f0: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a8ec) {
            ctx->pc = 0x24A91Cu;
            goto label_24a91c;
        }
    }
    ctx->pc = 0x24A8F4u;
label_24a8f4:
    // 0x24a8f4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x24a8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_24a8f8:
    // 0x24a8f8: 0x41940  sll         $v1, $a0, 5
    ctx->pc = 0x24a8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_24a8fc:
    // 0x24a8fc: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x24a8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
label_24a900:
    // 0x24a900: 0x24062081  addiu       $a2, $zero, 0x2081
    ctx->pc = 0x24a900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8321));
label_24a904:
    // 0x24a904: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x24a904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24a908:
    // 0x24a908: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x24a908u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24a90c:
    // 0x24a90c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x24a90cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24a910:
    // 0x24a910: 0xc066c72  jal         func_19B1C8
label_24a914:
    if (ctx->pc == 0x24A914u) {
        ctx->pc = 0x24A914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A910u;
        // 0x24a914: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A918u;
        goto label_24a918;
    }
    ctx->pc = 0x24A910u;
    SET_GPR_U32(ctx, 31, 0x24A918u);
    ctx->pc = 0x24A914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A910u;
    // 0x24a914: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x24A918u;
label_24a918:
    // 0x24a918: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x24a918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_24a91c:
    // 0x24a91c: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x24a91cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
label_24a920:
    // 0x24a920: 0x8c243ffc  lw          $a0, 0x3FFC($at)
    ctx->pc = 0x24a920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_24a924:
    // 0x24a924: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x24a924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
label_24a928:
    // 0x24a928: 0x3446ffff  ori         $a2, $v0, 0xFFFF
    ctx->pc = 0x24a928u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_24a92c:
    // 0x24a92c: 0x24631e00  addiu       $v1, $v1, 0x1E00
    ctx->pc = 0x24a92cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7680));
label_24a930:
    // 0x24a930: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24a930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24a934:
    // 0x24a934: 0x41140  sll         $v0, $a0, 5
    ctx->pc = 0x24a934u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_24a938:
    // 0x24a938: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x24a938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_24a93c:
    // 0x24a93c: 0x468024  and         $s0, $v0, $a2
    ctx->pc = 0x24a93cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_24a940:
    // 0x24a940: 0xc066c98  jal         func_19B260
label_24a944:
    if (ctx->pc == 0x24A944u) {
        ctx->pc = 0x24A944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A940u;
        // 0x24a944: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A948u;
        goto label_24a948;
    }
    ctx->pc = 0x24A940u;
    SET_GPR_U32(ctx, 31, 0x24A948u);
    ctx->pc = 0x24A944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A940u;
    // 0x24a944: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B260u;
    { ctx->pc = 0x19b260; return; }
    ctx->pc = 0x24A948u;
label_24a948:
    // 0x24a948: 0xc066c46  jal         func_19B118
label_24a94c:
    if (ctx->pc == 0x24A94Cu) {
        ctx->pc = 0x24A94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A948u;
        // 0x24a94c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A950u;
        goto label_24a950;
    }
    ctx->pc = 0x24A948u;
    SET_GPR_U32(ctx, 31, 0x24A950u);
    ctx->pc = 0x24A94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A948u;
    // 0x24a94c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B118u;
    { ctx->pc = 0x19b118; return; }
    ctx->pc = 0x24A950u;
label_24a950:
    // 0x24a950: 0xc0692a8  jal         func_1A4AA0
label_24a954:
    if (ctx->pc == 0x24A954u) {
        ctx->pc = 0x24A954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A950u;
        // 0x24a954: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A958u;
        goto label_24a958;
    }
    ctx->pc = 0x24A950u;
    SET_GPR_U32(ctx, 31, 0x24A958u);
    ctx->pc = 0x24A954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A950u;
    // 0x24a954: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4AA0u;
    { ctx->pc = 0x1a4aa0; return; }
    ctx->pc = 0x24A958u;
label_24a958:
    // 0x24a958: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x24a958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_24a95c:
    // 0x24a95c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x24a95cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_24a960:
    // 0x24a960: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x24a960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_24a964:
    // 0x24a964: 0x24421e04  addiu       $v0, $v0, 0x1E04
    ctx->pc = 0x24a964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7684));
label_24a968:
    // 0x24a968: 0x8f8487a4  lw          $a0, -0x785C($gp)
    ctx->pc = 0x24a968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936484)));
label_24a96c:
    // 0x24a96c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x24a96cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_24a970:
    // 0x24a970: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24a970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24a974:
    // 0x24a974: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x24a974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24a978:
    // 0x24a978: 0x2293c  dsll32      $a1, $v0, 4
    ctx->pc = 0x24a978u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 4));
label_24a97c:
    // 0x24a97c: 0xc066a6c  jal         func_19A9B0
label_24a980:
    if (ctx->pc == 0x24A980u) {
        ctx->pc = 0x24A980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A97Cu;
        // 0x24a980: 0x5293e  dsrl32      $a1, $a1, 4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A984u;
        goto label_24a984;
    }
    ctx->pc = 0x24A97Cu;
    SET_GPR_U32(ctx, 31, 0x24A984u);
    ctx->pc = 0x24A980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A97Cu;
    // 0x24a980: 0x5293e  dsrl32      $a1, $a1, 4 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A9B0u;
    { ctx->pc = 0x19a9b0; return; }
    ctx->pc = 0x24A984u;
label_24a984:
    // 0x24a984: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x24a984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24a988:
    // 0x24a988: 0xc066440  jal         func_199100
label_24a98c:
    if (ctx->pc == 0x24A98Cu) {
        ctx->pc = 0x24A98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A988u;
        // 0x24a98c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A990u;
        goto label_24a990;
    }
    ctx->pc = 0x24A988u;
    SET_GPR_U32(ctx, 31, 0x24A990u);
    ctx->pc = 0x24A98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A988u;
    // 0x24a98c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199100u;
    { ctx->pc = 0x199100; return; }
    ctx->pc = 0x24A990u;
label_24a990:
    // 0x24a990: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x24a990u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_24a994:
    // 0x24a994: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_24a998:
    if (ctx->pc == 0x24A998u) {
        ctx->pc = 0x24A998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A994u;
        // 0x24a998: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A99Cu;
        goto label_24a99c;
    }
    ctx->pc = 0x24A994u;
    {
        const bool branch_taken_0x24a994 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A994u;
        // 0x24a998: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a994) {
            ctx->pc = 0x24A9A8u;
            goto label_24a9a8;
        }
    }
    ctx->pc = 0x24A99Cu;
label_24a99c:
    // 0x24a99c: 0xc06614e  jal         func_198538
label_24a9a0:
    if (ctx->pc == 0x24A9A0u) {
        ctx->pc = 0x24A9A4u;
        goto label_24a9a4;
    }
    ctx->pc = 0x24A99Cu;
    SET_GPR_U32(ctx, 31, 0x24A9A4u);
    ctx->pc = 0x198538u;
    { ctx->pc = 0x198538; return; }
    ctx->pc = 0x24A9A4u;
label_24a9a4:
    // 0x24a9a4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x24a9a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_24a9a8:
    // 0x24a9a8: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x24a9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_24a9ac:
    // 0x24a9ac: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x24a9acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_24a9b0:
    // 0x24a9b0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x24a9b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_24a9b4:
    // 0x24a9b4: 0xac233ffc  sw          $v1, 0x3FFC($at)
    ctx->pc = 0x24a9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16380), GPR_U32(ctx, 3));
label_24a9b8:
    // 0x24a9b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24a9b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_24a9bc:
    // 0x24a9bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24a9bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_24a9c0:
    // 0x24a9c0: 0x3e00008  jr          $ra
label_24a9c4:
    if (ctx->pc == 0x24A9C4u) {
        ctx->pc = 0x24A9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A9C0u;
        // 0x24a9c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A9C8u;
        goto label_24a9c8;
    }
    ctx->pc = 0x24A9C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A9C0u;
        // 0x24a9c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A9C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A9C8u;
label_24a9c8:
    // 0x24a9c8: 0x0  nop
    ctx->pc = 0x24a9c8u;
    // NOP
label_24a9cc:
    // 0x24a9cc: 0x0  nop
    ctx->pc = 0x24a9ccu;
    // NOP
label_24a9d0:
    // 0x24a9d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x24a9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_24a9d4:
    // 0x24a9d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x24a9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_24a9d8:
    // 0x24a9d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x24a9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_24a9dc:
    // 0x24a9dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24a9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_24a9e0:
    // 0x24a9e0: 0x8f8392fc  lw          $v1, -0x6D04($gp)
    ctx->pc = 0x24a9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_24a9e4:
    // 0x24a9e4: 0x1060003d  beqz        $v1, . + 4 + (0x3D << 2)
label_24a9e8:
    if (ctx->pc == 0x24A9E8u) {
        ctx->pc = 0x24A9ECu;
        goto label_24a9ec;
    }
    ctx->pc = 0x24A9E4u;
    {
        const bool branch_taken_0x24a9e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a9e4) {
            ctx->pc = 0x24AADCu;
            goto label_24aadc;
        }
    }
    ctx->pc = 0x24A9ECu;
label_24a9ec:
    // 0x24a9ec: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x24a9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_24a9f0:
    // 0x24a9f0: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_24a9f4:
    if (ctx->pc == 0x24A9F4u) {
        ctx->pc = 0x24A9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A9F0u;
        // 0x24a9f4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A9F8u;
        goto label_24a9f8;
    }
    ctx->pc = 0x24A9F0u;
    {
        const bool branch_taken_0x24a9f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A9F0u;
        // 0x24a9f4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a9f0) {
            ctx->pc = 0x24AA90u;
            goto label_24aa90;
        }
    }
    ctx->pc = 0x24A9F8u;
label_24a9f8:
    // 0x24a9f8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x24a9f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24a9fc:
    // 0x24a9fc: 0x1000001a  b           . + 4 + (0x1A << 2)
label_24aa00:
    if (ctx->pc == 0x24AA00u) {
        ctx->pc = 0x24AA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A9FCu;
        // 0x24aa00: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AA04u;
        goto label_24aa04;
    }
    ctx->pc = 0x24A9FCu;
    {
        const bool branch_taken_0x24a9fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A9FCu;
        // 0x24aa00: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a9fc) {
            ctx->pc = 0x24AA68u;
            goto label_24aa68;
        }
    }
    ctx->pc = 0x24AA04u;
label_24aa04:
    // 0x24aa04: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x24aa04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_24aa08:
    // 0x24aa08: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x24aa08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_24aa0c:
    // 0x24aa0c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x24aa0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24aa10:
    // 0x24aa10: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_24aa14:
    if (ctx->pc == 0x24AA14u) {
        ctx->pc = 0x24AA18u;
        goto label_24aa18;
    }
    ctx->pc = 0x24AA10u;
    {
        const bool branch_taken_0x24aa10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24aa10) {
            ctx->pc = 0x24AA30u;
            goto label_24aa30;
        }
    }
    ctx->pc = 0x24AA18u;
label_24aa18:
    // 0x24aa18: 0xc070038  jal         func_1C00E0
label_24aa1c:
    if (ctx->pc == 0x24AA1Cu) {
        ctx->pc = 0x24AA20u;
        goto label_24aa20;
    }
    ctx->pc = 0x24AA18u;
    SET_GPR_U32(ctx, 31, 0x24AA20u);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x24AA20u;
label_24aa20:
    // 0x24aa20: 0x8f8292fc  lw          $v0, -0x6D04($gp)
    ctx->pc = 0x24aa20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_24aa24:
    // 0x24aa24: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x24aa24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_24aa28:
    // 0x24aa28: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x24aa28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_24aa2c:
    // 0x24aa2c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x24aa2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_24aa30:
    // 0x24aa30: 0x8f8292fc  lw          $v0, -0x6D04($gp)
    ctx->pc = 0x24aa30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_24aa34:
    // 0x24aa34: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x24aa34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_24aa38:
    // 0x24aa38: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x24aa38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_24aa3c:
    // 0x24aa3c: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x24aa3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_24aa40:
    // 0x24aa40: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_24aa44:
    if (ctx->pc == 0x24AA44u) {
        ctx->pc = 0x24AA48u;
        goto label_24aa48;
    }
    ctx->pc = 0x24AA40u;
    {
        const bool branch_taken_0x24aa40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24aa40) {
            ctx->pc = 0x24AA60u;
            goto label_24aa60;
        }
    }
    ctx->pc = 0x24AA48u;
label_24aa48:
    // 0x24aa48: 0xc070038  jal         func_1C00E0
label_24aa4c:
    if (ctx->pc == 0x24AA4Cu) {
        ctx->pc = 0x24AA50u;
        goto label_24aa50;
    }
    ctx->pc = 0x24AA48u;
    SET_GPR_U32(ctx, 31, 0x24AA50u);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x24AA50u;
label_24aa50:
    // 0x24aa50: 0x8f8292fc  lw          $v0, -0x6D04($gp)
    ctx->pc = 0x24aa50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_24aa54:
    // 0x24aa54: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x24aa54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_24aa58:
    // 0x24aa58: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x24aa58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_24aa5c:
    // 0x24aa5c: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x24aa5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
label_24aa60:
    // 0x24aa60: 0x26310014  addiu       $s1, $s1, 0x14
    ctx->pc = 0x24aa60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_24aa64:
    // 0x24aa64: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x24aa64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_24aa68:
    // 0x24aa68: 0x8f8392fc  lw          $v1, -0x6D04($gp)
    ctx->pc = 0x24aa68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_24aa6c:
    // 0x24aa6c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x24aa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_24aa70:
    // 0x24aa70: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x24aa70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_24aa74:
    // 0x24aa74: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
label_24aa78:
    if (ctx->pc == 0x24AA78u) {
        ctx->pc = 0x24AA7Cu;
        goto label_24aa7c;
    }
    ctx->pc = 0x24AA74u;
    {
        const bool branch_taken_0x24aa74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24aa74) {
            ctx->pc = 0x24AA04u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24aa04;
        }
    }
    ctx->pc = 0x24AA7Cu;
label_24aa7c:
    // 0x24aa7c: 0xc070038  jal         func_1C00E0
label_24aa80:
    if (ctx->pc == 0x24AA80u) {
        ctx->pc = 0x24AA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AA7Cu;
        // 0x24aa80: 0x8c640008  lw          $a0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AA84u;
        goto label_24aa84;
    }
    ctx->pc = 0x24AA7Cu;
    SET_GPR_U32(ctx, 31, 0x24AA84u);
    ctx->pc = 0x24AA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AA7Cu;
    // 0x24aa80: 0x8c640008  lw          $a0, 0x8($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x24AA84u;
label_24aa84:
    // 0x24aa84: 0x8f8292fc  lw          $v0, -0x6D04($gp)
    ctx->pc = 0x24aa84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_24aa88:
    // 0x24aa88: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x24aa88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_24aa8c:
    // 0x24aa8c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x24aa8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24aa90:
    // 0x24aa90: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x24aa90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24aa94:
    // 0x24aa94: 0x0  nop
    ctx->pc = 0x24aa94u;
    // NOP
label_24aa98:
    // 0x24aa98: 0x8f8292fc  lw          $v0, -0x6D04($gp)
    ctx->pc = 0x24aa98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_24aa9c:
    // 0x24aa9c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x24aa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_24aaa0:
    // 0x24aaa0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x24aaa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24aaa4:
    // 0x24aaa4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_24aaa8:
    if (ctx->pc == 0x24AAA8u) {
        ctx->pc = 0x24AAACu;
        goto label_24aaac;
    }
    ctx->pc = 0x24AAA4u;
    {
        const bool branch_taken_0x24aaa4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24aaa4) {
            ctx->pc = 0x24AAC0u;
            goto label_24aac0;
        }
    }
    ctx->pc = 0x24AAACu;
label_24aaac:
    // 0x24aaac: 0xc070038  jal         func_1C00E0
label_24aab0:
    if (ctx->pc == 0x24AAB0u) {
        ctx->pc = 0x24AAB4u;
        goto label_24aab4;
    }
    ctx->pc = 0x24AAACu;
    SET_GPR_U32(ctx, 31, 0x24AAB4u);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x24AAB4u;
label_24aab4:
    // 0x24aab4: 0x8f8292fc  lw          $v0, -0x6D04($gp)
    ctx->pc = 0x24aab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_24aab8:
    // 0x24aab8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x24aab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_24aabc:
    // 0x24aabc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x24aabcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_24aac0:
    // 0x24aac0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x24aac0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_24aac4:
    // 0x24aac4: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x24aac4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_24aac8:
    // 0x24aac8: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_24aacc:
    if (ctx->pc == 0x24AACCu) {
        ctx->pc = 0x24AACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AAC8u;
        // 0x24aacc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AAD0u;
        goto label_24aad0;
    }
    ctx->pc = 0x24AAC8u;
    {
        const bool branch_taken_0x24aac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24AACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AAC8u;
        // 0x24aacc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24aac8) {
            ctx->pc = 0x24AA94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24aa94;
        }
    }
    ctx->pc = 0x24AAD0u;
label_24aad0:
    // 0x24aad0: 0xc070038  jal         func_1C00E0
label_24aad4:
    if (ctx->pc == 0x24AAD4u) {
        ctx->pc = 0x24AAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AAD0u;
        // 0x24aad4: 0x8f8492fc  lw          $a0, -0x6D04($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AAD8u;
        goto label_24aad8;
    }
    ctx->pc = 0x24AAD0u;
    SET_GPR_U32(ctx, 31, 0x24AAD8u);
    ctx->pc = 0x24AAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AAD0u;
    // 0x24aad4: 0x8f8492fc  lw          $a0, -0x6D04($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x24AAD8u;
label_24aad8:
    // 0x24aad8: 0xaf8092fc  sw          $zero, -0x6D04($gp)
    ctx->pc = 0x24aad8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939388), GPR_U32(ctx, 0));
label_24aadc:
    // 0x24aadc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x24aadcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_24aae0:
    // 0x24aae0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x24aae0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_24aae4:
    // 0x24aae4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24aae4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_24aae8:
    // 0x24aae8: 0x3e00008  jr          $ra
label_24aaec:
    if (ctx->pc == 0x24AAECu) {
        ctx->pc = 0x24AAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AAE8u;
        // 0x24aaec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AAF0u;
        goto label_24aaf0;
    }
    ctx->pc = 0x24AAE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24AAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AAE8u;
        // 0x24aaec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24AAE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24AAF0u;
label_24aaf0:
    // 0x24aaf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x24aaf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_24aaf4:
    // 0x24aaf4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x24aaf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_24aaf8:
    // 0x24aaf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x24aaf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_24aafc:
    // 0x24aafc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24aafcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_24ab00:
    // 0x24ab00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24ab00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24ab04:
    // 0x24ab04: 0xc0700b4  jal         func_1C02D0
label_24ab08:
    if (ctx->pc == 0x24AB08u) {
        ctx->pc = 0x24AB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AB04u;
        // 0x24ab08: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AB0Cu;
        goto label_24ab0c;
    }
    ctx->pc = 0x24AB04u;
    SET_GPR_U32(ctx, 31, 0x24AB0Cu);
    ctx->pc = 0x24AB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AB04u;
    // 0x24ab08: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C02D0u;
    { ctx->pc = 0x1c02d0; return; }
    ctx->pc = 0x24AB0Cu;
label_24ab0c:
    // 0x24ab0c: 0xaf8292fc  sw          $v0, -0x6D04($gp)
    ctx->pc = 0x24ab0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939388), GPR_U32(ctx, 2));
label_24ab10:
    // 0x24ab10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24ab10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24ab14:
    // 0x24ab14: 0x8f8492fc  lw          $a0, -0x6D04($gp)
    ctx->pc = 0x24ab14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_24ab18:
    // 0x24ab18: 0xc08e9ac  jal         func_23A6B0
label_24ab1c:
    if (ctx->pc == 0x24AB1Cu) {
        ctx->pc = 0x24AB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AB18u;
        // 0x24ab1c: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AB20u;
        goto label_24ab20;
    }
    ctx->pc = 0x24AB18u;
    SET_GPR_U32(ctx, 31, 0x24AB20u);
    ctx->pc = 0x24AB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AB18u;
    // 0x24ab1c: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A6B0u;
    { ctx->pc = 0x23a6b0; return; }
    ctx->pc = 0x24AB20u;
label_24ab20:
    // 0x24ab20: 0x8f8492fc  lw          $a0, -0x6D04($gp)
    ctx->pc = 0x24ab20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_24ab24:
    // 0x24ab24: 0x2a030003  slti        $v1, $s0, 0x3
    ctx->pc = 0x24ab24u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
label_24ab28:
    // 0x24ab28: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_24ab2c:
    if (ctx->pc == 0x24AB2Cu) {
        ctx->pc = 0x24AB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AB28u;
        // 0x24ab2c: 0xac800014  sw          $zero, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AB30u;
        goto label_24ab30;
    }
    ctx->pc = 0x24AB28u;
    {
        const bool branch_taken_0x24ab28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24AB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AB28u;
        // 0x24ab2c: 0xac800014  sw          $zero, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ab28) {
            ctx->pc = 0x24AB3Cu;
            goto label_24ab3c;
        }
    }
    ctx->pc = 0x24AB30u;
label_24ab30:
    // 0x24ab30: 0x2a010015  slti        $at, $s0, 0x15
    ctx->pc = 0x24ab30u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)21) ? 1 : 0);
label_24ab34:
    // 0x24ab34: 0x1420000a  bnez        $at, . + 4 + (0xA << 2)
label_24ab38:
    if (ctx->pc == 0x24AB38u) {
        ctx->pc = 0x24AB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AB34u;
        // 0x24ab38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AB3Cu;
        goto label_24ab3c;
    }
    ctx->pc = 0x24AB34u;
    {
        const bool branch_taken_0x24ab34 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x24AB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AB34u;
        // 0x24ab38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ab34) {
            ctx->pc = 0x24AB60u;
            goto label_24ab60;
        }
    }
    ctx->pc = 0x24AB3Cu;
label_24ab3c:
    // 0x24ab3c: 0x2a030019  slti        $v1, $s0, 0x19
    ctx->pc = 0x24ab3cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)25) ? 1 : 0);
label_24ab40:
    // 0x24ab40: 0x14600031  bnez        $v1, . + 4 + (0x31 << 2)
label_24ab44:
    if (ctx->pc == 0x24AB44u) {
        ctx->pc = 0x24AB48u;
        goto label_24ab48;
    }
    ctx->pc = 0x24AB40u;
    {
        const bool branch_taken_0x24ab40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x24ab40) {
            ctx->pc = 0x24AC08u;
            goto label_24ac08;
        }
    }
    ctx->pc = 0x24AB48u;
label_24ab48:
    // 0x24ab48: 0x2a010033  slti        $at, $s0, 0x33
    ctx->pc = 0x24ab48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)51) ? 1 : 0);
label_24ab4c:
    // 0x24ab4c: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_24ab50:
    if (ctx->pc == 0x24AB50u) {
        ctx->pc = 0x24AB54u;
        goto label_24ab54;
    }
    ctx->pc = 0x24AB4Cu;
    {
        const bool branch_taken_0x24ab4c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x24ab4c) {
            ctx->pc = 0x24AB5Cu;
            goto label_24ab5c;
        }
    }
    ctx->pc = 0x24AB54u;
label_24ab54:
    // 0x24ab54: 0x1000002d  b           . + 4 + (0x2D << 2)
label_24ab58:
    if (ctx->pc == 0x24AB58u) {
        ctx->pc = 0x24AB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AB54u;
        // 0x24ab58: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AB5Cu;
        goto label_24ab5c;
    }
    ctx->pc = 0x24AB54u;
    {
        const bool branch_taken_0x24ab54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AB54u;
        // 0x24ab58: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ab54) {
            ctx->pc = 0x24AC0Cu;
            goto label_24ac0c;
        }
    }
    ctx->pc = 0x24AB5Cu;
label_24ab5c:
    // 0x24ab5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24ab5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24ab60:
    // 0x24ab60: 0xc092920  jal         func_24A480
label_24ab64:
    if (ctx->pc == 0x24AB64u) {
        ctx->pc = 0x24AB68u;
        goto label_24ab68;
    }
    ctx->pc = 0x24AB60u;
    SET_GPR_U32(ctx, 31, 0x24AB68u);
    ctx->pc = 0x24A480u;
    { ctx->pc = 0x24a480; return; }
    ctx->pc = 0x24AB68u;
label_24ab68:
    // 0x24ab68: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x24ab68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24ab6c:
    // 0x24ab6c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x24ab6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24ab70:
    // 0x24ab70: 0x0  nop
    ctx->pc = 0x24ab70u;
    // NOP
label_24ab74:
    // 0x24ab74: 0x8f8292fc  lw          $v0, -0x6D04($gp)
    ctx->pc = 0x24ab74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_24ab78:
    // 0x24ab78: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x24ab78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_24ab7c:
    // 0x24ab7c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x24ab7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24ab80:
    // 0x24ab80: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_24ab84:
    if (ctx->pc == 0x24AB84u) {
        ctx->pc = 0x24AB88u;
        goto label_24ab88;
    }
    ctx->pc = 0x24AB80u;
    {
        const bool branch_taken_0x24ab80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24ab80) {
            ctx->pc = 0x24ABA4u;
            goto label_24aba4;
        }
    }
    ctx->pc = 0x24AB88u;
label_24ab88:
    // 0x24ab88: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x24ab88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_24ab8c:
    // 0x24ab8c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x24ab8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_24ab90:
    // 0x24ab90: 0xc070080  jal         func_1C0200
label_24ab94:
    if (ctx->pc == 0x24AB94u) {
        ctx->pc = 0x24AB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AB90u;
        // 0x24ab94: 0x34450810  ori         $a1, $v0, 0x810 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2064);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AB98u;
        goto label_24ab98;
    }
    ctx->pc = 0x24AB90u;
    SET_GPR_U32(ctx, 31, 0x24AB98u);
    ctx->pc = 0x24AB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AB90u;
    // 0x24ab94: 0x34450810  ori         $a1, $v0, 0x810 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2064);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x24AB98u;
label_24ab98:
    // 0x24ab98: 0x8f8392fc  lw          $v1, -0x6D04($gp)
    ctx->pc = 0x24ab98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_24ab9c:
    // 0x24ab9c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x24ab9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_24aba0:
    // 0x24aba0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x24aba0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_24aba4:
    // 0x24aba4: 0x0  nop
    ctx->pc = 0x24aba4u;
    // NOP
label_24aba8:
    // 0x24aba8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x24aba8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_24abac:
    // 0x24abac: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x24abacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_24abb0:
    // 0x24abb0: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_24abb4:
    if (ctx->pc == 0x24ABB4u) {
        ctx->pc = 0x24ABB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ABB0u;
        // 0x24abb4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24ABB8u;
        goto label_24abb8;
    }
    ctx->pc = 0x24ABB0u;
    {
        const bool branch_taken_0x24abb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24ABB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ABB0u;
        // 0x24abb4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24abb0) {
            ctx->pc = 0x24AB70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24ab70;
        }
    }
    ctx->pc = 0x24ABB8u;
label_24abb8:
    // 0x24abb8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x24abb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24abbc:
    // 0x24abbc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x24abbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24abc0:
    // 0x24abc0: 0x8f8292fc  lw          $v0, -0x6D04($gp)
    ctx->pc = 0x24abc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_24abc4:
    // 0x24abc4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x24abc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_24abc8:
    // 0x24abc8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x24abc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24abcc:
    // 0x24abcc: 0xc05e234  jal         func_1788D0
label_24abd0:
    if (ctx->pc == 0x24ABD0u) {
        ctx->pc = 0x24ABD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ABCCu;
        // 0x24abd0: 0x24052080  addiu       $a1, $zero, 0x2080 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24ABD4u;
        goto label_24abd4;
    }
    ctx->pc = 0x24ABCCu;
    SET_GPR_U32(ctx, 31, 0x24ABD4u);
    ctx->pc = 0x24ABD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24ABCCu;
    // 0x24abd0: 0x24052080  addiu       $a1, $zero, 0x2080 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x24ABCCu, 0x24ABD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24ABD4u;
label_24abd4:
    // 0x24abd4: 0x8f8392fc  lw          $v1, -0x6D04($gp)
    ctx->pc = 0x24abd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_24abd8:
    // 0x24abd8: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x24abd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_24abdc:
    // 0x24abdc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x24abdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24abe0:
    // 0x24abe0: 0xc0923ec  jal         func_248FB0
label_24abe4:
    if (ctx->pc == 0x24ABE4u) {
        ctx->pc = 0x24ABE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ABE0u;
        // 0x24abe4: 0x8c650014  lw          $a1, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24ABE8u;
        goto label_24abe8;
    }
    ctx->pc = 0x24ABE0u;
    SET_GPR_U32(ctx, 31, 0x24ABE8u);
    ctx->pc = 0x24ABE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24ABE0u;
    // 0x24abe4: 0x8c650014  lw          $a1, 0x14($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248FB0u;
    { ctx->pc = 0x248fb0; return; }
    ctx->pc = 0x24ABE8u;
label_24abe8:
    // 0x24abe8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x24abe8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_24abec:
    // 0x24abec: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x24abecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_24abf0:
    // 0x24abf0: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_24abf4:
    if (ctx->pc == 0x24ABF4u) {
        ctx->pc = 0x24ABF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ABF0u;
        // 0x24abf4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24ABF8u;
        goto label_24abf8;
    }
    ctx->pc = 0x24ABF0u;
    {
        const bool branch_taken_0x24abf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24ABF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24ABF0u;
        // 0x24abf4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24abf0) {
            ctx->pc = 0x24ABC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24abc0;
        }
    }
    ctx->pc = 0x24ABF8u;
label_24abf8:
    // 0x24abf8: 0x8f8392fc  lw          $v1, -0x6D04($gp)
    ctx->pc = 0x24abf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_24abfc:
    // 0x24abfc: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x24abfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
label_24ac00:
    // 0x24ac00: 0x2484a430  addiu       $a0, $a0, -0x5BD0
    ctx->pc = 0x24ac00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943792));
label_24ac04:
    // 0x24ac04: 0xac640018  sw          $a0, 0x18($v1)
    ctx->pc = 0x24ac04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 4));
label_24ac08:
    // 0x24ac08: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x24ac08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_24ac0c:
    // 0x24ac0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x24ac0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_24ac10:
    // 0x24ac10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24ac10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_24ac14:
    // 0x24ac14: 0x3e00008  jr          $ra
label_24ac18:
    if (ctx->pc == 0x24AC18u) {
        ctx->pc = 0x24AC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AC14u;
        // 0x24ac18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AC1Cu;
        goto label_24ac1c;
    }
    ctx->pc = 0x24AC14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24AC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AC14u;
        // 0x24ac18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24AC14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24AC1Cu;
label_24ac1c:
    // 0x24ac1c: 0x0  nop
    ctx->pc = 0x24ac1cu;
    // NOP
label_24ac20:
    // 0x24ac20: 0x0  nop
    ctx->pc = 0x24ac20u;
    // NOP
label_24ac24:
    // 0x24ac24: 0x0  nop
    ctx->pc = 0x24ac24u;
    // NOP
label_24ac28:
    // 0x24ac28: 0x0  nop
    ctx->pc = 0x24ac28u;
    // NOP
label_24ac2c:
    // 0x24ac2c: 0x0  nop
    ctx->pc = 0x24ac2cu;
    // NOP
label_24ac30:
    // 0x24ac30: 0x0  nop
    ctx->pc = 0x24ac30u;
    // NOP
label_24ac34:
    // 0x24ac34: 0x0  nop
    ctx->pc = 0x24ac34u;
    // NOP
label_24ac38:
    // 0x24ac38: 0x0  nop
    ctx->pc = 0x24ac38u;
    // NOP
label_24ac3c:
    // 0x24ac3c: 0x0  nop
    ctx->pc = 0x24ac3cu;
    // NOP
label_24ac40:
    // 0x24ac40: 0x0  nop
    ctx->pc = 0x24ac40u;
    // NOP
label_24ac44:
    // 0x24ac44: 0x0  nop
    ctx->pc = 0x24ac44u;
    // NOP
label_24ac48:
    // 0x24ac48: 0x0  nop
    ctx->pc = 0x24ac48u;
    // NOP
label_24ac4c:
    // 0x24ac4c: 0x0  nop
    ctx->pc = 0x24ac4cu;
    // NOP
label_24ac50:
    // 0x24ac50: 0x0  nop
    ctx->pc = 0x24ac50u;
    // NOP
label_24ac54:
    // 0x24ac54: 0x0  nop
    ctx->pc = 0x24ac54u;
    // NOP
label_24ac58:
    // 0x24ac58: 0x0  nop
    ctx->pc = 0x24ac58u;
    // NOP
label_24ac5c:
    // 0x24ac5c: 0x0  nop
    ctx->pc = 0x24ac5cu;
    // NOP
label_24ac60:
    // 0x24ac60: 0x0  nop
    ctx->pc = 0x24ac60u;
    // NOP
label_24ac64:
    // 0x24ac64: 0x0  nop
    ctx->pc = 0x24ac64u;
    // NOP
label_24ac68:
    // 0x24ac68: 0x0  nop
    ctx->pc = 0x24ac68u;
    // NOP
label_24ac6c:
    // 0x24ac6c: 0x0  nop
    ctx->pc = 0x24ac6cu;
    // NOP
label_24ac70:
    // 0x24ac70: 0x0  nop
    ctx->pc = 0x24ac70u;
    // NOP
label_24ac74:
    // 0x24ac74: 0x0  nop
    ctx->pc = 0x24ac74u;
    // NOP
label_24ac78:
    // 0x24ac78: 0x0  nop
    ctx->pc = 0x24ac78u;
    // NOP
label_24ac7c:
    // 0x24ac7c: 0x0  nop
    ctx->pc = 0x24ac7cu;
    // NOP
label_24ac80:
    // 0x24ac80: 0x278  dsll        $zero, $zero, 9
    ctx->pc = 0x24ac80u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 9);
label_24ac84:
    // 0x24ac84: 0x28b  .word       0x0000028B                   # movn        $zero, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ac84u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_24ac88:
    // 0x24ac88: 0x2a1  .word       0x000002A1                   # addu        $zero, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ac88u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_24ac8c:
    // 0x24ac8c: 0x2b4  teq         $zero, $zero, 10
    ctx->pc = 0x24ac8cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_24ac90:
    // 0x24ac90: 0x2c7  .word       0x000002C7                   # srav        $zero, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ac90u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_24ac94:
    // 0x24ac94: 0x2dd  .word       0x000002DD                   # dmultu      $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ac94u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x24AC94 raw=0x000002DD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_24ac98:
    // 0x24ac98: 0x2f3  tltu        $zero, $zero, 11
    ctx->pc = 0x24ac98u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_24ac9c:
    // 0x24ac9c: 0x305  .word       0x00000305                   # INVALID     $zero, $zero, 0x305 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x24ac9cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x24AC9C raw=0x00000305"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
    ctx->pc = 0x24aca0u;
    return;
}

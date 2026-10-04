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


void FUN_0014eba0_part123(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x18a4c0u: goto label_18a4c0;
        case 0x18a4c4u: goto label_18a4c4;
        case 0x18a4c8u: goto label_18a4c8;
        case 0x18a4ccu: goto label_18a4cc;
        case 0x18a4d0u: goto label_18a4d0;
        case 0x18a4d4u: goto label_18a4d4;
        case 0x18a4d8u: goto label_18a4d8;
        case 0x18a4dcu: goto label_18a4dc;
        case 0x18a4e0u: goto label_18a4e0;
        case 0x18a4e4u: goto label_18a4e4;
        case 0x18a4e8u: goto label_18a4e8;
        case 0x18a4ecu: goto label_18a4ec;
        case 0x18a4f0u: goto label_18a4f0;
        case 0x18a4f4u: goto label_18a4f4;
        case 0x18a4f8u: goto label_18a4f8;
        case 0x18a4fcu: goto label_18a4fc;
        case 0x18a500u: goto label_18a500;
        case 0x18a504u: goto label_18a504;
        case 0x18a508u: goto label_18a508;
        case 0x18a50cu: goto label_18a50c;
        case 0x18a510u: goto label_18a510;
        case 0x18a514u: goto label_18a514;
        case 0x18a518u: goto label_18a518;
        case 0x18a51cu: goto label_18a51c;
        case 0x18a520u: goto label_18a520;
        case 0x18a524u: goto label_18a524;
        case 0x18a528u: goto label_18a528;
        case 0x18a52cu: goto label_18a52c;
        case 0x18a530u: goto label_18a530;
        case 0x18a534u: goto label_18a534;
        case 0x18a538u: goto label_18a538;
        case 0x18a53cu: goto label_18a53c;
        case 0x18a540u: goto label_18a540;
        case 0x18a544u: goto label_18a544;
        case 0x18a548u: goto label_18a548;
        case 0x18a54cu: goto label_18a54c;
        case 0x18a550u: goto label_18a550;
        case 0x18a554u: goto label_18a554;
        case 0x18a558u: goto label_18a558;
        case 0x18a55cu: goto label_18a55c;
        case 0x18a560u: goto label_18a560;
        case 0x18a564u: goto label_18a564;
        case 0x18a568u: goto label_18a568;
        case 0x18a56cu: goto label_18a56c;
        case 0x18a570u: goto label_18a570;
        case 0x18a574u: goto label_18a574;
        case 0x18a578u: goto label_18a578;
        case 0x18a57cu: goto label_18a57c;
        case 0x18a580u: goto label_18a580;
        case 0x18a584u: goto label_18a584;
        case 0x18a588u: goto label_18a588;
        case 0x18a58cu: goto label_18a58c;
        case 0x18a590u: goto label_18a590;
        case 0x18a594u: goto label_18a594;
        case 0x18a598u: goto label_18a598;
        case 0x18a59cu: goto label_18a59c;
        case 0x18a5a0u: goto label_18a5a0;
        case 0x18a5a4u: goto label_18a5a4;
        case 0x18a5a8u: goto label_18a5a8;
        case 0x18a5acu: goto label_18a5ac;
        case 0x18a5b0u: goto label_18a5b0;
        case 0x18a5b4u: goto label_18a5b4;
        case 0x18a5b8u: goto label_18a5b8;
        case 0x18a5bcu: goto label_18a5bc;
        case 0x18a5c0u: goto label_18a5c0;
        case 0x18a5c4u: goto label_18a5c4;
        case 0x18a5c8u: goto label_18a5c8;
        case 0x18a5ccu: goto label_18a5cc;
        case 0x18a5d0u: goto label_18a5d0;
        case 0x18a5d4u: goto label_18a5d4;
        case 0x18a5d8u: goto label_18a5d8;
        case 0x18a5dcu: goto label_18a5dc;
        case 0x18a5e0u: goto label_18a5e0;
        case 0x18a5e4u: goto label_18a5e4;
        case 0x18a5e8u: goto label_18a5e8;
        case 0x18a5ecu: goto label_18a5ec;
        case 0x18a5f0u: goto label_18a5f0;
        case 0x18a5f4u: goto label_18a5f4;
        case 0x18a5f8u: goto label_18a5f8;
        case 0x18a5fcu: goto label_18a5fc;
        case 0x18a600u: goto label_18a600;
        case 0x18a604u: goto label_18a604;
        case 0x18a608u: goto label_18a608;
        case 0x18a60cu: goto label_18a60c;
        case 0x18a610u: goto label_18a610;
        case 0x18a614u: goto label_18a614;
        case 0x18a618u: goto label_18a618;
        case 0x18a61cu: goto label_18a61c;
        case 0x18a620u: goto label_18a620;
        case 0x18a624u: goto label_18a624;
        case 0x18a628u: goto label_18a628;
        case 0x18a62cu: goto label_18a62c;
        case 0x18a630u: goto label_18a630;
        case 0x18a634u: goto label_18a634;
        case 0x18a638u: goto label_18a638;
        case 0x18a63cu: goto label_18a63c;
        case 0x18a640u: goto label_18a640;
        case 0x18a644u: goto label_18a644;
        case 0x18a648u: goto label_18a648;
        case 0x18a64cu: goto label_18a64c;
        case 0x18a650u: goto label_18a650;
        case 0x18a654u: goto label_18a654;
        case 0x18a658u: goto label_18a658;
        case 0x18a65cu: goto label_18a65c;
        case 0x18a660u: goto label_18a660;
        case 0x18a664u: goto label_18a664;
        case 0x18a668u: goto label_18a668;
        case 0x18a66cu: goto label_18a66c;
        case 0x18a670u: goto label_18a670;
        case 0x18a674u: goto label_18a674;
        case 0x18a678u: goto label_18a678;
        case 0x18a67cu: goto label_18a67c;
        case 0x18a680u: goto label_18a680;
        case 0x18a684u: goto label_18a684;
        case 0x18a688u: goto label_18a688;
        case 0x18a68cu: goto label_18a68c;
        case 0x18a690u: goto label_18a690;
        case 0x18a694u: goto label_18a694;
        case 0x18a698u: goto label_18a698;
        case 0x18a69cu: goto label_18a69c;
        case 0x18a6a0u: goto label_18a6a0;
        case 0x18a6a4u: goto label_18a6a4;
        case 0x18a6a8u: goto label_18a6a8;
        case 0x18a6acu: goto label_18a6ac;
        case 0x18a6b0u: goto label_18a6b0;
        case 0x18a6b4u: goto label_18a6b4;
        case 0x18a6b8u: goto label_18a6b8;
        case 0x18a6bcu: goto label_18a6bc;
        case 0x18a6c0u: goto label_18a6c0;
        case 0x18a6c4u: goto label_18a6c4;
        case 0x18a6c8u: goto label_18a6c8;
        case 0x18a6ccu: goto label_18a6cc;
        case 0x18a6d0u: goto label_18a6d0;
        case 0x18a6d4u: goto label_18a6d4;
        case 0x18a6d8u: goto label_18a6d8;
        case 0x18a6dcu: goto label_18a6dc;
        case 0x18a6e0u: goto label_18a6e0;
        case 0x18a6e4u: goto label_18a6e4;
        case 0x18a6e8u: goto label_18a6e8;
        case 0x18a6ecu: goto label_18a6ec;
        case 0x18a6f0u: goto label_18a6f0;
        case 0x18a6f4u: goto label_18a6f4;
        case 0x18a6f8u: goto label_18a6f8;
        case 0x18a6fcu: goto label_18a6fc;
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
        default: return;
    }

label_18a4c0:
    // 0x18a4c0: 0xc6a10000  lwc1        $f1, 0x0($s5)
    ctx->pc = 0x18a4c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18a4c4:
    // 0x18a4c4: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x18a4c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18a4c8:
    // 0x18a4c8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18a4c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_18a4cc:
    // 0x18a4cc: 0xe6000210  swc1        $f0, 0x210($s0)
    ctx->pc = 0x18a4ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 528), bits); }
label_18a4d0:
    // 0x18a4d0: 0xc6a10004  lwc1        $f1, 0x4($s5)
    ctx->pc = 0x18a4d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18a4d4:
    // 0x18a4d4: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x18a4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18a4d8:
    // 0x18a4d8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18a4d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_18a4dc:
    // 0x18a4dc: 0xe6000214  swc1        $f0, 0x214($s0)
    ctx->pc = 0x18a4dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 532), bits); }
label_18a4e0:
    // 0x18a4e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18a4e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_18a4e4:
    // 0x18a4e4: 0x2a230009  slti        $v1, $s1, 0x9
    ctx->pc = 0x18a4e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)9) ? 1 : 0);
label_18a4e8:
    // 0x18a4e8: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x18a4e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_18a4ec:
    // 0x18a4ec: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
label_18a4f0:
    if (ctx->pc == 0x18A4F0u) {
        ctx->pc = 0x18A4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A4ECu;
        // 0x18a4f0: 0x26940010  addiu       $s4, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A4F4u;
        goto label_18a4f4;
    }
    ctx->pc = 0x18A4ECu;
    {
        const bool branch_taken_0x18a4ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A4ECu;
        // 0x18a4f0: 0x26940010  addiu       $s4, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a4ec) {
            ctx->pc = 0x18A47Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x18a47c; return; }
        }
    }
    ctx->pc = 0x18A4F4u;
label_18a4f4:
    // 0x18a4f4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x18a4f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_18a4f8:
    // 0x18a4f8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x18a4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_18a4fc:
    // 0x18a4fc: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x18a4fcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_18a500:
    // 0x18a500: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x18a500u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_18a504:
    // 0x18a504: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x18a504u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_18a508:
    // 0x18a508: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x18a508u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_18a50c:
    // 0x18a50c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x18a50cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_18a510:
    // 0x18a510: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x18a510u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18a514:
    // 0x18a514: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18a514u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18a518:
    // 0x18a518: 0x3e00008  jr          $ra
label_18a51c:
    if (ctx->pc == 0x18A51Cu) {
        ctx->pc = 0x18A51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A518u;
        // 0x18a51c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A520u;
        goto label_18a520;
    }
    ctx->pc = 0x18A518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A518u;
        // 0x18a51c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18A520u;
label_18a520:
    // 0x18a520: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18a520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_18a524:
    // 0x18a524: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x18a524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
label_18a528:
    // 0x18a528: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x18a528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_18a52c:
    // 0x18a52c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18a52cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_18a530:
    // 0x18a530: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18a530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_18a534:
    // 0x18a534: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x18a534u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18a538:
    // 0x18a538: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18a538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_18a53c:
    // 0x18a53c: 0x8c840024  lw          $a0, 0x24($a0)
    ctx->pc = 0x18a53cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_18a540:
    // 0x18a540: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x18a540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18a544:
    // 0x18a544: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x18a544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_18a548:
    // 0x18a548: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_18a54c:
    if (ctx->pc == 0x18A54Cu) {
        ctx->pc = 0x18A550u;
        goto label_18a550;
    }
    ctx->pc = 0x18A548u;
    {
        const bool branch_taken_0x18a548 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18a548) {
            ctx->pc = 0x18A56Cu;
            goto label_18a56c;
        }
    }
    ctx->pc = 0x18A550u;
label_18a550:
    // 0x18a550: 0x8e440038  lw          $a0, 0x38($s2)
    ctx->pc = 0x18a550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_18a554:
    // 0x18a554: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x18a554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_18a558:
    // 0x18a558: 0x8484003c  lh          $a0, 0x3C($a0)
    ctx->pc = 0x18a558u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 60)));
label_18a55c:
    // 0x18a55c: 0x10830120  beq         $a0, $v1, . + 4 + (0x120 << 2)
label_18a560:
    if (ctx->pc == 0x18A560u) {
        ctx->pc = 0x18A560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A55Cu;
        // 0x18a560: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A564u;
        goto label_18a564;
    }
    ctx->pc = 0x18A55Cu;
    {
        const bool branch_taken_0x18a55c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x18A560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A55Cu;
        // 0x18a560: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a55c) {
            ctx->pc = 0x18A9E0u;
            goto label_18a9e0;
        }
    }
    ctx->pc = 0x18A564u;
label_18a564:
    // 0x18a564: 0x1083011e  beq         $a0, $v1, . + 4 + (0x11E << 2)
label_18a568:
    if (ctx->pc == 0x18A568u) {
        ctx->pc = 0x18A56Cu;
        goto label_18a56c;
    }
    ctx->pc = 0x18A564u;
    {
        const bool branch_taken_0x18a564 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x18a564) {
            ctx->pc = 0x18A9E0u;
            goto label_18a9e0;
        }
    }
    ctx->pc = 0x18A56Cu;
label_18a56c:
    // 0x18a56c: 0x8644003c  lh          $a0, 0x3C($s2)
    ctx->pc = 0x18a56cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 60)));
label_18a570:
    // 0x18a570: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x18a570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_18a574:
    // 0x18a574: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
label_18a578:
    if (ctx->pc == 0x18A578u) {
        ctx->pc = 0x18A578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A574u;
        // 0x18a578: 0x24030073  addiu       $v1, $zero, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A57Cu;
        goto label_18a57c;
    }
    ctx->pc = 0x18A574u;
    {
        const bool branch_taken_0x18a574 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x18A578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A574u;
        // 0x18a578: 0x24030073  addiu       $v1, $zero, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a574) {
            ctx->pc = 0x18A590u;
            goto label_18a590;
        }
    }
    ctx->pc = 0x18A57Cu;
label_18a57c:
    // 0x18a57c: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
label_18a580:
    if (ctx->pc == 0x18A580u) {
        ctx->pc = 0x18A584u;
        goto label_18a584;
    }
    ctx->pc = 0x18A57Cu;
    {
        const bool branch_taken_0x18a57c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x18a57c) {
            ctx->pc = 0x18A590u;
            goto label_18a590;
        }
    }
    ctx->pc = 0x18A584u;
label_18a584:
    // 0x18a584: 0x24030046  addiu       $v1, $zero, 0x46
    ctx->pc = 0x18a584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_18a588:
    // 0x18a588: 0x1483002e  bne         $a0, $v1, . + 4 + (0x2E << 2)
label_18a58c:
    if (ctx->pc == 0x18A58Cu) {
        ctx->pc = 0x18A58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A588u;
        // 0x18a58c: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A590u;
        goto label_18a590;
    }
    ctx->pc = 0x18A588u;
    {
        const bool branch_taken_0x18a588 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x18A58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A588u;
        // 0x18a58c: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a588) {
            ctx->pc = 0x18A644u;
            goto label_18a644;
        }
    }
    ctx->pc = 0x18A590u;
label_18a590:
    // 0x18a590: 0xc6410260  lwc1        $f1, 0x260($s2)
    ctx->pc = 0x18a590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18a594:
    // 0x18a594: 0x3c03481c  lui         $v1, 0x481C
    ctx->pc = 0x18a594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18460 << 16));
label_18a598:
    // 0x18a598: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x18a598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_18a59c:
    // 0x18a59c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18a59cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18a5a0:
    // 0x18a5a0: 0x0  nop
    ctx->pc = 0x18a5a0u;
    // NOP
label_18a5a4:
    // 0x18a5a4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18a5a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18a5a8:
    // 0x18a5a8: 0x0  nop
    ctx->pc = 0x18a5a8u;
    // NOP
label_18a5ac:
    // 0x18a5ac: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_18a5b0:
    if (ctx->pc == 0x18A5B0u) {
        ctx->pc = 0x18A5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A5ACu;
        // 0x18a5b0: 0x3c033fb2  lui         $v1, 0x3FB2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16306 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A5B4u;
        goto label_18a5b4;
    }
    ctx->pc = 0x18A5ACu;
    {
        const bool branch_taken_0x18a5ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18A5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A5ACu;
        // 0x18a5b0: 0x3c033fb2  lui         $v1, 0x3FB2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16306 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a5ac) {
            ctx->pc = 0x18A5E8u;
            goto label_18a5e8;
        }
    }
    ctx->pc = 0x18A5B4u;
label_18a5b4:
    // 0x18a5b4: 0x92440237  lbu         $a0, 0x237($s2)
    ctx->pc = 0x18a5b4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 567)));
label_18a5b8:
    // 0x18a5b8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x18a5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_18a5bc:
    // 0x18a5bc: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
label_18a5c0:
    if (ctx->pc == 0x18A5C0u) {
        ctx->pc = 0x18A5C4u;
        goto label_18a5c4;
    }
    ctx->pc = 0x18A5BCu;
    {
        const bool branch_taken_0x18a5bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x18a5bc) {
            ctx->pc = 0x18A5E4u;
            goto label_18a5e4;
        }
    }
    ctx->pc = 0x18A5C4u;
label_18a5c4:
    // 0x18a5c4: 0x92430232  lbu         $v1, 0x232($s2)
    ctx->pc = 0x18a5c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 562)));
label_18a5c8:
    // 0x18a5c8: 0x28610005  slti        $at, $v1, 0x5
    ctx->pc = 0x18a5c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
label_18a5cc:
    // 0x18a5cc: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_18a5d0:
    if (ctx->pc == 0x18A5D0u) {
        ctx->pc = 0x18A5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A5CCu;
        // 0x18a5d0: 0x3c034006  lui         $v1, 0x4006 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16390 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A5D4u;
        goto label_18a5d4;
    }
    ctx->pc = 0x18A5CCu;
    {
        const bool branch_taken_0x18a5cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A5CCu;
        // 0x18a5d0: 0x3c034006  lui         $v1, 0x4006 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16390 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a5cc) {
            ctx->pc = 0x18A5E4u;
            goto label_18a5e4;
        }
    }
    ctx->pc = 0x18A5D4u;
label_18a5d4:
    // 0x18a5d4: 0x34630a92  ori         $v1, $v1, 0xA92
    ctx->pc = 0x18a5d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2706);
label_18a5d8:
    // 0x18a5d8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x18a5d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18a5dc:
    // 0x18a5dc: 0x10000005  b           . + 4 + (0x5 << 2)
label_18a5e0:
    if (ctx->pc == 0x18A5E0u) {
        ctx->pc = 0x18A5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A5DCu;
        // 0x18a5e0: 0xc6400044  lwc1        $f0, 0x44($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A5E4u;
        goto label_18a5e4;
    }
    ctx->pc = 0x18A5DCu;
    {
        const bool branch_taken_0x18a5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A5DCu;
        // 0x18a5e0: 0xc6400044  lwc1        $f0, 0x44($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a5dc) {
            ctx->pc = 0x18A5F4u;
            goto label_18a5f4;
        }
    }
    ctx->pc = 0x18A5E4u;
label_18a5e4:
    // 0x18a5e4: 0x3c033fb2  lui         $v1, 0x3FB2
    ctx->pc = 0x18a5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16306 << 16));
label_18a5e8:
    // 0x18a5e8: 0x3463b8c3  ori         $v1, $v1, 0xB8C3
    ctx->pc = 0x18a5e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)47299);
label_18a5ec:
    // 0x18a5ec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x18a5ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18a5f0:
    // 0x18a5f0: 0xc6400044  lwc1        $f0, 0x44($s2)
    ctx->pc = 0x18a5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18a5f4:
    // 0x18a5f4: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x18a5f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_18a5f8:
    // 0x18a5f8: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x18a5f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_18a5fc:
    // 0x18a5fc: 0x48a90800  qmtc2.ni    $t1, $vf1
    ctx->pc = 0x18a5fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
label_18a600:
    // 0x18a600: 0x4a000138  vcallms     0x20
    ctx->pc = 0x18a600u;
    {     ctx->vu0_tpc = 0x20;     runtime->executeVU0Microprogram(rdram, ctx, 0x20); }
label_18a604:
    // 0x18a604: 0x48290801  qmfc2.i     $t1, $vf1
    ctx->pc = 0x18a604u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[1]));
label_18a608:
    // 0x18a608: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x18a608u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18a60c:
    // 0x18a60c: 0x48291000  qmfc2.ni    $t1, $vf2
    ctx->pc = 0x18a60cu;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[2]));
label_18a610:
    // 0x18a610: 0x44891000  mtc1        $t1, $f2
    ctx->pc = 0x18a610u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_18a614:
    // 0x18a614: 0x3c0342fe  lui         $v1, 0x42FE
    ctx->pc = 0x18a614u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17150 << 16));
label_18a618:
    // 0x18a618: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18a618u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18a61c:
    // 0x18a61c: 0x0  nop
    ctx->pc = 0x18a61cu;
    // NOP
label_18a620:
    // 0x18a620: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x18a620u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_18a624:
    // 0x18a624: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x18a624u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_18a628:
    // 0x18a628: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18a628u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_18a62c:
    // 0x18a62c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x18a62cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_18a630:
    // 0x18a630: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18a630u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_18a634:
    // 0x18a634: 0xa643019c  sh          $v1, 0x19C($s2)
    ctx->pc = 0x18a634u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 412), (uint16_t)GPR_U32(ctx, 3));
label_18a638:
    // 0x18a638: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x18a638u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_18a63c:
    // 0x18a63c: 0x100000e8  b           . + 4 + (0xE8 << 2)
label_18a640:
    if (ctx->pc == 0x18A640u) {
        ctx->pc = 0x18A640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A63Cu;
        // 0x18a640: 0xa643019e  sh          $v1, 0x19E($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 414), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A644u;
        goto label_18a644;
    }
    ctx->pc = 0x18A63Cu;
    {
        const bool branch_taken_0x18a63c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A63Cu;
        // 0x18a640: 0xa643019e  sh          $v1, 0x19E($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 414), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a63c) {
            ctx->pc = 0x18A9E0u;
            goto label_18a9e0;
        }
    }
    ctx->pc = 0x18A644u;
label_18a644:
    // 0x18a644: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
label_18a648:
    if (ctx->pc == 0x18A648u) {
        ctx->pc = 0x18A64Cu;
        goto label_18a64c;
    }
    ctx->pc = 0x18A644u;
    {
        const bool branch_taken_0x18a644 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x18a644) {
            ctx->pc = 0x18A660u;
            goto label_18a660;
        }
    }
    ctx->pc = 0x18A64Cu;
label_18a64c:
    // 0x18a64c: 0x24030072  addiu       $v1, $zero, 0x72
    ctx->pc = 0x18a64cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
label_18a650:
    // 0x18a650: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_18a654:
    if (ctx->pc == 0x18A654u) {
        ctx->pc = 0x18A654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A650u;
        // 0x18a654: 0x24030045  addiu       $v1, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A658u;
        goto label_18a658;
    }
    ctx->pc = 0x18A650u;
    {
        const bool branch_taken_0x18a650 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x18A654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A650u;
        // 0x18a654: 0x24030045  addiu       $v1, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a650) {
            ctx->pc = 0x18A660u;
            goto label_18a660;
        }
    }
    ctx->pc = 0x18A658u;
label_18a658:
    // 0x18a658: 0x1483002e  bne         $a0, $v1, . + 4 + (0x2E << 2)
label_18a65c:
    if (ctx->pc == 0x18A65Cu) {
        ctx->pc = 0x18A660u;
        goto label_18a660;
    }
    ctx->pc = 0x18A658u;
    {
        const bool branch_taken_0x18a658 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x18a658) {
            ctx->pc = 0x18A714u;
            goto label_18a714;
        }
    }
    ctx->pc = 0x18A660u;
label_18a660:
    // 0x18a660: 0xc6410260  lwc1        $f1, 0x260($s2)
    ctx->pc = 0x18a660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18a664:
    // 0x18a664: 0x3c03481c  lui         $v1, 0x481C
    ctx->pc = 0x18a664u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18460 << 16));
label_18a668:
    // 0x18a668: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x18a668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_18a66c:
    // 0x18a66c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18a66cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18a670:
    // 0x18a670: 0x0  nop
    ctx->pc = 0x18a670u;
    // NOP
label_18a674:
    // 0x18a674: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18a674u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18a678:
    // 0x18a678: 0x0  nop
    ctx->pc = 0x18a678u;
    // NOP
label_18a67c:
    // 0x18a67c: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_18a680:
    if (ctx->pc == 0x18A680u) {
        ctx->pc = 0x18A680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A67Cu;
        // 0x18a680: 0x3c033fb2  lui         $v1, 0x3FB2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16306 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A684u;
        goto label_18a684;
    }
    ctx->pc = 0x18A67Cu;
    {
        const bool branch_taken_0x18a67c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18A680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A67Cu;
        // 0x18a680: 0x3c033fb2  lui         $v1, 0x3FB2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16306 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a67c) {
            ctx->pc = 0x18A6B8u;
            goto label_18a6b8;
        }
    }
    ctx->pc = 0x18A684u;
label_18a684:
    // 0x18a684: 0x92440237  lbu         $a0, 0x237($s2)
    ctx->pc = 0x18a684u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 567)));
label_18a688:
    // 0x18a688: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x18a688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_18a68c:
    // 0x18a68c: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
label_18a690:
    if (ctx->pc == 0x18A690u) {
        ctx->pc = 0x18A694u;
        goto label_18a694;
    }
    ctx->pc = 0x18A68Cu;
    {
        const bool branch_taken_0x18a68c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x18a68c) {
            ctx->pc = 0x18A6B4u;
            goto label_18a6b4;
        }
    }
    ctx->pc = 0x18A694u;
label_18a694:
    // 0x18a694: 0x92430232  lbu         $v1, 0x232($s2)
    ctx->pc = 0x18a694u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 562)));
label_18a698:
    // 0x18a698: 0x28610005  slti        $at, $v1, 0x5
    ctx->pc = 0x18a698u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
label_18a69c:
    // 0x18a69c: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_18a6a0:
    if (ctx->pc == 0x18A6A0u) {
        ctx->pc = 0x18A6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A69Cu;
        // 0x18a6a0: 0x3c034006  lui         $v1, 0x4006 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16390 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A6A4u;
        goto label_18a6a4;
    }
    ctx->pc = 0x18A69Cu;
    {
        const bool branch_taken_0x18a69c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A69Cu;
        // 0x18a6a0: 0x3c034006  lui         $v1, 0x4006 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16390 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a69c) {
            ctx->pc = 0x18A6B4u;
            goto label_18a6b4;
        }
    }
    ctx->pc = 0x18A6A4u;
label_18a6a4:
    // 0x18a6a4: 0x34630a92  ori         $v1, $v1, 0xA92
    ctx->pc = 0x18a6a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2706);
label_18a6a8:
    // 0x18a6a8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x18a6a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18a6ac:
    // 0x18a6ac: 0x10000005  b           . + 4 + (0x5 << 2)
label_18a6b0:
    if (ctx->pc == 0x18A6B0u) {
        ctx->pc = 0x18A6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A6ACu;
        // 0x18a6b0: 0xc6400044  lwc1        $f0, 0x44($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18A6B4u;
        goto label_18a6b4;
    }
    ctx->pc = 0x18A6ACu;
    {
        const bool branch_taken_0x18a6ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A6ACu;
        // 0x18a6b0: 0xc6400044  lwc1        $f0, 0x44($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a6ac) {
            ctx->pc = 0x18A6C4u;
            goto label_18a6c4;
        }
    }
    ctx->pc = 0x18A6B4u;
label_18a6b4:
    // 0x18a6b4: 0x3c033fb2  lui         $v1, 0x3FB2
    ctx->pc = 0x18a6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16306 << 16));
label_18a6b8:
    // 0x18a6b8: 0x3463b8c3  ori         $v1, $v1, 0xB8C3
    ctx->pc = 0x18a6b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)47299);
label_18a6bc:
    // 0x18a6bc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x18a6bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18a6c0:
    // 0x18a6c0: 0xc6400044  lwc1        $f0, 0x44($s2)
    ctx->pc = 0x18a6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18a6c4:
    // 0x18a6c4: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x18a6c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_18a6c8:
    // 0x18a6c8: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x18a6c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
label_18a6cc:
    // 0x18a6cc: 0x48a90800  qmtc2.ni    $t1, $vf1
    ctx->pc = 0x18a6ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
label_18a6d0:
    // 0x18a6d0: 0x4a000138  vcallms     0x20
    ctx->pc = 0x18a6d0u;
    {     ctx->vu0_tpc = 0x20;     runtime->executeVU0Microprogram(rdram, ctx, 0x20); }
label_18a6d4:
    // 0x18a6d4: 0x48290801  qmfc2.i     $t1, $vf1
    ctx->pc = 0x18a6d4u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[1]));
label_18a6d8:
    // 0x18a6d8: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x18a6d8u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18a6dc:
    // 0x18a6dc: 0x48291000  qmfc2.ni    $t1, $vf2
    ctx->pc = 0x18a6dcu;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[2]));
label_18a6e0:
    // 0x18a6e0: 0x44891000  mtc1        $t1, $f2
    ctx->pc = 0x18a6e0u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_18a6e4:
    // 0x18a6e4: 0x3c0342fe  lui         $v1, 0x42FE
    ctx->pc = 0x18a6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17150 << 16));
label_18a6e8:
    // 0x18a6e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18a6e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18a6ec:
    // 0x18a6ec: 0x0  nop
    ctx->pc = 0x18a6ecu;
    // NOP
label_18a6f0:
    // 0x18a6f0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x18a6f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_18a6f4:
    // 0x18a6f4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x18a6f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_18a6f8:
    // 0x18a6f8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18a6f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_18a6fc:
    // 0x18a6fc: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x18a6fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
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
            { ctx->pc = 0x18ac9c; return; }
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
            { ctx->pc = 0x18acf8; return; }
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
            { ctx->pc = 0x18acf8; return; }
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
            { ctx->pc = 0x18acf8; return; }
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
            { ctx->pc = 0x18acf8; return; }
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
            { ctx->pc = 0x18acf8; return; }
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
    ctx->pc = 0x18ac90u;
    return;
}

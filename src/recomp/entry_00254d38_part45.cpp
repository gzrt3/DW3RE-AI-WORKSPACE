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

// Function: entry_00254d38
// Address: 0x254d38 - 0x27d478
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void entry_00254d38_part45(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x26a4f8u: goto label_26a4f8;
        case 0x26a4fcu: goto label_26a4fc;
        case 0x26a500u: goto label_26a500;
        case 0x26a504u: goto label_26a504;
        case 0x26a508u: goto label_26a508;
        case 0x26a50cu: goto label_26a50c;
        case 0x26a510u: goto label_26a510;
        case 0x26a514u: goto label_26a514;
        case 0x26a518u: goto label_26a518;
        case 0x26a51cu: goto label_26a51c;
        case 0x26a520u: goto label_26a520;
        case 0x26a524u: goto label_26a524;
        case 0x26a528u: goto label_26a528;
        case 0x26a52cu: goto label_26a52c;
        case 0x26a530u: goto label_26a530;
        case 0x26a534u: goto label_26a534;
        case 0x26a538u: goto label_26a538;
        case 0x26a53cu: goto label_26a53c;
        case 0x26a540u: goto label_26a540;
        case 0x26a544u: goto label_26a544;
        case 0x26a548u: goto label_26a548;
        case 0x26a54cu: goto label_26a54c;
        case 0x26a550u: goto label_26a550;
        case 0x26a554u: goto label_26a554;
        case 0x26a558u: goto label_26a558;
        case 0x26a55cu: goto label_26a55c;
        case 0x26a560u: goto label_26a560;
        case 0x26a564u: goto label_26a564;
        case 0x26a568u: goto label_26a568;
        case 0x26a56cu: goto label_26a56c;
        case 0x26a570u: goto label_26a570;
        case 0x26a574u: goto label_26a574;
        case 0x26a578u: goto label_26a578;
        case 0x26a57cu: goto label_26a57c;
        case 0x26a580u: goto label_26a580;
        case 0x26a584u: goto label_26a584;
        case 0x26a588u: goto label_26a588;
        case 0x26a58cu: goto label_26a58c;
        case 0x26a590u: goto label_26a590;
        case 0x26a594u: goto label_26a594;
        case 0x26a598u: goto label_26a598;
        case 0x26a59cu: goto label_26a59c;
        case 0x26a5a0u: goto label_26a5a0;
        case 0x26a5a4u: goto label_26a5a4;
        case 0x26a5a8u: goto label_26a5a8;
        case 0x26a5acu: goto label_26a5ac;
        case 0x26a5b0u: goto label_26a5b0;
        case 0x26a5b4u: goto label_26a5b4;
        case 0x26a5b8u: goto label_26a5b8;
        case 0x26a5bcu: goto label_26a5bc;
        case 0x26a5c0u: goto label_26a5c0;
        case 0x26a5c4u: goto label_26a5c4;
        case 0x26a5c8u: goto label_26a5c8;
        case 0x26a5ccu: goto label_26a5cc;
        case 0x26a5d0u: goto label_26a5d0;
        case 0x26a5d4u: goto label_26a5d4;
        case 0x26a5d8u: goto label_26a5d8;
        case 0x26a5dcu: goto label_26a5dc;
        case 0x26a5e0u: goto label_26a5e0;
        case 0x26a5e4u: goto label_26a5e4;
        case 0x26a5e8u: goto label_26a5e8;
        case 0x26a5ecu: goto label_26a5ec;
        case 0x26a5f0u: goto label_26a5f0;
        case 0x26a5f4u: goto label_26a5f4;
        case 0x26a5f8u: goto label_26a5f8;
        case 0x26a5fcu: goto label_26a5fc;
        case 0x26a600u: goto label_26a600;
        case 0x26a604u: goto label_26a604;
        case 0x26a608u: goto label_26a608;
        case 0x26a60cu: goto label_26a60c;
        case 0x26a610u: goto label_26a610;
        case 0x26a614u: goto label_26a614;
        case 0x26a618u: goto label_26a618;
        case 0x26a61cu: goto label_26a61c;
        case 0x26a620u: goto label_26a620;
        case 0x26a624u: goto label_26a624;
        case 0x26a628u: goto label_26a628;
        case 0x26a62cu: goto label_26a62c;
        case 0x26a630u: goto label_26a630;
        case 0x26a634u: goto label_26a634;
        case 0x26a638u: goto label_26a638;
        case 0x26a63cu: goto label_26a63c;
        case 0x26a640u: goto label_26a640;
        case 0x26a644u: goto label_26a644;
        case 0x26a648u: goto label_26a648;
        case 0x26a64cu: goto label_26a64c;
        case 0x26a650u: goto label_26a650;
        case 0x26a654u: goto label_26a654;
        case 0x26a658u: goto label_26a658;
        case 0x26a65cu: goto label_26a65c;
        case 0x26a660u: goto label_26a660;
        case 0x26a664u: goto label_26a664;
        case 0x26a668u: goto label_26a668;
        case 0x26a66cu: goto label_26a66c;
        case 0x26a670u: goto label_26a670;
        case 0x26a674u: goto label_26a674;
        case 0x26a678u: goto label_26a678;
        case 0x26a67cu: goto label_26a67c;
        case 0x26a680u: goto label_26a680;
        case 0x26a684u: goto label_26a684;
        case 0x26a688u: goto label_26a688;
        case 0x26a68cu: goto label_26a68c;
        case 0x26a690u: goto label_26a690;
        case 0x26a694u: goto label_26a694;
        case 0x26a698u: goto label_26a698;
        case 0x26a69cu: goto label_26a69c;
        case 0x26a6a0u: goto label_26a6a0;
        case 0x26a6a4u: goto label_26a6a4;
        case 0x26a6a8u: goto label_26a6a8;
        case 0x26a6acu: goto label_26a6ac;
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
        default: return;
    }

label_26a4f8:
    // 0x26a4f8: 0x0  nop
    ctx->pc = 0x26a4f8u;
    // NOP
label_26a4fc:
    // 0x26a4fc: 0x0  nop
    ctx->pc = 0x26a4fcu;
    // NOP
label_26a500:
    // 0x26a500: 0x53  .word       0x00000053                   # mtlo        $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a500u;
    ctx->lo = GPR_U64(ctx, 0);
label_26a504:
    // 0x26a504: 0xae80  sll         $s5, $zero, 26
    ctx->pc = 0x26a504u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_26a508:
    // 0x26a508: 0x0  nop
    ctx->pc = 0x26a508u;
    // NOP
label_26a50c:
    // 0x26a50c: 0x0  nop
    ctx->pc = 0x26a50cu;
    // NOP
label_26a510:
    // 0x26a510: 0x69  .word       0x00000069                   # mtsa        $zero # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26a510u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_26a514:
    // 0x26a514: 0xb100  sll         $s6, $zero, 4
    ctx->pc = 0x26a514u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_26a518:
    // 0x26a518: 0x0  nop
    ctx->pc = 0x26a518u;
    // NOP
label_26a51c:
    // 0x26a51c: 0x0  nop
    ctx->pc = 0x26a51cu;
    // NOP
label_26a520:
    // 0x26a520: 0x80  sll         $zero, $zero, 2
    ctx->pc = 0x26a520u;
    
label_26a524:
    // 0x26a524: 0xc9e0  .word       0x0000C9E0                   # add         $t9, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a524u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_26a528:
    // 0x26a528: 0x0  nop
    ctx->pc = 0x26a528u;
    // NOP
label_26a52c:
    // 0x26a52c: 0x0  nop
    ctx->pc = 0x26a52cu;
    // NOP
label_26a530:
    // 0x26a530: 0x9a  .word       0x0000009A                   # div         $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a530u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_26a534:
    // 0x26a534: 0xaf40  sll         $s5, $zero, 29
    ctx->pc = 0x26a534u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_26a538:
    // 0x26a538: 0x0  nop
    ctx->pc = 0x26a538u;
    // NOP
label_26a53c:
    // 0x26a53c: 0x0  nop
    ctx->pc = 0x26a53cu;
    // NOP
label_26a540:
    // 0x26a540: 0xb0  tge         $zero, $zero, 2
    ctx->pc = 0x26a540u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26a544:
    // 0x26a544: 0xe480  sll         $gp, $zero, 18
    ctx->pc = 0x26a544u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_26a548:
    // 0x26a548: 0x0  nop
    ctx->pc = 0x26a548u;
    // NOP
label_26a54c:
    // 0x26a54c: 0x0  nop
    ctx->pc = 0x26a54cu;
    // NOP
label_26a550:
    // 0x26a550: 0xcd  break       0, 3
    ctx->pc = 0x26a550u;
    runtime->handleBreak(rdram, ctx);
label_26a554:
    // 0x26a554: 0x9720  .word       0x00009720                   # add         $s2, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a554u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_26a558:
    // 0x26a558: 0x0  nop
    ctx->pc = 0x26a558u;
    // NOP
label_26a55c:
    // 0x26a55c: 0x0  nop
    ctx->pc = 0x26a55cu;
    // NOP
label_26a560:
    // 0x26a560: 0xe0  .word       0x000000E0                   # add         $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a560u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_26a564:
    // 0x26a564: 0x7be0  .word       0x00007BE0                   # add         $t7, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a564u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_26a568:
    // 0x26a568: 0x0  nop
    ctx->pc = 0x26a568u;
    // NOP
label_26a56c:
    // 0x26a56c: 0x0  nop
    ctx->pc = 0x26a56cu;
    // NOP
label_26a570:
    // 0x26a570: 0xf0  tge         $zero, $zero, 3
    ctx->pc = 0x26a570u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26a574:
    // 0x26a574: 0xa190  .word       0x0000A190                   # mfhi        $s4 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a574u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_26a578:
    // 0x26a578: 0x0  nop
    ctx->pc = 0x26a578u;
    // NOP
label_26a57c:
    // 0x26a57c: 0x0  nop
    ctx->pc = 0x26a57cu;
    // NOP
label_26a580:
    // 0x26a580: 0x105  .word       0x00000105                   # INVALID     $zero, $zero, 0x105 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a580u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x26A580 raw=0x00000105"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26a584:
    // 0x26a584: 0xd1f0  tge         $zero, $zero, 839
    ctx->pc = 0x26a584u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26a588:
    // 0x26a588: 0x0  nop
    ctx->pc = 0x26a588u;
    // NOP
label_26a58c:
    // 0x26a58c: 0x0  nop
    ctx->pc = 0x26a58cu;
    // NOP
label_26a590:
    // 0x26a590: 0x120  .word       0x00000120                   # add         $zero, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a590u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_26a594:
    // 0x26a594: 0xa510  .word       0x0000A510                   # mfhi        $s4 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a594u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_26a598:
    // 0x26a598: 0x0  nop
    ctx->pc = 0x26a598u;
    // NOP
label_26a59c:
    // 0x26a59c: 0x0  nop
    ctx->pc = 0x26a59cu;
    // NOP
label_26a5a0:
    // 0x26a5a0: 0x135  .word       0x00000135                   # INVALID     $zero, $zero, 0x135 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a5a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x26A5A0 raw=0x00000135"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26a5a4:
    // 0x26a5a4: 0x4070  tge         $zero, $zero, 257
    ctx->pc = 0x26a5a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26a5a8:
    // 0x26a5a8: 0x0  nop
    ctx->pc = 0x26a5a8u;
    // NOP
label_26a5ac:
    // 0x26a5ac: 0x0  nop
    ctx->pc = 0x26a5acu;
    // NOP
label_26a5b0:
    // 0x26a5b0: 0x13e  dsrl32      $zero, $zero, 4
    ctx->pc = 0x26a5b0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 4));
label_26a5b4:
    // 0x26a5b4: 0x3b70  tge         $zero, $zero, 237
    ctx->pc = 0x26a5b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26a5b8:
    // 0x26a5b8: 0x0  nop
    ctx->pc = 0x26a5b8u;
    // NOP
label_26a5bc:
    // 0x26a5bc: 0x0  nop
    ctx->pc = 0x26a5bcu;
    // NOP
label_26a5c0:
    // 0x26a5c0: 0x146  .word       0x00000146                   # srlv        $zero, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a5c0u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26a5c4:
    // 0x26a5c4: 0x59e0  .word       0x000059E0                   # add         $t3, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a5c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_26a5c8:
    // 0x26a5c8: 0x0  nop
    ctx->pc = 0x26a5c8u;
    // NOP
label_26a5cc:
    // 0x26a5cc: 0x0  nop
    ctx->pc = 0x26a5ccu;
    // NOP
label_26a5d0:
    // 0x26a5d0: 0x152  .word       0x00000152                   # mflo        $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a5d0u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_26a5d4:
    // 0x26a5d4: 0x6450  .word       0x00006450                   # mfhi        $t4 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a5d4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_26a5d8:
    // 0x26a5d8: 0x0  nop
    ctx->pc = 0x26a5d8u;
    // NOP
label_26a5dc:
    // 0x26a5dc: 0x0  nop
    ctx->pc = 0x26a5dcu;
    // NOP
label_26a5e0:
    // 0x26a5e0: 0x15f  .word       0x0000015F                   # ddivu       $zero, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a5e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x26A5E0 raw=0x0000015F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26a5e4:
    // 0x26a5e4: 0x68e0  .word       0x000068E0                   # add         $t5, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a5e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_26a5e8:
    // 0x26a5e8: 0x0  nop
    ctx->pc = 0x26a5e8u;
    // NOP
label_26a5ec:
    // 0x26a5ec: 0x0  nop
    ctx->pc = 0x26a5ecu;
    // NOP
label_26a5f0:
    // 0x26a5f0: 0x16d  .word       0x0000016D                   # daddu       $zero, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a5f0u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26a5f4:
    // 0x26a5f4: 0xd8c0  sll         $k1, $zero, 3
    ctx->pc = 0x26a5f4u;
    SET_GPR_S32(ctx, 27, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_26a5f8:
    // 0x26a5f8: 0x0  nop
    ctx->pc = 0x26a5f8u;
    // NOP
label_26a5fc:
    // 0x26a5fc: 0x0  nop
    ctx->pc = 0x26a5fcu;
    // NOP
label_26a600:
    // 0x26a600: 0x189  .word       0x00000189                   # jalr        $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
label_26a604:
    if (ctx->pc == 0x26A604u) {
        ctx->pc = 0x26A604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A600u;
        // 0x26a604: 0xc030  tge         $zero, $zero, 768 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A608u;
        goto label_26a608;
    }
    ctx->pc = 0x26A600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x26A604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A600u;
        // 0x26a604: 0xc030  tge         $zero, $zero, 768 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26A600u, 0x26A608u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26A608u;
label_26a608:
    // 0x26a608: 0x0  nop
    ctx->pc = 0x26a608u;
    // NOP
label_26a60c:
    // 0x26a60c: 0x0  nop
    ctx->pc = 0x26a60cu;
    // NOP
label_26a610:
    // 0x26a610: 0x1a2  .word       0x000001A2                   # neg         $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a610u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_26a614:
    // 0x26a614: 0x5a90  .word       0x00005A90                   # mfhi        $t3 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a614u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_26a618:
    // 0x26a618: 0x0  nop
    ctx->pc = 0x26a618u;
    // NOP
label_26a61c:
    // 0x26a61c: 0x0  nop
    ctx->pc = 0x26a61cu;
    // NOP
label_26a620:
    // 0x26a620: 0x1ae  .word       0x000001AE                   # dsub        $zero, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a620u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_26a624:
    // 0x26a624: 0xb960  .word       0x0000B960                   # add         $s7, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a624u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_26a628:
    // 0x26a628: 0x0  nop
    ctx->pc = 0x26a628u;
    // NOP
label_26a62c:
    // 0x26a62c: 0x0  nop
    ctx->pc = 0x26a62cu;
    // NOP
label_26a630:
    // 0x26a630: 0x1c6  .word       0x000001C6                   # srlv        $zero, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a630u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_26a634:
    // 0x26a634: 0x4cc0  sll         $t1, $zero, 19
    ctx->pc = 0x26a634u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_26a638:
    // 0x26a638: 0x0  nop
    ctx->pc = 0x26a638u;
    // NOP
label_26a63c:
    // 0x26a63c: 0x0  nop
    ctx->pc = 0x26a63cu;
    // NOP
label_26a640:
    // 0x26a640: 0x1d0  .word       0x000001D0                   # mfhi        $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a640u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_26a644:
    // 0x26a644: 0x5c00  sll         $t3, $zero, 16
    ctx->pc = 0x26a644u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_26a648:
    // 0x26a648: 0x0  nop
    ctx->pc = 0x26a648u;
    // NOP
label_26a64c:
    // 0x26a64c: 0x0  nop
    ctx->pc = 0x26a64cu;
    // NOP
label_26a650:
    // 0x26a650: 0x1dc  .word       0x000001DC                   # dmult       $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a650u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x26A650 raw=0x000001DC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26a654:
    // 0x26a654: 0x83b0  tge         $zero, $zero, 526
    ctx->pc = 0x26a654u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26a658:
    // 0x26a658: 0x0  nop
    ctx->pc = 0x26a658u;
    // NOP
label_26a65c:
    // 0x26a65c: 0x0  nop
    ctx->pc = 0x26a65cu;
    // NOP
label_26a660:
    // 0x26a660: 0x1ed  .word       0x000001ED                   # daddu       $zero, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a660u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26a664:
    // 0x26a664: 0xb9a0  .word       0x0000B9A0                   # add         $s7, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a664u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_26a668:
    // 0x26a668: 0x0  nop
    ctx->pc = 0x26a668u;
    // NOP
label_26a66c:
    // 0x26a66c: 0x0  nop
    ctx->pc = 0x26a66cu;
    // NOP
label_26a670:
    // 0x26a670: 0x205  .word       0x00000205                   # INVALID     $zero, $zero, 0x205 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a670u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x26A670 raw=0x00000205"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26a674:
    // 0x26a674: 0x80c0  sll         $s0, $zero, 3
    ctx->pc = 0x26a674u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_26a678:
    // 0x26a678: 0x0  nop
    ctx->pc = 0x26a678u;
    // NOP
label_26a67c:
    // 0x26a67c: 0x0  nop
    ctx->pc = 0x26a67cu;
    // NOP
label_26a680:
    // 0x26a680: 0x216  .word       0x00000216                   # dsrlv       $zero, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a680u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_26a684:
    // 0x26a684: 0xa650  .word       0x0000A650                   # mfhi        $s4 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a684u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_26a688:
    // 0x26a688: 0x0  nop
    ctx->pc = 0x26a688u;
    // NOP
label_26a68c:
    // 0x26a68c: 0x0  nop
    ctx->pc = 0x26a68cu;
    // NOP
label_26a690:
    // 0x26a690: 0x22b  .word       0x0000022B                   # sltu        $zero, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a690u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_26a694:
    // 0x26a694: 0x8320  .word       0x00008320                   # add         $s0, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a694u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_26a698:
    // 0x26a698: 0x0  nop
    ctx->pc = 0x26a698u;
    // NOP
label_26a69c:
    // 0x26a69c: 0x0  nop
    ctx->pc = 0x26a69cu;
    // NOP
label_26a6a0:
    // 0x26a6a0: 0x23c  dsll32      $zero, $zero, 8
    ctx->pc = 0x26a6a0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 8));
label_26a6a4:
    // 0x26a6a4: 0xc590  .word       0x0000C590                   # mfhi        $t8 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a6a4u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_26a6a8:
    // 0x26a6a8: 0x0  nop
    ctx->pc = 0x26a6a8u;
    // NOP
label_26a6ac:
    // 0x26a6ac: 0x0  nop
    ctx->pc = 0x26a6acu;
    // NOP
label_26a6b0:
    // 0x26a6b0: 0x255  .word       0x00000255                   # INVALID     $zero, $zero, 0x255 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a6b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x26A6B0 raw=0x00000255"); /* MITIGATED MMI/COP0 */
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
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x26A720 raw=0x000002DC"); /* MITIGATED MMI/COP0 */
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
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x26A740 raw=0x00000301"); /* MITIGATED MMI/COP0 */
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
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x26A780 raw=0x0000035D"); /* MITIGATED MMI/COP0 */
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
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x26A7E0 raw=0x000003D5"); /* MITIGATED MMI/COP0 */
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
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x26A830 raw=0x00000435"); /* MITIGATED MMI/COP0 */
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
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x26A860 raw=0x0000045F"); /* MITIGATED MMI/COP0 */
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
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x26A890 raw=0x00000495"); /* MITIGATED MMI/COP0 */
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
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x26A900 raw=0x0000051E"); /* MITIGATED MMI/COP0 */
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
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x26A9E0 raw=0x00000641"); /* MITIGATED MMI/COP0 */
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
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x26AA00 raw=0x0000067D"); /* MITIGATED MMI/COP0 */
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
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x26AA60 raw=0x000006F9"); /* MITIGATED MMI/COP0 */
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
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x26AA80 raw=0x0000071C"); /* MITIGATED MMI/COP0 */
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
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x26AAB0 raw=0x00000745"); /* MITIGATED MMI/COP0 */
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
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x26AAE0 raw=0x00000785"); /* MITIGATED MMI/COP0 */
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
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x26AAF0 raw=0x0000079D"); /* MITIGATED MMI/COP0 */
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
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x26AB50 raw=0x00000835"); /* MITIGATED MMI/COP0 */
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
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x26AB90 raw=0x00000885"); /* MITIGATED MMI/COP0 */
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
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x26ABA0 raw=0x0000089D"); /* MITIGATED MMI/COP0 */
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
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x26AC90 raw=0x00000A1D"); /* MITIGATED MMI/COP0 */
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
    ctx->pc = 0x26acc8u;
    return;
}

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

// Function: FUN_0019b5e8
// Address: 0x19b5e8 - 0x29b5f4
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b5e8_part523(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x29a408u: goto label_29a408;
        case 0x29a40cu: goto label_29a40c;
        case 0x29a410u: goto label_29a410;
        case 0x29a414u: goto label_29a414;
        case 0x29a418u: goto label_29a418;
        case 0x29a41cu: goto label_29a41c;
        case 0x29a420u: goto label_29a420;
        case 0x29a424u: goto label_29a424;
        case 0x29a428u: goto label_29a428;
        case 0x29a42cu: goto label_29a42c;
        case 0x29a430u: goto label_29a430;
        case 0x29a434u: goto label_29a434;
        case 0x29a438u: goto label_29a438;
        case 0x29a43cu: goto label_29a43c;
        case 0x29a440u: goto label_29a440;
        case 0x29a444u: goto label_29a444;
        case 0x29a448u: goto label_29a448;
        case 0x29a44cu: goto label_29a44c;
        case 0x29a450u: goto label_29a450;
        case 0x29a454u: goto label_29a454;
        case 0x29a458u: goto label_29a458;
        case 0x29a45cu: goto label_29a45c;
        case 0x29a460u: goto label_29a460;
        case 0x29a464u: goto label_29a464;
        case 0x29a468u: goto label_29a468;
        case 0x29a46cu: goto label_29a46c;
        case 0x29a470u: goto label_29a470;
        case 0x29a474u: goto label_29a474;
        case 0x29a478u: goto label_29a478;
        case 0x29a47cu: goto label_29a47c;
        case 0x29a480u: goto label_29a480;
        case 0x29a484u: goto label_29a484;
        case 0x29a488u: goto label_29a488;
        case 0x29a48cu: goto label_29a48c;
        case 0x29a490u: goto label_29a490;
        case 0x29a494u: goto label_29a494;
        case 0x29a498u: goto label_29a498;
        case 0x29a49cu: goto label_29a49c;
        case 0x29a4a0u: goto label_29a4a0;
        case 0x29a4a4u: goto label_29a4a4;
        case 0x29a4a8u: goto label_29a4a8;
        case 0x29a4acu: goto label_29a4ac;
        case 0x29a4b0u: goto label_29a4b0;
        case 0x29a4b4u: goto label_29a4b4;
        case 0x29a4b8u: goto label_29a4b8;
        case 0x29a4bcu: goto label_29a4bc;
        case 0x29a4c0u: goto label_29a4c0;
        case 0x29a4c4u: goto label_29a4c4;
        case 0x29a4c8u: goto label_29a4c8;
        case 0x29a4ccu: goto label_29a4cc;
        case 0x29a4d0u: goto label_29a4d0;
        case 0x29a4d4u: goto label_29a4d4;
        case 0x29a4d8u: goto label_29a4d8;
        case 0x29a4dcu: goto label_29a4dc;
        case 0x29a4e0u: goto label_29a4e0;
        case 0x29a4e4u: goto label_29a4e4;
        case 0x29a4e8u: goto label_29a4e8;
        case 0x29a4ecu: goto label_29a4ec;
        case 0x29a4f0u: goto label_29a4f0;
        case 0x29a4f4u: goto label_29a4f4;
        case 0x29a4f8u: goto label_29a4f8;
        case 0x29a4fcu: goto label_29a4fc;
        case 0x29a500u: goto label_29a500;
        case 0x29a504u: goto label_29a504;
        case 0x29a508u: goto label_29a508;
        case 0x29a50cu: goto label_29a50c;
        case 0x29a510u: goto label_29a510;
        case 0x29a514u: goto label_29a514;
        case 0x29a518u: goto label_29a518;
        case 0x29a51cu: goto label_29a51c;
        case 0x29a520u: goto label_29a520;
        case 0x29a524u: goto label_29a524;
        case 0x29a528u: goto label_29a528;
        case 0x29a52cu: goto label_29a52c;
        case 0x29a530u: goto label_29a530;
        case 0x29a534u: goto label_29a534;
        case 0x29a538u: goto label_29a538;
        case 0x29a53cu: goto label_29a53c;
        case 0x29a540u: goto label_29a540;
        case 0x29a544u: goto label_29a544;
        case 0x29a548u: goto label_29a548;
        case 0x29a54cu: goto label_29a54c;
        case 0x29a550u: goto label_29a550;
        case 0x29a554u: goto label_29a554;
        case 0x29a558u: goto label_29a558;
        case 0x29a55cu: goto label_29a55c;
        case 0x29a560u: goto label_29a560;
        case 0x29a564u: goto label_29a564;
        case 0x29a568u: goto label_29a568;
        case 0x29a56cu: goto label_29a56c;
        case 0x29a570u: goto label_29a570;
        case 0x29a574u: goto label_29a574;
        case 0x29a578u: goto label_29a578;
        case 0x29a57cu: goto label_29a57c;
        case 0x29a580u: goto label_29a580;
        case 0x29a584u: goto label_29a584;
        case 0x29a588u: goto label_29a588;
        case 0x29a58cu: goto label_29a58c;
        case 0x29a590u: goto label_29a590;
        case 0x29a594u: goto label_29a594;
        case 0x29a598u: goto label_29a598;
        case 0x29a59cu: goto label_29a59c;
        case 0x29a5a0u: goto label_29a5a0;
        case 0x29a5a4u: goto label_29a5a4;
        case 0x29a5a8u: goto label_29a5a8;
        case 0x29a5acu: goto label_29a5ac;
        case 0x29a5b0u: goto label_29a5b0;
        case 0x29a5b4u: goto label_29a5b4;
        case 0x29a5b8u: goto label_29a5b8;
        case 0x29a5bcu: goto label_29a5bc;
        case 0x29a5c0u: goto label_29a5c0;
        case 0x29a5c4u: goto label_29a5c4;
        case 0x29a5c8u: goto label_29a5c8;
        case 0x29a5ccu: goto label_29a5cc;
        case 0x29a5d0u: goto label_29a5d0;
        case 0x29a5d4u: goto label_29a5d4;
        case 0x29a5d8u: goto label_29a5d8;
        case 0x29a5dcu: goto label_29a5dc;
        case 0x29a5e0u: goto label_29a5e0;
        case 0x29a5e4u: goto label_29a5e4;
        case 0x29a5e8u: goto label_29a5e8;
        case 0x29a5ecu: goto label_29a5ec;
        case 0x29a5f0u: goto label_29a5f0;
        case 0x29a5f4u: goto label_29a5f4;
        case 0x29a5f8u: goto label_29a5f8;
        case 0x29a5fcu: goto label_29a5fc;
        case 0x29a600u: goto label_29a600;
        case 0x29a604u: goto label_29a604;
        case 0x29a608u: goto label_29a608;
        case 0x29a60cu: goto label_29a60c;
        case 0x29a610u: goto label_29a610;
        case 0x29a614u: goto label_29a614;
        case 0x29a618u: goto label_29a618;
        case 0x29a61cu: goto label_29a61c;
        case 0x29a620u: goto label_29a620;
        case 0x29a624u: goto label_29a624;
        case 0x29a628u: goto label_29a628;
        case 0x29a62cu: goto label_29a62c;
        case 0x29a630u: goto label_29a630;
        case 0x29a634u: goto label_29a634;
        case 0x29a638u: goto label_29a638;
        case 0x29a63cu: goto label_29a63c;
        case 0x29a640u: goto label_29a640;
        case 0x29a644u: goto label_29a644;
        case 0x29a648u: goto label_29a648;
        case 0x29a64cu: goto label_29a64c;
        case 0x29a650u: goto label_29a650;
        case 0x29a654u: goto label_29a654;
        case 0x29a658u: goto label_29a658;
        case 0x29a65cu: goto label_29a65c;
        case 0x29a660u: goto label_29a660;
        case 0x29a664u: goto label_29a664;
        case 0x29a668u: goto label_29a668;
        case 0x29a66cu: goto label_29a66c;
        case 0x29a670u: goto label_29a670;
        case 0x29a674u: goto label_29a674;
        case 0x29a678u: goto label_29a678;
        case 0x29a67cu: goto label_29a67c;
        case 0x29a680u: goto label_29a680;
        case 0x29a684u: goto label_29a684;
        case 0x29a688u: goto label_29a688;
        case 0x29a68cu: goto label_29a68c;
        case 0x29a690u: goto label_29a690;
        case 0x29a694u: goto label_29a694;
        case 0x29a698u: goto label_29a698;
        case 0x29a69cu: goto label_29a69c;
        case 0x29a6a0u: goto label_29a6a0;
        case 0x29a6a4u: goto label_29a6a4;
        case 0x29a6a8u: goto label_29a6a8;
        case 0x29a6acu: goto label_29a6ac;
        case 0x29a6b0u: goto label_29a6b0;
        case 0x29a6b4u: goto label_29a6b4;
        case 0x29a6b8u: goto label_29a6b8;
        case 0x29a6bcu: goto label_29a6bc;
        case 0x29a6c0u: goto label_29a6c0;
        case 0x29a6c4u: goto label_29a6c4;
        case 0x29a6c8u: goto label_29a6c8;
        case 0x29a6ccu: goto label_29a6cc;
        case 0x29a6d0u: goto label_29a6d0;
        case 0x29a6d4u: goto label_29a6d4;
        case 0x29a6d8u: goto label_29a6d8;
        case 0x29a6dcu: goto label_29a6dc;
        case 0x29a6e0u: goto label_29a6e0;
        case 0x29a6e4u: goto label_29a6e4;
        case 0x29a6e8u: goto label_29a6e8;
        case 0x29a6ecu: goto label_29a6ec;
        case 0x29a6f0u: goto label_29a6f0;
        case 0x29a6f4u: goto label_29a6f4;
        case 0x29a6f8u: goto label_29a6f8;
        case 0x29a6fcu: goto label_29a6fc;
        case 0x29a700u: goto label_29a700;
        case 0x29a704u: goto label_29a704;
        case 0x29a708u: goto label_29a708;
        case 0x29a70cu: goto label_29a70c;
        case 0x29a710u: goto label_29a710;
        case 0x29a714u: goto label_29a714;
        case 0x29a718u: goto label_29a718;
        case 0x29a71cu: goto label_29a71c;
        case 0x29a720u: goto label_29a720;
        case 0x29a724u: goto label_29a724;
        case 0x29a728u: goto label_29a728;
        case 0x29a72cu: goto label_29a72c;
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
        default: return;
    }

label_29a408:
    // 0x29a408: 0x2e2b0  tge         $zero, $v0, 906
    ctx->pc = 0x29a408u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_29a40c:
    // 0x29a40c: 0x0  nop
    ctx->pc = 0x29a40cu;
    // NOP
label_29a410:
    // 0x29a410: 0x2e649  .word       0x0002E649                   # jalr        $gp, $zero # 00020640 <InstrIdType: CPU_SPECIAL>
label_29a414:
    if (ctx->pc == 0x29A414u) {
        ctx->pc = 0x29A414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A410u;
        // 0x29a414: 0x47  .word       0x00000047                   # srav        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A418u;
        goto label_29a418;
    }
    ctx->pc = 0x29A410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 28, 0x29A418u);
        ctx->pc = 0x29A414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A410u;
        // 0x29a414: 0x47  .word       0x00000047                   # srav        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A410u, 0x29A418u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29A418u;
label_29a418:
    // 0x29a418: 0x23510  .word       0x00023510                   # mfhi        $a2 # 00020500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a418u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_29a41c:
    // 0x29a41c: 0x0  nop
    ctx->pc = 0x29a41cu;
    // NOP
label_29a420:
    // 0x29a420: 0x2e690  .word       0x0002E690                   # mfhi        $gp # 00020680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a420u;
    SET_GPR_U64(ctx, 28, ctx->hi);
label_29a424:
    // 0x29a424: 0x327  .word       0x00000327                   # not         $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a424u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_29a428:
    // 0x29a428: 0x193490  .word       0x00193490                   # mfhi        $a2 # 00190480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a428u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_29a42c:
    // 0x29a42c: 0x0  nop
    ctx->pc = 0x29a42cu;
    // NOP
label_29a430:
    // 0x29a430: 0x2e9b7  .word       0x0002E9B7                   # INVALID     $zero, $v0, -0x1649 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a430u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x29A430 raw=0x0002E9B7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29a434:
    // 0x29a434: 0x244  .word       0x00000244                   # sllv        $zero, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a434u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29a438:
    // 0x29a438: 0x121d2c  .word       0x00121D2C                   # dadd        $v1, $zero, $s2 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a438u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 18); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, r); }
label_29a43c:
    // 0x29a43c: 0x0  nop
    ctx->pc = 0x29a43cu;
    // NOP
label_29a440:
    // 0x29a440: 0x2ebfb  dsra        $sp, $v0, 15
    ctx->pc = 0x29a440u;
    SET_GPR_S64(ctx, 29, GPR_S64(ctx, 2) >> 15);
label_29a444:
    // 0x29a444: 0x199  .word       0x00000199                   # multu       $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a444u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_29a448:
    // 0x29a448: 0xcc394  .word       0x000CC394                   # dsllv       $t8, $t4, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a448u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 12) << (GPR_U32(ctx, 0) & 0x3F));
label_29a44c:
    // 0x29a44c: 0x0  nop
    ctx->pc = 0x29a44cu;
    // NOP
label_29a450:
    // 0x29a450: 0x2ed94  .word       0x0002ED94                   # dsllv       $sp, $v0, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a450u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 2) << (GPR_U32(ctx, 0) & 0x3F));
label_29a454:
    // 0x29a454: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a454u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29A454 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29a458:
    // 0x29a458: 0x60  .word       0x00000060                   # add         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a458u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29a45c:
    // 0x29a45c: 0x0  nop
    ctx->pc = 0x29a45cu;
    // NOP
label_29a460:
    // 0x29a460: 0x2ed95  .word       0x0002ED95                   # INVALID     $zero, $v0, -0x126B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a460u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x29A460 raw=0x0002ED95"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29a464:
    // 0x29a464: 0x169  .word       0x00000169                   # mtsa        $zero # 00000140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29a464u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_29a468:
    // 0x29a468: 0xb4124  .word       0x000B4124                   # and         $t0, $zero, $t3 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a468u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) & GPR_U64(ctx, 11));
label_29a46c:
    // 0x29a46c: 0x0  nop
    ctx->pc = 0x29a46cu;
    // NOP
label_29a470:
    // 0x29a470: 0x2eefe  dsrl32      $sp, $v0, 27
    ctx->pc = 0x29a470u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 2) >> (32 + 27));
label_29a474:
    // 0x29a474: 0x107  .word       0x00000107                   # srav        $zero, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a474u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_29a478:
    // 0x29a478: 0x832d0  .word       0x000832D0                   # mfhi        $a2 # 000802C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a478u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_29a47c:
    // 0x29a47c: 0x0  nop
    ctx->pc = 0x29a47cu;
    // NOP
label_29a480:
    // 0x29a480: 0x2f005  .word       0x0002F005                   # INVALID     $zero, $v0, -0xFFB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a480u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x29A480 raw=0x0002F005"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29a484:
    // 0x29a484: 0x29  mtsa        $zero
    ctx->pc = 0x29a484u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_29a488:
    // 0x29a488: 0x141c0  sll         $t0, $at, 7
    ctx->pc = 0x29a488u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 1), 7));
label_29a48c:
    // 0x29a48c: 0x0  nop
    ctx->pc = 0x29a48cu;
    // NOP
label_29a490:
    // 0x29a490: 0x2f02e  dsub        $fp, $zero, $v0
    ctx->pc = 0x29a490u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 2); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 30, r); }
label_29a494:
    // 0x29a494: 0xee  .word       0x000000EE                   # dsub        $zero, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a494u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_29a498:
    // 0x29a498: 0x76b60  .word       0x00076B60                   # add         $t5, $zero, $a3 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a498u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 7);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_29a49c:
    // 0x29a49c: 0x0  nop
    ctx->pc = 0x29a49cu;
    // NOP
label_29a4a0:
    // 0x29a4a0: 0x2f11c  .word       0x0002F11C                   # dmult       $zero, $v0 # 0000F100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a4a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x29A4A0 raw=0x0002F11C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29a4a4:
    // 0x29a4a4: 0x28d  break       0, 10
    ctx->pc = 0x29a4a4u;
    runtime->handleBreak(rdram, ctx);
label_29a4a8:
    // 0x29a4a8: 0x14603c  dsll32      $t4, $s4, 0
    ctx->pc = 0x29a4a8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 20) << (32 + 0));
label_29a4ac:
    // 0x29a4ac: 0x0  nop
    ctx->pc = 0x29a4acu;
    // NOP
label_29a4b0:
    // 0x29a4b0: 0x2f3a9  .word       0x0002F3A9                   # mtsa        $zero # 0002F380 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29a4b0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_29a4b4:
    // 0x29a4b4: 0x3bc  dsll32      $zero, $zero, 14
    ctx->pc = 0x29a4b4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 14));
label_29a4b8:
    // 0x29a4b8: 0x1ddb48  .word       0x001DDB48                   # jr          $zero # 001DDB40 <InstrIdType: CPU_SPECIAL>
label_29a4bc:
    if (ctx->pc == 0x29A4BCu) {
        ctx->pc = 0x29A4C0u;
        goto label_29a4c0;
    }
    ctx->pc = 0x29A4B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A4B8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29A4C0u;
label_29a4c0:
    // 0x29a4c0: 0x2f765  .word       0x0002F765                   # or          $fp, $zero, $v0 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a4c0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) | GPR_U64(ctx, 2));
label_29a4c4:
    // 0x29a4c4: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a4c4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29A4C4 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29a4c8:
    // 0x29a4c8: 0x7c0  sll         $zero, $zero, 31
    ctx->pc = 0x29a4c8u;
    
label_29a4cc:
    // 0x29a4cc: 0x0  nop
    ctx->pc = 0x29a4ccu;
    // NOP
label_29a4d0:
    // 0x29a4d0: 0x2f766  .word       0x0002F766                   # xor         $fp, $zero, $v0 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a4d0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 2));
label_29a4d4:
    // 0x29a4d4: 0xbe  dsrl32      $zero, $zero, 2
    ctx->pc = 0x29a4d4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 2));
label_29a4d8:
    // 0x29a4d8: 0x5e9ec  .word       0x0005E9EC                   # dadd        $sp, $zero, $a1 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a4d8u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 5); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 29, r); }
label_29a4dc:
    // 0x29a4dc: 0x0  nop
    ctx->pc = 0x29a4dcu;
    // NOP
label_29a4e0:
    // 0x29a4e0: 0x2f824  and         $ra, $zero, $v0
    ctx->pc = 0x29a4e0u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 0) & GPR_U64(ctx, 2));
label_29a4e4:
    // 0x29a4e4: 0x94  .word       0x00000094                   # dsllv       $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a4e4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_29a4e8:
    // 0x29a4e8: 0x49c10  .word       0x00049C10                   # mfhi        $s3 # 00040400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a4e8u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_29a4ec:
    // 0x29a4ec: 0x0  nop
    ctx->pc = 0x29a4ecu;
    // NOP
label_29a4f0:
    // 0x29a4f0: 0x2f8b8  dsll        $ra, $v0, 2
    ctx->pc = 0x29a4f0u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 2) << 2);
label_29a4f4:
    // 0x29a4f4: 0x39  .word       0x00000039                   # INVALID     $zero, $zero, 0x39 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a4f4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x29A4F4 raw=0x00000039"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29a4f8:
    // 0x29a4f8: 0x1c730  tge         $zero, $at, 796
    ctx->pc = 0x29a4f8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_29a4fc:
    // 0x29a4fc: 0x0  nop
    ctx->pc = 0x29a4fcu;
    // NOP
label_29a500:
    // 0x29a500: 0x2f8f1  tgeu        $zero, $v0, 995
    ctx->pc = 0x29a500u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_29a504:
    // 0x29a504: 0x91  .word       0x00000091                   # mthi        $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a504u;
    ctx->hi = GPR_U64(ctx, 0);
label_29a508:
    // 0x29a508: 0x48044  .word       0x00048044                   # sllv        $s0, $a0, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a508u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 0) & 0x1F));
label_29a50c:
    // 0x29a50c: 0x0  nop
    ctx->pc = 0x29a50cu;
    // NOP
label_29a510:
    // 0x29a510: 0x2f982  srl         $ra, $v0, 6
    ctx->pc = 0x29a510u;
    SET_GPR_S32(ctx, 31, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
label_29a514:
    // 0x29a514: 0x91  .word       0x00000091                   # mthi        $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a514u;
    ctx->hi = GPR_U64(ctx, 0);
label_29a518:
    // 0x29a518: 0x48154  .word       0x00048154                   # dsllv       $s0, $a0, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a518u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) << (GPR_U32(ctx, 0) & 0x3F));
label_29a51c:
    // 0x29a51c: 0x0  nop
    ctx->pc = 0x29a51cu;
    // NOP
label_29a520:
    // 0x29a520: 0x2fa13  .word       0x0002FA13                   # mtlo        $zero # 0002FA00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a520u;
    ctx->lo = GPR_U64(ctx, 0);
label_29a524:
    // 0x29a524: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a524u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29A524 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29a528:
    // 0x29a528: 0x60  .word       0x00000060                   # add         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a528u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29a52c:
    // 0x29a52c: 0x0  nop
    ctx->pc = 0x29a52cu;
    // NOP
label_29a530:
    // 0x29a530: 0x2fa14  .word       0x0002FA14                   # dsllv       $ra, $v0, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a530u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 2) << (GPR_U32(ctx, 0) & 0x3F));
label_29a534:
    // 0x29a534: 0x1e  ddiv        $zero, $zero, $zero
    ctx->pc = 0x29a534u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x29A534 raw=0x0000001E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29a538:
    // 0x29a538: 0xed24  .word       0x0000ED24                   # and         $sp, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a538u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_29a53c:
    // 0x29a53c: 0x0  nop
    ctx->pc = 0x29a53cu;
    // NOP
label_29a540:
    // 0x29a540: 0x2fa32  tlt         $zero, $v0, 1000
    ctx->pc = 0x29a540u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_29a544:
    // 0x29a544: 0x23  negu        $zero, $zero
    ctx->pc = 0x29a544u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_29a548:
    // 0x29a548: 0x114f0  tge         $zero, $at, 83
    ctx->pc = 0x29a548u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_29a54c:
    // 0x29a54c: 0x0  nop
    ctx->pc = 0x29a54cu;
    // NOP
label_29a550:
    // 0x29a550: 0x2fa55  .word       0x0002FA55                   # INVALID     $zero, $v0, -0x5AB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a550u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x29A550 raw=0x0002FA55"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29a554:
    // 0x29a554: 0xad  .word       0x000000AD                   # daddu       $zero, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a554u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29a558:
    // 0x29a558: 0x561c0  sll         $t4, $a1, 7
    ctx->pc = 0x29a558u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
label_29a55c:
    // 0x29a55c: 0x0  nop
    ctx->pc = 0x29a55cu;
    // NOP
label_29a560:
    // 0x29a560: 0x2fb02  srl         $ra, $v0, 12
    ctx->pc = 0x29a560u;
    SET_GPR_S32(ctx, 31, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
label_29a564:
    // 0x29a564: 0x8d  break       0, 2
    ctx->pc = 0x29a564u;
    runtime->handleBreak(rdram, ctx);
label_29a568:
    // 0x29a568: 0x46774  teq         $zero, $a0, 413
    ctx->pc = 0x29a568u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 4)) { runtime->handleTrap(rdram, ctx); }
label_29a56c:
    // 0x29a56c: 0x0  nop
    ctx->pc = 0x29a56cu;
    // NOP
label_29a570:
    // 0x29a570: 0x2fb8f  .word       0x0002FB8F                   # sync # 0002F800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a570u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_29a574:
    // 0x29a574: 0x9d  .word       0x0000009D                   # dmultu      $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a574u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x29A574 raw=0x0000009D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29a578:
    // 0x29a578: 0x4e240  sll         $gp, $a0, 9
    ctx->pc = 0x29a578u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 4), 9));
label_29a57c:
    // 0x29a57c: 0x0  nop
    ctx->pc = 0x29a57cu;
    // NOP
label_29a580:
    // 0x29a580: 0x2fc2c  .word       0x0002FC2C                   # dadd        $ra, $zero, $v0 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a580u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 2); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, r); }
label_29a584:
    // 0x29a584: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a584u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29A584 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29a588:
    // 0x29a588: 0x60  .word       0x00000060                   # add         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a588u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29a58c:
    // 0x29a58c: 0x0  nop
    ctx->pc = 0x29a58cu;
    // NOP
label_29a590:
    // 0x29a590: 0x2fc2d  .word       0x0002FC2D                   # daddu       $ra, $zero, $v0 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a590u;
    SET_GPR_U64(ctx, 31, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 2));
label_29a594:
    // 0x29a594: 0x7f  dsra32      $zero, $zero, 1
    ctx->pc = 0x29a594u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 1));
label_29a598:
    // 0x29a598: 0x3f538  dsll        $fp, $v1, 20
    ctx->pc = 0x29a598u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) << 20);
label_29a59c:
    // 0x29a59c: 0x0  nop
    ctx->pc = 0x29a59cu;
    // NOP
label_29a5a0:
    // 0x29a5a0: 0x2fcac  .word       0x0002FCAC                   # dadd        $ra, $zero, $v0 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a5a0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 2); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, r); }
label_29a5a4:
    // 0x29a5a4: 0x50  .word       0x00000050                   # mfhi        $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a5a4u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29a5a8:
    // 0x29a5a8: 0x279d0  .word       0x000279D0                   # mfhi        $t7 # 000201C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a5a8u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_29a5ac:
    // 0x29a5ac: 0x0  nop
    ctx->pc = 0x29a5acu;
    // NOP
label_29a5b0:
    // 0x29a5b0: 0x2fcfc  dsll32      $ra, $v0, 19
    ctx->pc = 0x29a5b0u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 2) << (32 + 19));
label_29a5b4:
    // 0x29a5b4: 0x7f  dsra32      $zero, $zero, 1
    ctx->pc = 0x29a5b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 1));
label_29a5b8:
    // 0x29a5b8: 0x3f538  dsll        $fp, $v1, 20
    ctx->pc = 0x29a5b8u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 3) << 20);
label_29a5bc:
    // 0x29a5bc: 0x0  nop
    ctx->pc = 0x29a5bcu;
    // NOP
label_29a5c0:
    // 0x29a5c0: 0x2fd7b  dsra        $ra, $v0, 21
    ctx->pc = 0x29a5c0u;
    SET_GPR_S64(ctx, 31, GPR_S64(ctx, 2) >> 21);
label_29a5c4:
    // 0x29a5c4: 0x50  .word       0x00000050                   # mfhi        $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a5c4u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29a5c8:
    // 0x29a5c8: 0x279d0  .word       0x000279D0                   # mfhi        $t7 # 000201C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a5c8u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_29a5cc:
    // 0x29a5cc: 0x0  nop
    ctx->pc = 0x29a5ccu;
    // NOP
label_29a5d0:
    // 0x29a5d0: 0x2fdcb  .word       0x0002FDCB                   # movn        $ra, $zero, $v0 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a5d0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 0));
label_29a5d4:
    // 0x29a5d4: 0x9d  .word       0x0000009D                   # dmultu      $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a5d4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x29A5D4 raw=0x0000009D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29a5d8:
    // 0x29a5d8: 0x4e240  sll         $gp, $a0, 9
    ctx->pc = 0x29a5d8u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 4), 9));
label_29a5dc:
    // 0x29a5dc: 0x0  nop
    ctx->pc = 0x29a5dcu;
    // NOP
label_29a5e0:
    // 0x29a5e0: 0x2fe68  .word       0x0002FE68                   # mfsa        $ra # 00020640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29a5e0u;
    SET_GPR_U32(ctx, 31, ctx->sa);
label_29a5e4:
    // 0x29a5e4: 0x1b5  .word       0x000001B5                   # INVALID     $zero, $zero, 0x1B5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a5e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x29A5E4 raw=0x000001B5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29a5e8:
    // 0x29a5e8: 0xda250  .word       0x000DA250                   # mfhi        $s4 # 000D0240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a5e8u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_29a5ec:
    // 0x29a5ec: 0x0  nop
    ctx->pc = 0x29a5ecu;
    // NOP
label_29a5f0:
    // 0x29a5f0: 0x3001d  dmultu      $zero, $v1
    ctx->pc = 0x29a5f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x29A5F0 raw=0x0003001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29a5f4:
    // 0x29a5f4: 0x60  .word       0x00000060                   # add         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a5f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29a5f8:
    // 0x29a5f8: 0x2ff84  .word       0x0002FF84                   # sllv        $ra, $v0, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a5f8u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 0) & 0x1F));
label_29a5fc:
    // 0x29a5fc: 0x0  nop
    ctx->pc = 0x29a5fcu;
    // NOP
label_29a600:
    // 0x29a600: 0x3007d  .word       0x0003007D                   # INVALID     $zero, $v1, 0x7D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a600u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x29A600 raw=0x0003007D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29a604:
    // 0x29a604: 0x16a  .word       0x0000016A                   # slt         $zero, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a604u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_29a608:
    // 0x29a608: 0xb4f3c  dsll32      $t1, $t3, 28
    ctx->pc = 0x29a608u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) << (32 + 28));
label_29a60c:
    // 0x29a60c: 0x0  nop
    ctx->pc = 0x29a60cu;
    // NOP
label_29a610:
    // 0x29a610: 0x301e7  .word       0x000301E7                   # nor         $zero, $zero, $v1 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a610u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
label_29a614:
    // 0x29a614: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a614u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x29A614 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29a618:
    // 0x29a618: 0x60  .word       0x00000060                   # add         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a618u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_29a61c:
    // 0x29a61c: 0x0  nop
    ctx->pc = 0x29a61cu;
    // NOP
label_29a620:
    // 0x29a620: 0x301e8  .word       0x000301E8                   # mfsa        $zero # 000301C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29a620u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_29a624:
    // 0x29a624: 0xb1  tgeu        $zero, $zero, 2
    ctx->pc = 0x29a624u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_29a628:
    // 0x29a628: 0x5840c  .word       0x0005840C                   # syscall     528 # 00050000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a628u;
    ctx->pc = 0x29A62Cu;
runtime->handleSyscall(rdram, ctx, 0x1610u);
label_29a62c:
    // 0x29a62c: 0x0  nop
    ctx->pc = 0x29a62cu;
    // NOP
label_29a630:
    // 0x29a630: 0x30299  .word       0x00030299                   # multu       $zero, $v1 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a630u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_29a634:
    // 0x29a634: 0x2b  sltu        $zero, $zero, $zero
    ctx->pc = 0x29a634u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_29a638:
    // 0x29a638: 0x15730  tge         $zero, $at, 348
    ctx->pc = 0x29a638u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_29a63c:
    // 0x29a63c: 0x0  nop
    ctx->pc = 0x29a63cu;
    // NOP
label_29a640:
    // 0x29a640: 0x302c4  .word       0x000302C4                   # sllv        $zero, $v1, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a640u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 0) & 0x1F));
label_29a644:
    // 0x29a644: 0x25  move        $zero, $zero
    ctx->pc = 0x29a644u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_29a648:
    // 0x29a648: 0x12600  sll         $a0, $at, 24
    ctx->pc = 0x29a648u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 1), 24));
label_29a64c:
    // 0x29a64c: 0x0  nop
    ctx->pc = 0x29a64cu;
    // NOP
label_29a650:
    // 0x29a650: 0x302e9  .word       0x000302E9                   # mtsa        $zero # 000302C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x29a650u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_29a654:
    // 0x29a654: 0x25  move        $zero, $zero
    ctx->pc = 0x29a654u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_29a658:
    // 0x29a658: 0x12600  sll         $a0, $at, 24
    ctx->pc = 0x29a658u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 1), 24));
label_29a65c:
    // 0x29a65c: 0x0  nop
    ctx->pc = 0x29a65cu;
    // NOP
label_29a660:
    // 0x29a660: 0x3030e  .word       0x0003030E                   # INVALID     $zero, $v1, 0x30E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a660u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x29A660 raw=0x0003030E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29a664:
    // 0x29a664: 0x3b  dsra        $zero, $zero, 0
    ctx->pc = 0x29a664u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 0);
label_29a668:
    // 0x29a668: 0x1d5b8  dsll        $k0, $at, 22
    ctx->pc = 0x29a668u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 1) << 22);
label_29a66c:
    // 0x29a66c: 0x0  nop
    ctx->pc = 0x29a66cu;
    // NOP
label_29a670:
    // 0x29a670: 0x30349  .word       0x00030349                   # jalr        $zero, $zero # 00030340 <InstrIdType: CPU_SPECIAL>
label_29a674:
    if (ctx->pc == 0x29A674u) {
        ctx->pc = 0x29A674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A670u;
        // 0x29a674: 0x3b  dsra        $zero, $zero, 0 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A678u;
        goto label_29a678;
    }
    ctx->pc = 0x29A670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29A674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A670u;
        // 0x29a674: 0x3b  dsra        $zero, $zero, 0 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A670u, 0x29A678u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29A678u;
label_29a678:
    // 0x29a678: 0x1d53c  dsll32      $k0, $at, 20
    ctx->pc = 0x29a678u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 1) << (32 + 20));
label_29a67c:
    // 0x29a67c: 0x0  nop
    ctx->pc = 0x29a67cu;
    // NOP
label_29a680:
    // 0x29a680: 0x30384  .word       0x00030384                   # sllv        $zero, $v1, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a680u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 0) & 0x1F));
label_29a684:
    // 0x29a684: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x29a684u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_29a688:
    // 0x29a688: 0xaec  .word       0x00000AEC                   # dadd        $at, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a688u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
label_29a68c:
    // 0x29a68c: 0x0  nop
    ctx->pc = 0x29a68cu;
    // NOP
label_29a690:
    // 0x29a690: 0x30386  .word       0x00030386                   # srlv        $zero, $v1, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a690u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 0) & 0x1F));
label_29a694:
    // 0x29a694: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x29a694u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_29a698:
    // 0x29a698: 0xaec  .word       0x00000AEC                   # dadd        $at, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a698u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
label_29a69c:
    // 0x29a69c: 0x0  nop
    ctx->pc = 0x29a69cu;
    // NOP
label_29a6a0:
    // 0x29a6a0: 0x30388  .word       0x00030388                   # jr          $zero # 00030380 <InstrIdType: CPU_SPECIAL>
label_29a6a4:
    if (ctx->pc == 0x29A6A4u) {
        ctx->pc = 0x29A6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A6A0u;
        // 0x29a6a4: 0x42  srl         $zero, $zero, 1 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A6A8u;
        goto label_29a6a8;
    }
    ctx->pc = 0x29A6A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x29A6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A6A0u;
        // 0x29a6a4: 0x42  srl         $zero, $zero, 1 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A6A0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29A6A8u;
label_29a6a8:
    // 0x29a6a8: 0x20d0c  .word       0x00020D0C                   # syscall     52 # 00020000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a6a8u;
    ctx->pc = 0x29A6ACu;
runtime->handleSyscall(rdram, ctx, 0x834u);
label_29a6ac:
    // 0x29a6ac: 0x0  nop
    ctx->pc = 0x29a6acu;
    // NOP
label_29a6b0:
    // 0x29a6b0: 0x303ca  .word       0x000303CA                   # movz        $zero, $zero, $v1 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a6b0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_29a6b4:
    // 0x29a6b4: 0x42  srl         $zero, $zero, 1
    ctx->pc = 0x29a6b4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 1));
label_29a6b8:
    // 0x29a6b8: 0x20c40  sll         $at, $v0, 17
    ctx->pc = 0x29a6b8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 2), 17));
label_29a6bc:
    // 0x29a6bc: 0x0  nop
    ctx->pc = 0x29a6bcu;
    // NOP
label_29a6c0:
    // 0x29a6c0: 0x3040c  .word       0x0003040C                   # syscall     16 # 00030000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a6c0u;
    ctx->pc = 0x29A6C4u;
runtime->handleSyscall(rdram, ctx, 0xC10u);
label_29a6c4:
    // 0x29a6c4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x29a6c4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_29a6c8:
    // 0x29a6c8: 0xa50  .word       0x00000A50                   # mfhi        $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a6c8u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_29a6cc:
    // 0x29a6cc: 0x0  nop
    ctx->pc = 0x29a6ccu;
    // NOP
label_29a6d0:
    // 0x29a6d0: 0x3040e  .word       0x0003040E                   # INVALID     $zero, $v1, 0x40E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a6d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x29A6D0 raw=0x0003040E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29a6d4:
    // 0x29a6d4: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x29a6d4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_29a6d8:
    // 0x29a6d8: 0xa50  .word       0x00000A50                   # mfhi        $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a6d8u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_29a6dc:
    // 0x29a6dc: 0x0  nop
    ctx->pc = 0x29a6dcu;
    // NOP
label_29a6e0:
    // 0x29a6e0: 0x30410  .word       0x00030410                   # mfhi        $zero # 00030400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a6e0u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29a6e4:
    // 0x29a6e4: 0x1f  ddivu       $zero, $zero, $zero
    ctx->pc = 0x29a6e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x29A6E4 raw=0x0000001F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29a6e8:
    // 0x29a6e8: 0xf78c  syscall     990
    ctx->pc = 0x29a6e8u;
    ctx->pc = 0x29A6ECu;
runtime->handleSyscall(rdram, ctx, 0x3DEu);
label_29a6ec:
    // 0x29a6ec: 0x0  nop
    ctx->pc = 0x29a6ecu;
    // NOP
label_29a6f0:
    // 0x29a6f0: 0x3042f  .word       0x0003042F                   # dsubu       $zero, $zero, $v1 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a6f0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 3));
label_29a6f4:
    // 0x29a6f4: 0x1f  ddivu       $zero, $zero, $zero
    ctx->pc = 0x29a6f4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x29A6F4 raw=0x0000001F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29a6f8:
    // 0x29a6f8: 0xf760  .word       0x0000F760                   # add         $fp, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a6f8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_29a6fc:
    // 0x29a6fc: 0x0  nop
    ctx->pc = 0x29a6fcu;
    // NOP
label_29a700:
    // 0x29a700: 0x3044e  .word       0x0003044E                   # INVALID     $zero, $v1, 0x44E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a700u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x29A700 raw=0x0003044E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_29a704:
    // 0x29a704: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x29a704u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_29a708:
    // 0x29a708: 0xf60  .word       0x00000F60                   # add         $at, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a708u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_29a70c:
    // 0x29a70c: 0x0  nop
    ctx->pc = 0x29a70cu;
    // NOP
label_29a710:
    // 0x29a710: 0x30450  .word       0x00030450                   # mfhi        $zero # 00030440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a710u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_29a714:
    // 0x29a714: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x29a714u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_29a718:
    // 0x29a718: 0xf60  .word       0x00000F60                   # add         $at, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a718u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_29a71c:
    // 0x29a71c: 0x0  nop
    ctx->pc = 0x29a71cu;
    // NOP
label_29a720:
    // 0x29a720: 0x30452  .word       0x00030452                   # mflo        $zero # 00030440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x29a720u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_29a724:
    // 0x29a724: 0x2c  dadd        $zero, $zero, $zero
    ctx->pc = 0x29a724u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_29a728:
    // 0x29a728: 0x15e08  .word       0x00015E08                   # jr          $zero # 00015E00 <InstrIdType: CPU_SPECIAL>
label_29a72c:
    if (ctx->pc == 0x29A72Cu) {
        ctx->pc = 0x29A730u;
        goto label_29a730;
    }
    ctx->pc = 0x29A728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A728u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29A730u;
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
    ctx->pc = 0x29abd8u;
    return;
}

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


void entry_00254d38_part12(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x25a328u: goto label_25a328;
        case 0x25a32cu: goto label_25a32c;
        case 0x25a330u: goto label_25a330;
        case 0x25a334u: goto label_25a334;
        case 0x25a338u: goto label_25a338;
        case 0x25a33cu: goto label_25a33c;
        case 0x25a340u: goto label_25a340;
        case 0x25a344u: goto label_25a344;
        case 0x25a348u: goto label_25a348;
        case 0x25a34cu: goto label_25a34c;
        case 0x25a350u: goto label_25a350;
        case 0x25a354u: goto label_25a354;
        case 0x25a358u: goto label_25a358;
        case 0x25a35cu: goto label_25a35c;
        case 0x25a360u: goto label_25a360;
        case 0x25a364u: goto label_25a364;
        case 0x25a368u: goto label_25a368;
        case 0x25a36cu: goto label_25a36c;
        case 0x25a370u: goto label_25a370;
        case 0x25a374u: goto label_25a374;
        case 0x25a378u: goto label_25a378;
        case 0x25a37cu: goto label_25a37c;
        case 0x25a380u: goto label_25a380;
        case 0x25a384u: goto label_25a384;
        case 0x25a388u: goto label_25a388;
        case 0x25a38cu: goto label_25a38c;
        case 0x25a390u: goto label_25a390;
        case 0x25a394u: goto label_25a394;
        case 0x25a398u: goto label_25a398;
        case 0x25a39cu: goto label_25a39c;
        case 0x25a3a0u: goto label_25a3a0;
        case 0x25a3a4u: goto label_25a3a4;
        case 0x25a3a8u: goto label_25a3a8;
        case 0x25a3acu: goto label_25a3ac;
        case 0x25a3b0u: goto label_25a3b0;
        case 0x25a3b4u: goto label_25a3b4;
        case 0x25a3b8u: goto label_25a3b8;
        case 0x25a3bcu: goto label_25a3bc;
        case 0x25a3c0u: goto label_25a3c0;
        case 0x25a3c4u: goto label_25a3c4;
        case 0x25a3c8u: goto label_25a3c8;
        case 0x25a3ccu: goto label_25a3cc;
        case 0x25a3d0u: goto label_25a3d0;
        case 0x25a3d4u: goto label_25a3d4;
        case 0x25a3d8u: goto label_25a3d8;
        case 0x25a3dcu: goto label_25a3dc;
        case 0x25a3e0u: goto label_25a3e0;
        case 0x25a3e4u: goto label_25a3e4;
        case 0x25a3e8u: goto label_25a3e8;
        case 0x25a3ecu: goto label_25a3ec;
        case 0x25a3f0u: goto label_25a3f0;
        case 0x25a3f4u: goto label_25a3f4;
        case 0x25a3f8u: goto label_25a3f8;
        case 0x25a3fcu: goto label_25a3fc;
        case 0x25a400u: goto label_25a400;
        case 0x25a404u: goto label_25a404;
        case 0x25a408u: goto label_25a408;
        case 0x25a40cu: goto label_25a40c;
        case 0x25a410u: goto label_25a410;
        case 0x25a414u: goto label_25a414;
        case 0x25a418u: goto label_25a418;
        case 0x25a41cu: goto label_25a41c;
        case 0x25a420u: goto label_25a420;
        case 0x25a424u: goto label_25a424;
        case 0x25a428u: goto label_25a428;
        case 0x25a42cu: goto label_25a42c;
        case 0x25a430u: goto label_25a430;
        case 0x25a434u: goto label_25a434;
        case 0x25a438u: goto label_25a438;
        case 0x25a43cu: goto label_25a43c;
        case 0x25a440u: goto label_25a440;
        case 0x25a444u: goto label_25a444;
        case 0x25a448u: goto label_25a448;
        case 0x25a44cu: goto label_25a44c;
        case 0x25a450u: goto label_25a450;
        case 0x25a454u: goto label_25a454;
        case 0x25a458u: goto label_25a458;
        case 0x25a45cu: goto label_25a45c;
        case 0x25a460u: goto label_25a460;
        case 0x25a464u: goto label_25a464;
        case 0x25a468u: goto label_25a468;
        case 0x25a46cu: goto label_25a46c;
        case 0x25a470u: goto label_25a470;
        case 0x25a474u: goto label_25a474;
        case 0x25a478u: goto label_25a478;
        case 0x25a47cu: goto label_25a47c;
        case 0x25a480u: goto label_25a480;
        case 0x25a484u: goto label_25a484;
        case 0x25a488u: goto label_25a488;
        case 0x25a48cu: goto label_25a48c;
        case 0x25a490u: goto label_25a490;
        case 0x25a494u: goto label_25a494;
        case 0x25a498u: goto label_25a498;
        case 0x25a49cu: goto label_25a49c;
        case 0x25a4a0u: goto label_25a4a0;
        case 0x25a4a4u: goto label_25a4a4;
        case 0x25a4a8u: goto label_25a4a8;
        case 0x25a4acu: goto label_25a4ac;
        case 0x25a4b0u: goto label_25a4b0;
        case 0x25a4b4u: goto label_25a4b4;
        case 0x25a4b8u: goto label_25a4b8;
        case 0x25a4bcu: goto label_25a4bc;
        case 0x25a4c0u: goto label_25a4c0;
        case 0x25a4c4u: goto label_25a4c4;
        case 0x25a4c8u: goto label_25a4c8;
        case 0x25a4ccu: goto label_25a4cc;
        case 0x25a4d0u: goto label_25a4d0;
        case 0x25a4d4u: goto label_25a4d4;
        case 0x25a4d8u: goto label_25a4d8;
        case 0x25a4dcu: goto label_25a4dc;
        case 0x25a4e0u: goto label_25a4e0;
        case 0x25a4e4u: goto label_25a4e4;
        case 0x25a4e8u: goto label_25a4e8;
        case 0x25a4ecu: goto label_25a4ec;
        case 0x25a4f0u: goto label_25a4f0;
        case 0x25a4f4u: goto label_25a4f4;
        case 0x25a4f8u: goto label_25a4f8;
        case 0x25a4fcu: goto label_25a4fc;
        case 0x25a500u: goto label_25a500;
        case 0x25a504u: goto label_25a504;
        case 0x25a508u: goto label_25a508;
        case 0x25a50cu: goto label_25a50c;
        case 0x25a510u: goto label_25a510;
        case 0x25a514u: goto label_25a514;
        case 0x25a518u: goto label_25a518;
        case 0x25a51cu: goto label_25a51c;
        case 0x25a520u: goto label_25a520;
        case 0x25a524u: goto label_25a524;
        case 0x25a528u: goto label_25a528;
        case 0x25a52cu: goto label_25a52c;
        case 0x25a530u: goto label_25a530;
        case 0x25a534u: goto label_25a534;
        case 0x25a538u: goto label_25a538;
        case 0x25a53cu: goto label_25a53c;
        case 0x25a540u: goto label_25a540;
        case 0x25a544u: goto label_25a544;
        case 0x25a548u: goto label_25a548;
        case 0x25a54cu: goto label_25a54c;
        case 0x25a550u: goto label_25a550;
        case 0x25a554u: goto label_25a554;
        case 0x25a558u: goto label_25a558;
        case 0x25a55cu: goto label_25a55c;
        case 0x25a560u: goto label_25a560;
        case 0x25a564u: goto label_25a564;
        case 0x25a568u: goto label_25a568;
        case 0x25a56cu: goto label_25a56c;
        case 0x25a570u: goto label_25a570;
        case 0x25a574u: goto label_25a574;
        case 0x25a578u: goto label_25a578;
        case 0x25a57cu: goto label_25a57c;
        case 0x25a580u: goto label_25a580;
        case 0x25a584u: goto label_25a584;
        case 0x25a588u: goto label_25a588;
        case 0x25a58cu: goto label_25a58c;
        case 0x25a590u: goto label_25a590;
        case 0x25a594u: goto label_25a594;
        case 0x25a598u: goto label_25a598;
        case 0x25a59cu: goto label_25a59c;
        case 0x25a5a0u: goto label_25a5a0;
        case 0x25a5a4u: goto label_25a5a4;
        case 0x25a5a8u: goto label_25a5a8;
        case 0x25a5acu: goto label_25a5ac;
        case 0x25a5b0u: goto label_25a5b0;
        case 0x25a5b4u: goto label_25a5b4;
        case 0x25a5b8u: goto label_25a5b8;
        case 0x25a5bcu: goto label_25a5bc;
        case 0x25a5c0u: goto label_25a5c0;
        case 0x25a5c4u: goto label_25a5c4;
        case 0x25a5c8u: goto label_25a5c8;
        case 0x25a5ccu: goto label_25a5cc;
        case 0x25a5d0u: goto label_25a5d0;
        case 0x25a5d4u: goto label_25a5d4;
        case 0x25a5d8u: goto label_25a5d8;
        case 0x25a5dcu: goto label_25a5dc;
        case 0x25a5e0u: goto label_25a5e0;
        case 0x25a5e4u: goto label_25a5e4;
        case 0x25a5e8u: goto label_25a5e8;
        case 0x25a5ecu: goto label_25a5ec;
        case 0x25a5f0u: goto label_25a5f0;
        case 0x25a5f4u: goto label_25a5f4;
        case 0x25a5f8u: goto label_25a5f8;
        case 0x25a5fcu: goto label_25a5fc;
        case 0x25a600u: goto label_25a600;
        case 0x25a604u: goto label_25a604;
        case 0x25a608u: goto label_25a608;
        case 0x25a60cu: goto label_25a60c;
        case 0x25a610u: goto label_25a610;
        case 0x25a614u: goto label_25a614;
        case 0x25a618u: goto label_25a618;
        case 0x25a61cu: goto label_25a61c;
        case 0x25a620u: goto label_25a620;
        case 0x25a624u: goto label_25a624;
        case 0x25a628u: goto label_25a628;
        case 0x25a62cu: goto label_25a62c;
        case 0x25a630u: goto label_25a630;
        case 0x25a634u: goto label_25a634;
        case 0x25a638u: goto label_25a638;
        case 0x25a63cu: goto label_25a63c;
        case 0x25a640u: goto label_25a640;
        case 0x25a644u: goto label_25a644;
        case 0x25a648u: goto label_25a648;
        case 0x25a64cu: goto label_25a64c;
        case 0x25a650u: goto label_25a650;
        case 0x25a654u: goto label_25a654;
        case 0x25a658u: goto label_25a658;
        case 0x25a65cu: goto label_25a65c;
        case 0x25a660u: goto label_25a660;
        case 0x25a664u: goto label_25a664;
        case 0x25a668u: goto label_25a668;
        case 0x25a66cu: goto label_25a66c;
        case 0x25a670u: goto label_25a670;
        case 0x25a674u: goto label_25a674;
        case 0x25a678u: goto label_25a678;
        case 0x25a67cu: goto label_25a67c;
        case 0x25a680u: goto label_25a680;
        case 0x25a684u: goto label_25a684;
        case 0x25a688u: goto label_25a688;
        case 0x25a68cu: goto label_25a68c;
        case 0x25a690u: goto label_25a690;
        case 0x25a694u: goto label_25a694;
        case 0x25a698u: goto label_25a698;
        case 0x25a69cu: goto label_25a69c;
        case 0x25a6a0u: goto label_25a6a0;
        case 0x25a6a4u: goto label_25a6a4;
        case 0x25a6a8u: goto label_25a6a8;
        case 0x25a6acu: goto label_25a6ac;
        case 0x25a6b0u: goto label_25a6b0;
        case 0x25a6b4u: goto label_25a6b4;
        case 0x25a6b8u: goto label_25a6b8;
        case 0x25a6bcu: goto label_25a6bc;
        case 0x25a6c0u: goto label_25a6c0;
        case 0x25a6c4u: goto label_25a6c4;
        case 0x25a6c8u: goto label_25a6c8;
        case 0x25a6ccu: goto label_25a6cc;
        case 0x25a6d0u: goto label_25a6d0;
        case 0x25a6d4u: goto label_25a6d4;
        case 0x25a6d8u: goto label_25a6d8;
        case 0x25a6dcu: goto label_25a6dc;
        case 0x25a6e0u: goto label_25a6e0;
        case 0x25a6e4u: goto label_25a6e4;
        case 0x25a6e8u: goto label_25a6e8;
        case 0x25a6ecu: goto label_25a6ec;
        case 0x25a6f0u: goto label_25a6f0;
        case 0x25a6f4u: goto label_25a6f4;
        case 0x25a6f8u: goto label_25a6f8;
        case 0x25a6fcu: goto label_25a6fc;
        case 0x25a700u: goto label_25a700;
        case 0x25a704u: goto label_25a704;
        case 0x25a708u: goto label_25a708;
        case 0x25a70cu: goto label_25a70c;
        case 0x25a710u: goto label_25a710;
        case 0x25a714u: goto label_25a714;
        case 0x25a718u: goto label_25a718;
        case 0x25a71cu: goto label_25a71c;
        case 0x25a720u: goto label_25a720;
        case 0x25a724u: goto label_25a724;
        case 0x25a728u: goto label_25a728;
        case 0x25a72cu: goto label_25a72c;
        case 0x25a730u: goto label_25a730;
        case 0x25a734u: goto label_25a734;
        case 0x25a738u: goto label_25a738;
        case 0x25a73cu: goto label_25a73c;
        case 0x25a740u: goto label_25a740;
        case 0x25a744u: goto label_25a744;
        case 0x25a748u: goto label_25a748;
        case 0x25a74cu: goto label_25a74c;
        case 0x25a750u: goto label_25a750;
        case 0x25a754u: goto label_25a754;
        case 0x25a758u: goto label_25a758;
        case 0x25a75cu: goto label_25a75c;
        case 0x25a760u: goto label_25a760;
        case 0x25a764u: goto label_25a764;
        case 0x25a768u: goto label_25a768;
        case 0x25a76cu: goto label_25a76c;
        case 0x25a770u: goto label_25a770;
        case 0x25a774u: goto label_25a774;
        case 0x25a778u: goto label_25a778;
        case 0x25a77cu: goto label_25a77c;
        case 0x25a780u: goto label_25a780;
        case 0x25a784u: goto label_25a784;
        case 0x25a788u: goto label_25a788;
        case 0x25a78cu: goto label_25a78c;
        case 0x25a790u: goto label_25a790;
        case 0x25a794u: goto label_25a794;
        case 0x25a798u: goto label_25a798;
        case 0x25a79cu: goto label_25a79c;
        case 0x25a7a0u: goto label_25a7a0;
        case 0x25a7a4u: goto label_25a7a4;
        case 0x25a7a8u: goto label_25a7a8;
        case 0x25a7acu: goto label_25a7ac;
        case 0x25a7b0u: goto label_25a7b0;
        case 0x25a7b4u: goto label_25a7b4;
        case 0x25a7b8u: goto label_25a7b8;
        case 0x25a7bcu: goto label_25a7bc;
        case 0x25a7c0u: goto label_25a7c0;
        case 0x25a7c4u: goto label_25a7c4;
        case 0x25a7c8u: goto label_25a7c8;
        case 0x25a7ccu: goto label_25a7cc;
        case 0x25a7d0u: goto label_25a7d0;
        case 0x25a7d4u: goto label_25a7d4;
        case 0x25a7d8u: goto label_25a7d8;
        case 0x25a7dcu: goto label_25a7dc;
        case 0x25a7e0u: goto label_25a7e0;
        case 0x25a7e4u: goto label_25a7e4;
        case 0x25a7e8u: goto label_25a7e8;
        case 0x25a7ecu: goto label_25a7ec;
        case 0x25a7f0u: goto label_25a7f0;
        case 0x25a7f4u: goto label_25a7f4;
        case 0x25a7f8u: goto label_25a7f8;
        case 0x25a7fcu: goto label_25a7fc;
        case 0x25a800u: goto label_25a800;
        case 0x25a804u: goto label_25a804;
        case 0x25a808u: goto label_25a808;
        case 0x25a80cu: goto label_25a80c;
        case 0x25a810u: goto label_25a810;
        case 0x25a814u: goto label_25a814;
        case 0x25a818u: goto label_25a818;
        case 0x25a81cu: goto label_25a81c;
        case 0x25a820u: goto label_25a820;
        case 0x25a824u: goto label_25a824;
        case 0x25a828u: goto label_25a828;
        case 0x25a82cu: goto label_25a82c;
        case 0x25a830u: goto label_25a830;
        case 0x25a834u: goto label_25a834;
        case 0x25a838u: goto label_25a838;
        case 0x25a83cu: goto label_25a83c;
        case 0x25a840u: goto label_25a840;
        case 0x25a844u: goto label_25a844;
        case 0x25a848u: goto label_25a848;
        case 0x25a84cu: goto label_25a84c;
        case 0x25a850u: goto label_25a850;
        case 0x25a854u: goto label_25a854;
        case 0x25a858u: goto label_25a858;
        case 0x25a85cu: goto label_25a85c;
        case 0x25a860u: goto label_25a860;
        case 0x25a864u: goto label_25a864;
        case 0x25a868u: goto label_25a868;
        case 0x25a86cu: goto label_25a86c;
        case 0x25a870u: goto label_25a870;
        case 0x25a874u: goto label_25a874;
        case 0x25a878u: goto label_25a878;
        case 0x25a87cu: goto label_25a87c;
        case 0x25a880u: goto label_25a880;
        case 0x25a884u: goto label_25a884;
        case 0x25a888u: goto label_25a888;
        case 0x25a88cu: goto label_25a88c;
        case 0x25a890u: goto label_25a890;
        case 0x25a894u: goto label_25a894;
        case 0x25a898u: goto label_25a898;
        case 0x25a89cu: goto label_25a89c;
        case 0x25a8a0u: goto label_25a8a0;
        case 0x25a8a4u: goto label_25a8a4;
        case 0x25a8a8u: goto label_25a8a8;
        case 0x25a8acu: goto label_25a8ac;
        case 0x25a8b0u: goto label_25a8b0;
        case 0x25a8b4u: goto label_25a8b4;
        case 0x25a8b8u: goto label_25a8b8;
        case 0x25a8bcu: goto label_25a8bc;
        case 0x25a8c0u: goto label_25a8c0;
        case 0x25a8c4u: goto label_25a8c4;
        case 0x25a8c8u: goto label_25a8c8;
        case 0x25a8ccu: goto label_25a8cc;
        case 0x25a8d0u: goto label_25a8d0;
        case 0x25a8d4u: goto label_25a8d4;
        case 0x25a8d8u: goto label_25a8d8;
        case 0x25a8dcu: goto label_25a8dc;
        case 0x25a8e0u: goto label_25a8e0;
        case 0x25a8e4u: goto label_25a8e4;
        case 0x25a8e8u: goto label_25a8e8;
        case 0x25a8ecu: goto label_25a8ec;
        case 0x25a8f0u: goto label_25a8f0;
        case 0x25a8f4u: goto label_25a8f4;
        case 0x25a8f8u: goto label_25a8f8;
        case 0x25a8fcu: goto label_25a8fc;
        case 0x25a900u: goto label_25a900;
        case 0x25a904u: goto label_25a904;
        case 0x25a908u: goto label_25a908;
        case 0x25a90cu: goto label_25a90c;
        case 0x25a910u: goto label_25a910;
        case 0x25a914u: goto label_25a914;
        case 0x25a918u: goto label_25a918;
        case 0x25a91cu: goto label_25a91c;
        case 0x25a920u: goto label_25a920;
        case 0x25a924u: goto label_25a924;
        case 0x25a928u: goto label_25a928;
        case 0x25a92cu: goto label_25a92c;
        case 0x25a930u: goto label_25a930;
        case 0x25a934u: goto label_25a934;
        case 0x25a938u: goto label_25a938;
        case 0x25a93cu: goto label_25a93c;
        case 0x25a940u: goto label_25a940;
        case 0x25a944u: goto label_25a944;
        case 0x25a948u: goto label_25a948;
        case 0x25a94cu: goto label_25a94c;
        case 0x25a950u: goto label_25a950;
        case 0x25a954u: goto label_25a954;
        case 0x25a958u: goto label_25a958;
        case 0x25a95cu: goto label_25a95c;
        case 0x25a960u: goto label_25a960;
        case 0x25a964u: goto label_25a964;
        case 0x25a968u: goto label_25a968;
        case 0x25a96cu: goto label_25a96c;
        case 0x25a970u: goto label_25a970;
        case 0x25a974u: goto label_25a974;
        case 0x25a978u: goto label_25a978;
        case 0x25a97cu: goto label_25a97c;
        case 0x25a980u: goto label_25a980;
        case 0x25a984u: goto label_25a984;
        case 0x25a988u: goto label_25a988;
        case 0x25a98cu: goto label_25a98c;
        case 0x25a990u: goto label_25a990;
        case 0x25a994u: goto label_25a994;
        case 0x25a998u: goto label_25a998;
        case 0x25a99cu: goto label_25a99c;
        case 0x25a9a0u: goto label_25a9a0;
        case 0x25a9a4u: goto label_25a9a4;
        case 0x25a9a8u: goto label_25a9a8;
        case 0x25a9acu: goto label_25a9ac;
        case 0x25a9b0u: goto label_25a9b0;
        case 0x25a9b4u: goto label_25a9b4;
        case 0x25a9b8u: goto label_25a9b8;
        case 0x25a9bcu: goto label_25a9bc;
        case 0x25a9c0u: goto label_25a9c0;
        case 0x25a9c4u: goto label_25a9c4;
        case 0x25a9c8u: goto label_25a9c8;
        case 0x25a9ccu: goto label_25a9cc;
        case 0x25a9d0u: goto label_25a9d0;
        case 0x25a9d4u: goto label_25a9d4;
        case 0x25a9d8u: goto label_25a9d8;
        case 0x25a9dcu: goto label_25a9dc;
        case 0x25a9e0u: goto label_25a9e0;
        case 0x25a9e4u: goto label_25a9e4;
        case 0x25a9e8u: goto label_25a9e8;
        case 0x25a9ecu: goto label_25a9ec;
        case 0x25a9f0u: goto label_25a9f0;
        case 0x25a9f4u: goto label_25a9f4;
        case 0x25a9f8u: goto label_25a9f8;
        case 0x25a9fcu: goto label_25a9fc;
        case 0x25aa00u: goto label_25aa00;
        case 0x25aa04u: goto label_25aa04;
        case 0x25aa08u: goto label_25aa08;
        case 0x25aa0cu: goto label_25aa0c;
        case 0x25aa10u: goto label_25aa10;
        case 0x25aa14u: goto label_25aa14;
        case 0x25aa18u: goto label_25aa18;
        case 0x25aa1cu: goto label_25aa1c;
        case 0x25aa20u: goto label_25aa20;
        case 0x25aa24u: goto label_25aa24;
        case 0x25aa28u: goto label_25aa28;
        case 0x25aa2cu: goto label_25aa2c;
        case 0x25aa30u: goto label_25aa30;
        case 0x25aa34u: goto label_25aa34;
        case 0x25aa38u: goto label_25aa38;
        case 0x25aa3cu: goto label_25aa3c;
        case 0x25aa40u: goto label_25aa40;
        case 0x25aa44u: goto label_25aa44;
        case 0x25aa48u: goto label_25aa48;
        case 0x25aa4cu: goto label_25aa4c;
        case 0x25aa50u: goto label_25aa50;
        case 0x25aa54u: goto label_25aa54;
        case 0x25aa58u: goto label_25aa58;
        case 0x25aa5cu: goto label_25aa5c;
        case 0x25aa60u: goto label_25aa60;
        case 0x25aa64u: goto label_25aa64;
        case 0x25aa68u: goto label_25aa68;
        case 0x25aa6cu: goto label_25aa6c;
        case 0x25aa70u: goto label_25aa70;
        case 0x25aa74u: goto label_25aa74;
        case 0x25aa78u: goto label_25aa78;
        case 0x25aa7cu: goto label_25aa7c;
        case 0x25aa80u: goto label_25aa80;
        case 0x25aa84u: goto label_25aa84;
        case 0x25aa88u: goto label_25aa88;
        case 0x25aa8cu: goto label_25aa8c;
        case 0x25aa90u: goto label_25aa90;
        case 0x25aa94u: goto label_25aa94;
        case 0x25aa98u: goto label_25aa98;
        case 0x25aa9cu: goto label_25aa9c;
        case 0x25aaa0u: goto label_25aaa0;
        case 0x25aaa4u: goto label_25aaa4;
        case 0x25aaa8u: goto label_25aaa8;
        case 0x25aaacu: goto label_25aaac;
        case 0x25aab0u: goto label_25aab0;
        case 0x25aab4u: goto label_25aab4;
        case 0x25aab8u: goto label_25aab8;
        case 0x25aabcu: goto label_25aabc;
        case 0x25aac0u: goto label_25aac0;
        case 0x25aac4u: goto label_25aac4;
        case 0x25aac8u: goto label_25aac8;
        case 0x25aaccu: goto label_25aacc;
        case 0x25aad0u: goto label_25aad0;
        case 0x25aad4u: goto label_25aad4;
        case 0x25aad8u: goto label_25aad8;
        case 0x25aadcu: goto label_25aadc;
        case 0x25aae0u: goto label_25aae0;
        case 0x25aae4u: goto label_25aae4;
        case 0x25aae8u: goto label_25aae8;
        case 0x25aaecu: goto label_25aaec;
        case 0x25aaf0u: goto label_25aaf0;
        case 0x25aaf4u: goto label_25aaf4;
        default: return;
    }

label_25a328:
    // 0x25a328: 0x0  nop
    ctx->pc = 0x25a328u;
    // NOP
label_25a32c:
    // 0x25a32c: 0x0  nop
    ctx->pc = 0x25a32cu;
    // NOP
label_25a330:
    // 0x25a330: 0x3a49  .word       0x00003A49                   # jalr        $a3, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
label_25a334:
    if (ctx->pc == 0x25A334u) {
        ctx->pc = 0x25A334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A330u;
        // 0x25a334: 0x7370  tge         $zero, $zero, 461 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A338u;
        goto label_25a338;
    }
    ctx->pc = 0x25A330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 7, 0x25A338u);
        ctx->pc = 0x25A334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A330u;
        // 0x25a334: 0x7370  tge         $zero, $zero, 461 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A330u, 0x25A338u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25A338u;
label_25a338:
    // 0x25a338: 0x0  nop
    ctx->pc = 0x25a338u;
    // NOP
label_25a33c:
    // 0x25a33c: 0x0  nop
    ctx->pc = 0x25a33cu;
    // NOP
label_25a340:
    // 0x25a340: 0x3a58  .word       0x00003A58                   # mult        $a3, $zero, $zero # 00000240 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25a340u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_25a344:
    // 0x25a344: 0x86e0  .word       0x000086E0                   # add         $s0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a344u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_25a348:
    // 0x25a348: 0x0  nop
    ctx->pc = 0x25a348u;
    // NOP
label_25a34c:
    // 0x25a34c: 0x0  nop
    ctx->pc = 0x25a34cu;
    // NOP
label_25a350:
    // 0x25a350: 0x3a69  .word       0x00003A69                   # mtsa        $zero # 00003A40 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25a350u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_25a354:
    // 0x25a354: 0x6890  .word       0x00006890                   # mfhi        $t5 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a354u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_25a358:
    // 0x25a358: 0x0  nop
    ctx->pc = 0x25a358u;
    // NOP
label_25a35c:
    // 0x25a35c: 0x0  nop
    ctx->pc = 0x25a35cu;
    // NOP
label_25a360:
    // 0x25a360: 0x3a77  .word       0x00003A77                   # INVALID     $zero, $zero, 0x3A77 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a360u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x25A360 raw=0x00003A77"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25a364:
    // 0x25a364: 0x7f40  sll         $t7, $zero, 29
    ctx->pc = 0x25a364u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 29));
label_25a368:
    // 0x25a368: 0x0  nop
    ctx->pc = 0x25a368u;
    // NOP
label_25a36c:
    // 0x25a36c: 0x0  nop
    ctx->pc = 0x25a36cu;
    // NOP
label_25a370:
    // 0x25a370: 0x3a87  .word       0x00003A87                   # srav        $a3, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a370u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25a374:
    // 0x25a374: 0x77d0  .word       0x000077D0                   # mfhi        $t6 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a374u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_25a378:
    // 0x25a378: 0x0  nop
    ctx->pc = 0x25a378u;
    // NOP
label_25a37c:
    // 0x25a37c: 0x0  nop
    ctx->pc = 0x25a37cu;
    // NOP
label_25a380:
    // 0x25a380: 0x3a96  .word       0x00003A96                   # dsrlv       $a3, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a380u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_25a384:
    // 0x25a384: 0x6000  sll         $t4, $zero, 0
    ctx->pc = 0x25a384u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_25a388:
    // 0x25a388: 0x0  nop
    ctx->pc = 0x25a388u;
    // NOP
label_25a38c:
    // 0x25a38c: 0x0  nop
    ctx->pc = 0x25a38cu;
    // NOP
label_25a390:
    // 0x25a390: 0x3aa2  .word       0x00003AA2                   # neg         $a3, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a390u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
label_25a394:
    // 0x25a394: 0x9720  .word       0x00009720                   # add         $s2, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a394u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_25a398:
    // 0x25a398: 0x0  nop
    ctx->pc = 0x25a398u;
    // NOP
label_25a39c:
    // 0x25a39c: 0x0  nop
    ctx->pc = 0x25a39cu;
    // NOP
label_25a3a0:
    // 0x25a3a0: 0x3ab5  .word       0x00003AB5                   # INVALID     $zero, $zero, 0x3AB5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a3a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x25A3A0 raw=0x00003AB5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25a3a4:
    // 0x25a3a4: 0x7e90  .word       0x00007E90                   # mfhi        $t7 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a3a4u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_25a3a8:
    // 0x25a3a8: 0x0  nop
    ctx->pc = 0x25a3a8u;
    // NOP
label_25a3ac:
    // 0x25a3ac: 0x0  nop
    ctx->pc = 0x25a3acu;
    // NOP
label_25a3b0:
    // 0x25a3b0: 0x3ac5  .word       0x00003AC5                   # INVALID     $zero, $zero, 0x3AC5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a3b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x25A3B0 raw=0x00003AC5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25a3b4:
    // 0x25a3b4: 0x7690  .word       0x00007690                   # mfhi        $t6 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a3b4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_25a3b8:
    // 0x25a3b8: 0x0  nop
    ctx->pc = 0x25a3b8u;
    // NOP
label_25a3bc:
    // 0x25a3bc: 0x0  nop
    ctx->pc = 0x25a3bcu;
    // NOP
label_25a3c0:
    // 0x25a3c0: 0x3ad4  .word       0x00003AD4                   # dsllv       $a3, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a3c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_25a3c4:
    // 0x25a3c4: 0x8770  tge         $zero, $zero, 541
    ctx->pc = 0x25a3c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25a3c8:
    // 0x25a3c8: 0x0  nop
    ctx->pc = 0x25a3c8u;
    // NOP
label_25a3cc:
    // 0x25a3cc: 0x0  nop
    ctx->pc = 0x25a3ccu;
    // NOP
label_25a3d0:
    // 0x25a3d0: 0x3ae5  .word       0x00003AE5                   # move        $a3, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a3d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_25a3d4:
    // 0x25a3d4: 0x6e70  tge         $zero, $zero, 441
    ctx->pc = 0x25a3d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25a3d8:
    // 0x25a3d8: 0x0  nop
    ctx->pc = 0x25a3d8u;
    // NOP
label_25a3dc:
    // 0x25a3dc: 0x0  nop
    ctx->pc = 0x25a3dcu;
    // NOP
label_25a3e0:
    // 0x25a3e0: 0x3af3  tltu        $zero, $zero, 235
    ctx->pc = 0x25a3e0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25a3e4:
    // 0x25a3e4: 0x8ae0  .word       0x00008AE0                   # add         $s1, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a3e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_25a3e8:
    // 0x25a3e8: 0x0  nop
    ctx->pc = 0x25a3e8u;
    // NOP
label_25a3ec:
    // 0x25a3ec: 0x0  nop
    ctx->pc = 0x25a3ecu;
    // NOP
label_25a3f0:
    // 0x25a3f0: 0x3b05  .word       0x00003B05                   # INVALID     $zero, $zero, 0x3B05 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a3f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x25A3F0 raw=0x00003B05"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25a3f4:
    // 0x25a3f4: 0x5bb0  tge         $zero, $zero, 366
    ctx->pc = 0x25a3f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25a3f8:
    // 0x25a3f8: 0x0  nop
    ctx->pc = 0x25a3f8u;
    // NOP
label_25a3fc:
    // 0x25a3fc: 0x0  nop
    ctx->pc = 0x25a3fcu;
    // NOP
label_25a400:
    // 0x25a400: 0x3b11  .word       0x00003B11                   # mthi        $zero # 00003B00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a400u;
    ctx->hi = GPR_U64(ctx, 0);
label_25a404:
    // 0x25a404: 0xd7f0  tge         $zero, $zero, 863
    ctx->pc = 0x25a404u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25a408:
    // 0x25a408: 0x0  nop
    ctx->pc = 0x25a408u;
    // NOP
label_25a40c:
    // 0x25a40c: 0x0  nop
    ctx->pc = 0x25a40cu;
    // NOP
label_25a410:
    // 0x25a410: 0x3b2c  .word       0x00003B2C                   # dadd        $a3, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a410u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 7, r); }
label_25a414:
    // 0x25a414: 0xabd0  .word       0x0000ABD0                   # mfhi        $s5 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a414u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_25a418:
    // 0x25a418: 0x0  nop
    ctx->pc = 0x25a418u;
    // NOP
label_25a41c:
    // 0x25a41c: 0x0  nop
    ctx->pc = 0x25a41cu;
    // NOP
label_25a420:
    // 0x25a420: 0x3b42  srl         $a3, $zero, 13
    ctx->pc = 0x25a420u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 0), 13));
label_25a424:
    // 0x25a424: 0x108d0  .word       0x000108D0                   # mfhi        $at # 000100C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a424u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_25a428:
    // 0x25a428: 0x0  nop
    ctx->pc = 0x25a428u;
    // NOP
label_25a42c:
    // 0x25a42c: 0x0  nop
    ctx->pc = 0x25a42cu;
    // NOP
label_25a430:
    // 0x25a430: 0x3b64  .word       0x00003B64                   # and         $a3, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a430u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_25a434:
    // 0x25a434: 0xefc0  sll         $sp, $zero, 31
    ctx->pc = 0x25a434u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_25a438:
    // 0x25a438: 0x0  nop
    ctx->pc = 0x25a438u;
    // NOP
label_25a43c:
    // 0x25a43c: 0x0  nop
    ctx->pc = 0x25a43cu;
    // NOP
label_25a440:
    // 0x25a440: 0x3b82  srl         $a3, $zero, 14
    ctx->pc = 0x25a440u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 0), 14));
label_25a444:
    // 0x25a444: 0x86e0  .word       0x000086E0                   # add         $s0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a444u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_25a448:
    // 0x25a448: 0x0  nop
    ctx->pc = 0x25a448u;
    // NOP
label_25a44c:
    // 0x25a44c: 0x0  nop
    ctx->pc = 0x25a44cu;
    // NOP
label_25a450:
    // 0x25a450: 0x3b93  .word       0x00003B93                   # mtlo        $zero # 00003B80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a450u;
    ctx->lo = GPR_U64(ctx, 0);
label_25a454:
    // 0x25a454: 0xa030  tge         $zero, $zero, 640
    ctx->pc = 0x25a454u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25a458:
    // 0x25a458: 0x0  nop
    ctx->pc = 0x25a458u;
    // NOP
label_25a45c:
    // 0x25a45c: 0x0  nop
    ctx->pc = 0x25a45cu;
    // NOP
label_25a460:
    // 0x25a460: 0x3ba8  .word       0x00003BA8                   # mfsa        $a3 # 00000380 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25a460u;
    SET_GPR_U32(ctx, 7, ctx->sa);
label_25a464:
    // 0x25a464: 0xd310  .word       0x0000D310                   # mfhi        $k0 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a464u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_25a468:
    // 0x25a468: 0x0  nop
    ctx->pc = 0x25a468u;
    // NOP
label_25a46c:
    // 0x25a46c: 0x0  nop
    ctx->pc = 0x25a46cu;
    // NOP
label_25a470:
    // 0x25a470: 0x3bc3  sra         $a3, $zero, 15
    ctx->pc = 0x25a470u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 0), 15));
label_25a474:
    // 0x25a474: 0xb640  sll         $s6, $zero, 25
    ctx->pc = 0x25a474u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_25a478:
    // 0x25a478: 0x0  nop
    ctx->pc = 0x25a478u;
    // NOP
label_25a47c:
    // 0x25a47c: 0x0  nop
    ctx->pc = 0x25a47cu;
    // NOP
label_25a480:
    // 0x25a480: 0x3bda  .word       0x00003BDA                   # div         $a3, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a480u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_25a484:
    // 0x25a484: 0xd7e0  .word       0x0000D7E0                   # add         $k0, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a484u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_25a488:
    // 0x25a488: 0x0  nop
    ctx->pc = 0x25a488u;
    // NOP
label_25a48c:
    // 0x25a48c: 0x0  nop
    ctx->pc = 0x25a48cu;
    // NOP
label_25a490:
    // 0x25a490: 0x3bf5  .word       0x00003BF5                   # INVALID     $zero, $zero, 0x3BF5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a490u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x25A490 raw=0x00003BF5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25a494:
    // 0x25a494: 0xba80  sll         $s7, $zero, 10
    ctx->pc = 0x25a494u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_25a498:
    // 0x25a498: 0x0  nop
    ctx->pc = 0x25a498u;
    // NOP
label_25a49c:
    // 0x25a49c: 0x0  nop
    ctx->pc = 0x25a49cu;
    // NOP
label_25a4a0:
    // 0x25a4a0: 0x3c0d  break       0, 240
    ctx->pc = 0x25a4a0u;
    runtime->handleBreak(rdram, ctx);
label_25a4a4:
    // 0x25a4a4: 0x135b0  tge         $zero, $at, 214
    ctx->pc = 0x25a4a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_25a4a8:
    // 0x25a4a8: 0x0  nop
    ctx->pc = 0x25a4a8u;
    // NOP
label_25a4ac:
    // 0x25a4ac: 0x0  nop
    ctx->pc = 0x25a4acu;
    // NOP
label_25a4b0:
    // 0x25a4b0: 0x3c34  teq         $zero, $zero, 240
    ctx->pc = 0x25a4b0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25a4b4:
    // 0x25a4b4: 0x11550  .word       0x00011550                   # mfhi        $v0 # 00010540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a4b4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_25a4b8:
    // 0x25a4b8: 0x0  nop
    ctx->pc = 0x25a4b8u;
    // NOP
label_25a4bc:
    // 0x25a4bc: 0x0  nop
    ctx->pc = 0x25a4bcu;
    // NOP
label_25a4c0:
    // 0x25a4c0: 0x3c57  .word       0x00003C57                   # dsrav       $a3, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a4c0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_25a4c4:
    // 0x25a4c4: 0xe770  tge         $zero, $zero, 925
    ctx->pc = 0x25a4c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25a4c8:
    // 0x25a4c8: 0x0  nop
    ctx->pc = 0x25a4c8u;
    // NOP
label_25a4cc:
    // 0x25a4cc: 0x0  nop
    ctx->pc = 0x25a4ccu;
    // NOP
label_25a4d0:
    // 0x25a4d0: 0x3c74  teq         $zero, $zero, 241
    ctx->pc = 0x25a4d0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25a4d4:
    // 0x25a4d4: 0xa920  .word       0x0000A920                   # add         $s5, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a4d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_25a4d8:
    // 0x25a4d8: 0x0  nop
    ctx->pc = 0x25a4d8u;
    // NOP
label_25a4dc:
    // 0x25a4dc: 0x0  nop
    ctx->pc = 0x25a4dcu;
    // NOP
label_25a4e0:
    // 0x25a4e0: 0x3c8a  .word       0x00003C8A                   # movz        $a3, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a4e0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_25a4e4:
    // 0x25a4e4: 0x13120  .word       0x00013120                   # add         $a2, $zero, $at # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a4e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_25a4e8:
    // 0x25a4e8: 0x0  nop
    ctx->pc = 0x25a4e8u;
    // NOP
label_25a4ec:
    // 0x25a4ec: 0x0  nop
    ctx->pc = 0x25a4ecu;
    // NOP
label_25a4f0:
    // 0x25a4f0: 0x3cb1  tgeu        $zero, $zero, 242
    ctx->pc = 0x25a4f0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25a4f4:
    // 0x25a4f4: 0xafe0  .word       0x0000AFE0                   # add         $s5, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a4f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_25a4f8:
    // 0x25a4f8: 0x0  nop
    ctx->pc = 0x25a4f8u;
    // NOP
label_25a4fc:
    // 0x25a4fc: 0x0  nop
    ctx->pc = 0x25a4fcu;
    // NOP
label_25a500:
    // 0x25a500: 0x3cc7  .word       0x00003CC7                   # srav        $a3, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a500u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25a504:
    // 0x25a504: 0xcc70  tge         $zero, $zero, 817
    ctx->pc = 0x25a504u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25a508:
    // 0x25a508: 0x0  nop
    ctx->pc = 0x25a508u;
    // NOP
label_25a50c:
    // 0x25a50c: 0x0  nop
    ctx->pc = 0x25a50cu;
    // NOP
label_25a510:
    // 0x25a510: 0x3ce1  .word       0x00003CE1                   # addu        $a3, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a510u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_25a514:
    // 0x25a514: 0xb5b0  tge         $zero, $zero, 726
    ctx->pc = 0x25a514u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25a518:
    // 0x25a518: 0x0  nop
    ctx->pc = 0x25a518u;
    // NOP
label_25a51c:
    // 0x25a51c: 0x0  nop
    ctx->pc = 0x25a51cu;
    // NOP
label_25a520:
    // 0x25a520: 0x3cf8  dsll        $a3, $zero, 19
    ctx->pc = 0x25a520u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) << 19);
label_25a524:
    // 0x25a524: 0xfb30  tge         $zero, $zero, 1004
    ctx->pc = 0x25a524u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25a528:
    // 0x25a528: 0x0  nop
    ctx->pc = 0x25a528u;
    // NOP
label_25a52c:
    // 0x25a52c: 0x0  nop
    ctx->pc = 0x25a52cu;
    // NOP
label_25a530:
    // 0x25a530: 0x3d18  .word       0x00003D18                   # mult        $a3, $zero, $zero # 00000500 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25a530u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_25a534:
    // 0x25a534: 0xc4c0  sll         $t8, $zero, 19
    ctx->pc = 0x25a534u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_25a538:
    // 0x25a538: 0x0  nop
    ctx->pc = 0x25a538u;
    // NOP
label_25a53c:
    // 0x25a53c: 0x0  nop
    ctx->pc = 0x25a53cu;
    // NOP
label_25a540:
    // 0x25a540: 0x3d31  tgeu        $zero, $zero, 244
    ctx->pc = 0x25a540u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25a544:
    // 0x25a544: 0xb300  sll         $s6, $zero, 12
    ctx->pc = 0x25a544u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_25a548:
    // 0x25a548: 0x0  nop
    ctx->pc = 0x25a548u;
    // NOP
label_25a54c:
    // 0x25a54c: 0x0  nop
    ctx->pc = 0x25a54cu;
    // NOP
label_25a550:
    // 0x25a550: 0x3d48  .word       0x00003D48                   # jr          $zero # 00003D40 <InstrIdType: CPU_SPECIAL>
label_25a554:
    if (ctx->pc == 0x25A554u) {
        ctx->pc = 0x25A554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A550u;
        // 0x25a554: 0xb520  .word       0x0000B520                   # add         $s6, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A558u;
        goto label_25a558;
    }
    ctx->pc = 0x25A550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x25A554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A550u;
        // 0x25a554: 0xb520  .word       0x0000B520                   # add         $s6, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A550u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25A558u;
label_25a558:
    // 0x25a558: 0x0  nop
    ctx->pc = 0x25a558u;
    // NOP
label_25a55c:
    // 0x25a55c: 0x0  nop
    ctx->pc = 0x25a55cu;
    // NOP
label_25a560:
    // 0x25a560: 0x3d5f  .word       0x00003D5F                   # ddivu       $a3, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a560u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x25A560 raw=0x00003D5F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25a564:
    // 0x25a564: 0xc890  .word       0x0000C890                   # mfhi        $t9 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a564u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_25a568:
    // 0x25a568: 0x0  nop
    ctx->pc = 0x25a568u;
    // NOP
label_25a56c:
    // 0x25a56c: 0x0  nop
    ctx->pc = 0x25a56cu;
    // NOP
label_25a570:
    // 0x25a570: 0x3d79  .word       0x00003D79                   # INVALID     $zero, $zero, 0x3D79 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a570u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x25A570 raw=0x00003D79"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25a574:
    // 0x25a574: 0x10700  sll         $zero, $at, 28
    ctx->pc = 0x25a574u;
    
label_25a578:
    // 0x25a578: 0x0  nop
    ctx->pc = 0x25a578u;
    // NOP
label_25a57c:
    // 0x25a57c: 0x0  nop
    ctx->pc = 0x25a57cu;
    // NOP
label_25a580:
    // 0x25a580: 0x3d9a  .word       0x00003D9A                   # div         $a3, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a580u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_25a584:
    // 0x25a584: 0xb1c0  sll         $s6, $zero, 7
    ctx->pc = 0x25a584u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_25a588:
    // 0x25a588: 0x0  nop
    ctx->pc = 0x25a588u;
    // NOP
label_25a58c:
    // 0x25a58c: 0x0  nop
    ctx->pc = 0x25a58cu;
    // NOP
label_25a590:
    // 0x25a590: 0x3db1  tgeu        $zero, $zero, 246
    ctx->pc = 0x25a590u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25a594:
    // 0x25a594: 0xd690  .word       0x0000D690                   # mfhi        $k0 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a594u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_25a598:
    // 0x25a598: 0x0  nop
    ctx->pc = 0x25a598u;
    // NOP
label_25a59c:
    // 0x25a59c: 0x0  nop
    ctx->pc = 0x25a59cu;
    // NOP
label_25a5a0:
    // 0x25a5a0: 0x3dcc  syscall     247
    ctx->pc = 0x25a5a0u;
    ctx->pc = 0x25A5A4u;
runtime->handleSyscall(rdram, ctx, 0xF7u);
label_25a5a4:
    // 0x25a5a4: 0xc000  sll         $t8, $zero, 0
    ctx->pc = 0x25a5a4u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_25a5a8:
    // 0x25a5a8: 0x0  nop
    ctx->pc = 0x25a5a8u;
    // NOP
label_25a5ac:
    // 0x25a5ac: 0x0  nop
    ctx->pc = 0x25a5acu;
    // NOP
label_25a5b0:
    // 0x25a5b0: 0x3de4  .word       0x00003DE4                   # and         $a3, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a5b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_25a5b4:
    // 0x25a5b4: 0xe3e0  .word       0x0000E3E0                   # add         $gp, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a5b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 28, (int32_t)result);     } }
label_25a5b8:
    // 0x25a5b8: 0x0  nop
    ctx->pc = 0x25a5b8u;
    // NOP
label_25a5bc:
    // 0x25a5bc: 0x0  nop
    ctx->pc = 0x25a5bcu;
    // NOP
label_25a5c0:
    // 0x25a5c0: 0x3e01  .word       0x00003E01                   # INVALID     $zero, $zero, 0x3E01 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a5c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x25A5C0 raw=0x00003E01"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25a5c4:
    // 0x25a5c4: 0xc970  tge         $zero, $zero, 805
    ctx->pc = 0x25a5c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25a5c8:
    // 0x25a5c8: 0x0  nop
    ctx->pc = 0x25a5c8u;
    // NOP
label_25a5cc:
    // 0x25a5cc: 0x0  nop
    ctx->pc = 0x25a5ccu;
    // NOP
label_25a5d0:
    // 0x25a5d0: 0x3e1b  .word       0x00003E1B                   # divu        $a3, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a5d0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_25a5d4:
    // 0x25a5d4: 0xce00  sll         $t9, $zero, 24
    ctx->pc = 0x25a5d4u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_25a5d8:
    // 0x25a5d8: 0x0  nop
    ctx->pc = 0x25a5d8u;
    // NOP
label_25a5dc:
    // 0x25a5dc: 0x0  nop
    ctx->pc = 0x25a5dcu;
    // NOP
label_25a5e0:
    // 0x25a5e0: 0x3e35  .word       0x00003E35                   # INVALID     $zero, $zero, 0x3E35 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a5e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x25A5E0 raw=0x00003E35"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25a5e4:
    // 0x25a5e4: 0xfc80  sll         $ra, $zero, 18
    ctx->pc = 0x25a5e4u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_25a5e8:
    // 0x25a5e8: 0x0  nop
    ctx->pc = 0x25a5e8u;
    // NOP
label_25a5ec:
    // 0x25a5ec: 0x0  nop
    ctx->pc = 0x25a5ecu;
    // NOP
label_25a5f0:
    // 0x25a5f0: 0x3e55  .word       0x00003E55                   # INVALID     $zero, $zero, 0x3E55 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a5f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x25A5F0 raw=0x00003E55"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25a5f4:
    // 0x25a5f4: 0xf9d0  .word       0x0000F9D0                   # mfhi        $ra # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a5f4u;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_25a5f8:
    // 0x25a5f8: 0x0  nop
    ctx->pc = 0x25a5f8u;
    // NOP
label_25a5fc:
    // 0x25a5fc: 0x0  nop
    ctx->pc = 0x25a5fcu;
    // NOP
label_25a600:
    // 0x25a600: 0x3e75  .word       0x00003E75                   # INVALID     $zero, $zero, 0x3E75 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a600u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x25A600 raw=0x00003E75"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25a604:
    // 0x25a604: 0xf950  .word       0x0000F950                   # mfhi        $ra # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a604u;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_25a608:
    // 0x25a608: 0x0  nop
    ctx->pc = 0x25a608u;
    // NOP
label_25a60c:
    // 0x25a60c: 0x0  nop
    ctx->pc = 0x25a60cu;
    // NOP
label_25a610:
    // 0x25a610: 0x3e95  .word       0x00003E95                   # INVALID     $zero, $zero, 0x3E95 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a610u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x25A610 raw=0x00003E95"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25a614:
    // 0x25a614: 0x117a0  .word       0x000117A0                   # add         $v0, $zero, $at # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a614u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_25a618:
    // 0x25a618: 0x0  nop
    ctx->pc = 0x25a618u;
    // NOP
label_25a61c:
    // 0x25a61c: 0x0  nop
    ctx->pc = 0x25a61cu;
    // NOP
label_25a620:
    // 0x25a620: 0x3eb8  dsll        $a3, $zero, 26
    ctx->pc = 0x25a620u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) << 26);
label_25a624:
    // 0x25a624: 0x113e0  .word       0x000113E0                   # add         $v0, $zero, $at # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a624u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_25a628:
    // 0x25a628: 0x0  nop
    ctx->pc = 0x25a628u;
    // NOP
label_25a62c:
    // 0x25a62c: 0x0  nop
    ctx->pc = 0x25a62cu;
    // NOP
label_25a630:
    // 0x25a630: 0x3edb  .word       0x00003EDB                   # divu        $a3, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a630u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_25a634:
    // 0x25a634: 0x12a70  tge         $zero, $at, 169
    ctx->pc = 0x25a634u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_25a638:
    // 0x25a638: 0x0  nop
    ctx->pc = 0x25a638u;
    // NOP
label_25a63c:
    // 0x25a63c: 0x0  nop
    ctx->pc = 0x25a63cu;
    // NOP
label_25a640:
    // 0x25a640: 0x3f01  .word       0x00003F01                   # INVALID     $zero, $zero, 0x3F01 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a640u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x25A640 raw=0x00003F01"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25a644:
    // 0x25a644: 0x125a0  .word       0x000125A0                   # add         $a0, $zero, $at # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a644u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_25a648:
    // 0x25a648: 0x0  nop
    ctx->pc = 0x25a648u;
    // NOP
label_25a64c:
    // 0x25a64c: 0x0  nop
    ctx->pc = 0x25a64cu;
    // NOP
label_25a650:
    // 0x25a650: 0x3f26  .word       0x00003F26                   # xor         $a3, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a650u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_25a654:
    // 0x25a654: 0xfe10  .word       0x0000FE10                   # mfhi        $ra # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a654u;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_25a658:
    // 0x25a658: 0x0  nop
    ctx->pc = 0x25a658u;
    // NOP
label_25a65c:
    // 0x25a65c: 0x0  nop
    ctx->pc = 0x25a65cu;
    // NOP
label_25a660:
    // 0x25a660: 0x3f46  .word       0x00003F46                   # srlv        $a3, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a660u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25a664:
    // 0x25a664: 0xdfe0  .word       0x0000DFE0                   # add         $k1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a664u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 27, (int32_t)result);     } }
label_25a668:
    // 0x25a668: 0x0  nop
    ctx->pc = 0x25a668u;
    // NOP
label_25a66c:
    // 0x25a66c: 0x0  nop
    ctx->pc = 0x25a66cu;
    // NOP
label_25a670:
    // 0x25a670: 0x3f62  .word       0x00003F62                   # neg         $a3, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a670u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
label_25a674:
    // 0x25a674: 0x10700  sll         $zero, $at, 28
    ctx->pc = 0x25a674u;
    
label_25a678:
    // 0x25a678: 0x0  nop
    ctx->pc = 0x25a678u;
    // NOP
label_25a67c:
    // 0x25a67c: 0x0  nop
    ctx->pc = 0x25a67cu;
    // NOP
label_25a680:
    // 0x25a680: 0x3f83  sra         $a3, $zero, 30
    ctx->pc = 0x25a680u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 0), 30));
label_25a684:
    // 0x25a684: 0xd310  .word       0x0000D310                   # mfhi        $k0 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a684u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_25a688:
    // 0x25a688: 0x0  nop
    ctx->pc = 0x25a688u;
    // NOP
label_25a68c:
    // 0x25a68c: 0x0  nop
    ctx->pc = 0x25a68cu;
    // NOP
label_25a690:
    // 0x25a690: 0x3f9e  .word       0x00003F9E                   # ddiv        $a3, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a690u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x25A690 raw=0x00003F9E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25a694:
    // 0x25a694: 0x7950  .word       0x00007950                   # mfhi        $t7 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a694u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_25a698:
    // 0x25a698: 0x0  nop
    ctx->pc = 0x25a698u;
    // NOP
label_25a69c:
    // 0x25a69c: 0x0  nop
    ctx->pc = 0x25a69cu;
    // NOP
label_25a6a0:
    // 0x25a6a0: 0x3fae  .word       0x00003FAE                   # dsub        $a3, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a6a0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 7, r); }
label_25a6a4:
    // 0x25a6a4: 0x8fe0  .word       0x00008FE0                   # add         $s1, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a6a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_25a6a8:
    // 0x25a6a8: 0x0  nop
    ctx->pc = 0x25a6a8u;
    // NOP
label_25a6ac:
    // 0x25a6ac: 0x0  nop
    ctx->pc = 0x25a6acu;
    // NOP
label_25a6b0:
    // 0x25a6b0: 0x3fc0  sll         $a3, $zero, 31
    ctx->pc = 0x25a6b0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_25a6b4:
    // 0x25a6b4: 0x70d0  .word       0x000070D0                   # mfhi        $t6 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a6b4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_25a6b8:
    // 0x25a6b8: 0x0  nop
    ctx->pc = 0x25a6b8u;
    // NOP
label_25a6bc:
    // 0x25a6bc: 0x0  nop
    ctx->pc = 0x25a6bcu;
    // NOP
label_25a6c0:
    // 0x25a6c0: 0x3fcf  .word       0x00003FCF                   # sync.p # 00003800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a6c0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_25a6c4:
    // 0x25a6c4: 0x65f0  tge         $zero, $zero, 407
    ctx->pc = 0x25a6c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25a6c8:
    // 0x25a6c8: 0x0  nop
    ctx->pc = 0x25a6c8u;
    // NOP
label_25a6cc:
    // 0x25a6cc: 0x0  nop
    ctx->pc = 0x25a6ccu;
    // NOP
label_25a6d0:
    // 0x25a6d0: 0x3fdc  .word       0x00003FDC                   # dmult       $zero, $zero # 00003FC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a6d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x25A6D0 raw=0x00003FDC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25a6d4:
    // 0x25a6d4: 0x7f90  .word       0x00007F90                   # mfhi        $t7 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a6d4u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_25a6d8:
    // 0x25a6d8: 0x0  nop
    ctx->pc = 0x25a6d8u;
    // NOP
label_25a6dc:
    // 0x25a6dc: 0x0  nop
    ctx->pc = 0x25a6dcu;
    // NOP
label_25a6e0:
    // 0x25a6e0: 0x3fec  .word       0x00003FEC                   # dadd        $a3, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a6e0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 7, r); }
label_25a6e4:
    // 0x25a6e4: 0xbfe0  .word       0x0000BFE0                   # add         $s7, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a6e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_25a6e8:
    // 0x25a6e8: 0x0  nop
    ctx->pc = 0x25a6e8u;
    // NOP
label_25a6ec:
    // 0x25a6ec: 0x0  nop
    ctx->pc = 0x25a6ecu;
    // NOP
label_25a6f0:
    // 0x25a6f0: 0x4004  sllv        $t0, $zero, $zero
    ctx->pc = 0x25a6f0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25a6f4:
    // 0x25a6f4: 0x88c0  sll         $s1, $zero, 3
    ctx->pc = 0x25a6f4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_25a6f8:
    // 0x25a6f8: 0x0  nop
    ctx->pc = 0x25a6f8u;
    // NOP
label_25a6fc:
    // 0x25a6fc: 0x0  nop
    ctx->pc = 0x25a6fcu;
    // NOP
label_25a700:
    // 0x25a700: 0x4016  dsrlv       $t0, $zero, $zero
    ctx->pc = 0x25a700u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_25a704:
    // 0x25a704: 0x5d90  .word       0x00005D90                   # mfhi        $t3 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a704u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_25a708:
    // 0x25a708: 0x0  nop
    ctx->pc = 0x25a708u;
    // NOP
label_25a70c:
    // 0x25a70c: 0x0  nop
    ctx->pc = 0x25a70cu;
    // NOP
label_25a710:
    // 0x25a710: 0x4022  neg         $t0, $zero
    ctx->pc = 0x25a710u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
label_25a714:
    // 0x25a714: 0x6800  sll         $t5, $zero, 0
    ctx->pc = 0x25a714u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_25a718:
    // 0x25a718: 0x0  nop
    ctx->pc = 0x25a718u;
    // NOP
label_25a71c:
    // 0x25a71c: 0x0  nop
    ctx->pc = 0x25a71cu;
    // NOP
label_25a720:
    // 0x25a720: 0x402f  dsubu       $t0, $zero, $zero
    ctx->pc = 0x25a720u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_25a724:
    // 0x25a724: 0x6e70  tge         $zero, $zero, 441
    ctx->pc = 0x25a724u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25a728:
    // 0x25a728: 0x0  nop
    ctx->pc = 0x25a728u;
    // NOP
label_25a72c:
    // 0x25a72c: 0x0  nop
    ctx->pc = 0x25a72cu;
    // NOP
label_25a730:
    // 0x25a730: 0x403d  .word       0x0000403D                   # INVALID     $zero, $zero, 0x403D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a730u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x25A730 raw=0x0000403D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25a734:
    // 0x25a734: 0x3d00  sll         $a3, $zero, 20
    ctx->pc = 0x25a734u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_25a738:
    // 0x25a738: 0x0  nop
    ctx->pc = 0x25a738u;
    // NOP
label_25a73c:
    // 0x25a73c: 0x0  nop
    ctx->pc = 0x25a73cu;
    // NOP
label_25a740:
    // 0x25a740: 0x4045  .word       0x00004045                   # INVALID     $zero, $zero, 0x4045 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a740u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x25A740 raw=0x00004045"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25a744:
    // 0x25a744: 0x8150  .word       0x00008150                   # mfhi        $s0 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a744u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_25a748:
    // 0x25a748: 0x0  nop
    ctx->pc = 0x25a748u;
    // NOP
label_25a74c:
    // 0x25a74c: 0x0  nop
    ctx->pc = 0x25a74cu;
    // NOP
label_25a750:
    // 0x25a750: 0x4056  .word       0x00004056                   # dsrlv       $t0, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a750u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_25a754:
    // 0x25a754: 0x67e0  .word       0x000067E0                   # add         $t4, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a754u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_25a758:
    // 0x25a758: 0x0  nop
    ctx->pc = 0x25a758u;
    // NOP
label_25a75c:
    // 0x25a75c: 0x0  nop
    ctx->pc = 0x25a75cu;
    // NOP
label_25a760:
    // 0x25a760: 0x4063  .word       0x00004063                   # negu        $t0, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a760u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_25a764:
    // 0x25a764: 0x6d40  sll         $t5, $zero, 21
    ctx->pc = 0x25a764u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 21));
label_25a768:
    // 0x25a768: 0x0  nop
    ctx->pc = 0x25a768u;
    // NOP
label_25a76c:
    // 0x25a76c: 0x0  nop
    ctx->pc = 0x25a76cu;
    // NOP
label_25a770:
    // 0x25a770: 0x4071  tgeu        $zero, $zero, 257
    ctx->pc = 0x25a770u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25a774:
    // 0x25a774: 0x8280  sll         $s0, $zero, 10
    ctx->pc = 0x25a774u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_25a778:
    // 0x25a778: 0x0  nop
    ctx->pc = 0x25a778u;
    // NOP
label_25a77c:
    // 0x25a77c: 0x0  nop
    ctx->pc = 0x25a77cu;
    // NOP
label_25a780:
    // 0x25a780: 0x4082  srl         $t0, $zero, 2
    ctx->pc = 0x25a780u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 0), 2));
label_25a784:
    // 0x25a784: 0x6120  .word       0x00006120                   # add         $t4, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a784u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_25a788:
    // 0x25a788: 0x0  nop
    ctx->pc = 0x25a788u;
    // NOP
label_25a78c:
    // 0x25a78c: 0x0  nop
    ctx->pc = 0x25a78cu;
    // NOP
label_25a790:
    // 0x25a790: 0x408f  .word       0x0000408F                   # sync # 00004000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a790u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_25a794:
    // 0x25a794: 0x6020  add         $t4, $zero, $zero
    ctx->pc = 0x25a794u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_25a798:
    // 0x25a798: 0x0  nop
    ctx->pc = 0x25a798u;
    // NOP
label_25a79c:
    // 0x25a79c: 0x0  nop
    ctx->pc = 0x25a79cu;
    // NOP
label_25a7a0:
    // 0x25a7a0: 0x409c  .word       0x0000409C                   # dmult       $zero, $zero # 00004080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a7a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x25A7A0 raw=0x0000409C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25a7a4:
    // 0x25a7a4: 0x8590  .word       0x00008590                   # mfhi        $s0 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a7a4u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_25a7a8:
    // 0x25a7a8: 0x0  nop
    ctx->pc = 0x25a7a8u;
    // NOP
label_25a7ac:
    // 0x25a7ac: 0x0  nop
    ctx->pc = 0x25a7acu;
    // NOP
label_25a7b0:
    // 0x25a7b0: 0x40ad  .word       0x000040AD                   # daddu       $t0, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a7b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25a7b4:
    // 0x25a7b4: 0x6ba0  .word       0x00006BA0                   # add         $t5, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a7b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_25a7b8:
    // 0x25a7b8: 0x0  nop
    ctx->pc = 0x25a7b8u;
    // NOP
label_25a7bc:
    // 0x25a7bc: 0x0  nop
    ctx->pc = 0x25a7bcu;
    // NOP
label_25a7c0:
    // 0x25a7c0: 0x40bb  dsra        $t0, $zero, 2
    ctx->pc = 0x25a7c0u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 0) >> 2);
label_25a7c4:
    // 0x25a7c4: 0x6500  sll         $t4, $zero, 20
    ctx->pc = 0x25a7c4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_25a7c8:
    // 0x25a7c8: 0x0  nop
    ctx->pc = 0x25a7c8u;
    // NOP
label_25a7cc:
    // 0x25a7cc: 0x0  nop
    ctx->pc = 0x25a7ccu;
    // NOP
label_25a7d0:
    // 0x25a7d0: 0x40c8  .word       0x000040C8                   # jr          $zero # 000040C0 <InstrIdType: CPU_SPECIAL>
label_25a7d4:
    if (ctx->pc == 0x25A7D4u) {
        ctx->pc = 0x25A7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A7D0u;
        // 0x25a7d4: 0xd870  tge         $zero, $zero, 865 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A7D8u;
        goto label_25a7d8;
    }
    ctx->pc = 0x25A7D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x25A7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A7D0u;
        // 0x25a7d4: 0xd870  tge         $zero, $zero, 865 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A7D0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25A7D8u;
label_25a7d8:
    // 0x25a7d8: 0x0  nop
    ctx->pc = 0x25a7d8u;
    // NOP
label_25a7dc:
    // 0x25a7dc: 0x0  nop
    ctx->pc = 0x25a7dcu;
    // NOP
label_25a7e0:
    // 0x25a7e0: 0x40e4  .word       0x000040E4                   # and         $t0, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a7e0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_25a7e4:
    // 0x25a7e4: 0x7570  tge         $zero, $zero, 469
    ctx->pc = 0x25a7e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25a7e8:
    // 0x25a7e8: 0x0  nop
    ctx->pc = 0x25a7e8u;
    // NOP
label_25a7ec:
    // 0x25a7ec: 0x0  nop
    ctx->pc = 0x25a7ecu;
    // NOP
label_25a7f0:
    // 0x25a7f0: 0x40f3  tltu        $zero, $zero, 259
    ctx->pc = 0x25a7f0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25a7f4:
    // 0x25a7f4: 0x8100  sll         $s0, $zero, 4
    ctx->pc = 0x25a7f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_25a7f8:
    // 0x25a7f8: 0x0  nop
    ctx->pc = 0x25a7f8u;
    // NOP
label_25a7fc:
    // 0x25a7fc: 0x0  nop
    ctx->pc = 0x25a7fcu;
    // NOP
label_25a800:
    // 0x25a800: 0x4104  .word       0x00004104                   # sllv        $t0, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a800u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25a804:
    // 0x25a804: 0x78c0  sll         $t7, $zero, 3
    ctx->pc = 0x25a804u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_25a808:
    // 0x25a808: 0x0  nop
    ctx->pc = 0x25a808u;
    // NOP
label_25a80c:
    // 0x25a80c: 0x0  nop
    ctx->pc = 0x25a80cu;
    // NOP
label_25a810:
    // 0x25a810: 0x4114  .word       0x00004114                   # dsllv       $t0, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a810u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_25a814:
    // 0x25a814: 0xa1e0  .word       0x0000A1E0                   # add         $s4, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a814u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_25a818:
    // 0x25a818: 0x0  nop
    ctx->pc = 0x25a818u;
    // NOP
label_25a81c:
    // 0x25a81c: 0x0  nop
    ctx->pc = 0x25a81cu;
    // NOP
label_25a820:
    // 0x25a820: 0x4129  .word       0x00004129                   # mtsa        $zero # 00004100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25a820u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_25a824:
    // 0x25a824: 0xa630  tge         $zero, $zero, 664
    ctx->pc = 0x25a824u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25a828:
    // 0x25a828: 0x0  nop
    ctx->pc = 0x25a828u;
    // NOP
label_25a82c:
    // 0x25a82c: 0x0  nop
    ctx->pc = 0x25a82cu;
    // NOP
label_25a830:
    // 0x25a830: 0x413e  dsrl32      $t0, $zero, 4
    ctx->pc = 0x25a830u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) >> (32 + 4));
label_25a834:
    // 0x25a834: 0x6270  tge         $zero, $zero, 393
    ctx->pc = 0x25a834u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25a838:
    // 0x25a838: 0x0  nop
    ctx->pc = 0x25a838u;
    // NOP
label_25a83c:
    // 0x25a83c: 0x0  nop
    ctx->pc = 0x25a83cu;
    // NOP
label_25a840:
    // 0x25a840: 0x414b  .word       0x0000414B                   # movn        $t0, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a840u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 0));
label_25a844:
    // 0x25a844: 0xc9a0  .word       0x0000C9A0                   # add         $t9, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a844u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 25, (int32_t)result);     } }
label_25a848:
    // 0x25a848: 0x0  nop
    ctx->pc = 0x25a848u;
    // NOP
label_25a84c:
    // 0x25a84c: 0x0  nop
    ctx->pc = 0x25a84cu;
    // NOP
label_25a850:
    // 0x25a850: 0x4165  .word       0x00004165                   # move        $t0, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a850u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_25a854:
    // 0x25a854: 0x7aa0  .word       0x00007AA0                   # add         $t7, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a854u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_25a858:
    // 0x25a858: 0x0  nop
    ctx->pc = 0x25a858u;
    // NOP
label_25a85c:
    // 0x25a85c: 0x0  nop
    ctx->pc = 0x25a85cu;
    // NOP
label_25a860:
    // 0x25a860: 0x4175  .word       0x00004175                   # INVALID     $zero, $zero, 0x4175 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a860u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x25A860 raw=0x00004175"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25a864:
    // 0x25a864: 0x73e0  .word       0x000073E0                   # add         $t6, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a864u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_25a868:
    // 0x25a868: 0x0  nop
    ctx->pc = 0x25a868u;
    // NOP
label_25a86c:
    // 0x25a86c: 0x0  nop
    ctx->pc = 0x25a86cu;
    // NOP
label_25a870:
    // 0x25a870: 0x4184  .word       0x00004184                   # sllv        $t0, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a870u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_25a874:
    // 0x25a874: 0x7cd0  .word       0x00007CD0                   # mfhi        $t7 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a874u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_25a878:
    // 0x25a878: 0x0  nop
    ctx->pc = 0x25a878u;
    // NOP
label_25a87c:
    // 0x25a87c: 0x0  nop
    ctx->pc = 0x25a87cu;
    // NOP
label_25a880:
    // 0x25a880: 0x4194  .word       0x00004194                   # dsllv       $t0, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a880u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_25a884:
    // 0x25a884: 0xab00  sll         $s5, $zero, 12
    ctx->pc = 0x25a884u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_25a888:
    // 0x25a888: 0x0  nop
    ctx->pc = 0x25a888u;
    // NOP
label_25a88c:
    // 0x25a88c: 0x0  nop
    ctx->pc = 0x25a88cu;
    // NOP
label_25a890:
    // 0x25a890: 0x41aa  .word       0x000041AA                   # slt         $t0, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a890u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_25a894:
    // 0x25a894: 0x5ee0  .word       0x00005EE0                   # add         $t3, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a894u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_25a898:
    // 0x25a898: 0x0  nop
    ctx->pc = 0x25a898u;
    // NOP
label_25a89c:
    // 0x25a89c: 0x0  nop
    ctx->pc = 0x25a89cu;
    // NOP
label_25a8a0:
    // 0x25a8a0: 0x41b6  tne         $zero, $zero, 262
    ctx->pc = 0x25a8a0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25a8a4:
    // 0x25a8a4: 0x98d0  .word       0x000098D0                   # mfhi        $s3 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a8a4u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_25a8a8:
    // 0x25a8a8: 0x0  nop
    ctx->pc = 0x25a8a8u;
    // NOP
label_25a8ac:
    // 0x25a8ac: 0x0  nop
    ctx->pc = 0x25a8acu;
    // NOP
label_25a8b0:
    // 0x25a8b0: 0x41ca  .word       0x000041CA                   # movz        $t0, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a8b0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 0));
label_25a8b4:
    // 0x25a8b4: 0xc240  sll         $t8, $zero, 9
    ctx->pc = 0x25a8b4u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_25a8b8:
    // 0x25a8b8: 0x0  nop
    ctx->pc = 0x25a8b8u;
    // NOP
label_25a8bc:
    // 0x25a8bc: 0x0  nop
    ctx->pc = 0x25a8bcu;
    // NOP
label_25a8c0:
    // 0x25a8c0: 0x41e3  .word       0x000041E3                   # negu        $t0, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a8c0u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_25a8c4:
    // 0x25a8c4: 0xa190  .word       0x0000A190                   # mfhi        $s4 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a8c4u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_25a8c8:
    // 0x25a8c8: 0x0  nop
    ctx->pc = 0x25a8c8u;
    // NOP
label_25a8cc:
    // 0x25a8cc: 0x0  nop
    ctx->pc = 0x25a8ccu;
    // NOP
label_25a8d0:
    // 0x25a8d0: 0x41f8  dsll        $t0, $zero, 7
    ctx->pc = 0x25a8d0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) << 7);
label_25a8d4:
    // 0x25a8d4: 0x7d90  .word       0x00007D90                   # mfhi        $t7 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a8d4u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_25a8d8:
    // 0x25a8d8: 0x0  nop
    ctx->pc = 0x25a8d8u;
    // NOP
label_25a8dc:
    // 0x25a8dc: 0x0  nop
    ctx->pc = 0x25a8dcu;
    // NOP
label_25a8e0:
    // 0x25a8e0: 0x4208  .word       0x00004208                   # jr          $zero # 00004200 <InstrIdType: CPU_SPECIAL>
label_25a8e4:
    if (ctx->pc == 0x25A8E4u) {
        ctx->pc = 0x25A8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A8E0u;
        // 0x25a8e4: 0x79a0  .word       0x000079A0                   # add         $t7, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x25A8E8u;
        goto label_25a8e8;
    }
    ctx->pc = 0x25A8E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x25A8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A8E0u;
        // 0x25a8e4: 0x79a0  .word       0x000079A0                   # add         $t7, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A8E0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25A8E8u;
label_25a8e8:
    // 0x25a8e8: 0x0  nop
    ctx->pc = 0x25a8e8u;
    // NOP
label_25a8ec:
    // 0x25a8ec: 0x0  nop
    ctx->pc = 0x25a8ecu;
    // NOP
label_25a8f0:
    // 0x25a8f0: 0x4218  .word       0x00004218                   # mult        $t0, $zero, $zero # 00000200 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x25a8f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_25a8f4:
    // 0x25a8f4: 0x71c0  sll         $t6, $zero, 7
    ctx->pc = 0x25a8f4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_25a8f8:
    // 0x25a8f8: 0x0  nop
    ctx->pc = 0x25a8f8u;
    // NOP
label_25a8fc:
    // 0x25a8fc: 0x0  nop
    ctx->pc = 0x25a8fcu;
    // NOP
label_25a900:
    // 0x25a900: 0x4227  .word       0x00004227                   # not         $t0, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a900u;
    SET_GPR_U64(ctx, 8, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_25a904:
    // 0x25a904: 0x70c0  sll         $t6, $zero, 3
    ctx->pc = 0x25a904u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_25a908:
    // 0x25a908: 0x0  nop
    ctx->pc = 0x25a908u;
    // NOP
label_25a90c:
    // 0x25a90c: 0x0  nop
    ctx->pc = 0x25a90cu;
    // NOP
label_25a910:
    // 0x25a910: 0x4236  tne         $zero, $zero, 264
    ctx->pc = 0x25a910u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25a914:
    // 0x25a914: 0x5b90  .word       0x00005B90                   # mfhi        $t3 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a914u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_25a918:
    // 0x25a918: 0x0  nop
    ctx->pc = 0x25a918u;
    // NOP
label_25a91c:
    // 0x25a91c: 0x0  nop
    ctx->pc = 0x25a91cu;
    // NOP
label_25a920:
    // 0x25a920: 0x4242  srl         $t0, $zero, 9
    ctx->pc = 0x25a920u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 0), 9));
label_25a924:
    // 0x25a924: 0x6ea0  .word       0x00006EA0                   # add         $t5, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a924u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_25a928:
    // 0x25a928: 0x0  nop
    ctx->pc = 0x25a928u;
    // NOP
label_25a92c:
    // 0x25a92c: 0x0  nop
    ctx->pc = 0x25a92cu;
    // NOP
label_25a930:
    // 0x25a930: 0x4250  .word       0x00004250                   # mfhi        $t0 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a930u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_25a934:
    // 0x25a934: 0x76e0  .word       0x000076E0                   # add         $t6, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a934u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_25a938:
    // 0x25a938: 0x0  nop
    ctx->pc = 0x25a938u;
    // NOP
label_25a93c:
    // 0x25a93c: 0x0  nop
    ctx->pc = 0x25a93cu;
    // NOP
label_25a940:
    // 0x25a940: 0x425f  .word       0x0000425F                   # ddivu       $t0, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a940u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x25A940 raw=0x0000425F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25a944:
    // 0x25a944: 0x7d60  .word       0x00007D60                   # add         $t7, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a944u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_25a948:
    // 0x25a948: 0x0  nop
    ctx->pc = 0x25a948u;
    // NOP
label_25a94c:
    // 0x25a94c: 0x0  nop
    ctx->pc = 0x25a94cu;
    // NOP
label_25a950:
    // 0x25a950: 0x426f  .word       0x0000426F                   # dsubu       $t0, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a950u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_25a954:
    // 0x25a954: 0x63a0  .word       0x000063A0                   # add         $t4, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a954u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_25a958:
    // 0x25a958: 0x0  nop
    ctx->pc = 0x25a958u;
    // NOP
label_25a95c:
    // 0x25a95c: 0x0  nop
    ctx->pc = 0x25a95cu;
    // NOP
label_25a960:
    // 0x25a960: 0x427c  dsll32      $t0, $zero, 9
    ctx->pc = 0x25a960u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) << (32 + 9));
label_25a964:
    // 0x25a964: 0x7af0  tge         $zero, $zero, 491
    ctx->pc = 0x25a964u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25a968:
    // 0x25a968: 0x0  nop
    ctx->pc = 0x25a968u;
    // NOP
label_25a96c:
    // 0x25a96c: 0x0  nop
    ctx->pc = 0x25a96cu;
    // NOP
label_25a970:
    // 0x25a970: 0x428c  syscall     266
    ctx->pc = 0x25a970u;
    ctx->pc = 0x25A974u;
runtime->handleSyscall(rdram, ctx, 0x10Au);
label_25a974:
    // 0x25a974: 0x6420  .word       0x00006420                   # add         $t4, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a974u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_25a978:
    // 0x25a978: 0x0  nop
    ctx->pc = 0x25a978u;
    // NOP
label_25a97c:
    // 0x25a97c: 0x0  nop
    ctx->pc = 0x25a97cu;
    // NOP
label_25a980:
    // 0x25a980: 0x4299  .word       0x00004299                   # multu       $zero, $zero # 00004280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a980u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_25a984:
    // 0x25a984: 0x6e90  .word       0x00006E90                   # mfhi        $t5 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a984u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_25a988:
    // 0x25a988: 0x0  nop
    ctx->pc = 0x25a988u;
    // NOP
label_25a98c:
    // 0x25a98c: 0x0  nop
    ctx->pc = 0x25a98cu;
    // NOP
label_25a990:
    // 0x25a990: 0x42a7  .word       0x000042A7                   # not         $t0, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a990u;
    SET_GPR_U64(ctx, 8, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_25a994:
    // 0x25a994: 0x78a0  .word       0x000078A0                   # add         $t7, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a994u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_25a998:
    // 0x25a998: 0x0  nop
    ctx->pc = 0x25a998u;
    // NOP
label_25a99c:
    // 0x25a99c: 0x0  nop
    ctx->pc = 0x25a99cu;
    // NOP
label_25a9a0:
    // 0x25a9a0: 0x42b7  .word       0x000042B7                   # INVALID     $zero, $zero, 0x42B7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a9a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x25A9A0 raw=0x000042B7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25a9a4:
    // 0x25a9a4: 0x4d00  sll         $t1, $zero, 20
    ctx->pc = 0x25a9a4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_25a9a8:
    // 0x25a9a8: 0x0  nop
    ctx->pc = 0x25a9a8u;
    // NOP
label_25a9ac:
    // 0x25a9ac: 0x0  nop
    ctx->pc = 0x25a9acu;
    // NOP
label_25a9b0:
    // 0x25a9b0: 0x42c1  .word       0x000042C1                   # INVALID     $zero, $zero, 0x42C1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a9b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x25A9B0 raw=0x000042C1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25a9b4:
    // 0x25a9b4: 0x7400  sll         $t6, $zero, 16
    ctx->pc = 0x25a9b4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_25a9b8:
    // 0x25a9b8: 0x0  nop
    ctx->pc = 0x25a9b8u;
    // NOP
label_25a9bc:
    // 0x25a9bc: 0x0  nop
    ctx->pc = 0x25a9bcu;
    // NOP
label_25a9c0:
    // 0x25a9c0: 0x42d0  .word       0x000042D0                   # mfhi        $t0 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a9c0u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_25a9c4:
    // 0x25a9c4: 0x7370  tge         $zero, $zero, 461
    ctx->pc = 0x25a9c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25a9c8:
    // 0x25a9c8: 0x0  nop
    ctx->pc = 0x25a9c8u;
    // NOP
label_25a9cc:
    // 0x25a9cc: 0x0  nop
    ctx->pc = 0x25a9ccu;
    // NOP
label_25a9d0:
    // 0x25a9d0: 0x42df  .word       0x000042DF                   # ddivu       $t0, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a9d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x25A9D0 raw=0x000042DF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25a9d4:
    // 0x25a9d4: 0x7600  sll         $t6, $zero, 24
    ctx->pc = 0x25a9d4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_25a9d8:
    // 0x25a9d8: 0x0  nop
    ctx->pc = 0x25a9d8u;
    // NOP
label_25a9dc:
    // 0x25a9dc: 0x0  nop
    ctx->pc = 0x25a9dcu;
    // NOP
label_25a9e0:
    // 0x25a9e0: 0x42ee  .word       0x000042EE                   # dsub        $t0, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a9e0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 8, r); }
label_25a9e4:
    // 0x25a9e4: 0x9070  tge         $zero, $zero, 577
    ctx->pc = 0x25a9e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25a9e8:
    // 0x25a9e8: 0x0  nop
    ctx->pc = 0x25a9e8u;
    // NOP
label_25a9ec:
    // 0x25a9ec: 0x0  nop
    ctx->pc = 0x25a9ecu;
    // NOP
label_25a9f0:
    // 0x25a9f0: 0x4301  .word       0x00004301                   # INVALID     $zero, $zero, 0x4301 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25a9f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x25A9F0 raw=0x00004301"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25a9f4:
    // 0x25a9f4: 0x5f70  tge         $zero, $zero, 381
    ctx->pc = 0x25a9f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25a9f8:
    // 0x25a9f8: 0x0  nop
    ctx->pc = 0x25a9f8u;
    // NOP
label_25a9fc:
    // 0x25a9fc: 0x0  nop
    ctx->pc = 0x25a9fcu;
    // NOP
label_25aa00:
    // 0x25aa00: 0x430d  break       0, 268
    ctx->pc = 0x25aa00u;
    runtime->handleBreak(rdram, ctx);
label_25aa04:
    // 0x25aa04: 0x59e0  .word       0x000059E0                   # add         $t3, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25aa04u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_25aa08:
    // 0x25aa08: 0x0  nop
    ctx->pc = 0x25aa08u;
    // NOP
label_25aa0c:
    // 0x25aa0c: 0x0  nop
    ctx->pc = 0x25aa0cu;
    // NOP
label_25aa10:
    // 0x25aa10: 0x4319  .word       0x00004319                   # multu       $zero, $zero # 00004300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25aa10u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_25aa14:
    // 0x25aa14: 0x6570  tge         $zero, $zero, 405
    ctx->pc = 0x25aa14u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25aa18:
    // 0x25aa18: 0x0  nop
    ctx->pc = 0x25aa18u;
    // NOP
label_25aa1c:
    // 0x25aa1c: 0x0  nop
    ctx->pc = 0x25aa1cu;
    // NOP
label_25aa20:
    // 0x25aa20: 0x4326  .word       0x00004326                   # xor         $t0, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25aa20u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_25aa24:
    // 0x25aa24: 0x72e0  .word       0x000072E0                   # add         $t6, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25aa24u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_25aa28:
    // 0x25aa28: 0x0  nop
    ctx->pc = 0x25aa28u;
    // NOP
label_25aa2c:
    // 0x25aa2c: 0x0  nop
    ctx->pc = 0x25aa2cu;
    // NOP
label_25aa30:
    // 0x25aa30: 0x4335  .word       0x00004335                   # INVALID     $zero, $zero, 0x4335 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25aa30u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x25AA30 raw=0x00004335"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25aa34:
    // 0x25aa34: 0x48a0  .word       0x000048A0                   # add         $t1, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25aa34u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_25aa38:
    // 0x25aa38: 0x0  nop
    ctx->pc = 0x25aa38u;
    // NOP
label_25aa3c:
    // 0x25aa3c: 0x0  nop
    ctx->pc = 0x25aa3cu;
    // NOP
label_25aa40:
    // 0x25aa40: 0x433f  dsra32      $t0, $zero, 12
    ctx->pc = 0x25aa40u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 0) >> (32 + 12));
label_25aa44:
    // 0x25aa44: 0x5800  sll         $t3, $zero, 0
    ctx->pc = 0x25aa44u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_25aa48:
    // 0x25aa48: 0x0  nop
    ctx->pc = 0x25aa48u;
    // NOP
label_25aa4c:
    // 0x25aa4c: 0x0  nop
    ctx->pc = 0x25aa4cu;
    // NOP
label_25aa50:
    // 0x25aa50: 0x434a  .word       0x0000434A                   # movz        $t0, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25aa50u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 0));
label_25aa54:
    // 0x25aa54: 0x67d0  .word       0x000067D0                   # mfhi        $t4 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25aa54u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_25aa58:
    // 0x25aa58: 0x0  nop
    ctx->pc = 0x25aa58u;
    // NOP
label_25aa5c:
    // 0x25aa5c: 0x0  nop
    ctx->pc = 0x25aa5cu;
    // NOP
label_25aa60:
    // 0x25aa60: 0x4357  .word       0x00004357                   # dsrav       $t0, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25aa60u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_25aa64:
    // 0x25aa64: 0x7040  sll         $t6, $zero, 1
    ctx->pc = 0x25aa64u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_25aa68:
    // 0x25aa68: 0x0  nop
    ctx->pc = 0x25aa68u;
    // NOP
label_25aa6c:
    // 0x25aa6c: 0x0  nop
    ctx->pc = 0x25aa6cu;
    // NOP
label_25aa70:
    // 0x25aa70: 0x4366  .word       0x00004366                   # xor         $t0, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25aa70u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_25aa74:
    // 0x25aa74: 0x6b90  .word       0x00006B90                   # mfhi        $t5 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25aa74u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_25aa78:
    // 0x25aa78: 0x0  nop
    ctx->pc = 0x25aa78u;
    // NOP
label_25aa7c:
    // 0x25aa7c: 0x0  nop
    ctx->pc = 0x25aa7cu;
    // NOP
label_25aa80:
    // 0x25aa80: 0x4374  teq         $zero, $zero, 269
    ctx->pc = 0x25aa80u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_25aa84:
    // 0x25aa84: 0x5dd0  .word       0x00005DD0                   # mfhi        $t3 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25aa84u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_25aa88:
    // 0x25aa88: 0x0  nop
    ctx->pc = 0x25aa88u;
    // NOP
label_25aa8c:
    // 0x25aa8c: 0x0  nop
    ctx->pc = 0x25aa8cu;
    // NOP
label_25aa90:
    // 0x25aa90: 0x4380  sll         $t0, $zero, 14
    ctx->pc = 0x25aa90u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 14));
label_25aa94:
    // 0x25aa94: 0x6390  .word       0x00006390                   # mfhi        $t4 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25aa94u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_25aa98:
    // 0x25aa98: 0x0  nop
    ctx->pc = 0x25aa98u;
    // NOP
label_25aa9c:
    // 0x25aa9c: 0x0  nop
    ctx->pc = 0x25aa9cu;
    // NOP
label_25aaa0:
    // 0x25aaa0: 0x438d  break       0, 270
    ctx->pc = 0x25aaa0u;
    runtime->handleBreak(rdram, ctx);
label_25aaa4:
    // 0x25aaa4: 0x6020  add         $t4, $zero, $zero
    ctx->pc = 0x25aaa4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_25aaa8:
    // 0x25aaa8: 0x0  nop
    ctx->pc = 0x25aaa8u;
    // NOP
label_25aaac:
    // 0x25aaac: 0x0  nop
    ctx->pc = 0x25aaacu;
    // NOP
label_25aab0:
    // 0x25aab0: 0x439a  .word       0x0000439A                   # div         $t0, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25aab0u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_25aab4:
    // 0x25aab4: 0x2f00  sll         $a1, $zero, 28
    ctx->pc = 0x25aab4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_25aab8:
    // 0x25aab8: 0x0  nop
    ctx->pc = 0x25aab8u;
    // NOP
label_25aabc:
    // 0x25aabc: 0x0  nop
    ctx->pc = 0x25aabcu;
    // NOP
label_25aac0:
    // 0x25aac0: 0x43a0  .word       0x000043A0                   # add         $t0, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25aac0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_25aac4:
    // 0x25aac4: 0x7650  .word       0x00007650                   # mfhi        $t6 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25aac4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_25aac8:
    // 0x25aac8: 0x0  nop
    ctx->pc = 0x25aac8u;
    // NOP
label_25aacc:
    // 0x25aacc: 0x0  nop
    ctx->pc = 0x25aaccu;
    // NOP
label_25aad0:
    // 0x25aad0: 0x43af  .word       0x000043AF                   # dsubu       $t0, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25aad0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_25aad4:
    // 0x25aad4: 0x6950  .word       0x00006950                   # mfhi        $t5 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25aad4u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_25aad8:
    // 0x25aad8: 0x0  nop
    ctx->pc = 0x25aad8u;
    // NOP
label_25aadc:
    // 0x25aadc: 0x0  nop
    ctx->pc = 0x25aadcu;
    // NOP
label_25aae0:
    // 0x25aae0: 0x43bd  .word       0x000043BD                   # INVALID     $zero, $zero, 0x43BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25aae0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x25AAE0 raw=0x000043BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_25aae4:
    // 0x25aae4: 0x66e0  .word       0x000066E0                   # add         $t4, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25aae4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_25aae8:
    // 0x25aae8: 0x0  nop
    ctx->pc = 0x25aae8u;
    // NOP
label_25aaec:
    // 0x25aaec: 0x0  nop
    ctx->pc = 0x25aaecu;
    // NOP
label_25aaf0:
    // 0x25aaf0: 0x43ca  .word       0x000043CA                   # movz        $t0, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25aaf0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 0));
label_25aaf4:
    // 0x25aaf4: 0x7e50  .word       0x00007E50                   # mfhi        $t7 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x25aaf4u;
    SET_GPR_U64(ctx, 15, ctx->hi);
    ctx->pc = 0x25aaf8u;
    return;
}

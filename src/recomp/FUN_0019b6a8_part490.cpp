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

// Function: FUN_0019b6a8
// Address: 0x19b6a8 - 0x29b6b0
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b6a8_part490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x28a2f8u: goto label_28a2f8;
        case 0x28a2fcu: goto label_28a2fc;
        case 0x28a300u: goto label_28a300;
        case 0x28a304u: goto label_28a304;
        case 0x28a308u: goto label_28a308;
        case 0x28a30cu: goto label_28a30c;
        case 0x28a310u: goto label_28a310;
        case 0x28a314u: goto label_28a314;
        case 0x28a318u: goto label_28a318;
        case 0x28a31cu: goto label_28a31c;
        case 0x28a320u: goto label_28a320;
        case 0x28a324u: goto label_28a324;
        case 0x28a328u: goto label_28a328;
        case 0x28a32cu: goto label_28a32c;
        case 0x28a330u: goto label_28a330;
        case 0x28a334u: goto label_28a334;
        case 0x28a338u: goto label_28a338;
        case 0x28a33cu: goto label_28a33c;
        case 0x28a340u: goto label_28a340;
        case 0x28a344u: goto label_28a344;
        case 0x28a348u: goto label_28a348;
        case 0x28a34cu: goto label_28a34c;
        case 0x28a350u: goto label_28a350;
        case 0x28a354u: goto label_28a354;
        case 0x28a358u: goto label_28a358;
        case 0x28a35cu: goto label_28a35c;
        case 0x28a360u: goto label_28a360;
        case 0x28a364u: goto label_28a364;
        case 0x28a368u: goto label_28a368;
        case 0x28a36cu: goto label_28a36c;
        case 0x28a370u: goto label_28a370;
        case 0x28a374u: goto label_28a374;
        case 0x28a378u: goto label_28a378;
        case 0x28a37cu: goto label_28a37c;
        case 0x28a380u: goto label_28a380;
        case 0x28a384u: goto label_28a384;
        case 0x28a388u: goto label_28a388;
        case 0x28a38cu: goto label_28a38c;
        case 0x28a390u: goto label_28a390;
        case 0x28a394u: goto label_28a394;
        case 0x28a398u: goto label_28a398;
        case 0x28a39cu: goto label_28a39c;
        case 0x28a3a0u: goto label_28a3a0;
        case 0x28a3a4u: goto label_28a3a4;
        case 0x28a3a8u: goto label_28a3a8;
        case 0x28a3acu: goto label_28a3ac;
        case 0x28a3b0u: goto label_28a3b0;
        case 0x28a3b4u: goto label_28a3b4;
        case 0x28a3b8u: goto label_28a3b8;
        case 0x28a3bcu: goto label_28a3bc;
        case 0x28a3c0u: goto label_28a3c0;
        case 0x28a3c4u: goto label_28a3c4;
        case 0x28a3c8u: goto label_28a3c8;
        case 0x28a3ccu: goto label_28a3cc;
        case 0x28a3d0u: goto label_28a3d0;
        case 0x28a3d4u: goto label_28a3d4;
        case 0x28a3d8u: goto label_28a3d8;
        case 0x28a3dcu: goto label_28a3dc;
        case 0x28a3e0u: goto label_28a3e0;
        case 0x28a3e4u: goto label_28a3e4;
        case 0x28a3e8u: goto label_28a3e8;
        case 0x28a3ecu: goto label_28a3ec;
        case 0x28a3f0u: goto label_28a3f0;
        case 0x28a3f4u: goto label_28a3f4;
        case 0x28a3f8u: goto label_28a3f8;
        case 0x28a3fcu: goto label_28a3fc;
        case 0x28a400u: goto label_28a400;
        case 0x28a404u: goto label_28a404;
        case 0x28a408u: goto label_28a408;
        case 0x28a40cu: goto label_28a40c;
        case 0x28a410u: goto label_28a410;
        case 0x28a414u: goto label_28a414;
        case 0x28a418u: goto label_28a418;
        case 0x28a41cu: goto label_28a41c;
        case 0x28a420u: goto label_28a420;
        case 0x28a424u: goto label_28a424;
        case 0x28a428u: goto label_28a428;
        case 0x28a42cu: goto label_28a42c;
        case 0x28a430u: goto label_28a430;
        case 0x28a434u: goto label_28a434;
        case 0x28a438u: goto label_28a438;
        case 0x28a43cu: goto label_28a43c;
        case 0x28a440u: goto label_28a440;
        case 0x28a444u: goto label_28a444;
        case 0x28a448u: goto label_28a448;
        case 0x28a44cu: goto label_28a44c;
        case 0x28a450u: goto label_28a450;
        case 0x28a454u: goto label_28a454;
        case 0x28a458u: goto label_28a458;
        case 0x28a45cu: goto label_28a45c;
        case 0x28a460u: goto label_28a460;
        case 0x28a464u: goto label_28a464;
        case 0x28a468u: goto label_28a468;
        case 0x28a46cu: goto label_28a46c;
        case 0x28a470u: goto label_28a470;
        case 0x28a474u: goto label_28a474;
        case 0x28a478u: goto label_28a478;
        case 0x28a47cu: goto label_28a47c;
        case 0x28a480u: goto label_28a480;
        case 0x28a484u: goto label_28a484;
        case 0x28a488u: goto label_28a488;
        case 0x28a48cu: goto label_28a48c;
        case 0x28a490u: goto label_28a490;
        case 0x28a494u: goto label_28a494;
        case 0x28a498u: goto label_28a498;
        case 0x28a49cu: goto label_28a49c;
        case 0x28a4a0u: goto label_28a4a0;
        case 0x28a4a4u: goto label_28a4a4;
        case 0x28a4a8u: goto label_28a4a8;
        case 0x28a4acu: goto label_28a4ac;
        case 0x28a4b0u: goto label_28a4b0;
        case 0x28a4b4u: goto label_28a4b4;
        case 0x28a4b8u: goto label_28a4b8;
        case 0x28a4bcu: goto label_28a4bc;
        case 0x28a4c0u: goto label_28a4c0;
        case 0x28a4c4u: goto label_28a4c4;
        case 0x28a4c8u: goto label_28a4c8;
        case 0x28a4ccu: goto label_28a4cc;
        case 0x28a4d0u: goto label_28a4d0;
        case 0x28a4d4u: goto label_28a4d4;
        case 0x28a4d8u: goto label_28a4d8;
        case 0x28a4dcu: goto label_28a4dc;
        case 0x28a4e0u: goto label_28a4e0;
        case 0x28a4e4u: goto label_28a4e4;
        case 0x28a4e8u: goto label_28a4e8;
        case 0x28a4ecu: goto label_28a4ec;
        case 0x28a4f0u: goto label_28a4f0;
        case 0x28a4f4u: goto label_28a4f4;
        case 0x28a4f8u: goto label_28a4f8;
        case 0x28a4fcu: goto label_28a4fc;
        case 0x28a500u: goto label_28a500;
        case 0x28a504u: goto label_28a504;
        case 0x28a508u: goto label_28a508;
        case 0x28a50cu: goto label_28a50c;
        case 0x28a510u: goto label_28a510;
        case 0x28a514u: goto label_28a514;
        case 0x28a518u: goto label_28a518;
        case 0x28a51cu: goto label_28a51c;
        case 0x28a520u: goto label_28a520;
        case 0x28a524u: goto label_28a524;
        case 0x28a528u: goto label_28a528;
        case 0x28a52cu: goto label_28a52c;
        case 0x28a530u: goto label_28a530;
        case 0x28a534u: goto label_28a534;
        case 0x28a538u: goto label_28a538;
        case 0x28a53cu: goto label_28a53c;
        case 0x28a540u: goto label_28a540;
        case 0x28a544u: goto label_28a544;
        case 0x28a548u: goto label_28a548;
        case 0x28a54cu: goto label_28a54c;
        case 0x28a550u: goto label_28a550;
        case 0x28a554u: goto label_28a554;
        case 0x28a558u: goto label_28a558;
        case 0x28a55cu: goto label_28a55c;
        case 0x28a560u: goto label_28a560;
        case 0x28a564u: goto label_28a564;
        case 0x28a568u: goto label_28a568;
        case 0x28a56cu: goto label_28a56c;
        case 0x28a570u: goto label_28a570;
        case 0x28a574u: goto label_28a574;
        case 0x28a578u: goto label_28a578;
        case 0x28a57cu: goto label_28a57c;
        case 0x28a580u: goto label_28a580;
        case 0x28a584u: goto label_28a584;
        case 0x28a588u: goto label_28a588;
        case 0x28a58cu: goto label_28a58c;
        case 0x28a590u: goto label_28a590;
        case 0x28a594u: goto label_28a594;
        case 0x28a598u: goto label_28a598;
        case 0x28a59cu: goto label_28a59c;
        case 0x28a5a0u: goto label_28a5a0;
        case 0x28a5a4u: goto label_28a5a4;
        case 0x28a5a8u: goto label_28a5a8;
        case 0x28a5acu: goto label_28a5ac;
        case 0x28a5b0u: goto label_28a5b0;
        case 0x28a5b4u: goto label_28a5b4;
        case 0x28a5b8u: goto label_28a5b8;
        case 0x28a5bcu: goto label_28a5bc;
        case 0x28a5c0u: goto label_28a5c0;
        case 0x28a5c4u: goto label_28a5c4;
        case 0x28a5c8u: goto label_28a5c8;
        case 0x28a5ccu: goto label_28a5cc;
        case 0x28a5d0u: goto label_28a5d0;
        case 0x28a5d4u: goto label_28a5d4;
        case 0x28a5d8u: goto label_28a5d8;
        case 0x28a5dcu: goto label_28a5dc;
        case 0x28a5e0u: goto label_28a5e0;
        case 0x28a5e4u: goto label_28a5e4;
        case 0x28a5e8u: goto label_28a5e8;
        case 0x28a5ecu: goto label_28a5ec;
        case 0x28a5f0u: goto label_28a5f0;
        case 0x28a5f4u: goto label_28a5f4;
        case 0x28a5f8u: goto label_28a5f8;
        case 0x28a5fcu: goto label_28a5fc;
        case 0x28a600u: goto label_28a600;
        case 0x28a604u: goto label_28a604;
        case 0x28a608u: goto label_28a608;
        case 0x28a60cu: goto label_28a60c;
        case 0x28a610u: goto label_28a610;
        case 0x28a614u: goto label_28a614;
        case 0x28a618u: goto label_28a618;
        case 0x28a61cu: goto label_28a61c;
        case 0x28a620u: goto label_28a620;
        case 0x28a624u: goto label_28a624;
        case 0x28a628u: goto label_28a628;
        case 0x28a62cu: goto label_28a62c;
        case 0x28a630u: goto label_28a630;
        case 0x28a634u: goto label_28a634;
        case 0x28a638u: goto label_28a638;
        case 0x28a63cu: goto label_28a63c;
        case 0x28a640u: goto label_28a640;
        case 0x28a644u: goto label_28a644;
        case 0x28a648u: goto label_28a648;
        case 0x28a64cu: goto label_28a64c;
        case 0x28a650u: goto label_28a650;
        case 0x28a654u: goto label_28a654;
        case 0x28a658u: goto label_28a658;
        case 0x28a65cu: goto label_28a65c;
        case 0x28a660u: goto label_28a660;
        case 0x28a664u: goto label_28a664;
        case 0x28a668u: goto label_28a668;
        case 0x28a66cu: goto label_28a66c;
        case 0x28a670u: goto label_28a670;
        case 0x28a674u: goto label_28a674;
        case 0x28a678u: goto label_28a678;
        case 0x28a67cu: goto label_28a67c;
        case 0x28a680u: goto label_28a680;
        case 0x28a684u: goto label_28a684;
        case 0x28a688u: goto label_28a688;
        case 0x28a68cu: goto label_28a68c;
        case 0x28a690u: goto label_28a690;
        case 0x28a694u: goto label_28a694;
        case 0x28a698u: goto label_28a698;
        case 0x28a69cu: goto label_28a69c;
        case 0x28a6a0u: goto label_28a6a0;
        case 0x28a6a4u: goto label_28a6a4;
        case 0x28a6a8u: goto label_28a6a8;
        case 0x28a6acu: goto label_28a6ac;
        case 0x28a6b0u: goto label_28a6b0;
        case 0x28a6b4u: goto label_28a6b4;
        case 0x28a6b8u: goto label_28a6b8;
        case 0x28a6bcu: goto label_28a6bc;
        case 0x28a6c0u: goto label_28a6c0;
        case 0x28a6c4u: goto label_28a6c4;
        case 0x28a6c8u: goto label_28a6c8;
        case 0x28a6ccu: goto label_28a6cc;
        case 0x28a6d0u: goto label_28a6d0;
        case 0x28a6d4u: goto label_28a6d4;
        case 0x28a6d8u: goto label_28a6d8;
        case 0x28a6dcu: goto label_28a6dc;
        case 0x28a6e0u: goto label_28a6e0;
        case 0x28a6e4u: goto label_28a6e4;
        case 0x28a6e8u: goto label_28a6e8;
        case 0x28a6ecu: goto label_28a6ec;
        case 0x28a6f0u: goto label_28a6f0;
        case 0x28a6f4u: goto label_28a6f4;
        case 0x28a6f8u: goto label_28a6f8;
        case 0x28a6fcu: goto label_28a6fc;
        case 0x28a700u: goto label_28a700;
        case 0x28a704u: goto label_28a704;
        case 0x28a708u: goto label_28a708;
        case 0x28a70cu: goto label_28a70c;
        case 0x28a710u: goto label_28a710;
        case 0x28a714u: goto label_28a714;
        case 0x28a718u: goto label_28a718;
        case 0x28a71cu: goto label_28a71c;
        case 0x28a720u: goto label_28a720;
        case 0x28a724u: goto label_28a724;
        case 0x28a728u: goto label_28a728;
        case 0x28a72cu: goto label_28a72c;
        case 0x28a730u: goto label_28a730;
        case 0x28a734u: goto label_28a734;
        case 0x28a738u: goto label_28a738;
        case 0x28a73cu: goto label_28a73c;
        case 0x28a740u: goto label_28a740;
        case 0x28a744u: goto label_28a744;
        case 0x28a748u: goto label_28a748;
        case 0x28a74cu: goto label_28a74c;
        case 0x28a750u: goto label_28a750;
        case 0x28a754u: goto label_28a754;
        case 0x28a758u: goto label_28a758;
        case 0x28a75cu: goto label_28a75c;
        case 0x28a760u: goto label_28a760;
        case 0x28a764u: goto label_28a764;
        case 0x28a768u: goto label_28a768;
        case 0x28a76cu: goto label_28a76c;
        case 0x28a770u: goto label_28a770;
        case 0x28a774u: goto label_28a774;
        case 0x28a778u: goto label_28a778;
        case 0x28a77cu: goto label_28a77c;
        case 0x28a780u: goto label_28a780;
        case 0x28a784u: goto label_28a784;
        case 0x28a788u: goto label_28a788;
        case 0x28a78cu: goto label_28a78c;
        case 0x28a790u: goto label_28a790;
        case 0x28a794u: goto label_28a794;
        case 0x28a798u: goto label_28a798;
        case 0x28a79cu: goto label_28a79c;
        case 0x28a7a0u: goto label_28a7a0;
        case 0x28a7a4u: goto label_28a7a4;
        case 0x28a7a8u: goto label_28a7a8;
        case 0x28a7acu: goto label_28a7ac;
        case 0x28a7b0u: goto label_28a7b0;
        case 0x28a7b4u: goto label_28a7b4;
        case 0x28a7b8u: goto label_28a7b8;
        case 0x28a7bcu: goto label_28a7bc;
        case 0x28a7c0u: goto label_28a7c0;
        case 0x28a7c4u: goto label_28a7c4;
        case 0x28a7c8u: goto label_28a7c8;
        case 0x28a7ccu: goto label_28a7cc;
        case 0x28a7d0u: goto label_28a7d0;
        case 0x28a7d4u: goto label_28a7d4;
        case 0x28a7d8u: goto label_28a7d8;
        case 0x28a7dcu: goto label_28a7dc;
        case 0x28a7e0u: goto label_28a7e0;
        case 0x28a7e4u: goto label_28a7e4;
        case 0x28a7e8u: goto label_28a7e8;
        case 0x28a7ecu: goto label_28a7ec;
        case 0x28a7f0u: goto label_28a7f0;
        case 0x28a7f4u: goto label_28a7f4;
        case 0x28a7f8u: goto label_28a7f8;
        case 0x28a7fcu: goto label_28a7fc;
        case 0x28a800u: goto label_28a800;
        case 0x28a804u: goto label_28a804;
        case 0x28a808u: goto label_28a808;
        case 0x28a80cu: goto label_28a80c;
        case 0x28a810u: goto label_28a810;
        case 0x28a814u: goto label_28a814;
        case 0x28a818u: goto label_28a818;
        case 0x28a81cu: goto label_28a81c;
        case 0x28a820u: goto label_28a820;
        case 0x28a824u: goto label_28a824;
        case 0x28a828u: goto label_28a828;
        case 0x28a82cu: goto label_28a82c;
        case 0x28a830u: goto label_28a830;
        case 0x28a834u: goto label_28a834;
        case 0x28a838u: goto label_28a838;
        case 0x28a83cu: goto label_28a83c;
        case 0x28a840u: goto label_28a840;
        case 0x28a844u: goto label_28a844;
        case 0x28a848u: goto label_28a848;
        case 0x28a84cu: goto label_28a84c;
        case 0x28a850u: goto label_28a850;
        case 0x28a854u: goto label_28a854;
        case 0x28a858u: goto label_28a858;
        case 0x28a85cu: goto label_28a85c;
        case 0x28a860u: goto label_28a860;
        case 0x28a864u: goto label_28a864;
        case 0x28a868u: goto label_28a868;
        case 0x28a86cu: goto label_28a86c;
        case 0x28a870u: goto label_28a870;
        case 0x28a874u: goto label_28a874;
        case 0x28a878u: goto label_28a878;
        case 0x28a87cu: goto label_28a87c;
        case 0x28a880u: goto label_28a880;
        case 0x28a884u: goto label_28a884;
        case 0x28a888u: goto label_28a888;
        case 0x28a88cu: goto label_28a88c;
        case 0x28a890u: goto label_28a890;
        case 0x28a894u: goto label_28a894;
        case 0x28a898u: goto label_28a898;
        case 0x28a89cu: goto label_28a89c;
        case 0x28a8a0u: goto label_28a8a0;
        case 0x28a8a4u: goto label_28a8a4;
        case 0x28a8a8u: goto label_28a8a8;
        case 0x28a8acu: goto label_28a8ac;
        case 0x28a8b0u: goto label_28a8b0;
        case 0x28a8b4u: goto label_28a8b4;
        case 0x28a8b8u: goto label_28a8b8;
        case 0x28a8bcu: goto label_28a8bc;
        case 0x28a8c0u: goto label_28a8c0;
        case 0x28a8c4u: goto label_28a8c4;
        case 0x28a8c8u: goto label_28a8c8;
        case 0x28a8ccu: goto label_28a8cc;
        case 0x28a8d0u: goto label_28a8d0;
        case 0x28a8d4u: goto label_28a8d4;
        case 0x28a8d8u: goto label_28a8d8;
        case 0x28a8dcu: goto label_28a8dc;
        case 0x28a8e0u: goto label_28a8e0;
        case 0x28a8e4u: goto label_28a8e4;
        case 0x28a8e8u: goto label_28a8e8;
        case 0x28a8ecu: goto label_28a8ec;
        case 0x28a8f0u: goto label_28a8f0;
        case 0x28a8f4u: goto label_28a8f4;
        case 0x28a8f8u: goto label_28a8f8;
        case 0x28a8fcu: goto label_28a8fc;
        case 0x28a900u: goto label_28a900;
        case 0x28a904u: goto label_28a904;
        case 0x28a908u: goto label_28a908;
        case 0x28a90cu: goto label_28a90c;
        case 0x28a910u: goto label_28a910;
        case 0x28a914u: goto label_28a914;
        case 0x28a918u: goto label_28a918;
        case 0x28a91cu: goto label_28a91c;
        case 0x28a920u: goto label_28a920;
        case 0x28a924u: goto label_28a924;
        case 0x28a928u: goto label_28a928;
        case 0x28a92cu: goto label_28a92c;
        case 0x28a930u: goto label_28a930;
        case 0x28a934u: goto label_28a934;
        case 0x28a938u: goto label_28a938;
        case 0x28a93cu: goto label_28a93c;
        case 0x28a940u: goto label_28a940;
        case 0x28a944u: goto label_28a944;
        case 0x28a948u: goto label_28a948;
        case 0x28a94cu: goto label_28a94c;
        case 0x28a950u: goto label_28a950;
        case 0x28a954u: goto label_28a954;
        case 0x28a958u: goto label_28a958;
        case 0x28a95cu: goto label_28a95c;
        case 0x28a960u: goto label_28a960;
        case 0x28a964u: goto label_28a964;
        case 0x28a968u: goto label_28a968;
        case 0x28a96cu: goto label_28a96c;
        case 0x28a970u: goto label_28a970;
        case 0x28a974u: goto label_28a974;
        case 0x28a978u: goto label_28a978;
        case 0x28a97cu: goto label_28a97c;
        case 0x28a980u: goto label_28a980;
        case 0x28a984u: goto label_28a984;
        case 0x28a988u: goto label_28a988;
        case 0x28a98cu: goto label_28a98c;
        case 0x28a990u: goto label_28a990;
        case 0x28a994u: goto label_28a994;
        case 0x28a998u: goto label_28a998;
        case 0x28a99cu: goto label_28a99c;
        case 0x28a9a0u: goto label_28a9a0;
        case 0x28a9a4u: goto label_28a9a4;
        case 0x28a9a8u: goto label_28a9a8;
        case 0x28a9acu: goto label_28a9ac;
        case 0x28a9b0u: goto label_28a9b0;
        case 0x28a9b4u: goto label_28a9b4;
        case 0x28a9b8u: goto label_28a9b8;
        case 0x28a9bcu: goto label_28a9bc;
        case 0x28a9c0u: goto label_28a9c0;
        case 0x28a9c4u: goto label_28a9c4;
        case 0x28a9c8u: goto label_28a9c8;
        case 0x28a9ccu: goto label_28a9cc;
        case 0x28a9d0u: goto label_28a9d0;
        case 0x28a9d4u: goto label_28a9d4;
        case 0x28a9d8u: goto label_28a9d8;
        case 0x28a9dcu: goto label_28a9dc;
        case 0x28a9e0u: goto label_28a9e0;
        case 0x28a9e4u: goto label_28a9e4;
        case 0x28a9e8u: goto label_28a9e8;
        case 0x28a9ecu: goto label_28a9ec;
        case 0x28a9f0u: goto label_28a9f0;
        case 0x28a9f4u: goto label_28a9f4;
        case 0x28a9f8u: goto label_28a9f8;
        case 0x28a9fcu: goto label_28a9fc;
        case 0x28aa00u: goto label_28aa00;
        case 0x28aa04u: goto label_28aa04;
        case 0x28aa08u: goto label_28aa08;
        case 0x28aa0cu: goto label_28aa0c;
        case 0x28aa10u: goto label_28aa10;
        case 0x28aa14u: goto label_28aa14;
        case 0x28aa18u: goto label_28aa18;
        case 0x28aa1cu: goto label_28aa1c;
        case 0x28aa20u: goto label_28aa20;
        case 0x28aa24u: goto label_28aa24;
        case 0x28aa28u: goto label_28aa28;
        case 0x28aa2cu: goto label_28aa2c;
        case 0x28aa30u: goto label_28aa30;
        case 0x28aa34u: goto label_28aa34;
        case 0x28aa38u: goto label_28aa38;
        case 0x28aa3cu: goto label_28aa3c;
        case 0x28aa40u: goto label_28aa40;
        case 0x28aa44u: goto label_28aa44;
        case 0x28aa48u: goto label_28aa48;
        case 0x28aa4cu: goto label_28aa4c;
        case 0x28aa50u: goto label_28aa50;
        case 0x28aa54u: goto label_28aa54;
        case 0x28aa58u: goto label_28aa58;
        case 0x28aa5cu: goto label_28aa5c;
        case 0x28aa60u: goto label_28aa60;
        case 0x28aa64u: goto label_28aa64;
        case 0x28aa68u: goto label_28aa68;
        case 0x28aa6cu: goto label_28aa6c;
        case 0x28aa70u: goto label_28aa70;
        case 0x28aa74u: goto label_28aa74;
        case 0x28aa78u: goto label_28aa78;
        case 0x28aa7cu: goto label_28aa7c;
        case 0x28aa80u: goto label_28aa80;
        case 0x28aa84u: goto label_28aa84;
        case 0x28aa88u: goto label_28aa88;
        case 0x28aa8cu: goto label_28aa8c;
        case 0x28aa90u: goto label_28aa90;
        case 0x28aa94u: goto label_28aa94;
        case 0x28aa98u: goto label_28aa98;
        case 0x28aa9cu: goto label_28aa9c;
        case 0x28aaa0u: goto label_28aaa0;
        case 0x28aaa4u: goto label_28aaa4;
        case 0x28aaa8u: goto label_28aaa8;
        case 0x28aaacu: goto label_28aaac;
        case 0x28aab0u: goto label_28aab0;
        case 0x28aab4u: goto label_28aab4;
        case 0x28aab8u: goto label_28aab8;
        case 0x28aabcu: goto label_28aabc;
        case 0x28aac0u: goto label_28aac0;
        case 0x28aac4u: goto label_28aac4;
        default: return;
    }

label_28a2f8:
    // 0x28a2f8: 0x57000  sll         $t6, $a1, 0
    ctx->pc = 0x28a2f8u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 5), 0));
label_28a2fc:
    // 0x28a2fc: 0x0  nop
    ctx->pc = 0x28a2fcu;
    // NOP
label_28a300:
    // 0x28a300: 0x2000  sll         $a0, $zero, 0
    ctx->pc = 0x28a300u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28a304:
    // 0x28a304: 0x0  nop
    ctx->pc = 0x28a304u;
    // NOP
label_28a308:
    // 0x28a308: 0x8f01  .word       0x00008F01                   # INVALID     $zero, $zero, -0x70FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28a308u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28A308 raw=0x00008F01"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28a30c:
    // 0x28a30c: 0x0  nop
    ctx->pc = 0x28a30cu;
    // NOP
label_28a310:
    // 0x28a310: 0x4400  sll         $t0, $zero, 16
    ctx->pc = 0x28a310u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_28a314:
    // 0x28a314: 0x0  nop
    ctx->pc = 0x28a314u;
    // NOP
label_28a318:
    // 0x28a318: 0x149001  .word       0x00149001                   # INVALID     $zero, $s4, -0x6FFF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28a318u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28A318 raw=0x00149001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28a31c:
    // 0x28a31c: 0x0  nop
    ctx->pc = 0x28a31cu;
    // NOP
label_28a320:
    // 0x28a320: 0x8000  sll         $s0, $zero, 0
    ctx->pc = 0x28a320u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28a324:
    // 0x28a324: 0x0  nop
    ctx->pc = 0x28a324u;
    // NOP
label_28a328:
    // 0x28a328: 0x9101  .word       0x00009101                   # INVALID     $zero, $zero, -0x6EFF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28a328u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28A328 raw=0x00009101"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28a32c:
    // 0x28a32c: 0x0  nop
    ctx->pc = 0x28a32cu;
    // NOP
label_28a330:
    // 0x28a330: 0x10000  sll         $zero, $at, 0
    ctx->pc = 0x28a330u;
    
label_28a334:
    // 0x28a334: 0x0  nop
    ctx->pc = 0x28a334u;
    // NOP
label_28a338:
    // 0x28a338: 0x9201  .word       0x00009201                   # INVALID     $zero, $zero, -0x6DFF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28a338u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28A338 raw=0x00009201"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28a33c:
    // 0x28a33c: 0x0  nop
    ctx->pc = 0x28a33cu;
    // NOP
label_28a340:
    // 0x28a340: 0x20000  sll         $zero, $v0, 0
    ctx->pc = 0x28a340u;
    
label_28a344:
    // 0x28a344: 0x0  nop
    ctx->pc = 0x28a344u;
    // NOP
label_28a348:
    // 0x28a348: 0x9301  .word       0x00009301                   # INVALID     $zero, $zero, -0x6CFF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28a348u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28A348 raw=0x00009301"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28a34c:
    // 0x28a34c: 0x0  nop
    ctx->pc = 0x28a34cu;
    // NOP
label_28a350:
    // 0x28a350: 0x40000  sll         $zero, $a0, 0
    ctx->pc = 0x28a350u;
    
label_28a354:
    // 0x28a354: 0x0  nop
    ctx->pc = 0x28a354u;
    // NOP
label_28a358:
    // 0x28a358: 0x9401  .word       0x00009401                   # INVALID     $zero, $zero, -0x6BFF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28a358u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28A358 raw=0x00009401"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28a35c:
    // 0x28a35c: 0x0  nop
    ctx->pc = 0x28a35cu;
    // NOP
label_28a360:
    // 0x28a360: 0x80000  sll         $zero, $t0, 0
    ctx->pc = 0x28a360u;
    
label_28a364:
    // 0x28a364: 0x0  nop
    ctx->pc = 0x28a364u;
    // NOP
label_28a368:
    // 0x28a368: 0x9501  .word       0x00009501                   # INVALID     $zero, $zero, -0x6AFF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28a368u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28A368 raw=0x00009501"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28a36c:
    // 0x28a36c: 0x0  nop
    ctx->pc = 0x28a36cu;
    // NOP
label_28a370:
    // 0x28a370: 0x100000  sll         $zero, $s0, 0
    ctx->pc = 0x28a370u;
    
label_28a374:
    // 0x28a374: 0x0  nop
    ctx->pc = 0x28a374u;
    // NOP
label_28a378:
    // 0x28a378: 0x9601  .word       0x00009601                   # INVALID     $zero, $zero, -0x69FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28a378u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28A378 raw=0x00009601"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28a37c:
    // 0x28a37c: 0x0  nop
    ctx->pc = 0x28a37cu;
    // NOP
label_28a380:
    // 0x28a380: 0x200000  .word       0x00200000                   # sll         $zero, $zero, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28a380u;
    // NOP
label_28a384:
    // 0x28a384: 0x0  nop
    ctx->pc = 0x28a384u;
    // NOP
label_28a388:
    // 0x28a388: 0x9701  .word       0x00009701                   # INVALID     $zero, $zero, -0x68FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28a388u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28A388 raw=0x00009701"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28a38c:
    // 0x28a38c: 0x0  nop
    ctx->pc = 0x28a38cu;
    // NOP
label_28a390:
    // 0x28a390: 0x400000  .word       0x00400000                   # sll         $zero, $zero, 0 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28a390u;
    // NOP
label_28a394:
    // 0x28a394: 0x0  nop
    ctx->pc = 0x28a394u;
    // NOP
label_28a398:
    // 0x28a398: 0x9801  .word       0x00009801                   # INVALID     $zero, $zero, -0x67FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28a398u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28A398 raw=0x00009801"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28a39c:
    // 0x28a39c: 0x0  nop
    ctx->pc = 0x28a39cu;
    // NOP
label_28a3a0:
    // 0x28a3a0: 0x800000  .word       0x00800000                   # sll         $zero, $zero, 0 # 00800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28a3a0u;
    // NOP
label_28a3a4:
    // 0x28a3a4: 0x0  nop
    ctx->pc = 0x28a3a4u;
    // NOP
label_28a3a8:
    // 0x28a3a8: 0x9901  .word       0x00009901                   # INVALID     $zero, $zero, -0x66FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28a3a8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28A3A8 raw=0x00009901"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28a3ac:
    // 0x28a3ac: 0x0  nop
    ctx->pc = 0x28a3acu;
    // NOP
label_28a3b0:
    // 0x28a3b0: 0x1000000  .word       0x01000000                   # sll         $zero, $zero, 0 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28a3b0u;
    // NOP
label_28a3b4:
    // 0x28a3b4: 0x0  nop
    ctx->pc = 0x28a3b4u;
    // NOP
label_28a3b8:
    // 0x28a3b8: 0x9a01  .word       0x00009A01                   # INVALID     $zero, $zero, -0x65FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28a3b8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28A3B8 raw=0x00009A01"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28a3bc:
    // 0x28a3bc: 0x0  nop
    ctx->pc = 0x28a3bcu;
    // NOP
label_28a3c0:
    // 0x28a3c0: 0x2000000  .word       0x02000000                   # sll         $zero, $zero, 0 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28a3c0u;
    // NOP
label_28a3c4:
    // 0x28a3c4: 0x0  nop
    ctx->pc = 0x28a3c4u;
    // NOP
label_28a3c8:
    // 0x28a3c8: 0x87a00  sll         $t7, $t0, 8
    ctx->pc = 0x28a3c8u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
label_28a3cc:
    // 0x28a3cc: 0x0  nop
    ctx->pc = 0x28a3ccu;
    // NOP
label_28a3d0:
    // 0x28a3d0: 0x4000000  bltz        $zero, . + 4 + (0x0 << 2)
label_28a3d4:
    if (ctx->pc == 0x28A3D4u) {
        ctx->pc = 0x28A3D8u;
        goto label_28a3d8;
    }
    ctx->pc = 0x28A3D0u;
    {
        const bool branch_taken_0x28a3d0 = (GPR_S32(ctx, 0) < 0);
        if (branch_taken_0x28a3d0) {
            ctx->pc = 0x28A3D4u;
            goto label_28a3d4;
        }
    }
    ctx->pc = 0x28A3D8u;
label_28a3d8:
    // 0x28a3d8: 0x58400  sll         $s0, $a1, 16
    ctx->pc = 0x28a3d8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
label_28a3dc:
    // 0x28a3dc: 0x0  nop
    ctx->pc = 0x28a3dcu;
    // NOP
label_28a3e0:
    // 0x28a3e0: 0x8000000  j           func_000000
label_28a3e4:
    if (ctx->pc == 0x28A3E4u) {
        ctx->pc = 0x28A3E8u;
        goto label_28a3e8;
    }
    ctx->pc = 0x28A3E0u;
    ctx->pc = 0x0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x0u, 0x28A3E0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x28A3E8u;
label_28a3e8:
    // 0x28a3e8: 0x38e00  sll         $s1, $v1, 24
    ctx->pc = 0x28a3e8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_28a3ec:
    // 0x28a3ec: 0x0  nop
    ctx->pc = 0x28a3ecu;
    // NOP
label_28a3f0:
    // 0x28a3f0: 0x10000000  b           . + 4 + (0x0 << 2)
label_28a3f4:
    if (ctx->pc == 0x28A3F4u) {
        ctx->pc = 0x28A3F8u;
        goto label_28a3f8;
    }
    ctx->pc = 0x28A3F0u;
    {
        const bool branch_taken_0x28a3f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a3f0) {
            ctx->pc = 0x28A3F4u;
            goto label_28a3f4;
        }
    }
    ctx->pc = 0x28A3F8u;
label_28a3f8:
    // 0x28a3f8: 0x9b01  .word       0x00009B01                   # INVALID     $zero, $zero, -0x64FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28a3f8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28A3F8 raw=0x00009B01"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28a3fc:
    // 0x28a3fc: 0x0  nop
    ctx->pc = 0x28a3fcu;
    // NOP
label_28a400:
    // 0x28a400: 0x20000000  addi        $zero, $zero, 0x0
    ctx->pc = 0x28a400u;
    // NOP (addi to $zero)
label_28a404:
    // 0x28a404: 0x0  nop
    ctx->pc = 0x28a404u;
    // NOP
label_28a408:
    // 0x28a408: 0x9c01  .word       0x00009C01                   # INVALID     $zero, $zero, -0x63FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28a408u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28A408 raw=0x00009C01"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28a40c:
    // 0x28a40c: 0x0  nop
    ctx->pc = 0x28a40cu;
    // NOP
label_28a410:
    // 0x28a410: 0x40000000  mfc0        $zero, Index
    ctx->pc = 0x28a410u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
label_28a414:
    // 0x28a414: 0x0  nop
    ctx->pc = 0x28a414u;
    // NOP
label_28a418:
    // 0x28a418: 0x9d01  .word       0x00009D01                   # INVALID     $zero, $zero, -0x62FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28a418u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28A418 raw=0x00009D01"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28a41c:
    // 0x28a41c: 0x0  nop
    ctx->pc = 0x28a41cu;
    // NOP
label_28a420:
    // 0x28a420: 0x80000000  lb          $zero, 0x0($zero)
    ctx->pc = 0x28a420u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x0u));
label_28a424:
    // 0x28a424: 0x0  nop
    ctx->pc = 0x28a424u;
    // NOP
label_28a428:
    // 0x28a428: 0x9e01  .word       0x00009E01                   # INVALID     $zero, $zero, -0x61FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28a428u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28A428 raw=0x00009E01"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28a42c:
    // 0x28a42c: 0x0  nop
    ctx->pc = 0x28a42cu;
    // NOP
label_28a430:
    // 0x28a430: 0x0  nop
    ctx->pc = 0x28a430u;
    // NOP
label_28a434:
    // 0x28a434: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28a434u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28A434 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28a438:
    // 0x28a438: 0x9f01  .word       0x00009F01                   # INVALID     $zero, $zero, -0x60FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28a438u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28A438 raw=0x00009F01"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28a43c:
    // 0x28a43c: 0x0  nop
    ctx->pc = 0x28a43cu;
    // NOP
label_28a440:
    // 0x28a440: 0x0  nop
    ctx->pc = 0x28a440u;
    // NOP
label_28a444:
    // 0x28a444: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x28a444u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_28a448:
    // 0x28a448: 0xa001  .word       0x0000A001                   # INVALID     $zero, $zero, -0x5FFF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28a448u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28A448 raw=0x0000A001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28a44c:
    // 0x28a44c: 0x0  nop
    ctx->pc = 0x28a44cu;
    // NOP
label_28a450:
    // 0x28a450: 0x0  nop
    ctx->pc = 0x28a450u;
    // NOP
label_28a454:
    // 0x28a454: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x28a454u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28a458:
    // 0x28a458: 0xa101  .word       0x0000A101                   # INVALID     $zero, $zero, -0x5EFF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28a458u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28A458 raw=0x0000A101"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28a45c:
    // 0x28a45c: 0x0  nop
    ctx->pc = 0x28a45cu;
    // NOP
label_28a460:
    // 0x28a460: 0x0  nop
    ctx->pc = 0x28a460u;
    // NOP
label_28a464:
    // 0x28a464: 0x8  jr          $zero
label_28a468:
    if (ctx->pc == 0x28A468u) {
        ctx->pc = 0x28A468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A464u;
        // 0x28a468: 0xa201  .word       0x0000A201                   # INVALID     $zero, $zero, -0x5DFF # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28A468 raw=0x0000A201"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A46Cu;
        goto label_28a46c;
    }
    ctx->pc = 0x28A464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x28A468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A464u;
        // 0x28a468: 0xa201  .word       0x0000A201                   # INVALID     $zero, $zero, -0x5DFF # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
// //         throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28A468 raw=0x0000A201"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28A464u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28A46Cu;
label_28a46c:
    // 0x28a46c: 0x0  nop
    ctx->pc = 0x28a46cu;
    // NOP
label_28a470:
    // 0x28a470: 0x0  nop
    ctx->pc = 0x28a470u;
    // NOP
label_28a474:
    // 0x28a474: 0x10  mfhi        $zero
    ctx->pc = 0x28a474u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_28a478:
    // 0x28a478: 0xa301  .word       0x0000A301                   # INVALID     $zero, $zero, -0x5CFF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28a478u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28A478 raw=0x0000A301"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28a47c:
    // 0x28a47c: 0x0  nop
    ctx->pc = 0x28a47cu;
    // NOP
label_28a480:
    // 0x28a480: 0x0  nop
    ctx->pc = 0x28a480u;
    // NOP
label_28a484:
    // 0x28a484: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x28a484u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_28a488:
    // 0x28a488: 0xa401  .word       0x0000A401                   # INVALID     $zero, $zero, -0x5BFF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28a488u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28A488 raw=0x0000A401"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28a48c:
    // 0x28a48c: 0x0  nop
    ctx->pc = 0x28a48cu;
    // NOP
label_28a490:
    // 0x28a490: 0x0  nop
    ctx->pc = 0x28a490u;
    // NOP
label_28a494:
    // 0x28a494: 0x40  sll         $zero, $zero, 1
    ctx->pc = 0x28a494u;
    
label_28a498:
    // 0x28a498: 0xa501  .word       0x0000A501                   # INVALID     $zero, $zero, -0x5AFF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28a498u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28A498 raw=0x0000A501"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28a49c:
    // 0x28a49c: 0x0  nop
    ctx->pc = 0x28a49cu;
    // NOP
label_28a4a0:
    // 0x28a4a0: 0x0  nop
    ctx->pc = 0x28a4a0u;
    // NOP
label_28a4a4:
    // 0x28a4a4: 0x80  sll         $zero, $zero, 2
    ctx->pc = 0x28a4a4u;
    
label_28a4a8:
    // 0x28a4a8: 0xa601  .word       0x0000A601                   # INVALID     $zero, $zero, -0x59FF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28a4a8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28A4A8 raw=0x0000A601"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28a4ac:
    // 0x28a4ac: 0x0  nop
    ctx->pc = 0x28a4acu;
    // NOP
label_28a4b0:
    // 0x28a4b0: 0x8  jr          $zero
label_28a4b4:
    if (ctx->pc == 0x28A4B4u) {
        ctx->pc = 0x28A4B8u;
        goto label_28a4b8;
    }
    ctx->pc = 0x28A4B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28A4B0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28A4B8u;
label_28a4b8:
    // 0x28a4b8: 0x80a00  sll         $at, $t0, 8
    ctx->pc = 0x28a4b8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
label_28a4bc:
    // 0x28a4bc: 0x0  nop
    ctx->pc = 0x28a4bcu;
    // NOP
label_28a4c0:
    // 0x28a4c0: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x28a4c0u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28a4c4:
    // 0x28a4c4: 0x0  nop
    ctx->pc = 0x28a4c4u;
    // NOP
label_28a4c8:
    // 0x28a4c8: 0x81400  sll         $v0, $t0, 16
    ctx->pc = 0x28a4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
label_28a4cc:
    // 0x28a4cc: 0x0  nop
    ctx->pc = 0x28a4ccu;
    // NOP
label_28a4d0:
    // 0x28a4d0: 0x10  mfhi        $zero
    ctx->pc = 0x28a4d0u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_28a4d4:
    // 0x28a4d4: 0x0  nop
    ctx->pc = 0x28a4d4u;
    // NOP
label_28a4d8:
    // 0x28a4d8: 0x51e00  sll         $v1, $a1, 24
    ctx->pc = 0x28a4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
label_28a4dc:
    // 0x28a4dc: 0x0  nop
    ctx->pc = 0x28a4dcu;
    // NOP
label_28a4e0:
    // 0x28a4e0: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x28a4e0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_28a4e4:
    // 0x28a4e4: 0x0  nop
    ctx->pc = 0x28a4e4u;
    // NOP
label_28a4e8:
    // 0x28a4e8: 0x52800  sll         $a1, $a1, 0
    ctx->pc = 0x28a4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 0));
label_28a4ec:
    // 0x28a4ec: 0x0  nop
    ctx->pc = 0x28a4ecu;
    // NOP
label_28a4f0:
    // 0x28a4f0: 0x40  sll         $zero, $zero, 1
    ctx->pc = 0x28a4f0u;
    
label_28a4f4:
    // 0x28a4f4: 0x0  nop
    ctx->pc = 0x28a4f4u;
    // NOP
label_28a4f8:
    // 0x28a4f8: 0x33200  sll         $a2, $v1, 8
    ctx->pc = 0x28a4f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_28a4fc:
    // 0x28a4fc: 0x0  nop
    ctx->pc = 0x28a4fcu;
    // NOP
label_28a500:
    // 0x28a500: 0x80  sll         $zero, $zero, 2
    ctx->pc = 0x28a500u;
    
label_28a504:
    // 0x28a504: 0x0  nop
    ctx->pc = 0x28a504u;
    // NOP
label_28a508:
    // 0x28a508: 0x33c00  sll         $a3, $v1, 16
    ctx->pc = 0x28a508u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_28a50c:
    // 0x28a50c: 0x0  nop
    ctx->pc = 0x28a50cu;
    // NOP
label_28a510:
    // 0x28a510: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28a510u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28A510 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28a514:
    // 0x28a514: 0x0  nop
    ctx->pc = 0x28a514u;
    // NOP
label_28a518:
    // 0x28a518: 0x34600  sll         $t0, $v1, 24
    ctx->pc = 0x28a518u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_28a51c:
    // 0x28a51c: 0x0  nop
    ctx->pc = 0x28a51cu;
    // NOP
label_28a520:
    // 0x28a520: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x28a520u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28a524:
    // 0x28a524: 0x0  nop
    ctx->pc = 0x28a524u;
    // NOP
label_28a528:
    // 0x28a528: 0x34700  sll         $t0, $v1, 28
    ctx->pc = 0x28a528u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 28));
label_28a52c:
    // 0x28a52c: 0x0  nop
    ctx->pc = 0x28a52cu;
    // NOP
label_28a530:
    // 0x28a530: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x28a530u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28a534:
    // 0x28a534: 0x0  nop
    ctx->pc = 0x28a534u;
    // NOP
label_28a538:
    // 0x28a538: 0x35100  sll         $t2, $v1, 4
    ctx->pc = 0x28a538u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_28a53c:
    // 0x28a53c: 0x0  nop
    ctx->pc = 0x28a53cu;
    // NOP
label_28a540:
    // 0x28a540: 0x0  nop
    ctx->pc = 0x28a540u;
    // NOP
label_28a544:
    // 0x28a544: 0x10  mfhi        $zero
    ctx->pc = 0x28a544u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_28a548:
    // 0x28a548: 0x5201  .word       0x00005201                   # INVALID     $zero, $zero, 0x5201 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28a548u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28A548 raw=0x00005201"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28a54c:
    // 0x28a54c: 0x0  nop
    ctx->pc = 0x28a54cu;
    // NOP
label_28a550:
    // 0x28a550: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28a550u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_28a554:
    // 0x28a554: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28a554u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_28a558:
    // 0x28a558: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28a558u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_28a55c:
    // 0x28a55c: 0x645f  .word       0x0000645F                   # ddivu       $t4, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28a55cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x28A55C raw=0x0000645F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28a560:
    // 0x28a560: 0x645a  .word       0x0000645A                   # div         $t4, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28a560u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_28a564:
    // 0x28a564: 0x645f4b  .word       0x00645F4B                   # movn        $t3, $v1, $a0 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28a564u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 3));
label_28a568:
    // 0x28a568: 0x645a3c  .word       0x00645A3C                   # dsll32      $t3, $a0, 8 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28a568u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 4) << (32 + 8));
label_28a56c:
    // 0x28a56c: 0x645f4b23  daddiu      $ra, $v0, 0x4B23
    ctx->pc = 0x28a56cu;
    SET_GPR_S64(ctx, 31, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)19235);
label_28a570:
    // 0x28a570: 0x64553214  daddiu      $s5, $v0, 0x3214
    ctx->pc = 0x28a570u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)12820);
label_28a574:
    // 0x28a574: 0x6441190a  daddiu      $at, $v0, 0x190A
    ctx->pc = 0x28a574u;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)6410);
label_28a578:
    // 0x28a578: 0x64320f05  daddiu      $s2, $at, 0xF05
    ctx->pc = 0x28a578u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)3845);
label_28a57c:
    // 0x28a57c: 0x64280f05  daddiu      $t0, $at, 0xF05
    ctx->pc = 0x28a57cu;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)3845);
label_28a580:
    // 0x28a580: 0x641e0f05  daddiu      $fp, $zero, 0xF05
    ctx->pc = 0x28a580u;
    SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)3845);
label_28a584:
    // 0x28a584: 0x0  nop
    ctx->pc = 0x28a584u;
    // NOP
label_28a588:
    // 0x28a588: 0x0  nop
    ctx->pc = 0x28a588u;
    // NOP
label_28a58c:
    // 0x28a58c: 0x0  nop
    ctx->pc = 0x28a58cu;
    // NOP
label_28a590:
    // 0x28a590: 0x5040402  .word       0x05040402                   # INVALID     $t0, $a0, 0x402 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x28a590u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x4 at 0x28A590 raw=0x05040402");
 /* MITIGATED */
label_28a594:
    // 0x28a594: 0x5040402  .word       0x05040402                   # INVALID     $t0, $a0, 0x402 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x28a594u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x4 at 0x28A594 raw=0x05040402");
 /* MITIGATED */
label_28a598:
    // 0x28a598: 0x4040202  .word       0x04040202                   # INVALID     $zero, $a0, 0x202 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x28a598u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x4 at 0x28A598 raw=0x04040202");
 /* MITIGATED */
label_28a59c:
    // 0x28a59c: 0x4040202  .word       0x04040202                   # INVALID     $zero, $a0, 0x202 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x28a59cu;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x4 at 0x28A59C raw=0x04040202");
 /* MITIGATED */
label_28a5a0:
    // 0x28a5a0: 0x3020101  .word       0x03020101                   # INVALID     $t8, $v0, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28a5a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28A5A0 raw=0x03020101"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28a5a4:
    // 0x28a5a4: 0x3020101  .word       0x03020101                   # INVALID     $t8, $v0, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28a5a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28A5A4 raw=0x03020101"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28a5a8:
    // 0x28a5a8: 0x3020101  .word       0x03020101                   # INVALID     $t8, $v0, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28a5a8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28A5A8 raw=0x03020101"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28a5ac:
    // 0x28a5ac: 0x3020101  .word       0x03020101                   # INVALID     $t8, $v0, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28a5acu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28A5AC raw=0x03020101"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28a5b0:
    // 0x28a5b0: 0x3020101  .word       0x03020101                   # INVALID     $t8, $v0, 0x101 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28a5b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x28A5B0 raw=0x03020101"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28a5b4:
    // 0x28a5b4: 0x0  nop
    ctx->pc = 0x28a5b4u;
    // NOP
label_28a5b8:
    // 0x28a5b8: 0x0  nop
    ctx->pc = 0x28a5b8u;
    // NOP
label_28a5bc:
    // 0x28a5bc: 0x0  nop
    ctx->pc = 0x28a5bcu;
    // NOP
label_28a5c0:
    // 0x28a5c0: 0x4a035002  vaddz       $vf0, $vf10, $vf3z
    ctx->pc = 0x28a5c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, 0); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], res, _mm_castsi128_ps(mask)); }
label_28a5c4:
    // 0x28a5c4: 0x34051904  ori         $a1, $zero, 0x1904
    ctx->pc = 0x28a5c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)6404);
label_28a5c8:
    // 0x28a5c8: 0x59300128  .word       0x59300128                   # blezl       $t1, . + 4 + (0x128 << 2) # 00100000 <InstrIdType: CPU_NORMAL>
label_28a5cc:
    if (ctx->pc == 0x28A5CCu) {
        ctx->pc = 0x28A5D0u;
        goto label_28a5d0;
    }
    ctx->pc = 0x28A5C8u;
    {
        const bool branch_taken_0x28a5c8 = (GPR_S32(ctx, 9) <= 0);
        if (branch_taken_0x28a5c8) {
            ctx->pc = 0x28AA6Cu;
            goto label_28aa6c;
        }
    }
    ctx->pc = 0x28A5D0u;
label_28a5d0:
    // 0x28a5d0: 0x0  nop
    ctx->pc = 0x28a5d0u;
    // NOP
label_28a5d4:
    // 0x28a5d4: 0x400  sll         $zero, $zero, 16
    ctx->pc = 0x28a5d4u;
    
label_28a5d8:
    // 0x28a5d8: 0x1c045703  .word       0x1C045703                   # bgtz        $zero, . + 4 + (0x5703 << 2) # 00040000 <InstrIdType: CPU_NORMAL>
label_28a5dc:
    if (ctx->pc == 0x28A5DCu) {
        ctx->pc = 0x28A5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A5D8u;
        // 0x28a5dc: 0x190c3b05  .word       0x190C3B05                   # blez        $t0, . + 4 + (0x3B05 << 2) # 000C0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x28A5DC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A5E0u;
        goto label_28a5e0;
    }
    ctx->pc = 0x28A5D8u;
    {
        const bool branch_taken_0x28a5d8 = (GPR_S32(ctx, 0) > 0);
        ctx->pc = 0x28A5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A5D8u;
        // 0x28a5dc: 0x190c3b05  .word       0x190C3B05                   # blez        $t0, . + 4 + (0x3B05 << 2) # 000C0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x28A5DC - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a5d8) {
            ctx->pc = 0x2A01E8u;
            return;
        }
    }
    ctx->pc = 0x28A5E0u;
label_28a5e0:
    // 0x28a5e0: 0x5a310128  .word       0x5A310128                   # blezl       $s1, . + 4 + (0x128 << 2) # 00110000 <InstrIdType: CPU_NORMAL>
label_28a5e4:
    if (ctx->pc == 0x28A5E4u) {
        ctx->pc = 0x28A5E8u;
        goto label_28a5e8;
    }
    ctx->pc = 0x28A5E0u;
    {
        const bool branch_taken_0x28a5e0 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x28a5e0) {
            ctx->pc = 0x28AA84u;
            goto label_28aa84;
        }
    }
    ctx->pc = 0x28A5E8u;
label_28a5e8:
    // 0x28a5e8: 0x0  nop
    ctx->pc = 0x28a5e8u;
    // NOP
label_28a5ec:
    // 0x28a5ec: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x28a5ecu;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28a5f0:
    // 0x28a5f0: 0x3a051d04  xori        $a1, $s0, 0x1D04
    ctx->pc = 0x28a5f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)7428);
label_28a5f4:
    // 0x28a5f4: 0x39093808  xori        $t1, $t0, 0x3808
    ctx->pc = 0x28a5f4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) ^ (uint64_t)(uint16_t)14344);
label_28a5f8:
    // 0x28a5f8: 0x5b32180c  .word       0x5B32180C                   # blezl       $t9, . + 4 + (0x180C << 2) # 00120000 <InstrIdType: CPU_NORMAL>
label_28a5fc:
    if (ctx->pc == 0x28A5FCu) {
        ctx->pc = 0x28A600u;
        goto label_28a600;
    }
    ctx->pc = 0x28A5F8u;
    {
        const bool branch_taken_0x28a5f8 = (GPR_S32(ctx, 25) <= 0);
        if (branch_taken_0x28a5f8) {
            ctx->pc = 0x29062Cu;
            { ctx->pc = 0x29062c; return; }
        }
    }
    ctx->pc = 0x28A600u;
label_28a600:
    // 0x28a600: 0x0  nop
    ctx->pc = 0x28a600u;
    // NOP
label_28a604:
    // 0x28a604: 0x0  nop
    ctx->pc = 0x28a604u;
    // NOP
label_28a608:
    // 0x28a608: 0x3c071a04  lui         $a3, 0x1A04
    ctx->pc = 0x28a608u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)6660 << 16));
label_28a60c:
    // 0x28a60c: 0x180b3809  .word       0x180B3809                   # blez        $zero, . + 4 + (0x3809 << 2) # 000B0000 <InstrIdType: CPU_NORMAL>
label_28a610:
    if (ctx->pc == 0x28A610u) {
        ctx->pc = 0x28A610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A60Cu;
        // 0x28a610: 0x5c330128  .word       0x5C330128                   # bgtzl       $at, . + 4 + (0x128 << 2) # 00130000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x28A610 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A614u;
        goto label_28a614;
    }
    ctx->pc = 0x28A60Cu;
    {
        const bool branch_taken_0x28a60c = (GPR_S32(ctx, 0) <= 0);
        ctx->pc = 0x28A610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A60Cu;
        // 0x28a610: 0x5c330128  .word       0x5C330128                   # bgtzl       $at, . + 4 + (0x128 << 2) # 00130000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x28A610 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a60c) {
            ctx->pc = 0x298634u;
            { ctx->pc = 0x298634; return; }
        }
    }
    ctx->pc = 0x28A614u;
label_28a614:
    // 0x28a614: 0x0  nop
    ctx->pc = 0x28a614u;
    // NOP
label_28a618:
    // 0x28a618: 0x0  nop
    ctx->pc = 0x28a618u;
    // NOP
label_28a61c:
    // 0x28a61c: 0x400  sll         $zero, $zero, 16
    ctx->pc = 0x28a61cu;
    
label_28a620:
    // 0x28a620: 0x1b045403  .word       0x1B045403                   # blez        $t8, . + 4 + (0x5403 << 2) # 00040000 <InstrIdType: CPU_NORMAL>
label_28a624:
    if (ctx->pc == 0x28A624u) {
        ctx->pc = 0x28A624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A620u;
        // 0x28a624: 0x1281c0c  .word       0x01281C0C                   # syscall     112 # 01280000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->pc = 0x28A628u;
        runtime->handleSyscall(rdram, ctx, 0x4A070u);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A628u;
        goto label_28a628;
    }
    ctx->pc = 0x28A620u;
    {
        const bool branch_taken_0x28a620 = (GPR_S32(ctx, 24) <= 0);
        ctx->pc = 0x28A624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A620u;
        // 0x28a624: 0x1281c0c  .word       0x01281C0C                   # syscall     112 # 01280000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->pc = 0x28A628u;
        runtime->handleSyscall(rdram, ctx, 0x4A070u);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a620) {
            ctx->pc = 0x29F630u;
            return;
        }
    }
    ctx->pc = 0x28A628u;
label_28a628:
    // 0x28a628: 0x5d340128  .word       0x5D340128                   # bgtzl       $t1, . + 4 + (0x128 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
label_28a62c:
    if (ctx->pc == 0x28A62Cu) {
        ctx->pc = 0x28A630u;
        goto label_28a630;
    }
    ctx->pc = 0x28A628u;
    {
        const bool branch_taken_0x28a628 = (GPR_S32(ctx, 9) > 0);
        if (branch_taken_0x28a628) {
            ctx->pc = 0x28AACCu;
            { ctx->pc = 0x28aacc; return; }
        }
    }
    ctx->pc = 0x28A630u;
label_28a630:
    // 0x28a630: 0x0  nop
    ctx->pc = 0x28a630u;
    // NOP
label_28a634:
    // 0x28a634: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x28a634u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28a638:
    // 0x28a638: 0x56035802  bnel        $s0, $v1, . + 4 + (0x5802 << 2)
label_28a63c:
    if (ctx->pc == 0x28A63Cu) {
        ctx->pc = 0x28A63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A638u;
        // 0x28a63c: 0x3a051c04  xori        $a1, $s0, 0x1C04 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)7172);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A640u;
        goto label_28a640;
    }
    ctx->pc = 0x28A638u;
    {
        const bool branch_taken_0x28a638 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x28a638) {
            ctx->pc = 0x28A63Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A638u;
            // 0x28a63c: 0x3a051c04  xori        $a1, $s0, 0x1C04 (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)7172);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A0644u;
            return;
        }
    }
    ctx->pc = 0x28A640u;
label_28a640:
    // 0x28a640: 0x5e351b0a  .word       0x5E351B0A                   # bgtzl       $s1, . + 4 + (0x1B0A << 2) # 00150000 <InstrIdType: CPU_NORMAL>
label_28a644:
    if (ctx->pc == 0x28A644u) {
        ctx->pc = 0x28A648u;
        goto label_28a648;
    }
    ctx->pc = 0x28A640u;
    {
        const bool branch_taken_0x28a640 = (GPR_S32(ctx, 17) > 0);
        if (branch_taken_0x28a640) {
            ctx->pc = 0x29126Cu;
            { ctx->pc = 0x29126c; return; }
        }
    }
    ctx->pc = 0x28A648u;
label_28a648:
    // 0x28a648: 0x0  nop
    ctx->pc = 0x28a648u;
    // NOP
label_28a64c:
    // 0x28a64c: 0x0  nop
    ctx->pc = 0x28a64cu;
    // NOP
label_28a650:
    // 0x28a650: 0x32051704  andi        $a1, $s0, 0x1704
    ctx->pc = 0x28a650u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)5892);
label_28a654:
    // 0x28a654: 0x1b0c190b  .word       0x1B0C190B                   # blez        $t8, . + 4 + (0x190B << 2) # 000C0000 <InstrIdType: CPU_NORMAL>
label_28a658:
    if (ctx->pc == 0x28A658u) {
        ctx->pc = 0x28A658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A654u;
        // 0x28a658: 0x5f360128  .word       0x5F360128                   # bgtzl       $t9, . + 4 + (0x128 << 2) # 00160000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x28A658 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A65Cu;
        goto label_28a65c;
    }
    ctx->pc = 0x28A654u;
    {
        const bool branch_taken_0x28a654 = (GPR_S32(ctx, 24) <= 0);
        ctx->pc = 0x28A658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A654u;
        // 0x28a658: 0x5f360128  .word       0x5F360128                   # bgtzl       $t9, . + 4 + (0x128 << 2) # 00160000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x28A658 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a654) {
            ctx->pc = 0x290A84u;
            { ctx->pc = 0x290a84; return; }
        }
    }
    ctx->pc = 0x28A65Cu;
label_28a65c:
    // 0x28a65c: 0x0  nop
    ctx->pc = 0x28a65cu;
    // NOP
label_28a660:
    // 0x28a660: 0x0  nop
    ctx->pc = 0x28a660u;
    // NOP
label_28a664:
    // 0x28a664: 0x400  sll         $zero, $zero, 16
    ctx->pc = 0x28a664u;
    
label_28a668:
    // 0x28a668: 0x4b021600  vaddx.x     $vf24, $vf2, $vf2x
    ctx->pc = 0x28a668u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[24] = _mm_blendv_ps(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
label_28a66c:
    // 0x28a66c: 0x1d0b2b05  .word       0x1D0B2B05                   # bgtz        $t0, . + 4 + (0x2B05 << 2) # 000B0000 <InstrIdType: CPU_NORMAL>
label_28a670:
    if (ctx->pc == 0x28A670u) {
        ctx->pc = 0x28A670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A66Cu;
        // 0x28a670: 0x60370128  daddi       $s7, $at, 0x128 (Delay Slot)
        { int64_t src = (int64_t)GPR_S64(ctx, 1); int64_t imm = (int64_t)(int32_t)296; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 23, res); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A674u;
        goto label_28a674;
    }
    ctx->pc = 0x28A66Cu;
    {
        const bool branch_taken_0x28a66c = (GPR_S32(ctx, 8) > 0);
        ctx->pc = 0x28A670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A66Cu;
        // 0x28a670: 0x60370128  daddi       $s7, $at, 0x128 (Delay Slot)
        { int64_t src = (int64_t)GPR_S64(ctx, 1); int64_t imm = (int64_t)(int32_t)296; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 23, res); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a66c) {
            ctx->pc = 0x295284u;
            { ctx->pc = 0x295284; return; }
        }
    }
    ctx->pc = 0x28A674u;
label_28a674:
    // 0x28a674: 0x0  nop
    ctx->pc = 0x28a674u;
    // NOP
label_28a678:
    // 0x28a678: 0x0  nop
    ctx->pc = 0x28a678u;
    // NOP
label_28a67c:
    // 0x28a67c: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x28a67cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28a680:
    // 0x28a680: 0x1a045103  .word       0x1A045103                   # blez        $s0, . + 4 + (0x5103 << 2) # 00040000 <InstrIdType: CPU_NORMAL>
label_28a684:
    if (ctx->pc == 0x28A684u) {
        ctx->pc = 0x28A684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A680u;
        // 0x28a684: 0x33083706  andi        $t0, $t8, 0x3706 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)14086);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A688u;
        goto label_28a688;
    }
    ctx->pc = 0x28A680u;
    {
        const bool branch_taken_0x28a680 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x28A684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A680u;
        // 0x28a684: 0x33083706  andi        $t0, $t8, 0x3706 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)14086);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a680) {
            ctx->pc = 0x29EA90u;
            return;
        }
    }
    ctx->pc = 0x28A688u;
label_28a688:
    // 0x28a688: 0x61380128  daddi       $t8, $t1, 0x128
    ctx->pc = 0x28a688u;
    { int64_t src = (int64_t)GPR_S64(ctx, 9); int64_t imm = (int64_t)(int32_t)296; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 24, res); }
label_28a68c:
    // 0x28a68c: 0x0  nop
    ctx->pc = 0x28a68cu;
    // NOP
label_28a690:
    // 0x28a690: 0x0  nop
    ctx->pc = 0x28a690u;
    // NOP
label_28a694:
    // 0x28a694: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x28a694u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28a698:
    // 0x28a698: 0x30054102  andi        $a1, $zero, 0x4102
    ctx->pc = 0x28a698u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)16642);
label_28a69c:
    // 0x28a69c: 0x1c0b1e0a  .word       0x1C0B1E0A                   # bgtz        $zero, . + 4 + (0x1E0A << 2) # 000B0000 <InstrIdType: CPU_NORMAL>
label_28a6a0:
    if (ctx->pc == 0x28A6A0u) {
        ctx->pc = 0x28A6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A69Cu;
        // 0x28a6a0: 0x62391e0c  daddi       $t9, $s1, 0x1E0C (Delay Slot)
        { int64_t src = (int64_t)GPR_S64(ctx, 17); int64_t imm = (int64_t)(int32_t)7692; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 25, res); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A6A4u;
        goto label_28a6a4;
    }
    ctx->pc = 0x28A69Cu;
    {
        const bool branch_taken_0x28a69c = (GPR_S32(ctx, 0) > 0);
        ctx->pc = 0x28A6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A69Cu;
        // 0x28a6a0: 0x62391e0c  daddi       $t9, $s1, 0x1E0C (Delay Slot)
        { int64_t src = (int64_t)GPR_S64(ctx, 17); int64_t imm = (int64_t)(int32_t)7692; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 25, res); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a69c) {
            ctx->pc = 0x291EC8u;
            { ctx->pc = 0x291ec8; return; }
        }
    }
    ctx->pc = 0x28A6A4u;
label_28a6a4:
    // 0x28a6a4: 0x0  nop
    ctx->pc = 0x28a6a4u;
    // NOP
label_28a6a8:
    // 0x28a6a8: 0x0  nop
    ctx->pc = 0x28a6a8u;
    // NOP
label_28a6ac:
    // 0x28a6ac: 0x0  nop
    ctx->pc = 0x28a6acu;
    // NOP
label_28a6b0:
    // 0x28a6b0: 0x16011600  bne         $s0, $at, . + 4 + (0x1600 << 2)
label_28a6b4:
    if (ctx->pc == 0x28A6B4u) {
        ctx->pc = 0x28A6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A6B0u;
        // 0x28a6b4: 0x37073705  ori         $a3, $t8, 0x3705 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 24) | (uint64_t)(uint16_t)14085);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A6B8u;
        goto label_28a6b8;
    }
    ctx->pc = 0x28A6B0u;
    {
        const bool branch_taken_0x28a6b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 1));
        ctx->pc = 0x28A6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A6B0u;
        // 0x28a6b4: 0x37073705  ori         $a3, $t8, 0x3705 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 24) | (uint64_t)(uint16_t)14085);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a6b0) {
            ctx->pc = 0x28FEB4u;
            { ctx->pc = 0x28feb4; return; }
        }
    }
    ctx->pc = 0x28A6B8u;
label_28a6b8:
    // 0x28a6b8: 0x633a3709  daddi       $k0, $t9, 0x3709
    ctx->pc = 0x28a6b8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 25); int64_t imm = (int64_t)(int32_t)14089; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 26, res); }
label_28a6bc:
    // 0x28a6bc: 0x0  nop
    ctx->pc = 0x28a6bcu;
    // NOP
label_28a6c0:
    // 0x28a6c0: 0x0  nop
    ctx->pc = 0x28a6c0u;
    // NOP
label_28a6c4:
    // 0x28a6c4: 0x400  sll         $zero, $zero, 16
    ctx->pc = 0x28a6c4u;
    
label_28a6c8:
    // 0x28a6c8: 0x34061804  ori         $a2, $zero, 0x1804
    ctx->pc = 0x28a6c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)6148);
label_28a6cc:
    // 0x28a6cc: 0x180b3008  .word       0x180B3008                   # blez        $zero, . + 4 + (0x3008 << 2) # 000B0000 <InstrIdType: CPU_NORMAL>
label_28a6d0:
    if (ctx->pc == 0x28A6D0u) {
        ctx->pc = 0x28A6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A6CCu;
        // 0x28a6d0: 0x643b0128  daddiu      $k1, $at, 0x128 (Delay Slot)
        SET_GPR_S64(ctx, 27, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)296);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A6D4u;
        goto label_28a6d4;
    }
    ctx->pc = 0x28A6CCu;
    {
        const bool branch_taken_0x28a6cc = (GPR_S32(ctx, 0) <= 0);
        ctx->pc = 0x28A6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A6CCu;
        // 0x28a6d0: 0x643b0128  daddiu      $k1, $at, 0x128 (Delay Slot)
        SET_GPR_S64(ctx, 27, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)296);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a6cc) {
            ctx->pc = 0x2966F0u;
            { ctx->pc = 0x2966f0; return; }
        }
    }
    ctx->pc = 0x28A6D4u;
label_28a6d4:
    // 0x28a6d4: 0x0  nop
    ctx->pc = 0x28a6d4u;
    // NOP
label_28a6d8:
    // 0x28a6d8: 0x0  nop
    ctx->pc = 0x28a6d8u;
    // NOP
label_28a6dc:
    // 0x28a6dc: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x28a6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28a6e0:
    // 0x28a6e0: 0x5a021801  .word       0x5A021801                   # blezl       $s0, . + 4 + (0x1801 << 2) # 00020000 <InstrIdType: CPU_NORMAL>
label_28a6e4:
    if (ctx->pc == 0x28A6E4u) {
        ctx->pc = 0x28A6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A6E0u;
        // 0x28a6e4: 0x1e045a03  .word       0x1E045A03                   # bgtz        $s0, . + 4 + (0x5A03 << 2) # 00040000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x28A6E4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A6E8u;
        goto label_28a6e8;
    }
    ctx->pc = 0x28A6E0u;
    {
        const bool branch_taken_0x28a6e0 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x28a6e0) {
            ctx->pc = 0x28A6E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A6E0u;
            // 0x28a6e4: 0x1e045a03  .word       0x1E045A03                   # bgtz        $s0, . + 4 + (0x5A03 << 2) # 00040000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x28A6E4 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2906E8u;
            { ctx->pc = 0x2906e8; return; }
        }
    }
    ctx->pc = 0x28A6E8u;
label_28a6e8:
    // 0x28a6e8: 0x653c3c05  daddiu      $gp, $t1, 0x3C05
    ctx->pc = 0x28a6e8u;
    SET_GPR_S64(ctx, 28, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)15365);
label_28a6ec:
    // 0x28a6ec: 0x0  nop
    ctx->pc = 0x28a6ecu;
    // NOP
label_28a6f0:
    // 0x28a6f0: 0x0  nop
    ctx->pc = 0x28a6f0u;
    // NOP
label_28a6f4:
    // 0x28a6f4: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x28a6f4u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28a6f8:
    // 0x28a6f8: 0x16011700  bne         $s0, $at, . + 4 + (0x1700 << 2)
label_28a6fc:
    if (ctx->pc == 0x28A6FCu) {
        ctx->pc = 0x28A6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A6F8u;
        // 0x28a6fc: 0x170a4203  bne         $t8, $t2, . + 4 + (0x4203 << 2) (Delay Slot)
        // Likely branch instruction at 0x28A6FC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A700u;
        goto label_28a700;
    }
    ctx->pc = 0x28A6F8u;
    {
        const bool branch_taken_0x28a6f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 1));
        ctx->pc = 0x28A6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A6F8u;
        // 0x28a6fc: 0x170a4203  bne         $t8, $t2, . + 4 + (0x4203 << 2) (Delay Slot)
        // Likely branch instruction at 0x28A6FC - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a6f8) {
            ctx->pc = 0x2902FCu;
            { ctx->pc = 0x2902fc; return; }
        }
    }
    ctx->pc = 0x28A700u;
label_28a700:
    // 0x28a700: 0x663d1e0b  daddiu      $sp, $s1, 0x1E0B
    ctx->pc = 0x28a700u;
    SET_GPR_S64(ctx, 29, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)7691);
label_28a704:
    // 0x28a704: 0x0  nop
    ctx->pc = 0x28a704u;
    // NOP
label_28a708:
    // 0x28a708: 0x0  nop
    ctx->pc = 0x28a708u;
    // NOP
label_28a70c:
    // 0x28a70c: 0x0  nop
    ctx->pc = 0x28a70cu;
    // NOP
label_28a710:
    // 0x28a710: 0x46021400  add.s       $f16, $f2, $f2
    ctx->pc = 0x28a710u;
    ctx->f[16] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_28a714:
    // 0x28a714: 0x34092c08  ori         $t1, $zero, 0x2C08
    ctx->pc = 0x28a714u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)11272);
label_28a718:
    // 0x28a718: 0x673e160a  daddiu      $fp, $t9, 0x160A
    ctx->pc = 0x28a718u;
    SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 25) + (int64_t)(int32_t)5642);
label_28a71c:
    // 0x28a71c: 0x0  nop
    ctx->pc = 0x28a71cu;
    // NOP
label_28a720:
    // 0x28a720: 0x0  nop
    ctx->pc = 0x28a720u;
    // NOP
label_28a724:
    // 0x28a724: 0x0  nop
    ctx->pc = 0x28a724u;
    // NOP
label_28a728:
    // 0x28a728: 0x44034c02  .word       0x44034C02                   # mfc1        $v1, $f9 # 00000402 <InstrIdType: R5900_COP1>
    ctx->pc = 0x28a728u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[9], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_28a72c:
    // 0x28a72c: 0x31051604  andi        $a1, $t0, 0x1604
    ctx->pc = 0x28a72cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)5636);
label_28a730:
    // 0x28a730: 0x683f0128  ldl         $ra, 0x128($at)
    ctx->pc = 0x28a730u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 296); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem << shift)); }
label_28a734:
    // 0x28a734: 0x0  nop
    ctx->pc = 0x28a734u;
    // NOP
label_28a738:
    // 0x28a738: 0x0  nop
    ctx->pc = 0x28a738u;
    // NOP
label_28a73c:
    // 0x28a73c: 0x400  sll         $zero, $zero, 16
    ctx->pc = 0x28a73cu;
    
label_28a740:
    // 0x28a740: 0x16044402  bne         $s0, $a0, . + 4 + (0x4402 << 2)
label_28a744:
    if (ctx->pc == 0x28A744u) {
        ctx->pc = 0x28A744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A740u;
        // 0x28a744: 0x32073106  andi        $a3, $s0, 0x3106 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)12550);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A748u;
        goto label_28a748;
    }
    ctx->pc = 0x28A740u;
    {
        const bool branch_taken_0x28a740 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        ctx->pc = 0x28A744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A740u;
        // 0x28a744: 0x32073106  andi        $a3, $s0, 0x3106 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)12550);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a740) {
            ctx->pc = 0x29B74Cu;
            return;
        }
    }
    ctx->pc = 0x28A748u;
label_28a748:
    // 0x28a748: 0x69401a0c  ldl         $zero, 0x1A0C($t2)
    ctx->pc = 0x28a748u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 6668); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem << shift)); }
label_28a74c:
    // 0x28a74c: 0x0  nop
    ctx->pc = 0x28a74cu;
    // NOP
label_28a750:
    // 0x28a750: 0x0  nop
    ctx->pc = 0x28a750u;
    // NOP
label_28a754:
    // 0x28a754: 0x0  nop
    ctx->pc = 0x28a754u;
    // NOP
label_28a758:
    // 0x28a758: 0x2d054603  sltiu       $a1, $t0, 0x4603
    ctx->pc = 0x28a758u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)17923) ? 1 : 0);
label_28a75c:
    // 0x28a75c: 0x128190b  .word       0x0128190B                   # movn        $v1, $t1, $t0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28a75cu;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 9));
label_28a760:
    // 0x28a760: 0x6a410128  ldl         $at, 0x128($s2)
    ctx->pc = 0x28a760u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 296); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem << shift)); }
label_28a764:
    // 0x28a764: 0x0  nop
    ctx->pc = 0x28a764u;
    // NOP
label_28a768:
    // 0x28a768: 0x0  nop
    ctx->pc = 0x28a768u;
    // NOP
label_28a76c:
    // 0x28a76c: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x28a76cu;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28a770:
    // 0x28a770: 0x4e021401  .word       0x4E021401                   # INVALID     $s0, $v0, 0x1401 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28a770u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x28A770 raw=0x4E021401");
 /* MITIGATED */
label_28a774:
    // 0x28a774: 0x33063605  andi        $a2, $t8, 0x3605
    ctx->pc = 0x28a774u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)13829);
label_28a778:
    // 0x28a778: 0x6b422e08  ldl         $v0, 0x2E08($k0)
    ctx->pc = 0x28a778u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 11784); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_28a77c:
    // 0x28a77c: 0x0  nop
    ctx->pc = 0x28a77cu;
    // NOP
label_28a780:
    // 0x28a780: 0x0  nop
    ctx->pc = 0x28a780u;
    // NOP
label_28a784:
    // 0x28a784: 0x0  nop
    ctx->pc = 0x28a784u;
    // NOP
label_28a788:
    // 0x28a788: 0x3c081501  lui         $t0, 0x1501
    ctx->pc = 0x28a788u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)5377 << 16));
label_28a78c:
    // 0x28a78c: 0x150b3c09  bne         $t0, $t3, . + 4 + (0x3C09 << 2)
label_28a790:
    if (ctx->pc == 0x28A790u) {
        ctx->pc = 0x28A790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A78Cu;
        // 0x28a790: 0x6c430128  ldr         $v1, 0x128($v0) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 2), 296); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A794u;
        goto label_28a794;
    }
    ctx->pc = 0x28A78Cu;
    {
        const bool branch_taken_0x28a78c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 11));
        ctx->pc = 0x28A790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A78Cu;
        // 0x28a790: 0x6c430128  ldr         $v1, 0x128($v0) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 2), 296); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a78c) {
            ctx->pc = 0x2997B4u;
            { ctx->pc = 0x2997b4; return; }
        }
    }
    ctx->pc = 0x28A794u;
label_28a794:
    // 0x28a794: 0x0  nop
    ctx->pc = 0x28a794u;
    // NOP
label_28a798:
    // 0x28a798: 0x0  nop
    ctx->pc = 0x28a798u;
    // NOP
label_28a79c:
    // 0x28a79c: 0x400  sll         $zero, $zero, 16
    ctx->pc = 0x28a79cu;
    
label_28a7a0:
    // 0x28a7a0: 0x2d051704  sltiu       $a1, $t0, 0x1704
    ctx->pc = 0x28a7a0u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)5892) ? 1 : 0);
label_28a7a4:
    // 0x28a7a4: 0x3a073c06  xori        $a3, $s0, 0x3C06
    ctx->pc = 0x28a7a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)15366);
label_28a7a8:
    // 0x28a7a8: 0x6d441a0b  ldr         $a0, 0x1A0B($t2)
    ctx->pc = 0x28a7a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 6667); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_28a7ac:
    // 0x28a7ac: 0x0  nop
    ctx->pc = 0x28a7acu;
    // NOP
label_28a7b0:
    // 0x28a7b0: 0x0  nop
    ctx->pc = 0x28a7b0u;
    // NOP
label_28a7b4:
    // 0x28a7b4: 0x0  nop
    ctx->pc = 0x28a7b4u;
    // NOP
label_28a7b8:
    // 0x28a7b8: 0x4e035402  .word       0x4E035402                   # INVALID     $s0, $v1, 0x5402 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28a7b8u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x28A7B8 raw=0x4E035402");
 /* MITIGATED */
label_28a7bc:
    // 0x28a7bc: 0x3b073a06  xori        $a3, $t8, 0x3A06
    ctx->pc = 0x28a7bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 24) ^ (uint64_t)(uint16_t)14854);
label_28a7c0:
    // 0x28a7c0: 0x6e450128  ldr         $a1, 0x128($s2)
    ctx->pc = 0x28a7c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 296); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_28a7c4:
    // 0x28a7c4: 0x0  nop
    ctx->pc = 0x28a7c4u;
    // NOP
label_28a7c8:
    // 0x28a7c8: 0x0  nop
    ctx->pc = 0x28a7c8u;
    // NOP
label_28a7cc:
    // 0x28a7cc: 0x400  sll         $zero, $zero, 16
    ctx->pc = 0x28a7ccu;
    
label_28a7d0:
    // 0x28a7d0: 0x19044c03  .word       0x19044C03                   # blez        $t0, . + 4 + (0x4C03 << 2) # 00040000 <InstrIdType: CPU_NORMAL>
label_28a7d4:
    if (ctx->pc == 0x28A7D4u) {
        ctx->pc = 0x28A7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A7D0u;
        // 0x28a7d4: 0x3a093a08  xori        $t1, $s0, 0x3A08 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)14856);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A7D8u;
        goto label_28a7d8;
    }
    ctx->pc = 0x28A7D0u;
    {
        const bool branch_taken_0x28a7d0 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x28A7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A7D0u;
        // 0x28a7d4: 0x3a093a08  xori        $t1, $s0, 0x3A08 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)14856);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a7d0) {
            ctx->pc = 0x29D7E0u;
            return;
        }
    }
    ctx->pc = 0x28A7D8u;
label_28a7d8:
    // 0x28a7d8: 0x6f46150b  ldr         $a2, 0x150B($k0)
    ctx->pc = 0x28a7d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 5387); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_28a7dc:
    // 0x28a7dc: 0x0  nop
    ctx->pc = 0x28a7dcu;
    // NOP
label_28a7e0:
    // 0x28a7e0: 0x0  nop
    ctx->pc = 0x28a7e0u;
    // NOP
label_28a7e4:
    // 0x28a7e4: 0x0  nop
    ctx->pc = 0x28a7e4u;
    // NOP
label_28a7e8:
    // 0x28a7e8: 0x32061c04  andi        $a2, $s0, 0x1C04
    ctx->pc = 0x28a7e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)7172);
label_28a7ec:
    // 0x28a7ec: 0x1d0b3708  .word       0x1D0B3708                   # bgtz        $t0, . + 4 + (0x3708 << 2) # 000B0000 <InstrIdType: CPU_NORMAL>
label_28a7f0:
    if (ctx->pc == 0x28A7F0u) {
        ctx->pc = 0x28A7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A7ECu;
        // 0x28a7f0: 0x70471a0c  .word       0x70471A0C                   # INVALID     $v0, $a3, 0x1A0C # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
// //         throw std::runtime_error("Unhandled MMI instruction: function 0xC at 0x28A7F0 raw=0x70471A0C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A7F4u;
        goto label_28a7f4;
    }
    ctx->pc = 0x28A7ECu;
    {
        const bool branch_taken_0x28a7ec = (GPR_S32(ctx, 8) > 0);
        ctx->pc = 0x28A7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A7ECu;
        // 0x28a7f0: 0x70471a0c  .word       0x70471A0C                   # INVALID     $v0, $a3, 0x1A0C # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
// //         throw std::runtime_error("Unhandled MMI instruction: function 0xC at 0x28A7F0 raw=0x70471A0C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a7ec) {
            ctx->pc = 0x298410u;
            { ctx->pc = 0x298410; return; }
        }
    }
    ctx->pc = 0x28A7F4u;
label_28a7f4:
    // 0x28a7f4: 0x0  nop
    ctx->pc = 0x28a7f4u;
    // NOP
label_28a7f8:
    // 0x28a7f8: 0x0  nop
    ctx->pc = 0x28a7f8u;
    // NOP
label_28a7fc:
    // 0x28a7fc: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x28a7fcu;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28a800:
    // 0x28a800: 0x36073505  ori         $a3, $s0, 0x3505
    ctx->pc = 0x28a800u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)13573);
label_28a804:
    // 0x28a804: 0x190c3609  .word       0x190C3609                   # blez        $t0, . + 4 + (0x3609 << 2) # 000C0000 <InstrIdType: CPU_NORMAL>
label_28a808:
    if (ctx->pc == 0x28A808u) {
        ctx->pc = 0x28A808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A804u;
        // 0x28a808: 0x71480128  padsbh      $zero, $t2, $t0 (Delay Slot)
        { __m128i rs = GPR_VEC(ctx, 10); __m128i rt = GPR_VEC(ctx, 8); 
           __m128i sub = _mm_sub_epi16(rs, rt); 
           __m128i add = _mm_add_epi16(rs, rt); 
           SET_GPR_VEC(ctx, 0, _mm_unpacklo_epi64(sub, _mm_unpackhi_epi64(add, add))); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A80Cu;
        goto label_28a80c;
    }
    ctx->pc = 0x28A804u;
    {
        const bool branch_taken_0x28a804 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x28A808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A804u;
        // 0x28a808: 0x71480128  padsbh      $zero, $t2, $t0 (Delay Slot)
        { __m128i rs = GPR_VEC(ctx, 10); __m128i rt = GPR_VEC(ctx, 8); 
           __m128i sub = _mm_sub_epi16(rs, rt); 
           __m128i add = _mm_add_epi16(rs, rt); 
           SET_GPR_VEC(ctx, 0, _mm_unpacklo_epi64(sub, _mm_unpackhi_epi64(add, add))); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a804) {
            ctx->pc = 0x29802Cu;
            { ctx->pc = 0x29802c; return; }
        }
    }
    ctx->pc = 0x28A80Cu;
label_28a80c:
    // 0x28a80c: 0x0  nop
    ctx->pc = 0x28a80cu;
    // NOP
label_28a810:
    // 0x28a810: 0x0  nop
    ctx->pc = 0x28a810u;
    // NOP
label_28a814:
    // 0x28a814: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x28a814u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28a818:
    // 0x28a818: 0x15011600  bne         $t0, $at, . + 4 + (0x1600 << 2)
label_28a81c:
    if (ctx->pc == 0x28A81Cu) {
        ctx->pc = 0x28A81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A818u;
        // 0x28a81c: 0x1a0a1904  .word       0x1A0A1904                   # blez        $s0, . + 4 + (0x1904 << 2) # 000A0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x28A81C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A820u;
        goto label_28a820;
    }
    ctx->pc = 0x28A818u;
    {
        const bool branch_taken_0x28a818 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 1));
        ctx->pc = 0x28A81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A818u;
        // 0x28a81c: 0x1a0a1904  .word       0x1A0A1904                   # blez        $s0, . + 4 + (0x1904 << 2) # 000A0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x28A81C - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a818) {
            ctx->pc = 0x29001Cu;
            { ctx->pc = 0x29001c; return; }
        }
    }
    ctx->pc = 0x28A820u;
label_28a820:
    // 0x28a820: 0x72491c0c  .word       0x72491C0C                   # INVALID     $s2, $t1, 0x1C0C # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x28a820u;
// //     throw std::runtime_error("Unhandled MMI instruction: function 0xC at 0x28A820 raw=0x72491C0C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28a824:
    // 0x28a824: 0x0  nop
    ctx->pc = 0x28a824u;
    // NOP
label_28a828:
    // 0x28a828: 0x0  nop
    ctx->pc = 0x28a828u;
    // NOP
label_28a82c:
    // 0x28a82c: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x28a82cu;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28a830:
    // 0x28a830: 0x17044a02  bne         $t8, $a0, . + 4 + (0x4A02 << 2)
label_28a834:
    if (ctx->pc == 0x28A834u) {
        ctx->pc = 0x28A834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A830u;
        // 0x28a834: 0x128190a  .word       0x0128190A                   # movz        $v1, $t1, $t0 # 00000100 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A838u;
        goto label_28a838;
    }
    ctx->pc = 0x28A830u;
    {
        const bool branch_taken_0x28a830 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 4));
        ctx->pc = 0x28A834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A830u;
        // 0x28a834: 0x128190a  .word       0x0128190A                   # movz        $v1, $t1, $t0 # 00000100 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a830) {
            ctx->pc = 0x29D03Cu;
            return;
        }
    }
    ctx->pc = 0x28A838u;
label_28a838:
    // 0x28a838: 0x734a0128  padsbh      $zero, $k0, $t2
    ctx->pc = 0x28a838u;
    { __m128i rs = GPR_VEC(ctx, 26); __m128i rt = GPR_VEC(ctx, 10); 
   __m128i sub = _mm_sub_epi16(rs, rt); 
   __m128i add = _mm_add_epi16(rs, rt); 
   SET_GPR_VEC(ctx, 0, _mm_unpacklo_epi64(sub, _mm_unpackhi_epi64(add, add))); }
label_28a83c:
    // 0x28a83c: 0x0  nop
    ctx->pc = 0x28a83cu;
    // NOP
label_28a840:
    // 0x28a840: 0x0  nop
    ctx->pc = 0x28a840u;
    // NOP
label_28a844:
    // 0x28a844: 0x800  sll         $at, $zero, 0
    ctx->pc = 0x28a844u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28a848:
    // 0x28a848: 0x2b044802  slti        $a0, $t8, 0x4802
    ctx->pc = 0x28a848u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 24) < (int64_t)(int32_t)18434) ? 1 : 0);
label_28a84c:
    // 0x28a84c: 0x1281b0b  .word       0x01281B0B                   # movn        $v1, $t1, $t0 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28a84cu;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 9));
label_28a850:
    // 0x28a850: 0x744b0128  .word       0x744B0128                   # INVALID     $v0, $t3, 0x128 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28a850u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x28A850 raw=0x744B0128");
 /* MITIGATED */
label_28a854:
    // 0x28a854: 0x0  nop
    ctx->pc = 0x28a854u;
    // NOP
label_28a858:
    // 0x28a858: 0x0  nop
    ctx->pc = 0x28a858u;
    // NOP
label_28a85c:
    // 0x28a85c: 0x400  sll         $zero, $zero, 16
    ctx->pc = 0x28a85cu;
    
label_28a860:
    // 0x28a860: 0x52021500  beql        $s0, $v0, . + 4 + (0x1500 << 2)
label_28a864:
    if (ctx->pc == 0x28A864u) {
        ctx->pc = 0x28A864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A860u;
        // 0x28a864: 0x180a1804  .word       0x180A1804                   # blez        $zero, . + 4 + (0x1804 << 2) # 000A0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x28A864 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A868u;
        goto label_28a868;
    }
    ctx->pc = 0x28A860u;
    {
        const bool branch_taken_0x28a860 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x28a860) {
            ctx->pc = 0x28A864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A860u;
            // 0x28a864: 0x180a1804  .word       0x180A1804                   # blez        $zero, . + 4 + (0x1804 << 2) # 000A0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x28A864 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x28FC64u;
            { ctx->pc = 0x28fc64; return; }
        }
    }
    ctx->pc = 0x28A868u;
label_28a868:
    // 0x28a868: 0x754c160b  .word       0x754C160B                   # INVALID     $t2, $t4, 0x160B # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28a868u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x28A868 raw=0x754C160B");
 /* MITIGATED */
label_28a86c:
    // 0x28a86c: 0x0  nop
    ctx->pc = 0x28a86cu;
    // NOP
label_28a870:
    // 0x28a870: 0x0  nop
    ctx->pc = 0x28a870u;
    // NOP
label_28a874:
    // 0x28a874: 0x0  nop
    ctx->pc = 0x28a874u;
    // NOP
label_28a878:
    // 0x28a878: 0x18041701  .word       0x18041701                   # blez        $zero, . + 4 + (0x1701 << 2) # 00040000 <InstrIdType: CPU_NORMAL>
label_28a87c:
    if (ctx->pc == 0x28A87Cu) {
        ctx->pc = 0x28A87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A878u;
        // 0x28a87c: 0x1d0c1b0b  .word       0x1D0C1B0B                   # bgtz        $t0, . + 4 + (0x1B0B << 2) # 000C0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x28A87C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A880u;
        goto label_28a880;
    }
    ctx->pc = 0x28A878u;
    {
        const bool branch_taken_0x28a878 = (GPR_S32(ctx, 0) <= 0);
        ctx->pc = 0x28A87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A878u;
        // 0x28a87c: 0x1d0c1b0b  .word       0x1D0C1B0B                   # bgtz        $t0, . + 4 + (0x1B0B << 2) # 000C0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x28A87C - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a878) {
            ctx->pc = 0x290480u;
            { ctx->pc = 0x290480; return; }
        }
    }
    ctx->pc = 0x28A880u;
label_28a880:
    // 0x28a880: 0x764d0128  .word       0x764D0128                   # INVALID     $s2, $t5, 0x128 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28a880u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x28A880 raw=0x764D0128");
 /* MITIGATED */
label_28a884:
    // 0x28a884: 0x0  nop
    ctx->pc = 0x28a884u;
    // NOP
label_28a888:
    // 0x28a888: 0x0  nop
    ctx->pc = 0x28a888u;
    // NOP
label_28a88c:
    // 0x28a88c: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x28a88cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28a890:
    // 0x28a890: 0x34051700  ori         $a1, $zero, 0x1700
    ctx->pc = 0x28a890u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)5888);
label_28a894:
    // 0x28a894: 0x32083206  andi        $t0, $s0, 0x3206
    ctx->pc = 0x28a894u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)12806);
label_28a898:
    // 0x28a898: 0x774e190b  .word       0x774E190B                   # INVALID     $k0, $t6, 0x190B # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28a898u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x28A898 raw=0x774E190B");
 /* MITIGATED */
label_28a89c:
    // 0x28a89c: 0x0  nop
    ctx->pc = 0x28a89cu;
    // NOP
label_28a8a0:
    // 0x28a8a0: 0x0  nop
    ctx->pc = 0x28a8a0u;
    // NOP
label_28a8a4:
    // 0x28a8a4: 0x0  nop
    ctx->pc = 0x28a8a4u;
    // NOP
label_28a8a8:
    // 0x28a8a8: 0x39055203  xori        $a1, $t0, 0x5203
    ctx->pc = 0x28a8a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) ^ (uint64_t)(uint16_t)20995);
label_28a8ac:
    // 0x28a8ac: 0x170b3408  bne         $t8, $t3, . + 4 + (0x3408 << 2)
label_28a8b0:
    if (ctx->pc == 0x28A8B0u) {
        ctx->pc = 0x28A8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A8ACu;
        // 0x28a8b0: 0x784f1b0c  lq          $t7, 0x1B0C($v0) (Delay Slot)
        SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 2), 6924)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A8B4u;
        goto label_28a8b4;
    }
    ctx->pc = 0x28A8ACu;
    {
        const bool branch_taken_0x28a8ac = (GPR_U64(ctx, 24) != GPR_U64(ctx, 11));
        ctx->pc = 0x28A8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A8ACu;
        // 0x28a8b0: 0x784f1b0c  lq          $t7, 0x1B0C($v0) (Delay Slot)
        SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 2), 6924)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a8ac) {
            ctx->pc = 0x2978D0u;
            { ctx->pc = 0x2978d0; return; }
        }
    }
    ctx->pc = 0x28A8B4u;
label_28a8b4:
    // 0x28a8b4: 0x0  nop
    ctx->pc = 0x28a8b4u;
    // NOP
label_28a8b8:
    // 0x28a8b8: 0x0  nop
    ctx->pc = 0x28a8b8u;
    // NOP
label_28a8bc:
    // 0x28a8bc: 0x0  nop
    ctx->pc = 0x28a8bcu;
    // NOP
label_28a8c0:
    // 0x28a8c0: 0x14011500  bne         $zero, $at, . + 4 + (0x1500 << 2)
label_28a8c4:
    if (ctx->pc == 0x28A8C4u) {
        ctx->pc = 0x28A8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A8C0u;
        // 0x28a8c4: 0x48035002  .word       0x48035002                   # INVALID     $zero, $v1, 0x5002 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT> (Delay Slot)
//         throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x28A8C4 raw=0x48035002");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A8C8u;
        goto label_28a8c8;
    }
    ctx->pc = 0x28A8C0u;
    {
        const bool branch_taken_0x28a8c0 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 1));
        ctx->pc = 0x28A8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A8C0u;
        // 0x28a8c4: 0x48035002  .word       0x48035002                   # INVALID     $zero, $v1, 0x5002 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT> (Delay Slot)
//         throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x28A8C4 raw=0x48035002");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a8c0) {
            ctx->pc = 0x28FCC4u;
            { ctx->pc = 0x28fcc4; return; }
        }
    }
    ctx->pc = 0x28A8C8u;
label_28a8c8:
    // 0x28a8c8: 0x79500128  lq          $s0, 0x128($t2)
    ctx->pc = 0x28a8c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 10), 296)));
label_28a8cc:
    // 0x28a8cc: 0x0  nop
    ctx->pc = 0x28a8ccu;
    // NOP
label_28a8d0:
    // 0x28a8d0: 0x0  nop
    ctx->pc = 0x28a8d0u;
    // NOP
label_28a8d4:
    // 0x28a8d4: 0x400  sll         $zero, $zero, 16
    ctx->pc = 0x28a8d4u;
    
label_28a8d8:
    // 0x28a8d8: 0x18041701  .word       0x18041701                   # blez        $zero, . + 4 + (0x1701 << 2) # 00040000 <InstrIdType: CPU_NORMAL>
label_28a8dc:
    if (ctx->pc == 0x28A8DCu) {
        ctx->pc = 0x28A8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A8D8u;
        // 0x28a8dc: 0x160b3805  bne         $s0, $t3, . + 4 + (0x3805 << 2) (Delay Slot)
        // Likely branch instruction at 0x28A8DC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A8E0u;
        goto label_28a8e0;
    }
    ctx->pc = 0x28A8D8u;
    {
        const bool branch_taken_0x28a8d8 = (GPR_S32(ctx, 0) <= 0);
        ctx->pc = 0x28A8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A8D8u;
        // 0x28a8dc: 0x160b3805  bne         $s0, $t3, . + 4 + (0x3805 << 2) (Delay Slot)
        // Likely branch instruction at 0x28A8DC - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a8d8) {
            ctx->pc = 0x2904E0u;
            { ctx->pc = 0x2904e0; return; }
        }
    }
    ctx->pc = 0x28A8E0u;
label_28a8e0:
    // 0x28a8e0: 0x7a510128  lq          $s1, 0x128($s2)
    ctx->pc = 0x28a8e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 18), 296)));
label_28a8e4:
    // 0x28a8e4: 0x0  nop
    ctx->pc = 0x28a8e4u;
    // NOP
label_28a8e8:
    // 0x28a8e8: 0x0  nop
    ctx->pc = 0x28a8e8u;
    // NOP
label_28a8ec:
    // 0x28a8ec: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x28a8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28a8f0:
    // 0x28a8f0: 0x16044203  bne         $s0, $a0, . + 4 + (0x4203 << 2)
label_28a8f4:
    if (ctx->pc == 0x28A8F4u) {
        ctx->pc = 0x28A8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A8F0u;
        // 0x28a8f4: 0x1c0b2e06  .word       0x1C0B2E06                   # bgtz        $zero, . + 4 + (0x2E06 << 2) # 000B0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x28A8F4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A8F8u;
        goto label_28a8f8;
    }
    ctx->pc = 0x28A8F0u;
    {
        const bool branch_taken_0x28a8f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        ctx->pc = 0x28A8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A8F0u;
        // 0x28a8f4: 0x1c0b2e06  .word       0x1C0B2E06                   # bgtz        $zero, . + 4 + (0x2E06 << 2) # 000B0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x28A8F4 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a8f0) {
            ctx->pc = 0x29B100u;
            { ctx->pc = 0x29b100; return; }
        }
    }
    ctx->pc = 0x28A8F8u;
label_28a8f8:
    // 0x28a8f8: 0x7b521d0c  lq          $s2, 0x1D0C($k0)
    ctx->pc = 0x28a8f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 26), 7436)));
label_28a8fc:
    // 0x28a8fc: 0x0  nop
    ctx->pc = 0x28a8fcu;
    // NOP
label_28a900:
    // 0x28a900: 0x0  nop
    ctx->pc = 0x28a900u;
    // NOP
label_28a904:
    // 0x28a904: 0x0  nop
    ctx->pc = 0x28a904u;
    // NOP
label_28a908:
    // 0x28a908: 0x1b045803  .word       0x1B045803                   # blez        $t8, . + 4 + (0x5803 << 2) # 00040000 <InstrIdType: CPU_NORMAL>
label_28a90c:
    if (ctx->pc == 0x28A90Cu) {
        ctx->pc = 0x28A90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A908u;
        // 0x28a90c: 0x36093608  ori         $t1, $s0, 0x3608 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)13832);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A910u;
        goto label_28a910;
    }
    ctx->pc = 0x28A908u;
    {
        const bool branch_taken_0x28a908 = (GPR_S32(ctx, 24) <= 0);
        ctx->pc = 0x28A90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A908u;
        // 0x28a90c: 0x36093608  ori         $t1, $s0, 0x3608 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)13832);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a908) {
            ctx->pc = 0x2A0918u;
            return;
        }
    }
    ctx->pc = 0x28A910u;
label_28a910:
    // 0x28a910: 0x7c530128  sq          $s3, 0x128($v0)
    ctx->pc = 0x28a910u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 296), GPR_VEC(ctx, 19));
label_28a914:
    // 0x28a914: 0x0  nop
    ctx->pc = 0x28a914u;
    // NOP
label_28a918:
    // 0x28a918: 0x0  nop
    ctx->pc = 0x28a918u;
    // NOP
label_28a91c:
    // 0x28a91c: 0x400  sll         $zero, $zero, 16
    ctx->pc = 0x28a91cu;
    
label_28a920:
    // 0x28a920: 0x34054802  ori         $a1, $zero, 0x4802
    ctx->pc = 0x28a920u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)18434);
label_28a924:
    // 0x28a924: 0x1a0b3407  .word       0x1A0B3407                   # blez        $s0, . + 4 + (0x3407 << 2) # 000B0000 <InstrIdType: CPU_NORMAL>
label_28a928:
    if (ctx->pc == 0x28A928u) {
        ctx->pc = 0x28A928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A924u;
        // 0x28a928: 0x7d540128  sq          $s4, 0x128($t2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 10), 296), GPR_VEC(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A92Cu;
        goto label_28a92c;
    }
    ctx->pc = 0x28A924u;
    {
        const bool branch_taken_0x28a924 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x28A928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A924u;
        // 0x28a928: 0x7d540128  sq          $s4, 0x128($t2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 10), 296), GPR_VEC(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a924) {
            ctx->pc = 0x297944u;
            { ctx->pc = 0x297944; return; }
        }
    }
    ctx->pc = 0x28A92Cu;
label_28a92c:
    // 0x28a92c: 0x0  nop
    ctx->pc = 0x28a92cu;
    // NOP
label_28a930:
    // 0x28a930: 0x0  nop
    ctx->pc = 0x28a930u;
    // NOP
label_28a934:
    // 0x28a934: 0x400  sll         $zero, $zero, 16
    ctx->pc = 0x28a934u;
    
label_28a938:
    // 0x28a938: 0x41034002  bc0tl       . + 4 + (0x4002 << 2)
label_28a93c:
    if (ctx->pc == 0x28A93Cu) {
        ctx->pc = 0x28A93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A938u;
        // 0x28a93c: 0x30051604  andi        $a1, $zero, 0x1604 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)5636);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A940u;
        goto label_28a940;
    }
    ctx->pc = 0x28A938u;
    {
        const bool branch_taken_0x28a938 = (false);
        ctx->pc = 0x28A93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A938u;
        // 0x28a93c: 0x30051604  andi        $a1, $zero, 0x1604 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)5636);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a938) {
            ctx->pc = 0x29A944u;
            { ctx->pc = 0x29a944; return; }
        }
    }
    ctx->pc = 0x28A940u;
label_28a940:
    // 0x28a940: 0x7e551d0a  sq          $s5, 0x1D0A($s2)
    ctx->pc = 0x28a940u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 7434), GPR_VEC(ctx, 21));
label_28a944:
    // 0x28a944: 0x0  nop
    ctx->pc = 0x28a944u;
    // NOP
label_28a948:
    // 0x28a948: 0x0  nop
    ctx->pc = 0x28a948u;
    // NOP
label_28a94c:
    // 0x28a94c: 0x0  nop
    ctx->pc = 0x28a94cu;
    // NOP
label_28a950:
    // 0x28a950: 0x2f051800  sltiu       $a1, $t8, 0x1800
    ctx->pc = 0x28a950u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)(int64_t)(int32_t)6144) ? 1 : 0);
label_28a954:
    // 0x28a954: 0x1e0c1c0a  .word       0x1E0C1C0A                   # bgtz        $s0, . + 4 + (0x1C0A << 2) # 000C0000 <InstrIdType: CPU_NORMAL>
label_28a958:
    if (ctx->pc == 0x28A958u) {
        ctx->pc = 0x28A958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A954u;
        // 0x28a958: 0x7f560128  sq          $s6, 0x128($k0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 26), 296), GPR_VEC(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A95Cu;
        goto label_28a95c;
    }
    ctx->pc = 0x28A954u;
    {
        const bool branch_taken_0x28a954 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x28A958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A954u;
        // 0x28a958: 0x7f560128  sq          $s6, 0x128($k0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 26), 296), GPR_VEC(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a954) {
            ctx->pc = 0x291980u;
            { ctx->pc = 0x291980; return; }
        }
    }
    ctx->pc = 0x28A95Cu;
label_28a95c:
    // 0x28a95c: 0x0  nop
    ctx->pc = 0x28a95cu;
    // NOP
label_28a960:
    // 0x28a960: 0x0  nop
    ctx->pc = 0x28a960u;
    // NOP
label_28a964:
    // 0x28a964: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x28a964u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28a968:
    // 0x28a968: 0x33051a04  andi        $a1, $t8, 0x1A04
    ctx->pc = 0x28a968u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)6660);
label_28a96c:
    // 0x28a96c: 0x180c170b  .word       0x180C170B                   # blez        $zero, . + 4 + (0x170B << 2) # 000C0000 <InstrIdType: CPU_NORMAL>
label_28a970:
    if (ctx->pc == 0x28A970u) {
        ctx->pc = 0x28A970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A96Cu;
        // 0x28a970: 0x80570128  lb          $s7, 0x128($v0) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 296)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A974u;
        goto label_28a974;
    }
    ctx->pc = 0x28A96Cu;
    {
        const bool branch_taken_0x28a96c = (GPR_S32(ctx, 0) <= 0);
        ctx->pc = 0x28A970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A96Cu;
        // 0x28a970: 0x80570128  lb          $s7, 0x128($v0) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a96c) {
            ctx->pc = 0x29059Cu;
            { ctx->pc = 0x29059c; return; }
        }
    }
    ctx->pc = 0x28A974u;
label_28a974:
    // 0x28a974: 0x0  nop
    ctx->pc = 0x28a974u;
    // NOP
label_28a978:
    // 0x28a978: 0x0  nop
    ctx->pc = 0x28a978u;
    // NOP
label_28a97c:
    // 0x28a97c: 0x400  sll         $zero, $zero, 16
    ctx->pc = 0x28a97cu;
    
label_28a980:
    // 0x28a980: 0x3e033e02  .word       0x3E033E02                   # lui         $v1, 0x3E02 # 02000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x28a980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15874 << 16));
label_28a984:
    // 0x28a984: 0x2e051504  sltiu       $a1, $s0, 0x1504
    ctx->pc = 0x28a984u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5380) ? 1 : 0);
label_28a988:
    // 0x28a988: 0x81580128  lb          $t8, 0x128($t2)
    ctx->pc = 0x28a988u;
    SET_GPR_S32(ctx, 24, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 296)));
label_28a98c:
    // 0x28a98c: 0x0  nop
    ctx->pc = 0x28a98cu;
    // NOP
label_28a990:
    // 0x28a990: 0x0  nop
    ctx->pc = 0x28a990u;
    // NOP
label_28a994:
    // 0x28a994: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x28a994u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28a998:
    // 0x28a998: 0x0  nop
    ctx->pc = 0x28a998u;
    // NOP
label_28a99c:
    // 0x28a99c: 0x0  nop
    ctx->pc = 0x28a99cu;
    // NOP
label_28a9a0:
    // 0x28a9a0: 0x4b034e02  vaddz.x     $vf24, $vf9, $vf3z
    ctx->pc = 0x28a9a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[24] = _mm_blendv_ps(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
label_28a9a4:
    // 0x28a9a4: 0x140c190b  bne         $zero, $t4, . + 4 + (0x190B << 2)
label_28a9a8:
    if (ctx->pc == 0x28A9A8u) {
        ctx->pc = 0x28A9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A9A4u;
        // 0x28a9a8: 0x82820128  lb          $v0, 0x128($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 296)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A9ACu;
        goto label_28a9ac;
    }
    ctx->pc = 0x28A9A4u;
    {
        const bool branch_taken_0x28a9a4 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 12));
        ctx->pc = 0x28A9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A9A4u;
        // 0x28a9a8: 0x82820128  lb          $v0, 0x128($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a9a4) {
            ctx->pc = 0x290DD4u;
            { ctx->pc = 0x290dd4; return; }
        }
    }
    ctx->pc = 0x28A9ACu;
label_28a9ac:
    // 0x28a9ac: 0x0  nop
    ctx->pc = 0x28a9acu;
    // NOP
label_28a9b0:
    // 0x28a9b0: 0x0  nop
    ctx->pc = 0x28a9b0u;
    // NOP
label_28a9b4:
    // 0x28a9b4: 0x4800  sll         $t1, $zero, 0
    ctx->pc = 0x28a9b4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28a9b8:
    // 0x28a9b8: 0x52021500  beql        $s0, $v0, . + 4 + (0x1500 << 2)
label_28a9bc:
    if (ctx->pc == 0x28A9BCu) {
        ctx->pc = 0x28A9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A9B8u;
        // 0x28a9bc: 0x190c3c05  .word       0x190C3C05                   # blez        $t0, . + 4 + (0x3C05 << 2) # 000C0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x28A9BC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A9C0u;
        goto label_28a9c0;
    }
    ctx->pc = 0x28A9B8u;
    {
        const bool branch_taken_0x28a9b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x28a9b8) {
            ctx->pc = 0x28A9BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A9B8u;
            // 0x28a9bc: 0x190c3c05  .word       0x190C3C05                   # blez        $t0, . + 4 + (0x3C05 << 2) # 000C0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x28A9BC - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x28FDBCu;
            { ctx->pc = 0x28fdbc; return; }
        }
    }
    ctx->pc = 0x28A9C0u;
label_28a9c0:
    // 0x28a9c0: 0x83830128  lb          $v1, 0x128($gp)
    ctx->pc = 0x28a9c0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 296)));
label_28a9c4:
    // 0x28a9c4: 0x0  nop
    ctx->pc = 0x28a9c4u;
    // NOP
label_28a9c8:
    // 0x28a9c8: 0x2000  sll         $a0, $zero, 0
    ctx->pc = 0x28a9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28a9cc:
    // 0x28a9cc: 0x4000  sll         $t0, $zero, 0
    ctx->pc = 0x28a9ccu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28a9d0:
    // 0x28a9d0: 0x51035302  beql        $t0, $v1, . + 4 + (0x5302 << 2)
label_28a9d4:
    if (ctx->pc == 0x28A9D4u) {
        ctx->pc = 0x28A9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A9D0u;
        // 0x28a9d4: 0x180c3a07  .word       0x180C3A07                   # blez        $zero, . + 4 + (0x3A07 << 2) # 000C0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x28A9D4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A9D8u;
        goto label_28a9d8;
    }
    ctx->pc = 0x28A9D0u;
    {
        const bool branch_taken_0x28a9d0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        if (branch_taken_0x28a9d0) {
            ctx->pc = 0x28A9D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A9D0u;
            // 0x28a9d4: 0x180c3a07  .word       0x180C3A07                   # blez        $zero, . + 4 + (0x3A07 << 2) # 000C0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x28A9D4 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x29F5DCu;
            return;
        }
    }
    ctx->pc = 0x28A9D8u;
label_28a9d8:
    // 0x28a9d8: 0x84840128  lh          $a0, 0x128($a0)
    ctx->pc = 0x28a9d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 296)));
label_28a9dc:
    // 0x28a9dc: 0x0  nop
    ctx->pc = 0x28a9dcu;
    // NOP
label_28a9e0:
    // 0x28a9e0: 0x0  nop
    ctx->pc = 0x28a9e0u;
    // NOP
label_28a9e4:
    // 0x28a9e4: 0x4400  sll         $t0, $zero, 16
    ctx->pc = 0x28a9e4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_28a9e8:
    // 0x28a9e8: 0x1c045203  .word       0x1C045203                   # bgtz        $zero, . + 4 + (0x5203 << 2) # 00040000 <InstrIdType: CPU_NORMAL>
label_28a9ec:
    if (ctx->pc == 0x28A9ECu) {
        ctx->pc = 0x28A9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A9E8u;
        // 0x28a9ec: 0x190b3708  .word       0x190B3708                   # blez        $t0, . + 4 + (0x3708 << 2) # 000B0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x28A9EC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28A9F0u;
        goto label_28a9f0;
    }
    ctx->pc = 0x28A9E8u;
    {
        const bool branch_taken_0x28a9e8 = (GPR_S32(ctx, 0) > 0);
        ctx->pc = 0x28A9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A9E8u;
        // 0x28a9ec: 0x190b3708  .word       0x190B3708                   # blez        $t0, . + 4 + (0x3708 << 2) # 000B0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x28A9EC - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a9e8) {
            ctx->pc = 0x29F1F8u;
            return;
        }
    }
    ctx->pc = 0x28A9F0u;
label_28a9f0:
    // 0x28a9f0: 0x85850128  lh          $a1, 0x128($t4)
    ctx->pc = 0x28a9f0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 296)));
label_28a9f4:
    // 0x28a9f4: 0x0  nop
    ctx->pc = 0x28a9f4u;
    // NOP
label_28a9f8:
    // 0x28a9f8: 0x0  nop
    ctx->pc = 0x28a9f8u;
    // NOP
label_28a9fc:
    // 0x28a9fc: 0x6000  sll         $t4, $zero, 0
    ctx->pc = 0x28a9fcu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28aa00:
    // 0x28aa00: 0x1c045a03  .word       0x1C045A03                   # bgtz        $zero, . + 4 + (0x5A03 << 2) # 00040000 <InstrIdType: CPU_NORMAL>
label_28aa04:
    if (ctx->pc == 0x28AA04u) {
        ctx->pc = 0x28AA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AA00u;
        // 0x28aa04: 0x32073405  andi        $a3, $s0, 0x3405 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)13317);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AA08u;
        goto label_28aa08;
    }
    ctx->pc = 0x28AA00u;
    {
        const bool branch_taken_0x28aa00 = (GPR_S32(ctx, 0) > 0);
        ctx->pc = 0x28AA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AA00u;
        // 0x28aa04: 0x32073405  andi        $a3, $s0, 0x3405 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)13317);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aa00) {
            ctx->pc = 0x2A1210u;
            return;
        }
    }
    ctx->pc = 0x28AA08u;
label_28aa08:
    // 0x28aa08: 0x86860128  lh          $a2, 0x128($s4)
    ctx->pc = 0x28aa08u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 296)));
label_28aa0c:
    // 0x28aa0c: 0x0  nop
    ctx->pc = 0x28aa0cu;
    // NOP
label_28aa10:
    // 0x28aa10: 0x4000  sll         $t0, $zero, 0
    ctx->pc = 0x28aa10u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28aa14:
    // 0x28aa14: 0x4000  sll         $t0, $zero, 0
    ctx->pc = 0x28aa14u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28aa18:
    // 0x28aa18: 0x52031800  beql        $s0, $v1, . + 4 + (0x1800 << 2)
label_28aa1c:
    if (ctx->pc == 0x28AA1Cu) {
        ctx->pc = 0x28AA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AA18u;
        // 0x28aa1c: 0x32073705  andi        $a3, $s0, 0x3705 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)14085);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AA20u;
        goto label_28aa20;
    }
    ctx->pc = 0x28AA18u;
    {
        const bool branch_taken_0x28aa18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x28aa18) {
            ctx->pc = 0x28AA1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28AA18u;
            // 0x28aa1c: 0x32073705  andi        $a3, $s0, 0x3705 (Delay Slot)
            SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)14085);
            ctx->in_delay_slot = false;
            ctx->pc = 0x290A1Cu;
            { ctx->pc = 0x290a1c; return; }
        }
    }
    ctx->pc = 0x28AA20u;
label_28aa20:
    // 0x28aa20: 0x87870e1a  lh          $a3, 0xE1A($gp)
    ctx->pc = 0x28aa20u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 3610)));
label_28aa24:
    // 0x28aa24: 0x0  nop
    ctx->pc = 0x28aa24u;
    // NOP
label_28aa28:
    // 0x28aa28: 0x0  nop
    ctx->pc = 0x28aa28u;
    // NOP
label_28aa2c:
    // 0x28aa2c: 0x4400  sll         $t0, $zero, 16
    ctx->pc = 0x28aa2cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_28aa30:
    // 0x28aa30: 0x52031700  beql        $s0, $v1, . + 4 + (0x1700 << 2)
label_28aa34:
    if (ctx->pc == 0x28AA34u) {
        ctx->pc = 0x28AA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AA30u;
        // 0x28aa34: 0x1c0b1904  .word       0x1C0B1904                   # bgtz        $zero, . + 4 + (0x1904 << 2) # 000B0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x28AA34 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AA38u;
        goto label_28aa38;
    }
    ctx->pc = 0x28AA30u;
    {
        const bool branch_taken_0x28aa30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x28aa30) {
            ctx->pc = 0x28AA34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28AA30u;
            // 0x28aa34: 0x1c0b1904  .word       0x1C0B1904                   # bgtz        $zero, . + 4 + (0x1904 << 2) # 000B0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x28AA34 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x290634u;
            { ctx->pc = 0x290634; return; }
        }
    }
    ctx->pc = 0x28AA38u;
label_28aa38:
    // 0x28aa38: 0x88880128  lwl         $t0, 0x128($a0)
    ctx->pc = 0x28aa38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 296); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 8) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 8, (int32_t)merged); }
label_28aa3c:
    // 0x28aa3c: 0x0  nop
    ctx->pc = 0x28aa3cu;
    // NOP
label_28aa40:
    // 0x28aa40: 0x0  nop
    ctx->pc = 0x28aa40u;
    // NOP
label_28aa44:
    // 0x28aa44: 0x6000  sll         $t4, $zero, 0
    ctx->pc = 0x28aa44u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28aa48:
    // 0x28aa48: 0x18045003  .word       0x18045003                   # blez        $zero, . + 4 + (0x5003 << 2) # 00040000 <InstrIdType: CPU_NORMAL>
label_28aa4c:
    if (ctx->pc == 0x28AA4Cu) {
        ctx->pc = 0x28AA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AA48u;
        // 0x28aa4c: 0x1e0b3707  .word       0x1E0B3707                   # bgtz        $s0, . + 4 + (0x3707 << 2) # 000B0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x28AA4C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AA50u;
        goto label_28aa50;
    }
    ctx->pc = 0x28AA48u;
    {
        const bool branch_taken_0x28aa48 = (GPR_S32(ctx, 0) <= 0);
        ctx->pc = 0x28AA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AA48u;
        // 0x28aa4c: 0x1e0b3707  .word       0x1E0B3707                   # bgtz        $s0, . + 4 + (0x3707 << 2) # 000B0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x28AA4C - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aa48) {
            ctx->pc = 0x29EA58u;
            return;
        }
    }
    ctx->pc = 0x28AA50u;
label_28aa50:
    // 0x28aa50: 0x89890128  lwl         $t1, 0x128($t4)
    ctx->pc = 0x28aa50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 296); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 9) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 9, (int32_t)merged); }
label_28aa54:
    // 0x28aa54: 0x0  nop
    ctx->pc = 0x28aa54u;
    // NOP
label_28aa58:
    // 0x28aa58: 0x0  nop
    ctx->pc = 0x28aa58u;
    // NOP
label_28aa5c:
    // 0x28aa5c: 0x6000  sll         $t4, $zero, 0
    ctx->pc = 0x28aa5cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28aa60:
    // 0x28aa60: 0x2e051600  sltiu       $a1, $s0, 0x1600
    ctx->pc = 0x28aa60u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5632) ? 1 : 0);
label_28aa64:
    // 0x28aa64: 0x1a0b3707  .word       0x1A0B3707                   # blez        $s0, . + 4 + (0x3707 << 2) # 000B0000 <InstrIdType: CPU_NORMAL>
label_28aa68:
    if (ctx->pc == 0x28AA68u) {
        ctx->pc = 0x28AA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AA64u;
        // 0x28aa68: 0x8a8a0128  lwl         $t2, 0x128($s4) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 20), 296); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 10) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 10, (int32_t)merged); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AA6Cu;
        goto label_28aa6c;
    }
    ctx->pc = 0x28AA64u;
    {
        const bool branch_taken_0x28aa64 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x28AA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AA64u;
        // 0x28aa68: 0x8a8a0128  lwl         $t2, 0x128($s4) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 20), 296); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 10) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 10, (int32_t)merged); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aa64) {
            ctx->pc = 0x298684u;
            { ctx->pc = 0x298684; return; }
        }
    }
    ctx->pc = 0x28AA6Cu;
label_28aa6c:
    // 0x28aa6c: 0x0  nop
    ctx->pc = 0x28aa6cu;
    // NOP
label_28aa70:
    // 0x28aa70: 0x10000000  b           . + 4 + (0x0 << 2)
label_28aa74:
    if (ctx->pc == 0x28AA74u) {
        ctx->pc = 0x28AA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AA70u;
        // 0x28aa74: 0x4000  sll         $t0, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AA78u;
        goto label_28aa78;
    }
    ctx->pc = 0x28AA70u;
    {
        const bool branch_taken_0x28aa70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AA70u;
        // 0x28aa74: 0x4000  sll         $t0, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aa70) {
            ctx->pc = 0x28AA74u;
            goto label_28aa74;
        }
    }
    ctx->pc = 0x28AA78u;
label_28aa78:
    // 0x28aa78: 0x48031501  .word       0x48031501                   # INVALID     $zero, $v1, 0x1501 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x28aa78u;
//     throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x28AA78 raw=0x48031501");
 /* MITIGATED */
label_28aa7c:
    // 0x28aa7c: 0x1e0b1904  .word       0x1E0B1904                   # bgtz        $s0, . + 4 + (0x1904 << 2) # 000B0000 <InstrIdType: CPU_NORMAL>
label_28aa80:
    if (ctx->pc == 0x28AA80u) {
        ctx->pc = 0x28AA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AA7Cu;
        // 0x28aa80: 0x8b8b0a0c  lwl         $t3, 0xA0C($gp) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 28), 2572); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 11) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 11, (int32_t)merged); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AA84u;
        goto label_28aa84;
    }
    ctx->pc = 0x28AA7Cu;
    {
        const bool branch_taken_0x28aa7c = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x28AA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AA7Cu;
        // 0x28aa80: 0x8b8b0a0c  lwl         $t3, 0xA0C($gp) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 28), 2572); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 11) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 11, (int32_t)merged); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aa7c) {
            ctx->pc = 0x290E90u;
            { ctx->pc = 0x290e90; return; }
        }
    }
    ctx->pc = 0x28AA84u;
label_28aa84:
    // 0x28aa84: 0x0  nop
    ctx->pc = 0x28aa84u;
    // NOP
label_28aa88:
    // 0x28aa88: 0x0  nop
    ctx->pc = 0x28aa88u;
    // NOP
label_28aa8c:
    // 0x28aa8c: 0x4400  sll         $t0, $zero, 16
    ctx->pc = 0x28aa8cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_28aa90:
    // 0x28aa90: 0x50031600  beql        $zero, $v1, . + 4 + (0x1600 << 2)
label_28aa94:
    if (ctx->pc == 0x28AA94u) {
        ctx->pc = 0x28AA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AA90u;
        // 0x28aa94: 0x160a1e04  bne         $s0, $t2, . + 4 + (0x1E04 << 2) (Delay Slot)
        // Likely branch instruction at 0x28AA94 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AA98u;
        goto label_28aa98;
    }
    ctx->pc = 0x28AA90u;
    {
        const bool branch_taken_0x28aa90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x28aa90) {
            ctx->pc = 0x28AA94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28AA90u;
            // 0x28aa94: 0x160a1e04  bne         $s0, $t2, . + 4 + (0x1E04 << 2) (Delay Slot)
            // Likely branch instruction at 0x28AA94 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x290294u;
            { ctx->pc = 0x290294; return; }
        }
    }
    ctx->pc = 0x28AA98u;
label_28aa98:
    // 0x28aa98: 0x8c8c190b  lw          $t4, 0x190B($a0)
    ctx->pc = 0x28aa98u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6411)));
label_28aa9c:
    // 0x28aa9c: 0x0  nop
    ctx->pc = 0x28aa9cu;
    // NOP
label_28aaa0:
    // 0x28aaa0: 0x0  nop
    ctx->pc = 0x28aaa0u;
    // NOP
label_28aaa4:
    // 0x28aaa4: 0x6000  sll         $t4, $zero, 0
    ctx->pc = 0x28aaa4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_28aaa8:
    // 0x28aaa8: 0x33055603  andi        $a1, $t8, 0x5603
    ctx->pc = 0x28aaa8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)22019);
label_28aaac:
    // 0x28aaac: 0x180b3a07  .word       0x180B3A07                   # blez        $zero, . + 4 + (0x3A07 << 2) # 000B0000 <InstrIdType: CPU_NORMAL>
label_28aab0:
    if (ctx->pc == 0x28AAB0u) {
        ctx->pc = 0x28AAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AAACu;
        // 0x28aab0: 0x8d8d0128  lw          $t5, 0x128($t4) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 296)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AAB4u;
        goto label_28aab4;
    }
    ctx->pc = 0x28AAACu;
    {
        const bool branch_taken_0x28aaac = (GPR_S32(ctx, 0) <= 0);
        ctx->pc = 0x28AAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AAACu;
        // 0x28aab0: 0x8d8d0128  lw          $t5, 0x128($t4) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aaac) {
            ctx->pc = 0x2992CCu;
            { ctx->pc = 0x2992cc; return; }
        }
    }
    ctx->pc = 0x28AAB4u;
label_28aab4:
    // 0x28aab4: 0x0  nop
    ctx->pc = 0x28aab4u;
    // NOP
label_28aab8:
    // 0x28aab8: 0x0  nop
    ctx->pc = 0x28aab8u;
    // NOP
label_28aabc:
    // 0x28aabc: 0x4080  sll         $t0, $zero, 2
    ctx->pc = 0x28aabcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_28aac0:
    // 0x28aac0: 0x5a035a02  .word       0x5A035A02                   # blezl       $s0, . + 4 + (0x5A02 << 2) # 00030000 <InstrIdType: CPU_NORMAL>
label_28aac4:
    if (ctx->pc == 0x28AAC4u) {
        ctx->pc = 0x28AAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AAC0u;
        // 0x28aac4: 0x1e0b1e04  .word       0x1E0B1E04                   # bgtz        $s0, . + 4 + (0x1E04 << 2) # 000B0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x28AAC4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AAC8u;
        { ctx->pc = 0x28aac8; return; }
    }
    ctx->pc = 0x28AAC0u;
    {
        const bool branch_taken_0x28aac0 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x28aac0) {
            ctx->pc = 0x28AAC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28AAC0u;
            // 0x28aac4: 0x1e0b1e04  .word       0x1E0B1E04                   # bgtz        $s0, . + 4 + (0x1E04 << 2) # 000B0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x28AAC4 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A12CCu;
            return;
        }
    }
    ctx->pc = 0x28AAC8u;
    ctx->pc = 0x28aac8u;
    return;
}

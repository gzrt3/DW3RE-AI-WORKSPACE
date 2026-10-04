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


void FUN_0014eba0_part90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x17a2f0u: goto label_17a2f0;
        case 0x17a2f4u: goto label_17a2f4;
        case 0x17a2f8u: goto label_17a2f8;
        case 0x17a2fcu: goto label_17a2fc;
        case 0x17a300u: goto label_17a300;
        case 0x17a304u: goto label_17a304;
        case 0x17a308u: goto label_17a308;
        case 0x17a30cu: goto label_17a30c;
        case 0x17a310u: goto label_17a310;
        case 0x17a314u: goto label_17a314;
        case 0x17a318u: goto label_17a318;
        case 0x17a31cu: goto label_17a31c;
        case 0x17a320u: goto label_17a320;
        case 0x17a324u: goto label_17a324;
        case 0x17a328u: goto label_17a328;
        case 0x17a32cu: goto label_17a32c;
        case 0x17a330u: goto label_17a330;
        case 0x17a334u: goto label_17a334;
        case 0x17a338u: goto label_17a338;
        case 0x17a33cu: goto label_17a33c;
        case 0x17a340u: goto label_17a340;
        case 0x17a344u: goto label_17a344;
        case 0x17a348u: goto label_17a348;
        case 0x17a34cu: goto label_17a34c;
        case 0x17a350u: goto label_17a350;
        case 0x17a354u: goto label_17a354;
        case 0x17a358u: goto label_17a358;
        case 0x17a35cu: goto label_17a35c;
        case 0x17a360u: goto label_17a360;
        case 0x17a364u: goto label_17a364;
        case 0x17a368u: goto label_17a368;
        case 0x17a36cu: goto label_17a36c;
        case 0x17a370u: goto label_17a370;
        case 0x17a374u: goto label_17a374;
        case 0x17a378u: goto label_17a378;
        case 0x17a37cu: goto label_17a37c;
        case 0x17a380u: goto label_17a380;
        case 0x17a384u: goto label_17a384;
        case 0x17a388u: goto label_17a388;
        case 0x17a38cu: goto label_17a38c;
        case 0x17a390u: goto label_17a390;
        case 0x17a394u: goto label_17a394;
        case 0x17a398u: goto label_17a398;
        case 0x17a39cu: goto label_17a39c;
        case 0x17a3a0u: goto label_17a3a0;
        case 0x17a3a4u: goto label_17a3a4;
        case 0x17a3a8u: goto label_17a3a8;
        case 0x17a3acu: goto label_17a3ac;
        case 0x17a3b0u: goto label_17a3b0;
        case 0x17a3b4u: goto label_17a3b4;
        case 0x17a3b8u: goto label_17a3b8;
        case 0x17a3bcu: goto label_17a3bc;
        case 0x17a3c0u: goto label_17a3c0;
        case 0x17a3c4u: goto label_17a3c4;
        case 0x17a3c8u: goto label_17a3c8;
        case 0x17a3ccu: goto label_17a3cc;
        case 0x17a3d0u: goto label_17a3d0;
        case 0x17a3d4u: goto label_17a3d4;
        case 0x17a3d8u: goto label_17a3d8;
        case 0x17a3dcu: goto label_17a3dc;
        case 0x17a3e0u: goto label_17a3e0;
        case 0x17a3e4u: goto label_17a3e4;
        case 0x17a3e8u: goto label_17a3e8;
        case 0x17a3ecu: goto label_17a3ec;
        case 0x17a3f0u: goto label_17a3f0;
        case 0x17a3f4u: goto label_17a3f4;
        case 0x17a3f8u: goto label_17a3f8;
        case 0x17a3fcu: goto label_17a3fc;
        case 0x17a400u: goto label_17a400;
        case 0x17a404u: goto label_17a404;
        case 0x17a408u: goto label_17a408;
        case 0x17a40cu: goto label_17a40c;
        case 0x17a410u: goto label_17a410;
        case 0x17a414u: goto label_17a414;
        case 0x17a418u: goto label_17a418;
        case 0x17a41cu: goto label_17a41c;
        case 0x17a420u: goto label_17a420;
        case 0x17a424u: goto label_17a424;
        case 0x17a428u: goto label_17a428;
        case 0x17a42cu: goto label_17a42c;
        case 0x17a430u: goto label_17a430;
        case 0x17a434u: goto label_17a434;
        case 0x17a438u: goto label_17a438;
        case 0x17a43cu: goto label_17a43c;
        case 0x17a440u: goto label_17a440;
        case 0x17a444u: goto label_17a444;
        case 0x17a448u: goto label_17a448;
        case 0x17a44cu: goto label_17a44c;
        case 0x17a450u: goto label_17a450;
        case 0x17a454u: goto label_17a454;
        case 0x17a458u: goto label_17a458;
        case 0x17a45cu: goto label_17a45c;
        case 0x17a460u: goto label_17a460;
        case 0x17a464u: goto label_17a464;
        case 0x17a468u: goto label_17a468;
        case 0x17a46cu: goto label_17a46c;
        case 0x17a470u: goto label_17a470;
        case 0x17a474u: goto label_17a474;
        case 0x17a478u: goto label_17a478;
        case 0x17a47cu: goto label_17a47c;
        case 0x17a480u: goto label_17a480;
        case 0x17a484u: goto label_17a484;
        case 0x17a488u: goto label_17a488;
        case 0x17a48cu: goto label_17a48c;
        case 0x17a490u: goto label_17a490;
        case 0x17a494u: goto label_17a494;
        case 0x17a498u: goto label_17a498;
        case 0x17a49cu: goto label_17a49c;
        case 0x17a4a0u: goto label_17a4a0;
        case 0x17a4a4u: goto label_17a4a4;
        case 0x17a4a8u: goto label_17a4a8;
        case 0x17a4acu: goto label_17a4ac;
        case 0x17a4b0u: goto label_17a4b0;
        case 0x17a4b4u: goto label_17a4b4;
        case 0x17a4b8u: goto label_17a4b8;
        case 0x17a4bcu: goto label_17a4bc;
        case 0x17a4c0u: goto label_17a4c0;
        case 0x17a4c4u: goto label_17a4c4;
        case 0x17a4c8u: goto label_17a4c8;
        case 0x17a4ccu: goto label_17a4cc;
        case 0x17a4d0u: goto label_17a4d0;
        case 0x17a4d4u: goto label_17a4d4;
        case 0x17a4d8u: goto label_17a4d8;
        case 0x17a4dcu: goto label_17a4dc;
        case 0x17a4e0u: goto label_17a4e0;
        case 0x17a4e4u: goto label_17a4e4;
        case 0x17a4e8u: goto label_17a4e8;
        case 0x17a4ecu: goto label_17a4ec;
        case 0x17a4f0u: goto label_17a4f0;
        case 0x17a4f4u: goto label_17a4f4;
        case 0x17a4f8u: goto label_17a4f8;
        case 0x17a4fcu: goto label_17a4fc;
        case 0x17a500u: goto label_17a500;
        case 0x17a504u: goto label_17a504;
        case 0x17a508u: goto label_17a508;
        case 0x17a50cu: goto label_17a50c;
        case 0x17a510u: goto label_17a510;
        case 0x17a514u: goto label_17a514;
        case 0x17a518u: goto label_17a518;
        case 0x17a51cu: goto label_17a51c;
        case 0x17a520u: goto label_17a520;
        case 0x17a524u: goto label_17a524;
        case 0x17a528u: goto label_17a528;
        case 0x17a52cu: goto label_17a52c;
        case 0x17a530u: goto label_17a530;
        case 0x17a534u: goto label_17a534;
        case 0x17a538u: goto label_17a538;
        case 0x17a53cu: goto label_17a53c;
        case 0x17a540u: goto label_17a540;
        case 0x17a544u: goto label_17a544;
        case 0x17a548u: goto label_17a548;
        case 0x17a54cu: goto label_17a54c;
        case 0x17a550u: goto label_17a550;
        case 0x17a554u: goto label_17a554;
        case 0x17a558u: goto label_17a558;
        case 0x17a55cu: goto label_17a55c;
        case 0x17a560u: goto label_17a560;
        case 0x17a564u: goto label_17a564;
        case 0x17a568u: goto label_17a568;
        case 0x17a56cu: goto label_17a56c;
        case 0x17a570u: goto label_17a570;
        case 0x17a574u: goto label_17a574;
        case 0x17a578u: goto label_17a578;
        case 0x17a57cu: goto label_17a57c;
        case 0x17a580u: goto label_17a580;
        case 0x17a584u: goto label_17a584;
        case 0x17a588u: goto label_17a588;
        case 0x17a58cu: goto label_17a58c;
        case 0x17a590u: goto label_17a590;
        case 0x17a594u: goto label_17a594;
        case 0x17a598u: goto label_17a598;
        case 0x17a59cu: goto label_17a59c;
        case 0x17a5a0u: goto label_17a5a0;
        case 0x17a5a4u: goto label_17a5a4;
        case 0x17a5a8u: goto label_17a5a8;
        case 0x17a5acu: goto label_17a5ac;
        case 0x17a5b0u: goto label_17a5b0;
        case 0x17a5b4u: goto label_17a5b4;
        case 0x17a5b8u: goto label_17a5b8;
        case 0x17a5bcu: goto label_17a5bc;
        case 0x17a5c0u: goto label_17a5c0;
        case 0x17a5c4u: goto label_17a5c4;
        case 0x17a5c8u: goto label_17a5c8;
        case 0x17a5ccu: goto label_17a5cc;
        case 0x17a5d0u: goto label_17a5d0;
        case 0x17a5d4u: goto label_17a5d4;
        case 0x17a5d8u: goto label_17a5d8;
        case 0x17a5dcu: goto label_17a5dc;
        case 0x17a5e0u: goto label_17a5e0;
        case 0x17a5e4u: goto label_17a5e4;
        case 0x17a5e8u: goto label_17a5e8;
        case 0x17a5ecu: goto label_17a5ec;
        case 0x17a5f0u: goto label_17a5f0;
        case 0x17a5f4u: goto label_17a5f4;
        case 0x17a5f8u: goto label_17a5f8;
        case 0x17a5fcu: goto label_17a5fc;
        case 0x17a600u: goto label_17a600;
        case 0x17a604u: goto label_17a604;
        case 0x17a608u: goto label_17a608;
        case 0x17a60cu: goto label_17a60c;
        case 0x17a610u: goto label_17a610;
        case 0x17a614u: goto label_17a614;
        case 0x17a618u: goto label_17a618;
        case 0x17a61cu: goto label_17a61c;
        case 0x17a620u: goto label_17a620;
        case 0x17a624u: goto label_17a624;
        case 0x17a628u: goto label_17a628;
        case 0x17a62cu: goto label_17a62c;
        case 0x17a630u: goto label_17a630;
        case 0x17a634u: goto label_17a634;
        case 0x17a638u: goto label_17a638;
        case 0x17a63cu: goto label_17a63c;
        case 0x17a640u: goto label_17a640;
        case 0x17a644u: goto label_17a644;
        case 0x17a648u: goto label_17a648;
        case 0x17a64cu: goto label_17a64c;
        case 0x17a650u: goto label_17a650;
        case 0x17a654u: goto label_17a654;
        case 0x17a658u: goto label_17a658;
        case 0x17a65cu: goto label_17a65c;
        case 0x17a660u: goto label_17a660;
        case 0x17a664u: goto label_17a664;
        case 0x17a668u: goto label_17a668;
        case 0x17a66cu: goto label_17a66c;
        case 0x17a670u: goto label_17a670;
        case 0x17a674u: goto label_17a674;
        case 0x17a678u: goto label_17a678;
        case 0x17a67cu: goto label_17a67c;
        case 0x17a680u: goto label_17a680;
        case 0x17a684u: goto label_17a684;
        case 0x17a688u: goto label_17a688;
        case 0x17a68cu: goto label_17a68c;
        case 0x17a690u: goto label_17a690;
        case 0x17a694u: goto label_17a694;
        case 0x17a698u: goto label_17a698;
        case 0x17a69cu: goto label_17a69c;
        case 0x17a6a0u: goto label_17a6a0;
        case 0x17a6a4u: goto label_17a6a4;
        case 0x17a6a8u: goto label_17a6a8;
        case 0x17a6acu: goto label_17a6ac;
        case 0x17a6b0u: goto label_17a6b0;
        case 0x17a6b4u: goto label_17a6b4;
        case 0x17a6b8u: goto label_17a6b8;
        case 0x17a6bcu: goto label_17a6bc;
        case 0x17a6c0u: goto label_17a6c0;
        case 0x17a6c4u: goto label_17a6c4;
        case 0x17a6c8u: goto label_17a6c8;
        case 0x17a6ccu: goto label_17a6cc;
        case 0x17a6d0u: goto label_17a6d0;
        case 0x17a6d4u: goto label_17a6d4;
        case 0x17a6d8u: goto label_17a6d8;
        case 0x17a6dcu: goto label_17a6dc;
        case 0x17a6e0u: goto label_17a6e0;
        case 0x17a6e4u: goto label_17a6e4;
        case 0x17a6e8u: goto label_17a6e8;
        case 0x17a6ecu: goto label_17a6ec;
        case 0x17a6f0u: goto label_17a6f0;
        case 0x17a6f4u: goto label_17a6f4;
        case 0x17a6f8u: goto label_17a6f8;
        case 0x17a6fcu: goto label_17a6fc;
        case 0x17a700u: goto label_17a700;
        case 0x17a704u: goto label_17a704;
        case 0x17a708u: goto label_17a708;
        case 0x17a70cu: goto label_17a70c;
        case 0x17a710u: goto label_17a710;
        case 0x17a714u: goto label_17a714;
        case 0x17a718u: goto label_17a718;
        case 0x17a71cu: goto label_17a71c;
        case 0x17a720u: goto label_17a720;
        case 0x17a724u: goto label_17a724;
        case 0x17a728u: goto label_17a728;
        case 0x17a72cu: goto label_17a72c;
        case 0x17a730u: goto label_17a730;
        case 0x17a734u: goto label_17a734;
        case 0x17a738u: goto label_17a738;
        case 0x17a73cu: goto label_17a73c;
        case 0x17a740u: goto label_17a740;
        case 0x17a744u: goto label_17a744;
        case 0x17a748u: goto label_17a748;
        case 0x17a74cu: goto label_17a74c;
        case 0x17a750u: goto label_17a750;
        case 0x17a754u: goto label_17a754;
        case 0x17a758u: goto label_17a758;
        case 0x17a75cu: goto label_17a75c;
        case 0x17a760u: goto label_17a760;
        case 0x17a764u: goto label_17a764;
        case 0x17a768u: goto label_17a768;
        case 0x17a76cu: goto label_17a76c;
        case 0x17a770u: goto label_17a770;
        case 0x17a774u: goto label_17a774;
        case 0x17a778u: goto label_17a778;
        case 0x17a77cu: goto label_17a77c;
        case 0x17a780u: goto label_17a780;
        case 0x17a784u: goto label_17a784;
        case 0x17a788u: goto label_17a788;
        case 0x17a78cu: goto label_17a78c;
        case 0x17a790u: goto label_17a790;
        case 0x17a794u: goto label_17a794;
        case 0x17a798u: goto label_17a798;
        case 0x17a79cu: goto label_17a79c;
        case 0x17a7a0u: goto label_17a7a0;
        case 0x17a7a4u: goto label_17a7a4;
        case 0x17a7a8u: goto label_17a7a8;
        case 0x17a7acu: goto label_17a7ac;
        case 0x17a7b0u: goto label_17a7b0;
        case 0x17a7b4u: goto label_17a7b4;
        case 0x17a7b8u: goto label_17a7b8;
        case 0x17a7bcu: goto label_17a7bc;
        case 0x17a7c0u: goto label_17a7c0;
        case 0x17a7c4u: goto label_17a7c4;
        case 0x17a7c8u: goto label_17a7c8;
        case 0x17a7ccu: goto label_17a7cc;
        case 0x17a7d0u: goto label_17a7d0;
        case 0x17a7d4u: goto label_17a7d4;
        case 0x17a7d8u: goto label_17a7d8;
        case 0x17a7dcu: goto label_17a7dc;
        case 0x17a7e0u: goto label_17a7e0;
        case 0x17a7e4u: goto label_17a7e4;
        case 0x17a7e8u: goto label_17a7e8;
        case 0x17a7ecu: goto label_17a7ec;
        case 0x17a7f0u: goto label_17a7f0;
        case 0x17a7f4u: goto label_17a7f4;
        case 0x17a7f8u: goto label_17a7f8;
        case 0x17a7fcu: goto label_17a7fc;
        case 0x17a800u: goto label_17a800;
        case 0x17a804u: goto label_17a804;
        case 0x17a808u: goto label_17a808;
        case 0x17a80cu: goto label_17a80c;
        case 0x17a810u: goto label_17a810;
        case 0x17a814u: goto label_17a814;
        case 0x17a818u: goto label_17a818;
        case 0x17a81cu: goto label_17a81c;
        case 0x17a820u: goto label_17a820;
        case 0x17a824u: goto label_17a824;
        case 0x17a828u: goto label_17a828;
        case 0x17a82cu: goto label_17a82c;
        case 0x17a830u: goto label_17a830;
        case 0x17a834u: goto label_17a834;
        case 0x17a838u: goto label_17a838;
        case 0x17a83cu: goto label_17a83c;
        case 0x17a840u: goto label_17a840;
        case 0x17a844u: goto label_17a844;
        case 0x17a848u: goto label_17a848;
        case 0x17a84cu: goto label_17a84c;
        case 0x17a850u: goto label_17a850;
        case 0x17a854u: goto label_17a854;
        case 0x17a858u: goto label_17a858;
        case 0x17a85cu: goto label_17a85c;
        case 0x17a860u: goto label_17a860;
        case 0x17a864u: goto label_17a864;
        case 0x17a868u: goto label_17a868;
        case 0x17a86cu: goto label_17a86c;
        case 0x17a870u: goto label_17a870;
        case 0x17a874u: goto label_17a874;
        case 0x17a878u: goto label_17a878;
        case 0x17a87cu: goto label_17a87c;
        case 0x17a880u: goto label_17a880;
        case 0x17a884u: goto label_17a884;
        case 0x17a888u: goto label_17a888;
        case 0x17a88cu: goto label_17a88c;
        case 0x17a890u: goto label_17a890;
        case 0x17a894u: goto label_17a894;
        case 0x17a898u: goto label_17a898;
        case 0x17a89cu: goto label_17a89c;
        case 0x17a8a0u: goto label_17a8a0;
        case 0x17a8a4u: goto label_17a8a4;
        case 0x17a8a8u: goto label_17a8a8;
        case 0x17a8acu: goto label_17a8ac;
        case 0x17a8b0u: goto label_17a8b0;
        case 0x17a8b4u: goto label_17a8b4;
        case 0x17a8b8u: goto label_17a8b8;
        case 0x17a8bcu: goto label_17a8bc;
        case 0x17a8c0u: goto label_17a8c0;
        case 0x17a8c4u: goto label_17a8c4;
        case 0x17a8c8u: goto label_17a8c8;
        case 0x17a8ccu: goto label_17a8cc;
        case 0x17a8d0u: goto label_17a8d0;
        case 0x17a8d4u: goto label_17a8d4;
        case 0x17a8d8u: goto label_17a8d8;
        case 0x17a8dcu: goto label_17a8dc;
        case 0x17a8e0u: goto label_17a8e0;
        case 0x17a8e4u: goto label_17a8e4;
        case 0x17a8e8u: goto label_17a8e8;
        case 0x17a8ecu: goto label_17a8ec;
        case 0x17a8f0u: goto label_17a8f0;
        case 0x17a8f4u: goto label_17a8f4;
        case 0x17a8f8u: goto label_17a8f8;
        case 0x17a8fcu: goto label_17a8fc;
        case 0x17a900u: goto label_17a900;
        case 0x17a904u: goto label_17a904;
        case 0x17a908u: goto label_17a908;
        case 0x17a90cu: goto label_17a90c;
        case 0x17a910u: goto label_17a910;
        case 0x17a914u: goto label_17a914;
        case 0x17a918u: goto label_17a918;
        case 0x17a91cu: goto label_17a91c;
        case 0x17a920u: goto label_17a920;
        case 0x17a924u: goto label_17a924;
        case 0x17a928u: goto label_17a928;
        case 0x17a92cu: goto label_17a92c;
        case 0x17a930u: goto label_17a930;
        case 0x17a934u: goto label_17a934;
        case 0x17a938u: goto label_17a938;
        case 0x17a93cu: goto label_17a93c;
        case 0x17a940u: goto label_17a940;
        case 0x17a944u: goto label_17a944;
        case 0x17a948u: goto label_17a948;
        case 0x17a94cu: goto label_17a94c;
        case 0x17a950u: goto label_17a950;
        case 0x17a954u: goto label_17a954;
        case 0x17a958u: goto label_17a958;
        case 0x17a95cu: goto label_17a95c;
        case 0x17a960u: goto label_17a960;
        case 0x17a964u: goto label_17a964;
        case 0x17a968u: goto label_17a968;
        case 0x17a96cu: goto label_17a96c;
        case 0x17a970u: goto label_17a970;
        case 0x17a974u: goto label_17a974;
        case 0x17a978u: goto label_17a978;
        case 0x17a97cu: goto label_17a97c;
        case 0x17a980u: goto label_17a980;
        case 0x17a984u: goto label_17a984;
        case 0x17a988u: goto label_17a988;
        case 0x17a98cu: goto label_17a98c;
        case 0x17a990u: goto label_17a990;
        case 0x17a994u: goto label_17a994;
        case 0x17a998u: goto label_17a998;
        case 0x17a99cu: goto label_17a99c;
        case 0x17a9a0u: goto label_17a9a0;
        case 0x17a9a4u: goto label_17a9a4;
        case 0x17a9a8u: goto label_17a9a8;
        case 0x17a9acu: goto label_17a9ac;
        case 0x17a9b0u: goto label_17a9b0;
        case 0x17a9b4u: goto label_17a9b4;
        case 0x17a9b8u: goto label_17a9b8;
        case 0x17a9bcu: goto label_17a9bc;
        case 0x17a9c0u: goto label_17a9c0;
        case 0x17a9c4u: goto label_17a9c4;
        case 0x17a9c8u: goto label_17a9c8;
        case 0x17a9ccu: goto label_17a9cc;
        case 0x17a9d0u: goto label_17a9d0;
        case 0x17a9d4u: goto label_17a9d4;
        case 0x17a9d8u: goto label_17a9d8;
        case 0x17a9dcu: goto label_17a9dc;
        case 0x17a9e0u: goto label_17a9e0;
        case 0x17a9e4u: goto label_17a9e4;
        case 0x17a9e8u: goto label_17a9e8;
        case 0x17a9ecu: goto label_17a9ec;
        case 0x17a9f0u: goto label_17a9f0;
        case 0x17a9f4u: goto label_17a9f4;
        case 0x17a9f8u: goto label_17a9f8;
        case 0x17a9fcu: goto label_17a9fc;
        case 0x17aa00u: goto label_17aa00;
        case 0x17aa04u: goto label_17aa04;
        case 0x17aa08u: goto label_17aa08;
        case 0x17aa0cu: goto label_17aa0c;
        case 0x17aa10u: goto label_17aa10;
        case 0x17aa14u: goto label_17aa14;
        case 0x17aa18u: goto label_17aa18;
        case 0x17aa1cu: goto label_17aa1c;
        case 0x17aa20u: goto label_17aa20;
        case 0x17aa24u: goto label_17aa24;
        case 0x17aa28u: goto label_17aa28;
        case 0x17aa2cu: goto label_17aa2c;
        case 0x17aa30u: goto label_17aa30;
        case 0x17aa34u: goto label_17aa34;
        case 0x17aa38u: goto label_17aa38;
        case 0x17aa3cu: goto label_17aa3c;
        case 0x17aa40u: goto label_17aa40;
        case 0x17aa44u: goto label_17aa44;
        case 0x17aa48u: goto label_17aa48;
        case 0x17aa4cu: goto label_17aa4c;
        case 0x17aa50u: goto label_17aa50;
        case 0x17aa54u: goto label_17aa54;
        case 0x17aa58u: goto label_17aa58;
        case 0x17aa5cu: goto label_17aa5c;
        case 0x17aa60u: goto label_17aa60;
        case 0x17aa64u: goto label_17aa64;
        case 0x17aa68u: goto label_17aa68;
        case 0x17aa6cu: goto label_17aa6c;
        case 0x17aa70u: goto label_17aa70;
        case 0x17aa74u: goto label_17aa74;
        case 0x17aa78u: goto label_17aa78;
        case 0x17aa7cu: goto label_17aa7c;
        case 0x17aa80u: goto label_17aa80;
        case 0x17aa84u: goto label_17aa84;
        case 0x17aa88u: goto label_17aa88;
        case 0x17aa8cu: goto label_17aa8c;
        case 0x17aa90u: goto label_17aa90;
        case 0x17aa94u: goto label_17aa94;
        case 0x17aa98u: goto label_17aa98;
        case 0x17aa9cu: goto label_17aa9c;
        case 0x17aaa0u: goto label_17aaa0;
        case 0x17aaa4u: goto label_17aaa4;
        case 0x17aaa8u: goto label_17aaa8;
        case 0x17aaacu: goto label_17aaac;
        case 0x17aab0u: goto label_17aab0;
        case 0x17aab4u: goto label_17aab4;
        case 0x17aab8u: goto label_17aab8;
        case 0x17aabcu: goto label_17aabc;
        default: return;
    }

label_17a2f0:
    // 0x17a2f0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17a2f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a2f4:
    // 0x17a2f4: 0xc066c72  jal         func_19B1C8
label_17a2f8:
    if (ctx->pc == 0x17A2F8u) {
        ctx->pc = 0x17A2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A2F4u;
        // 0x17a2f8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A2FCu;
        goto label_17a2fc;
    }
    ctx->pc = 0x17A2F4u;
    SET_GPR_U32(ctx, 31, 0x17A2FCu);
    ctx->pc = 0x17A2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A2F4u;
    // 0x17a2f8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    { ctx->pc = 0x19b1c8; return; }
    ctx->pc = 0x17A2FCu;
label_17a2fc:
    // 0x17a2fc: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x17a2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_17a300:
    // 0x17a300: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x17a300u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_17a304:
    // 0x17a304: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x17a304u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_17a308:
    // 0x17a308: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x17a308u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_17a30c:
    // 0x17a30c: 0x0  nop
    ctx->pc = 0x17a30cu;
    // NOP
label_17a310:
    // 0x17a310: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x17a310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_17a314:
    // 0x17a314: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x17a314u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_17a318:
    // 0x17a318: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
label_17a31c:
    if (ctx->pc == 0x17A31Cu) {
        ctx->pc = 0x17A320u;
        goto label_17a320;
    }
    ctx->pc = 0x17A318u;
    {
        const bool branch_taken_0x17a318 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17a318) {
            ctx->pc = 0x17A2DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x17a2dc; return; }
        }
    }
    ctx->pc = 0x17A320u;
label_17a320:
    // 0x17a320: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x17a320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_17a324:
    // 0x17a324: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x17a324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_17a328:
    // 0x17a328: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_17a32c:
    if (ctx->pc == 0x17A32Cu) {
        ctx->pc = 0x17A330u;
        goto label_17a330;
    }
    ctx->pc = 0x17A328u;
    {
        const bool branch_taken_0x17a328 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x17a328) {
            ctx->pc = 0x17A338u;
            goto label_17a338;
        }
    }
    ctx->pc = 0x17A330u;
label_17a330:
    // 0x17a330: 0x1000ffe1  b           . + 4 + (-0x1F << 2)
label_17a334:
    if (ctx->pc == 0x17A334u) {
        ctx->pc = 0x17A334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A330u;
        // 0x17a334: 0x94a021  addu        $s4, $a0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A338u;
        goto label_17a338;
    }
    ctx->pc = 0x17A330u;
    {
        const bool branch_taken_0x17a330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A330u;
        // 0x17a334: 0x94a021  addu        $s4, $a0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a330) {
            ctx->pc = 0x17A2B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x17a2b8; return; }
        }
    }
    ctx->pc = 0x17A338u;
label_17a338:
    // 0x17a338: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x17a338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_17a33c:
    // 0x17a33c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x17a33cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_17a340:
    // 0x17a340: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17a340u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_17a344:
    // 0x17a344: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17a344u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17a348:
    // 0x17a348: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17a348u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17a34c:
    // 0x17a34c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17a34cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17a350:
    // 0x17a350: 0x3e00008  jr          $ra
label_17a354:
    if (ctx->pc == 0x17A354u) {
        ctx->pc = 0x17A354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A350u;
        // 0x17a354: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A358u;
        goto label_17a358;
    }
    ctx->pc = 0x17A350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A350u;
        // 0x17a354: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A358u;
label_17a358:
    // 0x17a358: 0x0  nop
    ctx->pc = 0x17a358u;
    // NOP
label_17a35c:
    // 0x17a35c: 0x0  nop
    ctx->pc = 0x17a35cu;
    // NOP
label_17a360:
    // 0x17a360: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17a360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_17a364:
    // 0x17a364: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x17a364u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_17a368:
    // 0x17a368: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17a368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_17a36c:
    // 0x17a36c: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x17a36cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_17a370:
    // 0x17a370: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17a370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_17a374:
    // 0x17a374: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x17a374u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_17a378:
    // 0x17a378: 0x8f828444  lw          $v0, -0x7BBC($gp)
    ctx->pc = 0x17a378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935620)));
label_17a37c:
    // 0x17a37c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x17a37cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_17a380:
    // 0x17a380: 0xc066d0a  jal         func_19B428
label_17a384:
    if (ctx->pc == 0x17A384u) {
        ctx->pc = 0x17A384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A380u;
        // 0x17a384: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A388u;
        goto label_17a388;
    }
    ctx->pc = 0x17A380u;
    SET_GPR_U32(ctx, 31, 0x17A388u);
    ctx->pc = 0x17A384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A380u;
    // 0x17a384: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B428u;
    { ctx->pc = 0x19b428; return; }
    ctx->pc = 0x17A388u;
label_17a388:
    // 0x17a388: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x17a388u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
label_17a38c:
    // 0x17a38c: 0x3c036c05  lui         $v1, 0x6C05
    ctx->pc = 0x17a38cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27653 << 16));
label_17a390:
    // 0x17a390: 0x34840005  ori         $a0, $a0, 0x5
    ctx->pc = 0x17a390u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)5);
label_17a394:
    // 0x17a394: 0x34658000  ori         $a1, $v1, 0x8000
    ctx->pc = 0x17a394u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_17a398:
    // 0x17a398: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x17a398u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_17a39c:
    // 0x17a39c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x17a39cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_17a3a0:
    // 0x17a3a0: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x17a3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
label_17a3a4:
    // 0x17a3a4: 0x34640001  ori         $a0, $v1, 0x1
    ctx->pc = 0x17a3a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_17a3a8:
    // 0x17a3a8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x17a3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_17a3ac:
    // 0x17a3ac: 0x3c031400  lui         $v1, 0x1400
    ctx->pc = 0x17a3acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5120 << 16));
label_17a3b0:
    // 0x17a3b0: 0xac45000c  sw          $a1, 0xC($v0)
    ctx->pc = 0x17a3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
label_17a3b4:
    // 0x17a3b4: 0xfc400010  sd          $zero, 0x10($v0)
    ctx->pc = 0x17a3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 0));
label_17a3b8:
    // 0x17a3b8: 0xfc400018  sd          $zero, 0x18($v0)
    ctx->pc = 0x17a3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 0));
label_17a3bc:
    // 0x17a3bc: 0xac440010  sw          $a0, 0x10($v0)
    ctx->pc = 0x17a3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 4));
label_17a3c0:
    // 0x17a3c0: 0xfc400020  sd          $zero, 0x20($v0)
    ctx->pc = 0x17a3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 32), GPR_U64(ctx, 0));
label_17a3c4:
    // 0x17a3c4: 0xfc400028  sd          $zero, 0x28($v0)
    ctx->pc = 0x17a3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 40), GPR_U64(ctx, 0));
label_17a3c8:
    // 0x17a3c8: 0x8f858410  lw          $a1, -0x7BF0($gp)
    ctx->pc = 0x17a3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935568)));
label_17a3cc:
    // 0x17a3cc: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x17a3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_17a3d0:
    // 0x17a3d0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x17a3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_17a3d4:
    // 0x17a3d4: 0x24840400  addiu       $a0, $a0, 0x400
    ctx->pc = 0x17a3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1024));
label_17a3d8:
    // 0x17a3d8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x17a3d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_17a3dc:
    // 0x17a3dc: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x17a3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
label_17a3e0:
    // 0x17a3e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17a3e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17a3e4:
    // 0x17a3e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17a3e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17a3e8:
    // 0x17a3e8: 0x3e00008  jr          $ra
label_17a3ec:
    if (ctx->pc == 0x17A3ECu) {
        ctx->pc = 0x17A3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A3E8u;
        // 0x17a3ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A3F0u;
        goto label_17a3f0;
    }
    ctx->pc = 0x17A3E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A3E8u;
        // 0x17a3ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A3E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A3F0u;
label_17a3f0:
    // 0x17a3f0: 0x11000006  beqz        $t0, . + 4 + (0x6 << 2)
label_17a3f4:
    if (ctx->pc == 0x17A3F4u) {
        ctx->pc = 0x17A3F8u;
        goto label_17a3f8;
    }
    ctx->pc = 0x17A3F0u;
    {
        const bool branch_taken_0x17a3f0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a3f0) {
            ctx->pc = 0x17A40Cu;
            goto label_17a40c;
        }
    }
    ctx->pc = 0x17A3F8u;
label_17a3f8:
    // 0x17a3f8: 0xace00020  sw          $zero, 0x20($a3)
    ctx->pc = 0x17a3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 0));
label_17a3fc:
    // 0x17a3fc: 0xace00024  sw          $zero, 0x24($a3)
    ctx->pc = 0x17a3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 0));
label_17a400:
    // 0x17a400: 0xace00028  sw          $zero, 0x28($a3)
    ctx->pc = 0x17a400u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 0));
label_17a404:
    // 0x17a404: 0x10000089  b           . + 4 + (0x89 << 2)
label_17a408:
    if (ctx->pc == 0x17A408u) {
        ctx->pc = 0x17A408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A404u;
        // 0x17a408: 0xace0002c  sw          $zero, 0x2C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A40Cu;
        goto label_17a40c;
    }
    ctx->pc = 0x17A404u;
    {
        const bool branch_taken_0x17a404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A404u;
        // 0x17a408: 0xace0002c  sw          $zero, 0x2C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a404) {
            ctx->pc = 0x17A62Cu;
            goto label_17a62c;
        }
    }
    ctx->pc = 0x17A40Cu;
label_17a40c:
    // 0x17a40c: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x17a40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_17a410:
    // 0x17a410: 0xc4c00020  lwc1        $f0, 0x20($a2)
    ctx->pc = 0x17a410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17a414:
    // 0x17a414: 0x8cc8000c  lw          $t0, 0xC($a2)
    ctx->pc = 0x17a414u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_17a418:
    // 0x17a418: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x17a418u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_17a41c:
    // 0x17a41c: 0xe4e00028  swc1        $f0, 0x28($a3)
    ctx->pc = 0x17a41cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 40), bits); }
label_17a420:
    // 0x17a420: 0xa82023  subu        $a0, $a1, $t0
    ctx->pc = 0x17a420u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_17a424:
    // 0x17a424: 0xc4c00024  lwc1        $f0, 0x24($a2)
    ctx->pc = 0x17a424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17a428:
    // 0x17a428: 0xe4e0002c  swc1        $f0, 0x2C($a3)
    ctx->pc = 0x17a428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 44), bits); }
label_17a42c:
    // 0x17a42c: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x17a42cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_17a430:
    // 0x17a430: 0x30a50002  andi        $a1, $a1, 0x2
    ctx->pc = 0x17a430u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
label_17a434:
    // 0x17a434: 0x10a0003e  beqz        $a1, . + 4 + (0x3E << 2)
label_17a438:
    if (ctx->pc == 0x17A438u) {
        ctx->pc = 0x17A43Cu;
        goto label_17a43c;
    }
    ctx->pc = 0x17A434u;
    {
        const bool branch_taken_0x17a434 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a434) {
            ctx->pc = 0x17A530u;
            goto label_17a530;
        }
    }
    ctx->pc = 0x17A43Cu;
label_17a43c:
    // 0x17a43c: 0x8cc80010  lw          $t0, 0x10($a2)
    ctx->pc = 0x17a43cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_17a440:
    // 0x17a440: 0x88001a  div         $zero, $a0, $t0
    ctx->pc = 0x17a440u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_17a444:
    // 0x17a444: 0x0  nop
    ctx->pc = 0x17a444u;
    // NOP
label_17a448:
    // 0x17a448: 0x0  nop
    ctx->pc = 0x17a448u;
    // NOP
label_17a44c:
    // 0x17a44c: 0x2812  mflo        $a1
    ctx->pc = 0x17a44cu;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_17a450:
    // 0x17a450: 0x1052818  mult        $a1, $t0, $a1
    ctx->pc = 0x17a450u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_17a454:
    // 0x17a454: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x17a454u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_17a458:
    // 0x17a458: 0x4810002  bgez        $a0, . + 4 + (0x2 << 2)
label_17a45c:
    if (ctx->pc == 0x17A45Cu) {
        ctx->pc = 0x17A460u;
        goto label_17a460;
    }
    ctx->pc = 0x17A458u;
    {
        const bool branch_taken_0x17a458 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x17a458) {
            ctx->pc = 0x17A464u;
            goto label_17a464;
        }
    }
    ctx->pc = 0x17A460u;
label_17a460:
    // 0x17a460: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x17a460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_17a464:
    // 0x17a464: 0x8cc5001c  lw          $a1, 0x1C($a2)
    ctx->pc = 0x17a464u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_17a468:
    // 0x17a468: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
label_17a46c:
    if (ctx->pc == 0x17A46Cu) {
        ctx->pc = 0x17A46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A468u;
        // 0x17a46c: 0x54843  sra         $t1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A470u;
        goto label_17a470;
    }
    ctx->pc = 0x17A468u;
    {
        const bool branch_taken_0x17a468 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x17A46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A468u;
        // 0x17a46c: 0x54843  sra         $t1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a468) {
            ctx->pc = 0x17A478u;
            goto label_17a478;
        }
    }
    ctx->pc = 0x17A470u;
label_17a470:
    // 0x17a470: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x17a470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_17a474:
    // 0x17a474: 0x54843  sra         $t1, $a1, 1
    ctx->pc = 0x17a474u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 5), 1));
label_17a478:
    // 0x17a478: 0x128082a  slt         $at, $t1, $t0
    ctx->pc = 0x17a478u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_17a47c:
    // 0x17a47c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_17a480:
    if (ctx->pc == 0x17A480u) {
        ctx->pc = 0x17A484u;
        goto label_17a484;
    }
    ctx->pc = 0x17A47Cu;
    {
        const bool branch_taken_0x17a47c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a47c) {
            ctx->pc = 0x17A48Cu;
            goto label_17a48c;
        }
    }
    ctx->pc = 0x17A484u;
label_17a484:
    // 0x17a484: 0x10000007  b           . + 4 + (0x7 << 2)
label_17a488:
    if (ctx->pc == 0x17A488u) {
        ctx->pc = 0x17A488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A484u;
        // 0x17a488: 0x8cc90014  lw          $t1, 0x14($a2) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A48Cu;
        goto label_17a48c;
    }
    ctx->pc = 0x17A484u;
    {
        const bool branch_taken_0x17a484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A484u;
        // 0x17a488: 0x8cc90014  lw          $t1, 0x14($a2) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a484) {
            ctx->pc = 0x17A4A4u;
            goto label_17a4a4;
        }
    }
    ctx->pc = 0x17A48Cu;
label_17a48c:
    // 0x17a48c: 0x128001a  div         $zero, $t1, $t0
    ctx->pc = 0x17a48cu;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 9);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_17a490:
    // 0x17a490: 0x0  nop
    ctx->pc = 0x17a490u;
    // NOP
label_17a494:
    // 0x17a494: 0x0  nop
    ctx->pc = 0x17a494u;
    // NOP
label_17a498:
    // 0x17a498: 0x2812  mflo        $a1
    ctx->pc = 0x17a498u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_17a49c:
    // 0x17a49c: 0x1054018  mult        $t0, $t0, $a1
    ctx->pc = 0x17a49cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_17a4a0:
    // 0x17a4a0: 0x8cc90014  lw          $t1, 0x14($a2)
    ctx->pc = 0x17a4a0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
label_17a4a4:
    // 0x17a4a4: 0x69001a  div         $zero, $v1, $t1
    ctx->pc = 0x17a4a4u;
    { int32_t divisor = GPR_S32(ctx, 9);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_17a4a8:
    // 0x17a4a8: 0x0  nop
    ctx->pc = 0x17a4a8u;
    // NOP
label_17a4ac:
    // 0x17a4ac: 0x0  nop
    ctx->pc = 0x17a4acu;
    // NOP
label_17a4b0:
    // 0x17a4b0: 0x2812  mflo        $a1
    ctx->pc = 0x17a4b0u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_17a4b4:
    // 0x17a4b4: 0x1252818  mult        $a1, $t1, $a1
    ctx->pc = 0x17a4b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_17a4b8:
    // 0x17a4b8: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x17a4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_17a4bc:
    // 0x17a4bc: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
label_17a4c0:
    if (ctx->pc == 0x17A4C0u) {
        ctx->pc = 0x17A4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A4BCu;
        // 0x17a4c0: 0x882023  subu        $a0, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A4C4u;
        goto label_17a4c4;
    }
    ctx->pc = 0x17A4BCu;
    {
        const bool branch_taken_0x17a4bc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x17A4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A4BCu;
        // 0x17a4c0: 0x882023  subu        $a0, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a4bc) {
            ctx->pc = 0x17A4C8u;
            goto label_17a4c8;
        }
    }
    ctx->pc = 0x17A4C4u;
label_17a4c4:
    // 0x17a4c4: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x17a4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_17a4c8:
    // 0x17a4c8: 0x8cc50018  lw          $a1, 0x18($a2)
    ctx->pc = 0x17a4c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_17a4cc:
    // 0x17a4cc: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
label_17a4d0:
    if (ctx->pc == 0x17A4D0u) {
        ctx->pc = 0x17A4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A4CCu;
        // 0x17a4d0: 0x54043  sra         $t0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A4D4u;
        goto label_17a4d4;
    }
    ctx->pc = 0x17A4CCu;
    {
        const bool branch_taken_0x17a4cc = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x17A4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A4CCu;
        // 0x17a4d0: 0x54043  sra         $t0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a4cc) {
            ctx->pc = 0x17A4DCu;
            goto label_17a4dc;
        }
    }
    ctx->pc = 0x17A4D4u;
label_17a4d4:
    // 0x17a4d4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x17a4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_17a4d8:
    // 0x17a4d8: 0x54043  sra         $t0, $a1, 1
    ctx->pc = 0x17a4d8u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 5), 1));
label_17a4dc:
    // 0x17a4dc: 0x109082a  slt         $at, $t0, $t1
    ctx->pc = 0x17a4dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_17a4e0:
    // 0x17a4e0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_17a4e4:
    if (ctx->pc == 0x17A4E4u) {
        ctx->pc = 0x17A4E8u;
        goto label_17a4e8;
    }
    ctx->pc = 0x17A4E0u;
    {
        const bool branch_taken_0x17a4e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a4e0) {
            ctx->pc = 0x17A4F0u;
            goto label_17a4f0;
        }
    }
    ctx->pc = 0x17A4E8u;
label_17a4e8:
    // 0x17a4e8: 0x10000007  b           . + 4 + (0x7 << 2)
label_17a4ec:
    if (ctx->pc == 0x17A4ECu) {
        ctx->pc = 0x17A4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A4E8u;
        // 0x17a4ec: 0x691823  subu        $v1, $v1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A4F0u;
        goto label_17a4f0;
    }
    ctx->pc = 0x17A4E8u;
    {
        const bool branch_taken_0x17a4e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A4E8u;
        // 0x17a4ec: 0x691823  subu        $v1, $v1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a4e8) {
            ctx->pc = 0x17A508u;
            goto label_17a508;
        }
    }
    ctx->pc = 0x17A4F0u;
label_17a4f0:
    // 0x17a4f0: 0x109001a  div         $zero, $t0, $t1
    ctx->pc = 0x17a4f0u;
    { int32_t divisor = GPR_S32(ctx, 9);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_17a4f4:
    // 0x17a4f4: 0x0  nop
    ctx->pc = 0x17a4f4u;
    // NOP
label_17a4f8:
    // 0x17a4f8: 0x0  nop
    ctx->pc = 0x17a4f8u;
    // NOP
label_17a4fc:
    // 0x17a4fc: 0x2812  mflo        $a1
    ctx->pc = 0x17a4fcu;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_17a500:
    // 0x17a500: 0x1254818  mult        $t1, $t1, $a1
    ctx->pc = 0x17a500u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_17a504:
    // 0x17a504: 0x691823  subu        $v1, $v1, $t1
    ctx->pc = 0x17a504u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_17a508:
    // 0x17a508: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x17a508u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_17a50c:
    // 0x17a50c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x17a50cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_17a510:
    // 0x17a510: 0xc4c20020  lwc1        $f2, 0x20($a2)
    ctx->pc = 0x17a510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_17a514:
    // 0x17a514: 0xc4c00024  lwc1        $f0, 0x24($a2)
    ctx->pc = 0x17a514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17a518:
    // 0x17a518: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x17a518u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_17a51c:
    // 0x17a51c: 0xace00028  sw          $zero, 0x28($a3)
    ctx->pc = 0x17a51cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 0));
label_17a520:
    // 0x17a520: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x17a520u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_17a524:
    // 0x17a524: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x17a524u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_17a528:
    // 0x17a528: 0x1000003e  b           . + 4 + (0x3E << 2)
label_17a52c:
    if (ctx->pc == 0x17A52Cu) {
        ctx->pc = 0x17A52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A528u;
        // 0x17a52c: 0x46000802  mul.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A530u;
        goto label_17a530;
    }
    ctx->pc = 0x17A528u;
    {
        const bool branch_taken_0x17a528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A528u;
        // 0x17a52c: 0x46000802  mul.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a528) {
            ctx->pc = 0x17A624u;
            goto label_17a624;
        }
    }
    ctx->pc = 0x17A530u;
label_17a530:
    // 0x17a530: 0x8cc90010  lw          $t1, 0x10($a2)
    ctx->pc = 0x17a530u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_17a534:
    // 0x17a534: 0x69001a  div         $zero, $v1, $t1
    ctx->pc = 0x17a534u;
    { int32_t divisor = GPR_S32(ctx, 9);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_17a538:
    // 0x17a538: 0x0  nop
    ctx->pc = 0x17a538u;
    // NOP
label_17a53c:
    // 0x17a53c: 0x0  nop
    ctx->pc = 0x17a53cu;
    // NOP
label_17a540:
    // 0x17a540: 0x2812  mflo        $a1
    ctx->pc = 0x17a540u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_17a544:
    // 0x17a544: 0x1252818  mult        $a1, $t1, $a1
    ctx->pc = 0x17a544u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_17a548:
    // 0x17a548: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x17a548u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_17a54c:
    // 0x17a54c: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
label_17a550:
    if (ctx->pc == 0x17A550u) {
        ctx->pc = 0x17A554u;
        goto label_17a554;
    }
    ctx->pc = 0x17A54Cu;
    {
        const bool branch_taken_0x17a54c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x17a54c) {
            ctx->pc = 0x17A558u;
            goto label_17a558;
        }
    }
    ctx->pc = 0x17A554u;
label_17a554:
    // 0x17a554: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x17a554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_17a558:
    // 0x17a558: 0x8cc50018  lw          $a1, 0x18($a2)
    ctx->pc = 0x17a558u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_17a55c:
    // 0x17a55c: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
label_17a560:
    if (ctx->pc == 0x17A560u) {
        ctx->pc = 0x17A560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A55Cu;
        // 0x17a560: 0x54043  sra         $t0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A564u;
        goto label_17a564;
    }
    ctx->pc = 0x17A55Cu;
    {
        const bool branch_taken_0x17a55c = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x17A560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A55Cu;
        // 0x17a560: 0x54043  sra         $t0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a55c) {
            ctx->pc = 0x17A56Cu;
            goto label_17a56c;
        }
    }
    ctx->pc = 0x17A564u;
label_17a564:
    // 0x17a564: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x17a564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_17a568:
    // 0x17a568: 0x54043  sra         $t0, $a1, 1
    ctx->pc = 0x17a568u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 5), 1));
label_17a56c:
    // 0x17a56c: 0x109082a  slt         $at, $t0, $t1
    ctx->pc = 0x17a56cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_17a570:
    // 0x17a570: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_17a574:
    if (ctx->pc == 0x17A574u) {
        ctx->pc = 0x17A578u;
        goto label_17a578;
    }
    ctx->pc = 0x17A570u;
    {
        const bool branch_taken_0x17a570 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a570) {
            ctx->pc = 0x17A580u;
            goto label_17a580;
        }
    }
    ctx->pc = 0x17A578u;
label_17a578:
    // 0x17a578: 0x10000007  b           . + 4 + (0x7 << 2)
label_17a57c:
    if (ctx->pc == 0x17A57Cu) {
        ctx->pc = 0x17A57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A578u;
        // 0x17a57c: 0x691823  subu        $v1, $v1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A580u;
        goto label_17a580;
    }
    ctx->pc = 0x17A578u;
    {
        const bool branch_taken_0x17a578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A578u;
        // 0x17a57c: 0x691823  subu        $v1, $v1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a578) {
            ctx->pc = 0x17A598u;
            goto label_17a598;
        }
    }
    ctx->pc = 0x17A580u;
label_17a580:
    // 0x17a580: 0x109001a  div         $zero, $t0, $t1
    ctx->pc = 0x17a580u;
    { int32_t divisor = GPR_S32(ctx, 9);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_17a584:
    // 0x17a584: 0x0  nop
    ctx->pc = 0x17a584u;
    // NOP
label_17a588:
    // 0x17a588: 0x0  nop
    ctx->pc = 0x17a588u;
    // NOP
label_17a58c:
    // 0x17a58c: 0x2812  mflo        $a1
    ctx->pc = 0x17a58cu;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_17a590:
    // 0x17a590: 0x1254818  mult        $t1, $t1, $a1
    ctx->pc = 0x17a590u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_17a594:
    // 0x17a594: 0x691823  subu        $v1, $v1, $t1
    ctx->pc = 0x17a594u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_17a598:
    // 0x17a598: 0x8cc90014  lw          $t1, 0x14($a2)
    ctx->pc = 0x17a598u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
label_17a59c:
    // 0x17a59c: 0x89001a  div         $zero, $a0, $t1
    ctx->pc = 0x17a59cu;
    { int32_t divisor = GPR_S32(ctx, 9);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_17a5a0:
    // 0x17a5a0: 0x0  nop
    ctx->pc = 0x17a5a0u;
    // NOP
label_17a5a4:
    // 0x17a5a4: 0x0  nop
    ctx->pc = 0x17a5a4u;
    // NOP
label_17a5a8:
    // 0x17a5a8: 0x2812  mflo        $a1
    ctx->pc = 0x17a5a8u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_17a5ac:
    // 0x17a5ac: 0x1252818  mult        $a1, $t1, $a1
    ctx->pc = 0x17a5acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_17a5b0:
    // 0x17a5b0: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x17a5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_17a5b4:
    // 0x17a5b4: 0x4810002  bgez        $a0, . + 4 + (0x2 << 2)
label_17a5b8:
    if (ctx->pc == 0x17A5B8u) {
        ctx->pc = 0x17A5BCu;
        goto label_17a5bc;
    }
    ctx->pc = 0x17A5B4u;
    {
        const bool branch_taken_0x17a5b4 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x17a5b4) {
            ctx->pc = 0x17A5C0u;
            goto label_17a5c0;
        }
    }
    ctx->pc = 0x17A5BCu;
label_17a5bc:
    // 0x17a5bc: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x17a5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
label_17a5c0:
    // 0x17a5c0: 0x8cc5001c  lw          $a1, 0x1C($a2)
    ctx->pc = 0x17a5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_17a5c4:
    // 0x17a5c4: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
label_17a5c8:
    if (ctx->pc == 0x17A5C8u) {
        ctx->pc = 0x17A5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A5C4u;
        // 0x17a5c8: 0x54043  sra         $t0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A5CCu;
        goto label_17a5cc;
    }
    ctx->pc = 0x17A5C4u;
    {
        const bool branch_taken_0x17a5c4 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x17A5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A5C4u;
        // 0x17a5c8: 0x54043  sra         $t0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a5c4) {
            ctx->pc = 0x17A5D4u;
            goto label_17a5d4;
        }
    }
    ctx->pc = 0x17A5CCu;
label_17a5cc:
    // 0x17a5cc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x17a5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_17a5d0:
    // 0x17a5d0: 0x54043  sra         $t0, $a1, 1
    ctx->pc = 0x17a5d0u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 5), 1));
label_17a5d4:
    // 0x17a5d4: 0x109082a  slt         $at, $t0, $t1
    ctx->pc = 0x17a5d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_17a5d8:
    // 0x17a5d8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_17a5dc:
    if (ctx->pc == 0x17A5DCu) {
        ctx->pc = 0x17A5E0u;
        goto label_17a5e0;
    }
    ctx->pc = 0x17A5D8u;
    {
        const bool branch_taken_0x17a5d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a5d8) {
            ctx->pc = 0x17A5E8u;
            goto label_17a5e8;
        }
    }
    ctx->pc = 0x17A5E0u;
label_17a5e0:
    // 0x17a5e0: 0x10000007  b           . + 4 + (0x7 << 2)
label_17a5e4:
    if (ctx->pc == 0x17A5E4u) {
        ctx->pc = 0x17A5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A5E0u;
        // 0x17a5e4: 0x892023  subu        $a0, $a0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A5E8u;
        goto label_17a5e8;
    }
    ctx->pc = 0x17A5E0u;
    {
        const bool branch_taken_0x17a5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A5E0u;
        // 0x17a5e4: 0x892023  subu        $a0, $a0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a5e0) {
            ctx->pc = 0x17A600u;
            goto label_17a600;
        }
    }
    ctx->pc = 0x17A5E8u;
label_17a5e8:
    // 0x17a5e8: 0x109001a  div         $zero, $t0, $t1
    ctx->pc = 0x17a5e8u;
    { int32_t divisor = GPR_S32(ctx, 9);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_17a5ec:
    // 0x17a5ec: 0x0  nop
    ctx->pc = 0x17a5ecu;
    // NOP
label_17a5f0:
    // 0x17a5f0: 0x0  nop
    ctx->pc = 0x17a5f0u;
    // NOP
label_17a5f4:
    // 0x17a5f4: 0x2812  mflo        $a1
    ctx->pc = 0x17a5f4u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_17a5f8:
    // 0x17a5f8: 0x1254818  mult        $t1, $t1, $a1
    ctx->pc = 0x17a5f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_17a5fc:
    // 0x17a5fc: 0x892023  subu        $a0, $a0, $t1
    ctx->pc = 0x17a5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
label_17a600:
    // 0x17a600: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x17a600u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_17a604:
    // 0x17a604: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x17a604u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_17a608:
    // 0x17a608: 0xc4c20020  lwc1        $f2, 0x20($a2)
    ctx->pc = 0x17a608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_17a60c:
    // 0x17a60c: 0xc4c00024  lwc1        $f0, 0x24($a2)
    ctx->pc = 0x17a60cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17a610:
    // 0x17a610: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x17a610u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_17a614:
    // 0x17a614: 0xace0002c  sw          $zero, 0x2C($a3)
    ctx->pc = 0x17a614u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 44), GPR_U32(ctx, 0));
label_17a618:
    // 0x17a618: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x17a618u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_17a61c:
    // 0x17a61c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x17a61cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_17a620:
    // 0x17a620: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x17a620u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_17a624:
    // 0x17a624: 0xe4e20020  swc1        $f2, 0x20($a3)
    ctx->pc = 0x17a624u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 32), bits); }
label_17a628:
    // 0x17a628: 0xe4e00024  swc1        $f0, 0x24($a3)
    ctx->pc = 0x17a628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 36), bits); }
label_17a62c:
    // 0x17a62c: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x17a62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_17a630:
    // 0x17a630: 0x3e00008  jr          $ra
label_17a634:
    if (ctx->pc == 0x17A634u) {
        ctx->pc = 0x17A634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A630u;
        // 0x17a634: 0xace30034  sw          $v1, 0x34($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A638u;
        goto label_17a638;
    }
    ctx->pc = 0x17A630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A630u;
        // 0x17a634: 0xace30034  sw          $v1, 0x34($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A638u;
label_17a638:
    // 0x17a638: 0x0  nop
    ctx->pc = 0x17a638u;
    // NOP
label_17a63c:
    // 0x17a63c: 0x0  nop
    ctx->pc = 0x17a63cu;
    // NOP
label_17a640:
    // 0x17a640: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17a640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_17a644:
    // 0x17a644: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x17a644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_17a648:
    // 0x17a648: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17a648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_17a64c:
    // 0x17a64c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17a64cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_17a650:
    // 0x17a650: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x17a650u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_17a654:
    // 0x17a654: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17a654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_17a658:
    // 0x17a658: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x17a658u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_17a65c:
    // 0x17a65c: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_17a660:
    if (ctx->pc == 0x17A660u) {
        ctx->pc = 0x17A660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A65Cu;
        // 0x17a660: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A664u;
        goto label_17a664;
    }
    ctx->pc = 0x17A65Cu;
    {
        const bool branch_taken_0x17a65c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A65Cu;
        // 0x17a660: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a65c) {
            ctx->pc = 0x17A674u;
            goto label_17a674;
        }
    }
    ctx->pc = 0x17A664u;
label_17a664:
    // 0x17a664: 0xc066e2a  jal         func_19B8A8
label_17a668:
    if (ctx->pc == 0x17A668u) {
        ctx->pc = 0x17A668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A664u;
        // 0x17a668: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A66Cu;
        goto label_17a66c;
    }
    ctx->pc = 0x17A664u;
    SET_GPR_U32(ctx, 31, 0x17A66Cu);
    ctx->pc = 0x17A668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A664u;
    // 0x17a668: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8A8u;
    { ctx->pc = 0x19b8a8; return; }
    ctx->pc = 0x17A66Cu;
label_17a66c:
    // 0x17a66c: 0x10000004  b           . + 4 + (0x4 << 2)
label_17a670:
    if (ctx->pc == 0x17A670u) {
        ctx->pc = 0x17A670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A66Cu;
        // 0x17a670: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A674u;
        goto label_17a674;
    }
    ctx->pc = 0x17A66Cu;
    {
        const bool branch_taken_0x17a66c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A66Cu;
        // 0x17a670: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a66c) {
            ctx->pc = 0x17A680u;
            goto label_17a680;
        }
    }
    ctx->pc = 0x17A674u;
label_17a674:
    // 0x17a674: 0xc066e44  jal         func_19B910
label_17a678:
    if (ctx->pc == 0x17A678u) {
        ctx->pc = 0x17A678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A674u;
        // 0x17a678: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A67Cu;
        goto label_17a67c;
    }
    ctx->pc = 0x17A674u;
    SET_GPR_U32(ctx, 31, 0x17A67Cu);
    ctx->pc = 0x17A678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A674u;
    // 0x17a678: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x17A67Cu;
label_17a67c:
    // 0x17a67c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x17a67cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_17a680:
    // 0x17a680: 0x16430007  bne         $s2, $v1, . + 4 + (0x7 << 2)
label_17a684:
    if (ctx->pc == 0x17A684u) {
        ctx->pc = 0x17A684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A680u;
        // 0x17a684: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A688u;
        goto label_17a688;
    }
    ctx->pc = 0x17A680u;
    {
        const bool branch_taken_0x17a680 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x17A684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A680u;
        // 0x17a684: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a680) {
            ctx->pc = 0x17A6A0u;
            goto label_17a6a0;
        }
    }
    ctx->pc = 0x17A688u;
label_17a688:
    // 0x17a688: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x17a688u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_17a68c:
    // 0x17a68c: 0xae030050  sw          $v1, 0x50($s0)
    ctx->pc = 0x17a68cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
label_17a690:
    // 0x17a690: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x17a690u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_17a694:
    // 0x17a694: 0xae030058  sw          $v1, 0x58($s0)
    ctx->pc = 0x17a694u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 3));
label_17a698:
    // 0x17a698: 0x10000004  b           . + 4 + (0x4 << 2)
label_17a69c:
    if (ctx->pc == 0x17A69Cu) {
        ctx->pc = 0x17A69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A698u;
        // 0x17a69c: 0xae03005c  sw          $v1, 0x5C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A6A0u;
        goto label_17a6a0;
    }
    ctx->pc = 0x17A698u;
    {
        const bool branch_taken_0x17a698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A698u;
        // 0x17a69c: 0xae03005c  sw          $v1, 0x5C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a698) {
            ctx->pc = 0x17A6ACu;
            goto label_17a6ac;
        }
    }
    ctx->pc = 0x17A6A0u;
label_17a6a0:
    // 0x17a6a0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x17a6a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17a6a4:
    // 0x17a6a4: 0xc0552f4  jal         func_154BD0
label_17a6a8:
    if (ctx->pc == 0x17A6A8u) {
        ctx->pc = 0x17A6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A6A4u;
        // 0x17a6a8: 0x26050050  addiu       $a1, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A6ACu;
        goto label_17a6ac;
    }
    ctx->pc = 0x17A6A4u;
    SET_GPR_U32(ctx, 31, 0x17A6ACu);
    ctx->pc = 0x17A6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A6A4u;
    // 0x17a6a8: 0x26050050  addiu       $a1, $s0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154BD0u;
    { ctx->pc = 0x154bd0; return; }
    ctx->pc = 0x17A6ACu;
label_17a6ac:
    // 0x17a6ac: 0x3c044300  lui         $a0, 0x4300
    ctx->pc = 0x17a6acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17152 << 16));
label_17a6b0:
    // 0x17a6b0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x17a6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_17a6b4:
    // 0x17a6b4: 0xae04005c  sw          $a0, 0x5C($s0)
    ctx->pc = 0x17a6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 4));
label_17a6b8:
    // 0x17a6b8: 0x34630006  ori         $v1, $v1, 0x6
    ctx->pc = 0x17a6b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
label_17a6bc:
    // 0x17a6bc: 0x7e000000  sq          $zero, 0x0($s0)
    ctx->pc = 0x17a6bcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 0));
label_17a6c0:
    // 0x17a6c0: 0x3c046c05  lui         $a0, 0x6C05
    ctx->pc = 0x17a6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27653 << 16));
label_17a6c4:
    // 0x17a6c4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x17a6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_17a6c8:
    // 0x17a6c8: 0xae04000c  sw          $a0, 0xC($s0)
    ctx->pc = 0x17a6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 4));
label_17a6cc:
    // 0x17a6cc: 0x3c031400  lui         $v1, 0x1400
    ctx->pc = 0x17a6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5120 << 16));
label_17a6d0:
    // 0x17a6d0: 0x3464041d  ori         $a0, $v1, 0x41D
    ctx->pc = 0x17a6d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1053);
label_17a6d4:
    // 0x17a6d4: 0x7e000060  sq          $zero, 0x60($s0)
    ctx->pc = 0x17a6d4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 96), GPR_VEC(ctx, 0));
label_17a6d8:
    // 0x17a6d8: 0x3c031700  lui         $v1, 0x1700
    ctx->pc = 0x17a6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5888 << 16));
label_17a6dc:
    // 0x17a6dc: 0xae040060  sw          $a0, 0x60($s0)
    ctx->pc = 0x17a6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 4));
label_17a6e0:
    // 0x17a6e0: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x17a6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
label_17a6e4:
    // 0x17a6e4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x17a6e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_17a6e8:
    // 0x17a6e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17a6e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17a6ec:
    // 0x17a6ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17a6ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17a6f0:
    // 0x17a6f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17a6f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17a6f4:
    // 0x17a6f4: 0x3e00008  jr          $ra
label_17a6f8:
    if (ctx->pc == 0x17A6F8u) {
        ctx->pc = 0x17A6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A6F4u;
        // 0x17a6f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A6FCu;
        goto label_17a6fc;
    }
    ctx->pc = 0x17A6F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A6F4u;
        // 0x17a6f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A6F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A6FCu;
label_17a6fc:
    // 0x17a6fc: 0x0  nop
    ctx->pc = 0x17a6fcu;
    // NOP
label_17a700:
    // 0x17a700: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17a700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_17a704:
    // 0x17a704: 0x3c023b03  lui         $v0, 0x3B03
    ctx->pc = 0x17a704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15107 << 16));
label_17a708:
    // 0x17a708: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17a708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_17a70c:
    // 0x17a70c: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x17a70cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
label_17a710:
    // 0x17a710: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17a710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_17a714:
    // 0x17a714: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x17a714u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_17a718:
    // 0x17a718: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17a718u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17a71c:
    // 0x17a71c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x17a71cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_17a720:
    // 0x17a720: 0xc066e14  jal         func_19B850
label_17a724:
    if (ctx->pc == 0x17A724u) {
        ctx->pc = 0x17A724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A720u;
        // 0x17a724: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A728u;
        goto label_17a728;
    }
    ctx->pc = 0x17A720u;
    SET_GPR_U32(ctx, 31, 0x17A728u);
    ctx->pc = 0x17A724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A720u;
    // 0x17a724: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B850u;
    { ctx->pc = 0x19b850; return; }
    ctx->pc = 0x17A728u;
label_17a728:
    // 0x17a728: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x17a728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_17a72c:
    // 0x17a72c: 0xc066e38  jal         func_19B8E0
label_17a730:
    if (ctx->pc == 0x17A730u) {
        ctx->pc = 0x17A730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A72Cu;
        // 0x17a730: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A734u;
        goto label_17a734;
    }
    ctx->pc = 0x17A72Cu;
    SET_GPR_U32(ctx, 31, 0x17A734u);
    ctx->pc = 0x17A730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A72Cu;
    // 0x17a730: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8E0u;
    { ctx->pc = 0x19b8e0; return; }
    ctx->pc = 0x17A734u;
label_17a734:
    // 0x17a734: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x17a734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17a738:
    // 0x17a738: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17a738u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17a73c:
    // 0x17a73c: 0x0  nop
    ctx->pc = 0x17a73cu;
    // NOP
label_17a740:
    // 0x17a740: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17a740u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17a744:
    // 0x17a744: 0x0  nop
    ctx->pc = 0x17a744u;
    // NOP
label_17a748:
    // 0x17a748: 0x45010032  bc1t        . + 4 + (0x32 << 2)
label_17a74c:
    if (ctx->pc == 0x17A74Cu) {
        ctx->pc = 0x17A74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A748u;
        // 0x17a74c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A750u;
        goto label_17a750;
    }
    ctx->pc = 0x17A748u;
    {
        const bool branch_taken_0x17a748 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x17A74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A748u;
        // 0x17a74c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a748) {
            ctx->pc = 0x17A814u;
            goto label_17a814;
        }
    }
    ctx->pc = 0x17A750u;
label_17a750:
    // 0x17a750: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x17a750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_17a754:
    // 0x17a754: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x17a754u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17a758:
    // 0x17a758: 0x0  nop
    ctx->pc = 0x17a758u;
    // NOP
label_17a75c:
    // 0x17a75c: 0x4501002c  bc1t        . + 4 + (0x2C << 2)
label_17a760:
    if (ctx->pc == 0x17A760u) {
        ctx->pc = 0x17A764u;
        goto label_17a764;
    }
    ctx->pc = 0x17A75Cu;
    {
        const bool branch_taken_0x17a75c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17a75c) {
            ctx->pc = 0x17A810u;
            goto label_17a810;
        }
    }
    ctx->pc = 0x17A764u;
label_17a764:
    // 0x17a764: 0x8f848448  lw          $a0, -0x7BB8($gp)
    ctx->pc = 0x17a764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935624)));
label_17a768:
    // 0x17a768: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x17a768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17a76c:
    // 0x17a76c: 0x51140  sll         $v0, $a1, 5
    ctx->pc = 0x17a76cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_17a770:
    // 0x17a770: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x17a770u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_17a774:
    // 0x17a774: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17a774u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_17a778:
    // 0x17a778: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x17a778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_17a77c:
    // 0x17a77c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17a77cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_17a780:
    // 0x17a780: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_17a784:
    if (ctx->pc == 0x17A784u) {
        ctx->pc = 0x17A784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A780u;
        // 0x17a784: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A788u;
        goto label_17a788;
    }
    ctx->pc = 0x17A780u;
    {
        const bool branch_taken_0x17a780 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x17A784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A780u;
        // 0x17a784: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a780) {
            ctx->pc = 0x17A794u;
            goto label_17a794;
        }
    }
    ctx->pc = 0x17A788u;
label_17a788:
    // 0x17a788: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17a788u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17a78c:
    // 0x17a78c: 0x10000007  b           . + 4 + (0x7 << 2)
label_17a790:
    if (ctx->pc == 0x17A790u) {
        ctx->pc = 0x17A790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A78Cu;
        // 0x17a790: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A794u;
        goto label_17a794;
    }
    ctx->pc = 0x17A78Cu;
    {
        const bool branch_taken_0x17a78c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A78Cu;
        // 0x17a790: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a78c) {
            ctx->pc = 0x17A7ACu;
            goto label_17a7ac;
        }
    }
    ctx->pc = 0x17A794u;
label_17a794:
    // 0x17a794: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x17a794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_17a798:
    // 0x17a798: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x17a798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_17a79c:
    // 0x17a79c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17a79cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17a7a0:
    // 0x17a7a0: 0x0  nop
    ctx->pc = 0x17a7a0u;
    // NOP
label_17a7a4:
    // 0x17a7a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17a7a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_17a7a8:
    // 0x17a7a8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x17a7a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_17a7ac:
    // 0x17a7ac: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x17a7acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17a7b0:
    // 0x17a7b0: 0x0  nop
    ctx->pc = 0x17a7b0u;
    // NOP
label_17a7b4:
    // 0x17a7b4: 0x45000016  bc1f        . + 4 + (0x16 << 2)
label_17a7b8:
    if (ctx->pc == 0x17A7B8u) {
        ctx->pc = 0x17A7BCu;
        goto label_17a7bc;
    }
    ctx->pc = 0x17A7B4u;
    {
        const bool branch_taken_0x17a7b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17a7b4) {
            ctx->pc = 0x17A810u;
            goto label_17a810;
        }
    }
    ctx->pc = 0x17A7BCu;
label_17a7bc:
    // 0x17a7bc: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x17a7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_17a7c0:
    // 0x17a7c0: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x17a7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_17a7c4:
    // 0x17a7c4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x17a7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17a7c8:
    // 0x17a7c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17a7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_17a7cc:
    // 0x17a7cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17a7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17a7d0:
    // 0x17a7d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17a7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_17a7d4:
    // 0x17a7d4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_17a7d8:
    if (ctx->pc == 0x17A7D8u) {
        ctx->pc = 0x17A7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A7D4u;
        // 0x17a7d8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A7DCu;
        goto label_17a7dc;
    }
    ctx->pc = 0x17A7D4u;
    {
        const bool branch_taken_0x17a7d4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x17A7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A7D4u;
        // 0x17a7d8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a7d4) {
            ctx->pc = 0x17A7E8u;
            goto label_17a7e8;
        }
    }
    ctx->pc = 0x17A7DCu;
label_17a7dc:
    // 0x17a7dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17a7dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17a7e0:
    // 0x17a7e0: 0x10000007  b           . + 4 + (0x7 << 2)
label_17a7e4:
    if (ctx->pc == 0x17A7E4u) {
        ctx->pc = 0x17A7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A7E0u;
        // 0x17a7e4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A7E8u;
        goto label_17a7e8;
    }
    ctx->pc = 0x17A7E0u;
    {
        const bool branch_taken_0x17a7e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A7E0u;
        // 0x17a7e4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a7e0) {
            ctx->pc = 0x17A800u;
            goto label_17a800;
        }
    }
    ctx->pc = 0x17A7E8u;
label_17a7e8:
    // 0x17a7e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x17a7e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_17a7ec:
    // 0x17a7ec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x17a7ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_17a7f0:
    // 0x17a7f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17a7f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17a7f4:
    // 0x17a7f4: 0x0  nop
    ctx->pc = 0x17a7f4u;
    // NOP
label_17a7f8:
    // 0x17a7f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17a7f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_17a7fc:
    // 0x17a7fc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x17a7fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_17a800:
    // 0x17a800: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x17a800u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17a804:
    // 0x17a804: 0x0  nop
    ctx->pc = 0x17a804u;
    // NOP
label_17a808:
    // 0x17a808: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_17a80c:
    if (ctx->pc == 0x17A80Cu) {
        ctx->pc = 0x17A810u;
        goto label_17a810;
    }
    ctx->pc = 0x17A808u;
    {
        const bool branch_taken_0x17a808 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17a808) {
            ctx->pc = 0x17A81Cu;
            goto label_17a81c;
        }
    }
    ctx->pc = 0x17A810u;
label_17a810:
    // 0x17a810: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17a810u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a814:
    // 0x17a814: 0x1000000e  b           . + 4 + (0xE << 2)
label_17a818:
    if (ctx->pc == 0x17A818u) {
        ctx->pc = 0x17A818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A814u;
        // 0x17a818: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A81Cu;
        goto label_17a81c;
    }
    ctx->pc = 0x17A814u;
    {
        const bool branch_taken_0x17a814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A814u;
        // 0x17a818: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a814) {
            ctx->pc = 0x17A850u;
            goto label_17a850;
        }
    }
    ctx->pc = 0x17A81Cu;
label_17a81c:
    // 0x17a81c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x17a81cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_17a820:
    // 0x17a820: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x17a820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_17a824:
    // 0x17a824: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x17a824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_17a828:
    // 0x17a828: 0x8f85844c  lw          $a1, -0x7BB4($gp)
    ctx->pc = 0x17a828u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935628)));
label_17a82c:
    // 0x17a82c: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x17a82cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_17a830:
    // 0x17a830: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x17a830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17a834:
    // 0x17a834: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x17a834u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_17a838:
    // 0x17a838: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17a838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_17a83c:
    // 0x17a83c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x17a83cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_17a840:
    // 0x17a840: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x17a840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_17a844:
    // 0x17a844: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x17a844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_17a848:
    // 0x17a848: 0x0  nop
    ctx->pc = 0x17a848u;
    // NOP
label_17a84c:
    // 0x17a84c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17a84cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17a850:
    // 0x17a850: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17a850u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17a854:
    // 0x17a854: 0x3e00008  jr          $ra
label_17a858:
    if (ctx->pc == 0x17A858u) {
        ctx->pc = 0x17A858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A854u;
        // 0x17a858: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A85Cu;
        goto label_17a85c;
    }
    ctx->pc = 0x17A854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A854u;
        // 0x17a858: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A85Cu;
label_17a85c:
    // 0x17a85c: 0x0  nop
    ctx->pc = 0x17a85cu;
    // NOP
label_17a860:
    // 0x17a860: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17a860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_17a864:
    // 0x17a864: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x17a864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_17a868:
    // 0x17a868: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17a868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_17a86c:
    // 0x17a86c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17a86cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_17a870:
    // 0x17a870: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17a870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_17a874:
    // 0x17a874: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x17a874u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17a878:
    // 0x17a878: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17a878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_17a87c:
    // 0x17a87c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x17a87cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_17a880:
    // 0x17a880: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
label_17a884:
    if (ctx->pc == 0x17A884u) {
        ctx->pc = 0x17A884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A880u;
        // 0x17a884: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A888u;
        goto label_17a888;
    }
    ctx->pc = 0x17A880u;
    {
        const bool branch_taken_0x17a880 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A880u;
        // 0x17a884: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a880) {
            ctx->pc = 0x17A88Cu;
            goto label_17a88c;
        }
    }
    ctx->pc = 0x17A888u;
label_17a888:
    // 0x17a888: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17a888u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_17a88c:
    // 0x17a88c: 0x26020009  addiu       $v0, $s0, 0x9
    ctx->pc = 0x17a88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 9));
label_17a890:
    // 0x17a890: 0xc066d0a  jal         func_19B428
label_17a894:
    if (ctx->pc == 0x17A894u) {
        ctx->pc = 0x17A894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A890u;
        // 0x17a894: 0x22880  sll         $a1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A898u;
        goto label_17a898;
    }
    ctx->pc = 0x17A890u;
    SET_GPR_U32(ctx, 31, 0x17A898u);
    ctx->pc = 0x17A894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A890u;
    // 0x17a894: 0x22880  sll         $a1, $v0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B428u;
    { ctx->pc = 0x19b428; return; }
    ctx->pc = 0x17A898u;
label_17a898:
    // 0x17a898: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x17a898u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
label_17a89c:
    // 0x17a89c: 0x3c031100  lui         $v1, 0x1100
    ctx->pc = 0x17a89cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4352 << 16));
label_17a8a0:
    // 0x17a8a0: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x17a8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
label_17a8a4:
    // 0x17a8a4: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x17a8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_17a8a8:
    // 0x17a8a8: 0x3c036c08  lui         $v1, 0x6C08
    ctx->pc = 0x17a8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27656 << 16));
label_17a8ac:
    // 0x17a8ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17a8acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17a8b0:
    // 0x17a8b0: 0x3465000a  ori         $a1, $v1, 0xA
    ctx->pc = 0x17a8b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10);
label_17a8b4:
    // 0x17a8b4: 0x26130010  addiu       $s3, $s0, 0x10
    ctx->pc = 0x17a8b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_17a8b8:
    // 0x17a8b8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x17a8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_17a8bc:
    // 0x17a8bc: 0xac45000c  sw          $a1, 0xC($v0)
    ctx->pc = 0x17a8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
label_17a8c0:
    // 0x17a8c0: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x17a8c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_17a8c4:
    // 0x17a8c4: 0x1640000b  bnez        $s2, . + 4 + (0xB << 2)
label_17a8c8:
    if (ctx->pc == 0x17A8C8u) {
        ctx->pc = 0x17A8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A8C4u;
        // 0x17a8c8: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A8CCu;
        goto label_17a8cc;
    }
    ctx->pc = 0x17A8C4u;
    {
        const bool branch_taken_0x17a8c4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x17A8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A8C4u;
        // 0x17a8c8: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a8c4) {
            ctx->pc = 0x17A8F4u;
            goto label_17a8f4;
        }
    }
    ctx->pc = 0x17A8CCu;
label_17a8cc:
    // 0x17a8cc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x17a8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_17a8d0:
    // 0x17a8d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17a8d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_17a8d4:
    // 0x17a8d4: 0xc066e2a  jal         func_19B8A8
label_17a8d8:
    if (ctx->pc == 0x17A8D8u) {
        ctx->pc = 0x17A8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A8D4u;
        // 0x17a8d8: 0x24a59480  addiu       $a1, $a1, -0x6B80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A8DCu;
        goto label_17a8dc;
    }
    ctx->pc = 0x17A8D4u;
    SET_GPR_U32(ctx, 31, 0x17A8DCu);
    ctx->pc = 0x17A8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A8D4u;
    // 0x17a8d8: 0x24a59480  addiu       $a1, $a1, -0x6B80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8A8u;
    { ctx->pc = 0x19b8a8; return; }
    ctx->pc = 0x17A8DCu;
label_17a8dc:
    // 0x17a8dc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x17a8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_17a8e0:
    // 0x17a8e0: 0x26640040  addiu       $a0, $s3, 0x40
    ctx->pc = 0x17a8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
label_17a8e4:
    // 0x17a8e4: 0xc066e2a  jal         func_19B8A8
label_17a8e8:
    if (ctx->pc == 0x17A8E8u) {
        ctx->pc = 0x17A8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A8E4u;
        // 0x17a8e8: 0x24a59400  addiu       $a1, $a1, -0x6C00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939648));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A8ECu;
        goto label_17a8ec;
    }
    ctx->pc = 0x17A8E4u;
    SET_GPR_U32(ctx, 31, 0x17A8ECu);
    ctx->pc = 0x17A8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A8E4u;
    // 0x17a8e8: 0x24a59400  addiu       $a1, $a1, -0x6C00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8A8u;
    { ctx->pc = 0x19b8a8; return; }
    ctx->pc = 0x17A8ECu;
label_17a8ec:
    // 0x17a8ec: 0x10000009  b           . + 4 + (0x9 << 2)
label_17a8f0:
    if (ctx->pc == 0x17A8F0u) {
        ctx->pc = 0x17A8F4u;
        goto label_17a8f4;
    }
    ctx->pc = 0x17A8ECu;
    {
        const bool branch_taken_0x17a8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a8ec) {
            ctx->pc = 0x17A914u;
            goto label_17a914;
        }
    }
    ctx->pc = 0x17A8F4u;
label_17a8f4:
    // 0x17a8f4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x17a8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_17a8f8:
    // 0x17a8f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17a8f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_17a8fc:
    // 0x17a8fc: 0xc066e2a  jal         func_19B8A8
label_17a900:
    if (ctx->pc == 0x17A900u) {
        ctx->pc = 0x17A900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A8FCu;
        // 0x17a900: 0x24a59440  addiu       $a1, $a1, -0x6BC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939712));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A904u;
        goto label_17a904;
    }
    ctx->pc = 0x17A8FCu;
    SET_GPR_U32(ctx, 31, 0x17A904u);
    ctx->pc = 0x17A900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A8FCu;
    // 0x17a900: 0x24a59440  addiu       $a1, $a1, -0x6BC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8A8u;
    { ctx->pc = 0x19b8a8; return; }
    ctx->pc = 0x17A904u;
label_17a904:
    // 0x17a904: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x17a904u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_17a908:
    // 0x17a908: 0x26640040  addiu       $a0, $s3, 0x40
    ctx->pc = 0x17a908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
label_17a90c:
    // 0x17a90c: 0xc066e2a  jal         func_19B8A8
label_17a910:
    if (ctx->pc == 0x17A910u) {
        ctx->pc = 0x17A910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A90Cu;
        // 0x17a910: 0x24a593c0  addiu       $a1, $a1, -0x6C40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939584));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A914u;
        goto label_17a914;
    }
    ctx->pc = 0x17A90Cu;
    SET_GPR_U32(ctx, 31, 0x17A914u);
    ctx->pc = 0x17A910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A90Cu;
    // 0x17a910: 0x24a593c0  addiu       $a1, $a1, -0x6C40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8A8u;
    { ctx->pc = 0x19b8a8; return; }
    ctx->pc = 0x17A914u;
label_17a914:
    // 0x17a914: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_17a918:
    if (ctx->pc == 0x17A918u) {
        ctx->pc = 0x17A918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A914u;
        // 0x17a918: 0x3c041400  lui         $a0, 0x1400 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)5120 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A91Cu;
        goto label_17a91c;
    }
    ctx->pc = 0x17A914u;
    {
        const bool branch_taken_0x17a914 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A914u;
        // 0x17a918: 0x3c041400  lui         $a0, 0x1400 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)5120 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a914) {
            ctx->pc = 0x17A930u;
            goto label_17a930;
        }
    }
    ctx->pc = 0x17A91Cu;
label_17a91c:
    // 0x17a91c: 0x3c031700  lui         $v1, 0x1700
    ctx->pc = 0x17a91cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5888 << 16));
label_17a920:
    // 0x17a920: 0x3484041d  ori         $a0, $a0, 0x41D
    ctx->pc = 0x17a920u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1053);
label_17a924:
    // 0x17a924: 0xae040090  sw          $a0, 0x90($s0)
    ctx->pc = 0x17a924u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 4));
label_17a928:
    // 0x17a928: 0xae030094  sw          $v1, 0x94($s0)
    ctx->pc = 0x17a928u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 3));
label_17a92c:
    // 0x17a92c: 0xfe000098  sd          $zero, 0x98($s0)
    ctx->pc = 0x17a92cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 152), GPR_U64(ctx, 0));
label_17a930:
    // 0x17a930: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x17a930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_17a934:
    // 0x17a934: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17a934u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_17a938:
    // 0x17a938: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17a938u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17a93c:
    // 0x17a93c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17a93cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17a940:
    // 0x17a940: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17a940u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17a944:
    // 0x17a944: 0x3e00008  jr          $ra
label_17a948:
    if (ctx->pc == 0x17A948u) {
        ctx->pc = 0x17A948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A944u;
        // 0x17a948: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A94Cu;
        goto label_17a94c;
    }
    ctx->pc = 0x17A944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A944u;
        // 0x17a948: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A94Cu;
label_17a94c:
    // 0x17a94c: 0x0  nop
    ctx->pc = 0x17a94cu;
    // NOP
label_17a950:
    // 0x17a950: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17a950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_17a954:
    // 0x17a954: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17a954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_17a958:
    // 0x17a958: 0xc066d0a  jal         func_19B428
label_17a95c:
    if (ctx->pc == 0x17A95Cu) {
        ctx->pc = 0x17A95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A958u;
        // 0x17a95c: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A960u;
        goto label_17a960;
    }
    ctx->pc = 0x17A958u;
    SET_GPR_U32(ctx, 31, 0x17A960u);
    ctx->pc = 0x17A95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A958u;
    // 0x17a95c: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B428u;
    { ctx->pc = 0x19b428; return; }
    ctx->pc = 0x17A960u;
label_17a960:
    // 0x17a960: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x17a960u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
label_17a964:
    // 0x17a964: 0x3c036c03  lui         $v1, 0x6C03
    ctx->pc = 0x17a964u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27651 << 16));
label_17a968:
    // 0x17a968: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x17a968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_17a96c:
    // 0x17a96c: 0xfc400008  sd          $zero, 0x8($v0)
    ctx->pc = 0x17a96cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 0));
label_17a970:
    // 0x17a970: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x17a970u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
label_17a974:
    // 0x17a974: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x17a974u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_17a978:
    // 0x17a978: 0x34650004  ori         $a1, $v1, 0x4
    ctx->pc = 0x17a978u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
label_17a97c:
    // 0x17a97c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x17a97cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
label_17a980:
    // 0x17a980: 0x34038002  ori         $v1, $zero, 0x8002
    ctx->pc = 0x17a980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32770);
label_17a984:
    // 0x17a984: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x17a984u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_17a988:
    // 0x17a988: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x17a988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_17a98c:
    // 0x17a98c: 0xfc430010  sd          $v1, 0x10($v0)
    ctx->pc = 0x17a98cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 3));
label_17a990:
    // 0x17a990: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x17a990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_17a994:
    // 0x17a994: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x17a994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_17a998:
    // 0x17a998: 0xfc440018  sd          $a0, 0x18($v0)
    ctx->pc = 0x17a998u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 4));
label_17a99c:
    // 0x17a99c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x17a99cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_17a9a0:
    // 0x17a9a0: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x17a9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_17a9a4:
    // 0x17a9a4: 0xfc430020  sd          $v1, 0x20($v0)
    ctx->pc = 0x17a9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 32), GPR_U64(ctx, 3));
label_17a9a8:
    // 0x17a9a8: 0x24030043  addiu       $v1, $zero, 0x43
    ctx->pc = 0x17a9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
label_17a9ac:
    // 0x17a9ac: 0xfc430028  sd          $v1, 0x28($v0)
    ctx->pc = 0x17a9acu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 40), GPR_U64(ctx, 3));
label_17a9b0:
    // 0x17a9b0: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x17a9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
label_17a9b4:
    // 0x17a9b4: 0x3463040d  ori         $v1, $v1, 0x40D
    ctx->pc = 0x17a9b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1037);
label_17a9b8:
    // 0x17a9b8: 0xfc430030  sd          $v1, 0x30($v0)
    ctx->pc = 0x17a9b8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 48), GPR_U64(ctx, 3));
label_17a9bc:
    // 0x17a9bc: 0xfc440038  sd          $a0, 0x38($v0)
    ctx->pc = 0x17a9bcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 56), GPR_U64(ctx, 4));
label_17a9c0:
    // 0x17a9c0: 0x3c031400  lui         $v1, 0x1400
    ctx->pc = 0x17a9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5120 << 16));
label_17a9c4:
    // 0x17a9c4: 0xfc400040  sd          $zero, 0x40($v0)
    ctx->pc = 0x17a9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 64), GPR_U64(ctx, 0));
label_17a9c8:
    // 0x17a9c8: 0xfc400048  sd          $zero, 0x48($v0)
    ctx->pc = 0x17a9c8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 72), GPR_U64(ctx, 0));
label_17a9cc:
    // 0x17a9cc: 0x8f858410  lw          $a1, -0x7BF0($gp)
    ctx->pc = 0x17a9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935568)));
label_17a9d0:
    // 0x17a9d0: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x17a9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_17a9d4:
    // 0x17a9d4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x17a9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_17a9d8:
    // 0x17a9d8: 0x24840400  addiu       $a0, $a0, 0x400
    ctx->pc = 0x17a9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1024));
label_17a9dc:
    // 0x17a9dc: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x17a9dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_17a9e0:
    // 0x17a9e0: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x17a9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
label_17a9e4:
    // 0x17a9e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17a9e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17a9e8:
    // 0x17a9e8: 0x3e00008  jr          $ra
label_17a9ec:
    if (ctx->pc == 0x17A9ECu) {
        ctx->pc = 0x17A9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A9E8u;
        // 0x17a9ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A9F0u;
        goto label_17a9f0;
    }
    ctx->pc = 0x17A9E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A9E8u;
        // 0x17a9ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A9E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A9F0u;
label_17a9f0:
    // 0x17a9f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17a9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_17a9f4:
    // 0x17a9f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17a9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_17a9f8:
    // 0x17a9f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17a9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_17a9fc:
    // 0x17a9fc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x17a9fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17aa00:
    // 0x17aa00: 0xc066d0a  jal         func_19B428
label_17aa04:
    if (ctx->pc == 0x17AA04u) {
        ctx->pc = 0x17AA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AA00u;
        // 0x17aa04: 0x2405001c  addiu       $a1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17AA08u;
        goto label_17aa08;
    }
    ctx->pc = 0x17AA00u;
    SET_GPR_U32(ctx, 31, 0x17AA08u);
    ctx->pc = 0x17AA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AA00u;
    // 0x17aa04: 0x2405001c  addiu       $a1, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B428u;
    { ctx->pc = 0x19b428; return; }
    ctx->pc = 0x17AA08u;
label_17aa08:
    // 0x17aa08: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x17aa08u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
label_17aa0c:
    // 0x17aa0c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x17aa0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_17aa10:
    // 0x17aa10: 0xfc400008  sd          $zero, 0x8($v0)
    ctx->pc = 0x17aa10u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 0));
label_17aa14:
    // 0x17aa14: 0x34640006  ori         $a0, $v1, 0x6
    ctx->pc = 0x17aa14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
label_17aa18:
    // 0x17aa18: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x17aa18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_17aa1c:
    // 0x17aa1c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x17aa1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
label_17aa20:
    // 0x17aa20: 0xfc400010  sd          $zero, 0x10($v0)
    ctx->pc = 0x17aa20u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 0));
label_17aa24:
    // 0x17aa24: 0x3c036c04  lui         $v1, 0x6C04
    ctx->pc = 0x17aa24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27652 << 16));
label_17aa28:
    // 0x17aa28: 0xfc400018  sd          $zero, 0x18($v0)
    ctx->pc = 0x17aa28u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 0));
label_17aa2c:
    // 0x17aa2c: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x17aa2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_17aa30:
    // 0x17aa30: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x17aa30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
label_17aa34:
    // 0x17aa34: 0x34038003  ori         $v1, $zero, 0x8003
    ctx->pc = 0x17aa34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32771);
label_17aa38:
    // 0x17aa38: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x17aa38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_17aa3c:
    // 0x17aa3c: 0xfc430020  sd          $v1, 0x20($v0)
    ctx->pc = 0x17aa3cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 32), GPR_U64(ctx, 3));
label_17aa40:
    // 0x17aa40: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x17aa40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_17aa44:
    // 0x17aa44: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x17aa44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_17aa48:
    // 0x17aa48: 0xfc440028  sd          $a0, 0x28($v0)
    ctx->pc = 0x17aa48u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 40), GPR_U64(ctx, 4));
label_17aa4c:
    // 0x17aa4c: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x17aa4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
label_17aa50:
    // 0x17aa50: 0x24040044  addiu       $a0, $zero, 0x44
    ctx->pc = 0x17aa50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_17aa54:
    // 0x17aa54: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x17aa54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_17aa58:
    // 0x17aa58: 0x24030043  addiu       $v1, $zero, 0x43
    ctx->pc = 0x17aa58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
label_17aa5c:
    // 0x17aa5c: 0xfc440030  sd          $a0, 0x30($v0)
    ctx->pc = 0x17aa5cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 48), GPR_U64(ctx, 4));
label_17aa60:
    // 0x17aa60: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_17aa64:
    if (ctx->pc == 0x17AA64u) {
        ctx->pc = 0x17AA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AA60u;
        // 0x17aa64: 0xfc430038  sd          $v1, 0x38($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 56), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17AA68u;
        goto label_17aa68;
    }
    ctx->pc = 0x17AA60u;
    {
        const bool branch_taken_0x17aa60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AA60u;
        // 0x17aa64: 0xfc430038  sd          $v1, 0x38($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 56), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17aa60) {
            ctx->pc = 0x17AA78u;
            goto label_17aa78;
        }
    }
    ctx->pc = 0x17AA68u;
label_17aa68:
    // 0x17aa68: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x17aa68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
label_17aa6c:
    // 0x17aa6c: 0x3463000f  ori         $v1, $v1, 0xF
    ctx->pc = 0x17aa6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15);
label_17aa70:
    // 0x17aa70: 0x10000004  b           . + 4 + (0x4 << 2)
label_17aa74:
    if (ctx->pc == 0x17AA74u) {
        ctx->pc = 0x17AA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AA70u;
        // 0x17aa74: 0xfc430040  sd          $v1, 0x40($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 64), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17AA78u;
        goto label_17aa78;
    }
    ctx->pc = 0x17AA70u;
    {
        const bool branch_taken_0x17aa70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AA70u;
        // 0x17aa74: 0xfc430040  sd          $v1, 0x40($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 64), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17aa70) {
            ctx->pc = 0x17AA84u;
            goto label_17aa84;
        }
    }
    ctx->pc = 0x17AA78u;
label_17aa78:
    // 0x17aa78: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x17aa78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
label_17aa7c:
    // 0x17aa7c: 0x34631001  ori         $v1, $v1, 0x1001
    ctx->pc = 0x17aa7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4097);
label_17aa80:
    // 0x17aa80: 0xfc430040  sd          $v1, 0x40($v0)
    ctx->pc = 0x17aa80u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 64), GPR_U64(ctx, 3));
label_17aa84:
    // 0x17aa84: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x17aa84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_17aa88:
    // 0x17aa88: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x17aa88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_17aa8c:
    // 0x17aa8c: 0xfc440048  sd          $a0, 0x48($v0)
    ctx->pc = 0x17aa8cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 72), GPR_U64(ctx, 4));
label_17aa90:
    // 0x17aa90: 0xfc430050  sd          $v1, 0x50($v0)
    ctx->pc = 0x17aa90u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 80), GPR_U64(ctx, 3));
label_17aa94:
    // 0x17aa94: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x17aa94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_17aa98:
    // 0x17aa98: 0xfc440058  sd          $a0, 0x58($v0)
    ctx->pc = 0x17aa98u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 88), GPR_U64(ctx, 4));
label_17aa9c:
    // 0x17aa9c: 0x3c031400  lui         $v1, 0x1400
    ctx->pc = 0x17aa9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5120 << 16));
label_17aaa0:
    // 0x17aaa0: 0xfc400060  sd          $zero, 0x60($v0)
    ctx->pc = 0x17aaa0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 96), GPR_U64(ctx, 0));
label_17aaa4:
    // 0x17aaa4: 0xfc400068  sd          $zero, 0x68($v0)
    ctx->pc = 0x17aaa4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 104), GPR_U64(ctx, 0));
label_17aaa8:
    // 0x17aaa8: 0x8f858410  lw          $a1, -0x7BF0($gp)
    ctx->pc = 0x17aaa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935568)));
label_17aaac:
    // 0x17aaac: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x17aaacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_17aab0:
    // 0x17aab0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x17aab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_17aab4:
    // 0x17aab4: 0x24840400  addiu       $a0, $a0, 0x400
    ctx->pc = 0x17aab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1024));
label_17aab8:
    // 0x17aab8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x17aab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_17aabc:
    // 0x17aabc: 0xac430060  sw          $v1, 0x60($v0)
    ctx->pc = 0x17aabcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 3));
    ctx->pc = 0x17aac0u;
    return;
}

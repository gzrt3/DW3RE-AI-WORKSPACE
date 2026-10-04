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

// Function: FUN_0019b618
// Address: 0x19b618 - 0x29b620
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b618_part359(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x24a2f8u: goto label_24a2f8;
        case 0x24a2fcu: goto label_24a2fc;
        case 0x24a300u: goto label_24a300;
        case 0x24a304u: goto label_24a304;
        case 0x24a308u: goto label_24a308;
        case 0x24a30cu: goto label_24a30c;
        case 0x24a310u: goto label_24a310;
        case 0x24a314u: goto label_24a314;
        case 0x24a318u: goto label_24a318;
        case 0x24a31cu: goto label_24a31c;
        case 0x24a320u: goto label_24a320;
        case 0x24a324u: goto label_24a324;
        case 0x24a328u: goto label_24a328;
        case 0x24a32cu: goto label_24a32c;
        case 0x24a330u: goto label_24a330;
        case 0x24a334u: goto label_24a334;
        case 0x24a338u: goto label_24a338;
        case 0x24a33cu: goto label_24a33c;
        case 0x24a340u: goto label_24a340;
        case 0x24a344u: goto label_24a344;
        case 0x24a348u: goto label_24a348;
        case 0x24a34cu: goto label_24a34c;
        case 0x24a350u: goto label_24a350;
        case 0x24a354u: goto label_24a354;
        case 0x24a358u: goto label_24a358;
        case 0x24a35cu: goto label_24a35c;
        case 0x24a360u: goto label_24a360;
        case 0x24a364u: goto label_24a364;
        case 0x24a368u: goto label_24a368;
        case 0x24a36cu: goto label_24a36c;
        case 0x24a370u: goto label_24a370;
        case 0x24a374u: goto label_24a374;
        case 0x24a378u: goto label_24a378;
        case 0x24a37cu: goto label_24a37c;
        case 0x24a380u: goto label_24a380;
        case 0x24a384u: goto label_24a384;
        case 0x24a388u: goto label_24a388;
        case 0x24a38cu: goto label_24a38c;
        case 0x24a390u: goto label_24a390;
        case 0x24a394u: goto label_24a394;
        case 0x24a398u: goto label_24a398;
        case 0x24a39cu: goto label_24a39c;
        case 0x24a3a0u: goto label_24a3a0;
        case 0x24a3a4u: goto label_24a3a4;
        case 0x24a3a8u: goto label_24a3a8;
        case 0x24a3acu: goto label_24a3ac;
        case 0x24a3b0u: goto label_24a3b0;
        case 0x24a3b4u: goto label_24a3b4;
        case 0x24a3b8u: goto label_24a3b8;
        case 0x24a3bcu: goto label_24a3bc;
        case 0x24a3c0u: goto label_24a3c0;
        case 0x24a3c4u: goto label_24a3c4;
        case 0x24a3c8u: goto label_24a3c8;
        case 0x24a3ccu: goto label_24a3cc;
        case 0x24a3d0u: goto label_24a3d0;
        case 0x24a3d4u: goto label_24a3d4;
        case 0x24a3d8u: goto label_24a3d8;
        case 0x24a3dcu: goto label_24a3dc;
        case 0x24a3e0u: goto label_24a3e0;
        case 0x24a3e4u: goto label_24a3e4;
        case 0x24a3e8u: goto label_24a3e8;
        case 0x24a3ecu: goto label_24a3ec;
        case 0x24a3f0u: goto label_24a3f0;
        case 0x24a3f4u: goto label_24a3f4;
        case 0x24a3f8u: goto label_24a3f8;
        case 0x24a3fcu: goto label_24a3fc;
        case 0x24a400u: goto label_24a400;
        case 0x24a404u: goto label_24a404;
        case 0x24a408u: goto label_24a408;
        case 0x24a40cu: goto label_24a40c;
        case 0x24a410u: goto label_24a410;
        case 0x24a414u: goto label_24a414;
        case 0x24a418u: goto label_24a418;
        case 0x24a41cu: goto label_24a41c;
        case 0x24a420u: goto label_24a420;
        case 0x24a424u: goto label_24a424;
        case 0x24a428u: goto label_24a428;
        case 0x24a42cu: goto label_24a42c;
        case 0x24a430u: goto label_24a430;
        case 0x24a434u: goto label_24a434;
        case 0x24a438u: goto label_24a438;
        case 0x24a43cu: goto label_24a43c;
        case 0x24a440u: goto label_24a440;
        case 0x24a444u: goto label_24a444;
        case 0x24a448u: goto label_24a448;
        case 0x24a44cu: goto label_24a44c;
        case 0x24a450u: goto label_24a450;
        case 0x24a454u: goto label_24a454;
        case 0x24a458u: goto label_24a458;
        case 0x24a45cu: goto label_24a45c;
        case 0x24a460u: goto label_24a460;
        case 0x24a464u: goto label_24a464;
        case 0x24a468u: goto label_24a468;
        case 0x24a46cu: goto label_24a46c;
        case 0x24a470u: goto label_24a470;
        case 0x24a474u: goto label_24a474;
        case 0x24a478u: goto label_24a478;
        case 0x24a47cu: goto label_24a47c;
        case 0x24a480u: goto label_24a480;
        case 0x24a484u: goto label_24a484;
        case 0x24a488u: goto label_24a488;
        case 0x24a48cu: goto label_24a48c;
        case 0x24a490u: goto label_24a490;
        case 0x24a494u: goto label_24a494;
        case 0x24a498u: goto label_24a498;
        case 0x24a49cu: goto label_24a49c;
        case 0x24a4a0u: goto label_24a4a0;
        case 0x24a4a4u: goto label_24a4a4;
        case 0x24a4a8u: goto label_24a4a8;
        case 0x24a4acu: goto label_24a4ac;
        case 0x24a4b0u: goto label_24a4b0;
        case 0x24a4b4u: goto label_24a4b4;
        case 0x24a4b8u: goto label_24a4b8;
        case 0x24a4bcu: goto label_24a4bc;
        case 0x24a4c0u: goto label_24a4c0;
        case 0x24a4c4u: goto label_24a4c4;
        case 0x24a4c8u: goto label_24a4c8;
        case 0x24a4ccu: goto label_24a4cc;
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
        default: return;
    }

label_24a2f8:
    // 0x24a2f8: 0x1460ffb6  bnez        $v1, . + 4 + (-0x4A << 2)
label_24a2fc:
    if (ctx->pc == 0x24A2FCu) {
        ctx->pc = 0x24A2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A2F8u;
        // 0x24a2fc: 0x24a500d0  addiu       $a1, $a1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A300u;
        goto label_24a300;
    }
    ctx->pc = 0x24A2F8u;
    {
        const bool branch_taken_0x24a2f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24A2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A2F8u;
        // 0x24a2fc: 0x24a500d0  addiu       $a1, $a1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a2f8) {
            ctx->pc = 0x24A1D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x24a1d4; return; }
        }
    }
    ctx->pc = 0x24A300u;
label_24a300:
    // 0x24a300: 0x8f8492fc  lw          $a0, -0x6D04($gp)
    ctx->pc = 0x24a300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_24a304:
    // 0x24a304: 0x9083001c  lbu         $v1, 0x1C($a0)
    ctx->pc = 0x24a304u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
label_24a308:
    // 0x24a308: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x24a308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_24a30c:
    // 0x24a30c: 0x10000042  b           . + 4 + (0x42 << 2)
label_24a310:
    if (ctx->pc == 0x24A310u) {
        ctx->pc = 0x24A310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A30Cu;
        // 0x24a310: 0xa083001c  sb          $v1, 0x1C($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 28), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A314u;
        goto label_24a314;
    }
    ctx->pc = 0x24A30Cu;
    {
        const bool branch_taken_0x24a30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A30Cu;
        // 0x24a310: 0xa083001c  sb          $v1, 0x1C($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 28), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a30c) {
            ctx->pc = 0x24A418u;
            goto label_24a418;
        }
    }
    ctx->pc = 0x24A314u;
label_24a314:
    // 0x24a314: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_24a318:
    if (ctx->pc == 0x24A318u) {
        ctx->pc = 0x24A318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A314u;
        // 0x24a318: 0x24030080  addiu       $v1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A31Cu;
        goto label_24a31c;
    }
    ctx->pc = 0x24A314u;
    {
        const bool branch_taken_0x24a314 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A314u;
        // 0x24a318: 0x24030080  addiu       $v1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a314) {
            ctx->pc = 0x24A320u;
            goto label_24a320;
        }
    }
    ctx->pc = 0x24A31Cu;
label_24a31c:
    // 0x24a31c: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x24a31cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_24a320:
    // 0x24a320: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x24a320u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_24a324:
    // 0x24a324: 0x1020003c  beqz        $at, . + 4 + (0x3C << 2)
label_24a328:
    if (ctx->pc == 0x24A328u) {
        ctx->pc = 0x24A328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A324u;
        // 0x24a328: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A32Cu;
        goto label_24a32c;
    }
    ctx->pc = 0x24A324u;
    {
        const bool branch_taken_0x24a324 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A324u;
        // 0x24a328: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a324) {
            ctx->pc = 0x24A418u;
            goto label_24a418;
        }
    }
    ctx->pc = 0x24A32Cu;
label_24a32c:
    // 0x24a32c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24a32cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24a330:
    // 0x24a330: 0x8f8492fc  lw          $a0, -0x6D04($gp)
    ctx->pc = 0x24a330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_24a334:
    // 0x24a334: 0x2053021  addu        $a2, $s0, $a1
    ctx->pc = 0x24a334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_24a338:
    // 0x24a338: 0x24c36810  addiu       $v1, $a2, 0x6810
    ctx->pc = 0x24a338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 26640));
label_24a33c:
    // 0x24a33c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_24a340:
    if (ctx->pc == 0x24A340u) {
        ctx->pc = 0x24A340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A33Cu;
        // 0x24a340: 0x9084001c  lbu         $a0, 0x1C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A344u;
        goto label_24a344;
    }
    ctx->pc = 0x24A33Cu;
    {
        const bool branch_taken_0x24a33c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A33Cu;
        // 0x24a340: 0x9084001c  lbu         $a0, 0x1C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a33c) {
            ctx->pc = 0x24A354u;
            goto label_24a354;
        }
    }
    ctx->pc = 0x24A344u;
label_24a344:
    // 0x24a344: 0xa0c46883  sb          $a0, 0x6883($a2)
    ctx->pc = 0x24a344u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 26755), (uint8_t)GPR_U32(ctx, 4));
label_24a348:
    // 0x24a348: 0xa0c4689b  sb          $a0, 0x689B($a2)
    ctx->pc = 0x24a348u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 26779), (uint8_t)GPR_U32(ctx, 4));
label_24a34c:
    // 0x24a34c: 0xa0c468b3  sb          $a0, 0x68B3($a2)
    ctx->pc = 0x24a34cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 26803), (uint8_t)GPR_U32(ctx, 4));
label_24a350:
    // 0x24a350: 0xa0c468cb  sb          $a0, 0x68CB($a2)
    ctx->pc = 0x24a350u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 26827), (uint8_t)GPR_U32(ctx, 4));
label_24a354:
    // 0x24a354: 0x0  nop
    ctx->pc = 0x24a354u;
    // NOP
label_24a358:
    // 0x24a358: 0x8f8492fc  lw          $a0, -0x6D04($gp)
    ctx->pc = 0x24a358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_24a35c:
    // 0x24a35c: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x24a35cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_24a360:
    // 0x24a360: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_24a364:
    if (ctx->pc == 0x24A364u) {
        ctx->pc = 0x24A364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A360u;
        // 0x24a364: 0x9084001c  lbu         $a0, 0x1C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A368u;
        goto label_24a368;
    }
    ctx->pc = 0x24A360u;
    {
        const bool branch_taken_0x24a360 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A360u;
        // 0x24a364: 0x9084001c  lbu         $a0, 0x1C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a360) {
            ctx->pc = 0x24A378u;
            goto label_24a378;
        }
    }
    ctx->pc = 0x24A368u;
label_24a368:
    // 0x24a368: 0xa0c40083  sb          $a0, 0x83($a2)
    ctx->pc = 0x24a368u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 131), (uint8_t)GPR_U32(ctx, 4));
label_24a36c:
    // 0x24a36c: 0xa0c4009b  sb          $a0, 0x9B($a2)
    ctx->pc = 0x24a36cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 155), (uint8_t)GPR_U32(ctx, 4));
label_24a370:
    // 0x24a370: 0xa0c400b3  sb          $a0, 0xB3($a2)
    ctx->pc = 0x24a370u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 179), (uint8_t)GPR_U32(ctx, 4));
label_24a374:
    // 0x24a374: 0xa0c400cb  sb          $a0, 0xCB($a2)
    ctx->pc = 0x24a374u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 203), (uint8_t)GPR_U32(ctx, 4));
label_24a378:
    // 0x24a378: 0x8f8492fc  lw          $a0, -0x6D04($gp)
    ctx->pc = 0x24a378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_24a37c:
    // 0x24a37c: 0x3401d010  ori         $at, $zero, 0xD010
    ctx->pc = 0x24a37cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)53264);
label_24a380:
    // 0x24a380: 0xc11821  addu        $v1, $a2, $at
    ctx->pc = 0x24a380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_24a384:
    // 0x24a384: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_24a388:
    if (ctx->pc == 0x24A388u) {
        ctx->pc = 0x24A388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A384u;
        // 0x24a388: 0x9084001c  lbu         $a0, 0x1C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A38Cu;
        goto label_24a38c;
    }
    ctx->pc = 0x24A384u;
    {
        const bool branch_taken_0x24a384 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A384u;
        // 0x24a388: 0x9084001c  lbu         $a0, 0x1C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a384) {
            ctx->pc = 0x24A3BCu;
            goto label_24a3bc;
        }
    }
    ctx->pc = 0x24A38Cu;
label_24a38c:
    // 0x24a38c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24a38cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_24a390:
    // 0x24a390: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x24a390u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_24a394:
    // 0x24a394: 0xa024d083  sb          $a0, -0x2F7D($at)
    ctx->pc = 0x24a394u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294955139), (uint8_t)GPR_U32(ctx, 4));
label_24a398:
    // 0x24a398: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24a398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_24a39c:
    // 0x24a39c: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x24a39cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_24a3a0:
    // 0x24a3a0: 0xa024d09b  sb          $a0, -0x2F65($at)
    ctx->pc = 0x24a3a0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294955163), (uint8_t)GPR_U32(ctx, 4));
label_24a3a4:
    // 0x24a3a4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24a3a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_24a3a8:
    // 0x24a3a8: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x24a3a8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_24a3ac:
    // 0x24a3ac: 0xa024d0b3  sb          $a0, -0x2F4D($at)
    ctx->pc = 0x24a3acu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294955187), (uint8_t)GPR_U32(ctx, 4));
label_24a3b0:
    // 0x24a3b0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24a3b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_24a3b4:
    // 0x24a3b4: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x24a3b4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_24a3b8:
    // 0x24a3b8: 0xa024d0cb  sb          $a0, -0x2F35($at)
    ctx->pc = 0x24a3b8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294955211), (uint8_t)GPR_U32(ctx, 4));
label_24a3bc:
    // 0x24a3bc: 0x0  nop
    ctx->pc = 0x24a3bcu;
    // NOP
label_24a3c0:
    // 0x24a3c0: 0x8f8492fc  lw          $a0, -0x6D04($gp)
    ctx->pc = 0x24a3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_24a3c4:
    // 0x24a3c4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24a3c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_24a3c8:
    // 0x24a3c8: 0x34213810  ori         $at, $at, 0x3810
    ctx->pc = 0x24a3c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14352);
label_24a3cc:
    // 0x24a3cc: 0xc11821  addu        $v1, $a2, $at
    ctx->pc = 0x24a3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_24a3d0:
    // 0x24a3d0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_24a3d4:
    if (ctx->pc == 0x24A3D4u) {
        ctx->pc = 0x24A3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A3D0u;
        // 0x24a3d4: 0x9084001c  lbu         $a0, 0x1C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A3D8u;
        goto label_24a3d8;
    }
    ctx->pc = 0x24A3D0u;
    {
        const bool branch_taken_0x24a3d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A3D0u;
        // 0x24a3d4: 0x9084001c  lbu         $a0, 0x1C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a3d0) {
            ctx->pc = 0x24A408u;
            goto label_24a408;
        }
    }
    ctx->pc = 0x24A3D8u;
label_24a3d8:
    // 0x24a3d8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24a3d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_24a3dc:
    // 0x24a3dc: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x24a3dcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_24a3e0:
    // 0x24a3e0: 0xa0243883  sb          $a0, 0x3883($at)
    ctx->pc = 0x24a3e0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 14467), (uint8_t)GPR_U32(ctx, 4));
label_24a3e4:
    // 0x24a3e4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24a3e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_24a3e8:
    // 0x24a3e8: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x24a3e8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_24a3ec:
    // 0x24a3ec: 0xa024389b  sb          $a0, 0x389B($at)
    ctx->pc = 0x24a3ecu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 14491), (uint8_t)GPR_U32(ctx, 4));
label_24a3f0:
    // 0x24a3f0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24a3f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_24a3f4:
    // 0x24a3f4: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x24a3f4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_24a3f8:
    // 0x24a3f8: 0xa02438b3  sb          $a0, 0x38B3($at)
    ctx->pc = 0x24a3f8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 14515), (uint8_t)GPR_U32(ctx, 4));
label_24a3fc:
    // 0x24a3fc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x24a3fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_24a400:
    // 0x24a400: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x24a400u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
label_24a404:
    // 0x24a404: 0xa02438cb  sb          $a0, 0x38CB($at)
    ctx->pc = 0x24a404u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 14539), (uint8_t)GPR_U32(ctx, 4));
label_24a408:
    // 0x24a408: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x24a408u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_24a40c:
    // 0x24a40c: 0xe2182a  slt         $v1, $a3, $v0
    ctx->pc = 0x24a40cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_24a410:
    // 0x24a410: 0x1460ffc7  bnez        $v1, . + 4 + (-0x39 << 2)
label_24a414:
    if (ctx->pc == 0x24A414u) {
        ctx->pc = 0x24A414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A410u;
        // 0x24a414: 0x24a500d0  addiu       $a1, $a1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A418u;
        goto label_24a418;
    }
    ctx->pc = 0x24A410u;
    {
        const bool branch_taken_0x24a410 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24A414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A410u;
        // 0x24a414: 0x24a500d0  addiu       $a1, $a1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a410) {
            ctx->pc = 0x24A330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24a330;
        }
    }
    ctx->pc = 0x24A418u;
label_24a418:
    // 0x24a418: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24a418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_24a41c:
    // 0x24a41c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24a41cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_24a420:
    // 0x24a420: 0x3e00008  jr          $ra
label_24a424:
    if (ctx->pc == 0x24A424u) {
        ctx->pc = 0x24A424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A420u;
        // 0x24a424: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A428u;
        goto label_24a428;
    }
    ctx->pc = 0x24A420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A420u;
        // 0x24a424: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A428u;
label_24a428:
    // 0x24a428: 0x0  nop
    ctx->pc = 0x24a428u;
    // NOP
label_24a42c:
    // 0x24a42c: 0x0  nop
    ctx->pc = 0x24a42cu;
    // NOP
label_24a430:
    // 0x24a430: 0x8f8792fc  lw          $a3, -0x6D04($gp)
    ctx->pc = 0x24a430u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
label_24a434:
    // 0x24a434: 0x8ce60014  lw          $a2, 0x14($a3)
    ctx->pc = 0x24a434u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
label_24a438:
    // 0x24a438: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x24a438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_24a43c:
    // 0x24a43c: 0x8ce30010  lw          $v1, 0x10($a3)
    ctx->pc = 0x24a43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
label_24a440:
    // 0x24a440: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x24a440u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_24a444:
    // 0x24a444: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x24a444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_24a448:
    // 0x24a448: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x24a448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_24a44c:
    // 0x24a44c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x24a44cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_24a450:
    // 0x24a450: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x24a450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_24a454:
    // 0x24a454: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x24a454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_24a458:
    // 0x24a458: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x24a458u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_24a45c:
    // 0x24a45c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x24a45cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_24a460:
    // 0x24a460: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_24a464:
    if (ctx->pc == 0x24A464u) {
        ctx->pc = 0x24A464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A460u;
        // 0x24a464: 0x3c030025  lui         $v1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A468u;
        goto label_24a468;
    }
    ctx->pc = 0x24A460u;
    {
        const bool branch_taken_0x24a460 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A460u;
        // 0x24a464: 0x3c030025  lui         $v1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a460) {
            ctx->pc = 0x24A470u;
            goto label_24a470;
        }
    }
    ctx->pc = 0x24A468u;
label_24a468:
    // 0x24a468: 0x2463a050  addiu       $v1, $v1, -0x5FB0
    ctx->pc = 0x24a468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942800));
label_24a46c:
    // 0x24a46c: 0xace30018  sw          $v1, 0x18($a3)
    ctx->pc = 0x24a46cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
label_24a470:
    // 0x24a470: 0x3e00008  jr          $ra
label_24a474:
    if (ctx->pc == 0x24A474u) {
        ctx->pc = 0x24A478u;
        goto label_24a478;
    }
    ctx->pc = 0x24A470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A478u;
label_24a478:
    // 0x24a478: 0x0  nop
    ctx->pc = 0x24a478u;
    // NOP
label_24a47c:
    // 0x24a47c: 0x0  nop
    ctx->pc = 0x24a47cu;
    // NOP
label_24a480:
    // 0x24a480: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x24a480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_24a484:
    // 0x24a484: 0x28810018  slti        $at, $a0, 0x18
    ctx->pc = 0x24a484u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)24) ? 1 : 0);
label_24a488:
    // 0x24a488: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x24a488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_24a48c:
    // 0x24a48c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x24a48cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_24a490:
    // 0x24a490: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x24a490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_24a494:
    // 0x24a494: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x24a494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_24a498:
    // 0x24a498: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x24a498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_24a49c:
    // 0x24a49c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x24a49cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_24a4a0:
    // 0x24a4a0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x24a4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_24a4a4:
    // 0x24a4a4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x24a4a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_24a4a8:
    // 0x24a4a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x24a4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_24a4ac:
    // 0x24a4ac: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_24a4b0:
    if (ctx->pc == 0x24A4B0u) {
        ctx->pc = 0x24A4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A4ACu;
        // 0x24a4b0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A4B4u;
        goto label_24a4b4;
    }
    ctx->pc = 0x24A4ACu;
    {
        const bool branch_taken_0x24a4ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A4ACu;
        // 0x24a4b0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a4ac) {
            ctx->pc = 0x24A4E4u;
            goto label_24a4e4;
        }
    }
    ctx->pc = 0x24A4B4u;
label_24a4b4:
    // 0x24a4b4: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x24a4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
label_24a4b8:
    // 0x24a4b8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x24a4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_24a4bc:
    // 0x24a4bc: 0x24421d84  addiu       $v0, $v0, 0x1D84
    ctx->pc = 0x24a4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7556));
label_24a4c0:
    // 0x24a4c0: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x24a4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_24a4c4:
    // 0x24a4c4: 0x84770000  lh          $s7, 0x0($v1)
    ctx->pc = 0x24a4c4u;
    SET_GPR_S32(ctx, 23, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_24a4c8:
    // 0x24a4c8: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x24a4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
label_24a4cc:
    // 0x24a4cc: 0x24421d86  addiu       $v0, $v0, 0x1D86
    ctx->pc = 0x24a4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7558));
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
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199100u, 0x24A860u, 0x24A868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
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
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198538u, 0x24A874u, 0x24A87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
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
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B108u, 0x24A894u, 0x24A89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
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
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x24A910u, 0x24A918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
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
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B260u, 0x24A940u, 0x24A948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
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
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B118u, 0x24A948u, 0x24A950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
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
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A9B0u, 0x24A97Cu, 0x24A984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
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
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199100u, 0x24A988u, 0x24A990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
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
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198538u, 0x24A99Cu, 0x24A9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
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
            { ctx->pc = 0x24aadc; return; }
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
    ctx->pc = 0x24aac8u;
    return;
}

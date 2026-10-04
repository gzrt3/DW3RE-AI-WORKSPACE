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

// Function: FUN_0019b910
// Address: 0x19b910 - 0x29b9f0
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b910_part293(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x22a250u: goto label_22a250;
        case 0x22a254u: goto label_22a254;
        case 0x22a258u: goto label_22a258;
        case 0x22a25cu: goto label_22a25c;
        case 0x22a260u: goto label_22a260;
        case 0x22a264u: goto label_22a264;
        case 0x22a268u: goto label_22a268;
        case 0x22a26cu: goto label_22a26c;
        case 0x22a270u: goto label_22a270;
        case 0x22a274u: goto label_22a274;
        case 0x22a278u: goto label_22a278;
        case 0x22a27cu: goto label_22a27c;
        case 0x22a280u: goto label_22a280;
        case 0x22a284u: goto label_22a284;
        case 0x22a288u: goto label_22a288;
        case 0x22a28cu: goto label_22a28c;
        case 0x22a290u: goto label_22a290;
        case 0x22a294u: goto label_22a294;
        case 0x22a298u: goto label_22a298;
        case 0x22a29cu: goto label_22a29c;
        case 0x22a2a0u: goto label_22a2a0;
        case 0x22a2a4u: goto label_22a2a4;
        case 0x22a2a8u: goto label_22a2a8;
        case 0x22a2acu: goto label_22a2ac;
        case 0x22a2b0u: goto label_22a2b0;
        case 0x22a2b4u: goto label_22a2b4;
        case 0x22a2b8u: goto label_22a2b8;
        case 0x22a2bcu: goto label_22a2bc;
        case 0x22a2c0u: goto label_22a2c0;
        case 0x22a2c4u: goto label_22a2c4;
        case 0x22a2c8u: goto label_22a2c8;
        case 0x22a2ccu: goto label_22a2cc;
        case 0x22a2d0u: goto label_22a2d0;
        case 0x22a2d4u: goto label_22a2d4;
        case 0x22a2d8u: goto label_22a2d8;
        case 0x22a2dcu: goto label_22a2dc;
        case 0x22a2e0u: goto label_22a2e0;
        case 0x22a2e4u: goto label_22a2e4;
        case 0x22a2e8u: goto label_22a2e8;
        case 0x22a2ecu: goto label_22a2ec;
        case 0x22a2f0u: goto label_22a2f0;
        case 0x22a2f4u: goto label_22a2f4;
        case 0x22a2f8u: goto label_22a2f8;
        case 0x22a2fcu: goto label_22a2fc;
        case 0x22a300u: goto label_22a300;
        case 0x22a304u: goto label_22a304;
        case 0x22a308u: goto label_22a308;
        case 0x22a30cu: goto label_22a30c;
        case 0x22a310u: goto label_22a310;
        case 0x22a314u: goto label_22a314;
        case 0x22a318u: goto label_22a318;
        case 0x22a31cu: goto label_22a31c;
        case 0x22a320u: goto label_22a320;
        case 0x22a324u: goto label_22a324;
        case 0x22a328u: goto label_22a328;
        case 0x22a32cu: goto label_22a32c;
        case 0x22a330u: goto label_22a330;
        case 0x22a334u: goto label_22a334;
        case 0x22a338u: goto label_22a338;
        case 0x22a33cu: goto label_22a33c;
        case 0x22a340u: goto label_22a340;
        case 0x22a344u: goto label_22a344;
        case 0x22a348u: goto label_22a348;
        case 0x22a34cu: goto label_22a34c;
        case 0x22a350u: goto label_22a350;
        case 0x22a354u: goto label_22a354;
        case 0x22a358u: goto label_22a358;
        case 0x22a35cu: goto label_22a35c;
        case 0x22a360u: goto label_22a360;
        case 0x22a364u: goto label_22a364;
        case 0x22a368u: goto label_22a368;
        case 0x22a36cu: goto label_22a36c;
        case 0x22a370u: goto label_22a370;
        case 0x22a374u: goto label_22a374;
        case 0x22a378u: goto label_22a378;
        case 0x22a37cu: goto label_22a37c;
        case 0x22a380u: goto label_22a380;
        case 0x22a384u: goto label_22a384;
        case 0x22a388u: goto label_22a388;
        case 0x22a38cu: goto label_22a38c;
        case 0x22a390u: goto label_22a390;
        case 0x22a394u: goto label_22a394;
        case 0x22a398u: goto label_22a398;
        case 0x22a39cu: goto label_22a39c;
        case 0x22a3a0u: goto label_22a3a0;
        case 0x22a3a4u: goto label_22a3a4;
        case 0x22a3a8u: goto label_22a3a8;
        case 0x22a3acu: goto label_22a3ac;
        case 0x22a3b0u: goto label_22a3b0;
        case 0x22a3b4u: goto label_22a3b4;
        case 0x22a3b8u: goto label_22a3b8;
        case 0x22a3bcu: goto label_22a3bc;
        case 0x22a3c0u: goto label_22a3c0;
        case 0x22a3c4u: goto label_22a3c4;
        case 0x22a3c8u: goto label_22a3c8;
        case 0x22a3ccu: goto label_22a3cc;
        case 0x22a3d0u: goto label_22a3d0;
        case 0x22a3d4u: goto label_22a3d4;
        case 0x22a3d8u: goto label_22a3d8;
        case 0x22a3dcu: goto label_22a3dc;
        case 0x22a3e0u: goto label_22a3e0;
        case 0x22a3e4u: goto label_22a3e4;
        case 0x22a3e8u: goto label_22a3e8;
        case 0x22a3ecu: goto label_22a3ec;
        case 0x22a3f0u: goto label_22a3f0;
        case 0x22a3f4u: goto label_22a3f4;
        case 0x22a3f8u: goto label_22a3f8;
        case 0x22a3fcu: goto label_22a3fc;
        case 0x22a400u: goto label_22a400;
        case 0x22a404u: goto label_22a404;
        case 0x22a408u: goto label_22a408;
        case 0x22a40cu: goto label_22a40c;
        case 0x22a410u: goto label_22a410;
        case 0x22a414u: goto label_22a414;
        case 0x22a418u: goto label_22a418;
        case 0x22a41cu: goto label_22a41c;
        case 0x22a420u: goto label_22a420;
        case 0x22a424u: goto label_22a424;
        case 0x22a428u: goto label_22a428;
        case 0x22a42cu: goto label_22a42c;
        case 0x22a430u: goto label_22a430;
        case 0x22a434u: goto label_22a434;
        case 0x22a438u: goto label_22a438;
        case 0x22a43cu: goto label_22a43c;
        case 0x22a440u: goto label_22a440;
        case 0x22a444u: goto label_22a444;
        case 0x22a448u: goto label_22a448;
        case 0x22a44cu: goto label_22a44c;
        case 0x22a450u: goto label_22a450;
        case 0x22a454u: goto label_22a454;
        case 0x22a458u: goto label_22a458;
        case 0x22a45cu: goto label_22a45c;
        case 0x22a460u: goto label_22a460;
        case 0x22a464u: goto label_22a464;
        case 0x22a468u: goto label_22a468;
        case 0x22a46cu: goto label_22a46c;
        case 0x22a470u: goto label_22a470;
        case 0x22a474u: goto label_22a474;
        case 0x22a478u: goto label_22a478;
        case 0x22a47cu: goto label_22a47c;
        case 0x22a480u: goto label_22a480;
        case 0x22a484u: goto label_22a484;
        case 0x22a488u: goto label_22a488;
        case 0x22a48cu: goto label_22a48c;
        case 0x22a490u: goto label_22a490;
        case 0x22a494u: goto label_22a494;
        case 0x22a498u: goto label_22a498;
        case 0x22a49cu: goto label_22a49c;
        case 0x22a4a0u: goto label_22a4a0;
        case 0x22a4a4u: goto label_22a4a4;
        case 0x22a4a8u: goto label_22a4a8;
        case 0x22a4acu: goto label_22a4ac;
        case 0x22a4b0u: goto label_22a4b0;
        case 0x22a4b4u: goto label_22a4b4;
        case 0x22a4b8u: goto label_22a4b8;
        case 0x22a4bcu: goto label_22a4bc;
        case 0x22a4c0u: goto label_22a4c0;
        case 0x22a4c4u: goto label_22a4c4;
        case 0x22a4c8u: goto label_22a4c8;
        case 0x22a4ccu: goto label_22a4cc;
        case 0x22a4d0u: goto label_22a4d0;
        case 0x22a4d4u: goto label_22a4d4;
        case 0x22a4d8u: goto label_22a4d8;
        case 0x22a4dcu: goto label_22a4dc;
        case 0x22a4e0u: goto label_22a4e0;
        case 0x22a4e4u: goto label_22a4e4;
        case 0x22a4e8u: goto label_22a4e8;
        case 0x22a4ecu: goto label_22a4ec;
        case 0x22a4f0u: goto label_22a4f0;
        case 0x22a4f4u: goto label_22a4f4;
        case 0x22a4f8u: goto label_22a4f8;
        case 0x22a4fcu: goto label_22a4fc;
        case 0x22a500u: goto label_22a500;
        case 0x22a504u: goto label_22a504;
        case 0x22a508u: goto label_22a508;
        case 0x22a50cu: goto label_22a50c;
        case 0x22a510u: goto label_22a510;
        case 0x22a514u: goto label_22a514;
        case 0x22a518u: goto label_22a518;
        case 0x22a51cu: goto label_22a51c;
        case 0x22a520u: goto label_22a520;
        case 0x22a524u: goto label_22a524;
        case 0x22a528u: goto label_22a528;
        case 0x22a52cu: goto label_22a52c;
        case 0x22a530u: goto label_22a530;
        case 0x22a534u: goto label_22a534;
        case 0x22a538u: goto label_22a538;
        case 0x22a53cu: goto label_22a53c;
        case 0x22a540u: goto label_22a540;
        case 0x22a544u: goto label_22a544;
        case 0x22a548u: goto label_22a548;
        case 0x22a54cu: goto label_22a54c;
        case 0x22a550u: goto label_22a550;
        case 0x22a554u: goto label_22a554;
        case 0x22a558u: goto label_22a558;
        case 0x22a55cu: goto label_22a55c;
        case 0x22a560u: goto label_22a560;
        case 0x22a564u: goto label_22a564;
        case 0x22a568u: goto label_22a568;
        case 0x22a56cu: goto label_22a56c;
        case 0x22a570u: goto label_22a570;
        case 0x22a574u: goto label_22a574;
        case 0x22a578u: goto label_22a578;
        case 0x22a57cu: goto label_22a57c;
        case 0x22a580u: goto label_22a580;
        case 0x22a584u: goto label_22a584;
        case 0x22a588u: goto label_22a588;
        case 0x22a58cu: goto label_22a58c;
        case 0x22a590u: goto label_22a590;
        case 0x22a594u: goto label_22a594;
        case 0x22a598u: goto label_22a598;
        case 0x22a59cu: goto label_22a59c;
        case 0x22a5a0u: goto label_22a5a0;
        case 0x22a5a4u: goto label_22a5a4;
        case 0x22a5a8u: goto label_22a5a8;
        case 0x22a5acu: goto label_22a5ac;
        case 0x22a5b0u: goto label_22a5b0;
        case 0x22a5b4u: goto label_22a5b4;
        case 0x22a5b8u: goto label_22a5b8;
        case 0x22a5bcu: goto label_22a5bc;
        case 0x22a5c0u: goto label_22a5c0;
        case 0x22a5c4u: goto label_22a5c4;
        case 0x22a5c8u: goto label_22a5c8;
        case 0x22a5ccu: goto label_22a5cc;
        case 0x22a5d0u: goto label_22a5d0;
        case 0x22a5d4u: goto label_22a5d4;
        case 0x22a5d8u: goto label_22a5d8;
        case 0x22a5dcu: goto label_22a5dc;
        case 0x22a5e0u: goto label_22a5e0;
        case 0x22a5e4u: goto label_22a5e4;
        case 0x22a5e8u: goto label_22a5e8;
        case 0x22a5ecu: goto label_22a5ec;
        case 0x22a5f0u: goto label_22a5f0;
        case 0x22a5f4u: goto label_22a5f4;
        case 0x22a5f8u: goto label_22a5f8;
        case 0x22a5fcu: goto label_22a5fc;
        case 0x22a600u: goto label_22a600;
        case 0x22a604u: goto label_22a604;
        case 0x22a608u: goto label_22a608;
        case 0x22a60cu: goto label_22a60c;
        case 0x22a610u: goto label_22a610;
        case 0x22a614u: goto label_22a614;
        case 0x22a618u: goto label_22a618;
        case 0x22a61cu: goto label_22a61c;
        case 0x22a620u: goto label_22a620;
        case 0x22a624u: goto label_22a624;
        case 0x22a628u: goto label_22a628;
        case 0x22a62cu: goto label_22a62c;
        case 0x22a630u: goto label_22a630;
        case 0x22a634u: goto label_22a634;
        case 0x22a638u: goto label_22a638;
        case 0x22a63cu: goto label_22a63c;
        case 0x22a640u: goto label_22a640;
        case 0x22a644u: goto label_22a644;
        case 0x22a648u: goto label_22a648;
        case 0x22a64cu: goto label_22a64c;
        case 0x22a650u: goto label_22a650;
        case 0x22a654u: goto label_22a654;
        case 0x22a658u: goto label_22a658;
        case 0x22a65cu: goto label_22a65c;
        case 0x22a660u: goto label_22a660;
        case 0x22a664u: goto label_22a664;
        case 0x22a668u: goto label_22a668;
        case 0x22a66cu: goto label_22a66c;
        case 0x22a670u: goto label_22a670;
        case 0x22a674u: goto label_22a674;
        case 0x22a678u: goto label_22a678;
        case 0x22a67cu: goto label_22a67c;
        case 0x22a680u: goto label_22a680;
        case 0x22a684u: goto label_22a684;
        case 0x22a688u: goto label_22a688;
        case 0x22a68cu: goto label_22a68c;
        case 0x22a690u: goto label_22a690;
        case 0x22a694u: goto label_22a694;
        case 0x22a698u: goto label_22a698;
        case 0x22a69cu: goto label_22a69c;
        case 0x22a6a0u: goto label_22a6a0;
        case 0x22a6a4u: goto label_22a6a4;
        case 0x22a6a8u: goto label_22a6a8;
        case 0x22a6acu: goto label_22a6ac;
        case 0x22a6b0u: goto label_22a6b0;
        case 0x22a6b4u: goto label_22a6b4;
        case 0x22a6b8u: goto label_22a6b8;
        case 0x22a6bcu: goto label_22a6bc;
        case 0x22a6c0u: goto label_22a6c0;
        case 0x22a6c4u: goto label_22a6c4;
        case 0x22a6c8u: goto label_22a6c8;
        case 0x22a6ccu: goto label_22a6cc;
        case 0x22a6d0u: goto label_22a6d0;
        case 0x22a6d4u: goto label_22a6d4;
        case 0x22a6d8u: goto label_22a6d8;
        case 0x22a6dcu: goto label_22a6dc;
        case 0x22a6e0u: goto label_22a6e0;
        case 0x22a6e4u: goto label_22a6e4;
        case 0x22a6e8u: goto label_22a6e8;
        case 0x22a6ecu: goto label_22a6ec;
        case 0x22a6f0u: goto label_22a6f0;
        case 0x22a6f4u: goto label_22a6f4;
        case 0x22a6f8u: goto label_22a6f8;
        case 0x22a6fcu: goto label_22a6fc;
        case 0x22a700u: goto label_22a700;
        case 0x22a704u: goto label_22a704;
        case 0x22a708u: goto label_22a708;
        case 0x22a70cu: goto label_22a70c;
        case 0x22a710u: goto label_22a710;
        case 0x22a714u: goto label_22a714;
        case 0x22a718u: goto label_22a718;
        case 0x22a71cu: goto label_22a71c;
        case 0x22a720u: goto label_22a720;
        case 0x22a724u: goto label_22a724;
        case 0x22a728u: goto label_22a728;
        case 0x22a72cu: goto label_22a72c;
        case 0x22a730u: goto label_22a730;
        case 0x22a734u: goto label_22a734;
        case 0x22a738u: goto label_22a738;
        case 0x22a73cu: goto label_22a73c;
        case 0x22a740u: goto label_22a740;
        case 0x22a744u: goto label_22a744;
        case 0x22a748u: goto label_22a748;
        case 0x22a74cu: goto label_22a74c;
        case 0x22a750u: goto label_22a750;
        case 0x22a754u: goto label_22a754;
        case 0x22a758u: goto label_22a758;
        case 0x22a75cu: goto label_22a75c;
        case 0x22a760u: goto label_22a760;
        case 0x22a764u: goto label_22a764;
        case 0x22a768u: goto label_22a768;
        case 0x22a76cu: goto label_22a76c;
        case 0x22a770u: goto label_22a770;
        case 0x22a774u: goto label_22a774;
        case 0x22a778u: goto label_22a778;
        case 0x22a77cu: goto label_22a77c;
        case 0x22a780u: goto label_22a780;
        case 0x22a784u: goto label_22a784;
        case 0x22a788u: goto label_22a788;
        case 0x22a78cu: goto label_22a78c;
        case 0x22a790u: goto label_22a790;
        case 0x22a794u: goto label_22a794;
        case 0x22a798u: goto label_22a798;
        case 0x22a79cu: goto label_22a79c;
        case 0x22a7a0u: goto label_22a7a0;
        case 0x22a7a4u: goto label_22a7a4;
        case 0x22a7a8u: goto label_22a7a8;
        case 0x22a7acu: goto label_22a7ac;
        case 0x22a7b0u: goto label_22a7b0;
        case 0x22a7b4u: goto label_22a7b4;
        case 0x22a7b8u: goto label_22a7b8;
        case 0x22a7bcu: goto label_22a7bc;
        case 0x22a7c0u: goto label_22a7c0;
        case 0x22a7c4u: goto label_22a7c4;
        case 0x22a7c8u: goto label_22a7c8;
        case 0x22a7ccu: goto label_22a7cc;
        case 0x22a7d0u: goto label_22a7d0;
        case 0x22a7d4u: goto label_22a7d4;
        case 0x22a7d8u: goto label_22a7d8;
        case 0x22a7dcu: goto label_22a7dc;
        case 0x22a7e0u: goto label_22a7e0;
        case 0x22a7e4u: goto label_22a7e4;
        case 0x22a7e8u: goto label_22a7e8;
        case 0x22a7ecu: goto label_22a7ec;
        case 0x22a7f0u: goto label_22a7f0;
        case 0x22a7f4u: goto label_22a7f4;
        case 0x22a7f8u: goto label_22a7f8;
        case 0x22a7fcu: goto label_22a7fc;
        case 0x22a800u: goto label_22a800;
        case 0x22a804u: goto label_22a804;
        case 0x22a808u: goto label_22a808;
        case 0x22a80cu: goto label_22a80c;
        case 0x22a810u: goto label_22a810;
        case 0x22a814u: goto label_22a814;
        case 0x22a818u: goto label_22a818;
        case 0x22a81cu: goto label_22a81c;
        case 0x22a820u: goto label_22a820;
        case 0x22a824u: goto label_22a824;
        case 0x22a828u: goto label_22a828;
        case 0x22a82cu: goto label_22a82c;
        case 0x22a830u: goto label_22a830;
        case 0x22a834u: goto label_22a834;
        case 0x22a838u: goto label_22a838;
        case 0x22a83cu: goto label_22a83c;
        case 0x22a840u: goto label_22a840;
        case 0x22a844u: goto label_22a844;
        case 0x22a848u: goto label_22a848;
        case 0x22a84cu: goto label_22a84c;
        case 0x22a850u: goto label_22a850;
        case 0x22a854u: goto label_22a854;
        case 0x22a858u: goto label_22a858;
        case 0x22a85cu: goto label_22a85c;
        case 0x22a860u: goto label_22a860;
        case 0x22a864u: goto label_22a864;
        case 0x22a868u: goto label_22a868;
        case 0x22a86cu: goto label_22a86c;
        case 0x22a870u: goto label_22a870;
        case 0x22a874u: goto label_22a874;
        case 0x22a878u: goto label_22a878;
        case 0x22a87cu: goto label_22a87c;
        case 0x22a880u: goto label_22a880;
        case 0x22a884u: goto label_22a884;
        case 0x22a888u: goto label_22a888;
        case 0x22a88cu: goto label_22a88c;
        case 0x22a890u: goto label_22a890;
        case 0x22a894u: goto label_22a894;
        case 0x22a898u: goto label_22a898;
        case 0x22a89cu: goto label_22a89c;
        case 0x22a8a0u: goto label_22a8a0;
        case 0x22a8a4u: goto label_22a8a4;
        case 0x22a8a8u: goto label_22a8a8;
        case 0x22a8acu: goto label_22a8ac;
        case 0x22a8b0u: goto label_22a8b0;
        case 0x22a8b4u: goto label_22a8b4;
        case 0x22a8b8u: goto label_22a8b8;
        case 0x22a8bcu: goto label_22a8bc;
        case 0x22a8c0u: goto label_22a8c0;
        case 0x22a8c4u: goto label_22a8c4;
        case 0x22a8c8u: goto label_22a8c8;
        case 0x22a8ccu: goto label_22a8cc;
        case 0x22a8d0u: goto label_22a8d0;
        case 0x22a8d4u: goto label_22a8d4;
        case 0x22a8d8u: goto label_22a8d8;
        case 0x22a8dcu: goto label_22a8dc;
        case 0x22a8e0u: goto label_22a8e0;
        case 0x22a8e4u: goto label_22a8e4;
        case 0x22a8e8u: goto label_22a8e8;
        case 0x22a8ecu: goto label_22a8ec;
        case 0x22a8f0u: goto label_22a8f0;
        case 0x22a8f4u: goto label_22a8f4;
        case 0x22a8f8u: goto label_22a8f8;
        case 0x22a8fcu: goto label_22a8fc;
        case 0x22a900u: goto label_22a900;
        case 0x22a904u: goto label_22a904;
        case 0x22a908u: goto label_22a908;
        case 0x22a90cu: goto label_22a90c;
        case 0x22a910u: goto label_22a910;
        case 0x22a914u: goto label_22a914;
        case 0x22a918u: goto label_22a918;
        case 0x22a91cu: goto label_22a91c;
        case 0x22a920u: goto label_22a920;
        case 0x22a924u: goto label_22a924;
        case 0x22a928u: goto label_22a928;
        case 0x22a92cu: goto label_22a92c;
        case 0x22a930u: goto label_22a930;
        case 0x22a934u: goto label_22a934;
        case 0x22a938u: goto label_22a938;
        case 0x22a93cu: goto label_22a93c;
        case 0x22a940u: goto label_22a940;
        case 0x22a944u: goto label_22a944;
        case 0x22a948u: goto label_22a948;
        case 0x22a94cu: goto label_22a94c;
        case 0x22a950u: goto label_22a950;
        case 0x22a954u: goto label_22a954;
        case 0x22a958u: goto label_22a958;
        case 0x22a95cu: goto label_22a95c;
        case 0x22a960u: goto label_22a960;
        case 0x22a964u: goto label_22a964;
        case 0x22a968u: goto label_22a968;
        case 0x22a96cu: goto label_22a96c;
        case 0x22a970u: goto label_22a970;
        case 0x22a974u: goto label_22a974;
        case 0x22a978u: goto label_22a978;
        case 0x22a97cu: goto label_22a97c;
        case 0x22a980u: goto label_22a980;
        case 0x22a984u: goto label_22a984;
        case 0x22a988u: goto label_22a988;
        case 0x22a98cu: goto label_22a98c;
        case 0x22a990u: goto label_22a990;
        case 0x22a994u: goto label_22a994;
        case 0x22a998u: goto label_22a998;
        case 0x22a99cu: goto label_22a99c;
        case 0x22a9a0u: goto label_22a9a0;
        case 0x22a9a4u: goto label_22a9a4;
        case 0x22a9a8u: goto label_22a9a8;
        case 0x22a9acu: goto label_22a9ac;
        case 0x22a9b0u: goto label_22a9b0;
        case 0x22a9b4u: goto label_22a9b4;
        case 0x22a9b8u: goto label_22a9b8;
        case 0x22a9bcu: goto label_22a9bc;
        case 0x22a9c0u: goto label_22a9c0;
        case 0x22a9c4u: goto label_22a9c4;
        case 0x22a9c8u: goto label_22a9c8;
        case 0x22a9ccu: goto label_22a9cc;
        case 0x22a9d0u: goto label_22a9d0;
        case 0x22a9d4u: goto label_22a9d4;
        case 0x22a9d8u: goto label_22a9d8;
        case 0x22a9dcu: goto label_22a9dc;
        case 0x22a9e0u: goto label_22a9e0;
        case 0x22a9e4u: goto label_22a9e4;
        case 0x22a9e8u: goto label_22a9e8;
        case 0x22a9ecu: goto label_22a9ec;
        case 0x22a9f0u: goto label_22a9f0;
        case 0x22a9f4u: goto label_22a9f4;
        case 0x22a9f8u: goto label_22a9f8;
        case 0x22a9fcu: goto label_22a9fc;
        case 0x22aa00u: goto label_22aa00;
        case 0x22aa04u: goto label_22aa04;
        case 0x22aa08u: goto label_22aa08;
        case 0x22aa0cu: goto label_22aa0c;
        case 0x22aa10u: goto label_22aa10;
        case 0x22aa14u: goto label_22aa14;
        case 0x22aa18u: goto label_22aa18;
        case 0x22aa1cu: goto label_22aa1c;
        default: return;
    }

label_22a250:
    // 0x22a250: 0x1010  mfhi        $v0
    ctx->pc = 0x22a250u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_22a254:
    // 0x22a254: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x22a254u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_22a258:
    // 0x22a258: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x22a258u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_22a25c:
    // 0x22a25c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22a25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22a260:
    // 0x22a260: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x22a260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_22a264:
    // 0x22a264: 0x284100fa  slti        $at, $v0, 0xFA
    ctx->pc = 0x22a264u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)250) ? 1 : 0);
label_22a268:
    // 0x22a268: 0x81100a  movz        $v0, $a0, $at
    ctx->pc = 0x22a268u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_22a26c:
    // 0x22a26c: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x22a26cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
label_22a270:
    // 0x22a270: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x22a270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22a274:
    // 0x22a274: 0x3c021062  lui         $v0, 0x1062
    ctx->pc = 0x22a274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4194 << 16));
label_22a278:
    // 0x22a278: 0x938492ec  lbu         $a0, -0x6D14($gp)
    ctx->pc = 0x22a278u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939372)));
label_22a27c:
    // 0x22a27c: 0x34424dd3  ori         $v0, $v0, 0x4DD3
    ctx->pc = 0x22a27cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19923);
label_22a280:
    // 0x22a280: 0x9065000f  lbu         $a1, 0xF($v1)
    ctx->pc = 0x22a280u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 15)));
label_22a284:
    // 0x22a284: 0x2466000f  addiu       $a2, $v1, 0xF
    ctx->pc = 0x22a284u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
label_22a288:
    // 0x22a288: 0xa51818  mult        $v1, $a1, $a1
    ctx->pc = 0x22a288u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_22a28c:
    // 0x22a28c: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x22a28cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_22a290:
    // 0x22a290: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x22a290u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_22a294:
    // 0x22a294: 0x0  nop
    ctx->pc = 0x22a294u;
    // NOP
label_22a298:
    // 0x22a298: 0x0  nop
    ctx->pc = 0x22a298u;
    // NOP
label_22a29c:
    // 0x22a29c: 0x1010  mfhi        $v0
    ctx->pc = 0x22a29cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_22a2a0:
    // 0x22a2a0: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x22a2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_22a2a4:
    // 0x22a2a4: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x22a2a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_22a2a8:
    // 0x22a2a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22a2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22a2ac:
    // 0x22a2ac: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x22a2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_22a2b0:
    // 0x22a2b0: 0x284100fa  slti        $at, $v0, 0xFA
    ctx->pc = 0x22a2b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)250) ? 1 : 0);
label_22a2b4:
    // 0x22a2b4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_22a2b8:
    if (ctx->pc == 0x22A2B8u) {
        ctx->pc = 0x22A2BCu;
        goto label_22a2bc;
    }
    ctx->pc = 0x22A2B4u;
    {
        const bool branch_taken_0x22a2b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a2b4) {
            ctx->pc = 0x22A2C4u;
            goto label_22a2c4;
        }
    }
    ctx->pc = 0x22A2BCu;
label_22a2bc:
    // 0x22a2bc: 0x10000003  b           . + 4 + (0x3 << 2)
label_22a2c0:
    if (ctx->pc == 0x22A2C0u) {
        ctx->pc = 0x22A2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A2BCu;
        // 0x22a2c0: 0xa0c20000  sb          $v0, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A2C4u;
        goto label_22a2c4;
    }
    ctx->pc = 0x22A2BCu;
    {
        const bool branch_taken_0x22a2bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A2BCu;
        // 0x22a2c0: 0xa0c20000  sb          $v0, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a2bc) {
            ctx->pc = 0x22A2CCu;
            goto label_22a2cc;
        }
    }
    ctx->pc = 0x22A2C4u;
label_22a2c4:
    // 0x22a2c4: 0x240200fa  addiu       $v0, $zero, 0xFA
    ctx->pc = 0x22a2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_22a2c8:
    // 0x22a2c8: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x22a2c8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
label_22a2cc:
    // 0x22a2cc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x22a2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22a2d0:
    // 0x22a2d0: 0x938392ec  lbu         $v1, -0x6D14($gp)
    ctx->pc = 0x22a2d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939372)));
label_22a2d4:
    // 0x22a2d4: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x22a2d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_22a2d8:
    // 0x22a2d8: 0x24450008  addiu       $a1, $v0, 0x8
    ctx->pc = 0x22a2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_22a2dc:
    // 0x22a2dc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x22a2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_22a2e0:
    // 0x22a2e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22a2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22a2e4:
    // 0x22a2e4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x22a2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_22a2e8:
    // 0x22a2e8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x22a2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_22a2ec:
    // 0x22a2ec: 0x28410190  slti        $at, $v0, 0x190
    ctx->pc = 0x22a2ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)400) ? 1 : 0);
label_22a2f0:
    // 0x22a2f0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_22a2f4:
    if (ctx->pc == 0x22A2F4u) {
        ctx->pc = 0x22A2F8u;
        goto label_22a2f8;
    }
    ctx->pc = 0x22A2F0u;
    {
        const bool branch_taken_0x22a2f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a2f0) {
            ctx->pc = 0x22A300u;
            goto label_22a300;
        }
    }
    ctx->pc = 0x22A2F8u;
label_22a2f8:
    // 0x22a2f8: 0x10000003  b           . + 4 + (0x3 << 2)
label_22a2fc:
    if (ctx->pc == 0x22A2FCu) {
        ctx->pc = 0x22A2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A2F8u;
        // 0x22a2fc: 0xa4a20000  sh          $v0, 0x0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A300u;
        goto label_22a300;
    }
    ctx->pc = 0x22A2F8u;
    {
        const bool branch_taken_0x22a2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A2F8u;
        // 0x22a2fc: 0xa4a20000  sh          $v0, 0x0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a2f8) {
            ctx->pc = 0x22A308u;
            goto label_22a308;
        }
    }
    ctx->pc = 0x22A300u;
label_22a300:
    // 0x22a300: 0x24020190  addiu       $v0, $zero, 0x190
    ctx->pc = 0x22a300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
label_22a304:
    // 0x22a304: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x22a304u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
label_22a308:
    // 0x22a308: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x22a308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22a30c:
    // 0x22a30c: 0x938292ec  lbu         $v0, -0x6D14($gp)
    ctx->pc = 0x22a30cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939372)));
label_22a310:
    // 0x22a310: 0x90650018  lbu         $a1, 0x18($v1)
    ctx->pc = 0x22a310u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 24)));
label_22a314:
    // 0x22a314: 0x24660018  addiu       $a2, $v1, 0x18
    ctx->pc = 0x22a314u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
label_22a318:
    // 0x22a318: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x22a318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_22a31c:
    // 0x22a31c: 0x22043  sra         $a0, $v0, 1
    ctx->pc = 0x22a31cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
label_22a320:
    // 0x22a320: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_22a324:
    if (ctx->pc == 0x22A324u) {
        ctx->pc = 0x22A324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A320u;
        // 0x22a324: 0x30a3000f  andi        $v1, $a1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A328u;
        goto label_22a328;
    }
    ctx->pc = 0x22A320u;
    {
        const bool branch_taken_0x22a320 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x22A324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A320u;
        // 0x22a324: 0x30a3000f  andi        $v1, $a1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a320) {
            ctx->pc = 0x22A330u;
            goto label_22a330;
        }
    }
    ctx->pc = 0x22A328u;
label_22a328:
    // 0x22a328: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22a328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_22a32c:
    // 0x22a32c: 0x22043  sra         $a0, $v0, 1
    ctx->pc = 0x22a32cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
label_22a330:
    // 0x22a330: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x22a330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_22a334:
    // 0x22a334: 0x28610007  slti        $at, $v1, 0x7
    ctx->pc = 0x22a334u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
label_22a338:
    // 0x22a338: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_22a33c:
    if (ctx->pc == 0x22A33Cu) {
        ctx->pc = 0x22A340u;
        goto label_22a340;
    }
    ctx->pc = 0x22A338u;
    {
        const bool branch_taken_0x22a338 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a338) {
            ctx->pc = 0x22A348u;
            goto label_22a348;
        }
    }
    ctx->pc = 0x22A340u;
label_22a340:
    // 0x22a340: 0x10000003  b           . + 4 + (0x3 << 2)
label_22a344:
    if (ctx->pc == 0x22A344u) {
        ctx->pc = 0x22A344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A340u;
        // 0x22a344: 0x51103  sra         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A348u;
        goto label_22a348;
    }
    ctx->pc = 0x22A340u;
    {
        const bool branch_taken_0x22a340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A340u;
        // 0x22a344: 0x51103  sra         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a340) {
            ctx->pc = 0x22A350u;
            goto label_22a350;
        }
    }
    ctx->pc = 0x22A348u;
label_22a348:
    // 0x22a348: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x22a348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_22a34c:
    // 0x22a34c: 0x51103  sra         $v0, $a1, 4
    ctx->pc = 0x22a34cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 4));
label_22a350:
    // 0x22a350: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x22a350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_22a354:
    // 0x22a354: 0x28410007  slti        $at, $v0, 0x7
    ctx->pc = 0x22a354u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)7) ? 1 : 0);
label_22a358:
    // 0x22a358: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_22a35c:
    if (ctx->pc == 0x22A35Cu) {
        ctx->pc = 0x22A360u;
        goto label_22a360;
    }
    ctx->pc = 0x22A358u;
    {
        const bool branch_taken_0x22a358 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a358) {
            ctx->pc = 0x22A368u;
            goto label_22a368;
        }
    }
    ctx->pc = 0x22A360u;
label_22a360:
    // 0x22a360: 0x10000003  b           . + 4 + (0x3 << 2)
label_22a364:
    if (ctx->pc == 0x22A364u) {
        ctx->pc = 0x22A364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A360u;
        // 0x22a364: 0x21100  sll         $v0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A368u;
        goto label_22a368;
    }
    ctx->pc = 0x22A360u;
    {
        const bool branch_taken_0x22a360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A360u;
        // 0x22a364: 0x21100  sll         $v0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a360) {
            ctx->pc = 0x22A370u;
            goto label_22a370;
        }
    }
    ctx->pc = 0x22A368u;
label_22a368:
    // 0x22a368: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x22a368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_22a36c:
    // 0x22a36c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x22a36cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_22a370:
    // 0x22a370: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22a370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22a374:
    // 0x22a374: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x22a374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_22a378:
    // 0x22a378: 0xc08aaa4  jal         func_22AA90
label_22a37c:
    if (ctx->pc == 0x22A37Cu) {
        ctx->pc = 0x22A37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A378u;
        // 0x22a37c: 0xa0c20000  sb          $v0, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A380u;
        goto label_22a380;
    }
    ctx->pc = 0x22A378u;
    SET_GPR_U32(ctx, 31, 0x22A380u);
    ctx->pc = 0x22A37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A378u;
    // 0x22a37c: 0xa0c20000  sb          $v0, 0x0($a2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AA90u;
    { ctx->pc = 0x22aa90; return; }
    ctx->pc = 0x22A380u;
label_22a380:
    // 0x22a380: 0x9223002a  lbu         $v1, 0x2A($s1)
    ctx->pc = 0x22a380u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 42)));
label_22a384:
    // 0x22a384: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_22a388:
    if (ctx->pc == 0x22A388u) {
        ctx->pc = 0x22A38Cu;
        goto label_22a38c;
    }
    ctx->pc = 0x22A384u;
    {
        const bool branch_taken_0x22a384 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a384) {
            ctx->pc = 0x22A3A4u;
            goto label_22a3a4;
        }
    }
    ctx->pc = 0x22A38Cu;
label_22a38c:
    // 0x22a38c: 0x92430015  lbu         $v1, 0x15($s2)
    ctx->pc = 0x22a38cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 21)));
label_22a390:
    // 0x22a390: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x22a390u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_22a394:
    // 0x22a394: 0xa223003d  sb          $v1, 0x3D($s1)
    ctx->pc = 0x22a394u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 61), (uint8_t)GPR_U32(ctx, 3));
label_22a398:
    // 0x22a398: 0x92440015  lbu         $a0, 0x15($s2)
    ctx->pc = 0x22a398u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 21)));
label_22a39c:
    // 0x22a39c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x22a39cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22a3a0:
    // 0x22a3a0: 0xa0640015  sb          $a0, 0x15($v1)
    ctx->pc = 0x22a3a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 21), (uint8_t)GPR_U32(ctx, 4));
label_22a3a4:
    // 0x22a3a4: 0x0  nop
    ctx->pc = 0x22a3a4u;
    // NOP
label_22a3a8:
    // 0x22a3a8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x22a3a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_22a3ac:
    // 0x22a3ac: 0x2a030058  slti        $v1, $s0, 0x58
    ctx->pc = 0x22a3acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)88) ? 1 : 0);
label_22a3b0:
    // 0x22a3b0: 0x26310048  addiu       $s1, $s1, 0x48
    ctx->pc = 0x22a3b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
label_22a3b4:
    // 0x22a3b4: 0x1460ff8a  bnez        $v1, . + 4 + (-0x76 << 2)
label_22a3b8:
    if (ctx->pc == 0x22A3B8u) {
        ctx->pc = 0x22A3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A3B4u;
        // 0x22a3b8: 0x26520020  addiu       $s2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A3BCu;
        goto label_22a3bc;
    }
    ctx->pc = 0x22A3B4u;
    {
        const bool branch_taken_0x22a3b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A3B4u;
        // 0x22a3b8: 0x26520020  addiu       $s2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a3b4) {
            ctx->pc = 0x22A1E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x22a1e0; return; }
        }
    }
    ctx->pc = 0x22A3BCu;
label_22a3bc:
    // 0x22a3bc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x22a3bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_22a3c0:
    // 0x22a3c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22a3c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22a3c4:
    // 0x22a3c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22a3c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22a3c8:
    // 0x22a3c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22a3c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22a3cc:
    // 0x22a3cc: 0x3e00008  jr          $ra
label_22a3d0:
    if (ctx->pc == 0x22A3D0u) {
        ctx->pc = 0x22A3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A3CCu;
        // 0x22a3d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A3D4u;
        goto label_22a3d4;
    }
    ctx->pc = 0x22A3CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A3CCu;
        // 0x22a3d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A3CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22A3D4u;
label_22a3d4:
    // 0x22a3d4: 0x0  nop
    ctx->pc = 0x22a3d4u;
    // NOP
label_22a3d8:
    // 0x22a3d8: 0x0  nop
    ctx->pc = 0x22a3d8u;
    // NOP
label_22a3dc:
    // 0x22a3dc: 0x0  nop
    ctx->pc = 0x22a3dcu;
    // NOP
label_22a3e0:
    // 0x22a3e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22a3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_22a3e4:
    // 0x22a3e4: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x22a3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
label_22a3e8:
    // 0x22a3e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22a3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_22a3ec:
    // 0x22a3ec: 0x3c01002f  lui         $at, 0x2F
    ctx->pc = 0x22a3ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
label_22a3f0:
    // 0x22a3f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22a3f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22a3f4:
    // 0x22a3f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22a3f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22a3f8:
    // 0x22a3f8: 0x902325a9  lbu         $v1, 0x25A9($at)
    ctx->pc = 0x22a3f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 9641)));
label_22a3fc:
    // 0x22a3fc: 0x2861004a  slti        $at, $v1, 0x4A
    ctx->pc = 0x22a3fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)74) ? 1 : 0);
label_22a400:
    // 0x22a400: 0x10200033  beqz        $at, . + 4 + (0x33 << 2)
label_22a404:
    if (ctx->pc == 0x22A404u) {
        ctx->pc = 0x22A404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A400u;
        // 0x22a404: 0x24842570  addiu       $a0, $a0, 0x2570 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9584));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A408u;
        goto label_22a408;
    }
    ctx->pc = 0x22A400u;
    {
        const bool branch_taken_0x22a400 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A400u;
        // 0x22a404: 0x24842570  addiu       $a0, $a0, 0x2570 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a400) {
            ctx->pc = 0x22A4D0u;
            goto label_22a4d0;
        }
    }
    ctx->pc = 0x22A408u;
label_22a408:
    // 0x22a408: 0x90850039  lbu         $a1, 0x39($a0)
    ctx->pc = 0x22a408u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 57)));
label_22a40c:
    // 0x22a40c: 0x8f8384e0  lw          $v1, -0x7B20($gp)
    ctx->pc = 0x22a40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
label_22a410:
    // 0x22a410: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x22a410u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_22a414:
    // 0x22a414: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x22a414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_22a418:
    // 0x22a418: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x22a418u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_22a41c:
    // 0x22a41c: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x22a41cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_22a420:
    // 0x22a420: 0x9203002e  lbu         $v1, 0x2E($s0)
    ctx->pc = 0x22a420u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 46)));
label_22a424:
    // 0x22a424: 0x1460002a  bnez        $v1, . + 4 + (0x2A << 2)
label_22a428:
    if (ctx->pc == 0x22A428u) {
        ctx->pc = 0x22A42Cu;
        goto label_22a42c;
    }
    ctx->pc = 0x22A424u;
    {
        const bool branch_taken_0x22a424 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a424) {
            ctx->pc = 0x22A4D0u;
            goto label_22a4d0;
        }
    }
    ctx->pc = 0x22A42Cu;
label_22a42c:
    // 0x22a42c: 0x9203002f  lbu         $v1, 0x2F($s0)
    ctx->pc = 0x22a42cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 47)));
label_22a430:
    // 0x22a430: 0x286100ff  slti        $at, $v1, 0xFF
    ctx->pc = 0x22a430u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)255) ? 1 : 0);
label_22a434:
    // 0x22a434: 0x10200026  beqz        $at, . + 4 + (0x26 << 2)
label_22a438:
    if (ctx->pc == 0x22A438u) {
        ctx->pc = 0x22A43Cu;
        goto label_22a43c;
    }
    ctx->pc = 0x22A434u;
    {
        const bool branch_taken_0x22a434 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a434) {
            ctx->pc = 0x22A4D0u;
            goto label_22a4d0;
        }
    }
    ctx->pc = 0x22A43Cu;
label_22a43c:
    // 0x22a43c: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x22a43cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22a440:
    // 0x22a440: 0x12200023  beqz        $s1, . + 4 + (0x23 << 2)
label_22a444:
    if (ctx->pc == 0x22A444u) {
        ctx->pc = 0x22A448u;
        goto label_22a448;
    }
    ctx->pc = 0x22A440u;
    {
        const bool branch_taken_0x22a440 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a440) {
            ctx->pc = 0x22A4D0u;
            goto label_22a4d0;
        }
    }
    ctx->pc = 0x22A448u;
label_22a448:
    // 0x22a448: 0xc07aec0  jal         func_1EBB00
label_22a44c:
    if (ctx->pc == 0x22A44Cu) {
        ctx->pc = 0x22A450u;
        goto label_22a450;
    }
    ctx->pc = 0x22A448u;
    SET_GPR_U32(ctx, 31, 0x22A450u);
    ctx->pc = 0x1EBB00u;
    { ctx->pc = 0x1ebb00; return; }
    ctx->pc = 0x22A450u;
label_22a450:
    // 0x22a450: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_22a454:
    if (ctx->pc == 0x22A454u) {
        ctx->pc = 0x22A458u;
        goto label_22a458;
    }
    ctx->pc = 0x22A450u;
    {
        const bool branch_taken_0x22a450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a450) {
            ctx->pc = 0x22A48Cu;
            goto label_22a48c;
        }
    }
    ctx->pc = 0x22A458u;
label_22a458:
    // 0x22a458: 0xc6210158  lwc1        $f1, 0x158($s1)
    ctx->pc = 0x22a458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22a45c:
    // 0x22a45c: 0x3c034743  lui         $v1, 0x4743
    ctx->pc = 0x22a45cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18243 << 16));
label_22a460:
    // 0x22a460: 0x34635a00  ori         $v1, $v1, 0x5A00
    ctx->pc = 0x22a460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)23040);
label_22a464:
    // 0x22a464: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22a464u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22a468:
    // 0x22a468: 0x0  nop
    ctx->pc = 0x22a468u;
    // NOP
label_22a46c:
    // 0x22a46c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x22a46cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22a470:
    // 0x22a470: 0x0  nop
    ctx->pc = 0x22a470u;
    // NOP
label_22a474:
    // 0x22a474: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_22a478:
    if (ctx->pc == 0x22A478u) {
        ctx->pc = 0x22A47Cu;
        goto label_22a47c;
    }
    ctx->pc = 0x22A474u;
    {
        const bool branch_taken_0x22a474 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22a474) {
            ctx->pc = 0x22A48Cu;
            goto label_22a48c;
        }
    }
    ctx->pc = 0x22A47Cu;
label_22a47c:
    // 0x22a47c: 0xc07aec8  jal         func_1EBB20
label_22a480:
    if (ctx->pc == 0x22A480u) {
        ctx->pc = 0x22A484u;
        goto label_22a484;
    }
    ctx->pc = 0x22A47Cu;
    SET_GPR_U32(ctx, 31, 0x22A484u);
    ctx->pc = 0x1EBB20u;
    { ctx->pc = 0x1ebb20; return; }
    ctx->pc = 0x22A484u;
label_22a484:
    // 0x22a484: 0xc0872ec  jal         func_21CBB0
label_22a488:
    if (ctx->pc == 0x22A488u) {
        ctx->pc = 0x22A488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A484u;
        // 0x22a488: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A48Cu;
        goto label_22a48c;
    }
    ctx->pc = 0x22A484u;
    SET_GPR_U32(ctx, 31, 0x22A48Cu);
    ctx->pc = 0x22A488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A484u;
    // 0x22a488: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21CBB0u;
    { ctx->pc = 0x21cbb0; return; }
    ctx->pc = 0x22A48Cu;
label_22a48c:
    // 0x22a48c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x22a48cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_22a490:
    // 0x22a490: 0x8c23a280  lw          $v1, -0x5D80($at)
    ctx->pc = 0x22a490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943360)));
label_22a494:
    // 0x22a494: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
label_22a498:
    if (ctx->pc == 0x22A498u) {
        ctx->pc = 0x22A49Cu;
        goto label_22a49c;
    }
    ctx->pc = 0x22A494u;
    {
        const bool branch_taken_0x22a494 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a494) {
            ctx->pc = 0x22A4D0u;
            goto label_22a4d0;
        }
    }
    ctx->pc = 0x22A49Cu;
label_22a49c:
    // 0x22a49c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x22a49cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22a4a0:
    // 0x22a4a0: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x22a4a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_22a4a4:
    // 0x22a4a4: 0x84830220  lh          $v1, 0x220($a0)
    ctx->pc = 0x22a4a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 544)));
label_22a4a8:
    // 0x22a4a8: 0xac23a280  sw          $v1, -0x5D80($at)
    ctx->pc = 0x22a4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943360), GPR_U32(ctx, 3));
label_22a4ac:
    // 0x22a4ac: 0x84830252  lh          $v1, 0x252($a0)
    ctx->pc = 0x22a4acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 594)));
label_22a4b0:
    // 0x22a4b0: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x22a4b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_22a4b4:
    // 0x22a4b4: 0xac23a284  sw          $v1, -0x5D7C($at)
    ctx->pc = 0x22a4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943364), GPR_U32(ctx, 3));
label_22a4b8:
    // 0x22a4b8: 0x9083024a  lbu         $v1, 0x24A($a0)
    ctx->pc = 0x22a4b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 586)));
label_22a4bc:
    // 0x22a4bc: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x22a4bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_22a4c0:
    // 0x22a4c0: 0xac23a288  sw          $v1, -0x5D78($at)
    ctx->pc = 0x22a4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943368), GPR_U32(ctx, 3));
label_22a4c4:
    // 0x22a4c4: 0x9083024b  lbu         $v1, 0x24B($a0)
    ctx->pc = 0x22a4c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 587)));
label_22a4c8:
    // 0x22a4c8: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x22a4c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_22a4cc:
    // 0x22a4cc: 0xac23a28c  sw          $v1, -0x5D74($at)
    ctx->pc = 0x22a4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943372), GPR_U32(ctx, 3));
label_22a4d0:
    // 0x22a4d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22a4d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_22a4d4:
    // 0x22a4d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22a4d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22a4d8:
    // 0x22a4d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22a4d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22a4dc:
    // 0x22a4dc: 0x3e00008  jr          $ra
label_22a4e0:
    if (ctx->pc == 0x22A4E0u) {
        ctx->pc = 0x22A4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A4DCu;
        // 0x22a4e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A4E4u;
        goto label_22a4e4;
    }
    ctx->pc = 0x22A4DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A4DCu;
        // 0x22a4e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A4DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22A4E4u;
label_22a4e4:
    // 0x22a4e4: 0x0  nop
    ctx->pc = 0x22a4e4u;
    // NOP
label_22a4e8:
    // 0x22a4e8: 0x0  nop
    ctx->pc = 0x22a4e8u;
    // NOP
label_22a4ec:
    // 0x22a4ec: 0x0  nop
    ctx->pc = 0x22a4ecu;
    // NOP
label_22a4f0:
    // 0x22a4f0: 0x3c06002f  lui         $a2, 0x2F
    ctx->pc = 0x22a4f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)47 << 16));
label_22a4f4:
    // 0x22a4f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22a4f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22a4f8:
    // 0x22a4f8: 0x24c66d28  addiu       $a2, $a2, 0x6D28
    ctx->pc = 0x22a4f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27944));
label_22a4fc:
    // 0x22a4fc: 0x90c3003d  lbu         $v1, 0x3D($a2)
    ctx->pc = 0x22a4fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 61)));
label_22a500:
    // 0x22a500: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
label_22a504:
    if (ctx->pc == 0x22A504u) {
        ctx->pc = 0x22A508u;
        goto label_22a508;
    }
    ctx->pc = 0x22A500u;
    {
        const bool branch_taken_0x22a500 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a500) {
            ctx->pc = 0x22A560u;
            goto label_22a560;
        }
    }
    ctx->pc = 0x22A508u;
label_22a508:
    // 0x22a508: 0x90c50039  lbu         $a1, 0x39($a2)
    ctx->pc = 0x22a508u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 57)));
label_22a50c:
    // 0x22a50c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22a50cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22a510:
    // 0x22a510: 0x8f8384e0  lw          $v1, -0x7B20($gp)
    ctx->pc = 0x22a510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
label_22a514:
    // 0x22a514: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x22a514u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22a518:
    // 0x22a518: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x22a518u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_22a51c:
    // 0x22a51c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x22a51cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_22a520:
    // 0x22a520: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x22a520u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_22a524:
    // 0x22a524: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x22a524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_22a528:
    // 0x22a528: 0x891821  addu        $v1, $a0, $t1
    ctx->pc = 0x22a528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
label_22a52c:
    // 0x22a52c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x22a52cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22a530:
    // 0x22a530: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_22a534:
    if (ctx->pc == 0x22A534u) {
        ctx->pc = 0x22A538u;
        goto label_22a538;
    }
    ctx->pc = 0x22A530u;
    {
        const bool branch_taken_0x22a530 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a530) {
            ctx->pc = 0x22A54Cu;
            goto label_22a54c;
        }
    }
    ctx->pc = 0x22A538u;
label_22a538:
    // 0x22a538: 0x84a3021c  lh          $v1, 0x21C($a1)
    ctx->pc = 0x22a538u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 540)));
label_22a53c:
    // 0x22a53c: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x22a53cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_22a540:
    // 0x22a540: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_22a544:
    if (ctx->pc == 0x22A544u) {
        ctx->pc = 0x22A548u;
        goto label_22a548;
    }
    ctx->pc = 0x22A540u;
    {
        const bool branch_taken_0x22a540 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a540) {
            ctx->pc = 0x22A54Cu;
            goto label_22a54c;
        }
    }
    ctx->pc = 0x22A548u;
label_22a548:
    // 0x22a548: 0xa4a30220  sh          $v1, 0x220($a1)
    ctx->pc = 0x22a548u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 544), (uint16_t)GPR_U32(ctx, 3));
label_22a54c:
    // 0x22a54c: 0x0  nop
    ctx->pc = 0x22a54cu;
    // NOP
label_22a550:
    // 0x22a550: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x22a550u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_22a554:
    // 0x22a554: 0x29030009  slti        $v1, $t0, 0x9
    ctx->pc = 0x22a554u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)9) ? 1 : 0);
label_22a558:
    // 0x22a558: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_22a55c:
    if (ctx->pc == 0x22A55Cu) {
        ctx->pc = 0x22A55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A558u;
        // 0x22a55c: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A560u;
        goto label_22a560;
    }
    ctx->pc = 0x22A558u;
    {
        const bool branch_taken_0x22a558 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A558u;
        // 0x22a55c: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a558) {
            ctx->pc = 0x22A528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22a528;
        }
    }
    ctx->pc = 0x22A560u;
label_22a560:
    // 0x22a560: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x22a560u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_22a564:
    // 0x22a564: 0x28e300ff  slti        $v1, $a3, 0xFF
    ctx->pc = 0x22a564u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)255) ? 1 : 0);
label_22a568:
    // 0x22a568: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
label_22a56c:
    if (ctx->pc == 0x22A56Cu) {
        ctx->pc = 0x22A56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A568u;
        // 0x22a56c: 0x24c60048  addiu       $a2, $a2, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A570u;
        goto label_22a570;
    }
    ctx->pc = 0x22A568u;
    {
        const bool branch_taken_0x22a568 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A568u;
        // 0x22a56c: 0x24c60048  addiu       $a2, $a2, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a568) {
            ctx->pc = 0x22A4FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22a4fc;
        }
    }
    ctx->pc = 0x22A570u;
label_22a570:
    // 0x22a570: 0x3e00008  jr          $ra
label_22a574:
    if (ctx->pc == 0x22A574u) {
        ctx->pc = 0x22A578u;
        goto label_22a578;
    }
    ctx->pc = 0x22A570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A570u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22A578u;
label_22a578:
    // 0x22a578: 0x0  nop
    ctx->pc = 0x22a578u;
    // NOP
label_22a57c:
    // 0x22a57c: 0x0  nop
    ctx->pc = 0x22a57cu;
    // NOP
label_22a580:
    // 0x22a580: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x22a580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_22a584:
    // 0x22a584: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x22a584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_22a588:
    // 0x22a588: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x22a588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_22a58c:
    // 0x22a58c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22a58cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_22a590:
    // 0x22a590: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x22a590u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22a594:
    // 0x22a594: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22a594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_22a598:
    // 0x22a598: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x22a598u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22a59c:
    // 0x22a59c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22a59cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22a5a0:
    // 0x22a5a0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x22a5a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22a5a4:
    // 0x22a5a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22a5a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22a5a8:
    // 0x22a5a8: 0x3c11002f  lui         $s1, 0x2F
    ctx->pc = 0x22a5a8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)47 << 16));
label_22a5ac:
    // 0x22a5ac: 0x26312570  addiu       $s1, $s1, 0x2570
    ctx->pc = 0x22a5acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 9584));
label_22a5b0:
    // 0x22a5b0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x22a5b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22a5b4:
    // 0x22a5b4: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x22a5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
label_22a5b8:
    // 0x22a5b8: 0x24422570  addiu       $v0, $v0, 0x2570
    ctx->pc = 0x22a5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9584));
label_22a5bc:
    // 0x22a5bc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x22a5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_22a5c0:
    // 0x22a5c0: 0xc044894  jal         func_112250
label_22a5c4:
    if (ctx->pc == 0x22A5C4u) {
        ctx->pc = 0x22A5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A5C0u;
        // 0x22a5c4: 0x244447b8  addiu       $a0, $v0, 0x47B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 18360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A5C8u;
        goto label_22a5c8;
    }
    ctx->pc = 0x22A5C0u;
    SET_GPR_U32(ctx, 31, 0x22A5C8u);
    ctx->pc = 0x22A5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A5C0u;
    // 0x22a5c4: 0x244447b8  addiu       $a0, $v0, 0x47B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 18360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112250u, 0x22A5C0u, 0x22A5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A5C8u;
label_22a5c8:
    // 0x22a5c8: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_22a5cc:
    if (ctx->pc == 0x22A5CCu) {
        ctx->pc = 0x22A5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A5C8u;
        // 0x22a5cc: 0x26640001  addiu       $a0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A5D0u;
        goto label_22a5d0;
    }
    ctx->pc = 0x22A5C8u;
    {
        const bool branch_taken_0x22a5c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A5C8u;
        // 0x22a5cc: 0x26640001  addiu       $a0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a5c8) {
            ctx->pc = 0x22A650u;
            goto label_22a650;
        }
    }
    ctx->pc = 0x22A5D0u;
label_22a5d0:
    // 0x22a5d0: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x22a5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
label_22a5d4:
    // 0x22a5d4: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x22a5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_22a5d8:
    // 0x22a5d8: 0x24422570  addiu       $v0, $v0, 0x2570
    ctx->pc = 0x22a5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9584));
label_22a5dc:
    // 0x22a5dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x22a5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_22a5e0:
    // 0x22a5e0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x22a5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_22a5e4:
    // 0x22a5e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22a5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22a5e8:
    // 0x22a5e8: 0xc044894  jal         func_112250
label_22a5ec:
    if (ctx->pc == 0x22A5ECu) {
        ctx->pc = 0x22A5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A5E8u;
        // 0x22a5ec: 0x244447b8  addiu       $a0, $v0, 0x47B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 18360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A5F0u;
        goto label_22a5f0;
    }
    ctx->pc = 0x22A5E8u;
    SET_GPR_U32(ctx, 31, 0x22A5F0u);
    ctx->pc = 0x22A5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A5E8u;
    // 0x22a5ec: 0x244447b8  addiu       $a0, $v0, 0x47B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 18360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112250u, 0x22A5E8u, 0x22A5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A5F0u;
label_22a5f0:
    // 0x22a5f0: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_22a5f4:
    if (ctx->pc == 0x22A5F4u) {
        ctx->pc = 0x22A5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A5F0u;
        // 0x22a5f4: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A5F8u;
        goto label_22a5f8;
    }
    ctx->pc = 0x22A5F0u;
    {
        const bool branch_taken_0x22a5f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A5F0u;
        // 0x22a5f4: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a5f0) {
            ctx->pc = 0x22A650u;
            goto label_22a650;
        }
    }
    ctx->pc = 0x22A5F8u;
label_22a5f8:
    // 0x22a5f8: 0x92240022  lbu         $a0, 0x22($s1)
    ctx->pc = 0x22a5f8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 34)));
label_22a5fc:
    // 0x22a5fc: 0x2463ef00  addiu       $v1, $v1, -0x1100
    ctx->pc = 0x22a5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962944));
label_22a600:
    // 0x22a600: 0x742821  addu        $a1, $v1, $s4
    ctx->pc = 0x22a600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_22a604:
    // 0x22a604: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x22a604u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_22a608:
    // 0x22a608: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x22a608u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_22a60c:
    // 0x22a60c: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
label_22a610:
    if (ctx->pc == 0x22A610u) {
        ctx->pc = 0x22A614u;
        goto label_22a614;
    }
    ctx->pc = 0x22A60Cu;
    {
        const bool branch_taken_0x22a60c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a60c) {
            ctx->pc = 0x22A650u;
            goto label_22a650;
        }
    }
    ctx->pc = 0x22A614u;
label_22a614:
    // 0x22a614: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x22a614u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_22a618:
    // 0x22a618: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x22a618u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_22a61c:
    // 0x22a61c: 0x1420000c  bnez        $at, . + 4 + (0xC << 2)
label_22a620:
    if (ctx->pc == 0x22A620u) {
        ctx->pc = 0x22A624u;
        goto label_22a624;
    }
    ctx->pc = 0x22A61Cu;
    {
        const bool branch_taken_0x22a61c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a61c) {
            ctx->pc = 0x22A650u;
            goto label_22a650;
        }
    }
    ctx->pc = 0x22A624u;
label_22a624:
    // 0x22a624: 0x92240023  lbu         $a0, 0x23($s1)
    ctx->pc = 0x22a624u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
label_22a628:
    // 0x22a628: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x22a628u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_22a62c:
    // 0x22a62c: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x22a62cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_22a630:
    // 0x22a630: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_22a634:
    if (ctx->pc == 0x22A634u) {
        ctx->pc = 0x22A638u;
        goto label_22a638;
    }
    ctx->pc = 0x22A630u;
    {
        const bool branch_taken_0x22a630 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a630) {
            ctx->pc = 0x22A650u;
            goto label_22a650;
        }
    }
    ctx->pc = 0x22A638u;
label_22a638:
    // 0x22a638: 0x90a30003  lbu         $v1, 0x3($a1)
    ctx->pc = 0x22a638u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
label_22a63c:
    // 0x22a63c: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x22a63cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_22a640:
    // 0x22a640: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_22a644:
    if (ctx->pc == 0x22A644u) {
        ctx->pc = 0x22A648u;
        goto label_22a648;
    }
    ctx->pc = 0x22A640u;
    {
        const bool branch_taken_0x22a640 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a640) {
            ctx->pc = 0x22A650u;
            goto label_22a650;
        }
    }
    ctx->pc = 0x22A648u;
label_22a648:
    // 0x22a648: 0xc08a9a4  jal         func_22A690
label_22a64c:
    if (ctx->pc == 0x22A64Cu) {
        ctx->pc = 0x22A64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A648u;
        // 0x22a64c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A650u;
        goto label_22a650;
    }
    ctx->pc = 0x22A648u;
    SET_GPR_U32(ctx, 31, 0x22A650u);
    ctx->pc = 0x22A64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A648u;
    // 0x22a64c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A690u;
    goto label_22a690;
    ctx->pc = 0x22A650u;
label_22a650:
    // 0x22a650: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x22a650u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_22a654:
    // 0x22a654: 0x2a030004  slti        $v1, $s0, 0x4
    ctx->pc = 0x22a654u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
label_22a658:
    // 0x22a658: 0x26520090  addiu       $s2, $s2, 0x90
    ctx->pc = 0x22a658u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
label_22a65c:
    // 0x22a65c: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x22a65cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
label_22a660:
    // 0x22a660: 0x1460ffd4  bnez        $v1, . + 4 + (-0x2C << 2)
label_22a664:
    if (ctx->pc == 0x22A664u) {
        ctx->pc = 0x22A664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A660u;
        // 0x22a664: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A668u;
        goto label_22a668;
    }
    ctx->pc = 0x22A660u;
    {
        const bool branch_taken_0x22a660 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A660u;
        // 0x22a664: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a660) {
            ctx->pc = 0x22A5B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22a5b4;
        }
    }
    ctx->pc = 0x22A668u;
label_22a668:
    // 0x22a668: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x22a668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_22a66c:
    // 0x22a66c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x22a66cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_22a670:
    // 0x22a670: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22a670u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22a674:
    // 0x22a674: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22a674u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22a678:
    // 0x22a678: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22a678u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22a67c:
    // 0x22a67c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22a67cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22a680:
    // 0x22a680: 0x3e00008  jr          $ra
label_22a684:
    if (ctx->pc == 0x22A684u) {
        ctx->pc = 0x22A684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A680u;
        // 0x22a684: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A688u;
        goto label_22a688;
    }
    ctx->pc = 0x22A680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A680u;
        // 0x22a684: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22A688u;
label_22a688:
    // 0x22a688: 0x0  nop
    ctx->pc = 0x22a688u;
    // NOP
label_22a68c:
    // 0x22a68c: 0x0  nop
    ctx->pc = 0x22a68cu;
    // NOP
label_22a690:
    // 0x22a690: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x22a690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_22a694:
    // 0x22a694: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x22a694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_22a698:
    // 0x22a698: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22a698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_22a69c:
    // 0x22a69c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22a69cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_22a6a0:
    // 0x22a6a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22a6a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22a6a4:
    // 0x22a6a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22a6a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22a6a8:
    // 0x22a6a8: 0x938292ec  lbu         $v0, -0x6D14($gp)
    ctx->pc = 0x22a6a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939372)));
label_22a6ac:
    // 0x22a6ac: 0x28410014  slti        $at, $v0, 0x14
    ctx->pc = 0x22a6acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)20) ? 1 : 0);
label_22a6b0:
    // 0x22a6b0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_22a6b4:
    if (ctx->pc == 0x22A6B4u) {
        ctx->pc = 0x22A6B8u;
        goto label_22a6b8;
    }
    ctx->pc = 0x22A6B0u;
    {
        const bool branch_taken_0x22a6b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a6b0) {
            ctx->pc = 0x22A6C0u;
            goto label_22a6c0;
        }
    }
    ctx->pc = 0x22A6B8u;
label_22a6b8:
    // 0x22a6b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22a6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_22a6bc:
    // 0x22a6bc: 0xa38292ec  sb          $v0, -0x6D14($gp)
    ctx->pc = 0x22a6bcu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939372), (uint8_t)GPR_U32(ctx, 2));
label_22a6c0:
    // 0x22a6c0: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x22a6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_22a6c4:
    // 0x22a6c4: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x22a6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
label_22a6c8:
    // 0x22a6c8: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x22a6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_22a6cc:
    // 0x22a6cc: 0x24a52570  addiu       $a1, $a1, 0x2570
    ctx->pc = 0x22a6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9584));
label_22a6d0:
    // 0x22a6d0: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x22a6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_22a6d4:
    // 0x22a6d4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x22a6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_22a6d8:
    // 0x22a6d8: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x22a6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_22a6dc:
    // 0x22a6dc: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x22a6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_22a6e0:
    // 0x22a6e0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x22a6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_22a6e4:
    // 0x22a6e4: 0x249247b8  addiu       $s2, $a0, 0x47B8
    ctx->pc = 0x22a6e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 18360));
label_22a6e8:
    // 0x22a6e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22a6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22a6ec:
    // 0x22a6ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22a6ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22a6f0:
    // 0x22a6f0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x22a6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_22a6f4:
    // 0x22a6f4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x22a6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_22a6f8:
    // 0x22a6f8: 0xc08aa44  jal         func_22A910
label_22a6fc:
    if (ctx->pc == 0x22A6FCu) {
        ctx->pc = 0x22A6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A6F8u;
        // 0x22a6fc: 0x245347b8  addiu       $s3, $v0, 0x47B8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 18360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A700u;
        goto label_22a700;
    }
    ctx->pc = 0x22A6F8u;
    SET_GPR_U32(ctx, 31, 0x22A700u);
    ctx->pc = 0x22A6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A6F8u;
    // 0x22a6fc: 0x245347b8  addiu       $s3, $v0, 0x47B8 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 18360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A910u;
    goto label_22a910;
    ctx->pc = 0x22A700u;
label_22a700:
    // 0x22a700: 0x3c11002f  lui         $s1, 0x2F
    ctx->pc = 0x22a700u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)47 << 16));
label_22a704:
    // 0x22a704: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x22a704u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22a708:
    // 0x22a708: 0x26316d28  addiu       $s1, $s1, 0x6D28
    ctx->pc = 0x22a708u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 27944));
label_22a70c:
    // 0x22a70c: 0x9223003d  lbu         $v1, 0x3D($s1)
    ctx->pc = 0x22a70cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 61)));
label_22a710:
    // 0x22a710: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_22a714:
    if (ctx->pc == 0x22A714u) {
        ctx->pc = 0x22A718u;
        goto label_22a718;
    }
    ctx->pc = 0x22A710u;
    {
        const bool branch_taken_0x22a710 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a710) {
            ctx->pc = 0x22A728u;
            goto label_22a728;
        }
    }
    ctx->pc = 0x22A718u;
label_22a718:
    // 0x22a718: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x22a718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22a71c:
    // 0x22a71c: 0x90630010  lbu         $v1, 0x10($v1)
    ctx->pc = 0x22a71cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
label_22a720:
    // 0x22a720: 0x1c600005  bgtz        $v1, . + 4 + (0x5 << 2)
label_22a724:
    if (ctx->pc == 0x22A724u) {
        ctx->pc = 0x22A728u;
        goto label_22a728;
    }
    ctx->pc = 0x22A720u;
    {
        const bool branch_taken_0x22a720 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x22a720) {
            ctx->pc = 0x22A738u;
            goto label_22a738;
        }
    }
    ctx->pc = 0x22A728u;
label_22a728:
    // 0x22a728: 0x92240039  lbu         $a0, 0x39($s1)
    ctx->pc = 0x22a728u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 57)));
label_22a72c:
    // 0x22a72c: 0x2403004a  addiu       $v1, $zero, 0x4A
    ctx->pc = 0x22a72cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
label_22a730:
    // 0x22a730: 0x14830069  bne         $a0, $v1, . + 4 + (0x69 << 2)
label_22a734:
    if (ctx->pc == 0x22A734u) {
        ctx->pc = 0x22A738u;
        goto label_22a738;
    }
    ctx->pc = 0x22A730u;
    {
        const bool branch_taken_0x22a730 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x22a730) {
            ctx->pc = 0x22A8D8u;
            goto label_22a8d8;
        }
    }
    ctx->pc = 0x22A738u;
label_22a738:
    // 0x22a738: 0x9224003e  lbu         $a0, 0x3E($s1)
    ctx->pc = 0x22a738u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 62)));
label_22a73c:
    // 0x22a73c: 0x9243003e  lbu         $v1, 0x3E($s2)
    ctx->pc = 0x22a73cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 62)));
label_22a740:
    // 0x22a740: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
label_22a744:
    if (ctx->pc == 0x22A744u) {
        ctx->pc = 0x22A748u;
        goto label_22a748;
    }
    ctx->pc = 0x22A740u;
    {
        const bool branch_taken_0x22a740 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x22a740) {
            ctx->pc = 0x22A754u;
            goto label_22a754;
        }
    }
    ctx->pc = 0x22A748u;
label_22a748:
    // 0x22a748: 0x9263003e  lbu         $v1, 0x3E($s3)
    ctx->pc = 0x22a748u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 62)));
label_22a74c:
    // 0x22a74c: 0x14830062  bne         $a0, $v1, . + 4 + (0x62 << 2)
label_22a750:
    if (ctx->pc == 0x22A750u) {
        ctx->pc = 0x22A754u;
        goto label_22a754;
    }
    ctx->pc = 0x22A74Cu;
    {
        const bool branch_taken_0x22a74c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x22a74c) {
            ctx->pc = 0x22A8D8u;
            goto label_22a8d8;
        }
    }
    ctx->pc = 0x22A754u;
label_22a754:
    // 0x22a754: 0x0  nop
    ctx->pc = 0x22a754u;
    // NOP
label_22a758:
    // 0x22a758: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x22a758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22a75c:
    // 0x22a75c: 0x26020064  addiu       $v0, $s0, 0x64
    ctx->pc = 0x22a75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
label_22a760:
    // 0x22a760: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x22a760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_22a764:
    // 0x22a764: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x22a764u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_22a768:
    // 0x22a768: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x22a768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
label_22a76c:
    // 0x22a76c: 0x2442b4e0  addiu       $v0, $v0, -0x4B20
    ctx->pc = 0x22a76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948064));
label_22a770:
    // 0x22a770: 0xc08e93e  jal         func_23A4F8
label_22a774:
    if (ctx->pc == 0x22A774u) {
        ctx->pc = 0x22A774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A770u;
        // 0x22a774: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A778u;
        goto label_22a778;
    }
    ctx->pc = 0x22A770u;
    SET_GPR_U32(ctx, 31, 0x22A778u);
    ctx->pc = 0x22A774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A770u;
    // 0x22a774: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x22A778u;
label_22a778:
    // 0x22a778: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x22a778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22a77c:
    // 0x22a77c: 0x3c021062  lui         $v0, 0x1062
    ctx->pc = 0x22a77cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4194 << 16));
label_22a780:
    // 0x22a780: 0x938592ec  lbu         $a1, -0x6D14($gp)
    ctx->pc = 0x22a780u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939372)));
label_22a784:
    // 0x22a784: 0x34424dd3  ori         $v0, $v0, 0x4DD3
    ctx->pc = 0x22a784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19923);
label_22a788:
    // 0x22a788: 0x240400fa  addiu       $a0, $zero, 0xFA
    ctx->pc = 0x22a788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_22a78c:
    // 0x22a78c: 0x9066000e  lbu         $a2, 0xE($v1)
    ctx->pc = 0x22a78cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 14)));
label_22a790:
    // 0x22a790: 0x2467000e  addiu       $a3, $v1, 0xE
    ctx->pc = 0x22a790u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 14));
label_22a794:
    // 0x22a794: 0xc61818  mult        $v1, $a2, $a2
    ctx->pc = 0x22a794u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_22a798:
    // 0x22a798: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x22a798u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_22a79c:
    // 0x22a79c: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x22a79cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_22a7a0:
    // 0x22a7a0: 0x0  nop
    ctx->pc = 0x22a7a0u;
    // NOP
label_22a7a4:
    // 0x22a7a4: 0x0  nop
    ctx->pc = 0x22a7a4u;
    // NOP
label_22a7a8:
    // 0x22a7a8: 0x1010  mfhi        $v0
    ctx->pc = 0x22a7a8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_22a7ac:
    // 0x22a7ac: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x22a7acu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_22a7b0:
    // 0x22a7b0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x22a7b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_22a7b4:
    // 0x22a7b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22a7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22a7b8:
    // 0x22a7b8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x22a7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_22a7bc:
    // 0x22a7bc: 0x284100fa  slti        $at, $v0, 0xFA
    ctx->pc = 0x22a7bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)250) ? 1 : 0);
label_22a7c0:
    // 0x22a7c0: 0x81100a  movz        $v0, $a0, $at
    ctx->pc = 0x22a7c0u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_22a7c4:
    // 0x22a7c4: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x22a7c4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
label_22a7c8:
    // 0x22a7c8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x22a7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22a7cc:
    // 0x22a7cc: 0x3c021062  lui         $v0, 0x1062
    ctx->pc = 0x22a7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4194 << 16));
label_22a7d0:
    // 0x22a7d0: 0x938492ec  lbu         $a0, -0x6D14($gp)
    ctx->pc = 0x22a7d0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939372)));
label_22a7d4:
    // 0x22a7d4: 0x34424dd3  ori         $v0, $v0, 0x4DD3
    ctx->pc = 0x22a7d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19923);
label_22a7d8:
    // 0x22a7d8: 0x9065000f  lbu         $a1, 0xF($v1)
    ctx->pc = 0x22a7d8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 15)));
label_22a7dc:
    // 0x22a7dc: 0x2466000f  addiu       $a2, $v1, 0xF
    ctx->pc = 0x22a7dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
label_22a7e0:
    // 0x22a7e0: 0xa51818  mult        $v1, $a1, $a1
    ctx->pc = 0x22a7e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_22a7e4:
    // 0x22a7e4: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x22a7e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_22a7e8:
    // 0x22a7e8: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x22a7e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_22a7ec:
    // 0x22a7ec: 0x0  nop
    ctx->pc = 0x22a7ecu;
    // NOP
label_22a7f0:
    // 0x22a7f0: 0x0  nop
    ctx->pc = 0x22a7f0u;
    // NOP
label_22a7f4:
    // 0x22a7f4: 0x1010  mfhi        $v0
    ctx->pc = 0x22a7f4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_22a7f8:
    // 0x22a7f8: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x22a7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_22a7fc:
    // 0x22a7fc: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x22a7fcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_22a800:
    // 0x22a800: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22a800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22a804:
    // 0x22a804: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x22a804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_22a808:
    // 0x22a808: 0x284100fa  slti        $at, $v0, 0xFA
    ctx->pc = 0x22a808u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)250) ? 1 : 0);
label_22a80c:
    // 0x22a80c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_22a810:
    if (ctx->pc == 0x22A810u) {
        ctx->pc = 0x22A814u;
        goto label_22a814;
    }
    ctx->pc = 0x22A80Cu;
    {
        const bool branch_taken_0x22a80c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a80c) {
            ctx->pc = 0x22A81Cu;
            goto label_22a81c;
        }
    }
    ctx->pc = 0x22A814u;
label_22a814:
    // 0x22a814: 0x10000003  b           . + 4 + (0x3 << 2)
label_22a818:
    if (ctx->pc == 0x22A818u) {
        ctx->pc = 0x22A818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A814u;
        // 0x22a818: 0xa0c20000  sb          $v0, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A81Cu;
        goto label_22a81c;
    }
    ctx->pc = 0x22A814u;
    {
        const bool branch_taken_0x22a814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A814u;
        // 0x22a818: 0xa0c20000  sb          $v0, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a814) {
            ctx->pc = 0x22A824u;
            goto label_22a824;
        }
    }
    ctx->pc = 0x22A81Cu;
label_22a81c:
    // 0x22a81c: 0x240200fa  addiu       $v0, $zero, 0xFA
    ctx->pc = 0x22a81cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_22a820:
    // 0x22a820: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x22a820u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
label_22a824:
    // 0x22a824: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x22a824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22a828:
    // 0x22a828: 0x938392ec  lbu         $v1, -0x6D14($gp)
    ctx->pc = 0x22a828u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939372)));
label_22a82c:
    // 0x22a82c: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x22a82cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_22a830:
    // 0x22a830: 0x24450008  addiu       $a1, $v0, 0x8
    ctx->pc = 0x22a830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_22a834:
    // 0x22a834: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x22a834u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_22a838:
    // 0x22a838: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22a838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22a83c:
    // 0x22a83c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x22a83cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_22a840:
    // 0x22a840: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x22a840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_22a844:
    // 0x22a844: 0x28410190  slti        $at, $v0, 0x190
    ctx->pc = 0x22a844u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)400) ? 1 : 0);
label_22a848:
    // 0x22a848: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_22a84c:
    if (ctx->pc == 0x22A84Cu) {
        ctx->pc = 0x22A850u;
        goto label_22a850;
    }
    ctx->pc = 0x22A848u;
    {
        const bool branch_taken_0x22a848 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a848) {
            ctx->pc = 0x22A858u;
            goto label_22a858;
        }
    }
    ctx->pc = 0x22A850u;
label_22a850:
    // 0x22a850: 0x10000003  b           . + 4 + (0x3 << 2)
label_22a854:
    if (ctx->pc == 0x22A854u) {
        ctx->pc = 0x22A854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A850u;
        // 0x22a854: 0xa4a20000  sh          $v0, 0x0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A858u;
        goto label_22a858;
    }
    ctx->pc = 0x22A850u;
    {
        const bool branch_taken_0x22a850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A850u;
        // 0x22a854: 0xa4a20000  sh          $v0, 0x0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a850) {
            ctx->pc = 0x22A860u;
            goto label_22a860;
        }
    }
    ctx->pc = 0x22A858u;
label_22a858:
    // 0x22a858: 0x24020190  addiu       $v0, $zero, 0x190
    ctx->pc = 0x22a858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
label_22a85c:
    // 0x22a85c: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x22a85cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
label_22a860:
    // 0x22a860: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x22a860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_22a864:
    // 0x22a864: 0x938292ec  lbu         $v0, -0x6D14($gp)
    ctx->pc = 0x22a864u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939372)));
label_22a868:
    // 0x22a868: 0x90650018  lbu         $a1, 0x18($v1)
    ctx->pc = 0x22a868u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 24)));
label_22a86c:
    // 0x22a86c: 0x24660018  addiu       $a2, $v1, 0x18
    ctx->pc = 0x22a86cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
label_22a870:
    // 0x22a870: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x22a870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_22a874:
    // 0x22a874: 0x22043  sra         $a0, $v0, 1
    ctx->pc = 0x22a874u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
label_22a878:
    // 0x22a878: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_22a87c:
    if (ctx->pc == 0x22A87Cu) {
        ctx->pc = 0x22A87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A878u;
        // 0x22a87c: 0x30a3000f  andi        $v1, $a1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A880u;
        goto label_22a880;
    }
    ctx->pc = 0x22A878u;
    {
        const bool branch_taken_0x22a878 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x22A87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A878u;
        // 0x22a87c: 0x30a3000f  andi        $v1, $a1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a878) {
            ctx->pc = 0x22A888u;
            goto label_22a888;
        }
    }
    ctx->pc = 0x22A880u;
label_22a880:
    // 0x22a880: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22a880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_22a884:
    // 0x22a884: 0x22043  sra         $a0, $v0, 1
    ctx->pc = 0x22a884u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
label_22a888:
    // 0x22a888: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x22a888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_22a88c:
    // 0x22a88c: 0x28610007  slti        $at, $v1, 0x7
    ctx->pc = 0x22a88cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
label_22a890:
    // 0x22a890: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_22a894:
    if (ctx->pc == 0x22A894u) {
        ctx->pc = 0x22A898u;
        goto label_22a898;
    }
    ctx->pc = 0x22A890u;
    {
        const bool branch_taken_0x22a890 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a890) {
            ctx->pc = 0x22A8A0u;
            goto label_22a8a0;
        }
    }
    ctx->pc = 0x22A898u;
label_22a898:
    // 0x22a898: 0x10000003  b           . + 4 + (0x3 << 2)
label_22a89c:
    if (ctx->pc == 0x22A89Cu) {
        ctx->pc = 0x22A89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A898u;
        // 0x22a89c: 0x51103  sra         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A8A0u;
        goto label_22a8a0;
    }
    ctx->pc = 0x22A898u;
    {
        const bool branch_taken_0x22a898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A898u;
        // 0x22a89c: 0x51103  sra         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a898) {
            ctx->pc = 0x22A8A8u;
            goto label_22a8a8;
        }
    }
    ctx->pc = 0x22A8A0u;
label_22a8a0:
    // 0x22a8a0: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x22a8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_22a8a4:
    // 0x22a8a4: 0x51103  sra         $v0, $a1, 4
    ctx->pc = 0x22a8a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 4));
label_22a8a8:
    // 0x22a8a8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x22a8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_22a8ac:
    // 0x22a8ac: 0x28410007  slti        $at, $v0, 0x7
    ctx->pc = 0x22a8acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)7) ? 1 : 0);
label_22a8b0:
    // 0x22a8b0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_22a8b4:
    if (ctx->pc == 0x22A8B4u) {
        ctx->pc = 0x22A8B8u;
        goto label_22a8b8;
    }
    ctx->pc = 0x22A8B0u;
    {
        const bool branch_taken_0x22a8b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a8b0) {
            ctx->pc = 0x22A8C0u;
            goto label_22a8c0;
        }
    }
    ctx->pc = 0x22A8B8u;
label_22a8b8:
    // 0x22a8b8: 0x10000003  b           . + 4 + (0x3 << 2)
label_22a8bc:
    if (ctx->pc == 0x22A8BCu) {
        ctx->pc = 0x22A8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A8B8u;
        // 0x22a8bc: 0x21100  sll         $v0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A8C0u;
        goto label_22a8c0;
    }
    ctx->pc = 0x22A8B8u;
    {
        const bool branch_taken_0x22a8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A8B8u;
        // 0x22a8bc: 0x21100  sll         $v0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a8b8) {
            ctx->pc = 0x22A8C8u;
            goto label_22a8c8;
        }
    }
    ctx->pc = 0x22A8C0u;
label_22a8c0:
    // 0x22a8c0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x22a8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_22a8c4:
    // 0x22a8c4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x22a8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_22a8c8:
    // 0x22a8c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22a8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22a8cc:
    // 0x22a8cc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x22a8ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_22a8d0:
    // 0x22a8d0: 0xc08aaa4  jal         func_22AA90
label_22a8d4:
    if (ctx->pc == 0x22A8D4u) {
        ctx->pc = 0x22A8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A8D0u;
        // 0x22a8d4: 0xa0c20000  sb          $v0, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A8D8u;
        goto label_22a8d8;
    }
    ctx->pc = 0x22A8D0u;
    SET_GPR_U32(ctx, 31, 0x22A8D8u);
    ctx->pc = 0x22A8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A8D0u;
    // 0x22a8d4: 0xa0c20000  sb          $v0, 0x0($a2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AA90u;
    { ctx->pc = 0x22aa90; return; }
    ctx->pc = 0x22A8D8u;
label_22a8d8:
    // 0x22a8d8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x22a8d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_22a8dc:
    // 0x22a8dc: 0x2a030058  slti        $v1, $s0, 0x58
    ctx->pc = 0x22a8dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)88) ? 1 : 0);
label_22a8e0:
    // 0x22a8e0: 0x1460ff8a  bnez        $v1, . + 4 + (-0x76 << 2)
label_22a8e4:
    if (ctx->pc == 0x22A8E4u) {
        ctx->pc = 0x22A8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A8E0u;
        // 0x22a8e4: 0x26310048  addiu       $s1, $s1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A8E8u;
        goto label_22a8e8;
    }
    ctx->pc = 0x22A8E0u;
    {
        const bool branch_taken_0x22a8e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A8E0u;
        // 0x22a8e4: 0x26310048  addiu       $s1, $s1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a8e0) {
            ctx->pc = 0x22A70Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22a70c;
        }
    }
    ctx->pc = 0x22A8E8u;
label_22a8e8:
    // 0x22a8e8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x22a8e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_22a8ec:
    // 0x22a8ec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22a8ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22a8f0:
    // 0x22a8f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22a8f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22a8f4:
    // 0x22a8f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22a8f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22a8f8:
    // 0x22a8f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22a8f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22a8fc:
    // 0x22a8fc: 0x3e00008  jr          $ra
label_22a900:
    if (ctx->pc == 0x22A900u) {
        ctx->pc = 0x22A900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A8FCu;
        // 0x22a900: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A904u;
        goto label_22a904;
    }
    ctx->pc = 0x22A8FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A8FCu;
        // 0x22a900: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A8FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22A904u;
label_22a904:
    // 0x22a904: 0x0  nop
    ctx->pc = 0x22a904u;
    // NOP
label_22a908:
    // 0x22a908: 0x0  nop
    ctx->pc = 0x22a908u;
    // NOP
label_22a90c:
    // 0x22a90c: 0x0  nop
    ctx->pc = 0x22a90cu;
    // NOP
label_22a910:
    // 0x22a910: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x22a910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_22a914:
    // 0x22a914: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x22a914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_22a918:
    // 0x22a918: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x22a918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_22a91c:
    // 0x22a91c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x22a91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_22a920:
    // 0x22a920: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x22a920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_22a924:
    // 0x22a924: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22a924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_22a928:
    // 0x22a928: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22a928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_22a92c:
    // 0x22a92c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22a92cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22a930:
    // 0x22a930: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x22a930u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22a934:
    // 0x22a934: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22a934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22a938:
    // 0x22a938: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x22a938u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22a93c:
    // 0x22a93c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22a93cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22a940:
    // 0x22a940: 0x26240001  addiu       $a0, $s1, 0x1
    ctx->pc = 0x22a940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_22a944:
    // 0x22a944: 0x3c02002f  lui         $v0, 0x2F
    ctx->pc = 0x22a944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47 << 16));
label_22a948:
    // 0x22a948: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x22a948u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_22a94c:
    // 0x22a94c: 0x24422570  addiu       $v0, $v0, 0x2570
    ctx->pc = 0x22a94cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9584));
label_22a950:
    // 0x22a950: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x22a950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_22a954:
    // 0x22a954: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x22a954u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_22a958:
    // 0x22a958: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22a958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_22a95c:
    // 0x22a95c: 0xc044894  jal         func_112250
label_22a960:
    if (ctx->pc == 0x22A960u) {
        ctx->pc = 0x22A960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A95Cu;
        // 0x22a960: 0x244447b8  addiu       $a0, $v0, 0x47B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 18360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A964u;
        goto label_22a964;
    }
    ctx->pc = 0x22A95Cu;
    SET_GPR_U32(ctx, 31, 0x22A964u);
    ctx->pc = 0x22A960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A95Cu;
    // 0x22a960: 0x244447b8  addiu       $a0, $v0, 0x47B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 18360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112250u, 0x22A95Cu, 0x22A964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A964u;
label_22a964:
    // 0x22a964: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_22a968:
    if (ctx->pc == 0x22A968u) {
        ctx->pc = 0x22A96Cu;
        goto label_22a96c;
    }
    ctx->pc = 0x22A964u;
    {
        const bool branch_taken_0x22a964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a964) {
            ctx->pc = 0x22A970u;
            goto label_22a970;
        }
    }
    ctx->pc = 0x22A96Cu;
label_22a96c:
    // 0x22a96c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x22a96cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_22a970:
    // 0x22a970: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x22a970u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_22a974:
    // 0x22a974: 0x2a230007  slti        $v1, $s1, 0x7
    ctx->pc = 0x22a974u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)7) ? 1 : 0);
label_22a978:
    // 0x22a978: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
label_22a97c:
    if (ctx->pc == 0x22A97Cu) {
        ctx->pc = 0x22A97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A978u;
        // 0x22a97c: 0x26240001  addiu       $a0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A980u;
        goto label_22a980;
    }
    ctx->pc = 0x22A978u;
    {
        const bool branch_taken_0x22a978 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A978u;
        // 0x22a97c: 0x26240001  addiu       $a0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a978) {
            ctx->pc = 0x22A944u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22a944;
        }
    }
    ctx->pc = 0x22A980u;
label_22a980:
    // 0x22a980: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x22a980u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22a984:
    // 0x22a984: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x22a984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22a988:
    // 0x22a988: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x22a988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_22a98c:
    // 0x22a98c: 0x9484000a  lhu         $a0, 0xA($a0)
    ctx->pc = 0x22a98cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
label_22a990:
    // 0x22a990: 0x10830031  beq         $a0, $v1, . + 4 + (0x31 << 2)
label_22a994:
    if (ctx->pc == 0x22A994u) {
        ctx->pc = 0x22A998u;
        goto label_22a998;
    }
    ctx->pc = 0x22A990u;
    {
        const bool branch_taken_0x22a990 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x22a990) {
            ctx->pc = 0x22AA58u;
            { ctx->pc = 0x22aa58; return; }
        }
    }
    ctx->pc = 0x22A998u;
label_22a998:
    // 0x22a998: 0xc08f0cc  jal         func_23C330
label_22a99c:
    if (ctx->pc == 0x22A99Cu) {
        ctx->pc = 0x22A9A0u;
        goto label_22a9a0;
    }
    ctx->pc = 0x22A998u;
    SET_GPR_U32(ctx, 31, 0x22A9A0u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x22A9A0u;
label_22a9a0:
    // 0x22a9a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22a9a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22a9a4:
    // 0x22a9a4: 0x3c15002f  lui         $s5, 0x2F
    ctx->pc = 0x22a9a4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)47 << 16));
label_22a9a8:
    // 0x22a9a8: 0x26b56d70  addiu       $s5, $s5, 0x6D70
    ctx->pc = 0x22a9a8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 28016));
label_22a9ac:
    // 0x22a9ac: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x22a9acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22a9b0:
    // 0x22a9b0: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x22a9b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_22a9b4:
    // 0x22a9b4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x22a9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_22a9b8:
    // 0x22a9b8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x22a9b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22a9bc:
    // 0x22a9bc: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x22a9bcu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22a9c0:
    // 0x22a9c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22a9c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22a9c4:
    // 0x22a9c4: 0x0  nop
    ctx->pc = 0x22a9c4u;
    // NOP
label_22a9c8:
    // 0x22a9c8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x22a9c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_22a9cc:
    // 0x22a9cc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x22a9ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_22a9d0:
    // 0x22a9d0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x22a9d0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_22a9d4:
    // 0x22a9d4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x22a9d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_22a9d8:
    // 0x22a9d8: 0x44140000  mfc1        $s4, $f0
    ctx->pc = 0x22a9d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 20, bits); }
label_22a9dc:
    // 0x22a9dc: 0x0  nop
    ctx->pc = 0x22a9dcu;
    // NOP
label_22a9e0:
    // 0x22a9e0: 0xc044894  jal         func_112250
label_22a9e4:
    if (ctx->pc == 0x22A9E4u) {
        ctx->pc = 0x22A9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A9E0u;
        // 0x22a9e4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A9E8u;
        goto label_22a9e8;
    }
    ctx->pc = 0x22A9E0u;
    SET_GPR_U32(ctx, 31, 0x22A9E8u);
    ctx->pc = 0x22A9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A9E0u;
    // 0x22a9e4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112250u, 0x22A9E0u, 0x22A9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A9E8u;
label_22a9e8:
    // 0x22a9e8: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_22a9ec:
    if (ctx->pc == 0x22A9ECu) {
        ctx->pc = 0x22A9F0u;
        goto label_22a9f0;
    }
    ctx->pc = 0x22A9E8u;
    {
        const bool branch_taken_0x22a9e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a9e8) {
            ctx->pc = 0x22AA44u;
            { ctx->pc = 0x22aa44; return; }
        }
    }
    ctx->pc = 0x22A9F0u;
label_22a9f0:
    // 0x22a9f0: 0x16740013  bne         $s3, $s4, . + 4 + (0x13 << 2)
label_22a9f4:
    if (ctx->pc == 0x22A9F4u) {
        ctx->pc = 0x22A9F8u;
        goto label_22a9f8;
    }
    ctx->pc = 0x22A9F0u;
    {
        const bool branch_taken_0x22a9f0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 20));
        if (branch_taken_0x22a9f0) {
            ctx->pc = 0x22AA40u;
            { ctx->pc = 0x22aa40; return; }
        }
    }
    ctx->pc = 0x22A9F8u;
label_22a9f8:
    // 0x22a9f8: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x22a9f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22a9fc:
    // 0x22a9fc: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x22a9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
label_22aa00:
    // 0x22aa00: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x22aa00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_22aa04:
    // 0x22aa04: 0x2484b4e0  addiu       $a0, $a0, -0x4B20
    ctx->pc = 0x22aa04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948064));
label_22aa08:
    // 0x22aa08: 0x94e6000a  lhu         $a2, 0xA($a3)
    ctx->pc = 0x22aa08u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
label_22aa0c:
    // 0x22aa0c: 0x9465000a  lhu         $a1, 0xA($v1)
    ctx->pc = 0x22aa0cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
label_22aa10:
    // 0x22aa10: 0xa4e5000a  sh          $a1, 0xA($a3)
    ctx->pc = 0x22aa10u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 10), (uint16_t)GPR_U32(ctx, 5));
label_22aa14:
    // 0x22aa14: 0x92030035  lbu         $v1, 0x35($s0)
    ctx->pc = 0x22aa14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 53)));
label_22aa18:
    // 0x22aa18: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x22aa18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_22aa1c:
    // 0x22aa1c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x22aa1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    ctx->pc = 0x22aa20u;
    return;
}

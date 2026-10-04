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


void FUN_0019b618_part228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x20a388u: goto label_20a388;
        case 0x20a38cu: goto label_20a38c;
        case 0x20a390u: goto label_20a390;
        case 0x20a394u: goto label_20a394;
        case 0x20a398u: goto label_20a398;
        case 0x20a39cu: goto label_20a39c;
        case 0x20a3a0u: goto label_20a3a0;
        case 0x20a3a4u: goto label_20a3a4;
        case 0x20a3a8u: goto label_20a3a8;
        case 0x20a3acu: goto label_20a3ac;
        case 0x20a3b0u: goto label_20a3b0;
        case 0x20a3b4u: goto label_20a3b4;
        case 0x20a3b8u: goto label_20a3b8;
        case 0x20a3bcu: goto label_20a3bc;
        case 0x20a3c0u: goto label_20a3c0;
        case 0x20a3c4u: goto label_20a3c4;
        case 0x20a3c8u: goto label_20a3c8;
        case 0x20a3ccu: goto label_20a3cc;
        case 0x20a3d0u: goto label_20a3d0;
        case 0x20a3d4u: goto label_20a3d4;
        case 0x20a3d8u: goto label_20a3d8;
        case 0x20a3dcu: goto label_20a3dc;
        case 0x20a3e0u: goto label_20a3e0;
        case 0x20a3e4u: goto label_20a3e4;
        case 0x20a3e8u: goto label_20a3e8;
        case 0x20a3ecu: goto label_20a3ec;
        case 0x20a3f0u: goto label_20a3f0;
        case 0x20a3f4u: goto label_20a3f4;
        case 0x20a3f8u: goto label_20a3f8;
        case 0x20a3fcu: goto label_20a3fc;
        case 0x20a400u: goto label_20a400;
        case 0x20a404u: goto label_20a404;
        case 0x20a408u: goto label_20a408;
        case 0x20a40cu: goto label_20a40c;
        case 0x20a410u: goto label_20a410;
        case 0x20a414u: goto label_20a414;
        case 0x20a418u: goto label_20a418;
        case 0x20a41cu: goto label_20a41c;
        case 0x20a420u: goto label_20a420;
        case 0x20a424u: goto label_20a424;
        case 0x20a428u: goto label_20a428;
        case 0x20a42cu: goto label_20a42c;
        case 0x20a430u: goto label_20a430;
        case 0x20a434u: goto label_20a434;
        case 0x20a438u: goto label_20a438;
        case 0x20a43cu: goto label_20a43c;
        case 0x20a440u: goto label_20a440;
        case 0x20a444u: goto label_20a444;
        case 0x20a448u: goto label_20a448;
        case 0x20a44cu: goto label_20a44c;
        case 0x20a450u: goto label_20a450;
        case 0x20a454u: goto label_20a454;
        case 0x20a458u: goto label_20a458;
        case 0x20a45cu: goto label_20a45c;
        case 0x20a460u: goto label_20a460;
        case 0x20a464u: goto label_20a464;
        case 0x20a468u: goto label_20a468;
        case 0x20a46cu: goto label_20a46c;
        case 0x20a470u: goto label_20a470;
        case 0x20a474u: goto label_20a474;
        case 0x20a478u: goto label_20a478;
        case 0x20a47cu: goto label_20a47c;
        case 0x20a480u: goto label_20a480;
        case 0x20a484u: goto label_20a484;
        case 0x20a488u: goto label_20a488;
        case 0x20a48cu: goto label_20a48c;
        case 0x20a490u: goto label_20a490;
        case 0x20a494u: goto label_20a494;
        case 0x20a498u: goto label_20a498;
        case 0x20a49cu: goto label_20a49c;
        case 0x20a4a0u: goto label_20a4a0;
        case 0x20a4a4u: goto label_20a4a4;
        case 0x20a4a8u: goto label_20a4a8;
        case 0x20a4acu: goto label_20a4ac;
        case 0x20a4b0u: goto label_20a4b0;
        case 0x20a4b4u: goto label_20a4b4;
        case 0x20a4b8u: goto label_20a4b8;
        case 0x20a4bcu: goto label_20a4bc;
        case 0x20a4c0u: goto label_20a4c0;
        case 0x20a4c4u: goto label_20a4c4;
        case 0x20a4c8u: goto label_20a4c8;
        case 0x20a4ccu: goto label_20a4cc;
        case 0x20a4d0u: goto label_20a4d0;
        case 0x20a4d4u: goto label_20a4d4;
        case 0x20a4d8u: goto label_20a4d8;
        case 0x20a4dcu: goto label_20a4dc;
        case 0x20a4e0u: goto label_20a4e0;
        case 0x20a4e4u: goto label_20a4e4;
        case 0x20a4e8u: goto label_20a4e8;
        case 0x20a4ecu: goto label_20a4ec;
        case 0x20a4f0u: goto label_20a4f0;
        case 0x20a4f4u: goto label_20a4f4;
        case 0x20a4f8u: goto label_20a4f8;
        case 0x20a4fcu: goto label_20a4fc;
        case 0x20a500u: goto label_20a500;
        case 0x20a504u: goto label_20a504;
        case 0x20a508u: goto label_20a508;
        case 0x20a50cu: goto label_20a50c;
        case 0x20a510u: goto label_20a510;
        case 0x20a514u: goto label_20a514;
        case 0x20a518u: goto label_20a518;
        case 0x20a51cu: goto label_20a51c;
        case 0x20a520u: goto label_20a520;
        case 0x20a524u: goto label_20a524;
        case 0x20a528u: goto label_20a528;
        case 0x20a52cu: goto label_20a52c;
        case 0x20a530u: goto label_20a530;
        case 0x20a534u: goto label_20a534;
        case 0x20a538u: goto label_20a538;
        case 0x20a53cu: goto label_20a53c;
        case 0x20a540u: goto label_20a540;
        case 0x20a544u: goto label_20a544;
        case 0x20a548u: goto label_20a548;
        case 0x20a54cu: goto label_20a54c;
        case 0x20a550u: goto label_20a550;
        case 0x20a554u: goto label_20a554;
        case 0x20a558u: goto label_20a558;
        case 0x20a55cu: goto label_20a55c;
        case 0x20a560u: goto label_20a560;
        case 0x20a564u: goto label_20a564;
        case 0x20a568u: goto label_20a568;
        case 0x20a56cu: goto label_20a56c;
        case 0x20a570u: goto label_20a570;
        case 0x20a574u: goto label_20a574;
        case 0x20a578u: goto label_20a578;
        case 0x20a57cu: goto label_20a57c;
        case 0x20a580u: goto label_20a580;
        case 0x20a584u: goto label_20a584;
        case 0x20a588u: goto label_20a588;
        case 0x20a58cu: goto label_20a58c;
        case 0x20a590u: goto label_20a590;
        case 0x20a594u: goto label_20a594;
        case 0x20a598u: goto label_20a598;
        case 0x20a59cu: goto label_20a59c;
        case 0x20a5a0u: goto label_20a5a0;
        case 0x20a5a4u: goto label_20a5a4;
        case 0x20a5a8u: goto label_20a5a8;
        case 0x20a5acu: goto label_20a5ac;
        case 0x20a5b0u: goto label_20a5b0;
        case 0x20a5b4u: goto label_20a5b4;
        case 0x20a5b8u: goto label_20a5b8;
        case 0x20a5bcu: goto label_20a5bc;
        case 0x20a5c0u: goto label_20a5c0;
        case 0x20a5c4u: goto label_20a5c4;
        case 0x20a5c8u: goto label_20a5c8;
        case 0x20a5ccu: goto label_20a5cc;
        case 0x20a5d0u: goto label_20a5d0;
        case 0x20a5d4u: goto label_20a5d4;
        case 0x20a5d8u: goto label_20a5d8;
        case 0x20a5dcu: goto label_20a5dc;
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
        default: return;
    }

label_20a388:
    // 0x20a388: 0x1252821  addu        $a1, $t1, $a1
    ctx->pc = 0x20a388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
label_20a38c:
    // 0x20a38c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x20a38cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_20a390:
    // 0x20a390: 0x850018  mult        $zero, $a0, $a1
    ctx->pc = 0x20a390u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_20a394:
    // 0x20a394: 0x0  nop
    ctx->pc = 0x20a394u;
    // NOP
label_20a398:
    // 0x20a398: 0x0  nop
    ctx->pc = 0x20a398u;
    // NOP
label_20a39c:
    // 0x20a39c: 0x2010  mfhi        $a0
    ctx->pc = 0x20a39cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_20a3a0:
    // 0x20a3a0: 0x52fc2  srl         $a1, $a1, 31
    ctx->pc = 0x20a3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_20a3a4:
    // 0x20a3a4: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x20a3a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_20a3a8:
    // 0x20a3a8: 0x41843  sra         $v1, $a0, 1
    ctx->pc = 0x20a3a8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
label_20a3ac:
    // 0x20a3ac: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x20a3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
label_20a3b0:
    // 0x20a3b0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x20a3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_20a3b4:
    // 0x20a3b4: 0x24513f40  addiu       $s1, $v0, 0x3F40
    ctx->pc = 0x20a3b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 16192));
label_20a3b8:
    // 0x20a3b8: 0x24770280  addiu       $s7, $v1, 0x280
    ctx->pc = 0x20a3b8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 640));
label_20a3bc:
    // 0x20a3bc: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x20a3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_20a3c0:
    // 0x20a3c0: 0xc07c25c  jal         func_1F0970
label_20a3c4:
    if (ctx->pc == 0x20A3C4u) {
        ctx->pc = 0x20A3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A3C0u;
        // 0x20a3c4: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A3C8u;
        goto label_20a3c8;
    }
    ctx->pc = 0x20A3C0u;
    SET_GPR_U32(ctx, 31, 0x20A3C8u);
    ctx->pc = 0x20A3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A3C0u;
    // 0x20a3c4: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0970u;
    { ctx->pc = 0x1f0970; return; }
    ctx->pc = 0x20A3C8u;
label_20a3c8:
    // 0x20a3c8: 0x171100  sll         $v0, $s7, 4
    ctx->pc = 0x20a3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
label_20a3cc:
    // 0x20a3cc: 0x24037c00  addiu       $v1, $zero, 0x7C00
    ctx->pc = 0x20a3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31744));
label_20a3d0:
    // 0x20a3d0: 0x24426c00  addiu       $v0, $v0, 0x6C00
    ctx->pc = 0x20a3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_20a3d4:
    // 0x20a3d4: 0x3405fe00  ori         $a1, $zero, 0xFE00
    ctx->pc = 0x20a3d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_20a3d8:
    // 0x20a3d8: 0xa6220630  sh          $v0, 0x630($s1)
    ctx->pc = 0x20a3d8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1584), (uint16_t)GPR_U32(ctx, 2));
label_20a3dc:
    // 0x20a3dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20a3dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20a3e0:
    // 0x20a3e0: 0x26e20070  addiu       $v0, $s7, 0x70
    ctx->pc = 0x20a3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 112));
label_20a3e4:
    // 0x20a3e4: 0xa6230632  sh          $v1, 0x632($s1)
    ctx->pc = 0x20a3e4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1586), (uint16_t)GPR_U32(ctx, 3));
label_20a3e8:
    // 0x20a3e8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x20a3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_20a3ec:
    // 0x20a3ec: 0xae250634  sw          $a1, 0x634($s1)
    ctx->pc = 0x20a3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1588), GPR_U32(ctx, 5));
label_20a3f0:
    // 0x20a3f0: 0x24426c00  addiu       $v0, $v0, 0x6C00
    ctx->pc = 0x20a3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_20a3f4:
    // 0x20a3f4: 0x24060065  addiu       $a2, $zero, 0x65
    ctx->pc = 0x20a3f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
label_20a3f8:
    // 0x20a3f8: 0xa6220640  sh          $v0, 0x640($s1)
    ctx->pc = 0x20a3f8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1600), (uint16_t)GPR_U32(ctx, 2));
label_20a3fc:
    // 0x20a3fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20a3fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20a400:
    // 0x20a400: 0x24027c80  addiu       $v0, $zero, 0x7C80
    ctx->pc = 0x20a400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31872));
label_20a404:
    // 0x20a404: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20a404u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20a408:
    // 0x20a408: 0xa6220642  sh          $v0, 0x642($s1)
    ctx->pc = 0x20a408u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1602), (uint16_t)GPR_U32(ctx, 2));
label_20a40c:
    // 0x20a40c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x20a40cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20a410:
    // 0x20a410: 0xae250644  sw          $a1, 0x644($s1)
    ctx->pc = 0x20a410u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1604), GPR_U32(ctx, 5));
label_20a414:
    // 0x20a414: 0xc066c72  jal         func_19B1C8
label_20a418:
    if (ctx->pc == 0x20A418u) {
        ctx->pc = 0x20A418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A414u;
        // 0x20a418: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A41Cu;
        goto label_20a41c;
    }
    ctx->pc = 0x20A414u;
    SET_GPR_U32(ctx, 31, 0x20A41Cu);
    ctx->pc = 0x20A418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A414u;
    // 0x20a418: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x20A414u, 0x20A41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A41Cu;
label_20a41c:
    // 0x20a41c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x20a41cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20a420:
    // 0x20a420: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x20a420u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20a424:
    // 0x20a424: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x20a424u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20a428:
    // 0x20a428: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x20a428u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20a42c:
    // 0x20a42c: 0x8f829100  lw          $v0, -0x6F00($gp)
    ctx->pc = 0x20a42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_20a430:
    // 0x20a430: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x20a430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_20a434:
    // 0x20a434: 0x8c243ffc  lw          $a0, 0x3FFC($at)
    ctx->pc = 0x20a434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_20a438:
    // 0x20a438: 0x562821  addu        $a1, $v0, $s6
    ctx->pc = 0x20a438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_20a43c:
    // 0x20a43c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x20a43cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_20a440:
    // 0x20a440: 0x8c4257ec  lw          $v0, 0x57EC($v0)
    ctx->pc = 0x20a440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22508)));
label_20a444:
    // 0x20a444: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x20a444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_20a448:
    // 0x20a448: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x20a448u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_20a44c:
    // 0x20a44c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x20a44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_20a450:
    // 0x20a450: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x20a450u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_20a454:
    // 0x20a454: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x20a454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_20a458:
    // 0x20a458: 0x14530003  bne         $v0, $s3, . + 4 + (0x3 << 2)
label_20a45c:
    if (ctx->pc == 0x20A45Cu) {
        ctx->pc = 0x20A45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A458u;
        // 0x20a45c: 0x24743700  addiu       $s4, $v1, 0x3700 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 14080));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A460u;
        goto label_20a460;
    }
    ctx->pc = 0x20A458u;
    {
        const bool branch_taken_0x20a458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x20A45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A458u;
        // 0x20a45c: 0x24743700  addiu       $s4, $v1, 0x3700 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 14080));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a458) {
            ctx->pc = 0x20A468u;
            goto label_20a468;
        }
    }
    ctx->pc = 0x20A460u;
label_20a460:
    // 0x20a460: 0x10000002  b           . + 4 + (0x2 << 2)
label_20a464:
    if (ctx->pc == 0x20A464u) {
        ctx->pc = 0x20A464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A460u;
        // 0x20a464: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A468u;
        goto label_20a468;
    }
    ctx->pc = 0x20A460u;
    {
        const bool branch_taken_0x20a460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A460u;
        // 0x20a464: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a460) {
            ctx->pc = 0x20A46Cu;
            goto label_20a46c;
        }
    }
    ctx->pc = 0x20A468u;
label_20a468:
    // 0x20a468: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x20a468u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_20a46c:
    // 0x20a46c: 0x2f1a821  addu        $s5, $s7, $s1
    ctx->pc = 0x20a46cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 17)));
label_20a470:
    // 0x20a470: 0x24037ca0  addiu       $v1, $zero, 0x7CA0
    ctx->pc = 0x20a470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31904));
label_20a474:
    // 0x20a474: 0x151100  sll         $v0, $s5, 4
    ctx->pc = 0x20a474u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
label_20a478:
    // 0x20a478: 0x3404fe00  ori         $a0, $zero, 0xFE00
    ctx->pc = 0x20a478u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_20a47c:
    // 0x20a47c: 0x24456c00  addiu       $a1, $v0, 0x6C00
    ctx->pc = 0x20a47cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_20a480:
    // 0x20a480: 0x26a2003c  addiu       $v0, $s5, 0x3C
    ctx->pc = 0x20a480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 60));
label_20a484:
    // 0x20a484: 0xa6850090  sh          $a1, 0x90($s4)
    ctx->pc = 0x20a484u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 144), (uint16_t)GPR_U32(ctx, 5));
label_20a488:
    // 0x20a488: 0xa6830092  sh          $v1, 0x92($s4)
    ctx->pc = 0x20a488u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 146), (uint16_t)GPR_U32(ctx, 3));
label_20a48c:
    // 0x20a48c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x20a48cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_20a490:
    // 0x20a490: 0x24436c00  addiu       $v1, $v0, 0x6C00
    ctx->pc = 0x20a490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_20a494:
    // 0x20a494: 0xae840094  sw          $a0, 0x94($s4)
    ctx->pc = 0x20a494u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 148), GPR_U32(ctx, 4));
label_20a498:
    // 0x20a498: 0x24027e50  addiu       $v0, $zero, 0x7E50
    ctx->pc = 0x20a498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32336));
label_20a49c:
    // 0x20a49c: 0xa68300a0  sh          $v1, 0xA0($s4)
    ctx->pc = 0x20a49cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 160), (uint16_t)GPR_U32(ctx, 3));
label_20a4a0:
    // 0x20a4a0: 0xa68200a2  sh          $v0, 0xA2($s4)
    ctx->pc = 0x20a4a0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 162), (uint16_t)GPR_U32(ctx, 2));
label_20a4a4:
    // 0x20a4a4: 0xae8400a4  sw          $a0, 0xA4($s4)
    ctx->pc = 0x20a4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 164), GPR_U32(ctx, 4));
label_20a4a8:
    // 0x20a4a8: 0x8f839100  lw          $v1, -0x6F00($gp)
    ctx->pc = 0x20a4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_20a4ac:
    // 0x20a4ac: 0x8c62572c  lw          $v0, 0x572C($v1)
    ctx->pc = 0x20a4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22316)));
label_20a4b0:
    // 0x20a4b0: 0x1453000a  bne         $v0, $s3, . + 4 + (0xA << 2)
label_20a4b4:
    if (ctx->pc == 0x20A4B4u) {
        ctx->pc = 0x20A4B8u;
        goto label_20a4b8;
    }
    ctx->pc = 0x20A4B0u;
    {
        const bool branch_taken_0x20a4b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x20a4b0) {
            ctx->pc = 0x20A4DCu;
            goto label_20a4dc;
        }
    }
    ctx->pc = 0x20A4B8u;
label_20a4b8:
    // 0x20a4b8: 0x80645730  lb          $a0, 0x5730($v1)
    ctx->pc = 0x20a4b8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 22320)));
label_20a4bc:
    // 0x20a4bc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x20a4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_20a4c0:
    // 0x20a4c0: 0xa2840080  sb          $a0, 0x80($s4)
    ctx->pc = 0x20a4c0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 128), (uint8_t)GPR_U32(ctx, 4));
label_20a4c4:
    // 0x20a4c4: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x20a4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_20a4c8:
    // 0x20a4c8: 0xa2860081  sb          $a2, 0x81($s4)
    ctx->pc = 0x20a4c8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 129), (uint8_t)GPR_U32(ctx, 6));
label_20a4cc:
    // 0x20a4cc: 0xa2860082  sb          $a2, 0x82($s4)
    ctx->pc = 0x20a4ccu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 130), (uint8_t)GPR_U32(ctx, 6));
label_20a4d0:
    // 0x20a4d0: 0xa2830083  sb          $v1, 0x83($s4)
    ctx->pc = 0x20a4d0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 131), (uint8_t)GPR_U32(ctx, 3));
label_20a4d4:
    // 0x20a4d4: 0x10000009  b           . + 4 + (0x9 << 2)
label_20a4d8:
    if (ctx->pc == 0x20A4D8u) {
        ctx->pc = 0x20A4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A4D4u;
        // 0x20a4d8: 0xae820084  sw          $v0, 0x84($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A4DCu;
        goto label_20a4dc;
    }
    ctx->pc = 0x20A4D4u;
    {
        const bool branch_taken_0x20a4d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A4D4u;
        // 0x20a4d8: 0xae820084  sw          $v0, 0x84($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a4d4) {
            ctx->pc = 0x20A4FCu;
            goto label_20a4fc;
        }
    }
    ctx->pc = 0x20A4DCu;
label_20a4dc:
    // 0x20a4dc: 0x0  nop
    ctx->pc = 0x20a4dcu;
    // NOP
label_20a4e0:
    // 0x20a4e0: 0xa2860080  sb          $a2, 0x80($s4)
    ctx->pc = 0x20a4e0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 128), (uint8_t)GPR_U32(ctx, 6));
label_20a4e4:
    // 0x20a4e4: 0xa2860081  sb          $a2, 0x81($s4)
    ctx->pc = 0x20a4e4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 129), (uint8_t)GPR_U32(ctx, 6));
label_20a4e8:
    // 0x20a4e8: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x20a4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_20a4ec:
    // 0x20a4ec: 0xa2860082  sb          $a2, 0x82($s4)
    ctx->pc = 0x20a4ecu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 130), (uint8_t)GPR_U32(ctx, 6));
label_20a4f0:
    // 0x20a4f0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x20a4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_20a4f4:
    // 0x20a4f4: 0xa2830083  sb          $v1, 0x83($s4)
    ctx->pc = 0x20a4f4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 131), (uint8_t)GPR_U32(ctx, 3));
label_20a4f8:
    // 0x20a4f8: 0xae820084  sw          $v0, 0x84($s4)
    ctx->pc = 0x20a4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 132), GPR_U32(ctx, 2));
label_20a4fc:
    // 0x20a4fc: 0x0  nop
    ctx->pc = 0x20a4fcu;
    // NOP
label_20a500:
    // 0x20a500: 0x8f829100  lw          $v0, -0x6F00($gp)
    ctx->pc = 0x20a500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_20a504:
    // 0x20a504: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x20a504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_20a508:
    // 0x20a508: 0xc070d40  jal         func_1C3500
label_20a50c:
    if (ctx->pc == 0x20A50Cu) {
        ctx->pc = 0x20A50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A508u;
        // 0x20a50c: 0x8c445734  lw          $a0, 0x5734($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22324)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A510u;
        goto label_20a510;
    }
    ctx->pc = 0x20A508u;
    SET_GPR_U32(ctx, 31, 0x20A510u);
    ctx->pc = 0x20A50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A508u;
    // 0x20a50c: 0x8c445734  lw          $a0, 0x5734($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22324)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3500u;
    { ctx->pc = 0x1c3500; return; }
    ctx->pc = 0x20A510u;
label_20a510:
    // 0x20a510: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x20a510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_20a514:
    // 0x20a514: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20a514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20a518:
    // 0x20a518: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x20a518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_20a51c:
    // 0x20a51c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20a51cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20a520:
    // 0x20a520: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20a520u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20a524:
    // 0x20a524: 0xc066c72  jal         func_19B1C8
label_20a528:
    if (ctx->pc == 0x20A528u) {
        ctx->pc = 0x20A528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A524u;
        // 0x20a528: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A52Cu;
        goto label_20a52c;
    }
    ctx->pc = 0x20A524u;
    SET_GPR_U32(ctx, 31, 0x20A52Cu);
    ctx->pc = 0x20A528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A524u;
    // 0x20a528: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x20A524u, 0x20A52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A52Cu;
label_20a52c:
    // 0x20a52c: 0x8f849100  lw          $a0, -0x6F00($gp)
    ctx->pc = 0x20a52cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938880)));
label_20a530:
    // 0x20a530: 0x8c8357ec  lw          $v1, 0x57EC($a0)
    ctx->pc = 0x20a530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 22508)));
label_20a534:
    // 0x20a534: 0x1473002e  bne         $v1, $s3, . + 4 + (0x2E << 2)
label_20a538:
    if (ctx->pc == 0x20A538u) {
        ctx->pc = 0x20A53Cu;
        goto label_20a53c;
    }
    ctx->pc = 0x20A534u;
    {
        const bool branch_taken_0x20a534 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        if (branch_taken_0x20a534) {
            ctx->pc = 0x20A5F0u;
            goto label_20a5f0;
        }
    }
    ctx->pc = 0x20A53Cu;
label_20a53c:
    // 0x20a53c: 0x8c8357f4  lw          $v1, 0x57F4($a0)
    ctx->pc = 0x20a53cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 22516)));
label_20a540:
    // 0x20a540: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
label_20a544:
    if (ctx->pc == 0x20A544u) {
        ctx->pc = 0x20A548u;
        goto label_20a548;
    }
    ctx->pc = 0x20A540u;
    {
        const bool branch_taken_0x20a540 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a540) {
            ctx->pc = 0x20A5F0u;
            goto label_20a5f0;
        }
    }
    ctx->pc = 0x20A548u;
label_20a548:
    // 0x20a548: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x20a548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_20a54c:
    // 0x20a54c: 0x8c8557e8  lw          $a1, 0x57E8($a0)
    ctx->pc = 0x20a54cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 22504)));
label_20a550:
    // 0x20a550: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x20a550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_20a554:
    // 0x20a554: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x20a554u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_20a558:
    // 0x20a558: 0x28a10020  slti        $at, $a1, 0x20
    ctx->pc = 0x20a558u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
label_20a55c:
    // 0x20a55c: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x20a55cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20a560:
    // 0x20a560: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x20a560u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_20a564:
    // 0x20a564: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x20a564u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20a568:
    // 0x20a568: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x20a568u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_20a56c:
    // 0x20a56c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x20a56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_20a570:
    // 0x20a570: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_20a574:
    if (ctx->pc == 0x20A574u) {
        ctx->pc = 0x20A574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A570u;
        // 0x20a574: 0x24545180  addiu       $s4, $v0, 0x5180 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 20864));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A578u;
        goto label_20a578;
    }
    ctx->pc = 0x20A570u;
    {
        const bool branch_taken_0x20a570 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A570u;
        // 0x20a574: 0x24545180  addiu       $s4, $v0, 0x5180 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 20864));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a570) {
            ctx->pc = 0x20A594u;
            goto label_20a594;
        }
    }
    ctx->pc = 0x20A578u;
label_20a578:
    // 0x20a578: 0x51980  sll         $v1, $a1, 6
    ctx->pc = 0x20a578u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_20a57c:
    // 0x20a57c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_20a580:
    if (ctx->pc == 0x20A580u) {
        ctx->pc = 0x20A580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A57Cu;
        // 0x20a580: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A584u;
        goto label_20a584;
    }
    ctx->pc = 0x20A57Cu;
    {
        const bool branch_taken_0x20a57c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x20A580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A57Cu;
        // 0x20a580: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a57c) {
            ctx->pc = 0x20A58Cu;
            goto label_20a58c;
        }
    }
    ctx->pc = 0x20A584u;
label_20a584:
    // 0x20a584: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x20a584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
label_20a588:
    // 0x20a588: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x20a588u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_20a58c:
    // 0x20a58c: 0x10000009  b           . + 4 + (0x9 << 2)
label_20a590:
    if (ctx->pc == 0x20A590u) {
        ctx->pc = 0x20A590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A58Cu;
        // 0x20a590: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A594u;
        goto label_20a594;
    }
    ctx->pc = 0x20A58Cu;
    {
        const bool branch_taken_0x20a58c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A58Cu;
        // 0x20a590: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a58c) {
            ctx->pc = 0x20A5B4u;
            goto label_20a5b4;
        }
    }
    ctx->pc = 0x20A594u;
label_20a594:
    // 0x20a594: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x20a594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_20a598:
    // 0x20a598: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x20a598u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_20a59c:
    // 0x20a59c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x20a59cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_20a5a0:
    // 0x20a5a0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_20a5a4:
    if (ctx->pc == 0x20A5A4u) {
        ctx->pc = 0x20A5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A5A0u;
        // 0x20a5a4: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A5A8u;
        goto label_20a5a8;
    }
    ctx->pc = 0x20A5A0u;
    {
        const bool branch_taken_0x20a5a0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x20A5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A5A0u;
        // 0x20a5a4: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a5a0) {
            ctx->pc = 0x20A5B0u;
            goto label_20a5b0;
        }
    }
    ctx->pc = 0x20A5A8u;
label_20a5a8:
    // 0x20a5a8: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x20a5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
label_20a5ac:
    // 0x20a5ac: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x20a5acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_20a5b0:
    // 0x20a5b0: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x20a5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_20a5b4:
    // 0x20a5b4: 0x304a00ff  andi        $t2, $v0, 0xFF
    ctx->pc = 0x20a5b4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_20a5b8:
    // 0x20a5b8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x20a5b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_20a5bc:
    // 0x20a5bc: 0x26840010  addiu       $a0, $s4, 0x10
    ctx->pc = 0x20a5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_20a5c0:
    // 0x20a5c0: 0x24060074  addiu       $a2, $zero, 0x74
    ctx->pc = 0x20a5c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
label_20a5c4:
    // 0x20a5c4: 0x2407003c  addiu       $a3, $zero, 0x3C
    ctx->pc = 0x20a5c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_20a5c8:
    // 0x20a5c8: 0x24080036  addiu       $t0, $zero, 0x36
    ctx->pc = 0x20a5c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
label_20a5cc:
    // 0x20a5cc: 0xc07c0d0  jal         func_1F0340
label_20a5d0:
    if (ctx->pc == 0x20A5D0u) {
        ctx->pc = 0x20A5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A5CCu;
        // 0x20a5d0: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20A5D4u;
        goto label_20a5d4;
    }
    ctx->pc = 0x20A5CCu;
    SET_GPR_U32(ctx, 31, 0x20A5D4u);
    ctx->pc = 0x20A5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A5CCu;
    // 0x20a5d0: 0x2409000a  addiu       $t1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0340u;
    { ctx->pc = 0x1f0340; return; }
    ctx->pc = 0x20A5D4u;
label_20a5d4:
    // 0x20a5d4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x20a5d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_20a5d8:
    // 0x20a5d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20a5d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20a5dc:
    // 0x20a5dc: 0x2406002d  addiu       $a2, $zero, 0x2D
    ctx->pc = 0x20a5dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
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
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x20A5E8u, 0x20A5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
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
            goto label_20a42c;
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
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x20A7A0u, 0x20A7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
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
    { ctx->pc = 0x20ad90; return; }
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
    { ctx->pc = 0x20ad90; return; }
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
    ctx->pc = 0x20ab58u;
    return;
}

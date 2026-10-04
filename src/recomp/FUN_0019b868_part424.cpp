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

// Function: FUN_0019b868
// Address: 0x19b868 - 0x29b870
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b868_part424(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x26a118u: goto label_26a118;
        case 0x26a11cu: goto label_26a11c;
        case 0x26a120u: goto label_26a120;
        case 0x26a124u: goto label_26a124;
        case 0x26a128u: goto label_26a128;
        case 0x26a12cu: goto label_26a12c;
        case 0x26a130u: goto label_26a130;
        case 0x26a134u: goto label_26a134;
        case 0x26a138u: goto label_26a138;
        case 0x26a13cu: goto label_26a13c;
        case 0x26a140u: goto label_26a140;
        case 0x26a144u: goto label_26a144;
        case 0x26a148u: goto label_26a148;
        case 0x26a14cu: goto label_26a14c;
        case 0x26a150u: goto label_26a150;
        case 0x26a154u: goto label_26a154;
        case 0x26a158u: goto label_26a158;
        case 0x26a15cu: goto label_26a15c;
        case 0x26a160u: goto label_26a160;
        case 0x26a164u: goto label_26a164;
        case 0x26a168u: goto label_26a168;
        case 0x26a16cu: goto label_26a16c;
        case 0x26a170u: goto label_26a170;
        case 0x26a174u: goto label_26a174;
        case 0x26a178u: goto label_26a178;
        case 0x26a17cu: goto label_26a17c;
        case 0x26a180u: goto label_26a180;
        case 0x26a184u: goto label_26a184;
        case 0x26a188u: goto label_26a188;
        case 0x26a18cu: goto label_26a18c;
        case 0x26a190u: goto label_26a190;
        case 0x26a194u: goto label_26a194;
        case 0x26a198u: goto label_26a198;
        case 0x26a19cu: goto label_26a19c;
        case 0x26a1a0u: goto label_26a1a0;
        case 0x26a1a4u: goto label_26a1a4;
        case 0x26a1a8u: goto label_26a1a8;
        case 0x26a1acu: goto label_26a1ac;
        case 0x26a1b0u: goto label_26a1b0;
        case 0x26a1b4u: goto label_26a1b4;
        case 0x26a1b8u: goto label_26a1b8;
        case 0x26a1bcu: goto label_26a1bc;
        case 0x26a1c0u: goto label_26a1c0;
        case 0x26a1c4u: goto label_26a1c4;
        case 0x26a1c8u: goto label_26a1c8;
        case 0x26a1ccu: goto label_26a1cc;
        case 0x26a1d0u: goto label_26a1d0;
        case 0x26a1d4u: goto label_26a1d4;
        case 0x26a1d8u: goto label_26a1d8;
        case 0x26a1dcu: goto label_26a1dc;
        case 0x26a1e0u: goto label_26a1e0;
        case 0x26a1e4u: goto label_26a1e4;
        case 0x26a1e8u: goto label_26a1e8;
        case 0x26a1ecu: goto label_26a1ec;
        case 0x26a1f0u: goto label_26a1f0;
        case 0x26a1f4u: goto label_26a1f4;
        case 0x26a1f8u: goto label_26a1f8;
        case 0x26a1fcu: goto label_26a1fc;
        case 0x26a200u: goto label_26a200;
        case 0x26a204u: goto label_26a204;
        case 0x26a208u: goto label_26a208;
        case 0x26a20cu: goto label_26a20c;
        case 0x26a210u: goto label_26a210;
        case 0x26a214u: goto label_26a214;
        case 0x26a218u: goto label_26a218;
        case 0x26a21cu: goto label_26a21c;
        case 0x26a220u: goto label_26a220;
        case 0x26a224u: goto label_26a224;
        case 0x26a228u: goto label_26a228;
        case 0x26a22cu: goto label_26a22c;
        case 0x26a230u: goto label_26a230;
        case 0x26a234u: goto label_26a234;
        case 0x26a238u: goto label_26a238;
        case 0x26a23cu: goto label_26a23c;
        case 0x26a240u: goto label_26a240;
        case 0x26a244u: goto label_26a244;
        case 0x26a248u: goto label_26a248;
        case 0x26a24cu: goto label_26a24c;
        case 0x26a250u: goto label_26a250;
        case 0x26a254u: goto label_26a254;
        case 0x26a258u: goto label_26a258;
        case 0x26a25cu: goto label_26a25c;
        case 0x26a260u: goto label_26a260;
        case 0x26a264u: goto label_26a264;
        case 0x26a268u: goto label_26a268;
        case 0x26a26cu: goto label_26a26c;
        case 0x26a270u: goto label_26a270;
        case 0x26a274u: goto label_26a274;
        case 0x26a278u: goto label_26a278;
        case 0x26a27cu: goto label_26a27c;
        case 0x26a280u: goto label_26a280;
        case 0x26a284u: goto label_26a284;
        case 0x26a288u: goto label_26a288;
        case 0x26a28cu: goto label_26a28c;
        case 0x26a290u: goto label_26a290;
        case 0x26a294u: goto label_26a294;
        case 0x26a298u: goto label_26a298;
        case 0x26a29cu: goto label_26a29c;
        case 0x26a2a0u: goto label_26a2a0;
        case 0x26a2a4u: goto label_26a2a4;
        case 0x26a2a8u: goto label_26a2a8;
        case 0x26a2acu: goto label_26a2ac;
        case 0x26a2b0u: goto label_26a2b0;
        case 0x26a2b4u: goto label_26a2b4;
        case 0x26a2b8u: goto label_26a2b8;
        case 0x26a2bcu: goto label_26a2bc;
        case 0x26a2c0u: goto label_26a2c0;
        case 0x26a2c4u: goto label_26a2c4;
        case 0x26a2c8u: goto label_26a2c8;
        case 0x26a2ccu: goto label_26a2cc;
        case 0x26a2d0u: goto label_26a2d0;
        case 0x26a2d4u: goto label_26a2d4;
        case 0x26a2d8u: goto label_26a2d8;
        case 0x26a2dcu: goto label_26a2dc;
        case 0x26a2e0u: goto label_26a2e0;
        case 0x26a2e4u: goto label_26a2e4;
        case 0x26a2e8u: goto label_26a2e8;
        case 0x26a2ecu: goto label_26a2ec;
        case 0x26a2f0u: goto label_26a2f0;
        case 0x26a2f4u: goto label_26a2f4;
        case 0x26a2f8u: goto label_26a2f8;
        case 0x26a2fcu: goto label_26a2fc;
        case 0x26a300u: goto label_26a300;
        case 0x26a304u: goto label_26a304;
        case 0x26a308u: goto label_26a308;
        case 0x26a30cu: goto label_26a30c;
        case 0x26a310u: goto label_26a310;
        case 0x26a314u: goto label_26a314;
        case 0x26a318u: goto label_26a318;
        case 0x26a31cu: goto label_26a31c;
        case 0x26a320u: goto label_26a320;
        case 0x26a324u: goto label_26a324;
        case 0x26a328u: goto label_26a328;
        case 0x26a32cu: goto label_26a32c;
        case 0x26a330u: goto label_26a330;
        case 0x26a334u: goto label_26a334;
        case 0x26a338u: goto label_26a338;
        case 0x26a33cu: goto label_26a33c;
        case 0x26a340u: goto label_26a340;
        case 0x26a344u: goto label_26a344;
        case 0x26a348u: goto label_26a348;
        case 0x26a34cu: goto label_26a34c;
        case 0x26a350u: goto label_26a350;
        case 0x26a354u: goto label_26a354;
        case 0x26a358u: goto label_26a358;
        case 0x26a35cu: goto label_26a35c;
        case 0x26a360u: goto label_26a360;
        case 0x26a364u: goto label_26a364;
        case 0x26a368u: goto label_26a368;
        case 0x26a36cu: goto label_26a36c;
        case 0x26a370u: goto label_26a370;
        case 0x26a374u: goto label_26a374;
        case 0x26a378u: goto label_26a378;
        case 0x26a37cu: goto label_26a37c;
        case 0x26a380u: goto label_26a380;
        case 0x26a384u: goto label_26a384;
        case 0x26a388u: goto label_26a388;
        case 0x26a38cu: goto label_26a38c;
        case 0x26a390u: goto label_26a390;
        case 0x26a394u: goto label_26a394;
        case 0x26a398u: goto label_26a398;
        case 0x26a39cu: goto label_26a39c;
        case 0x26a3a0u: goto label_26a3a0;
        case 0x26a3a4u: goto label_26a3a4;
        case 0x26a3a8u: goto label_26a3a8;
        case 0x26a3acu: goto label_26a3ac;
        case 0x26a3b0u: goto label_26a3b0;
        case 0x26a3b4u: goto label_26a3b4;
        case 0x26a3b8u: goto label_26a3b8;
        case 0x26a3bcu: goto label_26a3bc;
        case 0x26a3c0u: goto label_26a3c0;
        case 0x26a3c4u: goto label_26a3c4;
        case 0x26a3c8u: goto label_26a3c8;
        case 0x26a3ccu: goto label_26a3cc;
        case 0x26a3d0u: goto label_26a3d0;
        case 0x26a3d4u: goto label_26a3d4;
        case 0x26a3d8u: goto label_26a3d8;
        case 0x26a3dcu: goto label_26a3dc;
        case 0x26a3e0u: goto label_26a3e0;
        case 0x26a3e4u: goto label_26a3e4;
        case 0x26a3e8u: goto label_26a3e8;
        case 0x26a3ecu: goto label_26a3ec;
        case 0x26a3f0u: goto label_26a3f0;
        case 0x26a3f4u: goto label_26a3f4;
        case 0x26a3f8u: goto label_26a3f8;
        case 0x26a3fcu: goto label_26a3fc;
        case 0x26a400u: goto label_26a400;
        case 0x26a404u: goto label_26a404;
        case 0x26a408u: goto label_26a408;
        case 0x26a40cu: goto label_26a40c;
        case 0x26a410u: goto label_26a410;
        case 0x26a414u: goto label_26a414;
        case 0x26a418u: goto label_26a418;
        case 0x26a41cu: goto label_26a41c;
        case 0x26a420u: goto label_26a420;
        case 0x26a424u: goto label_26a424;
        case 0x26a428u: goto label_26a428;
        case 0x26a42cu: goto label_26a42c;
        case 0x26a430u: goto label_26a430;
        case 0x26a434u: goto label_26a434;
        case 0x26a438u: goto label_26a438;
        case 0x26a43cu: goto label_26a43c;
        case 0x26a440u: goto label_26a440;
        case 0x26a444u: goto label_26a444;
        case 0x26a448u: goto label_26a448;
        case 0x26a44cu: goto label_26a44c;
        case 0x26a450u: goto label_26a450;
        case 0x26a454u: goto label_26a454;
        case 0x26a458u: goto label_26a458;
        case 0x26a45cu: goto label_26a45c;
        case 0x26a460u: goto label_26a460;
        case 0x26a464u: goto label_26a464;
        case 0x26a468u: goto label_26a468;
        case 0x26a46cu: goto label_26a46c;
        case 0x26a470u: goto label_26a470;
        case 0x26a474u: goto label_26a474;
        case 0x26a478u: goto label_26a478;
        case 0x26a47cu: goto label_26a47c;
        case 0x26a480u: goto label_26a480;
        case 0x26a484u: goto label_26a484;
        case 0x26a488u: goto label_26a488;
        case 0x26a48cu: goto label_26a48c;
        case 0x26a490u: goto label_26a490;
        case 0x26a494u: goto label_26a494;
        case 0x26a498u: goto label_26a498;
        case 0x26a49cu: goto label_26a49c;
        case 0x26a4a0u: goto label_26a4a0;
        case 0x26a4a4u: goto label_26a4a4;
        case 0x26a4a8u: goto label_26a4a8;
        case 0x26a4acu: goto label_26a4ac;
        case 0x26a4b0u: goto label_26a4b0;
        case 0x26a4b4u: goto label_26a4b4;
        case 0x26a4b8u: goto label_26a4b8;
        case 0x26a4bcu: goto label_26a4bc;
        case 0x26a4c0u: goto label_26a4c0;
        case 0x26a4c4u: goto label_26a4c4;
        case 0x26a4c8u: goto label_26a4c8;
        case 0x26a4ccu: goto label_26a4cc;
        case 0x26a4d0u: goto label_26a4d0;
        case 0x26a4d4u: goto label_26a4d4;
        case 0x26a4d8u: goto label_26a4d8;
        case 0x26a4dcu: goto label_26a4dc;
        case 0x26a4e0u: goto label_26a4e0;
        case 0x26a4e4u: goto label_26a4e4;
        case 0x26a4e8u: goto label_26a4e8;
        case 0x26a4ecu: goto label_26a4ec;
        case 0x26a4f0u: goto label_26a4f0;
        case 0x26a4f4u: goto label_26a4f4;
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
        default: return;
    }

label_26a118:
    // 0x26a118: 0x0  nop
    ctx->pc = 0x26a118u;
    // NOP
label_26a11c:
    // 0x26a11c: 0x0  nop
    ctx->pc = 0x26a11cu;
    // NOP
label_26a120:
    // 0x26a120: 0x14770  tge         $zero, $at, 285
    ctx->pc = 0x26a120u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_26a124:
    // 0x26a124: 0x5780  sll         $t2, $zero, 30
    ctx->pc = 0x26a124u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 30));
label_26a128:
    // 0x26a128: 0x0  nop
    ctx->pc = 0x26a128u;
    // NOP
label_26a12c:
    // 0x26a12c: 0x0  nop
    ctx->pc = 0x26a12cu;
    // NOP
label_26a130:
    // 0x26a130: 0x1477b  dsra        $t0, $at, 29
    ctx->pc = 0x26a130u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 1) >> 29);
label_26a134:
    // 0x26a134: 0xabc0  sll         $s5, $zero, 15
    ctx->pc = 0x26a134u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_26a138:
    // 0x26a138: 0x0  nop
    ctx->pc = 0x26a138u;
    // NOP
label_26a13c:
    // 0x26a13c: 0x0  nop
    ctx->pc = 0x26a13cu;
    // NOP
label_26a140:
    // 0x26a140: 0x14791  .word       0x00014791                   # mthi        $zero # 00014780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a140u;
    ctx->hi = GPR_U64(ctx, 0);
label_26a144:
    // 0x26a144: 0xd9f0  tge         $zero, $zero, 871
    ctx->pc = 0x26a144u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26a148:
    // 0x26a148: 0x0  nop
    ctx->pc = 0x26a148u;
    // NOP
label_26a14c:
    // 0x26a14c: 0x0  nop
    ctx->pc = 0x26a14cu;
    // NOP
label_26a150:
    // 0x26a150: 0x147ad  .word       0x000147AD                   # daddu       $t0, $zero, $at # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a150u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_26a154:
    // 0x26a154: 0x2f20  .word       0x00002F20                   # add         $a1, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a154u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
label_26a158:
    // 0x26a158: 0x0  nop
    ctx->pc = 0x26a158u;
    // NOP
label_26a15c:
    // 0x26a15c: 0x0  nop
    ctx->pc = 0x26a15cu;
    // NOP
label_26a160:
    // 0x26a160: 0x147b3  tltu        $zero, $at, 286
    ctx->pc = 0x26a160u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_26a164:
    // 0x26a164: 0x5870  tge         $zero, $zero, 353
    ctx->pc = 0x26a164u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26a168:
    // 0x26a168: 0x0  nop
    ctx->pc = 0x26a168u;
    // NOP
label_26a16c:
    // 0x26a16c: 0x0  nop
    ctx->pc = 0x26a16cu;
    // NOP
label_26a170:
    // 0x26a170: 0x147bf  dsra32      $t0, $at, 30
    ctx->pc = 0x26a170u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 1) >> (32 + 30));
label_26a174:
    // 0x26a174: 0x2a50  .word       0x00002A50                   # mfhi        $a1 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a174u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_26a178:
    // 0x26a178: 0x0  nop
    ctx->pc = 0x26a178u;
    // NOP
label_26a17c:
    // 0x26a17c: 0x0  nop
    ctx->pc = 0x26a17cu;
    // NOP
label_26a180:
    // 0x26a180: 0x147c5  .word       0x000147C5                   # INVALID     $zero, $at, 0x47C5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a180u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x26A180 raw=0x000147C5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26a184:
    // 0x26a184: 0xedc0  sll         $sp, $zero, 23
    ctx->pc = 0x26a184u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 0), 23));
label_26a188:
    // 0x26a188: 0x0  nop
    ctx->pc = 0x26a188u;
    // NOP
label_26a18c:
    // 0x26a18c: 0x0  nop
    ctx->pc = 0x26a18cu;
    // NOP
label_26a190:
    // 0x26a190: 0x147e3  .word       0x000147E3                   # negu        $t0, $at # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a190u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_26a194:
    // 0x26a194: 0x9aa0  .word       0x00009AA0                   # add         $s3, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a194u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_26a198:
    // 0x26a198: 0x0  nop
    ctx->pc = 0x26a198u;
    // NOP
label_26a19c:
    // 0x26a19c: 0x0  nop
    ctx->pc = 0x26a19cu;
    // NOP
label_26a1a0:
    // 0x26a1a0: 0x147f7  .word       0x000147F7                   # INVALID     $zero, $at, 0x47F7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a1a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x26A1A0 raw=0x000147F7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26a1a4:
    // 0x26a1a4: 0x7190  .word       0x00007190                   # mfhi        $t6 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a1a4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_26a1a8:
    // 0x26a1a8: 0x0  nop
    ctx->pc = 0x26a1a8u;
    // NOP
label_26a1ac:
    // 0x26a1ac: 0x0  nop
    ctx->pc = 0x26a1acu;
    // NOP
label_26a1b0:
    // 0x26a1b0: 0x14806  srlv        $t1, $at, $zero
    ctx->pc = 0x26a1b0u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_26a1b4:
    // 0x26a1b4: 0x98c0  sll         $s3, $zero, 3
    ctx->pc = 0x26a1b4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_26a1b8:
    // 0x26a1b8: 0x0  nop
    ctx->pc = 0x26a1b8u;
    // NOP
label_26a1bc:
    // 0x26a1bc: 0x0  nop
    ctx->pc = 0x26a1bcu;
    // NOP
label_26a1c0:
    // 0x26a1c0: 0x1481a  div         $t1, $zero, $at
    ctx->pc = 0x26a1c0u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_26a1c4:
    // 0x26a1c4: 0x4860  .word       0x00004860                   # add         $t1, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a1c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_26a1c8:
    // 0x26a1c8: 0x0  nop
    ctx->pc = 0x26a1c8u;
    // NOP
label_26a1cc:
    // 0x26a1cc: 0x0  nop
    ctx->pc = 0x26a1ccu;
    // NOP
label_26a1d0:
    // 0x26a1d0: 0x14824  and         $t1, $zero, $at
    ctx->pc = 0x26a1d0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_26a1d4:
    // 0x26a1d4: 0x99f0  tge         $zero, $zero, 615
    ctx->pc = 0x26a1d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26a1d8:
    // 0x26a1d8: 0x0  nop
    ctx->pc = 0x26a1d8u;
    // NOP
label_26a1dc:
    // 0x26a1dc: 0x0  nop
    ctx->pc = 0x26a1dcu;
    // NOP
label_26a1e0:
    // 0x26a1e0: 0x14838  dsll        $t1, $at, 0
    ctx->pc = 0x26a1e0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 1) << 0);
label_26a1e4:
    // 0x26a1e4: 0xa180  sll         $s4, $zero, 6
    ctx->pc = 0x26a1e4u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
label_26a1e8:
    // 0x26a1e8: 0x0  nop
    ctx->pc = 0x26a1e8u;
    // NOP
label_26a1ec:
    // 0x26a1ec: 0x0  nop
    ctx->pc = 0x26a1ecu;
    // NOP
label_26a1f0:
    // 0x26a1f0: 0x1484d  break       1, 289
    ctx->pc = 0x26a1f0u;
    runtime->handleBreak(rdram, ctx);
label_26a1f4:
    // 0x26a1f4: 0x8980  sll         $s1, $zero, 6
    ctx->pc = 0x26a1f4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
label_26a1f8:
    // 0x26a1f8: 0x0  nop
    ctx->pc = 0x26a1f8u;
    // NOP
label_26a1fc:
    // 0x26a1fc: 0x0  nop
    ctx->pc = 0x26a1fcu;
    // NOP
label_26a200:
    // 0x26a200: 0x1485f  .word       0x0001485F                   # ddivu       $t1, $zero, $at # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a200u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x26A200 raw=0x0001485F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26a204:
    // 0x26a204: 0xd200  sll         $k0, $zero, 8
    ctx->pc = 0x26a204u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 8));
label_26a208:
    // 0x26a208: 0x0  nop
    ctx->pc = 0x26a208u;
    // NOP
label_26a20c:
    // 0x26a20c: 0x0  nop
    ctx->pc = 0x26a20cu;
    // NOP
label_26a210:
    // 0x26a210: 0x1487a  dsrl        $t1, $at, 1
    ctx->pc = 0x26a210u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 1) >> 1);
label_26a214:
    // 0x26a214: 0xacf0  tge         $zero, $zero, 691
    ctx->pc = 0x26a214u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26a218:
    // 0x26a218: 0x0  nop
    ctx->pc = 0x26a218u;
    // NOP
label_26a21c:
    // 0x26a21c: 0x0  nop
    ctx->pc = 0x26a21cu;
    // NOP
label_26a220:
    // 0x26a220: 0x14890  .word       0x00014890                   # mfhi        $t1 # 00010080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a220u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_26a224:
    // 0x26a224: 0xea50  .word       0x0000EA50                   # mfhi        $sp # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a224u;
    SET_GPR_U64(ctx, 29, ctx->hi);
label_26a228:
    // 0x26a228: 0x0  nop
    ctx->pc = 0x26a228u;
    // NOP
label_26a22c:
    // 0x26a22c: 0x0  nop
    ctx->pc = 0x26a22cu;
    // NOP
label_26a230:
    // 0x26a230: 0x148ae  .word       0x000148AE                   # dsub        $t1, $zero, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a230u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, r); }
label_26a234:
    // 0x26a234: 0xdc30  tge         $zero, $zero, 880
    ctx->pc = 0x26a234u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26a238:
    // 0x26a238: 0x0  nop
    ctx->pc = 0x26a238u;
    // NOP
label_26a23c:
    // 0x26a23c: 0x0  nop
    ctx->pc = 0x26a23cu;
    // NOP
label_26a240:
    // 0x26a240: 0x148ca  .word       0x000148CA                   # movz        $t1, $zero, $at # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a240u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
label_26a244:
    // 0x26a244: 0xc190  .word       0x0000C190                   # mfhi        $t8 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a244u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_26a248:
    // 0x26a248: 0x0  nop
    ctx->pc = 0x26a248u;
    // NOP
label_26a24c:
    // 0x26a24c: 0x0  nop
    ctx->pc = 0x26a24cu;
    // NOP
label_26a250:
    // 0x26a250: 0x148e3  .word       0x000148E3                   # negu        $t1, $at # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a250u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_26a254:
    // 0x26a254: 0xfd60  .word       0x0000FD60                   # add         $ra, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a254u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
label_26a258:
    // 0x26a258: 0x0  nop
    ctx->pc = 0x26a258u;
    // NOP
label_26a25c:
    // 0x26a25c: 0x0  nop
    ctx->pc = 0x26a25cu;
    // NOP
label_26a260:
    // 0x26a260: 0x14903  sra         $t1, $at, 4
    ctx->pc = 0x26a260u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 1), 4));
label_26a264:
    // 0x26a264: 0xa190  .word       0x0000A190                   # mfhi        $s4 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a264u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_26a268:
    // 0x26a268: 0x0  nop
    ctx->pc = 0x26a268u;
    // NOP
label_26a26c:
    // 0x26a26c: 0x0  nop
    ctx->pc = 0x26a26cu;
    // NOP
label_26a270:
    // 0x26a270: 0x14918  .word       0x00014918                   # mult        $t1, $zero, $at # 00000100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26a270u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_26a274:
    // 0x26a274: 0x10da0  .word       0x00010DA0                   # add         $at, $zero, $at # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a274u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_26a278:
    // 0x26a278: 0x0  nop
    ctx->pc = 0x26a278u;
    // NOP
label_26a27c:
    // 0x26a27c: 0x0  nop
    ctx->pc = 0x26a27cu;
    // NOP
label_26a280:
    // 0x26a280: 0x1493a  dsrl        $t1, $at, 4
    ctx->pc = 0x26a280u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 1) >> 4);
label_26a284:
    // 0x26a284: 0x100a0  .word       0x000100A0                   # add         $zero, $zero, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a284u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_26a288:
    // 0x26a288: 0x0  nop
    ctx->pc = 0x26a288u;
    // NOP
label_26a28c:
    // 0x26a28c: 0x0  nop
    ctx->pc = 0x26a28cu;
    // NOP
label_26a290:
    // 0x26a290: 0x1495b  .word       0x0001495B                   # divu        $t1, $zero, $at # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a290u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_26a294:
    // 0x26a294: 0x8220  .word       0x00008220                   # add         $s0, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a294u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_26a298:
    // 0x26a298: 0x0  nop
    ctx->pc = 0x26a298u;
    // NOP
label_26a29c:
    // 0x26a29c: 0x0  nop
    ctx->pc = 0x26a29cu;
    // NOP
label_26a2a0:
    // 0x26a2a0: 0x1496c  .word       0x0001496C                   # dadd        $t1, $zero, $at # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a2a0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 9, r); }
label_26a2a4:
    // 0x26a2a4: 0x9ed0  .word       0x00009ED0                   # mfhi        $s3 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a2a4u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_26a2a8:
    // 0x26a2a8: 0x0  nop
    ctx->pc = 0x26a2a8u;
    // NOP
label_26a2ac:
    // 0x26a2ac: 0x0  nop
    ctx->pc = 0x26a2acu;
    // NOP
label_26a2b0:
    // 0x26a2b0: 0x14980  sll         $t1, $at, 6
    ctx->pc = 0x26a2b0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 1), 6));
label_26a2b4:
    // 0x26a2b4: 0x54f0  tge         $zero, $zero, 339
    ctx->pc = 0x26a2b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26a2b8:
    // 0x26a2b8: 0x0  nop
    ctx->pc = 0x26a2b8u;
    // NOP
label_26a2bc:
    // 0x26a2bc: 0x0  nop
    ctx->pc = 0x26a2bcu;
    // NOP
label_26a2c0:
    // 0x26a2c0: 0x1498b  .word       0x0001498B                   # movn        $t1, $zero, $at # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a2c0u;
    if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
label_26a2c4:
    // 0x26a2c4: 0xae90  .word       0x0000AE90                   # mfhi        $s5 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a2c4u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_26a2c8:
    // 0x26a2c8: 0x0  nop
    ctx->pc = 0x26a2c8u;
    // NOP
label_26a2cc:
    // 0x26a2cc: 0x0  nop
    ctx->pc = 0x26a2ccu;
    // NOP
label_26a2d0:
    // 0x26a2d0: 0x149a1  .word       0x000149A1                   # addu        $t1, $zero, $at # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a2d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_26a2d4:
    // 0x26a2d4: 0xc080  sll         $t8, $zero, 2
    ctx->pc = 0x26a2d4u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_26a2d8:
    // 0x26a2d8: 0x0  nop
    ctx->pc = 0x26a2d8u;
    // NOP
label_26a2dc:
    // 0x26a2dc: 0x0  nop
    ctx->pc = 0x26a2dcu;
    // NOP
label_26a2e0:
    // 0x26a2e0: 0x149ba  dsrl        $t1, $at, 6
    ctx->pc = 0x26a2e0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 1) >> 6);
label_26a2e4:
    // 0x26a2e4: 0x96b0  tge         $zero, $zero, 602
    ctx->pc = 0x26a2e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26a2e8:
    // 0x26a2e8: 0x0  nop
    ctx->pc = 0x26a2e8u;
    // NOP
label_26a2ec:
    // 0x26a2ec: 0x0  nop
    ctx->pc = 0x26a2ecu;
    // NOP
label_26a2f0:
    // 0x26a2f0: 0x149cd  break       1, 295
    ctx->pc = 0x26a2f0u;
    runtime->handleBreak(rdram, ctx);
label_26a2f4:
    // 0x26a2f4: 0xa100  sll         $s4, $zero, 4
    ctx->pc = 0x26a2f4u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_26a2f8:
    // 0x26a2f8: 0x0  nop
    ctx->pc = 0x26a2f8u;
    // NOP
label_26a2fc:
    // 0x26a2fc: 0x0  nop
    ctx->pc = 0x26a2fcu;
    // NOP
label_26a300:
    // 0x26a300: 0x149e2  .word       0x000149E2                   # neg         $t1, $at # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a300u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 1), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
label_26a304:
    // 0x26a304: 0xa180  sll         $s4, $zero, 6
    ctx->pc = 0x26a304u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
label_26a308:
    // 0x26a308: 0x0  nop
    ctx->pc = 0x26a308u;
    // NOP
label_26a30c:
    // 0x26a30c: 0x0  nop
    ctx->pc = 0x26a30cu;
    // NOP
label_26a310:
    // 0x26a310: 0x149f7  .word       0x000149F7                   # INVALID     $zero, $at, 0x49F7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a310u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x26A310 raw=0x000149F7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26a314:
    // 0x26a314: 0xc450  .word       0x0000C450                   # mfhi        $t8 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a314u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_26a318:
    // 0x26a318: 0x0  nop
    ctx->pc = 0x26a318u;
    // NOP
label_26a31c:
    // 0x26a31c: 0x0  nop
    ctx->pc = 0x26a31cu;
    // NOP
label_26a320:
    // 0x26a320: 0x14a10  .word       0x00014A10                   # mfhi        $t1 # 00010200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a320u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_26a324:
    // 0x26a324: 0x79e0  .word       0x000079E0                   # add         $t7, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a324u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_26a328:
    // 0x26a328: 0x0  nop
    ctx->pc = 0x26a328u;
    // NOP
label_26a32c:
    // 0x26a32c: 0x0  nop
    ctx->pc = 0x26a32cu;
    // NOP
label_26a330:
    // 0x26a330: 0x14a20  .word       0x00014A20                   # add         $t1, $zero, $at # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a330u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_26a334:
    // 0x26a334: 0xf300  sll         $fp, $zero, 12
    ctx->pc = 0x26a334u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_26a338:
    // 0x26a338: 0x0  nop
    ctx->pc = 0x26a338u;
    // NOP
label_26a33c:
    // 0x26a33c: 0x0  nop
    ctx->pc = 0x26a33cu;
    // NOP
label_26a340:
    // 0x26a340: 0x14a3f  dsra32      $t1, $at, 8
    ctx->pc = 0x26a340u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 1) >> (32 + 8));
label_26a344:
    // 0x26a344: 0xa890  .word       0x0000A890                   # mfhi        $s5 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a344u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_26a348:
    // 0x26a348: 0x0  nop
    ctx->pc = 0x26a348u;
    // NOP
label_26a34c:
    // 0x26a34c: 0x0  nop
    ctx->pc = 0x26a34cu;
    // NOP
label_26a350:
    // 0x26a350: 0x14a55  .word       0x00014A55                   # INVALID     $zero, $at, 0x4A55 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a350u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x26A350 raw=0x00014A55"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26a354:
    // 0x26a354: 0x8890  .word       0x00008890                   # mfhi        $s1 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a354u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_26a358:
    // 0x26a358: 0x0  nop
    ctx->pc = 0x26a358u;
    // NOP
label_26a35c:
    // 0x26a35c: 0x0  nop
    ctx->pc = 0x26a35cu;
    // NOP
label_26a360:
    // 0x26a360: 0x14a67  .word       0x00014A67                   # nor         $t1, $zero, $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a360u;
    SET_GPR_U64(ctx, 9, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_26a364:
    // 0x26a364: 0xae90  .word       0x0000AE90                   # mfhi        $s5 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a364u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_26a368:
    // 0x26a368: 0x0  nop
    ctx->pc = 0x26a368u;
    // NOP
label_26a36c:
    // 0x26a36c: 0x0  nop
    ctx->pc = 0x26a36cu;
    // NOP
label_26a370:
    // 0x26a370: 0x14a7d  .word       0x00014A7D                   # INVALID     $zero, $at, 0x4A7D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a370u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x26A370 raw=0x00014A7D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26a374:
    // 0x26a374: 0x7720  .word       0x00007720                   # add         $t6, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a374u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_26a378:
    // 0x26a378: 0x0  nop
    ctx->pc = 0x26a378u;
    // NOP
label_26a37c:
    // 0x26a37c: 0x0  nop
    ctx->pc = 0x26a37cu;
    // NOP
label_26a380:
    // 0x26a380: 0x14a8c  .word       0x00014A8C                   # syscall     298 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a380u;
    ctx->pc = 0x26A384u;
runtime->handleSyscall(rdram, ctx, 0x52Au);
label_26a384:
    // 0x26a384: 0xc080  sll         $t8, $zero, 2
    ctx->pc = 0x26a384u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_26a388:
    // 0x26a388: 0x0  nop
    ctx->pc = 0x26a388u;
    // NOP
label_26a38c:
    // 0x26a38c: 0x0  nop
    ctx->pc = 0x26a38cu;
    // NOP
label_26a390:
    // 0x26a390: 0x14aa5  .word       0x00014AA5                   # or          $t1, $zero, $at # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a390u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | GPR_U64(ctx, 1));
label_26a394:
    // 0x26a394: 0x6530  tge         $zero, $zero, 404
    ctx->pc = 0x26a394u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26a398:
    // 0x26a398: 0x0  nop
    ctx->pc = 0x26a398u;
    // NOP
label_26a39c:
    // 0x26a39c: 0x0  nop
    ctx->pc = 0x26a39cu;
    // NOP
label_26a3a0:
    // 0x26a3a0: 0x14ab2  tlt         $zero, $at, 298
    ctx->pc = 0x26a3a0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_26a3a4:
    // 0x26a3a4: 0xcc00  sll         $t9, $zero, 16
    ctx->pc = 0x26a3a4u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_26a3a8:
    // 0x26a3a8: 0x0  nop
    ctx->pc = 0x26a3a8u;
    // NOP
label_26a3ac:
    // 0x26a3ac: 0x0  nop
    ctx->pc = 0x26a3acu;
    // NOP
label_26a3b0:
    // 0x26a3b0: 0x14acc  .word       0x00014ACC                   # syscall     299 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a3b0u;
    ctx->pc = 0x26A3B4u;
runtime->handleSyscall(rdram, ctx, 0x52Bu);
label_26a3b4:
    // 0x26a3b4: 0x83e0  .word       0x000083E0                   # add         $s0, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a3b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_26a3b8:
    // 0x26a3b8: 0x0  nop
    ctx->pc = 0x26a3b8u;
    // NOP
label_26a3bc:
    // 0x26a3bc: 0x0  nop
    ctx->pc = 0x26a3bcu;
    // NOP
label_26a3c0:
    // 0x26a3c0: 0x14add  .word       0x00014ADD                   # dmultu      $zero, $at # 00004AC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a3c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x26A3C0 raw=0x00014ADD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26a3c4:
    // 0x26a3c4: 0x90f0  tge         $zero, $zero, 579
    ctx->pc = 0x26a3c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26a3c8:
    // 0x26a3c8: 0x0  nop
    ctx->pc = 0x26a3c8u;
    // NOP
label_26a3cc:
    // 0x26a3cc: 0x0  nop
    ctx->pc = 0x26a3ccu;
    // NOP
label_26a3d0:
    // 0x26a3d0: 0x14af0  tge         $zero, $at, 299
    ctx->pc = 0x26a3d0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_26a3d4:
    // 0x26a3d4: 0xee70  tge         $zero, $zero, 953
    ctx->pc = 0x26a3d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26a3d8:
    // 0x26a3d8: 0x0  nop
    ctx->pc = 0x26a3d8u;
    // NOP
label_26a3dc:
    // 0x26a3dc: 0x0  nop
    ctx->pc = 0x26a3dcu;
    // NOP
label_26a3e0:
    // 0x26a3e0: 0x14b0e  .word       0x00014B0E                   # INVALID     $zero, $at, 0x4B0E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a3e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x26A3E0 raw=0x00014B0E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26a3e4:
    // 0x26a3e4: 0xcd00  sll         $t9, $zero, 20
    ctx->pc = 0x26a3e4u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_26a3e8:
    // 0x26a3e8: 0x0  nop
    ctx->pc = 0x26a3e8u;
    // NOP
label_26a3ec:
    // 0x26a3ec: 0x0  nop
    ctx->pc = 0x26a3ecu;
    // NOP
label_26a3f0:
    // 0x26a3f0: 0x14b28  .word       0x00014B28                   # mfsa        $t1 # 00010300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x26a3f0u;
    SET_GPR_U32(ctx, 9, ctx->sa);
label_26a3f4:
    // 0x26a3f4: 0xc680  sll         $t8, $zero, 26
    ctx->pc = 0x26a3f4u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_26a3f8:
    // 0x26a3f8: 0x0  nop
    ctx->pc = 0x26a3f8u;
    // NOP
label_26a3fc:
    // 0x26a3fc: 0x0  nop
    ctx->pc = 0x26a3fcu;
    // NOP
label_26a400:
    // 0x26a400: 0x14b41  .word       0x00014B41                   # INVALID     $zero, $at, 0x4B41 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a400u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x26A400 raw=0x00014B41"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26a404:
    // 0x26a404: 0x8c20  .word       0x00008C20                   # add         $s1, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a404u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_26a408:
    // 0x26a408: 0x0  nop
    ctx->pc = 0x26a408u;
    // NOP
label_26a40c:
    // 0x26a40c: 0x0  nop
    ctx->pc = 0x26a40cu;
    // NOP
label_26a410:
    // 0x26a410: 0x14b53  .word       0x00014B53                   # mtlo        $zero # 00014B40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a410u;
    ctx->lo = GPR_U64(ctx, 0);
label_26a414:
    // 0x26a414: 0x7c10  .word       0x00007C10                   # mfhi        $t7 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a414u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_26a418:
    // 0x26a418: 0x0  nop
    ctx->pc = 0x26a418u;
    // NOP
label_26a41c:
    // 0x26a41c: 0x0  nop
    ctx->pc = 0x26a41cu;
    // NOP
label_26a420:
    // 0x26a420: 0x14b63  .word       0x00014B63                   # negu        $t1, $at # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a420u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_26a424:
    // 0x26a424: 0x4f90  .word       0x00004F90                   # mfhi        $t1 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a424u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_26a428:
    // 0x26a428: 0x0  nop
    ctx->pc = 0x26a428u;
    // NOP
label_26a42c:
    // 0x26a42c: 0x0  nop
    ctx->pc = 0x26a42cu;
    // NOP
label_26a430:
    // 0x26a430: 0x14b6d  .word       0x00014B6D                   # daddu       $t1, $zero, $at # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a430u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_26a434:
    // 0x26a434: 0x4d80  sll         $t1, $zero, 22
    ctx->pc = 0x26a434u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_26a438:
    // 0x26a438: 0x0  nop
    ctx->pc = 0x26a438u;
    // NOP
label_26a43c:
    // 0x26a43c: 0x0  nop
    ctx->pc = 0x26a43cu;
    // NOP
label_26a440:
    // 0x26a440: 0x14b77  .word       0x00014B77                   # INVALID     $zero, $at, 0x4B77 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a440u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x26A440 raw=0x00014B77"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26a444:
    // 0x26a444: 0x4ab0  tge         $zero, $zero, 298
    ctx->pc = 0x26a444u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26a448:
    // 0x26a448: 0x0  nop
    ctx->pc = 0x26a448u;
    // NOP
label_26a44c:
    // 0x26a44c: 0x0  nop
    ctx->pc = 0x26a44cu;
    // NOP
label_26a450:
    // 0x26a450: 0x14b81  .word       0x00014B81                   # INVALID     $zero, $at, 0x4B81 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a450u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x26A450 raw=0x00014B81"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26a454:
    // 0x26a454: 0xc2f0  tge         $zero, $zero, 779
    ctx->pc = 0x26a454u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26a458:
    // 0x26a458: 0x0  nop
    ctx->pc = 0x26a458u;
    // NOP
label_26a45c:
    // 0x26a45c: 0x0  nop
    ctx->pc = 0x26a45cu;
    // NOP
label_26a460:
    // 0x26a460: 0x14b9a  .word       0x00014B9A                   # div         $t1, $zero, $at # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a460u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_26a464:
    // 0x26a464: 0xd520  .word       0x0000D520                   # add         $k0, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a464u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 26, (int32_t)result);     } }
label_26a468:
    // 0x26a468: 0x0  nop
    ctx->pc = 0x26a468u;
    // NOP
label_26a46c:
    // 0x26a46c: 0x0  nop
    ctx->pc = 0x26a46cu;
    // NOP
label_26a470:
    // 0x26a470: 0x14bb5  .word       0x00014BB5                   # INVALID     $zero, $at, 0x4BB5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a470u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x26A470 raw=0x00014BB5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26a474:
    // 0x26a474: 0x9a70  tge         $zero, $zero, 617
    ctx->pc = 0x26a474u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26a478:
    // 0x26a478: 0x0  nop
    ctx->pc = 0x26a478u;
    // NOP
label_26a47c:
    // 0x26a47c: 0x0  nop
    ctx->pc = 0x26a47cu;
    // NOP
label_26a480:
    // 0x26a480: 0x14bc9  .word       0x00014BC9                   # jalr        $t1, $zero # 000103C0 <InstrIdType: CPU_SPECIAL>
label_26a484:
    if (ctx->pc == 0x26A484u) {
        ctx->pc = 0x26A484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A480u;
        // 0x26a484: 0x9460  .word       0x00009460                   # add         $s2, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A488u;
        goto label_26a488;
    }
    ctx->pc = 0x26A480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 9, 0x26A488u);
        ctx->pc = 0x26A484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A480u;
        // 0x26a484: 0x9460  .word       0x00009460                   # add         $s2, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26A480u, 0x26A488u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26A488u;
label_26a488:
    // 0x26a488: 0x0  nop
    ctx->pc = 0x26a488u;
    // NOP
label_26a48c:
    // 0x26a48c: 0x0  nop
    ctx->pc = 0x26a48cu;
    // NOP
label_26a490:
    // 0x26a490: 0x14bdc  .word       0x00014BDC                   # dmult       $zero, $at # 00004BC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a490u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x26A490 raw=0x00014BDC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26a494:
    // 0x26a494: 0xc0b0  tge         $zero, $zero, 770
    ctx->pc = 0x26a494u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26a498:
    // 0x26a498: 0x0  nop
    ctx->pc = 0x26a498u;
    // NOP
label_26a49c:
    // 0x26a49c: 0x0  nop
    ctx->pc = 0x26a49cu;
    // NOP
label_26a4a0:
    // 0x26a4a0: 0x14bf5  .word       0x00014BF5                   # INVALID     $zero, $at, 0x4BF5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a4a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x26A4A0 raw=0x00014BF5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26a4a4:
    // 0x26a4a4: 0x6920  .word       0x00006920                   # add         $t5, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a4a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_26a4a8:
    // 0x26a4a8: 0x0  nop
    ctx->pc = 0x26a4a8u;
    // NOP
label_26a4ac:
    // 0x26a4ac: 0x0  nop
    ctx->pc = 0x26a4acu;
    // NOP
label_26a4b0:
    // 0x26a4b0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a4b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x26A4B0 raw=0x00000001"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26a4b4:
    // 0x26a4b4: 0x9b00  sll         $s3, $zero, 12
    ctx->pc = 0x26a4b4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_26a4b8:
    // 0x26a4b8: 0x0  nop
    ctx->pc = 0x26a4b8u;
    // NOP
label_26a4bc:
    // 0x26a4bc: 0x0  nop
    ctx->pc = 0x26a4bcu;
    // NOP
label_26a4c0:
    // 0x26a4c0: 0x15  .word       0x00000015                   # INVALID     $zero, $zero, 0x15 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a4c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x26A4C0 raw=0x00000015"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_26a4c4:
    // 0x26a4c4: 0x52d0  .word       0x000052D0                   # mfhi        $t2 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a4c4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_26a4c8:
    // 0x26a4c8: 0x0  nop
    ctx->pc = 0x26a4c8u;
    // NOP
label_26a4cc:
    // 0x26a4cc: 0x0  nop
    ctx->pc = 0x26a4ccu;
    // NOP
label_26a4d0:
    // 0x26a4d0: 0x20  add         $zero, $zero, $zero
    ctx->pc = 0x26a4d0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_26a4d4:
    // 0x26a4d4: 0x9050  .word       0x00009050                   # mfhi        $s2 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a4d4u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_26a4d8:
    // 0x26a4d8: 0x0  nop
    ctx->pc = 0x26a4d8u;
    // NOP
label_26a4dc:
    // 0x26a4dc: 0x0  nop
    ctx->pc = 0x26a4dcu;
    // NOP
label_26a4e0:
    // 0x26a4e0: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x26a4e0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_26a4e4:
    // 0x26a4e4: 0x5b40  sll         $t3, $zero, 13
    ctx->pc = 0x26a4e4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
label_26a4e8:
    // 0x26a4e8: 0x0  nop
    ctx->pc = 0x26a4e8u;
    // NOP
label_26a4ec:
    // 0x26a4ec: 0x0  nop
    ctx->pc = 0x26a4ecu;
    // NOP
label_26a4f0:
    // 0x26a4f0: 0x3f  dsra32      $zero, $zero, 0
    ctx->pc = 0x26a4f0u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 0));
label_26a4f4:
    // 0x26a4f4: 0x9e60  .word       0x00009E60                   # add         $s3, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x26a4f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
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
    ctx->pc = 0x26a8e8u;
    return;
}

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


void FUN_0014eba0_part57(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x16a120u: goto label_16a120;
        case 0x16a124u: goto label_16a124;
        case 0x16a128u: goto label_16a128;
        case 0x16a12cu: goto label_16a12c;
        case 0x16a130u: goto label_16a130;
        case 0x16a134u: goto label_16a134;
        case 0x16a138u: goto label_16a138;
        case 0x16a13cu: goto label_16a13c;
        case 0x16a140u: goto label_16a140;
        case 0x16a144u: goto label_16a144;
        case 0x16a148u: goto label_16a148;
        case 0x16a14cu: goto label_16a14c;
        case 0x16a150u: goto label_16a150;
        case 0x16a154u: goto label_16a154;
        case 0x16a158u: goto label_16a158;
        case 0x16a15cu: goto label_16a15c;
        case 0x16a160u: goto label_16a160;
        case 0x16a164u: goto label_16a164;
        case 0x16a168u: goto label_16a168;
        case 0x16a16cu: goto label_16a16c;
        case 0x16a170u: goto label_16a170;
        case 0x16a174u: goto label_16a174;
        case 0x16a178u: goto label_16a178;
        case 0x16a17cu: goto label_16a17c;
        case 0x16a180u: goto label_16a180;
        case 0x16a184u: goto label_16a184;
        case 0x16a188u: goto label_16a188;
        case 0x16a18cu: goto label_16a18c;
        case 0x16a190u: goto label_16a190;
        case 0x16a194u: goto label_16a194;
        case 0x16a198u: goto label_16a198;
        case 0x16a19cu: goto label_16a19c;
        case 0x16a1a0u: goto label_16a1a0;
        case 0x16a1a4u: goto label_16a1a4;
        case 0x16a1a8u: goto label_16a1a8;
        case 0x16a1acu: goto label_16a1ac;
        case 0x16a1b0u: goto label_16a1b0;
        case 0x16a1b4u: goto label_16a1b4;
        case 0x16a1b8u: goto label_16a1b8;
        case 0x16a1bcu: goto label_16a1bc;
        case 0x16a1c0u: goto label_16a1c0;
        case 0x16a1c4u: goto label_16a1c4;
        case 0x16a1c8u: goto label_16a1c8;
        case 0x16a1ccu: goto label_16a1cc;
        case 0x16a1d0u: goto label_16a1d0;
        case 0x16a1d4u: goto label_16a1d4;
        case 0x16a1d8u: goto label_16a1d8;
        case 0x16a1dcu: goto label_16a1dc;
        case 0x16a1e0u: goto label_16a1e0;
        case 0x16a1e4u: goto label_16a1e4;
        case 0x16a1e8u: goto label_16a1e8;
        case 0x16a1ecu: goto label_16a1ec;
        case 0x16a1f0u: goto label_16a1f0;
        case 0x16a1f4u: goto label_16a1f4;
        case 0x16a1f8u: goto label_16a1f8;
        case 0x16a1fcu: goto label_16a1fc;
        case 0x16a200u: goto label_16a200;
        case 0x16a204u: goto label_16a204;
        case 0x16a208u: goto label_16a208;
        case 0x16a20cu: goto label_16a20c;
        case 0x16a210u: goto label_16a210;
        case 0x16a214u: goto label_16a214;
        case 0x16a218u: goto label_16a218;
        case 0x16a21cu: goto label_16a21c;
        case 0x16a220u: goto label_16a220;
        case 0x16a224u: goto label_16a224;
        case 0x16a228u: goto label_16a228;
        case 0x16a22cu: goto label_16a22c;
        case 0x16a230u: goto label_16a230;
        case 0x16a234u: goto label_16a234;
        case 0x16a238u: goto label_16a238;
        case 0x16a23cu: goto label_16a23c;
        case 0x16a240u: goto label_16a240;
        case 0x16a244u: goto label_16a244;
        case 0x16a248u: goto label_16a248;
        case 0x16a24cu: goto label_16a24c;
        case 0x16a250u: goto label_16a250;
        case 0x16a254u: goto label_16a254;
        case 0x16a258u: goto label_16a258;
        case 0x16a25cu: goto label_16a25c;
        case 0x16a260u: goto label_16a260;
        case 0x16a264u: goto label_16a264;
        case 0x16a268u: goto label_16a268;
        case 0x16a26cu: goto label_16a26c;
        case 0x16a270u: goto label_16a270;
        case 0x16a274u: goto label_16a274;
        case 0x16a278u: goto label_16a278;
        case 0x16a27cu: goto label_16a27c;
        case 0x16a280u: goto label_16a280;
        case 0x16a284u: goto label_16a284;
        case 0x16a288u: goto label_16a288;
        case 0x16a28cu: goto label_16a28c;
        case 0x16a290u: goto label_16a290;
        case 0x16a294u: goto label_16a294;
        case 0x16a298u: goto label_16a298;
        case 0x16a29cu: goto label_16a29c;
        case 0x16a2a0u: goto label_16a2a0;
        case 0x16a2a4u: goto label_16a2a4;
        case 0x16a2a8u: goto label_16a2a8;
        case 0x16a2acu: goto label_16a2ac;
        case 0x16a2b0u: goto label_16a2b0;
        case 0x16a2b4u: goto label_16a2b4;
        case 0x16a2b8u: goto label_16a2b8;
        case 0x16a2bcu: goto label_16a2bc;
        case 0x16a2c0u: goto label_16a2c0;
        case 0x16a2c4u: goto label_16a2c4;
        case 0x16a2c8u: goto label_16a2c8;
        case 0x16a2ccu: goto label_16a2cc;
        case 0x16a2d0u: goto label_16a2d0;
        case 0x16a2d4u: goto label_16a2d4;
        case 0x16a2d8u: goto label_16a2d8;
        case 0x16a2dcu: goto label_16a2dc;
        case 0x16a2e0u: goto label_16a2e0;
        case 0x16a2e4u: goto label_16a2e4;
        case 0x16a2e8u: goto label_16a2e8;
        case 0x16a2ecu: goto label_16a2ec;
        case 0x16a2f0u: goto label_16a2f0;
        case 0x16a2f4u: goto label_16a2f4;
        case 0x16a2f8u: goto label_16a2f8;
        case 0x16a2fcu: goto label_16a2fc;
        case 0x16a300u: goto label_16a300;
        case 0x16a304u: goto label_16a304;
        case 0x16a308u: goto label_16a308;
        case 0x16a30cu: goto label_16a30c;
        case 0x16a310u: goto label_16a310;
        case 0x16a314u: goto label_16a314;
        case 0x16a318u: goto label_16a318;
        case 0x16a31cu: goto label_16a31c;
        case 0x16a320u: goto label_16a320;
        case 0x16a324u: goto label_16a324;
        case 0x16a328u: goto label_16a328;
        case 0x16a32cu: goto label_16a32c;
        case 0x16a330u: goto label_16a330;
        case 0x16a334u: goto label_16a334;
        case 0x16a338u: goto label_16a338;
        case 0x16a33cu: goto label_16a33c;
        case 0x16a340u: goto label_16a340;
        case 0x16a344u: goto label_16a344;
        case 0x16a348u: goto label_16a348;
        case 0x16a34cu: goto label_16a34c;
        case 0x16a350u: goto label_16a350;
        case 0x16a354u: goto label_16a354;
        case 0x16a358u: goto label_16a358;
        case 0x16a35cu: goto label_16a35c;
        case 0x16a360u: goto label_16a360;
        case 0x16a364u: goto label_16a364;
        case 0x16a368u: goto label_16a368;
        case 0x16a36cu: goto label_16a36c;
        case 0x16a370u: goto label_16a370;
        case 0x16a374u: goto label_16a374;
        case 0x16a378u: goto label_16a378;
        case 0x16a37cu: goto label_16a37c;
        case 0x16a380u: goto label_16a380;
        case 0x16a384u: goto label_16a384;
        case 0x16a388u: goto label_16a388;
        case 0x16a38cu: goto label_16a38c;
        case 0x16a390u: goto label_16a390;
        case 0x16a394u: goto label_16a394;
        case 0x16a398u: goto label_16a398;
        case 0x16a39cu: goto label_16a39c;
        case 0x16a3a0u: goto label_16a3a0;
        case 0x16a3a4u: goto label_16a3a4;
        case 0x16a3a8u: goto label_16a3a8;
        case 0x16a3acu: goto label_16a3ac;
        case 0x16a3b0u: goto label_16a3b0;
        case 0x16a3b4u: goto label_16a3b4;
        case 0x16a3b8u: goto label_16a3b8;
        case 0x16a3bcu: goto label_16a3bc;
        case 0x16a3c0u: goto label_16a3c0;
        case 0x16a3c4u: goto label_16a3c4;
        case 0x16a3c8u: goto label_16a3c8;
        case 0x16a3ccu: goto label_16a3cc;
        case 0x16a3d0u: goto label_16a3d0;
        case 0x16a3d4u: goto label_16a3d4;
        case 0x16a3d8u: goto label_16a3d8;
        case 0x16a3dcu: goto label_16a3dc;
        case 0x16a3e0u: goto label_16a3e0;
        case 0x16a3e4u: goto label_16a3e4;
        case 0x16a3e8u: goto label_16a3e8;
        case 0x16a3ecu: goto label_16a3ec;
        case 0x16a3f0u: goto label_16a3f0;
        case 0x16a3f4u: goto label_16a3f4;
        case 0x16a3f8u: goto label_16a3f8;
        case 0x16a3fcu: goto label_16a3fc;
        case 0x16a400u: goto label_16a400;
        case 0x16a404u: goto label_16a404;
        case 0x16a408u: goto label_16a408;
        case 0x16a40cu: goto label_16a40c;
        case 0x16a410u: goto label_16a410;
        case 0x16a414u: goto label_16a414;
        case 0x16a418u: goto label_16a418;
        case 0x16a41cu: goto label_16a41c;
        case 0x16a420u: goto label_16a420;
        case 0x16a424u: goto label_16a424;
        case 0x16a428u: goto label_16a428;
        case 0x16a42cu: goto label_16a42c;
        case 0x16a430u: goto label_16a430;
        case 0x16a434u: goto label_16a434;
        case 0x16a438u: goto label_16a438;
        case 0x16a43cu: goto label_16a43c;
        case 0x16a440u: goto label_16a440;
        case 0x16a444u: goto label_16a444;
        case 0x16a448u: goto label_16a448;
        case 0x16a44cu: goto label_16a44c;
        case 0x16a450u: goto label_16a450;
        case 0x16a454u: goto label_16a454;
        case 0x16a458u: goto label_16a458;
        case 0x16a45cu: goto label_16a45c;
        case 0x16a460u: goto label_16a460;
        case 0x16a464u: goto label_16a464;
        case 0x16a468u: goto label_16a468;
        case 0x16a46cu: goto label_16a46c;
        case 0x16a470u: goto label_16a470;
        case 0x16a474u: goto label_16a474;
        case 0x16a478u: goto label_16a478;
        case 0x16a47cu: goto label_16a47c;
        case 0x16a480u: goto label_16a480;
        case 0x16a484u: goto label_16a484;
        case 0x16a488u: goto label_16a488;
        case 0x16a48cu: goto label_16a48c;
        case 0x16a490u: goto label_16a490;
        case 0x16a494u: goto label_16a494;
        case 0x16a498u: goto label_16a498;
        case 0x16a49cu: goto label_16a49c;
        case 0x16a4a0u: goto label_16a4a0;
        case 0x16a4a4u: goto label_16a4a4;
        case 0x16a4a8u: goto label_16a4a8;
        case 0x16a4acu: goto label_16a4ac;
        case 0x16a4b0u: goto label_16a4b0;
        case 0x16a4b4u: goto label_16a4b4;
        case 0x16a4b8u: goto label_16a4b8;
        case 0x16a4bcu: goto label_16a4bc;
        case 0x16a4c0u: goto label_16a4c0;
        case 0x16a4c4u: goto label_16a4c4;
        case 0x16a4c8u: goto label_16a4c8;
        case 0x16a4ccu: goto label_16a4cc;
        case 0x16a4d0u: goto label_16a4d0;
        case 0x16a4d4u: goto label_16a4d4;
        case 0x16a4d8u: goto label_16a4d8;
        case 0x16a4dcu: goto label_16a4dc;
        case 0x16a4e0u: goto label_16a4e0;
        case 0x16a4e4u: goto label_16a4e4;
        case 0x16a4e8u: goto label_16a4e8;
        case 0x16a4ecu: goto label_16a4ec;
        case 0x16a4f0u: goto label_16a4f0;
        case 0x16a4f4u: goto label_16a4f4;
        case 0x16a4f8u: goto label_16a4f8;
        case 0x16a4fcu: goto label_16a4fc;
        case 0x16a500u: goto label_16a500;
        case 0x16a504u: goto label_16a504;
        case 0x16a508u: goto label_16a508;
        case 0x16a50cu: goto label_16a50c;
        case 0x16a510u: goto label_16a510;
        case 0x16a514u: goto label_16a514;
        case 0x16a518u: goto label_16a518;
        case 0x16a51cu: goto label_16a51c;
        case 0x16a520u: goto label_16a520;
        case 0x16a524u: goto label_16a524;
        case 0x16a528u: goto label_16a528;
        case 0x16a52cu: goto label_16a52c;
        case 0x16a530u: goto label_16a530;
        case 0x16a534u: goto label_16a534;
        case 0x16a538u: goto label_16a538;
        case 0x16a53cu: goto label_16a53c;
        case 0x16a540u: goto label_16a540;
        case 0x16a544u: goto label_16a544;
        case 0x16a548u: goto label_16a548;
        case 0x16a54cu: goto label_16a54c;
        case 0x16a550u: goto label_16a550;
        case 0x16a554u: goto label_16a554;
        case 0x16a558u: goto label_16a558;
        case 0x16a55cu: goto label_16a55c;
        case 0x16a560u: goto label_16a560;
        case 0x16a564u: goto label_16a564;
        case 0x16a568u: goto label_16a568;
        case 0x16a56cu: goto label_16a56c;
        case 0x16a570u: goto label_16a570;
        case 0x16a574u: goto label_16a574;
        case 0x16a578u: goto label_16a578;
        case 0x16a57cu: goto label_16a57c;
        case 0x16a580u: goto label_16a580;
        case 0x16a584u: goto label_16a584;
        case 0x16a588u: goto label_16a588;
        case 0x16a58cu: goto label_16a58c;
        case 0x16a590u: goto label_16a590;
        case 0x16a594u: goto label_16a594;
        case 0x16a598u: goto label_16a598;
        case 0x16a59cu: goto label_16a59c;
        case 0x16a5a0u: goto label_16a5a0;
        case 0x16a5a4u: goto label_16a5a4;
        case 0x16a5a8u: goto label_16a5a8;
        case 0x16a5acu: goto label_16a5ac;
        case 0x16a5b0u: goto label_16a5b0;
        case 0x16a5b4u: goto label_16a5b4;
        case 0x16a5b8u: goto label_16a5b8;
        case 0x16a5bcu: goto label_16a5bc;
        case 0x16a5c0u: goto label_16a5c0;
        case 0x16a5c4u: goto label_16a5c4;
        case 0x16a5c8u: goto label_16a5c8;
        case 0x16a5ccu: goto label_16a5cc;
        case 0x16a5d0u: goto label_16a5d0;
        case 0x16a5d4u: goto label_16a5d4;
        case 0x16a5d8u: goto label_16a5d8;
        case 0x16a5dcu: goto label_16a5dc;
        case 0x16a5e0u: goto label_16a5e0;
        case 0x16a5e4u: goto label_16a5e4;
        case 0x16a5e8u: goto label_16a5e8;
        case 0x16a5ecu: goto label_16a5ec;
        case 0x16a5f0u: goto label_16a5f0;
        case 0x16a5f4u: goto label_16a5f4;
        case 0x16a5f8u: goto label_16a5f8;
        case 0x16a5fcu: goto label_16a5fc;
        case 0x16a600u: goto label_16a600;
        case 0x16a604u: goto label_16a604;
        case 0x16a608u: goto label_16a608;
        case 0x16a60cu: goto label_16a60c;
        case 0x16a610u: goto label_16a610;
        case 0x16a614u: goto label_16a614;
        case 0x16a618u: goto label_16a618;
        case 0x16a61cu: goto label_16a61c;
        case 0x16a620u: goto label_16a620;
        case 0x16a624u: goto label_16a624;
        case 0x16a628u: goto label_16a628;
        case 0x16a62cu: goto label_16a62c;
        case 0x16a630u: goto label_16a630;
        case 0x16a634u: goto label_16a634;
        case 0x16a638u: goto label_16a638;
        case 0x16a63cu: goto label_16a63c;
        case 0x16a640u: goto label_16a640;
        case 0x16a644u: goto label_16a644;
        case 0x16a648u: goto label_16a648;
        case 0x16a64cu: goto label_16a64c;
        case 0x16a650u: goto label_16a650;
        case 0x16a654u: goto label_16a654;
        case 0x16a658u: goto label_16a658;
        case 0x16a65cu: goto label_16a65c;
        case 0x16a660u: goto label_16a660;
        case 0x16a664u: goto label_16a664;
        case 0x16a668u: goto label_16a668;
        case 0x16a66cu: goto label_16a66c;
        case 0x16a670u: goto label_16a670;
        case 0x16a674u: goto label_16a674;
        case 0x16a678u: goto label_16a678;
        case 0x16a67cu: goto label_16a67c;
        case 0x16a680u: goto label_16a680;
        case 0x16a684u: goto label_16a684;
        case 0x16a688u: goto label_16a688;
        case 0x16a68cu: goto label_16a68c;
        case 0x16a690u: goto label_16a690;
        case 0x16a694u: goto label_16a694;
        case 0x16a698u: goto label_16a698;
        case 0x16a69cu: goto label_16a69c;
        case 0x16a6a0u: goto label_16a6a0;
        case 0x16a6a4u: goto label_16a6a4;
        case 0x16a6a8u: goto label_16a6a8;
        case 0x16a6acu: goto label_16a6ac;
        case 0x16a6b0u: goto label_16a6b0;
        case 0x16a6b4u: goto label_16a6b4;
        case 0x16a6b8u: goto label_16a6b8;
        case 0x16a6bcu: goto label_16a6bc;
        case 0x16a6c0u: goto label_16a6c0;
        case 0x16a6c4u: goto label_16a6c4;
        case 0x16a6c8u: goto label_16a6c8;
        case 0x16a6ccu: goto label_16a6cc;
        case 0x16a6d0u: goto label_16a6d0;
        case 0x16a6d4u: goto label_16a6d4;
        case 0x16a6d8u: goto label_16a6d8;
        case 0x16a6dcu: goto label_16a6dc;
        case 0x16a6e0u: goto label_16a6e0;
        case 0x16a6e4u: goto label_16a6e4;
        case 0x16a6e8u: goto label_16a6e8;
        case 0x16a6ecu: goto label_16a6ec;
        case 0x16a6f0u: goto label_16a6f0;
        case 0x16a6f4u: goto label_16a6f4;
        case 0x16a6f8u: goto label_16a6f8;
        case 0x16a6fcu: goto label_16a6fc;
        case 0x16a700u: goto label_16a700;
        case 0x16a704u: goto label_16a704;
        case 0x16a708u: goto label_16a708;
        case 0x16a70cu: goto label_16a70c;
        case 0x16a710u: goto label_16a710;
        case 0x16a714u: goto label_16a714;
        case 0x16a718u: goto label_16a718;
        case 0x16a71cu: goto label_16a71c;
        case 0x16a720u: goto label_16a720;
        case 0x16a724u: goto label_16a724;
        case 0x16a728u: goto label_16a728;
        case 0x16a72cu: goto label_16a72c;
        case 0x16a730u: goto label_16a730;
        case 0x16a734u: goto label_16a734;
        case 0x16a738u: goto label_16a738;
        case 0x16a73cu: goto label_16a73c;
        case 0x16a740u: goto label_16a740;
        case 0x16a744u: goto label_16a744;
        case 0x16a748u: goto label_16a748;
        case 0x16a74cu: goto label_16a74c;
        case 0x16a750u: goto label_16a750;
        case 0x16a754u: goto label_16a754;
        case 0x16a758u: goto label_16a758;
        case 0x16a75cu: goto label_16a75c;
        case 0x16a760u: goto label_16a760;
        case 0x16a764u: goto label_16a764;
        case 0x16a768u: goto label_16a768;
        case 0x16a76cu: goto label_16a76c;
        case 0x16a770u: goto label_16a770;
        case 0x16a774u: goto label_16a774;
        case 0x16a778u: goto label_16a778;
        case 0x16a77cu: goto label_16a77c;
        case 0x16a780u: goto label_16a780;
        case 0x16a784u: goto label_16a784;
        case 0x16a788u: goto label_16a788;
        case 0x16a78cu: goto label_16a78c;
        case 0x16a790u: goto label_16a790;
        case 0x16a794u: goto label_16a794;
        case 0x16a798u: goto label_16a798;
        case 0x16a79cu: goto label_16a79c;
        case 0x16a7a0u: goto label_16a7a0;
        case 0x16a7a4u: goto label_16a7a4;
        case 0x16a7a8u: goto label_16a7a8;
        case 0x16a7acu: goto label_16a7ac;
        case 0x16a7b0u: goto label_16a7b0;
        case 0x16a7b4u: goto label_16a7b4;
        case 0x16a7b8u: goto label_16a7b8;
        case 0x16a7bcu: goto label_16a7bc;
        case 0x16a7c0u: goto label_16a7c0;
        case 0x16a7c4u: goto label_16a7c4;
        case 0x16a7c8u: goto label_16a7c8;
        case 0x16a7ccu: goto label_16a7cc;
        case 0x16a7d0u: goto label_16a7d0;
        case 0x16a7d4u: goto label_16a7d4;
        case 0x16a7d8u: goto label_16a7d8;
        case 0x16a7dcu: goto label_16a7dc;
        case 0x16a7e0u: goto label_16a7e0;
        case 0x16a7e4u: goto label_16a7e4;
        case 0x16a7e8u: goto label_16a7e8;
        case 0x16a7ecu: goto label_16a7ec;
        case 0x16a7f0u: goto label_16a7f0;
        case 0x16a7f4u: goto label_16a7f4;
        case 0x16a7f8u: goto label_16a7f8;
        case 0x16a7fcu: goto label_16a7fc;
        case 0x16a800u: goto label_16a800;
        case 0x16a804u: goto label_16a804;
        case 0x16a808u: goto label_16a808;
        case 0x16a80cu: goto label_16a80c;
        case 0x16a810u: goto label_16a810;
        case 0x16a814u: goto label_16a814;
        case 0x16a818u: goto label_16a818;
        case 0x16a81cu: goto label_16a81c;
        case 0x16a820u: goto label_16a820;
        case 0x16a824u: goto label_16a824;
        case 0x16a828u: goto label_16a828;
        case 0x16a82cu: goto label_16a82c;
        case 0x16a830u: goto label_16a830;
        case 0x16a834u: goto label_16a834;
        case 0x16a838u: goto label_16a838;
        case 0x16a83cu: goto label_16a83c;
        case 0x16a840u: goto label_16a840;
        case 0x16a844u: goto label_16a844;
        case 0x16a848u: goto label_16a848;
        case 0x16a84cu: goto label_16a84c;
        case 0x16a850u: goto label_16a850;
        case 0x16a854u: goto label_16a854;
        case 0x16a858u: goto label_16a858;
        case 0x16a85cu: goto label_16a85c;
        case 0x16a860u: goto label_16a860;
        case 0x16a864u: goto label_16a864;
        case 0x16a868u: goto label_16a868;
        case 0x16a86cu: goto label_16a86c;
        case 0x16a870u: goto label_16a870;
        case 0x16a874u: goto label_16a874;
        case 0x16a878u: goto label_16a878;
        case 0x16a87cu: goto label_16a87c;
        case 0x16a880u: goto label_16a880;
        case 0x16a884u: goto label_16a884;
        case 0x16a888u: goto label_16a888;
        case 0x16a88cu: goto label_16a88c;
        case 0x16a890u: goto label_16a890;
        case 0x16a894u: goto label_16a894;
        case 0x16a898u: goto label_16a898;
        case 0x16a89cu: goto label_16a89c;
        case 0x16a8a0u: goto label_16a8a0;
        case 0x16a8a4u: goto label_16a8a4;
        case 0x16a8a8u: goto label_16a8a8;
        case 0x16a8acu: goto label_16a8ac;
        case 0x16a8b0u: goto label_16a8b0;
        case 0x16a8b4u: goto label_16a8b4;
        case 0x16a8b8u: goto label_16a8b8;
        case 0x16a8bcu: goto label_16a8bc;
        case 0x16a8c0u: goto label_16a8c0;
        case 0x16a8c4u: goto label_16a8c4;
        case 0x16a8c8u: goto label_16a8c8;
        case 0x16a8ccu: goto label_16a8cc;
        case 0x16a8d0u: goto label_16a8d0;
        case 0x16a8d4u: goto label_16a8d4;
        case 0x16a8d8u: goto label_16a8d8;
        case 0x16a8dcu: goto label_16a8dc;
        case 0x16a8e0u: goto label_16a8e0;
        case 0x16a8e4u: goto label_16a8e4;
        case 0x16a8e8u: goto label_16a8e8;
        case 0x16a8ecu: goto label_16a8ec;
        default: return;
    }

label_16a120:
    // 0x16a120: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x16a120u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_16a124:
    // 0x16a124: 0x24633ef0  addiu       $v1, $v1, 0x3EF0
    ctx->pc = 0x16a124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16112));
label_16a128:
    // 0x16a128: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16a128u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16a12c:
    // 0x16a12c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16a12cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16a130:
    // 0x16a130: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x16a130u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_16a134:
    // 0x16a134: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16a134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16a138:
    // 0x16a138: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16a138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_16a13c:
    // 0x16a13c: 0xaf838710  sw          $v1, -0x78F0($gp)
    ctx->pc = 0x16a13cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
label_16a140:
    // 0x16a140: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16a140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16a144:
    // 0x16a144: 0x2c63007f  sltiu       $v1, $v1, 0x7F
    ctx->pc = 0x16a144u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
label_16a148:
    // 0x16a148: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_16a14c:
    if (ctx->pc == 0x16A14Cu) {
        ctx->pc = 0x16A150u;
        goto label_16a150;
    }
    ctx->pc = 0x16A148u;
    {
        const bool branch_taken_0x16a148 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16a148) {
            ctx->pc = 0x16A174u;
            goto label_16a174;
        }
    }
    ctx->pc = 0x16A150u;
label_16a150:
    // 0x16a150: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16a150u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16a154:
    // 0x16a154: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16a154u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_16a158:
    // 0x16a158: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16a158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16a15c:
    // 0x16a15c: 0xc08d61c  jal         func_235870
label_16a160:
    if (ctx->pc == 0x16A160u) {
        ctx->pc = 0x16A160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A15Cu;
        // 0x16a160: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A164u;
        goto label_16a164;
    }
    ctx->pc = 0x16A15Cu;
    SET_GPR_U32(ctx, 31, 0x16A164u);
    ctx->pc = 0x16A160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A15Cu;
    // 0x16a160: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    { ctx->pc = 0x235870; return; }
    ctx->pc = 0x16A164u;
label_16a164:
    // 0x16a164: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16a164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16a168:
    // 0x16a168: 0x1043fff9  beq         $v0, $v1, . + 4 + (-0x7 << 2)
label_16a16c:
    if (ctx->pc == 0x16A16Cu) {
        ctx->pc = 0x16A170u;
        goto label_16a170;
    }
    ctx->pc = 0x16A168u;
    {
        const bool branch_taken_0x16a168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16a168) {
            ctx->pc = 0x16A150u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16a150;
        }
    }
    ctx->pc = 0x16A170u;
label_16a170:
    // 0x16a170: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16a170u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_16a174:
    // 0x16a174: 0x1189c0  sll         $s1, $s1, 7
    ctx->pc = 0x16a174u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 7));
label_16a178:
    // 0x16a178: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x16a178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
label_16a17c:
    // 0x16a17c: 0x2232025  or          $a0, $s1, $v1
    ctx->pc = 0x16a17cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
label_16a180:
    // 0x16a180: 0x2048025  or          $s0, $s0, $a0
    ctx->pc = 0x16a180u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
label_16a184:
    // 0x16a184: 0x3c034600  lui         $v1, 0x4600
    ctx->pc = 0x16a184u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17920 << 16));
label_16a188:
    // 0x16a188: 0x8f848710  lw          $a0, -0x78F0($gp)
    ctx->pc = 0x16a188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16a18c:
    // 0x16a18c: 0x2032825  or          $a1, $s0, $v1
    ctx->pc = 0x16a18cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
label_16a190:
    // 0x16a190: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x16a190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_16a194:
    // 0x16a194: 0x24633ef0  addiu       $v1, $v1, 0x3EF0
    ctx->pc = 0x16a194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16112));
label_16a198:
    // 0x16a198: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16a198u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16a19c:
    // 0x16a19c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16a19cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16a1a0:
    // 0x16a1a0: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x16a1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_16a1a4:
    // 0x16a1a4: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16a1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16a1a8:
    // 0x16a1a8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16a1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_16a1ac:
    // 0x16a1ac: 0xaf838710  sw          $v1, -0x78F0($gp)
    ctx->pc = 0x16a1acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
label_16a1b0:
    // 0x16a1b0: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16a1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16a1b4:
    // 0x16a1b4: 0x2c63007f  sltiu       $v1, $v1, 0x7F
    ctx->pc = 0x16a1b4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
label_16a1b8:
    // 0x16a1b8: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_16a1bc:
    if (ctx->pc == 0x16A1BCu) {
        ctx->pc = 0x16A1C0u;
        goto label_16a1c0;
    }
    ctx->pc = 0x16A1B8u;
    {
        const bool branch_taken_0x16a1b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16a1b8) {
            ctx->pc = 0x16A1E4u;
            goto label_16a1e4;
        }
    }
    ctx->pc = 0x16A1C0u;
label_16a1c0:
    // 0x16a1c0: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16a1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16a1c4:
    // 0x16a1c4: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16a1c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_16a1c8:
    // 0x16a1c8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16a1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16a1cc:
    // 0x16a1cc: 0xc08d61c  jal         func_235870
label_16a1d0:
    if (ctx->pc == 0x16A1D0u) {
        ctx->pc = 0x16A1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A1CCu;
        // 0x16a1d0: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A1D4u;
        goto label_16a1d4;
    }
    ctx->pc = 0x16A1CCu;
    SET_GPR_U32(ctx, 31, 0x16A1D4u);
    ctx->pc = 0x16A1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A1CCu;
    // 0x16a1d0: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    { ctx->pc = 0x235870; return; }
    ctx->pc = 0x16A1D4u;
label_16a1d4:
    // 0x16a1d4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16a1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16a1d8:
    // 0x16a1d8: 0x1043fff9  beq         $v0, $v1, . + 4 + (-0x7 << 2)
label_16a1dc:
    if (ctx->pc == 0x16A1DCu) {
        ctx->pc = 0x16A1E0u;
        goto label_16a1e0;
    }
    ctx->pc = 0x16A1D8u;
    {
        const bool branch_taken_0x16a1d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16a1d8) {
            ctx->pc = 0x16A1C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16a1c0;
        }
    }
    ctx->pc = 0x16A1E0u;
label_16a1e0:
    // 0x16a1e0: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16a1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_16a1e4:
    // 0x16a1e4: 0x8f848710  lw          $a0, -0x78F0($gp)
    ctx->pc = 0x16a1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16a1e8:
    // 0x16a1e8: 0x3c03660f  lui         $v1, 0x660F
    ctx->pc = 0x16a1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26127 << 16));
label_16a1ec:
    // 0x16a1ec: 0x34650040  ori         $a1, $v1, 0x40
    ctx->pc = 0x16a1ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_16a1f0:
    // 0x16a1f0: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x16a1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_16a1f4:
    // 0x16a1f4: 0x2252825  or          $a1, $s1, $a1
    ctx->pc = 0x16a1f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | GPR_U64(ctx, 5));
label_16a1f8:
    // 0x16a1f8: 0x24633ef0  addiu       $v1, $v1, 0x3EF0
    ctx->pc = 0x16a1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16112));
label_16a1fc:
    // 0x16a1fc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16a1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16a200:
    // 0x16a200: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16a200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16a204:
    // 0x16a204: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x16a204u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_16a208:
    // 0x16a208: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16a208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16a20c:
    // 0x16a20c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16a20cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_16a210:
    // 0x16a210: 0xaf838710  sw          $v1, -0x78F0($gp)
    ctx->pc = 0x16a210u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
label_16a214:
    // 0x16a214: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16a214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16a218:
    // 0x16a218: 0x2c63007f  sltiu       $v1, $v1, 0x7F
    ctx->pc = 0x16a218u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
label_16a21c:
    // 0x16a21c: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_16a220:
    if (ctx->pc == 0x16A220u) {
        ctx->pc = 0x16A224u;
        goto label_16a224;
    }
    ctx->pc = 0x16A21Cu;
    {
        const bool branch_taken_0x16a21c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16a21c) {
            ctx->pc = 0x16A248u;
            goto label_16a248;
        }
    }
    ctx->pc = 0x16A224u;
label_16a224:
    // 0x16a224: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16a224u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16a228:
    // 0x16a228: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16a228u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_16a22c:
    // 0x16a22c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16a22cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16a230:
    // 0x16a230: 0xc08d61c  jal         func_235870
label_16a234:
    if (ctx->pc == 0x16A234u) {
        ctx->pc = 0x16A234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A230u;
        // 0x16a234: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A238u;
        goto label_16a238;
    }
    ctx->pc = 0x16A230u;
    SET_GPR_U32(ctx, 31, 0x16A238u);
    ctx->pc = 0x16A234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A230u;
    // 0x16a234: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    { ctx->pc = 0x235870; return; }
    ctx->pc = 0x16A238u;
label_16a238:
    // 0x16a238: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16a238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16a23c:
    // 0x16a23c: 0x1043fff9  beq         $v0, $v1, . + 4 + (-0x7 << 2)
label_16a240:
    if (ctx->pc == 0x16A240u) {
        ctx->pc = 0x16A244u;
        goto label_16a244;
    }
    ctx->pc = 0x16A23Cu;
    {
        const bool branch_taken_0x16a23c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16a23c) {
            ctx->pc = 0x16A224u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16a224;
        }
    }
    ctx->pc = 0x16A244u;
label_16a244:
    // 0x16a244: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16a244u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_16a248:
    // 0x16a248: 0x8f848710  lw          $a0, -0x78F0($gp)
    ctx->pc = 0x16a248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16a24c:
    // 0x16a24c: 0x3c035600  lui         $v1, 0x5600
    ctx->pc = 0x16a24cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22016 << 16));
label_16a250:
    // 0x16a250: 0x2032825  or          $a1, $s0, $v1
    ctx->pc = 0x16a250u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
label_16a254:
    // 0x16a254: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x16a254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_16a258:
    // 0x16a258: 0x24633ef0  addiu       $v1, $v1, 0x3EF0
    ctx->pc = 0x16a258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16112));
label_16a25c:
    // 0x16a25c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16a25cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16a260:
    // 0x16a260: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16a260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16a264:
    // 0x16a264: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x16a264u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_16a268:
    // 0x16a268: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16a268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16a26c:
    // 0x16a26c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16a26cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_16a270:
    // 0x16a270: 0xaf838710  sw          $v1, -0x78F0($gp)
    ctx->pc = 0x16a270u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
label_16a274:
    // 0x16a274: 0x27838190  addiu       $v1, $gp, -0x7E70
    ctx->pc = 0x16a274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934928));
label_16a278:
    // 0x16a278: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x16a278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_16a27c:
    // 0x16a27c: 0x1000033d  b           . + 4 + (0x33D << 2)
label_16a280:
    if (ctx->pc == 0x16A280u) {
        ctx->pc = 0x16A280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A27Cu;
        // 0x16a280: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A284u;
        goto label_16a284;
    }
    ctx->pc = 0x16A27Cu;
    {
        const bool branch_taken_0x16a27c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A27Cu;
        // 0x16a280: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a27c) {
            ctx->pc = 0x16AF74u;
            { ctx->pc = 0x16af74; return; }
        }
    }
    ctx->pc = 0x16A284u;
label_16a284:
    // 0x16a284: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16a284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16a288:
    // 0x16a288: 0x1000033a  b           . + 4 + (0x33A << 2)
label_16a28c:
    if (ctx->pc == 0x16A28Cu) {
        ctx->pc = 0x16A28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A288u;
        // 0x16a28c: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A290u;
        goto label_16a290;
    }
    ctx->pc = 0x16A288u;
    {
        const bool branch_taken_0x16a288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A288u;
        // 0x16a28c: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a288) {
            ctx->pc = 0x16AF74u;
            { ctx->pc = 0x16af74; return; }
        }
    }
    ctx->pc = 0x16A290u;
label_16a290:
    // 0x16a290: 0x159080  sll         $s2, $s5, 2
    ctx->pc = 0x16a290u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_16a294:
    // 0x16a294: 0x278481a0  addiu       $a0, $gp, -0x7E60
    ctx->pc = 0x16a294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934944));
label_16a298:
    // 0x16a298: 0x92b021  addu        $s6, $a0, $s2
    ctx->pc = 0x16a298u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_16a29c:
    // 0x16a29c: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x16a29cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_16a2a0:
    // 0x16a2a0: 0x148000ca  bnez        $a0, . + 4 + (0xCA << 2)
label_16a2a4:
    if (ctx->pc == 0x16A2A4u) {
        ctx->pc = 0x16A2A8u;
        goto label_16a2a8;
    }
    ctx->pc = 0x16A2A0u;
    {
        const bool branch_taken_0x16a2a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x16a2a0) {
            ctx->pc = 0x16A5CCu;
            goto label_16a5cc;
        }
    }
    ctx->pc = 0x16A2A8u;
label_16a2a8:
    // 0x16a2a8: 0x27848198  addiu       $a0, $gp, -0x7E68
    ctx->pc = 0x16a2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934936));
label_16a2ac:
    // 0x16a2ac: 0x929821  addu        $s3, $a0, $s2
    ctx->pc = 0x16a2acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_16a2b0:
    // 0x16a2b0: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x16a2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_16a2b4:
    // 0x16a2b4: 0x10800059  beqz        $a0, . + 4 + (0x59 << 2)
label_16a2b8:
    if (ctx->pc == 0x16A2B8u) {
        ctx->pc = 0x16A2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A2B4u;
        // 0x16a2b8: 0x27848188  addiu       $a0, $gp, -0x7E78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934920));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A2BCu;
        goto label_16a2bc;
    }
    ctx->pc = 0x16A2B4u;
    {
        const bool branch_taken_0x16a2b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A2B4u;
        // 0x16a2b8: 0x27848188  addiu       $a0, $gp, -0x7E78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a2b4) {
            ctx->pc = 0x16A41Cu;
            goto label_16a41c;
        }
    }
    ctx->pc = 0x16A2BCu;
label_16a2bc:
    // 0x16a2bc: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x16a2bcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_16a2c0:
    // 0x16a2c0: 0x27838188  addiu       $v1, $gp, -0x7E78
    ctx->pc = 0x16a2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934920));
label_16a2c4:
    // 0x16a2c4: 0x2a210020  slti        $at, $s1, 0x20
    ctx->pc = 0x16a2c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
label_16a2c8:
    // 0x16a2c8: 0x753021  addu        $a2, $v1, $s5
    ctx->pc = 0x16a2c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_16a2cc:
    // 0x16a2cc: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_16a2d0:
    if (ctx->pc == 0x16A2D0u) {
        ctx->pc = 0x16A2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A2CCu;
        // 0x16a2d0: 0xa0c00000  sb          $zero, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A2D4u;
        goto label_16a2d4;
    }
    ctx->pc = 0x16A2CCu;
    {
        const bool branch_taken_0x16a2cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A2CCu;
        // 0x16a2d0: 0xa0c00000  sb          $zero, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a2cc) {
            ctx->pc = 0x16A2F8u;
            goto label_16a2f8;
        }
    }
    ctx->pc = 0x16A2D4u;
label_16a2d4:
    // 0x16a2d4: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16a2d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16a2d8:
    // 0x16a2d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16a2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16a2dc:
    // 0x16a2dc: 0x8c231ed8  lw          $v1, 0x1ED8($at)
    ctx->pc = 0x16a2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7896)));
label_16a2e0:
    // 0x16a2e0: 0x2252004  sllv        $a0, $a1, $s1
    ctx->pc = 0x16a2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 17) & 0x1F));
label_16a2e4:
    // 0x16a2e4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x16a2e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_16a2e8:
    // 0x16a2e8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_16a2ec:
    if (ctx->pc == 0x16A2ECu) {
        ctx->pc = 0x16A2F0u;
        goto label_16a2f0;
    }
    ctx->pc = 0x16A2E8u;
    {
        const bool branch_taken_0x16a2e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a2e8) {
            ctx->pc = 0x16A2F8u;
            goto label_16a2f8;
        }
    }
    ctx->pc = 0x16A2F0u;
label_16a2f0:
    // 0x16a2f0: 0x10000002  b           . + 4 + (0x2 << 2)
label_16a2f4:
    if (ctx->pc == 0x16A2F4u) {
        ctx->pc = 0x16A2F8u;
        goto label_16a2f8;
    }
    ctx->pc = 0x16A2F0u;
    {
        const bool branch_taken_0x16a2f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a2f0) {
            ctx->pc = 0x16A2FCu;
            goto label_16a2fc;
        }
    }
    ctx->pc = 0x16A2F8u;
label_16a2f8:
    // 0x16a2f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16a2f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16a2fc:
    // 0x16a2fc: 0x10a00044  beqz        $a1, . + 4 + (0x44 << 2)
label_16a300:
    if (ctx->pc == 0x16A300u) {
        ctx->pc = 0x16A304u;
        goto label_16a304;
    }
    ctx->pc = 0x16A2FCu;
    {
        const bool branch_taken_0x16a2fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a2fc) {
            ctx->pc = 0x16A410u;
            goto label_16a410;
        }
    }
    ctx->pc = 0x16A304u;
label_16a304:
    // 0x16a304: 0x2a210020  slti        $at, $s1, 0x20
    ctx->pc = 0x16a304u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
label_16a308:
    // 0x16a308: 0x10200041  beqz        $at, . + 4 + (0x41 << 2)
label_16a30c:
    if (ctx->pc == 0x16A30Cu) {
        ctx->pc = 0x16A30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A308u;
        // 0x16a30c: 0x90d00000  lbu         $s0, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A310u;
        goto label_16a310;
    }
    ctx->pc = 0x16A308u;
    {
        const bool branch_taken_0x16a308 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A308u;
        // 0x16a30c: 0x90d00000  lbu         $s0, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a308) {
            ctx->pc = 0x16A410u;
            goto label_16a410;
        }
    }
    ctx->pc = 0x16A310u;
label_16a310:
    // 0x16a310: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16a310u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16a314:
    // 0x16a314: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16a314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16a318:
    // 0x16a318: 0x8c231ed8  lw          $v1, 0x1ED8($at)
    ctx->pc = 0x16a318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7896)));
label_16a31c:
    // 0x16a31c: 0x2242004  sllv        $a0, $a0, $s1
    ctx->pc = 0x16a31cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 17) & 0x1F));
label_16a320:
    // 0x16a320: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x16a320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_16a324:
    // 0x16a324: 0x1060003a  beqz        $v1, . + 4 + (0x3A << 2)
label_16a328:
    if (ctx->pc == 0x16A328u) {
        ctx->pc = 0x16A32Cu;
        goto label_16a32c;
    }
    ctx->pc = 0x16A324u;
    {
        const bool branch_taken_0x16a324 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a324) {
            ctx->pc = 0x16A410u;
            goto label_16a410;
        }
    }
    ctx->pc = 0x16A32Cu;
label_16a32c:
    // 0x16a32c: 0x8f83817c  lw          $v1, -0x7E84($gp)
    ctx->pc = 0x16a32cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934908)));
label_16a330:
    // 0x16a330: 0x10600037  beqz        $v1, . + 4 + (0x37 << 2)
label_16a334:
    if (ctx->pc == 0x16A334u) {
        ctx->pc = 0x16A338u;
        goto label_16a338;
    }
    ctx->pc = 0x16A330u;
    {
        const bool branch_taken_0x16a330 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a330) {
            ctx->pc = 0x16A410u;
            goto label_16a410;
        }
    }
    ctx->pc = 0x16A338u;
label_16a338:
    // 0x16a338: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16a338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16a33c:
    // 0x16a33c: 0x2c63007f  sltiu       $v1, $v1, 0x7F
    ctx->pc = 0x16a33cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
label_16a340:
    // 0x16a340: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_16a344:
    if (ctx->pc == 0x16A344u) {
        ctx->pc = 0x16A348u;
        goto label_16a348;
    }
    ctx->pc = 0x16A340u;
    {
        const bool branch_taken_0x16a340 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16a340) {
            ctx->pc = 0x16A36Cu;
            goto label_16a36c;
        }
    }
    ctx->pc = 0x16A348u;
label_16a348:
    // 0x16a348: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16a348u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16a34c:
    // 0x16a34c: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16a34cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_16a350:
    // 0x16a350: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16a350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16a354:
    // 0x16a354: 0xc08d61c  jal         func_235870
label_16a358:
    if (ctx->pc == 0x16A358u) {
        ctx->pc = 0x16A358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A354u;
        // 0x16a358: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A35Cu;
        goto label_16a35c;
    }
    ctx->pc = 0x16A354u;
    SET_GPR_U32(ctx, 31, 0x16A35Cu);
    ctx->pc = 0x16A358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A354u;
    // 0x16a358: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    { ctx->pc = 0x235870; return; }
    ctx->pc = 0x16A35Cu;
label_16a35c:
    // 0x16a35c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16a35cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16a360:
    // 0x16a360: 0x1043fff9  beq         $v0, $v1, . + 4 + (-0x7 << 2)
label_16a364:
    if (ctx->pc == 0x16A364u) {
        ctx->pc = 0x16A368u;
        goto label_16a368;
    }
    ctx->pc = 0x16A360u;
    {
        const bool branch_taken_0x16a360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16a360) {
            ctx->pc = 0x16A348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16a348;
        }
    }
    ctx->pc = 0x16A368u;
label_16a368:
    // 0x16a368: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16a368u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_16a36c:
    // 0x16a36c: 0x1189c0  sll         $s1, $s1, 7
    ctx->pc = 0x16a36cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 7));
label_16a370:
    // 0x16a370: 0x3c04000f  lui         $a0, 0xF
    ctx->pc = 0x16a370u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15 << 16));
label_16a374:
    // 0x16a374: 0x2243025  or          $a2, $s1, $a0
    ctx->pc = 0x16a374u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) | GPR_U64(ctx, 4));
label_16a378:
    // 0x16a378: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x16a378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_16a37c:
    // 0x16a37c: 0x8f848710  lw          $a0, -0x78F0($gp)
    ctx->pc = 0x16a37cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16a380:
    // 0x16a380: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x16a380u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_16a384:
    // 0x16a384: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x16a384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_16a388:
    // 0x16a388: 0x3c055600  lui         $a1, 0x5600
    ctx->pc = 0x16a388u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)22016 << 16));
label_16a38c:
    // 0x16a38c: 0x24633ef0  addiu       $v1, $v1, 0x3EF0
    ctx->pc = 0x16a38cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16112));
label_16a390:
    // 0x16a390: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x16a390u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_16a394:
    // 0x16a394: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16a394u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16a398:
    // 0x16a398: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16a398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16a39c:
    // 0x16a39c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x16a39cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_16a3a0:
    // 0x16a3a0: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16a3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16a3a4:
    // 0x16a3a4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16a3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_16a3a8:
    // 0x16a3a8: 0xaf838710  sw          $v1, -0x78F0($gp)
    ctx->pc = 0x16a3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
label_16a3ac:
    // 0x16a3ac: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16a3acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16a3b0:
    // 0x16a3b0: 0x2c63007f  sltiu       $v1, $v1, 0x7F
    ctx->pc = 0x16a3b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
label_16a3b4:
    // 0x16a3b4: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_16a3b8:
    if (ctx->pc == 0x16A3B8u) {
        ctx->pc = 0x16A3BCu;
        goto label_16a3bc;
    }
    ctx->pc = 0x16A3B4u;
    {
        const bool branch_taken_0x16a3b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16a3b4) {
            ctx->pc = 0x16A3E0u;
            goto label_16a3e0;
        }
    }
    ctx->pc = 0x16A3BCu;
label_16a3bc:
    // 0x16a3bc: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16a3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16a3c0:
    // 0x16a3c0: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16a3c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_16a3c4:
    // 0x16a3c4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16a3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16a3c8:
    // 0x16a3c8: 0xc08d61c  jal         func_235870
label_16a3cc:
    if (ctx->pc == 0x16A3CCu) {
        ctx->pc = 0x16A3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A3C8u;
        // 0x16a3cc: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A3D0u;
        goto label_16a3d0;
    }
    ctx->pc = 0x16A3C8u;
    SET_GPR_U32(ctx, 31, 0x16A3D0u);
    ctx->pc = 0x16A3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A3C8u;
    // 0x16a3cc: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    { ctx->pc = 0x235870; return; }
    ctx->pc = 0x16A3D0u;
label_16a3d0:
    // 0x16a3d0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16a3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16a3d4:
    // 0x16a3d4: 0x1043fff9  beq         $v0, $v1, . + 4 + (-0x7 << 2)
label_16a3d8:
    if (ctx->pc == 0x16A3D8u) {
        ctx->pc = 0x16A3DCu;
        goto label_16a3dc;
    }
    ctx->pc = 0x16A3D4u;
    {
        const bool branch_taken_0x16a3d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16a3d4) {
            ctx->pc = 0x16A3BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16a3bc;
        }
    }
    ctx->pc = 0x16A3DCu;
label_16a3dc:
    // 0x16a3dc: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16a3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_16a3e0:
    // 0x16a3e0: 0x8f848710  lw          $a0, -0x78F0($gp)
    ctx->pc = 0x16a3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16a3e4:
    // 0x16a3e4: 0x3c03660f  lui         $v1, 0x660F
    ctx->pc = 0x16a3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26127 << 16));
label_16a3e8:
    // 0x16a3e8: 0x34650040  ori         $a1, $v1, 0x40
    ctx->pc = 0x16a3e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_16a3ec:
    // 0x16a3ec: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x16a3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_16a3f0:
    // 0x16a3f0: 0x2252825  or          $a1, $s1, $a1
    ctx->pc = 0x16a3f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | GPR_U64(ctx, 5));
label_16a3f4:
    // 0x16a3f4: 0x24633ef0  addiu       $v1, $v1, 0x3EF0
    ctx->pc = 0x16a3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16112));
label_16a3f8:
    // 0x16a3f8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16a3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16a3fc:
    // 0x16a3fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16a3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16a400:
    // 0x16a400: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x16a400u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_16a404:
    // 0x16a404: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16a404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16a408:
    // 0x16a408: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16a408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_16a40c:
    // 0x16a40c: 0xaf838710  sw          $v1, -0x78F0($gp)
    ctx->pc = 0x16a40cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
label_16a410:
    // 0x16a410: 0x100002d8  b           . + 4 + (0x2D8 << 2)
label_16a414:
    if (ctx->pc == 0x16A414u) {
        ctx->pc = 0x16A414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A410u;
        // 0x16a414: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A418u;
        goto label_16a418;
    }
    ctx->pc = 0x16A410u;
    {
        const bool branch_taken_0x16a410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A410u;
        // 0x16a414: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a410) {
            ctx->pc = 0x16AF74u;
            { ctx->pc = 0x16af74; return; }
        }
    }
    ctx->pc = 0x16A418u;
label_16a418:
    // 0x16a418: 0x27848188  addiu       $a0, $gp, -0x7E78
    ctx->pc = 0x16a418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934920));
label_16a41c:
    // 0x16a41c: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x16a41cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_16a420:
    // 0x16a420: 0x954021  addu        $t0, $a0, $s5
    ctx->pc = 0x16a420u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
label_16a424:
    // 0x16a424: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x16a424u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
label_16a428:
    // 0x16a428: 0x24841e40  addiu       $a0, $a0, 0x1E40
    ctx->pc = 0x16a428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7744));
label_16a42c:
    // 0x16a42c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x16a42cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_16a430:
    // 0x16a430: 0x91050000  lbu         $a1, 0x0($t0)
    ctx->pc = 0x16a430u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_16a434:
    // 0x16a434: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x16a434u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_16a438:
    // 0x16a438: 0xa4082a  slt         $at, $a1, $a0
    ctx->pc = 0x16a438u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_16a43c:
    // 0x16a43c: 0x102002cd  beqz        $at, . + 4 + (0x2CD << 2)
label_16a440:
    if (ctx->pc == 0x16A440u) {
        ctx->pc = 0x16A444u;
        goto label_16a444;
    }
    ctx->pc = 0x16A43Cu;
    {
        const bool branch_taken_0x16a43c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a43c) {
            ctx->pc = 0x16AF74u;
            { ctx->pc = 0x16af74; return; }
        }
    }
    ctx->pc = 0x16A444u;
label_16a444:
    // 0x16a444: 0x27848190  addiu       $a0, $gp, -0x7E70
    ctx->pc = 0x16a444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934928));
label_16a448:
    // 0x16a448: 0x923821  addu        $a3, $a0, $s2
    ctx->pc = 0x16a448u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_16a44c:
    // 0x16a44c: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x16a44cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_16a450:
    // 0x16a450: 0x24c50001  addiu       $a1, $a2, 0x1
    ctx->pc = 0x16a450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_16a454:
    // 0x16a454: 0x30c40001  andi        $a0, $a2, 0x1
    ctx->pc = 0x16a454u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
label_16a458:
    // 0x16a458: 0x4c10004  bgez        $a2, . + 4 + (0x4 << 2)
label_16a45c:
    if (ctx->pc == 0x16A45Cu) {
        ctx->pc = 0x16A45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A458u;
        // 0x16a45c: 0xace50000  sw          $a1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A460u;
        goto label_16a460;
    }
    ctx->pc = 0x16A458u;
    {
        const bool branch_taken_0x16a458 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x16A45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A458u;
        // 0x16a45c: 0xace50000  sw          $a1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a458) {
            ctx->pc = 0x16A46Cu;
            goto label_16a46c;
        }
    }
    ctx->pc = 0x16A460u;
label_16a460:
    // 0x16a460: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
label_16a464:
    if (ctx->pc == 0x16A464u) {
        ctx->pc = 0x16A468u;
        goto label_16a468;
    }
    ctx->pc = 0x16A460u;
    {
        const bool branch_taken_0x16a460 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a460) {
            ctx->pc = 0x16A46Cu;
            goto label_16a46c;
        }
    }
    ctx->pc = 0x16A468u;
label_16a468:
    // 0x16a468: 0x2484fffe  addiu       $a0, $a0, -0x2
    ctx->pc = 0x16a468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
label_16a46c:
    // 0x16a46c: 0x148002c1  bnez        $a0, . + 4 + (0x2C1 << 2)
label_16a470:
    if (ctx->pc == 0x16A470u) {
        ctx->pc = 0x16A474u;
        goto label_16a474;
    }
    ctx->pc = 0x16A46Cu;
    {
        const bool branch_taken_0x16a46c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x16a46c) {
            ctx->pc = 0x16AF74u;
            { ctx->pc = 0x16af74; return; }
        }
    }
    ctx->pc = 0x16A474u;
label_16a474:
    // 0x16a474: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x16a474u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_16a478:
    // 0x16a478: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x16a478u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_16a47c:
    // 0x16a47c: 0x2a210020  slti        $at, $s1, 0x20
    ctx->pc = 0x16a47cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
label_16a480:
    // 0x16a480: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16a480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_16a484:
    // 0x16a484: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_16a488:
    if (ctx->pc == 0x16A488u) {
        ctx->pc = 0x16A488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A484u;
        // 0x16a488: 0xa1030000  sb          $v1, 0x0($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A48Cu;
        goto label_16a48c;
    }
    ctx->pc = 0x16A484u;
    {
        const bool branch_taken_0x16a484 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A484u;
        // 0x16a488: 0xa1030000  sb          $v1, 0x0($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a484) {
            ctx->pc = 0x16A4B0u;
            goto label_16a4b0;
        }
    }
    ctx->pc = 0x16A48Cu;
label_16a48c:
    // 0x16a48c: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16a48cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16a490:
    // 0x16a490: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16a490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16a494:
    // 0x16a494: 0x8c231ed8  lw          $v1, 0x1ED8($at)
    ctx->pc = 0x16a494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7896)));
label_16a498:
    // 0x16a498: 0x2252004  sllv        $a0, $a1, $s1
    ctx->pc = 0x16a498u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 17) & 0x1F));
label_16a49c:
    // 0x16a49c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x16a49cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_16a4a0:
    // 0x16a4a0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_16a4a4:
    if (ctx->pc == 0x16A4A4u) {
        ctx->pc = 0x16A4A8u;
        goto label_16a4a8;
    }
    ctx->pc = 0x16A4A0u;
    {
        const bool branch_taken_0x16a4a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a4a0) {
            ctx->pc = 0x16A4B0u;
            goto label_16a4b0;
        }
    }
    ctx->pc = 0x16A4A8u;
label_16a4a8:
    // 0x16a4a8: 0x10000002  b           . + 4 + (0x2 << 2)
label_16a4ac:
    if (ctx->pc == 0x16A4ACu) {
        ctx->pc = 0x16A4B0u;
        goto label_16a4b0;
    }
    ctx->pc = 0x16A4A8u;
    {
        const bool branch_taken_0x16a4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a4a8) {
            ctx->pc = 0x16A4B4u;
            goto label_16a4b4;
        }
    }
    ctx->pc = 0x16A4B0u;
label_16a4b0:
    // 0x16a4b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16a4b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16a4b4:
    // 0x16a4b4: 0x10a002af  beqz        $a1, . + 4 + (0x2AF << 2)
label_16a4b8:
    if (ctx->pc == 0x16A4B8u) {
        ctx->pc = 0x16A4BCu;
        goto label_16a4bc;
    }
    ctx->pc = 0x16A4B4u;
    {
        const bool branch_taken_0x16a4b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a4b4) {
            ctx->pc = 0x16AF74u;
            { ctx->pc = 0x16af74; return; }
        }
    }
    ctx->pc = 0x16A4BCu;
label_16a4bc:
    // 0x16a4bc: 0x2a210020  slti        $at, $s1, 0x20
    ctx->pc = 0x16a4bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
label_16a4c0:
    // 0x16a4c0: 0x102002ac  beqz        $at, . + 4 + (0x2AC << 2)
label_16a4c4:
    if (ctx->pc == 0x16A4C4u) {
        ctx->pc = 0x16A4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A4C0u;
        // 0x16a4c4: 0x91100000  lbu         $s0, 0x0($t0) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A4C8u;
        goto label_16a4c8;
    }
    ctx->pc = 0x16A4C0u;
    {
        const bool branch_taken_0x16a4c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A4C0u;
        // 0x16a4c4: 0x91100000  lbu         $s0, 0x0($t0) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a4c0) {
            ctx->pc = 0x16AF74u;
            { ctx->pc = 0x16af74; return; }
        }
    }
    ctx->pc = 0x16A4C8u;
label_16a4c8:
    // 0x16a4c8: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16a4c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16a4cc:
    // 0x16a4cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16a4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16a4d0:
    // 0x16a4d0: 0x8c231ed8  lw          $v1, 0x1ED8($at)
    ctx->pc = 0x16a4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7896)));
label_16a4d4:
    // 0x16a4d4: 0x2242004  sllv        $a0, $a0, $s1
    ctx->pc = 0x16a4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 17) & 0x1F));
label_16a4d8:
    // 0x16a4d8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x16a4d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_16a4dc:
    // 0x16a4dc: 0x106002a5  beqz        $v1, . + 4 + (0x2A5 << 2)
label_16a4e0:
    if (ctx->pc == 0x16A4E0u) {
        ctx->pc = 0x16A4E4u;
        goto label_16a4e4;
    }
    ctx->pc = 0x16A4DCu;
    {
        const bool branch_taken_0x16a4dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a4dc) {
            ctx->pc = 0x16AF74u;
            { ctx->pc = 0x16af74; return; }
        }
    }
    ctx->pc = 0x16A4E4u;
label_16a4e4:
    // 0x16a4e4: 0x8f83817c  lw          $v1, -0x7E84($gp)
    ctx->pc = 0x16a4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934908)));
label_16a4e8:
    // 0x16a4e8: 0x106002a2  beqz        $v1, . + 4 + (0x2A2 << 2)
label_16a4ec:
    if (ctx->pc == 0x16A4ECu) {
        ctx->pc = 0x16A4F0u;
        goto label_16a4f0;
    }
    ctx->pc = 0x16A4E8u;
    {
        const bool branch_taken_0x16a4e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a4e8) {
            ctx->pc = 0x16AF74u;
            { ctx->pc = 0x16af74; return; }
        }
    }
    ctx->pc = 0x16A4F0u;
label_16a4f0:
    // 0x16a4f0: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16a4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16a4f4:
    // 0x16a4f4: 0x2c63007f  sltiu       $v1, $v1, 0x7F
    ctx->pc = 0x16a4f4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
label_16a4f8:
    // 0x16a4f8: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_16a4fc:
    if (ctx->pc == 0x16A4FCu) {
        ctx->pc = 0x16A500u;
        goto label_16a500;
    }
    ctx->pc = 0x16A4F8u;
    {
        const bool branch_taken_0x16a4f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16a4f8) {
            ctx->pc = 0x16A524u;
            goto label_16a524;
        }
    }
    ctx->pc = 0x16A500u;
label_16a500:
    // 0x16a500: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16a500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16a504:
    // 0x16a504: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16a504u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_16a508:
    // 0x16a508: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16a508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16a50c:
    // 0x16a50c: 0xc08d61c  jal         func_235870
label_16a510:
    if (ctx->pc == 0x16A510u) {
        ctx->pc = 0x16A510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A50Cu;
        // 0x16a510: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A514u;
        goto label_16a514;
    }
    ctx->pc = 0x16A50Cu;
    SET_GPR_U32(ctx, 31, 0x16A514u);
    ctx->pc = 0x16A510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A50Cu;
    // 0x16a510: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    { ctx->pc = 0x235870; return; }
    ctx->pc = 0x16A514u;
label_16a514:
    // 0x16a514: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16a514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16a518:
    // 0x16a518: 0x1043fff9  beq         $v0, $v1, . + 4 + (-0x7 << 2)
label_16a51c:
    if (ctx->pc == 0x16A51Cu) {
        ctx->pc = 0x16A520u;
        goto label_16a520;
    }
    ctx->pc = 0x16A518u;
    {
        const bool branch_taken_0x16a518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16a518) {
            ctx->pc = 0x16A500u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16a500;
        }
    }
    ctx->pc = 0x16A520u;
label_16a520:
    // 0x16a520: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16a520u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_16a524:
    // 0x16a524: 0x1189c0  sll         $s1, $s1, 7
    ctx->pc = 0x16a524u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 7));
label_16a528:
    // 0x16a528: 0x3c04000f  lui         $a0, 0xF
    ctx->pc = 0x16a528u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15 << 16));
label_16a52c:
    // 0x16a52c: 0x2243025  or          $a2, $s1, $a0
    ctx->pc = 0x16a52cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) | GPR_U64(ctx, 4));
label_16a530:
    // 0x16a530: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x16a530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_16a534:
    // 0x16a534: 0x8f848710  lw          $a0, -0x78F0($gp)
    ctx->pc = 0x16a534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16a538:
    // 0x16a538: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x16a538u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_16a53c:
    // 0x16a53c: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x16a53cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_16a540:
    // 0x16a540: 0x3c055600  lui         $a1, 0x5600
    ctx->pc = 0x16a540u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)22016 << 16));
label_16a544:
    // 0x16a544: 0x24633ef0  addiu       $v1, $v1, 0x3EF0
    ctx->pc = 0x16a544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16112));
label_16a548:
    // 0x16a548: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x16a548u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_16a54c:
    // 0x16a54c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16a54cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16a550:
    // 0x16a550: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16a550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16a554:
    // 0x16a554: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x16a554u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_16a558:
    // 0x16a558: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16a558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16a55c:
    // 0x16a55c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16a55cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_16a560:
    // 0x16a560: 0xaf838710  sw          $v1, -0x78F0($gp)
    ctx->pc = 0x16a560u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
label_16a564:
    // 0x16a564: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16a564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16a568:
    // 0x16a568: 0x2c63007f  sltiu       $v1, $v1, 0x7F
    ctx->pc = 0x16a568u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
label_16a56c:
    // 0x16a56c: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_16a570:
    if (ctx->pc == 0x16A570u) {
        ctx->pc = 0x16A574u;
        goto label_16a574;
    }
    ctx->pc = 0x16A56Cu;
    {
        const bool branch_taken_0x16a56c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16a56c) {
            ctx->pc = 0x16A598u;
            goto label_16a598;
        }
    }
    ctx->pc = 0x16A574u;
label_16a574:
    // 0x16a574: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16a574u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16a578:
    // 0x16a578: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16a578u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_16a57c:
    // 0x16a57c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16a57cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16a580:
    // 0x16a580: 0xc08d61c  jal         func_235870
label_16a584:
    if (ctx->pc == 0x16A584u) {
        ctx->pc = 0x16A584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A580u;
        // 0x16a584: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A588u;
        goto label_16a588;
    }
    ctx->pc = 0x16A580u;
    SET_GPR_U32(ctx, 31, 0x16A588u);
    ctx->pc = 0x16A584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A580u;
    // 0x16a584: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    { ctx->pc = 0x235870; return; }
    ctx->pc = 0x16A588u;
label_16a588:
    // 0x16a588: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16a588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16a58c:
    // 0x16a58c: 0x1043fff9  beq         $v0, $v1, . + 4 + (-0x7 << 2)
label_16a590:
    if (ctx->pc == 0x16A590u) {
        ctx->pc = 0x16A594u;
        goto label_16a594;
    }
    ctx->pc = 0x16A58Cu;
    {
        const bool branch_taken_0x16a58c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16a58c) {
            ctx->pc = 0x16A574u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16a574;
        }
    }
    ctx->pc = 0x16A594u;
label_16a594:
    // 0x16a594: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16a594u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_16a598:
    // 0x16a598: 0x8f848710  lw          $a0, -0x78F0($gp)
    ctx->pc = 0x16a598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16a59c:
    // 0x16a59c: 0x3c03660f  lui         $v1, 0x660F
    ctx->pc = 0x16a59cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26127 << 16));
label_16a5a0:
    // 0x16a5a0: 0x34650040  ori         $a1, $v1, 0x40
    ctx->pc = 0x16a5a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_16a5a4:
    // 0x16a5a4: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x16a5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_16a5a8:
    // 0x16a5a8: 0x2252825  or          $a1, $s1, $a1
    ctx->pc = 0x16a5a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | GPR_U64(ctx, 5));
label_16a5ac:
    // 0x16a5ac: 0x24633ef0  addiu       $v1, $v1, 0x3EF0
    ctx->pc = 0x16a5acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16112));
label_16a5b0:
    // 0x16a5b0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16a5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16a5b4:
    // 0x16a5b4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16a5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16a5b8:
    // 0x16a5b8: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x16a5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_16a5bc:
    // 0x16a5bc: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16a5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16a5c0:
    // 0x16a5c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16a5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_16a5c4:
    // 0x16a5c4: 0x1000026b  b           . + 4 + (0x26B << 2)
label_16a5c8:
    if (ctx->pc == 0x16A5C8u) {
        ctx->pc = 0x16A5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A5C4u;
        // 0x16a5c8: 0xaf838710  sw          $v1, -0x78F0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A5CCu;
        goto label_16a5cc;
    }
    ctx->pc = 0x16A5C4u;
    {
        const bool branch_taken_0x16a5c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A5C4u;
        // 0x16a5c8: 0xaf838710  sw          $v1, -0x78F0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a5c4) {
            ctx->pc = 0x16AF74u;
            { ctx->pc = 0x16af74; return; }
        }
    }
    ctx->pc = 0x16A5CCu;
label_16a5cc:
    // 0x16a5cc: 0x10800269  beqz        $a0, . + 4 + (0x269 << 2)
label_16a5d0:
    if (ctx->pc == 0x16A5D0u) {
        ctx->pc = 0x16A5D4u;
        goto label_16a5d4;
    }
    ctx->pc = 0x16A5CCu;
    {
        const bool branch_taken_0x16a5cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a5cc) {
            ctx->pc = 0x16AF74u;
            { ctx->pc = 0x16af74; return; }
        }
    }
    ctx->pc = 0x16A5D4u;
label_16a5d4:
    // 0x16a5d4: 0x27848188  addiu       $a0, $gp, -0x7E78
    ctx->pc = 0x16a5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934920));
label_16a5d8:
    // 0x16a5d8: 0x959821  addu        $s3, $a0, $s5
    ctx->pc = 0x16a5d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
label_16a5dc:
    // 0x16a5dc: 0x92640000  lbu         $a0, 0x0($s3)
    ctx->pc = 0x16a5dcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_16a5e0:
    // 0x16a5e0: 0x1c800152  bgtz        $a0, . + 4 + (0x152 << 2)
label_16a5e4:
    if (ctx->pc == 0x16A5E4u) {
        ctx->pc = 0x16A5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A5E0u;
        // 0x16a5e4: 0x27848190  addiu       $a0, $gp, -0x7E70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934928));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A5E8u;
        goto label_16a5e8;
    }
    ctx->pc = 0x16A5E0u;
    {
        const bool branch_taken_0x16a5e0 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x16A5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A5E0u;
        // 0x16a5e4: 0x27848190  addiu       $a0, $gp, -0x7E70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934928));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a5e0) {
            ctx->pc = 0x16AB2Cu;
            { ctx->pc = 0x16ab2c; return; }
        }
    }
    ctx->pc = 0x16A5E8u;
label_16a5e8:
    // 0x16a5e8: 0x307400ff  andi        $s4, $v1, 0xFF
    ctx->pc = 0x16a5e8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_16a5ec:
    // 0x16a5ec: 0x2a810020  slti        $at, $s4, 0x20
    ctx->pc = 0x16a5ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)32) ? 1 : 0);
label_16a5f0:
    // 0x16a5f0: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_16a5f4:
    if (ctx->pc == 0x16A5F4u) {
        ctx->pc = 0x16A5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A5F0u;
        // 0x16a5f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A5F8u;
        goto label_16a5f8;
    }
    ctx->pc = 0x16A5F0u;
    {
        const bool branch_taken_0x16a5f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A5F0u;
        // 0x16a5f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a5f0) {
            ctx->pc = 0x16A620u;
            goto label_16a620;
        }
    }
    ctx->pc = 0x16A5F8u;
label_16a5f8:
    // 0x16a5f8: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16a5f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16a5fc:
    // 0x16a5fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16a5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16a600:
    // 0x16a600: 0x8c231ed8  lw          $v1, 0x1ED8($at)
    ctx->pc = 0x16a600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7896)));
label_16a604:
    // 0x16a604: 0x2852004  sllv        $a0, $a1, $s4
    ctx->pc = 0x16a604u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 20) & 0x1F));
label_16a608:
    // 0x16a608: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x16a608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_16a60c:
    // 0x16a60c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_16a610:
    if (ctx->pc == 0x16A610u) {
        ctx->pc = 0x16A614u;
        goto label_16a614;
    }
    ctx->pc = 0x16A60Cu;
    {
        const bool branch_taken_0x16a60c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a60c) {
            ctx->pc = 0x16A61Cu;
            goto label_16a61c;
        }
    }
    ctx->pc = 0x16A614u;
label_16a614:
    // 0x16a614: 0x10000002  b           . + 4 + (0x2 << 2)
label_16a618:
    if (ctx->pc == 0x16A618u) {
        ctx->pc = 0x16A61Cu;
        goto label_16a61c;
    }
    ctx->pc = 0x16A614u;
    {
        const bool branch_taken_0x16a614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a614) {
            ctx->pc = 0x16A620u;
            goto label_16a620;
        }
    }
    ctx->pc = 0x16A61Cu;
label_16a61c:
    // 0x16a61c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16a61cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16a620:
    // 0x16a620: 0x10a0002a  beqz        $a1, . + 4 + (0x2A << 2)
label_16a624:
    if (ctx->pc == 0x16A624u) {
        ctx->pc = 0x16A628u;
        goto label_16a628;
    }
    ctx->pc = 0x16A620u;
    {
        const bool branch_taken_0x16a620 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a620) {
            ctx->pc = 0x16A6CCu;
            goto label_16a6cc;
        }
    }
    ctx->pc = 0x16A628u;
label_16a628:
    // 0x16a628: 0x2a810020  slti        $at, $s4, 0x20
    ctx->pc = 0x16a628u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)32) ? 1 : 0);
label_16a62c:
    // 0x16a62c: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
label_16a630:
    if (ctx->pc == 0x16A630u) {
        ctx->pc = 0x16A634u;
        goto label_16a634;
    }
    ctx->pc = 0x16A62Cu;
    {
        const bool branch_taken_0x16a62c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a62c) {
            ctx->pc = 0x16A6CCu;
            goto label_16a6cc;
        }
    }
    ctx->pc = 0x16A634u;
label_16a634:
    // 0x16a634: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16a634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16a638:
    // 0x16a638: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16a638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16a63c:
    // 0x16a63c: 0x8c251ed8  lw          $a1, 0x1ED8($at)
    ctx->pc = 0x16a63cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7896)));
label_16a640:
    // 0x16a640: 0x2832004  sllv        $a0, $v1, $s4
    ctx->pc = 0x16a640u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 20) & 0x1F));
label_16a644:
    // 0x16a644: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x16a644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_16a648:
    // 0x16a648: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
label_16a64c:
    if (ctx->pc == 0x16A64Cu) {
        ctx->pc = 0x16A650u;
        goto label_16a650;
    }
    ctx->pc = 0x16A648u;
    {
        const bool branch_taken_0x16a648 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a648) {
            ctx->pc = 0x16A6CCu;
            goto label_16a6cc;
        }
    }
    ctx->pc = 0x16A650u;
label_16a650:
    // 0x16a650: 0x8f83817c  lw          $v1, -0x7E84($gp)
    ctx->pc = 0x16a650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934908)));
label_16a654:
    // 0x16a654: 0x802027  not         $a0, $a0
    ctx->pc = 0x16a654u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 4) | GPR_U64(ctx, 0)));
label_16a658:
    // 0x16a658: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x16a658u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_16a65c:
    // 0x16a65c: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16a65cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16a660:
    // 0x16a660: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
label_16a664:
    if (ctx->pc == 0x16A664u) {
        ctx->pc = 0x16A664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A660u;
        // 0x16a664: 0xac241ed8  sw          $a0, 0x1ED8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7896), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A668u;
        goto label_16a668;
    }
    ctx->pc = 0x16A660u;
    {
        const bool branch_taken_0x16a660 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A660u;
        // 0x16a664: 0xac241ed8  sw          $a0, 0x1ED8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7896), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a660) {
            ctx->pc = 0x16A6CCu;
            goto label_16a6cc;
        }
    }
    ctx->pc = 0x16A668u;
label_16a668:
    // 0x16a668: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16a668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16a66c:
    // 0x16a66c: 0x2c63007f  sltiu       $v1, $v1, 0x7F
    ctx->pc = 0x16a66cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
label_16a670:
    // 0x16a670: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_16a674:
    if (ctx->pc == 0x16A674u) {
        ctx->pc = 0x16A674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A670u;
        // 0x16a674: 0x1421c0  sll         $a0, $s4, 7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A678u;
        goto label_16a678;
    }
    ctx->pc = 0x16A670u;
    {
        const bool branch_taken_0x16a670 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A670u;
        // 0x16a674: 0x1421c0  sll         $a0, $s4, 7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a670) {
            ctx->pc = 0x16A6A0u;
            goto label_16a6a0;
        }
    }
    ctx->pc = 0x16A678u;
label_16a678:
    // 0x16a678: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16a678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16a67c:
    // 0x16a67c: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16a67cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_16a680:
    // 0x16a680: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16a680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16a684:
    // 0x16a684: 0xc08d61c  jal         func_235870
label_16a688:
    if (ctx->pc == 0x16A688u) {
        ctx->pc = 0x16A688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A684u;
        // 0x16a688: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A68Cu;
        goto label_16a68c;
    }
    ctx->pc = 0x16A684u;
    SET_GPR_U32(ctx, 31, 0x16A68Cu);
    ctx->pc = 0x16A688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A684u;
    // 0x16a688: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    { ctx->pc = 0x235870; return; }
    ctx->pc = 0x16A68Cu;
label_16a68c:
    // 0x16a68c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16a68cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16a690:
    // 0x16a690: 0x1043fff9  beq         $v0, $v1, . + 4 + (-0x7 << 2)
label_16a694:
    if (ctx->pc == 0x16A694u) {
        ctx->pc = 0x16A698u;
        goto label_16a698;
    }
    ctx->pc = 0x16A690u;
    {
        const bool branch_taken_0x16a690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16a690) {
            ctx->pc = 0x16A678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16a678;
        }
    }
    ctx->pc = 0x16A698u;
label_16a698:
    // 0x16a698: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16a698u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_16a69c:
    // 0x16a69c: 0x1421c0  sll         $a0, $s4, 7
    ctx->pc = 0x16a69cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 7));
label_16a6a0:
    // 0x16a6a0: 0x3c03460f  lui         $v1, 0x460F
    ctx->pc = 0x16a6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17935 << 16));
label_16a6a4:
    // 0x16a6a4: 0x832825  or          $a1, $a0, $v1
    ctx->pc = 0x16a6a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_16a6a8:
    // 0x16a6a8: 0x8f848710  lw          $a0, -0x78F0($gp)
    ctx->pc = 0x16a6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16a6ac:
    // 0x16a6ac: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x16a6acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_16a6b0:
    // 0x16a6b0: 0x24633ef0  addiu       $v1, $v1, 0x3EF0
    ctx->pc = 0x16a6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16112));
label_16a6b4:
    // 0x16a6b4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16a6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16a6b8:
    // 0x16a6b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16a6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16a6bc:
    // 0x16a6bc: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x16a6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_16a6c0:
    // 0x16a6c0: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16a6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16a6c4:
    // 0x16a6c4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16a6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_16a6c8:
    // 0x16a6c8: 0xaf838710  sw          $v1, -0x78F0($gp)
    ctx->pc = 0x16a6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
label_16a6cc:
    // 0x16a6cc: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x16a6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
label_16a6d0:
    // 0x16a6d0: 0xa2300000  sb          $s0, 0x0($s1)
    ctx->pc = 0x16a6d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 16));
label_16a6d4:
    // 0x16a6d4: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x16a6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_16a6d8:
    // 0x16a6d8: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x16a6d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
label_16a6dc:
    // 0x16a6dc: 0x14600087  bnez        $v1, . + 4 + (0x87 << 2)
label_16a6e0:
    if (ctx->pc == 0x16A6E0u) {
        ctx->pc = 0x16A6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A6DCu;
        // 0x16a6e0: 0x3aa50001  xori        $a1, $s5, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A6E4u;
        goto label_16a6e4;
    }
    ctx->pc = 0x16A6DCu;
    {
        const bool branch_taken_0x16a6dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A6DCu;
        // 0x16a6e0: 0x3aa50001  xori        $a1, $s5, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a6dc) {
            ctx->pc = 0x16A8FCu;
            { ctx->pc = 0x16a8fc; return; }
        }
    }
    ctx->pc = 0x16A6E4u;
label_16a6e4:
    // 0x16a6e4: 0x27838198  addiu       $v1, $gp, -0x7E68
    ctx->pc = 0x16a6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934936));
label_16a6e8:
    // 0x16a6e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16a6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16a6ec:
    // 0x16a6ec: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x16a6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_16a6f0:
    // 0x16a6f0: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x16a6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_16a6f4:
    // 0x16a6f4: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x16a6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_16a6f8:
    // 0x16a6f8: 0xa2630000  sb          $v1, 0x0($s3)
    ctx->pc = 0x16a6f8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 3));
label_16a6fc:
    // 0x16a6fc: 0x92310000  lbu         $s1, 0x0($s1)
    ctx->pc = 0x16a6fcu;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_16a700:
    // 0x16a700: 0x2a210020  slti        $at, $s1, 0x20
    ctx->pc = 0x16a700u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
label_16a704:
    // 0x16a704: 0x10200078  beqz        $at, . + 4 + (0x78 << 2)
label_16a708:
    if (ctx->pc == 0x16A708u) {
        ctx->pc = 0x16A708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A704u;
        // 0x16a708: 0x92700000  lbu         $s0, 0x0($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A70Cu;
        goto label_16a70c;
    }
    ctx->pc = 0x16A704u;
    {
        const bool branch_taken_0x16a704 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A704u;
        // 0x16a708: 0x92700000  lbu         $s0, 0x0($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a704) {
            ctx->pc = 0x16A8E8u;
            goto label_16a8e8;
        }
    }
    ctx->pc = 0x16A70Cu;
label_16a70c:
    // 0x16a70c: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16a70cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16a710:
    // 0x16a710: 0x2252804  sllv        $a1, $a1, $s1
    ctx->pc = 0x16a710u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 17) & 0x1F));
label_16a714:
    // 0x16a714: 0x8c241ed8  lw          $a0, 0x1ED8($at)
    ctx->pc = 0x16a714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7896)));
label_16a718:
    // 0x16a718: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x16a718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_16a71c:
    // 0x16a71c: 0x14600073  bnez        $v1, . + 4 + (0x73 << 2)
label_16a720:
    if (ctx->pc == 0x16A720u) {
        ctx->pc = 0x16A720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A71Cu;
        // 0x16a720: 0x27838190  addiu       $v1, $gp, -0x7E70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934928));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A724u;
        goto label_16a724;
    }
    ctx->pc = 0x16A71Cu;
    {
        const bool branch_taken_0x16a71c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A71Cu;
        // 0x16a720: 0x27838190  addiu       $v1, $gp, -0x7E70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934928));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a71c) {
            ctx->pc = 0x16A8ECu;
            goto label_16a8ec;
        }
    }
    ctx->pc = 0x16A724u;
label_16a724:
    // 0x16a724: 0x8f83817c  lw          $v1, -0x7E84($gp)
    ctx->pc = 0x16a724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934908)));
label_16a728:
    // 0x16a728: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x16a728u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_16a72c:
    // 0x16a72c: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16a72cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
label_16a730:
    // 0x16a730: 0x1060006d  beqz        $v1, . + 4 + (0x6D << 2)
label_16a734:
    if (ctx->pc == 0x16A734u) {
        ctx->pc = 0x16A734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A730u;
        // 0x16a734: 0xac241ed8  sw          $a0, 0x1ED8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7896), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A738u;
        goto label_16a738;
    }
    ctx->pc = 0x16A730u;
    {
        const bool branch_taken_0x16a730 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A730u;
        // 0x16a734: 0xac241ed8  sw          $a0, 0x1ED8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7896), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a730) {
            ctx->pc = 0x16A8E8u;
            goto label_16a8e8;
        }
    }
    ctx->pc = 0x16A738u;
label_16a738:
    // 0x16a738: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16a738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16a73c:
    // 0x16a73c: 0x2c63007f  sltiu       $v1, $v1, 0x7F
    ctx->pc = 0x16a73cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
label_16a740:
    // 0x16a740: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_16a744:
    if (ctx->pc == 0x16A744u) {
        ctx->pc = 0x16A744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A740u;
        // 0x16a744: 0x112b80  sll         $a1, $s1, 14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A748u;
        goto label_16a748;
    }
    ctx->pc = 0x16A740u;
    {
        const bool branch_taken_0x16a740 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A740u;
        // 0x16a744: 0x112b80  sll         $a1, $s1, 14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a740) {
            ctx->pc = 0x16A770u;
            goto label_16a770;
        }
    }
    ctx->pc = 0x16A748u;
label_16a748:
    // 0x16a748: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16a748u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16a74c:
    // 0x16a74c: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16a74cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_16a750:
    // 0x16a750: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16a750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16a754:
    // 0x16a754: 0xc08d61c  jal         func_235870
label_16a758:
    if (ctx->pc == 0x16A758u) {
        ctx->pc = 0x16A758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A754u;
        // 0x16a758: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A75Cu;
        goto label_16a75c;
    }
    ctx->pc = 0x16A754u;
    SET_GPR_U32(ctx, 31, 0x16A75Cu);
    ctx->pc = 0x16A758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A754u;
    // 0x16a758: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    { ctx->pc = 0x235870; return; }
    ctx->pc = 0x16A75Cu;
label_16a75c:
    // 0x16a75c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16a75cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16a760:
    // 0x16a760: 0x1043fff9  beq         $v0, $v1, . + 4 + (-0x7 << 2)
label_16a764:
    if (ctx->pc == 0x16A764u) {
        ctx->pc = 0x16A768u;
        goto label_16a768;
    }
    ctx->pc = 0x16A760u;
    {
        const bool branch_taken_0x16a760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16a760) {
            ctx->pc = 0x16A748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16a748;
        }
    }
    ctx->pc = 0x16A768u;
label_16a768:
    // 0x16a768: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16a768u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_16a76c:
    // 0x16a76c: 0x112b80  sll         $a1, $s1, 14
    ctx->pc = 0x16a76cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 14));
label_16a770:
    // 0x16a770: 0x3c036000  lui         $v1, 0x6000
    ctx->pc = 0x16a770u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24576 << 16));
label_16a774:
    // 0x16a774: 0x321000ff  andi        $s0, $s0, 0xFF
    ctx->pc = 0x16a774u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_16a778:
    // 0x16a778: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x16a778u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_16a77c:
    // 0x16a77c: 0x1021c0  sll         $a0, $s0, 7
    ctx->pc = 0x16a77cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 7));
label_16a780:
    // 0x16a780: 0x3c038600  lui         $v1, 0x8600
    ctx->pc = 0x16a780u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34304 << 16));
label_16a784:
    // 0x16a784: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x16a784u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_16a788:
    // 0x16a788: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x16a788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_16a78c:
    // 0x16a78c: 0x832825  or          $a1, $a0, $v1
    ctx->pc = 0x16a78cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_16a790:
    // 0x16a790: 0x8f848710  lw          $a0, -0x78F0($gp)
    ctx->pc = 0x16a790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16a794:
    // 0x16a794: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x16a794u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_16a798:
    // 0x16a798: 0x24633ef0  addiu       $v1, $v1, 0x3EF0
    ctx->pc = 0x16a798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16112));
label_16a79c:
    // 0x16a79c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16a79cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16a7a0:
    // 0x16a7a0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16a7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16a7a4:
    // 0x16a7a4: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x16a7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_16a7a8:
    // 0x16a7a8: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16a7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16a7ac:
    // 0x16a7ac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16a7acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_16a7b0:
    // 0x16a7b0: 0xaf838710  sw          $v1, -0x78F0($gp)
    ctx->pc = 0x16a7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
label_16a7b4:
    // 0x16a7b4: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16a7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16a7b8:
    // 0x16a7b8: 0x2c63007f  sltiu       $v1, $v1, 0x7F
    ctx->pc = 0x16a7b8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
label_16a7bc:
    // 0x16a7bc: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_16a7c0:
    if (ctx->pc == 0x16A7C0u) {
        ctx->pc = 0x16A7C4u;
        goto label_16a7c4;
    }
    ctx->pc = 0x16A7BCu;
    {
        const bool branch_taken_0x16a7bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16a7bc) {
            ctx->pc = 0x16A7E8u;
            goto label_16a7e8;
        }
    }
    ctx->pc = 0x16A7C4u;
label_16a7c4:
    // 0x16a7c4: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16a7c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16a7c8:
    // 0x16a7c8: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16a7c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_16a7cc:
    // 0x16a7cc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16a7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16a7d0:
    // 0x16a7d0: 0xc08d61c  jal         func_235870
label_16a7d4:
    if (ctx->pc == 0x16A7D4u) {
        ctx->pc = 0x16A7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A7D0u;
        // 0x16a7d4: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A7D8u;
        goto label_16a7d8;
    }
    ctx->pc = 0x16A7D0u;
    SET_GPR_U32(ctx, 31, 0x16A7D8u);
    ctx->pc = 0x16A7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A7D0u;
    // 0x16a7d4: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    { ctx->pc = 0x235870; return; }
    ctx->pc = 0x16A7D8u;
label_16a7d8:
    // 0x16a7d8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16a7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16a7dc:
    // 0x16a7dc: 0x1043fff9  beq         $v0, $v1, . + 4 + (-0x7 << 2)
label_16a7e0:
    if (ctx->pc == 0x16A7E0u) {
        ctx->pc = 0x16A7E4u;
        goto label_16a7e4;
    }
    ctx->pc = 0x16A7DCu;
    {
        const bool branch_taken_0x16a7dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16a7dc) {
            ctx->pc = 0x16A7C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16a7c4;
        }
    }
    ctx->pc = 0x16A7E4u;
label_16a7e4:
    // 0x16a7e4: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16a7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_16a7e8:
    // 0x16a7e8: 0x1189c0  sll         $s1, $s1, 7
    ctx->pc = 0x16a7e8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 7));
label_16a7ec:
    // 0x16a7ec: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x16a7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
label_16a7f0:
    // 0x16a7f0: 0x2232025  or          $a0, $s1, $v1
    ctx->pc = 0x16a7f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
label_16a7f4:
    // 0x16a7f4: 0x2048025  or          $s0, $s0, $a0
    ctx->pc = 0x16a7f4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
label_16a7f8:
    // 0x16a7f8: 0x3c034600  lui         $v1, 0x4600
    ctx->pc = 0x16a7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17920 << 16));
label_16a7fc:
    // 0x16a7fc: 0x8f848710  lw          $a0, -0x78F0($gp)
    ctx->pc = 0x16a7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16a800:
    // 0x16a800: 0x2032825  or          $a1, $s0, $v1
    ctx->pc = 0x16a800u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
label_16a804:
    // 0x16a804: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x16a804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_16a808:
    // 0x16a808: 0x24633ef0  addiu       $v1, $v1, 0x3EF0
    ctx->pc = 0x16a808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16112));
label_16a80c:
    // 0x16a80c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16a80cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16a810:
    // 0x16a810: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16a810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16a814:
    // 0x16a814: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x16a814u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_16a818:
    // 0x16a818: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16a818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16a81c:
    // 0x16a81c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16a81cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_16a820:
    // 0x16a820: 0xaf838710  sw          $v1, -0x78F0($gp)
    ctx->pc = 0x16a820u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
label_16a824:
    // 0x16a824: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16a824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16a828:
    // 0x16a828: 0x2c63007f  sltiu       $v1, $v1, 0x7F
    ctx->pc = 0x16a828u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
label_16a82c:
    // 0x16a82c: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_16a830:
    if (ctx->pc == 0x16A830u) {
        ctx->pc = 0x16A834u;
        goto label_16a834;
    }
    ctx->pc = 0x16A82Cu;
    {
        const bool branch_taken_0x16a82c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16a82c) {
            ctx->pc = 0x16A858u;
            goto label_16a858;
        }
    }
    ctx->pc = 0x16A834u;
label_16a834:
    // 0x16a834: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16a834u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16a838:
    // 0x16a838: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16a838u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_16a83c:
    // 0x16a83c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16a83cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16a840:
    // 0x16a840: 0xc08d61c  jal         func_235870
label_16a844:
    if (ctx->pc == 0x16A844u) {
        ctx->pc = 0x16A844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A840u;
        // 0x16a844: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A848u;
        goto label_16a848;
    }
    ctx->pc = 0x16A840u;
    SET_GPR_U32(ctx, 31, 0x16A848u);
    ctx->pc = 0x16A844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A840u;
    // 0x16a844: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    { ctx->pc = 0x235870; return; }
    ctx->pc = 0x16A848u;
label_16a848:
    // 0x16a848: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16a848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16a84c:
    // 0x16a84c: 0x1043fff9  beq         $v0, $v1, . + 4 + (-0x7 << 2)
label_16a850:
    if (ctx->pc == 0x16A850u) {
        ctx->pc = 0x16A854u;
        goto label_16a854;
    }
    ctx->pc = 0x16A84Cu;
    {
        const bool branch_taken_0x16a84c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16a84c) {
            ctx->pc = 0x16A834u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16a834;
        }
    }
    ctx->pc = 0x16A854u;
label_16a854:
    // 0x16a854: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16a854u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_16a858:
    // 0x16a858: 0x8f848710  lw          $a0, -0x78F0($gp)
    ctx->pc = 0x16a858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16a85c:
    // 0x16a85c: 0x3c03660f  lui         $v1, 0x660F
    ctx->pc = 0x16a85cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26127 << 16));
label_16a860:
    // 0x16a860: 0x34650040  ori         $a1, $v1, 0x40
    ctx->pc = 0x16a860u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_16a864:
    // 0x16a864: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x16a864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_16a868:
    // 0x16a868: 0x2252825  or          $a1, $s1, $a1
    ctx->pc = 0x16a868u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | GPR_U64(ctx, 5));
label_16a86c:
    // 0x16a86c: 0x24633ef0  addiu       $v1, $v1, 0x3EF0
    ctx->pc = 0x16a86cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16112));
label_16a870:
    // 0x16a870: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16a870u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16a874:
    // 0x16a874: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16a874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16a878:
    // 0x16a878: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x16a878u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_16a87c:
    // 0x16a87c: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16a87cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16a880:
    // 0x16a880: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16a880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_16a884:
    // 0x16a884: 0xaf838710  sw          $v1, -0x78F0($gp)
    ctx->pc = 0x16a884u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
label_16a888:
    // 0x16a888: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16a888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16a88c:
    // 0x16a88c: 0x2c63007f  sltiu       $v1, $v1, 0x7F
    ctx->pc = 0x16a88cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
label_16a890:
    // 0x16a890: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_16a894:
    if (ctx->pc == 0x16A894u) {
        ctx->pc = 0x16A898u;
        goto label_16a898;
    }
    ctx->pc = 0x16A890u;
    {
        const bool branch_taken_0x16a890 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16a890) {
            ctx->pc = 0x16A8BCu;
            goto label_16a8bc;
        }
    }
    ctx->pc = 0x16A898u;
label_16a898:
    // 0x16a898: 0x8f858710  lw          $a1, -0x78F0($gp)
    ctx->pc = 0x16a898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16a89c:
    // 0x16a89c: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x16a89cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_16a8a0:
    // 0x16a8a0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x16a8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16a8a4:
    // 0x16a8a4: 0xc08d61c  jal         func_235870
label_16a8a8:
    if (ctx->pc == 0x16A8A8u) {
        ctx->pc = 0x16A8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A8A4u;
        // 0x16a8a8: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16A8ACu;
        goto label_16a8ac;
    }
    ctx->pc = 0x16A8A4u;
    SET_GPR_U32(ctx, 31, 0x16A8ACu);
    ctx->pc = 0x16A8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A8A4u;
    // 0x16a8a8: 0x24c63ef0  addiu       $a2, $a2, 0x3EF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235870u;
    { ctx->pc = 0x235870; return; }
    ctx->pc = 0x16A8ACu;
label_16a8ac:
    // 0x16a8ac: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16a8acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_16a8b0:
    // 0x16a8b0: 0x1043fff9  beq         $v0, $v1, . + 4 + (-0x7 << 2)
label_16a8b4:
    if (ctx->pc == 0x16A8B4u) {
        ctx->pc = 0x16A8B8u;
        goto label_16a8b8;
    }
    ctx->pc = 0x16A8B0u;
    {
        const bool branch_taken_0x16a8b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16a8b0) {
            ctx->pc = 0x16A898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16a898;
        }
    }
    ctx->pc = 0x16A8B8u;
label_16a8b8:
    // 0x16a8b8: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x16a8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_16a8bc:
    // 0x16a8bc: 0x8f848710  lw          $a0, -0x78F0($gp)
    ctx->pc = 0x16a8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16a8c0:
    // 0x16a8c0: 0x3c035600  lui         $v1, 0x5600
    ctx->pc = 0x16a8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22016 << 16));
label_16a8c4:
    // 0x16a8c4: 0x2032825  or          $a1, $s0, $v1
    ctx->pc = 0x16a8c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
label_16a8c8:
    // 0x16a8c8: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x16a8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_16a8cc:
    // 0x16a8cc: 0x24633ef0  addiu       $v1, $v1, 0x3EF0
    ctx->pc = 0x16a8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16112));
label_16a8d0:
    // 0x16a8d0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16a8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_16a8d4:
    // 0x16a8d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16a8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_16a8d8:
    // 0x16a8d8: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x16a8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_16a8dc:
    // 0x16a8dc: 0x8f838710  lw          $v1, -0x78F0($gp)
    ctx->pc = 0x16a8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936336)));
label_16a8e0:
    // 0x16a8e0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16a8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_16a8e4:
    // 0x16a8e4: 0xaf838710  sw          $v1, -0x78F0($gp)
    ctx->pc = 0x16a8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 3));
label_16a8e8:
    // 0x16a8e8: 0x27838190  addiu       $v1, $gp, -0x7E70
    ctx->pc = 0x16a8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934928));
label_16a8ec:
    // 0x16a8ec: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x16a8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->pc = 0x16a8f0u;
    return;
}

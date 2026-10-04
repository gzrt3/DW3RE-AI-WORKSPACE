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


void FUN_0019b5e8_part326(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x23a0f8u: goto label_23a0f8;
        case 0x23a0fcu: goto label_23a0fc;
        case 0x23a100u: goto label_23a100;
        case 0x23a104u: goto label_23a104;
        case 0x23a108u: goto label_23a108;
        case 0x23a10cu: goto label_23a10c;
        case 0x23a110u: goto label_23a110;
        case 0x23a114u: goto label_23a114;
        case 0x23a118u: goto label_23a118;
        case 0x23a11cu: goto label_23a11c;
        case 0x23a120u: goto label_23a120;
        case 0x23a124u: goto label_23a124;
        case 0x23a128u: goto label_23a128;
        case 0x23a12cu: goto label_23a12c;
        case 0x23a130u: goto label_23a130;
        case 0x23a134u: goto label_23a134;
        case 0x23a138u: goto label_23a138;
        case 0x23a13cu: goto label_23a13c;
        case 0x23a140u: goto label_23a140;
        case 0x23a144u: goto label_23a144;
        case 0x23a148u: goto label_23a148;
        case 0x23a14cu: goto label_23a14c;
        case 0x23a150u: goto label_23a150;
        case 0x23a154u: goto label_23a154;
        case 0x23a158u: goto label_23a158;
        case 0x23a15cu: goto label_23a15c;
        case 0x23a160u: goto label_23a160;
        case 0x23a164u: goto label_23a164;
        case 0x23a168u: goto label_23a168;
        case 0x23a16cu: goto label_23a16c;
        case 0x23a170u: goto label_23a170;
        case 0x23a174u: goto label_23a174;
        case 0x23a178u: goto label_23a178;
        case 0x23a17cu: goto label_23a17c;
        case 0x23a180u: goto label_23a180;
        case 0x23a184u: goto label_23a184;
        case 0x23a188u: goto label_23a188;
        case 0x23a18cu: goto label_23a18c;
        case 0x23a190u: goto label_23a190;
        case 0x23a194u: goto label_23a194;
        case 0x23a198u: goto label_23a198;
        case 0x23a19cu: goto label_23a19c;
        case 0x23a1a0u: goto label_23a1a0;
        case 0x23a1a4u: goto label_23a1a4;
        case 0x23a1a8u: goto label_23a1a8;
        case 0x23a1acu: goto label_23a1ac;
        case 0x23a1b0u: goto label_23a1b0;
        case 0x23a1b4u: goto label_23a1b4;
        case 0x23a1b8u: goto label_23a1b8;
        case 0x23a1bcu: goto label_23a1bc;
        case 0x23a1c0u: goto label_23a1c0;
        case 0x23a1c4u: goto label_23a1c4;
        case 0x23a1c8u: goto label_23a1c8;
        case 0x23a1ccu: goto label_23a1cc;
        case 0x23a1d0u: goto label_23a1d0;
        case 0x23a1d4u: goto label_23a1d4;
        case 0x23a1d8u: goto label_23a1d8;
        case 0x23a1dcu: goto label_23a1dc;
        case 0x23a1e0u: goto label_23a1e0;
        case 0x23a1e4u: goto label_23a1e4;
        case 0x23a1e8u: goto label_23a1e8;
        case 0x23a1ecu: goto label_23a1ec;
        case 0x23a1f0u: goto label_23a1f0;
        case 0x23a1f4u: goto label_23a1f4;
        case 0x23a1f8u: goto label_23a1f8;
        case 0x23a1fcu: goto label_23a1fc;
        case 0x23a200u: goto label_23a200;
        case 0x23a204u: goto label_23a204;
        case 0x23a208u: goto label_23a208;
        case 0x23a20cu: goto label_23a20c;
        case 0x23a210u: goto label_23a210;
        case 0x23a214u: goto label_23a214;
        case 0x23a218u: goto label_23a218;
        case 0x23a21cu: goto label_23a21c;
        case 0x23a220u: goto label_23a220;
        case 0x23a224u: goto label_23a224;
        case 0x23a228u: goto label_23a228;
        case 0x23a22cu: goto label_23a22c;
        case 0x23a230u: goto label_23a230;
        case 0x23a234u: goto label_23a234;
        case 0x23a238u: goto label_23a238;
        case 0x23a23cu: goto label_23a23c;
        case 0x23a240u: goto label_23a240;
        case 0x23a244u: goto label_23a244;
        case 0x23a248u: goto label_23a248;
        case 0x23a24cu: goto label_23a24c;
        case 0x23a250u: goto label_23a250;
        case 0x23a254u: goto label_23a254;
        case 0x23a258u: goto label_23a258;
        case 0x23a25cu: goto label_23a25c;
        case 0x23a260u: goto label_23a260;
        case 0x23a264u: goto label_23a264;
        case 0x23a268u: goto label_23a268;
        case 0x23a26cu: goto label_23a26c;
        case 0x23a270u: goto label_23a270;
        case 0x23a274u: goto label_23a274;
        case 0x23a278u: goto label_23a278;
        case 0x23a27cu: goto label_23a27c;
        case 0x23a280u: goto label_23a280;
        case 0x23a284u: goto label_23a284;
        case 0x23a288u: goto label_23a288;
        case 0x23a28cu: goto label_23a28c;
        case 0x23a290u: goto label_23a290;
        case 0x23a294u: goto label_23a294;
        case 0x23a298u: goto label_23a298;
        case 0x23a29cu: goto label_23a29c;
        case 0x23a2a0u: goto label_23a2a0;
        case 0x23a2a4u: goto label_23a2a4;
        case 0x23a2a8u: goto label_23a2a8;
        case 0x23a2acu: goto label_23a2ac;
        case 0x23a2b0u: goto label_23a2b0;
        case 0x23a2b4u: goto label_23a2b4;
        case 0x23a2b8u: goto label_23a2b8;
        case 0x23a2bcu: goto label_23a2bc;
        case 0x23a2c0u: goto label_23a2c0;
        case 0x23a2c4u: goto label_23a2c4;
        case 0x23a2c8u: goto label_23a2c8;
        case 0x23a2ccu: goto label_23a2cc;
        case 0x23a2d0u: goto label_23a2d0;
        case 0x23a2d4u: goto label_23a2d4;
        case 0x23a2d8u: goto label_23a2d8;
        case 0x23a2dcu: goto label_23a2dc;
        case 0x23a2e0u: goto label_23a2e0;
        case 0x23a2e4u: goto label_23a2e4;
        case 0x23a2e8u: goto label_23a2e8;
        case 0x23a2ecu: goto label_23a2ec;
        case 0x23a2f0u: goto label_23a2f0;
        case 0x23a2f4u: goto label_23a2f4;
        case 0x23a2f8u: goto label_23a2f8;
        case 0x23a2fcu: goto label_23a2fc;
        case 0x23a300u: goto label_23a300;
        case 0x23a304u: goto label_23a304;
        case 0x23a308u: goto label_23a308;
        case 0x23a30cu: goto label_23a30c;
        case 0x23a310u: goto label_23a310;
        case 0x23a314u: goto label_23a314;
        case 0x23a318u: goto label_23a318;
        case 0x23a31cu: goto label_23a31c;
        case 0x23a320u: goto label_23a320;
        case 0x23a324u: goto label_23a324;
        case 0x23a328u: goto label_23a328;
        case 0x23a32cu: goto label_23a32c;
        case 0x23a330u: goto label_23a330;
        case 0x23a334u: goto label_23a334;
        case 0x23a338u: goto label_23a338;
        case 0x23a33cu: goto label_23a33c;
        case 0x23a340u: goto label_23a340;
        case 0x23a344u: goto label_23a344;
        case 0x23a348u: goto label_23a348;
        case 0x23a34cu: goto label_23a34c;
        case 0x23a350u: goto label_23a350;
        case 0x23a354u: goto label_23a354;
        case 0x23a358u: goto label_23a358;
        case 0x23a35cu: goto label_23a35c;
        case 0x23a360u: goto label_23a360;
        case 0x23a364u: goto label_23a364;
        case 0x23a368u: goto label_23a368;
        case 0x23a36cu: goto label_23a36c;
        case 0x23a370u: goto label_23a370;
        case 0x23a374u: goto label_23a374;
        case 0x23a378u: goto label_23a378;
        case 0x23a37cu: goto label_23a37c;
        case 0x23a380u: goto label_23a380;
        case 0x23a384u: goto label_23a384;
        case 0x23a388u: goto label_23a388;
        case 0x23a38cu: goto label_23a38c;
        case 0x23a390u: goto label_23a390;
        case 0x23a394u: goto label_23a394;
        case 0x23a398u: goto label_23a398;
        case 0x23a39cu: goto label_23a39c;
        case 0x23a3a0u: goto label_23a3a0;
        case 0x23a3a4u: goto label_23a3a4;
        case 0x23a3a8u: goto label_23a3a8;
        case 0x23a3acu: goto label_23a3ac;
        case 0x23a3b0u: goto label_23a3b0;
        case 0x23a3b4u: goto label_23a3b4;
        case 0x23a3b8u: goto label_23a3b8;
        case 0x23a3bcu: goto label_23a3bc;
        case 0x23a3c0u: goto label_23a3c0;
        case 0x23a3c4u: goto label_23a3c4;
        case 0x23a3c8u: goto label_23a3c8;
        case 0x23a3ccu: goto label_23a3cc;
        case 0x23a3d0u: goto label_23a3d0;
        case 0x23a3d4u: goto label_23a3d4;
        case 0x23a3d8u: goto label_23a3d8;
        case 0x23a3dcu: goto label_23a3dc;
        case 0x23a3e0u: goto label_23a3e0;
        case 0x23a3e4u: goto label_23a3e4;
        case 0x23a3e8u: goto label_23a3e8;
        case 0x23a3ecu: goto label_23a3ec;
        case 0x23a3f0u: goto label_23a3f0;
        case 0x23a3f4u: goto label_23a3f4;
        case 0x23a3f8u: goto label_23a3f8;
        case 0x23a3fcu: goto label_23a3fc;
        case 0x23a400u: goto label_23a400;
        case 0x23a404u: goto label_23a404;
        case 0x23a408u: goto label_23a408;
        case 0x23a40cu: goto label_23a40c;
        case 0x23a410u: goto label_23a410;
        case 0x23a414u: goto label_23a414;
        case 0x23a418u: goto label_23a418;
        case 0x23a41cu: goto label_23a41c;
        case 0x23a420u: goto label_23a420;
        case 0x23a424u: goto label_23a424;
        case 0x23a428u: goto label_23a428;
        case 0x23a42cu: goto label_23a42c;
        case 0x23a430u: goto label_23a430;
        case 0x23a434u: goto label_23a434;
        case 0x23a438u: goto label_23a438;
        case 0x23a43cu: goto label_23a43c;
        case 0x23a440u: goto label_23a440;
        case 0x23a444u: goto label_23a444;
        case 0x23a448u: goto label_23a448;
        case 0x23a44cu: goto label_23a44c;
        case 0x23a450u: goto label_23a450;
        case 0x23a454u: goto label_23a454;
        case 0x23a458u: goto label_23a458;
        case 0x23a45cu: goto label_23a45c;
        case 0x23a460u: goto label_23a460;
        case 0x23a464u: goto label_23a464;
        case 0x23a468u: goto label_23a468;
        case 0x23a46cu: goto label_23a46c;
        case 0x23a470u: goto label_23a470;
        case 0x23a474u: goto label_23a474;
        case 0x23a478u: goto label_23a478;
        case 0x23a47cu: goto label_23a47c;
        case 0x23a480u: goto label_23a480;
        case 0x23a484u: goto label_23a484;
        case 0x23a488u: goto label_23a488;
        case 0x23a48cu: goto label_23a48c;
        case 0x23a490u: goto label_23a490;
        case 0x23a494u: goto label_23a494;
        case 0x23a498u: goto label_23a498;
        case 0x23a49cu: goto label_23a49c;
        case 0x23a4a0u: goto label_23a4a0;
        case 0x23a4a4u: goto label_23a4a4;
        case 0x23a4a8u: goto label_23a4a8;
        case 0x23a4acu: goto label_23a4ac;
        case 0x23a4b0u: goto label_23a4b0;
        case 0x23a4b4u: goto label_23a4b4;
        case 0x23a4b8u: goto label_23a4b8;
        case 0x23a4bcu: goto label_23a4bc;
        case 0x23a4c0u: goto label_23a4c0;
        case 0x23a4c4u: goto label_23a4c4;
        case 0x23a4c8u: goto label_23a4c8;
        case 0x23a4ccu: goto label_23a4cc;
        case 0x23a4d0u: goto label_23a4d0;
        case 0x23a4d4u: goto label_23a4d4;
        case 0x23a4d8u: goto label_23a4d8;
        case 0x23a4dcu: goto label_23a4dc;
        case 0x23a4e0u: goto label_23a4e0;
        case 0x23a4e4u: goto label_23a4e4;
        case 0x23a4e8u: goto label_23a4e8;
        case 0x23a4ecu: goto label_23a4ec;
        case 0x23a4f0u: goto label_23a4f0;
        case 0x23a4f4u: goto label_23a4f4;
        case 0x23a4f8u: goto label_23a4f8;
        case 0x23a4fcu: goto label_23a4fc;
        case 0x23a500u: goto label_23a500;
        case 0x23a504u: goto label_23a504;
        case 0x23a508u: goto label_23a508;
        case 0x23a50cu: goto label_23a50c;
        case 0x23a510u: goto label_23a510;
        case 0x23a514u: goto label_23a514;
        case 0x23a518u: goto label_23a518;
        case 0x23a51cu: goto label_23a51c;
        case 0x23a520u: goto label_23a520;
        case 0x23a524u: goto label_23a524;
        case 0x23a528u: goto label_23a528;
        case 0x23a52cu: goto label_23a52c;
        case 0x23a530u: goto label_23a530;
        case 0x23a534u: goto label_23a534;
        case 0x23a538u: goto label_23a538;
        case 0x23a53cu: goto label_23a53c;
        case 0x23a540u: goto label_23a540;
        case 0x23a544u: goto label_23a544;
        case 0x23a548u: goto label_23a548;
        case 0x23a54cu: goto label_23a54c;
        case 0x23a550u: goto label_23a550;
        case 0x23a554u: goto label_23a554;
        case 0x23a558u: goto label_23a558;
        case 0x23a55cu: goto label_23a55c;
        case 0x23a560u: goto label_23a560;
        case 0x23a564u: goto label_23a564;
        case 0x23a568u: goto label_23a568;
        case 0x23a56cu: goto label_23a56c;
        case 0x23a570u: goto label_23a570;
        case 0x23a574u: goto label_23a574;
        case 0x23a578u: goto label_23a578;
        case 0x23a57cu: goto label_23a57c;
        case 0x23a580u: goto label_23a580;
        case 0x23a584u: goto label_23a584;
        case 0x23a588u: goto label_23a588;
        case 0x23a58cu: goto label_23a58c;
        case 0x23a590u: goto label_23a590;
        case 0x23a594u: goto label_23a594;
        case 0x23a598u: goto label_23a598;
        case 0x23a59cu: goto label_23a59c;
        case 0x23a5a0u: goto label_23a5a0;
        case 0x23a5a4u: goto label_23a5a4;
        case 0x23a5a8u: goto label_23a5a8;
        case 0x23a5acu: goto label_23a5ac;
        case 0x23a5b0u: goto label_23a5b0;
        case 0x23a5b4u: goto label_23a5b4;
        case 0x23a5b8u: goto label_23a5b8;
        case 0x23a5bcu: goto label_23a5bc;
        case 0x23a5c0u: goto label_23a5c0;
        case 0x23a5c4u: goto label_23a5c4;
        case 0x23a5c8u: goto label_23a5c8;
        case 0x23a5ccu: goto label_23a5cc;
        case 0x23a5d0u: goto label_23a5d0;
        case 0x23a5d4u: goto label_23a5d4;
        case 0x23a5d8u: goto label_23a5d8;
        case 0x23a5dcu: goto label_23a5dc;
        case 0x23a5e0u: goto label_23a5e0;
        case 0x23a5e4u: goto label_23a5e4;
        case 0x23a5e8u: goto label_23a5e8;
        case 0x23a5ecu: goto label_23a5ec;
        case 0x23a5f0u: goto label_23a5f0;
        case 0x23a5f4u: goto label_23a5f4;
        case 0x23a5f8u: goto label_23a5f8;
        case 0x23a5fcu: goto label_23a5fc;
        case 0x23a600u: goto label_23a600;
        case 0x23a604u: goto label_23a604;
        case 0x23a608u: goto label_23a608;
        case 0x23a60cu: goto label_23a60c;
        case 0x23a610u: goto label_23a610;
        case 0x23a614u: goto label_23a614;
        case 0x23a618u: goto label_23a618;
        case 0x23a61cu: goto label_23a61c;
        case 0x23a620u: goto label_23a620;
        case 0x23a624u: goto label_23a624;
        case 0x23a628u: goto label_23a628;
        case 0x23a62cu: goto label_23a62c;
        case 0x23a630u: goto label_23a630;
        case 0x23a634u: goto label_23a634;
        case 0x23a638u: goto label_23a638;
        case 0x23a63cu: goto label_23a63c;
        case 0x23a640u: goto label_23a640;
        case 0x23a644u: goto label_23a644;
        case 0x23a648u: goto label_23a648;
        case 0x23a64cu: goto label_23a64c;
        case 0x23a650u: goto label_23a650;
        case 0x23a654u: goto label_23a654;
        case 0x23a658u: goto label_23a658;
        case 0x23a65cu: goto label_23a65c;
        case 0x23a660u: goto label_23a660;
        case 0x23a664u: goto label_23a664;
        case 0x23a668u: goto label_23a668;
        case 0x23a66cu: goto label_23a66c;
        case 0x23a670u: goto label_23a670;
        case 0x23a674u: goto label_23a674;
        case 0x23a678u: goto label_23a678;
        case 0x23a67cu: goto label_23a67c;
        case 0x23a680u: goto label_23a680;
        case 0x23a684u: goto label_23a684;
        case 0x23a688u: goto label_23a688;
        case 0x23a68cu: goto label_23a68c;
        case 0x23a690u: goto label_23a690;
        case 0x23a694u: goto label_23a694;
        case 0x23a698u: goto label_23a698;
        case 0x23a69cu: goto label_23a69c;
        case 0x23a6a0u: goto label_23a6a0;
        case 0x23a6a4u: goto label_23a6a4;
        case 0x23a6a8u: goto label_23a6a8;
        case 0x23a6acu: goto label_23a6ac;
        case 0x23a6b0u: goto label_23a6b0;
        case 0x23a6b4u: goto label_23a6b4;
        case 0x23a6b8u: goto label_23a6b8;
        case 0x23a6bcu: goto label_23a6bc;
        case 0x23a6c0u: goto label_23a6c0;
        case 0x23a6c4u: goto label_23a6c4;
        case 0x23a6c8u: goto label_23a6c8;
        case 0x23a6ccu: goto label_23a6cc;
        case 0x23a6d0u: goto label_23a6d0;
        case 0x23a6d4u: goto label_23a6d4;
        case 0x23a6d8u: goto label_23a6d8;
        case 0x23a6dcu: goto label_23a6dc;
        case 0x23a6e0u: goto label_23a6e0;
        case 0x23a6e4u: goto label_23a6e4;
        case 0x23a6e8u: goto label_23a6e8;
        case 0x23a6ecu: goto label_23a6ec;
        case 0x23a6f0u: goto label_23a6f0;
        case 0x23a6f4u: goto label_23a6f4;
        case 0x23a6f8u: goto label_23a6f8;
        case 0x23a6fcu: goto label_23a6fc;
        case 0x23a700u: goto label_23a700;
        case 0x23a704u: goto label_23a704;
        case 0x23a708u: goto label_23a708;
        case 0x23a70cu: goto label_23a70c;
        case 0x23a710u: goto label_23a710;
        case 0x23a714u: goto label_23a714;
        case 0x23a718u: goto label_23a718;
        case 0x23a71cu: goto label_23a71c;
        case 0x23a720u: goto label_23a720;
        case 0x23a724u: goto label_23a724;
        case 0x23a728u: goto label_23a728;
        case 0x23a72cu: goto label_23a72c;
        case 0x23a730u: goto label_23a730;
        case 0x23a734u: goto label_23a734;
        case 0x23a738u: goto label_23a738;
        case 0x23a73cu: goto label_23a73c;
        case 0x23a740u: goto label_23a740;
        case 0x23a744u: goto label_23a744;
        case 0x23a748u: goto label_23a748;
        case 0x23a74cu: goto label_23a74c;
        case 0x23a750u: goto label_23a750;
        case 0x23a754u: goto label_23a754;
        case 0x23a758u: goto label_23a758;
        case 0x23a75cu: goto label_23a75c;
        case 0x23a760u: goto label_23a760;
        case 0x23a764u: goto label_23a764;
        case 0x23a768u: goto label_23a768;
        case 0x23a76cu: goto label_23a76c;
        case 0x23a770u: goto label_23a770;
        case 0x23a774u: goto label_23a774;
        case 0x23a778u: goto label_23a778;
        case 0x23a77cu: goto label_23a77c;
        case 0x23a780u: goto label_23a780;
        case 0x23a784u: goto label_23a784;
        case 0x23a788u: goto label_23a788;
        case 0x23a78cu: goto label_23a78c;
        case 0x23a790u: goto label_23a790;
        case 0x23a794u: goto label_23a794;
        case 0x23a798u: goto label_23a798;
        case 0x23a79cu: goto label_23a79c;
        case 0x23a7a0u: goto label_23a7a0;
        case 0x23a7a4u: goto label_23a7a4;
        case 0x23a7a8u: goto label_23a7a8;
        case 0x23a7acu: goto label_23a7ac;
        case 0x23a7b0u: goto label_23a7b0;
        case 0x23a7b4u: goto label_23a7b4;
        case 0x23a7b8u: goto label_23a7b8;
        case 0x23a7bcu: goto label_23a7bc;
        case 0x23a7c0u: goto label_23a7c0;
        case 0x23a7c4u: goto label_23a7c4;
        case 0x23a7c8u: goto label_23a7c8;
        case 0x23a7ccu: goto label_23a7cc;
        case 0x23a7d0u: goto label_23a7d0;
        case 0x23a7d4u: goto label_23a7d4;
        case 0x23a7d8u: goto label_23a7d8;
        case 0x23a7dcu: goto label_23a7dc;
        case 0x23a7e0u: goto label_23a7e0;
        case 0x23a7e4u: goto label_23a7e4;
        case 0x23a7e8u: goto label_23a7e8;
        case 0x23a7ecu: goto label_23a7ec;
        case 0x23a7f0u: goto label_23a7f0;
        case 0x23a7f4u: goto label_23a7f4;
        case 0x23a7f8u: goto label_23a7f8;
        case 0x23a7fcu: goto label_23a7fc;
        case 0x23a800u: goto label_23a800;
        case 0x23a804u: goto label_23a804;
        case 0x23a808u: goto label_23a808;
        case 0x23a80cu: goto label_23a80c;
        case 0x23a810u: goto label_23a810;
        case 0x23a814u: goto label_23a814;
        case 0x23a818u: goto label_23a818;
        case 0x23a81cu: goto label_23a81c;
        case 0x23a820u: goto label_23a820;
        case 0x23a824u: goto label_23a824;
        case 0x23a828u: goto label_23a828;
        case 0x23a82cu: goto label_23a82c;
        case 0x23a830u: goto label_23a830;
        case 0x23a834u: goto label_23a834;
        case 0x23a838u: goto label_23a838;
        case 0x23a83cu: goto label_23a83c;
        case 0x23a840u: goto label_23a840;
        case 0x23a844u: goto label_23a844;
        case 0x23a848u: goto label_23a848;
        case 0x23a84cu: goto label_23a84c;
        case 0x23a850u: goto label_23a850;
        case 0x23a854u: goto label_23a854;
        case 0x23a858u: goto label_23a858;
        case 0x23a85cu: goto label_23a85c;
        case 0x23a860u: goto label_23a860;
        case 0x23a864u: goto label_23a864;
        case 0x23a868u: goto label_23a868;
        case 0x23a86cu: goto label_23a86c;
        case 0x23a870u: goto label_23a870;
        case 0x23a874u: goto label_23a874;
        case 0x23a878u: goto label_23a878;
        case 0x23a87cu: goto label_23a87c;
        case 0x23a880u: goto label_23a880;
        case 0x23a884u: goto label_23a884;
        case 0x23a888u: goto label_23a888;
        case 0x23a88cu: goto label_23a88c;
        case 0x23a890u: goto label_23a890;
        case 0x23a894u: goto label_23a894;
        case 0x23a898u: goto label_23a898;
        case 0x23a89cu: goto label_23a89c;
        case 0x23a8a0u: goto label_23a8a0;
        case 0x23a8a4u: goto label_23a8a4;
        case 0x23a8a8u: goto label_23a8a8;
        case 0x23a8acu: goto label_23a8ac;
        case 0x23a8b0u: goto label_23a8b0;
        case 0x23a8b4u: goto label_23a8b4;
        case 0x23a8b8u: goto label_23a8b8;
        case 0x23a8bcu: goto label_23a8bc;
        case 0x23a8c0u: goto label_23a8c0;
        case 0x23a8c4u: goto label_23a8c4;
        default: return;
    }

label_23a0f8:
    // 0x23a0f8: 0x2484fff8  addiu       $a0, $a0, -0x8
    ctx->pc = 0x23a0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
label_23a0fc:
    // 0x23a0fc: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x23a0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_23a100:
    // 0x23a100: 0x0  nop
    ctx->pc = 0x23a100u;
    // NOP
label_23a104:
    // 0x23a104: 0x1044fff6  beq         $v0, $a0, . + 4 + (-0xA << 2)
label_23a108:
    if (ctx->pc == 0x23A108u) {
        ctx->pc = 0x23A108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A104u;
        // 0x23a108: 0x31620003  andi        $v0, $t3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A10Cu;
        goto label_23a10c;
    }
    ctx->pc = 0x23A104u;
    {
        const bool branch_taken_0x23a104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x23A108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A104u;
        // 0x23a108: 0x31620003  andi        $v0, $t3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a104) {
            ctx->pc = 0x23A0E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x23a0e0; return; }
        }
    }
    ctx->pc = 0x23A10Cu;
label_23a10c:
    // 0x23a10c: 0x9da30004  lwu         $v1, 0x4($t5)
    ctx->pc = 0x23a10cu;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 13), 4)));
label_23a110:
    // 0x23a110: 0x94878  dsll        $t1, $t1, 1
    ctx->pc = 0x23a110u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 1);
label_23a114:
    // 0x23a114: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x23a114u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_23a118:
    // 0x23a118: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_23a11c:
    if (ctx->pc == 0x23A11Cu) {
        ctx->pc = 0x23A11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A118u;
        // 0x23a11c: 0x26840828  addiu       $a0, $s4, 0x828 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A120u;
        goto label_23a120;
    }
    ctx->pc = 0x23A118u;
    {
        const bool branch_taken_0x23a118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23a118) {
            ctx->pc = 0x23A11Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A118u;
            // 0x23a11c: 0x26840828  addiu       $a0, $s4, 0x828 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2088));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A164u;
            goto label_23a164;
        }
    }
    ctx->pc = 0x23A120u;
label_23a120:
    // 0x23a120: 0x1120000f  beqz        $t1, . + 4 + (0xF << 2)
label_23a124:
    if (ctx->pc == 0x23A124u) {
        ctx->pc = 0x23A124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A120u;
        // 0x23a124: 0x1231024  and         $v0, $t1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A128u;
        goto label_23a128;
    }
    ctx->pc = 0x23A120u;
    {
        const bool branch_taken_0x23a120 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A120u;
        // 0x23a124: 0x1231024  and         $v0, $t1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a120) {
            ctx->pc = 0x23A160u;
            goto label_23a160;
        }
    }
    ctx->pc = 0x23A128u;
label_23a128:
    // 0x23a128: 0x1440ffc5  bnez        $v0, . + 4 + (-0x3B << 2)
label_23a12c:
    if (ctx->pc == 0x23A12Cu) {
        ctx->pc = 0x23A12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A128u;
        // 0x23a12c: 0xa10c0  sll         $v0, $t2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A130u;
        goto label_23a130;
    }
    ctx->pc = 0x23A128u;
    {
        const bool branch_taken_0x23a128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A128u;
        // 0x23a12c: 0xa10c0  sll         $v0, $t2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a128) {
            ctx->pc = 0x23A040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x23a040; return; }
        }
    }
    ctx->pc = 0x23A130u;
label_23a130:
    // 0x23a130: 0x9e430004  lwu         $v1, 0x4($s2)
    ctx->pc = 0x23a130u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_23a134:
    // 0x23a134: 0x0  nop
    ctx->pc = 0x23a134u;
    // NOP
label_23a138:
    // 0x23a138: 0x94878  dsll        $t1, $t1, 1
    ctx->pc = 0x23a138u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 1);
label_23a13c:
    // 0x23a13c: 0x1231024  and         $v0, $t1, $v1
    ctx->pc = 0x23a13cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
label_23a140:
    // 0x23a140: 0x0  nop
    ctx->pc = 0x23a140u;
    // NOP
label_23a144:
    // 0x23a144: 0x0  nop
    ctx->pc = 0x23a144u;
    // NOP
label_23a148:
    // 0x23a148: 0x0  nop
    ctx->pc = 0x23a148u;
    // NOP
label_23a14c:
    // 0x23a14c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
label_23a150:
    if (ctx->pc == 0x23A150u) {
        ctx->pc = 0x23A150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A14Cu;
        // 0x23a150: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A154u;
        goto label_23a154;
    }
    ctx->pc = 0x23A14Cu;
    {
        const bool branch_taken_0x23a14c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A14Cu;
        // 0x23a150: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a14c) {
            ctx->pc = 0x23A138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23a138;
        }
    }
    ctx->pc = 0x23A154u;
label_23a154:
    // 0x23a154: 0x1000ffba  b           . + 4 + (-0x46 << 2)
label_23a158:
    if (ctx->pc == 0x23A158u) {
        ctx->pc = 0x23A158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A154u;
        // 0x23a158: 0xa10c0  sll         $v0, $t2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A15Cu;
        goto label_23a15c;
    }
    ctx->pc = 0x23A154u;
    {
        const bool branch_taken_0x23a154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A154u;
        // 0x23a158: 0xa10c0  sll         $v0, $t2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a154) {
            ctx->pc = 0x23A040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x23a040; return; }
        }
    }
    ctx->pc = 0x23A15Cu;
label_23a15c:
    // 0x23a15c: 0x0  nop
    ctx->pc = 0x23a15cu;
    // NOP
label_23a160:
    // 0x23a160: 0x26840828  addiu       $a0, $s4, 0x828
    ctx->pc = 0x23a160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2088));
label_23a164:
    // 0x23a164: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x23a164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_23a168:
    // 0x23a168: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x23a168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_23a16c:
    // 0x23a16c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x23a16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_23a170:
    // 0x23a170: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x23a170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_23a174:
    // 0x23a174: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x23a174u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_23a178:
    // 0x23a178: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_23a17c:
    if (ctx->pc == 0x23A17Cu) {
        ctx->pc = 0x23A17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A178u;
        // 0x23a17c: 0x711023  subu        $v0, $v1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A180u;
        goto label_23a180;
    }
    ctx->pc = 0x23A178u;
    {
        const bool branch_taken_0x23a178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A178u;
        // 0x23a17c: 0x711023  subu        $v0, $v1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a178) {
            ctx->pc = 0x23A198u;
            goto label_23a198;
        }
    }
    ctx->pc = 0x23A180u;
label_23a180:
    // 0x23a180: 0x2231023  subu        $v0, $s1, $v1
    ctx->pc = 0x23a180u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_23a184:
    // 0x23a184: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23a184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_23a188:
    // 0x23a188: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x23a188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_23a18c:
    // 0x23a18c: 0x10000004  b           . + 4 + (0x4 << 2)
label_23a190:
    if (ctx->pc == 0x23A190u) {
        ctx->pc = 0x23A190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A18Cu;
        // 0x23a190: 0x2402f  dsubu       $t0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A194u;
        goto label_23a194;
    }
    ctx->pc = 0x23A18Cu;
    {
        const bool branch_taken_0x23a18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A18Cu;
        // 0x23a190: 0x2402f  dsubu       $t0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a18c) {
            ctx->pc = 0x23A1A0u;
            goto label_23a1a0;
        }
    }
    ctx->pc = 0x23A194u;
label_23a194:
    // 0x23a194: 0x0  nop
    ctx->pc = 0x23a194u;
    // NOP
label_23a198:
    // 0x23a198: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23a198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_23a19c:
    // 0x23a19c: 0x2403e  dsrl32      $t0, $v0, 0
    ctx->pc = 0x23a19cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) >> (32 + 0));
label_23a1a0:
    // 0x23a1a0: 0x26900828  addiu       $s0, $s4, 0x828
    ctx->pc = 0x23a1a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 2088));
label_23a1a4:
    // 0x23a1a4: 0x2412fffc  addiu       $s2, $zero, -0x4
    ctx->pc = 0x23a1a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_23a1a8:
    // 0x23a1a8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x23a1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_23a1ac:
    // 0x23a1ac: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x23a1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_23a1b0:
    // 0x23a1b0: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x23a1b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
label_23a1b4:
    // 0x23a1b4: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x23a1b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_23a1b8:
    // 0x23a1b8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_23a1bc:
    if (ctx->pc == 0x23A1BCu) {
        ctx->pc = 0x23A1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A1B8u;
        // 0x23a1bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A1C0u;
        goto label_23a1c0;
    }
    ctx->pc = 0x23A1B8u;
    {
        const bool branch_taken_0x23a1b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A1B8u;
        // 0x23a1bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a1b8) {
            ctx->pc = 0x23A1D0u;
            goto label_23a1d0;
        }
    }
    ctx->pc = 0x23A1C0u;
label_23a1c0:
    // 0x23a1c0: 0x29020010  slti        $v0, $t0, 0x10
    ctx->pc = 0x23a1c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)16) ? 1 : 0);
label_23a1c4:
    // 0x23a1c4: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
label_23a1c8:
    if (ctx->pc == 0x23A1C8u) {
        ctx->pc = 0x23A1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A1C4u;
        // 0x23a1c8: 0x26860828  addiu       $a2, $s4, 0x828 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 2088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A1CCu;
        goto label_23a1cc;
    }
    ctx->pc = 0x23A1C4u;
    {
        const bool branch_taken_0x23a1c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A1C4u;
        // 0x23a1c8: 0x26860828  addiu       $a2, $s4, 0x828 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 2088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a1c4) {
            ctx->pc = 0x23A2F0u;
            goto label_23a2f0;
        }
    }
    ctx->pc = 0x23A1CCu;
label_23a1cc:
    // 0x23a1cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23a1ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23a1d0:
    // 0x23a1d0: 0xc08e672  jal         func_2399C8
label_23a1d4:
    if (ctx->pc == 0x23A1D4u) {
        ctx->pc = 0x23A1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A1D0u;
        // 0x23a1d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A1D8u;
        goto label_23a1d8;
    }
    ctx->pc = 0x23A1D0u;
    SET_GPR_U32(ctx, 31, 0x23A1D8u);
    ctx->pc = 0x23A1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A1D0u;
    // 0x23a1d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2399C8u;
    { ctx->pc = 0x2399c8; return; }
    ctx->pc = 0x23A1D8u;
label_23a1d8:
    // 0x23a1d8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x23a1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_23a1dc:
    // 0x23a1dc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x23a1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_23a1e0:
    // 0x23a1e0: 0x721824  and         $v1, $v1, $s2
    ctx->pc = 0x23a1e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
label_23a1e4:
    // 0x23a1e4: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x23a1e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_23a1e8:
    // 0x23a1e8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_23a1ec:
    if (ctx->pc == 0x23A1ECu) {
        ctx->pc = 0x23A1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A1E8u;
        // 0x23a1ec: 0x711023  subu        $v0, $v1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A1F0u;
        goto label_23a1f0;
    }
    ctx->pc = 0x23A1E8u;
    {
        const bool branch_taken_0x23a1e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A1E8u;
        // 0x23a1ec: 0x711023  subu        $v0, $v1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a1e8) {
            ctx->pc = 0x23A208u;
            goto label_23a208;
        }
    }
    ctx->pc = 0x23A1F0u;
label_23a1f0:
    // 0x23a1f0: 0x2231023  subu        $v0, $s1, $v1
    ctx->pc = 0x23a1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_23a1f4:
    // 0x23a1f4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23a1f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_23a1f8:
    // 0x23a1f8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x23a1f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_23a1fc:
    // 0x23a1fc: 0x10000004  b           . + 4 + (0x4 << 2)
label_23a200:
    if (ctx->pc == 0x23A200u) {
        ctx->pc = 0x23A200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A1FCu;
        // 0x23a200: 0x2402f  dsubu       $t0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A204u;
        goto label_23a204;
    }
    ctx->pc = 0x23A1FCu;
    {
        const bool branch_taken_0x23a1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A1FCu;
        // 0x23a200: 0x2402f  dsubu       $t0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a1fc) {
            ctx->pc = 0x23A210u;
            goto label_23a210;
        }
    }
    ctx->pc = 0x23A204u;
label_23a204:
    // 0x23a204: 0x0  nop
    ctx->pc = 0x23a204u;
    // NOP
label_23a208:
    // 0x23a208: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23a208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_23a20c:
    // 0x23a20c: 0x2403e  dsrl32      $t0, $v0, 0
    ctx->pc = 0x23a20cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) >> (32 + 0));
label_23a210:
    // 0x23a210: 0x26840828  addiu       $a0, $s4, 0x828
    ctx->pc = 0x23a210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2088));
label_23a214:
    // 0x23a214: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x23a214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_23a218:
    // 0x23a218: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x23a218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_23a21c:
    // 0x23a21c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x23a21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_23a220:
    // 0x23a220: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x23a220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_23a224:
    // 0x23a224: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x23a224u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_23a228:
    // 0x23a228: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_23a22c:
    if (ctx->pc == 0x23A22Cu) {
        ctx->pc = 0x23A22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A228u;
        // 0x23a22c: 0x29020010  slti        $v0, $t0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A230u;
        goto label_23a230;
    }
    ctx->pc = 0x23A228u;
    {
        const bool branch_taken_0x23a228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A228u;
        // 0x23a22c: 0x29020010  slti        $v0, $t0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a228) {
            ctx->pc = 0x23A238u;
            goto label_23a238;
        }
    }
    ctx->pc = 0x23A230u;
label_23a230:
    // 0x23a230: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
label_23a234:
    if (ctx->pc == 0x23A234u) {
        ctx->pc = 0x23A234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A230u;
        // 0x23a234: 0x26860828  addiu       $a2, $s4, 0x828 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 2088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A238u;
        goto label_23a238;
    }
    ctx->pc = 0x23A230u;
    {
        const bool branch_taken_0x23a230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A230u;
        // 0x23a234: 0x26860828  addiu       $a2, $s4, 0x828 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 2088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a230) {
            ctx->pc = 0x23A2F0u;
            goto label_23a2f0;
        }
    }
    ctx->pc = 0x23A238u;
label_23a238:
    // 0x23a238: 0xc08e9fc  jal         func_23A7F0
label_23a23c:
    if (ctx->pc == 0x23A23Cu) {
        ctx->pc = 0x23A23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A238u;
        // 0x23a23c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A240u;
        goto label_23a240;
    }
    ctx->pc = 0x23A238u;
    SET_GPR_U32(ctx, 31, 0x23A240u);
    ctx->pc = 0x23A23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A238u;
    // 0x23a23c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A7F0u;
    goto label_23a7f0;
    ctx->pc = 0x23A240u;
label_23a240:
    // 0x23a240: 0x10000039  b           . + 4 + (0x39 << 2)
label_23a244:
    if (ctx->pc == 0x23A244u) {
        ctx->pc = 0x23A244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A240u;
        // 0x23a244: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A248u;
        goto label_23a248;
    }
    ctx->pc = 0x23A240u;
    {
        const bool branch_taken_0x23a240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A240u;
        // 0x23a244: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a240) {
            ctx->pc = 0x23A328u;
            goto label_23a328;
        }
    }
    ctx->pc = 0x23A248u;
label_23a248:
    // 0x23a248: 0x8e0b000c  lw          $t3, 0xC($s0)
    ctx->pc = 0x23a248u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_23a24c:
    // 0x23a24c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x23a24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_23a250:
    // 0x23a250: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23a250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23a254:
    // 0x23a254: 0x8e080008  lw          $t0, 0x8($s0)
    ctx->pc = 0x23a254u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_23a258:
    // 0x23a258: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x23a258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_23a25c:
    // 0x23a25c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x23a25cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_23a260:
    // 0x23a260: 0xad0b000c  sw          $t3, 0xC($t0)
    ctx->pc = 0x23a260u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 11));
label_23a264:
    // 0x23a264: 0x1000002d  b           . + 4 + (0x2D << 2)
label_23a268:
    if (ctx->pc == 0x23A268u) {
        ctx->pc = 0x23A268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A264u;
        // 0x23a268: 0xad680008  sw          $t0, 0x8($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A26Cu;
        goto label_23a26c;
    }
    ctx->pc = 0x23A264u;
    {
        const bool branch_taken_0x23a264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A264u;
        // 0x23a268: 0xad680008  sw          $t0, 0x8($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a264) {
            ctx->pc = 0x23A31Cu;
            goto label_23a31c;
        }
    }
    ctx->pc = 0x23A26Cu;
label_23a26c:
    // 0x23a26c: 0x0  nop
    ctx->pc = 0x23a26cu;
    // NOP
label_23a270:
    // 0x23a270: 0x8e0b000c  lw          $t3, 0xC($s0)
    ctx->pc = 0x23a270u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_23a274:
    // 0x23a274: 0x2114821  addu        $t1, $s0, $s1
    ctx->pc = 0x23a274u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_23a278:
    // 0x23a278: 0x8383c  dsll32      $a3, $t0, 0
    ctx->pc = 0x23a278u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) << (32 + 0));
label_23a27c:
    // 0x23a27c: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x23a27cu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
label_23a280:
    // 0x23a280: 0x1031825  or          $v1, $t0, $v1
    ctx->pc = 0x23a280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
label_23a284:
    // 0x23a284: 0x8e080008  lw          $t0, 0x8($s0)
    ctx->pc = 0x23a284u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_23a288:
    // 0x23a288: 0x25e50830  addiu       $a1, $t7, 0x830
    ctx->pc = 0x23a288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 15), 2096));
label_23a28c:
    // 0x23a28c: 0x36220001  ori         $v0, $s1, 0x1
    ctx->pc = 0x23a28cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)1);
label_23a290:
    // 0x23a290: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x23a290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_23a294:
    // 0x23a294: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x23a294u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_23a298:
    // 0x23a298: 0x1273021  addu        $a2, $t1, $a3
    ctx->pc = 0x23a298u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
label_23a29c:
    // 0x23a29c: 0xad0b000c  sw          $t3, 0xC($t0)
    ctx->pc = 0x23a29cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 11));
label_23a2a0:
    // 0x23a2a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23a2a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23a2a4:
    // 0x23a2a4: 0xad680008  sw          $t0, 0x8($t3)
    ctx->pc = 0x23a2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 8));
label_23a2a8:
    // 0x23a2a8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x23a2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_23a2ac:
    // 0x23a2ac: 0xaca9000c  sw          $t1, 0xC($a1)
    ctx->pc = 0x23a2acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 9));
label_23a2b0:
    // 0x23a2b0: 0xaca90008  sw          $t1, 0x8($a1)
    ctx->pc = 0x23a2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 9));
label_23a2b4:
    // 0x23a2b4: 0xad230004  sw          $v1, 0x4($t1)
    ctx->pc = 0x23a2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 3));
label_23a2b8:
    // 0x23a2b8: 0xad250008  sw          $a1, 0x8($t1)
    ctx->pc = 0x23a2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 5));
label_23a2bc:
    // 0x23a2bc: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x23a2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
label_23a2c0:
    // 0x23a2c0: 0x10000016  b           . + 4 + (0x16 << 2)
label_23a2c4:
    if (ctx->pc == 0x23A2C4u) {
        ctx->pc = 0x23A2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A2C0u;
        // 0x23a2c4: 0xad25000c  sw          $a1, 0xC($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A2C8u;
        goto label_23a2c8;
    }
    ctx->pc = 0x23A2C0u;
    {
        const bool branch_taken_0x23a2c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A2C0u;
        // 0x23a2c4: 0xad25000c  sw          $a1, 0xC($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a2c0) {
            ctx->pc = 0x23A31Cu;
            goto label_23a31c;
        }
    }
    ctx->pc = 0x23A2C8u;
label_23a2c8:
    // 0x23a2c8: 0x8e0b000c  lw          $t3, 0xC($s0)
    ctx->pc = 0x23a2c8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_23a2cc:
    // 0x23a2cc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x23a2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_23a2d0:
    // 0x23a2d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23a2d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23a2d4:
    // 0x23a2d4: 0x8e080008  lw          $t0, 0x8($s0)
    ctx->pc = 0x23a2d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_23a2d8:
    // 0x23a2d8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x23a2d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_23a2dc:
    // 0x23a2dc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x23a2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_23a2e0:
    // 0x23a2e0: 0xad0b000c  sw          $t3, 0xC($t0)
    ctx->pc = 0x23a2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 11));
label_23a2e4:
    // 0x23a2e4: 0x1000000d  b           . + 4 + (0xD << 2)
label_23a2e8:
    if (ctx->pc == 0x23A2E8u) {
        ctx->pc = 0x23A2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A2E4u;
        // 0x23a2e8: 0xad680008  sw          $t0, 0x8($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A2ECu;
        goto label_23a2ec;
    }
    ctx->pc = 0x23A2E4u;
    {
        const bool branch_taken_0x23a2e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A2E4u;
        // 0x23a2e8: 0xad680008  sw          $t0, 0x8($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a2e4) {
            ctx->pc = 0x23A31Cu;
            goto label_23a31c;
        }
    }
    ctx->pc = 0x23A2ECu;
label_23a2ec:
    // 0x23a2ec: 0x0  nop
    ctx->pc = 0x23a2ecu;
    // NOP
label_23a2f0:
    // 0x23a2f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23a2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23a2f4:
    // 0x23a2f4: 0x8cd00008  lw          $s0, 0x8($a2)
    ctx->pc = 0x23a2f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_23a2f8:
    // 0x23a2f8: 0x1021025  or          $v0, $t0, $v0
    ctx->pc = 0x23a2f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_23a2fc:
    // 0x23a2fc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23a2fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_23a300:
    // 0x23a300: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x23a300u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_23a304:
    // 0x23a304: 0x36230001  ori         $v1, $s1, 0x1
    ctx->pc = 0x23a304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)1);
label_23a308:
    // 0x23a308: 0x2112821  addu        $a1, $s0, $s1
    ctx->pc = 0x23a308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_23a30c:
    // 0x23a30c: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x23a30cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_23a310:
    // 0x23a310: 0xacc50008  sw          $a1, 0x8($a2)
    ctx->pc = 0x23a310u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
label_23a314:
    // 0x23a314: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23a314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23a318:
    // 0x23a318: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x23a318u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_23a31c:
    // 0x23a31c: 0xc08e9fc  jal         func_23A7F0
label_23a320:
    if (ctx->pc == 0x23A320u) {
        ctx->pc = 0x23A324u;
        goto label_23a324;
    }
    ctx->pc = 0x23A31Cu;
    SET_GPR_U32(ctx, 31, 0x23A324u);
    ctx->pc = 0x23A7F0u;
    goto label_23a7f0;
    ctx->pc = 0x23A324u;
label_23a324:
    // 0x23a324: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x23a324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_23a328:
    // 0x23a328: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23a328u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23a32c:
    // 0x23a32c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23a32cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_23a330:
    // 0x23a330: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23a330u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23a334:
    // 0x23a334: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x23a334u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_23a338:
    // 0x23a338: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x23a338u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23a33c:
    // 0x23a33c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x23a33cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_23a340:
    // 0x23a340: 0x3e00008  jr          $ra
label_23a344:
    if (ctx->pc == 0x23A344u) {
        ctx->pc = 0x23A344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A340u;
        // 0x23a344: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A348u;
        goto label_23a348;
    }
    ctx->pc = 0x23A340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A340u;
        // 0x23a344: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A348u;
label_23a348:
    // 0x23a348: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23a348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_23a34c:
    // 0x23a34c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x23a34cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23a350:
    // 0x23a350: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x23a350u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_23a354:
    // 0x23a354: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_23a358:
    if (ctx->pc == 0x23A358u) {
        ctx->pc = 0x23A358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A354u;
        // 0x23a358: 0xa5180b  movn        $v1, $a1, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A35Cu;
        goto label_23a35c;
    }
    ctx->pc = 0x23A354u;
    {
        const bool branch_taken_0x23a354 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A354u;
        // 0x23a358: 0xa5180b  movn        $v1, $a1, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a354) {
            ctx->pc = 0x23A374u;
            goto label_23a374;
        }
    }
    ctx->pc = 0x23A35Cu;
label_23a35c:
    // 0x23a35c: 0x10e00005  beqz        $a3, . + 4 + (0x5 << 2)
label_23a360:
    if (ctx->pc == 0x23A360u) {
        ctx->pc = 0x23A360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A35Cu;
        // 0x23a360: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A364u;
        goto label_23a364;
    }
    ctx->pc = 0x23A35Cu;
    {
        const bool branch_taken_0x23a35c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A35Cu;
        // 0x23a360: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a35c) {
            ctx->pc = 0x23A374u;
            goto label_23a374;
        }
    }
    ctx->pc = 0x23A364u;
label_23a364:
    // 0x23a364: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x23a364u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_23a368:
    // 0x23a368: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x23a368u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_23a36c:
    // 0x23a36c: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x23a36cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_23a370:
    // 0x23a370: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x23a370u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_23a374:
    // 0x23a374: 0x3e00008  jr          $ra
label_23a378:
    if (ctx->pc == 0x23A378u) {
        ctx->pc = 0x23A378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A374u;
        // 0x23a378: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A37Cu;
        goto label_23a37c;
    }
    ctx->pc = 0x23A374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A374u;
        // 0x23a378: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A37Cu;
label_23a37c:
    // 0x23a37c: 0x0  nop
    ctx->pc = 0x23a37cu;
    // NOP
label_23a380:
    // 0x23a380: 0x2cc20010  sltiu       $v0, $a2, 0x10
    ctx->pc = 0x23a380u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_23a384:
    // 0x23a384: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
label_23a388:
    if (ctx->pc == 0x23A388u) {
        ctx->pc = 0x23A388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A384u;
        // 0x23a388: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A38Cu;
        goto label_23a38c;
    }
    ctx->pc = 0x23A384u;
    {
        const bool branch_taken_0x23a384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A384u;
        // 0x23a388: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a384) {
            ctx->pc = 0x23A420u;
            goto label_23a420;
        }
    }
    ctx->pc = 0x23A38Cu;
label_23a38c:
    // 0x23a38c: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x23a38cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
label_23a390:
    // 0x23a390: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
label_23a394:
    if (ctx->pc == 0x23A394u) {
        ctx->pc = 0x23A394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A390u;
        // 0x23a394: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A398u;
        goto label_23a398;
    }
    ctx->pc = 0x23A390u;
    {
        const bool branch_taken_0x23a390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A390u;
        // 0x23a394: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a390) {
            ctx->pc = 0x23A420u;
            goto label_23a420;
        }
    }
    ctx->pc = 0x23A398u;
label_23a398:
    // 0x23a398: 0x51a38  dsll        $v1, $a1, 8
    ctx->pc = 0x23a398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << 8);
label_23a39c:
    // 0x23a39c: 0x3c020101  lui         $v0, 0x101
    ctx->pc = 0x23a39cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)257 << 16));
label_23a3a0:
    // 0x23a3a0: 0x34420101  ori         $v0, $v0, 0x101
    ctx->pc = 0x23a3a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)257);
label_23a3a4:
    // 0x23a3a4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x23a3a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_23a3a8:
    // 0x23a3a8: 0x34420101  ori         $v0, $v0, 0x101
    ctx->pc = 0x23a3a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)257);
label_23a3ac:
    // 0x23a3ac: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x23a3acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_23a3b0:
    // 0x23a3b0: 0x34420101  ori         $v0, $v0, 0x101
    ctx->pc = 0x23a3b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)257);
label_23a3b4:
    // 0x23a3b4: 0x65502d  daddu       $t2, $v1, $a1
    ctx->pc = 0x23a3b4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 5));
label_23a3b8:
    // 0x23a3b8: 0x3c038080  lui         $v1, 0x8080
    ctx->pc = 0x23a3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32896 << 16));
label_23a3bc:
    // 0x23a3bc: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x23a3bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
label_23a3c0:
    // 0x23a3c0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x23a3c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_23a3c4:
    // 0x23a3c4: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x23a3c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
label_23a3c8:
    // 0x23a3c8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x23a3c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_23a3cc:
    // 0x23a3cc: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x23a3ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
label_23a3d0:
    // 0x23a3d0: 0x700a46e9  pcpyh       $t0, $t2
    ctx->pc = 0x23a3d0u;
    { __m128i src = GPR_VEC(ctx, 10); uint16_t l = static_cast<uint16_t>(_mm_extract_epi16(src, 0)); uint16_t h = static_cast<uint16_t>(_mm_extract_epi16(src, 4)); 
   SET_GPR_VEC(ctx, 8, _mm_set_epi16(h,h,h,h, l,l,l,l)); }
label_23a3d4:
    // 0x23a3d4: 0x71084b89  pcpyld      $t1, $t0, $t0
    ctx->pc = 0x23a3d4u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8)));
label_23a3d8:
    // 0x23a3d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23a3d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23a3dc:
    // 0x23a3dc: 0x70634389  pcpyld      $t0, $v1, $v1
    ctx->pc = 0x23a3dcu;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 3)));
label_23a3e0:
    // 0x23a3e0: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x23a3e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_23a3e4:
    // 0x23a3e4: 0x704914c9  pxor        $v0, $v0, $t1
    ctx->pc = 0x23a3e4u;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
label_23a3e8:
    // 0x23a3e8: 0x70845389  pcpyld      $t2, $a0, $a0
    ctx->pc = 0x23a3e8u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 4)));
label_23a3ec:
    // 0x23a3ec: 0x70021ce9  pnor        $v1, $zero, $v0
    ctx->pc = 0x23a3ecu;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
label_23a3f0:
    // 0x23a3f0: 0x704a1248  psubb       $v0, $v0, $t2
    ctx->pc = 0x23a3f0u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
label_23a3f4:
    // 0x23a3f4: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x23a3f4u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_23a3f8:
    // 0x23a3f8: 0x70481489  pand        $v0, $v0, $t0
    ctx->pc = 0x23a3f8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
label_23a3fc:
    // 0x23a3fc: 0x70491ba9  pcpyud      $v1, $v0, $t1
    ctx->pc = 0x23a3fcu;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
label_23a400:
    // 0x23a400: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x23a400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_23a404:
    // 0x23a404: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_23a408:
    if (ctx->pc == 0x23A408u) {
        ctx->pc = 0x23A408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A404u;
        // 0x23a408: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A40Cu;
        goto label_23a40c;
    }
    ctx->pc = 0x23A404u;
    {
        const bool branch_taken_0x23a404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23a404) {
            ctx->pc = 0x23A408u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A404u;
            // 0x23a408: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A420u;
            goto label_23a420;
        }
    }
    ctx->pc = 0x23A40Cu;
label_23a40c:
    // 0x23a40c: 0x24c6fff0  addiu       $a2, $a2, -0x10
    ctx->pc = 0x23a40cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
label_23a410:
    // 0x23a410: 0x2cc20010  sltiu       $v0, $a2, 0x10
    ctx->pc = 0x23a410u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_23a414:
    // 0x23a414: 0x1040fff2  beqz        $v0, . + 4 + (-0xE << 2)
label_23a418:
    if (ctx->pc == 0x23A418u) {
        ctx->pc = 0x23A418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A414u;
        // 0x23a418: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A41Cu;
        goto label_23a41c;
    }
    ctx->pc = 0x23A414u;
    {
        const bool branch_taken_0x23a414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A414u;
        // 0x23a418: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a414) {
            ctx->pc = 0x23A3E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23a3e0;
        }
    }
    ctx->pc = 0x23A41Cu;
label_23a41c:
    // 0x23a41c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x23a41cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_23a420:
    // 0x23a420: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x23a420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_23a424:
    // 0x23a424: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x23a424u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_23a428:
    // 0x23a428: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x23a428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_23a42c:
    // 0x23a42c: 0x10c20008  beq         $a2, $v0, . + 4 + (0x8 << 2)
label_23a430:
    if (ctx->pc == 0x23A430u) {
        ctx->pc = 0x23A434u;
        goto label_23a434;
    }
    ctx->pc = 0x23A42Cu;
    {
        const bool branch_taken_0x23a42c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x23a42c) {
            ctx->pc = 0x23A450u;
            goto label_23a450;
        }
    }
    ctx->pc = 0x23A434u;
label_23a434:
    // 0x23a434: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x23a434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_23a438:
    // 0x23a438: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x23a438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_23a43c:
    // 0x23a43c: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x23a43cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_23a440:
    // 0x23a440: 0x10450005  beq         $v0, $a1, . + 4 + (0x5 << 2)
label_23a444:
    if (ctx->pc == 0x23A444u) {
        ctx->pc = 0x23A444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A440u;
        // 0x23a444: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A448u;
        goto label_23a448;
    }
    ctx->pc = 0x23A440u;
    {
        const bool branch_taken_0x23a440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x23A444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A440u;
        // 0x23a444: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a440) {
            ctx->pc = 0x23A458u;
            goto label_23a458;
        }
    }
    ctx->pc = 0x23A448u;
label_23a448:
    // 0x23a448: 0x14c3fffc  bne         $a2, $v1, . + 4 + (-0x4 << 2)
label_23a44c:
    if (ctx->pc == 0x23A44Cu) {
        ctx->pc = 0x23A44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A448u;
        // 0x23a44c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A450u;
        goto label_23a450;
    }
    ctx->pc = 0x23A448u;
    {
        const bool branch_taken_0x23a448 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x23A44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A448u;
        // 0x23a44c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a448) {
            ctx->pc = 0x23A43Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23a43c;
        }
    }
    ctx->pc = 0x23A450u;
label_23a450:
    // 0x23a450: 0x3e00008  jr          $ra
label_23a454:
    if (ctx->pc == 0x23A454u) {
        ctx->pc = 0x23A454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A450u;
        // 0x23a454: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A458u;
        goto label_23a458;
    }
    ctx->pc = 0x23A450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A450u;
        // 0x23a454: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A458u;
label_23a458:
    // 0x23a458: 0x3e00008  jr          $ra
label_23a45c:
    if (ctx->pc == 0x23A45Cu) {
        ctx->pc = 0x23A45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A458u;
        // 0x23a45c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A460u;
        goto label_23a460;
    }
    ctx->pc = 0x23A458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A458u;
        // 0x23a45c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A460u;
label_23a460:
    // 0x23a460: 0x2cc20010  sltiu       $v0, $a2, 0x10
    ctx->pc = 0x23a460u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_23a464:
    // 0x23a464: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_23a468:
    if (ctx->pc == 0x23A468u) {
        ctx->pc = 0x23A468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A464u;
        // 0x23a468: 0x851025  or          $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A46Cu;
        goto label_23a46c;
    }
    ctx->pc = 0x23A464u;
    {
        const bool branch_taken_0x23a464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A464u;
        // 0x23a468: 0x851025  or          $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a464) {
            ctx->pc = 0x23A4ACu;
            goto label_23a4ac;
        }
    }
    ctx->pc = 0x23A46Cu;
label_23a46c:
    // 0x23a46c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x23a46cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_23a470:
    // 0x23a470: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_23a474:
    if (ctx->pc == 0x23A474u) {
        ctx->pc = 0x23A478u;
        goto label_23a478;
    }
    ctx->pc = 0x23A470u;
    {
        const bool branch_taken_0x23a470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23a470) {
            ctx->pc = 0x23A4ACu;
            goto label_23a4ac;
        }
    }
    ctx->pc = 0x23A478u;
label_23a478:
    // 0x23a478: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x23a478u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_23a47c:
    // 0x23a47c: 0x2cc70020  sltiu       $a3, $a2, 0x20
    ctx->pc = 0x23a47cu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_23a480:
    // 0x23a480: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x23a480u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_23a484:
    // 0x23a484: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x23a484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_23a488:
    // 0x23a488: 0x704344c9  pxor        $t0, $v0, $v1
    ctx->pc = 0x23a488u;
    SET_GPR_VEC(ctx, 8, PS2_PXOR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
label_23a48c:
    // 0x23a48c: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x23a48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_23a490:
    // 0x23a490: 0x710753a9  pcpyud      $t2, $t0, $a3
    ctx->pc = 0x23a490u;
    SET_GPR_VEC(ctx, 10, _mm_unpackhi_epi64(GPR_VEC(ctx, 8), GPR_VEC(ctx, 7)));
label_23a494:
    // 0x23a494: 0x1484825  or          $t1, $t2, $t0
    ctx->pc = 0x23a494u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) | GPR_U64(ctx, 8));
label_23a498:
    // 0x23a498: 0x49280a  movz        $a1, $v0, $t1
    ctx->pc = 0x23a498u;
    if (GPR_U64(ctx, 9) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_23a49c:
    // 0x23a49c: 0x55200003  bnel        $t1, $zero, . + 4 + (0x3 << 2)
label_23a4a0:
    if (ctx->pc == 0x23A4A0u) {
        ctx->pc = 0x23A4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A49Cu;
        // 0x23a4a0: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A4A4u;
        goto label_23a4a4;
    }
    ctx->pc = 0x23A49Cu;
    {
        const bool branch_taken_0x23a49c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x23a49c) {
            ctx->pc = 0x23A4A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A49Cu;
            // 0x23a4a0: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A4ACu;
            goto label_23a4ac;
        }
    }
    ctx->pc = 0x23A4A4u;
label_23a4a4:
    // 0x23a4a4: 0x10e0fff4  beqz        $a3, . + 4 + (-0xC << 2)
label_23a4a8:
    if (ctx->pc == 0x23A4A8u) {
        ctx->pc = 0x23A4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A4A4u;
        // 0x23a4a8: 0x24c6fff0  addiu       $a2, $a2, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A4ACu;
        goto label_23a4ac;
    }
    ctx->pc = 0x23A4A4u;
    {
        const bool branch_taken_0x23a4a4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A4A4u;
        // 0x23a4a8: 0x24c6fff0  addiu       $a2, $a2, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a4a4) {
            ctx->pc = 0x23A478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23a478;
        }
    }
    ctx->pc = 0x23A4ACu;
label_23a4ac:
    // 0x23a4ac: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x23a4acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_23a4b0:
    // 0x23a4b0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x23a4b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_23a4b4:
    // 0x23a4b4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x23a4b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_23a4b8:
    // 0x23a4b8: 0x10c2000c  beq         $a2, $v0, . + 4 + (0xC << 2)
label_23a4bc:
    if (ctx->pc == 0x23A4BCu) {
        ctx->pc = 0x23A4C0u;
        goto label_23a4c0;
    }
    ctx->pc = 0x23A4B8u;
    {
        const bool branch_taken_0x23a4b8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x23a4b8) {
            ctx->pc = 0x23A4ECu;
            goto label_23a4ec;
        }
    }
    ctx->pc = 0x23A4C0u;
label_23a4c0:
    // 0x23a4c0: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x23a4c0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
label_23a4c4:
    // 0x23a4c4: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x23a4c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_23a4c8:
    // 0x23a4c8: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x23a4c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_23a4cc:
    // 0x23a4cc: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x23a4ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_23a4d0:
    // 0x23a4d0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_23a4d4:
    if (ctx->pc == 0x23A4D4u) {
        ctx->pc = 0x23A4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A4D0u;
        // 0x23a4d4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A4D8u;
        goto label_23a4d8;
    }
    ctx->pc = 0x23A4D0u;
    {
        const bool branch_taken_0x23a4d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23A4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A4D0u;
        // 0x23a4d4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a4d0) {
            ctx->pc = 0x23A4E0u;
            goto label_23a4e0;
        }
    }
    ctx->pc = 0x23A4D8u;
label_23a4d8:
    // 0x23a4d8: 0x3e00008  jr          $ra
label_23a4dc:
    if (ctx->pc == 0x23A4DCu) {
        ctx->pc = 0x23A4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A4D8u;
        // 0x23a4dc: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A4E0u;
        goto label_23a4e0;
    }
    ctx->pc = 0x23A4D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A4D8u;
        // 0x23a4dc: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A4D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A4E0u;
label_23a4e0:
    // 0x23a4e0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x23a4e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_23a4e4:
    // 0x23a4e4: 0x14c7fff8  bne         $a2, $a3, . + 4 + (-0x8 << 2)
label_23a4e8:
    if (ctx->pc == 0x23A4E8u) {
        ctx->pc = 0x23A4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A4E4u;
        // 0x23a4e8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A4ECu;
        goto label_23a4ec;
    }
    ctx->pc = 0x23A4E4u;
    {
        const bool branch_taken_0x23a4e4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        ctx->pc = 0x23A4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A4E4u;
        // 0x23a4e8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a4e4) {
            ctx->pc = 0x23A4C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23a4c8;
        }
    }
    ctx->pc = 0x23A4ECu;
label_23a4ec:
    // 0x23a4ec: 0x3e00008  jr          $ra
label_23a4f0:
    if (ctx->pc == 0x23A4F0u) {
        ctx->pc = 0x23A4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A4ECu;
        // 0x23a4f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A4F4u;
        goto label_23a4f4;
    }
    ctx->pc = 0x23A4ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A4ECu;
        // 0x23a4f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A4ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A4F4u;
label_23a4f4:
    // 0x23a4f4: 0x0  nop
    ctx->pc = 0x23a4f4u;
    // NOP
label_23a4f8:
    // 0x23a4f8: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x23a4f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23a4fc:
    // 0x23a4fc: 0x2cc20020  sltiu       $v0, $a2, 0x20
    ctx->pc = 0x23a4fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_23a500:
    // 0x23a500: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
label_23a504:
    if (ctx->pc == 0x23A504u) {
        ctx->pc = 0x23A504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A500u;
        // 0x23a504: 0x100182d  daddu       $v1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A508u;
        goto label_23a508;
    }
    ctx->pc = 0x23A500u;
    {
        const bool branch_taken_0x23a500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A500u;
        // 0x23a504: 0x100182d  daddu       $v1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a500) {
            ctx->pc = 0x23A574u;
            goto label_23a574;
        }
    }
    ctx->pc = 0x23A508u;
label_23a508:
    // 0x23a508: 0xa81025  or          $v0, $a1, $t0
    ctx->pc = 0x23a508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
label_23a50c:
    // 0x23a50c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x23a50cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_23a510:
    // 0x23a510: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
label_23a514:
    if (ctx->pc == 0x23A514u) {
        ctx->pc = 0x23A514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A510u;
        // 0x23a514: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A518u;
        goto label_23a518;
    }
    ctx->pc = 0x23A510u;
    {
        const bool branch_taken_0x23a510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23a510) {
            ctx->pc = 0x23A514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A510u;
            // 0x23a514: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A578u;
            goto label_23a578;
        }
    }
    ctx->pc = 0x23A518u;
label_23a518:
    // 0x23a518: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x23a518u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_23a51c:
    // 0x23a51c: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x23a51cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_23a520:
    // 0x23a520: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x23a520u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
label_23a524:
    // 0x23a524: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x23a524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_23a528:
    // 0x23a528: 0x2cc40020  sltiu       $a0, $a2, 0x20
    ctx->pc = 0x23a528u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_23a52c:
    // 0x23a52c: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x23a52cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
label_23a530:
    // 0x23a530: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x23a530u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_23a534:
    // 0x23a534: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x23a534u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_23a538:
    // 0x23a538: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x23a538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_23a53c:
    // 0x23a53c: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x23a53cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
label_23a540:
    // 0x23a540: 0x1080fff6  beqz        $a0, . + 4 + (-0xA << 2)
label_23a544:
    if (ctx->pc == 0x23A544u) {
        ctx->pc = 0x23A544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A540u;
        // 0x23a544: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A548u;
        goto label_23a548;
    }
    ctx->pc = 0x23A540u;
    {
        const bool branch_taken_0x23a540 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A540u;
        // 0x23a544: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a540) {
            ctx->pc = 0x23A51Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23a51c;
        }
    }
    ctx->pc = 0x23A548u;
label_23a548:
    // 0x23a548: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x23a548u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_23a54c:
    // 0x23a54c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_23a550:
    if (ctx->pc == 0x23A550u) {
        ctx->pc = 0x23A550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A54Cu;
        // 0x23a550: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A554u;
        goto label_23a554;
    }
    ctx->pc = 0x23A54Cu;
    {
        const bool branch_taken_0x23a54c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A54Cu;
        // 0x23a550: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a54c) {
            ctx->pc = 0x23A574u;
            goto label_23a574;
        }
    }
    ctx->pc = 0x23A554u;
label_23a554:
    // 0x23a554: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x23a554u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_23a558:
    // 0x23a558: 0x24c6fff8  addiu       $a2, $a2, -0x8
    ctx->pc = 0x23a558u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
label_23a55c:
    // 0x23a55c: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x23a55cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_23a560:
    // 0x23a560: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x23a560u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_23a564:
    // 0x23a564: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x23a564u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
label_23a568:
    // 0x23a568: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
label_23a56c:
    if (ctx->pc == 0x23A56Cu) {
        ctx->pc = 0x23A56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A568u;
        // 0x23a56c: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A570u;
        goto label_23a570;
    }
    ctx->pc = 0x23A568u;
    {
        const bool branch_taken_0x23a568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A568u;
        // 0x23a56c: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a568) {
            ctx->pc = 0x23A554u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23a554;
        }
    }
    ctx->pc = 0x23A570u;
label_23a570:
    // 0x23a570: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x23a570u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_23a574:
    // 0x23a574: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x23a574u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_23a578:
    // 0x23a578: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x23a578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_23a57c:
    // 0x23a57c: 0x10c20008  beq         $a2, $v0, . + 4 + (0x8 << 2)
label_23a580:
    if (ctx->pc == 0x23A580u) {
        ctx->pc = 0x23A580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A57Cu;
        // 0x23a580: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A584u;
        goto label_23a584;
    }
    ctx->pc = 0x23A57Cu;
    {
        const bool branch_taken_0x23a57c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x23A580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A57Cu;
        // 0x23a580: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a57c) {
            ctx->pc = 0x23A5A0u;
            goto label_23a5a0;
        }
    }
    ctx->pc = 0x23A584u;
label_23a584:
    // 0x23a584: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x23a584u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_23a588:
    // 0x23a588: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x23a588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_23a58c:
    // 0x23a58c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x23a58cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_23a590:
    // 0x23a590: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x23a590u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_23a594:
    // 0x23a594: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23a594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_23a598:
    // 0x23a598: 0x14c4fffa  bne         $a2, $a0, . + 4 + (-0x6 << 2)
label_23a59c:
    if (ctx->pc == 0x23A59Cu) {
        ctx->pc = 0x23A5A0u;
        goto label_23a5a0;
    }
    ctx->pc = 0x23A598u;
    {
        const bool branch_taken_0x23a598 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        if (branch_taken_0x23a598) {
            ctx->pc = 0x23A584u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23a584;
        }
    }
    ctx->pc = 0x23A5A0u;
label_23a5a0:
    // 0x23a5a0: 0x3e00008  jr          $ra
label_23a5a4:
    if (ctx->pc == 0x23A5A4u) {
        ctx->pc = 0x23A5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A5A0u;
        // 0x23a5a4: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A5A8u;
        goto label_23a5a8;
    }
    ctx->pc = 0x23A5A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A5A0u;
        // 0x23a5a4: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A5A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A5A8u;
label_23a5a8:
    // 0x23a5a8: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x23a5a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23a5ac:
    // 0x23a5ac: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x23a5acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_23a5b0:
    // 0x23a5b0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_23a5b4:
    if (ctx->pc == 0x23A5B4u) {
        ctx->pc = 0x23A5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A5B0u;
        // 0x23a5b4: 0x100182d  daddu       $v1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A5B8u;
        goto label_23a5b8;
    }
    ctx->pc = 0x23A5B0u;
    {
        const bool branch_taken_0x23a5b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A5B0u;
        // 0x23a5b4: 0x100182d  daddu       $v1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a5b0) {
            ctx->pc = 0x23A600u;
            goto label_23a600;
        }
    }
    ctx->pc = 0x23A5B8u;
label_23a5b8:
    // 0x23a5b8: 0xa63821  addu        $a3, $a1, $a2
    ctx->pc = 0x23a5b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_23a5bc:
    // 0x23a5bc: 0x107102b  sltu        $v0, $t0, $a3
    ctx->pc = 0x23a5bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_23a5c0:
    // 0x23a5c0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_23a5c4:
    if (ctx->pc == 0x23A5C4u) {
        ctx->pc = 0x23A5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A5C0u;
        // 0x23a5c4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A5C8u;
        goto label_23a5c8;
    }
    ctx->pc = 0x23A5C0u;
    {
        const bool branch_taken_0x23a5c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A5C0u;
        // 0x23a5c4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a5c0) {
            ctx->pc = 0x23A600u;
            goto label_23a600;
        }
    }
    ctx->pc = 0x23A5C8u;
label_23a5c8:
    // 0x23a5c8: 0x1061821  addu        $v1, $t0, $a2
    ctx->pc = 0x23a5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_23a5cc:
    // 0x23a5cc: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x23a5ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_23a5d0:
    // 0x23a5d0: 0x10c20034  beq         $a2, $v0, . + 4 + (0x34 << 2)
label_23a5d4:
    if (ctx->pc == 0x23A5D4u) {
        ctx->pc = 0x23A5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A5D0u;
        // 0x23a5d4: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A5D8u;
        goto label_23a5d8;
    }
    ctx->pc = 0x23A5D0u;
    {
        const bool branch_taken_0x23a5d0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x23A5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A5D0u;
        // 0x23a5d4: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a5d0) {
            ctx->pc = 0x23A6A4u;
            goto label_23a6a4;
        }
    }
    ctx->pc = 0x23A5D8u;
label_23a5d8:
    // 0x23a5d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23a5d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23a5dc:
    // 0x23a5dc: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x23a5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_23a5e0:
    // 0x23a5e0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x23a5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_23a5e4:
    // 0x23a5e4: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x23a5e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_23a5e8:
    // 0x23a5e8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x23a5e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_23a5ec:
    // 0x23a5ec: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x23a5ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_23a5f0:
    // 0x23a5f0: 0x14c4fffa  bne         $a2, $a0, . + 4 + (-0x6 << 2)
label_23a5f4:
    if (ctx->pc == 0x23A5F4u) {
        ctx->pc = 0x23A5F8u;
        goto label_23a5f8;
    }
    ctx->pc = 0x23A5F0u;
    {
        const bool branch_taken_0x23a5f0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        if (branch_taken_0x23a5f0) {
            ctx->pc = 0x23A5DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23a5dc;
        }
    }
    ctx->pc = 0x23A5F8u;
label_23a5f8:
    // 0x23a5f8: 0x3e00008  jr          $ra
label_23a5fc:
    if (ctx->pc == 0x23A5FCu) {
        ctx->pc = 0x23A5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A5F8u;
        // 0x23a5fc: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A600u;
        goto label_23a600;
    }
    ctx->pc = 0x23A5F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A5F8u;
        // 0x23a5fc: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A5F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A600u;
label_23a600:
    // 0x23a600: 0x2cc20020  sltiu       $v0, $a2, 0x20
    ctx->pc = 0x23a600u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_23a604:
    // 0x23a604: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
label_23a608:
    if (ctx->pc == 0x23A608u) {
        ctx->pc = 0x23A608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A604u;
        // 0x23a608: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A60Cu;
        goto label_23a60c;
    }
    ctx->pc = 0x23A604u;
    {
        const bool branch_taken_0x23a604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23a604) {
            ctx->pc = 0x23A608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A604u;
            // 0x23a608: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A67Cu;
            goto label_23a67c;
        }
    }
    ctx->pc = 0x23A60Cu;
label_23a60c:
    // 0x23a60c: 0xa31025  or          $v0, $a1, $v1
    ctx->pc = 0x23a60cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_23a610:
    // 0x23a610: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x23a610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_23a614:
    // 0x23a614: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
label_23a618:
    if (ctx->pc == 0x23A618u) {
        ctx->pc = 0x23A618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A614u;
        // 0x23a618: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A61Cu;
        goto label_23a61c;
    }
    ctx->pc = 0x23A614u;
    {
        const bool branch_taken_0x23a614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23a614) {
            ctx->pc = 0x23A618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A614u;
            // 0x23a618: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A67Cu;
            goto label_23a67c;
        }
    }
    ctx->pc = 0x23A61Cu;
label_23a61c:
    // 0x23a61c: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x23a61cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_23a620:
    // 0x23a620: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x23a620u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_23a624:
    // 0x23a624: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x23a624u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
label_23a628:
    // 0x23a628: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x23a628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_23a62c:
    // 0x23a62c: 0x2cc40020  sltiu       $a0, $a2, 0x20
    ctx->pc = 0x23a62cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_23a630:
    // 0x23a630: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x23a630u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
label_23a634:
    // 0x23a634: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x23a634u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_23a638:
    // 0x23a638: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x23a638u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_23a63c:
    // 0x23a63c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x23a63cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_23a640:
    // 0x23a640: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x23a640u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
label_23a644:
    // 0x23a644: 0x1080fff6  beqz        $a0, . + 4 + (-0xA << 2)
label_23a648:
    if (ctx->pc == 0x23A648u) {
        ctx->pc = 0x23A648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A644u;
        // 0x23a648: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A64Cu;
        goto label_23a64c;
    }
    ctx->pc = 0x23A644u;
    {
        const bool branch_taken_0x23a644 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A644u;
        // 0x23a648: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a644) {
            ctx->pc = 0x23A620u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23a620;
        }
    }
    ctx->pc = 0x23A64Cu;
label_23a64c:
    // 0x23a64c: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x23a64cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_23a650:
    // 0x23a650: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_23a654:
    if (ctx->pc == 0x23A654u) {
        ctx->pc = 0x23A654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A650u;
        // 0x23a654: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A658u;
        goto label_23a658;
    }
    ctx->pc = 0x23A650u;
    {
        const bool branch_taken_0x23a650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A650u;
        // 0x23a654: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a650) {
            ctx->pc = 0x23A678u;
            goto label_23a678;
        }
    }
    ctx->pc = 0x23A658u;
label_23a658:
    // 0x23a658: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x23a658u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_23a65c:
    // 0x23a65c: 0x24c6fff8  addiu       $a2, $a2, -0x8
    ctx->pc = 0x23a65cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
label_23a660:
    // 0x23a660: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x23a660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_23a664:
    // 0x23a664: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x23a664u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_23a668:
    // 0x23a668: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x23a668u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
label_23a66c:
    // 0x23a66c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
label_23a670:
    if (ctx->pc == 0x23A670u) {
        ctx->pc = 0x23A670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A66Cu;
        // 0x23a670: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A674u;
        goto label_23a674;
    }
    ctx->pc = 0x23A66Cu;
    {
        const bool branch_taken_0x23a66c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A66Cu;
        // 0x23a670: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a66c) {
            ctx->pc = 0x23A658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23a658;
        }
    }
    ctx->pc = 0x23A674u;
label_23a674:
    // 0x23a674: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x23a674u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_23a678:
    // 0x23a678: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x23a678u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_23a67c:
    // 0x23a67c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x23a67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_23a680:
    // 0x23a680: 0x10c20008  beq         $a2, $v0, . + 4 + (0x8 << 2)
label_23a684:
    if (ctx->pc == 0x23A684u) {
        ctx->pc = 0x23A684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A680u;
        // 0x23a684: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A688u;
        goto label_23a688;
    }
    ctx->pc = 0x23A680u;
    {
        const bool branch_taken_0x23a680 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x23A684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A680u;
        // 0x23a684: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a680) {
            ctx->pc = 0x23A6A4u;
            goto label_23a6a4;
        }
    }
    ctx->pc = 0x23A688u;
label_23a688:
    // 0x23a688: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x23a688u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_23a68c:
    // 0x23a68c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x23a68cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_23a690:
    // 0x23a690: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x23a690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_23a694:
    // 0x23a694: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x23a694u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_23a698:
    // 0x23a698: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23a698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_23a69c:
    // 0x23a69c: 0x14c4fffa  bne         $a2, $a0, . + 4 + (-0x6 << 2)
label_23a6a0:
    if (ctx->pc == 0x23A6A0u) {
        ctx->pc = 0x23A6A4u;
        goto label_23a6a4;
    }
    ctx->pc = 0x23A69Cu;
    {
        const bool branch_taken_0x23a69c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        if (branch_taken_0x23a69c) {
            ctx->pc = 0x23A688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23a688;
        }
    }
    ctx->pc = 0x23A6A4u;
label_23a6a4:
    // 0x23a6a4: 0x3e00008  jr          $ra
label_23a6a8:
    if (ctx->pc == 0x23A6A8u) {
        ctx->pc = 0x23A6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A6A4u;
        // 0x23a6a8: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A6ACu;
        goto label_23a6ac;
    }
    ctx->pc = 0x23A6A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A6A4u;
        // 0x23a6a8: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A6A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A6ACu;
label_23a6ac:
    // 0x23a6ac: 0x0  nop
    ctx->pc = 0x23a6acu;
    // NOP
label_23a6b0:
    // 0x23a6b0: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x23a6b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_23a6b4:
    // 0x23a6b4: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_23a6b8:
    if (ctx->pc == 0x23A6B8u) {
        ctx->pc = 0x23A6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A6B4u;
        // 0x23a6b8: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A6BCu;
        goto label_23a6bc;
    }
    ctx->pc = 0x23A6B4u;
    {
        const bool branch_taken_0x23a6b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A6B4u;
        // 0x23a6b8: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a6b4) {
            ctx->pc = 0x23A730u;
            goto label_23a730;
        }
    }
    ctx->pc = 0x23A6BCu;
label_23a6bc:
    // 0x23a6bc: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x23a6bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
label_23a6c0:
    // 0x23a6c0: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
label_23a6c4:
    if (ctx->pc == 0x23A6C4u) {
        ctx->pc = 0x23A6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A6C0u;
        // 0x23a6c4: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A6C8u;
        goto label_23a6c8;
    }
    ctx->pc = 0x23A6C0u;
    {
        const bool branch_taken_0x23a6c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A6C0u;
        // 0x23a6c4: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a6c0) {
            ctx->pc = 0x23A730u;
            goto label_23a730;
        }
    }
    ctx->pc = 0x23A6C8u;
label_23a6c8:
    // 0x23a6c8: 0x30a900ff  andi        $t1, $a1, 0xFF
    ctx->pc = 0x23a6c8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_23a6cc:
    // 0x23a6cc: 0x2cca0020  sltiu       $t2, $a2, 0x20
    ctx->pc = 0x23a6ccu;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_23a6d0:
    // 0x23a6d0: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x23a6d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_23a6d4:
    // 0x23a6d4: 0x81a38  dsll        $v1, $t0, 8
    ctx->pc = 0x23a6d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) << 8);
label_23a6d8:
    // 0x23a6d8: 0x694025  or          $t0, $v1, $t1
    ctx->pc = 0x23a6d8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
label_23a6dc:
    // 0x23a6dc: 0x70081ee9  pcpyh       $v1, $t0
    ctx->pc = 0x23a6dcu;
    { __m128i src = GPR_VEC(ctx, 8); uint16_t l = static_cast<uint16_t>(_mm_extract_epi16(src, 0)); uint16_t h = static_cast<uint16_t>(_mm_extract_epi16(src, 4)); 
   SET_GPR_VEC(ctx, 3, _mm_set_epi16(h,h,h,h, l,l,l,l)); }
label_23a6e0:
    // 0x23a6e0: 0x1540000e  bnez        $t2, . + 4 + (0xE << 2)
label_23a6e4:
    if (ctx->pc == 0x23A6E4u) {
        ctx->pc = 0x23A6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A6E0u;
        // 0x23a6e4: 0x2cc20008  sltiu       $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A6E8u;
        goto label_23a6e8;
    }
    ctx->pc = 0x23A6E0u;
    {
        const bool branch_taken_0x23a6e0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A6E0u;
        // 0x23a6e4: 0x2cc20008  sltiu       $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a6e0) {
            ctx->pc = 0x23A71Cu;
            goto label_23a71c;
        }
    }
    ctx->pc = 0x23A6E8u;
label_23a6e8:
    // 0x23a6e8: 0x70634389  pcpyld      $t0, $v1, $v1
    ctx->pc = 0x23a6e8u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 3)));
label_23a6ec:
    // 0x23a6ec: 0x7ce80000  sq          $t0, 0x0($a3)
    ctx->pc = 0x23a6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 8));
label_23a6f0:
    // 0x23a6f0: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x23a6f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
label_23a6f4:
    // 0x23a6f4: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x23a6f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_23a6f8:
    // 0x23a6f8: 0x2cc20020  sltiu       $v0, $a2, 0x20
    ctx->pc = 0x23a6f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_23a6fc:
    // 0x23a6fc: 0x7ce80000  sq          $t0, 0x0($a3)
    ctx->pc = 0x23a6fcu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 8));
label_23a700:
    // 0x23a700: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
label_23a704:
    if (ctx->pc == 0x23A704u) {
        ctx->pc = 0x23A704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A700u;
        // 0x23a704: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A708u;
        goto label_23a708;
    }
    ctx->pc = 0x23A700u;
    {
        const bool branch_taken_0x23a700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A700u;
        // 0x23a704: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a700) {
            ctx->pc = 0x23A6ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23a6ec;
        }
    }
    ctx->pc = 0x23A708u;
label_23a708:
    // 0x23a708: 0x10000004  b           . + 4 + (0x4 << 2)
label_23a70c:
    if (ctx->pc == 0x23A70Cu) {
        ctx->pc = 0x23A70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A708u;
        // 0x23a70c: 0x2cc20008  sltiu       $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A710u;
        goto label_23a710;
    }
    ctx->pc = 0x23A708u;
    {
        const bool branch_taken_0x23a708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A708u;
        // 0x23a70c: 0x2cc20008  sltiu       $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a708) {
            ctx->pc = 0x23A71Cu;
            goto label_23a71c;
        }
    }
    ctx->pc = 0x23A710u;
label_23a710:
    // 0x23a710: 0x24c6fff8  addiu       $a2, $a2, -0x8
    ctx->pc = 0x23a710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
label_23a714:
    // 0x23a714: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x23a714u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_23a718:
    // 0x23a718: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x23a718u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_23a71c:
    // 0x23a71c: 0x0  nop
    ctx->pc = 0x23a71cu;
    // NOP
label_23a720:
    // 0x23a720: 0x0  nop
    ctx->pc = 0x23a720u;
    // NOP
label_23a724:
    // 0x23a724: 0x5040fffa  beql        $v0, $zero, . + 4 + (-0x6 << 2)
label_23a728:
    if (ctx->pc == 0x23A728u) {
        ctx->pc = 0x23A728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A724u;
        // 0x23a728: 0xfce30000  sd          $v1, 0x0($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A72Cu;
        goto label_23a72c;
    }
    ctx->pc = 0x23A724u;
    {
        const bool branch_taken_0x23a724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a724) {
            ctx->pc = 0x23A728u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A724u;
            // 0x23a728: 0xfce30000  sd          $v1, 0x0($a3) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23a710;
        }
    }
    ctx->pc = 0x23A72Cu;
label_23a72c:
    // 0x23a72c: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x23a72cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_23a730:
    // 0x23a730: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x23a730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_23a734:
    // 0x23a734: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x23a734u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_23a738:
    // 0x23a738: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x23a738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_23a73c:
    // 0x23a73c: 0x10c2000a  beq         $a2, $v0, . + 4 + (0xA << 2)
label_23a740:
    if (ctx->pc == 0x23A740u) {
        ctx->pc = 0x23A744u;
        goto label_23a744;
    }
    ctx->pc = 0x23A73Cu;
    {
        const bool branch_taken_0x23a73c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x23a73c) {
            ctx->pc = 0x23A768u;
            goto label_23a768;
        }
    }
    ctx->pc = 0x23A744u;
label_23a744:
    // 0x23a744: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x23a744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_23a748:
    // 0x23a748: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x23a748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_23a74c:
    // 0x23a74c: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x23a74cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
label_23a750:
    // 0x23a750: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x23a750u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_23a754:
    // 0x23a754: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23a754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_23a758:
    // 0x23a758: 0x0  nop
    ctx->pc = 0x23a758u;
    // NOP
label_23a75c:
    // 0x23a75c: 0x0  nop
    ctx->pc = 0x23a75cu;
    // NOP
label_23a760:
    // 0x23a760: 0x14c2fffa  bne         $a2, $v0, . + 4 + (-0x6 << 2)
label_23a764:
    if (ctx->pc == 0x23A764u) {
        ctx->pc = 0x23A768u;
        goto label_23a768;
    }
    ctx->pc = 0x23A760u;
    {
        const bool branch_taken_0x23a760 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x23a760) {
            ctx->pc = 0x23A74Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23a74c;
        }
    }
    ctx->pc = 0x23A768u;
label_23a768:
    // 0x23a768: 0x3e00008  jr          $ra
label_23a76c:
    if (ctx->pc == 0x23A76Cu) {
        ctx->pc = 0x23A76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A768u;
        // 0x23a76c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A770u;
        goto label_23a770;
    }
    ctx->pc = 0x23A768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A768u;
        // 0x23a76c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A770u;
label_23a770:
    // 0x23a770: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23a770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_23a774:
    // 0x23a774: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23a774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23a778:
    // 0x23a778: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23a778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_23a77c:
    // 0x23a77c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23a77cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_23a780:
    // 0x23a780: 0xc0691c4  jal         func_1A4710
label_23a784:
    if (ctx->pc == 0x23A784u) {
        ctx->pc = 0x23A788u;
        goto label_23a788;
    }
    ctx->pc = 0x23A780u;
    SET_GPR_U32(ctx, 31, 0x23A788u);
    ctx->pc = 0x1A4710u;
    { ctx->pc = 0x1a4710; return; }
    ctx->pc = 0x23A788u;
label_23a788:
    // 0x23a788: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x23a788u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_23a78c:
    // 0x23a78c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23a78cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23a790:
    // 0x23a790: 0x24710c80  addiu       $s1, $v1, 0xC80
    ctx->pc = 0x23a790u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 3200));
label_23a794:
    // 0x23a794: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x23a794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_23a798:
    // 0x23a798: 0x24440c84  addiu       $a0, $v0, 0xC84
    ctx->pc = 0x23a798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3204));
label_23a79c:
    // 0x23a79c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x23a79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_23a7a0:
    // 0x23a7a0: 0x14500005  bne         $v0, $s0, . + 4 + (0x5 << 2)
label_23a7a4:
    if (ctx->pc == 0x23A7A4u) {
        ctx->pc = 0x23A7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A7A0u;
        // 0x23a7a4: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A7A8u;
        goto label_23a7a8;
    }
    ctx->pc = 0x23A7A0u;
    {
        const bool branch_taken_0x23a7a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x23A7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A7A0u;
        // 0x23a7a4: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a7a0) {
            ctx->pc = 0x23A7B8u;
            goto label_23a7b8;
        }
    }
    ctx->pc = 0x23A7A8u;
label_23a7a8:
    // 0x23a7a8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x23a7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23a7ac:
    // 0x23a7ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23a7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_23a7b0:
    // 0x23a7b0: 0x10000009  b           . + 4 + (0x9 << 2)
label_23a7b4:
    if (ctx->pc == 0x23A7B4u) {
        ctx->pc = 0x23A7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A7B0u;
        // 0x23a7b4: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A7B8u;
        goto label_23a7b8;
    }
    ctx->pc = 0x23A7B0u;
    {
        const bool branch_taken_0x23a7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A7B0u;
        // 0x23a7b4: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a7b0) {
            ctx->pc = 0x23A7D8u;
            goto label_23a7d8;
        }
    }
    ctx->pc = 0x23A7B8u;
label_23a7b8:
    // 0x23a7b8: 0xc069218  jal         func_1A4860
label_23a7bc:
    if (ctx->pc == 0x23A7BCu) {
        ctx->pc = 0x23A7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A7B8u;
        // 0x23a7bc: 0x8c446288  lw          $a0, 0x6288($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A7C0u;
        goto label_23a7c0;
    }
    ctx->pc = 0x23A7B8u;
    SET_GPR_U32(ctx, 31, 0x23A7C0u);
    ctx->pc = 0x23A7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A7B8u;
    // 0x23a7bc: 0x8c446288  lw          $a0, 0x6288($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    { ctx->pc = 0x1a4860; return; }
    ctx->pc = 0x23A7C0u;
label_23a7c0:
    // 0x23a7c0: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x23a7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_23a7c4:
    // 0x23a7c4: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x23a7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
label_23a7c8:
    // 0x23a7c8: 0x24630c84  addiu       $v1, $v1, 0xC84
    ctx->pc = 0x23a7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3204));
label_23a7cc:
    // 0x23a7cc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23a7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23a7d0:
    // 0x23a7d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23a7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_23a7d4:
    // 0x23a7d4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x23a7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_23a7d8:
    // 0x23a7d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23a7d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23a7dc:
    // 0x23a7dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23a7dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_23a7e0:
    // 0x23a7e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23a7e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23a7e4:
    // 0x23a7e4: 0x3e00008  jr          $ra
label_23a7e8:
    if (ctx->pc == 0x23A7E8u) {
        ctx->pc = 0x23A7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A7E4u;
        // 0x23a7e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A7ECu;
        goto label_23a7ec;
    }
    ctx->pc = 0x23A7E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A7E4u;
        // 0x23a7e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A7E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A7ECu;
label_23a7ec:
    // 0x23a7ec: 0x0  nop
    ctx->pc = 0x23a7ecu;
    // NOP
label_23a7f0:
    // 0x23a7f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23a7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_23a7f4:
    // 0x23a7f4: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x23a7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_23a7f8:
    // 0x23a7f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23a7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_23a7fc:
    // 0x23a7fc: 0x24630c84  addiu       $v1, $v1, 0xC84
    ctx->pc = 0x23a7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3204));
label_23a800:
    // 0x23a800: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23a800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23a804:
    // 0x23a804: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23a804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_23a808:
    // 0x23a808: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_23a80c:
    if (ctx->pc == 0x23A80Cu) {
        ctx->pc = 0x23A80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A808u;
        // 0x23a80c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A810u;
        goto label_23a810;
    }
    ctx->pc = 0x23A808u;
    {
        const bool branch_taken_0x23a808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A808u;
        // 0x23a80c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a808) {
            ctx->pc = 0x23A830u;
            goto label_23a830;
        }
    }
    ctx->pc = 0x23A810u;
label_23a810:
    // 0x23a810: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x23a810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_23a814:
    // 0x23a814: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23a814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23a818:
    // 0x23a818: 0x8c446288  lw          $a0, 0x6288($v0)
    ctx->pc = 0x23a818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25224)));
label_23a81c:
    // 0x23a81c: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x23a81cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
label_23a820:
    // 0x23a820: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x23a820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_23a824:
    // 0x23a824: 0xaca30c80  sw          $v1, 0xC80($a1)
    ctx->pc = 0x23a824u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 3200), GPR_U32(ctx, 3));
label_23a828:
    // 0x23a828: 0x8069210  j           func_1A4840
label_23a82c:
    if (ctx->pc == 0x23A82Cu) {
        ctx->pc = 0x23A82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A828u;
        // 0x23a82c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A830u;
        goto label_23a830;
    }
    ctx->pc = 0x23A828u;
    ctx->pc = 0x23A82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A828u;
    // 0x23a82c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x23A830u;
label_23a830:
    // 0x23a830: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23a830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23a834:
    // 0x23a834: 0x3e00008  jr          $ra
label_23a838:
    if (ctx->pc == 0x23A838u) {
        ctx->pc = 0x23A838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A834u;
        // 0x23a838: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A83Cu;
        goto label_23a83c;
    }
    ctx->pc = 0x23A834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A834u;
        // 0x23a838: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A83Cu;
label_23a83c:
    // 0x23a83c: 0x0  nop
    ctx->pc = 0x23a83cu;
    // NOP
label_23a840:
    // 0x23a840: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23a840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_23a844:
    // 0x23a844: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23a844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23a848:
    // 0x23a848: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23a848u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23a84c:
    // 0x23a84c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23a84cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_23a850:
    // 0x23a850: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x23a850u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23a854:
    // 0x23a854: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23a854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_23a858:
    // 0x23a858: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x23a858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_23a85c:
    // 0x23a85c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_23a860:
    if (ctx->pc == 0x23A860u) {
        ctx->pc = 0x23A860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A85Cu;
        // 0x23a860: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A864u;
        goto label_23a864;
    }
    ctx->pc = 0x23A85Cu;
    {
        const bool branch_taken_0x23a85c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A85Cu;
        // 0x23a860: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a85c) {
            ctx->pc = 0x23A878u;
            goto label_23a878;
        }
    }
    ctx->pc = 0x23A864u;
label_23a864:
    // 0x23a864: 0xc08dc64  jal         func_237190
label_23a868:
    if (ctx->pc == 0x23A868u) {
        ctx->pc = 0x23A868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A864u;
        // 0x23a868: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A86Cu;
        goto label_23a86c;
    }
    ctx->pc = 0x23A864u;
    SET_GPR_U32(ctx, 31, 0x23A86Cu);
    ctx->pc = 0x23A868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A864u;
    // 0x23a868: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237190u;
    { ctx->pc = 0x237190; return; }
    ctx->pc = 0x23A86Cu;
label_23a86c:
    // 0x23a86c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23a86cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23a870:
    // 0x23a870: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
label_23a874:
    if (ctx->pc == 0x23A874u) {
        ctx->pc = 0x23A874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A870u;
        // 0x23a874: 0xae03004c  sw          $v1, 0x4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A878u;
        goto label_23a878;
    }
    ctx->pc = 0x23A870u;
    {
        const bool branch_taken_0x23a870 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A870u;
        // 0x23a874: 0xae03004c  sw          $v1, 0x4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a870) {
            ctx->pc = 0x23A8D0u;
            { ctx->pc = 0x23a8d0; return; }
        }
    }
    ctx->pc = 0x23A878u;
label_23a878:
    // 0x23a878: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x23a878u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_23a87c:
    // 0x23a87c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x23a87cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_23a880:
    // 0x23a880: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x23a880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23a884:
    // 0x23a884: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_23a888:
    if (ctx->pc == 0x23A888u) {
        ctx->pc = 0x23A888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A884u;
        // 0x23a888: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A88Cu;
        goto label_23a88c;
    }
    ctx->pc = 0x23A884u;
    {
        const bool branch_taken_0x23a884 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A884u;
        // 0x23a888: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a884) {
            ctx->pc = 0x23A898u;
            goto label_23a898;
        }
    }
    ctx->pc = 0x23A88Cu;
label_23a88c:
    // 0x23a88c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23a88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23a890:
    // 0x23a890: 0x1000000c  b           . + 4 + (0xC << 2)
label_23a894:
    if (ctx->pc == 0x23A894u) {
        ctx->pc = 0x23A894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A890u;
        // 0x23a894: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A898u;
        goto label_23a898;
    }
    ctx->pc = 0x23A890u;
    {
        const bool branch_taken_0x23a890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A890u;
        // 0x23a894: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a890) {
            ctx->pc = 0x23A8C4u;
            goto label_23a8c4;
        }
    }
    ctx->pc = 0x23A898u;
label_23a898:
    // 0x23a898: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23a898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23a89c:
    // 0x23a89c: 0x2228004  sllv        $s0, $v0, $s1
    ctx->pc = 0x23a89cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
label_23a8a0:
    // 0x23a8a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x23a8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23a8a4:
    // 0x23a8a4: 0x103080  sll         $a2, $s0, 2
    ctx->pc = 0x23a8a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_23a8a8:
    // 0x23a8a8: 0xc08dc64  jal         func_237190
label_23a8ac:
    if (ctx->pc == 0x23A8ACu) {
        ctx->pc = 0x23A8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A8A8u;
        // 0x23a8ac: 0x24c60014  addiu       $a2, $a2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A8B0u;
        goto label_23a8b0;
    }
    ctx->pc = 0x23A8A8u;
    SET_GPR_U32(ctx, 31, 0x23A8B0u);
    ctx->pc = 0x23A8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A8A8u;
    // 0x23a8ac: 0x24c60014  addiu       $a2, $a2, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237190u;
    { ctx->pc = 0x237190; return; }
    ctx->pc = 0x23A8B0u;
label_23a8b0:
    // 0x23a8b0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23a8b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23a8b4:
    // 0x23a8b4: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_23a8b8:
    if (ctx->pc == 0x23A8B8u) {
        ctx->pc = 0x23A8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A8B4u;
        // 0x23a8b8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A8BCu;
        goto label_23a8bc;
    }
    ctx->pc = 0x23A8B4u;
    {
        const bool branch_taken_0x23a8b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a8b4) {
            ctx->pc = 0x23A8B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A8B4u;
            // 0x23a8b8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A8D4u;
            { ctx->pc = 0x23a8d4; return; }
        }
    }
    ctx->pc = 0x23A8BCu;
label_23a8bc:
    // 0x23a8bc: 0xac710004  sw          $s1, 0x4($v1)
    ctx->pc = 0x23a8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 17));
label_23a8c0:
    // 0x23a8c0: 0xac700008  sw          $s0, 0x8($v1)
    ctx->pc = 0x23a8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 16));
label_23a8c4:
    // 0x23a8c4: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x23a8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    ctx->pc = 0x23a8c8u;
    return;
}

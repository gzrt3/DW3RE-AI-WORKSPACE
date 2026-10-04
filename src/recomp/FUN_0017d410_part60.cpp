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

// Function: FUN_0017d410
// Address: 0x17d410 - 0x27d534
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0017d410_part60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x19a100u: goto label_19a100;
        case 0x19a104u: goto label_19a104;
        case 0x19a108u: goto label_19a108;
        case 0x19a10cu: goto label_19a10c;
        case 0x19a110u: goto label_19a110;
        case 0x19a114u: goto label_19a114;
        case 0x19a118u: goto label_19a118;
        case 0x19a11cu: goto label_19a11c;
        case 0x19a120u: goto label_19a120;
        case 0x19a124u: goto label_19a124;
        case 0x19a128u: goto label_19a128;
        case 0x19a12cu: goto label_19a12c;
        case 0x19a130u: goto label_19a130;
        case 0x19a134u: goto label_19a134;
        case 0x19a138u: goto label_19a138;
        case 0x19a13cu: goto label_19a13c;
        case 0x19a140u: goto label_19a140;
        case 0x19a144u: goto label_19a144;
        case 0x19a148u: goto label_19a148;
        case 0x19a14cu: goto label_19a14c;
        case 0x19a150u: goto label_19a150;
        case 0x19a154u: goto label_19a154;
        case 0x19a158u: goto label_19a158;
        case 0x19a15cu: goto label_19a15c;
        case 0x19a160u: goto label_19a160;
        case 0x19a164u: goto label_19a164;
        case 0x19a168u: goto label_19a168;
        case 0x19a16cu: goto label_19a16c;
        case 0x19a170u: goto label_19a170;
        case 0x19a174u: goto label_19a174;
        case 0x19a178u: goto label_19a178;
        case 0x19a17cu: goto label_19a17c;
        case 0x19a180u: goto label_19a180;
        case 0x19a184u: goto label_19a184;
        case 0x19a188u: goto label_19a188;
        case 0x19a18cu: goto label_19a18c;
        case 0x19a190u: goto label_19a190;
        case 0x19a194u: goto label_19a194;
        case 0x19a198u: goto label_19a198;
        case 0x19a19cu: goto label_19a19c;
        case 0x19a1a0u: goto label_19a1a0;
        case 0x19a1a4u: goto label_19a1a4;
        case 0x19a1a8u: goto label_19a1a8;
        case 0x19a1acu: goto label_19a1ac;
        case 0x19a1b0u: goto label_19a1b0;
        case 0x19a1b4u: goto label_19a1b4;
        case 0x19a1b8u: goto label_19a1b8;
        case 0x19a1bcu: goto label_19a1bc;
        case 0x19a1c0u: goto label_19a1c0;
        case 0x19a1c4u: goto label_19a1c4;
        case 0x19a1c8u: goto label_19a1c8;
        case 0x19a1ccu: goto label_19a1cc;
        case 0x19a1d0u: goto label_19a1d0;
        case 0x19a1d4u: goto label_19a1d4;
        case 0x19a1d8u: goto label_19a1d8;
        case 0x19a1dcu: goto label_19a1dc;
        case 0x19a1e0u: goto label_19a1e0;
        case 0x19a1e4u: goto label_19a1e4;
        case 0x19a1e8u: goto label_19a1e8;
        case 0x19a1ecu: goto label_19a1ec;
        case 0x19a1f0u: goto label_19a1f0;
        case 0x19a1f4u: goto label_19a1f4;
        case 0x19a1f8u: goto label_19a1f8;
        case 0x19a1fcu: goto label_19a1fc;
        case 0x19a200u: goto label_19a200;
        case 0x19a204u: goto label_19a204;
        case 0x19a208u: goto label_19a208;
        case 0x19a20cu: goto label_19a20c;
        case 0x19a210u: goto label_19a210;
        case 0x19a214u: goto label_19a214;
        case 0x19a218u: goto label_19a218;
        case 0x19a21cu: goto label_19a21c;
        case 0x19a220u: goto label_19a220;
        case 0x19a224u: goto label_19a224;
        case 0x19a228u: goto label_19a228;
        case 0x19a22cu: goto label_19a22c;
        case 0x19a230u: goto label_19a230;
        case 0x19a234u: goto label_19a234;
        case 0x19a238u: goto label_19a238;
        case 0x19a23cu: goto label_19a23c;
        case 0x19a240u: goto label_19a240;
        case 0x19a244u: goto label_19a244;
        case 0x19a248u: goto label_19a248;
        case 0x19a24cu: goto label_19a24c;
        case 0x19a250u: goto label_19a250;
        case 0x19a254u: goto label_19a254;
        case 0x19a258u: goto label_19a258;
        case 0x19a25cu: goto label_19a25c;
        case 0x19a260u: goto label_19a260;
        case 0x19a264u: goto label_19a264;
        case 0x19a268u: goto label_19a268;
        case 0x19a26cu: goto label_19a26c;
        case 0x19a270u: goto label_19a270;
        case 0x19a274u: goto label_19a274;
        case 0x19a278u: goto label_19a278;
        case 0x19a27cu: goto label_19a27c;
        case 0x19a280u: goto label_19a280;
        case 0x19a284u: goto label_19a284;
        case 0x19a288u: goto label_19a288;
        case 0x19a28cu: goto label_19a28c;
        case 0x19a290u: goto label_19a290;
        case 0x19a294u: goto label_19a294;
        case 0x19a298u: goto label_19a298;
        case 0x19a29cu: goto label_19a29c;
        case 0x19a2a0u: goto label_19a2a0;
        case 0x19a2a4u: goto label_19a2a4;
        case 0x19a2a8u: goto label_19a2a8;
        case 0x19a2acu: goto label_19a2ac;
        case 0x19a2b0u: goto label_19a2b0;
        case 0x19a2b4u: goto label_19a2b4;
        case 0x19a2b8u: goto label_19a2b8;
        case 0x19a2bcu: goto label_19a2bc;
        case 0x19a2c0u: goto label_19a2c0;
        case 0x19a2c4u: goto label_19a2c4;
        case 0x19a2c8u: goto label_19a2c8;
        case 0x19a2ccu: goto label_19a2cc;
        case 0x19a2d0u: goto label_19a2d0;
        case 0x19a2d4u: goto label_19a2d4;
        case 0x19a2d8u: goto label_19a2d8;
        case 0x19a2dcu: goto label_19a2dc;
        case 0x19a2e0u: goto label_19a2e0;
        case 0x19a2e4u: goto label_19a2e4;
        case 0x19a2e8u: goto label_19a2e8;
        case 0x19a2ecu: goto label_19a2ec;
        case 0x19a2f0u: goto label_19a2f0;
        case 0x19a2f4u: goto label_19a2f4;
        case 0x19a2f8u: goto label_19a2f8;
        case 0x19a2fcu: goto label_19a2fc;
        case 0x19a300u: goto label_19a300;
        case 0x19a304u: goto label_19a304;
        case 0x19a308u: goto label_19a308;
        case 0x19a30cu: goto label_19a30c;
        case 0x19a310u: goto label_19a310;
        case 0x19a314u: goto label_19a314;
        case 0x19a318u: goto label_19a318;
        case 0x19a31cu: goto label_19a31c;
        case 0x19a320u: goto label_19a320;
        case 0x19a324u: goto label_19a324;
        case 0x19a328u: goto label_19a328;
        case 0x19a32cu: goto label_19a32c;
        case 0x19a330u: goto label_19a330;
        case 0x19a334u: goto label_19a334;
        case 0x19a338u: goto label_19a338;
        case 0x19a33cu: goto label_19a33c;
        case 0x19a340u: goto label_19a340;
        case 0x19a344u: goto label_19a344;
        case 0x19a348u: goto label_19a348;
        case 0x19a34cu: goto label_19a34c;
        case 0x19a350u: goto label_19a350;
        case 0x19a354u: goto label_19a354;
        case 0x19a358u: goto label_19a358;
        case 0x19a35cu: goto label_19a35c;
        case 0x19a360u: goto label_19a360;
        case 0x19a364u: goto label_19a364;
        case 0x19a368u: goto label_19a368;
        case 0x19a36cu: goto label_19a36c;
        case 0x19a370u: goto label_19a370;
        case 0x19a374u: goto label_19a374;
        case 0x19a378u: goto label_19a378;
        case 0x19a37cu: goto label_19a37c;
        case 0x19a380u: goto label_19a380;
        case 0x19a384u: goto label_19a384;
        case 0x19a388u: goto label_19a388;
        case 0x19a38cu: goto label_19a38c;
        case 0x19a390u: goto label_19a390;
        case 0x19a394u: goto label_19a394;
        case 0x19a398u: goto label_19a398;
        case 0x19a39cu: goto label_19a39c;
        case 0x19a3a0u: goto label_19a3a0;
        case 0x19a3a4u: goto label_19a3a4;
        case 0x19a3a8u: goto label_19a3a8;
        case 0x19a3acu: goto label_19a3ac;
        case 0x19a3b0u: goto label_19a3b0;
        case 0x19a3b4u: goto label_19a3b4;
        case 0x19a3b8u: goto label_19a3b8;
        case 0x19a3bcu: goto label_19a3bc;
        case 0x19a3c0u: goto label_19a3c0;
        case 0x19a3c4u: goto label_19a3c4;
        case 0x19a3c8u: goto label_19a3c8;
        case 0x19a3ccu: goto label_19a3cc;
        case 0x19a3d0u: goto label_19a3d0;
        case 0x19a3d4u: goto label_19a3d4;
        case 0x19a3d8u: goto label_19a3d8;
        case 0x19a3dcu: goto label_19a3dc;
        case 0x19a3e0u: goto label_19a3e0;
        case 0x19a3e4u: goto label_19a3e4;
        case 0x19a3e8u: goto label_19a3e8;
        case 0x19a3ecu: goto label_19a3ec;
        case 0x19a3f0u: goto label_19a3f0;
        case 0x19a3f4u: goto label_19a3f4;
        case 0x19a3f8u: goto label_19a3f8;
        case 0x19a3fcu: goto label_19a3fc;
        case 0x19a400u: goto label_19a400;
        case 0x19a404u: goto label_19a404;
        case 0x19a408u: goto label_19a408;
        case 0x19a40cu: goto label_19a40c;
        case 0x19a410u: goto label_19a410;
        case 0x19a414u: goto label_19a414;
        case 0x19a418u: goto label_19a418;
        case 0x19a41cu: goto label_19a41c;
        case 0x19a420u: goto label_19a420;
        case 0x19a424u: goto label_19a424;
        case 0x19a428u: goto label_19a428;
        case 0x19a42cu: goto label_19a42c;
        case 0x19a430u: goto label_19a430;
        case 0x19a434u: goto label_19a434;
        case 0x19a438u: goto label_19a438;
        case 0x19a43cu: goto label_19a43c;
        case 0x19a440u: goto label_19a440;
        case 0x19a444u: goto label_19a444;
        case 0x19a448u: goto label_19a448;
        case 0x19a44cu: goto label_19a44c;
        case 0x19a450u: goto label_19a450;
        case 0x19a454u: goto label_19a454;
        case 0x19a458u: goto label_19a458;
        case 0x19a45cu: goto label_19a45c;
        case 0x19a460u: goto label_19a460;
        case 0x19a464u: goto label_19a464;
        case 0x19a468u: goto label_19a468;
        case 0x19a46cu: goto label_19a46c;
        case 0x19a470u: goto label_19a470;
        case 0x19a474u: goto label_19a474;
        case 0x19a478u: goto label_19a478;
        case 0x19a47cu: goto label_19a47c;
        case 0x19a480u: goto label_19a480;
        case 0x19a484u: goto label_19a484;
        case 0x19a488u: goto label_19a488;
        case 0x19a48cu: goto label_19a48c;
        case 0x19a490u: goto label_19a490;
        case 0x19a494u: goto label_19a494;
        case 0x19a498u: goto label_19a498;
        case 0x19a49cu: goto label_19a49c;
        case 0x19a4a0u: goto label_19a4a0;
        case 0x19a4a4u: goto label_19a4a4;
        case 0x19a4a8u: goto label_19a4a8;
        case 0x19a4acu: goto label_19a4ac;
        case 0x19a4b0u: goto label_19a4b0;
        case 0x19a4b4u: goto label_19a4b4;
        case 0x19a4b8u: goto label_19a4b8;
        case 0x19a4bcu: goto label_19a4bc;
        case 0x19a4c0u: goto label_19a4c0;
        case 0x19a4c4u: goto label_19a4c4;
        case 0x19a4c8u: goto label_19a4c8;
        case 0x19a4ccu: goto label_19a4cc;
        case 0x19a4d0u: goto label_19a4d0;
        case 0x19a4d4u: goto label_19a4d4;
        case 0x19a4d8u: goto label_19a4d8;
        case 0x19a4dcu: goto label_19a4dc;
        case 0x19a4e0u: goto label_19a4e0;
        case 0x19a4e4u: goto label_19a4e4;
        case 0x19a4e8u: goto label_19a4e8;
        case 0x19a4ecu: goto label_19a4ec;
        case 0x19a4f0u: goto label_19a4f0;
        case 0x19a4f4u: goto label_19a4f4;
        case 0x19a4f8u: goto label_19a4f8;
        case 0x19a4fcu: goto label_19a4fc;
        case 0x19a500u: goto label_19a500;
        case 0x19a504u: goto label_19a504;
        case 0x19a508u: goto label_19a508;
        case 0x19a50cu: goto label_19a50c;
        case 0x19a510u: goto label_19a510;
        case 0x19a514u: goto label_19a514;
        case 0x19a518u: goto label_19a518;
        case 0x19a51cu: goto label_19a51c;
        case 0x19a520u: goto label_19a520;
        case 0x19a524u: goto label_19a524;
        case 0x19a528u: goto label_19a528;
        case 0x19a52cu: goto label_19a52c;
        case 0x19a530u: goto label_19a530;
        case 0x19a534u: goto label_19a534;
        case 0x19a538u: goto label_19a538;
        case 0x19a53cu: goto label_19a53c;
        case 0x19a540u: goto label_19a540;
        case 0x19a544u: goto label_19a544;
        case 0x19a548u: goto label_19a548;
        case 0x19a54cu: goto label_19a54c;
        case 0x19a550u: goto label_19a550;
        case 0x19a554u: goto label_19a554;
        case 0x19a558u: goto label_19a558;
        case 0x19a55cu: goto label_19a55c;
        case 0x19a560u: goto label_19a560;
        case 0x19a564u: goto label_19a564;
        case 0x19a568u: goto label_19a568;
        case 0x19a56cu: goto label_19a56c;
        case 0x19a570u: goto label_19a570;
        case 0x19a574u: goto label_19a574;
        case 0x19a578u: goto label_19a578;
        case 0x19a57cu: goto label_19a57c;
        case 0x19a580u: goto label_19a580;
        case 0x19a584u: goto label_19a584;
        case 0x19a588u: goto label_19a588;
        case 0x19a58cu: goto label_19a58c;
        case 0x19a590u: goto label_19a590;
        case 0x19a594u: goto label_19a594;
        case 0x19a598u: goto label_19a598;
        case 0x19a59cu: goto label_19a59c;
        case 0x19a5a0u: goto label_19a5a0;
        case 0x19a5a4u: goto label_19a5a4;
        case 0x19a5a8u: goto label_19a5a8;
        case 0x19a5acu: goto label_19a5ac;
        case 0x19a5b0u: goto label_19a5b0;
        case 0x19a5b4u: goto label_19a5b4;
        case 0x19a5b8u: goto label_19a5b8;
        case 0x19a5bcu: goto label_19a5bc;
        case 0x19a5c0u: goto label_19a5c0;
        case 0x19a5c4u: goto label_19a5c4;
        case 0x19a5c8u: goto label_19a5c8;
        case 0x19a5ccu: goto label_19a5cc;
        case 0x19a5d0u: goto label_19a5d0;
        case 0x19a5d4u: goto label_19a5d4;
        case 0x19a5d8u: goto label_19a5d8;
        case 0x19a5dcu: goto label_19a5dc;
        case 0x19a5e0u: goto label_19a5e0;
        case 0x19a5e4u: goto label_19a5e4;
        case 0x19a5e8u: goto label_19a5e8;
        case 0x19a5ecu: goto label_19a5ec;
        case 0x19a5f0u: goto label_19a5f0;
        case 0x19a5f4u: goto label_19a5f4;
        case 0x19a5f8u: goto label_19a5f8;
        case 0x19a5fcu: goto label_19a5fc;
        case 0x19a600u: goto label_19a600;
        case 0x19a604u: goto label_19a604;
        case 0x19a608u: goto label_19a608;
        case 0x19a60cu: goto label_19a60c;
        case 0x19a610u: goto label_19a610;
        case 0x19a614u: goto label_19a614;
        case 0x19a618u: goto label_19a618;
        case 0x19a61cu: goto label_19a61c;
        case 0x19a620u: goto label_19a620;
        case 0x19a624u: goto label_19a624;
        case 0x19a628u: goto label_19a628;
        case 0x19a62cu: goto label_19a62c;
        case 0x19a630u: goto label_19a630;
        case 0x19a634u: goto label_19a634;
        case 0x19a638u: goto label_19a638;
        case 0x19a63cu: goto label_19a63c;
        case 0x19a640u: goto label_19a640;
        case 0x19a644u: goto label_19a644;
        case 0x19a648u: goto label_19a648;
        case 0x19a64cu: goto label_19a64c;
        case 0x19a650u: goto label_19a650;
        case 0x19a654u: goto label_19a654;
        case 0x19a658u: goto label_19a658;
        case 0x19a65cu: goto label_19a65c;
        case 0x19a660u: goto label_19a660;
        case 0x19a664u: goto label_19a664;
        case 0x19a668u: goto label_19a668;
        case 0x19a66cu: goto label_19a66c;
        case 0x19a670u: goto label_19a670;
        case 0x19a674u: goto label_19a674;
        case 0x19a678u: goto label_19a678;
        case 0x19a67cu: goto label_19a67c;
        case 0x19a680u: goto label_19a680;
        case 0x19a684u: goto label_19a684;
        case 0x19a688u: goto label_19a688;
        case 0x19a68cu: goto label_19a68c;
        case 0x19a690u: goto label_19a690;
        case 0x19a694u: goto label_19a694;
        case 0x19a698u: goto label_19a698;
        case 0x19a69cu: goto label_19a69c;
        case 0x19a6a0u: goto label_19a6a0;
        case 0x19a6a4u: goto label_19a6a4;
        case 0x19a6a8u: goto label_19a6a8;
        case 0x19a6acu: goto label_19a6ac;
        case 0x19a6b0u: goto label_19a6b0;
        case 0x19a6b4u: goto label_19a6b4;
        case 0x19a6b8u: goto label_19a6b8;
        case 0x19a6bcu: goto label_19a6bc;
        case 0x19a6c0u: goto label_19a6c0;
        case 0x19a6c4u: goto label_19a6c4;
        case 0x19a6c8u: goto label_19a6c8;
        case 0x19a6ccu: goto label_19a6cc;
        case 0x19a6d0u: goto label_19a6d0;
        case 0x19a6d4u: goto label_19a6d4;
        case 0x19a6d8u: goto label_19a6d8;
        case 0x19a6dcu: goto label_19a6dc;
        case 0x19a6e0u: goto label_19a6e0;
        case 0x19a6e4u: goto label_19a6e4;
        case 0x19a6e8u: goto label_19a6e8;
        case 0x19a6ecu: goto label_19a6ec;
        case 0x19a6f0u: goto label_19a6f0;
        case 0x19a6f4u: goto label_19a6f4;
        case 0x19a6f8u: goto label_19a6f8;
        case 0x19a6fcu: goto label_19a6fc;
        case 0x19a700u: goto label_19a700;
        case 0x19a704u: goto label_19a704;
        case 0x19a708u: goto label_19a708;
        case 0x19a70cu: goto label_19a70c;
        case 0x19a710u: goto label_19a710;
        case 0x19a714u: goto label_19a714;
        case 0x19a718u: goto label_19a718;
        case 0x19a71cu: goto label_19a71c;
        case 0x19a720u: goto label_19a720;
        case 0x19a724u: goto label_19a724;
        case 0x19a728u: goto label_19a728;
        case 0x19a72cu: goto label_19a72c;
        case 0x19a730u: goto label_19a730;
        case 0x19a734u: goto label_19a734;
        case 0x19a738u: goto label_19a738;
        case 0x19a73cu: goto label_19a73c;
        case 0x19a740u: goto label_19a740;
        case 0x19a744u: goto label_19a744;
        case 0x19a748u: goto label_19a748;
        case 0x19a74cu: goto label_19a74c;
        case 0x19a750u: goto label_19a750;
        case 0x19a754u: goto label_19a754;
        case 0x19a758u: goto label_19a758;
        case 0x19a75cu: goto label_19a75c;
        case 0x19a760u: goto label_19a760;
        case 0x19a764u: goto label_19a764;
        case 0x19a768u: goto label_19a768;
        case 0x19a76cu: goto label_19a76c;
        case 0x19a770u: goto label_19a770;
        case 0x19a774u: goto label_19a774;
        case 0x19a778u: goto label_19a778;
        case 0x19a77cu: goto label_19a77c;
        case 0x19a780u: goto label_19a780;
        case 0x19a784u: goto label_19a784;
        case 0x19a788u: goto label_19a788;
        case 0x19a78cu: goto label_19a78c;
        case 0x19a790u: goto label_19a790;
        case 0x19a794u: goto label_19a794;
        case 0x19a798u: goto label_19a798;
        case 0x19a79cu: goto label_19a79c;
        case 0x19a7a0u: goto label_19a7a0;
        case 0x19a7a4u: goto label_19a7a4;
        case 0x19a7a8u: goto label_19a7a8;
        case 0x19a7acu: goto label_19a7ac;
        case 0x19a7b0u: goto label_19a7b0;
        case 0x19a7b4u: goto label_19a7b4;
        case 0x19a7b8u: goto label_19a7b8;
        case 0x19a7bcu: goto label_19a7bc;
        case 0x19a7c0u: goto label_19a7c0;
        case 0x19a7c4u: goto label_19a7c4;
        case 0x19a7c8u: goto label_19a7c8;
        case 0x19a7ccu: goto label_19a7cc;
        case 0x19a7d0u: goto label_19a7d0;
        case 0x19a7d4u: goto label_19a7d4;
        case 0x19a7d8u: goto label_19a7d8;
        case 0x19a7dcu: goto label_19a7dc;
        case 0x19a7e0u: goto label_19a7e0;
        case 0x19a7e4u: goto label_19a7e4;
        case 0x19a7e8u: goto label_19a7e8;
        case 0x19a7ecu: goto label_19a7ec;
        case 0x19a7f0u: goto label_19a7f0;
        case 0x19a7f4u: goto label_19a7f4;
        case 0x19a7f8u: goto label_19a7f8;
        case 0x19a7fcu: goto label_19a7fc;
        case 0x19a800u: goto label_19a800;
        case 0x19a804u: goto label_19a804;
        case 0x19a808u: goto label_19a808;
        case 0x19a80cu: goto label_19a80c;
        case 0x19a810u: goto label_19a810;
        case 0x19a814u: goto label_19a814;
        case 0x19a818u: goto label_19a818;
        case 0x19a81cu: goto label_19a81c;
        case 0x19a820u: goto label_19a820;
        case 0x19a824u: goto label_19a824;
        case 0x19a828u: goto label_19a828;
        case 0x19a82cu: goto label_19a82c;
        case 0x19a830u: goto label_19a830;
        case 0x19a834u: goto label_19a834;
        case 0x19a838u: goto label_19a838;
        case 0x19a83cu: goto label_19a83c;
        case 0x19a840u: goto label_19a840;
        case 0x19a844u: goto label_19a844;
        case 0x19a848u: goto label_19a848;
        case 0x19a84cu: goto label_19a84c;
        case 0x19a850u: goto label_19a850;
        case 0x19a854u: goto label_19a854;
        case 0x19a858u: goto label_19a858;
        case 0x19a85cu: goto label_19a85c;
        case 0x19a860u: goto label_19a860;
        case 0x19a864u: goto label_19a864;
        case 0x19a868u: goto label_19a868;
        case 0x19a86cu: goto label_19a86c;
        case 0x19a870u: goto label_19a870;
        case 0x19a874u: goto label_19a874;
        case 0x19a878u: goto label_19a878;
        case 0x19a87cu: goto label_19a87c;
        case 0x19a880u: goto label_19a880;
        case 0x19a884u: goto label_19a884;
        case 0x19a888u: goto label_19a888;
        case 0x19a88cu: goto label_19a88c;
        case 0x19a890u: goto label_19a890;
        case 0x19a894u: goto label_19a894;
        case 0x19a898u: goto label_19a898;
        case 0x19a89cu: goto label_19a89c;
        case 0x19a8a0u: goto label_19a8a0;
        case 0x19a8a4u: goto label_19a8a4;
        case 0x19a8a8u: goto label_19a8a8;
        case 0x19a8acu: goto label_19a8ac;
        case 0x19a8b0u: goto label_19a8b0;
        case 0x19a8b4u: goto label_19a8b4;
        case 0x19a8b8u: goto label_19a8b8;
        case 0x19a8bcu: goto label_19a8bc;
        case 0x19a8c0u: goto label_19a8c0;
        case 0x19a8c4u: goto label_19a8c4;
        case 0x19a8c8u: goto label_19a8c8;
        case 0x19a8ccu: goto label_19a8cc;
        default: return;
    }

label_19a100:
    if (ctx->pc == 0x19A100u) {
        ctx->pc = 0x19A100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A0FCu;
        // 0x19a100: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A104u;
        goto label_19a104;
    }
    ctx->pc = 0x19A0FCu;
    SET_GPR_U32(ctx, 31, 0x19A104u);
    ctx->pc = 0x19A100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A0FCu;
    // 0x19a100: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1988D0u;
    { ctx->pc = 0x1988d0; return; }
    ctx->pc = 0x19A104u;
label_19a104:
    // 0x19a104: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x19a104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_19a108:
    // 0x19a108: 0x3263000f  andi        $v1, $s3, 0xF
    ctx->pc = 0x19a108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)15);
label_19a10c:
    // 0x19a10c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x19a10cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_19a110:
    // 0x19a110: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x19a110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
label_19a114:
    // 0x19a114: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19a114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_19a118:
    // 0x19a118: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x19a118u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_19a11c:
    // 0x19a11c: 0x42478  dsll        $a0, $a0, 17
    ctx->pc = 0x19a11cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 17);
label_19a120:
    // 0x19a120: 0x1000000a  b           . + 4 + (0xA << 2)
label_19a124:
    if (ctx->pc == 0x19A124u) {
        ctx->pc = 0x19A124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A120u;
        // 0x19a124: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A128u;
        goto label_19a128;
    }
    ctx->pc = 0x19A120u;
    {
        const bool branch_taken_0x19a120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A120u;
        // 0x19a124: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a120) {
            ctx->pc = 0x19A14Cu;
            goto label_19a14c;
        }
    }
    ctx->pc = 0x19A128u;
label_19a128:
    // 0x19a128: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x19a128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_19a12c:
    // 0x19a12c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x19a12cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19a130:
    // 0x19a130: 0xc066234  jal         func_1988D0
label_19a134:
    if (ctx->pc == 0x19A134u) {
        ctx->pc = 0x19A134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A130u;
        // 0x19a134: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A138u;
        goto label_19a138;
    }
    ctx->pc = 0x19A130u;
    SET_GPR_U32(ctx, 31, 0x19A138u);
    ctx->pc = 0x19A134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A130u;
    // 0x19a134: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1988D0u;
    { ctx->pc = 0x1988d0; return; }
    ctx->pc = 0x19A138u;
label_19a138:
    // 0x19a138: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x19a138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_19a13c:
    // 0x19a13c: 0x3263000f  andi        $v1, $s3, 0xF
    ctx->pc = 0x19a13cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)15);
label_19a140:
    // 0x19a140: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x19a140u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_19a144:
    // 0x19a144: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x19a144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
label_19a148:
    // 0x19a148: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19a148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_19a14c:
    // 0x19a14c: 0xfe020010  sd          $v0, 0x10($s0)
    ctx->pc = 0x19a14cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
label_19a150:
    // 0x19a150: 0x111043  sra         $v0, $s1, 1
    ctx->pc = 0x19a150u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 1));
label_19a154:
    // 0x19a154: 0x121843  sra         $v1, $s2, 1
    ctx->pc = 0x19a154u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 18), 1));
label_19a158:
    // 0x19a158: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x19a158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_19a15c:
    // 0x19a15c: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x19a15cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_19a160:
    // 0x19a160: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x19a160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_19a164:
    // 0x19a164: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x19a164u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_19a168:
    // 0x19a168: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x19a168u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_19a16c:
    // 0x19a16c: 0x82102f  dsubu       $v0, $a0, $v0
    ctx->pc = 0x19a16cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) - GPR_U64(ctx, 2));
label_19a170:
    // 0x19a170: 0x83202f  dsubu       $a0, $a0, $v1
    ctx->pc = 0x19a170u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 3));
label_19a174:
    // 0x19a174: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x19a174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
label_19a178:
    // 0x19a178: 0x2646ffff  addiu       $a2, $s2, -0x1
    ctx->pc = 0x19a178u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_19a17c:
    // 0x19a17c: 0x2625ffff  addiu       $a1, $s1, -0x1
    ctx->pc = 0x19a17cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_19a180:
    // 0x19a180: 0x42138  dsll        $a0, $a0, 4
    ctx->pc = 0x19a180u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 4);
label_19a184:
    // 0x19a184: 0xde030040  ld          $v1, 0x40($s0)
    ctx->pc = 0x19a184u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 64)));
label_19a188:
    // 0x19a188: 0xde070050  ld          $a3, 0x50($s0)
    ctx->pc = 0x19a188u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 16), 80)));
label_19a18c:
    // 0x19a18c: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x19a18cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
label_19a190:
    // 0x19a190: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x19a190u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_19a194:
    // 0x19a194: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x19a194u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
label_19a198:
    // 0x19a198: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x19a198u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19a19c:
    // 0x19a19c: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x19a19cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_19a1a0:
    // 0x19a1a0: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x19a1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_19a1a4:
    // 0x19a1a4: 0x6b1825  or          $v1, $v1, $t3
    ctx->pc = 0x19a1a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 11));
label_19a1a8:
    // 0x19a1a8: 0xeb3825  or          $a3, $a3, $t3
    ctx->pc = 0x19a1a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 11));
label_19a1ac:
    // 0x19a1ac: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x19a1acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_19a1b0:
    // 0x19a1b0: 0x2408001a  addiu       $t0, $zero, 0x1A
    ctx->pc = 0x19a1b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_19a1b4:
    // 0x19a1b4: 0x24090046  addiu       $t1, $zero, 0x46
    ctx->pc = 0x19a1b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_19a1b8:
    // 0x19a1b8: 0x240a0045  addiu       $t2, $zero, 0x45
    ctx->pc = 0x19a1b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
label_19a1bc:
    // 0x19a1bc: 0xfe020028  sd          $v0, 0x28($s0)
    ctx->pc = 0x19a1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 2));
label_19a1c0:
    // 0x19a1c0: 0xfe040020  sd          $a0, 0x20($s0)
    ctx->pc = 0x19a1c0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 4));
label_19a1c4:
    // 0x19a1c4: 0x32820002  andi        $v0, $s4, 0x2
    ctx->pc = 0x19a1c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)2);
label_19a1c8:
    // 0x19a1c8: 0xfe050038  sd          $a1, 0x38($s0)
    ctx->pc = 0x19a1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 56), GPR_U64(ctx, 5));
label_19a1cc:
    // 0x19a1cc: 0xfe060030  sd          $a2, 0x30($s0)
    ctx->pc = 0x19a1ccu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 6));
label_19a1d0:
    // 0x19a1d0: 0xfe080048  sd          $t0, 0x48($s0)
    ctx->pc = 0x19a1d0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 8));
label_19a1d4:
    // 0x19a1d4: 0xfe030040  sd          $v1, 0x40($s0)
    ctx->pc = 0x19a1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 3));
label_19a1d8:
    // 0x19a1d8: 0xfe090058  sd          $t1, 0x58($s0)
    ctx->pc = 0x19a1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 88), GPR_U64(ctx, 9));
label_19a1dc:
    // 0x19a1dc: 0xfe070050  sd          $a3, 0x50($s0)
    ctx->pc = 0x19a1dcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 80), GPR_U64(ctx, 7));
label_19a1e0:
    // 0x19a1e0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_19a1e4:
    if (ctx->pc == 0x19A1E4u) {
        ctx->pc = 0x19A1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A1E0u;
        // 0x19a1e4: 0xfe0a0068  sd          $t2, 0x68($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 104), GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A1E8u;
        goto label_19a1e8;
    }
    ctx->pc = 0x19A1E0u;
    {
        const bool branch_taken_0x19a1e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A1E0u;
        // 0x19a1e4: 0xfe0a0068  sd          $t2, 0x68($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 104), GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a1e0) {
            ctx->pc = 0x19A1F4u;
            goto label_19a1f4;
        }
    }
    ctx->pc = 0x19A1E8u;
label_19a1e8:
    // 0x19a1e8: 0xde020060  ld          $v0, 0x60($s0)
    ctx->pc = 0x19a1e8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 96)));
label_19a1ec:
    // 0x19a1ec: 0x10000004  b           . + 4 + (0x4 << 2)
label_19a1f0:
    if (ctx->pc == 0x19A1F0u) {
        ctx->pc = 0x19A1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A1ECu;
        // 0x19a1f0: 0x4b1025  or          $v0, $v0, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A1F4u;
        goto label_19a1f4;
    }
    ctx->pc = 0x19A1ECu;
    {
        const bool branch_taken_0x19a1ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A1ECu;
        // 0x19a1f0: 0x4b1025  or          $v0, $v0, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a1ec) {
            ctx->pc = 0x19A200u;
            goto label_19a200;
        }
    }
    ctx->pc = 0x19A1F4u;
label_19a1f4:
    // 0x19a1f4: 0xde020060  ld          $v0, 0x60($s0)
    ctx->pc = 0x19a1f4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 96)));
label_19a1f8:
    // 0x19a1f8: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x19a1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_19a1fc:
    // 0x19a1fc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x19a1fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_19a200:
    // 0x19a200: 0xfe020060  sd          $v0, 0x60($s0)
    ctx->pc = 0x19a200u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 96), GPR_U64(ctx, 2));
label_19a204:
    // 0x19a204: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x19a204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_19a208:
    // 0x19a208: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
label_19a20c:
    if (ctx->pc == 0x19A20Cu) {
        ctx->pc = 0x19A20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A208u;
        // 0x19a20c: 0xfe020078  sd          $v0, 0x78($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 120), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A210u;
        goto label_19a210;
    }
    ctx->pc = 0x19A208u;
    {
        const bool branch_taken_0x19a208 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A208u;
        // 0x19a20c: 0xfe020078  sd          $v0, 0x78($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 120), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a208) {
            ctx->pc = 0x19A224u;
            goto label_19a224;
        }
    }
    ctx->pc = 0x19A210u;
label_19a210:
    // 0x19a210: 0x32a20003  andi        $v0, $s5, 0x3
    ctx->pc = 0x19a210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)3);
label_19a214:
    // 0x19a214: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x19a214u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_19a218:
    // 0x19a218: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x19a218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
label_19a21c:
    // 0x19a21c: 0x10000002  b           . + 4 + (0x2 << 2)
label_19a220:
    if (ctx->pc == 0x19A220u) {
        ctx->pc = 0x19A220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A21Cu;
        // 0x19a220: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A224u;
        goto label_19a224;
    }
    ctx->pc = 0x19A21Cu;
    {
        const bool branch_taken_0x19a21c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A21Cu;
        // 0x19a220: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a21c) {
            ctx->pc = 0x19A228u;
            goto label_19a228;
        }
    }
    ctx->pc = 0x19A224u;
label_19a224:
    // 0x19a224: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x19a224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_19a228:
    // 0x19a228: 0xfe020070  sd          $v0, 0x70($s0)
    ctx->pc = 0x19a228u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 112), GPR_U64(ctx, 2));
label_19a22c:
    // 0x19a22c: 0xf  sync
    ctx->pc = 0x19a22cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_19a230:
    // 0x19a230: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x19a230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_19a234:
    // 0x19a234: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x19a234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_19a238:
    // 0x19a238: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x19a238u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_19a23c:
    // 0x19a23c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x19a23cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_19a240:
    // 0x19a240: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x19a240u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19a244:
    // 0x19a244: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x19a244u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19a248:
    // 0x19a248: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x19a248u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19a24c:
    // 0x19a24c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19a24cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19a250:
    // 0x19a250: 0x3e00008  jr          $ra
label_19a254:
    if (ctx->pc == 0x19A254u) {
        ctx->pc = 0x19A254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A250u;
        // 0x19a254: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A258u;
        goto label_19a258;
    }
    ctx->pc = 0x19A250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A250u;
        // 0x19a254: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19A258u;
label_19a258:
    // 0x19a258: 0xdc820030  ld          $v0, 0x30($a0)
    ctx->pc = 0x19a258u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 48)));
label_19a25c:
    // 0x19a25c: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x19a25cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
label_19a260:
    // 0x19a260: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x19a260u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
label_19a264:
    // 0x19a264: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x19a264u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
label_19a268:
    // 0x19a268: 0x21c3a  dsrl        $v1, $v0, 16
    ctx->pc = 0x19a268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> 16);
label_19a26c:
    // 0x19a26c: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x19a26cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
label_19a270:
    // 0x19a270: 0x2143e  dsrl32      $v0, $v0, 16
    ctx->pc = 0x19a270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 16));
label_19a274:
    // 0x19a274: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x19a274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
label_19a278:
    // 0x19a278: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x19a278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
label_19a27c:
    // 0x19a27c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x19a27cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_19a280:
    // 0x19a280: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x19a280u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_19a284:
    // 0x19a284: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x19a284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_19a288:
    // 0x19a288: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x19a288u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_19a28c:
    // 0x19a28c: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x19a28cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
label_19a290:
    // 0x19a290: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19a290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_19a294:
    // 0x19a294: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x19a294u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
label_19a298:
    // 0x19a298: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19a298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_19a29c:
    // 0x19a29c: 0x2107a  dsrl        $v0, $v0, 1
    ctx->pc = 0x19a29cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
label_19a2a0:
    // 0x19a2a0: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x19a2a0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
label_19a2a4:
    // 0x19a2a4: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x19a2a4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_19a2a8:
    // 0x19a2a8: 0x3187a  dsrl        $v1, $v1, 1
    ctx->pc = 0x19a2a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 1);
label_19a2ac:
    // 0x19a2ac: 0xc2302f  dsubu       $a2, $a2, $v0
    ctx->pc = 0x19a2acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) - GPR_U64(ctx, 2));
label_19a2b0:
    // 0x19a2b0: 0xa3282f  dsubu       $a1, $a1, $v1
    ctx->pc = 0x19a2b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) - GPR_U64(ctx, 3));
label_19a2b4:
    // 0x19a2b4: 0x61138  dsll        $v0, $a2, 4
    ctx->pc = 0x19a2b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 4);
label_19a2b8:
    // 0x19a2b8: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x19a2b8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_19a2bc:
    // 0x19a2bc: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
label_19a2c0:
    if (ctx->pc == 0x19A2C0u) {
        ctx->pc = 0x19A2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A2BCu;
        // 0x19a2c0: 0x52938  dsll        $a1, $a1, 4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A2C4u;
        goto label_19a2c4;
    }
    ctx->pc = 0x19A2BCu;
    {
        const bool branch_taken_0x19a2bc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A2BCu;
        // 0x19a2c0: 0x52938  dsll        $a1, $a1, 4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a2bc) {
            ctx->pc = 0x19A2D0u;
            goto label_19a2d0;
        }
    }
    ctx->pc = 0x19A2C4u;
label_19a2c4:
    // 0x19a2c4: 0x64420008  daddiu      $v0, $v0, 0x8
    ctx->pc = 0x19a2c4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)8);
label_19a2c8:
    // 0x19a2c8: 0x10000002  b           . + 4 + (0x2 << 2)
label_19a2cc:
    if (ctx->pc == 0x19A2CCu) {
        ctx->pc = 0x19A2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A2C8u;
        // 0x19a2cc: 0x2103c  dsll32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A2D0u;
        goto label_19a2d0;
    }
    ctx->pc = 0x19A2C8u;
    {
        const bool branch_taken_0x19a2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A2C8u;
        // 0x19a2cc: 0x2103c  dsll32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a2c8) {
            ctx->pc = 0x19A2D4u;
            goto label_19a2d4;
        }
    }
    ctx->pc = 0x19A2D0u;
label_19a2d0:
    // 0x19a2d0: 0x6113c  dsll32      $v0, $a2, 4
    ctx->pc = 0x19a2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 4));
label_19a2d4:
    // 0x19a2d4: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x19a2d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_19a2d8:
    // 0x19a2d8: 0x3e00008  jr          $ra
label_19a2dc:
    if (ctx->pc == 0x19A2DCu) {
        ctx->pc = 0x19A2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A2D8u;
        // 0x19a2dc: 0xfc820020  sd          $v0, 0x20($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A2E0u;
        goto label_19a2e0;
    }
    ctx->pc = 0x19A2D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A2D8u;
        // 0x19a2dc: 0xfc820020  sd          $v0, 0x20($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A2D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19A2E0u;
label_19a2e0:
    // 0x19a2e0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x19a2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_19a2e4:
    // 0x19a2e4: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x19a2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
label_19a2e8:
    // 0x19a2e8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x19a2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_19a2ec:
    // 0x19a2ec: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x19a2ecu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
label_19a2f0:
    // 0x19a2f0: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x19a2f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
label_19a2f4:
    // 0x19a2f4: 0x98400  sll         $s0, $t1, 16
    ctx->pc = 0x19a2f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
label_19a2f8:
    // 0x19a2f8: 0xffb700a0  sd          $s7, 0xA0($sp)
    ctx->pc = 0x19a2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
label_19a2fc:
    // 0x19a2fc: 0xa5400  sll         $t2, $t2, 16
    ctx->pc = 0x19a2fcu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
label_19a300:
    // 0x19a300: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x19a300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
label_19a304:
    // 0x19a304: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x19a304u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
label_19a308:
    // 0x19a308: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x19a308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
label_19a30c:
    // 0x19a30c: 0x8b403  sra         $s6, $t0, 16
    ctx->pc = 0x19a30cu;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 8), 16));
label_19a310:
    // 0x19a310: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x19a310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_19a314:
    // 0x19a314: 0x5ac03  sra         $s5, $a1, 16
    ctx->pc = 0x19a314u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 5), 16));
label_19a318:
    // 0x19a318: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x19a318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
label_19a31c:
    // 0x19a31c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x19a31cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19a320:
    // 0x19a320: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x19a320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
label_19a324:
    // 0x19a324: 0xabc03  sra         $s7, $t2, 16
    ctx->pc = 0x19a324u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 10), 16));
label_19a328:
    // 0x19a328: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x19a328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
label_19a32c:
    // 0x19a32c: 0x68c00  sll         $s1, $a2, 16
    ctx->pc = 0x19a32cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
label_19a330:
    // 0x19a330: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x19a330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_19a334:
    // 0x19a334: 0xc06614a  jal         func_198528
label_19a338:
    if (ctx->pc == 0x19A338u) {
        ctx->pc = 0x19A338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A334u;
        // 0x19a338: 0x7f400  sll         $fp, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A33Cu;
        goto label_19a33c;
    }
    ctx->pc = 0x19A334u;
    SET_GPR_U32(ctx, 31, 0x19A33Cu);
    ctx->pc = 0x19A338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A334u;
    // 0x19a338: 0x7f400  sll         $fp, $a3, 16 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198528u;
    { ctx->pc = 0x198528; return; }
    ctx->pc = 0x19A33Cu;
label_19a33c:
    // 0x19a33c: 0x119c03  sra         $s3, $s1, 16
    ctx->pc = 0x19a33cu;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 17), 16));
label_19a340:
    // 0x19a340: 0x1ea403  sra         $s4, $fp, 16
    ctx->pc = 0x19a340u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 30), 16));
label_19a344:
    // 0x19a344: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x19a344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_19a348:
    // 0x19a348: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19a348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19a34c:
    // 0x19a34c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x19a34cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19a350:
    // 0x19a350: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x19a350u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19a354:
    // 0x19a354: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x19a354u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_19a358:
    // 0x19a358: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19a358u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19a35c:
    // 0x19a35c: 0xc066168  jal         func_1985A0
label_19a360:
    if (ctx->pc == 0x19A360u) {
        ctx->pc = 0x19A360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A35Cu;
        // 0x19a360: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A364u;
        goto label_19a364;
    }
    ctx->pc = 0x19A35Cu;
    SET_GPR_U32(ctx, 31, 0x19A364u);
    ctx->pc = 0x19A360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A35Cu;
    // 0x19a360: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1985A0u;
    { ctx->pc = 0x1985a0; return; }
    ctx->pc = 0x19A364u;
label_19a364:
    // 0x19a364: 0x26440028  addiu       $a0, $s2, 0x28
    ctx->pc = 0x19a364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
label_19a368:
    // 0x19a368: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x19a368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19a36c:
    // 0x19a36c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x19a36cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19a370:
    // 0x19a370: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x19a370u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_19a374:
    // 0x19a374: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19a374u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19a378:
    // 0x19a378: 0xc066168  jal         func_1985A0
label_19a37c:
    if (ctx->pc == 0x19A37Cu) {
        ctx->pc = 0x19A37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A378u;
        // 0x19a37c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A380u;
        goto label_19a380;
    }
    ctx->pc = 0x19A378u;
    SET_GPR_U32(ctx, 31, 0x19A380u);
    ctx->pc = 0x19A37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A378u;
    // 0x19a37c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1985A0u;
    { ctx->pc = 0x1985a0; return; }
    ctx->pc = 0x19A380u;
label_19a380:
    // 0x19a380: 0x26440060  addiu       $a0, $s2, 0x60
    ctx->pc = 0x19a380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
label_19a384:
    // 0x19a384: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x19a384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19a388:
    // 0x19a388: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x19a388u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19a38c:
    // 0x19a38c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x19a38cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_19a390:
    // 0x19a390: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x19a390u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_19a394:
    // 0x19a394: 0xc066266  jal         func_198998
label_19a398:
    if (ctx->pc == 0x19A398u) {
        ctx->pc = 0x19A398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A394u;
        // 0x19a398: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A39Cu;
        goto label_19a39c;
    }
    ctx->pc = 0x19A394u;
    SET_GPR_U32(ctx, 31, 0x19A39Cu);
    ctx->pc = 0x19A398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A394u;
    // 0x19a398: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198998u;
    { ctx->pc = 0x198998; return; }
    ctx->pc = 0x19A39Cu;
label_19a39c:
    // 0x19a39c: 0x264400e0  addiu       $a0, $s2, 0xE0
    ctx->pc = 0x19a39cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
label_19a3a0:
    // 0x19a3a0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x19a3a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19a3a4:
    // 0x19a3a4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x19a3a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19a3a8:
    // 0x19a3a8: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x19a3a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_19a3ac:
    // 0x19a3ac: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x19a3acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_19a3b0:
    // 0x19a3b0: 0xc06681e  jal         func_19A078
label_19a3b4:
    if (ctx->pc == 0x19A3B4u) {
        ctx->pc = 0x19A3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A3B0u;
        // 0x19a3b4: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A3B8u;
        goto label_19a3b8;
    }
    ctx->pc = 0x19A3B0u;
    SET_GPR_U32(ctx, 31, 0x19A3B8u);
    ctx->pc = 0x19A3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A3B0u;
    // 0x19a3b4: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A078u;
    { ctx->pc = 0x19a078; return; }
    ctx->pc = 0x19A3B8u;
label_19a3b8:
    // 0x19a3b8: 0x264401d0  addiu       $a0, $s2, 0x1D0
    ctx->pc = 0x19a3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 464));
label_19a3bc:
    // 0x19a3bc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x19a3bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19a3c0:
    // 0x19a3c0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x19a3c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19a3c4:
    // 0x19a3c4: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x19a3c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_19a3c8:
    // 0x19a3c8: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x19a3c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_19a3cc:
    // 0x19a3cc: 0xc066266  jal         func_198998
label_19a3d0:
    if (ctx->pc == 0x19A3D0u) {
        ctx->pc = 0x19A3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A3CCu;
        // 0x19a3d0: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A3D4u;
        goto label_19a3d4;
    }
    ctx->pc = 0x19A3CCu;
    SET_GPR_U32(ctx, 31, 0x19A3D4u);
    ctx->pc = 0x19A3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A3CCu;
    // 0x19a3d0: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198998u;
    { ctx->pc = 0x198998; return; }
    ctx->pc = 0x19A3D4u;
label_19a3d4:
    // 0x19a3d4: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x19a3d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19a3d8:
    // 0x19a3d8: 0x26440250  addiu       $a0, $s2, 0x250
    ctx->pc = 0x19a3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 592));
label_19a3dc:
    // 0x19a3dc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x19a3dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19a3e0:
    // 0x19a3e0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x19a3e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19a3e4:
    // 0x19a3e4: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x19a3e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_19a3e8:
    // 0x19a3e8: 0xc06681e  jal         func_19A078
label_19a3ec:
    if (ctx->pc == 0x19A3ECu) {
        ctx->pc = 0x19A3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A3E8u;
        // 0x19a3ec: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A3F0u;
        goto label_19a3f0;
    }
    ctx->pc = 0x19A3E8u;
    SET_GPR_U32(ctx, 31, 0x19A3F0u);
    ctx->pc = 0x19A3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A3E8u;
    // 0x19a3ec: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A078u;
    { ctx->pc = 0x19a078; return; }
    ctx->pc = 0x19A3F0u;
label_19a3f0:
    // 0x19a3f0: 0x12e0001d  beqz        $s7, . + 4 + (0x1D << 2)
label_19a3f4:
    if (ctx->pc == 0x19A3F4u) {
        ctx->pc = 0x19A3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A3F0u;
        // 0x19a3f4: 0x111443  sra         $v0, $s1, 17 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A3F8u;
        goto label_19a3f8;
    }
    ctx->pc = 0x19A3F0u;
    {
        const bool branch_taken_0x19a3f0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A3F0u;
        // 0x19a3f4: 0x111443  sra         $v0, $s1, 17 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a3f0) {
            ctx->pc = 0x19A468u;
            goto label_19a468;
        }
    }
    ctx->pc = 0x19A3F8u;
label_19a3f8:
    // 0x19a3f8: 0x24100800  addiu       $s0, $zero, 0x800
    ctx->pc = 0x19a3f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_19a3fc:
    // 0x19a3fc: 0x1e8c43  sra         $s1, $fp, 17
    ctx->pc = 0x19a3fcu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 30), 17));
label_19a400:
    // 0x19a400: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x19a400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_19a404:
    // 0x19a404: 0x2118823  subu        $s1, $s0, $s1
    ctx->pc = 0x19a404u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_19a408:
    // 0x19a408: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x19a408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_19a40c:
    // 0x19a40c: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x19a40cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_19a410:
    // 0x19a410: 0x26440160  addiu       $a0, $s2, 0x160
    ctx->pc = 0x19a410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 352));
label_19a414:
    // 0x19a414: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x19a414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_19a418:
    // 0x19a418: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x19a418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_19a41c:
    // 0x19a41c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x19a41cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19a420:
    // 0x19a420: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x19a420u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19a424:
    // 0x19a424: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x19a424u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19a428:
    // 0x19a428: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x19a428u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_19a42c:
    // 0x19a42c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x19a42cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19a430:
    // 0x19a430: 0xc0662e0  jal         func_198B80
label_19a434:
    if (ctx->pc == 0x19A434u) {
        ctx->pc = 0x19A434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A430u;
        // 0x19a434: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A438u;
        goto label_19a438;
    }
    ctx->pc = 0x19A430u;
    SET_GPR_U32(ctx, 31, 0x19A438u);
    ctx->pc = 0x19A434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A430u;
    // 0x19a434: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198B80u;
    { ctx->pc = 0x198b80; return; }
    ctx->pc = 0x19A438u;
label_19a438:
    // 0x19a438: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x19a438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_19a43c:
    // 0x19a43c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x19a43cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19a440:
    // 0x19a440: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x19a440u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19a444:
    // 0x19a444: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x19a444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_19a448:
    // 0x19a448: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x19a448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_19a44c:
    // 0x19a44c: 0x264402d0  addiu       $a0, $s2, 0x2D0
    ctx->pc = 0x19a44cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 720));
label_19a450:
    // 0x19a450: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x19a450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_19a454:
    // 0x19a454: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x19a454u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19a458:
    // 0x19a458: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x19a458u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_19a45c:
    // 0x19a45c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x19a45cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19a460:
    // 0x19a460: 0xc0662e0  jal         func_198B80
label_19a464:
    if (ctx->pc == 0x19A464u) {
        ctx->pc = 0x19A464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A460u;
        // 0x19a464: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A468u;
        goto label_19a468;
    }
    ctx->pc = 0x19A460u;
    SET_GPR_U32(ctx, 31, 0x19A468u);
    ctx->pc = 0x19A464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A460u;
    // 0x19a464: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198B80u;
    { ctx->pc = 0x198b80; return; }
    ctx->pc = 0x19A468u;
label_19a468:
    // 0x19a468: 0x700014a9  por         $v0, $zero, $zero
    ctx->pc = 0x19a468u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_19a46c:
    // 0x19a46c: 0x24070016  addiu       $a3, $zero, 0x16
    ctx->pc = 0x19a46cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_19a470:
    // 0x19a470: 0x7e420050  sq          $v0, 0x50($s2)
    ctx->pc = 0x19a470u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 80), GPR_VEC(ctx, 2));
label_19a474:
    // 0x19a474: 0x24068000  addiu       $a2, $zero, -0x8000
    ctx->pc = 0x19a474u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
label_19a478:
    // 0x19a478: 0x7e4201c0  sq          $v0, 0x1C0($s2)
    ctx->pc = 0x19a478u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 448), GPR_VEC(ctx, 2));
label_19a47c:
    // 0x19a47c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x19a47cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_19a480:
    // 0x19a480: 0xde440050  ld          $a0, 0x50($s2)
    ctx->pc = 0x19a480u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 80)));
label_19a484:
    // 0x19a484: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x19a484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_19a488:
    // 0x19a488: 0xde4501c0  ld          $a1, 0x1C0($s2)
    ctx->pc = 0x19a488u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 448)));
label_19a48c:
    // 0x19a48c: 0xf7100b  movn        $v0, $a3, $s7
    ctx->pc = 0x19a48cu;
    if (GPR_U64(ctx, 23) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
label_19a490:
    // 0x19a490: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x19a490u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
label_19a494:
    // 0x19a494: 0xf7180b  movn        $v1, $a3, $s7
    ctx->pc = 0x19a494u;
    if (GPR_U64(ctx, 23) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
label_19a498:
    // 0x19a498: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x19a498u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
label_19a49c:
    // 0x19a49c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x19a49cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_19a4a0:
    // 0x19a4a0: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x19a4a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_19a4a4:
    // 0x19a4a4: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x19a4a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_19a4a8:
    // 0x19a4a8: 0xde460058  ld          $a2, 0x58($s2)
    ctx->pc = 0x19a4a8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 18), 88)));
label_19a4ac:
    // 0x19a4ac: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x19a4acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_19a4b0:
    // 0x19a4b0: 0xde4701c8  ld          $a3, 0x1C8($s2)
    ctx->pc = 0x19a4b0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 18), 456)));
label_19a4b4:
    // 0x19a4b4: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x19a4b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_19a4b8:
    // 0x19a4b8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x19a4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_19a4bc:
    // 0x19a4bc: 0x3193a  dsrl        $v1, $v1, 4
    ctx->pc = 0x19a4bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 4);
label_19a4c0:
    // 0x19a4c0: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x19a4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_19a4c4:
    // 0x19a4c4: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x19a4c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_19a4c8:
    // 0x19a4c8: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x19a4c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
label_19a4cc:
    // 0x19a4cc: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x19a4ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_19a4d0:
    // 0x19a4d0: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x19a4d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_19a4d4:
    // 0x19a4d4: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x19a4d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_19a4d8:
    // 0x19a4d8: 0x31b7c  dsll32      $v1, $v1, 13
    ctx->pc = 0x19a4d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 13));
label_19a4dc:
    // 0x19a4dc: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x19a4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_19a4e0:
    // 0x19a4e0: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x19a4e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_19a4e4:
    // 0x19a4e4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x19a4e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_19a4e8:
    // 0x19a4e8: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x19a4e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_19a4ec:
    // 0x19a4ec: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x19a4ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_19a4f0:
    // 0x19a4f0: 0xfe440050  sd          $a0, 0x50($s2)
    ctx->pc = 0x19a4f0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 80), GPR_U64(ctx, 4));
label_19a4f4:
    // 0x19a4f4: 0xfe460058  sd          $a2, 0x58($s2)
    ctx->pc = 0x19a4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 88), GPR_U64(ctx, 6));
label_19a4f8:
    // 0x19a4f8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x19a4f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19a4fc:
    // 0x19a4fc: 0xfe4501c0  sd          $a1, 0x1C0($s2)
    ctx->pc = 0x19a4fcu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 448), GPR_U64(ctx, 5));
label_19a500:
    // 0x19a500: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x19a500u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_19a504:
    // 0x19a504: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x19a504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19a508:
    // 0x19a508: 0xc066234  jal         func_1988D0
label_19a50c:
    if (ctx->pc == 0x19A50Cu) {
        ctx->pc = 0x19A50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A508u;
        // 0x19a50c: 0xfe4701c8  sd          $a3, 0x1C8($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 456), GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A510u;
        goto label_19a510;
    }
    ctx->pc = 0x19A508u;
    SET_GPR_U32(ctx, 31, 0x19A510u);
    ctx->pc = 0x19A50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A508u;
    // 0x19a50c: 0xfe4701c8  sd          $a3, 0x1C8($s2) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 18), 456), GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1988D0u;
    { ctx->pc = 0x1988d0; return; }
    ctx->pc = 0x19A510u;
label_19a510:
    // 0x19a510: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x19a510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_19a514:
    // 0x19a514: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19a514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19a518:
    // 0x19a518: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19a518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19a51c:
    // 0x19a51c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x19a51cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_19a520:
    // 0x19a520: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x19a520u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
label_19a524:
    // 0x19a524: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x19a524u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_19a528:
    // 0x19a528: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x19a528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_19a52c:
    // 0x19a52c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x19a52cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_19a530:
    // 0x19a530: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x19a530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_19a534:
    // 0x19a534: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x19a534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_19a538:
    // 0x19a538: 0x10440004  beq         $v0, $a0, . + 4 + (0x4 << 2)
label_19a53c:
    if (ctx->pc == 0x19A53Cu) {
        ctx->pc = 0x19A53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A538u;
        // 0x19a53c: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A540u;
        goto label_19a540;
    }
    ctx->pc = 0x19A538u;
    {
        const bool branch_taken_0x19a538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x19A53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A538u;
        // 0x19a53c: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a538) {
            ctx->pc = 0x19A54Cu;
            goto label_19a54c;
        }
    }
    ctx->pc = 0x19A540u;
label_19a540:
    // 0x19a540: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x19a540u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_19a544:
    // 0x19a544: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_19a548:
    if (ctx->pc == 0x19A548u) {
        ctx->pc = 0x19A548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A544u;
        // 0x19a548: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A54Cu;
        goto label_19a54c;
    }
    ctx->pc = 0x19A544u;
    {
        const bool branch_taken_0x19a544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19A548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A544u;
        // 0x19a548: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a544) {
            ctx->pc = 0x19A598u;
            goto label_19a598;
        }
    }
    ctx->pc = 0x19A54Cu;
label_19a54c:
    // 0x19a54c: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x19a54cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
label_19a550:
    // 0x19a550: 0xde460038  ld          $a2, 0x38($s2)
    ctx->pc = 0x19a550u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 18), 56)));
label_19a554:
    // 0x19a554: 0xde470060  ld          $a3, 0x60($s2)
    ctx->pc = 0x19a554u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 18), 96)));
label_19a558:
    // 0x19a558: 0x51c00  sll         $v1, $a1, 16
    ctx->pc = 0x19a558u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
label_19a55c:
    // 0x19a55c: 0xde4400e0  ld          $a0, 0xE0($s2)
    ctx->pc = 0x19a55cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 224)));
label_19a560:
    // 0x19a560: 0x2402fe00  addiu       $v0, $zero, -0x200
    ctx->pc = 0x19a560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966784));
label_19a564:
    // 0x19a564: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x19a564u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_19a568:
    // 0x19a568: 0x30a501ff  andi        $a1, $a1, 0x1FF
    ctx->pc = 0x19a568u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)511);
label_19a56c:
    // 0x19a56c: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x19a56cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_19a570:
    // 0x19a570: 0x306301ff  andi        $v1, $v1, 0x1FF
    ctx->pc = 0x19a570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)511);
label_19a574:
    // 0x19a574: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x19a574u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_19a578:
    // 0x19a578: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x19a578u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
label_19a57c:
    // 0x19a57c: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x19a57cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_19a580:
    // 0x19a580: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x19a580u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_19a584:
    // 0x19a584: 0xe53825  or          $a3, $a3, $a1
    ctx->pc = 0x19a584u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
label_19a588:
    // 0x19a588: 0xfe4400e0  sd          $a0, 0xE0($s2)
    ctx->pc = 0x19a588u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 224), GPR_U64(ctx, 4));
label_19a58c:
    // 0x19a58c: 0xfe460038  sd          $a2, 0x38($s2)
    ctx->pc = 0x19a58cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 56), GPR_U64(ctx, 6));
label_19a590:
    // 0x19a590: 0xfe470060  sd          $a3, 0x60($s2)
    ctx->pc = 0x19a590u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 96), GPR_U64(ctx, 7));
label_19a594:
    // 0x19a594: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x19a594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_19a598:
    // 0x19a598: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x19a598u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_19a59c:
    // 0x19a59c: 0xdfb700a0  ld          $s7, 0xA0($sp)
    ctx->pc = 0x19a59cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_19a5a0:
    // 0x19a5a0: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x19a5a0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_19a5a4:
    // 0x19a5a4: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x19a5a4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_19a5a8:
    // 0x19a5a8: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x19a5a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_19a5ac:
    // 0x19a5ac: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x19a5acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_19a5b0:
    // 0x19a5b0: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x19a5b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_19a5b4:
    // 0x19a5b4: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x19a5b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_19a5b8:
    // 0x19a5b8: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x19a5b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19a5bc:
    // 0x19a5bc: 0x3e00008  jr          $ra
label_19a5c0:
    if (ctx->pc == 0x19A5C0u) {
        ctx->pc = 0x19A5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A5BCu;
        // 0x19a5c0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A5C4u;
        goto label_19a5c4;
    }
    ctx->pc = 0x19A5BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A5BCu;
        // 0x19a5c0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A5BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19A5C4u;
label_19a5c4:
    // 0x19a5c4: 0x0  nop
    ctx->pc = 0x19a5c4u;
    // NOP
label_19a5c8:
    // 0x19a5c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19a5c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_19a5cc:
    // 0x19a5cc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x19a5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_19a5d0:
    // 0x19a5d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19a5d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19a5d4:
    // 0x19a5d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19a5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19a5d8:
    // 0x19a5d8: 0x30b00001  andi        $s0, $a1, 0x1
    ctx->pc = 0x19a5d8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_19a5dc:
    // 0x19a5dc: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x19a5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_19a5e0:
    // 0x19a5e0: 0x2041018  mult        $v0, $s0, $a0
    ctx->pc = 0x19a5e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_19a5e4:
    // 0x19a5e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19a5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_19a5e8:
    // 0x19a5e8: 0xc066204  jal         func_198810
label_19a5ec:
    if (ctx->pc == 0x19A5ECu) {
        ctx->pc = 0x19A5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A5E8u;
        // 0x19a5ec: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A5F0u;
        goto label_19a5f0;
    }
    ctx->pc = 0x19A5E8u;
    SET_GPR_U32(ctx, 31, 0x19A5F0u);
    ctx->pc = 0x19A5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A5E8u;
    // 0x19a5ec: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198810u;
    { ctx->pc = 0x198810; return; }
    ctx->pc = 0x19A5F0u;
label_19a5f0:
    // 0x19a5f0: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_19a5f4:
    if (ctx->pc == 0x19A5F4u) {
        ctx->pc = 0x19A5F8u;
        goto label_19a5f8;
    }
    ctx->pc = 0x19A5F0u;
    {
        const bool branch_taken_0x19a5f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a5f0) {
            ctx->pc = 0x19A608u;
            goto label_19a608;
        }
    }
    ctx->pc = 0x19A5F8u;
label_19a5f8:
    // 0x19a5f8: 0xc066322  jal         func_198C88
label_19a5fc:
    if (ctx->pc == 0x19A5FCu) {
        ctx->pc = 0x19A5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A5F8u;
        // 0x19a5fc: 0x262401c0  addiu       $a0, $s1, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 448));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A600u;
        goto label_19a600;
    }
    ctx->pc = 0x19A5F8u;
    SET_GPR_U32(ctx, 31, 0x19A600u);
    ctx->pc = 0x19A5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A5F8u;
    // 0x19a5fc: 0x262401c0  addiu       $a0, $s1, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198C88u;
    { ctx->pc = 0x198c88; return; }
    ctx->pc = 0x19A600u;
label_19a600:
    // 0x19a600: 0x10000004  b           . + 4 + (0x4 << 2)
label_19a604:
    if (ctx->pc == 0x19A604u) {
        ctx->pc = 0x19A604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A600u;
        // 0x19a604: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A608u;
        goto label_19a608;
    }
    ctx->pc = 0x19A600u;
    {
        const bool branch_taken_0x19a600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A600u;
        // 0x19a604: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a600) {
            ctx->pc = 0x19A614u;
            goto label_19a614;
        }
    }
    ctx->pc = 0x19A608u;
label_19a608:
    // 0x19a608: 0xc066322  jal         func_198C88
label_19a60c:
    if (ctx->pc == 0x19A60Cu) {
        ctx->pc = 0x19A60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A608u;
        // 0x19a60c: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A610u;
        goto label_19a610;
    }
    ctx->pc = 0x19A608u;
    SET_GPR_U32(ctx, 31, 0x19A610u);
    ctx->pc = 0x19A60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A608u;
    // 0x19a60c: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198C88u;
    { ctx->pc = 0x198c88; return; }
    ctx->pc = 0x19A610u;
label_19a610:
    // 0x19a610: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19a610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19a614:
    // 0x19a614: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x19a614u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19a618:
    // 0x19a618: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19a618u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19a61c:
    // 0x19a61c: 0x3e00008  jr          $ra
label_19a620:
    if (ctx->pc == 0x19A620u) {
        ctx->pc = 0x19A620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A61Cu;
        // 0x19a620: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A624u;
        goto label_19a624;
    }
    ctx->pc = 0x19A61Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A61Cu;
        // 0x19a620: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A61Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19A624u;
label_19a624:
    // 0x19a624: 0x0  nop
    ctx->pc = 0x19a624u;
    // NOP
label_19a628:
    // 0x19a628: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_19a62c:
    if (ctx->pc == 0x19A62Cu) {
        ctx->pc = 0x19A62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A628u;
        // 0x19a62c: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A630u;
        goto label_19a630;
    }
    ctx->pc = 0x19A628u;
    {
        const bool branch_taken_0x19a628 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A628u;
        // 0x19a62c: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a628) {
            ctx->pc = 0x19A654u;
            goto label_19a654;
        }
    }
    ctx->pc = 0x19A630u;
label_19a630:
    // 0x19a630: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x19a630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_19a634:
    // 0x19a634: 0x0  nop
    ctx->pc = 0x19a634u;
    // NOP
label_19a638:
    // 0x19a638: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x19a638u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_19a63c:
    // 0x19a63c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19a63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_19a640:
    // 0x19a640: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19a640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_19a644:
    // 0x19a644: 0x0  nop
    ctx->pc = 0x19a644u;
    // NOP
label_19a648:
    // 0x19a648: 0x0  nop
    ctx->pc = 0x19a648u;
    // NOP
label_19a64c:
    // 0x19a64c: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
label_19a650:
    if (ctx->pc == 0x19A650u) {
        ctx->pc = 0x19A654u;
        goto label_19a654;
    }
    ctx->pc = 0x19A64Cu;
    {
        const bool branch_taken_0x19a64c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x19a64c) {
            ctx->pc = 0x19A638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19a638;
        }
    }
    ctx->pc = 0x19A654u;
label_19a654:
    // 0x19a654: 0x3e00008  jr          $ra
label_19a658:
    if (ctx->pc == 0x19A658u) {
        ctx->pc = 0x19A65Cu;
        goto label_19a65c;
    }
    ctx->pc = 0x19A654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19A65Cu;
label_19a65c:
    // 0x19a65c: 0x0  nop
    ctx->pc = 0x19a65cu;
    // NOP
label_19a660:
    // 0x19a660: 0x2c82000a  sltiu       $v0, $a0, 0xA
    ctx->pc = 0x19a660u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_19a664:
    // 0x19a664: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_19a668:
    if (ctx->pc == 0x19A668u) {
        ctx->pc = 0x19A668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A664u;
        // 0x19a668: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A66Cu;
        goto label_19a66c;
    }
    ctx->pc = 0x19A664u;
    {
        const bool branch_taken_0x19a664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A664u;
        // 0x19a668: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a664) {
            ctx->pc = 0x19A680u;
            goto label_19a680;
        }
    }
    ctx->pc = 0x19A66Cu;
label_19a66c:
    // 0x19a66c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x19a66cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_19a670:
    // 0x19a670: 0x244257f0  addiu       $v0, $v0, 0x57F0
    ctx->pc = 0x19a670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22512));
label_19a674:
    // 0x19a674: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x19a674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_19a678:
    // 0x19a678: 0x3e00008  jr          $ra
label_19a67c:
    if (ctx->pc == 0x19A67Cu) {
        ctx->pc = 0x19A67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A678u;
        // 0x19a67c: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A680u;
        goto label_19a680;
    }
    ctx->pc = 0x19A678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A678u;
        // 0x19a67c: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19A680u;
label_19a680:
    // 0x19a680: 0x3e00008  jr          $ra
label_19a684:
    if (ctx->pc == 0x19A684u) {
        ctx->pc = 0x19A684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A680u;
        // 0x19a684: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A688u;
        goto label_19a688;
    }
    ctx->pc = 0x19A680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A680u;
        // 0x19a684: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19A688u;
label_19a688:
    // 0x19a688: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19a688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_19a68c:
    // 0x19a68c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x19a68cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_19a690:
    // 0x19a690: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x19a690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_19a694:
    // 0x19a694: 0x3442e000  ori         $v0, $v0, 0xE000
    ctx->pc = 0x19a694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57344);
label_19a698:
    // 0x19a698: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x19a698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_19a69c:
    // 0x19a69c: 0x3c060028  lui         $a2, 0x28
    ctx->pc = 0x19a69cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)40 << 16));
label_19a6a0:
    // 0x19a6a0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x19a6a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_19a6a4:
    // 0x19a6a4: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x19a6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_19a6a8:
    // 0x19a6a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19a6a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19a6ac:
    // 0x19a6ac: 0x246357f0  addiu       $v1, $v1, 0x57F0
    ctx->pc = 0x19a6acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22512));
label_19a6b0:
    // 0x19a6b0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x19a6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19a6b4:
    // 0x19a6b4: 0x24c65830  addiu       $a2, $a2, 0x5830
    ctx->pc = 0x19a6b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22576));
label_19a6b8:
    // 0x19a6b8: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x19a6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_19a6bc:
    // 0x19a6bc: 0x30b10001  andi        $s1, $a1, 0x1
    ctx->pc = 0x19a6bcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_19a6c0:
    // 0x19a6c0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x19a6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_19a6c4:
    // 0x19a6c4: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_19a6c8:
    if (ctx->pc == 0x19A6C8u) {
        ctx->pc = 0x19A6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A6C4u;
        // 0x19a6c8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A6CCu;
        goto label_19a6cc;
    }
    ctx->pc = 0x19A6C4u;
    {
        const bool branch_taken_0x19a6c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a6c4) {
            ctx->pc = 0x19A6C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19A6C4u;
            // 0x19a6c8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19A6ECu;
            goto label_19a6ec;
        }
    }
    ctx->pc = 0x19A6CCu;
label_19a6cc:
    // 0x19a6cc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19a6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_19a6d0:
    // 0x19a6d0: 0xac400080  sw          $zero, 0x80($v0)
    ctx->pc = 0x19a6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 0));
label_19a6d4:
    // 0x19a6d4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x19a6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_19a6d8:
    // 0x19a6d8: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x19a6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
label_19a6dc:
    // 0x19a6dc: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x19a6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
label_19a6e0:
    // 0x19a6e0: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x19a6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
label_19a6e4:
    // 0x19a6e4: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x19a6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_19a6e8:
    // 0x19a6e8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x19a6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_19a6ec:
    // 0x19a6ec: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x19a6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_19a6f0:
    // 0x19a6f0: 0x481fff3  bgez        $a0, . + 4 + (-0xD << 2)
label_19a6f4:
    if (ctx->pc == 0x19A6F4u) {
        ctx->pc = 0x19A6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A6F0u;
        // 0x19a6f4: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A6F8u;
        goto label_19a6f8;
    }
    ctx->pc = 0x19A6F0u;
    {
        const bool branch_taken_0x19a6f0 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x19A6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A6F0u;
        // 0x19a6f4: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a6f0) {
            ctx->pc = 0x19A6C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19a6c0;
        }
    }
    ctx->pc = 0x19A6F8u;
label_19a6f8:
    // 0x19a6f8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x19a6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_19a6fc:
    // 0x19a6fc: 0x3402ff1f  ori         $v0, $zero, 0xFF1F
    ctx->pc = 0x19a6fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65311);
label_19a700:
    // 0x19a700: 0x3463e010  ori         $v1, $v1, 0xE010
    ctx->pc = 0x19a700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57360);
label_19a704:
    // 0x19a704: 0x3c06ff1f  lui         $a2, 0xFF1F
    ctx->pc = 0x19a704u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65311 << 16));
label_19a708:
    // 0x19a708: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x19a708u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_19a70c:
    // 0x19a70c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x19a70cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_19a710:
    // 0x19a710: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x19a710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_19a714:
    // 0x19a714: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19a714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_19a718:
    // 0x19a718: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x19a718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_19a71c:
    // 0x19a71c: 0xc06698a  jal         func_19A628
label_19a720:
    if (ctx->pc == 0x19A720u) {
        ctx->pc = 0x19A720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A71Cu;
        // 0x19a720: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A724u;
        goto label_19a724;
    }
    ctx->pc = 0x19A71Cu;
    SET_GPR_U32(ctx, 31, 0x19A724u);
    ctx->pc = 0x19A720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A71Cu;
    // 0x19a720: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A628u;
    goto label_19a628;
    ctx->pc = 0x19A724u;
label_19a724:
    // 0x19a724: 0xc0669de  jal         func_19A778
label_19a728:
    if (ctx->pc == 0x19A728u) {
        ctx->pc = 0x19A728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A724u;
        // 0x19a728: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A72Cu;
        goto label_19a72c;
    }
    ctx->pc = 0x19A724u;
    SET_GPR_U32(ctx, 31, 0x19A72Cu);
    ctx->pc = 0x19A728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A724u;
    // 0x19a728: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A778u;
    goto label_19a778;
    ctx->pc = 0x19A72Cu;
label_19a72c:
    // 0x19a72c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19a72cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19a730:
    // 0x19a730: 0x16030007  bne         $s0, $v1, . + 4 + (0x7 << 2)
label_19a734:
    if (ctx->pc == 0x19A734u) {
        ctx->pc = 0x19A734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A730u;
        // 0x19a734: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A738u;
        goto label_19a738;
    }
    ctx->pc = 0x19A730u;
    {
        const bool branch_taken_0x19a730 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x19A734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A730u;
        // 0x19a734: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a730) {
            ctx->pc = 0x19A750u;
            goto label_19a750;
        }
    }
    ctx->pc = 0x19A738u;
label_19a738:
    // 0x19a738: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x19a738u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_19a73c:
    // 0x19a73c: 0x3463e000  ori         $v1, $v1, 0xE000
    ctx->pc = 0x19a73cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57344);
label_19a740:
    // 0x19a740: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19a740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_19a744:
    // 0x19a744: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x19a744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_19a748:
    // 0x19a748: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x19a748u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_19a74c:
    // 0x19a74c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x19a74cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19a750:
    // 0x19a750: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19a750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_19a754:
    // 0x19a754: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x19a754u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19a758:
    // 0x19a758: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x19a758u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19a75c:
    // 0x19a75c: 0x3e00008  jr          $ra
label_19a760:
    if (ctx->pc == 0x19A760u) {
        ctx->pc = 0x19A760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A75Cu;
        // 0x19a760: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A764u;
        goto label_19a764;
    }
    ctx->pc = 0x19A75Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A75Cu;
        // 0x19a760: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A75Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19A764u;
label_19a764:
    // 0x19a764: 0x0  nop
    ctx->pc = 0x19a764u;
    // NOP
label_19a768:
    // 0x19a768: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x19a768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_19a76c:
    // 0x19a76c: 0x8c625818  lw          $v0, 0x5818($v1)
    ctx->pc = 0x19a76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22552)));
label_19a770:
    // 0x19a770: 0x3e00008  jr          $ra
label_19a774:
    if (ctx->pc == 0x19A774u) {
        ctx->pc = 0x19A774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A770u;
        // 0x19a774: 0xac645818  sw          $a0, 0x5818($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 22552), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A778u;
        goto label_19a778;
    }
    ctx->pc = 0x19A770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A770u;
        // 0x19a774: 0xac645818  sw          $a0, 0x5818($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 22552), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19A778u;
label_19a778:
    // 0x19a778: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x19a778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_19a77c:
    // 0x19a77c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x19a77cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_19a780:
    // 0x19a780: 0x3442e000  ori         $v0, $v0, 0xE000
    ctx->pc = 0x19a780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57344);
label_19a784:
    // 0x19a784: 0x3463e020  ori         $v1, $v1, 0xE020
    ctx->pc = 0x19a784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57376);
label_19a788:
    // 0x19a788: 0x8c4a0000  lw          $t2, 0x0($v0)
    ctx->pc = 0x19a788u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19a78c:
    // 0x19a78c: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x19a78cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
label_19a790:
    // 0x19a790: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x19a790u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_19a794:
    // 0x19a794: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x19a794u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19a798:
    // 0x19a798: 0x34a5e030  ori         $a1, $a1, 0xE030
    ctx->pc = 0x19a798u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)57392);
label_19a79c:
    // 0x19a79c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x19a79cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_19a7a0:
    // 0x19a7a0: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x19a7a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_19a7a4:
    // 0x19a7a4: 0x3463e050  ori         $v1, $v1, 0xE050
    ctx->pc = 0x19a7a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57424);
label_19a7a8:
    // 0x19a7a8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x19a7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_19a7ac:
    // 0x19a7ac: 0x91240000  lbu         $a0, 0x0($t1)
    ctx->pc = 0x19a7acu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_19a7b0:
    // 0x19a7b0: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x19a7b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_19a7b4:
    // 0x19a7b4: 0x3442e040  ori         $v0, $v0, 0xE040
    ctx->pc = 0x19a7b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57408);
label_19a7b8:
    // 0x19a7b8: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x19a7b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19a7bc:
    // 0x19a7bc: 0x2c84000a  sltiu       $a0, $a0, 0xA
    ctx->pc = 0x19a7bcu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_19a7c0:
    // 0x19a7c0: 0x54800003  bnel        $a0, $zero, . + 4 + (0x3 << 2)
label_19a7c4:
    if (ctx->pc == 0x19A7C4u) {
        ctx->pc = 0x19A7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A7C0u;
        // 0x19a7c4: 0x91220001  lbu         $v0, 0x1($t1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A7C8u;
        goto label_19a7c8;
    }
    ctx->pc = 0x19A7C0u;
    {
        const bool branch_taken_0x19a7c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x19a7c0) {
            ctx->pc = 0x19A7C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19A7C0u;
            // 0x19a7c4: 0x91220001  lbu         $v0, 0x1($t1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19A7D0u;
            goto label_19a7d0;
        }
    }
    ctx->pc = 0x19A7C8u;
label_19a7c8:
    // 0x19a7c8: 0x3e00008  jr          $ra
label_19a7cc:
    if (ctx->pc == 0x19A7CCu) {
        ctx->pc = 0x19A7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A7C8u;
        // 0x19a7cc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A7D0u;
        goto label_19a7d0;
    }
    ctx->pc = 0x19A7C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A7C8u;
        // 0x19a7cc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A7C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19A7D0u;
label_19a7d0:
    // 0x19a7d0: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x19a7d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_19a7d4:
    // 0x19a7d4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_19a7d8:
    if (ctx->pc == 0x19A7D8u) {
        ctx->pc = 0x19A7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A7D4u;
        // 0x19a7d8: 0x91220002  lbu         $v0, 0x2($t1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A7DCu;
        goto label_19a7dc;
    }
    ctx->pc = 0x19A7D4u;
    {
        const bool branch_taken_0x19a7d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19a7d4) {
            ctx->pc = 0x19A7D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19A7D4u;
            // 0x19a7d8: 0x91220002  lbu         $v0, 0x2($t1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19A7E4u;
            goto label_19a7e4;
        }
    }
    ctx->pc = 0x19A7DCu;
label_19a7dc:
    // 0x19a7dc: 0x3e00008  jr          $ra
label_19a7e0:
    if (ctx->pc == 0x19A7E0u) {
        ctx->pc = 0x19A7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A7DCu;
        // 0x19a7e0: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A7E4u;
        goto label_19a7e4;
    }
    ctx->pc = 0x19A7DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A7DCu;
        // 0x19a7e0: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A7DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19A7E4u;
label_19a7e4:
    // 0x19a7e4: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x19a7e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_19a7e8:
    // 0x19a7e8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_19a7ec:
    if (ctx->pc == 0x19A7ECu) {
        ctx->pc = 0x19A7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A7E8u;
        // 0x19a7ec: 0x912b0003  lbu         $t3, 0x3($t1) (Delay Slot)
        SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A7F0u;
        goto label_19a7f0;
    }
    ctx->pc = 0x19A7E8u;
    {
        const bool branch_taken_0x19a7e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19a7e8) {
            ctx->pc = 0x19A7ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19A7E8u;
            // 0x19a7ec: 0x912b0003  lbu         $t3, 0x3($t1) (Delay Slot)
            SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19A7F8u;
            goto label_19a7f8;
        }
    }
    ctx->pc = 0x19A7F0u;
label_19a7f0:
    // 0x19a7f0: 0x3e00008  jr          $ra
label_19a7f4:
    if (ctx->pc == 0x19A7F4u) {
        ctx->pc = 0x19A7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A7F0u;
        // 0x19a7f4: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A7F8u;
        goto label_19a7f8;
    }
    ctx->pc = 0x19A7F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A7F0u;
        // 0x19a7f4: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A7F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19A7F8u;
label_19a7f8:
    // 0x19a7f8: 0x2d620007  sltiu       $v0, $t3, 0x7
    ctx->pc = 0x19a7f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_19a7fc:
    // 0x19a7fc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_19a800:
    if (ctx->pc == 0x19A800u) {
        ctx->pc = 0x19A800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A7FCu;
        // 0x19a800: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A804u;
        goto label_19a804;
    }
    ctx->pc = 0x19A7FCu;
    {
        const bool branch_taken_0x19a7fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19A800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A7FCu;
        // 0x19a800: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a7fc) {
            ctx->pc = 0x19A80Cu;
            goto label_19a80c;
        }
    }
    ctx->pc = 0x19A804u;
label_19a804:
    // 0x19a804: 0x3e00008  jr          $ra
label_19a808:
    if (ctx->pc == 0x19A808u) {
        ctx->pc = 0x19A808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A804u;
        // 0x19a808: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A80Cu;
        goto label_19a80c;
    }
    ctx->pc = 0x19A804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A804u;
        // 0x19a808: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19A80Cu;
label_19a80c:
    // 0x19a80c: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x19a80cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_19a810:
    // 0x19a810: 0x24425858  addiu       $v0, $v0, 0x5858
    ctx->pc = 0x19a810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22616));
label_19a814:
    // 0x19a814: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x19a814u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
label_19a818:
    // 0x19a818: 0x91250001  lbu         $a1, 0x1($t1)
    ctx->pc = 0x19a818u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
label_19a81c:
    // 0x19a81c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x19a81cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_19a820:
    // 0x19a820: 0x24845868  addiu       $a0, $a0, 0x5868
    ctx->pc = 0x19a820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22632));
label_19a824:
    // 0x19a824: 0x90680000  lbu         $t0, 0x0($v1)
    ctx->pc = 0x19a824u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_19a828:
    // 0x19a828: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x19a828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_19a82c:
    // 0x19a82c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x19a82cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_19a830:
    // 0x19a830: 0x3442ffcf  ori         $v0, $v0, 0xFFCF
    ctx->pc = 0x19a830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65487);
label_19a834:
    // 0x19a834: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x19a834u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
label_19a838:
    // 0x19a838: 0x91270002  lbu         $a3, 0x2($t1)
    ctx->pc = 0x19a838u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 2)));
label_19a83c:
    // 0x19a83c: 0x1421024  and         $v0, $t2, $v0
    ctx->pc = 0x19a83cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
label_19a840:
    // 0x19a840: 0x24845878  addiu       $a0, $a0, 0x5878
    ctx->pc = 0x19a840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22648));
label_19a844:
    // 0x19a844: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x19a844u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_19a848:
    // 0x19a848: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x19a848u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_19a84c:
    // 0x19a84c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x19a84cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_19a850:
    // 0x19a850: 0x485025  or          $t2, $v0, $t0
    ctx->pc = 0x19a850u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
label_19a854:
    // 0x19a854: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x19a854u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_19a858:
    // 0x19a858: 0x3463ff3f  ori         $v1, $v1, 0xFF3F
    ctx->pc = 0x19a858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65343);
label_19a85c:
    // 0x19a85c: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x19a85cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_19a860:
    // 0x19a860: 0x1431824  and         $v1, $t2, $v1
    ctx->pc = 0x19a860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
label_19a864:
    // 0x19a864: 0x90e40000  lbu         $a0, 0x0($a3)
    ctx->pc = 0x19a864u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_19a868:
    // 0x19a868: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x19a868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_19a86c:
    // 0x19a86c: 0x665025  or          $t2, $v1, $a2
    ctx->pc = 0x19a86cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_19a870:
    // 0x19a870: 0x3442fff3  ori         $v0, $v0, 0xFFF3
    ctx->pc = 0x19a870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65523);
label_19a874:
    // 0x19a874: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x19a874u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_19a878:
    // 0x19a878: 0x1421024  and         $v0, $t2, $v0
    ctx->pc = 0x19a878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
label_19a87c:
    // 0x19a87c: 0x1160000a  beqz        $t3, . + 4 + (0xA << 2)
label_19a880:
    if (ctx->pc == 0x19A880u) {
        ctx->pc = 0x19A880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A87Cu;
        // 0x19a880: 0x445025  or          $t2, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A884u;
        goto label_19a884;
    }
    ctx->pc = 0x19A87Cu;
    {
        const bool branch_taken_0x19a87c = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A87Cu;
        // 0x19a880: 0x445025  or          $t2, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a87c) {
            ctx->pc = 0x19A8A8u;
            goto label_19a8a8;
        }
    }
    ctx->pc = 0x19A884u;
label_19a884:
    // 0x19a884: 0x91230003  lbu         $v1, 0x3($t1)
    ctx->pc = 0x19a884u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 3)));
label_19a888:
    // 0x19a888: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x19a888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_19a88c:
    // 0x19a88c: 0x354a0002  ori         $t2, $t2, 0x2
    ctx->pc = 0x19a88cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)2);
label_19a890:
    // 0x19a890: 0x3442fcff  ori         $v0, $v0, 0xFCFF
    ctx->pc = 0x19a890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64767);
label_19a894:
    // 0x19a894: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x19a894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_19a898:
    // 0x19a898: 0x1421024  and         $v0, $t2, $v0
    ctx->pc = 0x19a898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
label_19a89c:
    // 0x19a89c: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x19a89cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_19a8a0:
    // 0x19a8a0: 0x10000004  b           . + 4 + (0x4 << 2)
label_19a8a4:
    if (ctx->pc == 0x19A8A4u) {
        ctx->pc = 0x19A8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A8A0u;
        // 0x19a8a4: 0x435025  or          $t2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19A8A8u;
        goto label_19a8a8;
    }
    ctx->pc = 0x19A8A0u;
    {
        const bool branch_taken_0x19a8a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A8A0u;
        // 0x19a8a4: 0x435025  or          $t2, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a8a0) {
            ctx->pc = 0x19A8B4u;
            goto label_19a8b4;
        }
    }
    ctx->pc = 0x19A8A8u;
label_19a8a8:
    // 0x19a8a8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x19a8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_19a8ac:
    // 0x19a8ac: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x19a8acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
label_19a8b0:
    // 0x19a8b0: 0x1425024  and         $t2, $t2, $v0
    ctx->pc = 0x19a8b0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
label_19a8b4:
    // 0x19a8b4: 0x95220004  lhu         $v0, 0x4($t1)
    ctx->pc = 0x19a8b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 4)));
label_19a8b8:
    // 0x19a8b8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x19a8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_19a8bc:
    // 0x19a8bc: 0x95260006  lhu         $a2, 0x6($t1)
    ctx->pc = 0x19a8bcu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 6)));
label_19a8c0:
    // 0x19a8c0: 0x3484e000  ori         $a0, $a0, 0xE000
    ctx->pc = 0x19a8c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)57344);
label_19a8c4:
    // 0x19a8c4: 0x9525000a  lhu         $a1, 0xA($t1)
    ctx->pc = 0x19a8c4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 10)));
label_19a8c8:
    // 0x19a8c8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x19a8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_19a8cc:
    // 0x19a8cc: 0x8d280010  lw          $t0, 0x10($t1)
    ctx->pc = 0x19a8ccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    ctx->pc = 0x19a8d0u;
    return;
}

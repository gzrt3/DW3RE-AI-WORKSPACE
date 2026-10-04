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


void FUN_0019b618_part457(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x27a098u: goto label_27a098;
        case 0x27a09cu: goto label_27a09c;
        case 0x27a0a0u: goto label_27a0a0;
        case 0x27a0a4u: goto label_27a0a4;
        case 0x27a0a8u: goto label_27a0a8;
        case 0x27a0acu: goto label_27a0ac;
        case 0x27a0b0u: goto label_27a0b0;
        case 0x27a0b4u: goto label_27a0b4;
        case 0x27a0b8u: goto label_27a0b8;
        case 0x27a0bcu: goto label_27a0bc;
        case 0x27a0c0u: goto label_27a0c0;
        case 0x27a0c4u: goto label_27a0c4;
        case 0x27a0c8u: goto label_27a0c8;
        case 0x27a0ccu: goto label_27a0cc;
        case 0x27a0d0u: goto label_27a0d0;
        case 0x27a0d4u: goto label_27a0d4;
        case 0x27a0d8u: goto label_27a0d8;
        case 0x27a0dcu: goto label_27a0dc;
        case 0x27a0e0u: goto label_27a0e0;
        case 0x27a0e4u: goto label_27a0e4;
        case 0x27a0e8u: goto label_27a0e8;
        case 0x27a0ecu: goto label_27a0ec;
        case 0x27a0f0u: goto label_27a0f0;
        case 0x27a0f4u: goto label_27a0f4;
        case 0x27a0f8u: goto label_27a0f8;
        case 0x27a0fcu: goto label_27a0fc;
        case 0x27a100u: goto label_27a100;
        case 0x27a104u: goto label_27a104;
        case 0x27a108u: goto label_27a108;
        case 0x27a10cu: goto label_27a10c;
        case 0x27a110u: goto label_27a110;
        case 0x27a114u: goto label_27a114;
        case 0x27a118u: goto label_27a118;
        case 0x27a11cu: goto label_27a11c;
        case 0x27a120u: goto label_27a120;
        case 0x27a124u: goto label_27a124;
        case 0x27a128u: goto label_27a128;
        case 0x27a12cu: goto label_27a12c;
        case 0x27a130u: goto label_27a130;
        case 0x27a134u: goto label_27a134;
        case 0x27a138u: goto label_27a138;
        case 0x27a13cu: goto label_27a13c;
        case 0x27a140u: goto label_27a140;
        case 0x27a144u: goto label_27a144;
        case 0x27a148u: goto label_27a148;
        case 0x27a14cu: goto label_27a14c;
        case 0x27a150u: goto label_27a150;
        case 0x27a154u: goto label_27a154;
        case 0x27a158u: goto label_27a158;
        case 0x27a15cu: goto label_27a15c;
        case 0x27a160u: goto label_27a160;
        case 0x27a164u: goto label_27a164;
        case 0x27a168u: goto label_27a168;
        case 0x27a16cu: goto label_27a16c;
        case 0x27a170u: goto label_27a170;
        case 0x27a174u: goto label_27a174;
        case 0x27a178u: goto label_27a178;
        case 0x27a17cu: goto label_27a17c;
        case 0x27a180u: goto label_27a180;
        case 0x27a184u: goto label_27a184;
        case 0x27a188u: goto label_27a188;
        case 0x27a18cu: goto label_27a18c;
        case 0x27a190u: goto label_27a190;
        case 0x27a194u: goto label_27a194;
        case 0x27a198u: goto label_27a198;
        case 0x27a19cu: goto label_27a19c;
        case 0x27a1a0u: goto label_27a1a0;
        case 0x27a1a4u: goto label_27a1a4;
        case 0x27a1a8u: goto label_27a1a8;
        case 0x27a1acu: goto label_27a1ac;
        case 0x27a1b0u: goto label_27a1b0;
        case 0x27a1b4u: goto label_27a1b4;
        case 0x27a1b8u: goto label_27a1b8;
        case 0x27a1bcu: goto label_27a1bc;
        case 0x27a1c0u: goto label_27a1c0;
        case 0x27a1c4u: goto label_27a1c4;
        case 0x27a1c8u: goto label_27a1c8;
        case 0x27a1ccu: goto label_27a1cc;
        case 0x27a1d0u: goto label_27a1d0;
        case 0x27a1d4u: goto label_27a1d4;
        case 0x27a1d8u: goto label_27a1d8;
        case 0x27a1dcu: goto label_27a1dc;
        case 0x27a1e0u: goto label_27a1e0;
        case 0x27a1e4u: goto label_27a1e4;
        case 0x27a1e8u: goto label_27a1e8;
        case 0x27a1ecu: goto label_27a1ec;
        case 0x27a1f0u: goto label_27a1f0;
        case 0x27a1f4u: goto label_27a1f4;
        case 0x27a1f8u: goto label_27a1f8;
        case 0x27a1fcu: goto label_27a1fc;
        case 0x27a200u: goto label_27a200;
        case 0x27a204u: goto label_27a204;
        case 0x27a208u: goto label_27a208;
        case 0x27a20cu: goto label_27a20c;
        case 0x27a210u: goto label_27a210;
        case 0x27a214u: goto label_27a214;
        case 0x27a218u: goto label_27a218;
        case 0x27a21cu: goto label_27a21c;
        case 0x27a220u: goto label_27a220;
        case 0x27a224u: goto label_27a224;
        case 0x27a228u: goto label_27a228;
        case 0x27a22cu: goto label_27a22c;
        case 0x27a230u: goto label_27a230;
        case 0x27a234u: goto label_27a234;
        case 0x27a238u: goto label_27a238;
        case 0x27a23cu: goto label_27a23c;
        case 0x27a240u: goto label_27a240;
        case 0x27a244u: goto label_27a244;
        case 0x27a248u: goto label_27a248;
        case 0x27a24cu: goto label_27a24c;
        case 0x27a250u: goto label_27a250;
        case 0x27a254u: goto label_27a254;
        case 0x27a258u: goto label_27a258;
        case 0x27a25cu: goto label_27a25c;
        case 0x27a260u: goto label_27a260;
        case 0x27a264u: goto label_27a264;
        case 0x27a268u: goto label_27a268;
        case 0x27a26cu: goto label_27a26c;
        case 0x27a270u: goto label_27a270;
        case 0x27a274u: goto label_27a274;
        case 0x27a278u: goto label_27a278;
        case 0x27a27cu: goto label_27a27c;
        case 0x27a280u: goto label_27a280;
        case 0x27a284u: goto label_27a284;
        case 0x27a288u: goto label_27a288;
        case 0x27a28cu: goto label_27a28c;
        case 0x27a290u: goto label_27a290;
        case 0x27a294u: goto label_27a294;
        case 0x27a298u: goto label_27a298;
        case 0x27a29cu: goto label_27a29c;
        case 0x27a2a0u: goto label_27a2a0;
        case 0x27a2a4u: goto label_27a2a4;
        case 0x27a2a8u: goto label_27a2a8;
        case 0x27a2acu: goto label_27a2ac;
        case 0x27a2b0u: goto label_27a2b0;
        case 0x27a2b4u: goto label_27a2b4;
        case 0x27a2b8u: goto label_27a2b8;
        case 0x27a2bcu: goto label_27a2bc;
        case 0x27a2c0u: goto label_27a2c0;
        case 0x27a2c4u: goto label_27a2c4;
        case 0x27a2c8u: goto label_27a2c8;
        case 0x27a2ccu: goto label_27a2cc;
        case 0x27a2d0u: goto label_27a2d0;
        case 0x27a2d4u: goto label_27a2d4;
        case 0x27a2d8u: goto label_27a2d8;
        case 0x27a2dcu: goto label_27a2dc;
        case 0x27a2e0u: goto label_27a2e0;
        case 0x27a2e4u: goto label_27a2e4;
        case 0x27a2e8u: goto label_27a2e8;
        case 0x27a2ecu: goto label_27a2ec;
        case 0x27a2f0u: goto label_27a2f0;
        case 0x27a2f4u: goto label_27a2f4;
        case 0x27a2f8u: goto label_27a2f8;
        case 0x27a2fcu: goto label_27a2fc;
        case 0x27a300u: goto label_27a300;
        case 0x27a304u: goto label_27a304;
        case 0x27a308u: goto label_27a308;
        case 0x27a30cu: goto label_27a30c;
        case 0x27a310u: goto label_27a310;
        case 0x27a314u: goto label_27a314;
        case 0x27a318u: goto label_27a318;
        case 0x27a31cu: goto label_27a31c;
        case 0x27a320u: goto label_27a320;
        case 0x27a324u: goto label_27a324;
        case 0x27a328u: goto label_27a328;
        case 0x27a32cu: goto label_27a32c;
        case 0x27a330u: goto label_27a330;
        case 0x27a334u: goto label_27a334;
        case 0x27a338u: goto label_27a338;
        case 0x27a33cu: goto label_27a33c;
        case 0x27a340u: goto label_27a340;
        case 0x27a344u: goto label_27a344;
        case 0x27a348u: goto label_27a348;
        case 0x27a34cu: goto label_27a34c;
        case 0x27a350u: goto label_27a350;
        case 0x27a354u: goto label_27a354;
        case 0x27a358u: goto label_27a358;
        case 0x27a35cu: goto label_27a35c;
        case 0x27a360u: goto label_27a360;
        case 0x27a364u: goto label_27a364;
        case 0x27a368u: goto label_27a368;
        case 0x27a36cu: goto label_27a36c;
        case 0x27a370u: goto label_27a370;
        case 0x27a374u: goto label_27a374;
        case 0x27a378u: goto label_27a378;
        case 0x27a37cu: goto label_27a37c;
        case 0x27a380u: goto label_27a380;
        case 0x27a384u: goto label_27a384;
        case 0x27a388u: goto label_27a388;
        case 0x27a38cu: goto label_27a38c;
        case 0x27a390u: goto label_27a390;
        case 0x27a394u: goto label_27a394;
        case 0x27a398u: goto label_27a398;
        case 0x27a39cu: goto label_27a39c;
        case 0x27a3a0u: goto label_27a3a0;
        case 0x27a3a4u: goto label_27a3a4;
        case 0x27a3a8u: goto label_27a3a8;
        case 0x27a3acu: goto label_27a3ac;
        case 0x27a3b0u: goto label_27a3b0;
        case 0x27a3b4u: goto label_27a3b4;
        case 0x27a3b8u: goto label_27a3b8;
        case 0x27a3bcu: goto label_27a3bc;
        case 0x27a3c0u: goto label_27a3c0;
        case 0x27a3c4u: goto label_27a3c4;
        case 0x27a3c8u: goto label_27a3c8;
        case 0x27a3ccu: goto label_27a3cc;
        case 0x27a3d0u: goto label_27a3d0;
        case 0x27a3d4u: goto label_27a3d4;
        case 0x27a3d8u: goto label_27a3d8;
        case 0x27a3dcu: goto label_27a3dc;
        case 0x27a3e0u: goto label_27a3e0;
        case 0x27a3e4u: goto label_27a3e4;
        case 0x27a3e8u: goto label_27a3e8;
        case 0x27a3ecu: goto label_27a3ec;
        case 0x27a3f0u: goto label_27a3f0;
        case 0x27a3f4u: goto label_27a3f4;
        case 0x27a3f8u: goto label_27a3f8;
        case 0x27a3fcu: goto label_27a3fc;
        case 0x27a400u: goto label_27a400;
        case 0x27a404u: goto label_27a404;
        case 0x27a408u: goto label_27a408;
        case 0x27a40cu: goto label_27a40c;
        case 0x27a410u: goto label_27a410;
        case 0x27a414u: goto label_27a414;
        case 0x27a418u: goto label_27a418;
        case 0x27a41cu: goto label_27a41c;
        case 0x27a420u: goto label_27a420;
        case 0x27a424u: goto label_27a424;
        case 0x27a428u: goto label_27a428;
        case 0x27a42cu: goto label_27a42c;
        case 0x27a430u: goto label_27a430;
        case 0x27a434u: goto label_27a434;
        case 0x27a438u: goto label_27a438;
        case 0x27a43cu: goto label_27a43c;
        case 0x27a440u: goto label_27a440;
        case 0x27a444u: goto label_27a444;
        case 0x27a448u: goto label_27a448;
        case 0x27a44cu: goto label_27a44c;
        case 0x27a450u: goto label_27a450;
        case 0x27a454u: goto label_27a454;
        case 0x27a458u: goto label_27a458;
        case 0x27a45cu: goto label_27a45c;
        case 0x27a460u: goto label_27a460;
        case 0x27a464u: goto label_27a464;
        case 0x27a468u: goto label_27a468;
        case 0x27a46cu: goto label_27a46c;
        case 0x27a470u: goto label_27a470;
        case 0x27a474u: goto label_27a474;
        case 0x27a478u: goto label_27a478;
        case 0x27a47cu: goto label_27a47c;
        case 0x27a480u: goto label_27a480;
        case 0x27a484u: goto label_27a484;
        case 0x27a488u: goto label_27a488;
        case 0x27a48cu: goto label_27a48c;
        case 0x27a490u: goto label_27a490;
        case 0x27a494u: goto label_27a494;
        case 0x27a498u: goto label_27a498;
        case 0x27a49cu: goto label_27a49c;
        case 0x27a4a0u: goto label_27a4a0;
        case 0x27a4a4u: goto label_27a4a4;
        case 0x27a4a8u: goto label_27a4a8;
        case 0x27a4acu: goto label_27a4ac;
        case 0x27a4b0u: goto label_27a4b0;
        case 0x27a4b4u: goto label_27a4b4;
        case 0x27a4b8u: goto label_27a4b8;
        case 0x27a4bcu: goto label_27a4bc;
        case 0x27a4c0u: goto label_27a4c0;
        case 0x27a4c4u: goto label_27a4c4;
        case 0x27a4c8u: goto label_27a4c8;
        case 0x27a4ccu: goto label_27a4cc;
        case 0x27a4d0u: goto label_27a4d0;
        case 0x27a4d4u: goto label_27a4d4;
        case 0x27a4d8u: goto label_27a4d8;
        case 0x27a4dcu: goto label_27a4dc;
        case 0x27a4e0u: goto label_27a4e0;
        case 0x27a4e4u: goto label_27a4e4;
        case 0x27a4e8u: goto label_27a4e8;
        case 0x27a4ecu: goto label_27a4ec;
        case 0x27a4f0u: goto label_27a4f0;
        case 0x27a4f4u: goto label_27a4f4;
        case 0x27a4f8u: goto label_27a4f8;
        case 0x27a4fcu: goto label_27a4fc;
        case 0x27a500u: goto label_27a500;
        case 0x27a504u: goto label_27a504;
        case 0x27a508u: goto label_27a508;
        case 0x27a50cu: goto label_27a50c;
        case 0x27a510u: goto label_27a510;
        case 0x27a514u: goto label_27a514;
        case 0x27a518u: goto label_27a518;
        case 0x27a51cu: goto label_27a51c;
        case 0x27a520u: goto label_27a520;
        case 0x27a524u: goto label_27a524;
        case 0x27a528u: goto label_27a528;
        case 0x27a52cu: goto label_27a52c;
        case 0x27a530u: goto label_27a530;
        case 0x27a534u: goto label_27a534;
        case 0x27a538u: goto label_27a538;
        case 0x27a53cu: goto label_27a53c;
        case 0x27a540u: goto label_27a540;
        case 0x27a544u: goto label_27a544;
        case 0x27a548u: goto label_27a548;
        case 0x27a54cu: goto label_27a54c;
        case 0x27a550u: goto label_27a550;
        case 0x27a554u: goto label_27a554;
        case 0x27a558u: goto label_27a558;
        case 0x27a55cu: goto label_27a55c;
        case 0x27a560u: goto label_27a560;
        case 0x27a564u: goto label_27a564;
        case 0x27a568u: goto label_27a568;
        case 0x27a56cu: goto label_27a56c;
        case 0x27a570u: goto label_27a570;
        case 0x27a574u: goto label_27a574;
        case 0x27a578u: goto label_27a578;
        case 0x27a57cu: goto label_27a57c;
        case 0x27a580u: goto label_27a580;
        case 0x27a584u: goto label_27a584;
        case 0x27a588u: goto label_27a588;
        case 0x27a58cu: goto label_27a58c;
        case 0x27a590u: goto label_27a590;
        case 0x27a594u: goto label_27a594;
        case 0x27a598u: goto label_27a598;
        case 0x27a59cu: goto label_27a59c;
        case 0x27a5a0u: goto label_27a5a0;
        case 0x27a5a4u: goto label_27a5a4;
        case 0x27a5a8u: goto label_27a5a8;
        case 0x27a5acu: goto label_27a5ac;
        case 0x27a5b0u: goto label_27a5b0;
        case 0x27a5b4u: goto label_27a5b4;
        case 0x27a5b8u: goto label_27a5b8;
        case 0x27a5bcu: goto label_27a5bc;
        case 0x27a5c0u: goto label_27a5c0;
        case 0x27a5c4u: goto label_27a5c4;
        case 0x27a5c8u: goto label_27a5c8;
        case 0x27a5ccu: goto label_27a5cc;
        case 0x27a5d0u: goto label_27a5d0;
        case 0x27a5d4u: goto label_27a5d4;
        case 0x27a5d8u: goto label_27a5d8;
        case 0x27a5dcu: goto label_27a5dc;
        case 0x27a5e0u: goto label_27a5e0;
        case 0x27a5e4u: goto label_27a5e4;
        case 0x27a5e8u: goto label_27a5e8;
        case 0x27a5ecu: goto label_27a5ec;
        case 0x27a5f0u: goto label_27a5f0;
        case 0x27a5f4u: goto label_27a5f4;
        case 0x27a5f8u: goto label_27a5f8;
        case 0x27a5fcu: goto label_27a5fc;
        case 0x27a600u: goto label_27a600;
        case 0x27a604u: goto label_27a604;
        case 0x27a608u: goto label_27a608;
        case 0x27a60cu: goto label_27a60c;
        case 0x27a610u: goto label_27a610;
        case 0x27a614u: goto label_27a614;
        case 0x27a618u: goto label_27a618;
        case 0x27a61cu: goto label_27a61c;
        case 0x27a620u: goto label_27a620;
        case 0x27a624u: goto label_27a624;
        case 0x27a628u: goto label_27a628;
        case 0x27a62cu: goto label_27a62c;
        case 0x27a630u: goto label_27a630;
        case 0x27a634u: goto label_27a634;
        case 0x27a638u: goto label_27a638;
        case 0x27a63cu: goto label_27a63c;
        case 0x27a640u: goto label_27a640;
        case 0x27a644u: goto label_27a644;
        case 0x27a648u: goto label_27a648;
        case 0x27a64cu: goto label_27a64c;
        case 0x27a650u: goto label_27a650;
        case 0x27a654u: goto label_27a654;
        case 0x27a658u: goto label_27a658;
        case 0x27a65cu: goto label_27a65c;
        case 0x27a660u: goto label_27a660;
        case 0x27a664u: goto label_27a664;
        case 0x27a668u: goto label_27a668;
        case 0x27a66cu: goto label_27a66c;
        case 0x27a670u: goto label_27a670;
        case 0x27a674u: goto label_27a674;
        case 0x27a678u: goto label_27a678;
        case 0x27a67cu: goto label_27a67c;
        case 0x27a680u: goto label_27a680;
        case 0x27a684u: goto label_27a684;
        case 0x27a688u: goto label_27a688;
        case 0x27a68cu: goto label_27a68c;
        case 0x27a690u: goto label_27a690;
        case 0x27a694u: goto label_27a694;
        case 0x27a698u: goto label_27a698;
        case 0x27a69cu: goto label_27a69c;
        case 0x27a6a0u: goto label_27a6a0;
        case 0x27a6a4u: goto label_27a6a4;
        case 0x27a6a8u: goto label_27a6a8;
        case 0x27a6acu: goto label_27a6ac;
        case 0x27a6b0u: goto label_27a6b0;
        case 0x27a6b4u: goto label_27a6b4;
        case 0x27a6b8u: goto label_27a6b8;
        case 0x27a6bcu: goto label_27a6bc;
        case 0x27a6c0u: goto label_27a6c0;
        case 0x27a6c4u: goto label_27a6c4;
        case 0x27a6c8u: goto label_27a6c8;
        case 0x27a6ccu: goto label_27a6cc;
        case 0x27a6d0u: goto label_27a6d0;
        case 0x27a6d4u: goto label_27a6d4;
        case 0x27a6d8u: goto label_27a6d8;
        case 0x27a6dcu: goto label_27a6dc;
        case 0x27a6e0u: goto label_27a6e0;
        case 0x27a6e4u: goto label_27a6e4;
        case 0x27a6e8u: goto label_27a6e8;
        case 0x27a6ecu: goto label_27a6ec;
        case 0x27a6f0u: goto label_27a6f0;
        case 0x27a6f4u: goto label_27a6f4;
        case 0x27a6f8u: goto label_27a6f8;
        case 0x27a6fcu: goto label_27a6fc;
        case 0x27a700u: goto label_27a700;
        case 0x27a704u: goto label_27a704;
        case 0x27a708u: goto label_27a708;
        case 0x27a70cu: goto label_27a70c;
        case 0x27a710u: goto label_27a710;
        case 0x27a714u: goto label_27a714;
        case 0x27a718u: goto label_27a718;
        case 0x27a71cu: goto label_27a71c;
        case 0x27a720u: goto label_27a720;
        case 0x27a724u: goto label_27a724;
        case 0x27a728u: goto label_27a728;
        case 0x27a72cu: goto label_27a72c;
        case 0x27a730u: goto label_27a730;
        case 0x27a734u: goto label_27a734;
        case 0x27a738u: goto label_27a738;
        case 0x27a73cu: goto label_27a73c;
        case 0x27a740u: goto label_27a740;
        case 0x27a744u: goto label_27a744;
        case 0x27a748u: goto label_27a748;
        case 0x27a74cu: goto label_27a74c;
        case 0x27a750u: goto label_27a750;
        case 0x27a754u: goto label_27a754;
        case 0x27a758u: goto label_27a758;
        case 0x27a75cu: goto label_27a75c;
        case 0x27a760u: goto label_27a760;
        case 0x27a764u: goto label_27a764;
        case 0x27a768u: goto label_27a768;
        case 0x27a76cu: goto label_27a76c;
        case 0x27a770u: goto label_27a770;
        case 0x27a774u: goto label_27a774;
        case 0x27a778u: goto label_27a778;
        case 0x27a77cu: goto label_27a77c;
        case 0x27a780u: goto label_27a780;
        case 0x27a784u: goto label_27a784;
        case 0x27a788u: goto label_27a788;
        case 0x27a78cu: goto label_27a78c;
        case 0x27a790u: goto label_27a790;
        case 0x27a794u: goto label_27a794;
        case 0x27a798u: goto label_27a798;
        case 0x27a79cu: goto label_27a79c;
        case 0x27a7a0u: goto label_27a7a0;
        case 0x27a7a4u: goto label_27a7a4;
        case 0x27a7a8u: goto label_27a7a8;
        case 0x27a7acu: goto label_27a7ac;
        case 0x27a7b0u: goto label_27a7b0;
        case 0x27a7b4u: goto label_27a7b4;
        case 0x27a7b8u: goto label_27a7b8;
        case 0x27a7bcu: goto label_27a7bc;
        case 0x27a7c0u: goto label_27a7c0;
        case 0x27a7c4u: goto label_27a7c4;
        case 0x27a7c8u: goto label_27a7c8;
        case 0x27a7ccu: goto label_27a7cc;
        case 0x27a7d0u: goto label_27a7d0;
        case 0x27a7d4u: goto label_27a7d4;
        case 0x27a7d8u: goto label_27a7d8;
        case 0x27a7dcu: goto label_27a7dc;
        case 0x27a7e0u: goto label_27a7e0;
        case 0x27a7e4u: goto label_27a7e4;
        case 0x27a7e8u: goto label_27a7e8;
        case 0x27a7ecu: goto label_27a7ec;
        case 0x27a7f0u: goto label_27a7f0;
        case 0x27a7f4u: goto label_27a7f4;
        case 0x27a7f8u: goto label_27a7f8;
        case 0x27a7fcu: goto label_27a7fc;
        case 0x27a800u: goto label_27a800;
        case 0x27a804u: goto label_27a804;
        case 0x27a808u: goto label_27a808;
        case 0x27a80cu: goto label_27a80c;
        case 0x27a810u: goto label_27a810;
        case 0x27a814u: goto label_27a814;
        case 0x27a818u: goto label_27a818;
        case 0x27a81cu: goto label_27a81c;
        case 0x27a820u: goto label_27a820;
        case 0x27a824u: goto label_27a824;
        case 0x27a828u: goto label_27a828;
        case 0x27a82cu: goto label_27a82c;
        case 0x27a830u: goto label_27a830;
        case 0x27a834u: goto label_27a834;
        case 0x27a838u: goto label_27a838;
        case 0x27a83cu: goto label_27a83c;
        case 0x27a840u: goto label_27a840;
        case 0x27a844u: goto label_27a844;
        case 0x27a848u: goto label_27a848;
        case 0x27a84cu: goto label_27a84c;
        case 0x27a850u: goto label_27a850;
        case 0x27a854u: goto label_27a854;
        case 0x27a858u: goto label_27a858;
        case 0x27a85cu: goto label_27a85c;
        case 0x27a860u: goto label_27a860;
        case 0x27a864u: goto label_27a864;
        default: return;
    }

label_27a098:
    // 0x27a098: 0x0  nop
    ctx->pc = 0x27a098u;
    // NOP
label_27a09c:
    // 0x27a09c: 0x0  nop
    ctx->pc = 0x27a09cu;
    // NOP
label_27a0a0:
    // 0x27a0a0: 0x10fc9  .word       0x00010FC9                   # jalr        $at, $zero # 000107C0 <InstrIdType: CPU_SPECIAL>
label_27a0a4:
    if (ctx->pc == 0x27A0A4u) {
        ctx->pc = 0x27A0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A0A0u;
        // 0x27a0a4: 0x3db0  tge         $zero, $zero, 246 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A0A8u;
        goto label_27a0a8;
    }
    ctx->pc = 0x27A0A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 1, 0x27A0A8u);
        ctx->pc = 0x27A0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A0A0u;
        // 0x27a0a4: 0x3db0  tge         $zero, $zero, 246 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A0A0u, 0x27A0A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27A0A8u;
label_27a0a8:
    // 0x27a0a8: 0x0  nop
    ctx->pc = 0x27a0a8u;
    // NOP
label_27a0ac:
    // 0x27a0ac: 0x0  nop
    ctx->pc = 0x27a0acu;
    // NOP
label_27a0b0:
    // 0x27a0b0: 0x10fd1  .word       0x00010FD1                   # mthi        $zero # 00010FC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a0b0u;
    ctx->hi = GPR_U64(ctx, 0);
label_27a0b4:
    // 0x27a0b4: 0x3920  .word       0x00003920                   # add         $a3, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a0b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_27a0b8:
    // 0x27a0b8: 0x0  nop
    ctx->pc = 0x27a0b8u;
    // NOP
label_27a0bc:
    // 0x27a0bc: 0x0  nop
    ctx->pc = 0x27a0bcu;
    // NOP
label_27a0c0:
    // 0x27a0c0: 0x10fd9  .word       0x00010FD9                   # multu       $zero, $at # 00000FC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a0c0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_27a0c4:
    // 0x27a0c4: 0x8130  tge         $zero, $zero, 516
    ctx->pc = 0x27a0c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27a0c8:
    // 0x27a0c8: 0x0  nop
    ctx->pc = 0x27a0c8u;
    // NOP
label_27a0cc:
    // 0x27a0cc: 0x0  nop
    ctx->pc = 0x27a0ccu;
    // NOP
label_27a0d0:
    // 0x27a0d0: 0x10fea  .word       0x00010FEA                   # slt         $at, $zero, $at # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a0d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_27a0d4:
    // 0x27a0d4: 0x5400  sll         $t2, $zero, 16
    ctx->pc = 0x27a0d4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_27a0d8:
    // 0x27a0d8: 0x0  nop
    ctx->pc = 0x27a0d8u;
    // NOP
label_27a0dc:
    // 0x27a0dc: 0x0  nop
    ctx->pc = 0x27a0dcu;
    // NOP
label_27a0e0:
    // 0x27a0e0: 0x10ff5  .word       0x00010FF5                   # INVALID     $zero, $at, 0xFF5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a0e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x27A0E0 raw=0x00010FF5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27a0e4:
    // 0x27a0e4: 0x52b0  tge         $zero, $zero, 330
    ctx->pc = 0x27a0e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27a0e8:
    // 0x27a0e8: 0x0  nop
    ctx->pc = 0x27a0e8u;
    // NOP
label_27a0ec:
    // 0x27a0ec: 0x0  nop
    ctx->pc = 0x27a0ecu;
    // NOP
label_27a0f0:
    // 0x27a0f0: 0x11000  sll         $v0, $at, 0
    ctx->pc = 0x27a0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 1), 0));
label_27a0f4:
    // 0x27a0f4: 0x3340  sll         $a2, $zero, 13
    ctx->pc = 0x27a0f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
label_27a0f8:
    // 0x27a0f8: 0x0  nop
    ctx->pc = 0x27a0f8u;
    // NOP
label_27a0fc:
    // 0x27a0fc: 0x0  nop
    ctx->pc = 0x27a0fcu;
    // NOP
label_27a100:
    // 0x27a100: 0x11007  srav        $v0, $at, $zero
    ctx->pc = 0x27a100u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27a104:
    // 0x27a104: 0x2fb0  tge         $zero, $zero, 190
    ctx->pc = 0x27a104u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27a108:
    // 0x27a108: 0x0  nop
    ctx->pc = 0x27a108u;
    // NOP
label_27a10c:
    // 0x27a10c: 0x0  nop
    ctx->pc = 0x27a10cu;
    // NOP
label_27a110:
    // 0x27a110: 0x1100d  break       1, 64
    ctx->pc = 0x27a110u;
    runtime->handleBreak(rdram, ctx);
label_27a114:
    // 0x27a114: 0x31a0  .word       0x000031A0                   # add         $a2, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a114u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_27a118:
    // 0x27a118: 0x0  nop
    ctx->pc = 0x27a118u;
    // NOP
label_27a11c:
    // 0x27a11c: 0x0  nop
    ctx->pc = 0x27a11cu;
    // NOP
label_27a120:
    // 0x27a120: 0x11014  dsllv       $v0, $at, $zero
    ctx->pc = 0x27a120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 1) << (GPR_U32(ctx, 0) & 0x3F));
label_27a124:
    // 0x27a124: 0x43e0  .word       0x000043E0                   # add         $t0, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a124u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_27a128:
    // 0x27a128: 0x0  nop
    ctx->pc = 0x27a128u;
    // NOP
label_27a12c:
    // 0x27a12c: 0x0  nop
    ctx->pc = 0x27a12cu;
    // NOP
label_27a130:
    // 0x27a130: 0x1101d  .word       0x0001101D                   # dmultu      $zero, $at # 00001000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a130u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x27A130 raw=0x0001101D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27a134:
    // 0x27a134: 0x3b10  .word       0x00003B10                   # mfhi        $a3 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a134u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_27a138:
    // 0x27a138: 0x0  nop
    ctx->pc = 0x27a138u;
    // NOP
label_27a13c:
    // 0x27a13c: 0x0  nop
    ctx->pc = 0x27a13cu;
    // NOP
label_27a140:
    // 0x27a140: 0x11025  or          $v0, $zero, $at
    ctx->pc = 0x27a140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | GPR_U64(ctx, 1));
label_27a144:
    // 0x27a144: 0x62a0  .word       0x000062A0                   # add         $t4, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a144u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_27a148:
    // 0x27a148: 0x0  nop
    ctx->pc = 0x27a148u;
    // NOP
label_27a14c:
    // 0x27a14c: 0x0  nop
    ctx->pc = 0x27a14cu;
    // NOP
label_27a150:
    // 0x27a150: 0x11032  tlt         $zero, $at, 64
    ctx->pc = 0x27a150u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27a154:
    // 0x27a154: 0x2400  sll         $a0, $zero, 16
    ctx->pc = 0x27a154u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_27a158:
    // 0x27a158: 0x0  nop
    ctx->pc = 0x27a158u;
    // NOP
label_27a15c:
    // 0x27a15c: 0x0  nop
    ctx->pc = 0x27a15cu;
    // NOP
label_27a160:
    // 0x27a160: 0x11037  .word       0x00011037                   # INVALID     $zero, $at, 0x1037 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a160u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x27A160 raw=0x00011037"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27a164:
    // 0x27a164: 0x31f0  tge         $zero, $zero, 199
    ctx->pc = 0x27a164u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27a168:
    // 0x27a168: 0x0  nop
    ctx->pc = 0x27a168u;
    // NOP
label_27a16c:
    // 0x27a16c: 0x0  nop
    ctx->pc = 0x27a16cu;
    // NOP
label_27a170:
    // 0x27a170: 0x1103e  dsrl32      $v0, $at, 0
    ctx->pc = 0x27a170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 1) >> (32 + 0));
label_27a174:
    // 0x27a174: 0x8a70  tge         $zero, $zero, 553
    ctx->pc = 0x27a174u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27a178:
    // 0x27a178: 0x0  nop
    ctx->pc = 0x27a178u;
    // NOP
label_27a17c:
    // 0x27a17c: 0x0  nop
    ctx->pc = 0x27a17cu;
    // NOP
label_27a180:
    // 0x27a180: 0x11050  .word       0x00011050                   # mfhi        $v0 # 00010040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a180u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_27a184:
    // 0x27a184: 0x5ec0  sll         $t3, $zero, 27
    ctx->pc = 0x27a184u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_27a188:
    // 0x27a188: 0x0  nop
    ctx->pc = 0x27a188u;
    // NOP
label_27a18c:
    // 0x27a18c: 0x0  nop
    ctx->pc = 0x27a18cu;
    // NOP
label_27a190:
    // 0x27a190: 0x1105c  .word       0x0001105C                   # dmult       $zero, $at # 00001040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a190u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x27A190 raw=0x0001105C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27a194:
    // 0x27a194: 0x7190  .word       0x00007190                   # mfhi        $t6 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a194u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_27a198:
    // 0x27a198: 0x0  nop
    ctx->pc = 0x27a198u;
    // NOP
label_27a19c:
    // 0x27a19c: 0x0  nop
    ctx->pc = 0x27a19cu;
    // NOP
label_27a1a0:
    // 0x27a1a0: 0x1106b  .word       0x0001106B                   # sltu        $v0, $zero, $at # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a1a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_27a1a4:
    // 0x27a1a4: 0x49e0  .word       0x000049E0                   # add         $t1, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a1a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_27a1a8:
    // 0x27a1a8: 0x0  nop
    ctx->pc = 0x27a1a8u;
    // NOP
label_27a1ac:
    // 0x27a1ac: 0x0  nop
    ctx->pc = 0x27a1acu;
    // NOP
label_27a1b0:
    // 0x27a1b0: 0x11075  .word       0x00011075                   # INVALID     $zero, $at, 0x1075 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a1b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x27A1B0 raw=0x00011075"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27a1b4:
    // 0x27a1b4: 0x5700  sll         $t2, $zero, 28
    ctx->pc = 0x27a1b4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_27a1b8:
    // 0x27a1b8: 0x0  nop
    ctx->pc = 0x27a1b8u;
    // NOP
label_27a1bc:
    // 0x27a1bc: 0x0  nop
    ctx->pc = 0x27a1bcu;
    // NOP
label_27a1c0:
    // 0x27a1c0: 0x11080  sll         $v0, $at, 2
    ctx->pc = 0x27a1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 1), 2));
label_27a1c4:
    // 0x27a1c4: 0x8100  sll         $s0, $zero, 4
    ctx->pc = 0x27a1c4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_27a1c8:
    // 0x27a1c8: 0x0  nop
    ctx->pc = 0x27a1c8u;
    // NOP
label_27a1cc:
    // 0x27a1cc: 0x0  nop
    ctx->pc = 0x27a1ccu;
    // NOP
label_27a1d0:
    // 0x27a1d0: 0x11091  .word       0x00011091                   # mthi        $zero # 00011080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a1d0u;
    ctx->hi = GPR_U64(ctx, 0);
label_27a1d4:
    // 0x27a1d4: 0x62a0  .word       0x000062A0                   # add         $t4, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a1d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_27a1d8:
    // 0x27a1d8: 0x0  nop
    ctx->pc = 0x27a1d8u;
    // NOP
label_27a1dc:
    // 0x27a1dc: 0x0  nop
    ctx->pc = 0x27a1dcu;
    // NOP
label_27a1e0:
    // 0x27a1e0: 0x1109e  .word       0x0001109E                   # ddiv        $v0, $zero, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a1e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x27A1E0 raw=0x0001109E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27a1e4:
    // 0x27a1e4: 0x3da0  .word       0x00003DA0                   # add         $a3, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a1e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_27a1e8:
    // 0x27a1e8: 0x0  nop
    ctx->pc = 0x27a1e8u;
    // NOP
label_27a1ec:
    // 0x27a1ec: 0x0  nop
    ctx->pc = 0x27a1ecu;
    // NOP
label_27a1f0:
    // 0x27a1f0: 0x110a6  .word       0x000110A6                   # xor         $v0, $zero, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a1f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_27a1f4:
    // 0x27a1f4: 0x6860  .word       0x00006860                   # add         $t5, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a1f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_27a1f8:
    // 0x27a1f8: 0x0  nop
    ctx->pc = 0x27a1f8u;
    // NOP
label_27a1fc:
    // 0x27a1fc: 0x0  nop
    ctx->pc = 0x27a1fcu;
    // NOP
label_27a200:
    // 0x27a200: 0x110b4  teq         $zero, $at, 66
    ctx->pc = 0x27a200u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27a204:
    // 0x27a204: 0x5040  sll         $t2, $zero, 1
    ctx->pc = 0x27a204u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_27a208:
    // 0x27a208: 0x0  nop
    ctx->pc = 0x27a208u;
    // NOP
label_27a20c:
    // 0x27a20c: 0x0  nop
    ctx->pc = 0x27a20cu;
    // NOP
label_27a210:
    // 0x27a210: 0x110bf  dsra32      $v0, $at, 2
    ctx->pc = 0x27a210u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 1) >> (32 + 2));
label_27a214:
    // 0x27a214: 0x4f50  .word       0x00004F50                   # mfhi        $t1 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a214u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_27a218:
    // 0x27a218: 0x0  nop
    ctx->pc = 0x27a218u;
    // NOP
label_27a21c:
    // 0x27a21c: 0x0  nop
    ctx->pc = 0x27a21cu;
    // NOP
label_27a220:
    // 0x27a220: 0x110c9  .word       0x000110C9                   # jalr        $v0, $zero # 000100C0 <InstrIdType: CPU_SPECIAL>
label_27a224:
    if (ctx->pc == 0x27A224u) {
        ctx->pc = 0x27A224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A220u;
        // 0x27a224: 0x5cd0  .word       0x00005CD0                   # mfhi        $t3 # 000004C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 11, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A228u;
        goto label_27a228;
    }
    ctx->pc = 0x27A220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 2, 0x27A228u);
        ctx->pc = 0x27A224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A220u;
        // 0x27a224: 0x5cd0  .word       0x00005CD0                   # mfhi        $t3 # 000004C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 11, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A220u, 0x27A228u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27A228u;
label_27a228:
    // 0x27a228: 0x0  nop
    ctx->pc = 0x27a228u;
    // NOP
label_27a22c:
    // 0x27a22c: 0x0  nop
    ctx->pc = 0x27a22cu;
    // NOP
label_27a230:
    // 0x27a230: 0x110d5  .word       0x000110D5                   # INVALID     $zero, $at, 0x10D5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a230u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x27A230 raw=0x000110D5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27a234:
    // 0x27a234: 0x6f70  tge         $zero, $zero, 445
    ctx->pc = 0x27a234u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27a238:
    // 0x27a238: 0x0  nop
    ctx->pc = 0x27a238u;
    // NOP
label_27a23c:
    // 0x27a23c: 0x0  nop
    ctx->pc = 0x27a23cu;
    // NOP
label_27a240:
    // 0x27a240: 0x110e3  .word       0x000110E3                   # negu        $v0, $at # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a240u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_27a244:
    // 0x27a244: 0x44c0  sll         $t0, $zero, 19
    ctx->pc = 0x27a244u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 19));
label_27a248:
    // 0x27a248: 0x0  nop
    ctx->pc = 0x27a248u;
    // NOP
label_27a24c:
    // 0x27a24c: 0x0  nop
    ctx->pc = 0x27a24cu;
    // NOP
label_27a250:
    // 0x27a250: 0x110ec  .word       0x000110EC                   # dadd        $v0, $zero, $at # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a250u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, r); }
label_27a254:
    // 0x27a254: 0x5d90  .word       0x00005D90                   # mfhi        $t3 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a254u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_27a258:
    // 0x27a258: 0x0  nop
    ctx->pc = 0x27a258u;
    // NOP
label_27a25c:
    // 0x27a25c: 0x0  nop
    ctx->pc = 0x27a25cu;
    // NOP
label_27a260:
    // 0x27a260: 0x110f8  dsll        $v0, $at, 3
    ctx->pc = 0x27a260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 1) << 3);
label_27a264:
    // 0x27a264: 0x69c0  sll         $t5, $zero, 7
    ctx->pc = 0x27a264u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_27a268:
    // 0x27a268: 0x0  nop
    ctx->pc = 0x27a268u;
    // NOP
label_27a26c:
    // 0x27a26c: 0x0  nop
    ctx->pc = 0x27a26cu;
    // NOP
label_27a270:
    // 0x27a270: 0x11106  .word       0x00011106                   # srlv        $v0, $at, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a270u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27a274:
    // 0x27a274: 0x78b0  tge         $zero, $zero, 482
    ctx->pc = 0x27a274u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27a278:
    // 0x27a278: 0x0  nop
    ctx->pc = 0x27a278u;
    // NOP
label_27a27c:
    // 0x27a27c: 0x0  nop
    ctx->pc = 0x27a27cu;
    // NOP
label_27a280:
    // 0x27a280: 0x11116  .word       0x00011116                   # dsrlv       $v0, $at, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_27a284:
    // 0x27a284: 0x7f20  .word       0x00007F20                   # add         $t7, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a284u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_27a288:
    // 0x27a288: 0x0  nop
    ctx->pc = 0x27a288u;
    // NOP
label_27a28c:
    // 0x27a28c: 0x0  nop
    ctx->pc = 0x27a28cu;
    // NOP
label_27a290:
    // 0x27a290: 0x11126  .word       0x00011126                   # xor         $v0, $zero, $at # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_27a294:
    // 0x27a294: 0xae70  tge         $zero, $zero, 697
    ctx->pc = 0x27a294u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27a298:
    // 0x27a298: 0x0  nop
    ctx->pc = 0x27a298u;
    // NOP
label_27a29c:
    // 0x27a29c: 0x0  nop
    ctx->pc = 0x27a29cu;
    // NOP
label_27a2a0:
    // 0x27a2a0: 0x1113c  dsll32      $v0, $at, 4
    ctx->pc = 0x27a2a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 1) << (32 + 4));
label_27a2a4:
    // 0x27a2a4: 0x7690  .word       0x00007690                   # mfhi        $t6 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a2a4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_27a2a8:
    // 0x27a2a8: 0x0  nop
    ctx->pc = 0x27a2a8u;
    // NOP
label_27a2ac:
    // 0x27a2ac: 0x0  nop
    ctx->pc = 0x27a2acu;
    // NOP
label_27a2b0:
    // 0x27a2b0: 0x1114b  .word       0x0001114B                   # movn        $v0, $zero, $at # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a2b0u;
    if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_27a2b4:
    // 0x27a2b4: 0x6280  sll         $t4, $zero, 10
    ctx->pc = 0x27a2b4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_27a2b8:
    // 0x27a2b8: 0x0  nop
    ctx->pc = 0x27a2b8u;
    // NOP
label_27a2bc:
    // 0x27a2bc: 0x0  nop
    ctx->pc = 0x27a2bcu;
    // NOP
label_27a2c0:
    // 0x27a2c0: 0x11158  .word       0x00011158                   # mult        $v0, $zero, $at # 00000140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x27a2c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_27a2c4:
    // 0x27a2c4: 0x87c0  sll         $s0, $zero, 31
    ctx->pc = 0x27a2c4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_27a2c8:
    // 0x27a2c8: 0x0  nop
    ctx->pc = 0x27a2c8u;
    // NOP
label_27a2cc:
    // 0x27a2cc: 0x0  nop
    ctx->pc = 0x27a2ccu;
    // NOP
label_27a2d0:
    // 0x27a2d0: 0x11169  .word       0x00011169                   # mtsa        $zero # 00011140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x27a2d0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_27a2d4:
    // 0x27a2d4: 0x5f90  .word       0x00005F90                   # mfhi        $t3 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a2d4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_27a2d8:
    // 0x27a2d8: 0x0  nop
    ctx->pc = 0x27a2d8u;
    // NOP
label_27a2dc:
    // 0x27a2dc: 0x0  nop
    ctx->pc = 0x27a2dcu;
    // NOP
label_27a2e0:
    // 0x27a2e0: 0x11175  .word       0x00011175                   # INVALID     $zero, $at, 0x1175 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a2e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x27A2E0 raw=0x00011175"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27a2e4:
    // 0x27a2e4: 0x3120  .word       0x00003120                   # add         $a2, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a2e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_27a2e8:
    // 0x27a2e8: 0x0  nop
    ctx->pc = 0x27a2e8u;
    // NOP
label_27a2ec:
    // 0x27a2ec: 0x0  nop
    ctx->pc = 0x27a2ecu;
    // NOP
label_27a2f0:
    // 0x27a2f0: 0x1117c  dsll32      $v0, $at, 5
    ctx->pc = 0x27a2f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 1) << (32 + 5));
label_27a2f4:
    // 0x27a2f4: 0x40b0  tge         $zero, $zero, 258
    ctx->pc = 0x27a2f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27a2f8:
    // 0x27a2f8: 0x0  nop
    ctx->pc = 0x27a2f8u;
    // NOP
label_27a2fc:
    // 0x27a2fc: 0x0  nop
    ctx->pc = 0x27a2fcu;
    // NOP
label_27a300:
    // 0x27a300: 0x11185  .word       0x00011185                   # INVALID     $zero, $at, 0x1185 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a300u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x27A300 raw=0x00011185"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27a304:
    // 0x27a304: 0x80f0  tge         $zero, $zero, 515
    ctx->pc = 0x27a304u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27a308:
    // 0x27a308: 0x0  nop
    ctx->pc = 0x27a308u;
    // NOP
label_27a30c:
    // 0x27a30c: 0x0  nop
    ctx->pc = 0x27a30cu;
    // NOP
label_27a310:
    // 0x27a310: 0x11196  .word       0x00011196                   # dsrlv       $v0, $at, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_27a314:
    // 0x27a314: 0x7fa0  .word       0x00007FA0                   # add         $t7, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a314u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_27a318:
    // 0x27a318: 0x0  nop
    ctx->pc = 0x27a318u;
    // NOP
label_27a31c:
    // 0x27a31c: 0x0  nop
    ctx->pc = 0x27a31cu;
    // NOP
label_27a320:
    // 0x27a320: 0x111a6  .word       0x000111A6                   # xor         $v0, $zero, $at # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 1));
label_27a324:
    // 0x27a324: 0x4790  .word       0x00004790                   # mfhi        $t0 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a324u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_27a328:
    // 0x27a328: 0x0  nop
    ctx->pc = 0x27a328u;
    // NOP
label_27a32c:
    // 0x27a32c: 0x0  nop
    ctx->pc = 0x27a32cu;
    // NOP
label_27a330:
    // 0x27a330: 0x111af  .word       0x000111AF                   # dsubu       $v0, $zero, $at # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_27a334:
    // 0x27a334: 0x52c0  sll         $t2, $zero, 11
    ctx->pc = 0x27a334u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_27a338:
    // 0x27a338: 0x0  nop
    ctx->pc = 0x27a338u;
    // NOP
label_27a33c:
    // 0x27a33c: 0x0  nop
    ctx->pc = 0x27a33cu;
    // NOP
label_27a340:
    // 0x27a340: 0x111ba  dsrl        $v0, $at, 6
    ctx->pc = 0x27a340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 1) >> 6);
label_27a344:
    // 0x27a344: 0x4660  .word       0x00004660                   # add         $t0, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a344u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_27a348:
    // 0x27a348: 0x0  nop
    ctx->pc = 0x27a348u;
    // NOP
label_27a34c:
    // 0x27a34c: 0x0  nop
    ctx->pc = 0x27a34cu;
    // NOP
label_27a350:
    // 0x27a350: 0x111c3  sra         $v0, $at, 7
    ctx->pc = 0x27a350u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 1), 7));
label_27a354:
    // 0x27a354: 0x7410  .word       0x00007410                   # mfhi        $t6 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a354u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_27a358:
    // 0x27a358: 0x0  nop
    ctx->pc = 0x27a358u;
    // NOP
label_27a35c:
    // 0x27a35c: 0x0  nop
    ctx->pc = 0x27a35cu;
    // NOP
label_27a360:
    // 0x27a360: 0x111d2  .word       0x000111D2                   # mflo        $v0 # 000101C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a360u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_27a364:
    // 0x27a364: 0x40e0  .word       0x000040E0                   # add         $t0, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a364u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_27a368:
    // 0x27a368: 0x0  nop
    ctx->pc = 0x27a368u;
    // NOP
label_27a36c:
    // 0x27a36c: 0x0  nop
    ctx->pc = 0x27a36cu;
    // NOP
label_27a370:
    // 0x27a370: 0x111db  .word       0x000111DB                   # divu        $v0, $zero, $at # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a370u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_27a374:
    // 0x27a374: 0x2d90  .word       0x00002D90                   # mfhi        $a1 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a374u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_27a378:
    // 0x27a378: 0x0  nop
    ctx->pc = 0x27a378u;
    // NOP
label_27a37c:
    // 0x27a37c: 0x0  nop
    ctx->pc = 0x27a37cu;
    // NOP
label_27a380:
    // 0x27a380: 0x111e1  .word       0x000111E1                   # addu        $v0, $zero, $at # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_27a384:
    // 0x27a384: 0x6790  .word       0x00006790                   # mfhi        $t4 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a384u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_27a388:
    // 0x27a388: 0x0  nop
    ctx->pc = 0x27a388u;
    // NOP
label_27a38c:
    // 0x27a38c: 0x0  nop
    ctx->pc = 0x27a38cu;
    // NOP
label_27a390:
    // 0x27a390: 0x111ee  .word       0x000111EE                   # dsub        $v0, $zero, $at # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a390u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, r); }
label_27a394:
    // 0x27a394: 0x5720  .word       0x00005720                   # add         $t2, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a394u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_27a398:
    // 0x27a398: 0x0  nop
    ctx->pc = 0x27a398u;
    // NOP
label_27a39c:
    // 0x27a39c: 0x0  nop
    ctx->pc = 0x27a39cu;
    // NOP
label_27a3a0:
    // 0x27a3a0: 0x111f9  .word       0x000111F9                   # INVALID     $zero, $at, 0x11F9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a3a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x27A3A0 raw=0x000111F9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27a3a4:
    // 0x27a3a4: 0x4a70  tge         $zero, $zero, 297
    ctx->pc = 0x27a3a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27a3a8:
    // 0x27a3a8: 0x0  nop
    ctx->pc = 0x27a3a8u;
    // NOP
label_27a3ac:
    // 0x27a3ac: 0x0  nop
    ctx->pc = 0x27a3acu;
    // NOP
label_27a3b0:
    // 0x27a3b0: 0x11203  sra         $v0, $at, 8
    ctx->pc = 0x27a3b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 1), 8));
label_27a3b4:
    // 0x27a3b4: 0x2d80  sll         $a1, $zero, 22
    ctx->pc = 0x27a3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_27a3b8:
    // 0x27a3b8: 0x0  nop
    ctx->pc = 0x27a3b8u;
    // NOP
label_27a3bc:
    // 0x27a3bc: 0x0  nop
    ctx->pc = 0x27a3bcu;
    // NOP
label_27a3c0:
    // 0x27a3c0: 0x11209  .word       0x00011209                   # jalr        $v0, $zero # 00010200 <InstrIdType: CPU_SPECIAL>
label_27a3c4:
    if (ctx->pc == 0x27A3C4u) {
        ctx->pc = 0x27A3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A3C0u;
        // 0x27a3c4: 0x3390  .word       0x00003390                   # mfhi        $a2 # 00000380 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 6, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A3C8u;
        goto label_27a3c8;
    }
    ctx->pc = 0x27A3C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 2, 0x27A3C8u);
        ctx->pc = 0x27A3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A3C0u;
        // 0x27a3c4: 0x3390  .word       0x00003390                   # mfhi        $a2 # 00000380 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 6, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A3C0u, 0x27A3C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27A3C8u;
label_27a3c8:
    // 0x27a3c8: 0x0  nop
    ctx->pc = 0x27a3c8u;
    // NOP
label_27a3cc:
    // 0x27a3cc: 0x0  nop
    ctx->pc = 0x27a3ccu;
    // NOP
label_27a3d0:
    // 0x27a3d0: 0x11210  .word       0x00011210                   # mfhi        $v0 # 00010200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a3d0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_27a3d4:
    // 0x27a3d4: 0x4390  .word       0x00004390                   # mfhi        $t0 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a3d4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_27a3d8:
    // 0x27a3d8: 0x0  nop
    ctx->pc = 0x27a3d8u;
    // NOP
label_27a3dc:
    // 0x27a3dc: 0x0  nop
    ctx->pc = 0x27a3dcu;
    // NOP
label_27a3e0:
    // 0x27a3e0: 0x11219  .word       0x00011219                   # multu       $zero, $at # 00001200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a3e0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_27a3e4:
    // 0x27a3e4: 0x3ca0  .word       0x00003CA0                   # add         $a3, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a3e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_27a3e8:
    // 0x27a3e8: 0x0  nop
    ctx->pc = 0x27a3e8u;
    // NOP
label_27a3ec:
    // 0x27a3ec: 0x0  nop
    ctx->pc = 0x27a3ecu;
    // NOP
label_27a3f0:
    // 0x27a3f0: 0x11221  .word       0x00011221                   # addu        $v0, $zero, $at # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_27a3f4:
    // 0x27a3f4: 0x7a10  .word       0x00007A10                   # mfhi        $t7 # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a3f4u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_27a3f8:
    // 0x27a3f8: 0x0  nop
    ctx->pc = 0x27a3f8u;
    // NOP
label_27a3fc:
    // 0x27a3fc: 0x0  nop
    ctx->pc = 0x27a3fcu;
    // NOP
label_27a400:
    // 0x27a400: 0x11231  tgeu        $zero, $at, 72
    ctx->pc = 0x27a400u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27a404:
    // 0x27a404: 0x5cb0  tge         $zero, $zero, 370
    ctx->pc = 0x27a404u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27a408:
    // 0x27a408: 0x0  nop
    ctx->pc = 0x27a408u;
    // NOP
label_27a40c:
    // 0x27a40c: 0x0  nop
    ctx->pc = 0x27a40cu;
    // NOP
label_27a410:
    // 0x27a410: 0x1123d  .word       0x0001123D                   # INVALID     $zero, $at, 0x123D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a410u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x27A410 raw=0x0001123D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27a414:
    // 0x27a414: 0x8100  sll         $s0, $zero, 4
    ctx->pc = 0x27a414u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_27a418:
    // 0x27a418: 0x0  nop
    ctx->pc = 0x27a418u;
    // NOP
label_27a41c:
    // 0x27a41c: 0x0  nop
    ctx->pc = 0x27a41cu;
    // NOP
label_27a420:
    // 0x27a420: 0x1124e  .word       0x0001124E                   # INVALID     $zero, $at, 0x124E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a420u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x27A420 raw=0x0001124E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27a424:
    // 0x27a424: 0x6c80  sll         $t5, $zero, 18
    ctx->pc = 0x27a424u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_27a428:
    // 0x27a428: 0x0  nop
    ctx->pc = 0x27a428u;
    // NOP
label_27a42c:
    // 0x27a42c: 0x0  nop
    ctx->pc = 0x27a42cu;
    // NOP
label_27a430:
    // 0x27a430: 0x1125c  .word       0x0001125C                   # dmult       $zero, $at # 00001240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a430u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x27A430 raw=0x0001125C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27a434:
    // 0x27a434: 0x8430  tge         $zero, $zero, 528
    ctx->pc = 0x27a434u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27a438:
    // 0x27a438: 0x0  nop
    ctx->pc = 0x27a438u;
    // NOP
label_27a43c:
    // 0x27a43c: 0x0  nop
    ctx->pc = 0x27a43cu;
    // NOP
label_27a440:
    // 0x27a440: 0x1126d  .word       0x0001126D                   # daddu       $v0, $zero, $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a440u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_27a444:
    // 0x27a444: 0x4770  tge         $zero, $zero, 285
    ctx->pc = 0x27a444u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27a448:
    // 0x27a448: 0x0  nop
    ctx->pc = 0x27a448u;
    // NOP
label_27a44c:
    // 0x27a44c: 0x0  nop
    ctx->pc = 0x27a44cu;
    // NOP
label_27a450:
    // 0x27a450: 0x11276  tne         $zero, $at, 73
    ctx->pc = 0x27a450u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27a454:
    // 0x27a454: 0x6bc0  sll         $t5, $zero, 15
    ctx->pc = 0x27a454u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_27a458:
    // 0x27a458: 0x0  nop
    ctx->pc = 0x27a458u;
    // NOP
label_27a45c:
    // 0x27a45c: 0x0  nop
    ctx->pc = 0x27a45cu;
    // NOP
label_27a460:
    // 0x27a460: 0x11284  .word       0x00011284                   # sllv        $v0, $at, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a460u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27a464:
    // 0x27a464: 0x7490  .word       0x00007490                   # mfhi        $t6 # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a464u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_27a468:
    // 0x27a468: 0x0  nop
    ctx->pc = 0x27a468u;
    // NOP
label_27a46c:
    // 0x27a46c: 0x0  nop
    ctx->pc = 0x27a46cu;
    // NOP
label_27a470:
    // 0x27a470: 0x11293  .word       0x00011293                   # mtlo        $zero # 00011280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a470u;
    ctx->lo = GPR_U64(ctx, 0);
label_27a474:
    // 0x27a474: 0x5500  sll         $t2, $zero, 20
    ctx->pc = 0x27a474u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_27a478:
    // 0x27a478: 0x0  nop
    ctx->pc = 0x27a478u;
    // NOP
label_27a47c:
    // 0x27a47c: 0x0  nop
    ctx->pc = 0x27a47cu;
    // NOP
label_27a480:
    // 0x27a480: 0x1129e  .word       0x0001129E                   # ddiv        $v0, $zero, $at # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a480u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x27A480 raw=0x0001129E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27a484:
    // 0x27a484: 0x5550  .word       0x00005550                   # mfhi        $t2 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a484u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_27a488:
    // 0x27a488: 0x0  nop
    ctx->pc = 0x27a488u;
    // NOP
label_27a48c:
    // 0x27a48c: 0x0  nop
    ctx->pc = 0x27a48cu;
    // NOP
label_27a490:
    // 0x27a490: 0x112a9  .word       0x000112A9                   # mtsa        $zero # 00011280 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x27a490u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_27a494:
    // 0x27a494: 0x8390  .word       0x00008390                   # mfhi        $s0 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a494u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_27a498:
    // 0x27a498: 0x0  nop
    ctx->pc = 0x27a498u;
    // NOP
label_27a49c:
    // 0x27a49c: 0x0  nop
    ctx->pc = 0x27a49cu;
    // NOP
label_27a4a0:
    // 0x27a4a0: 0x112ba  dsrl        $v0, $at, 10
    ctx->pc = 0x27a4a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 1) >> 10);
label_27a4a4:
    // 0x27a4a4: 0x7390  .word       0x00007390                   # mfhi        $t6 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a4a4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_27a4a8:
    // 0x27a4a8: 0x0  nop
    ctx->pc = 0x27a4a8u;
    // NOP
label_27a4ac:
    // 0x27a4ac: 0x0  nop
    ctx->pc = 0x27a4acu;
    // NOP
label_27a4b0:
    // 0x27a4b0: 0x112c9  .word       0x000112C9                   # jalr        $v0, $zero # 000102C0 <InstrIdType: CPU_SPECIAL>
label_27a4b4:
    if (ctx->pc == 0x27A4B4u) {
        ctx->pc = 0x27A4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A4B0u;
        // 0x27a4b4: 0x48b0  tge         $zero, $zero, 290 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A4B8u;
        goto label_27a4b8;
    }
    ctx->pc = 0x27A4B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 2, 0x27A4B8u);
        ctx->pc = 0x27A4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A4B0u;
        // 0x27a4b4: 0x48b0  tge         $zero, $zero, 290 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A4B0u, 0x27A4B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27A4B8u;
label_27a4b8:
    // 0x27a4b8: 0x0  nop
    ctx->pc = 0x27a4b8u;
    // NOP
label_27a4bc:
    // 0x27a4bc: 0x0  nop
    ctx->pc = 0x27a4bcu;
    // NOP
label_27a4c0:
    // 0x27a4c0: 0x112d3  .word       0x000112D3                   # mtlo        $zero # 000112C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a4c0u;
    ctx->lo = GPR_U64(ctx, 0);
label_27a4c4:
    // 0x27a4c4: 0x5ac0  sll         $t3, $zero, 11
    ctx->pc = 0x27a4c4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 11));
label_27a4c8:
    // 0x27a4c8: 0x0  nop
    ctx->pc = 0x27a4c8u;
    // NOP
label_27a4cc:
    // 0x27a4cc: 0x0  nop
    ctx->pc = 0x27a4ccu;
    // NOP
label_27a4d0:
    // 0x27a4d0: 0x112df  .word       0x000112DF                   # ddivu       $v0, $zero, $at # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a4d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x27A4D0 raw=0x000112DF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27a4d4:
    // 0x27a4d4: 0x5650  .word       0x00005650                   # mfhi        $t2 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a4d4u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_27a4d8:
    // 0x27a4d8: 0x0  nop
    ctx->pc = 0x27a4d8u;
    // NOP
label_27a4dc:
    // 0x27a4dc: 0x0  nop
    ctx->pc = 0x27a4dcu;
    // NOP
label_27a4e0:
    // 0x27a4e0: 0x112ea  .word       0x000112EA                   # slt         $v0, $zero, $at # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a4e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_27a4e4:
    // 0x27a4e4: 0x8700  sll         $s0, $zero, 28
    ctx->pc = 0x27a4e4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_27a4e8:
    // 0x27a4e8: 0x0  nop
    ctx->pc = 0x27a4e8u;
    // NOP
label_27a4ec:
    // 0x27a4ec: 0x0  nop
    ctx->pc = 0x27a4ecu;
    // NOP
label_27a4f0:
    // 0x27a4f0: 0x112fb  dsra        $v0, $at, 11
    ctx->pc = 0x27a4f0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 1) >> 11);
label_27a4f4:
    // 0x27a4f4: 0x6790  .word       0x00006790                   # mfhi        $t4 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a4f4u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_27a4f8:
    // 0x27a4f8: 0x0  nop
    ctx->pc = 0x27a4f8u;
    // NOP
label_27a4fc:
    // 0x27a4fc: 0x0  nop
    ctx->pc = 0x27a4fcu;
    // NOP
label_27a500:
    // 0x27a500: 0x11308  .word       0x00011308                   # jr          $zero # 00011300 <InstrIdType: CPU_SPECIAL>
label_27a504:
    if (ctx->pc == 0x27A504u) {
        ctx->pc = 0x27A504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A500u;
        // 0x27a504: 0x53f0  tge         $zero, $zero, 335 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A508u;
        goto label_27a508;
    }
    ctx->pc = 0x27A500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x27A504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A500u;
        // 0x27a504: 0x53f0  tge         $zero, $zero, 335 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A500u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x27A508u;
label_27a508:
    // 0x27a508: 0x0  nop
    ctx->pc = 0x27a508u;
    // NOP
label_27a50c:
    // 0x27a50c: 0x0  nop
    ctx->pc = 0x27a50cu;
    // NOP
label_27a510:
    // 0x27a510: 0x11313  .word       0x00011313                   # mtlo        $zero # 00011300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a510u;
    ctx->lo = GPR_U64(ctx, 0);
label_27a514:
    // 0x27a514: 0x69e0  .word       0x000069E0                   # add         $t5, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a514u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_27a518:
    // 0x27a518: 0x0  nop
    ctx->pc = 0x27a518u;
    // NOP
label_27a51c:
    // 0x27a51c: 0x0  nop
    ctx->pc = 0x27a51cu;
    // NOP
label_27a520:
    // 0x27a520: 0x11321  .word       0x00011321                   # addu        $v0, $zero, $at # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_27a524:
    // 0x27a524: 0x6300  sll         $t4, $zero, 12
    ctx->pc = 0x27a524u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_27a528:
    // 0x27a528: 0x0  nop
    ctx->pc = 0x27a528u;
    // NOP
label_27a52c:
    // 0x27a52c: 0x0  nop
    ctx->pc = 0x27a52cu;
    // NOP
label_27a530:
    // 0x27a530: 0x1132e  .word       0x0001132E                   # dsub        $v0, $zero, $at # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a530u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, r); }
label_27a534:
    // 0x27a534: 0x4c60  .word       0x00004C60                   # add         $t1, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a534u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_27a538:
    // 0x27a538: 0x0  nop
    ctx->pc = 0x27a538u;
    // NOP
label_27a53c:
    // 0x27a53c: 0x0  nop
    ctx->pc = 0x27a53cu;
    // NOP
label_27a540:
    // 0x27a540: 0x11338  dsll        $v0, $at, 12
    ctx->pc = 0x27a540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 1) << 12);
label_27a544:
    // 0x27a544: 0x5670  tge         $zero, $zero, 345
    ctx->pc = 0x27a544u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27a548:
    // 0x27a548: 0x0  nop
    ctx->pc = 0x27a548u;
    // NOP
label_27a54c:
    // 0x27a54c: 0x0  nop
    ctx->pc = 0x27a54cu;
    // NOP
label_27a550:
    // 0x27a550: 0x11343  sra         $v0, $at, 13
    ctx->pc = 0x27a550u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 1), 13));
label_27a554:
    // 0x27a554: 0x3640  sll         $a2, $zero, 25
    ctx->pc = 0x27a554u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_27a558:
    // 0x27a558: 0x0  nop
    ctx->pc = 0x27a558u;
    // NOP
label_27a55c:
    // 0x27a55c: 0x0  nop
    ctx->pc = 0x27a55cu;
    // NOP
label_27a560:
    // 0x27a560: 0x1134a  .word       0x0001134A                   # movz        $v0, $zero, $at # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a560u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_27a564:
    // 0x27a564: 0x4060  .word       0x00004060                   # add         $t0, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a564u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_27a568:
    // 0x27a568: 0x0  nop
    ctx->pc = 0x27a568u;
    // NOP
label_27a56c:
    // 0x27a56c: 0x0  nop
    ctx->pc = 0x27a56cu;
    // NOP
label_27a570:
    // 0x27a570: 0x11353  .word       0x00011353                   # mtlo        $zero # 00011340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a570u;
    ctx->lo = GPR_U64(ctx, 0);
label_27a574:
    // 0x27a574: 0x64b0  tge         $zero, $zero, 402
    ctx->pc = 0x27a574u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27a578:
    // 0x27a578: 0x0  nop
    ctx->pc = 0x27a578u;
    // NOP
label_27a57c:
    // 0x27a57c: 0x0  nop
    ctx->pc = 0x27a57cu;
    // NOP
label_27a580:
    // 0x27a580: 0x11360  .word       0x00011360                   # add         $v0, $zero, $at # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a580u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_27a584:
    // 0x27a584: 0x5d70  tge         $zero, $zero, 373
    ctx->pc = 0x27a584u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27a588:
    // 0x27a588: 0x0  nop
    ctx->pc = 0x27a588u;
    // NOP
label_27a58c:
    // 0x27a58c: 0x0  nop
    ctx->pc = 0x27a58cu;
    // NOP
label_27a590:
    // 0x27a590: 0x1136c  .word       0x0001136C                   # dadd        $v0, $zero, $at # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a590u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, r); }
label_27a594:
    // 0x27a594: 0x7880  sll         $t7, $zero, 2
    ctx->pc = 0x27a594u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 2));
label_27a598:
    // 0x27a598: 0x0  nop
    ctx->pc = 0x27a598u;
    // NOP
label_27a59c:
    // 0x27a59c: 0x0  nop
    ctx->pc = 0x27a59cu;
    // NOP
label_27a5a0:
    // 0x27a5a0: 0x1137c  dsll32      $v0, $at, 13
    ctx->pc = 0x27a5a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 1) << (32 + 13));
label_27a5a4:
    // 0x27a5a4: 0x9900  sll         $s3, $zero, 4
    ctx->pc = 0x27a5a4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 4));
label_27a5a8:
    // 0x27a5a8: 0x0  nop
    ctx->pc = 0x27a5a8u;
    // NOP
label_27a5ac:
    // 0x27a5ac: 0x0  nop
    ctx->pc = 0x27a5acu;
    // NOP
label_27a5b0:
    // 0x27a5b0: 0x11390  .word       0x00011390                   # mfhi        $v0 # 00010380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a5b0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_27a5b4:
    // 0x27a5b4: 0xb2f0  tge         $zero, $zero, 715
    ctx->pc = 0x27a5b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27a5b8:
    // 0x27a5b8: 0x0  nop
    ctx->pc = 0x27a5b8u;
    // NOP
label_27a5bc:
    // 0x27a5bc: 0x0  nop
    ctx->pc = 0x27a5bcu;
    // NOP
label_27a5c0:
    // 0x27a5c0: 0x113a7  .word       0x000113A7                   # nor         $v0, $zero, $at # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a5c0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_27a5c4:
    // 0x27a5c4: 0x9170  tge         $zero, $zero, 581
    ctx->pc = 0x27a5c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27a5c8:
    // 0x27a5c8: 0x0  nop
    ctx->pc = 0x27a5c8u;
    // NOP
label_27a5cc:
    // 0x27a5cc: 0x0  nop
    ctx->pc = 0x27a5ccu;
    // NOP
label_27a5d0:
    // 0x27a5d0: 0x113ba  dsrl        $v0, $at, 14
    ctx->pc = 0x27a5d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 1) >> 14);
label_27a5d4:
    // 0x27a5d4: 0x6420  .word       0x00006420                   # add         $t4, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a5d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_27a5d8:
    // 0x27a5d8: 0x0  nop
    ctx->pc = 0x27a5d8u;
    // NOP
label_27a5dc:
    // 0x27a5dc: 0x0  nop
    ctx->pc = 0x27a5dcu;
    // NOP
label_27a5e0:
    // 0x27a5e0: 0x113c7  .word       0x000113C7                   # srav        $v0, $at, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a5e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27a5e4:
    // 0x27a5e4: 0x7b90  .word       0x00007B90                   # mfhi        $t7 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a5e4u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_27a5e8:
    // 0x27a5e8: 0x0  nop
    ctx->pc = 0x27a5e8u;
    // NOP
label_27a5ec:
    // 0x27a5ec: 0x0  nop
    ctx->pc = 0x27a5ecu;
    // NOP
label_27a5f0:
    // 0x27a5f0: 0x113d7  .word       0x000113D7                   # dsrav       $v0, $at, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a5f0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_27a5f4:
    // 0x27a5f4: 0x5c30  tge         $zero, $zero, 368
    ctx->pc = 0x27a5f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27a5f8:
    // 0x27a5f8: 0x0  nop
    ctx->pc = 0x27a5f8u;
    // NOP
label_27a5fc:
    // 0x27a5fc: 0x0  nop
    ctx->pc = 0x27a5fcu;
    // NOP
label_27a600:
    // 0x27a600: 0x113e3  .word       0x000113E3                   # negu        $v0, $at # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a600u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_27a604:
    // 0x27a604: 0x46e0  .word       0x000046E0                   # add         $t0, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a604u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_27a608:
    // 0x27a608: 0x0  nop
    ctx->pc = 0x27a608u;
    // NOP
label_27a60c:
    // 0x27a60c: 0x0  nop
    ctx->pc = 0x27a60cu;
    // NOP
label_27a610:
    // 0x27a610: 0x113ec  .word       0x000113EC                   # dadd        $v0, $zero, $at # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a610u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, r); }
label_27a614:
    // 0x27a614: 0x5c30  tge         $zero, $zero, 368
    ctx->pc = 0x27a614u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27a618:
    // 0x27a618: 0x0  nop
    ctx->pc = 0x27a618u;
    // NOP
label_27a61c:
    // 0x27a61c: 0x0  nop
    ctx->pc = 0x27a61cu;
    // NOP
label_27a620:
    // 0x27a620: 0x113f8  dsll        $v0, $at, 15
    ctx->pc = 0x27a620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 1) << 15);
label_27a624:
    // 0x27a624: 0xbd30  tge         $zero, $zero, 756
    ctx->pc = 0x27a624u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27a628:
    // 0x27a628: 0x0  nop
    ctx->pc = 0x27a628u;
    // NOP
label_27a62c:
    // 0x27a62c: 0x0  nop
    ctx->pc = 0x27a62cu;
    // NOP
label_27a630:
    // 0x27a630: 0x11410  .word       0x00011410                   # mfhi        $v0 # 00010400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a630u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_27a634:
    // 0x27a634: 0xbc60  .word       0x0000BC60                   # add         $s7, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a634u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_27a638:
    // 0x27a638: 0x0  nop
    ctx->pc = 0x27a638u;
    // NOP
label_27a63c:
    // 0x27a63c: 0x0  nop
    ctx->pc = 0x27a63cu;
    // NOP
label_27a640:
    // 0x27a640: 0x11428  .word       0x00011428                   # mfsa        $v0 # 00010400 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x27a640u;
    SET_GPR_U32(ctx, 2, ctx->sa);
label_27a644:
    // 0x27a644: 0x7290  .word       0x00007290                   # mfhi        $t6 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a644u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_27a648:
    // 0x27a648: 0x0  nop
    ctx->pc = 0x27a648u;
    // NOP
label_27a64c:
    // 0x27a64c: 0x0  nop
    ctx->pc = 0x27a64cu;
    // NOP
label_27a650:
    // 0x27a650: 0x11437  .word       0x00011437                   # INVALID     $zero, $at, 0x1437 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a650u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x27A650 raw=0x00011437"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27a654:
    // 0x27a654: 0x6020  add         $t4, $zero, $zero
    ctx->pc = 0x27a654u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_27a658:
    // 0x27a658: 0x0  nop
    ctx->pc = 0x27a658u;
    // NOP
label_27a65c:
    // 0x27a65c: 0x0  nop
    ctx->pc = 0x27a65cu;
    // NOP
label_27a660:
    // 0x27a660: 0x11444  .word       0x00011444                   # sllv        $v0, $at, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a660u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27a664:
    // 0x27a664: 0x59a0  .word       0x000059A0                   # add         $t3, $zero, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a664u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_27a668:
    // 0x27a668: 0x0  nop
    ctx->pc = 0x27a668u;
    // NOP
label_27a66c:
    // 0x27a66c: 0x0  nop
    ctx->pc = 0x27a66cu;
    // NOP
label_27a670:
    // 0x27a670: 0x11450  .word       0x00011450                   # mfhi        $v0 # 00010440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a670u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_27a674:
    // 0x27a674: 0xc050  .word       0x0000C050                   # mfhi        $t8 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a674u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_27a678:
    // 0x27a678: 0x0  nop
    ctx->pc = 0x27a678u;
    // NOP
label_27a67c:
    // 0x27a67c: 0x0  nop
    ctx->pc = 0x27a67cu;
    // NOP
label_27a680:
    // 0x27a680: 0x11469  .word       0x00011469                   # mtsa        $zero # 00011440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x27a680u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_27a684:
    // 0x27a684: 0x72f0  tge         $zero, $zero, 459
    ctx->pc = 0x27a684u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27a688:
    // 0x27a688: 0x0  nop
    ctx->pc = 0x27a688u;
    // NOP
label_27a68c:
    // 0x27a68c: 0x0  nop
    ctx->pc = 0x27a68cu;
    // NOP
label_27a690:
    // 0x27a690: 0x11478  dsll        $v0, $at, 17
    ctx->pc = 0x27a690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 1) << 17);
label_27a694:
    // 0x27a694: 0x6030  tge         $zero, $zero, 384
    ctx->pc = 0x27a694u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27a698:
    // 0x27a698: 0x0  nop
    ctx->pc = 0x27a698u;
    // NOP
label_27a69c:
    // 0x27a69c: 0x0  nop
    ctx->pc = 0x27a69cu;
    // NOP
label_27a6a0:
    // 0x27a6a0: 0x11485  .word       0x00011485                   # INVALID     $zero, $at, 0x1485 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a6a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x27A6A0 raw=0x00011485"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27a6a4:
    // 0x27a6a4: 0x7970  tge         $zero, $zero, 485
    ctx->pc = 0x27a6a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27a6a8:
    // 0x27a6a8: 0x0  nop
    ctx->pc = 0x27a6a8u;
    // NOP
label_27a6ac:
    // 0x27a6ac: 0x0  nop
    ctx->pc = 0x27a6acu;
    // NOP
label_27a6b0:
    // 0x27a6b0: 0x11495  .word       0x00011495                   # INVALID     $zero, $at, 0x1495 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a6b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x27A6B0 raw=0x00011495"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27a6b4:
    // 0x27a6b4: 0x8ea0  .word       0x00008EA0                   # add         $s1, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a6b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_27a6b8:
    // 0x27a6b8: 0x0  nop
    ctx->pc = 0x27a6b8u;
    // NOP
label_27a6bc:
    // 0x27a6bc: 0x0  nop
    ctx->pc = 0x27a6bcu;
    // NOP
label_27a6c0:
    // 0x27a6c0: 0x114a7  .word       0x000114A7                   # nor         $v0, $zero, $at # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a6c0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_27a6c4:
    // 0x27a6c4: 0x8e10  .word       0x00008E10                   # mfhi        $s1 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a6c4u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_27a6c8:
    // 0x27a6c8: 0x0  nop
    ctx->pc = 0x27a6c8u;
    // NOP
label_27a6cc:
    // 0x27a6cc: 0x0  nop
    ctx->pc = 0x27a6ccu;
    // NOP
label_27a6d0:
    // 0x27a6d0: 0x114b9  .word       0x000114B9                   # INVALID     $zero, $at, 0x14B9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a6d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x27A6D0 raw=0x000114B9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27a6d4:
    // 0x27a6d4: 0x5670  tge         $zero, $zero, 345
    ctx->pc = 0x27a6d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27a6d8:
    // 0x27a6d8: 0x0  nop
    ctx->pc = 0x27a6d8u;
    // NOP
label_27a6dc:
    // 0x27a6dc: 0x0  nop
    ctx->pc = 0x27a6dcu;
    // NOP
label_27a6e0:
    // 0x27a6e0: 0x114c4  .word       0x000114C4                   # sllv        $v0, $at, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27a6e4:
    // 0x27a6e4: 0x4950  .word       0x00004950                   # mfhi        $t1 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a6e4u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_27a6e8:
    // 0x27a6e8: 0x0  nop
    ctx->pc = 0x27a6e8u;
    // NOP
label_27a6ec:
    // 0x27a6ec: 0x0  nop
    ctx->pc = 0x27a6ecu;
    // NOP
label_27a6f0:
    // 0x27a6f0: 0x114ce  .word       0x000114CE                   # INVALID     $zero, $at, 0x14CE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a6f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x27A6F0 raw=0x000114CE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27a6f4:
    // 0x27a6f4: 0x6e80  sll         $t5, $zero, 26
    ctx->pc = 0x27a6f4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 26));
label_27a6f8:
    // 0x27a6f8: 0x0  nop
    ctx->pc = 0x27a6f8u;
    // NOP
label_27a6fc:
    // 0x27a6fc: 0x0  nop
    ctx->pc = 0x27a6fcu;
    // NOP
label_27a700:
    // 0x27a700: 0x114dc  .word       0x000114DC                   # dmult       $zero, $at # 000014C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a700u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x27A700 raw=0x000114DC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27a704:
    // 0x27a704: 0x80d0  .word       0x000080D0                   # mfhi        $s0 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a704u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_27a708:
    // 0x27a708: 0x0  nop
    ctx->pc = 0x27a708u;
    // NOP
label_27a70c:
    // 0x27a70c: 0x0  nop
    ctx->pc = 0x27a70cu;
    // NOP
label_27a710:
    // 0x27a710: 0x114ed  .word       0x000114ED                   # daddu       $v0, $zero, $at # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a710u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_27a714:
    // 0x27a714: 0x8460  .word       0x00008460                   # add         $s0, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a714u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_27a718:
    // 0x27a718: 0x0  nop
    ctx->pc = 0x27a718u;
    // NOP
label_27a71c:
    // 0x27a71c: 0x0  nop
    ctx->pc = 0x27a71cu;
    // NOP
label_27a720:
    // 0x27a720: 0x114fe  dsrl32      $v0, $at, 19
    ctx->pc = 0x27a720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 1) >> (32 + 19));
label_27a724:
    // 0x27a724: 0x9570  tge         $zero, $zero, 597
    ctx->pc = 0x27a724u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27a728:
    // 0x27a728: 0x0  nop
    ctx->pc = 0x27a728u;
    // NOP
label_27a72c:
    // 0x27a72c: 0x0  nop
    ctx->pc = 0x27a72cu;
    // NOP
label_27a730:
    // 0x27a730: 0x11511  .word       0x00011511                   # mthi        $zero # 00011500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a730u;
    ctx->hi = GPR_U64(ctx, 0);
label_27a734:
    // 0x27a734: 0xd090  .word       0x0000D090                   # mfhi        $k0 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a734u;
    SET_GPR_U64(ctx, 26, ctx->hi);
label_27a738:
    // 0x27a738: 0x0  nop
    ctx->pc = 0x27a738u;
    // NOP
label_27a73c:
    // 0x27a73c: 0x0  nop
    ctx->pc = 0x27a73cu;
    // NOP
label_27a740:
    // 0x27a740: 0x1152c  .word       0x0001152C                   # dadd        $v0, $zero, $at # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a740u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, r); }
label_27a744:
    // 0x27a744: 0xbba0  .word       0x0000BBA0                   # add         $s7, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a744u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_27a748:
    // 0x27a748: 0x0  nop
    ctx->pc = 0x27a748u;
    // NOP
label_27a74c:
    // 0x27a74c: 0x0  nop
    ctx->pc = 0x27a74cu;
    // NOP
label_27a750:
    // 0x27a750: 0x11544  .word       0x00011544                   # sllv        $v0, $at, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a750u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27a754:
    // 0x27a754: 0xcc80  sll         $t9, $zero, 18
    ctx->pc = 0x27a754u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_27a758:
    // 0x27a758: 0x0  nop
    ctx->pc = 0x27a758u;
    // NOP
label_27a75c:
    // 0x27a75c: 0x0  nop
    ctx->pc = 0x27a75cu;
    // NOP
label_27a760:
    // 0x27a760: 0x1155e  .word       0x0001155E                   # ddiv        $v0, $zero, $at # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a760u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x27A760 raw=0x0001155E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27a764:
    // 0x27a764: 0x83a0  .word       0x000083A0                   # add         $s0, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a764u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 16, (int32_t)result);     } }
label_27a768:
    // 0x27a768: 0x0  nop
    ctx->pc = 0x27a768u;
    // NOP
label_27a76c:
    // 0x27a76c: 0x0  nop
    ctx->pc = 0x27a76cu;
    // NOP
label_27a770:
    // 0x27a770: 0x1156f  .word       0x0001156F                   # dsubu       $v0, $zero, $at # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_27a774:
    // 0x27a774: 0x5b60  .word       0x00005B60                   # add         $t3, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a774u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_27a778:
    // 0x27a778: 0x0  nop
    ctx->pc = 0x27a778u;
    // NOP
label_27a77c:
    // 0x27a77c: 0x0  nop
    ctx->pc = 0x27a77cu;
    // NOP
label_27a780:
    // 0x27a780: 0x1157b  dsra        $v0, $at, 21
    ctx->pc = 0x27a780u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 1) >> 21);
label_27a784:
    // 0x27a784: 0x6b10  .word       0x00006B10                   # mfhi        $t5 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a784u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_27a788:
    // 0x27a788: 0x0  nop
    ctx->pc = 0x27a788u;
    // NOP
label_27a78c:
    // 0x27a78c: 0x0  nop
    ctx->pc = 0x27a78cu;
    // NOP
label_27a790:
    // 0x27a790: 0x11589  .word       0x00011589                   # jalr        $v0, $zero # 00010580 <InstrIdType: CPU_SPECIAL>
label_27a794:
    if (ctx->pc == 0x27A794u) {
        ctx->pc = 0x27A794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A790u;
        // 0x27a794: 0x3f10  .word       0x00003F10                   # mfhi        $a3 # 00000700 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 7, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A798u;
        goto label_27a798;
    }
    ctx->pc = 0x27A790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 2, 0x27A798u);
        ctx->pc = 0x27A794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A790u;
        // 0x27a794: 0x3f10  .word       0x00003F10                   # mfhi        $a3 # 00000700 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 7, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A790u, 0x27A798u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27A798u;
label_27a798:
    // 0x27a798: 0x0  nop
    ctx->pc = 0x27a798u;
    // NOP
label_27a79c:
    // 0x27a79c: 0x0  nop
    ctx->pc = 0x27a79cu;
    // NOP
label_27a7a0:
    // 0x27a7a0: 0x11591  .word       0x00011591                   # mthi        $zero # 00011580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a7a0u;
    ctx->hi = GPR_U64(ctx, 0);
label_27a7a4:
    // 0x27a7a4: 0x5b00  sll         $t3, $zero, 12
    ctx->pc = 0x27a7a4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_27a7a8:
    // 0x27a7a8: 0x0  nop
    ctx->pc = 0x27a7a8u;
    // NOP
label_27a7ac:
    // 0x27a7ac: 0x0  nop
    ctx->pc = 0x27a7acu;
    // NOP
label_27a7b0:
    // 0x27a7b0: 0x1159d  .word       0x0001159D                   # dmultu      $zero, $at # 00001580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a7b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x27A7B0 raw=0x0001159D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27a7b4:
    // 0x27a7b4: 0x5ce0  .word       0x00005CE0                   # add         $t3, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a7b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_27a7b8:
    // 0x27a7b8: 0x0  nop
    ctx->pc = 0x27a7b8u;
    // NOP
label_27a7bc:
    // 0x27a7bc: 0x0  nop
    ctx->pc = 0x27a7bcu;
    // NOP
label_27a7c0:
    // 0x27a7c0: 0x115a9  .word       0x000115A9                   # mtsa        $zero # 00011580 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x27a7c0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_27a7c4:
    // 0x27a7c4: 0x3b80  sll         $a3, $zero, 14
    ctx->pc = 0x27a7c4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 14));
label_27a7c8:
    // 0x27a7c8: 0x0  nop
    ctx->pc = 0x27a7c8u;
    // NOP
label_27a7cc:
    // 0x27a7cc: 0x0  nop
    ctx->pc = 0x27a7ccu;
    // NOP
label_27a7d0:
    // 0x27a7d0: 0x115b1  tgeu        $zero, $at, 86
    ctx->pc = 0x27a7d0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27a7d4:
    // 0x27a7d4: 0x4420  .word       0x00004420                   # add         $t0, $zero, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a7d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_27a7d8:
    // 0x27a7d8: 0x0  nop
    ctx->pc = 0x27a7d8u;
    // NOP
label_27a7dc:
    // 0x27a7dc: 0x0  nop
    ctx->pc = 0x27a7dcu;
    // NOP
label_27a7e0:
    // 0x27a7e0: 0x115ba  dsrl        $v0, $at, 22
    ctx->pc = 0x27a7e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 1) >> 22);
label_27a7e4:
    // 0x27a7e4: 0x24e0  .word       0x000024E0                   # add         $a0, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a7e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_27a7e8:
    // 0x27a7e8: 0x0  nop
    ctx->pc = 0x27a7e8u;
    // NOP
label_27a7ec:
    // 0x27a7ec: 0x0  nop
    ctx->pc = 0x27a7ecu;
    // NOP
label_27a7f0:
    // 0x27a7f0: 0x115bf  dsra32      $v0, $at, 22
    ctx->pc = 0x27a7f0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 1) >> (32 + 22));
label_27a7f4:
    // 0x27a7f4: 0x4060  .word       0x00004060                   # add         $t0, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a7f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_27a7f8:
    // 0x27a7f8: 0x0  nop
    ctx->pc = 0x27a7f8u;
    // NOP
label_27a7fc:
    // 0x27a7fc: 0x0  nop
    ctx->pc = 0x27a7fcu;
    // NOP
label_27a800:
    // 0x27a800: 0x115c8  .word       0x000115C8                   # jr          $zero # 000115C0 <InstrIdType: CPU_SPECIAL>
label_27a804:
    if (ctx->pc == 0x27A804u) {
        ctx->pc = 0x27A804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A800u;
        // 0x27a804: 0x37f0  tge         $zero, $zero, 223 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A808u;
        goto label_27a808;
    }
    ctx->pc = 0x27A800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x27A804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A800u;
        // 0x27a804: 0x37f0  tge         $zero, $zero, 223 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A800u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x27A808u;
label_27a808:
    // 0x27a808: 0x0  nop
    ctx->pc = 0x27a808u;
    // NOP
label_27a80c:
    // 0x27a80c: 0x0  nop
    ctx->pc = 0x27a80cu;
    // NOP
label_27a810:
    // 0x27a810: 0x115cf  .word       0x000115CF                   # sync.p # 00011000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a810u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_27a814:
    // 0x27a814: 0x4500  sll         $t0, $zero, 20
    ctx->pc = 0x27a814u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_27a818:
    // 0x27a818: 0x0  nop
    ctx->pc = 0x27a818u;
    // NOP
label_27a81c:
    // 0x27a81c: 0x0  nop
    ctx->pc = 0x27a81cu;
    // NOP
label_27a820:
    // 0x27a820: 0x115d8  .word       0x000115D8                   # mult        $v0, $zero, $at # 000005C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x27a820u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_27a824:
    // 0x27a824: 0x50c0  sll         $t2, $zero, 3
    ctx->pc = 0x27a824u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_27a828:
    // 0x27a828: 0x0  nop
    ctx->pc = 0x27a828u;
    // NOP
label_27a82c:
    // 0x27a82c: 0x0  nop
    ctx->pc = 0x27a82cu;
    // NOP
label_27a830:
    // 0x27a830: 0x115e3  .word       0x000115E3                   # negu        $v0, $at # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a830u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_27a834:
    // 0x27a834: 0x6f60  .word       0x00006F60                   # add         $t5, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a834u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_27a838:
    // 0x27a838: 0x0  nop
    ctx->pc = 0x27a838u;
    // NOP
label_27a83c:
    // 0x27a83c: 0x0  nop
    ctx->pc = 0x27a83cu;
    // NOP
label_27a840:
    // 0x27a840: 0x115f1  tgeu        $zero, $at, 87
    ctx->pc = 0x27a840u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_27a844:
    // 0x27a844: 0x3eb0  tge         $zero, $zero, 250
    ctx->pc = 0x27a844u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_27a848:
    // 0x27a848: 0x0  nop
    ctx->pc = 0x27a848u;
    // NOP
label_27a84c:
    // 0x27a84c: 0x0  nop
    ctx->pc = 0x27a84cu;
    // NOP
label_27a850:
    // 0x27a850: 0x115f9  .word       0x000115F9                   # INVALID     $zero, $at, 0x15F9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a850u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x27A850 raw=0x000115F9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_27a854:
    // 0x27a854: 0x6950  .word       0x00006950                   # mfhi        $t5 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a854u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_27a858:
    // 0x27a858: 0x0  nop
    ctx->pc = 0x27a858u;
    // NOP
label_27a85c:
    // 0x27a85c: 0x0  nop
    ctx->pc = 0x27a85cu;
    // NOP
label_27a860:
    // 0x27a860: 0x11607  .word       0x00011607                   # srav        $v0, $at, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a860u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_27a864:
    // 0x27a864: 0x7390  .word       0x00007390                   # mfhi        $t6 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x27a864u;
    SET_GPR_U64(ctx, 14, ctx->hi);
    ctx->pc = 0x27a868u;
    return;
}

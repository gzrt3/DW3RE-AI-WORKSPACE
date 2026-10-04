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


void FUN_0014eba0_part784(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2cd0d0u: goto label_2cd0d0;
        case 0x2cd0d4u: goto label_2cd0d4;
        case 0x2cd0d8u: goto label_2cd0d8;
        case 0x2cd0dcu: goto label_2cd0dc;
        case 0x2cd0e0u: goto label_2cd0e0;
        case 0x2cd0e4u: goto label_2cd0e4;
        case 0x2cd0e8u: goto label_2cd0e8;
        case 0x2cd0ecu: goto label_2cd0ec;
        case 0x2cd0f0u: goto label_2cd0f0;
        case 0x2cd0f4u: goto label_2cd0f4;
        case 0x2cd0f8u: goto label_2cd0f8;
        case 0x2cd0fcu: goto label_2cd0fc;
        case 0x2cd100u: goto label_2cd100;
        case 0x2cd104u: goto label_2cd104;
        case 0x2cd108u: goto label_2cd108;
        case 0x2cd10cu: goto label_2cd10c;
        case 0x2cd110u: goto label_2cd110;
        case 0x2cd114u: goto label_2cd114;
        case 0x2cd118u: goto label_2cd118;
        case 0x2cd11cu: goto label_2cd11c;
        case 0x2cd120u: goto label_2cd120;
        case 0x2cd124u: goto label_2cd124;
        case 0x2cd128u: goto label_2cd128;
        case 0x2cd12cu: goto label_2cd12c;
        case 0x2cd130u: goto label_2cd130;
        case 0x2cd134u: goto label_2cd134;
        case 0x2cd138u: goto label_2cd138;
        case 0x2cd13cu: goto label_2cd13c;
        case 0x2cd140u: goto label_2cd140;
        case 0x2cd144u: goto label_2cd144;
        case 0x2cd148u: goto label_2cd148;
        case 0x2cd14cu: goto label_2cd14c;
        case 0x2cd150u: goto label_2cd150;
        case 0x2cd154u: goto label_2cd154;
        case 0x2cd158u: goto label_2cd158;
        case 0x2cd15cu: goto label_2cd15c;
        case 0x2cd160u: goto label_2cd160;
        case 0x2cd164u: goto label_2cd164;
        case 0x2cd168u: goto label_2cd168;
        case 0x2cd16cu: goto label_2cd16c;
        case 0x2cd170u: goto label_2cd170;
        case 0x2cd174u: goto label_2cd174;
        case 0x2cd178u: goto label_2cd178;
        case 0x2cd17cu: goto label_2cd17c;
        case 0x2cd180u: goto label_2cd180;
        case 0x2cd184u: goto label_2cd184;
        case 0x2cd188u: goto label_2cd188;
        case 0x2cd18cu: goto label_2cd18c;
        case 0x2cd190u: goto label_2cd190;
        case 0x2cd194u: goto label_2cd194;
        case 0x2cd198u: goto label_2cd198;
        case 0x2cd19cu: goto label_2cd19c;
        case 0x2cd1a0u: goto label_2cd1a0;
        case 0x2cd1a4u: goto label_2cd1a4;
        case 0x2cd1a8u: goto label_2cd1a8;
        case 0x2cd1acu: goto label_2cd1ac;
        case 0x2cd1b0u: goto label_2cd1b0;
        case 0x2cd1b4u: goto label_2cd1b4;
        case 0x2cd1b8u: goto label_2cd1b8;
        case 0x2cd1bcu: goto label_2cd1bc;
        case 0x2cd1c0u: goto label_2cd1c0;
        case 0x2cd1c4u: goto label_2cd1c4;
        case 0x2cd1c8u: goto label_2cd1c8;
        case 0x2cd1ccu: goto label_2cd1cc;
        case 0x2cd1d0u: goto label_2cd1d0;
        case 0x2cd1d4u: goto label_2cd1d4;
        case 0x2cd1d8u: goto label_2cd1d8;
        case 0x2cd1dcu: goto label_2cd1dc;
        case 0x2cd1e0u: goto label_2cd1e0;
        case 0x2cd1e4u: goto label_2cd1e4;
        case 0x2cd1e8u: goto label_2cd1e8;
        case 0x2cd1ecu: goto label_2cd1ec;
        case 0x2cd1f0u: goto label_2cd1f0;
        case 0x2cd1f4u: goto label_2cd1f4;
        case 0x2cd1f8u: goto label_2cd1f8;
        case 0x2cd1fcu: goto label_2cd1fc;
        case 0x2cd200u: goto label_2cd200;
        case 0x2cd204u: goto label_2cd204;
        case 0x2cd208u: goto label_2cd208;
        case 0x2cd20cu: goto label_2cd20c;
        case 0x2cd210u: goto label_2cd210;
        case 0x2cd214u: goto label_2cd214;
        case 0x2cd218u: goto label_2cd218;
        case 0x2cd21cu: goto label_2cd21c;
        case 0x2cd220u: goto label_2cd220;
        case 0x2cd224u: goto label_2cd224;
        case 0x2cd228u: goto label_2cd228;
        case 0x2cd22cu: goto label_2cd22c;
        case 0x2cd230u: goto label_2cd230;
        case 0x2cd234u: goto label_2cd234;
        case 0x2cd238u: goto label_2cd238;
        case 0x2cd23cu: goto label_2cd23c;
        case 0x2cd240u: goto label_2cd240;
        case 0x2cd244u: goto label_2cd244;
        case 0x2cd248u: goto label_2cd248;
        case 0x2cd24cu: goto label_2cd24c;
        case 0x2cd250u: goto label_2cd250;
        case 0x2cd254u: goto label_2cd254;
        case 0x2cd258u: goto label_2cd258;
        case 0x2cd25cu: goto label_2cd25c;
        case 0x2cd260u: goto label_2cd260;
        case 0x2cd264u: goto label_2cd264;
        case 0x2cd268u: goto label_2cd268;
        case 0x2cd26cu: goto label_2cd26c;
        case 0x2cd270u: goto label_2cd270;
        case 0x2cd274u: goto label_2cd274;
        case 0x2cd278u: goto label_2cd278;
        case 0x2cd27cu: goto label_2cd27c;
        case 0x2cd280u: goto label_2cd280;
        case 0x2cd284u: goto label_2cd284;
        case 0x2cd288u: goto label_2cd288;
        case 0x2cd28cu: goto label_2cd28c;
        case 0x2cd290u: goto label_2cd290;
        case 0x2cd294u: goto label_2cd294;
        case 0x2cd298u: goto label_2cd298;
        case 0x2cd29cu: goto label_2cd29c;
        case 0x2cd2a0u: goto label_2cd2a0;
        case 0x2cd2a4u: goto label_2cd2a4;
        case 0x2cd2a8u: goto label_2cd2a8;
        case 0x2cd2acu: goto label_2cd2ac;
        case 0x2cd2b0u: goto label_2cd2b0;
        case 0x2cd2b4u: goto label_2cd2b4;
        case 0x2cd2b8u: goto label_2cd2b8;
        case 0x2cd2bcu: goto label_2cd2bc;
        case 0x2cd2c0u: goto label_2cd2c0;
        case 0x2cd2c4u: goto label_2cd2c4;
        case 0x2cd2c8u: goto label_2cd2c8;
        case 0x2cd2ccu: goto label_2cd2cc;
        case 0x2cd2d0u: goto label_2cd2d0;
        case 0x2cd2d4u: goto label_2cd2d4;
        case 0x2cd2d8u: goto label_2cd2d8;
        case 0x2cd2dcu: goto label_2cd2dc;
        case 0x2cd2e0u: goto label_2cd2e0;
        case 0x2cd2e4u: goto label_2cd2e4;
        case 0x2cd2e8u: goto label_2cd2e8;
        case 0x2cd2ecu: goto label_2cd2ec;
        case 0x2cd2f0u: goto label_2cd2f0;
        case 0x2cd2f4u: goto label_2cd2f4;
        case 0x2cd2f8u: goto label_2cd2f8;
        case 0x2cd2fcu: goto label_2cd2fc;
        case 0x2cd300u: goto label_2cd300;
        case 0x2cd304u: goto label_2cd304;
        case 0x2cd308u: goto label_2cd308;
        case 0x2cd30cu: goto label_2cd30c;
        case 0x2cd310u: goto label_2cd310;
        case 0x2cd314u: goto label_2cd314;
        case 0x2cd318u: goto label_2cd318;
        case 0x2cd31cu: goto label_2cd31c;
        case 0x2cd320u: goto label_2cd320;
        case 0x2cd324u: goto label_2cd324;
        case 0x2cd328u: goto label_2cd328;
        case 0x2cd32cu: goto label_2cd32c;
        case 0x2cd330u: goto label_2cd330;
        case 0x2cd334u: goto label_2cd334;
        case 0x2cd338u: goto label_2cd338;
        case 0x2cd33cu: goto label_2cd33c;
        case 0x2cd340u: goto label_2cd340;
        case 0x2cd344u: goto label_2cd344;
        case 0x2cd348u: goto label_2cd348;
        case 0x2cd34cu: goto label_2cd34c;
        case 0x2cd350u: goto label_2cd350;
        case 0x2cd354u: goto label_2cd354;
        case 0x2cd358u: goto label_2cd358;
        case 0x2cd35cu: goto label_2cd35c;
        case 0x2cd360u: goto label_2cd360;
        case 0x2cd364u: goto label_2cd364;
        case 0x2cd368u: goto label_2cd368;
        case 0x2cd36cu: goto label_2cd36c;
        case 0x2cd370u: goto label_2cd370;
        case 0x2cd374u: goto label_2cd374;
        case 0x2cd378u: goto label_2cd378;
        case 0x2cd37cu: goto label_2cd37c;
        case 0x2cd380u: goto label_2cd380;
        case 0x2cd384u: goto label_2cd384;
        case 0x2cd388u: goto label_2cd388;
        case 0x2cd38cu: goto label_2cd38c;
        case 0x2cd390u: goto label_2cd390;
        case 0x2cd394u: goto label_2cd394;
        case 0x2cd398u: goto label_2cd398;
        case 0x2cd39cu: goto label_2cd39c;
        case 0x2cd3a0u: goto label_2cd3a0;
        case 0x2cd3a4u: goto label_2cd3a4;
        case 0x2cd3a8u: goto label_2cd3a8;
        case 0x2cd3acu: goto label_2cd3ac;
        case 0x2cd3b0u: goto label_2cd3b0;
        case 0x2cd3b4u: goto label_2cd3b4;
        case 0x2cd3b8u: goto label_2cd3b8;
        case 0x2cd3bcu: goto label_2cd3bc;
        case 0x2cd3c0u: goto label_2cd3c0;
        case 0x2cd3c4u: goto label_2cd3c4;
        case 0x2cd3c8u: goto label_2cd3c8;
        case 0x2cd3ccu: goto label_2cd3cc;
        case 0x2cd3d0u: goto label_2cd3d0;
        case 0x2cd3d4u: goto label_2cd3d4;
        case 0x2cd3d8u: goto label_2cd3d8;
        case 0x2cd3dcu: goto label_2cd3dc;
        case 0x2cd3e0u: goto label_2cd3e0;
        case 0x2cd3e4u: goto label_2cd3e4;
        case 0x2cd3e8u: goto label_2cd3e8;
        case 0x2cd3ecu: goto label_2cd3ec;
        case 0x2cd3f0u: goto label_2cd3f0;
        case 0x2cd3f4u: goto label_2cd3f4;
        case 0x2cd3f8u: goto label_2cd3f8;
        case 0x2cd3fcu: goto label_2cd3fc;
        case 0x2cd400u: goto label_2cd400;
        case 0x2cd404u: goto label_2cd404;
        case 0x2cd408u: goto label_2cd408;
        case 0x2cd40cu: goto label_2cd40c;
        case 0x2cd410u: goto label_2cd410;
        case 0x2cd414u: goto label_2cd414;
        case 0x2cd418u: goto label_2cd418;
        case 0x2cd41cu: goto label_2cd41c;
        case 0x2cd420u: goto label_2cd420;
        case 0x2cd424u: goto label_2cd424;
        case 0x2cd428u: goto label_2cd428;
        case 0x2cd42cu: goto label_2cd42c;
        case 0x2cd430u: goto label_2cd430;
        case 0x2cd434u: goto label_2cd434;
        case 0x2cd438u: goto label_2cd438;
        case 0x2cd43cu: goto label_2cd43c;
        case 0x2cd440u: goto label_2cd440;
        case 0x2cd444u: goto label_2cd444;
        case 0x2cd448u: goto label_2cd448;
        case 0x2cd44cu: goto label_2cd44c;
        case 0x2cd450u: goto label_2cd450;
        case 0x2cd454u: goto label_2cd454;
        case 0x2cd458u: goto label_2cd458;
        case 0x2cd45cu: goto label_2cd45c;
        case 0x2cd460u: goto label_2cd460;
        case 0x2cd464u: goto label_2cd464;
        case 0x2cd468u: goto label_2cd468;
        case 0x2cd46cu: goto label_2cd46c;
        case 0x2cd470u: goto label_2cd470;
        case 0x2cd474u: goto label_2cd474;
        case 0x2cd478u: goto label_2cd478;
        case 0x2cd47cu: goto label_2cd47c;
        case 0x2cd480u: goto label_2cd480;
        case 0x2cd484u: goto label_2cd484;
        case 0x2cd488u: goto label_2cd488;
        case 0x2cd48cu: goto label_2cd48c;
        case 0x2cd490u: goto label_2cd490;
        case 0x2cd494u: goto label_2cd494;
        case 0x2cd498u: goto label_2cd498;
        case 0x2cd49cu: goto label_2cd49c;
        case 0x2cd4a0u: goto label_2cd4a0;
        case 0x2cd4a4u: goto label_2cd4a4;
        case 0x2cd4a8u: goto label_2cd4a8;
        case 0x2cd4acu: goto label_2cd4ac;
        case 0x2cd4b0u: goto label_2cd4b0;
        case 0x2cd4b4u: goto label_2cd4b4;
        case 0x2cd4b8u: goto label_2cd4b8;
        case 0x2cd4bcu: goto label_2cd4bc;
        case 0x2cd4c0u: goto label_2cd4c0;
        case 0x2cd4c4u: goto label_2cd4c4;
        case 0x2cd4c8u: goto label_2cd4c8;
        case 0x2cd4ccu: goto label_2cd4cc;
        case 0x2cd4d0u: goto label_2cd4d0;
        case 0x2cd4d4u: goto label_2cd4d4;
        case 0x2cd4d8u: goto label_2cd4d8;
        case 0x2cd4dcu: goto label_2cd4dc;
        case 0x2cd4e0u: goto label_2cd4e0;
        case 0x2cd4e4u: goto label_2cd4e4;
        case 0x2cd4e8u: goto label_2cd4e8;
        case 0x2cd4ecu: goto label_2cd4ec;
        case 0x2cd4f0u: goto label_2cd4f0;
        case 0x2cd4f4u: goto label_2cd4f4;
        case 0x2cd4f8u: goto label_2cd4f8;
        case 0x2cd4fcu: goto label_2cd4fc;
        case 0x2cd500u: goto label_2cd500;
        case 0x2cd504u: goto label_2cd504;
        case 0x2cd508u: goto label_2cd508;
        case 0x2cd50cu: goto label_2cd50c;
        case 0x2cd510u: goto label_2cd510;
        case 0x2cd514u: goto label_2cd514;
        case 0x2cd518u: goto label_2cd518;
        case 0x2cd51cu: goto label_2cd51c;
        case 0x2cd520u: goto label_2cd520;
        case 0x2cd524u: goto label_2cd524;
        case 0x2cd528u: goto label_2cd528;
        case 0x2cd52cu: goto label_2cd52c;
        case 0x2cd530u: goto label_2cd530;
        case 0x2cd534u: goto label_2cd534;
        case 0x2cd538u: goto label_2cd538;
        case 0x2cd53cu: goto label_2cd53c;
        case 0x2cd540u: goto label_2cd540;
        case 0x2cd544u: goto label_2cd544;
        case 0x2cd548u: goto label_2cd548;
        case 0x2cd54cu: goto label_2cd54c;
        case 0x2cd550u: goto label_2cd550;
        case 0x2cd554u: goto label_2cd554;
        case 0x2cd558u: goto label_2cd558;
        case 0x2cd55cu: goto label_2cd55c;
        case 0x2cd560u: goto label_2cd560;
        case 0x2cd564u: goto label_2cd564;
        case 0x2cd568u: goto label_2cd568;
        case 0x2cd56cu: goto label_2cd56c;
        case 0x2cd570u: goto label_2cd570;
        case 0x2cd574u: goto label_2cd574;
        case 0x2cd578u: goto label_2cd578;
        case 0x2cd57cu: goto label_2cd57c;
        case 0x2cd580u: goto label_2cd580;
        case 0x2cd584u: goto label_2cd584;
        case 0x2cd588u: goto label_2cd588;
        case 0x2cd58cu: goto label_2cd58c;
        case 0x2cd590u: goto label_2cd590;
        case 0x2cd594u: goto label_2cd594;
        case 0x2cd598u: goto label_2cd598;
        case 0x2cd59cu: goto label_2cd59c;
        case 0x2cd5a0u: goto label_2cd5a0;
        case 0x2cd5a4u: goto label_2cd5a4;
        case 0x2cd5a8u: goto label_2cd5a8;
        case 0x2cd5acu: goto label_2cd5ac;
        case 0x2cd5b0u: goto label_2cd5b0;
        case 0x2cd5b4u: goto label_2cd5b4;
        case 0x2cd5b8u: goto label_2cd5b8;
        case 0x2cd5bcu: goto label_2cd5bc;
        case 0x2cd5c0u: goto label_2cd5c0;
        case 0x2cd5c4u: goto label_2cd5c4;
        case 0x2cd5c8u: goto label_2cd5c8;
        case 0x2cd5ccu: goto label_2cd5cc;
        case 0x2cd5d0u: goto label_2cd5d0;
        case 0x2cd5d4u: goto label_2cd5d4;
        case 0x2cd5d8u: goto label_2cd5d8;
        case 0x2cd5dcu: goto label_2cd5dc;
        case 0x2cd5e0u: goto label_2cd5e0;
        case 0x2cd5e4u: goto label_2cd5e4;
        case 0x2cd5e8u: goto label_2cd5e8;
        case 0x2cd5ecu: goto label_2cd5ec;
        case 0x2cd5f0u: goto label_2cd5f0;
        case 0x2cd5f4u: goto label_2cd5f4;
        case 0x2cd5f8u: goto label_2cd5f8;
        case 0x2cd5fcu: goto label_2cd5fc;
        case 0x2cd600u: goto label_2cd600;
        case 0x2cd604u: goto label_2cd604;
        case 0x2cd608u: goto label_2cd608;
        case 0x2cd60cu: goto label_2cd60c;
        case 0x2cd610u: goto label_2cd610;
        case 0x2cd614u: goto label_2cd614;
        case 0x2cd618u: goto label_2cd618;
        case 0x2cd61cu: goto label_2cd61c;
        case 0x2cd620u: goto label_2cd620;
        case 0x2cd624u: goto label_2cd624;
        case 0x2cd628u: goto label_2cd628;
        case 0x2cd62cu: goto label_2cd62c;
        case 0x2cd630u: goto label_2cd630;
        case 0x2cd634u: goto label_2cd634;
        case 0x2cd638u: goto label_2cd638;
        case 0x2cd63cu: goto label_2cd63c;
        case 0x2cd640u: goto label_2cd640;
        case 0x2cd644u: goto label_2cd644;
        case 0x2cd648u: goto label_2cd648;
        case 0x2cd64cu: goto label_2cd64c;
        case 0x2cd650u: goto label_2cd650;
        case 0x2cd654u: goto label_2cd654;
        case 0x2cd658u: goto label_2cd658;
        case 0x2cd65cu: goto label_2cd65c;
        case 0x2cd660u: goto label_2cd660;
        case 0x2cd664u: goto label_2cd664;
        case 0x2cd668u: goto label_2cd668;
        case 0x2cd66cu: goto label_2cd66c;
        case 0x2cd670u: goto label_2cd670;
        case 0x2cd674u: goto label_2cd674;
        case 0x2cd678u: goto label_2cd678;
        case 0x2cd67cu: goto label_2cd67c;
        case 0x2cd680u: goto label_2cd680;
        case 0x2cd684u: goto label_2cd684;
        case 0x2cd688u: goto label_2cd688;
        case 0x2cd68cu: goto label_2cd68c;
        case 0x2cd690u: goto label_2cd690;
        case 0x2cd694u: goto label_2cd694;
        case 0x2cd698u: goto label_2cd698;
        case 0x2cd69cu: goto label_2cd69c;
        case 0x2cd6a0u: goto label_2cd6a0;
        case 0x2cd6a4u: goto label_2cd6a4;
        case 0x2cd6a8u: goto label_2cd6a8;
        case 0x2cd6acu: goto label_2cd6ac;
        case 0x2cd6b0u: goto label_2cd6b0;
        case 0x2cd6b4u: goto label_2cd6b4;
        case 0x2cd6b8u: goto label_2cd6b8;
        case 0x2cd6bcu: goto label_2cd6bc;
        case 0x2cd6c0u: goto label_2cd6c0;
        case 0x2cd6c4u: goto label_2cd6c4;
        case 0x2cd6c8u: goto label_2cd6c8;
        case 0x2cd6ccu: goto label_2cd6cc;
        case 0x2cd6d0u: goto label_2cd6d0;
        case 0x2cd6d4u: goto label_2cd6d4;
        case 0x2cd6d8u: goto label_2cd6d8;
        case 0x2cd6dcu: goto label_2cd6dc;
        case 0x2cd6e0u: goto label_2cd6e0;
        case 0x2cd6e4u: goto label_2cd6e4;
        case 0x2cd6e8u: goto label_2cd6e8;
        case 0x2cd6ecu: goto label_2cd6ec;
        case 0x2cd6f0u: goto label_2cd6f0;
        case 0x2cd6f4u: goto label_2cd6f4;
        case 0x2cd6f8u: goto label_2cd6f8;
        case 0x2cd6fcu: goto label_2cd6fc;
        case 0x2cd700u: goto label_2cd700;
        case 0x2cd704u: goto label_2cd704;
        case 0x2cd708u: goto label_2cd708;
        case 0x2cd70cu: goto label_2cd70c;
        case 0x2cd710u: goto label_2cd710;
        case 0x2cd714u: goto label_2cd714;
        case 0x2cd718u: goto label_2cd718;
        case 0x2cd71cu: goto label_2cd71c;
        case 0x2cd720u: goto label_2cd720;
        case 0x2cd724u: goto label_2cd724;
        case 0x2cd728u: goto label_2cd728;
        case 0x2cd72cu: goto label_2cd72c;
        case 0x2cd730u: goto label_2cd730;
        case 0x2cd734u: goto label_2cd734;
        case 0x2cd738u: goto label_2cd738;
        case 0x2cd73cu: goto label_2cd73c;
        case 0x2cd740u: goto label_2cd740;
        case 0x2cd744u: goto label_2cd744;
        case 0x2cd748u: goto label_2cd748;
        case 0x2cd74cu: goto label_2cd74c;
        case 0x2cd750u: goto label_2cd750;
        case 0x2cd754u: goto label_2cd754;
        case 0x2cd758u: goto label_2cd758;
        case 0x2cd75cu: goto label_2cd75c;
        case 0x2cd760u: goto label_2cd760;
        case 0x2cd764u: goto label_2cd764;
        case 0x2cd768u: goto label_2cd768;
        case 0x2cd76cu: goto label_2cd76c;
        case 0x2cd770u: goto label_2cd770;
        case 0x2cd774u: goto label_2cd774;
        case 0x2cd778u: goto label_2cd778;
        case 0x2cd77cu: goto label_2cd77c;
        case 0x2cd780u: goto label_2cd780;
        case 0x2cd784u: goto label_2cd784;
        case 0x2cd788u: goto label_2cd788;
        case 0x2cd78cu: goto label_2cd78c;
        case 0x2cd790u: goto label_2cd790;
        case 0x2cd794u: goto label_2cd794;
        case 0x2cd798u: goto label_2cd798;
        case 0x2cd79cu: goto label_2cd79c;
        case 0x2cd7a0u: goto label_2cd7a0;
        case 0x2cd7a4u: goto label_2cd7a4;
        case 0x2cd7a8u: goto label_2cd7a8;
        case 0x2cd7acu: goto label_2cd7ac;
        case 0x2cd7b0u: goto label_2cd7b0;
        case 0x2cd7b4u: goto label_2cd7b4;
        case 0x2cd7b8u: goto label_2cd7b8;
        case 0x2cd7bcu: goto label_2cd7bc;
        case 0x2cd7c0u: goto label_2cd7c0;
        case 0x2cd7c4u: goto label_2cd7c4;
        case 0x2cd7c8u: goto label_2cd7c8;
        case 0x2cd7ccu: goto label_2cd7cc;
        case 0x2cd7d0u: goto label_2cd7d0;
        case 0x2cd7d4u: goto label_2cd7d4;
        case 0x2cd7d8u: goto label_2cd7d8;
        case 0x2cd7dcu: goto label_2cd7dc;
        case 0x2cd7e0u: goto label_2cd7e0;
        case 0x2cd7e4u: goto label_2cd7e4;
        case 0x2cd7e8u: goto label_2cd7e8;
        case 0x2cd7ecu: goto label_2cd7ec;
        case 0x2cd7f0u: goto label_2cd7f0;
        case 0x2cd7f4u: goto label_2cd7f4;
        case 0x2cd7f8u: goto label_2cd7f8;
        case 0x2cd7fcu: goto label_2cd7fc;
        case 0x2cd800u: goto label_2cd800;
        case 0x2cd804u: goto label_2cd804;
        case 0x2cd808u: goto label_2cd808;
        case 0x2cd80cu: goto label_2cd80c;
        case 0x2cd810u: goto label_2cd810;
        case 0x2cd814u: goto label_2cd814;
        case 0x2cd818u: goto label_2cd818;
        case 0x2cd81cu: goto label_2cd81c;
        case 0x2cd820u: goto label_2cd820;
        case 0x2cd824u: goto label_2cd824;
        case 0x2cd828u: goto label_2cd828;
        case 0x2cd82cu: goto label_2cd82c;
        case 0x2cd830u: goto label_2cd830;
        case 0x2cd834u: goto label_2cd834;
        case 0x2cd838u: goto label_2cd838;
        case 0x2cd83cu: goto label_2cd83c;
        case 0x2cd840u: goto label_2cd840;
        case 0x2cd844u: goto label_2cd844;
        case 0x2cd848u: goto label_2cd848;
        case 0x2cd84cu: goto label_2cd84c;
        case 0x2cd850u: goto label_2cd850;
        case 0x2cd854u: goto label_2cd854;
        case 0x2cd858u: goto label_2cd858;
        case 0x2cd85cu: goto label_2cd85c;
        case 0x2cd860u: goto label_2cd860;
        case 0x2cd864u: goto label_2cd864;
        case 0x2cd868u: goto label_2cd868;
        case 0x2cd86cu: goto label_2cd86c;
        case 0x2cd870u: goto label_2cd870;
        case 0x2cd874u: goto label_2cd874;
        case 0x2cd878u: goto label_2cd878;
        case 0x2cd87cu: goto label_2cd87c;
        case 0x2cd880u: goto label_2cd880;
        case 0x2cd884u: goto label_2cd884;
        case 0x2cd888u: goto label_2cd888;
        case 0x2cd88cu: goto label_2cd88c;
        case 0x2cd890u: goto label_2cd890;
        case 0x2cd894u: goto label_2cd894;
        case 0x2cd898u: goto label_2cd898;
        case 0x2cd89cu: goto label_2cd89c;
        default: return;
    }

label_2cd0d0:
    // 0x2cd0d0: 0x5032471b  beql        $at, $s2, . + 4 + (0x471B << 2)
label_2cd0d4:
    if (ctx->pc == 0x2CD0D4u) {
        ctx->pc = 0x2CD0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD0D0u;
        // 0x2cd0d4: 0x6579616c  daddiu      $t9, $t3, 0x616C (Delay Slot)
        SET_GPR_S64(ctx, 25, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24940);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD0D8u;
        goto label_2cd0d8;
    }
    ctx->pc = 0x2CD0D0u;
    {
        const bool branch_taken_0x2cd0d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 18));
        if (branch_taken_0x2cd0d0) {
            ctx->pc = 0x2CD0D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD0D0u;
            // 0x2cd0d4: 0x6579616c  daddiu      $t9, $t3, 0x616C (Delay Slot)
            SET_GPR_S64(ctx, 25, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24940);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DED40u;
            return;
        }
    }
    ctx->pc = 0x2CD0D8u;
label_2cd0d8:
    // 0x2cd0d8: 0x1b322072  .word       0x1B322072                   # blez        $t9, . + 4 + (0x2072 << 2) # 00120000 <InstrIdType: CPU_NORMAL>
label_2cd0dc:
    if (ctx->pc == 0x2CD0DCu) {
        ctx->pc = 0x2CD0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD0D8u;
        // 0x2cd0dc: 0x68203747  ldl         $zero, 0x3747($at) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 1), 14151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem << shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD0E0u;
        goto label_2cd0e0;
    }
    ctx->pc = 0x2CD0D8u;
    {
        const bool branch_taken_0x2cd0d8 = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x2CD0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD0D8u;
        // 0x2cd0dc: 0x68203747  ldl         $zero, 0x3747($at) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 1), 14151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem << shift)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd0d8) {
            ctx->pc = 0x2D52A4u;
            return;
        }
    }
    ctx->pc = 0x2CD0E0u;
label_2cd0e0:
    // 0x2cd0e0: 0x6a207361  ldl         $zero, 0x7361($s1)
    ctx->pc = 0x2cd0e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 29537); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem << shift)); }
label_2cd0e4:
    // 0x2cd0e4: 0x656e696f  daddiu      $t6, $t3, 0x696F
    ctx->pc = 0x2cd0e4u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26991);
label_2cd0e8:
    // 0x2cd0e8: 0x68742064  ldl         $s4, 0x2064($v1)
    ctx->pc = 0x2cd0e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8292); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_2cd0ec:
    // 0x2cd0ec: 0x61622065  daddi       $v0, $t3, 0x2065
    ctx->pc = 0x2cd0ecu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)8293; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, res); }
label_2cd0f0:
    // 0x2cd0f0: 0x656c7474  daddiu      $t4, $t3, 0x7474
    ctx->pc = 0x2cd0f0u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29812);
label_2cd0f4:
    // 0x2cd0f4: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2cd0f4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2cd0f8:
    // 0x2cd0f8: 0x0  nop
    ctx->pc = 0x2cd0f8u;
    // NOP
label_2cd0fc:
    // 0x2cd0fc: 0x0  nop
    ctx->pc = 0x2cd0fcu;
    // NOP
label_2cd100:
    // 0x2cd100: 0x5032471b  beql        $at, $s2, . + 4 + (0x471B << 2)
label_2cd104:
    if (ctx->pc == 0x2CD104u) {
        ctx->pc = 0x2CD104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD100u;
        // 0x2cd104: 0x6579616c  daddiu      $t9, $t3, 0x616C (Delay Slot)
        SET_GPR_S64(ctx, 25, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24940);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD108u;
        goto label_2cd108;
    }
    ctx->pc = 0x2CD100u;
    {
        const bool branch_taken_0x2cd100 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 18));
        if (branch_taken_0x2cd100) {
            ctx->pc = 0x2CD104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD100u;
            // 0x2cd104: 0x6579616c  daddiu      $t9, $t3, 0x616C (Delay Slot)
            SET_GPR_S64(ctx, 25, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24940);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DED70u;
            return;
        }
    }
    ctx->pc = 0x2CD108u;
label_2cd108:
    // 0x2cd108: 0x1b322072  .word       0x1B322072                   # blez        $t9, . + 4 + (0x2072 << 2) # 00120000 <InstrIdType: CPU_NORMAL>
label_2cd10c:
    if (ctx->pc == 0x2CD10Cu) {
        ctx->pc = 0x2CD10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD108u;
        // 0x2cd10c: 0x65203747  daddiu      $zero, $t1, 0x3747 (Delay Slot)
        SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)14151);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD110u;
        goto label_2cd110;
    }
    ctx->pc = 0x2CD108u;
    {
        const bool branch_taken_0x2cd108 = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x2CD10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD108u;
        // 0x2cd10c: 0x65203747  daddiu      $zero, $t1, 0x3747 (Delay Slot)
        SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)14151);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd108) {
            ctx->pc = 0x2D52D4u;
            return;
        }
    }
    ctx->pc = 0x2CD110u;
label_2cd110:
    // 0x2cd110: 0x73746978  .word       0x73746978                   # INVALID     $k1, $s4, 0x6978 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cd110u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x38 at 0x2CD110 raw=0x73746978");
 /* MITIGATED */
label_2cd114:
    // 0x2cd114: 0x6e61202c  ldr         $at, 0x202C($s3)
    ctx->pc = 0x2cd114u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8236); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2cd118:
    // 0x2cd118: 0x471b2064  .word       0x471B2064                   # INVALID     $t8, $k1, 0x2064 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2cd118u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x18, function 0x24 at 0x2CD118 raw=0x471B2064");
 /* MITIGATED */
label_2cd11c:
    // 0x2cd11c: 0x616c5032  daddi       $t4, $t3, 0x5032
    ctx->pc = 0x2cd11cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)20530; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, res); }
label_2cd120:
    // 0x2cd120: 0x20726579  addi        $s2, $v1, 0x6579
    ctx->pc = 0x2cd120u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25977, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 18, (int32_t)tmp); }
label_2cd124:
    // 0x2cd124: 0x37471b31  ori         $a3, $k0, 0x1B31
    ctx->pc = 0x2cd124u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 26) | (uint64_t)(uint16_t)6961);
label_2cd128:
    // 0x2cd128: 0x6e6f6320  ldr         $t7, 0x6320($s3)
    ctx->pc = 0x2cd128u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 25376); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_2cd12c:
    // 0x2cd12c: 0x756e6974  .word       0x756E6974                   # INVALID     $t3, $t6, 0x6974 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cd12cu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CD12C raw=0x756E6974");
 /* MITIGATED */
label_2cd130:
    // 0x2cd130: 0x70207365  .word       0x70207365                   # INVALID     $at, $zero, 0x7365 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cd130u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x2CD130 raw=0x70207365");
 /* MITIGATED */
label_2cd134:
    // 0x2cd134: 0x2e79616c  sltiu       $t9, $s3, 0x616C
    ctx->pc = 0x2cd134u;
    SET_GPR_U64(ctx, 25, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)24940) ? 1 : 0);
label_2cd138:
    // 0x2cd138: 0x3f4b4f20  .word       0x3F4B4F20                   # lui         $t3, 0x4F20 # 03400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cd138u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)20256 << 16));
label_2cd13c:
    // 0x2cd13c: 0x0  nop
    ctx->pc = 0x2cd13cu;
    // NOP
label_2cd140:
    // 0x2cd140: 0x65766153  daddiu      $s6, $t3, 0x6153
    ctx->pc = 0x2cd140u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24915);
label_2cd144:
    // 0x2cd144: 0x72756320  .word       0x72756320                   # madd1       $t4, $s3, $s5 # 00000300 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cd144u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 21); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_2cd148:
    // 0x2cd148: 0x746e6572  .word       0x746E6572                   # INVALID     $v1, $t6, 0x6572 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cd148u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CD148 raw=0x746E6572");
 /* MITIGATED */
label_2cd14c:
    // 0x2cd14c: 0x74616420  .word       0x74616420                   # INVALID     $v1, $at, 0x6420 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cd14cu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CD14C raw=0x74616420");
 /* MITIGATED */
label_2cd150:
    // 0x2cd150: 0x6e612061  ldr         $at, 0x2061($s3)
    ctx->pc = 0x2cd150u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8289); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2cd154:
    // 0x2cd154: 0x78652064  lq          $a1, 0x2064($v1)
    ctx->pc = 0x2cd154u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 8292)));
label_2cd158:
    // 0x2cd158: 0x74207469  .word       0x74207469                   # INVALID     $at, $zero, 0x7469 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cd158u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CD158 raw=0x74207469");
 /* MITIGATED */
label_2cd15c:
    // 0x2cd15c: 0x67206568  daddiu      $zero, $t9, 0x6568
    ctx->pc = 0x2cd15cu;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 25) + (int64_t)(int32_t)25960);
label_2cd160:
    // 0x2cd160: 0x2e656d61  sltiu       $a1, $s3, 0x6D61
    ctx->pc = 0x2cd160u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)28001) ? 1 : 0);
label_2cd164:
    // 0x2cd164: 0x3f4b4f20  .word       0x3F4B4F20                   # lui         $t3, 0x4F20 # 03400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cd164u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)20256 << 16));
label_2cd168:
    // 0x2cd168: 0x0  nop
    ctx->pc = 0x2cd168u;
    // NOP
label_2cd16c:
    // 0x2cd16c: 0x0  nop
    ctx->pc = 0x2cd16cu;
    // NOP
label_2cd170:
    // 0x2cd170: 0x27643225  addiu       $a0, $k1, 0x3225
    ctx->pc = 0x2cd170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 27), 12837));
label_2cd174:
    // 0x2cd174: 0x64323025  daddiu      $s2, $at, 0x3025
    ctx->pc = 0x2cd174u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)12325);
label_2cd178:
    // 0x2cd178: 0x32302522  andi        $s0, $s1, 0x2522
    ctx->pc = 0x2cd178u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)9506);
label_2cd17c:
    // 0x2cd17c: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cd17cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2cd180:
    // 0x2cd180: 0x2531471b  addiu       $s1, $t1, 0x471B
    ctx->pc = 0x2cd180u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 9), 18203));
label_2cd184:
    // 0x2cd184: 0x37471b73  ori         $a3, $k0, 0x1B73
    ctx->pc = 0x2cd184u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 26) | (uint64_t)(uint16_t)7027);
label_2cd188:
    // 0x2cd188: 0x20736920  addi        $s3, $v1, 0x6920
    ctx->pc = 0x2cd188u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26912, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
label_2cd18c:
    // 0x2cd18c: 0x65666564  daddiu      $a2, $t3, 0x6564
    ctx->pc = 0x2cd18cu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25956);
label_2cd190:
    // 0x2cd190: 0x64657461  daddiu      $a1, $v1, 0x7461
    ctx->pc = 0x2cd190u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)29793);
label_2cd194:
    // 0x2cd194: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x2cd194u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_2cd198:
    // 0x2cd198: 0x0  nop
    ctx->pc = 0x2cd198u;
    // NOP
label_2cd19c:
    // 0x2cd19c: 0x0  nop
    ctx->pc = 0x2cd19cu;
    // NOP
label_2cd1a0:
    // 0x2cd1a0: 0x2533471b  addiu       $s3, $t1, 0x471B
    ctx->pc = 0x2cd1a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 9), 18203));
label_2cd1a4:
    // 0x2cd1a4: 0x37471b73  ori         $a3, $k0, 0x1B73
    ctx->pc = 0x2cd1a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 26) | (uint64_t)(uint16_t)7027);
label_2cd1a8:
    // 0x2cd1a8: 0x20736920  addi        $s3, $v1, 0x6920
    ctx->pc = 0x2cd1a8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26912, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
label_2cd1ac:
    // 0x2cd1ac: 0x6c6c696b  ldr         $t4, 0x696B($v1)
    ctx->pc = 0x2cd1acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26987); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_2cd1b0:
    // 0x2cd1b0: 0xa6465  .word       0x000A6465                   # or          $t4, $zero, $t2 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cd1b0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | GPR_U64(ctx, 10));
label_2cd1b4:
    // 0x2cd1b4: 0x0  nop
    ctx->pc = 0x2cd1b4u;
    // NOP
label_2cd1b8:
    // 0x2cd1b8: 0x0  nop
    ctx->pc = 0x2cd1b8u;
    // NOP
label_2cd1bc:
    // 0x2cd1bc: 0x0  nop
    ctx->pc = 0x2cd1bcu;
    // NOP
label_2cd1c0:
    // 0x2cd1c0: 0x1b20726f  blez        $t9, . + 4 + (0x726F << 2)
label_2cd1c4:
    if (ctx->pc == 0x2CD1C4u) {
        ctx->pc = 0x2CD1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD1C0u;
        // 0x2cd1c4: 0x73253347  .word       0x73253347                   # INVALID     $t9, $a1, 0x3347 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
//         throw std::runtime_error("Unhandled MMI instruction: function 0x7 at 0x2CD1C4 raw=0x73253347");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD1C8u;
        goto label_2cd1c8;
    }
    ctx->pc = 0x2CD1C0u;
    {
        const bool branch_taken_0x2cd1c0 = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x2CD1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD1C0u;
        // 0x2cd1c4: 0x73253347  .word       0x73253347                   # INVALID     $t9, $a1, 0x3347 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
//         throw std::runtime_error("Unhandled MMI instruction: function 0x7 at 0x2CD1C4 raw=0x73253347");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd1c0) {
            ctx->pc = 0x2E9B80u;
            return;
        }
    }
    ctx->pc = 0x2CD1C8u;
label_2cd1c8:
    // 0x2cd1c8: 0x2037471b  addi        $s7, $at, 0x471B
    ctx->pc = 0x2cd1c8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)18203, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 23, (int32_t)tmp); }
label_2cd1cc:
    // 0x2cd1cc: 0x61637365  daddi       $v1, $t3, 0x7365
    ctx->pc = 0x2cd1ccu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29541; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, res); }
label_2cd1d0:
    // 0x2cd1d0: 0x20736570  addi        $s3, $v1, 0x6570
    ctx->pc = 0x2cd1d0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25968, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
label_2cd1d4:
    // 0x2cd1d4: 0x6d6f7266  ldr         $t7, 0x7266($t3)
    ctx->pc = 0x2cd1d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29286); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_2cd1d8:
    // 0x2cd1d8: 0x6e615720  ldr         $at, 0x5720($s3)
    ctx->pc = 0x2cd1d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 22304); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2cd1dc:
    // 0x2cd1dc: 0x73614320  .word       0x73614320                   # madd1       $t0, $k1, $at # 00000300 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cd1dcu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 27) * (int64_t)GPR_S32(ctx, 1); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_2cd1e0:
    // 0x2cd1e0: 0xa656c74  j           func_995B1D0
label_2cd1e4:
    if (ctx->pc == 0x2CD1E4u) {
        ctx->pc = 0x2CD1E8u;
        goto label_2cd1e8;
    }
    ctx->pc = 0x2CD1E0u;
    ctx->pc = 0x995B1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x995B1D0u, 0x2CD1E0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2CD1E8u;
label_2cd1e8:
    // 0x2cd1e8: 0x0  nop
    ctx->pc = 0x2cd1e8u;
    // NOP
label_2cd1ec:
    // 0x2cd1ec: 0x0  nop
    ctx->pc = 0x2cd1ecu;
    // NOP
label_2cd1f0:
    // 0x2cd1f0: 0x1b20726f  blez        $t9, . + 4 + (0x726F << 2)
label_2cd1f4:
    if (ctx->pc == 0x2CD1F4u) {
        ctx->pc = 0x2CD1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD1F0u;
        // 0x2cd1f4: 0x73253147  .word       0x73253147                   # INVALID     $t9, $a1, 0x3147 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
//         throw std::runtime_error("Unhandled MMI instruction: function 0x7 at 0x2CD1F4 raw=0x73253147");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD1F8u;
        goto label_2cd1f8;
    }
    ctx->pc = 0x2CD1F0u;
    {
        const bool branch_taken_0x2cd1f0 = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x2CD1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD1F0u;
        // 0x2cd1f4: 0x73253147  .word       0x73253147                   # INVALID     $t9, $a1, 0x3147 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
//         throw std::runtime_error("Unhandled MMI instruction: function 0x7 at 0x2CD1F4 raw=0x73253147");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd1f0) {
            ctx->pc = 0x2E9BB0u;
            return;
        }
    }
    ctx->pc = 0x2CD1F8u;
label_2cd1f8:
    // 0x2cd1f8: 0x2037471b  addi        $s7, $at, 0x471B
    ctx->pc = 0x2cd1f8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)18203, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 23, (int32_t)tmp); }
label_2cd1fc:
    // 0x2cd1fc: 0x61637365  daddi       $v1, $t3, 0x7365
    ctx->pc = 0x2cd1fcu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29541; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, res); }
label_2cd200:
    // 0x2cd200: 0x20736570  addi        $s3, $v1, 0x6570
    ctx->pc = 0x2cd200u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25968, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
label_2cd204:
    // 0x2cd204: 0x6d6f7266  ldr         $t7, 0x7266($t3)
    ctx->pc = 0x2cd204u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29286); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_2cd208:
    // 0x2cd208: 0x6e615720  ldr         $at, 0x5720($s3)
    ctx->pc = 0x2cd208u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 22304); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2cd20c:
    // 0x2cd20c: 0x73614320  .word       0x73614320                   # madd1       $t0, $k1, $at # 00000300 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cd20cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 27) * (int64_t)GPR_S32(ctx, 1); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_2cd210:
    // 0x2cd210: 0xa656c74  j           func_995B1D0
label_2cd214:
    if (ctx->pc == 0x2CD214u) {
        ctx->pc = 0x2CD218u;
        goto label_2cd218;
    }
    ctx->pc = 0x2CD210u;
    ctx->pc = 0x995B1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x995B1D0u, 0x2CD210u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2CD218u;
label_2cd218:
    // 0x2cd218: 0x0  nop
    ctx->pc = 0x2cd218u;
    // NOP
label_2cd21c:
    // 0x2cd21c: 0x0  nop
    ctx->pc = 0x2cd21cu;
    // NOP
label_2cd220:
    // 0x2cd220: 0x2531471b  addiu       $s1, $t1, 0x471B
    ctx->pc = 0x2cd220u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 9), 18203));
label_2cd224:
    // 0x2cd224: 0x37471b73  ori         $a3, $k0, 0x1B73
    ctx->pc = 0x2cd224u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 26) | (uint64_t)(uint16_t)7027);
label_2cd228:
    // 0x2cd228: 0x471b202c  .word       0x471B202C                   # INVALID     $t8, $k1, 0x202C # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2cd228u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x18, function 0x2C at 0x2CD228 raw=0x471B202C");
 /* MITIGATED */
label_2cd22c:
    // 0x2cd22c: 0x1b732531  .word       0x1B732531                   # blez        $k1, . + 4 + (0x2531 << 2) # 00130000 <InstrIdType: CPU_NORMAL>
label_2cd230:
    if (ctx->pc == 0x2CD230u) {
        ctx->pc = 0x2CD230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD22Cu;
        // 0x2cd230: 0x202c3747  addi        $t4, $at, 0x3747 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)14151, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD234u;
        goto label_2cd234;
    }
    ctx->pc = 0x2CD22Cu;
    {
        const bool branch_taken_0x2cd22c = (GPR_S32(ctx, 27) <= 0);
        ctx->pc = 0x2CD230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD22Cu;
        // 0x2cd230: 0x202c3747  addi        $t4, $at, 0x3747 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)14151, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd22c) {
            ctx->pc = 0x2D66F4u;
            return;
        }
    }
    ctx->pc = 0x2CD234u;
label_2cd234:
    // 0x2cd234: 0x20646e61  addi        $a0, $v1, 0x6E61
    ctx->pc = 0x2cd234u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28257, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_2cd238:
    // 0x2cd238: 0x2531471b  addiu       $s1, $t1, 0x471B
    ctx->pc = 0x2cd238u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 9), 18203));
label_2cd23c:
    // 0x2cd23c: 0x37471b73  ori         $a3, $k0, 0x1B73
    ctx->pc = 0x2cd23cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 26) | (uint64_t)(uint16_t)7027);
label_2cd240:
    // 0x2cd240: 0x65726120  daddiu      $s2, $t3, 0x6120
    ctx->pc = 0x2cd240u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24864);
label_2cd244:
    // 0x2cd244: 0x66656420  daddiu      $a1, $s3, 0x6420
    ctx->pc = 0x2cd244u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)25632);
label_2cd248:
    // 0x2cd248: 0x65746165  daddiu      $s4, $t3, 0x6165
    ctx->pc = 0x2cd248u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24933);
label_2cd24c:
    // 0x2cd24c: 0xa64  .word       0x00000A64                   # and         $at, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cd24cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2cd250:
    // 0x2cd250: 0x2533471b  addiu       $s3, $t1, 0x471B
    ctx->pc = 0x2cd250u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 9), 18203));
label_2cd254:
    // 0x2cd254: 0x37471b73  ori         $a3, $k0, 0x1B73
    ctx->pc = 0x2cd254u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 26) | (uint64_t)(uint16_t)7027);
label_2cd258:
    // 0x2cd258: 0x471b202c  .word       0x471B202C                   # INVALID     $t8, $k1, 0x202C # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2cd258u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x18, function 0x2C at 0x2CD258 raw=0x471B202C");
 /* MITIGATED */
label_2cd25c:
    // 0x2cd25c: 0x1b732533  .word       0x1B732533                   # blez        $k1, . + 4 + (0x2533 << 2) # 00130000 <InstrIdType: CPU_NORMAL>
label_2cd260:
    if (ctx->pc == 0x2CD260u) {
        ctx->pc = 0x2CD260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD25Cu;
        // 0x2cd260: 0x202c3747  addi        $t4, $at, 0x3747 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)14151, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD264u;
        goto label_2cd264;
    }
    ctx->pc = 0x2CD25Cu;
    {
        const bool branch_taken_0x2cd25c = (GPR_S32(ctx, 27) <= 0);
        ctx->pc = 0x2CD260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD25Cu;
        // 0x2cd260: 0x202c3747  addi        $t4, $at, 0x3747 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)14151, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd25c) {
            ctx->pc = 0x2D672Cu;
            return;
        }
    }
    ctx->pc = 0x2CD264u;
label_2cd264:
    // 0x2cd264: 0x20646e61  addi        $a0, $v1, 0x6E61
    ctx->pc = 0x2cd264u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28257, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_2cd268:
    // 0x2cd268: 0x2533471b  addiu       $s3, $t1, 0x471B
    ctx->pc = 0x2cd268u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 9), 18203));
label_2cd26c:
    // 0x2cd26c: 0x37471b73  ori         $a3, $k0, 0x1B73
    ctx->pc = 0x2cd26cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 26) | (uint64_t)(uint16_t)7027);
label_2cd270:
    // 0x2cd270: 0x65726120  daddiu      $s2, $t3, 0x6120
    ctx->pc = 0x2cd270u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24864);
label_2cd274:
    // 0x2cd274: 0x6c696b20  ldr         $t1, 0x6B20($v1)
    ctx->pc = 0x2cd274u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 27424); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2cd278:
    // 0x2cd278: 0xa64656c  j           func_99195B0
label_2cd27c:
    if (ctx->pc == 0x2CD27Cu) {
        ctx->pc = 0x2CD280u;
        goto label_2cd280;
    }
    ctx->pc = 0x2CD278u;
    ctx->pc = 0x99195B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x99195B0u, 0x2CD278u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2CD280u;
label_2cd280:
    // 0x2cd280: 0x2533471b  addiu       $s3, $t1, 0x471B
    ctx->pc = 0x2cd280u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 9), 18203));
label_2cd284:
    // 0x2cd284: 0x37471b73  ori         $a3, $k0, 0x1B73
    ctx->pc = 0x2cd284u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 26) | (uint64_t)(uint16_t)7027);
label_2cd288:
    // 0x2cd288: 0x65726220  daddiu      $s2, $t3, 0x6220
    ctx->pc = 0x2cd288u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25120);
label_2cd28c:
    // 0x2cd28c: 0x20736b61  addi        $s3, $v1, 0x6B61
    ctx->pc = 0x2cd28cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)27489, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
label_2cd290:
    // 0x2cd290: 0x6f726874  ldr         $s2, 0x6874($k1)
    ctx->pc = 0x2cd290u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 26740); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
label_2cd294:
    // 0x2cd294: 0x20686775  addi        $t0, $v1, 0x6775
    ctx->pc = 0x2cd294u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26485, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
label_2cd298:
    // 0x2cd298: 0x20656874  addi        $a1, $v1, 0x6874
    ctx->pc = 0x2cd298u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26740, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2cd29c:
    // 0x2cd29c: 0x65766966  daddiu      $s6, $t3, 0x6966
    ctx->pc = 0x2cd29cu;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26982);
label_2cd2a0:
    // 0x2cd2a0: 0x74616720  .word       0x74616720                   # INVALID     $v1, $at, 0x6720 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cd2a0u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CD2A0 raw=0x74616720");
 /* MITIGATED */
label_2cd2a4:
    // 0x2cd2a4: 0xa7365  .word       0x000A7365                   # or          $t6, $zero, $t2 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cd2a4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 10));
label_2cd2a8:
    // 0x2cd2a8: 0x0  nop
    ctx->pc = 0x2cd2a8u;
    // NOP
label_2cd2ac:
    // 0x2cd2ac: 0x0  nop
    ctx->pc = 0x2cd2acu;
    // NOP
label_2cd2b0:
    // 0x2cd2b0: 0x1b20726f  blez        $t9, . + 4 + (0x726F << 2)
label_2cd2b4:
    if (ctx->pc == 0x2CD2B4u) {
        ctx->pc = 0x2CD2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD2B0u;
        // 0x2cd2b4: 0x73253347  .word       0x73253347                   # INVALID     $t9, $a1, 0x3347 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
//         throw std::runtime_error("Unhandled MMI instruction: function 0x7 at 0x2CD2B4 raw=0x73253347");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD2B8u;
        goto label_2cd2b8;
    }
    ctx->pc = 0x2CD2B0u;
    {
        const bool branch_taken_0x2cd2b0 = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x2CD2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD2B0u;
        // 0x2cd2b4: 0x73253347  .word       0x73253347                   # INVALID     $t9, $a1, 0x3347 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
//         throw std::runtime_error("Unhandled MMI instruction: function 0x7 at 0x2CD2B4 raw=0x73253347");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd2b0) {
            ctx->pc = 0x2E9C70u;
            return;
        }
    }
    ctx->pc = 0x2CD2B8u;
label_2cd2b8:
    // 0x2cd2b8: 0x2037471b  addi        $s7, $at, 0x471B
    ctx->pc = 0x2cd2b8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)18203, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 23, (int32_t)tmp); }
label_2cd2bc:
    // 0x2cd2bc: 0x64207369  daddiu      $zero, $at, 0x7369
    ctx->pc = 0x2cd2bcu;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)29545);
label_2cd2c0:
    // 0x2cd2c0: 0x61656665  daddi       $a1, $t3, 0x6665
    ctx->pc = 0x2cd2c0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)26213; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_2cd2c4:
    // 0x2cd2c4: 0xa646574  j           func_99195D0
label_2cd2c8:
    if (ctx->pc == 0x2CD2C8u) {
        ctx->pc = 0x2CD2CCu;
        goto label_2cd2cc;
    }
    ctx->pc = 0x2CD2C4u;
    ctx->pc = 0x99195D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x99195D0u, 0x2CD2C4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2CD2CCu;
label_2cd2cc:
    // 0x2cd2cc: 0x0  nop
    ctx->pc = 0x2cd2ccu;
    // NOP
label_2cd2d0:
    // 0x2cd2d0: 0x2531471b  addiu       $s1, $t1, 0x471B
    ctx->pc = 0x2cd2d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 9), 18203));
label_2cd2d4:
    // 0x2cd2d4: 0x37471b73  ori         $a3, $k0, 0x1B73
    ctx->pc = 0x2cd2d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 26) | (uint64_t)(uint16_t)7027);
label_2cd2d8:
    // 0x2cd2d8: 0x65726220  daddiu      $s2, $t3, 0x6220
    ctx->pc = 0x2cd2d8u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25120);
label_2cd2dc:
    // 0x2cd2dc: 0x20736b61  addi        $s3, $v1, 0x6B61
    ctx->pc = 0x2cd2dcu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)27489, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
label_2cd2e0:
    // 0x2cd2e0: 0x6f726874  ldr         $s2, 0x6874($k1)
    ctx->pc = 0x2cd2e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 26740); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
label_2cd2e4:
    // 0x2cd2e4: 0x20686775  addi        $t0, $v1, 0x6775
    ctx->pc = 0x2cd2e4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26485, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
label_2cd2e8:
    // 0x2cd2e8: 0x20656874  addi        $a1, $v1, 0x6874
    ctx->pc = 0x2cd2e8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26740, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2cd2ec:
    // 0x2cd2ec: 0x65766966  daddiu      $s6, $t3, 0x6966
    ctx->pc = 0x2cd2ecu;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26982);
label_2cd2f0:
    // 0x2cd2f0: 0x74616720  .word       0x74616720                   # INVALID     $v1, $at, 0x6720 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cd2f0u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CD2F0 raw=0x74616720");
 /* MITIGATED */
label_2cd2f4:
    // 0x2cd2f4: 0xa7365  .word       0x000A7365                   # or          $t6, $zero, $t2 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cd2f4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 10));
label_2cd2f8:
    // 0x2cd2f8: 0x0  nop
    ctx->pc = 0x2cd2f8u;
    // NOP
label_2cd2fc:
    // 0x2cd2fc: 0x0  nop
    ctx->pc = 0x2cd2fcu;
    // NOP
label_2cd300:
    // 0x2cd300: 0x1b20726f  blez        $t9, . + 4 + (0x726F << 2)
label_2cd304:
    if (ctx->pc == 0x2CD304u) {
        ctx->pc = 0x2CD304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD300u;
        // 0x2cd304: 0x73253347  .word       0x73253347                   # INVALID     $t9, $a1, 0x3347 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
//         throw std::runtime_error("Unhandled MMI instruction: function 0x7 at 0x2CD304 raw=0x73253347");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD308u;
        goto label_2cd308;
    }
    ctx->pc = 0x2CD300u;
    {
        const bool branch_taken_0x2cd300 = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x2CD304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD300u;
        // 0x2cd304: 0x73253347  .word       0x73253347                   # INVALID     $t9, $a1, 0x3347 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
//         throw std::runtime_error("Unhandled MMI instruction: function 0x7 at 0x2CD304 raw=0x73253347");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd300) {
            ctx->pc = 0x2E9CC0u;
            return;
        }
    }
    ctx->pc = 0x2CD308u;
label_2cd308:
    // 0x2cd308: 0x2037471b  addi        $s7, $at, 0x471B
    ctx->pc = 0x2cd308u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)18203, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 23, (int32_t)tmp); }
label_2cd30c:
    // 0x2cd30c: 0x61637365  daddi       $v1, $t3, 0x7365
    ctx->pc = 0x2cd30cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29541; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, res); }
label_2cd310:
    // 0x2cd310: 0xa736570  j           func_9CD95C0
label_2cd314:
    if (ctx->pc == 0x2CD314u) {
        ctx->pc = 0x2CD318u;
        goto label_2cd318;
    }
    ctx->pc = 0x2CD310u;
    ctx->pc = 0x9CD95C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x9CD95C0u, 0x2CD310u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2CD318u;
label_2cd318:
    // 0x2cd318: 0x0  nop
    ctx->pc = 0x2cd318u;
    // NOP
label_2cd31c:
    // 0x2cd31c: 0x0  nop
    ctx->pc = 0x2cd31cu;
    // NOP
label_2cd320:
    // 0x2cd320: 0x1b20726f  blez        $t9, . + 4 + (0x726F << 2)
label_2cd324:
    if (ctx->pc == 0x2CD324u) {
        ctx->pc = 0x2CD324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD320u;
        // 0x2cd324: 0x73253147  .word       0x73253147                   # INVALID     $t9, $a1, 0x3147 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
//         throw std::runtime_error("Unhandled MMI instruction: function 0x7 at 0x2CD324 raw=0x73253147");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD328u;
        goto label_2cd328;
    }
    ctx->pc = 0x2CD320u;
    {
        const bool branch_taken_0x2cd320 = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x2CD324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD320u;
        // 0x2cd324: 0x73253147  .word       0x73253147                   # INVALID     $t9, $a1, 0x3147 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
//         throw std::runtime_error("Unhandled MMI instruction: function 0x7 at 0x2CD324 raw=0x73253147");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd320) {
            ctx->pc = 0x2E9CE0u;
            return;
        }
    }
    ctx->pc = 0x2CD328u;
label_2cd328:
    // 0x2cd328: 0x2037471b  addi        $s7, $at, 0x471B
    ctx->pc = 0x2cd328u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)18203, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 23, (int32_t)tmp); }
label_2cd32c:
    // 0x2cd32c: 0x61637365  daddi       $v1, $t3, 0x7365
    ctx->pc = 0x2cd32cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29541; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, res); }
label_2cd330:
    // 0x2cd330: 0xa736570  j           func_9CD95C0
label_2cd334:
    if (ctx->pc == 0x2CD334u) {
        ctx->pc = 0x2CD338u;
        goto label_2cd338;
    }
    ctx->pc = 0x2CD330u;
    ctx->pc = 0x9CD95C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x9CD95C0u, 0x2CD330u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2CD338u;
label_2cd338:
    // 0x2cd338: 0x0  nop
    ctx->pc = 0x2cd338u;
    // NOP
label_2cd33c:
    // 0x2cd33c: 0x0  nop
    ctx->pc = 0x2cd33cu;
    // NOP
label_2cd340:
    // 0x2cd340: 0x1b20726f  blez        $t9, . + 4 + (0x726F << 2)
label_2cd344:
    if (ctx->pc == 0x2CD344u) {
        ctx->pc = 0x2CD344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD340u;
        // 0x2cd344: 0x73253347  .word       0x73253347                   # INVALID     $t9, $a1, 0x3347 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
//         throw std::runtime_error("Unhandled MMI instruction: function 0x7 at 0x2CD344 raw=0x73253347");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD348u;
        goto label_2cd348;
    }
    ctx->pc = 0x2CD340u;
    {
        const bool branch_taken_0x2cd340 = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x2CD344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD340u;
        // 0x2cd344: 0x73253347  .word       0x73253347                   # INVALID     $t9, $a1, 0x3347 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
//         throw std::runtime_error("Unhandled MMI instruction: function 0x7 at 0x2CD344 raw=0x73253347");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd340) {
            ctx->pc = 0x2E9D00u;
            return;
        }
    }
    ctx->pc = 0x2CD348u;
label_2cd348:
    // 0x2cd348: 0x2037471b  addi        $s7, $at, 0x471B
    ctx->pc = 0x2cd348u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)18203, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 23, (int32_t)tmp); }
label_2cd34c:
    // 0x2cd34c: 0x72727573  .word       0x72727573                   # INVALID     $s3, $s2, 0x7573 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cd34cu;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x2CD34C raw=0x72727573");
 /* MITIGATED */
label_2cd350:
    // 0x2cd350: 0x65646e65  daddiu      $a0, $t3, 0x6E65
    ctx->pc = 0x2cd350u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28261);
label_2cd354:
    // 0x2cd354: 0xa7372  tlt         $zero, $t2, 461
    ctx->pc = 0x2cd354u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 10)) { runtime->handleTrap(rdram, ctx); }
label_2cd358:
    // 0x2cd358: 0x0  nop
    ctx->pc = 0x2cd358u;
    // NOP
label_2cd35c:
    // 0x2cd35c: 0x0  nop
    ctx->pc = 0x2cd35cu;
    // NOP
label_2cd360:
    // 0x2cd360: 0x1b20726f  blez        $t9, . + 4 + (0x726F << 2)
label_2cd364:
    if (ctx->pc == 0x2CD364u) {
        ctx->pc = 0x2CD364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD360u;
        // 0x2cd364: 0x73253147  .word       0x73253147                   # INVALID     $t9, $a1, 0x3147 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
//         throw std::runtime_error("Unhandled MMI instruction: function 0x7 at 0x2CD364 raw=0x73253147");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD368u;
        goto label_2cd368;
    }
    ctx->pc = 0x2CD360u;
    {
        const bool branch_taken_0x2cd360 = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x2CD364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD360u;
        // 0x2cd364: 0x73253147  .word       0x73253147                   # INVALID     $t9, $a1, 0x3147 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
//         throw std::runtime_error("Unhandled MMI instruction: function 0x7 at 0x2CD364 raw=0x73253147");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd360) {
            ctx->pc = 0x2E9D20u;
            return;
        }
    }
    ctx->pc = 0x2CD368u;
label_2cd368:
    // 0x2cd368: 0x2037471b  addi        $s7, $at, 0x471B
    ctx->pc = 0x2cd368u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)18203, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 23, (int32_t)tmp); }
label_2cd36c:
    // 0x2cd36c: 0x69666e69  ldl         $a2, 0x6E69($t3)
    ctx->pc = 0x2cd36cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28265); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_2cd370:
    // 0x2cd370: 0x6172746c  daddi       $s2, $t3, 0x746C
    ctx->pc = 0x2cd370u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29804; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_2cd374:
    // 0x2cd374: 0x20736574  addi        $s3, $v1, 0x6574
    ctx->pc = 0x2cd374u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25972, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
label_2cd378:
    // 0x2cd378: 0x20656874  addi        $a1, $v1, 0x6874
    ctx->pc = 0x2cd378u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26740, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2cd37c:
    // 0x2cd37c: 0x6d656e65  ldr         $a1, 0x6E65($t3)
    ctx->pc = 0x2cd37cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28261); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2cd380:
    // 0x2cd380: 0x20732779  addi        $s3, $v1, 0x2779
    ctx->pc = 0x2cd380u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)10105, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
label_2cd384:
    // 0x2cd384: 0x6e69616d  ldr         $t1, 0x616D($s3)
    ctx->pc = 0x2cd384u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24941); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2cd388:
    // 0x2cd388: 0x6d616320  ldr         $at, 0x6320($t3)
    ctx->pc = 0x2cd388u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25376); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2cd38c:
    // 0x2cd38c: 0xa70  tge         $zero, $zero, 41
    ctx->pc = 0x2cd38cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2cd390:
    // 0x2cd390: 0x1b20726f  blez        $t9, . + 4 + (0x726F << 2)
label_2cd394:
    if (ctx->pc == 0x2CD394u) {
        ctx->pc = 0x2CD394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD390u;
        // 0x2cd394: 0x73253347  .word       0x73253347                   # INVALID     $t9, $a1, 0x3347 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
//         throw std::runtime_error("Unhandled MMI instruction: function 0x7 at 0x2CD394 raw=0x73253347");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD398u;
        goto label_2cd398;
    }
    ctx->pc = 0x2CD390u;
    {
        const bool branch_taken_0x2cd390 = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x2CD394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD390u;
        // 0x2cd394: 0x73253347  .word       0x73253347                   # INVALID     $t9, $a1, 0x3347 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
//         throw std::runtime_error("Unhandled MMI instruction: function 0x7 at 0x2CD394 raw=0x73253347");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd390) {
            ctx->pc = 0x2E9D50u;
            return;
        }
    }
    ctx->pc = 0x2CD398u;
label_2cd398:
    // 0x2cd398: 0x2037471b  addi        $s7, $at, 0x471B
    ctx->pc = 0x2cd398u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)18203, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 23, (int32_t)tmp); }
label_2cd39c:
    // 0x2cd39c: 0x69666e69  ldl         $a2, 0x6E69($t3)
    ctx->pc = 0x2cd39cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28265); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_2cd3a0:
    // 0x2cd3a0: 0x6172746c  daddi       $s2, $t3, 0x746C
    ctx->pc = 0x2cd3a0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29804; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_2cd3a4:
    // 0x2cd3a4: 0x20736574  addi        $s3, $v1, 0x6574
    ctx->pc = 0x2cd3a4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25972, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
label_2cd3a8:
    // 0x2cd3a8: 0x20656874  addi        $a1, $v1, 0x6874
    ctx->pc = 0x2cd3a8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26740, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2cd3ac:
    // 0x2cd3ac: 0x6d656e65  ldr         $a1, 0x6E65($t3)
    ctx->pc = 0x2cd3acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28261); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2cd3b0:
    // 0x2cd3b0: 0x20732779  addi        $s3, $v1, 0x2779
    ctx->pc = 0x2cd3b0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)10105, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
label_2cd3b4:
    // 0x2cd3b4: 0x6e69616d  ldr         $t1, 0x616D($s3)
    ctx->pc = 0x2cd3b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24941); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2cd3b8:
    // 0x2cd3b8: 0x6d616320  ldr         $at, 0x6320($t3)
    ctx->pc = 0x2cd3b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25376); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2cd3bc:
    // 0x2cd3bc: 0xa70  tge         $zero, $zero, 41
    ctx->pc = 0x2cd3bcu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2cd3c0:
    // 0x2cd3c0: 0x2531471b  addiu       $s1, $t1, 0x471B
    ctx->pc = 0x2cd3c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 9), 18203));
label_2cd3c4:
    // 0x2cd3c4: 0x37471b73  ori         $a3, $k0, 0x1B73
    ctx->pc = 0x2cd3c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 26) | (uint64_t)(uint16_t)7027);
label_2cd3c8:
    // 0x2cd3c8: 0x646e6120  daddiu      $t6, $v1, 0x6120
    ctx->pc = 0x2cd3c8u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)24864);
label_2cd3cc:
    // 0x2cd3cc: 0x6c6c6120  ldr         $t4, 0x6120($v1)
    ctx->pc = 0x2cd3ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24864); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_2cd3d0:
    // 0x2cd3d0: 0x31471b20  andi        $a3, $t2, 0x1B20
    ctx->pc = 0x2cd3d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)6944);
label_2cd3d4:
    // 0x2cd3d4: 0x7565694c  .word       0x7565694C                   # INVALID     $t3, $a1, 0x694C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cd3d4u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CD3D4 raw=0x7565694C");
 /* MITIGATED */
label_2cd3d8:
    // 0x2cd3d8: 0x616e6574  daddi       $t6, $t3, 0x6574
    ctx->pc = 0x2cd3d8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)25972; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
label_2cd3dc:
    // 0x2cd3dc: 0x1b73746e  .word       0x1B73746E                   # blez        $k1, . + 4 + (0x746E << 2) # 00130000 <InstrIdType: CPU_NORMAL>
label_2cd3e0:
    if (ctx->pc == 0x2CD3E0u) {
        ctx->pc = 0x2CD3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD3DCu;
        // 0x2cd3e0: 0x61203747  daddi       $zero, $t1, 0x3747 (Delay Slot)
        { int64_t src = (int64_t)GPR_S64(ctx, 9); int64_t imm = (int64_t)(int32_t)14151; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD3E4u;
        goto label_2cd3e4;
    }
    ctx->pc = 0x2CD3DCu;
    {
        const bool branch_taken_0x2cd3dc = (GPR_S32(ctx, 27) <= 0);
        ctx->pc = 0x2CD3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD3DCu;
        // 0x2cd3e0: 0x61203747  daddi       $zero, $t1, 0x3747 (Delay Slot)
        { int64_t src = (int64_t)GPR_S64(ctx, 9); int64_t imm = (int64_t)(int32_t)14151; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd3dc) {
            ctx->pc = 0x2EA598u;
            return;
        }
    }
    ctx->pc = 0x2CD3E4u;
label_2cd3e4:
    // 0x2cd3e4: 0x64206572  daddiu      $zero, $at, 0x6572
    ctx->pc = 0x2cd3e4u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)25970);
label_2cd3e8:
    // 0x2cd3e8: 0x61656665  daddi       $a1, $t3, 0x6665
    ctx->pc = 0x2cd3e8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)26213; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_2cd3ec:
    // 0x2cd3ec: 0xa646574  j           func_99195D0
label_2cd3f0:
    if (ctx->pc == 0x2CD3F0u) {
        ctx->pc = 0x2CD3F4u;
        goto label_2cd3f4;
    }
    ctx->pc = 0x2CD3ECu;
    ctx->pc = 0x99195D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x99195D0u, 0x2CD3ECu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2CD3F4u;
label_2cd3f4:
    // 0x2cd3f4: 0x0  nop
    ctx->pc = 0x2cd3f4u;
    // NOP
label_2cd3f8:
    // 0x2cd3f8: 0x0  nop
    ctx->pc = 0x2cd3f8u;
    // NOP
label_2cd3fc:
    // 0x2cd3fc: 0x0  nop
    ctx->pc = 0x2cd3fcu;
    // NOP
label_2cd400:
    // 0x2cd400: 0x6120726f  daddi       $zero, $t1, 0x726F
    ctx->pc = 0x2cd400u;
    { int64_t src = (int64_t)GPR_S64(ctx, 9); int64_t imm = (int64_t)(int32_t)29295; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_2cd404:
    // 0x2cd404: 0x1b206c6c  blez        $t9, . + 4 + (0x6C6C << 2)
label_2cd408:
    if (ctx->pc == 0x2CD408u) {
        ctx->pc = 0x2CD408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD404u;
        // 0x2cd408: 0x69633347  ldl         $v1, 0x3347($t3) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 11), 13127); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD40Cu;
        goto label_2cd40c;
    }
    ctx->pc = 0x2CD404u;
    {
        const bool branch_taken_0x2cd404 = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x2CD408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD404u;
        // 0x2cd408: 0x69633347  ldl         $v1, 0x3347($t3) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 11), 13127); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd404) {
            ctx->pc = 0x2E85B8u;
            return;
        }
    }
    ctx->pc = 0x2CD40Cu;
label_2cd40c:
    // 0x2cd40c: 0x696c6976  ldl         $t4, 0x6976($t3)
    ctx->pc = 0x2cd40cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26998); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
label_2cd410:
    // 0x2cd410: 0x1b736e61  .word       0x1B736E61                   # blez        $k1, . + 4 + (0x6E61 << 2) # 00130000 <InstrIdType: CPU_NORMAL>
label_2cd414:
    if (ctx->pc == 0x2CD414u) {
        ctx->pc = 0x2CD414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD410u;
        // 0x2cd414: 0x61203747  daddi       $zero, $t1, 0x3747 (Delay Slot)
        { int64_t src = (int64_t)GPR_S64(ctx, 9); int64_t imm = (int64_t)(int32_t)14151; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD418u;
        goto label_2cd418;
    }
    ctx->pc = 0x2CD410u;
    {
        const bool branch_taken_0x2cd410 = (GPR_S32(ctx, 27) <= 0);
        ctx->pc = 0x2CD414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD410u;
        // 0x2cd414: 0x61203747  daddi       $zero, $t1, 0x3747 (Delay Slot)
        { int64_t src = (int64_t)GPR_S64(ctx, 9); int64_t imm = (int64_t)(int32_t)14151; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd410) {
            ctx->pc = 0x2E8D98u;
            return;
        }
    }
    ctx->pc = 0x2CD418u;
label_2cd418:
    // 0x2cd418: 0x65206572  daddiu      $zero, $t1, 0x6572
    ctx->pc = 0x2cd418u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)25970);
label_2cd41c:
    // 0x2cd41c: 0x696d696c  ldl         $t5, 0x696C($t3)
    ctx->pc = 0x2cd41cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26988); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
label_2cd420:
    // 0x2cd420: 0x6574616e  daddiu      $s4, $t3, 0x616E
    ctx->pc = 0x2cd420u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24942);
label_2cd424:
    // 0x2cd424: 0xa64  .word       0x00000A64                   # and         $at, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cd424u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2cd428:
    // 0x2cd428: 0x0  nop
    ctx->pc = 0x2cd428u;
    // NOP
label_2cd42c:
    // 0x2cd42c: 0x0  nop
    ctx->pc = 0x2cd42cu;
    // NOP
label_2cd430:
    // 0x2cd430: 0x1b20726f  blez        $t9, . + 4 + (0x726F << 2)
label_2cd434:
    if (ctx->pc == 0x2CD434u) {
        ctx->pc = 0x2CD434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD430u;
        // 0x2cd434: 0x73253347  .word       0x73253347                   # INVALID     $t9, $a1, 0x3347 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
//         throw std::runtime_error("Unhandled MMI instruction: function 0x7 at 0x2CD434 raw=0x73253347");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD438u;
        goto label_2cd438;
    }
    ctx->pc = 0x2CD430u;
    {
        const bool branch_taken_0x2cd430 = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x2CD434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD430u;
        // 0x2cd434: 0x73253347  .word       0x73253347                   # INVALID     $t9, $a1, 0x3347 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
//         throw std::runtime_error("Unhandled MMI instruction: function 0x7 at 0x2CD434 raw=0x73253347");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd430) {
            ctx->pc = 0x2E9DF0u;
            return;
        }
    }
    ctx->pc = 0x2CD438u;
label_2cd438:
    // 0x2cd438: 0x2037471b  addi        $s7, $at, 0x471B
    ctx->pc = 0x2cd438u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)18203, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 23, (int32_t)tmp); }
label_2cd43c:
    // 0x2cd43c: 0x6b207369  ldl         $zero, 0x7369($t9)
    ctx->pc = 0x2cd43cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 29545); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem << shift)); }
label_2cd440:
    // 0x2cd440: 0x656c6c69  daddiu      $t4, $t3, 0x6C69
    ctx->pc = 0x2cd440u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)27753);
label_2cd444:
    // 0x2cd444: 0xa64  .word       0x00000A64                   # and         $at, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cd444u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2cd448:
    // 0x2cd448: 0x0  nop
    ctx->pc = 0x2cd448u;
    // NOP
label_2cd44c:
    // 0x2cd44c: 0x0  nop
    ctx->pc = 0x2cd44cu;
    // NOP
label_2cd450:
    // 0x2cd450: 0x2531471b  addiu       $s1, $t1, 0x471B
    ctx->pc = 0x2cd450u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 9), 18203));
label_2cd454:
    // 0x2cd454: 0x37471b73  ori         $a3, $k0, 0x1B73
    ctx->pc = 0x2cd454u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 26) | (uint64_t)(uint16_t)7027);
label_2cd458:
    // 0x2cd458: 0x471b202c  .word       0x471B202C                   # INVALID     $t8, $k1, 0x202C # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2cd458u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x18, function 0x2C at 0x2CD458 raw=0x471B202C");
 /* MITIGATED */
label_2cd45c:
    // 0x2cd45c: 0x1b732531  .word       0x1B732531                   # blez        $k1, . + 4 + (0x2531 << 2) # 00130000 <InstrIdType: CPU_NORMAL>
label_2cd460:
    if (ctx->pc == 0x2CD460u) {
        ctx->pc = 0x2CD460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD45Cu;
        // 0x2cd460: 0x202c3747  addi        $t4, $at, 0x3747 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)14151, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD464u;
        goto label_2cd464;
    }
    ctx->pc = 0x2CD45Cu;
    {
        const bool branch_taken_0x2cd45c = (GPR_S32(ctx, 27) <= 0);
        ctx->pc = 0x2CD460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD45Cu;
        // 0x2cd460: 0x202c3747  addi        $t4, $at, 0x3747 (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)14151, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd45c) {
            ctx->pc = 0x2D6924u;
            return;
        }
    }
    ctx->pc = 0x2CD464u;
label_2cd464:
    // 0x2cd464: 0x2531471b  addiu       $s1, $t1, 0x471B
    ctx->pc = 0x2cd464u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 9), 18203));
label_2cd468:
    // 0x2cd468: 0x37471b73  ori         $a3, $k0, 0x1B73
    ctx->pc = 0x2cd468u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 26) | (uint64_t)(uint16_t)7027);
label_2cd46c:
    // 0x2cd46c: 0x646e6120  daddiu      $t6, $v1, 0x6120
    ctx->pc = 0x2cd46cu;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)24864);
label_2cd470:
    // 0x2cd470: 0x31471b20  andi        $a3, $t2, 0x1B20
    ctx->pc = 0x2cd470u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)6944);
label_2cd474:
    // 0x2cd474: 0x471b7325  .word       0x471B7325                   # INVALID     $t8, $k1, 0x7325 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2cd474u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x18, function 0x25 at 0x2CD474 raw=0x471B7325");
 /* MITIGATED */
label_2cd478:
    // 0x2cd478: 0x72612037  .word       0x72612037                   # psrah       $a0, $at, 0 # 02600000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cd478u;
    SET_GPR_VEC(ctx, 4, _mm_srai_epi16(GPR_VEC(ctx, 1), 0));
label_2cd47c:
    // 0x2cd47c: 0x65642065  daddiu      $a0, $t3, 0x2065
    ctx->pc = 0x2cd47cu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)8293);
label_2cd480:
    // 0x2cd480: 0x74616566  .word       0x74616566                   # INVALID     $v1, $at, 0x6566 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cd480u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CD480 raw=0x74616566");
 /* MITIGATED */
label_2cd484:
    // 0x2cd484: 0xa6465  .word       0x000A6465                   # or          $t4, $zero, $t2 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cd484u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | GPR_U64(ctx, 10));
label_2cd488:
    // 0x2cd488: 0x0  nop
    ctx->pc = 0x2cd488u;
    // NOP
label_2cd48c:
    // 0x2cd48c: 0x0  nop
    ctx->pc = 0x2cd48cu;
    // NOP
label_2cd490:
    // 0x2cd490: 0x2531471b  addiu       $s1, $t1, 0x471B
    ctx->pc = 0x2cd490u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 9), 18203));
label_2cd494:
    // 0x2cd494: 0x37471b73  ori         $a3, $k0, 0x1B73
    ctx->pc = 0x2cd494u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 26) | (uint64_t)(uint16_t)7027);
label_2cd498:
    // 0x2cd498: 0x646e6120  daddiu      $t6, $v1, 0x6120
    ctx->pc = 0x2cd498u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)24864);
label_2cd49c:
    // 0x2cd49c: 0x31471b20  andi        $a3, $t2, 0x1B20
    ctx->pc = 0x2cd49cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)6944);
label_2cd4a0:
    // 0x2cd4a0: 0x471b7325  .word       0x471B7325                   # INVALID     $t8, $k1, 0x7325 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2cd4a0u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x18, function 0x25 at 0x2CD4A0 raw=0x471B7325");
 /* MITIGATED */
label_2cd4a4:
    // 0x2cd4a4: 0x72612037  .word       0x72612037                   # psrah       $a0, $at, 0 # 02600000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cd4a4u;
    SET_GPR_VEC(ctx, 4, _mm_srai_epi16(GPR_VEC(ctx, 1), 0));
label_2cd4a8:
    // 0x2cd4a8: 0x65642065  daddiu      $a0, $t3, 0x2065
    ctx->pc = 0x2cd4a8u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)8293);
label_2cd4ac:
    // 0x2cd4ac: 0x74616566  .word       0x74616566                   # INVALID     $v1, $at, 0x6566 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cd4acu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CD4AC raw=0x74616566");
 /* MITIGATED */
label_2cd4b0:
    // 0x2cd4b0: 0xa6465  .word       0x000A6465                   # or          $t4, $zero, $t2 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cd4b0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | GPR_U64(ctx, 10));
label_2cd4b4:
    // 0x2cd4b4: 0x0  nop
    ctx->pc = 0x2cd4b4u;
    // NOP
label_2cd4b8:
    // 0x2cd4b8: 0x0  nop
    ctx->pc = 0x2cd4b8u;
    // NOP
label_2cd4bc:
    // 0x2cd4bc: 0x0  nop
    ctx->pc = 0x2cd4bcu;
    // NOP
label_2cd4c0:
    // 0x2cd4c0: 0x2533471b  addiu       $s3, $t1, 0x471B
    ctx->pc = 0x2cd4c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 9), 18203));
label_2cd4c4:
    // 0x2cd4c4: 0x37471b73  ori         $a3, $k0, 0x1B73
    ctx->pc = 0x2cd4c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 26) | (uint64_t)(uint16_t)7027);
label_2cd4c8:
    // 0x2cd4c8: 0x646e6120  daddiu      $t6, $v1, 0x6120
    ctx->pc = 0x2cd4c8u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)24864);
label_2cd4cc:
    // 0x2cd4cc: 0x33471b20  andi        $a3, $k0, 0x1B20
    ctx->pc = 0x2cd4ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 26) & (uint64_t)(uint16_t)6944);
label_2cd4d0:
    // 0x2cd4d0: 0x471b7325  .word       0x471B7325                   # INVALID     $t8, $k1, 0x7325 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2cd4d0u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x18, function 0x25 at 0x2CD4D0 raw=0x471B7325");
 /* MITIGATED */
label_2cd4d4:
    // 0x2cd4d4: 0x72612037  .word       0x72612037                   # psrah       $a0, $at, 0 # 02600000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cd4d4u;
    SET_GPR_VEC(ctx, 4, _mm_srai_epi16(GPR_VEC(ctx, 1), 0));
label_2cd4d8:
    // 0x2cd4d8: 0x696b2065  ldl         $t3, 0x2065($t3)
    ctx->pc = 0x2cd4d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 8293); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_2cd4dc:
    // 0x2cd4dc: 0x64656c6c  daddiu      $a1, $v1, 0x6C6C
    ctx->pc = 0x2cd4dcu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)27756);
label_2cd4e0:
    // 0x2cd4e0: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x2cd4e0u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_2cd4e4:
    // 0x2cd4e4: 0x0  nop
    ctx->pc = 0x2cd4e4u;
    // NOP
label_2cd4e8:
    // 0x2cd4e8: 0x0  nop
    ctx->pc = 0x2cd4e8u;
    // NOP
label_2cd4ec:
    // 0x2cd4ec: 0x0  nop
    ctx->pc = 0x2cd4ecu;
    // NOP
label_2cd4f0:
    // 0x2cd4f0: 0x2531471b  addiu       $s1, $t1, 0x471B
    ctx->pc = 0x2cd4f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 9), 18203));
label_2cd4f4:
    // 0x2cd4f4: 0x37471b73  ori         $a3, $k0, 0x1B73
    ctx->pc = 0x2cd4f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 26) | (uint64_t)(uint16_t)7027);
label_2cd4f8:
    // 0x2cd4f8: 0x471b202c  .word       0x471B202C                   # INVALID     $t8, $k1, 0x202C # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2cd4f8u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x18, function 0x2C at 0x2CD4F8 raw=0x471B202C");
 /* MITIGATED */
label_2cd4fc:
    // 0x2cd4fc: 0x1b732531  .word       0x1B732531                   # blez        $k1, . + 4 + (0x2531 << 2) # 00130000 <InstrIdType: CPU_NORMAL>
label_2cd500:
    if (ctx->pc == 0x2CD500u) {
        ctx->pc = 0x2CD500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD4FCu;
        // 0x2cd500: 0x61203747  daddi       $zero, $t1, 0x3747 (Delay Slot)
        { int64_t src = (int64_t)GPR_S64(ctx, 9); int64_t imm = (int64_t)(int32_t)14151; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD504u;
        goto label_2cd504;
    }
    ctx->pc = 0x2CD4FCu;
    {
        const bool branch_taken_0x2cd4fc = (GPR_S32(ctx, 27) <= 0);
        ctx->pc = 0x2CD500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD4FCu;
        // 0x2cd500: 0x61203747  daddi       $zero, $t1, 0x3747 (Delay Slot)
        { int64_t src = (int64_t)GPR_S64(ctx, 9); int64_t imm = (int64_t)(int32_t)14151; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd4fc) {
            ctx->pc = 0x2D69C4u;
            return;
        }
    }
    ctx->pc = 0x2CD504u;
label_2cd504:
    // 0x2cd504: 0x1b20646e  blez        $t9, . + 4 + (0x646E << 2)
label_2cd508:
    if (ctx->pc == 0x2CD508u) {
        ctx->pc = 0x2CD508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD504u;
        // 0x2cd508: 0x73253147  .word       0x73253147                   # INVALID     $t9, $a1, 0x3147 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
//         throw std::runtime_error("Unhandled MMI instruction: function 0x7 at 0x2CD508 raw=0x73253147");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD50Cu;
        goto label_2cd50c;
    }
    ctx->pc = 0x2CD504u;
    {
        const bool branch_taken_0x2cd504 = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x2CD508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD504u;
        // 0x2cd508: 0x73253147  .word       0x73253147                   # INVALID     $t9, $a1, 0x3147 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
//         throw std::runtime_error("Unhandled MMI instruction: function 0x7 at 0x2CD508 raw=0x73253147");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd504) {
            ctx->pc = 0x2E66C0u;
            return;
        }
    }
    ctx->pc = 0x2CD50Cu;
label_2cd50c:
    // 0x2cd50c: 0x2037471b  addi        $s7, $at, 0x471B
    ctx->pc = 0x2cd50cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)18203, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 23, (int32_t)tmp); }
label_2cd510:
    // 0x2cd510: 0x20657261  addi        $a1, $v1, 0x7261
    ctx->pc = 0x2cd510u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29281, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2cd514:
    // 0x2cd514: 0x65666564  daddiu      $a2, $t3, 0x6564
    ctx->pc = 0x2cd514u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25956);
label_2cd518:
    // 0x2cd518: 0x64657461  daddiu      $a1, $v1, 0x7461
    ctx->pc = 0x2cd518u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)29793);
label_2cd51c:
    // 0x2cd51c: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x2cd51cu;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_2cd520:
    // 0x2cd520: 0x73257325  .word       0x73257325                   # INVALID     $t9, $a1, 0x7325 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cd520u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x2CD520 raw=0x73257325");
 /* MITIGATED */
label_2cd524:
    // 0x2cd524: 0x0  nop
    ctx->pc = 0x2cd524u;
    // NOP
label_2cd528:
    // 0x2cd528: 0x0  nop
    ctx->pc = 0x2cd528u;
    // NOP
label_2cd52c:
    // 0x2cd52c: 0x0  nop
    ctx->pc = 0x2cd52cu;
    // NOP
label_2cd530:
    // 0x2cd530: 0x27643225  addiu       $a0, $k1, 0x3225
    ctx->pc = 0x2cd530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 27), 12837));
label_2cd534:
    // 0x2cd534: 0x64323025  daddiu      $s2, $at, 0x3025
    ctx->pc = 0x2cd534u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)12325);
label_2cd538:
    // 0x2cd538: 0x32302522  andi        $s0, $s1, 0x2522
    ctx->pc = 0x2cd538u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)9506);
label_2cd53c:
    // 0x2cd53c: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cd53cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2cd540:
    // 0x2cd540: 0x0  nop
    ctx->pc = 0x2cd540u;
    // NOP
label_2cd544:
    // 0x2cd544: 0x0  nop
    ctx->pc = 0x2cd544u;
    // NOP
label_2cd548:
    // 0x2cd548: 0x0  nop
    ctx->pc = 0x2cd548u;
    // NOP
label_2cd54c:
    // 0x2cd54c: 0x0  nop
    ctx->pc = 0x2cd54cu;
    // NOP
label_2cd550:
    // 0x2cd550: 0x6432252b  daddiu      $s2, $at, 0x252B
    ctx->pc = 0x2cd550u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)9515);
label_2cd554:
    // 0x2cd554: 0x0  nop
    ctx->pc = 0x2cd554u;
    // NOP
label_2cd558:
    // 0x2cd558: 0x6425  .word       0x00006425                   # move        $t4, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cd558u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2cd55c:
    // 0x2cd55c: 0x0  nop
    ctx->pc = 0x2cd55cu;
    // NOP
label_2cd560:
    // 0x2cd560: 0x58414d  break       88, 261
    ctx->pc = 0x2cd560u;
    runtime->handleBreak(rdram, ctx);
label_2cd564:
    // 0x2cd564: 0x0  nop
    ctx->pc = 0x2cd564u;
    // NOP
label_2cd568:
    // 0x2cd568: 0x643325  .word       0x00643325                   # or          $a2, $v1, $a0 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cd568u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_2cd56c:
    // 0x2cd56c: 0x0  nop
    ctx->pc = 0x2cd56cu;
    // NOP
label_2cd570:
    // 0x2cd570: 0x643525  .word       0x00643525                   # or          $a2, $v1, $a0 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cd570u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_2cd574:
    // 0x2cd574: 0x0  nop
    ctx->pc = 0x2cd574u;
    // NOP
label_2cd578:
    // 0x2cd578: 0x0  nop
    ctx->pc = 0x2cd578u;
    // NOP
label_2cd57c:
    // 0x2cd57c: 0x0  nop
    ctx->pc = 0x2cd57cu;
    // NOP
label_2cd580:
    // 0x2cd580: 0x4f4d454d  .word       0x4F4D454D                   # INVALID     $k0, $t5, 0x454D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cd580u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2CD580 raw=0x4F4D454D");
 /* MITIGATED */
label_2cd584:
    // 0x2cd584: 0x43205952  .word       0x43205952                   # INVALID     $t9, $zero, 0x5952 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2cd584u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x2CD584 raw=0x43205952");
 /* MITIGATED */
label_2cd588:
    // 0x2cd588: 0x20445241  addi        $a0, $v0, 0x5241
    ctx->pc = 0x2cd588u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)21057, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_2cd58c:
    // 0x2cd58c: 0x746f6c73  .word       0x746F6C73                   # INVALID     $v1, $t7, 0x6C73 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cd58cu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CD58C raw=0x746F6C73");
 /* MITIGATED */
label_2cd590:
    // 0x2cd590: 0x3120  .word       0x00003120                   # add         $a2, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cd590u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_2cd594:
    // 0x2cd594: 0x0  nop
    ctx->pc = 0x2cd594u;
    // NOP
label_2cd598:
    // 0x2cd598: 0x0  nop
    ctx->pc = 0x2cd598u;
    // NOP
label_2cd59c:
    // 0x2cd59c: 0x0  nop
    ctx->pc = 0x2cd59cu;
    // NOP
label_2cd5a0:
    // 0x2cd5a0: 0x4f4d454d  .word       0x4F4D454D                   # INVALID     $k0, $t5, 0x454D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cd5a0u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2CD5A0 raw=0x4F4D454D");
 /* MITIGATED */
label_2cd5a4:
    // 0x2cd5a4: 0x43205952  .word       0x43205952                   # INVALID     $t9, $zero, 0x5952 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2cd5a4u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x2CD5A4 raw=0x43205952");
 /* MITIGATED */
label_2cd5a8:
    // 0x2cd5a8: 0x20445241  addi        $a0, $v0, 0x5241
    ctx->pc = 0x2cd5a8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)21057, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_2cd5ac:
    // 0x2cd5ac: 0x746f6c73  .word       0x746F6C73                   # INVALID     $v1, $t7, 0x6C73 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cd5acu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CD5AC raw=0x746F6C73");
 /* MITIGATED */
label_2cd5b0:
    // 0x2cd5b0: 0x3220  .word       0x00003220                   # add         $a2, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cd5b0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_2cd5b4:
    // 0x2cd5b4: 0x0  nop
    ctx->pc = 0x2cd5b4u;
    // NOP
label_2cd5b8:
    // 0x2cd5b8: 0x0  nop
    ctx->pc = 0x2cd5b8u;
    // NOP
label_2cd5bc:
    // 0x2cd5bc: 0x0  nop
    ctx->pc = 0x2cd5bcu;
    // NOP
label_2cd5c0:
    // 0x2cd5c0: 0x20776f4e  addi        $s7, $v1, 0x6F4E
    ctx->pc = 0x2cd5c0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28494, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 23, (int32_t)tmp); }
label_2cd5c4:
    // 0x2cd5c4: 0x63656863  daddi       $a1, $k1, 0x6863
    ctx->pc = 0x2cd5c4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)26723; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_2cd5c8:
    // 0x2cd5c8: 0x676e696b  daddiu      $t6, $k1, 0x696B
    ctx->pc = 0x2cd5c8u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)26987);
label_2cd5cc:
    // 0x2cd5cc: 0x65687420  daddiu      $t0, $t3, 0x7420
    ctx->pc = 0x2cd5ccu;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29728);
label_2cd5d0:
    // 0x2cd5d0: 0x6d656d20  ldr         $a1, 0x6D20($t3)
    ctx->pc = 0x2cd5d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 27936); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2cd5d4:
    // 0x2cd5d4: 0x2079726f  addi        $t9, $v1, 0x726F
    ctx->pc = 0x2cd5d4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 25, (int32_t)tmp); }
label_2cd5d8:
    // 0x2cd5d8: 0x64726163  daddiu      $s2, $v1, 0x6163
    ctx->pc = 0x2cd5d8u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)24931);
label_2cd5dc:
    // 0x2cd5dc: 0x4d382820  .word       0x4D382820                   # INVALID     $t1, $t8, 0x2820 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cd5dcu;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2CD5DC raw=0x4D382820");
 /* MITIGATED */
label_2cd5e0:
    // 0x2cd5e0: 0x66282942  daddiu      $t0, $s1, 0x2942
    ctx->pc = 0x2cd5e0u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)10562);
label_2cd5e4:
    // 0x2cd5e4: 0x5020726f  beql        $at, $zero, . + 4 + (0x726F << 2)
label_2cd5e8:
    if (ctx->pc == 0x2CD5E8u) {
        ctx->pc = 0x2CD5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD5E4u;
        // 0x2cd5e8: 0x5379616c  beql        $k1, $t9, . + 4 + (0x616C << 2) (Delay Slot)
        // Likely branch instruction at 0x2CD5E8 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD5ECu;
        goto label_2cd5ec;
    }
    ctx->pc = 0x2CD5E4u;
    {
        const bool branch_taken_0x2cd5e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd5e4) {
            ctx->pc = 0x2CD5E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD5E4u;
            // 0x2cd5e8: 0x5379616c  beql        $k1, $t9, . + 4 + (0x616C << 2) (Delay Slot)
            // Likely branch instruction at 0x2CD5E8 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E9FA4u;
            return;
        }
    }
    ctx->pc = 0x2CD5ECu;
label_2cd5ec:
    // 0x2cd5ec: 0x69746174  ldl         $s4, 0x6174($t3)
    ctx->pc = 0x2cd5ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24948); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_2cd5f0:
    // 0x2cd5f0: 0x325c6e6f  andi        $gp, $s2, 0x6E6F
    ctx->pc = 0x2cd5f0u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)28271);
label_2cd5f4:
    // 0x2cd5f4: 0x6e692029  ldr         $t1, 0x2029($s3)
    ctx->pc = 0x2cd5f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8233); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2cd5f8:
    // 0x2cd5f8: 0x2e732520  sltiu       $s3, $s3, 0x2520
    ctx->pc = 0x2cd5f8u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)9504) ? 1 : 0);
label_2cd5fc:
    // 0x2cd5fc: 0x0  nop
    ctx->pc = 0x2cd5fcu;
    // NOP
label_2cd600:
    // 0x2cd600: 0x20656854  addi        $a1, $v1, 0x6854
    ctx->pc = 0x2cd600u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26708, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2cd604:
    // 0x2cd604: 0x6f6d656d  ldr         $t5, 0x656D($k1)
    ctx->pc = 0x2cd604u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 25965); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
label_2cd608:
    // 0x2cd608: 0x63207972  daddi       $zero, $t9, 0x7972
    ctx->pc = 0x2cd608u;
    { int64_t src = (int64_t)GPR_S64(ctx, 25); int64_t imm = (int64_t)(int32_t)31090; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_2cd60c:
    // 0x2cd60c: 0x20647261  addi        $a0, $v1, 0x7261
    ctx->pc = 0x2cd60cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29281, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_2cd610:
    // 0x2cd610: 0x424d3828  .word       0x424D3828                   # INVALID     $s2, $t5, 0x3828 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2cd610u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x2CD610 raw=0x424D3828");
 /* MITIGATED */
label_2cd614:
    // 0x2cd614: 0x6f662829  ldr         $a2, 0x2829($k1)
    ctx->pc = 0x2cd614u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 10281); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_2cd618:
    // 0x2cd618: 0x6c502072  ldr         $s0, 0x2072($v0)
    ctx->pc = 0x2cd618u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8306); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
label_2cd61c:
    // 0x2cd61c: 0x74537961  .word       0x74537961                   # INVALID     $v0, $s3, 0x7961 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cd61cu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CD61C raw=0x74537961");
 /* MITIGATED */
label_2cd620:
    // 0x2cd620: 0x6f697461  ldr         $t1, 0x7461($k1)
    ctx->pc = 0x2cd620u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29793); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2cd624:
    // 0x2cd624: 0x29325c6e  slti        $s2, $t1, 0x5C6E
    ctx->pc = 0x2cd624u;
    SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)23662) ? 1 : 0);
label_2cd628:
    // 0x2cd628: 0x206e6920  addi        $t6, $v1, 0x6920
    ctx->pc = 0x2cd628u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26912, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_2cd62c:
    // 0x2cd62c: 0x77207325  .word       0x77207325                   # INVALID     $t9, $zero, 0x7325 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cd62cu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CD62C raw=0x77207325");
 /* MITIGATED */
label_2cd630:
    // 0x2cd630: 0x72207361  .word       0x72207361                   # maddu1      $t6, $s1, $zero # 00000340 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cd630u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); uint64_t prod = (uint64_t)GPR_U32(ctx, 17) * (uint64_t)GPR_U32(ctx, 0); uint64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_2cd634:
    // 0x2cd634: 0x766f6d65  .word       0x766F6D65                   # INVALID     $s3, $t7, 0x6D65 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cd634u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CD634 raw=0x766F6D65");
 /* MITIGATED */
label_2cd638:
    // 0x2cd638: 0x2e6465  .word       0x002E6465                   # or          $t4, $at, $t6 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cd638u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 1) | GPR_U64(ctx, 14));
label_2cd63c:
    // 0x2cd63c: 0x0  nop
    ctx->pc = 0x2cd63cu;
    // NOP
label_2cd640:
    // 0x2cd640: 0x72656854  .word       0x72656854                   # INVALID     $s3, $a1, 0x6854 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cd640u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x14 at 0x2CD640 raw=0x72656854");
 /* MITIGATED */
label_2cd644:
    // 0x2cd644: 0x73692065  .word       0x73692065                   # INVALID     $k1, $t1, 0x2065 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cd644u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x2CD644 raw=0x73692065");
 /* MITIGATED */
label_2cd648:
    // 0x2cd648: 0x736e6920  .word       0x736E6920                   # madd1       $t5, $k1, $t6 # 00000100 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cd648u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 27) * (int64_t)GPR_S32(ctx, 14); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_2cd64c:
    // 0x2cd64c: 0x69666675  ldl         $a2, 0x6675($t3)
    ctx->pc = 0x2cd64cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26229); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_2cd650:
    // 0x2cd650: 0x6e656963  ldr         $a1, 0x6963($s3)
    ctx->pc = 0x2cd650u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26979); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2cd654:
    // 0x2cd654: 0x72662074  .word       0x72662074                   # psllh       $a0, $a2, 1 # 02600000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cd654u;
    SET_GPR_VEC(ctx, 4, _mm_slli_epi16(GPR_VEC(ctx, 6), 1));
label_2cd658:
    // 0x2cd658: 0x73206565  .word       0x73206565                   # INVALID     $t9, $zero, 0x6565 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cd658u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x2CD658 raw=0x73206565");
 /* MITIGATED */
label_2cd65c:
    // 0x2cd65c: 0x65636170  daddiu      $v1, $t3, 0x6170
    ctx->pc = 0x2cd65cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24944);
label_2cd660:
    // 0x2cd660: 0x206e6f20  addi        $t6, $v1, 0x6F20
    ctx->pc = 0x2cd660u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28448, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_2cd664:
    // 0x2cd664: 0x20656874  addi        $a1, $v1, 0x6874
    ctx->pc = 0x2cd664u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26740, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2cd668:
    // 0x2cd668: 0x6f6d656d  ldr         $t5, 0x656D($k1)
    ctx->pc = 0x2cd668u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 25965); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
label_2cd66c:
    // 0x2cd66c: 0x63207972  daddi       $zero, $t9, 0x7972
    ctx->pc = 0x2cd66cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 25); int64_t imm = (int64_t)(int32_t)31090; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_2cd670:
    // 0x2cd670: 0x20647261  addi        $a0, $v1, 0x7261
    ctx->pc = 0x2cd670u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29281, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_2cd674:
    // 0x2cd674: 0x424d3828  .word       0x424D3828                   # INVALID     $s2, $t5, 0x3828 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2cd674u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x2CD674 raw=0x424D3828");
 /* MITIGATED */
label_2cd678:
    // 0x2cd678: 0x6f662829  ldr         $a2, 0x2829($k1)
    ctx->pc = 0x2cd678u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 10281); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_2cd67c:
    // 0x2cd67c: 0x6c502072  ldr         $s0, 0x2072($v0)
    ctx->pc = 0x2cd67cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8306); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
label_2cd680:
    // 0x2cd680: 0x74537961  .word       0x74537961                   # INVALID     $v0, $s3, 0x7961 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cd680u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CD680 raw=0x74537961");
 /* MITIGATED */
label_2cd684:
    // 0x2cd684: 0x6f697461  ldr         $t1, 0x7461($k1)
    ctx->pc = 0x2cd684u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29793); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2cd688:
    // 0x2cd688: 0x29325c6e  slti        $s2, $t1, 0x5C6E
    ctx->pc = 0x2cd688u;
    SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)23662) ? 1 : 0);
label_2cd68c:
    // 0x2cd68c: 0x206e6920  addi        $t6, $v1, 0x6920
    ctx->pc = 0x2cd68cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26912, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_2cd690:
    // 0x2cd690: 0x2e7325  .word       0x002E7325                   # or          $t6, $at, $t6 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cd690u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 1) | GPR_U64(ctx, 14));
label_2cd694:
    // 0x2cd694: 0x0  nop
    ctx->pc = 0x2cd694u;
    // NOP
label_2cd698:
    // 0x2cd698: 0x0  nop
    ctx->pc = 0x2cd698u;
    // NOP
label_2cd69c:
    // 0x2cd69c: 0x0  nop
    ctx->pc = 0x2cd69cu;
    // NOP
label_2cd6a0:
    // 0x2cd6a0: 0x6d726f46  ldr         $s2, 0x6F46($t3)
    ctx->pc = 0x2cd6a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28486); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
label_2cd6a4:
    // 0x2cd6a4: 0x66207461  daddiu      $zero, $s1, 0x7461
    ctx->pc = 0x2cd6a4u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)29793);
label_2cd6a8:
    // 0x2cd6a8: 0x656c6961  daddiu      $t4, $t3, 0x6961
    ctx->pc = 0x2cd6a8u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26977);
label_2cd6ac:
    // 0x2cd6ac: 0x6e6f2064  ldr         $t7, 0x2064($s3)
    ctx->pc = 0x2cd6acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8292); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_2cd6b0:
    // 0x2cd6b0: 0x65687420  daddiu      $t0, $t3, 0x7420
    ctx->pc = 0x2cd6b0u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29728);
label_2cd6b4:
    // 0x2cd6b4: 0x6d656d20  ldr         $a1, 0x6D20($t3)
    ctx->pc = 0x2cd6b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 27936); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2cd6b8:
    // 0x2cd6b8: 0x2079726f  addi        $t9, $v1, 0x726F
    ctx->pc = 0x2cd6b8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 25, (int32_t)tmp); }
label_2cd6bc:
    // 0x2cd6bc: 0x64726163  daddiu      $s2, $v1, 0x6163
    ctx->pc = 0x2cd6bcu;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)24931);
label_2cd6c0:
    // 0x2cd6c0: 0x4d382820  .word       0x4D382820                   # INVALID     $t1, $t8, 0x2820 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cd6c0u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2CD6C0 raw=0x4D382820");
 /* MITIGATED */
label_2cd6c4:
    // 0x2cd6c4: 0x66282942  daddiu      $t0, $s1, 0x2942
    ctx->pc = 0x2cd6c4u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)10562);
label_2cd6c8:
    // 0x2cd6c8: 0x5020726f  beql        $at, $zero, . + 4 + (0x726F << 2)
label_2cd6cc:
    if (ctx->pc == 0x2CD6CCu) {
        ctx->pc = 0x2CD6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD6C8u;
        // 0x2cd6cc: 0x5379616c  beql        $k1, $t9, . + 4 + (0x616C << 2) (Delay Slot)
        // Likely branch instruction at 0x2CD6CC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD6D0u;
        goto label_2cd6d0;
    }
    ctx->pc = 0x2CD6C8u;
    {
        const bool branch_taken_0x2cd6c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd6c8) {
            ctx->pc = 0x2CD6CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD6C8u;
            // 0x2cd6cc: 0x5379616c  beql        $k1, $t9, . + 4 + (0x616C << 2) (Delay Slot)
            // Likely branch instruction at 0x2CD6CC - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA088u;
            return;
        }
    }
    ctx->pc = 0x2CD6D0u;
label_2cd6d0:
    // 0x2cd6d0: 0x69746174  ldl         $s4, 0x6174($t3)
    ctx->pc = 0x2cd6d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24948); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_2cd6d4:
    // 0x2cd6d4: 0x325c6e6f  andi        $gp, $s2, 0x6E6F
    ctx->pc = 0x2cd6d4u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)28271);
label_2cd6d8:
    // 0x2cd6d8: 0x6e692029  ldr         $t1, 0x2029($s3)
    ctx->pc = 0x2cd6d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8233); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2cd6dc:
    // 0x2cd6dc: 0x2e732520  sltiu       $s3, $s3, 0x2520
    ctx->pc = 0x2cd6dcu;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)9504) ? 1 : 0);
label_2cd6e0:
    // 0x2cd6e0: 0x0  nop
    ctx->pc = 0x2cd6e0u;
    // NOP
label_2cd6e4:
    // 0x2cd6e4: 0x0  nop
    ctx->pc = 0x2cd6e4u;
    // NOP
label_2cd6e8:
    // 0x2cd6e8: 0x0  nop
    ctx->pc = 0x2cd6e8u;
    // NOP
label_2cd6ec:
    // 0x2cd6ec: 0x0  nop
    ctx->pc = 0x2cd6ecu;
    // NOP
label_2cd6f0:
    // 0x2cd6f0: 0x61746144  daddi       $s4, $t3, 0x6144
    ctx->pc = 0x2cd6f0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24900; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_2cd6f4:
    // 0x2cd6f4: 0x76617320  .word       0x76617320                   # INVALID     $s3, $at, 0x7320 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cd6f4u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CD6F4 raw=0x76617320");
 /* MITIGATED */
label_2cd6f8:
    // 0x2cd6f8: 0x74206465  .word       0x74206465                   # INVALID     $at, $zero, 0x6465 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cd6f8u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CD6F8 raw=0x74206465");
 /* MITIGATED */
label_2cd6fc:
    // 0x2cd6fc: 0x6874206f  ldl         $s4, 0x206F($v1)
    ctx->pc = 0x2cd6fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8303); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_2cd700:
    // 0x2cd700: 0x656d2065  daddiu      $t5, $t3, 0x2065
    ctx->pc = 0x2cd700u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)8293);
label_2cd704:
    // 0x2cd704: 0x79726f6d  lq          $s2, 0x6F6D($t3)
    ctx->pc = 0x2cd704u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 11), 28525)));
label_2cd708:
    // 0x2cd708: 0x72616320  .word       0x72616320                   # madd1       $t4, $s3, $at # 00000300 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cd708u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 1); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_2cd70c:
    // 0x2cd70c: 0x38282064  xori        $t0, $at, 0x2064
    ctx->pc = 0x2cd70cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 1) ^ (uint64_t)(uint16_t)8292);
label_2cd710:
    // 0x2cd710: 0x2829424d  slti        $t1, $at, 0x424D
    ctx->pc = 0x2cd710u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)16973) ? 1 : 0);
label_2cd714:
    // 0x2cd714: 0x20726f66  addi        $s2, $v1, 0x6F66
    ctx->pc = 0x2cd714u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28518, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 18, (int32_t)tmp); }
label_2cd718:
    // 0x2cd718: 0x79616c50  lq          $at, 0x6C50($t3)
    ctx->pc = 0x2cd718u;
    SET_GPR_VEC(ctx, 1, READ128(ADD32(GPR_U32(ctx, 11), 27728)));
label_2cd71c:
    // 0x2cd71c: 0x74617453  .word       0x74617453                   # INVALID     $v1, $at, 0x7453 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cd71cu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CD71C raw=0x74617453");
 /* MITIGATED */
label_2cd720:
    // 0x2cd720: 0x5c6e6f69  .word       0x5C6E6F69                   # bgtzl       $v1, . + 4 + (0x6F69 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
label_2cd724:
    if (ctx->pc == 0x2CD724u) {
        ctx->pc = 0x2CD724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD720u;
        // 0x2cd724: 0x69202932  ldl         $zero, 0x2932($t1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 9), 10546); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem << shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD728u;
        goto label_2cd728;
    }
    ctx->pc = 0x2CD720u;
    {
        const bool branch_taken_0x2cd720 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x2cd720) {
            ctx->pc = 0x2CD724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD720u;
            // 0x2cd724: 0x69202932  ldl         $zero, 0x2932($t1) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 9), 10546); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem << shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E94C8u;
            return;
        }
    }
    ctx->pc = 0x2CD728u;
label_2cd728:
    // 0x2cd728: 0x7325206e  .word       0x7325206E                   # INVALID     $t9, $a1, 0x206E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cd728u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x2CD728 raw=0x7325206E");
 /* MITIGATED */
label_2cd72c:
    // 0x2cd72c: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2cd72cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2cd730:
    // 0x2cd730: 0x61746144  daddi       $s4, $t3, 0x6144
    ctx->pc = 0x2cd730u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24900; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_2cd734:
    // 0x2cd734: 0x616f6c20  daddi       $t7, $t3, 0x6C20
    ctx->pc = 0x2cd734u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)27680; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 15, res); }
label_2cd738:
    // 0x2cd738: 0x20646564  addi        $a0, $v1, 0x6564
    ctx->pc = 0x2cd738u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25956, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_2cd73c:
    // 0x2cd73c: 0x6d6f7266  ldr         $t7, 0x7266($t3)
    ctx->pc = 0x2cd73cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29286); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_2cd740:
    // 0x2cd740: 0x6d656d20  ldr         $a1, 0x6D20($t3)
    ctx->pc = 0x2cd740u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 27936); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2cd744:
    // 0x2cd744: 0x2079726f  addi        $t9, $v1, 0x726F
    ctx->pc = 0x2cd744u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 25, (int32_t)tmp); }
label_2cd748:
    // 0x2cd748: 0x64726163  daddiu      $s2, $v1, 0x6163
    ctx->pc = 0x2cd748u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)24931);
label_2cd74c:
    // 0x2cd74c: 0x4d382820  .word       0x4D382820                   # INVALID     $t1, $t8, 0x2820 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cd74cu;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2CD74C raw=0x4D382820");
 /* MITIGATED */
label_2cd750:
    // 0x2cd750: 0x66282942  daddiu      $t0, $s1, 0x2942
    ctx->pc = 0x2cd750u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)10562);
label_2cd754:
    // 0x2cd754: 0x5020726f  beql        $at, $zero, . + 4 + (0x726F << 2)
label_2cd758:
    if (ctx->pc == 0x2CD758u) {
        ctx->pc = 0x2CD758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD754u;
        // 0x2cd758: 0x5379616c  beql        $k1, $t9, . + 4 + (0x616C << 2) (Delay Slot)
        // Likely branch instruction at 0x2CD758 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CD75Cu;
        goto label_2cd75c;
    }
    ctx->pc = 0x2CD754u;
    {
        const bool branch_taken_0x2cd754 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd754) {
            ctx->pc = 0x2CD758u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD754u;
            // 0x2cd758: 0x5379616c  beql        $k1, $t9, . + 4 + (0x616C << 2) (Delay Slot)
            // Likely branch instruction at 0x2CD758 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA114u;
            return;
        }
    }
    ctx->pc = 0x2CD75Cu;
label_2cd75c:
    // 0x2cd75c: 0x69746174  ldl         $s4, 0x6174($t3)
    ctx->pc = 0x2cd75cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24948); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_2cd760:
    // 0x2cd760: 0x325c6e6f  andi        $gp, $s2, 0x6E6F
    ctx->pc = 0x2cd760u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)28271);
label_2cd764:
    // 0x2cd764: 0x6e692029  ldr         $t1, 0x2029($s3)
    ctx->pc = 0x2cd764u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8233); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2cd768:
    // 0x2cd768: 0x2e732520  sltiu       $s3, $s3, 0x2520
    ctx->pc = 0x2cd768u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)9504) ? 1 : 0);
label_2cd76c:
    // 0x2cd76c: 0x0  nop
    ctx->pc = 0x2cd76cu;
    // NOP
label_2cd770:
    // 0x2cd770: 0x20656854  addi        $a1, $v1, 0x6854
    ctx->pc = 0x2cd770u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26708, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2cd774:
    // 0x2cd774: 0x65727458  daddiu      $s2, $t3, 0x7458
    ctx->pc = 0x2cd774u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29784);
label_2cd778:
    // 0x2cd778: 0x4c20656d  .word       0x4C20656D                   # INVALID     $at, $zero, 0x656D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cd778u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2CD778 raw=0x4C20656D");
 /* MITIGATED */
label_2cd77c:
    // 0x2cd77c: 0x6e656765  ldr         $a1, 0x6765($s3)
    ctx->pc = 0x2cd77cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26469); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2cd780:
    // 0x2cd780: 0x64207364  daddiu      $zero, $at, 0x7364
    ctx->pc = 0x2cd780u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)29540);
label_2cd784:
    // 0x2cd784: 0x20617461  addi        $at, $v1, 0x7461
    ctx->pc = 0x2cd784u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29793, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 1, (int32_t)tmp); }
label_2cd788:
    // 0x2cd788: 0x74206e6f  .word       0x74206E6F                   # INVALID     $at, $zero, 0x6E6F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cd788u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CD788 raw=0x74206E6F");
 /* MITIGATED */
label_2cd78c:
    // 0x2cd78c: 0x6d206568  ldr         $zero, 0x6568($t1)
    ctx->pc = 0x2cd78cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 25960); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_2cd790:
    // 0x2cd790: 0x726f6d65  .word       0x726F6D65                   # INVALID     $s3, $t7, 0x6D65 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cd790u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x2CD790 raw=0x726F6D65");
 /* MITIGATED */
label_2cd794:
    // 0x2cd794: 0x61632079  daddi       $v1, $t3, 0x2079
    ctx->pc = 0x2cd794u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)8313; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, res); }
label_2cd798:
    // 0x2cd798: 0x28206472  slti        $zero, $at, 0x6472
    ctx->pc = 0x2cd798u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)25714) ? 1 : 0);
label_2cd79c:
    // 0x2cd79c: 0x29424d38  slti        $v0, $t2, 0x4D38
    ctx->pc = 0x2cd79cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)19768) ? 1 : 0);
label_2cd7a0:
    // 0x2cd7a0: 0x726f6628  paddub      $t4, $s3, $t7
    ctx->pc = 0x2cd7a0u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 15)));
label_2cd7a4:
    // 0x2cd7a4: 0x616c5020  daddi       $t4, $t3, 0x5020
    ctx->pc = 0x2cd7a4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)20512; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, res); }
label_2cd7a8:
    // 0x2cd7a8: 0x61745379  daddi       $s4, $t3, 0x5379
    ctx->pc = 0x2cd7a8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)21369; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_2cd7ac:
    // 0x2cd7ac: 0x6e6f6974  ldr         $t7, 0x6974($s3)
    ctx->pc = 0x2cd7acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26996); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_2cd7b0:
    // 0x2cd7b0: 0x2029325c  addi        $t1, $at, 0x325C
    ctx->pc = 0x2cd7b0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)12892, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
label_2cd7b4:
    // 0x2cd7b4: 0x25206e69  addiu       $zero, $t1, 0x6E69
    ctx->pc = 0x2cd7b4u;
    // NOP (addiu $zero, ...)
label_2cd7b8:
    // 0x2cd7b8: 0x73692073  .word       0x73692073                   # INVALID     $k1, $t1, 0x2073 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cd7b8u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x2CD7B8 raw=0x73692073");
 /* MITIGATED */
label_2cd7bc:
    // 0x2cd7bc: 0x726f6320  .word       0x726F6320                   # madd1       $t4, $s3, $t7 # 00000300 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cd7bcu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 15); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_2cd7c0:
    // 0x2cd7c0: 0x74707572  .word       0x74707572                   # INVALID     $v1, $s0, 0x7572 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cd7c0u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CD7C0 raw=0x74707572");
 /* MITIGATED */
label_2cd7c4:
    // 0x2cd7c4: 0x202e6465  addi        $t6, $at, 0x6465
    ctx->pc = 0x2cd7c4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)25701, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_2cd7c8:
    // 0x2cd7c8: 0x64616f4c  daddiu      $at, $v1, 0x6F4C
    ctx->pc = 0x2cd7c8u;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)28492);
label_2cd7cc:
    // 0x2cd7cc: 0x69616620  ldl         $at, 0x6620($t3)
    ctx->pc = 0x2cd7ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem << shift)); }
label_2cd7d0:
    // 0x2cd7d0: 0x2e64656c  sltiu       $a0, $s3, 0x656C
    ctx->pc = 0x2cd7d0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)25964) ? 1 : 0);
label_2cd7d4:
    // 0x2cd7d4: 0x0  nop
    ctx->pc = 0x2cd7d4u;
    // NOP
label_2cd7d8:
    // 0x2cd7d8: 0x0  nop
    ctx->pc = 0x2cd7d8u;
    // NOP
label_2cd7dc:
    // 0x2cd7dc: 0x0  nop
    ctx->pc = 0x2cd7dcu;
    // NOP
label_2cd7e0:
    // 0x2cd7e0: 0x20656854  addi        $a1, $v1, 0x6854
    ctx->pc = 0x2cd7e0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26708, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2cd7e4:
    // 0x2cd7e4: 0x65727458  daddiu      $s2, $t3, 0x7458
    ctx->pc = 0x2cd7e4u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29784);
label_2cd7e8:
    // 0x2cd7e8: 0x4c20656d  .word       0x4C20656D                   # INVALID     $at, $zero, 0x656D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cd7e8u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2CD7E8 raw=0x4C20656D");
 /* MITIGATED */
label_2cd7ec:
    // 0x2cd7ec: 0x6e656765  ldr         $a1, 0x6765($s3)
    ctx->pc = 0x2cd7ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26469); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2cd7f0:
    // 0x2cd7f0: 0x64207364  daddiu      $zero, $at, 0x7364
    ctx->pc = 0x2cd7f0u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)29540);
label_2cd7f4:
    // 0x2cd7f4: 0x20617461  addi        $at, $v1, 0x7461
    ctx->pc = 0x2cd7f4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29793, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 1, (int32_t)tmp); }
label_2cd7f8:
    // 0x2cd7f8: 0x74206e6f  .word       0x74206E6F                   # INVALID     $at, $zero, 0x6E6F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cd7f8u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CD7F8 raw=0x74206E6F");
 /* MITIGATED */
label_2cd7fc:
    // 0x2cd7fc: 0x6d206568  ldr         $zero, 0x6568($t1)
    ctx->pc = 0x2cd7fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 25960); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_2cd800:
    // 0x2cd800: 0x726f6d65  .word       0x726F6D65                   # INVALID     $s3, $t7, 0x6D65 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cd800u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x2CD800 raw=0x726F6D65");
 /* MITIGATED */
label_2cd804:
    // 0x2cd804: 0x61632079  daddi       $v1, $t3, 0x2079
    ctx->pc = 0x2cd804u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)8313; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, res); }
label_2cd808:
    // 0x2cd808: 0x28206472  slti        $zero, $at, 0x6472
    ctx->pc = 0x2cd808u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)25714) ? 1 : 0);
label_2cd80c:
    // 0x2cd80c: 0x29424d38  slti        $v0, $t2, 0x4D38
    ctx->pc = 0x2cd80cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)19768) ? 1 : 0);
label_2cd810:
    // 0x2cd810: 0x726f6628  paddub      $t4, $s3, $t7
    ctx->pc = 0x2cd810u;
    SET_GPR_VEC(ctx, 12, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 15)));
label_2cd814:
    // 0x2cd814: 0x616c5020  daddi       $t4, $t3, 0x5020
    ctx->pc = 0x2cd814u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)20512; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, res); }
label_2cd818:
    // 0x2cd818: 0x61745379  daddi       $s4, $t3, 0x5379
    ctx->pc = 0x2cd818u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)21369; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_2cd81c:
    // 0x2cd81c: 0x6e6f6974  ldr         $t7, 0x6974($s3)
    ctx->pc = 0x2cd81cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26996); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_2cd820:
    // 0x2cd820: 0x2029325c  addi        $t1, $at, 0x325C
    ctx->pc = 0x2cd820u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)12892, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
label_2cd824:
    // 0x2cd824: 0x25206e69  addiu       $zero, $t1, 0x6E69
    ctx->pc = 0x2cd824u;
    // NOP (addiu $zero, ...)
label_2cd828:
    // 0x2cd828: 0x73692073  .word       0x73692073                   # INVALID     $k1, $t1, 0x2073 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cd828u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x2CD828 raw=0x73692073");
 /* MITIGATED */
label_2cd82c:
    // 0x2cd82c: 0x726f6320  .word       0x726F6320                   # madd1       $t4, $s3, $t7 # 00000300 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cd82cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 15); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_2cd830:
    // 0x2cd830: 0x74707572  .word       0x74707572                   # INVALID     $v1, $s0, 0x7572 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cd830u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CD830 raw=0x74707572");
 /* MITIGATED */
label_2cd834:
    // 0x2cd834: 0x202e6465  addi        $t6, $at, 0x6465
    ctx->pc = 0x2cd834u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)25701, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_2cd838:
    // 0x2cd838: 0x65766153  daddiu      $s6, $t3, 0x6153
    ctx->pc = 0x2cd838u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24915);
label_2cd83c:
    // 0x2cd83c: 0x69616620  ldl         $at, 0x6620($t3)
    ctx->pc = 0x2cd83cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem << shift)); }
label_2cd840:
    // 0x2cd840: 0x2e64656c  sltiu       $a0, $s3, 0x656C
    ctx->pc = 0x2cd840u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)25964) ? 1 : 0);
label_2cd844:
    // 0x2cd844: 0x0  nop
    ctx->pc = 0x2cd844u;
    // NOP
label_2cd848:
    // 0x2cd848: 0x0  nop
    ctx->pc = 0x2cd848u;
    // NOP
label_2cd84c:
    // 0x2cd84c: 0x0  nop
    ctx->pc = 0x2cd84cu;
    // NOP
label_2cd850:
    // 0x2cd850: 0x20656854  addi        $a1, $v1, 0x6854
    ctx->pc = 0x2cd850u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26708, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2cd854:
    // 0x2cd854: 0x6f6d656d  ldr         $t5, 0x656D($k1)
    ctx->pc = 0x2cd854u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 25965); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
label_2cd858:
    // 0x2cd858: 0x63207972  daddi       $zero, $t9, 0x7972
    ctx->pc = 0x2cd858u;
    { int64_t src = (int64_t)GPR_S64(ctx, 25); int64_t imm = (int64_t)(int32_t)31090; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_2cd85c:
    // 0x2cd85c: 0x20647261  addi        $a0, $v1, 0x7261
    ctx->pc = 0x2cd85cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29281, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_2cd860:
    // 0x2cd860: 0x424d3828  .word       0x424D3828                   # INVALID     $s2, $t5, 0x3828 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2cd860u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x12 at 0x2CD860 raw=0x424D3828");
 /* MITIGATED */
label_2cd864:
    // 0x2cd864: 0x6f662829  ldr         $a2, 0x2829($k1)
    ctx->pc = 0x2cd864u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 10281); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_2cd868:
    // 0x2cd868: 0x6c502072  ldr         $s0, 0x2072($v0)
    ctx->pc = 0x2cd868u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8306); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
label_2cd86c:
    // 0x2cd86c: 0x74537961  .word       0x74537961                   # INVALID     $v0, $s3, 0x7961 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cd86cu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CD86C raw=0x74537961");
 /* MITIGATED */
label_2cd870:
    // 0x2cd870: 0x6f697461  ldr         $t1, 0x7461($k1)
    ctx->pc = 0x2cd870u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29793); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2cd874:
    // 0x2cd874: 0x29325c6e  slti        $s2, $t1, 0x5C6E
    ctx->pc = 0x2cd874u;
    SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)23662) ? 1 : 0);
label_2cd878:
    // 0x2cd878: 0x206e6920  addi        $t6, $v1, 0x6920
    ctx->pc = 0x2cd878u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26912, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_2cd87c:
    // 0x2cd87c: 0x69207325  ldl         $zero, 0x7325($t1)
    ctx->pc = 0x2cd87cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 29477); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem << shift)); }
label_2cd880:
    // 0x2cd880: 0x6f632073  ldr         $v1, 0x2073($k1)
    ctx->pc = 0x2cd880u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8307); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_2cd884:
    // 0x2cd884: 0x70757272  .word       0x70757272                   # INVALID     $v1, $s5, 0x7272 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cd884u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x32 at 0x2CD884 raw=0x70757272");
 /* MITIGATED */
label_2cd888:
    // 0x2cd888: 0x2e646574  sltiu       $a0, $s3, 0x6574
    ctx->pc = 0x2cd888u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)25972) ? 1 : 0);
label_2cd88c:
    // 0x2cd88c: 0x616e5520  daddi       $t6, $t3, 0x5520
    ctx->pc = 0x2cd88cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)21792; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
label_2cd890:
    // 0x2cd890: 0x20656c62  addi        $a1, $v1, 0x6C62
    ctx->pc = 0x2cd890u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)27746, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2cd894:
    // 0x2cd894: 0x63206f74  daddi       $zero, $t9, 0x6F74
    ctx->pc = 0x2cd894u;
    { int64_t src = (int64_t)GPR_S64(ctx, 25); int64_t imm = (int64_t)(int32_t)28532; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_2cd898:
    // 0x2cd898: 0x69626d6f  ldl         $v0, 0x6D6F($t3)
    ctx->pc = 0x2cd898u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28015); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_2cd89c:
    // 0x2cd89c: 0x7720656e  .word       0x7720656E                   # INVALID     $t9, $zero, 0x656E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cd89cu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CD89C raw=0x7720656E");
 /* MITIGATED */
    ctx->pc = 0x2cd8a0u;
    return;
}

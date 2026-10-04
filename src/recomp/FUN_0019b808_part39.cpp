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

// Function: FUN_0019b808
// Address: 0x19b808 - 0x29b810
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b808_part39(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1ae0e8u: goto label_1ae0e8;
        case 0x1ae0ecu: goto label_1ae0ec;
        case 0x1ae0f0u: goto label_1ae0f0;
        case 0x1ae0f4u: goto label_1ae0f4;
        case 0x1ae0f8u: goto label_1ae0f8;
        case 0x1ae0fcu: goto label_1ae0fc;
        case 0x1ae100u: goto label_1ae100;
        case 0x1ae104u: goto label_1ae104;
        case 0x1ae108u: goto label_1ae108;
        case 0x1ae10cu: goto label_1ae10c;
        case 0x1ae110u: goto label_1ae110;
        case 0x1ae114u: goto label_1ae114;
        case 0x1ae118u: goto label_1ae118;
        case 0x1ae11cu: goto label_1ae11c;
        case 0x1ae120u: goto label_1ae120;
        case 0x1ae124u: goto label_1ae124;
        case 0x1ae128u: goto label_1ae128;
        case 0x1ae12cu: goto label_1ae12c;
        case 0x1ae130u: goto label_1ae130;
        case 0x1ae134u: goto label_1ae134;
        case 0x1ae138u: goto label_1ae138;
        case 0x1ae13cu: goto label_1ae13c;
        case 0x1ae140u: goto label_1ae140;
        case 0x1ae144u: goto label_1ae144;
        case 0x1ae148u: goto label_1ae148;
        case 0x1ae14cu: goto label_1ae14c;
        case 0x1ae150u: goto label_1ae150;
        case 0x1ae154u: goto label_1ae154;
        case 0x1ae158u: goto label_1ae158;
        case 0x1ae15cu: goto label_1ae15c;
        case 0x1ae160u: goto label_1ae160;
        case 0x1ae164u: goto label_1ae164;
        case 0x1ae168u: goto label_1ae168;
        case 0x1ae16cu: goto label_1ae16c;
        case 0x1ae170u: goto label_1ae170;
        case 0x1ae174u: goto label_1ae174;
        case 0x1ae178u: goto label_1ae178;
        case 0x1ae17cu: goto label_1ae17c;
        case 0x1ae180u: goto label_1ae180;
        case 0x1ae184u: goto label_1ae184;
        case 0x1ae188u: goto label_1ae188;
        case 0x1ae18cu: goto label_1ae18c;
        case 0x1ae190u: goto label_1ae190;
        case 0x1ae194u: goto label_1ae194;
        case 0x1ae198u: goto label_1ae198;
        case 0x1ae19cu: goto label_1ae19c;
        case 0x1ae1a0u: goto label_1ae1a0;
        case 0x1ae1a4u: goto label_1ae1a4;
        case 0x1ae1a8u: goto label_1ae1a8;
        case 0x1ae1acu: goto label_1ae1ac;
        case 0x1ae1b0u: goto label_1ae1b0;
        case 0x1ae1b4u: goto label_1ae1b4;
        case 0x1ae1b8u: goto label_1ae1b8;
        case 0x1ae1bcu: goto label_1ae1bc;
        case 0x1ae1c0u: goto label_1ae1c0;
        case 0x1ae1c4u: goto label_1ae1c4;
        case 0x1ae1c8u: goto label_1ae1c8;
        case 0x1ae1ccu: goto label_1ae1cc;
        case 0x1ae1d0u: goto label_1ae1d0;
        case 0x1ae1d4u: goto label_1ae1d4;
        case 0x1ae1d8u: goto label_1ae1d8;
        case 0x1ae1dcu: goto label_1ae1dc;
        case 0x1ae1e0u: goto label_1ae1e0;
        case 0x1ae1e4u: goto label_1ae1e4;
        case 0x1ae1e8u: goto label_1ae1e8;
        case 0x1ae1ecu: goto label_1ae1ec;
        case 0x1ae1f0u: goto label_1ae1f0;
        case 0x1ae1f4u: goto label_1ae1f4;
        case 0x1ae1f8u: goto label_1ae1f8;
        case 0x1ae1fcu: goto label_1ae1fc;
        case 0x1ae200u: goto label_1ae200;
        case 0x1ae204u: goto label_1ae204;
        case 0x1ae208u: goto label_1ae208;
        case 0x1ae20cu: goto label_1ae20c;
        case 0x1ae210u: goto label_1ae210;
        case 0x1ae214u: goto label_1ae214;
        case 0x1ae218u: goto label_1ae218;
        case 0x1ae21cu: goto label_1ae21c;
        case 0x1ae220u: goto label_1ae220;
        case 0x1ae224u: goto label_1ae224;
        case 0x1ae228u: goto label_1ae228;
        case 0x1ae22cu: goto label_1ae22c;
        case 0x1ae230u: goto label_1ae230;
        case 0x1ae234u: goto label_1ae234;
        case 0x1ae238u: goto label_1ae238;
        case 0x1ae23cu: goto label_1ae23c;
        case 0x1ae240u: goto label_1ae240;
        case 0x1ae244u: goto label_1ae244;
        case 0x1ae248u: goto label_1ae248;
        case 0x1ae24cu: goto label_1ae24c;
        case 0x1ae250u: goto label_1ae250;
        case 0x1ae254u: goto label_1ae254;
        case 0x1ae258u: goto label_1ae258;
        case 0x1ae25cu: goto label_1ae25c;
        case 0x1ae260u: goto label_1ae260;
        case 0x1ae264u: goto label_1ae264;
        case 0x1ae268u: goto label_1ae268;
        case 0x1ae26cu: goto label_1ae26c;
        case 0x1ae270u: goto label_1ae270;
        case 0x1ae274u: goto label_1ae274;
        case 0x1ae278u: goto label_1ae278;
        case 0x1ae27cu: goto label_1ae27c;
        case 0x1ae280u: goto label_1ae280;
        case 0x1ae284u: goto label_1ae284;
        case 0x1ae288u: goto label_1ae288;
        case 0x1ae28cu: goto label_1ae28c;
        case 0x1ae290u: goto label_1ae290;
        case 0x1ae294u: goto label_1ae294;
        case 0x1ae298u: goto label_1ae298;
        case 0x1ae29cu: goto label_1ae29c;
        case 0x1ae2a0u: goto label_1ae2a0;
        case 0x1ae2a4u: goto label_1ae2a4;
        case 0x1ae2a8u: goto label_1ae2a8;
        case 0x1ae2acu: goto label_1ae2ac;
        case 0x1ae2b0u: goto label_1ae2b0;
        case 0x1ae2b4u: goto label_1ae2b4;
        case 0x1ae2b8u: goto label_1ae2b8;
        case 0x1ae2bcu: goto label_1ae2bc;
        case 0x1ae2c0u: goto label_1ae2c0;
        case 0x1ae2c4u: goto label_1ae2c4;
        case 0x1ae2c8u: goto label_1ae2c8;
        case 0x1ae2ccu: goto label_1ae2cc;
        case 0x1ae2d0u: goto label_1ae2d0;
        case 0x1ae2d4u: goto label_1ae2d4;
        case 0x1ae2d8u: goto label_1ae2d8;
        case 0x1ae2dcu: goto label_1ae2dc;
        case 0x1ae2e0u: goto label_1ae2e0;
        case 0x1ae2e4u: goto label_1ae2e4;
        case 0x1ae2e8u: goto label_1ae2e8;
        case 0x1ae2ecu: goto label_1ae2ec;
        case 0x1ae2f0u: goto label_1ae2f0;
        case 0x1ae2f4u: goto label_1ae2f4;
        case 0x1ae2f8u: goto label_1ae2f8;
        case 0x1ae2fcu: goto label_1ae2fc;
        case 0x1ae300u: goto label_1ae300;
        case 0x1ae304u: goto label_1ae304;
        case 0x1ae308u: goto label_1ae308;
        case 0x1ae30cu: goto label_1ae30c;
        case 0x1ae310u: goto label_1ae310;
        case 0x1ae314u: goto label_1ae314;
        case 0x1ae318u: goto label_1ae318;
        case 0x1ae31cu: goto label_1ae31c;
        case 0x1ae320u: goto label_1ae320;
        case 0x1ae324u: goto label_1ae324;
        case 0x1ae328u: goto label_1ae328;
        case 0x1ae32cu: goto label_1ae32c;
        case 0x1ae330u: goto label_1ae330;
        case 0x1ae334u: goto label_1ae334;
        case 0x1ae338u: goto label_1ae338;
        case 0x1ae33cu: goto label_1ae33c;
        case 0x1ae340u: goto label_1ae340;
        case 0x1ae344u: goto label_1ae344;
        case 0x1ae348u: goto label_1ae348;
        case 0x1ae34cu: goto label_1ae34c;
        case 0x1ae350u: goto label_1ae350;
        case 0x1ae354u: goto label_1ae354;
        case 0x1ae358u: goto label_1ae358;
        case 0x1ae35cu: goto label_1ae35c;
        case 0x1ae360u: goto label_1ae360;
        case 0x1ae364u: goto label_1ae364;
        case 0x1ae368u: goto label_1ae368;
        case 0x1ae36cu: goto label_1ae36c;
        case 0x1ae370u: goto label_1ae370;
        case 0x1ae374u: goto label_1ae374;
        case 0x1ae378u: goto label_1ae378;
        case 0x1ae37cu: goto label_1ae37c;
        case 0x1ae380u: goto label_1ae380;
        case 0x1ae384u: goto label_1ae384;
        case 0x1ae388u: goto label_1ae388;
        case 0x1ae38cu: goto label_1ae38c;
        case 0x1ae390u: goto label_1ae390;
        case 0x1ae394u: goto label_1ae394;
        case 0x1ae398u: goto label_1ae398;
        case 0x1ae39cu: goto label_1ae39c;
        case 0x1ae3a0u: goto label_1ae3a0;
        case 0x1ae3a4u: goto label_1ae3a4;
        case 0x1ae3a8u: goto label_1ae3a8;
        case 0x1ae3acu: goto label_1ae3ac;
        case 0x1ae3b0u: goto label_1ae3b0;
        case 0x1ae3b4u: goto label_1ae3b4;
        case 0x1ae3b8u: goto label_1ae3b8;
        case 0x1ae3bcu: goto label_1ae3bc;
        case 0x1ae3c0u: goto label_1ae3c0;
        case 0x1ae3c4u: goto label_1ae3c4;
        case 0x1ae3c8u: goto label_1ae3c8;
        case 0x1ae3ccu: goto label_1ae3cc;
        case 0x1ae3d0u: goto label_1ae3d0;
        case 0x1ae3d4u: goto label_1ae3d4;
        case 0x1ae3d8u: goto label_1ae3d8;
        case 0x1ae3dcu: goto label_1ae3dc;
        case 0x1ae3e0u: goto label_1ae3e0;
        case 0x1ae3e4u: goto label_1ae3e4;
        case 0x1ae3e8u: goto label_1ae3e8;
        case 0x1ae3ecu: goto label_1ae3ec;
        case 0x1ae3f0u: goto label_1ae3f0;
        case 0x1ae3f4u: goto label_1ae3f4;
        case 0x1ae3f8u: goto label_1ae3f8;
        case 0x1ae3fcu: goto label_1ae3fc;
        case 0x1ae400u: goto label_1ae400;
        case 0x1ae404u: goto label_1ae404;
        case 0x1ae408u: goto label_1ae408;
        case 0x1ae40cu: goto label_1ae40c;
        case 0x1ae410u: goto label_1ae410;
        case 0x1ae414u: goto label_1ae414;
        case 0x1ae418u: goto label_1ae418;
        case 0x1ae41cu: goto label_1ae41c;
        case 0x1ae420u: goto label_1ae420;
        case 0x1ae424u: goto label_1ae424;
        case 0x1ae428u: goto label_1ae428;
        case 0x1ae42cu: goto label_1ae42c;
        case 0x1ae430u: goto label_1ae430;
        case 0x1ae434u: goto label_1ae434;
        case 0x1ae438u: goto label_1ae438;
        case 0x1ae43cu: goto label_1ae43c;
        case 0x1ae440u: goto label_1ae440;
        case 0x1ae444u: goto label_1ae444;
        case 0x1ae448u: goto label_1ae448;
        case 0x1ae44cu: goto label_1ae44c;
        case 0x1ae450u: goto label_1ae450;
        case 0x1ae454u: goto label_1ae454;
        case 0x1ae458u: goto label_1ae458;
        case 0x1ae45cu: goto label_1ae45c;
        case 0x1ae460u: goto label_1ae460;
        case 0x1ae464u: goto label_1ae464;
        case 0x1ae468u: goto label_1ae468;
        case 0x1ae46cu: goto label_1ae46c;
        case 0x1ae470u: goto label_1ae470;
        case 0x1ae474u: goto label_1ae474;
        case 0x1ae478u: goto label_1ae478;
        case 0x1ae47cu: goto label_1ae47c;
        case 0x1ae480u: goto label_1ae480;
        case 0x1ae484u: goto label_1ae484;
        case 0x1ae488u: goto label_1ae488;
        case 0x1ae48cu: goto label_1ae48c;
        case 0x1ae490u: goto label_1ae490;
        case 0x1ae494u: goto label_1ae494;
        case 0x1ae498u: goto label_1ae498;
        case 0x1ae49cu: goto label_1ae49c;
        case 0x1ae4a0u: goto label_1ae4a0;
        case 0x1ae4a4u: goto label_1ae4a4;
        case 0x1ae4a8u: goto label_1ae4a8;
        case 0x1ae4acu: goto label_1ae4ac;
        case 0x1ae4b0u: goto label_1ae4b0;
        case 0x1ae4b4u: goto label_1ae4b4;
        case 0x1ae4b8u: goto label_1ae4b8;
        case 0x1ae4bcu: goto label_1ae4bc;
        case 0x1ae4c0u: goto label_1ae4c0;
        case 0x1ae4c4u: goto label_1ae4c4;
        case 0x1ae4c8u: goto label_1ae4c8;
        case 0x1ae4ccu: goto label_1ae4cc;
        case 0x1ae4d0u: goto label_1ae4d0;
        case 0x1ae4d4u: goto label_1ae4d4;
        case 0x1ae4d8u: goto label_1ae4d8;
        case 0x1ae4dcu: goto label_1ae4dc;
        case 0x1ae4e0u: goto label_1ae4e0;
        case 0x1ae4e4u: goto label_1ae4e4;
        case 0x1ae4e8u: goto label_1ae4e8;
        case 0x1ae4ecu: goto label_1ae4ec;
        case 0x1ae4f0u: goto label_1ae4f0;
        case 0x1ae4f4u: goto label_1ae4f4;
        case 0x1ae4f8u: goto label_1ae4f8;
        case 0x1ae4fcu: goto label_1ae4fc;
        case 0x1ae500u: goto label_1ae500;
        case 0x1ae504u: goto label_1ae504;
        case 0x1ae508u: goto label_1ae508;
        case 0x1ae50cu: goto label_1ae50c;
        case 0x1ae510u: goto label_1ae510;
        case 0x1ae514u: goto label_1ae514;
        case 0x1ae518u: goto label_1ae518;
        case 0x1ae51cu: goto label_1ae51c;
        case 0x1ae520u: goto label_1ae520;
        case 0x1ae524u: goto label_1ae524;
        case 0x1ae528u: goto label_1ae528;
        case 0x1ae52cu: goto label_1ae52c;
        case 0x1ae530u: goto label_1ae530;
        case 0x1ae534u: goto label_1ae534;
        case 0x1ae538u: goto label_1ae538;
        case 0x1ae53cu: goto label_1ae53c;
        case 0x1ae540u: goto label_1ae540;
        case 0x1ae544u: goto label_1ae544;
        case 0x1ae548u: goto label_1ae548;
        case 0x1ae54cu: goto label_1ae54c;
        case 0x1ae550u: goto label_1ae550;
        case 0x1ae554u: goto label_1ae554;
        case 0x1ae558u: goto label_1ae558;
        case 0x1ae55cu: goto label_1ae55c;
        case 0x1ae560u: goto label_1ae560;
        case 0x1ae564u: goto label_1ae564;
        case 0x1ae568u: goto label_1ae568;
        case 0x1ae56cu: goto label_1ae56c;
        case 0x1ae570u: goto label_1ae570;
        case 0x1ae574u: goto label_1ae574;
        case 0x1ae578u: goto label_1ae578;
        case 0x1ae57cu: goto label_1ae57c;
        case 0x1ae580u: goto label_1ae580;
        case 0x1ae584u: goto label_1ae584;
        case 0x1ae588u: goto label_1ae588;
        case 0x1ae58cu: goto label_1ae58c;
        case 0x1ae590u: goto label_1ae590;
        case 0x1ae594u: goto label_1ae594;
        case 0x1ae598u: goto label_1ae598;
        case 0x1ae59cu: goto label_1ae59c;
        case 0x1ae5a0u: goto label_1ae5a0;
        case 0x1ae5a4u: goto label_1ae5a4;
        case 0x1ae5a8u: goto label_1ae5a8;
        case 0x1ae5acu: goto label_1ae5ac;
        case 0x1ae5b0u: goto label_1ae5b0;
        case 0x1ae5b4u: goto label_1ae5b4;
        case 0x1ae5b8u: goto label_1ae5b8;
        case 0x1ae5bcu: goto label_1ae5bc;
        case 0x1ae5c0u: goto label_1ae5c0;
        case 0x1ae5c4u: goto label_1ae5c4;
        case 0x1ae5c8u: goto label_1ae5c8;
        case 0x1ae5ccu: goto label_1ae5cc;
        case 0x1ae5d0u: goto label_1ae5d0;
        case 0x1ae5d4u: goto label_1ae5d4;
        case 0x1ae5d8u: goto label_1ae5d8;
        case 0x1ae5dcu: goto label_1ae5dc;
        case 0x1ae5e0u: goto label_1ae5e0;
        case 0x1ae5e4u: goto label_1ae5e4;
        case 0x1ae5e8u: goto label_1ae5e8;
        case 0x1ae5ecu: goto label_1ae5ec;
        case 0x1ae5f0u: goto label_1ae5f0;
        case 0x1ae5f4u: goto label_1ae5f4;
        case 0x1ae5f8u: goto label_1ae5f8;
        case 0x1ae5fcu: goto label_1ae5fc;
        case 0x1ae600u: goto label_1ae600;
        case 0x1ae604u: goto label_1ae604;
        case 0x1ae608u: goto label_1ae608;
        case 0x1ae60cu: goto label_1ae60c;
        case 0x1ae610u: goto label_1ae610;
        case 0x1ae614u: goto label_1ae614;
        case 0x1ae618u: goto label_1ae618;
        case 0x1ae61cu: goto label_1ae61c;
        case 0x1ae620u: goto label_1ae620;
        case 0x1ae624u: goto label_1ae624;
        case 0x1ae628u: goto label_1ae628;
        case 0x1ae62cu: goto label_1ae62c;
        case 0x1ae630u: goto label_1ae630;
        case 0x1ae634u: goto label_1ae634;
        case 0x1ae638u: goto label_1ae638;
        case 0x1ae63cu: goto label_1ae63c;
        case 0x1ae640u: goto label_1ae640;
        case 0x1ae644u: goto label_1ae644;
        case 0x1ae648u: goto label_1ae648;
        case 0x1ae64cu: goto label_1ae64c;
        case 0x1ae650u: goto label_1ae650;
        case 0x1ae654u: goto label_1ae654;
        case 0x1ae658u: goto label_1ae658;
        case 0x1ae65cu: goto label_1ae65c;
        case 0x1ae660u: goto label_1ae660;
        case 0x1ae664u: goto label_1ae664;
        case 0x1ae668u: goto label_1ae668;
        case 0x1ae66cu: goto label_1ae66c;
        case 0x1ae670u: goto label_1ae670;
        case 0x1ae674u: goto label_1ae674;
        case 0x1ae678u: goto label_1ae678;
        case 0x1ae67cu: goto label_1ae67c;
        case 0x1ae680u: goto label_1ae680;
        case 0x1ae684u: goto label_1ae684;
        case 0x1ae688u: goto label_1ae688;
        case 0x1ae68cu: goto label_1ae68c;
        case 0x1ae690u: goto label_1ae690;
        case 0x1ae694u: goto label_1ae694;
        case 0x1ae698u: goto label_1ae698;
        case 0x1ae69cu: goto label_1ae69c;
        case 0x1ae6a0u: goto label_1ae6a0;
        case 0x1ae6a4u: goto label_1ae6a4;
        case 0x1ae6a8u: goto label_1ae6a8;
        case 0x1ae6acu: goto label_1ae6ac;
        case 0x1ae6b0u: goto label_1ae6b0;
        case 0x1ae6b4u: goto label_1ae6b4;
        case 0x1ae6b8u: goto label_1ae6b8;
        case 0x1ae6bcu: goto label_1ae6bc;
        case 0x1ae6c0u: goto label_1ae6c0;
        case 0x1ae6c4u: goto label_1ae6c4;
        case 0x1ae6c8u: goto label_1ae6c8;
        case 0x1ae6ccu: goto label_1ae6cc;
        case 0x1ae6d0u: goto label_1ae6d0;
        case 0x1ae6d4u: goto label_1ae6d4;
        case 0x1ae6d8u: goto label_1ae6d8;
        case 0x1ae6dcu: goto label_1ae6dc;
        case 0x1ae6e0u: goto label_1ae6e0;
        case 0x1ae6e4u: goto label_1ae6e4;
        case 0x1ae6e8u: goto label_1ae6e8;
        case 0x1ae6ecu: goto label_1ae6ec;
        case 0x1ae6f0u: goto label_1ae6f0;
        case 0x1ae6f4u: goto label_1ae6f4;
        case 0x1ae6f8u: goto label_1ae6f8;
        case 0x1ae6fcu: goto label_1ae6fc;
        case 0x1ae700u: goto label_1ae700;
        case 0x1ae704u: goto label_1ae704;
        case 0x1ae708u: goto label_1ae708;
        case 0x1ae70cu: goto label_1ae70c;
        case 0x1ae710u: goto label_1ae710;
        case 0x1ae714u: goto label_1ae714;
        case 0x1ae718u: goto label_1ae718;
        case 0x1ae71cu: goto label_1ae71c;
        case 0x1ae720u: goto label_1ae720;
        case 0x1ae724u: goto label_1ae724;
        case 0x1ae728u: goto label_1ae728;
        case 0x1ae72cu: goto label_1ae72c;
        case 0x1ae730u: goto label_1ae730;
        case 0x1ae734u: goto label_1ae734;
        case 0x1ae738u: goto label_1ae738;
        case 0x1ae73cu: goto label_1ae73c;
        case 0x1ae740u: goto label_1ae740;
        case 0x1ae744u: goto label_1ae744;
        case 0x1ae748u: goto label_1ae748;
        case 0x1ae74cu: goto label_1ae74c;
        case 0x1ae750u: goto label_1ae750;
        case 0x1ae754u: goto label_1ae754;
        case 0x1ae758u: goto label_1ae758;
        case 0x1ae75cu: goto label_1ae75c;
        case 0x1ae760u: goto label_1ae760;
        case 0x1ae764u: goto label_1ae764;
        case 0x1ae768u: goto label_1ae768;
        case 0x1ae76cu: goto label_1ae76c;
        case 0x1ae770u: goto label_1ae770;
        case 0x1ae774u: goto label_1ae774;
        case 0x1ae778u: goto label_1ae778;
        case 0x1ae77cu: goto label_1ae77c;
        case 0x1ae780u: goto label_1ae780;
        case 0x1ae784u: goto label_1ae784;
        case 0x1ae788u: goto label_1ae788;
        case 0x1ae78cu: goto label_1ae78c;
        case 0x1ae790u: goto label_1ae790;
        case 0x1ae794u: goto label_1ae794;
        case 0x1ae798u: goto label_1ae798;
        case 0x1ae79cu: goto label_1ae79c;
        case 0x1ae7a0u: goto label_1ae7a0;
        case 0x1ae7a4u: goto label_1ae7a4;
        case 0x1ae7a8u: goto label_1ae7a8;
        case 0x1ae7acu: goto label_1ae7ac;
        case 0x1ae7b0u: goto label_1ae7b0;
        case 0x1ae7b4u: goto label_1ae7b4;
        case 0x1ae7b8u: goto label_1ae7b8;
        case 0x1ae7bcu: goto label_1ae7bc;
        case 0x1ae7c0u: goto label_1ae7c0;
        case 0x1ae7c4u: goto label_1ae7c4;
        case 0x1ae7c8u: goto label_1ae7c8;
        case 0x1ae7ccu: goto label_1ae7cc;
        case 0x1ae7d0u: goto label_1ae7d0;
        case 0x1ae7d4u: goto label_1ae7d4;
        case 0x1ae7d8u: goto label_1ae7d8;
        case 0x1ae7dcu: goto label_1ae7dc;
        case 0x1ae7e0u: goto label_1ae7e0;
        case 0x1ae7e4u: goto label_1ae7e4;
        case 0x1ae7e8u: goto label_1ae7e8;
        case 0x1ae7ecu: goto label_1ae7ec;
        case 0x1ae7f0u: goto label_1ae7f0;
        case 0x1ae7f4u: goto label_1ae7f4;
        case 0x1ae7f8u: goto label_1ae7f8;
        case 0x1ae7fcu: goto label_1ae7fc;
        case 0x1ae800u: goto label_1ae800;
        case 0x1ae804u: goto label_1ae804;
        case 0x1ae808u: goto label_1ae808;
        case 0x1ae80cu: goto label_1ae80c;
        case 0x1ae810u: goto label_1ae810;
        case 0x1ae814u: goto label_1ae814;
        case 0x1ae818u: goto label_1ae818;
        case 0x1ae81cu: goto label_1ae81c;
        case 0x1ae820u: goto label_1ae820;
        case 0x1ae824u: goto label_1ae824;
        case 0x1ae828u: goto label_1ae828;
        case 0x1ae82cu: goto label_1ae82c;
        case 0x1ae830u: goto label_1ae830;
        case 0x1ae834u: goto label_1ae834;
        case 0x1ae838u: goto label_1ae838;
        case 0x1ae83cu: goto label_1ae83c;
        case 0x1ae840u: goto label_1ae840;
        case 0x1ae844u: goto label_1ae844;
        case 0x1ae848u: goto label_1ae848;
        case 0x1ae84cu: goto label_1ae84c;
        case 0x1ae850u: goto label_1ae850;
        case 0x1ae854u: goto label_1ae854;
        case 0x1ae858u: goto label_1ae858;
        case 0x1ae85cu: goto label_1ae85c;
        case 0x1ae860u: goto label_1ae860;
        case 0x1ae864u: goto label_1ae864;
        case 0x1ae868u: goto label_1ae868;
        case 0x1ae86cu: goto label_1ae86c;
        case 0x1ae870u: goto label_1ae870;
        case 0x1ae874u: goto label_1ae874;
        case 0x1ae878u: goto label_1ae878;
        case 0x1ae87cu: goto label_1ae87c;
        case 0x1ae880u: goto label_1ae880;
        case 0x1ae884u: goto label_1ae884;
        case 0x1ae888u: goto label_1ae888;
        case 0x1ae88cu: goto label_1ae88c;
        case 0x1ae890u: goto label_1ae890;
        case 0x1ae894u: goto label_1ae894;
        case 0x1ae898u: goto label_1ae898;
        case 0x1ae89cu: goto label_1ae89c;
        case 0x1ae8a0u: goto label_1ae8a0;
        case 0x1ae8a4u: goto label_1ae8a4;
        case 0x1ae8a8u: goto label_1ae8a8;
        case 0x1ae8acu: goto label_1ae8ac;
        case 0x1ae8b0u: goto label_1ae8b0;
        case 0x1ae8b4u: goto label_1ae8b4;
        default: return;
    }

label_1ae0e8:
    // 0x1ae0e8: 0xa2000067  sb          $zero, 0x67($s0)
    ctx->pc = 0x1ae0e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 103), (uint8_t)GPR_U32(ctx, 0));
label_1ae0ec:
    // 0x1ae0ec: 0xc08e9ac  jal         func_23A6B0
label_1ae0f0:
    if (ctx->pc == 0x1AE0F0u) {
        ctx->pc = 0x1AE0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE0ECu;
        // 0x1ae0f0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE0F4u;
        goto label_1ae0f4;
    }
    ctx->pc = 0x1AE0ECu;
    SET_GPR_U32(ctx, 31, 0x1AE0F4u);
    ctx->pc = 0x1AE0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE0ECu;
    // 0x1ae0f0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A6B0u;
    { ctx->pc = 0x23a6b0; return; }
    ctx->pc = 0x1AE0F4u;
label_1ae0f4:
    // 0x1ae0f4: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x1ae0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
label_1ae0f8:
    // 0x1ae0f8: 0x621fff5  bgez        $s1, . + 4 + (-0xB << 2)
label_1ae0fc:
    if (ctx->pc == 0x1AE0FCu) {
        ctx->pc = 0x1AE0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE0F8u;
        // 0x1ae0fc: 0x26100080  addiu       $s0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE100u;
        goto label_1ae100;
    }
    ctx->pc = 0x1AE0F8u;
    {
        const bool branch_taken_0x1ae0f8 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1AE0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE0F8u;
        // 0x1ae0fc: 0x26100080  addiu       $s0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae0f8) {
            ctx->pc = 0x1AE0D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1ae0d0; return; }
        }
    }
    ctx->pc = 0x1AE100u;
label_1ae100:
    // 0x1ae100: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1ae100u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ae104:
    // 0x1ae104: 0x26f05ec0  addiu       $s0, $s7, 0x5EC0
    ctx->pc = 0x1ae104u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 24256));
label_1ae108:
    // 0x1ae108: 0xaef15ec0  sw          $s1, 0x5EC0($s7)
    ctx->pc = 0x1ae108u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 24256), GPR_U32(ctx, 17));
label_1ae10c:
    // 0x1ae10c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1ae10cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_1ae110:
    // 0x1ae110: 0xae130004  sw          $s3, 0x4($s0)
    ctx->pc = 0x1ae110u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
label_1ae114:
    // 0x1ae114: 0x24845c80  addiu       $a0, $a0, 0x5C80
    ctx->pc = 0x1ae114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23680));
label_1ae118:
    // 0x1ae118: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x1ae118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
label_1ae11c:
    // 0x1ae11c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ae11cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ae120:
    // 0x1ae120: 0xae140010  sw          $s4, 0x10($s0)
    ctx->pc = 0x1ae120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 20));
label_1ae124:
    // 0x1ae124: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ae124u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ae128:
    // 0x1ae128: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1ae128u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ae12c:
    // 0x1ae12c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1ae12cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1ae130:
    // 0x1ae130: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x1ae130u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1ae134:
    // 0x1ae134: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1ae134u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ae138:
    // 0x1ae138: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1ae138u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1ae13c:
    // 0x1ae13c: 0xc069e2a  jal         func_1A78A8
label_1ae140:
    if (ctx->pc == 0x1AE140u) {
        ctx->pc = 0x1AE140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE13Cu;
        // 0x1ae140: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE144u;
        goto label_1ae144;
    }
    ctx->pc = 0x1AE13Cu;
    SET_GPR_U32(ctx, 31, 0x1AE144u);
    ctx->pc = 0x1AE140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE13Cu;
    // 0x1ae140: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1AE144u;
label_1ae144:
    // 0x1ae144: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1ae148:
    if (ctx->pc == 0x1AE148u) {
        ctx->pc = 0x1AE148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE144u;
        // 0x1ae148: 0x2403001c  addiu       $v1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE14Cu;
        goto label_1ae14c;
    }
    ctx->pc = 0x1AE144u;
    {
        const bool branch_taken_0x1ae144 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1AE148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE144u;
        // 0x1ae148: 0x2403001c  addiu       $v1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae144) {
            ctx->pc = 0x1AE154u;
            goto label_1ae154;
        }
    }
    ctx->pc = 0x1AE14Cu;
label_1ae14c:
    // 0x1ae14c: 0x10000019  b           . + 4 + (0x19 << 2)
label_1ae150:
    if (ctx->pc == 0x1AE150u) {
        ctx->pc = 0x1AE150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE14Cu;
        // 0x1ae150: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE154u;
        goto label_1ae154;
    }
    ctx->pc = 0x1AE14Cu;
    {
        const bool branch_taken_0x1ae14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE14Cu;
        // 0x1ae150: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae14c) {
            ctx->pc = 0x1AE1B4u;
            goto label_1ae1b4;
        }
    }
    ctx->pc = 0x1AE154u;
label_1ae154:
    // 0x1ae154: 0x24070070  addiu       $a3, $zero, 0x70
    ctx->pc = 0x1ae154u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_1ae158:
    // 0x1ae158: 0x72673818  mult1       $a3, $s3, $a3
    ctx->pc = 0x1ae158u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 7); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_1ae15c:
    // 0x1ae15c: 0x2431818  mult        $v1, $s2, $v1
    ctx->pc = 0x1ae15cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1ae160:
    // 0x1ae160: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1ae160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1ae164:
    // 0x1ae164: 0x122940  sll         $a1, $s2, 5
    ctx->pc = 0x1ae164u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
label_1ae168:
    // 0x1ae168: 0x24425dc0  addiu       $v0, $v0, 0x5DC0
    ctx->pc = 0x1ae168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24000));
label_1ae16c:
    // 0x1ae16c: 0x27c45cd0  addiu       $a0, $fp, 0x5CD0
    ctx->pc = 0x1ae16cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 23760));
label_1ae170:
    // 0x1ae170: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1ae170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1ae174:
    // 0x1ae174: 0x1331c0  sll         $a2, $s3, 7
    ctx->pc = 0x1ae174u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 7));
label_1ae178:
    // 0x1ae178: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1ae178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1ae17c:
    // 0x1ae17c: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x1ae17cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_1ae180:
    // 0x1ae180: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x1ae180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1ae184:
    // 0x1ae184: 0x8e080014  lw          $t0, 0x14($s0)
    ctx->pc = 0x1ae184u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1ae188:
    // 0x1ae188: 0xac510010  sw          $s1, 0x10($v0)
    ctx->pc = 0x1ae188u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 17));
label_1ae18c:
    // 0x1ae18c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ae18cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ae190:
    // 0x1ae190: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1ae190u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ae194:
    // 0x1ae194: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x1ae194u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_1ae198:
    // 0x1ae198: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1ae198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1ae19c:
    // 0x1ae19c: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x1ae19cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
label_1ae1a0:
    // 0x1ae1a0: 0xace80008  sw          $t0, 0x8($a3)
    ctx->pc = 0x1ae1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 8));
label_1ae1a4:
    // 0x1ae1a4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1ae1a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ae1a8:
    // 0x1ae1a8: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x1ae1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
label_1ae1ac:
    // 0x1ae1ac: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x1ae1acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
label_1ae1b0:
    // 0x1ae1b0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1ae1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1ae1b4:
    // 0x1ae1b4: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1ae1b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1ae1b8:
    // 0x1ae1b8: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x1ae1b8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1ae1bc:
    // 0x1ae1bc: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x1ae1bcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1ae1c0:
    // 0x1ae1c0: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1ae1c0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1ae1c4:
    // 0x1ae1c4: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1ae1c4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1ae1c8:
    // 0x1ae1c8: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1ae1c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1ae1cc:
    // 0x1ae1cc: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1ae1ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1ae1d0:
    // 0x1ae1d0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1ae1d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1ae1d4:
    // 0x1ae1d4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1ae1d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ae1d8:
    // 0x1ae1d8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ae1d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ae1dc:
    // 0x1ae1dc: 0x3e00008  jr          $ra
label_1ae1e0:
    if (ctx->pc == 0x1AE1E0u) {
        ctx->pc = 0x1AE1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE1DCu;
        // 0x1ae1e0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE1E4u;
        goto label_1ae1e4;
    }
    ctx->pc = 0x1AE1DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE1DCu;
        // 0x1ae1e0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE1DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE1E4u;
label_1ae1e4:
    // 0x1ae1e4: 0x0  nop
    ctx->pc = 0x1ae1e4u;
    // NOP
label_1ae1e8:
    // 0x1ae1e8: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1ae1e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ae1ec:
    // 0x1ae1ec: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x1ae1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_1ae1f0:
    // 0x1ae1f0: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1ae1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_1ae1f4:
    // 0x1ae1f4: 0x70e31818  mult1       $v1, $a3, $v1
    ctx->pc = 0x1ae1f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1ae1f8:
    // 0x1ae1f8: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x1ae1f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1ae1fc:
    // 0x1ae1fc: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1ae1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1ae200:
    // 0x1ae200: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ae200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1ae204:
    // 0x1ae204: 0x24425cd0  addiu       $v0, $v0, 0x5CD0
    ctx->pc = 0x1ae204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23760));
label_1ae208:
    // 0x1ae208: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1ae208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_1ae20c:
    // 0x1ae20c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1ae20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1ae210:
    // 0x1ae210: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1ae210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1ae214:
    // 0x1ae214: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1ae214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1ae218:
    // 0x1ae218: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1ae218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1ae21c:
    // 0x1ae21c: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x1ae21cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1ae220:
    // 0x1ae220: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1ae220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1ae224:
    // 0x1ae224: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_1ae228:
    if (ctx->pc == 0x1AE228u) {
        ctx->pc = 0x1AE228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE224u;
        // 0x1ae228: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE22Cu;
        goto label_1ae22c;
    }
    ctx->pc = 0x1AE224u;
    {
        const bool branch_taken_0x1ae224 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE224u;
        // 0x1ae228: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae224) {
            ctx->pc = 0x1AE28Cu;
            goto label_1ae28c;
        }
    }
    ctx->pc = 0x1AE22Cu;
label_1ae22c:
    // 0x1ae22c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1ae22cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1ae230:
    // 0x1ae230: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x1ae230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1ae234:
    // 0x1ae234: 0x24505ec0  addiu       $s0, $v0, 0x5EC0
    ctx->pc = 0x1ae234u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 24256));
label_1ae238:
    // 0x1ae238: 0xac435ec0  sw          $v1, 0x5EC0($v0)
    ctx->pc = 0x1ae238u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24256), GPR_U32(ctx, 3));
label_1ae23c:
    // 0x1ae23c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ae23cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ae240:
    // 0x1ae240: 0xae070004  sw          $a3, 0x4($s0)
    ctx->pc = 0x1ae240u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 7));
label_1ae244:
    // 0x1ae244: 0xae050008  sw          $a1, 0x8($s0)
    ctx->pc = 0x1ae244u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
label_1ae248:
    // 0x1ae248: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1ae248u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_1ae24c:
    // 0x1ae24c: 0xae060010  sw          $a2, 0x10($s0)
    ctx->pc = 0x1ae24cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 6));
label_1ae250:
    // 0x1ae250: 0x24845c80  addiu       $a0, $a0, 0x5C80
    ctx->pc = 0x1ae250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23680));
label_1ae254:
    // 0x1ae254: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ae254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ae258:
    // 0x1ae258: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ae258u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ae25c:
    // 0x1ae25c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1ae25cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1ae260:
    // 0x1ae260: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1ae260u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ae264:
    // 0x1ae264: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x1ae264u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1ae268:
    // 0x1ae268: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1ae268u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ae26c:
    // 0x1ae26c: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1ae26cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1ae270:
    // 0x1ae270: 0xc069e2a  jal         func_1A78A8
label_1ae274:
    if (ctx->pc == 0x1AE274u) {
        ctx->pc = 0x1AE274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE270u;
        // 0x1ae274: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE278u;
        goto label_1ae278;
    }
    ctx->pc = 0x1AE270u;
    SET_GPR_U32(ctx, 31, 0x1AE278u);
    ctx->pc = 0x1AE274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE270u;
    // 0x1ae274: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1AE278u;
label_1ae278:
    // 0x1ae278: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
label_1ae27c:
    if (ctx->pc == 0x1AE27Cu) {
        ctx->pc = 0x1AE27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE278u;
        // 0x1ae27c: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE280u;
        goto label_1ae280;
    }
    ctx->pc = 0x1AE278u;
    {
        const bool branch_taken_0x1ae278 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1ae278) {
            ctx->pc = 0x1AE27Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AE278u;
            // 0x1ae27c: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AE288u;
            goto label_1ae288;
        }
    }
    ctx->pc = 0x1AE280u;
label_1ae280:
    // 0x1ae280: 0x10000002  b           . + 4 + (0x2 << 2)
label_1ae284:
    if (ctx->pc == 0x1AE284u) {
        ctx->pc = 0x1AE284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE280u;
        // 0x1ae284: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE288u;
        goto label_1ae288;
    }
    ctx->pc = 0x1AE280u;
    {
        const bool branch_taken_0x1ae280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE280u;
        // 0x1ae284: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae280) {
            ctx->pc = 0x1AE28Cu;
            goto label_1ae28c;
        }
    }
    ctx->pc = 0x1AE288u;
label_1ae288:
    // 0x1ae288: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1ae288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1ae28c:
    // 0x1ae28c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ae28cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1ae290:
    // 0x1ae290: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1ae290u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ae294:
    // 0x1ae294: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ae294u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ae298:
    // 0x1ae298: 0x3e00008  jr          $ra
label_1ae29c:
    if (ctx->pc == 0x1AE29Cu) {
        ctx->pc = 0x1AE29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE298u;
        // 0x1ae29c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE2A0u;
        goto label_1ae2a0;
    }
    ctx->pc = 0x1AE298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE298u;
        // 0x1ae29c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE2A0u;
label_1ae2a0:
    // 0x1ae2a0: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x1ae2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_1ae2a4:
    // 0x1ae2a4: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x1ae2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_1ae2a8:
    // 0x1ae2a8: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x1ae2a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_1ae2ac:
    // 0x1ae2ac: 0x70832018  mult1       $a0, $a0, $v1
    ctx->pc = 0x1ae2acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1ae2b0:
    // 0x1ae2b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ae2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ae2b4:
    // 0x1ae2b4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1ae2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1ae2b8:
    // 0x1ae2b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ae2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1ae2bc:
    // 0x1ae2bc: 0x24425cd0  addiu       $v0, $v0, 0x5CD0
    ctx->pc = 0x1ae2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23760));
label_1ae2c0:
    // 0x1ae2c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ae2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1ae2c4:
    // 0x1ae2c4: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x1ae2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1ae2c8:
    // 0x1ae2c8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1ae2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1ae2cc:
    // 0x1ae2cc: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x1ae2ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ae2d0:
    // 0x1ae2d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ae2d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ae2d4:
    // 0x1ae2d4: 0xc069446  jal         func_1A5118
label_1ae2d8:
    if (ctx->pc == 0x1AE2D8u) {
        ctx->pc = 0x1AE2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE2D4u;
        // 0x1ae2d8: 0x26050100  addiu       $a1, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE2DCu;
        goto label_1ae2dc;
    }
    ctx->pc = 0x1AE2D4u;
    SET_GPR_U32(ctx, 31, 0x1AE2DCu);
    ctx->pc = 0x1AE2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE2D4u;
    // 0x1ae2d8: 0x26050100  addiu       $a1, $s0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5118u;
    { ctx->pc = 0x1a5118; return; }
    ctx->pc = 0x1AE2DCu;
label_1ae2dc:
    // 0x1ae2dc: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x1ae2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_1ae2e0:
    // 0x1ae2e0: 0x8e0300d8  lw          $v1, 0xD8($s0)
    ctx->pc = 0x1ae2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_1ae2e4:
    // 0x1ae2e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ae2e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ae2e8:
    // 0x1ae2e8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1ae2e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1ae2ec:
    // 0x1ae2ec: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1ae2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_1ae2f0:
    // 0x1ae2f0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1ae2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1ae2f4:
    // 0x1ae2f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ae2f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ae2f8:
    // 0x1ae2f8: 0x3e00008  jr          $ra
label_1ae2fc:
    if (ctx->pc == 0x1AE2FCu) {
        ctx->pc = 0x1AE2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE2F8u;
        // 0x1ae2fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE300u;
        goto label_1ae300;
    }
    ctx->pc = 0x1AE2F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE2F8u;
        // 0x1ae2fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE2F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE300u;
label_1ae300:
    // 0x1ae300: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1ae300u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ae304:
    // 0x1ae304: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x1ae304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_1ae308:
    // 0x1ae308: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1ae308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_1ae30c:
    // 0x1ae30c: 0x70c31818  mult1       $v1, $a2, $v1
    ctx->pc = 0x1ae30cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1ae310:
    // 0x1ae310: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x1ae310u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1ae314:
    // 0x1ae314: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ae314u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1ae318:
    // 0x1ae318: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1ae318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1ae31c:
    // 0x1ae31c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ae31cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ae320:
    // 0x1ae320: 0x24425cd0  addiu       $v0, $v0, 0x5CD0
    ctx->pc = 0x1ae320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23760));
label_1ae324:
    // 0x1ae324: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1ae324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1ae328:
    // 0x1ae328: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1ae328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1ae32c:
    // 0x1ae32c: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1ae32cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_1ae330:
    // 0x1ae330: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1ae334:
    if (ctx->pc == 0x1AE334u) {
        ctx->pc = 0x1AE334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE330u;
        // 0x1ae334: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE338u;
        goto label_1ae338;
    }
    ctx->pc = 0x1AE330u;
    {
        const bool branch_taken_0x1ae330 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE330u;
        // 0x1ae334: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae330) {
            ctx->pc = 0x1AE344u;
            goto label_1ae344;
        }
    }
    ctx->pc = 0x1AE338u;
label_1ae338:
    // 0x1ae338: 0xc06b8a8  jal         func_1AE2A0
label_1ae33c:
    if (ctx->pc == 0x1AE33Cu) {
        ctx->pc = 0x1AE33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE338u;
        // 0x1ae33c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE340u;
        goto label_1ae340;
    }
    ctx->pc = 0x1AE338u;
    SET_GPR_U32(ctx, 31, 0x1AE340u);
    ctx->pc = 0x1AE33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE338u;
    // 0x1ae33c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE2A0u;
    goto label_1ae2a0;
    ctx->pc = 0x1AE340u;
label_1ae340:
    // 0x1ae340: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x1ae340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_1ae344:
    // 0x1ae344: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ae344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ae348:
    // 0x1ae348: 0x3e00008  jr          $ra
label_1ae34c:
    if (ctx->pc == 0x1AE34Cu) {
        ctx->pc = 0x1AE34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE348u;
        // 0x1ae34c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE350u;
        goto label_1ae350;
    }
    ctx->pc = 0x1AE348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE348u;
        // 0x1ae34c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE350u;
label_1ae350:
    // 0x1ae350: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1ae350u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ae354:
    // 0x1ae354: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x1ae354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_1ae358:
    // 0x1ae358: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1ae358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_1ae35c:
    // 0x1ae35c: 0x70e31818  mult1       $v1, $a3, $v1
    ctx->pc = 0x1ae35cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1ae360:
    // 0x1ae360: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x1ae360u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1ae364:
    // 0x1ae364: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ae364u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1ae368:
    // 0x1ae368: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1ae368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1ae36c:
    // 0x1ae36c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1ae36cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1ae370:
    // 0x1ae370: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ae370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1ae374:
    // 0x1ae374: 0x24425cd0  addiu       $v0, $v0, 0x5CD0
    ctx->pc = 0x1ae374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23760));
label_1ae378:
    // 0x1ae378: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ae378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1ae37c:
    // 0x1ae37c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1ae37cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1ae380:
    // 0x1ae380: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1ae380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1ae384:
    // 0x1ae384: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1ae384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_1ae388:
    // 0x1ae388: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1ae38c:
    if (ctx->pc == 0x1AE38Cu) {
        ctx->pc = 0x1AE38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE388u;
        // 0x1ae38c: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE390u;
        goto label_1ae390;
    }
    ctx->pc = 0x1AE388u;
    {
        const bool branch_taken_0x1ae388 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE388u;
        // 0x1ae38c: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae388) {
            ctx->pc = 0x1AE398u;
            goto label_1ae398;
        }
    }
    ctx->pc = 0x1AE390u;
label_1ae390:
    // 0x1ae390: 0x10000009  b           . + 4 + (0x9 << 2)
label_1ae394:
    if (ctx->pc == 0x1AE394u) {
        ctx->pc = 0x1AE394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE390u;
        // 0x1ae394: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE398u;
        goto label_1ae398;
    }
    ctx->pc = 0x1AE390u;
    {
        const bool branch_taken_0x1ae390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE390u;
        // 0x1ae394: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae390) {
            ctx->pc = 0x1AE3B8u;
            goto label_1ae3b8;
        }
    }
    ctx->pc = 0x1AE398u;
label_1ae398:
    // 0x1ae398: 0xc06b8a8  jal         func_1AE2A0
label_1ae39c:
    if (ctx->pc == 0x1AE39Cu) {
        ctx->pc = 0x1AE39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE398u;
        // 0x1ae39c: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE3A0u;
        goto label_1ae3a0;
    }
    ctx->pc = 0x1AE398u;
    SET_GPR_U32(ctx, 31, 0x1AE3A0u);
    ctx->pc = 0x1AE39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE398u;
    // 0x1ae39c: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE2A0u;
    goto label_1ae2a0;
    ctx->pc = 0x1AE3A0u;
label_1ae3a0:
    // 0x1ae3a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ae3a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ae3a4:
    // 0x1ae3a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ae3a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ae3a8:
    // 0x1ae3a8: 0x8e060060  lw          $a2, 0x60($s0)
    ctx->pc = 0x1ae3a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_1ae3ac:
    // 0x1ae3ac: 0xc08e93e  jal         func_23A4F8
label_1ae3b0:
    if (ctx->pc == 0x1AE3B0u) {
        ctx->pc = 0x1AE3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE3ACu;
        // 0x1ae3b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE3B4u;
        goto label_1ae3b4;
    }
    ctx->pc = 0x1AE3ACu;
    SET_GPR_U32(ctx, 31, 0x1AE3B4u);
    ctx->pc = 0x1AE3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE3ACu;
    // 0x1ae3b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x1AE3B4u;
label_1ae3b4:
    // 0x1ae3b4: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x1ae3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_1ae3b8:
    // 0x1ae3b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ae3b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ae3bc:
    // 0x1ae3bc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1ae3bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ae3c0:
    // 0x1ae3c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ae3c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ae3c4:
    // 0x1ae3c4: 0x3e00008  jr          $ra
label_1ae3c8:
    if (ctx->pc == 0x1AE3C8u) {
        ctx->pc = 0x1AE3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE3C4u;
        // 0x1ae3c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE3CCu;
        goto label_1ae3cc;
    }
    ctx->pc = 0x1AE3C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE3C4u;
        // 0x1ae3c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE3C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE3CCu;
label_1ae3cc:
    // 0x1ae3cc: 0x0  nop
    ctx->pc = 0x1ae3ccu;
    // NOP
label_1ae3d0:
    // 0x1ae3d0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1ae3d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ae3d4:
    // 0x1ae3d4: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x1ae3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_1ae3d8:
    // 0x1ae3d8: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1ae3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_1ae3dc:
    // 0x1ae3dc: 0x70c31818  mult1       $v1, $a2, $v1
    ctx->pc = 0x1ae3dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1ae3e0:
    // 0x1ae3e0: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x1ae3e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1ae3e4:
    // 0x1ae3e4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ae3e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1ae3e8:
    // 0x1ae3e8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1ae3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1ae3ec:
    // 0x1ae3ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ae3ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ae3f0:
    // 0x1ae3f0: 0x24425cd0  addiu       $v0, $v0, 0x5CD0
    ctx->pc = 0x1ae3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23760));
label_1ae3f4:
    // 0x1ae3f4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1ae3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1ae3f8:
    // 0x1ae3f8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1ae3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1ae3fc:
    // 0x1ae3fc: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1ae3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_1ae400:
    // 0x1ae400: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_1ae404:
    if (ctx->pc == 0x1AE404u) {
        ctx->pc = 0x1AE404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE400u;
        // 0x1ae404: 0x24020063  addiu       $v0, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE408u;
        goto label_1ae408;
    }
    ctx->pc = 0x1AE400u;
    {
        const bool branch_taken_0x1ae400 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE400u;
        // 0x1ae404: 0x24020063  addiu       $v0, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae400) {
            ctx->pc = 0x1AE43Cu;
            goto label_1ae43c;
        }
    }
    ctx->pc = 0x1AE408u;
label_1ae408:
    // 0x1ae408: 0xc06b8a8  jal         func_1AE2A0
label_1ae40c:
    if (ctx->pc == 0x1AE40Cu) {
        ctx->pc = 0x1AE40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE408u;
        // 0x1ae40c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE410u;
        goto label_1ae410;
    }
    ctx->pc = 0x1AE408u;
    SET_GPR_U32(ctx, 31, 0x1AE410u);
    ctx->pc = 0x1AE40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE408u;
    // 0x1ae40c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE2A0u;
    goto label_1ae2a0;
    ctx->pc = 0x1AE410u;
label_1ae410:
    // 0x1ae410: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ae410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ae414:
    // 0x1ae414: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1ae414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1ae418:
    // 0x1ae418: 0x90820070  lbu         $v0, 0x70($a0)
    ctx->pc = 0x1ae418u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 112)));
label_1ae41c:
    // 0x1ae41c: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
label_1ae420:
    if (ctx->pc == 0x1AE420u) {
        ctx->pc = 0x1AE420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE41Cu;
        // 0x1ae420: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE424u;
        goto label_1ae424;
    }
    ctx->pc = 0x1AE41Cu;
    {
        const bool branch_taken_0x1ae41c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1AE420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE41Cu;
        // 0x1ae420: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae41c) {
            ctx->pc = 0x1AE440u;
            goto label_1ae440;
        }
    }
    ctx->pc = 0x1AE424u;
label_1ae424:
    // 0x1ae424: 0x90830071  lbu         $v1, 0x71($a0)
    ctx->pc = 0x1ae424u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 113)));
label_1ae428:
    // 0x1ae428: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ae428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ae42c:
    // 0x1ae42c: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
label_1ae430:
    if (ctx->pc == 0x1AE430u) {
        ctx->pc = 0x1AE430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE42Cu;
        // 0x1ae430: 0x90820070  lbu         $v0, 0x70($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE434u;
        goto label_1ae434;
    }
    ctx->pc = 0x1AE42Cu;
    {
        const bool branch_taken_0x1ae42c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ae42c) {
            ctx->pc = 0x1AE430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AE42Cu;
            // 0x1ae430: 0x90820070  lbu         $v0, 0x70($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AE440u;
            goto label_1ae440;
        }
    }
    ctx->pc = 0x1AE434u;
label_1ae434:
    // 0x1ae434: 0x10000002  b           . + 4 + (0x2 << 2)
label_1ae438:
    if (ctx->pc == 0x1AE438u) {
        ctx->pc = 0x1AE438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE434u;
        // 0x1ae438: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE43Cu;
        goto label_1ae43c;
    }
    ctx->pc = 0x1AE434u;
    {
        const bool branch_taken_0x1ae434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE434u;
        // 0x1ae438: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae434) {
            ctx->pc = 0x1AE440u;
            goto label_1ae440;
        }
    }
    ctx->pc = 0x1AE43Cu;
label_1ae43c:
    // 0x1ae43c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ae43cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ae440:
    // 0x1ae440: 0x3e00008  jr          $ra
label_1ae444:
    if (ctx->pc == 0x1AE444u) {
        ctx->pc = 0x1AE444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE440u;
        // 0x1ae444: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE448u;
        goto label_1ae448;
    }
    ctx->pc = 0x1AE440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE440u;
        // 0x1ae444: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE448u;
label_1ae448:
    // 0x1ae448: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x1ae448u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_1ae44c:
    // 0x1ae44c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1ae450:
    if (ctx->pc == 0x1AE450u) {
        ctx->pc = 0x1AE450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE44Cu;
        // 0x1ae450: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE454u;
        goto label_1ae454;
    }
    ctx->pc = 0x1AE44Cu;
    {
        const bool branch_taken_0x1ae44c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE44Cu;
        // 0x1ae450: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae44c) {
            ctx->pc = 0x1AE470u;
            goto label_1ae470;
        }
    }
    ctx->pc = 0x1AE454u;
label_1ae454:
    // 0x1ae454: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1ae454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1ae458:
    // 0x1ae458: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1ae458u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1ae45c:
    // 0x1ae45c: 0x24427218  addiu       $v0, $v0, 0x7218
    ctx->pc = 0x1ae45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29208));
label_1ae460:
    // 0x1ae460: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1ae460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ae464:
    // 0x1ae464: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ae464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1ae468:
    // 0x1ae468: 0x808f390  j           func_23CE40
label_1ae46c:
    if (ctx->pc == 0x1AE46Cu) {
        ctx->pc = 0x1AE46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE468u;
        // 0x1ae46c: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE470u;
        goto label_1ae470;
    }
    ctx->pc = 0x1AE468u;
    ctx->pc = 0x1AE46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE468u;
    // 0x1ae46c: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CE40u;
    { ctx->pc = 0x23ce40; return; }
    ctx->pc = 0x1AE470u;
label_1ae470:
    // 0x1ae470: 0x9043a918  lbu         $v1, -0x56E8($v0)
    ctx->pc = 0x1ae470u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294945048)));
label_1ae474:
    // 0x1ae474: 0x3e00008  jr          $ra
label_1ae478:
    if (ctx->pc == 0x1AE478u) {
        ctx->pc = 0x1AE478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE474u;
        // 0x1ae478: 0xa0a30000  sb          $v1, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE47Cu;
        goto label_1ae47c;
    }
    ctx->pc = 0x1AE474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE474u;
        // 0x1ae478: 0xa0a30000  sb          $v1, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE47Cu;
label_1ae47c:
    // 0x1ae47c: 0x0  nop
    ctx->pc = 0x1ae47cu;
    // NOP
label_1ae480:
    // 0x1ae480: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1ae480u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ae484:
    // 0x1ae484: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x1ae484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_1ae488:
    // 0x1ae488: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1ae488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_1ae48c:
    // 0x1ae48c: 0x70e31818  mult1       $v1, $a3, $v1
    ctx->pc = 0x1ae48cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1ae490:
    // 0x1ae490: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x1ae490u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1ae494:
    // 0x1ae494: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ae494u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ae498:
    // 0x1ae498: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1ae498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1ae49c:
    // 0x1ae49c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ae49cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1ae4a0:
    // 0x1ae4a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ae4a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1ae4a4:
    // 0x1ae4a4: 0x24425cd0  addiu       $v0, $v0, 0x5CD0
    ctx->pc = 0x1ae4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23760));
label_1ae4a8:
    // 0x1ae4a8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1ae4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1ae4ac:
    // 0x1ae4ac: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1ae4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1ae4b0:
    // 0x1ae4b0: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1ae4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_1ae4b4:
    // 0x1ae4b4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1ae4b8:
    if (ctx->pc == 0x1AE4B8u) {
        ctx->pc = 0x1AE4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE4B4u;
        // 0x1ae4b8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE4BCu;
        goto label_1ae4bc;
    }
    ctx->pc = 0x1AE4B4u;
    {
        const bool branch_taken_0x1ae4b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE4B4u;
        // 0x1ae4b8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae4b4) {
            ctx->pc = 0x1AE4C4u;
            goto label_1ae4c4;
        }
    }
    ctx->pc = 0x1AE4BCu;
label_1ae4bc:
    // 0x1ae4bc: 0x10000005  b           . + 4 + (0x5 << 2)
label_1ae4c0:
    if (ctx->pc == 0x1AE4C0u) {
        ctx->pc = 0x1AE4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE4BCu;
        // 0x1ae4c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE4C4u;
        goto label_1ae4c4;
    }
    ctx->pc = 0x1AE4BCu;
    {
        const bool branch_taken_0x1ae4bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE4BCu;
        // 0x1ae4c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae4bc) {
            ctx->pc = 0x1AE4D4u;
            goto label_1ae4d4;
        }
    }
    ctx->pc = 0x1AE4C4u;
label_1ae4c4:
    // 0x1ae4c4: 0xc06b8a8  jal         func_1AE2A0
label_1ae4c8:
    if (ctx->pc == 0x1AE4C8u) {
        ctx->pc = 0x1AE4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE4C4u;
        // 0x1ae4c8: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE4CCu;
        goto label_1ae4cc;
    }
    ctx->pc = 0x1AE4C4u;
    SET_GPR_U32(ctx, 31, 0x1AE4CCu);
    ctx->pc = 0x1AE4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE4C4u;
    // 0x1ae4c8: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE2A0u;
    goto label_1ae2a0;
    ctx->pc = 0x1AE4CCu;
label_1ae4cc:
    // 0x1ae4cc: 0xa0500071  sb          $s0, 0x71($v0)
    ctx->pc = 0x1ae4ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 113), (uint8_t)GPR_U32(ctx, 16));
label_1ae4d0:
    // 0x1ae4d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ae4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ae4d4:
    // 0x1ae4d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ae4d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ae4d8:
    // 0x1ae4d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ae4d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ae4dc:
    // 0x1ae4dc: 0x3e00008  jr          $ra
label_1ae4e0:
    if (ctx->pc == 0x1AE4E0u) {
        ctx->pc = 0x1AE4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE4DCu;
        // 0x1ae4e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE4E4u;
        goto label_1ae4e4;
    }
    ctx->pc = 0x1AE4DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE4DCu;
        // 0x1ae4e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE4DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE4E4u;
label_1ae4e4:
    // 0x1ae4e4: 0x0  nop
    ctx->pc = 0x1ae4e4u;
    // NOP
label_1ae4e8:
    // 0x1ae4e8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1ae4e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ae4ec:
    // 0x1ae4ec: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x1ae4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_1ae4f0:
    // 0x1ae4f0: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1ae4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_1ae4f4:
    // 0x1ae4f4: 0x70c31818  mult1       $v1, $a2, $v1
    ctx->pc = 0x1ae4f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1ae4f8:
    // 0x1ae4f8: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x1ae4f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1ae4fc:
    // 0x1ae4fc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ae4fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1ae500:
    // 0x1ae500: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1ae500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1ae504:
    // 0x1ae504: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ae504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ae508:
    // 0x1ae508: 0x24425cd0  addiu       $v0, $v0, 0x5CD0
    ctx->pc = 0x1ae508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23760));
label_1ae50c:
    // 0x1ae50c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1ae50cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1ae510:
    // 0x1ae510: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1ae510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1ae514:
    // 0x1ae514: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1ae514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_1ae518:
    // 0x1ae518: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1ae51c:
    if (ctx->pc == 0x1AE51Cu) {
        ctx->pc = 0x1AE51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE518u;
        // 0x1ae51c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE520u;
        goto label_1ae520;
    }
    ctx->pc = 0x1AE518u;
    {
        const bool branch_taken_0x1ae518 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE518u;
        // 0x1ae51c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae518) {
            ctx->pc = 0x1AE52Cu;
            goto label_1ae52c;
        }
    }
    ctx->pc = 0x1AE520u;
label_1ae520:
    // 0x1ae520: 0xc06b8a8  jal         func_1AE2A0
label_1ae524:
    if (ctx->pc == 0x1AE524u) {
        ctx->pc = 0x1AE524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE520u;
        // 0x1ae524: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE528u;
        goto label_1ae528;
    }
    ctx->pc = 0x1AE520u;
    SET_GPR_U32(ctx, 31, 0x1AE528u);
    ctx->pc = 0x1AE524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE520u;
    // 0x1ae524: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE2A0u;
    goto label_1ae2a0;
    ctx->pc = 0x1AE528u;
label_1ae528:
    // 0x1ae528: 0x90420071  lbu         $v0, 0x71($v0)
    ctx->pc = 0x1ae528u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 113)));
label_1ae52c:
    // 0x1ae52c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ae52cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ae530:
    // 0x1ae530: 0x3e00008  jr          $ra
label_1ae534:
    if (ctx->pc == 0x1AE534u) {
        ctx->pc = 0x1AE534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE530u;
        // 0x1ae534: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE538u;
        goto label_1ae538;
    }
    ctx->pc = 0x1AE530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE530u;
        // 0x1ae534: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE538u;
label_1ae538:
    // 0x1ae538: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x1ae538u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_1ae53c:
    // 0x1ae53c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1ae540:
    if (ctx->pc == 0x1AE540u) {
        ctx->pc = 0x1AE540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE53Cu;
        // 0x1ae540: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE544u;
        goto label_1ae544;
    }
    ctx->pc = 0x1AE53Cu;
    {
        const bool branch_taken_0x1ae53c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE53Cu;
        // 0x1ae540: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae53c) {
            ctx->pc = 0x1AE560u;
            goto label_1ae560;
        }
    }
    ctx->pc = 0x1AE544u;
label_1ae544:
    // 0x1ae544: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1ae544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1ae548:
    // 0x1ae548: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1ae548u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1ae54c:
    // 0x1ae54c: 0x24427238  addiu       $v0, $v0, 0x7238
    ctx->pc = 0x1ae54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29240));
label_1ae550:
    // 0x1ae550: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1ae550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ae554:
    // 0x1ae554: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ae554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1ae558:
    // 0x1ae558: 0x808f390  j           func_23CE40
label_1ae55c:
    if (ctx->pc == 0x1AE55Cu) {
        ctx->pc = 0x1AE55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE558u;
        // 0x1ae55c: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE560u;
        goto label_1ae560;
    }
    ctx->pc = 0x1AE558u;
    ctx->pc = 0x1AE55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE558u;
    // 0x1ae55c: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CE40u;
    { ctx->pc = 0x23ce40; return; }
    ctx->pc = 0x1AE560u;
label_1ae560:
    // 0x1ae560: 0x9043a918  lbu         $v1, -0x56E8($v0)
    ctx->pc = 0x1ae560u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294945048)));
label_1ae564:
    // 0x1ae564: 0x3e00008  jr          $ra
label_1ae568:
    if (ctx->pc == 0x1AE568u) {
        ctx->pc = 0x1AE568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE564u;
        // 0x1ae568: 0xa0a30000  sb          $v1, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE56Cu;
        goto label_1ae56c;
    }
    ctx->pc = 0x1AE564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE564u;
        // 0x1ae568: 0xa0a30000  sb          $v1, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE56Cu;
label_1ae56c:
    // 0x1ae56c: 0x0  nop
    ctx->pc = 0x1ae56cu;
    // NOP
label_1ae570:
    // 0x1ae570: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1ae570u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ae574:
    // 0x1ae574: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x1ae574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_1ae578:
    // 0x1ae578: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1ae578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_1ae57c:
    // 0x1ae57c: 0x71031818  mult1       $v1, $t0, $v1
    ctx->pc = 0x1ae57cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1ae580:
    // 0x1ae580: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x1ae580u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1ae584:
    // 0x1ae584: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ae584u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1ae588:
    // 0x1ae588: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1ae588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1ae58c:
    // 0x1ae58c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1ae58cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1ae590:
    // 0x1ae590: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ae590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1ae594:
    // 0x1ae594: 0x24425cd0  addiu       $v0, $v0, 0x5CD0
    ctx->pc = 0x1ae594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23760));
label_1ae598:
    // 0x1ae598: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ae598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1ae59c:
    // 0x1ae59c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1ae59cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1ae5a0:
    // 0x1ae5a0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1ae5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1ae5a4:
    // 0x1ae5a4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1ae5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1ae5a8:
    // 0x1ae5a8: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1ae5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_1ae5ac:
    // 0x1ae5ac: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
label_1ae5b0:
    if (ctx->pc == 0x1AE5B0u) {
        ctx->pc = 0x1AE5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE5ACu;
        // 0x1ae5b0: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE5B4u;
        goto label_1ae5b4;
    }
    ctx->pc = 0x1AE5ACu;
    {
        const bool branch_taken_0x1ae5ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE5ACu;
        // 0x1ae5b0: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae5ac) {
            ctx->pc = 0x1AE678u;
            goto label_1ae678;
        }
    }
    ctx->pc = 0x1AE5B4u;
label_1ae5b4:
    // 0x1ae5b4: 0xc06b8a8  jal         func_1AE2A0
label_1ae5b8:
    if (ctx->pc == 0x1AE5B8u) {
        ctx->pc = 0x1AE5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE5B4u;
        // 0x1ae5b8: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE5BCu;
        goto label_1ae5bc;
    }
    ctx->pc = 0x1AE5B4u;
    SET_GPR_U32(ctx, 31, 0x1AE5BCu);
    ctx->pc = 0x1AE5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE5B4u;
    // 0x1ae5b8: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE2A0u;
    goto label_1ae2a0;
    ctx->pc = 0x1AE5BCu;
label_1ae5bc:
    // 0x1ae5bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ae5bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ae5c0:
    // 0x1ae5c0: 0x90850072  lbu         $a1, 0x72($a0)
    ctx->pc = 0x1ae5c0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 114)));
label_1ae5c4:
    // 0x1ae5c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ae5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ae5c8:
    // 0x1ae5c8: 0x14a2002c  bne         $a1, $v0, . + 4 + (0x2C << 2)
label_1ae5cc:
    if (ctx->pc == 0x1AE5CCu) {
        ctx->pc = 0x1AE5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE5C8u;
        // 0x1ae5cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE5D0u;
        goto label_1ae5d0;
    }
    ctx->pc = 0x1AE5C8u;
    {
        const bool branch_taken_0x1ae5c8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AE5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE5C8u;
        // 0x1ae5cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae5c8) {
            ctx->pc = 0x1AE67Cu;
            goto label_1ae67c;
        }
    }
    ctx->pc = 0x1AE5D0u;
label_1ae5d0:
    // 0x1ae5d0: 0x90820064  lbu         $v0, 0x64($a0)
    ctx->pc = 0x1ae5d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 100)));
label_1ae5d4:
    // 0x1ae5d4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1ae5d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1ae5d8:
    // 0x1ae5d8: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
label_1ae5dc:
    if (ctx->pc == 0x1AE5DCu) {
        ctx->pc = 0x1AE5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE5D8u;
        // 0x1ae5dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE5E0u;
        goto label_1ae5e0;
    }
    ctx->pc = 0x1AE5D8u;
    {
        const bool branch_taken_0x1ae5d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE5D8u;
        // 0x1ae5dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae5d8) {
            ctx->pc = 0x1AE67Cu;
            goto label_1ae67c;
        }
    }
    ctx->pc = 0x1AE5E0u;
label_1ae5e0:
    // 0x1ae5e0: 0x9083006a  lbu         $v1, 0x6A($a0)
    ctx->pc = 0x1ae5e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 106)));
label_1ae5e4:
    // 0x1ae5e4: 0x223102a  slt         $v0, $s1, $v1
    ctx->pc = 0x1ae5e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1ae5e8:
    // 0x1ae5e8: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_1ae5ec:
    if (ctx->pc == 0x1AE5ECu) {
        ctx->pc = 0x1AE5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE5E8u;
        // 0x1ae5ec: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE5F0u;
        goto label_1ae5f0;
    }
    ctx->pc = 0x1AE5E8u;
    {
        const bool branch_taken_0x1ae5e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE5E8u;
        // 0x1ae5ec: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae5e8) {
            ctx->pc = 0x1AE678u;
            goto label_1ae678;
        }
    }
    ctx->pc = 0x1AE5F0u;
label_1ae5f0:
    // 0x1ae5f0: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
label_1ae5f4:
    if (ctx->pc == 0x1AE5F4u) {
        ctx->pc = 0x1AE5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE5F0u;
        // 0x1ae5f4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE5F8u;
        goto label_1ae5f8;
    }
    ctx->pc = 0x1AE5F0u;
    {
        const bool branch_taken_0x1ae5f0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AE5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE5F0u;
        // 0x1ae5f4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae5f0) {
            ctx->pc = 0x1AE600u;
            goto label_1ae600;
        }
    }
    ctx->pc = 0x1AE5F8u;
label_1ae5f8:
    // 0x1ae5f8: 0x10000020  b           . + 4 + (0x20 << 2)
label_1ae5fc:
    if (ctx->pc == 0x1AE5FCu) {
        ctx->pc = 0x1AE5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE5F8u;
        // 0x1ae5fc: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE600u;
        goto label_1ae600;
    }
    ctx->pc = 0x1AE5F8u;
    {
        const bool branch_taken_0x1ae5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE5F8u;
        // 0x1ae5fc: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae5f8) {
            ctx->pc = 0x1AE67Cu;
            goto label_1ae67c;
        }
    }
    ctx->pc = 0x1AE600u;
label_1ae600:
    // 0x1ae600: 0x12020011  beq         $s0, $v0, . + 4 + (0x11 << 2)
label_1ae604:
    if (ctx->pc == 0x1AE604u) {
        ctx->pc = 0x1AE604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE600u;
        // 0x1ae604: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE608u;
        goto label_1ae608;
    }
    ctx->pc = 0x1AE600u;
    {
        const bool branch_taken_0x1ae600 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AE604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE600u;
        // 0x1ae604: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae600) {
            ctx->pc = 0x1AE648u;
            goto label_1ae648;
        }
    }
    ctx->pc = 0x1AE608u;
label_1ae608:
    // 0x1ae608: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1ae60c:
    if (ctx->pc == 0x1AE60Cu) {
        ctx->pc = 0x1AE60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE608u;
        // 0x1ae60c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE610u;
        goto label_1ae610;
    }
    ctx->pc = 0x1AE608u;
    {
        const bool branch_taken_0x1ae608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE608u;
        // 0x1ae60c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae608) {
            ctx->pc = 0x1AE620u;
            goto label_1ae620;
        }
    }
    ctx->pc = 0x1AE610u;
label_1ae610:
    // 0x1ae610: 0x12050009  beq         $s0, $a1, . + 4 + (0x9 << 2)
label_1ae614:
    if (ctx->pc == 0x1AE614u) {
        ctx->pc = 0x1AE614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE610u;
        // 0x1ae614: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE618u;
        goto label_1ae618;
    }
    ctx->pc = 0x1AE610u;
    {
        const bool branch_taken_0x1ae610 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x1AE614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE610u;
        // 0x1ae614: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae610) {
            ctx->pc = 0x1AE638u;
            goto label_1ae638;
        }
    }
    ctx->pc = 0x1AE618u;
label_1ae618:
    // 0x1ae618: 0x10000019  b           . + 4 + (0x19 << 2)
label_1ae61c:
    if (ctx->pc == 0x1AE61Cu) {
        ctx->pc = 0x1AE61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE618u;
        // 0x1ae61c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE620u;
        goto label_1ae620;
    }
    ctx->pc = 0x1AE618u;
    {
        const bool branch_taken_0x1ae618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE618u;
        // 0x1ae61c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae618) {
            ctx->pc = 0x1AE680u;
            goto label_1ae680;
        }
    }
    ctx->pc = 0x1AE620u;
label_1ae620:
    // 0x1ae620: 0x1202000d  beq         $s0, $v0, . + 4 + (0xD << 2)
label_1ae624:
    if (ctx->pc == 0x1AE624u) {
        ctx->pc = 0x1AE624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE620u;
        // 0x1ae624: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE628u;
        goto label_1ae628;
    }
    ctx->pc = 0x1AE620u;
    {
        const bool branch_taken_0x1ae620 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AE624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE620u;
        // 0x1ae624: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae620) {
            ctx->pc = 0x1AE658u;
            goto label_1ae658;
        }
    }
    ctx->pc = 0x1AE628u;
label_1ae628:
    // 0x1ae628: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
label_1ae62c:
    if (ctx->pc == 0x1AE62Cu) {
        ctx->pc = 0x1AE62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE628u;
        // 0x1ae62c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE630u;
        goto label_1ae630;
    }
    ctx->pc = 0x1AE628u;
    {
        const bool branch_taken_0x1ae628 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AE62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE628u;
        // 0x1ae62c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae628) {
            ctx->pc = 0x1AE668u;
            goto label_1ae668;
        }
    }
    ctx->pc = 0x1AE630u;
label_1ae630:
    // 0x1ae630: 0x10000013  b           . + 4 + (0x13 << 2)
label_1ae634:
    if (ctx->pc == 0x1AE634u) {
        ctx->pc = 0x1AE634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE630u;
        // 0x1ae634: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE638u;
        goto label_1ae638;
    }
    ctx->pc = 0x1AE630u;
    {
        const bool branch_taken_0x1ae630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE630u;
        // 0x1ae634: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae630) {
            ctx->pc = 0x1AE680u;
            goto label_1ae680;
        }
    }
    ctx->pc = 0x1AE638u;
label_1ae638:
    // 0x1ae638: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1ae638u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_1ae63c:
    // 0x1ae63c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1ae63cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1ae640:
    // 0x1ae640: 0x1000000e  b           . + 4 + (0xE << 2)
label_1ae644:
    if (ctx->pc == 0x1AE644u) {
        ctx->pc = 0x1AE644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE640u;
        // 0x1ae644: 0x90620030  lbu         $v0, 0x30($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE648u;
        goto label_1ae648;
    }
    ctx->pc = 0x1AE640u;
    {
        const bool branch_taken_0x1ae640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE640u;
        // 0x1ae644: 0x90620030  lbu         $v0, 0x30($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae640) {
            ctx->pc = 0x1AE67Cu;
            goto label_1ae67c;
        }
    }
    ctx->pc = 0x1AE648u;
label_1ae648:
    // 0x1ae648: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1ae648u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_1ae64c:
    // 0x1ae64c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1ae64cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1ae650:
    // 0x1ae650: 0x1000000a  b           . + 4 + (0xA << 2)
label_1ae654:
    if (ctx->pc == 0x1AE654u) {
        ctx->pc = 0x1AE654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE650u;
        // 0x1ae654: 0x90620031  lbu         $v0, 0x31($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 49)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE658u;
        goto label_1ae658;
    }
    ctx->pc = 0x1AE650u;
    {
        const bool branch_taken_0x1ae650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE650u;
        // 0x1ae654: 0x90620031  lbu         $v0, 0x31($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 49)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae650) {
            ctx->pc = 0x1AE67Cu;
            goto label_1ae67c;
        }
    }
    ctx->pc = 0x1AE658u;
label_1ae658:
    // 0x1ae658: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1ae658u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_1ae65c:
    // 0x1ae65c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1ae65cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1ae660:
    // 0x1ae660: 0x10000006  b           . + 4 + (0x6 << 2)
label_1ae664:
    if (ctx->pc == 0x1AE664u) {
        ctx->pc = 0x1AE664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE660u;
        // 0x1ae664: 0x90620032  lbu         $v0, 0x32($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 50)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE668u;
        goto label_1ae668;
    }
    ctx->pc = 0x1AE660u;
    {
        const bool branch_taken_0x1ae660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE660u;
        // 0x1ae664: 0x90620032  lbu         $v0, 0x32($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 50)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae660) {
            ctx->pc = 0x1AE67Cu;
            goto label_1ae67c;
        }
    }
    ctx->pc = 0x1AE668u;
label_1ae668:
    // 0x1ae668: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1ae668u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_1ae66c:
    // 0x1ae66c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1ae66cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1ae670:
    // 0x1ae670: 0x10000002  b           . + 4 + (0x2 << 2)
label_1ae674:
    if (ctx->pc == 0x1AE674u) {
        ctx->pc = 0x1AE674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE670u;
        // 0x1ae674: 0x90620033  lbu         $v0, 0x33($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 51)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE678u;
        goto label_1ae678;
    }
    ctx->pc = 0x1AE670u;
    {
        const bool branch_taken_0x1ae670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE670u;
        // 0x1ae674: 0x90620033  lbu         $v0, 0x33($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 51)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae670) {
            ctx->pc = 0x1AE67Cu;
            goto label_1ae67c;
        }
    }
    ctx->pc = 0x1AE678u;
label_1ae678:
    // 0x1ae678: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ae678u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ae67c:
    // 0x1ae67c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ae67cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ae680:
    // 0x1ae680: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1ae680u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ae684:
    // 0x1ae684: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ae684u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ae688:
    // 0x1ae688: 0x3e00008  jr          $ra
label_1ae68c:
    if (ctx->pc == 0x1AE68Cu) {
        ctx->pc = 0x1AE68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE688u;
        // 0x1ae68c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE690u;
        goto label_1ae690;
    }
    ctx->pc = 0x1AE688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE688u;
        // 0x1ae68c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE690u;
label_1ae690:
    // 0x1ae690: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1ae690u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ae694:
    // 0x1ae694: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x1ae694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_1ae698:
    // 0x1ae698: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1ae698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_1ae69c:
    // 0x1ae69c: 0x71031818  mult1       $v1, $t0, $v1
    ctx->pc = 0x1ae69cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1ae6a0:
    // 0x1ae6a0: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x1ae6a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1ae6a4:
    // 0x1ae6a4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ae6a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1ae6a8:
    // 0x1ae6a8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1ae6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1ae6ac:
    // 0x1ae6ac: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1ae6acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1ae6b0:
    // 0x1ae6b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ae6b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1ae6b4:
    // 0x1ae6b4: 0x24425cd0  addiu       $v0, $v0, 0x5CD0
    ctx->pc = 0x1ae6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23760));
label_1ae6b8:
    // 0x1ae6b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ae6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1ae6bc:
    // 0x1ae6bc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1ae6bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1ae6c0:
    // 0x1ae6c0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1ae6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1ae6c4:
    // 0x1ae6c4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1ae6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1ae6c8:
    // 0x1ae6c8: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1ae6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_1ae6cc:
    // 0x1ae6cc: 0x10600031  beqz        $v1, . + 4 + (0x31 << 2)
label_1ae6d0:
    if (ctx->pc == 0x1AE6D0u) {
        ctx->pc = 0x1AE6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE6CCu;
        // 0x1ae6d0: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE6D4u;
        goto label_1ae6d4;
    }
    ctx->pc = 0x1AE6CCu;
    {
        const bool branch_taken_0x1ae6cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE6CCu;
        // 0x1ae6d0: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae6cc) {
            ctx->pc = 0x1AE794u;
            goto label_1ae794;
        }
    }
    ctx->pc = 0x1AE6D4u;
label_1ae6d4:
    // 0x1ae6d4: 0xc06b8a8  jal         func_1AE2A0
label_1ae6d8:
    if (ctx->pc == 0x1AE6D8u) {
        ctx->pc = 0x1AE6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE6D4u;
        // 0x1ae6d8: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE6DCu;
        goto label_1ae6dc;
    }
    ctx->pc = 0x1AE6D4u;
    SET_GPR_U32(ctx, 31, 0x1AE6DCu);
    ctx->pc = 0x1AE6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE6D4u;
    // 0x1ae6d8: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE2A0u;
    goto label_1ae2a0;
    ctx->pc = 0x1AE6DCu;
label_1ae6dc:
    // 0x1ae6dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ae6dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ae6e0:
    // 0x1ae6e0: 0x90830072  lbu         $v1, 0x72($a0)
    ctx->pc = 0x1ae6e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 114)));
label_1ae6e4:
    // 0x1ae6e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ae6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ae6e8:
    // 0x1ae6e8: 0x1462002b  bne         $v1, $v0, . + 4 + (0x2B << 2)
label_1ae6ec:
    if (ctx->pc == 0x1AE6ECu) {
        ctx->pc = 0x1AE6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE6E8u;
        // 0x1ae6ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE6F0u;
        goto label_1ae6f0;
    }
    ctx->pc = 0x1AE6E8u;
    {
        const bool branch_taken_0x1ae6e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AE6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE6E8u;
        // 0x1ae6ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae6e8) {
            ctx->pc = 0x1AE798u;
            goto label_1ae798;
        }
    }
    ctx->pc = 0x1AE6F0u;
label_1ae6f0:
    // 0x1ae6f0: 0x90820064  lbu         $v0, 0x64($a0)
    ctx->pc = 0x1ae6f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 100)));
label_1ae6f4:
    // 0x1ae6f4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1ae6f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1ae6f8:
    // 0x1ae6f8: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
label_1ae6fc:
    if (ctx->pc == 0x1AE6FCu) {
        ctx->pc = 0x1AE6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE6F8u;
        // 0x1ae6fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE700u;
        goto label_1ae700;
    }
    ctx->pc = 0x1AE6F8u;
    {
        const bool branch_taken_0x1ae6f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE6F8u;
        // 0x1ae6fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae6f8) {
            ctx->pc = 0x1AE798u;
            goto label_1ae798;
        }
    }
    ctx->pc = 0x1AE700u;
label_1ae700:
    // 0x1ae700: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1ae700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ae704:
    // 0x1ae704: 0x16250003  bne         $s1, $a1, . + 4 + (0x3 << 2)
label_1ae708:
    if (ctx->pc == 0x1AE708u) {
        ctx->pc = 0x1AE708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE704u;
        // 0x1ae708: 0x9082006b  lbu         $v0, 0x6B($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 107)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE70Cu;
        goto label_1ae70c;
    }
    ctx->pc = 0x1AE704u;
    {
        const bool branch_taken_0x1ae704 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 5));
        ctx->pc = 0x1AE708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE704u;
        // 0x1ae708: 0x9082006b  lbu         $v0, 0x6B($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 107)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae704) {
            ctx->pc = 0x1AE714u;
            goto label_1ae714;
        }
    }
    ctx->pc = 0x1AE70Cu;
label_1ae70c:
    // 0x1ae70c: 0x10000023  b           . + 4 + (0x23 << 2)
label_1ae710:
    if (ctx->pc == 0x1AE710u) {
        ctx->pc = 0x1AE710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE70Cu;
        // 0x1ae710: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE714u;
        goto label_1ae714;
    }
    ctx->pc = 0x1AE70Cu;
    {
        const bool branch_taken_0x1ae70c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE70Cu;
        // 0x1ae710: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae70c) {
            ctx->pc = 0x1AE79Cu;
            goto label_1ae79c;
        }
    }
    ctx->pc = 0x1AE714u;
label_1ae714:
    // 0x1ae714: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1ae714u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1ae718:
    // 0x1ae718: 0x5040001f  beql        $v0, $zero, . + 4 + (0x1F << 2)
label_1ae71c:
    if (ctx->pc == 0x1AE71Cu) {
        ctx->pc = 0x1AE71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE718u;
        // 0x1ae71c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE720u;
        goto label_1ae720;
    }
    ctx->pc = 0x1AE718u;
    {
        const bool branch_taken_0x1ae718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae718) {
            ctx->pc = 0x1AE71Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AE718u;
            // 0x1ae71c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AE798u;
            goto label_1ae798;
        }
    }
    ctx->pc = 0x1AE720u;
label_1ae720:
    // 0x1ae720: 0x52000011  beql        $s0, $zero, . + 4 + (0x11 << 2)
label_1ae724:
    if (ctx->pc == 0x1AE724u) {
        ctx->pc = 0x1AE724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE720u;
        // 0x1ae724: 0x111880  sll         $v1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE728u;
        goto label_1ae728;
    }
    ctx->pc = 0x1AE720u;
    {
        const bool branch_taken_0x1ae720 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae720) {
            ctx->pc = 0x1AE724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AE720u;
            // 0x1ae724: 0x111880  sll         $v1, $s1, 2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AE768u;
            goto label_1ae768;
        }
    }
    ctx->pc = 0x1AE728u;
label_1ae728:
    // 0x1ae728: 0x1e000005  bgtz        $s0, . + 4 + (0x5 << 2)
label_1ae72c:
    if (ctx->pc == 0x1AE72Cu) {
        ctx->pc = 0x1AE730u;
        goto label_1ae730;
    }
    ctx->pc = 0x1AE728u;
    {
        const bool branch_taken_0x1ae728 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x1ae728) {
            ctx->pc = 0x1AE740u;
            goto label_1ae740;
        }
    }
    ctx->pc = 0x1AE730u;
label_1ae730:
    // 0x1ae730: 0x12050009  beq         $s0, $a1, . + 4 + (0x9 << 2)
label_1ae734:
    if (ctx->pc == 0x1AE734u) {
        ctx->pc = 0x1AE734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE730u;
        // 0x1ae734: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE738u;
        goto label_1ae738;
    }
    ctx->pc = 0x1AE730u;
    {
        const bool branch_taken_0x1ae730 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x1AE734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE730u;
        // 0x1ae734: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae730) {
            ctx->pc = 0x1AE758u;
            goto label_1ae758;
        }
    }
    ctx->pc = 0x1AE738u;
label_1ae738:
    // 0x1ae738: 0x10000018  b           . + 4 + (0x18 << 2)
label_1ae73c:
    if (ctx->pc == 0x1AE73Cu) {
        ctx->pc = 0x1AE73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE738u;
        // 0x1ae73c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE740u;
        goto label_1ae740;
    }
    ctx->pc = 0x1AE738u;
    {
        const bool branch_taken_0x1ae738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE738u;
        // 0x1ae73c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae738) {
            ctx->pc = 0x1AE79Cu;
            goto label_1ae79c;
        }
    }
    ctx->pc = 0x1AE740u;
label_1ae740:
    // 0x1ae740: 0x1203000c  beq         $s0, $v1, . + 4 + (0xC << 2)
label_1ae744:
    if (ctx->pc == 0x1AE744u) {
        ctx->pc = 0x1AE744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE740u;
        // 0x1ae744: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE748u;
        goto label_1ae748;
    }
    ctx->pc = 0x1AE740u;
    {
        const bool branch_taken_0x1ae740 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x1AE744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE740u;
        // 0x1ae744: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae740) {
            ctx->pc = 0x1AE774u;
            goto label_1ae774;
        }
    }
    ctx->pc = 0x1AE748u;
label_1ae748:
    // 0x1ae748: 0x1202000e  beq         $s0, $v0, . + 4 + (0xE << 2)
label_1ae74c:
    if (ctx->pc == 0x1AE74Cu) {
        ctx->pc = 0x1AE74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE748u;
        // 0x1ae74c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE750u;
        goto label_1ae750;
    }
    ctx->pc = 0x1AE748u;
    {
        const bool branch_taken_0x1ae748 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AE74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE748u;
        // 0x1ae74c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae748) {
            ctx->pc = 0x1AE784u;
            goto label_1ae784;
        }
    }
    ctx->pc = 0x1AE750u;
label_1ae750:
    // 0x1ae750: 0x10000012  b           . + 4 + (0x12 << 2)
label_1ae754:
    if (ctx->pc == 0x1AE754u) {
        ctx->pc = 0x1AE754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE750u;
        // 0x1ae754: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE758u;
        goto label_1ae758;
    }
    ctx->pc = 0x1AE750u;
    {
        const bool branch_taken_0x1ae750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE750u;
        // 0x1ae754: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae750) {
            ctx->pc = 0x1AE79Cu;
            goto label_1ae79c;
        }
    }
    ctx->pc = 0x1AE758u;
label_1ae758:
    // 0x1ae758: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1ae758u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_1ae75c:
    // 0x1ae75c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1ae75cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1ae760:
    // 0x1ae760: 0x1000000d  b           . + 4 + (0xD << 2)
label_1ae764:
    if (ctx->pc == 0x1AE764u) {
        ctx->pc = 0x1AE764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE760u;
        // 0x1ae764: 0x90620040  lbu         $v0, 0x40($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE768u;
        goto label_1ae768;
    }
    ctx->pc = 0x1AE760u;
    {
        const bool branch_taken_0x1ae760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE760u;
        // 0x1ae764: 0x90620040  lbu         $v0, 0x40($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae760) {
            ctx->pc = 0x1AE798u;
            goto label_1ae798;
        }
    }
    ctx->pc = 0x1AE768u;
label_1ae768:
    // 0x1ae768: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1ae768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1ae76c:
    // 0x1ae76c: 0x1000000a  b           . + 4 + (0xA << 2)
label_1ae770:
    if (ctx->pc == 0x1AE770u) {
        ctx->pc = 0x1AE770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE76Cu;
        // 0x1ae770: 0x90620041  lbu         $v0, 0x41($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 65)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE774u;
        goto label_1ae774;
    }
    ctx->pc = 0x1AE76Cu;
    {
        const bool branch_taken_0x1ae76c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE76Cu;
        // 0x1ae770: 0x90620041  lbu         $v0, 0x41($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 65)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae76c) {
            ctx->pc = 0x1AE798u;
            goto label_1ae798;
        }
    }
    ctx->pc = 0x1AE774u;
label_1ae774:
    // 0x1ae774: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1ae774u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_1ae778:
    // 0x1ae778: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1ae778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1ae77c:
    // 0x1ae77c: 0x10000006  b           . + 4 + (0x6 << 2)
label_1ae780:
    if (ctx->pc == 0x1AE780u) {
        ctx->pc = 0x1AE780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE77Cu;
        // 0x1ae780: 0x90620042  lbu         $v0, 0x42($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 66)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE784u;
        goto label_1ae784;
    }
    ctx->pc = 0x1AE77Cu;
    {
        const bool branch_taken_0x1ae77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE77Cu;
        // 0x1ae780: 0x90620042  lbu         $v0, 0x42($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 66)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae77c) {
            ctx->pc = 0x1AE798u;
            goto label_1ae798;
        }
    }
    ctx->pc = 0x1AE784u;
label_1ae784:
    // 0x1ae784: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1ae784u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_1ae788:
    // 0x1ae788: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1ae788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1ae78c:
    // 0x1ae78c: 0x10000002  b           . + 4 + (0x2 << 2)
label_1ae790:
    if (ctx->pc == 0x1AE790u) {
        ctx->pc = 0x1AE790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE78Cu;
        // 0x1ae790: 0x90620043  lbu         $v0, 0x43($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 67)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE794u;
        goto label_1ae794;
    }
    ctx->pc = 0x1AE78Cu;
    {
        const bool branch_taken_0x1ae78c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE78Cu;
        // 0x1ae790: 0x90620043  lbu         $v0, 0x43($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 67)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae78c) {
            ctx->pc = 0x1AE798u;
            goto label_1ae798;
        }
    }
    ctx->pc = 0x1AE794u;
label_1ae794:
    // 0x1ae794: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ae794u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ae798:
    // 0x1ae798: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ae798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ae79c:
    // 0x1ae79c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1ae79cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ae7a0:
    // 0x1ae7a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ae7a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ae7a4:
    // 0x1ae7a4: 0x3e00008  jr          $ra
label_1ae7a8:
    if (ctx->pc == 0x1AE7A8u) {
        ctx->pc = 0x1AE7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE7A4u;
        // 0x1ae7a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE7ACu;
        goto label_1ae7ac;
    }
    ctx->pc = 0x1AE7A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE7A4u;
        // 0x1ae7a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE7A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE7ACu;
label_1ae7ac:
    // 0x1ae7ac: 0x0  nop
    ctx->pc = 0x1ae7acu;
    // NOP
label_1ae7b0:
    // 0x1ae7b0: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1ae7b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ae7b4:
    // 0x1ae7b4: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x1ae7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_1ae7b8:
    // 0x1ae7b8: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1ae7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_1ae7bc:
    // 0x1ae7bc: 0x71031818  mult1       $v1, $t0, $v1
    ctx->pc = 0x1ae7bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1ae7c0:
    // 0x1ae7c0: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x1ae7c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1ae7c4:
    // 0x1ae7c4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ae7c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1ae7c8:
    // 0x1ae7c8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1ae7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1ae7cc:
    // 0x1ae7cc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1ae7ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1ae7d0:
    // 0x1ae7d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ae7d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1ae7d4:
    // 0x1ae7d4: 0x24425cd0  addiu       $v0, $v0, 0x5CD0
    ctx->pc = 0x1ae7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23760));
label_1ae7d8:
    // 0x1ae7d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ae7d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1ae7dc:
    // 0x1ae7dc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1ae7dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1ae7e0:
    // 0x1ae7e0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1ae7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1ae7e4:
    // 0x1ae7e4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1ae7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1ae7e8:
    // 0x1ae7e8: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1ae7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_1ae7ec:
    // 0x1ae7ec: 0x10600038  beqz        $v1, . + 4 + (0x38 << 2)
label_1ae7f0:
    if (ctx->pc == 0x1AE7F0u) {
        ctx->pc = 0x1AE7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE7ECu;
        // 0x1ae7f0: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE7F4u;
        goto label_1ae7f4;
    }
    ctx->pc = 0x1AE7ECu;
    {
        const bool branch_taken_0x1ae7ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE7ECu;
        // 0x1ae7f0: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae7ec) {
            ctx->pc = 0x1AE8D0u;
            { ctx->pc = 0x1ae8d0; return; }
        }
    }
    ctx->pc = 0x1AE7F4u;
label_1ae7f4:
    // 0x1ae7f4: 0xc06b8a8  jal         func_1AE2A0
label_1ae7f8:
    if (ctx->pc == 0x1AE7F8u) {
        ctx->pc = 0x1AE7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE7F4u;
        // 0x1ae7f8: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE7FCu;
        goto label_1ae7fc;
    }
    ctx->pc = 0x1AE7F4u;
    SET_GPR_U32(ctx, 31, 0x1AE7FCu);
    ctx->pc = 0x1AE7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE7F4u;
    // 0x1ae7f8: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE2A0u;
    goto label_1ae2a0;
    ctx->pc = 0x1AE7FCu;
label_1ae7fc:
    // 0x1ae7fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ae7fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ae800:
    // 0x1ae800: 0x90830072  lbu         $v1, 0x72($a0)
    ctx->pc = 0x1ae800u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 114)));
label_1ae804:
    // 0x1ae804: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ae804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ae808:
    // 0x1ae808: 0x14620032  bne         $v1, $v0, . + 4 + (0x32 << 2)
label_1ae80c:
    if (ctx->pc == 0x1AE80Cu) {
        ctx->pc = 0x1AE80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE808u;
        // 0x1ae80c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE810u;
        goto label_1ae810;
    }
    ctx->pc = 0x1AE808u;
    {
        const bool branch_taken_0x1ae808 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AE80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE808u;
        // 0x1ae80c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae808) {
            ctx->pc = 0x1AE8D4u;
            { ctx->pc = 0x1ae8d4; return; }
        }
    }
    ctx->pc = 0x1AE810u;
label_1ae810:
    // 0x1ae810: 0x90820071  lbu         $v0, 0x71($a0)
    ctx->pc = 0x1ae810u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 113)));
label_1ae814:
    // 0x1ae814: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1ae814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ae818:
    // 0x1ae818: 0x1045002e  beq         $v0, $a1, . + 4 + (0x2E << 2)
label_1ae81c:
    if (ctx->pc == 0x1AE81Cu) {
        ctx->pc = 0x1AE81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE818u;
        // 0x1ae81c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE820u;
        goto label_1ae820;
    }
    ctx->pc = 0x1AE818u;
    {
        const bool branch_taken_0x1ae818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1AE81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE818u;
        // 0x1ae81c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae818) {
            ctx->pc = 0x1AE8D4u;
            { ctx->pc = 0x1ae8d4; return; }
        }
    }
    ctx->pc = 0x1AE820u;
label_1ae820:
    // 0x1ae820: 0x12050013  beq         $s0, $a1, . + 4 + (0x13 << 2)
label_1ae824:
    if (ctx->pc == 0x1AE824u) {
        ctx->pc = 0x1AE824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE820u;
        // 0x1ae824: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE828u;
        goto label_1ae828;
    }
    ctx->pc = 0x1AE820u;
    {
        const bool branch_taken_0x1ae820 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x1AE824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE820u;
        // 0x1ae824: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae820) {
            ctx->pc = 0x1AE870u;
            goto label_1ae870;
        }
    }
    ctx->pc = 0x1AE828u;
label_1ae828:
    // 0x1ae828: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1ae82c:
    if (ctx->pc == 0x1AE82Cu) {
        ctx->pc = 0x1AE82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE828u;
        // 0x1ae82c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE830u;
        goto label_1ae830;
    }
    ctx->pc = 0x1AE828u;
    {
        const bool branch_taken_0x1ae828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE828u;
        // 0x1ae82c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae828) {
            ctx->pc = 0x1AE840u;
            goto label_1ae840;
        }
    }
    ctx->pc = 0x1AE830u;
label_1ae830:
    // 0x1ae830: 0x12030009  beq         $s0, $v1, . + 4 + (0x9 << 2)
label_1ae834:
    if (ctx->pc == 0x1AE834u) {
        ctx->pc = 0x1AE834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE830u;
        // 0x1ae834: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE838u;
        goto label_1ae838;
    }
    ctx->pc = 0x1AE830u;
    {
        const bool branch_taken_0x1ae830 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x1AE834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE830u;
        // 0x1ae834: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae830) {
            ctx->pc = 0x1AE858u;
            goto label_1ae858;
        }
    }
    ctx->pc = 0x1AE838u;
label_1ae838:
    // 0x1ae838: 0x10000027  b           . + 4 + (0x27 << 2)
label_1ae83c:
    if (ctx->pc == 0x1AE83Cu) {
        ctx->pc = 0x1AE83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE838u;
        // 0x1ae83c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE840u;
        goto label_1ae840;
    }
    ctx->pc = 0x1AE838u;
    {
        const bool branch_taken_0x1ae838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE838u;
        // 0x1ae83c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae838) {
            ctx->pc = 0x1AE8D8u;
            { ctx->pc = 0x1ae8d8; return; }
        }
    }
    ctx->pc = 0x1AE840u;
label_1ae840:
    // 0x1ae840: 0x12020011  beq         $s0, $v0, . + 4 + (0x11 << 2)
label_1ae844:
    if (ctx->pc == 0x1AE844u) {
        ctx->pc = 0x1AE844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE840u;
        // 0x1ae844: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE848u;
        goto label_1ae848;
    }
    ctx->pc = 0x1AE840u;
    {
        const bool branch_taken_0x1ae840 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AE844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE840u;
        // 0x1ae844: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae840) {
            ctx->pc = 0x1AE888u;
            goto label_1ae888;
        }
    }
    ctx->pc = 0x1AE848u;
label_1ae848:
    // 0x1ae848: 0x12020014  beq         $s0, $v0, . + 4 + (0x14 << 2)
label_1ae84c:
    if (ctx->pc == 0x1AE84Cu) {
        ctx->pc = 0x1AE84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE848u;
        // 0x1ae84c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE850u;
        goto label_1ae850;
    }
    ctx->pc = 0x1AE848u;
    {
        const bool branch_taken_0x1ae848 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AE84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE848u;
        // 0x1ae84c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae848) {
            ctx->pc = 0x1AE89Cu;
            goto label_1ae89c;
        }
    }
    ctx->pc = 0x1AE850u;
label_1ae850:
    // 0x1ae850: 0x10000021  b           . + 4 + (0x21 << 2)
label_1ae854:
    if (ctx->pc == 0x1AE854u) {
        ctx->pc = 0x1AE854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE850u;
        // 0x1ae854: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE858u;
        goto label_1ae858;
    }
    ctx->pc = 0x1AE850u;
    {
        const bool branch_taken_0x1ae850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE850u;
        // 0x1ae854: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae850) {
            ctx->pc = 0x1AE8D8u;
            { ctx->pc = 0x1ae8d8; return; }
        }
    }
    ctx->pc = 0x1AE858u;
label_1ae858:
    // 0x1ae858: 0x90830065  lbu         $v1, 0x65($a0)
    ctx->pc = 0x1ae858u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 101)));
label_1ae85c:
    // 0x1ae85c: 0x240200f3  addiu       $v0, $zero, 0xF3
    ctx->pc = 0x1ae85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 243));
label_1ae860:
    // 0x1ae860: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
label_1ae864:
    if (ctx->pc == 0x1AE864u) {
        ctx->pc = 0x1AE864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE860u;
        // 0x1ae864: 0x31102  srl         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE868u;
        goto label_1ae868;
    }
    ctx->pc = 0x1AE860u;
    {
        const bool branch_taken_0x1ae860 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AE864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE860u;
        // 0x1ae864: 0x31102  srl         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae860) {
            ctx->pc = 0x1AE8D0u;
            { ctx->pc = 0x1ae8d0; return; }
        }
    }
    ctx->pc = 0x1AE868u;
label_1ae868:
    // 0x1ae868: 0x1000001b  b           . + 4 + (0x1B << 2)
label_1ae86c:
    if (ctx->pc == 0x1AE86Cu) {
        ctx->pc = 0x1AE86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE868u;
        // 0x1ae86c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE870u;
        goto label_1ae870;
    }
    ctx->pc = 0x1AE868u;
    {
        const bool branch_taken_0x1ae868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE868u;
        // 0x1ae86c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae868) {
            ctx->pc = 0x1AE8D8u;
            { ctx->pc = 0x1ae8d8; return; }
        }
    }
    ctx->pc = 0x1AE870u;
label_1ae870:
    // 0x1ae870: 0x90820064  lbu         $v0, 0x64($a0)
    ctx->pc = 0x1ae870u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 100)));
label_1ae874:
    // 0x1ae874: 0x10430017  beq         $v0, $v1, . + 4 + (0x17 << 2)
label_1ae878:
    if (ctx->pc == 0x1AE878u) {
        ctx->pc = 0x1AE878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE874u;
        // 0x1ae878: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE87Cu;
        goto label_1ae87c;
    }
    ctx->pc = 0x1AE874u;
    {
        const bool branch_taken_0x1ae874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1AE878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE874u;
        // 0x1ae878: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae874) {
            ctx->pc = 0x1AE8D4u;
            { ctx->pc = 0x1ae8d4; return; }
        }
    }
    ctx->pc = 0x1AE87Cu;
label_1ae87c:
    // 0x1ae87c: 0x90830069  lbu         $v1, 0x69($a0)
    ctx->pc = 0x1ae87cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 105)));
label_1ae880:
    // 0x1ae880: 0x10000010  b           . + 4 + (0x10 << 2)
label_1ae884:
    if (ctx->pc == 0x1AE884u) {
        ctx->pc = 0x1AE884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE880u;
        // 0x1ae884: 0x31840  sll         $v1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE888u;
        goto label_1ae888;
    }
    ctx->pc = 0x1AE880u;
    {
        const bool branch_taken_0x1ae880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE880u;
        // 0x1ae884: 0x31840  sll         $v1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae880) {
            ctx->pc = 0x1AE8C4u;
            { ctx->pc = 0x1ae8c4; return; }
        }
    }
    ctx->pc = 0x1AE888u;
label_1ae888:
    // 0x1ae888: 0x90820064  lbu         $v0, 0x64($a0)
    ctx->pc = 0x1ae888u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 100)));
label_1ae88c:
    // 0x1ae88c: 0x10430011  beq         $v0, $v1, . + 4 + (0x11 << 2)
label_1ae890:
    if (ctx->pc == 0x1AE890u) {
        ctx->pc = 0x1AE890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE88Cu;
        // 0x1ae890: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE894u;
        goto label_1ae894;
    }
    ctx->pc = 0x1AE88Cu;
    {
        const bool branch_taken_0x1ae88c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1AE890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE88Cu;
        // 0x1ae890: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae88c) {
            ctx->pc = 0x1AE8D4u;
            { ctx->pc = 0x1ae8d4; return; }
        }
    }
    ctx->pc = 0x1AE894u;
label_1ae894:
    // 0x1ae894: 0x1000000f  b           . + 4 + (0xF << 2)
label_1ae898:
    if (ctx->pc == 0x1AE898u) {
        ctx->pc = 0x1AE898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE894u;
        // 0x1ae898: 0x90820069  lbu         $v0, 0x69($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 105)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE89Cu;
        goto label_1ae89c;
    }
    ctx->pc = 0x1AE894u;
    {
        const bool branch_taken_0x1ae894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE894u;
        // 0x1ae898: 0x90820069  lbu         $v0, 0x69($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 105)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae894) {
            ctx->pc = 0x1AE8D4u;
            { ctx->pc = 0x1ae8d4; return; }
        }
    }
    ctx->pc = 0x1AE89Cu;
label_1ae89c:
    // 0x1ae89c: 0x90820064  lbu         $v0, 0x64($a0)
    ctx->pc = 0x1ae89cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 100)));
label_1ae8a0:
    // 0x1ae8a0: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
label_1ae8a4:
    if (ctx->pc == 0x1AE8A4u) {
        ctx->pc = 0x1AE8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE8A0u;
        // 0x1ae8a4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE8A8u;
        goto label_1ae8a8;
    }
    ctx->pc = 0x1AE8A0u;
    {
        const bool branch_taken_0x1ae8a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1AE8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE8A0u;
        // 0x1ae8a4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae8a0) {
            ctx->pc = 0x1AE8D0u;
            { ctx->pc = 0x1ae8d0; return; }
        }
    }
    ctx->pc = 0x1AE8A8u;
label_1ae8a8:
    // 0x1ae8a8: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
label_1ae8ac:
    if (ctx->pc == 0x1AE8ACu) {
        ctx->pc = 0x1AE8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE8A8u;
        // 0x1ae8ac: 0x90820068  lbu         $v0, 0x68($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE8B0u;
        goto label_1ae8b0;
    }
    ctx->pc = 0x1AE8A8u;
    {
        const bool branch_taken_0x1ae8a8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AE8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE8A8u;
        // 0x1ae8ac: 0x90820068  lbu         $v0, 0x68($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae8a8) {
            ctx->pc = 0x1AE8B8u;
            { ctx->pc = 0x1ae8b8; return; }
        }
    }
    ctx->pc = 0x1AE8B0u;
label_1ae8b0:
    // 0x1ae8b0: 0x10000009  b           . + 4 + (0x9 << 2)
label_1ae8b4:
    if (ctx->pc == 0x1AE8B4u) {
        ctx->pc = 0x1AE8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE8B0u;
        // 0x1ae8b4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE8B8u;
        { ctx->pc = 0x1ae8b8; return; }
    }
    ctx->pc = 0x1AE8B0u;
    {
        const bool branch_taken_0x1ae8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE8B0u;
        // 0x1ae8b4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae8b0) {
            ctx->pc = 0x1AE8D8u;
            { ctx->pc = 0x1ae8d8; return; }
        }
    }
    ctx->pc = 0x1AE8B8u;
    ctx->pc = 0x1ae8b8u;
    return;
}

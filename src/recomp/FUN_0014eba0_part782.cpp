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


void FUN_0014eba0_part782(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2cc130u: goto label_2cc130;
        case 0x2cc134u: goto label_2cc134;
        case 0x2cc138u: goto label_2cc138;
        case 0x2cc13cu: goto label_2cc13c;
        case 0x2cc140u: goto label_2cc140;
        case 0x2cc144u: goto label_2cc144;
        case 0x2cc148u: goto label_2cc148;
        case 0x2cc14cu: goto label_2cc14c;
        case 0x2cc150u: goto label_2cc150;
        case 0x2cc154u: goto label_2cc154;
        case 0x2cc158u: goto label_2cc158;
        case 0x2cc15cu: goto label_2cc15c;
        case 0x2cc160u: goto label_2cc160;
        case 0x2cc164u: goto label_2cc164;
        case 0x2cc168u: goto label_2cc168;
        case 0x2cc16cu: goto label_2cc16c;
        case 0x2cc170u: goto label_2cc170;
        case 0x2cc174u: goto label_2cc174;
        case 0x2cc178u: goto label_2cc178;
        case 0x2cc17cu: goto label_2cc17c;
        case 0x2cc180u: goto label_2cc180;
        case 0x2cc184u: goto label_2cc184;
        case 0x2cc188u: goto label_2cc188;
        case 0x2cc18cu: goto label_2cc18c;
        case 0x2cc190u: goto label_2cc190;
        case 0x2cc194u: goto label_2cc194;
        case 0x2cc198u: goto label_2cc198;
        case 0x2cc19cu: goto label_2cc19c;
        case 0x2cc1a0u: goto label_2cc1a0;
        case 0x2cc1a4u: goto label_2cc1a4;
        case 0x2cc1a8u: goto label_2cc1a8;
        case 0x2cc1acu: goto label_2cc1ac;
        case 0x2cc1b0u: goto label_2cc1b0;
        case 0x2cc1b4u: goto label_2cc1b4;
        case 0x2cc1b8u: goto label_2cc1b8;
        case 0x2cc1bcu: goto label_2cc1bc;
        case 0x2cc1c0u: goto label_2cc1c0;
        case 0x2cc1c4u: goto label_2cc1c4;
        case 0x2cc1c8u: goto label_2cc1c8;
        case 0x2cc1ccu: goto label_2cc1cc;
        case 0x2cc1d0u: goto label_2cc1d0;
        case 0x2cc1d4u: goto label_2cc1d4;
        case 0x2cc1d8u: goto label_2cc1d8;
        case 0x2cc1dcu: goto label_2cc1dc;
        case 0x2cc1e0u: goto label_2cc1e0;
        case 0x2cc1e4u: goto label_2cc1e4;
        case 0x2cc1e8u: goto label_2cc1e8;
        case 0x2cc1ecu: goto label_2cc1ec;
        case 0x2cc1f0u: goto label_2cc1f0;
        case 0x2cc1f4u: goto label_2cc1f4;
        case 0x2cc1f8u: goto label_2cc1f8;
        case 0x2cc1fcu: goto label_2cc1fc;
        case 0x2cc200u: goto label_2cc200;
        case 0x2cc204u: goto label_2cc204;
        case 0x2cc208u: goto label_2cc208;
        case 0x2cc20cu: goto label_2cc20c;
        case 0x2cc210u: goto label_2cc210;
        case 0x2cc214u: goto label_2cc214;
        case 0x2cc218u: goto label_2cc218;
        case 0x2cc21cu: goto label_2cc21c;
        case 0x2cc220u: goto label_2cc220;
        case 0x2cc224u: goto label_2cc224;
        case 0x2cc228u: goto label_2cc228;
        case 0x2cc22cu: goto label_2cc22c;
        case 0x2cc230u: goto label_2cc230;
        case 0x2cc234u: goto label_2cc234;
        case 0x2cc238u: goto label_2cc238;
        case 0x2cc23cu: goto label_2cc23c;
        case 0x2cc240u: goto label_2cc240;
        case 0x2cc244u: goto label_2cc244;
        case 0x2cc248u: goto label_2cc248;
        case 0x2cc24cu: goto label_2cc24c;
        case 0x2cc250u: goto label_2cc250;
        case 0x2cc254u: goto label_2cc254;
        case 0x2cc258u: goto label_2cc258;
        case 0x2cc25cu: goto label_2cc25c;
        case 0x2cc260u: goto label_2cc260;
        case 0x2cc264u: goto label_2cc264;
        case 0x2cc268u: goto label_2cc268;
        case 0x2cc26cu: goto label_2cc26c;
        case 0x2cc270u: goto label_2cc270;
        case 0x2cc274u: goto label_2cc274;
        case 0x2cc278u: goto label_2cc278;
        case 0x2cc27cu: goto label_2cc27c;
        case 0x2cc280u: goto label_2cc280;
        case 0x2cc284u: goto label_2cc284;
        case 0x2cc288u: goto label_2cc288;
        case 0x2cc28cu: goto label_2cc28c;
        case 0x2cc290u: goto label_2cc290;
        case 0x2cc294u: goto label_2cc294;
        case 0x2cc298u: goto label_2cc298;
        case 0x2cc29cu: goto label_2cc29c;
        case 0x2cc2a0u: goto label_2cc2a0;
        case 0x2cc2a4u: goto label_2cc2a4;
        case 0x2cc2a8u: goto label_2cc2a8;
        case 0x2cc2acu: goto label_2cc2ac;
        case 0x2cc2b0u: goto label_2cc2b0;
        case 0x2cc2b4u: goto label_2cc2b4;
        case 0x2cc2b8u: goto label_2cc2b8;
        case 0x2cc2bcu: goto label_2cc2bc;
        case 0x2cc2c0u: goto label_2cc2c0;
        case 0x2cc2c4u: goto label_2cc2c4;
        case 0x2cc2c8u: goto label_2cc2c8;
        case 0x2cc2ccu: goto label_2cc2cc;
        case 0x2cc2d0u: goto label_2cc2d0;
        case 0x2cc2d4u: goto label_2cc2d4;
        case 0x2cc2d8u: goto label_2cc2d8;
        case 0x2cc2dcu: goto label_2cc2dc;
        case 0x2cc2e0u: goto label_2cc2e0;
        case 0x2cc2e4u: goto label_2cc2e4;
        case 0x2cc2e8u: goto label_2cc2e8;
        case 0x2cc2ecu: goto label_2cc2ec;
        case 0x2cc2f0u: goto label_2cc2f0;
        case 0x2cc2f4u: goto label_2cc2f4;
        case 0x2cc2f8u: goto label_2cc2f8;
        case 0x2cc2fcu: goto label_2cc2fc;
        case 0x2cc300u: goto label_2cc300;
        case 0x2cc304u: goto label_2cc304;
        case 0x2cc308u: goto label_2cc308;
        case 0x2cc30cu: goto label_2cc30c;
        case 0x2cc310u: goto label_2cc310;
        case 0x2cc314u: goto label_2cc314;
        case 0x2cc318u: goto label_2cc318;
        case 0x2cc31cu: goto label_2cc31c;
        case 0x2cc320u: goto label_2cc320;
        case 0x2cc324u: goto label_2cc324;
        case 0x2cc328u: goto label_2cc328;
        case 0x2cc32cu: goto label_2cc32c;
        case 0x2cc330u: goto label_2cc330;
        case 0x2cc334u: goto label_2cc334;
        case 0x2cc338u: goto label_2cc338;
        case 0x2cc33cu: goto label_2cc33c;
        case 0x2cc340u: goto label_2cc340;
        case 0x2cc344u: goto label_2cc344;
        case 0x2cc348u: goto label_2cc348;
        case 0x2cc34cu: goto label_2cc34c;
        case 0x2cc350u: goto label_2cc350;
        case 0x2cc354u: goto label_2cc354;
        case 0x2cc358u: goto label_2cc358;
        case 0x2cc35cu: goto label_2cc35c;
        case 0x2cc360u: goto label_2cc360;
        case 0x2cc364u: goto label_2cc364;
        case 0x2cc368u: goto label_2cc368;
        case 0x2cc36cu: goto label_2cc36c;
        case 0x2cc370u: goto label_2cc370;
        case 0x2cc374u: goto label_2cc374;
        case 0x2cc378u: goto label_2cc378;
        case 0x2cc37cu: goto label_2cc37c;
        case 0x2cc380u: goto label_2cc380;
        case 0x2cc384u: goto label_2cc384;
        case 0x2cc388u: goto label_2cc388;
        case 0x2cc38cu: goto label_2cc38c;
        case 0x2cc390u: goto label_2cc390;
        case 0x2cc394u: goto label_2cc394;
        case 0x2cc398u: goto label_2cc398;
        case 0x2cc39cu: goto label_2cc39c;
        case 0x2cc3a0u: goto label_2cc3a0;
        case 0x2cc3a4u: goto label_2cc3a4;
        case 0x2cc3a8u: goto label_2cc3a8;
        case 0x2cc3acu: goto label_2cc3ac;
        case 0x2cc3b0u: goto label_2cc3b0;
        case 0x2cc3b4u: goto label_2cc3b4;
        case 0x2cc3b8u: goto label_2cc3b8;
        case 0x2cc3bcu: goto label_2cc3bc;
        case 0x2cc3c0u: goto label_2cc3c0;
        case 0x2cc3c4u: goto label_2cc3c4;
        case 0x2cc3c8u: goto label_2cc3c8;
        case 0x2cc3ccu: goto label_2cc3cc;
        case 0x2cc3d0u: goto label_2cc3d0;
        case 0x2cc3d4u: goto label_2cc3d4;
        case 0x2cc3d8u: goto label_2cc3d8;
        case 0x2cc3dcu: goto label_2cc3dc;
        case 0x2cc3e0u: goto label_2cc3e0;
        case 0x2cc3e4u: goto label_2cc3e4;
        case 0x2cc3e8u: goto label_2cc3e8;
        case 0x2cc3ecu: goto label_2cc3ec;
        case 0x2cc3f0u: goto label_2cc3f0;
        case 0x2cc3f4u: goto label_2cc3f4;
        case 0x2cc3f8u: goto label_2cc3f8;
        case 0x2cc3fcu: goto label_2cc3fc;
        case 0x2cc400u: goto label_2cc400;
        case 0x2cc404u: goto label_2cc404;
        case 0x2cc408u: goto label_2cc408;
        case 0x2cc40cu: goto label_2cc40c;
        case 0x2cc410u: goto label_2cc410;
        case 0x2cc414u: goto label_2cc414;
        case 0x2cc418u: goto label_2cc418;
        case 0x2cc41cu: goto label_2cc41c;
        case 0x2cc420u: goto label_2cc420;
        case 0x2cc424u: goto label_2cc424;
        case 0x2cc428u: goto label_2cc428;
        case 0x2cc42cu: goto label_2cc42c;
        case 0x2cc430u: goto label_2cc430;
        case 0x2cc434u: goto label_2cc434;
        case 0x2cc438u: goto label_2cc438;
        case 0x2cc43cu: goto label_2cc43c;
        case 0x2cc440u: goto label_2cc440;
        case 0x2cc444u: goto label_2cc444;
        case 0x2cc448u: goto label_2cc448;
        case 0x2cc44cu: goto label_2cc44c;
        case 0x2cc450u: goto label_2cc450;
        case 0x2cc454u: goto label_2cc454;
        case 0x2cc458u: goto label_2cc458;
        case 0x2cc45cu: goto label_2cc45c;
        case 0x2cc460u: goto label_2cc460;
        case 0x2cc464u: goto label_2cc464;
        case 0x2cc468u: goto label_2cc468;
        case 0x2cc46cu: goto label_2cc46c;
        case 0x2cc470u: goto label_2cc470;
        case 0x2cc474u: goto label_2cc474;
        case 0x2cc478u: goto label_2cc478;
        case 0x2cc47cu: goto label_2cc47c;
        case 0x2cc480u: goto label_2cc480;
        case 0x2cc484u: goto label_2cc484;
        case 0x2cc488u: goto label_2cc488;
        case 0x2cc48cu: goto label_2cc48c;
        case 0x2cc490u: goto label_2cc490;
        case 0x2cc494u: goto label_2cc494;
        case 0x2cc498u: goto label_2cc498;
        case 0x2cc49cu: goto label_2cc49c;
        case 0x2cc4a0u: goto label_2cc4a0;
        case 0x2cc4a4u: goto label_2cc4a4;
        case 0x2cc4a8u: goto label_2cc4a8;
        case 0x2cc4acu: goto label_2cc4ac;
        case 0x2cc4b0u: goto label_2cc4b0;
        case 0x2cc4b4u: goto label_2cc4b4;
        case 0x2cc4b8u: goto label_2cc4b8;
        case 0x2cc4bcu: goto label_2cc4bc;
        case 0x2cc4c0u: goto label_2cc4c0;
        case 0x2cc4c4u: goto label_2cc4c4;
        case 0x2cc4c8u: goto label_2cc4c8;
        case 0x2cc4ccu: goto label_2cc4cc;
        case 0x2cc4d0u: goto label_2cc4d0;
        case 0x2cc4d4u: goto label_2cc4d4;
        case 0x2cc4d8u: goto label_2cc4d8;
        case 0x2cc4dcu: goto label_2cc4dc;
        case 0x2cc4e0u: goto label_2cc4e0;
        case 0x2cc4e4u: goto label_2cc4e4;
        case 0x2cc4e8u: goto label_2cc4e8;
        case 0x2cc4ecu: goto label_2cc4ec;
        case 0x2cc4f0u: goto label_2cc4f0;
        case 0x2cc4f4u: goto label_2cc4f4;
        case 0x2cc4f8u: goto label_2cc4f8;
        case 0x2cc4fcu: goto label_2cc4fc;
        case 0x2cc500u: goto label_2cc500;
        case 0x2cc504u: goto label_2cc504;
        case 0x2cc508u: goto label_2cc508;
        case 0x2cc50cu: goto label_2cc50c;
        case 0x2cc510u: goto label_2cc510;
        case 0x2cc514u: goto label_2cc514;
        case 0x2cc518u: goto label_2cc518;
        case 0x2cc51cu: goto label_2cc51c;
        case 0x2cc520u: goto label_2cc520;
        case 0x2cc524u: goto label_2cc524;
        case 0x2cc528u: goto label_2cc528;
        case 0x2cc52cu: goto label_2cc52c;
        case 0x2cc530u: goto label_2cc530;
        case 0x2cc534u: goto label_2cc534;
        case 0x2cc538u: goto label_2cc538;
        case 0x2cc53cu: goto label_2cc53c;
        case 0x2cc540u: goto label_2cc540;
        case 0x2cc544u: goto label_2cc544;
        case 0x2cc548u: goto label_2cc548;
        case 0x2cc54cu: goto label_2cc54c;
        case 0x2cc550u: goto label_2cc550;
        case 0x2cc554u: goto label_2cc554;
        case 0x2cc558u: goto label_2cc558;
        case 0x2cc55cu: goto label_2cc55c;
        case 0x2cc560u: goto label_2cc560;
        case 0x2cc564u: goto label_2cc564;
        case 0x2cc568u: goto label_2cc568;
        case 0x2cc56cu: goto label_2cc56c;
        case 0x2cc570u: goto label_2cc570;
        case 0x2cc574u: goto label_2cc574;
        case 0x2cc578u: goto label_2cc578;
        case 0x2cc57cu: goto label_2cc57c;
        case 0x2cc580u: goto label_2cc580;
        case 0x2cc584u: goto label_2cc584;
        case 0x2cc588u: goto label_2cc588;
        case 0x2cc58cu: goto label_2cc58c;
        case 0x2cc590u: goto label_2cc590;
        case 0x2cc594u: goto label_2cc594;
        case 0x2cc598u: goto label_2cc598;
        case 0x2cc59cu: goto label_2cc59c;
        case 0x2cc5a0u: goto label_2cc5a0;
        case 0x2cc5a4u: goto label_2cc5a4;
        case 0x2cc5a8u: goto label_2cc5a8;
        case 0x2cc5acu: goto label_2cc5ac;
        case 0x2cc5b0u: goto label_2cc5b0;
        case 0x2cc5b4u: goto label_2cc5b4;
        case 0x2cc5b8u: goto label_2cc5b8;
        case 0x2cc5bcu: goto label_2cc5bc;
        case 0x2cc5c0u: goto label_2cc5c0;
        case 0x2cc5c4u: goto label_2cc5c4;
        case 0x2cc5c8u: goto label_2cc5c8;
        case 0x2cc5ccu: goto label_2cc5cc;
        case 0x2cc5d0u: goto label_2cc5d0;
        case 0x2cc5d4u: goto label_2cc5d4;
        case 0x2cc5d8u: goto label_2cc5d8;
        case 0x2cc5dcu: goto label_2cc5dc;
        case 0x2cc5e0u: goto label_2cc5e0;
        case 0x2cc5e4u: goto label_2cc5e4;
        case 0x2cc5e8u: goto label_2cc5e8;
        case 0x2cc5ecu: goto label_2cc5ec;
        case 0x2cc5f0u: goto label_2cc5f0;
        case 0x2cc5f4u: goto label_2cc5f4;
        case 0x2cc5f8u: goto label_2cc5f8;
        case 0x2cc5fcu: goto label_2cc5fc;
        case 0x2cc600u: goto label_2cc600;
        case 0x2cc604u: goto label_2cc604;
        case 0x2cc608u: goto label_2cc608;
        case 0x2cc60cu: goto label_2cc60c;
        case 0x2cc610u: goto label_2cc610;
        case 0x2cc614u: goto label_2cc614;
        case 0x2cc618u: goto label_2cc618;
        case 0x2cc61cu: goto label_2cc61c;
        case 0x2cc620u: goto label_2cc620;
        case 0x2cc624u: goto label_2cc624;
        case 0x2cc628u: goto label_2cc628;
        case 0x2cc62cu: goto label_2cc62c;
        case 0x2cc630u: goto label_2cc630;
        case 0x2cc634u: goto label_2cc634;
        case 0x2cc638u: goto label_2cc638;
        case 0x2cc63cu: goto label_2cc63c;
        case 0x2cc640u: goto label_2cc640;
        case 0x2cc644u: goto label_2cc644;
        case 0x2cc648u: goto label_2cc648;
        case 0x2cc64cu: goto label_2cc64c;
        case 0x2cc650u: goto label_2cc650;
        case 0x2cc654u: goto label_2cc654;
        case 0x2cc658u: goto label_2cc658;
        case 0x2cc65cu: goto label_2cc65c;
        case 0x2cc660u: goto label_2cc660;
        case 0x2cc664u: goto label_2cc664;
        case 0x2cc668u: goto label_2cc668;
        case 0x2cc66cu: goto label_2cc66c;
        case 0x2cc670u: goto label_2cc670;
        case 0x2cc674u: goto label_2cc674;
        case 0x2cc678u: goto label_2cc678;
        case 0x2cc67cu: goto label_2cc67c;
        case 0x2cc680u: goto label_2cc680;
        case 0x2cc684u: goto label_2cc684;
        case 0x2cc688u: goto label_2cc688;
        case 0x2cc68cu: goto label_2cc68c;
        case 0x2cc690u: goto label_2cc690;
        case 0x2cc694u: goto label_2cc694;
        case 0x2cc698u: goto label_2cc698;
        case 0x2cc69cu: goto label_2cc69c;
        case 0x2cc6a0u: goto label_2cc6a0;
        case 0x2cc6a4u: goto label_2cc6a4;
        case 0x2cc6a8u: goto label_2cc6a8;
        case 0x2cc6acu: goto label_2cc6ac;
        case 0x2cc6b0u: goto label_2cc6b0;
        case 0x2cc6b4u: goto label_2cc6b4;
        case 0x2cc6b8u: goto label_2cc6b8;
        case 0x2cc6bcu: goto label_2cc6bc;
        case 0x2cc6c0u: goto label_2cc6c0;
        case 0x2cc6c4u: goto label_2cc6c4;
        case 0x2cc6c8u: goto label_2cc6c8;
        case 0x2cc6ccu: goto label_2cc6cc;
        case 0x2cc6d0u: goto label_2cc6d0;
        case 0x2cc6d4u: goto label_2cc6d4;
        case 0x2cc6d8u: goto label_2cc6d8;
        case 0x2cc6dcu: goto label_2cc6dc;
        case 0x2cc6e0u: goto label_2cc6e0;
        case 0x2cc6e4u: goto label_2cc6e4;
        case 0x2cc6e8u: goto label_2cc6e8;
        case 0x2cc6ecu: goto label_2cc6ec;
        case 0x2cc6f0u: goto label_2cc6f0;
        case 0x2cc6f4u: goto label_2cc6f4;
        case 0x2cc6f8u: goto label_2cc6f8;
        case 0x2cc6fcu: goto label_2cc6fc;
        case 0x2cc700u: goto label_2cc700;
        case 0x2cc704u: goto label_2cc704;
        case 0x2cc708u: goto label_2cc708;
        case 0x2cc70cu: goto label_2cc70c;
        case 0x2cc710u: goto label_2cc710;
        case 0x2cc714u: goto label_2cc714;
        case 0x2cc718u: goto label_2cc718;
        case 0x2cc71cu: goto label_2cc71c;
        case 0x2cc720u: goto label_2cc720;
        case 0x2cc724u: goto label_2cc724;
        case 0x2cc728u: goto label_2cc728;
        case 0x2cc72cu: goto label_2cc72c;
        case 0x2cc730u: goto label_2cc730;
        case 0x2cc734u: goto label_2cc734;
        case 0x2cc738u: goto label_2cc738;
        case 0x2cc73cu: goto label_2cc73c;
        case 0x2cc740u: goto label_2cc740;
        case 0x2cc744u: goto label_2cc744;
        case 0x2cc748u: goto label_2cc748;
        case 0x2cc74cu: goto label_2cc74c;
        case 0x2cc750u: goto label_2cc750;
        case 0x2cc754u: goto label_2cc754;
        case 0x2cc758u: goto label_2cc758;
        case 0x2cc75cu: goto label_2cc75c;
        case 0x2cc760u: goto label_2cc760;
        case 0x2cc764u: goto label_2cc764;
        case 0x2cc768u: goto label_2cc768;
        case 0x2cc76cu: goto label_2cc76c;
        case 0x2cc770u: goto label_2cc770;
        case 0x2cc774u: goto label_2cc774;
        case 0x2cc778u: goto label_2cc778;
        case 0x2cc77cu: goto label_2cc77c;
        case 0x2cc780u: goto label_2cc780;
        case 0x2cc784u: goto label_2cc784;
        case 0x2cc788u: goto label_2cc788;
        case 0x2cc78cu: goto label_2cc78c;
        case 0x2cc790u: goto label_2cc790;
        case 0x2cc794u: goto label_2cc794;
        case 0x2cc798u: goto label_2cc798;
        case 0x2cc79cu: goto label_2cc79c;
        case 0x2cc7a0u: goto label_2cc7a0;
        case 0x2cc7a4u: goto label_2cc7a4;
        case 0x2cc7a8u: goto label_2cc7a8;
        case 0x2cc7acu: goto label_2cc7ac;
        case 0x2cc7b0u: goto label_2cc7b0;
        case 0x2cc7b4u: goto label_2cc7b4;
        case 0x2cc7b8u: goto label_2cc7b8;
        case 0x2cc7bcu: goto label_2cc7bc;
        case 0x2cc7c0u: goto label_2cc7c0;
        case 0x2cc7c4u: goto label_2cc7c4;
        case 0x2cc7c8u: goto label_2cc7c8;
        case 0x2cc7ccu: goto label_2cc7cc;
        case 0x2cc7d0u: goto label_2cc7d0;
        case 0x2cc7d4u: goto label_2cc7d4;
        case 0x2cc7d8u: goto label_2cc7d8;
        case 0x2cc7dcu: goto label_2cc7dc;
        case 0x2cc7e0u: goto label_2cc7e0;
        case 0x2cc7e4u: goto label_2cc7e4;
        case 0x2cc7e8u: goto label_2cc7e8;
        case 0x2cc7ecu: goto label_2cc7ec;
        case 0x2cc7f0u: goto label_2cc7f0;
        case 0x2cc7f4u: goto label_2cc7f4;
        case 0x2cc7f8u: goto label_2cc7f8;
        case 0x2cc7fcu: goto label_2cc7fc;
        case 0x2cc800u: goto label_2cc800;
        case 0x2cc804u: goto label_2cc804;
        case 0x2cc808u: goto label_2cc808;
        case 0x2cc80cu: goto label_2cc80c;
        case 0x2cc810u: goto label_2cc810;
        case 0x2cc814u: goto label_2cc814;
        case 0x2cc818u: goto label_2cc818;
        case 0x2cc81cu: goto label_2cc81c;
        case 0x2cc820u: goto label_2cc820;
        case 0x2cc824u: goto label_2cc824;
        case 0x2cc828u: goto label_2cc828;
        case 0x2cc82cu: goto label_2cc82c;
        case 0x2cc830u: goto label_2cc830;
        case 0x2cc834u: goto label_2cc834;
        case 0x2cc838u: goto label_2cc838;
        case 0x2cc83cu: goto label_2cc83c;
        case 0x2cc840u: goto label_2cc840;
        case 0x2cc844u: goto label_2cc844;
        case 0x2cc848u: goto label_2cc848;
        case 0x2cc84cu: goto label_2cc84c;
        case 0x2cc850u: goto label_2cc850;
        case 0x2cc854u: goto label_2cc854;
        case 0x2cc858u: goto label_2cc858;
        case 0x2cc85cu: goto label_2cc85c;
        case 0x2cc860u: goto label_2cc860;
        case 0x2cc864u: goto label_2cc864;
        case 0x2cc868u: goto label_2cc868;
        case 0x2cc86cu: goto label_2cc86c;
        case 0x2cc870u: goto label_2cc870;
        case 0x2cc874u: goto label_2cc874;
        case 0x2cc878u: goto label_2cc878;
        case 0x2cc87cu: goto label_2cc87c;
        case 0x2cc880u: goto label_2cc880;
        case 0x2cc884u: goto label_2cc884;
        case 0x2cc888u: goto label_2cc888;
        case 0x2cc88cu: goto label_2cc88c;
        case 0x2cc890u: goto label_2cc890;
        case 0x2cc894u: goto label_2cc894;
        case 0x2cc898u: goto label_2cc898;
        case 0x2cc89cu: goto label_2cc89c;
        case 0x2cc8a0u: goto label_2cc8a0;
        case 0x2cc8a4u: goto label_2cc8a4;
        case 0x2cc8a8u: goto label_2cc8a8;
        case 0x2cc8acu: goto label_2cc8ac;
        case 0x2cc8b0u: goto label_2cc8b0;
        case 0x2cc8b4u: goto label_2cc8b4;
        case 0x2cc8b8u: goto label_2cc8b8;
        case 0x2cc8bcu: goto label_2cc8bc;
        case 0x2cc8c0u: goto label_2cc8c0;
        case 0x2cc8c4u: goto label_2cc8c4;
        case 0x2cc8c8u: goto label_2cc8c8;
        case 0x2cc8ccu: goto label_2cc8cc;
        case 0x2cc8d0u: goto label_2cc8d0;
        case 0x2cc8d4u: goto label_2cc8d4;
        case 0x2cc8d8u: goto label_2cc8d8;
        case 0x2cc8dcu: goto label_2cc8dc;
        case 0x2cc8e0u: goto label_2cc8e0;
        case 0x2cc8e4u: goto label_2cc8e4;
        case 0x2cc8e8u: goto label_2cc8e8;
        case 0x2cc8ecu: goto label_2cc8ec;
        case 0x2cc8f0u: goto label_2cc8f0;
        case 0x2cc8f4u: goto label_2cc8f4;
        case 0x2cc8f8u: goto label_2cc8f8;
        case 0x2cc8fcu: goto label_2cc8fc;
        default: return;
    }

label_2cc130:
    // 0x2cc130: 0x74207349  .word       0x74207349                   # INVALID     $at, $zero, 0x7349 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cc130u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CC130 raw=0x74207349");
 /* MITIGATED */
label_2cc134:
    // 0x2cc134: 0x20736968  addi        $s3, $v1, 0x6968
    ctx->pc = 0x2cc134u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26984, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
label_2cc138:
    // 0x2cc138: 0x20656874  addi        $a1, $v1, 0x6874
    ctx->pc = 0x2cc138u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26740, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2cc13c:
    // 0x2cc13c: 0x2c646e65  sltiu       $a0, $v1, 0x6E65
    ctx->pc = 0x2cc13cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)28261) ? 1 : 0);
label_2cc140:
    // 0x2cc140: 0x726f6620  .word       0x726F6620                   # madd1       $t4, $s3, $t7 # 00000600 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cc140u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 15); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_2cc144:
    // 0x2cc144: 0x2e656d20  sltiu       $a1, $s3, 0x6D20
    ctx->pc = 0x2cc144u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)27936) ? 1 : 0);
label_2cc148:
    // 0x2cc148: 0x0  nop
    ctx->pc = 0x2cc148u;
    // NOP
label_2cc14c:
    // 0x2cc14c: 0x0  nop
    ctx->pc = 0x2cc14cu;
    // NOP
label_2cc150:
    // 0x2cc150: 0x69662049  ldl         $a2, 0x2049($t3)
    ctx->pc = 0x2cc150u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 8265); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_2cc154:
    // 0x2cc154: 0x6c6c616e  ldr         $t4, 0x616E($v1)
    ctx->pc = 0x2cc154u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24942); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_2cc158:
    // 0x2cc158: 0x656d2079  daddiu      $t5, $t3, 0x2079
    ctx->pc = 0x2cc158u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)8313);
label_2cc15c:
    // 0x2cc15c: 0x77207465  .word       0x77207465                   # INVALID     $t9, $zero, 0x7465 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cc15cu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CC15C raw=0x77207465");
 /* MITIGATED */
label_2cc160:
    // 0x2cc160: 0x20687469  addi        $t0, $v1, 0x7469
    ctx->pc = 0x2cc160u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29801, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
label_2cc164:
    // 0x2cc164: 0x74616564  .word       0x74616564                   # INVALID     $v1, $at, 0x6564 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cc164u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CC164 raw=0x74616564");
 /* MITIGATED */
label_2cc168:
    // 0x2cc168: 0x66202c68  daddiu      $zero, $s1, 0x2C68
    ctx->pc = 0x2cc168u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)11368);
label_2cc16c:
    // 0x2cc16c: 0x77657261  .word       0x77657261                   # INVALID     $k1, $a1, 0x7261 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cc16cu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CC16C raw=0x77657261");
 /* MITIGATED */
label_2cc170:
    // 0x2cc170: 0x2e6c6c65  sltiu       $t4, $s3, 0x6C65
    ctx->pc = 0x2cc170u;
    SET_GPR_U64(ctx, 12, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)27749) ? 1 : 0);
label_2cc174:
    // 0x2cc174: 0x0  nop
    ctx->pc = 0x2cc174u;
    // NOP
label_2cc178:
    // 0x2cc178: 0x0  nop
    ctx->pc = 0x2cc178u;
    // NOP
label_2cc17c:
    // 0x2cc17c: 0x0  nop
    ctx->pc = 0x2cc17cu;
    // NOP
label_2cc180:
    // 0x2cc180: 0x62206f54  daddi       $zero, $s1, 0x6F54
    ctx->pc = 0x2cc180u;
    { int64_t src = (int64_t)GPR_S64(ctx, 17); int64_t imm = (int64_t)(int32_t)28500; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_2cc184:
    // 0x2cc184: 0x6f732065  ldr         $s3, 0x2065($k1)
    ctx->pc = 0x2cc184u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8293); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem >> shift)); }
label_2cc188:
    // 0x2cc188: 0x6f6c6320  ldr         $t4, 0x6320($k1)
    ctx->pc = 0x2cc188u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 25376); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_2cc18c:
    // 0x2cc18c: 0x202c6573  addi        $t4, $at, 0x6573
    ctx->pc = 0x2cc18cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)25971, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
label_2cc190:
    // 0x2cc190: 0x2e49  .word       0x00002E49                   # jalr        $a1, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
label_2cc194:
    if (ctx->pc == 0x2CC194u) {
        ctx->pc = 0x2CC198u;
        goto label_2cc198;
    }
    ctx->pc = 0x2CC190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 5, 0x2CC198u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC190u, 0x2CC198u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CC198u;
label_2cc198:
    // 0x2cc198: 0x0  nop
    ctx->pc = 0x2cc198u;
    // NOP
label_2cc19c:
    // 0x2cc19c: 0x0  nop
    ctx->pc = 0x2cc19cu;
    // NOP
label_2cc1a0:
    // 0x2cc1a0: 0x4c20794d  .word       0x4C20794D                   # INVALID     $at, $zero, 0x794D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cc1a0u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2CC1A0 raw=0x4C20794D");
 /* MITIGATED */
label_2cc1a4:
    // 0x2cc1a4: 0x2c64726f  sltiu       $a0, $v1, 0x726F
    ctx->pc = 0x2cc1a4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)29295) ? 1 : 0);
label_2cc1a8:
    // 0x2cc1a8: 0x74204920  .word       0x74204920                   # INVALID     $at, $zero, 0x4920 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cc1a8u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CC1A8 raw=0x74204920");
 /* MITIGATED */
label_2cc1ac:
    // 0x2cc1ac: 0x20656b61  addi        $a1, $v1, 0x6B61
    ctx->pc = 0x2cc1acu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)27489, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2cc1b0:
    // 0x2cc1b0: 0x6c20796d  ldr         $zero, 0x796D($at)
    ctx->pc = 0x2cc1b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 31085); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_2cc1b4:
    // 0x2cc1b4: 0x65766165  daddiu      $s6, $t3, 0x6165
    ctx->pc = 0x2cc1b4u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24933);
label_2cc1b8:
    // 0x2cc1b8: 0x66656220  daddiu      $a1, $s3, 0x6220
    ctx->pc = 0x2cc1b8u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)25120);
label_2cc1bc:
    // 0x2cc1bc: 0x2065726f  addi        $a1, $v1, 0x726F
    ctx->pc = 0x2cc1bcu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2cc1c0:
    // 0x2cc1c0: 0x2e756f79  sltiu       $s5, $s3, 0x6F79
    ctx->pc = 0x2cc1c0u;
    SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)28537) ? 1 : 0);
label_2cc1c4:
    // 0x2cc1c4: 0x79614d20  lq          $at, 0x4D20($t3)
    ctx->pc = 0x2cc1c4u;
    SET_GPR_VEC(ctx, 1, READ128(ADD32(GPR_U32(ctx, 11), 19744)));
label_2cc1c8:
    // 0x2cc1c8: 0x20755720  addi        $s5, $v1, 0x5720
    ctx->pc = 0x2cc1c8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)22304, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 21, (int32_t)tmp); }
label_2cc1cc:
    // 0x2cc1cc: 0x736f7270  .word       0x736F7270                   # INVALID     $k1, $t7, 0x7270 # 00000000 <InstrIdType: R5900_MMI_PMFHL>
    ctx->pc = 0x2cc1ccu;
//     throw std::runtime_error("Unhandled PMFHL instruction: function 0x9 at 0x2CC1CC raw=0x736F7270");
 /* MITIGATED */
label_2cc1d0:
    // 0x2cc1d0: 0x20726570  addi        $s2, $v1, 0x6570
    ctx->pc = 0x2cc1d0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25968, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 18, (int32_t)tmp); }
label_2cc1d4:
    // 0x2cc1d4: 0x65726f66  daddiu      $s2, $t3, 0x6F66
    ctx->pc = 0x2cc1d4u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28518);
label_2cc1d8:
    // 0x2cc1d8: 0x21726576  addi        $s2, $t3, 0x6576
    ctx->pc = 0x2cc1d8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 11), (int32_t)25974, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 18, (int32_t)tmp); }
label_2cc1dc:
    // 0x2cc1dc: 0x0  nop
    ctx->pc = 0x2cc1dcu;
    // NOP
label_2cc1e0:
    // 0x2cc1e0: 0x20776f48  addi        $s7, $v1, 0x6F48
    ctx->pc = 0x2cc1e0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28488, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 23, (int32_t)tmp); }
label_2cc1e4:
    // 0x2cc1e4: 0x6c756f63  ldr         $s5, 0x6F63($v1)
    ctx->pc = 0x2cc1e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 28515); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
label_2cc1e8:
    // 0x2cc1e8: 0x20492064  addi        $t1, $v0, 0x2064
    ctx->pc = 0x2cc1e8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)8292, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
label_2cc1ec:
    // 0x2cc1ec: 0x73206562  .word       0x73206562                   # INVALID     $t9, $zero, 0x6562 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cc1ecu;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x22 at 0x2CC1EC raw=0x73206562");
 /* MITIGATED */
label_2cc1f0:
    // 0x2cc1f0: 0x6163206f  daddi       $v1, $t3, 0x206F
    ctx->pc = 0x2cc1f0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)8303; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, res); }
label_2cc1f4:
    // 0x2cc1f4: 0x656c6572  daddiu      $t4, $t3, 0x6572
    ctx->pc = 0x2cc1f4u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25970);
label_2cc1f8:
    // 0x2cc1f8: 0x2e7373  tltu        $at, $t6, 461
    ctx->pc = 0x2cc1f8u;
    if (GPR_U64(ctx, 1) < GPR_U64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_2cc1fc:
    // 0x2cc1fc: 0x0  nop
    ctx->pc = 0x2cc1fcu;
    // NOP
label_2cc200:
    // 0x2cc200: 0x4c20794d  .word       0x4C20794D                   # INVALID     $at, $zero, 0x794D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cc200u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2CC200 raw=0x4C20794D");
 /* MITIGATED */
label_2cc204:
    // 0x2cc204: 0x2c64726f  sltiu       $a0, $v1, 0x726F
    ctx->pc = 0x2cc204u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)29295) ? 1 : 0);
label_2cc208:
    // 0x2cc208: 0x656c7020  daddiu      $t4, $t3, 0x7020
    ctx->pc = 0x2cc208u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28704);
label_2cc20c:
    // 0x2cc20c: 0x20657361  addi        $a1, $v1, 0x7361
    ctx->pc = 0x2cc20cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29537, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2cc210:
    // 0x2cc210: 0x67726f66  daddiu      $s2, $k1, 0x6F66
    ctx->pc = 0x2cc210u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)28518);
label_2cc214:
    // 0x2cc214: 0x20657669  addi        $a1, $v1, 0x7669
    ctx->pc = 0x2cc214u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30313, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2cc218:
    // 0x2cc218: 0x2e656d  .word       0x002E656D                   # daddu       $t4, $at, $t6 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cc218u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 1) + (uint64_t)GPR_U64(ctx, 14));
label_2cc21c:
    // 0x2cc21c: 0x0  nop
    ctx->pc = 0x2cc21cu;
    // NOP
label_2cc220:
    // 0x2cc220: 0x6e657645  ldr         $a1, 0x7645($s3)
    ctx->pc = 0x2cc220u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 30277); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2cc224:
    // 0x2cc224: 0x6f687420  ldr         $t0, 0x7420($k1)
    ctx->pc = 0x2cc224u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29728); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_2cc228:
    // 0x2cc228: 0x20686775  addi        $t0, $v1, 0x6775
    ctx->pc = 0x2cc228u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26485, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
label_2cc22c:
    // 0x2cc22c: 0x6220796d  daddi       $zero, $s1, 0x796D
    ctx->pc = 0x2cc22cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 17); int64_t imm = (int64_t)(int32_t)31085; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_2cc230:
    // 0x2cc230: 0x2079646f  addi        $t9, $v1, 0x646F
    ctx->pc = 0x2cc230u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25711, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 25, (int32_t)tmp); }
label_2cc234:
    // 0x2cc234: 0x2079616d  addi        $t9, $v1, 0x616D
    ctx->pc = 0x2cc234u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)24941, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 25, (int32_t)tmp); }
label_2cc238:
    // 0x2cc238: 0x2c656964  sltiu       $a1, $v1, 0x6964
    ctx->pc = 0x2cc238u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)26980) ? 1 : 0);
label_2cc23c:
    // 0x2cc23c: 0x20796d20  addi        $t9, $v1, 0x6D20
    ctx->pc = 0x2cc23cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)27936, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 25, (int32_t)tmp); }
label_2cc240:
    // 0x2cc240: 0x72697073  .word       0x72697073                   # INVALID     $s3, $t1, 0x7073 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cc240u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x2CC240 raw=0x72697073");
 /* MITIGATED */
label_2cc244:
    // 0x2cc244: 0x73207469  .word       0x73207469                   # INVALID     $t9, $zero, 0x7469 # 00000000 <InstrIdType: R5900_MMI_3>
    ctx->pc = 0x2cc244u;
//     throw std::runtime_error("Unhandled MMI3 instruction: function 0x11 at 0x2CC244 raw=0x73207469");
 /* MITIGATED */
label_2cc248:
    // 0x2cc248: 0x6c6c6168  ldr         $t4, 0x6168($v1)
    ctx->pc = 0x2cc248u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24936); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_2cc24c:
    // 0x2cc24c: 0x76696c20  .word       0x76696C20                   # INVALID     $s3, $t1, 0x6C20 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cc24cu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CC24C raw=0x76696C20");
 /* MITIGATED */
label_2cc250:
    // 0x2cc250: 0x6f662065  ldr         $a2, 0x2065($k1)
    ctx->pc = 0x2cc250u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8293); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_2cc254:
    // 0x2cc254: 0x65766572  daddiu      $s6, $t3, 0x6572
    ctx->pc = 0x2cc254u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25970);
label_2cc258:
    // 0x2cc258: 0x2e72  tlt         $zero, $zero, 185
    ctx->pc = 0x2cc258u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2cc25c:
    // 0x2cc25c: 0x0  nop
    ctx->pc = 0x2cc25cu;
    // NOP
label_2cc260:
    // 0x2cc260: 0x73696854  .word       0x73696854                   # INVALID     $k1, $t1, 0x6854 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cc260u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x14 at 0x2CC260 raw=0x73696854");
 /* MITIGATED */
label_2cc264:
    // 0x2cc264: 0x20736920  addi        $s3, $v1, 0x6920
    ctx->pc = 0x2cc264u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26912, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
label_2cc268:
    // 0x2cc268: 0x20656874  addi        $a1, $v1, 0x6874
    ctx->pc = 0x2cc268u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26740, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2cc26c:
    // 0x2cc26c: 0x20646e65  addi        $a0, $v1, 0x6E65
    ctx->pc = 0x2cc26cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28261, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_2cc270:
    // 0x2cc270: 0x6d20666f  ldr         $zero, 0x666F($t1)
    ctx->pc = 0x2cc270u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 26223); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_2cc274:
    // 0x2cc274: 0x61702079  daddi       $s0, $t3, 0x2079
    ctx->pc = 0x2cc274u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)8313; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, res); }
label_2cc278:
    // 0x2cc278: 0x2e6874  teq         $at, $t6, 417
    ctx->pc = 0x2cc278u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_2cc27c:
    // 0x2cc27c: 0x0  nop
    ctx->pc = 0x2cc27cu;
    // NOP
label_2cc280:
    // 0x2cc280: 0x6c207441  ldr         $zero, 0x7441($at)
    ctx->pc = 0x2cc280u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 29761); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_2cc284:
    // 0x2cc284: 0x74736165  .word       0x74736165                   # INVALID     $v1, $s3, 0x6165 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cc284u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CC284 raw=0x74736165");
 /* MITIGATED */
label_2cc288:
    // 0x2cc288: 0x77204920  .word       0x77204920                   # INVALID     $t9, $zero, 0x4920 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cc288u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CC288 raw=0x77204920");
 /* MITIGATED */
label_2cc28c:
    // 0x2cc28c: 0x206c6c69  addi        $t4, $v1, 0x6C69
    ctx->pc = 0x2cc28cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)27753, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
label_2cc290:
    // 0x2cc290: 0x2c656964  sltiu       $a1, $v1, 0x6964
    ctx->pc = 0x2cc290u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)26980) ? 1 : 0);
label_2cc294:
    // 0x2cc294: 0x62206120  daddi       $zero, $s1, 0x6120
    ctx->pc = 0x2cc294u;
    { int64_t src = (int64_t)GPR_S64(ctx, 17); int64_t imm = (int64_t)(int32_t)24864; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_2cc298:
    // 0x2cc298: 0x74756165  .word       0x74756165                   # INVALID     $v1, $s5, 0x6165 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cc298u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CC298 raw=0x74756165");
 /* MITIGATED */
label_2cc29c:
    // 0x2cc29c: 0x6c756669  ldr         $s5, 0x6669($v1)
    ctx->pc = 0x2cc29cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26217); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
label_2cc2a0:
    // 0x2cc2a0: 0x61656420  daddi       $a1, $t3, 0x6420
    ctx->pc = 0x2cc2a0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)25632; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
label_2cc2a4:
    // 0x2cc2a4: 0x2e6874  teq         $at, $t6, 417
    ctx->pc = 0x2cc2a4u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
label_2cc2a8:
    // 0x2cc2a8: 0x0  nop
    ctx->pc = 0x2cc2a8u;
    // NOP
label_2cc2ac:
    // 0x2cc2ac: 0x0  nop
    ctx->pc = 0x2cc2acu;
    // NOP
label_2cc2b0:
    // 0x2cc2b0: 0x6420794d  daddiu      $zero, $at, 0x794D
    ctx->pc = 0x2cc2b0u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)31053);
label_2cc2b4:
    // 0x2cc2b4: 0x2c726165  sltiu       $s2, $v1, 0x6165
    ctx->pc = 0x2cc2b4u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)24933) ? 1 : 0);
label_2cc2b8:
    // 0x2cc2b8: 0x6f6f6720  ldr         $t7, 0x6720($k1)
    ctx->pc = 0x2cc2b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 26400); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
label_2cc2bc:
    // 0x2cc2bc: 0x756c2064  .word       0x756C2064                   # INVALID     $t3, $t4, 0x2064 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cc2bcu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CC2BC raw=0x756C2064");
 /* MITIGATED */
label_2cc2c0:
    // 0x2cc2c0: 0x74206b63  .word       0x74206B63                   # INVALID     $at, $zero, 0x6B63 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cc2c0u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CC2C0 raw=0x74206B63");
 /* MITIGATED */
label_2cc2c4:
    // 0x2cc2c4: 0x6f79206f  ldr         $t9, 0x206F($k1)
    ctx->pc = 0x2cc2c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8303); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 25, (GPR_U64(ctx, 25) & keepMask) | (mem >> shift)); }
label_2cc2c8:
    // 0x2cc2c8: 0x2e75  .word       0x00002E75                   # INVALID     $zero, $zero, 0x2E75 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cc2c8u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2CC2C8 raw=0x00002E75");
 /* MITIGATED */
label_2cc2cc:
    // 0x2cc2cc: 0x0  nop
    ctx->pc = 0x2cc2ccu;
    // NOP
label_2cc2d0:
    // 0x2cc2d0: 0x74206f53  .word       0x74206F53                   # INVALID     $at, $zero, 0x6F53 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cc2d0u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CC2D0 raw=0x74206F53");
 /* MITIGATED */
label_2cc2d4:
    // 0x2cc2d4: 0x20736968  addi        $s3, $v1, 0x6968
    ctx->pc = 0x2cc2d4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26984, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
label_2cc2d8:
    // 0x2cc2d8: 0x74746162  .word       0x74746162                   # INVALID     $v1, $s4, 0x6162 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cc2d8u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CC2D8 raw=0x74746162");
 /* MITIGATED */
label_2cc2dc:
    // 0x2cc2dc: 0x6966656c  ldl         $a2, 0x656C($t3)
    ctx->pc = 0x2cc2dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25964); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_2cc2e0:
    // 0x2cc2e0: 0x20646c65  addi        $a0, $v1, 0x6C65
    ctx->pc = 0x2cc2e0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)27749, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_2cc2e4:
    // 0x2cc2e4: 0x74207369  .word       0x74207369                   # INVALID     $at, $zero, 0x7369 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cc2e4u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CC2E4 raw=0x74207369");
 /* MITIGATED */
label_2cc2e8:
    // 0x2cc2e8: 0x6562206f  daddiu      $v0, $t3, 0x206F
    ctx->pc = 0x2cc2e8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)8303);
label_2cc2ec:
    // 0x2cc2ec: 0x20796d20  addi        $t9, $v1, 0x6D20
    ctx->pc = 0x2cc2ecu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)27936, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 25, (int32_t)tmp); }
label_2cc2f0:
    // 0x2cc2f0: 0x76617267  .word       0x76617267                   # INVALID     $s3, $at, 0x7267 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cc2f0u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CC2F0 raw=0x76617267");
 /* MITIGATED */
label_2cc2f4:
    // 0x2cc2f4: 0x2e65  .word       0x00002E65                   # move        $a1, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cc2f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2cc2f8:
    // 0x2cc2f8: 0x0  nop
    ctx->pc = 0x2cc2f8u;
    // NOP
label_2cc2fc:
    // 0x2cc2fc: 0x0  nop
    ctx->pc = 0x2cc2fcu;
    // NOP
label_2cc300:
    // 0x2cc300: 0x74206f53  .word       0x74206F53                   # INVALID     $at, $zero, 0x6F53 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cc300u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CC300 raw=0x74206F53");
 /* MITIGATED */
label_2cc304:
    // 0x2cc304: 0x20736968  addi        $s3, $v1, 0x6968
    ctx->pc = 0x2cc304u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26984, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 19, (int32_t)tmp); }
label_2cc308:
    // 0x2cc308: 0x69207369  ldl         $zero, 0x7369($t1)
    ctx->pc = 0x2cc308u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 29545); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem << shift)); }
label_2cc30c:
    // 0x2cc30c: 0x49202c74  .word       0x49202C74                   # INVALID     $t1, $zero, 0x2C74 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2cc30cu;
//     throw std::runtime_error("Unhandled COP2 format: 0x9 at 0x2CC30C raw=0x49202C74");
 /* MITIGATED */
label_2cc310:
    // 0x2cc310: 0x76616820  .word       0x76616820                   # INVALID     $s3, $at, 0x6820 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cc310u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CC310 raw=0x76616820");
 /* MITIGATED */
label_2cc314:
    // 0x2cc314: 0x6f6e2065  ldr         $t6, 0x2065($k1)
    ctx->pc = 0x2cc314u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8293); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
label_2cc318:
    // 0x2cc318: 0x67657220  daddiu      $a1, $k1, 0x7220
    ctx->pc = 0x2cc318u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)29216);
label_2cc31c:
    // 0x2cc31c: 0x73746572  .word       0x73746572                   # INVALID     $k1, $s4, 0x6572 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cc31cu;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x32 at 0x2CC31C raw=0x73746572");
 /* MITIGATED */
label_2cc320:
    // 0x2cc320: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2cc320u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2cc324:
    // 0x2cc324: 0x0  nop
    ctx->pc = 0x2cc324u;
    // NOP
label_2cc328:
    // 0x2cc328: 0x0  nop
    ctx->pc = 0x2cc328u;
    // NOP
label_2cc32c:
    // 0x2cc32c: 0x0  nop
    ctx->pc = 0x2cc32cu;
    // NOP
label_2cc330:
    // 0x2cc330: 0x74616544  .word       0x74616544                   # INVALID     $v1, $at, 0x6544 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cc330u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CC330 raw=0x74616544");
 /* MITIGATED */
label_2cc334:
    // 0x2cc334: 0x2e2e2e68  sltiu       $t6, $s1, 0x2E68
    ctx->pc = 0x2cc334u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)11880) ? 1 : 0);
label_2cc338:
    // 0x2cc338: 0x2e654d20  sltiu       $a1, $s3, 0x4D20
    ctx->pc = 0x2cc338u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)19744) ? 1 : 0);
label_2cc33c:
    // 0x2cc33c: 0x64202e2e  daddiu      $zero, $at, 0x2E2E
    ctx->pc = 0x2cc33cu;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)11822);
label_2cc340:
    // 0x2cc340: 0x2e2e6569  sltiu       $t6, $s1, 0x6569
    ctx->pc = 0x2cc340u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)25961) ? 1 : 0);
label_2cc344:
    // 0x2cc344: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2cc344u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2cc348:
    // 0x2cc348: 0x0  nop
    ctx->pc = 0x2cc348u;
    // NOP
label_2cc34c:
    // 0x2cc34c: 0x0  nop
    ctx->pc = 0x2cc34cu;
    // NOP
label_2cc350:
    // 0x2cc350: 0x64206f54  daddiu      $zero, $at, 0x6F54
    ctx->pc = 0x2cc350u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)28500);
label_2cc354:
    // 0x2cc354: 0x69206569  ldl         $zero, 0x6569($t1)
    ctx->pc = 0x2cc354u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 25961); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem << shift)); }
label_2cc358:
    // 0x2cc358: 0x2061206e  addi        $at, $v1, 0x206E
    ctx->pc = 0x2cc358u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)8302, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 1, (int32_t)tmp); }
label_2cc35c:
    // 0x2cc35c: 0x63616c70  daddi       $at, $k1, 0x6C70
    ctx->pc = 0x2cc35cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27760; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, res); }
label_2cc360:
    // 0x2cc360: 0x75732065  .word       0x75732065                   # INVALID     $t3, $s3, 0x2065 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cc360u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CC360 raw=0x75732065");
 /* MITIGATED */
label_2cc364:
    // 0x2cc364: 0x61206863  daddi       $zero, $t1, 0x6863
    ctx->pc = 0x2cc364u;
    { int64_t src = (int64_t)GPR_S64(ctx, 9); int64_t imm = (int64_t)(int32_t)26723; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_2cc368:
    // 0x2cc368: 0x68742073  ldl         $s4, 0x2073($v1)
    ctx->pc = 0x2cc368u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8307); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_2cc36c:
    // 0x2cc36c: 0x2e7369  .word       0x002E7369                   # mtsa        $at # 000E7340 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2cc36cu;
    ctx->sa = GPR_U32(ctx, 1) & 0x7F;
label_2cc370:
    // 0x2cc370: 0x7473754d  .word       0x7473754D                   # INVALID     $v1, $s3, 0x754D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cc370u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CC370 raw=0x7473754D");
 /* MITIGATED */
label_2cc374:
    // 0x2cc374: 0x64204920  daddiu      $zero, $at, 0x4920
    ctx->pc = 0x2cc374u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)18720);
label_2cc378:
    // 0x2cc378: 0x6e206569  ldr         $zero, 0x6569($s1)
    ctx->pc = 0x2cc378u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 25961); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
label_2cc37c:
    // 0x2cc37c: 0x202c776f  addi        $t4, $at, 0x776F
    ctx->pc = 0x2cc37cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)30575, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
label_2cc380:
    // 0x2cc380: 0x68746977  ldl         $s4, 0x6977($v1)
    ctx->pc = 0x2cc380u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26999); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_2cc384:
    // 0x2cc384: 0x206f7320  addi        $t7, $v1, 0x7320
    ctx->pc = 0x2cc384u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29472, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 15, (int32_t)tmp); }
label_2cc388:
    // 0x2cc388: 0x796e616d  lq          $t6, 0x616D($t3)
    ctx->pc = 0x2cc388u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 11), 24941)));
label_2cc38c:
    // 0x2cc38c: 0x74616220  .word       0x74616220                   # INVALID     $v1, $at, 0x6220 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cc38cu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CC38C raw=0x74616220");
 /* MITIGATED */
label_2cc390:
    // 0x2cc390: 0x73656c74  .word       0x73656C74                   # psllh       $t5, $a1, 17 # 03600000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cc390u;
    SET_GPR_VEC(ctx, 13, _mm_slli_epi16(GPR_VEC(ctx, 5), 17));
label_2cc394:
    // 0x2cc394: 0x66656c20  daddiu      $a1, $s3, 0x6C20
    ctx->pc = 0x2cc394u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)27680);
label_2cc398:
    // 0x2cc398: 0x6e752074  ldr         $s5, 0x2074($s3)
    ctx->pc = 0x2cc398u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8308); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
label_2cc39c:
    // 0x2cc39c: 0x67756f66  daddiu      $s5, $k1, 0x6F66
    ctx->pc = 0x2cc39cu;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)28518);
label_2cc3a0:
    // 0x2cc3a0: 0x3f7468  .word       0x003F7468                   # mfsa        $t6 # 003F0440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2cc3a0u;
    SET_GPR_U32(ctx, 14, ctx->sa);
label_2cc3a4:
    // 0x2cc3a4: 0x0  nop
    ctx->pc = 0x2cc3a4u;
    // NOP
label_2cc3a8:
    // 0x2cc3a8: 0x0  nop
    ctx->pc = 0x2cc3a8u;
    // NOP
label_2cc3ac:
    // 0x2cc3ac: 0x0  nop
    ctx->pc = 0x2cc3acu;
    // NOP
label_2cc3b0:
    // 0x2cc3b0: 0x69202c49  ldl         $zero, 0x2C49($t1)
    ctx->pc = 0x2cc3b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 11337); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem << shift)); }
label_2cc3b4:
    // 0x2cc3b4: 0x68742073  ldl         $s4, 0x2073($v1)
    ctx->pc = 0x2cc3b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8307); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
label_2cc3b8:
    // 0x2cc3b8: 0x61207369  daddi       $zero, $t1, 0x7369
    ctx->pc = 0x2cc3b8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 9); int64_t imm = (int64_t)(int32_t)29545; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
label_2cc3bc:
    // 0x2cc3bc: 0x49206c6c  .word       0x49206C6C                   # INVALID     $t1, $zero, 0x6C6C # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x2cc3bcu;
//     throw std::runtime_error("Unhandled COP2 format: 0x9 at 0x2CC3BC raw=0x49206C6C");
 /* MITIGATED */
label_2cc3c0:
    // 0x2cc3c0: 0x20657627  addi        $a1, $v1, 0x7627
    ctx->pc = 0x2cc3c0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30247, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2cc3c4:
    // 0x2cc3c4: 0x20746f67  addi        $s4, $v1, 0x6F67
    ctx->pc = 0x2cc3c4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28519, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
label_2cc3c8:
    // 0x2cc3c8: 0x7466656c  .word       0x7466656C                   # INVALID     $v1, $a2, 0x656C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cc3c8u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CC3C8 raw=0x7466656C");
 /* MITIGATED */
label_2cc3cc:
    // 0x2cc3cc: 0x2e  dsub        $zero, $zero, $zero
    ctx->pc = 0x2cc3ccu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2cc3d0:
    // 0x2cc3d0: 0x202c6f4e  addi        $t4, $at, 0x6F4E
    ctx->pc = 0x2cc3d0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)28494, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
label_2cc3d4:
    // 0x2cc3d4: 0x206d2749  addi        $t5, $v1, 0x2749
    ctx->pc = 0x2cc3d4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)10057, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 13, (int32_t)tmp); }
label_2cc3d8:
    // 0x2cc3d8: 0x72726f73  .word       0x72726F73                   # INVALID     $s3, $s2, 0x6F73 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cc3d8u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x2CC3D8 raw=0x72726F73");
 /* MITIGATED */
label_2cc3dc:
    // 0x2cc3dc: 0x2e79  .word       0x00002E79                   # INVALID     $zero, $zero, 0x2E79 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cc3dcu;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x2CC3DC raw=0x00002E79");
 /* MITIGATED */
label_2cc3e0:
    // 0x2cc3e0: 0x756f685a  .word       0x756F685A                   # INVALID     $t3, $t7, 0x685A # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cc3e0u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CC3E0 raw=0x756F685A");
 /* MITIGATED */
label_2cc3e4:
    // 0x2cc3e4: 0x2c755920  sltiu       $s5, $v1, 0x5920
    ctx->pc = 0x2cc3e4u;
    SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)22816) ? 1 : 0);
label_2cc3e8:
    // 0x2cc3e8: 0x72614120  .word       0x72614120                   # madd1       $t0, $s3, $at # 00000100 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cc3e8u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 1); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 8, (int32_t)result); }
label_2cc3ec:
    // 0x2cc3ec: 0x2e686867  sltiu       $t0, $s3, 0x6867
    ctx->pc = 0x2cc3ecu;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)26727) ? 1 : 0);
label_2cc3f0:
    // 0x2cc3f0: 0x2e2e  .word       0x00002E2E                   # dsub        $a1, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cc3f0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, r); }
label_2cc3f4:
    // 0x2cc3f4: 0x0  nop
    ctx->pc = 0x2cc3f4u;
    // NOP
label_2cc3f8:
    // 0x2cc3f8: 0x0  nop
    ctx->pc = 0x2cc3f8u;
    // NOP
label_2cc3fc:
    // 0x2cc3fc: 0x0  nop
    ctx->pc = 0x2cc3fcu;
    // NOP
label_2cc400:
    // 0x2cc400: 0x2534471b  addiu       $s4, $t1, 0x471B
    ctx->pc = 0x2cc400u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 9), 18203));
label_2cc404:
    // 0x2cc404: 0x37471b73  ori         $a3, $k0, 0x1B73
    ctx->pc = 0x2cc404u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 26) | (uint64_t)(uint16_t)7027);
label_2cc408:
    // 0x2cc408: 0x656c5022  daddiu      $t4, $t3, 0x5022
    ctx->pc = 0x2cc408u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)20514);
label_2cc40c:
    // 0x2cc40c: 0x20657361  addi        $a1, $v1, 0x7361
    ctx->pc = 0x2cc40cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29537, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2cc410:
    // 0x2cc410: 0x67726f66  daddiu      $s2, $k1, 0x6F66
    ctx->pc = 0x2cc410u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)28518);
label_2cc414:
    // 0x2cc414: 0x20657669  addi        $a1, $v1, 0x7669
    ctx->pc = 0x2cc414u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30313, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2cc418:
    // 0x2cc418: 0x222e656d  addi        $t6, $s1, 0x656D
    ctx->pc = 0x2cc418u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 17), (int32_t)25965, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_2cc41c:
    // 0x2cc41c: 0x0  nop
    ctx->pc = 0x2cc41cu;
    // NOP
label_2cc420:
    // 0x2cc420: 0x746e6f43  .word       0x746E6F43                   # INVALID     $v1, $t6, 0x6F43 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cc420u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CC420 raw=0x746E6F43");
 /* MITIGATED */
label_2cc424:
    // 0x2cc424: 0x65756e69  daddiu      $s5, $t3, 0x6E69
    ctx->pc = 0x2cc424u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28265);
label_2cc428:
    // 0x2cc428: 0x33471b20  andi        $a3, $k0, 0x1B20
    ctx->pc = 0x2cc428u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 26) & (uint64_t)(uint16_t)6944);
label_2cc42c:
    // 0x2cc42c: 0x6f73754d  ldr         $s3, 0x754D($k1)
    ctx->pc = 0x2cc42cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 30029); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem >> shift)); }
label_2cc430:
    // 0x2cc430: 0x6f4d2075  ldr         $t5, 0x2075($k0)
    ctx->pc = 0x2cc430u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 8309); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
label_2cc434:
    // 0x2cc434: 0x471b6564  .word       0x471B6564                   # INVALID     $t8, $k1, 0x6564 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2cc434u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x18, function 0x24 at 0x2CC434 raw=0x471B6564");
 /* MITIGATED */
label_2cc438:
    // 0x2cc438: 0x72662037  .word       0x72662037                   # psrah       $a0, $a2, 0 # 02600000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cc438u;
    SET_GPR_VEC(ctx, 4, _mm_srai_epi16(GPR_VEC(ctx, 6), 0));
label_2cc43c:
    // 0x2cc43c: 0x73206d6f  .word       0x73206D6F                   # INVALID     $t9, $zero, 0x6D6F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cc43cu;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x2F at 0x2CC43C raw=0x73206D6F");
 /* MITIGATED */
label_2cc440:
    // 0x2cc440: 0x64657661  daddiu      $a1, $v1, 0x7661
    ctx->pc = 0x2cc440u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)30305);
label_2cc444:
    // 0x2cc444: 0x696f7020  ldl         $t7, 0x7020($t3)
    ctx->pc = 0x2cc444u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28704); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem << shift)); }
label_2cc448:
    // 0x2cc448: 0x202e746e  addi        $t6, $at, 0x746E
    ctx->pc = 0x2cc448u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)29806, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
label_2cc44c:
    // 0x2cc44c: 0x3f4b4f  .word       0x003F4B4F                   # sync # 003F4800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cc44cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2cc450:
    // 0x2cc450: 0x746e6f43  .word       0x746E6F43                   # INVALID     $v1, $t6, 0x6F43 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cc450u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CC450 raw=0x746E6F43");
 /* MITIGATED */
label_2cc454:
    // 0x2cc454: 0x65756e69  daddiu      $s5, $t3, 0x6E69
    ctx->pc = 0x2cc454u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28265);
label_2cc458:
    // 0x2cc458: 0x33471b20  andi        $a3, $k0, 0x1B20
    ctx->pc = 0x2cc458u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 26) & (uint64_t)(uint16_t)6944);
label_2cc45c:
    // 0x2cc45c: 0x65657246  daddiu      $a1, $t3, 0x7246
    ctx->pc = 0x2cc45cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29254);
label_2cc460:
    // 0x2cc460: 0x646f4d20  daddiu      $t7, $v1, 0x4D20
    ctx->pc = 0x2cc460u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)19744);
label_2cc464:
    // 0x2cc464: 0x37471b65  ori         $a3, $k0, 0x1B65
    ctx->pc = 0x2cc464u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 26) | (uint64_t)(uint16_t)7013);
label_2cc468:
    // 0x2cc468: 0x6f726620  ldr         $s2, 0x6620($k1)
    ctx->pc = 0x2cc468u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 26144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
label_2cc46c:
    // 0x2cc46c: 0x6173206d  daddi       $s3, $t3, 0x206D
    ctx->pc = 0x2cc46cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)8301; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 19, res); }
label_2cc470:
    // 0x2cc470: 0x20646576  addi        $a0, $v1, 0x6576
    ctx->pc = 0x2cc470u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25974, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_2cc474:
    // 0x2cc474: 0x6e696f70  ldr         $t1, 0x6F70($s3)
    ctx->pc = 0x2cc474u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28528); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2cc478:
    // 0x2cc478: 0x4f202e74  .word       0x4F202E74                   # INVALID     $t9, $zero, 0x2E74 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cc478u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2CC478 raw=0x4F202E74");
 /* MITIGATED */
label_2cc47c:
    // 0x2cc47c: 0x3f4b  .word       0x00003F4B                   # movn        $a3, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cc47cu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
label_2cc480:
    // 0x2cc480: 0x79206649  lq          $zero, 0x6649($t1)
    ctx->pc = 0x2cc480u;
    SET_GPR_VEC(ctx, 0, READ128(ADD32(GPR_U32(ctx, 9), 26185)));
label_2cc484:
    // 0x2cc484: 0x7320756f  .word       0x7320756F                   # INVALID     $t9, $zero, 0x756F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cc484u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x2F at 0x2CC484 raw=0x7320756F");
 /* MITIGATED */
label_2cc488:
    // 0x2cc488: 0x20657661  addi        $a1, $v1, 0x7661
    ctx->pc = 0x2cc488u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30305, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2cc48c:
    // 0x2cc48c: 0x69727564  ldl         $s2, 0x7564($t3)
    ctx->pc = 0x2cc48cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 30052); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem << shift)); }
label_2cc490:
    // 0x2cc490: 0x6720676e  daddiu      $zero, $t9, 0x676E
    ctx->pc = 0x2cc490u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 25) + (int64_t)(int32_t)26478);
label_2cc494:
    // 0x2cc494: 0x70656d61  .word       0x70656D61                   # maddu1      $t5, $v1, $a1 # 00000540 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cc494u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); uint64_t prod = (uint64_t)GPR_U32(ctx, 3) * (uint64_t)GPR_U32(ctx, 5); uint64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_2cc498:
    // 0x2cc498: 0x2c79616c  sltiu       $t9, $v1, 0x616C
    ctx->pc = 0x2cc498u;
    SET_GPR_U64(ctx, 25, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)24940) ? 1 : 0);
label_2cc49c:
    // 0x2cc49c: 0x65727020  daddiu      $s2, $t3, 0x7020
    ctx->pc = 0x2cc49cu;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28704);
label_2cc4a0:
    // 0x2cc4a0: 0x756f6976  .word       0x756F6976                   # INVALID     $t3, $t7, 0x6976 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cc4a0u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CC4A0 raw=0x756F6976");
 /* MITIGATED */
label_2cc4a4:
    // 0x2cc4a4: 0x61672073  daddi       $a3, $t3, 0x2073
    ctx->pc = 0x2cc4a4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)8307; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 7, res); }
label_2cc4a8:
    // 0x2cc4a8: 0x6c70656d  ldr         $s0, 0x656D($v1)
    ctx->pc = 0x2cc4a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 25965); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
label_2cc4ac:
    // 0x2cc4ac: 0x73207961  .word       0x73207961                   # maddu1      $t7, $t9, $zero # 00000140 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cc4acu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); uint64_t prod = (uint64_t)GPR_U32(ctx, 25) * (uint64_t)GPR_U32(ctx, 0); uint64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 15, (int32_t)result); }
label_2cc4b0:
    // 0x2cc4b0: 0x20657661  addi        $a1, $v1, 0x7661
    ctx->pc = 0x2cc4b0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30305, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2cc4b4:
    // 0x2cc4b4: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x2cc4b4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_2cc4b8:
    // 0x2cc4b8: 0x6c697720  ldr         $t1, 0x7720($v1)
    ctx->pc = 0x2cc4b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 30496); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2cc4bc:
    // 0x2cc4bc: 0x6562206c  daddiu      $v0, $t3, 0x206C
    ctx->pc = 0x2cc4bcu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)8300);
label_2cc4c0:
    // 0x2cc4c0: 0x61726520  daddi       $s2, $t3, 0x6520
    ctx->pc = 0x2cc4c0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)25888; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_2cc4c4:
    // 0x2cc4c4: 0x2e646573  sltiu       $a0, $s3, 0x6573
    ctx->pc = 0x2cc4c4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)25971) ? 1 : 0);
label_2cc4c8:
    // 0x2cc4c8: 0x61745320  daddi       $s4, $t3, 0x5320
    ctx->pc = 0x2cc4c8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)21280; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_2cc4cc:
    // 0x2cc4cc: 0x4d207472  .word       0x4D207472                   # INVALID     $t1, $zero, 0x7472 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cc4ccu;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2CC4CC raw=0x4D207472");
 /* MITIGATED */
label_2cc4d0:
    // 0x2cc4d0: 0x756f7375  .word       0x756F7375                   # INVALID     $t3, $t7, 0x7375 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cc4d0u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CC4D0 raw=0x756F7375");
 /* MITIGATED */
label_2cc4d4:
    // 0x2cc4d4: 0x646f4d20  daddiu      $t7, $v1, 0x4D20
    ctx->pc = 0x2cc4d4u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)19744);
label_2cc4d8:
    // 0x2cc4d8: 0x3f65  .word       0x00003F65                   # move        $a3, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cc4d8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2cc4dc:
    // 0x2cc4dc: 0x0  nop
    ctx->pc = 0x2cc4dcu;
    // NOP
label_2cc4e0:
    // 0x2cc4e0: 0x79206649  lq          $zero, 0x6649($t1)
    ctx->pc = 0x2cc4e0u;
    SET_GPR_VEC(ctx, 0, READ128(ADD32(GPR_U32(ctx, 9), 26185)));
label_2cc4e4:
    // 0x2cc4e4: 0x7320756f  .word       0x7320756F                   # INVALID     $t9, $zero, 0x756F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cc4e4u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x2F at 0x2CC4E4 raw=0x7320756F");
 /* MITIGATED */
label_2cc4e8:
    // 0x2cc4e8: 0x20657661  addi        $a1, $v1, 0x7661
    ctx->pc = 0x2cc4e8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30305, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2cc4ec:
    // 0x2cc4ec: 0x69727564  ldl         $s2, 0x7564($t3)
    ctx->pc = 0x2cc4ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 30052); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem << shift)); }
label_2cc4f0:
    // 0x2cc4f0: 0x6720676e  daddiu      $zero, $t9, 0x676E
    ctx->pc = 0x2cc4f0u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 25) + (int64_t)(int32_t)26478);
label_2cc4f4:
    // 0x2cc4f4: 0x70656d61  .word       0x70656D61                   # maddu1      $t5, $v1, $a1 # 00000540 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cc4f4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); uint64_t prod = (uint64_t)GPR_U32(ctx, 3) * (uint64_t)GPR_U32(ctx, 5); uint64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 13, (int32_t)result); }
label_2cc4f8:
    // 0x2cc4f8: 0x2c79616c  sltiu       $t9, $v1, 0x616C
    ctx->pc = 0x2cc4f8u;
    SET_GPR_U64(ctx, 25, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)24940) ? 1 : 0);
label_2cc4fc:
    // 0x2cc4fc: 0x65727020  daddiu      $s2, $t3, 0x7020
    ctx->pc = 0x2cc4fcu;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28704);
label_2cc500:
    // 0x2cc500: 0x756f6976  .word       0x756F6976                   # INVALID     $t3, $t7, 0x6976 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cc500u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CC500 raw=0x756F6976");
 /* MITIGATED */
label_2cc504:
    // 0x2cc504: 0x61672073  daddi       $a3, $t3, 0x2073
    ctx->pc = 0x2cc504u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)8307; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 7, res); }
label_2cc508:
    // 0x2cc508: 0x6c70656d  ldr         $s0, 0x656D($v1)
    ctx->pc = 0x2cc508u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 25965); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
label_2cc50c:
    // 0x2cc50c: 0x73207961  .word       0x73207961                   # maddu1      $t7, $t9, $zero # 00000140 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cc50cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); uint64_t prod = (uint64_t)GPR_U32(ctx, 25) * (uint64_t)GPR_U32(ctx, 0); uint64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 15, (int32_t)result); }
label_2cc510:
    // 0x2cc510: 0x20657661  addi        $a1, $v1, 0x7661
    ctx->pc = 0x2cc510u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30305, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2cc514:
    // 0x2cc514: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x2cc514u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_2cc518:
    // 0x2cc518: 0x6c697720  ldr         $t1, 0x7720($v1)
    ctx->pc = 0x2cc518u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 30496); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2cc51c:
    // 0x2cc51c: 0x6562206c  daddiu      $v0, $t3, 0x206C
    ctx->pc = 0x2cc51cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)8300);
label_2cc520:
    // 0x2cc520: 0x61726520  daddi       $s2, $t3, 0x6520
    ctx->pc = 0x2cc520u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)25888; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
label_2cc524:
    // 0x2cc524: 0x2e646573  sltiu       $a0, $s3, 0x6573
    ctx->pc = 0x2cc524u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)25971) ? 1 : 0);
label_2cc528:
    // 0x2cc528: 0x61745320  daddi       $s4, $t3, 0x5320
    ctx->pc = 0x2cc528u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)21280; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_2cc52c:
    // 0x2cc52c: 0x46207472  .word       0x46207472                   # INVALID     $s1, $zero, 0x7472 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2cc52cu;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x11, function 0x32 at 0x2CC52C raw=0x46207472");
 /* MITIGATED */
label_2cc530:
    // 0x2cc530: 0x20656572  addi        $a1, $v1, 0x6572
    ctx->pc = 0x2cc530u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25970, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2cc534:
    // 0x2cc534: 0x65646f4d  daddiu      $a0, $t3, 0x6F4D
    ctx->pc = 0x2cc534u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28493);
label_2cc538:
    // 0x2cc538: 0x3f  dsra32      $zero, $zero, 0
    ctx->pc = 0x2cc538u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 0));
label_2cc53c:
    // 0x2cc53c: 0x0  nop
    ctx->pc = 0x2cc53cu;
    // NOP
label_2cc540:
    // 0x2cc540: 0x4f53554d  .word       0x4F53554D                   # INVALID     $k0, $s3, 0x554D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cc540u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2CC540 raw=0x4F53554D");
 /* MITIGATED */
label_2cc544:
    // 0x2cc544: 0x4f4d2055  .word       0x4F4D2055                   # INVALID     $k0, $t5, 0x2055 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cc544u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2CC544 raw=0x4F4D2055");
 /* MITIGATED */
label_2cc548:
    // 0x2cc548: 0x4544  .word       0x00004544                   # sllv        $t0, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cc548u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2cc54c:
    // 0x2cc54c: 0x0  nop
    ctx->pc = 0x2cc54cu;
    // NOP
label_2cc550:
    // 0x2cc550: 0x45455246  .word       0x45455246                   # INVALID     $t2, $a1, 0x5246 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2cc550u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x6 at 0x2CC550 raw=0x45455246");
 /* MITIGATED */
label_2cc554:
    // 0x2cc554: 0x444f4d20  .word       0x444F4D20                   # cfc1        $t7, $9 # 00000520 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2cc554u;
    SET_GPR_U32(ctx, 15, 0); // Unimplemented FCR9
label_2cc558:
    // 0x2cc558: 0x45  .word       0x00000045                   # INVALID     $zero, $zero, 0x45 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cc558u;
//     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2CC558 raw=0x00000045");
 /* MITIGATED */
label_2cc55c:
    // 0x2cc55c: 0x0  nop
    ctx->pc = 0x2cc55cu;
    // NOP
label_2cc560:
    // 0x2cc560: 0x7466654c  .word       0x7466654C                   # INVALID     $v1, $a2, 0x654C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cc560u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CC560 raw=0x7466654C");
 /* MITIGATED */
label_2cc564:
    // 0x2cc564: 0x0  nop
    ctx->pc = 0x2cc564u;
    // NOP
label_2cc568:
    // 0x2cc568: 0x27643225  addiu       $a0, $k1, 0x3225
    ctx->pc = 0x2cc568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 27), 12837));
label_2cc56c:
    // 0x2cc56c: 0x64323025  daddiu      $s2, $at, 0x3025
    ctx->pc = 0x2cc56cu;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)12325);
label_2cc570:
    // 0x2cc570: 0x32302522  andi        $s0, $s1, 0x2522
    ctx->pc = 0x2cc570u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)9506);
label_2cc574:
    // 0x2cc574: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cc574u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2cc578:
    // 0x2cc578: 0x506425  .word       0x00506425                   # or          $t4, $v0, $s0 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cc578u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_2cc57c:
    // 0x2cc57c: 0x0  nop
    ctx->pc = 0x2cc57cu;
    // NOP
label_2cc580:
    // 0x2cc580: 0x53354d1b  beql        $t9, $s5, . + 4 + (0x4D1B << 2)
label_2cc584:
    if (ctx->pc == 0x2CC584u) {
        ctx->pc = 0x2CC584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC580u;
        // 0x2cc584: 0x63656c65  daddi       $a1, $k1, 0x6C65 (Delay Slot)
        { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27749; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC588u;
        goto label_2cc588;
    }
    ctx->pc = 0x2CC580u;
    {
        const bool branch_taken_0x2cc580 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 21));
        if (branch_taken_0x2cc580) {
            ctx->pc = 0x2CC584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC580u;
            // 0x2cc584: 0x63656c65  daddi       $a1, $k1, 0x6C65 (Delay Slot)
            { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27749; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DF9F0u;
            return;
        }
    }
    ctx->pc = 0x2CC588u;
label_2cc588:
    // 0x2cc588: 0x4d1b2074  .word       0x4D1B2074                   # INVALID     $t0, $k1, 0x2074 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cc588u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2CC588 raw=0x4D1B2074");
 /* MITIGATED */
label_2cc58c:
    // 0x2cc58c: 0x384d1b37  xori        $t5, $v0, 0x1B37
    ctx->pc = 0x2cc58cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6967);
label_2cc590:
    // 0x2cc590: 0x6e616843  ldr         $at, 0x6843($s3)
    ctx->pc = 0x2cc590u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26691); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2cc594:
    // 0x2cc594: 0x46206567  .word       0x46206567                   # INVALID     $s1, $zero, 0x6567 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2cc594u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x11, function 0x27 at 0x2CC594 raw=0x46206567");
 /* MITIGATED */
label_2cc598:
    // 0x2cc598: 0x6563726f  daddiu      $v1, $t3, 0x726F
    ctx->pc = 0x2cc598u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29295);
label_2cc59c:
    // 0x2cc59c: 0x4d1b2073  .word       0x4D1B2073                   # INVALID     $t0, $k1, 0x2073 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cc59cu;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2CC59C raw=0x4D1B2073");
 /* MITIGATED */
label_2cc5a0:
    // 0x2cc5a0: 0x746e4531  .word       0x746E4531                   # INVALID     $v1, $t6, 0x4531 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cc5a0u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CC5A0 raw=0x746E4531");
 /* MITIGATED */
label_2cc5a4:
    // 0x2cc5a4: 0x7265  .word       0x00007265                   # move        $t6, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cc5a4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2cc5a8:
    // 0x2cc5a8: 0x0  nop
    ctx->pc = 0x2cc5a8u;
    // NOP
label_2cc5ac:
    // 0x2cc5ac: 0x0  nop
    ctx->pc = 0x2cc5acu;
    // NOP
label_2cc5b0:
    // 0x2cc5b0: 0x53354d1b  beql        $t9, $s5, . + 4 + (0x4D1B << 2)
label_2cc5b4:
    if (ctx->pc == 0x2CC5B4u) {
        ctx->pc = 0x2CC5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC5B0u;
        // 0x2cc5b4: 0x63656c65  daddi       $a1, $k1, 0x6C65 (Delay Slot)
        { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27749; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC5B8u;
        goto label_2cc5b8;
    }
    ctx->pc = 0x2CC5B0u;
    {
        const bool branch_taken_0x2cc5b0 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 21));
        if (branch_taken_0x2cc5b0) {
            ctx->pc = 0x2CC5B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC5B0u;
            // 0x2cc5b4: 0x63656c65  daddi       $a1, $k1, 0x6C65 (Delay Slot)
            { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27749; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DFA20u;
            return;
        }
    }
    ctx->pc = 0x2CC5B8u;
label_2cc5b8:
    // 0x2cc5b8: 0x4d1b2074  .word       0x4D1B2074                   # INVALID     $t0, $k1, 0x2074 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cc5b8u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2CC5B8 raw=0x4D1B2074");
 /* MITIGATED */
label_2cc5bc:
    // 0x2cc5bc: 0x384d1b37  xori        $t5, $v0, 0x1B37
    ctx->pc = 0x2cc5bcu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6967);
label_2cc5c0:
    // 0x2cc5c0: 0x6e616843  ldr         $at, 0x6843($s3)
    ctx->pc = 0x2cc5c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26691); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2cc5c4:
    // 0x2cc5c4: 0x46206567  .word       0x46206567                   # INVALID     $s1, $zero, 0x6567 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2cc5c4u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x11, function 0x27 at 0x2CC5C4 raw=0x46206567");
 /* MITIGATED */
label_2cc5c8:
    // 0x2cc5c8: 0x6563726f  daddiu      $v1, $t3, 0x726F
    ctx->pc = 0x2cc5c8u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29295);
label_2cc5cc:
    // 0x2cc5cc: 0x4d1b2073  .word       0x4D1B2073                   # INVALID     $t0, $k1, 0x2073 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cc5ccu;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2CC5CC raw=0x4D1B2073");
 /* MITIGATED */
label_2cc5d0:
    // 0x2cc5d0: 0x3c4d1b3b  .word       0x3C4D1B3B                   # lui         $t5, 0x1B3B # 00400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cc5d0u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)6971 << 16));
label_2cc5d4:
    // 0x2cc5d4: 0x74736f43  .word       0x74736F43                   # INVALID     $v1, $s3, 0x6F43 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cc5d4u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CC5D4 raw=0x74736F43");
 /* MITIGATED */
label_2cc5d8:
    // 0x2cc5d8: 0x20656d75  addi        $a1, $v1, 0x6D75
    ctx->pc = 0x2cc5d8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28021, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2cc5dc:
    // 0x2cc5dc: 0x45314d1b  .word       0x45314D1B                   # INVALID     $t1, $s1, 0x4D1B # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2cc5dcu;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x9, function 0x1B at 0x2CC5DC raw=0x45314D1B");
 /* MITIGATED */
label_2cc5e0:
    // 0x2cc5e0: 0x7265746e  .word       0x7265746E                   # INVALID     $s3, $a1, 0x746E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cc5e0u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x2CC5E0 raw=0x7265746E");
 /* MITIGATED */
label_2cc5e4:
    // 0x2cc5e4: 0x0  nop
    ctx->pc = 0x2cc5e4u;
    // NOP
label_2cc5e8:
    // 0x2cc5e8: 0x0  nop
    ctx->pc = 0x2cc5e8u;
    // NOP
label_2cc5ec:
    // 0x2cc5ec: 0x0  nop
    ctx->pc = 0x2cc5ecu;
    // NOP
label_2cc5f0:
    // 0x2cc5f0: 0x53354d1b  beql        $t9, $s5, . + 4 + (0x4D1B << 2)
label_2cc5f4:
    if (ctx->pc == 0x2CC5F4u) {
        ctx->pc = 0x2CC5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC5F0u;
        // 0x2cc5f4: 0x63656c65  daddi       $a1, $k1, 0x6C65 (Delay Slot)
        { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27749; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC5F8u;
        goto label_2cc5f8;
    }
    ctx->pc = 0x2CC5F0u;
    {
        const bool branch_taken_0x2cc5f0 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 21));
        if (branch_taken_0x2cc5f0) {
            ctx->pc = 0x2CC5F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC5F0u;
            // 0x2cc5f4: 0x63656c65  daddi       $a1, $k1, 0x6C65 (Delay Slot)
            { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27749; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DFA60u;
            return;
        }
    }
    ctx->pc = 0x2CC5F8u;
label_2cc5f8:
    // 0x2cc5f8: 0x4d1b2074  .word       0x4D1B2074                   # INVALID     $t0, $k1, 0x2074 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cc5f8u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2CC5F8 raw=0x4D1B2074");
 /* MITIGATED */
label_2cc5fc:
    // 0x2cc5fc: 0x746e4531  .word       0x746E4531                   # INVALID     $v1, $t6, 0x4531 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cc5fcu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CC5FC raw=0x746E4531");
 /* MITIGATED */
label_2cc600:
    // 0x2cc600: 0x7265  .word       0x00007265                   # move        $t6, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cc600u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2cc604:
    // 0x2cc604: 0x0  nop
    ctx->pc = 0x2cc604u;
    // NOP
label_2cc608:
    // 0x2cc608: 0x0  nop
    ctx->pc = 0x2cc608u;
    // NOP
label_2cc60c:
    // 0x2cc60c: 0x0  nop
    ctx->pc = 0x2cc60cu;
    // NOP
label_2cc610:
    // 0x2cc610: 0x53354d1b  beql        $t9, $s5, . + 4 + (0x4D1B << 2)
label_2cc614:
    if (ctx->pc == 0x2CC614u) {
        ctx->pc = 0x2CC614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC610u;
        // 0x2cc614: 0x63656c65  daddi       $a1, $k1, 0x6C65 (Delay Slot)
        { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27749; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC618u;
        goto label_2cc618;
    }
    ctx->pc = 0x2CC610u;
    {
        const bool branch_taken_0x2cc610 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 21));
        if (branch_taken_0x2cc610) {
            ctx->pc = 0x2CC614u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC610u;
            // 0x2cc614: 0x63656c65  daddi       $a1, $k1, 0x6C65 (Delay Slot)
            { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27749; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DFA80u;
            return;
        }
    }
    ctx->pc = 0x2CC618u;
label_2cc618:
    // 0x2cc618: 0x4d1b2074  .word       0x4D1B2074                   # INVALID     $t0, $k1, 0x2074 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cc618u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2CC618 raw=0x4D1B2074");
 /* MITIGATED */
label_2cc61c:
    // 0x2cc61c: 0x3c4d1b3b  .word       0x3C4D1B3B                   # lui         $t5, 0x1B3B # 00400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cc61cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)6971 << 16));
label_2cc620:
    // 0x2cc620: 0x74736f43  .word       0x74736F43                   # INVALID     $v1, $s3, 0x6F43 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cc620u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CC620 raw=0x74736F43");
 /* MITIGATED */
label_2cc624:
    // 0x2cc624: 0x20656d75  addi        $a1, $v1, 0x6D75
    ctx->pc = 0x2cc624u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28021, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2cc628:
    // 0x2cc628: 0x45314d1b  .word       0x45314D1B                   # INVALID     $t1, $s1, 0x4D1B # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2cc628u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x9, function 0x1B at 0x2CC628 raw=0x45314D1B");
 /* MITIGATED */
label_2cc62c:
    // 0x2cc62c: 0x7265746e  .word       0x7265746E                   # INVALID     $s3, $a1, 0x746E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cc62cu;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x2CC62C raw=0x7265746E");
 /* MITIGATED */
label_2cc630:
    // 0x2cc630: 0x0  nop
    ctx->pc = 0x2cc630u;
    // NOP
label_2cc634:
    // 0x2cc634: 0x0  nop
    ctx->pc = 0x2cc634u;
    // NOP
label_2cc638:
    // 0x2cc638: 0x0  nop
    ctx->pc = 0x2cc638u;
    // NOP
label_2cc63c:
    // 0x2cc63c: 0x0  nop
    ctx->pc = 0x2cc63cu;
    // NOP
label_2cc640:
    // 0x2cc640: 0x53344d1b  beql        $t9, $s4, . + 4 + (0x4D1B << 2)
label_2cc644:
    if (ctx->pc == 0x2CC644u) {
        ctx->pc = 0x2CC644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC640u;
        // 0x2cc644: 0x63656c65  daddi       $a1, $k1, 0x6C65 (Delay Slot)
        { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27749; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC648u;
        goto label_2cc648;
    }
    ctx->pc = 0x2CC640u;
    {
        const bool branch_taken_0x2cc640 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 20));
        if (branch_taken_0x2cc640) {
            ctx->pc = 0x2CC644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC640u;
            // 0x2cc644: 0x63656c65  daddi       $a1, $k1, 0x6C65 (Delay Slot)
            { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27749; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DFAB0u;
            return;
        }
    }
    ctx->pc = 0x2CC648u;
label_2cc648:
    // 0x2cc648: 0x4d1b2074  .word       0x4D1B2074                   # INVALID     $t0, $k1, 0x2074 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cc648u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2CC648 raw=0x4D1B2074");
 /* MITIGATED */
label_2cc64c:
    // 0x2cc64c: 0x746e4531  .word       0x746E4531                   # INVALID     $v1, $t6, 0x4531 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cc64cu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CC64C raw=0x746E4531");
 /* MITIGATED */
label_2cc650:
    // 0x2cc650: 0x7265  .word       0x00007265                   # move        $t6, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cc650u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2cc654:
    // 0x2cc654: 0x0  nop
    ctx->pc = 0x2cc654u;
    // NOP
label_2cc658:
    // 0x2cc658: 0x0  nop
    ctx->pc = 0x2cc658u;
    // NOP
label_2cc65c:
    // 0x2cc65c: 0x0  nop
    ctx->pc = 0x2cc65cu;
    // NOP
label_2cc660:
    // 0x2cc660: 0x53344d1b  beql        $t9, $s4, . + 4 + (0x4D1B << 2)
label_2cc664:
    if (ctx->pc == 0x2CC664u) {
        ctx->pc = 0x2CC664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC660u;
        // 0x2cc664: 0x63656c65  daddi       $a1, $k1, 0x6C65 (Delay Slot)
        { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27749; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC668u;
        goto label_2cc668;
    }
    ctx->pc = 0x2CC660u;
    {
        const bool branch_taken_0x2cc660 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 20));
        if (branch_taken_0x2cc660) {
            ctx->pc = 0x2CC664u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC660u;
            // 0x2cc664: 0x63656c65  daddi       $a1, $k1, 0x6C65 (Delay Slot)
            { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27749; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DFAD0u;
            return;
        }
    }
    ctx->pc = 0x2CC668u;
label_2cc668:
    // 0x2cc668: 0x4d1b2074  .word       0x4D1B2074                   # INVALID     $t0, $k1, 0x2074 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cc668u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2CC668 raw=0x4D1B2074");
 /* MITIGATED */
label_2cc66c:
    // 0x2cc66c: 0x69784532  ldl         $t8, 0x4532($t3)
    ctx->pc = 0x2cc66cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 17714); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 24, (GPR_U64(ctx, 24) & keepMask) | (mem << shift)); }
label_2cc670:
    // 0x2cc670: 0x4d1b2074  .word       0x4D1B2074                   # INVALID     $t0, $k1, 0x2074 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cc670u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2CC670 raw=0x4D1B2074");
 /* MITIGATED */
label_2cc674:
    // 0x2cc674: 0x746e4531  .word       0x746E4531                   # INVALID     $v1, $t6, 0x4531 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cc674u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CC674 raw=0x746E4531");
 /* MITIGATED */
label_2cc678:
    // 0x2cc678: 0x7265  .word       0x00007265                   # move        $t6, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cc678u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2cc67c:
    // 0x2cc67c: 0x0  nop
    ctx->pc = 0x2cc67cu;
    // NOP
label_2cc680:
    // 0x2cc680: 0x1b374d1b  .word       0x1B374D1B                   # blez        $t9, . + 4 + (0x4D1B << 2) # 00170000 <InstrIdType: CPU_NORMAL>
label_2cc684:
    if (ctx->pc == 0x2CC684u) {
        ctx->pc = 0x2CC684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC680u;
        // 0x2cc684: 0x6f52384d  ldr         $s2, 0x384D($k0) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 26), 14413); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC688u;
        goto label_2cc688;
    }
    ctx->pc = 0x2CC680u;
    {
        const bool branch_taken_0x2cc680 = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x2CC684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC680u;
        // 0x2cc684: 0x6f52384d  ldr         $s2, 0x384D($k0) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 26), 14413); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc680) {
            ctx->pc = 0x2DFAF0u;
            return;
        }
    }
    ctx->pc = 0x2CC688u;
label_2cc688:
    // 0x2cc688: 0x65746174  daddiu      $s4, $t3, 0x6174
    ctx->pc = 0x2cc688u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24948);
label_2cc68c:
    // 0x2cc68c: 0x70614d20  .word       0x70614D20                   # madd1       $t1, $v1, $at # 00000500 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cc68cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 1); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_2cc690:
    // 0x2cc690: 0x344d1b20  ori         $t5, $v0, 0x1B20
    ctx->pc = 0x2cc690u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6944);
label_2cc694:
    // 0x2cc694: 0x656c6553  daddiu      $t4, $t3, 0x6553
    ctx->pc = 0x2cc694u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25939);
label_2cc698:
    // 0x2cc698: 0x1b207463  blez        $t9, . + 4 + (0x7463 << 2)
label_2cc69c:
    if (ctx->pc == 0x2CC69Cu) {
        ctx->pc = 0x2CC69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC698u;
        // 0x2cc69c: 0x6e45314d  ldr         $a1, 0x314D($s2) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 18), 12621); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC6A0u;
        goto label_2cc6a0;
    }
    ctx->pc = 0x2CC698u;
    {
        const bool branch_taken_0x2cc698 = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x2CC69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC698u;
        // 0x2cc69c: 0x6e45314d  ldr         $a1, 0x314D($s2) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 18), 12621); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc698) {
            ctx->pc = 0x2E9828u;
            return;
        }
    }
    ctx->pc = 0x2CC6A0u;
label_2cc6a0:
    // 0x2cc6a0: 0x726574  teq         $v1, $s2, 405
    ctx->pc = 0x2cc6a0u;
    if (GPR_U64(ctx, 3) == GPR_U64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_2cc6a4:
    // 0x2cc6a4: 0x0  nop
    ctx->pc = 0x2cc6a4u;
    // NOP
label_2cc6a8:
    // 0x2cc6a8: 0x0  nop
    ctx->pc = 0x2cc6a8u;
    // NOP
label_2cc6ac:
    // 0x2cc6ac: 0x0  nop
    ctx->pc = 0x2cc6acu;
    // NOP
label_2cc6b0:
    // 0x2cc6b0: 0x1b374d1b  .word       0x1B374D1B                   # blez        $t9, . + 4 + (0x4D1B << 2) # 00170000 <InstrIdType: CPU_NORMAL>
label_2cc6b4:
    if (ctx->pc == 0x2CC6B4u) {
        ctx->pc = 0x2CC6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC6B0u;
        // 0x2cc6b4: 0x6f52384d  ldr         $s2, 0x384D($k0) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 26), 14413); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC6B8u;
        goto label_2cc6b8;
    }
    ctx->pc = 0x2CC6B0u;
    {
        const bool branch_taken_0x2cc6b0 = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x2CC6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC6B0u;
        // 0x2cc6b4: 0x6f52384d  ldr         $s2, 0x384D($k0) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 26), 14413); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc6b0) {
            ctx->pc = 0x2DFB20u;
            return;
        }
    }
    ctx->pc = 0x2CC6B8u;
label_2cc6b8:
    // 0x2cc6b8: 0x65746174  daddiu      $s4, $t3, 0x6174
    ctx->pc = 0x2cc6b8u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24948);
label_2cc6bc:
    // 0x2cc6bc: 0x70614d20  .word       0x70614D20                   # madd1       $t1, $v1, $at # 00000500 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cc6bcu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 1); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_2cc6c0:
    // 0x2cc6c0: 0x344d1b20  ori         $t5, $v0, 0x1B20
    ctx->pc = 0x2cc6c0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6944);
label_2cc6c4:
    // 0x2cc6c4: 0x656c6553  daddiu      $t4, $t3, 0x6553
    ctx->pc = 0x2cc6c4u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25939);
label_2cc6c8:
    // 0x2cc6c8: 0x1b207463  blez        $t9, . + 4 + (0x7463 << 2)
label_2cc6cc:
    if (ctx->pc == 0x2CC6CCu) {
        ctx->pc = 0x2CC6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC6C8u;
        // 0x2cc6cc: 0x7845324d  lq          $a1, 0x324D($v0) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 12877)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC6D0u;
        goto label_2cc6d0;
    }
    ctx->pc = 0x2CC6C8u;
    {
        const bool branch_taken_0x2cc6c8 = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x2CC6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC6C8u;
        // 0x2cc6cc: 0x7845324d  lq          $a1, 0x324D($v0) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 12877)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc6c8) {
            ctx->pc = 0x2E9858u;
            return;
        }
    }
    ctx->pc = 0x2CC6D0u;
label_2cc6d0:
    // 0x2cc6d0: 0x1b207469  blez        $t9, . + 4 + (0x7469 << 2)
label_2cc6d4:
    if (ctx->pc == 0x2CC6D4u) {
        ctx->pc = 0x2CC6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC6D0u;
        // 0x2cc6d4: 0x6e45314d  ldr         $a1, 0x314D($s2) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 18), 12621); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC6D8u;
        goto label_2cc6d8;
    }
    ctx->pc = 0x2CC6D0u;
    {
        const bool branch_taken_0x2cc6d0 = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x2CC6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC6D0u;
        // 0x2cc6d4: 0x6e45314d  ldr         $a1, 0x314D($s2) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 18), 12621); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc6d0) {
            ctx->pc = 0x2E9878u;
            return;
        }
    }
    ctx->pc = 0x2CC6D8u;
label_2cc6d8:
    // 0x2cc6d8: 0x726574  teq         $v1, $s2, 405
    ctx->pc = 0x2cc6d8u;
    if (GPR_U64(ctx, 3) == GPR_U64(ctx, 18)) { runtime->handleTrap(rdram, ctx); }
label_2cc6dc:
    // 0x2cc6dc: 0x0  nop
    ctx->pc = 0x2cc6dcu;
    // NOP
label_2cc6e0:
    // 0x2cc6e0: 0x53344d1b  beql        $t9, $s4, . + 4 + (0x4D1B << 2)
label_2cc6e4:
    if (ctx->pc == 0x2CC6E4u) {
        ctx->pc = 0x2CC6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC6E0u;
        // 0x2cc6e4: 0x63656c65  daddi       $a1, $k1, 0x6C65 (Delay Slot)
        { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27749; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC6E8u;
        goto label_2cc6e8;
    }
    ctx->pc = 0x2CC6E0u;
    {
        const bool branch_taken_0x2cc6e0 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 20));
        if (branch_taken_0x2cc6e0) {
            ctx->pc = 0x2CC6E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC6E0u;
            // 0x2cc6e4: 0x63656c65  daddi       $a1, $k1, 0x6C65 (Delay Slot)
            { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27749; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DFB50u;
            return;
        }
    }
    ctx->pc = 0x2CC6E8u;
label_2cc6e8:
    // 0x2cc6e8: 0x4d1b2074  .word       0x4D1B2074                   # INVALID     $t0, $k1, 0x2074 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cc6e8u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2CC6E8 raw=0x4D1B2074");
 /* MITIGATED */
label_2cc6ec:
    // 0x2cc6ec: 0x746e4531  .word       0x746E4531                   # INVALID     $v1, $t6, 0x4531 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cc6ecu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CC6EC raw=0x746E4531");
 /* MITIGATED */
label_2cc6f0:
    // 0x2cc6f0: 0x1b207265  blez        $t9, . + 4 + (0x7265 << 2)
label_2cc6f4:
    if (ctx->pc == 0x2CC6F4u) {
        ctx->pc = 0x2CC6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC6F0u;
        // 0x2cc6f4: 0x7845324d  lq          $a1, 0x324D($v0) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 12877)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC6F8u;
        goto label_2cc6f8;
    }
    ctx->pc = 0x2CC6F0u;
    {
        const bool branch_taken_0x2cc6f0 = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x2CC6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC6F0u;
        // 0x2cc6f4: 0x7845324d  lq          $a1, 0x324D($v0) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 12877)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc6f0) {
            ctx->pc = 0x2E9088u;
            return;
        }
    }
    ctx->pc = 0x2CC6F8u;
label_2cc6f8:
    // 0x2cc6f8: 0x7469  .word       0x00007469                   # mtsa        $zero # 00007440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2cc6f8u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2cc6fc:
    // 0x2cc6fc: 0x0  nop
    ctx->pc = 0x2cc6fcu;
    // NOP
label_2cc700:
    // 0x2cc700: 0x53364d1b  beql        $t9, $s6, . + 4 + (0x4D1B << 2)
label_2cc704:
    if (ctx->pc == 0x2CC704u) {
        ctx->pc = 0x2CC704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC700u;
        // 0x2cc704: 0x63656c65  daddi       $a1, $k1, 0x6C65 (Delay Slot)
        { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27749; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC708u;
        goto label_2cc708;
    }
    ctx->pc = 0x2CC700u;
    {
        const bool branch_taken_0x2cc700 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 22));
        if (branch_taken_0x2cc700) {
            ctx->pc = 0x2CC704u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC700u;
            // 0x2cc704: 0x63656c65  daddi       $a1, $k1, 0x6C65 (Delay Slot)
            { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27749; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DFB70u;
            return;
        }
    }
    ctx->pc = 0x2CC708u;
label_2cc708:
    // 0x2cc708: 0x4d1b2074  .word       0x4D1B2074                   # INVALID     $t0, $k1, 0x2074 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cc708u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2CC708 raw=0x4D1B2074");
 /* MITIGATED */
label_2cc70c:
    // 0x2cc70c: 0x75714531  .word       0x75714531                   # INVALID     $t3, $s1, 0x4531 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cc70cu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CC70C raw=0x75714531");
 /* MITIGATED */
label_2cc710:
    // 0x2cc710: 0x1b207069  blez        $t9, . + 4 + (0x7069 << 2)
label_2cc714:
    if (ctx->pc == 0x2CC714u) {
        ctx->pc = 0x2CC714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC710u;
        // 0x2cc714: 0x7845324d  lq          $a1, 0x324D($v0) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 12877)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC718u;
        goto label_2cc718;
    }
    ctx->pc = 0x2CC710u;
    {
        const bool branch_taken_0x2cc710 = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x2CC714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC710u;
        // 0x2cc714: 0x7845324d  lq          $a1, 0x324D($v0) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 12877)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc710) {
            ctx->pc = 0x2E88B8u;
            return;
        }
    }
    ctx->pc = 0x2CC718u;
label_2cc718:
    // 0x2cc718: 0x7469  .word       0x00007469                   # mtsa        $zero # 00007440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2cc718u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2cc71c:
    // 0x2cc71c: 0x0  nop
    ctx->pc = 0x2cc71cu;
    // NOP
label_2cc720:
    // 0x2cc720: 0x53354d1b  beql        $t9, $s5, . + 4 + (0x4D1B << 2)
label_2cc724:
    if (ctx->pc == 0x2CC724u) {
        ctx->pc = 0x2CC724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC720u;
        // 0x2cc724: 0x63656c65  daddi       $a1, $k1, 0x6C65 (Delay Slot)
        { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27749; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC728u;
        goto label_2cc728;
    }
    ctx->pc = 0x2CC720u;
    {
        const bool branch_taken_0x2cc720 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 21));
        if (branch_taken_0x2cc720) {
            ctx->pc = 0x2CC724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC720u;
            // 0x2cc724: 0x63656c65  daddi       $a1, $k1, 0x6C65 (Delay Slot)
            { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27749; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DFB90u;
            return;
        }
    }
    ctx->pc = 0x2CC728u;
label_2cc728:
    // 0x2cc728: 0x4d1b2074  .word       0x4D1B2074                   # INVALID     $t0, $k1, 0x2074 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cc728u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2CC728 raw=0x4D1B2074");
 /* MITIGATED */
label_2cc72c:
    // 0x2cc72c: 0x746e4531  .word       0x746E4531                   # INVALID     $v1, $t6, 0x4531 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cc72cu;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CC72C raw=0x746E4531");
 /* MITIGATED */
label_2cc730:
    // 0x2cc730: 0x1b207265  blez        $t9, . + 4 + (0x7265 << 2)
label_2cc734:
    if (ctx->pc == 0x2CC734u) {
        ctx->pc = 0x2CC734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC730u;
        // 0x2cc734: 0x6552334d  daddiu      $s2, $t2, 0x334D (Delay Slot)
        SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)13133);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC738u;
        goto label_2cc738;
    }
    ctx->pc = 0x2CC730u;
    {
        const bool branch_taken_0x2cc730 = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x2CC734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC730u;
        // 0x2cc734: 0x6552334d  daddiu      $s2, $t2, 0x334D (Delay Slot)
        SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)13133);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc730) {
            ctx->pc = 0x2E90C8u;
            return;
        }
    }
    ctx->pc = 0x2CC738u;
label_2cc738:
    // 0x2cc738: 0x65766f6d  daddiu      $s6, $t3, 0x6F6D
    ctx->pc = 0x2cc738u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28525);
label_2cc73c:
    // 0x2cc73c: 0x324d1b20  andi        $t5, $s2, 0x1B20
    ctx->pc = 0x2cc73cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)6944);
label_2cc740:
    // 0x2cc740: 0x74697845  .word       0x74697845                   # INVALID     $v1, $t1, 0x7845 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cc740u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CC740 raw=0x74697845");
 /* MITIGATED */
label_2cc744:
    // 0x2cc744: 0x0  nop
    ctx->pc = 0x2cc744u;
    // NOP
label_2cc748:
    // 0x2cc748: 0x0  nop
    ctx->pc = 0x2cc748u;
    // NOP
label_2cc74c:
    // 0x2cc74c: 0x0  nop
    ctx->pc = 0x2cc74cu;
    // NOP
label_2cc750:
    // 0x2cc750: 0x43354d1b  .word       0x43354D1B                   # INVALID     $t9, $s5, 0x4D1B # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2cc750u;
//     throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x2CC750 raw=0x43354D1B");
 /* MITIGATED */
label_2cc754:
    // 0x2cc754: 0x676e6168  daddiu      $t6, $k1, 0x6168
    ctx->pc = 0x2cc754u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24936);
label_2cc758:
    // 0x2cc758: 0x4d1b2065  .word       0x4D1B2065                   # INVALID     $t0, $k1, 0x2065 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cc758u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2CC758 raw=0x4D1B2065");
 /* MITIGATED */
label_2cc75c:
    // 0x2cc75c: 0x69784532  ldl         $t8, 0x4532($t3)
    ctx->pc = 0x2cc75cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 17714); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 24, (GPR_U64(ctx, 24) & keepMask) | (mem << shift)); }
label_2cc760:
    // 0x2cc760: 0x74  teq         $zero, $zero, 1
    ctx->pc = 0x2cc760u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2cc764:
    // 0x2cc764: 0x0  nop
    ctx->pc = 0x2cc764u;
    // NOP
label_2cc768:
    // 0x2cc768: 0x0  nop
    ctx->pc = 0x2cc768u;
    // NOP
label_2cc76c:
    // 0x2cc76c: 0x0  nop
    ctx->pc = 0x2cc76cu;
    // NOP
label_2cc770:
    // 0x2cc770: 0x45344d1b  .word       0x45344D1B                   # INVALID     $t1, $s4, 0x4D1B # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2cc770u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x9, function 0x1B at 0x2CC770 raw=0x45344D1B");
 /* MITIGATED */
label_2cc774:
    // 0x2cc774: 0x70697571  .word       0x70697571                   # INVALID     $v1, $t1, 0x7571 # 00000000 <InstrIdType: R5900_MMI_PMTHL>
    ctx->pc = 0x2cc774u;
//     throw std::runtime_error("Unhandled PMTHL instruction: function 0x15 at 0x2CC774 raw=0x70697571");
 /* MITIGATED */
label_2cc778:
    // 0x2cc778: 0x746e656d  .word       0x746E656D                   # INVALID     $v1, $t6, 0x656D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cc778u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CC778 raw=0x746E656D");
 /* MITIGATED */
label_2cc77c:
    // 0x2cc77c: 0x334d1b20  andi        $t5, $k0, 0x1B20
    ctx->pc = 0x2cc77cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 26) & (uint64_t)(uint16_t)6944);
label_2cc780:
    // 0x2cc780: 0x6e616843  ldr         $at, 0x6843($s3)
    ctx->pc = 0x2cc780u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26691); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_2cc784:
    // 0x2cc784: 0x4f206567  .word       0x4F206567                   # INVALID     $t9, $zero, 0x6567 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cc784u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2CC784 raw=0x4F206567");
 /* MITIGATED */
label_2cc788:
    // 0x2cc788: 0x72656472  .word       0x72656472                   # INVALID     $s3, $a1, 0x6472 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x2cc788u;
//     throw std::runtime_error("Unhandled MMI instruction: function 0x32 at 0x2CC788 raw=0x72656472");
 /* MITIGATED */
label_2cc78c:
    // 0x2cc78c: 0x4d1b2073  .word       0x4D1B2073                   # INVALID     $t0, $k1, 0x2073 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cc78cu;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2CC78C raw=0x4D1B2073");
 /* MITIGATED */
label_2cc790:
    // 0x2cc790: 0x69784532  ldl         $t8, 0x4532($t3)
    ctx->pc = 0x2cc790u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 17714); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 24, (GPR_U64(ctx, 24) & keepMask) | (mem << shift)); }
label_2cc794:
    // 0x2cc794: 0x74  teq         $zero, $zero, 1
    ctx->pc = 0x2cc794u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2cc798:
    // 0x2cc798: 0x45324d1b  .word       0x45324D1B                   # INVALID     $t1, $s2, 0x4D1B # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2cc798u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x9, function 0x1B at 0x2CC798 raw=0x45324D1B");
 /* MITIGATED */
label_2cc79c:
    // 0x2cc79c: 0x746978  .word       0x00746978                   # dsll        $t5, $s4, 5 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cc79cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 20) << 5);
label_2cc7a0:
    // 0x2cc7a0: 0x53364d1b  beql        $t9, $s6, . + 4 + (0x4D1B << 2)
label_2cc7a4:
    if (ctx->pc == 0x2CC7A4u) {
        ctx->pc = 0x2CC7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC7A0u;
        // 0x2cc7a4: 0x63656c65  daddi       $a1, $k1, 0x6C65 (Delay Slot)
        { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27749; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC7A8u;
        goto label_2cc7a8;
    }
    ctx->pc = 0x2CC7A0u;
    {
        const bool branch_taken_0x2cc7a0 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 22));
        if (branch_taken_0x2cc7a0) {
            ctx->pc = 0x2CC7A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC7A0u;
            // 0x2cc7a4: 0x63656c65  daddi       $a1, $k1, 0x6C65 (Delay Slot)
            { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27749; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DFC10u;
            return;
        }
    }
    ctx->pc = 0x2CC7A8u;
label_2cc7a8:
    // 0x2cc7a8: 0x4d1b2074  .word       0x4D1B2074                   # INVALID     $t0, $k1, 0x2074 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cc7a8u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2CC7A8 raw=0x4D1B2074");
 /* MITIGATED */
label_2cc7ac:
    // 0x2cc7ac: 0x69784532  ldl         $t8, 0x4532($t3)
    ctx->pc = 0x2cc7acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 17714); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 24, (GPR_U64(ctx, 24) & keepMask) | (mem << shift)); }
label_2cc7b0:
    // 0x2cc7b0: 0x74  teq         $zero, $zero, 1
    ctx->pc = 0x2cc7b0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2cc7b4:
    // 0x2cc7b4: 0x0  nop
    ctx->pc = 0x2cc7b4u;
    // NOP
label_2cc7b8:
    // 0x2cc7b8: 0x0  nop
    ctx->pc = 0x2cc7b8u;
    // NOP
label_2cc7bc:
    // 0x2cc7bc: 0x0  nop
    ctx->pc = 0x2cc7bcu;
    // NOP
label_2cc7c0:
    // 0x2cc7c0: 0x4e314d1b  .word       0x4E314D1B                   # INVALID     $s1, $s1, 0x4D1B # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cc7c0u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2CC7C0 raw=0x4E314D1B");
 /* MITIGATED */
label_2cc7c4:
    // 0x2cc7c4: 0x20747865  addi        $s4, $v1, 0x7865
    ctx->pc = 0x2cc7c4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30821, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
label_2cc7c8:
    // 0x2cc7c8: 0x45324d1b  .word       0x45324D1B                   # INVALID     $t1, $s2, 0x4D1B # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2cc7c8u;
//     throw std::runtime_error("Unhandled FPU instruction: format 0x9, function 0x1B at 0x2CC7C8 raw=0x45324D1B");
 /* MITIGATED */
label_2cc7cc:
    // 0x2cc7cc: 0x746978  .word       0x00746978                   # dsll        $t5, $s4, 5 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cc7ccu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 20) << 5);
label_2cc7d0:
    // 0x2cc7d0: 0x1b314d1b  .word       0x1B314D1B                   # blez        $t9, . + 4 + (0x4D1B << 2) # 00110000 <InstrIdType: CPU_NORMAL>
label_2cc7d4:
    if (ctx->pc == 0x2CC7D4u) {
        ctx->pc = 0x2CC7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC7D0u;
        // 0x2cc7d4: 0x7845324d  lq          $a1, 0x324D($v0) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 12877)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC7D8u;
        goto label_2cc7d8;
    }
    ctx->pc = 0x2CC7D0u;
    {
        const bool branch_taken_0x2cc7d0 = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x2CC7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC7D0u;
        // 0x2cc7d4: 0x7845324d  lq          $a1, 0x324D($v0) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 12877)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc7d0) {
            ctx->pc = 0x2DFC40u;
            return;
        }
    }
    ctx->pc = 0x2CC7D8u;
label_2cc7d8:
    // 0x2cc7d8: 0x7469  .word       0x00007469                   # mtsa        $zero # 00007440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2cc7d8u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2cc7dc:
    // 0x2cc7dc: 0x0  nop
    ctx->pc = 0x2cc7dcu;
    // NOP
label_2cc7e0:
    // 0x2cc7e0: 0x53344d1b  beql        $t9, $s4, . + 4 + (0x4D1B << 2)
label_2cc7e4:
    if (ctx->pc == 0x2CC7E4u) {
        ctx->pc = 0x2CC7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC7E0u;
        // 0x2cc7e4: 0x63656c65  daddi       $a1, $k1, 0x6C65 (Delay Slot)
        { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27749; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC7E8u;
        goto label_2cc7e8;
    }
    ctx->pc = 0x2CC7E0u;
    {
        const bool branch_taken_0x2cc7e0 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 20));
        if (branch_taken_0x2cc7e0) {
            ctx->pc = 0x2CC7E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC7E0u;
            // 0x2cc7e4: 0x63656c65  daddi       $a1, $k1, 0x6C65 (Delay Slot)
            { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27749; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DFC50u;
            return;
        }
    }
    ctx->pc = 0x2CC7E8u;
label_2cc7e8:
    // 0x2cc7e8: 0x4d1b2074  .word       0x4D1B2074                   # INVALID     $t0, $k1, 0x2074 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cc7e8u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2CC7E8 raw=0x4D1B2074");
 /* MITIGATED */
label_2cc7ec:
    // 0x2cc7ec: 0x69784532  ldl         $t8, 0x4532($t3)
    ctx->pc = 0x2cc7ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 17714); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 24, (GPR_U64(ctx, 24) & keepMask) | (mem << shift)); }
label_2cc7f0:
    // 0x2cc7f0: 0x74  teq         $zero, $zero, 1
    ctx->pc = 0x2cc7f0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2cc7f4:
    // 0x2cc7f4: 0x0  nop
    ctx->pc = 0x2cc7f4u;
    // NOP
label_2cc7f8:
    // 0x2cc7f8: 0x0  nop
    ctx->pc = 0x2cc7f8u;
    // NOP
label_2cc7fc:
    // 0x2cc7fc: 0x0  nop
    ctx->pc = 0x2cc7fcu;
    // NOP
label_2cc800:
    // 0x2cc800: 0x57364d1b  bnel        $t9, $s6, . + 4 + (0x4D1B << 2)
label_2cc804:
    if (ctx->pc == 0x2CC804u) {
        ctx->pc = 0x2CC804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC800u;
        // 0x2cc804: 0x6f706165  ldr         $s0, 0x6165($k1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 27), 24933); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC808u;
        goto label_2cc808;
    }
    ctx->pc = 0x2CC800u;
    {
        const bool branch_taken_0x2cc800 = (GPR_U64(ctx, 25) != GPR_U64(ctx, 22));
        if (branch_taken_0x2cc800) {
            ctx->pc = 0x2CC804u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC800u;
            // 0x2cc804: 0x6f706165  ldr         $s0, 0x6165($k1) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 27), 24933); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DFC70u;
            return;
        }
    }
    ctx->pc = 0x2CC808u;
label_2cc808:
    // 0x2cc808: 0x4d1b206e  .word       0x4D1B206E                   # INVALID     $t0, $k1, 0x206E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cc808u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2CC808 raw=0x4D1B206E");
 /* MITIGATED */
label_2cc80c:
    // 0x2cc80c: 0x63614237  daddi       $at, $k1, 0x4237
    ctx->pc = 0x2cc80cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)16951; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, res); }
label_2cc810:
    // 0x2cc810: 0x4d1b206b  .word       0x4D1B206B                   # INVALID     $t0, $k1, 0x206B # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cc810u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2CC810 raw=0x4D1B206B");
 /* MITIGATED */
label_2cc814:
    // 0x2cc814: 0x78654e38  lq          $a1, 0x4E38($v1)
    ctx->pc = 0x2cc814u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 20024)));
label_2cc818:
    // 0x2cc818: 0x4d1b2074  .word       0x4D1B2074                   # INVALID     $t0, $k1, 0x2074 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cc818u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2CC818 raw=0x4D1B2074");
 /* MITIGATED */
label_2cc81c:
    // 0x2cc81c: 0x69784532  ldl         $t8, 0x4532($t3)
    ctx->pc = 0x2cc81cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 17714); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 24, (GPR_U64(ctx, 24) & keepMask) | (mem << shift)); }
label_2cc820:
    // 0x2cc820: 0x74  teq         $zero, $zero, 1
    ctx->pc = 0x2cc820u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2cc824:
    // 0x2cc824: 0x0  nop
    ctx->pc = 0x2cc824u;
    // NOP
label_2cc828:
    // 0x2cc828: 0x4e314d1b  .word       0x4E314D1B                   # INVALID     $s1, $s1, 0x4D1B # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cc828u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2CC828 raw=0x4E314D1B");
 /* MITIGATED */
label_2cc82c:
    // 0x2cc82c: 0x747865  .word       0x00747865                   # or          $t7, $v1, $s4 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2cc82cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
label_2cc830:
    // 0x2cc830: 0x52334d1b  beql        $s1, $s3, . + 4 + (0x4D1B << 2)
label_2cc834:
    if (ctx->pc == 0x2CC834u) {
        ctx->pc = 0x2CC834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC830u;
        // 0x2cc834: 0x696b6e61  ldl         $t3, 0x6E61($t3) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28257); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC838u;
        goto label_2cc838;
    }
    ctx->pc = 0x2CC830u;
    {
        const bool branch_taken_0x2cc830 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 19));
        if (branch_taken_0x2cc830) {
            ctx->pc = 0x2CC834u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC830u;
            // 0x2cc834: 0x696b6e61  ldl         $t3, 0x6E61($t3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28257); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DFCA0u;
            return;
        }
    }
    ctx->pc = 0x2CC838u;
label_2cc838:
    // 0x2cc838: 0x1b20676e  blez        $t9, . + 4 + (0x676E << 2)
label_2cc83c:
    if (ctx->pc == 0x2CC83Cu) {
        ctx->pc = 0x2CC83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC838u;
        // 0x2cc83c: 0x7845314d  lq          $a1, 0x314D($v0) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 12621)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC840u;
        goto label_2cc840;
    }
    ctx->pc = 0x2CC838u;
    {
        const bool branch_taken_0x2cc838 = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x2CC83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC838u;
        // 0x2cc83c: 0x7845314d  lq          $a1, 0x314D($v0) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 12621)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc838) {
            ctx->pc = 0x2E65F4u;
            return;
        }
    }
    ctx->pc = 0x2CC840u;
label_2cc840:
    // 0x2cc840: 0x7469  .word       0x00007469                   # mtsa        $zero # 00007440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2cc840u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2cc844:
    // 0x2cc844: 0x0  nop
    ctx->pc = 0x2cc844u;
    // NOP
label_2cc848:
    // 0x2cc848: 0x0  nop
    ctx->pc = 0x2cc848u;
    // NOP
label_2cc84c:
    // 0x2cc84c: 0x0  nop
    ctx->pc = 0x2cc84cu;
    // NOP
label_2cc850:
    // 0x2cc850: 0x53344d1b  beql        $t9, $s4, . + 4 + (0x4D1B << 2)
label_2cc854:
    if (ctx->pc == 0x2CC854u) {
        ctx->pc = 0x2CC854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC850u;
        // 0x2cc854: 0x63656c65  daddi       $a1, $k1, 0x6C65 (Delay Slot)
        { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27749; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC858u;
        goto label_2cc858;
    }
    ctx->pc = 0x2CC850u;
    {
        const bool branch_taken_0x2cc850 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 20));
        if (branch_taken_0x2cc850) {
            ctx->pc = 0x2CC854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC850u;
            // 0x2cc854: 0x63656c65  daddi       $a1, $k1, 0x6C65 (Delay Slot)
            { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27749; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DFCC0u;
            return;
        }
    }
    ctx->pc = 0x2CC858u;
label_2cc858:
    // 0x2cc858: 0x354d1b74  ori         $t5, $t2, 0x1B74
    ctx->pc = 0x2cc858u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)7028);
label_2cc85c:
    // 0x2cc85c: 0x20707845  addi        $s0, $v1, 0x7845
    ctx->pc = 0x2cc85cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30789, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 16, (int32_t)tmp); }
label_2cc860:
    // 0x2cc860: 0x6e696f50  ldr         $t1, 0x6F50($s3)
    ctx->pc = 0x2cc860u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28496); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2cc864:
    // 0x2cc864: 0x7374  teq         $zero, $zero, 461
    ctx->pc = 0x2cc864u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2cc868:
    // 0x2cc868: 0x0  nop
    ctx->pc = 0x2cc868u;
    // NOP
label_2cc86c:
    // 0x2cc86c: 0x0  nop
    ctx->pc = 0x2cc86cu;
    // NOP
label_2cc870:
    // 0x2cc870: 0x53344d1b  beql        $t9, $s4, . + 4 + (0x4D1B << 2)
label_2cc874:
    if (ctx->pc == 0x2CC874u) {
        ctx->pc = 0x2CC874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC870u;
        // 0x2cc874: 0x63656c65  daddi       $a1, $k1, 0x6C65 (Delay Slot)
        { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27749; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC878u;
        goto label_2cc878;
    }
    ctx->pc = 0x2CC870u;
    {
        const bool branch_taken_0x2cc870 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 20));
        if (branch_taken_0x2cc870) {
            ctx->pc = 0x2CC874u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC870u;
            // 0x2cc874: 0x63656c65  daddi       $a1, $k1, 0x6C65 (Delay Slot)
            { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27749; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DFCE0u;
            return;
        }
    }
    ctx->pc = 0x2CC878u;
label_2cc878:
    // 0x2cc878: 0x354d1b74  ori         $t5, $t2, 0x1B74
    ctx->pc = 0x2cc878u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)7028);
label_2cc87c:
    // 0x2cc87c: 0x20707845  addi        $s0, $v1, 0x7845
    ctx->pc = 0x2cc87cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30789, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 16, (int32_t)tmp); }
label_2cc880:
    // 0x2cc880: 0x6e696f50  ldr         $t1, 0x6F50($s3)
    ctx->pc = 0x2cc880u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28496); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2cc884:
    // 0x2cc884: 0x4d1b7374  .word       0x4D1B7374                   # INVALID     $t0, $k1, 0x7374 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cc884u;
//     throw std::runtime_error("Unhandled opcode: 0x13 at 0x2CC884 raw=0x4D1B7374");
 /* MITIGATED */
label_2cc888:
    // 0x2cc888: 0x78654e31  lq          $a1, 0x4E31($v1)
    ctx->pc = 0x2cc888u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 20017)));
label_2cc88c:
    // 0x2cc88c: 0x74  teq         $zero, $zero, 1
    ctx->pc = 0x2cc88cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2cc890:
    // 0x2cc890: 0x53324d1b  beql        $t9, $s2, . + 4 + (0x4D1B << 2)
label_2cc894:
    if (ctx->pc == 0x2CC894u) {
        ctx->pc = 0x2CC894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC890u;
        // 0x2cc894: 0x2070696b  addi        $s0, $v1, 0x696B (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26987, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 16, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC898u;
        goto label_2cc898;
    }
    ctx->pc = 0x2CC890u;
    {
        const bool branch_taken_0x2cc890 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 18));
        if (branch_taken_0x2cc890) {
            ctx->pc = 0x2CC894u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC890u;
            // 0x2cc894: 0x2070696b  addi        $s0, $v1, 0x696B (Delay Slot)
            { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26987, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 16, (int32_t)tmp); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DFD00u;
            return;
        }
    }
    ctx->pc = 0x2CC898u;
label_2cc898:
    // 0x2cc898: 0x6f666e49  ldr         $a2, 0x6E49($k1)
    ctx->pc = 0x2cc898u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 28233); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_2cc89c:
    // 0x2cc89c: 0x314d1b20  andi        $t5, $t2, 0x1B20
    ctx->pc = 0x2cc89cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)6944);
label_2cc8a0:
    // 0x2cc8a0: 0x7478654e  .word       0x7478654E                   # INVALID     $v1, $t8, 0x654E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2cc8a0u;
//     throw std::runtime_error("Unhandled opcode: 0x1D at 0x2CC8A0 raw=0x7478654E");
 /* MITIGATED */
label_2cc8a4:
    // 0x2cc8a4: 0x0  nop
    ctx->pc = 0x2cc8a4u;
    // NOP
label_2cc8a8:
    // 0x2cc8a8: 0x0  nop
    ctx->pc = 0x2cc8a8u;
    // NOP
label_2cc8ac:
    // 0x2cc8ac: 0x0  nop
    ctx->pc = 0x2cc8acu;
    // NOP
label_2cc8b0:
    // 0x2cc8b0: 0x57334d1b  bnel        $t9, $s3, . + 4 + (0x4D1B << 2)
label_2cc8b4:
    if (ctx->pc == 0x2CC8B4u) {
        ctx->pc = 0x2CC8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC8B0u;
        // 0x2cc8b4: 0x6f706165  ldr         $s0, 0x6165($k1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 27), 24933); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC8B8u;
        goto label_2cc8b8;
    }
    ctx->pc = 0x2CC8B0u;
    {
        const bool branch_taken_0x2cc8b0 = (GPR_U64(ctx, 25) != GPR_U64(ctx, 19));
        if (branch_taken_0x2cc8b0) {
            ctx->pc = 0x2CC8B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC8B0u;
            // 0x2cc8b4: 0x6f706165  ldr         $s0, 0x6165($k1) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 27), 24933); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DFD20u;
            return;
        }
    }
    ctx->pc = 0x2CC8B8u;
label_2cc8b8:
    // 0x2cc8b8: 0x1b20736e  blez        $t9, . + 4 + (0x736E << 2)
label_2cc8bc:
    if (ctx->pc == 0x2CC8BCu) {
        ctx->pc = 0x2CC8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC8B8u;
        // 0x2cc8bc: 0x4d1b314d  .word       0x4D1B314D                   # INVALID     $t0, $k1, 0x314D # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
//         throw std::runtime_error("Unhandled opcode: 0x13 at 0x2CC8BC raw=0x4D1B314D");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC8C0u;
        goto label_2cc8c0;
    }
    ctx->pc = 0x2CC8B8u;
    {
        const bool branch_taken_0x2cc8b8 = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x2CC8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC8B8u;
        // 0x2cc8bc: 0x4d1b314d  .word       0x4D1B314D                   # INVALID     $t0, $k1, 0x314D # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
//         throw std::runtime_error("Unhandled opcode: 0x13 at 0x2CC8BC raw=0x4D1B314D");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc8b8) {
            ctx->pc = 0x2E9674u;
            return;
        }
    }
    ctx->pc = 0x2CC8C0u;
label_2cc8c0:
    // 0x2cc8c0: 0x69784532  ldl         $t8, 0x4532($t3)
    ctx->pc = 0x2cc8c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 17714); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 24, (GPR_U64(ctx, 24) & keepMask) | (mem << shift)); }
label_2cc8c4:
    // 0x2cc8c4: 0x74  teq         $zero, $zero, 1
    ctx->pc = 0x2cc8c4u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2cc8c8:
    // 0x2cc8c8: 0x0  nop
    ctx->pc = 0x2cc8c8u;
    // NOP
label_2cc8cc:
    // 0x2cc8cc: 0x0  nop
    ctx->pc = 0x2cc8ccu;
    // NOP
label_2cc8d0:
    // 0x2cc8d0: 0x57334d1b  bnel        $t9, $s3, . + 4 + (0x4D1B << 2)
label_2cc8d4:
    if (ctx->pc == 0x2CC8D4u) {
        ctx->pc = 0x2CC8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC8D0u;
        // 0x2cc8d4: 0x6f706165  ldr         $s0, 0x6165($k1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 27), 24933); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC8D8u;
        goto label_2cc8d8;
    }
    ctx->pc = 0x2CC8D0u;
    {
        const bool branch_taken_0x2cc8d0 = (GPR_U64(ctx, 25) != GPR_U64(ctx, 19));
        if (branch_taken_0x2cc8d0) {
            ctx->pc = 0x2CC8D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC8D0u;
            // 0x2cc8d4: 0x6f706165  ldr         $s0, 0x6165($k1) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 27), 24933); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DFD40u;
            return;
        }
    }
    ctx->pc = 0x2CC8D8u;
label_2cc8d8:
    // 0x2cc8d8: 0x1b20736e  blez        $t9, . + 4 + (0x736E << 2)
label_2cc8dc:
    if (ctx->pc == 0x2CC8DCu) {
        ctx->pc = 0x2CC8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC8D8u;
        // 0x2cc8dc: 0x6843304d  ldl         $v1, 0x304D($v0) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12365); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC8E0u;
        goto label_2cc8e0;
    }
    ctx->pc = 0x2CC8D8u;
    {
        const bool branch_taken_0x2cc8d8 = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x2CC8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC8D8u;
        // 0x2cc8dc: 0x6843304d  ldl         $v1, 0x304D($v0) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12365); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc8d8) {
            ctx->pc = 0x2E9694u;
            return;
        }
    }
    ctx->pc = 0x2CC8E0u;
label_2cc8e0:
    // 0x2cc8e0: 0x65736f6f  daddiu      $s3, $t3, 0x6F6F
    ctx->pc = 0x2cc8e0u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28527);
label_2cc8e4:
    // 0x2cc8e4: 0x61674120  daddi       $a3, $t3, 0x4120
    ctx->pc = 0x2cc8e4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)16672; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 7, res); }
label_2cc8e8:
    // 0x2cc8e8: 0x1b206e69  blez        $t9, . + 4 + (0x6E69 << 2)
label_2cc8ec:
    if (ctx->pc == 0x2CC8ECu) {
        ctx->pc = 0x2CC8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC8E8u;
        // 0x2cc8ec: 0x4d1b314d  .word       0x4D1B314D                   # INVALID     $t0, $k1, 0x314D # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
//         throw std::runtime_error("Unhandled opcode: 0x13 at 0x2CC8EC raw=0x4D1B314D");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CC8F0u;
        goto label_2cc8f0;
    }
    ctx->pc = 0x2CC8E8u;
    {
        const bool branch_taken_0x2cc8e8 = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x2CC8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC8E8u;
        // 0x2cc8ec: 0x4d1b314d  .word       0x4D1B314D                   # INVALID     $t0, $k1, 0x314D # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
//         throw std::runtime_error("Unhandled opcode: 0x13 at 0x2CC8EC raw=0x4D1B314D");
 /* MITIGATED */
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc8e8) {
            ctx->pc = 0x2E8290u;
            return;
        }
    }
    ctx->pc = 0x2CC8F0u;
label_2cc8f0:
    // 0x2cc8f0: 0x69784532  ldl         $t8, 0x4532($t3)
    ctx->pc = 0x2cc8f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 17714); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 24, (GPR_U64(ctx, 24) & keepMask) | (mem << shift)); }
label_2cc8f4:
    // 0x2cc8f4: 0x74  teq         $zero, $zero, 1
    ctx->pc = 0x2cc8f4u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2cc8f8:
    // 0x2cc8f8: 0x0  nop
    ctx->pc = 0x2cc8f8u;
    // NOP
label_2cc8fc:
    // 0x2cc8fc: 0x0  nop
    ctx->pc = 0x2cc8fcu;
    // NOP
    ctx->pc = 0x2cc900u;
    return;
}

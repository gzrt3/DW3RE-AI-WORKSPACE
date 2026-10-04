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


void FUN_0017d410_part103(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1af0f0u: goto label_1af0f0;
        case 0x1af0f4u: goto label_1af0f4;
        case 0x1af0f8u: goto label_1af0f8;
        case 0x1af0fcu: goto label_1af0fc;
        case 0x1af100u: goto label_1af100;
        case 0x1af104u: goto label_1af104;
        case 0x1af108u: goto label_1af108;
        case 0x1af10cu: goto label_1af10c;
        case 0x1af110u: goto label_1af110;
        case 0x1af114u: goto label_1af114;
        case 0x1af118u: goto label_1af118;
        case 0x1af11cu: goto label_1af11c;
        case 0x1af120u: goto label_1af120;
        case 0x1af124u: goto label_1af124;
        case 0x1af128u: goto label_1af128;
        case 0x1af12cu: goto label_1af12c;
        case 0x1af130u: goto label_1af130;
        case 0x1af134u: goto label_1af134;
        case 0x1af138u: goto label_1af138;
        case 0x1af13cu: goto label_1af13c;
        case 0x1af140u: goto label_1af140;
        case 0x1af144u: goto label_1af144;
        case 0x1af148u: goto label_1af148;
        case 0x1af14cu: goto label_1af14c;
        case 0x1af150u: goto label_1af150;
        case 0x1af154u: goto label_1af154;
        case 0x1af158u: goto label_1af158;
        case 0x1af15cu: goto label_1af15c;
        case 0x1af160u: goto label_1af160;
        case 0x1af164u: goto label_1af164;
        case 0x1af168u: goto label_1af168;
        case 0x1af16cu: goto label_1af16c;
        case 0x1af170u: goto label_1af170;
        case 0x1af174u: goto label_1af174;
        case 0x1af178u: goto label_1af178;
        case 0x1af17cu: goto label_1af17c;
        case 0x1af180u: goto label_1af180;
        case 0x1af184u: goto label_1af184;
        case 0x1af188u: goto label_1af188;
        case 0x1af18cu: goto label_1af18c;
        case 0x1af190u: goto label_1af190;
        case 0x1af194u: goto label_1af194;
        case 0x1af198u: goto label_1af198;
        case 0x1af19cu: goto label_1af19c;
        case 0x1af1a0u: goto label_1af1a0;
        case 0x1af1a4u: goto label_1af1a4;
        case 0x1af1a8u: goto label_1af1a8;
        case 0x1af1acu: goto label_1af1ac;
        case 0x1af1b0u: goto label_1af1b0;
        case 0x1af1b4u: goto label_1af1b4;
        case 0x1af1b8u: goto label_1af1b8;
        case 0x1af1bcu: goto label_1af1bc;
        case 0x1af1c0u: goto label_1af1c0;
        case 0x1af1c4u: goto label_1af1c4;
        case 0x1af1c8u: goto label_1af1c8;
        case 0x1af1ccu: goto label_1af1cc;
        case 0x1af1d0u: goto label_1af1d0;
        case 0x1af1d4u: goto label_1af1d4;
        case 0x1af1d8u: goto label_1af1d8;
        case 0x1af1dcu: goto label_1af1dc;
        case 0x1af1e0u: goto label_1af1e0;
        case 0x1af1e4u: goto label_1af1e4;
        case 0x1af1e8u: goto label_1af1e8;
        case 0x1af1ecu: goto label_1af1ec;
        case 0x1af1f0u: goto label_1af1f0;
        case 0x1af1f4u: goto label_1af1f4;
        case 0x1af1f8u: goto label_1af1f8;
        case 0x1af1fcu: goto label_1af1fc;
        case 0x1af200u: goto label_1af200;
        case 0x1af204u: goto label_1af204;
        case 0x1af208u: goto label_1af208;
        case 0x1af20cu: goto label_1af20c;
        case 0x1af210u: goto label_1af210;
        case 0x1af214u: goto label_1af214;
        case 0x1af218u: goto label_1af218;
        case 0x1af21cu: goto label_1af21c;
        case 0x1af220u: goto label_1af220;
        case 0x1af224u: goto label_1af224;
        case 0x1af228u: goto label_1af228;
        case 0x1af22cu: goto label_1af22c;
        case 0x1af230u: goto label_1af230;
        case 0x1af234u: goto label_1af234;
        case 0x1af238u: goto label_1af238;
        case 0x1af23cu: goto label_1af23c;
        case 0x1af240u: goto label_1af240;
        case 0x1af244u: goto label_1af244;
        case 0x1af248u: goto label_1af248;
        case 0x1af24cu: goto label_1af24c;
        case 0x1af250u: goto label_1af250;
        case 0x1af254u: goto label_1af254;
        case 0x1af258u: goto label_1af258;
        case 0x1af25cu: goto label_1af25c;
        case 0x1af260u: goto label_1af260;
        case 0x1af264u: goto label_1af264;
        case 0x1af268u: goto label_1af268;
        case 0x1af26cu: goto label_1af26c;
        case 0x1af270u: goto label_1af270;
        case 0x1af274u: goto label_1af274;
        case 0x1af278u: goto label_1af278;
        case 0x1af27cu: goto label_1af27c;
        case 0x1af280u: goto label_1af280;
        case 0x1af284u: goto label_1af284;
        case 0x1af288u: goto label_1af288;
        case 0x1af28cu: goto label_1af28c;
        case 0x1af290u: goto label_1af290;
        case 0x1af294u: goto label_1af294;
        case 0x1af298u: goto label_1af298;
        case 0x1af29cu: goto label_1af29c;
        case 0x1af2a0u: goto label_1af2a0;
        case 0x1af2a4u: goto label_1af2a4;
        case 0x1af2a8u: goto label_1af2a8;
        case 0x1af2acu: goto label_1af2ac;
        case 0x1af2b0u: goto label_1af2b0;
        case 0x1af2b4u: goto label_1af2b4;
        case 0x1af2b8u: goto label_1af2b8;
        case 0x1af2bcu: goto label_1af2bc;
        case 0x1af2c0u: goto label_1af2c0;
        case 0x1af2c4u: goto label_1af2c4;
        case 0x1af2c8u: goto label_1af2c8;
        case 0x1af2ccu: goto label_1af2cc;
        case 0x1af2d0u: goto label_1af2d0;
        case 0x1af2d4u: goto label_1af2d4;
        case 0x1af2d8u: goto label_1af2d8;
        case 0x1af2dcu: goto label_1af2dc;
        case 0x1af2e0u: goto label_1af2e0;
        case 0x1af2e4u: goto label_1af2e4;
        case 0x1af2e8u: goto label_1af2e8;
        case 0x1af2ecu: goto label_1af2ec;
        case 0x1af2f0u: goto label_1af2f0;
        case 0x1af2f4u: goto label_1af2f4;
        case 0x1af2f8u: goto label_1af2f8;
        case 0x1af2fcu: goto label_1af2fc;
        case 0x1af300u: goto label_1af300;
        case 0x1af304u: goto label_1af304;
        case 0x1af308u: goto label_1af308;
        case 0x1af30cu: goto label_1af30c;
        case 0x1af310u: goto label_1af310;
        case 0x1af314u: goto label_1af314;
        case 0x1af318u: goto label_1af318;
        case 0x1af31cu: goto label_1af31c;
        case 0x1af320u: goto label_1af320;
        case 0x1af324u: goto label_1af324;
        case 0x1af328u: goto label_1af328;
        case 0x1af32cu: goto label_1af32c;
        case 0x1af330u: goto label_1af330;
        case 0x1af334u: goto label_1af334;
        case 0x1af338u: goto label_1af338;
        case 0x1af33cu: goto label_1af33c;
        case 0x1af340u: goto label_1af340;
        case 0x1af344u: goto label_1af344;
        case 0x1af348u: goto label_1af348;
        case 0x1af34cu: goto label_1af34c;
        case 0x1af350u: goto label_1af350;
        case 0x1af354u: goto label_1af354;
        case 0x1af358u: goto label_1af358;
        case 0x1af35cu: goto label_1af35c;
        case 0x1af360u: goto label_1af360;
        case 0x1af364u: goto label_1af364;
        case 0x1af368u: goto label_1af368;
        case 0x1af36cu: goto label_1af36c;
        case 0x1af370u: goto label_1af370;
        case 0x1af374u: goto label_1af374;
        case 0x1af378u: goto label_1af378;
        case 0x1af37cu: goto label_1af37c;
        case 0x1af380u: goto label_1af380;
        case 0x1af384u: goto label_1af384;
        case 0x1af388u: goto label_1af388;
        case 0x1af38cu: goto label_1af38c;
        case 0x1af390u: goto label_1af390;
        case 0x1af394u: goto label_1af394;
        case 0x1af398u: goto label_1af398;
        case 0x1af39cu: goto label_1af39c;
        case 0x1af3a0u: goto label_1af3a0;
        case 0x1af3a4u: goto label_1af3a4;
        case 0x1af3a8u: goto label_1af3a8;
        case 0x1af3acu: goto label_1af3ac;
        case 0x1af3b0u: goto label_1af3b0;
        case 0x1af3b4u: goto label_1af3b4;
        case 0x1af3b8u: goto label_1af3b8;
        case 0x1af3bcu: goto label_1af3bc;
        case 0x1af3c0u: goto label_1af3c0;
        case 0x1af3c4u: goto label_1af3c4;
        case 0x1af3c8u: goto label_1af3c8;
        case 0x1af3ccu: goto label_1af3cc;
        case 0x1af3d0u: goto label_1af3d0;
        case 0x1af3d4u: goto label_1af3d4;
        case 0x1af3d8u: goto label_1af3d8;
        case 0x1af3dcu: goto label_1af3dc;
        case 0x1af3e0u: goto label_1af3e0;
        case 0x1af3e4u: goto label_1af3e4;
        case 0x1af3e8u: goto label_1af3e8;
        case 0x1af3ecu: goto label_1af3ec;
        case 0x1af3f0u: goto label_1af3f0;
        case 0x1af3f4u: goto label_1af3f4;
        case 0x1af3f8u: goto label_1af3f8;
        case 0x1af3fcu: goto label_1af3fc;
        case 0x1af400u: goto label_1af400;
        case 0x1af404u: goto label_1af404;
        case 0x1af408u: goto label_1af408;
        case 0x1af40cu: goto label_1af40c;
        case 0x1af410u: goto label_1af410;
        case 0x1af414u: goto label_1af414;
        case 0x1af418u: goto label_1af418;
        case 0x1af41cu: goto label_1af41c;
        case 0x1af420u: goto label_1af420;
        case 0x1af424u: goto label_1af424;
        case 0x1af428u: goto label_1af428;
        case 0x1af42cu: goto label_1af42c;
        case 0x1af430u: goto label_1af430;
        case 0x1af434u: goto label_1af434;
        case 0x1af438u: goto label_1af438;
        case 0x1af43cu: goto label_1af43c;
        case 0x1af440u: goto label_1af440;
        case 0x1af444u: goto label_1af444;
        case 0x1af448u: goto label_1af448;
        case 0x1af44cu: goto label_1af44c;
        case 0x1af450u: goto label_1af450;
        case 0x1af454u: goto label_1af454;
        case 0x1af458u: goto label_1af458;
        case 0x1af45cu: goto label_1af45c;
        case 0x1af460u: goto label_1af460;
        case 0x1af464u: goto label_1af464;
        case 0x1af468u: goto label_1af468;
        case 0x1af46cu: goto label_1af46c;
        case 0x1af470u: goto label_1af470;
        case 0x1af474u: goto label_1af474;
        case 0x1af478u: goto label_1af478;
        case 0x1af47cu: goto label_1af47c;
        case 0x1af480u: goto label_1af480;
        case 0x1af484u: goto label_1af484;
        case 0x1af488u: goto label_1af488;
        case 0x1af48cu: goto label_1af48c;
        case 0x1af490u: goto label_1af490;
        case 0x1af494u: goto label_1af494;
        case 0x1af498u: goto label_1af498;
        case 0x1af49cu: goto label_1af49c;
        case 0x1af4a0u: goto label_1af4a0;
        case 0x1af4a4u: goto label_1af4a4;
        case 0x1af4a8u: goto label_1af4a8;
        case 0x1af4acu: goto label_1af4ac;
        case 0x1af4b0u: goto label_1af4b0;
        case 0x1af4b4u: goto label_1af4b4;
        case 0x1af4b8u: goto label_1af4b8;
        case 0x1af4bcu: goto label_1af4bc;
        case 0x1af4c0u: goto label_1af4c0;
        case 0x1af4c4u: goto label_1af4c4;
        case 0x1af4c8u: goto label_1af4c8;
        case 0x1af4ccu: goto label_1af4cc;
        case 0x1af4d0u: goto label_1af4d0;
        case 0x1af4d4u: goto label_1af4d4;
        case 0x1af4d8u: goto label_1af4d8;
        case 0x1af4dcu: goto label_1af4dc;
        case 0x1af4e0u: goto label_1af4e0;
        case 0x1af4e4u: goto label_1af4e4;
        case 0x1af4e8u: goto label_1af4e8;
        case 0x1af4ecu: goto label_1af4ec;
        case 0x1af4f0u: goto label_1af4f0;
        case 0x1af4f4u: goto label_1af4f4;
        case 0x1af4f8u: goto label_1af4f8;
        case 0x1af4fcu: goto label_1af4fc;
        case 0x1af500u: goto label_1af500;
        case 0x1af504u: goto label_1af504;
        case 0x1af508u: goto label_1af508;
        case 0x1af50cu: goto label_1af50c;
        case 0x1af510u: goto label_1af510;
        case 0x1af514u: goto label_1af514;
        case 0x1af518u: goto label_1af518;
        case 0x1af51cu: goto label_1af51c;
        case 0x1af520u: goto label_1af520;
        case 0x1af524u: goto label_1af524;
        case 0x1af528u: goto label_1af528;
        case 0x1af52cu: goto label_1af52c;
        case 0x1af530u: goto label_1af530;
        case 0x1af534u: goto label_1af534;
        case 0x1af538u: goto label_1af538;
        case 0x1af53cu: goto label_1af53c;
        case 0x1af540u: goto label_1af540;
        case 0x1af544u: goto label_1af544;
        case 0x1af548u: goto label_1af548;
        case 0x1af54cu: goto label_1af54c;
        case 0x1af550u: goto label_1af550;
        case 0x1af554u: goto label_1af554;
        case 0x1af558u: goto label_1af558;
        case 0x1af55cu: goto label_1af55c;
        case 0x1af560u: goto label_1af560;
        case 0x1af564u: goto label_1af564;
        case 0x1af568u: goto label_1af568;
        case 0x1af56cu: goto label_1af56c;
        case 0x1af570u: goto label_1af570;
        case 0x1af574u: goto label_1af574;
        case 0x1af578u: goto label_1af578;
        case 0x1af57cu: goto label_1af57c;
        case 0x1af580u: goto label_1af580;
        case 0x1af584u: goto label_1af584;
        case 0x1af588u: goto label_1af588;
        case 0x1af58cu: goto label_1af58c;
        case 0x1af590u: goto label_1af590;
        case 0x1af594u: goto label_1af594;
        case 0x1af598u: goto label_1af598;
        case 0x1af59cu: goto label_1af59c;
        case 0x1af5a0u: goto label_1af5a0;
        case 0x1af5a4u: goto label_1af5a4;
        case 0x1af5a8u: goto label_1af5a8;
        case 0x1af5acu: goto label_1af5ac;
        case 0x1af5b0u: goto label_1af5b0;
        case 0x1af5b4u: goto label_1af5b4;
        case 0x1af5b8u: goto label_1af5b8;
        case 0x1af5bcu: goto label_1af5bc;
        case 0x1af5c0u: goto label_1af5c0;
        case 0x1af5c4u: goto label_1af5c4;
        case 0x1af5c8u: goto label_1af5c8;
        case 0x1af5ccu: goto label_1af5cc;
        case 0x1af5d0u: goto label_1af5d0;
        case 0x1af5d4u: goto label_1af5d4;
        case 0x1af5d8u: goto label_1af5d8;
        case 0x1af5dcu: goto label_1af5dc;
        case 0x1af5e0u: goto label_1af5e0;
        case 0x1af5e4u: goto label_1af5e4;
        case 0x1af5e8u: goto label_1af5e8;
        case 0x1af5ecu: goto label_1af5ec;
        case 0x1af5f0u: goto label_1af5f0;
        case 0x1af5f4u: goto label_1af5f4;
        case 0x1af5f8u: goto label_1af5f8;
        case 0x1af5fcu: goto label_1af5fc;
        case 0x1af600u: goto label_1af600;
        case 0x1af604u: goto label_1af604;
        case 0x1af608u: goto label_1af608;
        case 0x1af60cu: goto label_1af60c;
        case 0x1af610u: goto label_1af610;
        case 0x1af614u: goto label_1af614;
        case 0x1af618u: goto label_1af618;
        case 0x1af61cu: goto label_1af61c;
        case 0x1af620u: goto label_1af620;
        case 0x1af624u: goto label_1af624;
        case 0x1af628u: goto label_1af628;
        case 0x1af62cu: goto label_1af62c;
        case 0x1af630u: goto label_1af630;
        case 0x1af634u: goto label_1af634;
        case 0x1af638u: goto label_1af638;
        case 0x1af63cu: goto label_1af63c;
        case 0x1af640u: goto label_1af640;
        case 0x1af644u: goto label_1af644;
        case 0x1af648u: goto label_1af648;
        case 0x1af64cu: goto label_1af64c;
        case 0x1af650u: goto label_1af650;
        case 0x1af654u: goto label_1af654;
        case 0x1af658u: goto label_1af658;
        case 0x1af65cu: goto label_1af65c;
        case 0x1af660u: goto label_1af660;
        case 0x1af664u: goto label_1af664;
        case 0x1af668u: goto label_1af668;
        case 0x1af66cu: goto label_1af66c;
        case 0x1af670u: goto label_1af670;
        case 0x1af674u: goto label_1af674;
        case 0x1af678u: goto label_1af678;
        case 0x1af67cu: goto label_1af67c;
        case 0x1af680u: goto label_1af680;
        case 0x1af684u: goto label_1af684;
        case 0x1af688u: goto label_1af688;
        case 0x1af68cu: goto label_1af68c;
        case 0x1af690u: goto label_1af690;
        case 0x1af694u: goto label_1af694;
        case 0x1af698u: goto label_1af698;
        case 0x1af69cu: goto label_1af69c;
        case 0x1af6a0u: goto label_1af6a0;
        case 0x1af6a4u: goto label_1af6a4;
        case 0x1af6a8u: goto label_1af6a8;
        case 0x1af6acu: goto label_1af6ac;
        case 0x1af6b0u: goto label_1af6b0;
        case 0x1af6b4u: goto label_1af6b4;
        case 0x1af6b8u: goto label_1af6b8;
        case 0x1af6bcu: goto label_1af6bc;
        case 0x1af6c0u: goto label_1af6c0;
        case 0x1af6c4u: goto label_1af6c4;
        case 0x1af6c8u: goto label_1af6c8;
        case 0x1af6ccu: goto label_1af6cc;
        case 0x1af6d0u: goto label_1af6d0;
        case 0x1af6d4u: goto label_1af6d4;
        case 0x1af6d8u: goto label_1af6d8;
        case 0x1af6dcu: goto label_1af6dc;
        case 0x1af6e0u: goto label_1af6e0;
        case 0x1af6e4u: goto label_1af6e4;
        case 0x1af6e8u: goto label_1af6e8;
        case 0x1af6ecu: goto label_1af6ec;
        case 0x1af6f0u: goto label_1af6f0;
        case 0x1af6f4u: goto label_1af6f4;
        case 0x1af6f8u: goto label_1af6f8;
        case 0x1af6fcu: goto label_1af6fc;
        case 0x1af700u: goto label_1af700;
        case 0x1af704u: goto label_1af704;
        case 0x1af708u: goto label_1af708;
        case 0x1af70cu: goto label_1af70c;
        case 0x1af710u: goto label_1af710;
        case 0x1af714u: goto label_1af714;
        case 0x1af718u: goto label_1af718;
        case 0x1af71cu: goto label_1af71c;
        case 0x1af720u: goto label_1af720;
        case 0x1af724u: goto label_1af724;
        case 0x1af728u: goto label_1af728;
        case 0x1af72cu: goto label_1af72c;
        case 0x1af730u: goto label_1af730;
        case 0x1af734u: goto label_1af734;
        case 0x1af738u: goto label_1af738;
        case 0x1af73cu: goto label_1af73c;
        case 0x1af740u: goto label_1af740;
        case 0x1af744u: goto label_1af744;
        case 0x1af748u: goto label_1af748;
        case 0x1af74cu: goto label_1af74c;
        case 0x1af750u: goto label_1af750;
        case 0x1af754u: goto label_1af754;
        case 0x1af758u: goto label_1af758;
        case 0x1af75cu: goto label_1af75c;
        case 0x1af760u: goto label_1af760;
        case 0x1af764u: goto label_1af764;
        case 0x1af768u: goto label_1af768;
        case 0x1af76cu: goto label_1af76c;
        case 0x1af770u: goto label_1af770;
        case 0x1af774u: goto label_1af774;
        case 0x1af778u: goto label_1af778;
        case 0x1af77cu: goto label_1af77c;
        case 0x1af780u: goto label_1af780;
        case 0x1af784u: goto label_1af784;
        case 0x1af788u: goto label_1af788;
        case 0x1af78cu: goto label_1af78c;
        case 0x1af790u: goto label_1af790;
        case 0x1af794u: goto label_1af794;
        case 0x1af798u: goto label_1af798;
        case 0x1af79cu: goto label_1af79c;
        case 0x1af7a0u: goto label_1af7a0;
        case 0x1af7a4u: goto label_1af7a4;
        case 0x1af7a8u: goto label_1af7a8;
        case 0x1af7acu: goto label_1af7ac;
        case 0x1af7b0u: goto label_1af7b0;
        case 0x1af7b4u: goto label_1af7b4;
        case 0x1af7b8u: goto label_1af7b8;
        case 0x1af7bcu: goto label_1af7bc;
        case 0x1af7c0u: goto label_1af7c0;
        case 0x1af7c4u: goto label_1af7c4;
        case 0x1af7c8u: goto label_1af7c8;
        case 0x1af7ccu: goto label_1af7cc;
        case 0x1af7d0u: goto label_1af7d0;
        case 0x1af7d4u: goto label_1af7d4;
        case 0x1af7d8u: goto label_1af7d8;
        case 0x1af7dcu: goto label_1af7dc;
        case 0x1af7e0u: goto label_1af7e0;
        case 0x1af7e4u: goto label_1af7e4;
        case 0x1af7e8u: goto label_1af7e8;
        case 0x1af7ecu: goto label_1af7ec;
        case 0x1af7f0u: goto label_1af7f0;
        case 0x1af7f4u: goto label_1af7f4;
        case 0x1af7f8u: goto label_1af7f8;
        case 0x1af7fcu: goto label_1af7fc;
        case 0x1af800u: goto label_1af800;
        case 0x1af804u: goto label_1af804;
        case 0x1af808u: goto label_1af808;
        case 0x1af80cu: goto label_1af80c;
        case 0x1af810u: goto label_1af810;
        case 0x1af814u: goto label_1af814;
        case 0x1af818u: goto label_1af818;
        case 0x1af81cu: goto label_1af81c;
        case 0x1af820u: goto label_1af820;
        case 0x1af824u: goto label_1af824;
        case 0x1af828u: goto label_1af828;
        case 0x1af82cu: goto label_1af82c;
        case 0x1af830u: goto label_1af830;
        case 0x1af834u: goto label_1af834;
        case 0x1af838u: goto label_1af838;
        case 0x1af83cu: goto label_1af83c;
        case 0x1af840u: goto label_1af840;
        case 0x1af844u: goto label_1af844;
        case 0x1af848u: goto label_1af848;
        case 0x1af84cu: goto label_1af84c;
        case 0x1af850u: goto label_1af850;
        case 0x1af854u: goto label_1af854;
        case 0x1af858u: goto label_1af858;
        case 0x1af85cu: goto label_1af85c;
        case 0x1af860u: goto label_1af860;
        case 0x1af864u: goto label_1af864;
        case 0x1af868u: goto label_1af868;
        case 0x1af86cu: goto label_1af86c;
        case 0x1af870u: goto label_1af870;
        case 0x1af874u: goto label_1af874;
        case 0x1af878u: goto label_1af878;
        case 0x1af87cu: goto label_1af87c;
        case 0x1af880u: goto label_1af880;
        case 0x1af884u: goto label_1af884;
        case 0x1af888u: goto label_1af888;
        case 0x1af88cu: goto label_1af88c;
        case 0x1af890u: goto label_1af890;
        case 0x1af894u: goto label_1af894;
        case 0x1af898u: goto label_1af898;
        case 0x1af89cu: goto label_1af89c;
        case 0x1af8a0u: goto label_1af8a0;
        case 0x1af8a4u: goto label_1af8a4;
        case 0x1af8a8u: goto label_1af8a8;
        case 0x1af8acu: goto label_1af8ac;
        case 0x1af8b0u: goto label_1af8b0;
        case 0x1af8b4u: goto label_1af8b4;
        case 0x1af8b8u: goto label_1af8b8;
        case 0x1af8bcu: goto label_1af8bc;
        default: return;
    }

label_1af0f0:
    if (ctx->pc == 0x1AF0F0u) {
        ctx->pc = 0x1AF0F4u;
        goto label_1af0f4;
    }
    ctx->pc = 0x1AF0ECu;
    SET_GPR_U32(ctx, 31, 0x1AF0F4u);
    ctx->pc = 0x1AD4A8u;
    { ctx->pc = 0x1ad4a8; return; }
    ctx->pc = 0x1AF0F4u;
label_1af0f4:
    // 0x1af0f4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1af0f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1af0f8:
    // 0x1af0f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1af0f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1af0fc:
    // 0x1af0fc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1af0fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1af100:
    // 0x1af100: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1af100u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1af104:
    // 0x1af104: 0x3e00008  jr          $ra
label_1af108:
    if (ctx->pc == 0x1AF108u) {
        ctx->pc = 0x1AF108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF104u;
        // 0x1af108: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF10Cu;
        goto label_1af10c;
    }
    ctx->pc = 0x1AF104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF104u;
        // 0x1af108: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF10Cu;
label_1af10c:
    // 0x1af10c: 0x0  nop
    ctx->pc = 0x1af10cu;
    // NOP
label_1af110:
    // 0x1af110: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1af110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1af114:
    // 0x1af114: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1af114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1af118:
    // 0x1af118: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1af118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1af11c:
    // 0x1af11c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1af11cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1af120:
    // 0x1af120: 0x3c100028  lui         $s0, 0x28
    ctx->pc = 0x1af120u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)40 << 16));
label_1af124:
    // 0x1af124: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1af124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1af128:
    // 0x1af128: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x1af128u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
label_1af12c:
    // 0x1af12c: 0xae0372d4  sw          $v1, 0x72D4($s0)
    ctx->pc = 0x1af12cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 29396), GPR_U32(ctx, 3));
label_1af130:
    // 0x1af130: 0x8e0272d4  lw          $v0, 0x72D4($s0)
    ctx->pc = 0x1af130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 29396)));
label_1af134:
    // 0x1af134: 0xac8272d8  sw          $v0, 0x72D8($a0)
    ctx->pc = 0x1af134u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 29400), GPR_U32(ctx, 2));
label_1af138:
    // 0x1af138: 0x8e0372d4  lw          $v1, 0x72D4($s0)
    ctx->pc = 0x1af138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 29396)));
label_1af13c:
    // 0x1af13c: 0x14650006  bne         $v1, $a1, . + 4 + (0x6 << 2)
label_1af140:
    if (ctx->pc == 0x1AF140u) {
        ctx->pc = 0x1AF140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF13Cu;
        // 0x1af140: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF144u;
        goto label_1af144;
    }
    ctx->pc = 0x1AF13Cu;
    {
        const bool branch_taken_0x1af13c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1AF140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF13Cu;
        // 0x1af140: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af13c) {
            ctx->pc = 0x1AF158u;
            goto label_1af158;
        }
    }
    ctx->pc = 0x1AF144u;
label_1af144:
    // 0x1af144: 0xae0072d4  sw          $zero, 0x72D4($s0)
    ctx->pc = 0x1af144u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 29396), GPR_U32(ctx, 0));
label_1af148:
    // 0x1af148: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1af148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1af14c:
    // 0x1af14c: 0xac4072b0  sw          $zero, 0x72B0($v0)
    ctx->pc = 0x1af14cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 29360), GPR_U32(ctx, 0));
label_1af150:
    // 0x1af150: 0x10000014  b           . + 4 + (0x14 << 2)
label_1af154:
    if (ctx->pc == 0x1AF154u) {
        ctx->pc = 0x1AF154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF150u;
        // 0x1af154: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF158u;
        goto label_1af158;
    }
    ctx->pc = 0x1AF150u;
    {
        const bool branch_taken_0x1af150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF150u;
        // 0x1af154: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af150) {
            ctx->pc = 0x1AF1A4u;
            goto label_1af1a4;
        }
    }
    ctx->pc = 0x1AF158u;
label_1af158:
    // 0x1af158: 0x8c4472a8  lw          $a0, 0x72A8($v0)
    ctx->pc = 0x1af158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29352)));
label_1af15c:
    // 0x1af15c: 0xc069214  jal         func_1A4850
label_1af160:
    if (ctx->pc == 0x1AF160u) {
        ctx->pc = 0x1AF164u;
        goto label_1af164;
    }
    ctx->pc = 0x1AF15Cu;
    SET_GPR_U32(ctx, 31, 0x1AF164u);
    ctx->pc = 0x1A4850u;
    { ctx->pc = 0x1a4850; return; }
    ctx->pc = 0x1AF164u;
label_1af164:
    // 0x1af164: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1af164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_1af168:
    // 0x1af168: 0x8c627294  lw          $v0, 0x7294($v1)
    ctx->pc = 0x1af168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29332)));
label_1af16c:
    // 0x1af16c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1af170:
    if (ctx->pc == 0x1AF170u) {
        ctx->pc = 0x1AF170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF16Cu;
        // 0x1af170: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF174u;
        goto label_1af174;
    }
    ctx->pc = 0x1AF16Cu;
    {
        const bool branch_taken_0x1af16c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF16Cu;
        // 0x1af170: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af16c) {
            ctx->pc = 0x1AF194u;
            goto label_1af194;
        }
    }
    ctx->pc = 0x1AF174u;
label_1af174:
    // 0x1af174: 0x8c435f40  lw          $v1, 0x5F40($v0)
    ctx->pc = 0x1af174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24384)));
label_1af178:
    // 0x1af178: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1af17c:
    if (ctx->pc == 0x1AF17Cu) {
        ctx->pc = 0x1AF17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF178u;
        // 0x1af17c: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF180u;
        goto label_1af180;
    }
    ctx->pc = 0x1AF178u;
    {
        const bool branch_taken_0x1af178 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF178u;
        // 0x1af17c: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af178) {
            ctx->pc = 0x1AF194u;
            goto label_1af194;
        }
    }
    ctx->pc = 0x1AF180u;
label_1af180:
    // 0x1af180: 0x8c4472a0  lw          $a0, 0x72A0($v0)
    ctx->pc = 0x1af180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29344)));
label_1af184:
    // 0x1af184: 0xc069214  jal         func_1A4850
label_1af188:
    if (ctx->pc == 0x1AF188u) {
        ctx->pc = 0x1AF18Cu;
        goto label_1af18c;
    }
    ctx->pc = 0x1AF184u;
    SET_GPR_U32(ctx, 31, 0x1AF18Cu);
    ctx->pc = 0x1A4850u;
    { ctx->pc = 0x1a4850; return; }
    ctx->pc = 0x1AF18Cu;
label_1af18c:
    // 0x1af18c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1af190:
    if (ctx->pc == 0x1AF190u) {
        ctx->pc = 0x1AF194u;
        goto label_1af194;
    }
    ctx->pc = 0x1AF18Cu;
    {
        const bool branch_taken_0x1af18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af18c) {
            ctx->pc = 0x1AF19Cu;
            goto label_1af19c;
        }
    }
    ctx->pc = 0x1AF194u;
label_1af194:
    // 0x1af194: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1af194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1af198:
    // 0x1af198: 0xac4072b0  sw          $zero, 0x72B0($v0)
    ctx->pc = 0x1af198u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 29360), GPR_U32(ctx, 0));
label_1af19c:
    // 0x1af19c: 0xae0072d4  sw          $zero, 0x72D4($s0)
    ctx->pc = 0x1af19cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 29396), GPR_U32(ctx, 0));
label_1af1a0:
    // 0x1af1a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1af1a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1af1a4:
    // 0x1af1a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1af1a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1af1a8:
    // 0x1af1a8: 0x3e00008  jr          $ra
label_1af1ac:
    if (ctx->pc == 0x1AF1ACu) {
        ctx->pc = 0x1AF1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF1A8u;
        // 0x1af1ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF1B0u;
        goto label_1af1b0;
    }
    ctx->pc = 0x1AF1A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF1A8u;
        // 0x1af1ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF1A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF1B0u;
label_1af1b0:
    // 0x1af1b0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1af1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_1af1b4:
    // 0x1af1b4: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x1af1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
label_1af1b8:
    // 0x1af1b8: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x1af1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
label_1af1bc:
    // 0x1af1bc: 0x3c1e0028  lui         $fp, 0x28
    ctx->pc = 0x1af1bcu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)40 << 16));
label_1af1c0:
    // 0x1af1c0: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x1af1c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_1af1c4:
    // 0x1af1c4: 0x3c170028  lui         $s7, 0x28
    ctx->pc = 0x1af1c4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)40 << 16));
label_1af1c8:
    // 0x1af1c8: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1af1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_1af1cc:
    // 0x1af1cc: 0x3c160037  lui         $s6, 0x37
    ctx->pc = 0x1af1ccu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)55 << 16));
label_1af1d0:
    // 0x1af1d0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1af1d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_1af1d4:
    // 0x1af1d4: 0x3c150028  lui         $s5, 0x28
    ctx->pc = 0x1af1d4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)40 << 16));
label_1af1d8:
    // 0x1af1d8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1af1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_1af1dc:
    // 0x1af1dc: 0x3c14002d  lui         $s4, 0x2D
    ctx->pc = 0x1af1dcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)45 << 16));
label_1af1e0:
    // 0x1af1e0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1af1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1af1e4:
    // 0x1af1e4: 0x3c130028  lui         $s3, 0x28
    ctx->pc = 0x1af1e4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)40 << 16));
label_1af1e8:
    // 0x1af1e8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1af1e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1af1ec:
    // 0x1af1ec: 0x3c120028  lui         $s2, 0x28
    ctx->pc = 0x1af1ecu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)40 << 16));
label_1af1f0:
    // 0x1af1f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1af1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1af1f4:
    // 0x1af1f4: 0x3c110037  lui         $s1, 0x37
    ctx->pc = 0x1af1f4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)55 << 16));
label_1af1f8:
    // 0x1af1f8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1af1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1af1fc:
    // 0x1af1fc: 0x3c100028  lui         $s0, 0x28
    ctx->pc = 0x1af1fcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)40 << 16));
label_1af200:
    // 0x1af200: 0xc069218  jal         func_1A4860
label_1af204:
    if (ctx->pc == 0x1AF204u) {
        ctx->pc = 0x1AF204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF200u;
        // 0x1af204: 0x8fc472a0  lw          $a0, 0x72A0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 29344)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF208u;
        goto label_1af208;
    }
    ctx->pc = 0x1AF200u;
    SET_GPR_U32(ctx, 31, 0x1AF208u);
    ctx->pc = 0x1AF204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF200u;
    // 0x1af204: 0x8fc472a0  lw          $a0, 0x72A0($fp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 29344)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    { ctx->pc = 0x1a4860; return; }
    ctx->pc = 0x1AF208u;
label_1af208:
    // 0x1af208: 0x8e6372d4  lw          $v1, 0x72D4($s3)
    ctx->pc = 0x1af208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 29396)));
label_1af20c:
    // 0x1af20c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1af20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1af210:
    // 0x1af210: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_1af214:
    if (ctx->pc == 0x1AF214u) {
        ctx->pc = 0x1AF214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF210u;
        // 0x1af214: 0x8ea27290  lw          $v0, 0x7290($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 29328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF218u;
        goto label_1af218;
    }
    ctx->pc = 0x1AF210u;
    {
        const bool branch_taken_0x1af210 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AF214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF210u;
        // 0x1af214: 0x8ea27290  lw          $v0, 0x7290($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 29328)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af210) {
            ctx->pc = 0x1AF230u;
            goto label_1af230;
        }
    }
    ctx->pc = 0x1AF218u;
label_1af218:
    // 0x1af218: 0xae4072b0  sw          $zero, 0x72B0($s2)
    ctx->pc = 0x1af218u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 29360), GPR_U32(ctx, 0));
label_1af21c:
    // 0x1af21c: 0xae6072d4  sw          $zero, 0x72D4($s3)
    ctx->pc = 0x1af21cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 29396), GPR_U32(ctx, 0));
label_1af220:
    // 0x1af220: 0xaee07294  sw          $zero, 0x7294($s7)
    ctx->pc = 0x1af220u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 29332), GPR_U32(ctx, 0));
label_1af224:
    // 0x1af224: 0xc069198  jal         func_1A4660
label_1af228:
    if (ctx->pc == 0x1AF228u) {
        ctx->pc = 0x1AF228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF224u;
        // 0x1af228: 0xaec05f4c  sw          $zero, 0x5F4C($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 24396), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF22Cu;
        goto label_1af22c;
    }
    ctx->pc = 0x1AF224u;
    SET_GPR_U32(ctx, 31, 0x1AF22Cu);
    ctx->pc = 0x1AF228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF224u;
    // 0x1af228: 0xaec05f4c  sw          $zero, 0x5F4C($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 24396), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4660u;
    { ctx->pc = 0x1a4660; return; }
    ctx->pc = 0x1AF22Cu;
label_1af22c:
    // 0x1af22c: 0x8ea27290  lw          $v0, 0x7290($s5)
    ctx->pc = 0x1af22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 29328)));
label_1af230:
    // 0x1af230: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_1af234:
    if (ctx->pc == 0x1AF234u) {
        ctx->pc = 0x1AF234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF230u;
        // 0x1af234: 0x2684a950  addiu       $a0, $s4, -0x56B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294945104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF238u;
        goto label_1af238;
    }
    ctx->pc = 0x1AF230u;
    {
        const bool branch_taken_0x1af230 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1AF234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF230u;
        // 0x1af234: 0x2684a950  addiu       $a0, $s4, -0x56B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294945104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af230) {
            ctx->pc = 0x1AF244u;
            goto label_1af244;
        }
    }
    ctx->pc = 0x1AF238u;
label_1af238:
    // 0x1af238: 0x8e255f40  lw          $a1, 0x5F40($s1)
    ctx->pc = 0x1af238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24384)));
label_1af23c:
    // 0x1af23c: 0xc069a30  jal         func_1A68C0
label_1af240:
    if (ctx->pc == 0x1AF240u) {
        ctx->pc = 0x1AF240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF23Cu;
        // 0x1af240: 0x8e0672d8  lw          $a2, 0x72D8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 29400)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF244u;
        goto label_1af244;
    }
    ctx->pc = 0x1AF23Cu;
    SET_GPR_U32(ctx, 31, 0x1AF244u);
    ctx->pc = 0x1AF240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF23Cu;
    // 0x1af240: 0x8e0672d8  lw          $a2, 0x72D8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 29400)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    { ctx->pc = 0x1a68c0; return; }
    ctx->pc = 0x1AF244u;
label_1af244:
    // 0x1af244: 0x8e235f40  lw          $v1, 0x5F40($s1)
    ctx->pc = 0x1af244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24384)));
label_1af248:
    // 0x1af248: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1af24c:
    if (ctx->pc == 0x1AF24Cu) {
        ctx->pc = 0x1AF250u;
        goto label_1af250;
    }
    ctx->pc = 0x1AF248u;
    {
        const bool branch_taken_0x1af248 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af248) {
            ctx->pc = 0x1AF264u;
            goto label_1af264;
        }
    }
    ctx->pc = 0x1AF250u;
label_1af250:
    // 0x1af250: 0x8e0272d8  lw          $v0, 0x72D8($s0)
    ctx->pc = 0x1af250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 29400)));
label_1af254:
    // 0x1af254: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1af258:
    if (ctx->pc == 0x1AF258u) {
        ctx->pc = 0x1AF25Cu;
        goto label_1af25c;
    }
    ctx->pc = 0x1AF254u;
    {
        const bool branch_taken_0x1af254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af254) {
            ctx->pc = 0x1AF264u;
            goto label_1af264;
        }
    }
    ctx->pc = 0x1AF25Cu;
label_1af25c:
    // 0x1af25c: 0x60f809  jalr        $v1
label_1af260:
    if (ctx->pc == 0x1AF260u) {
        ctx->pc = 0x1AF260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF25Cu;
        // 0x1af260: 0x8e0472d8  lw          $a0, 0x72D8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 29400)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF264u;
        goto label_1af264;
    }
    ctx->pc = 0x1AF25Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AF264u);
        ctx->pc = 0x1AF260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF25Cu;
        // 0x1af260: 0x8e0472d8  lw          $a0, 0x72D8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 29400)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF25Cu, 0x1AF264u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AF264u;
label_1af264:
    // 0x1af264: 0x1000ffe6  b           . + 4 + (-0x1A << 2)
label_1af268:
    if (ctx->pc == 0x1AF268u) {
        ctx->pc = 0x1AF268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF264u;
        // 0x1af268: 0xae4072b0  sw          $zero, 0x72B0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 29360), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF26Cu;
        goto label_1af26c;
    }
    ctx->pc = 0x1AF264u;
    {
        const bool branch_taken_0x1af264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF264u;
        // 0x1af268: 0xae4072b0  sw          $zero, 0x72B0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 29360), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af264) {
            ctx->pc = 0x1AF200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1af200;
        }
    }
    ctx->pc = 0x1AF26Cu;
label_1af26c:
    // 0x1af26c: 0x0  nop
    ctx->pc = 0x1af26cu;
    // NOP
label_1af270:
    // 0x1af270: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1af270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1af274:
    // 0x1af274: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1af274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_1af278:
    // 0x1af278: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1af278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1af27c:
    // 0x1af27c: 0x3c140028  lui         $s4, 0x28
    ctx->pc = 0x1af27cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)40 << 16));
label_1af280:
    // 0x1af280: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1af280u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1af284:
    // 0x1af284: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1af284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_1af288:
    // 0x1af288: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1af288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1af28c:
    // 0x1af28c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1af28cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1af290:
    // 0x1af290: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1af290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1af294:
    // 0x1af294: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1af294u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1af298:
    // 0x1af298: 0x8e847294  lw          $a0, 0x7294($s4)
    ctx->pc = 0x1af298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 29332)));
label_1af29c:
    // 0x1af29c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1af29cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1af2a0:
    // 0x1af2a0: 0x1480001c  bnez        $a0, . + 4 + (0x1C << 2)
label_1af2a4:
    if (ctx->pc == 0x1AF2A4u) {
        ctx->pc = 0x1AF2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF2A0u;
        // 0x1af2a4: 0xffbf0050  sd          $ra, 0x50($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF2A8u;
        goto label_1af2a8;
    }
    ctx->pc = 0x1AF2A0u;
    {
        const bool branch_taken_0x1af2a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF2A0u;
        // 0x1af2a4: 0xffbf0050  sd          $ra, 0x50($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af2a0) {
            ctx->pc = 0x1AF314u;
            goto label_1af314;
        }
    }
    ctx->pc = 0x1AF2A8u;
label_1af2a8:
    // 0x1af2a8: 0xc0691c4  jal         func_1A4710
label_1af2ac:
    if (ctx->pc == 0x1AF2ACu) {
        ctx->pc = 0x1AF2B0u;
        goto label_1af2b0;
    }
    ctx->pc = 0x1AF2A8u;
    SET_GPR_U32(ctx, 31, 0x1AF2B0u);
    ctx->pc = 0x1A4710u;
    { ctx->pc = 0x1a4710; return; }
    ctx->pc = 0x1AF2B0u;
label_1af2b0:
    // 0x1af2b0: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1af2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_1af2b4:
    // 0x1af2b4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1af2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1af2b8:
    // 0x1af2b8: 0xac625f50  sw          $v0, 0x5F50($v1)
    ctx->pc = 0x1af2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24400), GPR_U32(ctx, 2));
label_1af2bc:
    // 0x1af2bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1af2bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1af2c0:
    // 0x1af2c0: 0xc0691c8  jal         func_1A4720
label_1af2c4:
    if (ctx->pc == 0x1AF2C4u) {
        ctx->pc = 0x1AF2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF2C0u;
        // 0x1af2c4: 0x24a55f58  addiu       $a1, $a1, 0x5F58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF2C8u;
        goto label_1af2c8;
    }
    ctx->pc = 0x1AF2C0u;
    SET_GPR_U32(ctx, 31, 0x1AF2C8u);
    ctx->pc = 0x1AF2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF2C0u;
    // 0x1af2c4: 0x24a55f58  addiu       $a1, $a1, 0x5F58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4720u;
    { ctx->pc = 0x1a4720; return; }
    ctx->pc = 0x1AF2C8u;
label_1af2c8:
    // 0x1af2c8: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1af2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_1af2cc:
    // 0x1af2cc: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x1af2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
label_1af2d0:
    // 0x1af2d0: 0x3c05001b  lui         $a1, 0x1B
    ctx->pc = 0x1af2d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27 << 16));
label_1af2d4:
    // 0x1af2d4: 0x24635f88  addiu       $v1, $v1, 0x5F88
    ctx->pc = 0x1af2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24456));
label_1af2d8:
    // 0x1af2d8: 0x24428170  addiu       $v0, $v0, -0x7E90
    ctx->pc = 0x1af2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934896));
label_1af2dc:
    // 0x1af2dc: 0x24a5f1b0  addiu       $a1, $a1, -0xE50
    ctx->pc = 0x1af2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963632));
label_1af2e0:
    // 0x1af2e0: 0xac70000c  sw          $s0, 0xC($v1)
    ctx->pc = 0x1af2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 16));
label_1af2e4:
    // 0x1af2e4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1af2e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1af2e8:
    // 0x1af2e8: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x1af2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_1af2ec:
    // 0x1af2ec: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x1af2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
label_1af2f0:
    // 0x1af2f0: 0xac720008  sw          $s2, 0x8($v1)
    ctx->pc = 0x1af2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 18));
label_1af2f4:
    // 0x1af2f4: 0xc069188  jal         func_1A4620
label_1af2f8:
    if (ctx->pc == 0x1AF2F8u) {
        ctx->pc = 0x1AF2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF2F4u;
        // 0x1af2f8: 0xac710014  sw          $s1, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF2FCu;
        goto label_1af2fc;
    }
    ctx->pc = 0x1AF2F4u;
    SET_GPR_U32(ctx, 31, 0x1AF2FCu);
    ctx->pc = 0x1AF2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF2F4u;
    // 0x1af2f8: 0xac710014  sw          $s1, 0x14($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4620u;
    { ctx->pc = 0x1a4620; return; }
    ctx->pc = 0x1AF2FCu;
label_1af2fc:
    // 0x1af2fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1af2fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1af300:
    // 0x1af300: 0xae827294  sw          $v0, 0x7294($s4)
    ctx->pc = 0x1af300u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 29332), GPR_U32(ctx, 2));
label_1af304:
    // 0x1af304: 0xc069190  jal         func_1A4640
label_1af308:
    if (ctx->pc == 0x1AF308u) {
        ctx->pc = 0x1AF308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF304u;
        // 0x1af308: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF30Cu;
        goto label_1af30c;
    }
    ctx->pc = 0x1AF304u;
    SET_GPR_U32(ctx, 31, 0x1AF30Cu);
    ctx->pc = 0x1AF308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF304u;
    // 0x1af308: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4640u;
    { ctx->pc = 0x1a4640; return; }
    ctx->pc = 0x1AF30Cu;
label_1af30c:
    // 0x1af30c: 0x10000005  b           . + 4 + (0x5 << 2)
label_1af310:
    if (ctx->pc == 0x1AF310u) {
        ctx->pc = 0x1AF310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF30Cu;
        // 0x1af310: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF314u;
        goto label_1af314;
    }
    ctx->pc = 0x1AF30Cu;
    {
        const bool branch_taken_0x1af30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF30Cu;
        // 0x1af310: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af30c) {
            ctx->pc = 0x1AF324u;
            goto label_1af324;
        }
    }
    ctx->pc = 0x1AF314u;
label_1af314:
    // 0x1af314: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1af314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1af318:
    // 0x1af318: 0xc0691ac  jal         func_1A46B0
label_1af31c:
    if (ctx->pc == 0x1AF31Cu) {
        ctx->pc = 0x1AF31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF318u;
        // 0x1af31c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF320u;
        goto label_1af320;
    }
    ctx->pc = 0x1AF318u;
    SET_GPR_U32(ctx, 31, 0x1AF320u);
    ctx->pc = 0x1AF31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF318u;
    // 0x1af31c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A46B0u;
    { ctx->pc = 0x1a46b0; return; }
    ctx->pc = 0x1AF320u;
label_1af320:
    // 0x1af320: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1af320u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1af324:
    // 0x1af324: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1af324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1af328:
    // 0x1af328: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1af328u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1af32c:
    // 0x1af32c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1af32cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1af330:
    // 0x1af330: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1af330u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1af334:
    // 0x1af334: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1af334u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1af338:
    // 0x1af338: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1af338u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1af33c:
    // 0x1af33c: 0x3e00008  jr          $ra
label_1af340:
    if (ctx->pc == 0x1AF340u) {
        ctx->pc = 0x1AF340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF33Cu;
        // 0x1af340: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF344u;
        goto label_1af344;
    }
    ctx->pc = 0x1AF33Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF33Cu;
        // 0x1af340: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF33Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF344u;
label_1af344:
    // 0x1af344: 0x0  nop
    ctx->pc = 0x1af344u;
    // NOP
label_1af348:
    // 0x1af348: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1af348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_1af34c:
    // 0x1af34c: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1af34cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_1af350:
    // 0x1af350: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1af350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1af354:
    // 0x1af354: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
label_1af358:
    if (ctx->pc == 0x1AF358u) {
        ctx->pc = 0x1AF358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF354u;
        // 0x1af358: 0x3c090028  lui         $t1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF35Cu;
        goto label_1af35c;
    }
    ctx->pc = 0x1AF354u;
    {
        const bool branch_taken_0x1af354 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1AF358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF354u;
        // 0x1af358: 0x3c090028  lui         $t1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af354) {
            ctx->pc = 0x1AF3A0u;
            goto label_1af3a0;
        }
    }
    ctx->pc = 0x1AF35Cu;
label_1af35c:
    // 0x1af35c: 0x8cc80008  lw          $t0, 0x8($a2)
    ctx->pc = 0x1af35cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1af360:
    // 0x1af360: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
label_1af364:
    if (ctx->pc == 0x1AF364u) {
        ctx->pc = 0x1AF364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF360u;
        // 0x1af364: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF368u;
        goto label_1af368;
    }
    ctx->pc = 0x1AF360u;
    {
        const bool branch_taken_0x1af360 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1AF364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF360u;
        // 0x1af364: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af360) {
            ctx->pc = 0x1AF3A0u;
            goto label_1af3a0;
        }
    }
    ctx->pc = 0x1AF368u;
label_1af368:
    // 0x1af368: 0x24c70010  addiu       $a3, $a2, 0x10
    ctx->pc = 0x1af368u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_1af36c:
    // 0x1af36c: 0x3c090028  lui         $t1, 0x28
    ctx->pc = 0x1af36cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)40 << 16));
label_1af370:
    // 0x1af370: 0xe51021  addu        $v0, $a3, $a1
    ctx->pc = 0x1af370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_1af374:
    // 0x1af374: 0x0  nop
    ctx->pc = 0x1af374u;
    // NOP
label_1af378:
    // 0x1af378: 0x1052021  addu        $a0, $t0, $a1
    ctx->pc = 0x1af378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_1af37c:
    // 0x1af37c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1af37cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1af380:
    // 0x1af380: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1af380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1af384:
    // 0x1af384: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1af384u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_1af388:
    // 0x1af388: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1af388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1af38c:
    // 0x1af38c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1af38cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1af390:
    // 0x1af390: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1af394:
    if (ctx->pc == 0x1AF394u) {
        ctx->pc = 0x1AF394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF390u;
        // 0x1af394: 0xe51021  addu        $v0, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF398u;
        goto label_1af398;
    }
    ctx->pc = 0x1AF390u;
    {
        const bool branch_taken_0x1af390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF390u;
        // 0x1af394: 0xe51021  addu        $v0, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af390) {
            ctx->pc = 0x1AF378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1af378;
        }
    }
    ctx->pc = 0x1AF398u;
label_1af398:
    // 0x1af398: 0x10000002  b           . + 4 + (0x2 << 2)
label_1af39c:
    if (ctx->pc == 0x1AF39Cu) {
        ctx->pc = 0x1AF39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF398u;
        // 0x1af39c: 0x8cc20004  lw          $v0, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF3A0u;
        goto label_1af3a0;
    }
    ctx->pc = 0x1AF398u;
    {
        const bool branch_taken_0x1af398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF398u;
        // 0x1af39c: 0x8cc20004  lw          $v0, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af398) {
            ctx->pc = 0x1AF3A4u;
            goto label_1af3a4;
        }
    }
    ctx->pc = 0x1AF3A0u;
label_1af3a0:
    // 0x1af3a0: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1af3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_1af3a4:
    // 0x1af3a4: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
label_1af3a8:
    if (ctx->pc == 0x1AF3A8u) {
        ctx->pc = 0x1AF3ACu;
        goto label_1af3ac;
    }
    ctx->pc = 0x1AF3A4u;
    {
        const bool branch_taken_0x1af3a4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1af3a4) {
            ctx->pc = 0x1AF3E0u;
            goto label_1af3e0;
        }
    }
    ctx->pc = 0x1AF3ACu;
label_1af3ac:
    // 0x1af3ac: 0x8cc8000c  lw          $t0, 0xC($a2)
    ctx->pc = 0x1af3acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1af3b0:
    // 0x1af3b0: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
label_1af3b4:
    if (ctx->pc == 0x1AF3B4u) {
        ctx->pc = 0x1AF3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF3B0u;
        // 0x1af3b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF3B8u;
        goto label_1af3b8;
    }
    ctx->pc = 0x1AF3B0u;
    {
        const bool branch_taken_0x1af3b0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1AF3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF3B0u;
        // 0x1af3b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af3b0) {
            ctx->pc = 0x1AF3E0u;
            goto label_1af3e0;
        }
    }
    ctx->pc = 0x1AF3B8u;
label_1af3b8:
    // 0x1af3b8: 0x24c70050  addiu       $a3, $a2, 0x50
    ctx->pc = 0x1af3b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
label_1af3bc:
    // 0x1af3bc: 0xe51021  addu        $v0, $a3, $a1
    ctx->pc = 0x1af3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_1af3c0:
    // 0x1af3c0: 0x1052021  addu        $a0, $t0, $a1
    ctx->pc = 0x1af3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_1af3c4:
    // 0x1af3c4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1af3c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1af3c8:
    // 0x1af3c8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1af3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1af3cc:
    // 0x1af3cc: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1af3ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_1af3d0:
    // 0x1af3d0: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1af3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_1af3d4:
    // 0x1af3d4: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1af3d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1af3d8:
    // 0x1af3d8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1af3dc:
    if (ctx->pc == 0x1AF3DCu) {
        ctx->pc = 0x1AF3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF3D8u;
        // 0x1af3dc: 0xe51021  addu        $v0, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF3E0u;
        goto label_1af3e0;
    }
    ctx->pc = 0x1AF3D8u;
    {
        const bool branch_taken_0x1af3d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF3D8u;
        // 0x1af3dc: 0xe51021  addu        $v0, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af3d8) {
            ctx->pc = 0x1AF3C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1af3c0;
        }
    }
    ctx->pc = 0x1AF3E0u;
label_1af3e0:
    // 0x1af3e0: 0x806bc44  j           func_1AF110
label_1af3e4:
    if (ctx->pc == 0x1AF3E4u) {
        ctx->pc = 0x1AF3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF3E0u;
        // 0x1af3e4: 0x252472d4  addiu       $a0, $t1, 0x72D4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 29396));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF3E8u;
        goto label_1af3e8;
    }
    ctx->pc = 0x1AF3E0u;
    ctx->pc = 0x1AF3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF3E0u;
    // 0x1af3e4: 0x252472d4  addiu       $a0, $t1, 0x72D4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 29396));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF110u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_1af110;
    ctx->pc = 0x1AF3E8u;
label_1af3e8:
    // 0x1af3e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1af3e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1af3ec:
    // 0x1af3ec: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1af3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1af3f0:
    // 0x1af3f0: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x1af3f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_1af3f4:
    // 0x1af3f4: 0x3c110028  lui         $s1, 0x28
    ctx->pc = 0x1af3f4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)40 << 16));
label_1af3f8:
    // 0x1af3f8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1af3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1af3fc:
    // 0x1af3fc: 0x8e2272a8  lw          $v0, 0x72A8($s1)
    ctx->pc = 0x1af3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 29352)));
label_1af400:
    // 0x1af400: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
label_1af404:
    if (ctx->pc == 0x1AF404u) {
        ctx->pc = 0x1AF404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF400u;
        // 0x1af404: 0xffb00020  sd          $s0, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF408u;
        goto label_1af408;
    }
    ctx->pc = 0x1AF400u;
    {
        const bool branch_taken_0x1af400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1AF404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF400u;
        // 0x1af404: 0xffb00020  sd          $s0, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af400) {
            ctx->pc = 0x1AF420u;
            goto label_1af420;
        }
    }
    ctx->pc = 0x1AF408u;
label_1af408:
    // 0x1af408: 0x3c100028  lui         $s0, 0x28
    ctx->pc = 0x1af408u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)40 << 16));
label_1af40c:
    // 0x1af40c: 0x8e0272ac  lw          $v0, 0x72AC($s0)
    ctx->pc = 0x1af40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 29356)));
label_1af410:
    // 0x1af410: 0x14430016  bne         $v0, $v1, . + 4 + (0x16 << 2)
label_1af414:
    if (ctx->pc == 0x1AF414u) {
        ctx->pc = 0x1AF414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF410u;
        // 0x1af414: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF418u;
        goto label_1af418;
    }
    ctx->pc = 0x1AF410u;
    {
        const bool branch_taken_0x1af410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1AF414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF410u;
        // 0x1af414: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af410) {
            ctx->pc = 0x1AF46Cu;
            goto label_1af46c;
        }
    }
    ctx->pc = 0x1AF418u;
label_1af418:
    // 0x1af418: 0x10000003  b           . + 4 + (0x3 << 2)
label_1af41c:
    if (ctx->pc == 0x1AF41Cu) {
        ctx->pc = 0x1AF41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF418u;
        // 0x1af41c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF420u;
        goto label_1af420;
    }
    ctx->pc = 0x1AF418u;
    {
        const bool branch_taken_0x1af418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF418u;
        // 0x1af41c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af418) {
            ctx->pc = 0x1AF428u;
            goto label_1af428;
        }
    }
    ctx->pc = 0x1AF420u;
label_1af420:
    // 0x1af420: 0x3c100028  lui         $s0, 0x28
    ctx->pc = 0x1af420u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)40 << 16));
label_1af424:
    // 0x1af424: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1af424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1af428:
    // 0x1af428: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1af428u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_1af42c:
    // 0x1af42c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1af42cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_1af430:
    // 0x1af430: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1af430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1af434:
    // 0x1af434: 0xc069208  jal         func_1A4820
label_1af438:
    if (ctx->pc == 0x1AF438u) {
        ctx->pc = 0x1AF438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF434u;
        // 0x1af438: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF43Cu;
        goto label_1af43c;
    }
    ctx->pc = 0x1AF434u;
    SET_GPR_U32(ctx, 31, 0x1AF43Cu);
    ctx->pc = 0x1AF438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF434u;
    // 0x1af438: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4820u;
    { ctx->pc = 0x1a4820; return; }
    ctx->pc = 0x1AF43Cu;
label_1af43c:
    // 0x1af43c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1af43cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1af440:
    // 0x1af440: 0xc069208  jal         func_1A4820
label_1af444:
    if (ctx->pc == 0x1AF444u) {
        ctx->pc = 0x1AF444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF440u;
        // 0x1af444: 0xae2272a8  sw          $v0, 0x72A8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 29352), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF448u;
        goto label_1af448;
    }
    ctx->pc = 0x1AF440u;
    SET_GPR_U32(ctx, 31, 0x1AF448u);
    ctx->pc = 0x1AF444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF440u;
    // 0x1af444: 0xae2272a8  sw          $v0, 0x72A8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 29352), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4820u;
    { ctx->pc = 0x1a4820; return; }
    ctx->pc = 0x1AF448u;
label_1af448:
    // 0x1af448: 0xae0272ac  sw          $v0, 0x72AC($s0)
    ctx->pc = 0x1af448u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 29356), GPR_U32(ctx, 2));
label_1af44c:
    // 0x1af44c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1af44cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1af450:
    // 0x1af450: 0xc069208  jal         func_1A4820
label_1af454:
    if (ctx->pc == 0x1AF454u) {
        ctx->pc = 0x1AF454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF450u;
        // 0x1af454: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF458u;
        goto label_1af458;
    }
    ctx->pc = 0x1AF450u;
    SET_GPR_U32(ctx, 31, 0x1AF458u);
    ctx->pc = 0x1AF454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF450u;
    // 0x1af454: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4820u;
    { ctx->pc = 0x1a4820; return; }
    ctx->pc = 0x1AF458u;
label_1af458:
    // 0x1af458: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1af458u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_1af45c:
    // 0x1af45c: 0xac6272a0  sw          $v0, 0x72A0($v1)
    ctx->pc = 0x1af45cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 29344), GPR_U32(ctx, 2));
label_1af460:
    // 0x1af460: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1af460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1af464:
    // 0x1af464: 0xac4072b0  sw          $zero, 0x72B0($v0)
    ctx->pc = 0x1af464u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 29360), GPR_U32(ctx, 0));
label_1af468:
    // 0x1af468: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1af468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1af46c:
    // 0x1af46c: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x1af46cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1af470:
    // 0x1af470: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1af470u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1af474:
    // 0x1af474: 0x3e00008  jr          $ra
label_1af478:
    if (ctx->pc == 0x1AF478u) {
        ctx->pc = 0x1AF478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF474u;
        // 0x1af478: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF47Cu;
        goto label_1af47c;
    }
    ctx->pc = 0x1AF474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF474u;
        // 0x1af478: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF47Cu;
label_1af47c:
    // 0x1af47c: 0x0  nop
    ctx->pc = 0x1af47cu;
    // NOP
label_1af480:
    // 0x1af480: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1af480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1af484:
    // 0x1af484: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1af484u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1af488:
    // 0x1af488: 0x8c437294  lw          $v1, 0x7294($v0)
    ctx->pc = 0x1af488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29332)));
label_1af48c:
    // 0x1af48c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1af48cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1af490:
    // 0x1af490: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_1af494:
    if (ctx->pc == 0x1AF494u) {
        ctx->pc = 0x1AF494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF490u;
        // 0x1af494: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF498u;
        goto label_1af498;
    }
    ctx->pc = 0x1AF490u;
    {
        const bool branch_taken_0x1af490 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF490u;
        // 0x1af494: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af490) {
            ctx->pc = 0x1AF4B8u;
            goto label_1af4b8;
        }
    }
    ctx->pc = 0x1AF498u;
label_1af498:
    // 0x1af498: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1af498u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_1af49c:
    // 0x1af49c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1af49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1af4a0:
    // 0x1af4a0: 0xac6272d4  sw          $v0, 0x72D4($v1)
    ctx->pc = 0x1af4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 29396), GPR_U32(ctx, 2));
label_1af4a4:
    // 0x1af4a4: 0x3c100028  lui         $s0, 0x28
    ctx->pc = 0x1af4a4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)40 << 16));
label_1af4a8:
    // 0x1af4a8: 0xc069210  jal         func_1A4840
label_1af4ac:
    if (ctx->pc == 0x1AF4ACu) {
        ctx->pc = 0x1AF4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF4A8u;
        // 0x1af4ac: 0x8e0472a0  lw          $a0, 0x72A0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 29344)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF4B0u;
        goto label_1af4b0;
    }
    ctx->pc = 0x1AF4A8u;
    SET_GPR_U32(ctx, 31, 0x1AF4B0u);
    ctx->pc = 0x1AF4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF4A8u;
    // 0x1af4ac: 0x8e0472a0  lw          $a0, 0x72A0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 29344)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x1AF4B0u;
label_1af4b0:
    // 0x1af4b0: 0x10000003  b           . + 4 + (0x3 << 2)
label_1af4b4:
    if (ctx->pc == 0x1AF4B4u) {
        ctx->pc = 0x1AF4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF4B0u;
        // 0x1af4b4: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF4B8u;
        goto label_1af4b8;
    }
    ctx->pc = 0x1AF4B0u;
    {
        const bool branch_taken_0x1af4b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF4B0u;
        // 0x1af4b4: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af4b0) {
            ctx->pc = 0x1AF4C0u;
            goto label_1af4c0;
        }
    }
    ctx->pc = 0x1AF4B8u;
label_1af4b8:
    // 0x1af4b8: 0x3c100028  lui         $s0, 0x28
    ctx->pc = 0x1af4b8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)40 << 16));
label_1af4bc:
    // 0x1af4bc: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1af4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1af4c0:
    // 0x1af4c0: 0xc06920c  jal         func_1A4830
label_1af4c4:
    if (ctx->pc == 0x1AF4C4u) {
        ctx->pc = 0x1AF4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF4C0u;
        // 0x1af4c4: 0x8c4472a8  lw          $a0, 0x72A8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29352)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF4C8u;
        goto label_1af4c8;
    }
    ctx->pc = 0x1AF4C0u;
    SET_GPR_U32(ctx, 31, 0x1AF4C8u);
    ctx->pc = 0x1AF4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF4C0u;
    // 0x1af4c4: 0x8c4472a8  lw          $a0, 0x72A8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29352)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1AF4C8u;
label_1af4c8:
    // 0x1af4c8: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1af4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_1af4cc:
    // 0x1af4cc: 0xc06920c  jal         func_1A4830
label_1af4d0:
    if (ctx->pc == 0x1AF4D0u) {
        ctx->pc = 0x1AF4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF4CCu;
        // 0x1af4d0: 0x8c6472ac  lw          $a0, 0x72AC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29356)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF4D4u;
        goto label_1af4d4;
    }
    ctx->pc = 0x1AF4CCu;
    SET_GPR_U32(ctx, 31, 0x1AF4D4u);
    ctx->pc = 0x1AF4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF4CCu;
    // 0x1af4d0: 0x8c6472ac  lw          $a0, 0x72AC($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29356)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1AF4D4u;
label_1af4d4:
    // 0x1af4d4: 0xc06920c  jal         func_1A4830
label_1af4d8:
    if (ctx->pc == 0x1AF4D8u) {
        ctx->pc = 0x1AF4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF4D4u;
        // 0x1af4d8: 0x8e0472a0  lw          $a0, 0x72A0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 29344)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF4DCu;
        goto label_1af4dc;
    }
    ctx->pc = 0x1AF4D4u;
    SET_GPR_U32(ctx, 31, 0x1AF4DCu);
    ctx->pc = 0x1AF4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF4D4u;
    // 0x1af4d8: 0x8e0472a0  lw          $a0, 0x72A0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 29344)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4830u;
    { ctx->pc = 0x1a4830; return; }
    ctx->pc = 0x1AF4DCu;
label_1af4dc:
    // 0x1af4dc: 0xc06b518  jal         func_1AD460
label_1af4e0:
    if (ctx->pc == 0x1AF4E0u) {
        ctx->pc = 0x1AF4E4u;
        goto label_1af4e4;
    }
    ctx->pc = 0x1AF4DCu;
    SET_GPR_U32(ctx, 31, 0x1AF4E4u);
    ctx->pc = 0x1AD460u;
    { ctx->pc = 0x1ad460; return; }
    ctx->pc = 0x1AF4E4u;
label_1af4e4:
    // 0x1af4e4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1af4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_1af4e8:
    // 0x1af4e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1af4e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1af4ec:
    // 0x1af4ec: 0xc069b2c  jal         func_1A6CB0
label_1af4f0:
    if (ctx->pc == 0x1AF4F0u) {
        ctx->pc = 0x1AF4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF4ECu;
        // 0x1af4f0: 0x34840012  ori         $a0, $a0, 0x12 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)18);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF4F4u;
        goto label_1af4f4;
    }
    ctx->pc = 0x1AF4ECu;
    SET_GPR_U32(ctx, 31, 0x1AF4F4u);
    ctx->pc = 0x1AF4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF4ECu;
    // 0x1af4f0: 0x34840012  ori         $a0, $a0, 0x12 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)18);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6CB0u;
    { ctx->pc = 0x1a6cb0; return; }
    ctx->pc = 0x1AF4F4u;
label_1af4f4:
    // 0x1af4f4: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_1af4f8:
    if (ctx->pc == 0x1AF4F8u) {
        ctx->pc = 0x1AF4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF4F4u;
        // 0x1af4f8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF4FCu;
        goto label_1af4fc;
    }
    ctx->pc = 0x1AF4F4u;
    {
        const bool branch_taken_0x1af4f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF4F4u;
        // 0x1af4f8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af4f4) {
            ctx->pc = 0x1AF508u;
            goto label_1af508;
        }
    }
    ctx->pc = 0x1AF4FCu;
label_1af4fc:
    // 0x1af4fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1af4fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1af500:
    // 0x1af500: 0x806b52a  j           func_1AD4A8
label_1af504:
    if (ctx->pc == 0x1AF504u) {
        ctx->pc = 0x1AF504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF500u;
        // 0x1af504: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF508u;
        goto label_1af508;
    }
    ctx->pc = 0x1AF500u;
    ctx->pc = 0x1AF504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF500u;
    // 0x1af504: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD4A8u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    { ctx->pc = 0x1ad4a8; return; }
    ctx->pc = 0x1AF508u;
label_1af508:
    // 0x1af508: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1af508u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1af50c:
    // 0x1af50c: 0x3e00008  jr          $ra
label_1af510:
    if (ctx->pc == 0x1AF510u) {
        ctx->pc = 0x1AF510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF50Cu;
        // 0x1af510: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF514u;
        goto label_1af514;
    }
    ctx->pc = 0x1AF50Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF50Cu;
        // 0x1af510: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF50Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF514u;
label_1af514:
    // 0x1af514: 0x0  nop
    ctx->pc = 0x1af514u;
    // NOP
label_1af518:
    // 0x1af518: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1af518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1af51c:
    // 0x1af51c: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1af51cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1af520:
    // 0x1af520: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1af520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1af524:
    // 0x1af524: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1af524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1af528:
    // 0x1af528: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1af528u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1af52c:
    // 0x1af52c: 0x8c4372bc  lw          $v1, 0x72BC($v0)
    ctx->pc = 0x1af52cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29372)));
label_1af530:
    // 0x1af530: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1af530u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1af534:
    // 0x1af534: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1af534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1af538:
    // 0x1af538: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1af53c:
    if (ctx->pc == 0x1AF53Cu) {
        ctx->pc = 0x1AF53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF538u;
        // 0x1af53c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF540u;
        goto label_1af540;
    }
    ctx->pc = 0x1AF538u;
    {
        const bool branch_taken_0x1af538 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1AF53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF538u;
        // 0x1af53c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af538) {
            ctx->pc = 0x1AF548u;
            goto label_1af548;
        }
    }
    ctx->pc = 0x1AF540u;
label_1af540:
    // 0x1af540: 0xc06bd74  jal         func_1AF5D0
label_1af544:
    if (ctx->pc == 0x1AF544u) {
        ctx->pc = 0x1AF548u;
        goto label_1af548;
    }
    ctx->pc = 0x1AF540u;
    SET_GPR_U32(ctx, 31, 0x1AF548u);
    ctx->pc = 0x1AF5D0u;
    goto label_1af5d0;
    ctx->pc = 0x1AF548u;
label_1af548:
    // 0x1af548: 0xc06b518  jal         func_1AD460
label_1af54c:
    if (ctx->pc == 0x1AF54Cu) {
        ctx->pc = 0x1AF550u;
        goto label_1af550;
    }
    ctx->pc = 0x1AF548u;
    SET_GPR_U32(ctx, 31, 0x1AF550u);
    ctx->pc = 0x1AD460u;
    { ctx->pc = 0x1ad460; return; }
    ctx->pc = 0x1AF550u;
label_1af550:
    // 0x1af550: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1af550u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_1af554:
    // 0x1af554: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1af554u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_1af558:
    // 0x1af558: 0x8c905f44  lw          $s0, 0x5F44($a0)
    ctx->pc = 0x1af558u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24388)));
label_1af55c:
    // 0x1af55c: 0xac715f48  sw          $s1, 0x5F48($v1)
    ctx->pc = 0x1af55cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24392), GPR_U32(ctx, 17));
label_1af560:
    // 0x1af560: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1af564:
    if (ctx->pc == 0x1AF564u) {
        ctx->pc = 0x1AF564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF560u;
        // 0x1af564: 0xac925f44  sw          $s2, 0x5F44($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24388), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF568u;
        goto label_1af568;
    }
    ctx->pc = 0x1AF560u;
    {
        const bool branch_taken_0x1af560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF560u;
        // 0x1af564: 0xac925f44  sw          $s2, 0x5F44($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24388), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af560) {
            ctx->pc = 0x1AF570u;
            goto label_1af570;
        }
    }
    ctx->pc = 0x1AF568u;
label_1af568:
    // 0x1af568: 0xc06b52a  jal         func_1AD4A8
label_1af56c:
    if (ctx->pc == 0x1AF56Cu) {
        ctx->pc = 0x1AF570u;
        goto label_1af570;
    }
    ctx->pc = 0x1AF568u;
    SET_GPR_U32(ctx, 31, 0x1AF570u);
    ctx->pc = 0x1AD4A8u;
    { ctx->pc = 0x1ad4a8; return; }
    ctx->pc = 0x1AF570u;
label_1af570:
    // 0x1af570: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1af570u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1af574:
    // 0x1af574: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1af574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1af578:
    // 0x1af578: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1af578u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1af57c:
    // 0x1af57c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1af57cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1af580:
    // 0x1af580: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1af580u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1af584:
    // 0x1af584: 0x3e00008  jr          $ra
label_1af588:
    if (ctx->pc == 0x1AF588u) {
        ctx->pc = 0x1AF588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF584u;
        // 0x1af588: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF58Cu;
        goto label_1af58c;
    }
    ctx->pc = 0x1AF584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF584u;
        // 0x1af588: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF58Cu;
label_1af58c:
    // 0x1af58c: 0x0  nop
    ctx->pc = 0x1af58cu;
    // NOP
label_1af590:
    // 0x1af590: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1af590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1af594:
    // 0x1af594: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1af594u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1af598:
    // 0x1af598: 0x8c455f44  lw          $a1, 0x5F44($v0)
    ctx->pc = 0x1af598u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24388)));
label_1af59c:
    // 0x1af59c: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_1af5a0:
    if (ctx->pc == 0x1AF5A0u) {
        ctx->pc = 0x1AF5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF59Cu;
        // 0x1af5a0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF5A4u;
        goto label_1af5a4;
    }
    ctx->pc = 0x1AF59Cu;
    {
        const bool branch_taken_0x1af59c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF59Cu;
        // 0x1af5a0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af59c) {
            ctx->pc = 0x1AF5C0u;
            goto label_1af5c0;
        }
    }
    ctx->pc = 0x1AF5A4u;
label_1af5a4:
    // 0x1af5a4: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1af5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1af5a8:
    // 0x1af5a8: 0x8c4372a4  lw          $v1, 0x72A4($v0)
    ctx->pc = 0x1af5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29348)));
label_1af5ac:
    // 0x1af5ac: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_1af5b0:
    if (ctx->pc == 0x1AF5B0u) {
        ctx->pc = 0x1AF5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF5ACu;
        // 0x1af5b0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF5B4u;
        goto label_1af5b4;
    }
    ctx->pc = 0x1AF5ACu;
    {
        const bool branch_taken_0x1af5ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF5ACu;
        // 0x1af5b0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af5ac) {
            ctx->pc = 0x1AF5C4u;
            goto label_1af5c4;
        }
    }
    ctx->pc = 0x1AF5B4u;
label_1af5b4:
    // 0x1af5b4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1af5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1af5b8:
    // 0x1af5b8: 0xa0f809  jalr        $a1
label_1af5bc:
    if (ctx->pc == 0x1AF5BCu) {
        ctx->pc = 0x1AF5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF5B8u;
        // 0x1af5bc: 0x8c445f48  lw          $a0, 0x5F48($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24392)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF5C0u;
        goto label_1af5c0;
    }
    ctx->pc = 0x1AF5B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1AF5C0u);
        ctx->pc = 0x1AF5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF5B8u;
        // 0x1af5bc: 0x8c445f48  lw          $a0, 0x5F48($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24392)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF5B8u, 0x1AF5C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AF5C0u;
label_1af5c0:
    // 0x1af5c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1af5c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1af5c4:
    // 0x1af5c4: 0x3e00008  jr          $ra
label_1af5c8:
    if (ctx->pc == 0x1AF5C8u) {
        ctx->pc = 0x1AF5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF5C4u;
        // 0x1af5c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF5CCu;
        goto label_1af5cc;
    }
    ctx->pc = 0x1AF5C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF5C4u;
        // 0x1af5c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF5C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF5CCu;
label_1af5cc:
    // 0x1af5cc: 0x0  nop
    ctx->pc = 0x1af5ccu;
    // NOP
label_1af5d0:
    // 0x1af5d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1af5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1af5d4:
    // 0x1af5d4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1af5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1af5d8:
    // 0x1af5d8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1af5d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1af5dc:
    // 0x1af5dc: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1af5dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1af5e0:
    // 0x1af5e0: 0x3c110028  lui         $s1, 0x28
    ctx->pc = 0x1af5e0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)40 << 16));
label_1af5e4:
    // 0x1af5e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1af5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1af5e8:
    // 0x1af5e8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1af5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1af5ec:
    // 0x1af5ec: 0xc06b518  jal         func_1AD460
label_1af5f0:
    if (ctx->pc == 0x1AF5F0u) {
        ctx->pc = 0x1AF5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF5ECu;
        // 0x1af5f0: 0xae3272a4  sw          $s2, 0x72A4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 29348), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF5F4u;
        goto label_1af5f4;
    }
    ctx->pc = 0x1AF5ECu;
    SET_GPR_U32(ctx, 31, 0x1AF5F4u);
    ctx->pc = 0x1AF5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF5ECu;
    // 0x1af5f0: 0xae3272a4  sw          $s2, 0x72A4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 29348), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD460u;
    { ctx->pc = 0x1ad460; return; }
    ctx->pc = 0x1AF5F4u;
label_1af5f4:
    // 0x1af5f4: 0x3c05001b  lui         $a1, 0x1B
    ctx->pc = 0x1af5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27 << 16));
label_1af5f8:
    // 0x1af5f8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1af5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_1af5fc:
    // 0x1af5fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1af5fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1af600:
    // 0x1af600: 0x24a5f590  addiu       $a1, $a1, -0xA70
    ctx->pc = 0x1af600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964624));
label_1af604:
    // 0x1af604: 0x34840012  ori         $a0, $a0, 0x12
    ctx->pc = 0x1af604u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)18);
label_1af608:
    // 0x1af608: 0xc069b20  jal         func_1A6C80
label_1af60c:
    if (ctx->pc == 0x1AF60Cu) {
        ctx->pc = 0x1AF60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF608u;
        // 0x1af60c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF610u;
        goto label_1af610;
    }
    ctx->pc = 0x1AF608u;
    SET_GPR_U32(ctx, 31, 0x1AF610u);
    ctx->pc = 0x1AF60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF608u;
    // 0x1af60c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6C80u;
    { ctx->pc = 0x1a6c80; return; }
    ctx->pc = 0x1AF610u;
label_1af610:
    // 0x1af610: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_1af614:
    if (ctx->pc == 0x1AF614u) {
        ctx->pc = 0x1AF614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF610u;
        // 0x1af614: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF618u;
        goto label_1af618;
    }
    ctx->pc = 0x1AF610u;
    {
        const bool branch_taken_0x1af610 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF610u;
        // 0x1af614: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af610) {
            ctx->pc = 0x1AF624u;
            goto label_1af624;
        }
    }
    ctx->pc = 0x1AF618u;
label_1af618:
    // 0x1af618: 0xc06b52a  jal         func_1AD4A8
label_1af61c:
    if (ctx->pc == 0x1AF61Cu) {
        ctx->pc = 0x1AF620u;
        goto label_1af620;
    }
    ctx->pc = 0x1AF618u;
    SET_GPR_U32(ctx, 31, 0x1AF620u);
    ctx->pc = 0x1AD4A8u;
    { ctx->pc = 0x1ad4a8; return; }
    ctx->pc = 0x1AF620u;
label_1af620:
    // 0x1af620: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1af620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1af624:
    // 0x1af624: 0xae2072a4  sw          $zero, 0x72A4($s1)
    ctx->pc = 0x1af624u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 29348), GPR_U32(ctx, 0));
label_1af628:
    // 0x1af628: 0xac5272bc  sw          $s2, 0x72BC($v0)
    ctx->pc = 0x1af628u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 29372), GPR_U32(ctx, 18));
label_1af62c:
    // 0x1af62c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1af62cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1af630:
    // 0x1af630: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1af630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1af634:
    // 0x1af634: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1af634u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1af638:
    // 0x1af638: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1af638u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1af63c:
    // 0x1af63c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1af63cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1af640:
    // 0x1af640: 0x3e00008  jr          $ra
label_1af644:
    if (ctx->pc == 0x1AF644u) {
        ctx->pc = 0x1AF644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF640u;
        // 0x1af644: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF648u;
        goto label_1af648;
    }
    ctx->pc = 0x1AF640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF640u;
        // 0x1af644: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF640u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF648u;
label_1af648:
    // 0x1af648: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1af648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_1af64c:
    // 0x1af64c: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x1af64cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
label_1af650:
    // 0x1af650: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1af650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_1af654:
    // 0x1af654: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1af654u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1af658:
    // 0x1af658: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x1af658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
label_1af65c:
    // 0x1af65c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1af65cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1af660:
    // 0x1af660: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1af660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_1af664:
    // 0x1af664: 0x3c160028  lui         $s6, 0x28
    ctx->pc = 0x1af664u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)40 << 16));
label_1af668:
    // 0x1af668: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x1af668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
label_1af66c:
    // 0x1af66c: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x1af66cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
label_1af670:
    // 0x1af670: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x1af670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
label_1af674:
    // 0x1af674: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x1af674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
label_1af678:
    // 0x1af678: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x1af678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_1af67c:
    // 0x1af67c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1af67cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_1af680:
    // 0x1af680: 0xc06bcfa  jal         func_1AF3E8
label_1af684:
    if (ctx->pc == 0x1AF684u) {
        ctx->pc = 0x1AF684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF680u;
        // 0x1af684: 0xafa60010  sw          $a2, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF688u;
        goto label_1af688;
    }
    ctx->pc = 0x1AF680u;
    SET_GPR_U32(ctx, 31, 0x1AF688u);
    ctx->pc = 0x1AF684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF680u;
    // 0x1af684: 0xafa60010  sw          $a2, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF3E8u;
    goto label_1af3e8;
    ctx->pc = 0x1AF688u;
label_1af688:
    // 0x1af688: 0x8ec472a8  lw          $a0, 0x72A8($s6)
    ctx->pc = 0x1af688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 29352)));
label_1af68c:
    // 0x1af68c: 0xc06921c  jal         func_1A4870
label_1af690:
    if (ctx->pc == 0x1AF690u) {
        ctx->pc = 0x1AF694u;
        goto label_1af694;
    }
    ctx->pc = 0x1AF68Cu;
    SET_GPR_U32(ctx, 31, 0x1AF694u);
    ctx->pc = 0x1A4870u;
    { ctx->pc = 0x1a4870; return; }
    ctx->pc = 0x1AF694u;
label_1af694:
    // 0x1af694: 0x8ec372a8  lw          $v1, 0x72A8($s6)
    ctx->pc = 0x1af694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 29352)));
label_1af698:
    // 0x1af698: 0x146200a4  bne         $v1, $v0, . + 4 + (0xA4 << 2)
label_1af69c:
    if (ctx->pc == 0x1AF69Cu) {
        ctx->pc = 0x1AF69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF698u;
        // 0x1af69c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF6A0u;
        goto label_1af6a0;
    }
    ctx->pc = 0x1AF698u;
    {
        const bool branch_taken_0x1af698 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AF69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF698u;
        // 0x1af69c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af698) {
            ctx->pc = 0x1AF92Cu;
            { ctx->pc = 0x1af92c; return; }
        }
    }
    ctx->pc = 0x1AF6A0u;
label_1af6a0:
    // 0x1af6a0: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1af6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1af6a4:
    // 0x1af6a4: 0x3c060028  lui         $a2, 0x28
    ctx->pc = 0x1af6a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)40 << 16));
label_1af6a8:
    // 0x1af6a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1af6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1af6ac:
    // 0x1af6ac: 0x8c445f50  lw          $a0, 0x5F50($v0)
    ctx->pc = 0x1af6acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24400)));
label_1af6b0:
    // 0x1af6b0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1af6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1af6b4:
    // 0x1af6b4: 0xacc3729c  sw          $v1, 0x729C($a2)
    ctx->pc = 0x1af6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 29340), GPR_U32(ctx, 3));
label_1af6b8:
    // 0x1af6b8: 0xc0691c8  jal         func_1A4720
label_1af6bc:
    if (ctx->pc == 0x1AF6BCu) {
        ctx->pc = 0x1AF6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF6B8u;
        // 0x1af6bc: 0x24a55f58  addiu       $a1, $a1, 0x5F58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF6C0u;
        goto label_1af6c0;
    }
    ctx->pc = 0x1AF6B8u;
    SET_GPR_U32(ctx, 31, 0x1AF6C0u);
    ctx->pc = 0x1AF6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF6B8u;
    // 0x1af6bc: 0x24a55f58  addiu       $a1, $a1, 0x5F58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4720u;
    { ctx->pc = 0x1a4720; return; }
    ctx->pc = 0x1AF6C0u;
label_1af6c0:
    // 0x1af6c0: 0xc06bee2  jal         func_1AFB88
label_1af6c4:
    if (ctx->pc == 0x1AF6C4u) {
        ctx->pc = 0x1AF6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF6C0u;
        // 0x1af6c4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF6C8u;
        goto label_1af6c8;
    }
    ctx->pc = 0x1AF6C0u;
    SET_GPR_U32(ctx, 31, 0x1AF6C8u);
    ctx->pc = 0x1AF6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF6C0u;
    // 0x1af6c4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFB88u;
    { ctx->pc = 0x1afb88; return; }
    ctx->pc = 0x1AF6C8u;
label_1af6c8:
    // 0x1af6c8: 0x14400065  bnez        $v0, . + 4 + (0x65 << 2)
label_1af6cc:
    if (ctx->pc == 0x1AF6CCu) {
        ctx->pc = 0x1AF6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF6C8u;
        // 0x1af6cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF6D0u;
        goto label_1af6d0;
    }
    ctx->pc = 0x1AF6C8u;
    {
        const bool branch_taken_0x1af6c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF6C8u;
        // 0x1af6cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af6c8) {
            ctx->pc = 0x1AF860u;
            goto label_1af860;
        }
    }
    ctx->pc = 0x1AF6D0u;
label_1af6d0:
    // 0x1af6d0: 0xc069c1a  jal         func_1A7068
label_1af6d4:
    if (ctx->pc == 0x1AF6D4u) {
        ctx->pc = 0x1AF6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF6D0u;
        // 0x1af6d4: 0x3c110028  lui         $s1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF6D8u;
        goto label_1af6d8;
    }
    ctx->pc = 0x1AF6D0u;
    SET_GPR_U32(ctx, 31, 0x1AF6D8u);
    ctx->pc = 0x1AF6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF6D0u;
    // 0x1af6d4: 0x3c110028  lui         $s1, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)40 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7068u;
    { ctx->pc = 0x1a7068; return; }
    ctx->pc = 0x1AF6D8u;
label_1af6d8:
    // 0x1af6d8: 0x8e2272c0  lw          $v0, 0x72C0($s1)
    ctx->pc = 0x1af6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 29376)));
label_1af6dc:
    // 0x1af6dc: 0x441002d  bgez        $v0, . + 4 + (0x2D << 2)
label_1af6e0:
    if (ctx->pc == 0x1AF6E0u) {
        ctx->pc = 0x1AF6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF6DCu;
        // 0x1af6e0: 0x3c170037  lui         $s7, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF6E4u;
        goto label_1af6e4;
    }
    ctx->pc = 0x1AF6DCu;
    {
        const bool branch_taken_0x1af6dc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1AF6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF6DCu;
        // 0x1af6e0: 0x3c170037  lui         $s7, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af6dc) {
            ctx->pc = 0x1AF794u;
            goto label_1af794;
        }
    }
    ctx->pc = 0x1AF6E4u;
label_1af6e4:
    // 0x1af6e4: 0x3c140028  lui         $s4, 0x28
    ctx->pc = 0x1af6e4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)40 << 16));
label_1af6e8:
    // 0x1af6e8: 0x3c150037  lui         $s5, 0x37
    ctx->pc = 0x1af6e8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)55 << 16));
label_1af6ec:
    // 0x1af6ec: 0x1000000b  b           . + 4 + (0xB << 2)
label_1af6f0:
    if (ctx->pc == 0x1AF6F0u) {
        ctx->pc = 0x1AF6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF6ECu;
        // 0x1af6f0: 0x3c1e0037  lui         $fp, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF6F4u;
        goto label_1af6f4;
    }
    ctx->pc = 0x1AF6ECu;
    {
        const bool branch_taken_0x1af6ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF6ECu;
        // 0x1af6f0: 0x3c1e0037  lui         $fp, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af6ec) {
            ctx->pc = 0x1AF71Cu;
            goto label_1af71c;
        }
    }
    ctx->pc = 0x1AF6F4u;
label_1af6f4:
    // 0x1af6f4: 0x0  nop
    ctx->pc = 0x1af6f4u;
    // NOP
label_1af6f8:
    // 0x1af6f8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1af6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1af6fc:
    // 0x1af6fc: 0x0  nop
    ctx->pc = 0x1af6fcu;
    // NOP
label_1af700:
    // 0x1af700: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1af700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1af704:
    // 0x1af704: 0x0  nop
    ctx->pc = 0x1af704u;
    // NOP
label_1af708:
    // 0x1af708: 0x0  nop
    ctx->pc = 0x1af708u;
    // NOP
label_1af70c:
    // 0x1af70c: 0x0  nop
    ctx->pc = 0x1af70cu;
    // NOP
label_1af710:
    // 0x1af710: 0x0  nop
    ctx->pc = 0x1af710u;
    // NOP
label_1af714:
    // 0x1af714: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
label_1af718:
    if (ctx->pc == 0x1AF718u) {
        ctx->pc = 0x1AF71Cu;
        goto label_1af71c;
    }
    ctx->pc = 0x1AF714u;
    {
        const bool branch_taken_0x1af714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1af714) {
            ctx->pc = 0x1AF700u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1af700;
        }
    }
    ctx->pc = 0x1AF71Cu;
label_1af71c:
    // 0x1af71c: 0x26f06140  addiu       $s0, $s7, 0x6140
    ctx->pc = 0x1af71cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 24896));
label_1af720:
    // 0x1af720: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1af720u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
label_1af724:
    // 0x1af724: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1af724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1af728:
    // 0x1af728: 0x34a50597  ori         $a1, $a1, 0x597
    ctx->pc = 0x1af728u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1431);
label_1af72c:
    // 0x1af72c: 0xc069db6  jal         func_1A76D8
label_1af730:
    if (ctx->pc == 0x1AF730u) {
        ctx->pc = 0x1AF730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF72Cu;
        // 0x1af730: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF734u;
        goto label_1af734;
    }
    ctx->pc = 0x1AF72Cu;
    SET_GPR_U32(ctx, 31, 0x1AF734u);
    ctx->pc = 0x1AF730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF72Cu;
    // 0x1af730: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A76D8u;
    { ctx->pc = 0x1a76d8; return; }
    ctx->pc = 0x1AF734u;
label_1af734:
    // 0x1af734: 0x4430013  bgezl       $v0, . + 4 + (0x13 << 2)
label_1af738:
    if (ctx->pc == 0x1AF738u) {
        ctx->pc = 0x1AF738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF734u;
        // 0x1af738: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF73Cu;
        goto label_1af73c;
    }
    ctx->pc = 0x1AF734u;
    {
        const bool branch_taken_0x1af734 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1af734) {
            ctx->pc = 0x1AF738u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AF734u;
            // 0x1af738: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AF784u;
            goto label_1af784;
        }
    }
    ctx->pc = 0x1AF73Cu;
label_1af73c:
    // 0x1af73c: 0x8e827290  lw          $v0, 0x7290($s4)
    ctx->pc = 0x1af73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 29328)));
label_1af740:
    // 0x1af740: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
label_1af744:
    if (ctx->pc == 0x1AF744u) {
        ctx->pc = 0x1AF744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF740u;
        // 0x1af744: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF748u;
        goto label_1af748;
    }
    ctx->pc = 0x1AF740u;
    {
        const bool branch_taken_0x1af740 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1AF744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF740u;
        // 0x1af744: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af740) {
            ctx->pc = 0x1AF758u;
            goto label_1af758;
        }
    }
    ctx->pc = 0x1AF748u;
label_1af748:
    // 0x1af748: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1af748u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_1af74c:
    // 0x1af74c: 0xc069a30  jal         func_1A68C0
label_1af750:
    if (ctx->pc == 0x1AF750u) {
        ctx->pc = 0x1AF750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF74Cu;
        // 0x1af750: 0x2484a978  addiu       $a0, $a0, -0x5688 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF754u;
        goto label_1af754;
    }
    ctx->pc = 0x1AF74Cu;
    SET_GPR_U32(ctx, 31, 0x1AF754u);
    ctx->pc = 0x1AF750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF74Cu;
    // 0x1af750: 0x2484a978  addiu       $a0, $a0, -0x5688 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    { ctx->pc = 0x1a68c0; return; }
    ctx->pc = 0x1AF754u;
label_1af754:
    // 0x1af754: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1af754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_1af758:
    // 0x1af758: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1af758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1af75c:
    // 0x1af75c: 0x0  nop
    ctx->pc = 0x1af75cu;
    // NOP
label_1af760:
    // 0x1af760: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1af760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1af764:
    // 0x1af764: 0x0  nop
    ctx->pc = 0x1af764u;
    // NOP
label_1af768:
    // 0x1af768: 0x0  nop
    ctx->pc = 0x1af768u;
    // NOP
label_1af76c:
    // 0x1af76c: 0x0  nop
    ctx->pc = 0x1af76cu;
    // NOP
label_1af770:
    // 0x1af770: 0x0  nop
    ctx->pc = 0x1af770u;
    // NOP
label_1af774:
    // 0x1af774: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
label_1af778:
    if (ctx->pc == 0x1AF778u) {
        ctx->pc = 0x1AF77Cu;
        goto label_1af77c;
    }
    ctx->pc = 0x1AF774u;
    {
        const bool branch_taken_0x1af774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1af774) {
            ctx->pc = 0x1AF760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1af760;
        }
    }
    ctx->pc = 0x1AF77Cu;
label_1af77c:
    // 0x1af77c: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
label_1af780:
    if (ctx->pc == 0x1AF780u) {
        ctx->pc = 0x1AF780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF77Cu;
        // 0x1af780: 0x26f06140  addiu       $s0, $s7, 0x6140 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 24896));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF784u;
        goto label_1af784;
    }
    ctx->pc = 0x1AF77Cu;
    {
        const bool branch_taken_0x1af77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF77Cu;
        // 0x1af780: 0x26f06140  addiu       $s0, $s7, 0x6140 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 24896));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af77c) {
            ctx->pc = 0x1AF720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1af720;
        }
    }
    ctx->pc = 0x1AF784u;
label_1af784:
    // 0x1af784: 0x1040ffdc  beqz        $v0, . + 4 + (-0x24 << 2)
label_1af788:
    if (ctx->pc == 0x1AF788u) {
        ctx->pc = 0x1AF788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF784u;
        // 0x1af788: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF78Cu;
        goto label_1af78c;
    }
    ctx->pc = 0x1AF784u;
    {
        const bool branch_taken_0x1af784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF784u;
        // 0x1af788: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af784) {
            ctx->pc = 0x1AF6F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1af6f8;
        }
    }
    ctx->pc = 0x1AF78Cu;
label_1af78c:
    // 0x1af78c: 0x10000004  b           . + 4 + (0x4 << 2)
label_1af790:
    if (ctx->pc == 0x1AF790u) {
        ctx->pc = 0x1AF790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF78Cu;
        // 0x1af790: 0xae2072c0  sw          $zero, 0x72C0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 29376), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF794u;
        goto label_1af794;
    }
    ctx->pc = 0x1AF78Cu;
    {
        const bool branch_taken_0x1af78c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF78Cu;
        // 0x1af790: 0xae2072c0  sw          $zero, 0x72C0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 29376), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af78c) {
            ctx->pc = 0x1AF7A0u;
            goto label_1af7a0;
        }
    }
    ctx->pc = 0x1AF794u;
label_1af794:
    // 0x1af794: 0x3c140028  lui         $s4, 0x28
    ctx->pc = 0x1af794u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)40 << 16));
label_1af798:
    // 0x1af798: 0x3c150037  lui         $s5, 0x37
    ctx->pc = 0x1af798u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)55 << 16));
label_1af79c:
    // 0x1af79c: 0x3c1e0037  lui         $fp, 0x37
    ctx->pc = 0x1af79cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)55 << 16));
label_1af7a0:
    // 0x1af7a0: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x1af7a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_1af7a4:
    // 0x1af7a4: 0x26a45fc0  addiu       $a0, $s5, 0x5FC0
    ctx->pc = 0x1af7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 24512));
label_1af7a8:
    // 0x1af7a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1af7a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1af7ac:
    // 0x1af7ac: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x1af7acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_1af7b0:
    // 0x1af7b0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1af7b4:
    if (ctx->pc == 0x1AF7B4u) {
        ctx->pc = 0x1AF7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF7B0u;
        // 0x1af7b4: 0xa0830024  sb          $v1, 0x24($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 36), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF7B8u;
        goto label_1af7b8;
    }
    ctx->pc = 0x1AF7B0u;
    {
        const bool branch_taken_0x1af7b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF7B0u;
        // 0x1af7b4: 0xa0830024  sb          $v1, 0x24($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 36), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af7b0) {
            ctx->pc = 0x1AF7E4u;
            goto label_1af7e4;
        }
    }
    ctx->pc = 0x1AF7B8u;
label_1af7b8:
    // 0x1af7b8: 0x24860024  addiu       $a2, $a0, 0x24
    ctx->pc = 0x1af7b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
label_1af7bc:
    // 0x1af7bc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1af7bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1af7c0:
    // 0x1af7c0: 0x28a20100  slti        $v0, $a1, 0x100
    ctx->pc = 0x1af7c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)256) ? 1 : 0);
label_1af7c4:
    // 0x1af7c4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1af7c8:
    if (ctx->pc == 0x1AF7C8u) {
        ctx->pc = 0x1AF7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF7C4u;
        // 0x1af7c8: 0x2451021  addu        $v0, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF7CCu;
        goto label_1af7cc;
    }
    ctx->pc = 0x1AF7C4u;
    {
        const bool branch_taken_0x1af7c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF7C4u;
        // 0x1af7c8: 0x2451021  addu        $v0, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af7c4) {
            ctx->pc = 0x1AF7E4u;
            goto label_1af7e4;
        }
    }
    ctx->pc = 0x1AF7CCu;
label_1af7cc:
    // 0x1af7cc: 0xa62021  addu        $a0, $a1, $a2
    ctx->pc = 0x1af7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1af7d0:
    // 0x1af7d0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1af7d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1af7d4:
    // 0x1af7d4: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1af7d4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_1af7d8:
    // 0x1af7d8: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1af7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_1af7dc:
    // 0x1af7dc: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_1af7e0:
    if (ctx->pc == 0x1AF7E0u) {
        ctx->pc = 0x1AF7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF7DCu;
        // 0x1af7e0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF7E4u;
        goto label_1af7e4;
    }
    ctx->pc = 0x1AF7DCu;
    {
        const bool branch_taken_0x1af7dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1af7dc) {
            ctx->pc = 0x1AF7E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AF7DCu;
            // 0x1af7e0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AF7C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1af7c0;
        }
    }
    ctx->pc = 0x1AF7E4u;
label_1af7e4:
    // 0x1af7e4: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x1af7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1af7e8:
    // 0x1af7e8: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
label_1af7ec:
    if (ctx->pc == 0x1AF7ECu) {
        ctx->pc = 0x1AF7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF7E8u;
        // 0x1af7ec: 0x8e827290  lw          $v0, 0x7290($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 29328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF7F0u;
        goto label_1af7f0;
    }
    ctx->pc = 0x1AF7E8u;
    {
        const bool branch_taken_0x1af7e8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AF7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF7E8u;
        // 0x1af7ec: 0x8e827290  lw          $v0, 0x7290($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 29328)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af7e8) {
            ctx->pc = 0x1AF7FCu;
            goto label_1af7fc;
        }
    }
    ctx->pc = 0x1AF7F0u;
label_1af7f0:
    // 0x1af7f0: 0x26a25fc0  addiu       $v0, $s5, 0x5FC0
    ctx->pc = 0x1af7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 24512));
label_1af7f4:
    // 0x1af7f4: 0xa0400123  sb          $zero, 0x123($v0)
    ctx->pc = 0x1af7f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 291), (uint8_t)GPR_U32(ctx, 0));
label_1af7f8:
    // 0x1af7f8: 0x8e827290  lw          $v0, 0x7290($s4)
    ctx->pc = 0x1af7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 29328)));
label_1af7fc:
    // 0x1af7fc: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
label_1af800:
    if (ctx->pc == 0x1AF800u) {
        ctx->pc = 0x1AF800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF7FCu;
        // 0x1af800: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF804u;
        goto label_1af804;
    }
    ctx->pc = 0x1AF7FCu;
    {
        const bool branch_taken_0x1af7fc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1AF800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF7FCu;
        // 0x1af800: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af7fc) {
            ctx->pc = 0x1AF814u;
            goto label_1af814;
        }
    }
    ctx->pc = 0x1AF804u;
label_1af804:
    // 0x1af804: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1af804u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_1af808:
    // 0x1af808: 0x2484a998  addiu       $a0, $a0, -0x5668
    ctx->pc = 0x1af808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945176));
label_1af80c:
    // 0x1af80c: 0xc069a30  jal         func_1A68C0
label_1af810:
    if (ctx->pc == 0x1AF810u) {
        ctx->pc = 0x1AF810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF80Cu;
        // 0x1af810: 0x24a55fe4  addiu       $a1, $a1, 0x5FE4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24548));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF814u;
        goto label_1af814;
    }
    ctx->pc = 0x1AF80Cu;
    SET_GPR_U32(ctx, 31, 0x1AF814u);
    ctx->pc = 0x1AF810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF80Cu;
    // 0x1af810: 0x24a55fe4  addiu       $a1, $a1, 0x5FE4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24548));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    { ctx->pc = 0x1a68c0; return; }
    ctx->pc = 0x1AF814u;
label_1af814:
    // 0x1af814: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1af814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1af818:
    // 0x1af818: 0x26b05fc0  addiu       $s0, $s5, 0x5FC0
    ctx->pc = 0x1af818u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 24512));
label_1af81c:
    // 0x1af81c: 0x2405012c  addiu       $a1, $zero, 0x12C
    ctx->pc = 0x1af81cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
label_1af820:
    // 0x1af820: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1af820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1af824:
    // 0x1af824: 0xae020128  sw          $v0, 0x128($s0)
    ctx->pc = 0x1af824u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 2));
label_1af828:
    // 0x1af828: 0xc069bee  jal         func_1A6FB8
label_1af82c:
    if (ctx->pc == 0x1AF82Cu) {
        ctx->pc = 0x1AF82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF828u;
        // 0x1af82c: 0xae100124  sw          $s0, 0x124($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF830u;
        goto label_1af830;
    }
    ctx->pc = 0x1AF828u;
    SET_GPR_U32(ctx, 31, 0x1AF830u);
    ctx->pc = 0x1AF82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF828u;
    // 0x1af82c: 0xae100124  sw          $s0, 0x124($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FB8u;
    { ctx->pc = 0x1a6fb8; return; }
    ctx->pc = 0x1AF830u;
label_1af830:
    // 0x1af830: 0x26e46140  addiu       $a0, $s7, 0x6140
    ctx->pc = 0x1af830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 24896));
label_1af834:
    // 0x1af834: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1af834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1af838:
    // 0x1af838: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1af838u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1af83c:
    // 0x1af83c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1af83cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1af840:
    // 0x1af840: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1af840u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1af844:
    // 0x1af844: 0x2408012c  addiu       $t0, $zero, 0x12C
    ctx->pc = 0x1af844u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
label_1af848:
    // 0x1af848: 0x27c96100  addiu       $t1, $fp, 0x6100
    ctx->pc = 0x1af848u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 30), 24832));
label_1af84c:
    // 0x1af84c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1af84cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1af850:
    // 0x1af850: 0xc069e2a  jal         func_1A78A8
label_1af854:
    if (ctx->pc == 0x1AF854u) {
        ctx->pc = 0x1AF854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF850u;
        // 0x1af854: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF858u;
        goto label_1af858;
    }
    ctx->pc = 0x1AF850u;
    SET_GPR_U32(ctx, 31, 0x1AF858u);
    ctx->pc = 0x1AF854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF850u;
    // 0x1af854: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    { ctx->pc = 0x1a78a8; return; }
    ctx->pc = 0x1AF858u;
label_1af858:
    // 0x1af858: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
label_1af85c:
    if (ctx->pc == 0x1AF85Cu) {
        ctx->pc = 0x1AF85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF858u;
        // 0x1af85c: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF860u;
        goto label_1af860;
    }
    ctx->pc = 0x1AF858u;
    {
        const bool branch_taken_0x1af858 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1AF85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF858u;
        // 0x1af85c: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af858) {
            ctx->pc = 0x1AF874u;
            goto label_1af874;
        }
    }
    ctx->pc = 0x1AF860u;
label_1af860:
    // 0x1af860: 0x8ec472a8  lw          $a0, 0x72A8($s6)
    ctx->pc = 0x1af860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 29352)));
label_1af864:
    // 0x1af864: 0xc069210  jal         func_1A4840
label_1af868:
    if (ctx->pc == 0x1AF868u) {
        ctx->pc = 0x1AF86Cu;
        goto label_1af86c;
    }
    ctx->pc = 0x1AF864u;
    SET_GPR_U32(ctx, 31, 0x1AF86Cu);
    ctx->pc = 0x1A4840u;
    { ctx->pc = 0x1a4840; return; }
    ctx->pc = 0x1AF86Cu;
label_1af86c:
    // 0x1af86c: 0x1000002f  b           . + 4 + (0x2F << 2)
label_1af870:
    if (ctx->pc == 0x1AF870u) {
        ctx->pc = 0x1AF870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF86Cu;
        // 0x1af870: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AF874u;
        goto label_1af874;
    }
    ctx->pc = 0x1AF86Cu;
    {
        const bool branch_taken_0x1af86c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF86Cu;
        // 0x1af870: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af86c) {
            ctx->pc = 0x1AF92Cu;
            { ctx->pc = 0x1af92c; return; }
        }
    }
    ctx->pc = 0x1AF874u;
label_1af874:
    // 0x1af874: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x1af874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_1af878:
    // 0x1af878: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x1af878u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1af87c:
    // 0x1af87c: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x1af87cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1af880:
    // 0x1af880: 0x6844000f  ldl         $a0, 0xF($v0)
    ctx->pc = 0x1af880u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_1af884:
    // 0x1af884: 0x6c440008  ldr         $a0, 0x8($v0)
    ctx->pc = 0x1af884u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_1af888:
    // 0x1af888: 0x68450017  ldl         $a1, 0x17($v0)
    ctx->pc = 0x1af888u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_1af88c:
    // 0x1af88c: 0x6c450010  ldr         $a1, 0x10($v0)
    ctx->pc = 0x1af88cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_1af890:
    // 0x1af890: 0x6846001f  ldl         $a2, 0x1F($v0)
    ctx->pc = 0x1af890u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1af894:
    // 0x1af894: 0x6c460018  ldr         $a2, 0x18($v0)
    ctx->pc = 0x1af894u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1af898:
    // 0x1af898: 0xb2630007  sdl         $v1, 0x7($s3)
    ctx->pc = 0x1af898u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1af89c:
    // 0x1af89c: 0xb6630000  sdr         $v1, 0x0($s3)
    ctx->pc = 0x1af89cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1af8a0:
    // 0x1af8a0: 0xb264000f  sdl         $a0, 0xF($s3)
    ctx->pc = 0x1af8a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1af8a4:
    // 0x1af8a4: 0xb6640008  sdr         $a0, 0x8($s3)
    ctx->pc = 0x1af8a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1af8a8:
    // 0x1af8a8: 0xb2650017  sdl         $a1, 0x17($s3)
    ctx->pc = 0x1af8a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1af8ac:
    // 0x1af8ac: 0xb6650010  sdr         $a1, 0x10($s3)
    ctx->pc = 0x1af8acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1af8b0:
    // 0x1af8b0: 0xb266001f  sdl         $a2, 0x1F($s3)
    ctx->pc = 0x1af8b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1af8b4:
    // 0x1af8b4: 0xb6660018  sdr         $a2, 0x18($s3)
    ctx->pc = 0x1af8b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1af8b8:
    // 0x1af8b8: 0x88430023  lwl         $v1, 0x23($v0)
    ctx->pc = 0x1af8b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 35); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
label_1af8bc:
    // 0x1af8bc: 0x98430020  lwr         $v1, 0x20($v0)
    ctx->pc = 0x1af8bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    ctx->pc = 0x1af8c0u;
    return;
}

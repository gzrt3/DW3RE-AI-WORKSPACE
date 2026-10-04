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

// Function: FUN_0019b8d0
// Address: 0x19b8d0 - 0x29b8d8
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b8d0_part203(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1fe2f0u: goto label_1fe2f0;
        case 0x1fe2f4u: goto label_1fe2f4;
        case 0x1fe2f8u: goto label_1fe2f8;
        case 0x1fe2fcu: goto label_1fe2fc;
        case 0x1fe300u: goto label_1fe300;
        case 0x1fe304u: goto label_1fe304;
        case 0x1fe308u: goto label_1fe308;
        case 0x1fe30cu: goto label_1fe30c;
        case 0x1fe310u: goto label_1fe310;
        case 0x1fe314u: goto label_1fe314;
        case 0x1fe318u: goto label_1fe318;
        case 0x1fe31cu: goto label_1fe31c;
        case 0x1fe320u: goto label_1fe320;
        case 0x1fe324u: goto label_1fe324;
        case 0x1fe328u: goto label_1fe328;
        case 0x1fe32cu: goto label_1fe32c;
        case 0x1fe330u: goto label_1fe330;
        case 0x1fe334u: goto label_1fe334;
        case 0x1fe338u: goto label_1fe338;
        case 0x1fe33cu: goto label_1fe33c;
        case 0x1fe340u: goto label_1fe340;
        case 0x1fe344u: goto label_1fe344;
        case 0x1fe348u: goto label_1fe348;
        case 0x1fe34cu: goto label_1fe34c;
        case 0x1fe350u: goto label_1fe350;
        case 0x1fe354u: goto label_1fe354;
        case 0x1fe358u: goto label_1fe358;
        case 0x1fe35cu: goto label_1fe35c;
        case 0x1fe360u: goto label_1fe360;
        case 0x1fe364u: goto label_1fe364;
        case 0x1fe368u: goto label_1fe368;
        case 0x1fe36cu: goto label_1fe36c;
        case 0x1fe370u: goto label_1fe370;
        case 0x1fe374u: goto label_1fe374;
        case 0x1fe378u: goto label_1fe378;
        case 0x1fe37cu: goto label_1fe37c;
        case 0x1fe380u: goto label_1fe380;
        case 0x1fe384u: goto label_1fe384;
        case 0x1fe388u: goto label_1fe388;
        case 0x1fe38cu: goto label_1fe38c;
        case 0x1fe390u: goto label_1fe390;
        case 0x1fe394u: goto label_1fe394;
        case 0x1fe398u: goto label_1fe398;
        case 0x1fe39cu: goto label_1fe39c;
        case 0x1fe3a0u: goto label_1fe3a0;
        case 0x1fe3a4u: goto label_1fe3a4;
        case 0x1fe3a8u: goto label_1fe3a8;
        case 0x1fe3acu: goto label_1fe3ac;
        case 0x1fe3b0u: goto label_1fe3b0;
        case 0x1fe3b4u: goto label_1fe3b4;
        case 0x1fe3b8u: goto label_1fe3b8;
        case 0x1fe3bcu: goto label_1fe3bc;
        case 0x1fe3c0u: goto label_1fe3c0;
        case 0x1fe3c4u: goto label_1fe3c4;
        case 0x1fe3c8u: goto label_1fe3c8;
        case 0x1fe3ccu: goto label_1fe3cc;
        case 0x1fe3d0u: goto label_1fe3d0;
        case 0x1fe3d4u: goto label_1fe3d4;
        case 0x1fe3d8u: goto label_1fe3d8;
        case 0x1fe3dcu: goto label_1fe3dc;
        case 0x1fe3e0u: goto label_1fe3e0;
        case 0x1fe3e4u: goto label_1fe3e4;
        case 0x1fe3e8u: goto label_1fe3e8;
        case 0x1fe3ecu: goto label_1fe3ec;
        case 0x1fe3f0u: goto label_1fe3f0;
        case 0x1fe3f4u: goto label_1fe3f4;
        case 0x1fe3f8u: goto label_1fe3f8;
        case 0x1fe3fcu: goto label_1fe3fc;
        case 0x1fe400u: goto label_1fe400;
        case 0x1fe404u: goto label_1fe404;
        case 0x1fe408u: goto label_1fe408;
        case 0x1fe40cu: goto label_1fe40c;
        case 0x1fe410u: goto label_1fe410;
        case 0x1fe414u: goto label_1fe414;
        case 0x1fe418u: goto label_1fe418;
        case 0x1fe41cu: goto label_1fe41c;
        case 0x1fe420u: goto label_1fe420;
        case 0x1fe424u: goto label_1fe424;
        case 0x1fe428u: goto label_1fe428;
        case 0x1fe42cu: goto label_1fe42c;
        case 0x1fe430u: goto label_1fe430;
        case 0x1fe434u: goto label_1fe434;
        case 0x1fe438u: goto label_1fe438;
        case 0x1fe43cu: goto label_1fe43c;
        case 0x1fe440u: goto label_1fe440;
        case 0x1fe444u: goto label_1fe444;
        case 0x1fe448u: goto label_1fe448;
        case 0x1fe44cu: goto label_1fe44c;
        case 0x1fe450u: goto label_1fe450;
        case 0x1fe454u: goto label_1fe454;
        case 0x1fe458u: goto label_1fe458;
        case 0x1fe45cu: goto label_1fe45c;
        case 0x1fe460u: goto label_1fe460;
        case 0x1fe464u: goto label_1fe464;
        case 0x1fe468u: goto label_1fe468;
        case 0x1fe46cu: goto label_1fe46c;
        case 0x1fe470u: goto label_1fe470;
        case 0x1fe474u: goto label_1fe474;
        case 0x1fe478u: goto label_1fe478;
        case 0x1fe47cu: goto label_1fe47c;
        case 0x1fe480u: goto label_1fe480;
        case 0x1fe484u: goto label_1fe484;
        case 0x1fe488u: goto label_1fe488;
        case 0x1fe48cu: goto label_1fe48c;
        case 0x1fe490u: goto label_1fe490;
        case 0x1fe494u: goto label_1fe494;
        case 0x1fe498u: goto label_1fe498;
        case 0x1fe49cu: goto label_1fe49c;
        case 0x1fe4a0u: goto label_1fe4a0;
        case 0x1fe4a4u: goto label_1fe4a4;
        case 0x1fe4a8u: goto label_1fe4a8;
        case 0x1fe4acu: goto label_1fe4ac;
        case 0x1fe4b0u: goto label_1fe4b0;
        case 0x1fe4b4u: goto label_1fe4b4;
        case 0x1fe4b8u: goto label_1fe4b8;
        case 0x1fe4bcu: goto label_1fe4bc;
        case 0x1fe4c0u: goto label_1fe4c0;
        case 0x1fe4c4u: goto label_1fe4c4;
        case 0x1fe4c8u: goto label_1fe4c8;
        case 0x1fe4ccu: goto label_1fe4cc;
        case 0x1fe4d0u: goto label_1fe4d0;
        case 0x1fe4d4u: goto label_1fe4d4;
        case 0x1fe4d8u: goto label_1fe4d8;
        case 0x1fe4dcu: goto label_1fe4dc;
        case 0x1fe4e0u: goto label_1fe4e0;
        case 0x1fe4e4u: goto label_1fe4e4;
        case 0x1fe4e8u: goto label_1fe4e8;
        case 0x1fe4ecu: goto label_1fe4ec;
        case 0x1fe4f0u: goto label_1fe4f0;
        case 0x1fe4f4u: goto label_1fe4f4;
        case 0x1fe4f8u: goto label_1fe4f8;
        case 0x1fe4fcu: goto label_1fe4fc;
        case 0x1fe500u: goto label_1fe500;
        case 0x1fe504u: goto label_1fe504;
        case 0x1fe508u: goto label_1fe508;
        case 0x1fe50cu: goto label_1fe50c;
        case 0x1fe510u: goto label_1fe510;
        case 0x1fe514u: goto label_1fe514;
        case 0x1fe518u: goto label_1fe518;
        case 0x1fe51cu: goto label_1fe51c;
        case 0x1fe520u: goto label_1fe520;
        case 0x1fe524u: goto label_1fe524;
        case 0x1fe528u: goto label_1fe528;
        case 0x1fe52cu: goto label_1fe52c;
        case 0x1fe530u: goto label_1fe530;
        case 0x1fe534u: goto label_1fe534;
        case 0x1fe538u: goto label_1fe538;
        case 0x1fe53cu: goto label_1fe53c;
        case 0x1fe540u: goto label_1fe540;
        case 0x1fe544u: goto label_1fe544;
        case 0x1fe548u: goto label_1fe548;
        case 0x1fe54cu: goto label_1fe54c;
        case 0x1fe550u: goto label_1fe550;
        case 0x1fe554u: goto label_1fe554;
        case 0x1fe558u: goto label_1fe558;
        case 0x1fe55cu: goto label_1fe55c;
        case 0x1fe560u: goto label_1fe560;
        case 0x1fe564u: goto label_1fe564;
        case 0x1fe568u: goto label_1fe568;
        case 0x1fe56cu: goto label_1fe56c;
        case 0x1fe570u: goto label_1fe570;
        case 0x1fe574u: goto label_1fe574;
        case 0x1fe578u: goto label_1fe578;
        case 0x1fe57cu: goto label_1fe57c;
        case 0x1fe580u: goto label_1fe580;
        case 0x1fe584u: goto label_1fe584;
        case 0x1fe588u: goto label_1fe588;
        case 0x1fe58cu: goto label_1fe58c;
        case 0x1fe590u: goto label_1fe590;
        case 0x1fe594u: goto label_1fe594;
        case 0x1fe598u: goto label_1fe598;
        case 0x1fe59cu: goto label_1fe59c;
        case 0x1fe5a0u: goto label_1fe5a0;
        case 0x1fe5a4u: goto label_1fe5a4;
        case 0x1fe5a8u: goto label_1fe5a8;
        case 0x1fe5acu: goto label_1fe5ac;
        case 0x1fe5b0u: goto label_1fe5b0;
        case 0x1fe5b4u: goto label_1fe5b4;
        case 0x1fe5b8u: goto label_1fe5b8;
        case 0x1fe5bcu: goto label_1fe5bc;
        case 0x1fe5c0u: goto label_1fe5c0;
        case 0x1fe5c4u: goto label_1fe5c4;
        case 0x1fe5c8u: goto label_1fe5c8;
        case 0x1fe5ccu: goto label_1fe5cc;
        case 0x1fe5d0u: goto label_1fe5d0;
        case 0x1fe5d4u: goto label_1fe5d4;
        case 0x1fe5d8u: goto label_1fe5d8;
        case 0x1fe5dcu: goto label_1fe5dc;
        case 0x1fe5e0u: goto label_1fe5e0;
        case 0x1fe5e4u: goto label_1fe5e4;
        case 0x1fe5e8u: goto label_1fe5e8;
        case 0x1fe5ecu: goto label_1fe5ec;
        case 0x1fe5f0u: goto label_1fe5f0;
        case 0x1fe5f4u: goto label_1fe5f4;
        case 0x1fe5f8u: goto label_1fe5f8;
        case 0x1fe5fcu: goto label_1fe5fc;
        case 0x1fe600u: goto label_1fe600;
        case 0x1fe604u: goto label_1fe604;
        case 0x1fe608u: goto label_1fe608;
        case 0x1fe60cu: goto label_1fe60c;
        case 0x1fe610u: goto label_1fe610;
        case 0x1fe614u: goto label_1fe614;
        case 0x1fe618u: goto label_1fe618;
        case 0x1fe61cu: goto label_1fe61c;
        case 0x1fe620u: goto label_1fe620;
        case 0x1fe624u: goto label_1fe624;
        case 0x1fe628u: goto label_1fe628;
        case 0x1fe62cu: goto label_1fe62c;
        case 0x1fe630u: goto label_1fe630;
        case 0x1fe634u: goto label_1fe634;
        case 0x1fe638u: goto label_1fe638;
        case 0x1fe63cu: goto label_1fe63c;
        case 0x1fe640u: goto label_1fe640;
        case 0x1fe644u: goto label_1fe644;
        case 0x1fe648u: goto label_1fe648;
        case 0x1fe64cu: goto label_1fe64c;
        case 0x1fe650u: goto label_1fe650;
        case 0x1fe654u: goto label_1fe654;
        case 0x1fe658u: goto label_1fe658;
        case 0x1fe65cu: goto label_1fe65c;
        case 0x1fe660u: goto label_1fe660;
        case 0x1fe664u: goto label_1fe664;
        case 0x1fe668u: goto label_1fe668;
        case 0x1fe66cu: goto label_1fe66c;
        case 0x1fe670u: goto label_1fe670;
        case 0x1fe674u: goto label_1fe674;
        case 0x1fe678u: goto label_1fe678;
        case 0x1fe67cu: goto label_1fe67c;
        case 0x1fe680u: goto label_1fe680;
        case 0x1fe684u: goto label_1fe684;
        case 0x1fe688u: goto label_1fe688;
        case 0x1fe68cu: goto label_1fe68c;
        case 0x1fe690u: goto label_1fe690;
        case 0x1fe694u: goto label_1fe694;
        case 0x1fe698u: goto label_1fe698;
        case 0x1fe69cu: goto label_1fe69c;
        case 0x1fe6a0u: goto label_1fe6a0;
        case 0x1fe6a4u: goto label_1fe6a4;
        case 0x1fe6a8u: goto label_1fe6a8;
        case 0x1fe6acu: goto label_1fe6ac;
        case 0x1fe6b0u: goto label_1fe6b0;
        case 0x1fe6b4u: goto label_1fe6b4;
        case 0x1fe6b8u: goto label_1fe6b8;
        case 0x1fe6bcu: goto label_1fe6bc;
        case 0x1fe6c0u: goto label_1fe6c0;
        case 0x1fe6c4u: goto label_1fe6c4;
        case 0x1fe6c8u: goto label_1fe6c8;
        case 0x1fe6ccu: goto label_1fe6cc;
        case 0x1fe6d0u: goto label_1fe6d0;
        case 0x1fe6d4u: goto label_1fe6d4;
        case 0x1fe6d8u: goto label_1fe6d8;
        case 0x1fe6dcu: goto label_1fe6dc;
        case 0x1fe6e0u: goto label_1fe6e0;
        case 0x1fe6e4u: goto label_1fe6e4;
        case 0x1fe6e8u: goto label_1fe6e8;
        case 0x1fe6ecu: goto label_1fe6ec;
        case 0x1fe6f0u: goto label_1fe6f0;
        case 0x1fe6f4u: goto label_1fe6f4;
        case 0x1fe6f8u: goto label_1fe6f8;
        case 0x1fe6fcu: goto label_1fe6fc;
        case 0x1fe700u: goto label_1fe700;
        case 0x1fe704u: goto label_1fe704;
        case 0x1fe708u: goto label_1fe708;
        case 0x1fe70cu: goto label_1fe70c;
        case 0x1fe710u: goto label_1fe710;
        case 0x1fe714u: goto label_1fe714;
        case 0x1fe718u: goto label_1fe718;
        case 0x1fe71cu: goto label_1fe71c;
        case 0x1fe720u: goto label_1fe720;
        case 0x1fe724u: goto label_1fe724;
        case 0x1fe728u: goto label_1fe728;
        case 0x1fe72cu: goto label_1fe72c;
        case 0x1fe730u: goto label_1fe730;
        case 0x1fe734u: goto label_1fe734;
        case 0x1fe738u: goto label_1fe738;
        case 0x1fe73cu: goto label_1fe73c;
        case 0x1fe740u: goto label_1fe740;
        case 0x1fe744u: goto label_1fe744;
        case 0x1fe748u: goto label_1fe748;
        case 0x1fe74cu: goto label_1fe74c;
        case 0x1fe750u: goto label_1fe750;
        case 0x1fe754u: goto label_1fe754;
        case 0x1fe758u: goto label_1fe758;
        case 0x1fe75cu: goto label_1fe75c;
        case 0x1fe760u: goto label_1fe760;
        case 0x1fe764u: goto label_1fe764;
        case 0x1fe768u: goto label_1fe768;
        case 0x1fe76cu: goto label_1fe76c;
        case 0x1fe770u: goto label_1fe770;
        case 0x1fe774u: goto label_1fe774;
        case 0x1fe778u: goto label_1fe778;
        case 0x1fe77cu: goto label_1fe77c;
        case 0x1fe780u: goto label_1fe780;
        case 0x1fe784u: goto label_1fe784;
        case 0x1fe788u: goto label_1fe788;
        case 0x1fe78cu: goto label_1fe78c;
        case 0x1fe790u: goto label_1fe790;
        case 0x1fe794u: goto label_1fe794;
        case 0x1fe798u: goto label_1fe798;
        case 0x1fe79cu: goto label_1fe79c;
        case 0x1fe7a0u: goto label_1fe7a0;
        case 0x1fe7a4u: goto label_1fe7a4;
        case 0x1fe7a8u: goto label_1fe7a8;
        case 0x1fe7acu: goto label_1fe7ac;
        case 0x1fe7b0u: goto label_1fe7b0;
        case 0x1fe7b4u: goto label_1fe7b4;
        case 0x1fe7b8u: goto label_1fe7b8;
        case 0x1fe7bcu: goto label_1fe7bc;
        case 0x1fe7c0u: goto label_1fe7c0;
        case 0x1fe7c4u: goto label_1fe7c4;
        case 0x1fe7c8u: goto label_1fe7c8;
        case 0x1fe7ccu: goto label_1fe7cc;
        case 0x1fe7d0u: goto label_1fe7d0;
        case 0x1fe7d4u: goto label_1fe7d4;
        case 0x1fe7d8u: goto label_1fe7d8;
        case 0x1fe7dcu: goto label_1fe7dc;
        case 0x1fe7e0u: goto label_1fe7e0;
        case 0x1fe7e4u: goto label_1fe7e4;
        case 0x1fe7e8u: goto label_1fe7e8;
        case 0x1fe7ecu: goto label_1fe7ec;
        case 0x1fe7f0u: goto label_1fe7f0;
        case 0x1fe7f4u: goto label_1fe7f4;
        case 0x1fe7f8u: goto label_1fe7f8;
        case 0x1fe7fcu: goto label_1fe7fc;
        case 0x1fe800u: goto label_1fe800;
        case 0x1fe804u: goto label_1fe804;
        case 0x1fe808u: goto label_1fe808;
        case 0x1fe80cu: goto label_1fe80c;
        case 0x1fe810u: goto label_1fe810;
        case 0x1fe814u: goto label_1fe814;
        case 0x1fe818u: goto label_1fe818;
        case 0x1fe81cu: goto label_1fe81c;
        case 0x1fe820u: goto label_1fe820;
        case 0x1fe824u: goto label_1fe824;
        case 0x1fe828u: goto label_1fe828;
        case 0x1fe82cu: goto label_1fe82c;
        case 0x1fe830u: goto label_1fe830;
        case 0x1fe834u: goto label_1fe834;
        case 0x1fe838u: goto label_1fe838;
        case 0x1fe83cu: goto label_1fe83c;
        case 0x1fe840u: goto label_1fe840;
        case 0x1fe844u: goto label_1fe844;
        case 0x1fe848u: goto label_1fe848;
        case 0x1fe84cu: goto label_1fe84c;
        case 0x1fe850u: goto label_1fe850;
        case 0x1fe854u: goto label_1fe854;
        case 0x1fe858u: goto label_1fe858;
        case 0x1fe85cu: goto label_1fe85c;
        case 0x1fe860u: goto label_1fe860;
        case 0x1fe864u: goto label_1fe864;
        case 0x1fe868u: goto label_1fe868;
        case 0x1fe86cu: goto label_1fe86c;
        case 0x1fe870u: goto label_1fe870;
        case 0x1fe874u: goto label_1fe874;
        case 0x1fe878u: goto label_1fe878;
        case 0x1fe87cu: goto label_1fe87c;
        case 0x1fe880u: goto label_1fe880;
        case 0x1fe884u: goto label_1fe884;
        case 0x1fe888u: goto label_1fe888;
        case 0x1fe88cu: goto label_1fe88c;
        case 0x1fe890u: goto label_1fe890;
        case 0x1fe894u: goto label_1fe894;
        case 0x1fe898u: goto label_1fe898;
        case 0x1fe89cu: goto label_1fe89c;
        case 0x1fe8a0u: goto label_1fe8a0;
        case 0x1fe8a4u: goto label_1fe8a4;
        case 0x1fe8a8u: goto label_1fe8a8;
        case 0x1fe8acu: goto label_1fe8ac;
        case 0x1fe8b0u: goto label_1fe8b0;
        case 0x1fe8b4u: goto label_1fe8b4;
        case 0x1fe8b8u: goto label_1fe8b8;
        case 0x1fe8bcu: goto label_1fe8bc;
        case 0x1fe8c0u: goto label_1fe8c0;
        case 0x1fe8c4u: goto label_1fe8c4;
        case 0x1fe8c8u: goto label_1fe8c8;
        case 0x1fe8ccu: goto label_1fe8cc;
        case 0x1fe8d0u: goto label_1fe8d0;
        case 0x1fe8d4u: goto label_1fe8d4;
        case 0x1fe8d8u: goto label_1fe8d8;
        case 0x1fe8dcu: goto label_1fe8dc;
        case 0x1fe8e0u: goto label_1fe8e0;
        case 0x1fe8e4u: goto label_1fe8e4;
        case 0x1fe8e8u: goto label_1fe8e8;
        case 0x1fe8ecu: goto label_1fe8ec;
        case 0x1fe8f0u: goto label_1fe8f0;
        case 0x1fe8f4u: goto label_1fe8f4;
        case 0x1fe8f8u: goto label_1fe8f8;
        case 0x1fe8fcu: goto label_1fe8fc;
        case 0x1fe900u: goto label_1fe900;
        case 0x1fe904u: goto label_1fe904;
        case 0x1fe908u: goto label_1fe908;
        case 0x1fe90cu: goto label_1fe90c;
        case 0x1fe910u: goto label_1fe910;
        case 0x1fe914u: goto label_1fe914;
        case 0x1fe918u: goto label_1fe918;
        case 0x1fe91cu: goto label_1fe91c;
        case 0x1fe920u: goto label_1fe920;
        case 0x1fe924u: goto label_1fe924;
        case 0x1fe928u: goto label_1fe928;
        case 0x1fe92cu: goto label_1fe92c;
        case 0x1fe930u: goto label_1fe930;
        case 0x1fe934u: goto label_1fe934;
        case 0x1fe938u: goto label_1fe938;
        case 0x1fe93cu: goto label_1fe93c;
        case 0x1fe940u: goto label_1fe940;
        case 0x1fe944u: goto label_1fe944;
        case 0x1fe948u: goto label_1fe948;
        case 0x1fe94cu: goto label_1fe94c;
        case 0x1fe950u: goto label_1fe950;
        case 0x1fe954u: goto label_1fe954;
        case 0x1fe958u: goto label_1fe958;
        case 0x1fe95cu: goto label_1fe95c;
        case 0x1fe960u: goto label_1fe960;
        case 0x1fe964u: goto label_1fe964;
        case 0x1fe968u: goto label_1fe968;
        case 0x1fe96cu: goto label_1fe96c;
        case 0x1fe970u: goto label_1fe970;
        case 0x1fe974u: goto label_1fe974;
        case 0x1fe978u: goto label_1fe978;
        case 0x1fe97cu: goto label_1fe97c;
        case 0x1fe980u: goto label_1fe980;
        case 0x1fe984u: goto label_1fe984;
        case 0x1fe988u: goto label_1fe988;
        case 0x1fe98cu: goto label_1fe98c;
        case 0x1fe990u: goto label_1fe990;
        case 0x1fe994u: goto label_1fe994;
        case 0x1fe998u: goto label_1fe998;
        case 0x1fe99cu: goto label_1fe99c;
        case 0x1fe9a0u: goto label_1fe9a0;
        case 0x1fe9a4u: goto label_1fe9a4;
        case 0x1fe9a8u: goto label_1fe9a8;
        case 0x1fe9acu: goto label_1fe9ac;
        case 0x1fe9b0u: goto label_1fe9b0;
        case 0x1fe9b4u: goto label_1fe9b4;
        case 0x1fe9b8u: goto label_1fe9b8;
        case 0x1fe9bcu: goto label_1fe9bc;
        case 0x1fe9c0u: goto label_1fe9c0;
        case 0x1fe9c4u: goto label_1fe9c4;
        case 0x1fe9c8u: goto label_1fe9c8;
        case 0x1fe9ccu: goto label_1fe9cc;
        case 0x1fe9d0u: goto label_1fe9d0;
        case 0x1fe9d4u: goto label_1fe9d4;
        case 0x1fe9d8u: goto label_1fe9d8;
        case 0x1fe9dcu: goto label_1fe9dc;
        case 0x1fe9e0u: goto label_1fe9e0;
        case 0x1fe9e4u: goto label_1fe9e4;
        case 0x1fe9e8u: goto label_1fe9e8;
        case 0x1fe9ecu: goto label_1fe9ec;
        case 0x1fe9f0u: goto label_1fe9f0;
        case 0x1fe9f4u: goto label_1fe9f4;
        case 0x1fe9f8u: goto label_1fe9f8;
        case 0x1fe9fcu: goto label_1fe9fc;
        case 0x1fea00u: goto label_1fea00;
        case 0x1fea04u: goto label_1fea04;
        case 0x1fea08u: goto label_1fea08;
        case 0x1fea0cu: goto label_1fea0c;
        case 0x1fea10u: goto label_1fea10;
        case 0x1fea14u: goto label_1fea14;
        case 0x1fea18u: goto label_1fea18;
        case 0x1fea1cu: goto label_1fea1c;
        case 0x1fea20u: goto label_1fea20;
        case 0x1fea24u: goto label_1fea24;
        case 0x1fea28u: goto label_1fea28;
        case 0x1fea2cu: goto label_1fea2c;
        case 0x1fea30u: goto label_1fea30;
        case 0x1fea34u: goto label_1fea34;
        case 0x1fea38u: goto label_1fea38;
        case 0x1fea3cu: goto label_1fea3c;
        case 0x1fea40u: goto label_1fea40;
        case 0x1fea44u: goto label_1fea44;
        case 0x1fea48u: goto label_1fea48;
        case 0x1fea4cu: goto label_1fea4c;
        case 0x1fea50u: goto label_1fea50;
        case 0x1fea54u: goto label_1fea54;
        case 0x1fea58u: goto label_1fea58;
        case 0x1fea5cu: goto label_1fea5c;
        case 0x1fea60u: goto label_1fea60;
        case 0x1fea64u: goto label_1fea64;
        case 0x1fea68u: goto label_1fea68;
        case 0x1fea6cu: goto label_1fea6c;
        case 0x1fea70u: goto label_1fea70;
        case 0x1fea74u: goto label_1fea74;
        case 0x1fea78u: goto label_1fea78;
        case 0x1fea7cu: goto label_1fea7c;
        case 0x1fea80u: goto label_1fea80;
        case 0x1fea84u: goto label_1fea84;
        case 0x1fea88u: goto label_1fea88;
        case 0x1fea8cu: goto label_1fea8c;
        case 0x1fea90u: goto label_1fea90;
        case 0x1fea94u: goto label_1fea94;
        case 0x1fea98u: goto label_1fea98;
        case 0x1fea9cu: goto label_1fea9c;
        case 0x1feaa0u: goto label_1feaa0;
        case 0x1feaa4u: goto label_1feaa4;
        case 0x1feaa8u: goto label_1feaa8;
        case 0x1feaacu: goto label_1feaac;
        case 0x1feab0u: goto label_1feab0;
        case 0x1feab4u: goto label_1feab4;
        case 0x1feab8u: goto label_1feab8;
        case 0x1feabcu: goto label_1feabc;
        default: return;
    }

label_1fe2f0:
    // 0x1fe2f0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1fe2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1fe2f4:
    // 0x1fe2f4: 0xc055148  jal         func_154520
label_1fe2f8:
    if (ctx->pc == 0x1FE2F8u) {
        ctx->pc = 0x1FE2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE2F4u;
        // 0x1fe2f8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE2FCu;
        goto label_1fe2fc;
    }
    ctx->pc = 0x1FE2F4u;
    SET_GPR_U32(ctx, 31, 0x1FE2FCu);
    ctx->pc = 0x1FE2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE2F4u;
    // 0x1fe2f8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154520u, 0x1FE2F4u, 0x1FE2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE2FCu;
label_1fe2fc:
    // 0x1fe2fc: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1fe2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1fe300:
    // 0x1fe300: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x1fe300u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1fe304:
    // 0x1fe304: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1fe304u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1fe308:
    // 0x1fe308: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x1fe308u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1fe30c:
    // 0x1fe30c: 0xe2280a  movz        $a1, $a3, $v0
    ctx->pc = 0x1fe30cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 7));
label_1fe310:
    // 0x1fe310: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1fe310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1fe314:
    // 0x1fe314: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x1fe314u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_1fe318:
    // 0x1fe318: 0xc054e5c  jal         func_153970
label_1fe31c:
    if (ctx->pc == 0x1FE31Cu) {
        ctx->pc = 0x1FE31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE318u;
        // 0x1fe31c: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE320u;
        goto label_1fe320;
    }
    ctx->pc = 0x1FE318u;
    SET_GPR_U32(ctx, 31, 0x1FE320u);
    ctx->pc = 0x1FE31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE318u;
    // 0x1fe31c: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x1FE318u, 0x1FE320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE320u;
label_1fe320:
    // 0x1fe320: 0x8f839068  lw          $v1, -0x6F98($gp)
    ctx->pc = 0x1fe320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938728)));
label_1fe324:
    // 0x1fe324: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1fe324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1fe328:
    // 0x1fe328: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fe328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fe32c:
    // 0x1fe32c: 0x24423050  addiu       $v0, $v0, 0x3050
    ctx->pc = 0x1fe32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12368));
label_1fe330:
    // 0x1fe330: 0x260412c0  addiu       $a0, $s0, 0x12C0
    ctx->pc = 0x1fe330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4800));
label_1fe334:
    // 0x1fe334: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x1fe334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1fe338:
    // 0x1fe338: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1fe338u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1fe33c:
    // 0x1fe33c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fe33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fe340:
    // 0x1fe340: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x1fe340u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1fe344:
    // 0x1fe344: 0xc054e74  jal         func_1539D0
label_1fe348:
    if (ctx->pc == 0x1FE348u) {
        ctx->pc = 0x1FE348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE344u;
        // 0x1fe348: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE34Cu;
        goto label_1fe34c;
    }
    ctx->pc = 0x1FE344u;
    SET_GPR_U32(ctx, 31, 0x1FE34Cu);
    ctx->pc = 0x1FE348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE344u;
    // 0x1fe348: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x1FE344u, 0x1FE34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE34Cu;
label_1fe34c:
    // 0x1fe34c: 0x10000015  b           . + 4 + (0x15 << 2)
label_1fe350:
    if (ctx->pc == 0x1FE350u) {
        ctx->pc = 0x1FE350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE34Cu;
        // 0x1fe350: 0x8f829060  lw          $v0, -0x6FA0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938720)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE354u;
        goto label_1fe354;
    }
    ctx->pc = 0x1FE34Cu;
    {
        const bool branch_taken_0x1fe34c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE34Cu;
        // 0x1fe350: 0x8f829060  lw          $v0, -0x6FA0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938720)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe34c) {
            ctx->pc = 0x1FE3A4u;
            goto label_1fe3a4;
        }
    }
    ctx->pc = 0x1FE354u;
label_1fe354:
    // 0x1fe354: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1fe354u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1fe358:
    // 0x1fe358: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x1fe358u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1fe35c:
    // 0x1fe35c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1fe35cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1fe360:
    // 0x1fe360: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x1fe360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1fe364:
    // 0x1fe364: 0x240600cc  addiu       $a2, $zero, 0xCC
    ctx->pc = 0x1fe364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
label_1fe368:
    // 0x1fe368: 0x24070036  addiu       $a3, $zero, 0x36
    ctx->pc = 0x1fe368u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
label_1fe36c:
    // 0x1fe36c: 0xc054e5c  jal         func_153970
label_1fe370:
    if (ctx->pc == 0x1FE370u) {
        ctx->pc = 0x1FE370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE36Cu;
        // 0x1fe370: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE374u;
        goto label_1fe374;
    }
    ctx->pc = 0x1FE36Cu;
    SET_GPR_U32(ctx, 31, 0x1FE374u);
    ctx->pc = 0x1FE370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE36Cu;
    // 0x1fe370: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x1FE36Cu, 0x1FE374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE374u;
label_1fe374:
    // 0x1fe374: 0x8f839068  lw          $v1, -0x6F98($gp)
    ctx->pc = 0x1fe374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938728)));
label_1fe378:
    // 0x1fe378: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1fe378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1fe37c:
    // 0x1fe37c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fe37cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fe380:
    // 0x1fe380: 0x24423050  addiu       $v0, $v0, 0x3050
    ctx->pc = 0x1fe380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12368));
label_1fe384:
    // 0x1fe384: 0x260412c0  addiu       $a0, $s0, 0x12C0
    ctx->pc = 0x1fe384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4800));
label_1fe388:
    // 0x1fe388: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x1fe388u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1fe38c:
    // 0x1fe38c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1fe38cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1fe390:
    // 0x1fe390: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fe390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fe394:
    // 0x1fe394: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x1fe394u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1fe398:
    // 0x1fe398: 0xc054e74  jal         func_1539D0
label_1fe39c:
    if (ctx->pc == 0x1FE39Cu) {
        ctx->pc = 0x1FE39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE398u;
        // 0x1fe39c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE3A0u;
        goto label_1fe3a0;
    }
    ctx->pc = 0x1FE398u;
    SET_GPR_U32(ctx, 31, 0x1FE3A0u);
    ctx->pc = 0x1FE39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE398u;
    // 0x1fe39c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x1FE398u, 0x1FE3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE3A0u;
label_1fe3a0:
    // 0x1fe3a0: 0x8f829060  lw          $v0, -0x6FA0($gp)
    ctx->pc = 0x1fe3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938720)));
label_1fe3a4:
    // 0x1fe3a4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1fe3a8:
    if (ctx->pc == 0x1FE3A8u) {
        ctx->pc = 0x1FE3ACu;
        goto label_1fe3ac;
    }
    ctx->pc = 0x1FE3A4u;
    {
        const bool branch_taken_0x1fe3a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe3a4) {
            ctx->pc = 0x1FE3C8u;
            goto label_1fe3c8;
        }
    }
    ctx->pc = 0x1FE3ACu;
label_1fe3ac:
    // 0x1fe3ac: 0x8f869064  lw          $a2, -0x6F9C($gp)
    ctx->pc = 0x1fe3acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938724)));
label_1fe3b0:
    // 0x1fe3b0: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x1fe3b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_1fe3b4:
    // 0x1fe3b4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1fe3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1fe3b8:
    // 0x1fe3b8: 0xc08f20e  jal         func_23C838
label_1fe3bc:
    if (ctx->pc == 0x1FE3BCu) {
        ctx->pc = 0x1FE3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE3B8u;
        // 0x1fe3bc: 0x24a5d550  addiu       $a1, $a1, -0x2AB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE3C0u;
        goto label_1fe3c0;
    }
    ctx->pc = 0x1FE3B8u;
    SET_GPR_U32(ctx, 31, 0x1FE3C0u);
    ctx->pc = 0x1FE3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE3B8u;
    // 0x1fe3bc: 0x24a5d550  addiu       $a1, $a1, -0x2AB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    { ctx->pc = 0x23c838; return; }
    ctx->pc = 0x1FE3C0u;
label_1fe3c0:
    // 0x1fe3c0: 0x10000003  b           . + 4 + (0x3 << 2)
label_1fe3c4:
    if (ctx->pc == 0x1FE3C4u) {
        ctx->pc = 0x1FE3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE3C0u;
        // 0x1fe3c4: 0x26260098  addiu       $a2, $s1, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE3C8u;
        goto label_1fe3c8;
    }
    ctx->pc = 0x1FE3C0u;
    {
        const bool branch_taken_0x1fe3c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE3C0u;
        // 0x1fe3c4: 0x26260098  addiu       $a2, $s1, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe3c0) {
            ctx->pc = 0x1FE3D0u;
            goto label_1fe3d0;
        }
    }
    ctx->pc = 0x1FE3C8u;
label_1fe3c8:
    // 0x1fe3c8: 0xa3a00070  sb          $zero, 0x70($sp)
    ctx->pc = 0x1fe3c8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 112), (uint8_t)GPR_U32(ctx, 0));
label_1fe3cc:
    // 0x1fe3cc: 0x26260098  addiu       $a2, $s1, 0x98
    ctx->pc = 0x1fe3ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 152));
label_1fe3d0:
    // 0x1fe3d0: 0x264700c8  addiu       $a3, $s2, 0xC8
    ctx->pc = 0x1fe3d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 200));
label_1fe3d4:
    // 0x1fe3d4: 0x26044380  addiu       $a0, $s0, 0x4380
    ctx->pc = 0x1fe3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 17280));
label_1fe3d8:
    // 0x1fe3d8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1fe3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1fe3dc:
    // 0x1fe3dc: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x1fe3dcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1fe3e0:
    // 0x1fe3e0: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x1fe3e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1fe3e4:
    // 0x1fe3e4: 0x240a0018  addiu       $t2, $zero, 0x18
    ctx->pc = 0x1fe3e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1fe3e8:
    // 0x1fe3e8: 0xc0708ac  jal         func_1C22B0
label_1fe3ec:
    if (ctx->pc == 0x1FE3ECu) {
        ctx->pc = 0x1FE3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE3E8u;
        // 0x1fe3ec: 0x27ab0070  addiu       $t3, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE3F0u;
        goto label_1fe3f0;
    }
    ctx->pc = 0x1FE3E8u;
    SET_GPR_U32(ctx, 31, 0x1FE3F0u);
    ctx->pc = 0x1FE3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE3E8u;
    // 0x1fe3ec: 0x27ab0070  addiu       $t3, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    { ctx->pc = 0x1c22b0; return; }
    ctx->pc = 0x1FE3F0u;
label_1fe3f0:
    // 0x1fe3f0: 0xc070ae4  jal         func_1C2B90
label_1fe3f4:
    if (ctx->pc == 0x1FE3F4u) {
        ctx->pc = 0x1FE3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE3F0u;
        // 0x1fe3f4: 0x8f849068  lw          $a0, -0x6F98($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938728)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE3F8u;
        goto label_1fe3f8;
    }
    ctx->pc = 0x1FE3F0u;
    SET_GPR_U32(ctx, 31, 0x1FE3F8u);
    ctx->pc = 0x1FE3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE3F0u;
    // 0x1fe3f4: 0x8f849068  lw          $a0, -0x6F98($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938728)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2B90u;
    { ctx->pc = 0x1c2b90; return; }
    ctx->pc = 0x1FE3F8u;
label_1fe3f8:
    // 0x1fe3f8: 0x2622fff8  addiu       $v0, $s1, -0x8
    ctx->pc = 0x1fe3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
label_1fe3fc:
    // 0x1fe3fc: 0x2645fff0  addiu       $a1, $s2, -0x10
    ctx->pc = 0x1fe3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967280));
label_1fe400:
    // 0x1fe400: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1fe400u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1fe404:
    // 0x1fe404: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x1fe404u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1fe408:
    // 0x1fe408: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x1fe408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_1fe40c:
    // 0x1fe40c: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x1fe40cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
label_1fe410:
    // 0x1fe410: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1fe410u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1fe414:
    // 0x1fe414: 0xa60345e0  sh          $v1, 0x45E0($s0)
    ctx->pc = 0x1fe414u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 17888), (uint16_t)GPR_U32(ctx, 3));
label_1fe418:
    // 0x1fe418: 0x24847900  addiu       $a0, $a0, 0x7900
    ctx->pc = 0x1fe418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30976));
label_1fe41c:
    // 0x1fe41c: 0x24436c00  addiu       $v1, $v0, 0x6C00
    ctx->pc = 0x1fe41cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
label_1fe420:
    // 0x1fe420: 0xa60445e2  sh          $a0, 0x45E2($s0)
    ctx->pc = 0x1fe420u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 17890), (uint16_t)GPR_U32(ctx, 4));
label_1fe424:
    // 0x1fe424: 0x24a20018  addiu       $v0, $a1, 0x18
    ctx->pc = 0x1fe424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
label_1fe428:
    // 0x1fe428: 0x3404fe00  ori         $a0, $zero, 0xFE00
    ctx->pc = 0x1fe428u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1fe42c:
    // 0x1fe42c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1fe42cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1fe430:
    // 0x1fe430: 0xae0445e4  sw          $a0, 0x45E4($s0)
    ctx->pc = 0x1fe430u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 17892), GPR_U32(ctx, 4));
label_1fe434:
    // 0x1fe434: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x1fe434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
label_1fe438:
    // 0x1fe438: 0xa60345f0  sh          $v1, 0x45F0($s0)
    ctx->pc = 0x1fe438u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 17904), (uint16_t)GPR_U32(ctx, 3));
label_1fe43c:
    // 0x1fe43c: 0xa60245f2  sh          $v0, 0x45F2($s0)
    ctx->pc = 0x1fe43cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 17906), (uint16_t)GPR_U32(ctx, 2));
label_1fe440:
    // 0x1fe440: 0xae0445f4  sw          $a0, 0x45F4($s0)
    ctx->pc = 0x1fe440u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 17908), GPR_U32(ctx, 4));
label_1fe444:
    // 0x1fe444: 0x8f829058  lw          $v0, -0x6FA8($gp)
    ctx->pc = 0x1fe444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938712)));
label_1fe448:
    // 0x1fe448: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_1fe44c:
    if (ctx->pc == 0x1FE44Cu) {
        ctx->pc = 0x1FE450u;
        goto label_1fe450;
    }
    ctx->pc = 0x1FE448u;
    {
        const bool branch_taken_0x1fe448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe448) {
            ctx->pc = 0x1FE4B4u;
            goto label_1fe4b4;
        }
    }
    ctx->pc = 0x1FE450u;
label_1fe450:
    // 0x1fe450: 0x8f82905c  lw          $v0, -0x6FA4($gp)
    ctx->pc = 0x1fe450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938716)));
label_1fe454:
    // 0x1fe454: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
label_1fe458:
    if (ctx->pc == 0x1FE458u) {
        ctx->pc = 0x1FE458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE454u;
        // 0x1fe458: 0x3043003f  andi        $v1, $v0, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE45Cu;
        goto label_1fe45c;
    }
    ctx->pc = 0x1FE454u;
    {
        const bool branch_taken_0x1fe454 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1FE458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE454u;
        // 0x1fe458: 0x3043003f  andi        $v1, $v0, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe454) {
            ctx->pc = 0x1FE468u;
            goto label_1fe468;
        }
    }
    ctx->pc = 0x1FE45Cu;
label_1fe45c:
    // 0x1fe45c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1fe460:
    if (ctx->pc == 0x1FE460u) {
        ctx->pc = 0x1FE460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE45Cu;
        // 0x1fe460: 0x28610020  slti        $at, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE464u;
        goto label_1fe464;
    }
    ctx->pc = 0x1FE45Cu;
    {
        const bool branch_taken_0x1fe45c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE45Cu;
        // 0x1fe460: 0x28610020  slti        $at, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe45c) {
            ctx->pc = 0x1FE46Cu;
            goto label_1fe46c;
        }
    }
    ctx->pc = 0x1FE464u;
label_1fe464:
    // 0x1fe464: 0x2463ffc0  addiu       $v1, $v1, -0x40
    ctx->pc = 0x1fe464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
label_1fe468:
    // 0x1fe468: 0x28610020  slti        $at, $v1, 0x20
    ctx->pc = 0x1fe468u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
label_1fe46c:
    // 0x1fe46c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_1fe470:
    if (ctx->pc == 0x1FE470u) {
        ctx->pc = 0x1FE470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE46Cu;
        // 0x1fe470: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE474u;
        goto label_1fe474;
    }
    ctx->pc = 0x1FE46Cu;
    {
        const bool branch_taken_0x1fe46c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE46Cu;
        // 0x1fe470: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe46c) {
            ctx->pc = 0x1FE490u;
            goto label_1fe490;
        }
    }
    ctx->pc = 0x1FE474u;
label_1fe474:
    // 0x1fe474: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x1fe474u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_1fe478:
    // 0x1fe478: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1fe47c:
    if (ctx->pc == 0x1FE47Cu) {
        ctx->pc = 0x1FE47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE478u;
        // 0x1fe47c: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE480u;
        goto label_1fe480;
    }
    ctx->pc = 0x1FE478u;
    {
        const bool branch_taken_0x1fe478 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1FE47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE478u;
        // 0x1fe47c: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe478) {
            ctx->pc = 0x1FE488u;
            goto label_1fe488;
        }
    }
    ctx->pc = 0x1FE480u;
label_1fe480:
    // 0x1fe480: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x1fe480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
label_1fe484:
    // 0x1fe484: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1fe484u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_1fe488:
    // 0x1fe488: 0x10000008  b           . + 4 + (0x8 << 2)
label_1fe48c:
    if (ctx->pc == 0x1FE48Cu) {
        ctx->pc = 0x1FE48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE488u;
        // 0x1fe48c: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE490u;
        goto label_1fe490;
    }
    ctx->pc = 0x1FE488u;
    {
        const bool branch_taken_0x1fe488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE488u;
        // 0x1fe48c: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe488) {
            ctx->pc = 0x1FE4ACu;
            goto label_1fe4ac;
        }
    }
    ctx->pc = 0x1FE490u;
label_1fe490:
    // 0x1fe490: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1fe490u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fe494:
    // 0x1fe494: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x1fe494u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1fe498:
    // 0x1fe498: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1fe49c:
    if (ctx->pc == 0x1FE49Cu) {
        ctx->pc = 0x1FE49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE498u;
        // 0x1fe49c: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE4A0u;
        goto label_1fe4a0;
    }
    ctx->pc = 0x1FE498u;
    {
        const bool branch_taken_0x1fe498 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1FE49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE498u;
        // 0x1fe49c: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe498) {
            ctx->pc = 0x1FE4A8u;
            goto label_1fe4a8;
        }
    }
    ctx->pc = 0x1FE4A0u;
label_1fe4a0:
    // 0x1fe4a0: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x1fe4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
label_1fe4a4:
    // 0x1fe4a4: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1fe4a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_1fe4a8:
    // 0x1fe4a8: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1fe4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_1fe4ac:
    // 0x1fe4ac: 0x10000002  b           . + 4 + (0x2 << 2)
label_1fe4b0:
    if (ctx->pc == 0x1FE4B0u) {
        ctx->pc = 0x1FE4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE4ACu;
        // 0x1fe4b0: 0xa20245d3  sb          $v0, 0x45D3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 17875), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE4B4u;
        goto label_1fe4b4;
    }
    ctx->pc = 0x1FE4ACu;
    {
        const bool branch_taken_0x1fe4ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE4ACu;
        // 0x1fe4b0: 0xa20245d3  sb          $v0, 0x45D3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 17875), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe4ac) {
            ctx->pc = 0x1FE4B8u;
            goto label_1fe4b8;
        }
    }
    ctx->pc = 0x1FE4B4u;
label_1fe4b4:
    // 0x1fe4b4: 0xa20045d3  sb          $zero, 0x45D3($s0)
    ctx->pc = 0x1fe4b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 17875), (uint8_t)GPR_U32(ctx, 0));
label_1fe4b8:
    // 0x1fe4b8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1fe4b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1fe4bc:
    // 0x1fe4bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1fe4bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fe4c0:
    // 0x1fe4c0: 0x24060460  addiu       $a2, $zero, 0x460
    ctx->pc = 0x1fe4c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1120));
label_1fe4c4:
    // 0x1fe4c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1fe4c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fe4c8:
    // 0x1fe4c8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1fe4c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fe4cc:
    // 0x1fe4cc: 0xc066c72  jal         func_19B1C8
label_1fe4d0:
    if (ctx->pc == 0x1FE4D0u) {
        ctx->pc = 0x1FE4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE4CCu;
        // 0x1fe4d0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE4D4u;
        goto label_1fe4d4;
    }
    ctx->pc = 0x1FE4CCu;
    SET_GPR_U32(ctx, 31, 0x1FE4D4u);
    ctx->pc = 0x1FE4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE4CCu;
    // 0x1fe4d0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1FE4CCu, 0x1FE4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE4D4u;
label_1fe4d4:
    // 0x1fe4d4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1fe4d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1fe4d8:
    // 0x1fe4d8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1fe4d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1fe4dc:
    // 0x1fe4dc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1fe4dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1fe4e0:
    // 0x1fe4e0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1fe4e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1fe4e4:
    // 0x1fe4e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fe4e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fe4e8:
    // 0x1fe4e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fe4e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fe4ec:
    // 0x1fe4ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fe4ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1fe4f0:
    // 0x1fe4f0: 0x3e00008  jr          $ra
label_1fe4f4:
    if (ctx->pc == 0x1FE4F4u) {
        ctx->pc = 0x1FE4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE4F0u;
        // 0x1fe4f4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE4F8u;
        goto label_1fe4f8;
    }
    ctx->pc = 0x1FE4F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE4F0u;
        // 0x1fe4f4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE4F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE4F8u;
label_1fe4f8:
    // 0x1fe4f8: 0x0  nop
    ctx->pc = 0x1fe4f8u;
    // NOP
label_1fe4fc:
    // 0x1fe4fc: 0x0  nop
    ctx->pc = 0x1fe4fcu;
    // NOP
label_1fe500:
    // 0x1fe500: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1fe500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_1fe504:
    // 0x1fe504: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1fe504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1fe508:
    // 0x1fe508: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x1fe508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_1fe50c:
    // 0x1fe50c: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1fe50cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_1fe510:
    // 0x1fe510: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1fe510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_1fe514:
    // 0x1fe514: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1fe514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_1fe518:
    // 0x1fe518: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1fe518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1fe51c:
    // 0x1fe51c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1fe51cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1fe520:
    // 0x1fe520: 0xc07fa38  jal         func_1FE8E0
label_1fe524:
    if (ctx->pc == 0x1FE524u) {
        ctx->pc = 0x1FE524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE520u;
        // 0x1fe524: 0x7fb00020  sq          $s0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE528u;
        goto label_1fe528;
    }
    ctx->pc = 0x1FE520u;
    SET_GPR_U32(ctx, 31, 0x1FE528u);
    ctx->pc = 0x1FE524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE520u;
    // 0x1fe524: 0x7fb00020  sq          $s0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE8E0u;
    goto label_1fe8e0;
    ctx->pc = 0x1FE528u;
label_1fe528:
    // 0x1fe528: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1fe528u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fe52c:
    // 0x1fe52c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1fe52cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fe530:
    // 0x1fe530: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1fe530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_1fe534:
    // 0x1fe534: 0x240506df  addiu       $a1, $zero, 0x6DF
    ctx->pc = 0x1fe534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1759));
label_1fe538:
    // 0x1fe538: 0x24424b20  addiu       $v0, $v0, 0x4B20
    ctx->pc = 0x1fe538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19232));
label_1fe53c:
    // 0x1fe53c: 0x558821  addu        $s1, $v0, $s5
    ctx->pc = 0x1fe53cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1fe540:
    // 0x1fe540: 0xc05e234  jal         func_1788D0
label_1fe544:
    if (ctx->pc == 0x1FE544u) {
        ctx->pc = 0x1FE544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE540u;
        // 0x1fe544: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE548u;
        goto label_1fe548;
    }
    ctx->pc = 0x1FE540u;
    SET_GPR_U32(ctx, 31, 0x1FE548u);
    ctx->pc = 0x1FE544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE540u;
    // 0x1fe544: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1788D0u, 0x1FE540u, 0x1FE548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE548u;
label_1fe548:
    // 0x1fe548: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x1fe548u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1fe54c:
    // 0x1fe54c: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x1fe54cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1fe550:
    // 0x1fe550: 0xffaa0000  sd          $t2, 0x0($sp)
    ctx->pc = 0x1fe550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 10));
label_1fe554:
    // 0x1fe554: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1fe554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1fe558:
    // 0x1fe558: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x1fe558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_1fe55c:
    // 0x1fe55c: 0x3407fe00  ori         $a3, $zero, 0xFE00
    ctx->pc = 0x1fe55cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1fe560:
    // 0x1fe560: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x1fe560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
label_1fe564:
    // 0x1fe564: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x1fe564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_1fe568:
    // 0x1fe568: 0x24050280  addiu       $a1, $zero, 0x280
    ctx->pc = 0x1fe568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1fe56c:
    // 0x1fe56c: 0x240601c0  addiu       $a2, $zero, 0x1C0
    ctx->pc = 0x1fe56cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1fe570:
    // 0x1fe570: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1fe570u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fe574:
    // 0x1fe574: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1fe574u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fe578:
    // 0x1fe578: 0xc07c110  jal         func_1F0440
label_1fe57c:
    if (ctx->pc == 0x1FE57Cu) {
        ctx->pc = 0x1FE57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE578u;
        // 0x1fe57c: 0x240b0010  addiu       $t3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE580u;
        goto label_1fe580;
    }
    ctx->pc = 0x1FE578u;
    SET_GPR_U32(ctx, 31, 0x1FE580u);
    ctx->pc = 0x1FE57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE578u;
    // 0x1fe57c: 0x240b0010  addiu       $t3, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0440u;
    { ctx->pc = 0x1f0440; return; }
    ctx->pc = 0x1FE580u;
label_1fe580:
    // 0x1fe580: 0x240400c0  addiu       $a0, $zero, 0xC0
    ctx->pc = 0x1fe580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_1fe584:
    // 0x1fe584: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1fe584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1fe588:
    // 0x1fe588: 0xc07091c  jal         func_1C2470
label_1fe58c:
    if (ctx->pc == 0x1FE58Cu) {
        ctx->pc = 0x1FE58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE588u;
        // 0x1fe58c: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE590u;
        goto label_1fe590;
    }
    ctx->pc = 0x1FE588u;
    SET_GPR_U32(ctx, 31, 0x1FE590u);
    ctx->pc = 0x1FE58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE588u;
    // 0x1fe58c: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2470u;
    { ctx->pc = 0x1c2470; return; }
    ctx->pc = 0x1FE590u;
label_1fe590:
    // 0x1fe590: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fe590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fe594:
    // 0x1fe594: 0x26240380  addiu       $a0, $s1, 0x380
    ctx->pc = 0x1fe594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 896));
label_1fe598:
    // 0x1fe598: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1fe598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1fe59c:
    // 0x1fe59c: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x1fe59cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1fe5a0:
    // 0x1fe5a0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1fe5a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1fe5a4:
    // 0x1fe5a4: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x1fe5a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1fe5a8:
    // 0x1fe5a8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1fe5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1fe5ac:
    // 0x1fe5ac: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x1fe5acu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1fe5b0:
    // 0x1fe5b0: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1fe5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1fe5b4:
    // 0x1fe5b4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1fe5b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fe5b8:
    // 0x1fe5b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fe5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fe5bc:
    // 0x1fe5bc: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1fe5bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1fe5c0:
    // 0x1fe5c0: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1fe5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1fe5c4:
    // 0x1fe5c4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1fe5c4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fe5c8:
    // 0x1fe5c8: 0xc05de30  jal         func_1778C0
label_1fe5cc:
    if (ctx->pc == 0x1FE5CCu) {
        ctx->pc = 0x1FE5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE5C8u;
        // 0x1fe5cc: 0x240b00c0  addiu       $t3, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE5D0u;
        goto label_1fe5d0;
    }
    ctx->pc = 0x1FE5C8u;
    SET_GPR_U32(ctx, 31, 0x1FE5D0u);
    ctx->pc = 0x1FE5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE5C8u;
    // 0x1fe5cc: 0x240b00c0  addiu       $t3, $zero, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1FE5C8u, 0x1FE5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE5D0u;
label_1fe5d0:
    // 0x1fe5d0: 0xc070834  jal         func_1C20D0
label_1fe5d4:
    if (ctx->pc == 0x1FE5D4u) {
        ctx->pc = 0x1FE5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE5D0u;
        // 0x1fe5d4: 0x24040031  addiu       $a0, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE5D8u;
        goto label_1fe5d8;
    }
    ctx->pc = 0x1FE5D0u;
    SET_GPR_U32(ctx, 31, 0x1FE5D8u);
    ctx->pc = 0x1FE5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE5D0u;
    // 0x1fe5d4: 0x24040031  addiu       $a0, $zero, 0x31 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x1FE5D8u;
label_1fe5d8:
    // 0x1fe5d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fe5d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fe5dc:
    // 0x1fe5dc: 0x26240420  addiu       $a0, $s1, 0x420
    ctx->pc = 0x1fe5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1056));
label_1fe5e0:
    // 0x1fe5e0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1fe5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1fe5e4:
    // 0x1fe5e4: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x1fe5e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1fe5e8:
    // 0x1fe5e8: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1fe5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1fe5ec:
    // 0x1fe5ec: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x1fe5ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1fe5f0:
    // 0x1fe5f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1fe5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1fe5f4:
    // 0x1fe5f4: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x1fe5f4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1fe5f8:
    // 0x1fe5f8: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1fe5f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1fe5fc:
    // 0x1fe5fc: 0x24090158  addiu       $t1, $zero, 0x158
    ctx->pc = 0x1fe5fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 344));
label_1fe600:
    // 0x1fe600: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fe600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fe604:
    // 0x1fe604: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1fe604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1fe608:
    // 0x1fe608: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1fe608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1fe60c:
    // 0x1fe60c: 0x240a00b0  addiu       $t2, $zero, 0xB0
    ctx->pc = 0x1fe60cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
label_1fe610:
    // 0x1fe610: 0xc05de30  jal         func_1778C0
label_1fe614:
    if (ctx->pc == 0x1FE614u) {
        ctx->pc = 0x1FE614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE610u;
        // 0x1fe614: 0x240b0050  addiu       $t3, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE618u;
        goto label_1fe618;
    }
    ctx->pc = 0x1FE610u;
    SET_GPR_U32(ctx, 31, 0x1FE618u);
    ctx->pc = 0x1FE614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE610u;
    // 0x1fe614: 0x240b0050  addiu       $t3, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1FE610u, 0x1FE618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE618u;
label_1fe618:
    // 0x1fe618: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x1fe618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1fe61c:
    // 0x1fe61c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1fe61cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1fe620:
    // 0x1fe620: 0x240600c0  addiu       $a2, $zero, 0xC0
    ctx->pc = 0x1fe620u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_1fe624:
    // 0x1fe624: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1fe624u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fe628:
    // 0x1fe628: 0x24080280  addiu       $t0, $zero, 0x280
    ctx->pc = 0x1fe628u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1fe62c:
    // 0x1fe62c: 0x240901c0  addiu       $t1, $zero, 0x1C0
    ctx->pc = 0x1fe62cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1fe630:
    // 0x1fe630: 0xc054e5c  jal         func_153970
label_1fe634:
    if (ctx->pc == 0x1FE634u) {
        ctx->pc = 0x1FE634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE630u;
        // 0x1fe634: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE638u;
        goto label_1fe638;
    }
    ctx->pc = 0x1FE630u;
    SET_GPR_U32(ctx, 31, 0x1FE638u);
    ctx->pc = 0x1FE634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE630u;
    // 0x1fe634: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x1FE630u, 0x1FE638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE638u;
label_1fe638:
    // 0x1fe638: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fe638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fe63c:
    // 0x1fe63c: 0x3c08002d  lui         $t0, 0x2D
    ctx->pc = 0x1fe63cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)45 << 16));
label_1fe640:
    // 0x1fe640: 0x262404c0  addiu       $a0, $s1, 0x4C0
    ctx->pc = 0x1fe640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1216));
label_1fe644:
    // 0x1fe644: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x1fe644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1fe648:
    // 0x1fe648: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1fe648u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fe64c:
    // 0x1fe64c: 0xc054e74  jal         func_1539D0
label_1fe650:
    if (ctx->pc == 0x1FE650u) {
        ctx->pc = 0x1FE650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE64Cu;
        // 0x1fe650: 0x2508d548  addiu       $t0, $t0, -0x2AB8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE654u;
        goto label_1fe654;
    }
    ctx->pc = 0x1FE64Cu;
    SET_GPR_U32(ctx, 31, 0x1FE654u);
    ctx->pc = 0x1FE650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE64Cu;
    // 0x1fe650: 0x2508d548  addiu       $t0, $t0, -0x2AB8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x1FE64Cu, 0x1FE654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE654u;
label_1fe654:
    // 0x1fe654: 0xc07082c  jal         func_1C20B0
label_1fe658:
    if (ctx->pc == 0x1FE658u) {
        ctx->pc = 0x1FE658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE654u;
        // 0x1fe658: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE65Cu;
        goto label_1fe65c;
    }
    ctx->pc = 0x1FE654u;
    SET_GPR_U32(ctx, 31, 0x1FE65Cu);
    ctx->pc = 0x1FE658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE654u;
    // 0x1fe658: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20B0u;
    { ctx->pc = 0x1c20b0; return; }
    ctx->pc = 0x1FE65Cu;
label_1fe65c:
    // 0x1fe65c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fe65cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fe660:
    // 0x1fe660: 0x26241360  addiu       $a0, $s1, 0x1360
    ctx->pc = 0x1fe660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4960));
label_1fe664:
    // 0x1fe664: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1fe664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1fe668:
    // 0x1fe668: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x1fe668u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1fe66c:
    // 0x1fe66c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1fe66cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1fe670:
    // 0x1fe670: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x1fe670u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1fe674:
    // 0x1fe674: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1fe674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1fe678:
    // 0x1fe678: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x1fe678u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1fe67c:
    // 0x1fe67c: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1fe67cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1fe680:
    // 0x1fe680: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x1fe680u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1fe684:
    // 0x1fe684: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fe684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fe688:
    // 0x1fe688: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1fe688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1fe68c:
    // 0x1fe68c: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1fe68cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1fe690:
    // 0x1fe690: 0x240a0198  addiu       $t2, $zero, 0x198
    ctx->pc = 0x1fe690u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 408));
label_1fe694:
    // 0x1fe694: 0xc05de30  jal         func_1778C0
label_1fe698:
    if (ctx->pc == 0x1FE698u) {
        ctx->pc = 0x1FE698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE694u;
        // 0x1fe698: 0x240b0058  addiu       $t3, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE69Cu;
        goto label_1fe69c;
    }
    ctx->pc = 0x1FE694u;
    SET_GPR_U32(ctx, 31, 0x1FE69Cu);
    ctx->pc = 0x1FE698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE694u;
    // 0x1fe698: 0x240b0058  addiu       $t3, $zero, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1FE694u, 0x1FE69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE69Cu;
label_1fe69c:
    // 0x1fe69c: 0x3c0b002d  lui         $t3, 0x2D
    ctx->pc = 0x1fe69cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)45 << 16));
label_1fe6a0:
    // 0x1fe6a0: 0x26241400  addiu       $a0, $s1, 0x1400
    ctx->pc = 0x1fe6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 5120));
label_1fe6a4:
    // 0x1fe6a4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1fe6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1fe6a8:
    // 0x1fe6a8: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x1fe6a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1fe6ac:
    // 0x1fe6ac: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x1fe6acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1fe6b0:
    // 0x1fe6b0: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x1fe6b0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1fe6b4:
    // 0x1fe6b4: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x1fe6b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1fe6b8:
    // 0x1fe6b8: 0x240a0018  addiu       $t2, $zero, 0x18
    ctx->pc = 0x1fe6b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1fe6bc:
    // 0x1fe6bc: 0xc0708ac  jal         func_1C22B0
label_1fe6c0:
    if (ctx->pc == 0x1FE6C0u) {
        ctx->pc = 0x1FE6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE6BCu;
        // 0x1fe6c0: 0x256bd548  addiu       $t3, $t3, -0x2AB8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294956360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE6C4u;
        goto label_1fe6c4;
    }
    ctx->pc = 0x1FE6BCu;
    SET_GPR_U32(ctx, 31, 0x1FE6C4u);
    ctx->pc = 0x1FE6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE6BCu;
    // 0x1fe6c0: 0x256bd548  addiu       $t3, $t3, -0x2AB8 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294956360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    { ctx->pc = 0x1c22b0; return; }
    ctx->pc = 0x1FE6C4u;
label_1fe6c4:
    // 0x1fe6c4: 0xc07082c  jal         func_1C20B0
label_1fe6c8:
    if (ctx->pc == 0x1FE6C8u) {
        ctx->pc = 0x1FE6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE6C4u;
        // 0x1fe6c8: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE6CCu;
        goto label_1fe6cc;
    }
    ctx->pc = 0x1FE6C4u;
    SET_GPR_U32(ctx, 31, 0x1FE6CCu);
    ctx->pc = 0x1FE6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE6C4u;
    // 0x1fe6c8: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20B0u;
    { ctx->pc = 0x1c20b0; return; }
    ctx->pc = 0x1FE6CCu;
label_1fe6cc:
    // 0x1fe6cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fe6ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fe6d0:
    // 0x1fe6d0: 0x262415e0  addiu       $a0, $s1, 0x15E0
    ctx->pc = 0x1fe6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 5600));
label_1fe6d4:
    // 0x1fe6d4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1fe6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1fe6d8:
    // 0x1fe6d8: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x1fe6d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1fe6dc:
    // 0x1fe6dc: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1fe6dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_1fe6e0:
    // 0x1fe6e0: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x1fe6e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1fe6e4:
    // 0x1fe6e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1fe6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1fe6e8:
    // 0x1fe6e8: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x1fe6e8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1fe6ec:
    // 0x1fe6ec: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1fe6ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1fe6f0:
    // 0x1fe6f0: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x1fe6f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1fe6f4:
    // 0x1fe6f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fe6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fe6f8:
    // 0x1fe6f8: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1fe6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1fe6fc:
    // 0x1fe6fc: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1fe6fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1fe700:
    // 0x1fe700: 0x240a01a8  addiu       $t2, $zero, 0x1A8
    ctx->pc = 0x1fe700u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 424));
label_1fe704:
    // 0x1fe704: 0xc05de30  jal         func_1778C0
label_1fe708:
    if (ctx->pc == 0x1FE708u) {
        ctx->pc = 0x1FE708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE704u;
        // 0x1fe708: 0x240b0058  addiu       $t3, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE70Cu;
        goto label_1fe70c;
    }
    ctx->pc = 0x1FE704u;
    SET_GPR_U32(ctx, 31, 0x1FE70Cu);
    ctx->pc = 0x1FE708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE704u;
    // 0x1fe708: 0x240b0058  addiu       $t3, $zero, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1FE704u, 0x1FE70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE70Cu;
label_1fe70c:
    // 0x1fe70c: 0xc070834  jal         func_1C20D0
label_1fe710:
    if (ctx->pc == 0x1FE710u) {
        ctx->pc = 0x1FE710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE70Cu;
        // 0x1fe710: 0x24040035  addiu       $a0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE714u;
        goto label_1fe714;
    }
    ctx->pc = 0x1FE70Cu;
    SET_GPR_U32(ctx, 31, 0x1FE714u);
    ctx->pc = 0x1FE710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE70Cu;
    // 0x1fe710: 0x24040035  addiu       $a0, $zero, 0x35 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x1FE714u;
label_1fe714:
    // 0x1fe714: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fe714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fe718:
    // 0x1fe718: 0x240b0018  addiu       $t3, $zero, 0x18
    ctx->pc = 0x1fe718u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1fe71c:
    // 0x1fe71c: 0xffab0000  sd          $t3, 0x0($sp)
    ctx->pc = 0x1fe71cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 11));
label_1fe720:
    // 0x1fe720: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1fe720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1fe724:
    // 0x1fe724: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1fe724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1fe728:
    // 0x1fe728: 0x26241680  addiu       $a0, $s1, 0x1680
    ctx->pc = 0x1fe728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 5760));
label_1fe72c:
    // 0x1fe72c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fe72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fe730:
    // 0x1fe730: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1fe730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1fe734:
    // 0x1fe734: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1fe734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_1fe738:
    // 0x1fe738: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x1fe738u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1fe73c:
    // 0x1fe73c: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x1fe73cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1fe740:
    // 0x1fe740: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x1fe740u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1fe744:
    // 0x1fe744: 0x240903e0  addiu       $t1, $zero, 0x3E0
    ctx->pc = 0x1fe744u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 992));
label_1fe748:
    // 0x1fe748: 0xc05de30  jal         func_1778C0
label_1fe74c:
    if (ctx->pc == 0x1FE74Cu) {
        ctx->pc = 0x1FE74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE748u;
        // 0x1fe74c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE750u;
        goto label_1fe750;
    }
    ctx->pc = 0x1FE748u;
    SET_GPR_U32(ctx, 31, 0x1FE750u);
    ctx->pc = 0x1FE74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE748u;
    // 0x1fe74c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1FE748u, 0x1FE750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE750u;
label_1fe750:
    // 0x1fe750: 0x3c0b002d  lui         $t3, 0x2D
    ctx->pc = 0x1fe750u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)45 << 16));
label_1fe754:
    // 0x1fe754: 0x26241720  addiu       $a0, $s1, 0x1720
    ctx->pc = 0x1fe754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 5920));
label_1fe758:
    // 0x1fe758: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fe758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fe75c:
    // 0x1fe75c: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x1fe75cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1fe760:
    // 0x1fe760: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x1fe760u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1fe764:
    // 0x1fe764: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x1fe764u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1fe768:
    // 0x1fe768: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x1fe768u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1fe76c:
    // 0x1fe76c: 0x240a0018  addiu       $t2, $zero, 0x18
    ctx->pc = 0x1fe76cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1fe770:
    // 0x1fe770: 0xc0708ac  jal         func_1C22B0
label_1fe774:
    if (ctx->pc == 0x1FE774u) {
        ctx->pc = 0x1FE774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE770u;
        // 0x1fe774: 0x256bd548  addiu       $t3, $t3, -0x2AB8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294956360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE778u;
        goto label_1fe778;
    }
    ctx->pc = 0x1FE770u;
    SET_GPR_U32(ctx, 31, 0x1FE778u);
    ctx->pc = 0x1FE774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE770u;
    // 0x1fe774: 0x256bd548  addiu       $t3, $t3, -0x2AB8 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294956360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    { ctx->pc = 0x1c22b0; return; }
    ctx->pc = 0x1FE778u;
label_1fe778:
    // 0x1fe778: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1fe778u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fe77c:
    // 0x1fe77c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1fe77cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fe780:
    // 0x1fe780: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1fe780u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fe784:
    // 0x1fe784: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1fe784u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fe788:
    // 0x1fe788: 0xc070834  jal         func_1C20D0
label_1fe78c:
    if (ctx->pc == 0x1FE78Cu) {
        ctx->pc = 0x1FE78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE788u;
        // 0x1fe78c: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE790u;
        goto label_1fe790;
    }
    ctx->pc = 0x1FE788u;
    SET_GPR_U32(ctx, 31, 0x1FE790u);
    ctx->pc = 0x1FE78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE788u;
    // 0x1fe78c: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x1FE790u;
label_1fe790:
    // 0x1fe790: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fe790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fe794:
    // 0x1fe794: 0x240b0010  addiu       $t3, $zero, 0x10
    ctx->pc = 0x1fe794u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1fe798:
    // 0x1fe798: 0xffab0000  sd          $t3, 0x0($sp)
    ctx->pc = 0x1fe798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 11));
label_1fe79c:
    // 0x1fe79c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1fe79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1fe7a0:
    // 0x1fe7a0: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1fe7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_1fe7a4:
    // 0x1fe7a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fe7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fe7a8:
    // 0x1fe7a8: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1fe7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1fe7ac:
    // 0x1fe7ac: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x1fe7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_1fe7b0:
    // 0x1fe7b0: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x1fe7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
label_1fe7b4:
    // 0x1fe7b4: 0x244417c0  addiu       $a0, $v0, 0x17C0
    ctx->pc = 0x1fe7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6080));
label_1fe7b8:
    // 0x1fe7b8: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x1fe7b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1fe7bc:
    // 0x1fe7bc: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x1fe7bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1fe7c0:
    // 0x1fe7c0: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x1fe7c0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1fe7c4:
    // 0x1fe7c4: 0x24090310  addiu       $t1, $zero, 0x310
    ctx->pc = 0x1fe7c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 784));
label_1fe7c8:
    // 0x1fe7c8: 0xc05de30  jal         func_1778C0
label_1fe7cc:
    if (ctx->pc == 0x1FE7CCu) {
        ctx->pc = 0x1FE7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE7C8u;
        // 0x1fe7cc: 0x240a0050  addiu       $t2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE7D0u;
        goto label_1fe7d0;
    }
    ctx->pc = 0x1FE7C8u;
    SET_GPR_U32(ctx, 31, 0x1FE7D0u);
    ctx->pc = 0x1FE7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE7C8u;
    // 0x1fe7cc: 0x240a0050  addiu       $t2, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1FE7C8u, 0x1FE7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE7D0u;
label_1fe7d0:
    // 0x1fe7d0: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x1fe7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1fe7d4:
    // 0x1fe7d4: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1fe7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1fe7d8:
    // 0x1fe7d8: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x1fe7d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_1fe7dc:
    // 0x1fe7dc: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1fe7dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fe7e0:
    // 0x1fe7e0: 0x24080280  addiu       $t0, $zero, 0x280
    ctx->pc = 0x1fe7e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1fe7e4:
    // 0x1fe7e4: 0x240901c0  addiu       $t1, $zero, 0x1C0
    ctx->pc = 0x1fe7e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1fe7e8:
    // 0x1fe7e8: 0xc054e5c  jal         func_153970
label_1fe7ec:
    if (ctx->pc == 0x1FE7ECu) {
        ctx->pc = 0x1FE7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE7E8u;
        // 0x1fe7ec: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE7F0u;
        goto label_1fe7f0;
    }
    ctx->pc = 0x1FE7E8u;
    SET_GPR_U32(ctx, 31, 0x1FE7F0u);
    ctx->pc = 0x1FE7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE7E8u;
    // 0x1fe7ec: 0x340afe00  ori         $t2, $zero, 0xFE00 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153970u, 0x1FE7E8u, 0x1FE7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE7F0u;
label_1fe7f0:
    // 0x1fe7f0: 0x2331021  addu        $v0, $s1, $s3
    ctx->pc = 0x1fe7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
label_1fe7f4:
    // 0x1fe7f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fe7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fe7f8:
    // 0x1fe7f8: 0x3c08002d  lui         $t0, 0x2D
    ctx->pc = 0x1fe7f8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)45 << 16));
label_1fe7fc:
    // 0x1fe7fc: 0x24441ae0  addiu       $a0, $v0, 0x1AE0
    ctx->pc = 0x1fe7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6880));
label_1fe800:
    // 0x1fe800: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x1fe800u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1fe804:
    // 0x1fe804: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1fe804u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fe808:
    // 0x1fe808: 0xc054e74  jal         func_1539D0
label_1fe80c:
    if (ctx->pc == 0x1FE80Cu) {
        ctx->pc = 0x1FE80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE808u;
        // 0x1fe80c: 0x2508d548  addiu       $t0, $t0, -0x2AB8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE810u;
        goto label_1fe810;
    }
    ctx->pc = 0x1FE808u;
    SET_GPR_U32(ctx, 31, 0x1FE810u);
    ctx->pc = 0x1FE80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE808u;
    // 0x1fe80c: 0x2508d548  addiu       $t0, $t0, -0x2AB8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1539D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1539D0u, 0x1FE808u, 0x1FE810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE810u;
label_1fe810:
    // 0x1fe810: 0x2341021  addu        $v0, $s1, $s4
    ctx->pc = 0x1fe810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
label_1fe814:
    // 0x1fe814: 0x3c0b002d  lui         $t3, 0x2D
    ctx->pc = 0x1fe814u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)45 << 16));
label_1fe818:
    // 0x1fe818: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1fe818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1fe81c:
    // 0x1fe81c: 0x24446400  addiu       $a0, $v0, 0x6400
    ctx->pc = 0x1fe81cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25600));
label_1fe820:
    // 0x1fe820: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x1fe820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1fe824:
    // 0x1fe824: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x1fe824u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1fe828:
    // 0x1fe828: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x1fe828u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1fe82c:
    // 0x1fe82c: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x1fe82cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1fe830:
    // 0x1fe830: 0x240a0018  addiu       $t2, $zero, 0x18
    ctx->pc = 0x1fe830u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1fe834:
    // 0x1fe834: 0xc0708ac  jal         func_1C22B0
label_1fe838:
    if (ctx->pc == 0x1FE838u) {
        ctx->pc = 0x1FE838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE834u;
        // 0x1fe838: 0x256bd548  addiu       $t3, $t3, -0x2AB8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294956360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE83Cu;
        goto label_1fe83c;
    }
    ctx->pc = 0x1FE834u;
    SET_GPR_U32(ctx, 31, 0x1FE83Cu);
    ctx->pc = 0x1FE838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE834u;
    // 0x1fe838: 0x256bd548  addiu       $t3, $t3, -0x2AB8 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294956360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B0u;
    { ctx->pc = 0x1c22b0; return; }
    ctx->pc = 0x1FE83Cu;
label_1fe83c:
    // 0x1fe83c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1fe83cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1fe840:
    // 0x1fe840: 0x265200a0  addiu       $s2, $s2, 0xA0
    ctx->pc = 0x1fe840u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
label_1fe844:
    // 0x1fe844: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x1fe844u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
label_1fe848:
    // 0x1fe848: 0x26730ea0  addiu       $s3, $s3, 0xEA0
    ctx->pc = 0x1fe848u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3744));
label_1fe84c:
    // 0x1fe84c: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
label_1fe850:
    if (ctx->pc == 0x1FE850u) {
        ctx->pc = 0x1FE850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE84Cu;
        // 0x1fe850: 0x269401e0  addiu       $s4, $s4, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE854u;
        goto label_1fe854;
    }
    ctx->pc = 0x1FE84Cu;
    {
        const bool branch_taken_0x1fe84c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE84Cu;
        // 0x1fe850: 0x269401e0  addiu       $s4, $s4, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe84c) {
            ctx->pc = 0x1FE788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fe788;
        }
    }
    ctx->pc = 0x1FE854u;
label_1fe854:
    // 0x1fe854: 0xc070834  jal         func_1C20D0
label_1fe858:
    if (ctx->pc == 0x1FE858u) {
        ctx->pc = 0x1FE858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE854u;
        // 0x1fe858: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE85Cu;
        goto label_1fe85c;
    }
    ctx->pc = 0x1FE854u;
    SET_GPR_U32(ctx, 31, 0x1FE85Cu);
    ctx->pc = 0x1FE858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE854u;
    // 0x1fe858: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20D0u;
    { ctx->pc = 0x1c20d0; return; }
    ctx->pc = 0x1FE85Cu;
label_1fe85c:
    // 0x1fe85c: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x1fe85cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1fe860:
    // 0x1fe860: 0x26246d60  addiu       $a0, $s1, 0x6D60
    ctx->pc = 0x1fe860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 28000));
label_1fe864:
    // 0x1fe864: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x1fe864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
label_1fe868:
    // 0x1fe868: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1fe868u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fe86c:
    // 0x1fe86c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1fe86cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1fe870:
    // 0x1fe870: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x1fe870u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1fe874:
    // 0x1fe874: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x1fe874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_1fe878:
    // 0x1fe878: 0x240701c0  addiu       $a3, $zero, 0x1C0
    ctx->pc = 0x1fe878u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1fe87c:
    // 0x1fe87c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fe87cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fe880:
    // 0x1fe880: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1fe880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_1fe884:
    // 0x1fe884: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x1fe884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
label_1fe888:
    // 0x1fe888: 0x3408fe00  ori         $t0, $zero, 0xFE00
    ctx->pc = 0x1fe888u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
label_1fe88c:
    // 0x1fe88c: 0x24090298  addiu       $t1, $zero, 0x298
    ctx->pc = 0x1fe88cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 664));
label_1fe890:
    // 0x1fe890: 0x240a00c8  addiu       $t2, $zero, 0xC8
    ctx->pc = 0x1fe890u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_1fe894:
    // 0x1fe894: 0xc05de30  jal         func_1778C0
label_1fe898:
    if (ctx->pc == 0x1FE898u) {
        ctx->pc = 0x1FE898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE894u;
        // 0x1fe898: 0x240b0048  addiu       $t3, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE89Cu;
        goto label_1fe89c;
    }
    ctx->pc = 0x1FE894u;
    SET_GPR_U32(ctx, 31, 0x1FE89Cu);
    ctx->pc = 0x1FE898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE894u;
    // 0x1fe898: 0x240b0048  addiu       $t3, $zero, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1778C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1778C0u, 0x1FE894u, 0x1FE89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE89Cu;
label_1fe89c:
    // 0x1fe89c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1fe89cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_1fe8a0:
    // 0x1fe8a0: 0x2ac30002  slti        $v1, $s6, 0x2
    ctx->pc = 0x1fe8a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)2) ? 1 : 0);
label_1fe8a4:
    // 0x1fe8a4: 0x1460ff22  bnez        $v1, . + 4 + (-0xDE << 2)
label_1fe8a8:
    if (ctx->pc == 0x1FE8A8u) {
        ctx->pc = 0x1FE8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE8A4u;
        // 0x1fe8a8: 0x26b56e00  addiu       $s5, $s5, 0x6E00 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 28160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE8ACu;
        goto label_1fe8ac;
    }
    ctx->pc = 0x1FE8A4u;
    {
        const bool branch_taken_0x1fe8a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE8A4u;
        // 0x1fe8a8: 0x26b56e00  addiu       $s5, $s5, 0x6E00 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 28160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe8a4) {
            ctx->pc = 0x1FE530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fe530;
        }
    }
    ctx->pc = 0x1FE8ACu;
label_1fe8ac:
    // 0x1fe8ac: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1fe8acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1fe8b0:
    // 0x1fe8b0: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x1fe8b0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1fe8b4:
    // 0x1fe8b4: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1fe8b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1fe8b8:
    // 0x1fe8b8: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1fe8b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1fe8bc:
    // 0x1fe8bc: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1fe8bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1fe8c0:
    // 0x1fe8c0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1fe8c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1fe8c4:
    // 0x1fe8c4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1fe8c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1fe8c8:
    // 0x1fe8c8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1fe8c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fe8cc:
    // 0x1fe8cc: 0x3e00008  jr          $ra
label_1fe8d0:
    if (ctx->pc == 0x1FE8D0u) {
        ctx->pc = 0x1FE8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE8CCu;
        // 0x1fe8d0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE8D4u;
        goto label_1fe8d4;
    }
    ctx->pc = 0x1FE8CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE8CCu;
        // 0x1fe8d0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE8CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE8D4u;
label_1fe8d4:
    // 0x1fe8d4: 0x0  nop
    ctx->pc = 0x1fe8d4u;
    // NOP
label_1fe8d8:
    // 0x1fe8d8: 0x0  nop
    ctx->pc = 0x1fe8d8u;
    // NOP
label_1fe8dc:
    // 0x1fe8dc: 0x0  nop
    ctx->pc = 0x1fe8dcu;
    // NOP
label_1fe8e0:
    // 0x1fe8e0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1fe8e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
label_1fe8e4:
    // 0x1fe8e4: 0x24030280  addiu       $v1, $zero, 0x280
    ctx->pc = 0x1fe8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_1fe8e8:
    // 0x1fe8e8: 0xac204b00  sw          $zero, 0x4B00($at)
    ctx->pc = 0x1fe8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19200), GPR_U32(ctx, 0));
label_1fe8ec:
    // 0x1fe8ec: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1fe8ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
label_1fe8f0:
    // 0x1fe8f0: 0xaf8390a8  sw          $v1, -0x6F58($gp)
    ctx->pc = 0x1fe8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938792), GPR_U32(ctx, 3));
label_1fe8f4:
    // 0x1fe8f4: 0xac204ae0  sw          $zero, 0x4AE0($at)
    ctx->pc = 0x1fe8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19168), GPR_U32(ctx, 0));
label_1fe8f8:
    // 0x1fe8f8: 0x240301c0  addiu       $v1, $zero, 0x1C0
    ctx->pc = 0x1fe8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1fe8fc:
    // 0x1fe8fc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1fe8fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
label_1fe900:
    // 0x1fe900: 0xaf8390a4  sw          $v1, -0x6F5C($gp)
    ctx->pc = 0x1fe900u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938788), GPR_U32(ctx, 3));
label_1fe904:
    // 0x1fe904: 0xac204b04  sw          $zero, 0x4B04($at)
    ctx->pc = 0x1fe904u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19204), GPR_U32(ctx, 0));
label_1fe908:
    // 0x1fe908: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1fe908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1fe90c:
    // 0x1fe90c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1fe90cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
label_1fe910:
    // 0x1fe910: 0xaf8090b4  sw          $zero, -0x6F4C($gp)
    ctx->pc = 0x1fe910u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938804), GPR_U32(ctx, 0));
label_1fe914:
    // 0x1fe914: 0xac204ae4  sw          $zero, 0x4AE4($at)
    ctx->pc = 0x1fe914u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19172), GPR_U32(ctx, 0));
label_1fe918:
    // 0x1fe918: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1fe918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
label_1fe91c:
    // 0x1fe91c: 0xaf8090b0  sw          $zero, -0x6F50($gp)
    ctx->pc = 0x1fe91cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938800), GPR_U32(ctx, 0));
label_1fe920:
    // 0x1fe920: 0xac204b08  sw          $zero, 0x4B08($at)
    ctx->pc = 0x1fe920u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19208), GPR_U32(ctx, 0));
label_1fe924:
    // 0x1fe924: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1fe924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
label_1fe928:
    // 0x1fe928: 0xaf839090  sw          $v1, -0x6F70($gp)
    ctx->pc = 0x1fe928u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938768), GPR_U32(ctx, 3));
label_1fe92c:
    // 0x1fe92c: 0xac204ae8  sw          $zero, 0x4AE8($at)
    ctx->pc = 0x1fe92cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19176), GPR_U32(ctx, 0));
label_1fe930:
    // 0x1fe930: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1fe930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
label_1fe934:
    // 0x1fe934: 0xaf8090ac  sw          $zero, -0x6F54($gp)
    ctx->pc = 0x1fe934u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938796), GPR_U32(ctx, 0));
label_1fe938:
    // 0x1fe938: 0xac204b0c  sw          $zero, 0x4B0C($at)
    ctx->pc = 0x1fe938u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19212), GPR_U32(ctx, 0));
label_1fe93c:
    // 0x1fe93c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1fe93cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
label_1fe940:
    // 0x1fe940: 0xaf8090a0  sw          $zero, -0x6F60($gp)
    ctx->pc = 0x1fe940u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938784), GPR_U32(ctx, 0));
label_1fe944:
    // 0x1fe944: 0xac204aec  sw          $zero, 0x4AEC($at)
    ctx->pc = 0x1fe944u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19180), GPR_U32(ctx, 0));
label_1fe948:
    // 0x1fe948: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1fe948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
label_1fe94c:
    // 0x1fe94c: 0xaf80909c  sw          $zero, -0x6F64($gp)
    ctx->pc = 0x1fe94cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938780), GPR_U32(ctx, 0));
label_1fe950:
    // 0x1fe950: 0xac204b10  sw          $zero, 0x4B10($at)
    ctx->pc = 0x1fe950u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19216), GPR_U32(ctx, 0));
label_1fe954:
    // 0x1fe954: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1fe954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
label_1fe958:
    // 0x1fe958: 0xaf809098  sw          $zero, -0x6F68($gp)
    ctx->pc = 0x1fe958u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938776), GPR_U32(ctx, 0));
label_1fe95c:
    // 0x1fe95c: 0xaf809094  sw          $zero, -0x6F6C($gp)
    ctx->pc = 0x1fe95cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938772), GPR_U32(ctx, 0));
label_1fe960:
    // 0x1fe960: 0xac204af0  sw          $zero, 0x4AF0($at)
    ctx->pc = 0x1fe960u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19184), GPR_U32(ctx, 0));
label_1fe964:
    // 0x1fe964: 0xaf80908c  sw          $zero, -0x6F74($gp)
    ctx->pc = 0x1fe964u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938764), GPR_U32(ctx, 0));
label_1fe968:
    // 0x1fe968: 0x3e00008  jr          $ra
label_1fe96c:
    if (ctx->pc == 0x1FE96Cu) {
        ctx->pc = 0x1FE96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE968u;
        // 0x1fe96c: 0xaf809088  sw          $zero, -0x6F78($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938760), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE970u;
        goto label_1fe970;
    }
    ctx->pc = 0x1FE968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE968u;
        // 0x1fe96c: 0xaf809088  sw          $zero, -0x6F78($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938760), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE970u;
label_1fe970:
    // 0x1fe970: 0xaf8590a8  sw          $a1, -0x6F58($gp)
    ctx->pc = 0x1fe970u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938792), GPR_U32(ctx, 5));
label_1fe974:
    // 0x1fe974: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1fe974u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1fe978:
    // 0x1fe978: 0xaf8690a4  sw          $a2, -0x6F5C($gp)
    ctx->pc = 0x1fe978u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938788), GPR_U32(ctx, 6));
label_1fe97c:
    // 0x1fe97c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fe97cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1fe980:
    // 0x1fe980: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1fe980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fe984:
    // 0x1fe984: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1fe984u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
label_1fe988:
    // 0x1fe988: 0xaf84909c  sw          $a0, -0x6F64($gp)
    ctx->pc = 0x1fe988u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938780), GPR_U32(ctx, 4));
label_1fe98c:
    // 0x1fe98c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1fe98cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1fe990:
    // 0x1fe990: 0x24a513d0  addiu       $a1, $a1, 0x13D0
    ctx->pc = 0x1fe990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5072));
label_1fe994:
    // 0x1fe994: 0xaf8690b4  sw          $a2, -0x6F4C($gp)
    ctx->pc = 0x1fe994u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938804), GPR_U32(ctx, 6));
label_1fe998:
    // 0x1fe998: 0xaf8690b0  sw          $a2, -0x6F50($gp)
    ctx->pc = 0x1fe998u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938800), GPR_U32(ctx, 6));
label_1fe99c:
    // 0x1fe99c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1fe99cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1fe9a0:
    // 0x1fe9a0: 0xdca50000  ld          $a1, 0x0($a1)
    ctx->pc = 0x1fe9a0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_1fe9a4:
    // 0x1fe9a4: 0x24040400  addiu       $a0, $zero, 0x400
    ctx->pc = 0x1fe9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1fe9a8:
    // 0x1fe9a8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1fe9a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1fe9ac:
    // 0x1fe9ac: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x1fe9acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_1fe9b0:
    // 0x1fe9b0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1fe9b4:
    if (ctx->pc == 0x1FE9B4u) {
        ctx->pc = 0x1FE9B8u;
        goto label_1fe9b8;
    }
    ctx->pc = 0x1FE9B0u;
    {
        const bool branch_taken_0x1fe9b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe9b0) {
            ctx->pc = 0x1FE9C0u;
            goto label_1fe9c0;
        }
    }
    ctx->pc = 0x1FE9B8u;
label_1fe9b8:
    // 0x1fe9b8: 0x10000020  b           . + 4 + (0x20 << 2)
label_1fe9bc:
    if (ctx->pc == 0x1FE9BCu) {
        ctx->pc = 0x1FE9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE9B8u;
        // 0x1fe9bc: 0xaf809090  sw          $zero, -0x6F70($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938768), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE9C0u;
        goto label_1fe9c0;
    }
    ctx->pc = 0x1FE9B8u;
    {
        const bool branch_taken_0x1fe9b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE9B8u;
        // 0x1fe9bc: 0xaf809090  sw          $zero, -0x6F70($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938768), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe9b8) {
            ctx->pc = 0x1FEA3Cu;
            goto label_1fea3c;
        }
    }
    ctx->pc = 0x1FE9C0u;
label_1fe9c0:
    // 0x1fe9c0: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x1fe9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_1fe9c4:
    // 0x1fe9c4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1fe9c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1fe9c8:
    // 0x1fe9c8: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x1fe9c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_1fe9cc:
    // 0x1fe9cc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1fe9d0:
    if (ctx->pc == 0x1FE9D0u) {
        ctx->pc = 0x1FE9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE9CCu;
        // 0x1fe9d0: 0x24041000  addiu       $a0, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE9D4u;
        goto label_1fe9d4;
    }
    ctx->pc = 0x1FE9CCu;
    {
        const bool branch_taken_0x1fe9cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE9CCu;
        // 0x1fe9d0: 0x24041000  addiu       $a0, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe9cc) {
            ctx->pc = 0x1FE9DCu;
            goto label_1fe9dc;
        }
    }
    ctx->pc = 0x1FE9D4u;
label_1fe9d4:
    // 0x1fe9d4: 0x10000019  b           . + 4 + (0x19 << 2)
label_1fe9d8:
    if (ctx->pc == 0x1FE9D8u) {
        ctx->pc = 0x1FE9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE9D4u;
        // 0x1fe9d8: 0xaf869090  sw          $a2, -0x6F70($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938768), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE9DCu;
        goto label_1fe9dc;
    }
    ctx->pc = 0x1FE9D4u;
    {
        const bool branch_taken_0x1fe9d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE9D4u;
        // 0x1fe9d8: 0xaf869090  sw          $a2, -0x6F70($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938768), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe9d4) {
            ctx->pc = 0x1FEA3Cu;
            goto label_1fea3c;
        }
    }
    ctx->pc = 0x1FE9DCu;
label_1fe9dc:
    // 0x1fe9dc: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1fe9dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1fe9e0:
    // 0x1fe9e0: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x1fe9e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_1fe9e4:
    // 0x1fe9e4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1fe9e8:
    if (ctx->pc == 0x1FE9E8u) {
        ctx->pc = 0x1FE9ECu;
        goto label_1fe9ec;
    }
    ctx->pc = 0x1FE9E4u;
    {
        const bool branch_taken_0x1fe9e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe9e4) {
            ctx->pc = 0x1FE9F8u;
            goto label_1fe9f8;
        }
    }
    ctx->pc = 0x1FE9ECu;
label_1fe9ec:
    // 0x1fe9ec: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1fe9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1fe9f0:
    // 0x1fe9f0: 0x10000012  b           . + 4 + (0x12 << 2)
label_1fe9f4:
    if (ctx->pc == 0x1FE9F4u) {
        ctx->pc = 0x1FE9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE9F0u;
        // 0x1fe9f4: 0xaf849090  sw          $a0, -0x6F70($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938768), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE9F8u;
        goto label_1fe9f8;
    }
    ctx->pc = 0x1FE9F0u;
    {
        const bool branch_taken_0x1fe9f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE9F0u;
        // 0x1fe9f4: 0xaf849090  sw          $a0, -0x6F70($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938768), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe9f0) {
            ctx->pc = 0x1FEA3Cu;
            goto label_1fea3c;
        }
    }
    ctx->pc = 0x1FE9F8u;
label_1fe9f8:
    // 0x1fe9f8: 0x24042000  addiu       $a0, $zero, 0x2000
    ctx->pc = 0x1fe9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_1fe9fc:
    // 0x1fe9fc: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1fe9fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1fea00:
    // 0x1fea00: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x1fea00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_1fea04:
    // 0x1fea04: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1fea08:
    if (ctx->pc == 0x1FEA08u) {
        ctx->pc = 0x1FEA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEA04u;
        // 0x1fea08: 0x24044000  addiu       $a0, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEA0Cu;
        goto label_1fea0c;
    }
    ctx->pc = 0x1FEA04u;
    {
        const bool branch_taken_0x1fea04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEA04u;
        // 0x1fea08: 0x24044000  addiu       $a0, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fea04) {
            ctx->pc = 0x1FEA18u;
            goto label_1fea18;
        }
    }
    ctx->pc = 0x1FEA0Cu;
label_1fea0c:
    // 0x1fea0c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1fea0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1fea10:
    // 0x1fea10: 0x1000000a  b           . + 4 + (0xA << 2)
label_1fea14:
    if (ctx->pc == 0x1FEA14u) {
        ctx->pc = 0x1FEA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEA10u;
        // 0x1fea14: 0xaf849090  sw          $a0, -0x6F70($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938768), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEA18u;
        goto label_1fea18;
    }
    ctx->pc = 0x1FEA10u;
    {
        const bool branch_taken_0x1fea10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEA10u;
        // 0x1fea14: 0xaf849090  sw          $a0, -0x6F70($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938768), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fea10) {
            ctx->pc = 0x1FEA3Cu;
            goto label_1fea3c;
        }
    }
    ctx->pc = 0x1FEA18u;
label_1fea18:
    // 0x1fea18: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1fea18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1fea1c:
    // 0x1fea1c: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x1fea1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_1fea20:
    // 0x1fea20: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1fea24:
    if (ctx->pc == 0x1FEA24u) {
        ctx->pc = 0x1FEA28u;
        goto label_1fea28;
    }
    ctx->pc = 0x1FEA20u;
    {
        const bool branch_taken_0x1fea20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fea20) {
            ctx->pc = 0x1FEA34u;
            goto label_1fea34;
        }
    }
    ctx->pc = 0x1FEA28u;
label_1fea28:
    // 0x1fea28: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1fea28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1fea2c:
    // 0x1fea2c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1fea30:
    if (ctx->pc == 0x1FEA30u) {
        ctx->pc = 0x1FEA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEA2Cu;
        // 0x1fea30: 0xaf849090  sw          $a0, -0x6F70($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938768), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEA34u;
        goto label_1fea34;
    }
    ctx->pc = 0x1FEA2Cu;
    {
        const bool branch_taken_0x1fea2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEA2Cu;
        // 0x1fea30: 0xaf849090  sw          $a0, -0x6F70($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938768), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fea2c) {
            ctx->pc = 0x1FEA3Cu;
            goto label_1fea3c;
        }
    }
    ctx->pc = 0x1FEA34u;
label_1fea34:
    // 0x1fea34: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1fea34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1fea38:
    // 0x1fea38: 0xaf849090  sw          $a0, -0x6F70($gp)
    ctx->pc = 0x1fea38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938768), GPR_U32(ctx, 4));
label_1fea3c:
    // 0x1fea3c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1fea3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
label_1fea40:
    // 0x1fea40: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x1fea40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
label_1fea44:
    // 0x1fea44: 0x24a513cb  addiu       $a1, $a1, 0x13CB
    ctx->pc = 0x1fea44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5067));
label_1fea48:
    // 0x1fea48: 0x24845370  addiu       $a0, $a0, 0x5370
    ctx->pc = 0x1fea48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21360));
label_1fea4c:
    // 0x1fea4c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1fea4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1fea50:
    // 0x1fea50: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x1fea50u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_1fea54:
    // 0x1fea54: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x1fea54u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_1fea58:
    // 0x1fea58: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x1fea58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1fea5c:
    // 0x1fea5c: 0x90a4003b  lbu         $a0, 0x3B($a1)
    ctx->pc = 0x1fea5cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 59)));
label_1fea60:
    // 0x1fea60: 0x28810063  slti        $at, $a0, 0x63
    ctx->pc = 0x1fea60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)99) ? 1 : 0);
label_1fea64:
    // 0x1fea64: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1fea68:
    if (ctx->pc == 0x1FEA68u) {
        ctx->pc = 0x1FEA6Cu;
        goto label_1fea6c;
    }
    ctx->pc = 0x1FEA64u;
    {
        const bool branch_taken_0x1fea64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fea64) {
            ctx->pc = 0x1FEA74u;
            goto label_1fea74;
        }
    }
    ctx->pc = 0x1FEA6Cu;
label_1fea6c:
    // 0x1fea6c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1fea70:
    if (ctx->pc == 0x1FEA70u) {
        ctx->pc = 0x1FEA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEA6Cu;
        // 0x1fea70: 0xaf849098  sw          $a0, -0x6F68($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938776), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEA74u;
        goto label_1fea74;
    }
    ctx->pc = 0x1FEA6Cu;
    {
        const bool branch_taken_0x1fea6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEA6Cu;
        // 0x1fea70: 0xaf849098  sw          $a0, -0x6F68($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938776), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fea6c) {
            ctx->pc = 0x1FEA7Cu;
            goto label_1fea7c;
        }
    }
    ctx->pc = 0x1FEA74u;
label_1fea74:
    // 0x1fea74: 0x24040063  addiu       $a0, $zero, 0x63
    ctx->pc = 0x1fea74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
label_1fea78:
    // 0x1fea78: 0xaf849098  sw          $a0, -0x6F68($gp)
    ctx->pc = 0x1fea78u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938776), GPR_U32(ctx, 4));
label_1fea7c:
    // 0x1fea7c: 0xdca50030  ld          $a1, 0x30($a1)
    ctx->pc = 0x1fea7cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 5), 48)));
label_1fea80:
    // 0x1fea80: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x1fea80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_1fea84:
    // 0x1fea84: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1fea84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1fea88:
    // 0x1fea88: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x1fea88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_1fea8c:
    // 0x1fea8c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1fea90:
    if (ctx->pc == 0x1FEA90u) {
        ctx->pc = 0x1FEA94u;
        goto label_1fea94;
    }
    ctx->pc = 0x1FEA8Cu;
    {
        const bool branch_taken_0x1fea8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fea8c) {
            ctx->pc = 0x1FEAA0u;
            goto label_1feaa0;
        }
    }
    ctx->pc = 0x1FEA94u;
label_1fea94:
    // 0x1fea94: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1fea94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1fea98:
    // 0x1fea98: 0x1000000a  b           . + 4 + (0xA << 2)
label_1fea9c:
    if (ctx->pc == 0x1FEA9Cu) {
        ctx->pc = 0x1FEA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEA98u;
        // 0x1fea9c: 0xaf849094  sw          $a0, -0x6F6C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938772), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEAA0u;
        goto label_1feaa0;
    }
    ctx->pc = 0x1FEA98u;
    {
        const bool branch_taken_0x1fea98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEA98u;
        // 0x1fea9c: 0xaf849094  sw          $a0, -0x6F6C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938772), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fea98) {
            ctx->pc = 0x1FEAC4u;
            { ctx->pc = 0x1feac4; return; }
        }
    }
    ctx->pc = 0x1FEAA0u;
label_1feaa0:
    // 0x1feaa0: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x1feaa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1feaa4:
    // 0x1feaa4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1feaa4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1feaa8:
    // 0x1feaa8: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x1feaa8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_1feaac:
    // 0x1feaac: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1feab0:
    if (ctx->pc == 0x1FEAB0u) {
        ctx->pc = 0x1FEAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEAACu;
        // 0x1feab0: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEAB4u;
        goto label_1feab4;
    }
    ctx->pc = 0x1FEAACu;
    {
        const bool branch_taken_0x1feaac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEAACu;
        // 0x1feab0: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feaac) {
            ctx->pc = 0x1FEAC0u;
            { ctx->pc = 0x1feac0; return; }
        }
    }
    ctx->pc = 0x1FEAB4u;
label_1feab4:
    // 0x1feab4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1feab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1feab8:
    // 0x1feab8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1feabc:
    if (ctx->pc == 0x1FEABCu) {
        ctx->pc = 0x1FEABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEAB8u;
        // 0x1feabc: 0xaf849094  sw          $a0, -0x6F6C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938772), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FEAC0u;
        { ctx->pc = 0x1feac0; return; }
    }
    ctx->pc = 0x1FEAB8u;
    {
        const bool branch_taken_0x1feab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEAB8u;
        // 0x1feabc: 0xaf849094  sw          $a0, -0x6F6C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938772), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feab8) {
            ctx->pc = 0x1FEAC4u;
            { ctx->pc = 0x1feac4; return; }
        }
    }
    ctx->pc = 0x1FEAC0u;
    ctx->pc = 0x1feac0u;
    return;
}

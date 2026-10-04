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

// Function: FUN_001d49b0
// Address: 0x1d49b0 - 0x254d4c
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_001d49b0_part221(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x240070u: goto label_240070;
        case 0x240074u: goto label_240074;
        case 0x240078u: goto label_240078;
        case 0x24007cu: goto label_24007c;
        case 0x240080u: goto label_240080;
        case 0x240084u: goto label_240084;
        case 0x240088u: goto label_240088;
        case 0x24008cu: goto label_24008c;
        case 0x240090u: goto label_240090;
        case 0x240094u: goto label_240094;
        case 0x240098u: goto label_240098;
        case 0x24009cu: goto label_24009c;
        case 0x2400a0u: goto label_2400a0;
        case 0x2400a4u: goto label_2400a4;
        case 0x2400a8u: goto label_2400a8;
        case 0x2400acu: goto label_2400ac;
        case 0x2400b0u: goto label_2400b0;
        case 0x2400b4u: goto label_2400b4;
        case 0x2400b8u: goto label_2400b8;
        case 0x2400bcu: goto label_2400bc;
        case 0x2400c0u: goto label_2400c0;
        case 0x2400c4u: goto label_2400c4;
        case 0x2400c8u: goto label_2400c8;
        case 0x2400ccu: goto label_2400cc;
        case 0x2400d0u: goto label_2400d0;
        case 0x2400d4u: goto label_2400d4;
        case 0x2400d8u: goto label_2400d8;
        case 0x2400dcu: goto label_2400dc;
        case 0x2400e0u: goto label_2400e0;
        case 0x2400e4u: goto label_2400e4;
        case 0x2400e8u: goto label_2400e8;
        case 0x2400ecu: goto label_2400ec;
        case 0x2400f0u: goto label_2400f0;
        case 0x2400f4u: goto label_2400f4;
        case 0x2400f8u: goto label_2400f8;
        case 0x2400fcu: goto label_2400fc;
        case 0x240100u: goto label_240100;
        case 0x240104u: goto label_240104;
        case 0x240108u: goto label_240108;
        case 0x24010cu: goto label_24010c;
        case 0x240110u: goto label_240110;
        case 0x240114u: goto label_240114;
        case 0x240118u: goto label_240118;
        case 0x24011cu: goto label_24011c;
        case 0x240120u: goto label_240120;
        case 0x240124u: goto label_240124;
        case 0x240128u: goto label_240128;
        case 0x24012cu: goto label_24012c;
        case 0x240130u: goto label_240130;
        case 0x240134u: goto label_240134;
        case 0x240138u: goto label_240138;
        case 0x24013cu: goto label_24013c;
        case 0x240140u: goto label_240140;
        case 0x240144u: goto label_240144;
        case 0x240148u: goto label_240148;
        case 0x24014cu: goto label_24014c;
        case 0x240150u: goto label_240150;
        case 0x240154u: goto label_240154;
        case 0x240158u: goto label_240158;
        case 0x24015cu: goto label_24015c;
        case 0x240160u: goto label_240160;
        case 0x240164u: goto label_240164;
        case 0x240168u: goto label_240168;
        case 0x24016cu: goto label_24016c;
        case 0x240170u: goto label_240170;
        case 0x240174u: goto label_240174;
        case 0x240178u: goto label_240178;
        case 0x24017cu: goto label_24017c;
        case 0x240180u: goto label_240180;
        case 0x240184u: goto label_240184;
        case 0x240188u: goto label_240188;
        case 0x24018cu: goto label_24018c;
        case 0x240190u: goto label_240190;
        case 0x240194u: goto label_240194;
        case 0x240198u: goto label_240198;
        case 0x24019cu: goto label_24019c;
        case 0x2401a0u: goto label_2401a0;
        case 0x2401a4u: goto label_2401a4;
        case 0x2401a8u: goto label_2401a8;
        case 0x2401acu: goto label_2401ac;
        case 0x2401b0u: goto label_2401b0;
        case 0x2401b4u: goto label_2401b4;
        case 0x2401b8u: goto label_2401b8;
        case 0x2401bcu: goto label_2401bc;
        case 0x2401c0u: goto label_2401c0;
        case 0x2401c4u: goto label_2401c4;
        case 0x2401c8u: goto label_2401c8;
        case 0x2401ccu: goto label_2401cc;
        case 0x2401d0u: goto label_2401d0;
        case 0x2401d4u: goto label_2401d4;
        case 0x2401d8u: goto label_2401d8;
        case 0x2401dcu: goto label_2401dc;
        case 0x2401e0u: goto label_2401e0;
        case 0x2401e4u: goto label_2401e4;
        case 0x2401e8u: goto label_2401e8;
        case 0x2401ecu: goto label_2401ec;
        case 0x2401f0u: goto label_2401f0;
        case 0x2401f4u: goto label_2401f4;
        case 0x2401f8u: goto label_2401f8;
        case 0x2401fcu: goto label_2401fc;
        case 0x240200u: goto label_240200;
        case 0x240204u: goto label_240204;
        case 0x240208u: goto label_240208;
        case 0x24020cu: goto label_24020c;
        case 0x240210u: goto label_240210;
        case 0x240214u: goto label_240214;
        case 0x240218u: goto label_240218;
        case 0x24021cu: goto label_24021c;
        case 0x240220u: goto label_240220;
        case 0x240224u: goto label_240224;
        case 0x240228u: goto label_240228;
        case 0x24022cu: goto label_24022c;
        case 0x240230u: goto label_240230;
        case 0x240234u: goto label_240234;
        case 0x240238u: goto label_240238;
        case 0x24023cu: goto label_24023c;
        case 0x240240u: goto label_240240;
        case 0x240244u: goto label_240244;
        case 0x240248u: goto label_240248;
        case 0x24024cu: goto label_24024c;
        case 0x240250u: goto label_240250;
        case 0x240254u: goto label_240254;
        case 0x240258u: goto label_240258;
        case 0x24025cu: goto label_24025c;
        case 0x240260u: goto label_240260;
        case 0x240264u: goto label_240264;
        case 0x240268u: goto label_240268;
        case 0x24026cu: goto label_24026c;
        case 0x240270u: goto label_240270;
        case 0x240274u: goto label_240274;
        case 0x240278u: goto label_240278;
        case 0x24027cu: goto label_24027c;
        case 0x240280u: goto label_240280;
        case 0x240284u: goto label_240284;
        case 0x240288u: goto label_240288;
        case 0x24028cu: goto label_24028c;
        case 0x240290u: goto label_240290;
        case 0x240294u: goto label_240294;
        case 0x240298u: goto label_240298;
        case 0x24029cu: goto label_24029c;
        case 0x2402a0u: goto label_2402a0;
        case 0x2402a4u: goto label_2402a4;
        case 0x2402a8u: goto label_2402a8;
        case 0x2402acu: goto label_2402ac;
        case 0x2402b0u: goto label_2402b0;
        case 0x2402b4u: goto label_2402b4;
        case 0x2402b8u: goto label_2402b8;
        case 0x2402bcu: goto label_2402bc;
        case 0x2402c0u: goto label_2402c0;
        case 0x2402c4u: goto label_2402c4;
        case 0x2402c8u: goto label_2402c8;
        case 0x2402ccu: goto label_2402cc;
        case 0x2402d0u: goto label_2402d0;
        case 0x2402d4u: goto label_2402d4;
        case 0x2402d8u: goto label_2402d8;
        case 0x2402dcu: goto label_2402dc;
        case 0x2402e0u: goto label_2402e0;
        case 0x2402e4u: goto label_2402e4;
        case 0x2402e8u: goto label_2402e8;
        case 0x2402ecu: goto label_2402ec;
        case 0x2402f0u: goto label_2402f0;
        case 0x2402f4u: goto label_2402f4;
        case 0x2402f8u: goto label_2402f8;
        case 0x2402fcu: goto label_2402fc;
        case 0x240300u: goto label_240300;
        case 0x240304u: goto label_240304;
        case 0x240308u: goto label_240308;
        case 0x24030cu: goto label_24030c;
        case 0x240310u: goto label_240310;
        case 0x240314u: goto label_240314;
        case 0x240318u: goto label_240318;
        case 0x24031cu: goto label_24031c;
        case 0x240320u: goto label_240320;
        case 0x240324u: goto label_240324;
        case 0x240328u: goto label_240328;
        case 0x24032cu: goto label_24032c;
        case 0x240330u: goto label_240330;
        case 0x240334u: goto label_240334;
        case 0x240338u: goto label_240338;
        case 0x24033cu: goto label_24033c;
        case 0x240340u: goto label_240340;
        case 0x240344u: goto label_240344;
        case 0x240348u: goto label_240348;
        case 0x24034cu: goto label_24034c;
        case 0x240350u: goto label_240350;
        case 0x240354u: goto label_240354;
        case 0x240358u: goto label_240358;
        case 0x24035cu: goto label_24035c;
        case 0x240360u: goto label_240360;
        case 0x240364u: goto label_240364;
        case 0x240368u: goto label_240368;
        case 0x24036cu: goto label_24036c;
        case 0x240370u: goto label_240370;
        case 0x240374u: goto label_240374;
        case 0x240378u: goto label_240378;
        case 0x24037cu: goto label_24037c;
        case 0x240380u: goto label_240380;
        case 0x240384u: goto label_240384;
        case 0x240388u: goto label_240388;
        case 0x24038cu: goto label_24038c;
        case 0x240390u: goto label_240390;
        case 0x240394u: goto label_240394;
        case 0x240398u: goto label_240398;
        case 0x24039cu: goto label_24039c;
        case 0x2403a0u: goto label_2403a0;
        case 0x2403a4u: goto label_2403a4;
        case 0x2403a8u: goto label_2403a8;
        case 0x2403acu: goto label_2403ac;
        case 0x2403b0u: goto label_2403b0;
        case 0x2403b4u: goto label_2403b4;
        case 0x2403b8u: goto label_2403b8;
        case 0x2403bcu: goto label_2403bc;
        case 0x2403c0u: goto label_2403c0;
        case 0x2403c4u: goto label_2403c4;
        case 0x2403c8u: goto label_2403c8;
        case 0x2403ccu: goto label_2403cc;
        case 0x2403d0u: goto label_2403d0;
        case 0x2403d4u: goto label_2403d4;
        case 0x2403d8u: goto label_2403d8;
        case 0x2403dcu: goto label_2403dc;
        case 0x2403e0u: goto label_2403e0;
        case 0x2403e4u: goto label_2403e4;
        case 0x2403e8u: goto label_2403e8;
        case 0x2403ecu: goto label_2403ec;
        case 0x2403f0u: goto label_2403f0;
        case 0x2403f4u: goto label_2403f4;
        case 0x2403f8u: goto label_2403f8;
        case 0x2403fcu: goto label_2403fc;
        case 0x240400u: goto label_240400;
        case 0x240404u: goto label_240404;
        case 0x240408u: goto label_240408;
        case 0x24040cu: goto label_24040c;
        case 0x240410u: goto label_240410;
        case 0x240414u: goto label_240414;
        case 0x240418u: goto label_240418;
        case 0x24041cu: goto label_24041c;
        case 0x240420u: goto label_240420;
        case 0x240424u: goto label_240424;
        case 0x240428u: goto label_240428;
        case 0x24042cu: goto label_24042c;
        case 0x240430u: goto label_240430;
        case 0x240434u: goto label_240434;
        case 0x240438u: goto label_240438;
        case 0x24043cu: goto label_24043c;
        case 0x240440u: goto label_240440;
        case 0x240444u: goto label_240444;
        case 0x240448u: goto label_240448;
        case 0x24044cu: goto label_24044c;
        case 0x240450u: goto label_240450;
        case 0x240454u: goto label_240454;
        case 0x240458u: goto label_240458;
        case 0x24045cu: goto label_24045c;
        case 0x240460u: goto label_240460;
        case 0x240464u: goto label_240464;
        case 0x240468u: goto label_240468;
        case 0x24046cu: goto label_24046c;
        case 0x240470u: goto label_240470;
        case 0x240474u: goto label_240474;
        case 0x240478u: goto label_240478;
        case 0x24047cu: goto label_24047c;
        case 0x240480u: goto label_240480;
        case 0x240484u: goto label_240484;
        case 0x240488u: goto label_240488;
        case 0x24048cu: goto label_24048c;
        case 0x240490u: goto label_240490;
        case 0x240494u: goto label_240494;
        case 0x240498u: goto label_240498;
        case 0x24049cu: goto label_24049c;
        case 0x2404a0u: goto label_2404a0;
        case 0x2404a4u: goto label_2404a4;
        case 0x2404a8u: goto label_2404a8;
        case 0x2404acu: goto label_2404ac;
        case 0x2404b0u: goto label_2404b0;
        case 0x2404b4u: goto label_2404b4;
        case 0x2404b8u: goto label_2404b8;
        case 0x2404bcu: goto label_2404bc;
        case 0x2404c0u: goto label_2404c0;
        case 0x2404c4u: goto label_2404c4;
        case 0x2404c8u: goto label_2404c8;
        case 0x2404ccu: goto label_2404cc;
        case 0x2404d0u: goto label_2404d0;
        case 0x2404d4u: goto label_2404d4;
        case 0x2404d8u: goto label_2404d8;
        case 0x2404dcu: goto label_2404dc;
        case 0x2404e0u: goto label_2404e0;
        case 0x2404e4u: goto label_2404e4;
        case 0x2404e8u: goto label_2404e8;
        case 0x2404ecu: goto label_2404ec;
        case 0x2404f0u: goto label_2404f0;
        case 0x2404f4u: goto label_2404f4;
        case 0x2404f8u: goto label_2404f8;
        case 0x2404fcu: goto label_2404fc;
        case 0x240500u: goto label_240500;
        case 0x240504u: goto label_240504;
        case 0x240508u: goto label_240508;
        case 0x24050cu: goto label_24050c;
        case 0x240510u: goto label_240510;
        case 0x240514u: goto label_240514;
        case 0x240518u: goto label_240518;
        case 0x24051cu: goto label_24051c;
        case 0x240520u: goto label_240520;
        case 0x240524u: goto label_240524;
        case 0x240528u: goto label_240528;
        case 0x24052cu: goto label_24052c;
        case 0x240530u: goto label_240530;
        case 0x240534u: goto label_240534;
        case 0x240538u: goto label_240538;
        case 0x24053cu: goto label_24053c;
        case 0x240540u: goto label_240540;
        case 0x240544u: goto label_240544;
        case 0x240548u: goto label_240548;
        case 0x24054cu: goto label_24054c;
        case 0x240550u: goto label_240550;
        case 0x240554u: goto label_240554;
        case 0x240558u: goto label_240558;
        case 0x24055cu: goto label_24055c;
        case 0x240560u: goto label_240560;
        case 0x240564u: goto label_240564;
        case 0x240568u: goto label_240568;
        case 0x24056cu: goto label_24056c;
        case 0x240570u: goto label_240570;
        case 0x240574u: goto label_240574;
        case 0x240578u: goto label_240578;
        case 0x24057cu: goto label_24057c;
        case 0x240580u: goto label_240580;
        case 0x240584u: goto label_240584;
        case 0x240588u: goto label_240588;
        case 0x24058cu: goto label_24058c;
        case 0x240590u: goto label_240590;
        case 0x240594u: goto label_240594;
        case 0x240598u: goto label_240598;
        case 0x24059cu: goto label_24059c;
        case 0x2405a0u: goto label_2405a0;
        case 0x2405a4u: goto label_2405a4;
        case 0x2405a8u: goto label_2405a8;
        case 0x2405acu: goto label_2405ac;
        case 0x2405b0u: goto label_2405b0;
        case 0x2405b4u: goto label_2405b4;
        case 0x2405b8u: goto label_2405b8;
        case 0x2405bcu: goto label_2405bc;
        case 0x2405c0u: goto label_2405c0;
        case 0x2405c4u: goto label_2405c4;
        case 0x2405c8u: goto label_2405c8;
        case 0x2405ccu: goto label_2405cc;
        case 0x2405d0u: goto label_2405d0;
        case 0x2405d4u: goto label_2405d4;
        case 0x2405d8u: goto label_2405d8;
        case 0x2405dcu: goto label_2405dc;
        case 0x2405e0u: goto label_2405e0;
        case 0x2405e4u: goto label_2405e4;
        case 0x2405e8u: goto label_2405e8;
        case 0x2405ecu: goto label_2405ec;
        case 0x2405f0u: goto label_2405f0;
        case 0x2405f4u: goto label_2405f4;
        case 0x2405f8u: goto label_2405f8;
        case 0x2405fcu: goto label_2405fc;
        case 0x240600u: goto label_240600;
        case 0x240604u: goto label_240604;
        case 0x240608u: goto label_240608;
        case 0x24060cu: goto label_24060c;
        case 0x240610u: goto label_240610;
        case 0x240614u: goto label_240614;
        case 0x240618u: goto label_240618;
        case 0x24061cu: goto label_24061c;
        case 0x240620u: goto label_240620;
        case 0x240624u: goto label_240624;
        case 0x240628u: goto label_240628;
        case 0x24062cu: goto label_24062c;
        case 0x240630u: goto label_240630;
        case 0x240634u: goto label_240634;
        case 0x240638u: goto label_240638;
        case 0x24063cu: goto label_24063c;
        case 0x240640u: goto label_240640;
        case 0x240644u: goto label_240644;
        case 0x240648u: goto label_240648;
        case 0x24064cu: goto label_24064c;
        case 0x240650u: goto label_240650;
        case 0x240654u: goto label_240654;
        case 0x240658u: goto label_240658;
        case 0x24065cu: goto label_24065c;
        case 0x240660u: goto label_240660;
        case 0x240664u: goto label_240664;
        case 0x240668u: goto label_240668;
        case 0x24066cu: goto label_24066c;
        case 0x240670u: goto label_240670;
        case 0x240674u: goto label_240674;
        case 0x240678u: goto label_240678;
        case 0x24067cu: goto label_24067c;
        case 0x240680u: goto label_240680;
        case 0x240684u: goto label_240684;
        case 0x240688u: goto label_240688;
        case 0x24068cu: goto label_24068c;
        case 0x240690u: goto label_240690;
        case 0x240694u: goto label_240694;
        case 0x240698u: goto label_240698;
        case 0x24069cu: goto label_24069c;
        case 0x2406a0u: goto label_2406a0;
        case 0x2406a4u: goto label_2406a4;
        case 0x2406a8u: goto label_2406a8;
        case 0x2406acu: goto label_2406ac;
        case 0x2406b0u: goto label_2406b0;
        case 0x2406b4u: goto label_2406b4;
        case 0x2406b8u: goto label_2406b8;
        case 0x2406bcu: goto label_2406bc;
        case 0x2406c0u: goto label_2406c0;
        case 0x2406c4u: goto label_2406c4;
        case 0x2406c8u: goto label_2406c8;
        case 0x2406ccu: goto label_2406cc;
        case 0x2406d0u: goto label_2406d0;
        case 0x2406d4u: goto label_2406d4;
        case 0x2406d8u: goto label_2406d8;
        case 0x2406dcu: goto label_2406dc;
        case 0x2406e0u: goto label_2406e0;
        case 0x2406e4u: goto label_2406e4;
        case 0x2406e8u: goto label_2406e8;
        case 0x2406ecu: goto label_2406ec;
        case 0x2406f0u: goto label_2406f0;
        case 0x2406f4u: goto label_2406f4;
        case 0x2406f8u: goto label_2406f8;
        case 0x2406fcu: goto label_2406fc;
        case 0x240700u: goto label_240700;
        case 0x240704u: goto label_240704;
        case 0x240708u: goto label_240708;
        case 0x24070cu: goto label_24070c;
        case 0x240710u: goto label_240710;
        case 0x240714u: goto label_240714;
        case 0x240718u: goto label_240718;
        case 0x24071cu: goto label_24071c;
        case 0x240720u: goto label_240720;
        case 0x240724u: goto label_240724;
        case 0x240728u: goto label_240728;
        case 0x24072cu: goto label_24072c;
        case 0x240730u: goto label_240730;
        case 0x240734u: goto label_240734;
        case 0x240738u: goto label_240738;
        case 0x24073cu: goto label_24073c;
        case 0x240740u: goto label_240740;
        case 0x240744u: goto label_240744;
        case 0x240748u: goto label_240748;
        case 0x24074cu: goto label_24074c;
        case 0x240750u: goto label_240750;
        case 0x240754u: goto label_240754;
        case 0x240758u: goto label_240758;
        case 0x24075cu: goto label_24075c;
        case 0x240760u: goto label_240760;
        case 0x240764u: goto label_240764;
        case 0x240768u: goto label_240768;
        case 0x24076cu: goto label_24076c;
        case 0x240770u: goto label_240770;
        case 0x240774u: goto label_240774;
        case 0x240778u: goto label_240778;
        case 0x24077cu: goto label_24077c;
        case 0x240780u: goto label_240780;
        case 0x240784u: goto label_240784;
        case 0x240788u: goto label_240788;
        case 0x24078cu: goto label_24078c;
        case 0x240790u: goto label_240790;
        case 0x240794u: goto label_240794;
        case 0x240798u: goto label_240798;
        case 0x24079cu: goto label_24079c;
        case 0x2407a0u: goto label_2407a0;
        case 0x2407a4u: goto label_2407a4;
        case 0x2407a8u: goto label_2407a8;
        case 0x2407acu: goto label_2407ac;
        case 0x2407b0u: goto label_2407b0;
        case 0x2407b4u: goto label_2407b4;
        case 0x2407b8u: goto label_2407b8;
        case 0x2407bcu: goto label_2407bc;
        case 0x2407c0u: goto label_2407c0;
        case 0x2407c4u: goto label_2407c4;
        case 0x2407c8u: goto label_2407c8;
        case 0x2407ccu: goto label_2407cc;
        case 0x2407d0u: goto label_2407d0;
        case 0x2407d4u: goto label_2407d4;
        case 0x2407d8u: goto label_2407d8;
        case 0x2407dcu: goto label_2407dc;
        case 0x2407e0u: goto label_2407e0;
        case 0x2407e4u: goto label_2407e4;
        case 0x2407e8u: goto label_2407e8;
        case 0x2407ecu: goto label_2407ec;
        case 0x2407f0u: goto label_2407f0;
        case 0x2407f4u: goto label_2407f4;
        case 0x2407f8u: goto label_2407f8;
        case 0x2407fcu: goto label_2407fc;
        case 0x240800u: goto label_240800;
        case 0x240804u: goto label_240804;
        case 0x240808u: goto label_240808;
        case 0x24080cu: goto label_24080c;
        case 0x240810u: goto label_240810;
        case 0x240814u: goto label_240814;
        case 0x240818u: goto label_240818;
        case 0x24081cu: goto label_24081c;
        case 0x240820u: goto label_240820;
        case 0x240824u: goto label_240824;
        case 0x240828u: goto label_240828;
        case 0x24082cu: goto label_24082c;
        case 0x240830u: goto label_240830;
        case 0x240834u: goto label_240834;
        case 0x240838u: goto label_240838;
        case 0x24083cu: goto label_24083c;
        default: return;
    }

label_240070:
    // 0x240070: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x240070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_240074:
    // 0x240074: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x240074u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
label_240078:
    // 0x240078: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x240078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_24007c:
    // 0x24007c: 0xc0545ec  jal         func_1517B0
label_240080:
    if (ctx->pc == 0x240080u) {
        ctx->pc = 0x240080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24007Cu;
        // 0x240080: 0x2484f940  addiu       $a0, $a0, -0x6C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965568));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240084u;
        goto label_240084;
    }
    ctx->pc = 0x24007Cu;
    SET_GPR_U32(ctx, 31, 0x240084u);
    ctx->pc = 0x240080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24007Cu;
    // 0x240080: 0x2484f940  addiu       $a0, $a0, -0x6C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1517B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1517B0u, 0x24007Cu, 0x240084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240084u;
label_240084:
    // 0x240084: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x240084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_240088:
    // 0x240088: 0x3e00008  jr          $ra
label_24008c:
    if (ctx->pc == 0x24008Cu) {
        ctx->pc = 0x24008Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240088u;
        // 0x24008c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240090u;
        goto label_240090;
    }
    ctx->pc = 0x240088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24008Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240088u;
        // 0x24008c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240090u;
label_240090:
    // 0x240090: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x240090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_240094:
    // 0x240094: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x240094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_240098:
    // 0x240098: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x240098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_24009c:
    // 0x24009c: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x24009cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_2400a0:
    // 0x2400a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2400a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2400a4:
    // 0x2400a4: 0x34212ed0  ori         $at, $at, 0x2ED0
    ctx->pc = 0x2400a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)11984);
label_2400a8:
    // 0x2400a8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2400a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2400ac:
    // 0x2400ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2400acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2400b0:
    // 0x2400b0: 0x652023  subu        $a0, $v1, $a1
    ctx->pc = 0x2400b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2400b4:
    // 0x2400b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2400b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2400b8:
    // 0x2400b8: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x2400b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
label_2400bc:
    // 0x2400bc: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2400bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_2400c0:
    // 0x2400c0: 0x2463c990  addiu       $v1, $v1, -0x3670
    ctx->pc = 0x2400c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953360));
label_2400c4:
    // 0x2400c4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2400c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2400c8:
    // 0x2400c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2400c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2400cc:
    // 0x2400cc: 0x16200018  bnez        $s1, . + 4 + (0x18 << 2)
label_2400d0:
    if (ctx->pc == 0x2400D0u) {
        ctx->pc = 0x2400D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2400CCu;
        // 0x2400d0: 0x618021  addu        $s0, $v1, $at (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2400D4u;
        goto label_2400d4;
    }
    ctx->pc = 0x2400CCu;
    {
        const bool branch_taken_0x2400cc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2400D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2400CCu;
        // 0x2400d0: 0x618021  addu        $s0, $v1, $at (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2400cc) {
            ctx->pc = 0x240130u;
            goto label_240130;
        }
    }
    ctx->pc = 0x2400D4u;
label_2400d4:
    // 0x2400d4: 0x86020012  lh          $v0, 0x12($s0)
    ctx->pc = 0x2400d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
label_2400d8:
    // 0x2400d8: 0x26440200  addiu       $a0, $s2, 0x200
    ctx->pc = 0x2400d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 512));
label_2400dc:
    // 0x2400dc: 0x26050050  addiu       $a1, $s0, 0x50
    ctx->pc = 0x2400dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_2400e0:
    // 0x2400e0: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x2400e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2400e4:
    // 0x2400e4: 0xa6420220  sh          $v0, 0x220($s2)
    ctx->pc = 0x2400e4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 544), (uint16_t)GPR_U32(ctx, 2));
label_2400e8:
    // 0x2400e8: 0x86020014  lh          $v0, 0x14($s0)
    ctx->pc = 0x2400e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
label_2400ec:
    // 0x2400ec: 0xa6420222  sh          $v0, 0x222($s2)
    ctx->pc = 0x2400ecu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 546), (uint16_t)GPR_U32(ctx, 2));
label_2400f0:
    // 0x2400f0: 0x86020016  lh          $v0, 0x16($s0)
    ctx->pc = 0x2400f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
label_2400f4:
    // 0x2400f4: 0xa6420250  sh          $v0, 0x250($s2)
    ctx->pc = 0x2400f4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 592), (uint16_t)GPR_U32(ctx, 2));
label_2400f8:
    // 0x2400f8: 0x9202001a  lbu         $v0, 0x1A($s0)
    ctx->pc = 0x2400f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26)));
label_2400fc:
    // 0x2400fc: 0xc08e93e  jal         func_23A4F8
label_240100:
    if (ctx->pc == 0x240100u) {
        ctx->pc = 0x240100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2400FCu;
        // 0x240100: 0xa2420231  sb          $v0, 0x231($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 561), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240104u;
        goto label_240104;
    }
    ctx->pc = 0x2400FCu;
    SET_GPR_U32(ctx, 31, 0x240104u);
    ctx->pc = 0x240100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2400FCu;
    // 0x240100: 0xa2420231  sb          $v0, 0x231($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 561), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x240104u;
label_240104:
    // 0x240104: 0x2644027c  addiu       $a0, $s2, 0x27C
    ctx->pc = 0x240104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 636));
label_240108:
    // 0x240108: 0x26050064  addiu       $a1, $s0, 0x64
    ctx->pc = 0x240108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
label_24010c:
    // 0x24010c: 0xc08e93e  jal         func_23A4F8
label_240110:
    if (ctx->pc == 0x240110u) {
        ctx->pc = 0x240110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24010Cu;
        // 0x240110: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240114u;
        goto label_240114;
    }
    ctx->pc = 0x24010Cu;
    SET_GPR_U32(ctx, 31, 0x240114u);
    ctx->pc = 0x240110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24010Cu;
    // 0x240110: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x240114u;
label_240114:
    // 0x240114: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x240114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_240118:
    // 0x240118: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x240118u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_24011c:
    // 0x24011c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x24011cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_240120:
    // 0x240120: 0xae440198  sw          $a0, 0x198($s2)
    ctx->pc = 0x240120u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 408), GPR_U32(ctx, 4));
label_240124:
    // 0x240124: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x240124u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_240128:
    // 0x240128: 0x1000000d  b           . + 4 + (0xD << 2)
label_24012c:
    if (ctx->pc == 0x24012Cu) {
        ctx->pc = 0x24012Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240128u;
        // 0x24012c: 0xa643021c  sh          $v1, 0x21C($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 540), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240130u;
        goto label_240130;
    }
    ctx->pc = 0x240128u;
    {
        const bool branch_taken_0x240128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24012Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240128u;
        // 0x24012c: 0xa643021c  sh          $v1, 0x21C($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 540), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240128) {
            ctx->pc = 0x240160u;
            goto label_240160;
        }
    }
    ctx->pc = 0x240130u;
label_240130:
    // 0x240130: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x240130u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_240134:
    // 0x240134: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x240134u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_240138:
    // 0x240138: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x240138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_24013c:
    // 0x24013c: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x24013cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_240140:
    // 0x240140: 0xa643021c  sh          $v1, 0x21C($s2)
    ctx->pc = 0x240140u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 540), (uint16_t)GPR_U32(ctx, 3));
label_240144:
    // 0x240144: 0x9203001b  lbu         $v1, 0x1B($s0)
    ctx->pc = 0x240144u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 27)));
label_240148:
    // 0x240148: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_24014c:
    if (ctx->pc == 0x24014Cu) {
        ctx->pc = 0x24014Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240148u;
        // 0x24014c: 0xa2430243  sb          $v1, 0x243($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 579), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240150u;
        goto label_240150;
    }
    ctx->pc = 0x240148u;
    {
        const bool branch_taken_0x240148 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x24014Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240148u;
        // 0x24014c: 0xa2430243  sb          $v1, 0x243($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 579), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240148) {
            ctx->pc = 0x240160u;
            goto label_240160;
        }
    }
    ctx->pc = 0x240150u;
label_240150:
    // 0x240150: 0x2603005b  addiu       $v1, $s0, 0x5B
    ctx->pc = 0x240150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 91));
label_240154:
    // 0x240154: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x240154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_240158:
    // 0x240158: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x240158u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_24015c:
    // 0x24015c: 0xa2430240  sb          $v1, 0x240($s2)
    ctx->pc = 0x24015cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 576), (uint8_t)GPR_U32(ctx, 3));
label_240160:
    // 0x240160: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x240160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_240164:
    // 0x240164: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x240164u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_240168:
    // 0x240168: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x240168u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_24016c:
    // 0x24016c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24016cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_240170:
    // 0x240170: 0x3e00008  jr          $ra
label_240174:
    if (ctx->pc == 0x240174u) {
        ctx->pc = 0x240174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240170u;
        // 0x240174: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240178u;
        goto label_240178;
    }
    ctx->pc = 0x240170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240170u;
        // 0x240174: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240178u;
label_240178:
    // 0x240178: 0x0  nop
    ctx->pc = 0x240178u;
    // NOP
label_24017c:
    // 0x24017c: 0x0  nop
    ctx->pc = 0x24017cu;
    // NOP
label_240180:
    // 0x240180: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x240180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_240184:
    // 0x240184: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x240184u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_240188:
    // 0x240188: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x240188u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
label_24018c:
    // 0x24018c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24018cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_240190:
    // 0x240190: 0x24844a30  addiu       $a0, $a0, 0x4A30
    ctx->pc = 0x240190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18992));
label_240194:
    // 0x240194: 0x24a5eaa0  addiu       $a1, $a1, -0x1560
    ctx->pc = 0x240194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961824));
label_240198:
    // 0x240198: 0xc08e93e  jal         func_23A4F8
label_24019c:
    if (ctx->pc == 0x24019Cu) {
        ctx->pc = 0x24019Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240198u;
        // 0x24019c: 0x240607c8  addiu       $a2, $zero, 0x7C8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2401A0u;
        goto label_2401a0;
    }
    ctx->pc = 0x240198u;
    SET_GPR_U32(ctx, 31, 0x2401A0u);
    ctx->pc = 0x24019Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240198u;
    // 0x24019c: 0x240607c8  addiu       $a2, $zero, 0x7C8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x2401A0u;
label_2401a0:
    // 0x2401a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2401a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2401a4:
    // 0x2401a4: 0x3e00008  jr          $ra
label_2401a8:
    if (ctx->pc == 0x2401A8u) {
        ctx->pc = 0x2401A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2401A4u;
        // 0x2401a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2401ACu;
        goto label_2401ac;
    }
    ctx->pc = 0x2401A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2401A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2401A4u;
        // 0x2401a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2401A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2401ACu;
label_2401ac:
    // 0x2401ac: 0x0  nop
    ctx->pc = 0x2401acu;
    // NOP
label_2401b0:
    // 0x2401b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2401b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2401b4:
    // 0x2401b4: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x2401b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
label_2401b8:
    // 0x2401b8: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x2401b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_2401bc:
    // 0x2401bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2401bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2401c0:
    // 0x2401c0: 0x24842570  addiu       $a0, $a0, 0x2570
    ctx->pc = 0x2401c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9584));
label_2401c4:
    // 0x2401c4: 0x24a52330  addiu       $a1, $a1, 0x2330
    ctx->pc = 0x2401c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9008));
label_2401c8:
    // 0x2401c8: 0xc08e93e  jal         func_23A4F8
label_2401cc:
    if (ctx->pc == 0x2401CCu) {
        ctx->pc = 0x2401CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2401C8u;
        // 0x2401cc: 0x34068f70  ori         $a2, $zero, 0x8F70 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36720);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2401D0u;
        goto label_2401d0;
    }
    ctx->pc = 0x2401C8u;
    SET_GPR_U32(ctx, 31, 0x2401D0u);
    ctx->pc = 0x2401CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2401C8u;
    // 0x2401cc: 0x34068f70  ori         $a2, $zero, 0x8F70 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36720);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x2401D0u;
label_2401d0:
    // 0x2401d0: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x2401d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
label_2401d4:
    // 0x2401d4: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x2401d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_2401d8:
    // 0x2401d8: 0x248424b0  addiu       $a0, $a0, 0x24B0
    ctx->pc = 0x2401d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9392));
label_2401dc:
    // 0x2401dc: 0x24a5e2b0  addiu       $a1, $a1, -0x1D50
    ctx->pc = 0x2401dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959792));
label_2401e0:
    // 0x2401e0: 0xc08e93e  jal         func_23A4F8
label_2401e4:
    if (ctx->pc == 0x2401E4u) {
        ctx->pc = 0x2401E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2401E0u;
        // 0x2401e4: 0x240600c0  addiu       $a2, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2401E8u;
        goto label_2401e8;
    }
    ctx->pc = 0x2401E0u;
    SET_GPR_U32(ctx, 31, 0x2401E8u);
    ctx->pc = 0x2401E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2401E0u;
    // 0x2401e4: 0x240600c0  addiu       $a2, $zero, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x2401E8u;
label_2401e8:
    // 0x2401e8: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x2401e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
label_2401ec:
    // 0x2401ec: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x2401ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_2401f0:
    // 0x2401f0: 0x2484b4e0  addiu       $a0, $a0, -0x4B20
    ctx->pc = 0x2401f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948064));
label_2401f4:
    // 0x2401f4: 0x24a5e370  addiu       $a1, $a1, -0x1C90
    ctx->pc = 0x2401f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959984));
label_2401f8:
    // 0x2401f8: 0xc08e93e  jal         func_23A4F8
label_2401fc:
    if (ctx->pc == 0x2401FCu) {
        ctx->pc = 0x2401FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2401F8u;
        // 0x2401fc: 0x24063fc0  addiu       $a2, $zero, 0x3FC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240200u;
        goto label_240200;
    }
    ctx->pc = 0x2401F8u;
    SET_GPR_U32(ctx, 31, 0x240200u);
    ctx->pc = 0x2401FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2401F8u;
    // 0x2401fc: 0x24063fc0  addiu       $a2, $zero, 0x3FC0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x240200u;
label_240200:
    // 0x240200: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x240200u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
label_240204:
    // 0x240204: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x240204u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
label_240208:
    // 0x240208: 0x24841dc0  addiu       $a0, $a0, 0x1DC0
    ctx->pc = 0x240208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7616));
label_24020c:
    // 0x24020c: 0x24a5f418  addiu       $a1, $a1, -0xBE8
    ctx->pc = 0x24020cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964248));
label_240210:
    // 0x240210: 0xc08e93e  jal         func_23A4F8
label_240214:
    if (ctx->pc == 0x240214u) {
        ctx->pc = 0x240214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240210u;
        // 0x240214: 0x24060441  addiu       $a2, $zero, 0x441 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1089));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240218u;
        goto label_240218;
    }
    ctx->pc = 0x240210u;
    SET_GPR_U32(ctx, 31, 0x240218u);
    ctx->pc = 0x240214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240210u;
    // 0x240214: 0x24060441  addiu       $a2, $zero, 0x441 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1089));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x240218u;
label_240218:
    // 0x240218: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x240218u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
label_24021c:
    // 0x24021c: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x24021cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
label_240220:
    // 0x240220: 0x24842570  addiu       $a0, $a0, 0x2570
    ctx->pc = 0x240220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9584));
label_240224:
    // 0x240224: 0x24a5b4e0  addiu       $a1, $a1, -0x4B20
    ctx->pc = 0x240224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948064));
label_240228:
    // 0x240228: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x240228u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24022c:
    // 0x24022c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x24022cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_240230:
    // 0x240230: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x240230u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_240234:
    // 0x240234: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x240234u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_240238:
    // 0x240238: 0x28e300ff  slti        $v1, $a3, 0xFF
    ctx->pc = 0x240238u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)255) ? 1 : 0);
label_24023c:
    // 0x24023c: 0x24840048  addiu       $a0, $a0, 0x48
    ctx->pc = 0x24023cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
label_240240:
    // 0x240240: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x240240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_240244:
    // 0x240244: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_240248:
    if (ctx->pc == 0x240248u) {
        ctx->pc = 0x24024Cu;
        goto label_24024c;
    }
    ctx->pc = 0x240244u;
    {
        const bool branch_taken_0x240244 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x240244) {
            ctx->pc = 0x240230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_240230;
        }
    }
    ctx->pc = 0x24024Cu;
label_24024c:
    // 0x24024c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x24024cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_240250:
    // 0x240250: 0x28c30002  slti        $v1, $a2, 0x2
    ctx->pc = 0x240250u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
label_240254:
    // 0x240254: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_240258:
    if (ctx->pc == 0x240258u) {
        ctx->pc = 0x240258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240254u;
        // 0x240258: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24025Cu;
        goto label_24025c;
    }
    ctx->pc = 0x240254u;
    {
        const bool branch_taken_0x240254 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x240258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240254u;
        // 0x240258: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240254) {
            ctx->pc = 0x240230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_240230;
        }
    }
    ctx->pc = 0x24025Cu;
label_24025c:
    // 0x24025c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24025cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_240260:
    // 0x240260: 0x3e00008  jr          $ra
label_240264:
    if (ctx->pc == 0x240264u) {
        ctx->pc = 0x240264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240260u;
        // 0x240264: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240268u;
        goto label_240268;
    }
    ctx->pc = 0x240260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240260u;
        // 0x240264: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240268u;
label_240268:
    // 0x240268: 0x0  nop
    ctx->pc = 0x240268u;
    // NOP
label_24026c:
    // 0x24026c: 0x0  nop
    ctx->pc = 0x24026cu;
    // NOP
label_240270:
    // 0x240270: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x240270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_240274:
    // 0x240274: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x240274u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
label_240278:
    // 0x240278: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x240278u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
label_24027c:
    // 0x24027c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24027cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_240280:
    // 0x240280: 0x24841300  addiu       $a0, $a0, 0x1300
    ctx->pc = 0x240280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4864));
label_240284:
    // 0x240284: 0x24a5b2a0  addiu       $a1, $a1, -0x4D60
    ctx->pc = 0x240284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947488));
label_240288:
    // 0x240288: 0xc08e93e  jal         func_23A4F8
label_24028c:
    if (ctx->pc == 0x24028Cu) {
        ctx->pc = 0x24028Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240288u;
        // 0x24028c: 0x24063800  addiu       $a2, $zero, 0x3800 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240290u;
        goto label_240290;
    }
    ctx->pc = 0x240288u;
    SET_GPR_U32(ctx, 31, 0x240290u);
    ctx->pc = 0x24028Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240288u;
    // 0x24028c: 0x24063800  addiu       $a2, $zero, 0x3800 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    { ctx->pc = 0x23a4f8; return; }
    ctx->pc = 0x240290u;
label_240290:
    // 0x240290: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x240290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_240294:
    // 0x240294: 0x3e00008  jr          $ra
label_240298:
    if (ctx->pc == 0x240298u) {
        ctx->pc = 0x240298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240294u;
        // 0x240298: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24029Cu;
        goto label_24029c;
    }
    ctx->pc = 0x240294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240294u;
        // 0x240298: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240294u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24029Cu;
label_24029c:
    // 0x24029c: 0x0  nop
    ctx->pc = 0x24029cu;
    // NOP
label_2402a0:
    // 0x2402a0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2402a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2402a4:
    // 0x2402a4: 0x240c0009  addiu       $t4, $zero, 0x9
    ctx->pc = 0x2402a4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2402a8:
    // 0x2402a8: 0x240d0048  addiu       $t5, $zero, 0x48
    ctx->pc = 0x2402a8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_2402ac:
    // 0x2402ac: 0x53880  sll         $a3, $a1, 2
    ctx->pc = 0x2402acu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2402b0:
    // 0x2402b0: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x2402b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
label_2402b4:
    // 0x2402b4: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x2402b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_2402b8:
    // 0x2402b8: 0x2463c990  addiu       $v1, $v1, -0x3670
    ctx->pc = 0x2402b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953360));
label_2402bc:
    // 0x2402bc: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x2402bcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_2402c0:
    // 0x2402c0: 0x24abfffd  addiu       $t3, $a1, -0x3
    ctx->pc = 0x2402c0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967293));
label_2402c4:
    // 0x2402c4: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2402c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_2402c8:
    // 0x2402c8: 0x240a0005  addiu       $t2, $zero, 0x5
    ctx->pc = 0x2402c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2402cc:
    // 0x2402cc: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2402ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2402d0:
    // 0x2402d0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2402d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2402d4:
    // 0x2402d4: 0x24670000  addiu       $a3, $v1, 0x0
    ctx->pc = 0x2402d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_2402d8:
    // 0x2402d8: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_2402dc:
    if (ctx->pc == 0x2402DCu) {
        ctx->pc = 0x2402DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2402D8u;
        // 0x2402dc: 0x2d610002  sltiu       $at, $t3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2402E0u;
        goto label_2402e0;
    }
    ctx->pc = 0x2402D8u;
    {
        const bool branch_taken_0x2402d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2402DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2402D8u;
        // 0x2402dc: 0x2d610002  sltiu       $at, $t3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2402d8) {
            ctx->pc = 0x2402F0u;
            goto label_2402f0;
        }
    }
    ctx->pc = 0x2402E0u;
label_2402e0:
    // 0x2402e0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_2402e4:
    if (ctx->pc == 0x2402E4u) {
        ctx->pc = 0x2402E8u;
        goto label_2402e8;
    }
    ctx->pc = 0x2402E0u;
    {
        const bool branch_taken_0x2402e0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2402e0) {
            ctx->pc = 0x2402F0u;
            goto label_2402f0;
        }
    }
    ctx->pc = 0x2402E8u;
label_2402e8:
    // 0x2402e8: 0x14aa0006  bne         $a1, $t2, . + 4 + (0x6 << 2)
label_2402ec:
    if (ctx->pc == 0x2402ECu) {
        ctx->pc = 0x2402F0u;
        goto label_2402f0;
    }
    ctx->pc = 0x2402E8u;
    {
        const bool branch_taken_0x2402e8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 10));
        if (branch_taken_0x2402e8) {
            ctx->pc = 0x240304u;
            goto label_240304;
        }
    }
    ctx->pc = 0x2402F0u;
label_2402f0:
    // 0x2402f0: 0xed1821  addu        $v1, $a3, $t5
    ctx->pc = 0x2402f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
label_2402f4:
    // 0x2402f4: 0x8c630168  lw          $v1, 0x168($v1)
    ctx->pc = 0x2402f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 360)));
label_2402f8:
    // 0x2402f8: 0x66182a  slt         $v1, $v1, $a2
    ctx->pc = 0x2402f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_2402fc:
    // 0x2402fc: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_240300:
    if (ctx->pc == 0x240300u) {
        ctx->pc = 0x240304u;
        goto label_240304;
    }
    ctx->pc = 0x2402FCu;
    {
        const bool branch_taken_0x2402fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2402fc) {
            ctx->pc = 0x24032Cu;
            goto label_24032c;
        }
    }
    ctx->pc = 0x240304u;
label_240304:
    // 0x240304: 0x0  nop
    ctx->pc = 0x240304u;
    // NOP
label_240308:
    // 0x240308: 0x10a90003  beq         $a1, $t1, . + 4 + (0x3 << 2)
label_24030c:
    if (ctx->pc == 0x24030Cu) {
        ctx->pc = 0x240310u;
        goto label_240310;
    }
    ctx->pc = 0x240308u;
    {
        const bool branch_taken_0x240308 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 9));
        if (branch_taken_0x240308) {
            ctx->pc = 0x240318u;
            goto label_240318;
        }
    }
    ctx->pc = 0x240310u;
label_240310:
    // 0x240310: 0x14a80012  bne         $a1, $t0, . + 4 + (0x12 << 2)
label_240314:
    if (ctx->pc == 0x240314u) {
        ctx->pc = 0x240318u;
        goto label_240318;
    }
    ctx->pc = 0x240310u;
    {
        const bool branch_taken_0x240310 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 8));
        if (branch_taken_0x240310) {
            ctx->pc = 0x24035Cu;
            goto label_24035c;
        }
    }
    ctx->pc = 0x240318u;
label_240318:
    // 0x240318: 0xed1821  addu        $v1, $a3, $t5
    ctx->pc = 0x240318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
label_24031c:
    // 0x24031c: 0x8c630168  lw          $v1, 0x168($v1)
    ctx->pc = 0x24031cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 360)));
label_240320:
    // 0x240320: 0xc3082a  slt         $at, $a2, $v1
    ctx->pc = 0x240320u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_240324:
    // 0x240324: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_240328:
    if (ctx->pc == 0x240328u) {
        ctx->pc = 0x24032Cu;
        goto label_24032c;
    }
    ctx->pc = 0x240324u;
    {
        const bool branch_taken_0x240324 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x240324) {
            ctx->pc = 0x24035Cu;
            goto label_24035c;
        }
    }
    ctx->pc = 0x24032Cu;
label_24032c:
    // 0x24032c: 0x0  nop
    ctx->pc = 0x24032cu;
    // NOP
label_240330:
    // 0x240330: 0x29810009  slti        $at, $t4, 0x9
    ctx->pc = 0x240330u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)9) ? 1 : 0);
label_240334:
    // 0x240334: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_240338:
    if (ctx->pc == 0x240338u) {
        ctx->pc = 0x240338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240334u;
        // 0x240338: 0x180102d  daddu       $v0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24033Cu;
        goto label_24033c;
    }
    ctx->pc = 0x240334u;
    {
        const bool branch_taken_0x240334 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x240338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240334u;
        // 0x240338: 0x180102d  daddu       $v0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240334) {
            ctx->pc = 0x240350u;
            goto label_240350;
        }
    }
    ctx->pc = 0x24033Cu;
label_24033c:
    // 0x24033c: 0xed7021  addu        $t6, $a3, $t5
    ctx->pc = 0x24033cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
label_240340:
    // 0x240340: 0x8dc30168  lw          $v1, 0x168($t6)
    ctx->pc = 0x240340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 360)));
label_240344:
    // 0x240344: 0xadc30170  sw          $v1, 0x170($t6)
    ctx->pc = 0x240344u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 368), GPR_U32(ctx, 3));
label_240348:
    // 0x240348: 0x8dc30164  lw          $v1, 0x164($t6)
    ctx->pc = 0x240348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 356)));
label_24034c:
    // 0x24034c: 0xadc3016c  sw          $v1, 0x16C($t6)
    ctx->pc = 0x24034cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 364), GPR_U32(ctx, 3));
label_240350:
    // 0x240350: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x240350u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
label_240354:
    // 0x240354: 0x581ffe0  bgez        $t4, . + 4 + (-0x20 << 2)
label_240358:
    if (ctx->pc == 0x240358u) {
        ctx->pc = 0x240358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240354u;
        // 0x240358: 0x25adfff8  addiu       $t5, $t5, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24035Cu;
        goto label_24035c;
    }
    ctx->pc = 0x240354u;
    {
        const bool branch_taken_0x240354 = (GPR_S32(ctx, 12) >= 0);
        ctx->pc = 0x240358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240354u;
        // 0x240358: 0x25adfff8  addiu       $t5, $t5, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240354) {
            ctx->pc = 0x2402D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2402d8;
        }
    }
    ctx->pc = 0x24035Cu;
label_24035c:
    // 0x24035c: 0x0  nop
    ctx->pc = 0x24035cu;
    // NOP
label_240360:
    // 0x240360: 0x2841000a  slti        $at, $v0, 0xA
    ctx->pc = 0x240360u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
label_240364:
    // 0x240364: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
label_240368:
    if (ctx->pc == 0x240368u) {
        ctx->pc = 0x240368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240364u;
        // 0x240368: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24036Cu;
        goto label_24036c;
    }
    ctx->pc = 0x240364u;
    {
        const bool branch_taken_0x240364 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x240368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240364u;
        // 0x240368: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240364) {
            ctx->pc = 0x2403A8u;
            goto label_2403a8;
        }
    }
    ctx->pc = 0x24036Cu;
label_24036c:
    // 0x24036c: 0x3c07002a  lui         $a3, 0x2A
    ctx->pc = 0x24036cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)42 << 16));
label_240370:
    // 0x240370: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x240370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_240374:
    // 0x240374: 0x24e7caf8  addiu       $a3, $a3, -0x3508
    ctx->pc = 0x240374u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953720));
label_240378:
    // 0x240378: 0x34900  sll         $t1, $v1, 4
    ctx->pc = 0x240378u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_24037c:
    // 0x24037c: 0x240c0  sll         $t0, $v0, 3
    ctx->pc = 0x24037cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_240380:
    // 0x240380: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x240380u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
label_240384:
    // 0x240384: 0xe92821  addu        $a1, $a3, $t1
    ctx->pc = 0x240384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
label_240388:
    // 0x240388: 0x2463caf4  addiu       $v1, $v1, -0x350C
    ctx->pc = 0x240388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953716));
label_24038c:
    // 0x24038c: 0x24a50000  addiu       $a1, $a1, 0x0
    ctx->pc = 0x24038cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 0));
label_240390:
    // 0x240390: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x240390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_240394:
    // 0x240394: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x240394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_240398:
    // 0x240398: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x240398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_24039c:
    // 0x24039c: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x24039cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_2403a0:
    // 0x2403a0: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2403a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_2403a4:
    // 0x2403a4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2403a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_2403a8:
    // 0x2403a8: 0x3e00008  jr          $ra
label_2403ac:
    if (ctx->pc == 0x2403ACu) {
        ctx->pc = 0x2403B0u;
        goto label_2403b0;
    }
    ctx->pc = 0x2403A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2403A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2403B0u;
label_2403b0:
    // 0x2403b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2403b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2403b4:
    // 0x2403b4: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x2403b4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2403b8:
    // 0x2403b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2403b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2403bc:
    // 0x2403bc: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x2403bcu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2403c0:
    // 0x2403c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2403c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2403c4:
    // 0x2403c4: 0xafa80020  sw          $t0, 0x20($sp)
    ctx->pc = 0x2403c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 8));
label_2403c8:
    // 0x2403c8: 0xafa70024  sw          $a3, 0x24($sp)
    ctx->pc = 0x2403c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 7));
label_2403cc:
    // 0x2403cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2403ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2403d0:
    // 0x2403d0: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x2403d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
label_2403d4:
    // 0x2403d4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2403d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2403d8:
    // 0x2403d8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2403d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2403dc:
    // 0x2403dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2403dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2403e0:
    // 0x2403e0: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x2403e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
label_2403e4:
    // 0x2403e4: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x2403e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2403e8:
    // 0x2403e8: 0x2484c990  addiu       $a0, $a0, -0x3670
    ctx->pc = 0x2403e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953360));
label_2403ec:
    // 0x2403ec: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x2403ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2403f0:
    // 0x2403f0: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x2403f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_2403f4:
    // 0x2403f4: 0x24860000  addiu       $a2, $a0, 0x0
    ctx->pc = 0x2403f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
label_2403f8:
    // 0x2403f8: 0x240a000a  addiu       $t2, $zero, 0xA
    ctx->pc = 0x2403f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2403fc:
    // 0x2403fc: 0x24090009  addiu       $t1, $zero, 0x9
    ctx->pc = 0x2403fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_240400:
    // 0x240400: 0x240b0048  addiu       $t3, $zero, 0x48
    ctx->pc = 0x240400u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_240404:
    // 0x240404: 0xcd2021  addu        $a0, $a2, $t5
    ctx->pc = 0x240404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
label_240408:
    // 0x240408: 0x6cc021  addu        $t8, $v1, $t4
    ctx->pc = 0x240408u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
label_24040c:
    // 0x24040c: 0x24900000  addiu       $s0, $a0, 0x0
    ctx->pc = 0x24040cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
label_240410:
    // 0x240410: 0xcd7021  addu        $t6, $a2, $t5
    ctx->pc = 0x240410u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
label_240414:
    // 0x240414: 0x24840000  addiu       $a0, $a0, 0x0
    ctx->pc = 0x240414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
label_240418:
    // 0x240418: 0x300882d  daddu       $s1, $t8, $zero
    ctx->pc = 0x240418u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
label_24041c:
    // 0x24041c: 0x25cf0000  addiu       $t7, $t6, 0x0
    ctx->pc = 0x24041cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 14), 0));
label_240420:
    // 0x240420: 0x15070006  bne         $t0, $a3, . + 4 + (0x6 << 2)
label_240424:
    if (ctx->pc == 0x240424u) {
        ctx->pc = 0x240424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240420u;
        // 0x240424: 0x8bc821  addu        $t9, $a0, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240428u;
        goto label_240428;
    }
    ctx->pc = 0x240420u;
    {
        const bool branch_taken_0x240420 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 7));
        ctx->pc = 0x240424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240420u;
        // 0x240424: 0x8bc821  addu        $t9, $a0, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240420) {
            ctx->pc = 0x24043Cu;
            goto label_24043c;
        }
    }
    ctx->pc = 0x240428u;
label_240428:
    // 0x240428: 0x8e2e0000  lw          $t6, 0x0($s1)
    ctx->pc = 0x240428u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_24042c:
    // 0x24042c: 0x8f390374  lw          $t9, 0x374($t9)
    ctx->pc = 0x24042cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 884)));
label_240430:
    // 0x240430: 0x1d9082a  slt         $at, $t6, $t9
    ctx->pc = 0x240430u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 25)) ? 1 : 0);
label_240434:
    // 0x240434: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
label_240438:
    if (ctx->pc == 0x240438u) {
        ctx->pc = 0x24043Cu;
        goto label_24043c;
    }
    ctx->pc = 0x240434u;
    {
        const bool branch_taken_0x240434 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x240434) {
            ctx->pc = 0x24045Cu;
            goto label_24045c;
        }
    }
    ctx->pc = 0x24043Cu;
label_24043c:
    // 0x24043c: 0x0  nop
    ctx->pc = 0x24043cu;
    // NOP
label_240440:
    // 0x240440: 0x11070012  beq         $t0, $a3, . + 4 + (0x12 << 2)
label_240444:
    if (ctx->pc == 0x240444u) {
        ctx->pc = 0x240444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240440u;
        // 0x240444: 0x20bc821  addu        $t9, $s0, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240448u;
        goto label_240448;
    }
    ctx->pc = 0x240440u;
    {
        const bool branch_taken_0x240440 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 7));
        ctx->pc = 0x240444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240440u;
        // 0x240444: 0x20bc821  addu        $t9, $s0, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240440) {
            ctx->pc = 0x24048Cu;
            goto label_24048c;
        }
    }
    ctx->pc = 0x240448u;
label_240448:
    // 0x240448: 0x8f0e0000  lw          $t6, 0x0($t8)
    ctx->pc = 0x240448u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
label_24044c:
    // 0x24044c: 0x8f390374  lw          $t9, 0x374($t9)
    ctx->pc = 0x24044cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 884)));
label_240450:
    // 0x240450: 0x32e082a  slt         $at, $t9, $t6
    ctx->pc = 0x240450u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
label_240454:
    // 0x240454: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_240458:
    if (ctx->pc == 0x240458u) {
        ctx->pc = 0x24045Cu;
        goto label_24045c;
    }
    ctx->pc = 0x240454u;
    {
        const bool branch_taken_0x240454 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x240454) {
            ctx->pc = 0x24048Cu;
            goto label_24048c;
        }
    }
    ctx->pc = 0x24045Cu;
label_24045c:
    // 0x24045c: 0x0  nop
    ctx->pc = 0x24045cu;
    // NOP
label_240460:
    // 0x240460: 0x29210009  slti        $at, $t1, 0x9
    ctx->pc = 0x240460u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)9) ? 1 : 0);
label_240464:
    // 0x240464: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_240468:
    if (ctx->pc == 0x240468u) {
        ctx->pc = 0x240468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240464u;
        // 0x240468: 0x120502d  daddu       $t2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24046Cu;
        goto label_24046c;
    }
    ctx->pc = 0x240464u;
    {
        const bool branch_taken_0x240464 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x240468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240464u;
        // 0x240468: 0x120502d  daddu       $t2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240464) {
            ctx->pc = 0x240480u;
            goto label_240480;
        }
    }
    ctx->pc = 0x24046Cu;
label_24046c:
    // 0x24046c: 0x1ebc821  addu        $t9, $t7, $t3
    ctx->pc = 0x24046cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 11)));
label_240470:
    // 0x240470: 0x8f2e0374  lw          $t6, 0x374($t9)
    ctx->pc = 0x240470u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 884)));
label_240474:
    // 0x240474: 0xaf2e037c  sw          $t6, 0x37C($t9)
    ctx->pc = 0x240474u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 892), GPR_U32(ctx, 14));
label_240478:
    // 0x240478: 0x8f2e0370  lw          $t6, 0x370($t9)
    ctx->pc = 0x240478u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 880)));
label_24047c:
    // 0x24047c: 0xaf2e0378  sw          $t6, 0x378($t9)
    ctx->pc = 0x24047cu;
    WRITE32(ADD32(GPR_U32(ctx, 25), 888), GPR_U32(ctx, 14));
label_240480:
    // 0x240480: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x240480u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_240484:
    // 0x240484: 0x521ffe6  bgez        $t1, . + 4 + (-0x1A << 2)
label_240488:
    if (ctx->pc == 0x240488u) {
        ctx->pc = 0x240488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240484u;
        // 0x240488: 0x256bfff8  addiu       $t3, $t3, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24048Cu;
        goto label_24048c;
    }
    ctx->pc = 0x240484u;
    {
        const bool branch_taken_0x240484 = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x240488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240484u;
        // 0x240488: 0x256bfff8  addiu       $t3, $t3, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240484) {
            ctx->pc = 0x240420u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_240420;
        }
    }
    ctx->pc = 0x24048Cu;
label_24048c:
    // 0x24048c: 0x0  nop
    ctx->pc = 0x24048cu;
    // NOP
label_240490:
    // 0x240490: 0x2941000a  slti        $at, $t2, 0xA
    ctx->pc = 0x240490u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)10) ? 1 : 0);
label_240494:
    // 0x240494: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_240498:
    if (ctx->pc == 0x240498u) {
        ctx->pc = 0x240498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240494u;
        // 0x240498: 0xa48c0  sll         $t1, $t2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24049Cu;
        goto label_24049c;
    }
    ctx->pc = 0x240494u;
    {
        const bool branch_taken_0x240494 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x240498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240494u;
        // 0x240498: 0xa48c0  sll         $t1, $t2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240494) {
            ctx->pc = 0x2404B8u;
            goto label_2404b8;
        }
    }
    ctx->pc = 0x24049Cu;
label_24049c:
    // 0x24049c: 0x6c2021  addu        $a0, $v1, $t4
    ctx->pc = 0x24049cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
label_2404a0:
    // 0x2404a0: 0x8c8a0000  lw          $t2, 0x0($a0)
    ctx->pc = 0x2404a0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2404a4:
    // 0x2404a4: 0xcd2021  addu        $a0, $a2, $t5
    ctx->pc = 0x2404a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
label_2404a8:
    // 0x2404a8: 0x24840000  addiu       $a0, $a0, 0x0
    ctx->pc = 0x2404a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
label_2404ac:
    // 0x2404ac: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x2404acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
label_2404b0:
    // 0x2404b0: 0xac8a0374  sw          $t2, 0x374($a0)
    ctx->pc = 0x2404b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 884), GPR_U32(ctx, 10));
label_2404b4:
    // 0x2404b4: 0xac850370  sw          $a1, 0x370($a0)
    ctx->pc = 0x2404b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 880), GPR_U32(ctx, 5));
label_2404b8:
    // 0x2404b8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2404b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_2404bc:
    // 0x2404bc: 0x29040003  slti        $a0, $t0, 0x3
    ctx->pc = 0x2404bcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)3) ? 1 : 0);
label_2404c0:
    // 0x2404c0: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x2404c0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
label_2404c4:
    // 0x2404c4: 0x1480ffcc  bnez        $a0, . + 4 + (-0x34 << 2)
label_2404c8:
    if (ctx->pc == 0x2404C8u) {
        ctx->pc = 0x2404C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2404C4u;
        // 0x2404c8: 0x25ad0730  addiu       $t5, $t5, 0x730 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2404CCu;
        goto label_2404cc;
    }
    ctx->pc = 0x2404C4u;
    {
        const bool branch_taken_0x2404c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2404C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2404C4u;
        // 0x2404c8: 0x25ad0730  addiu       $t5, $t5, 0x730 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1840));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2404c4) {
            ctx->pc = 0x2403F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2403f8;
        }
    }
    ctx->pc = 0x2404CCu;
label_2404cc:
    // 0x2404cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2404ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2404d0:
    // 0x2404d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2404d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2404d4:
    // 0x2404d4: 0x3e00008  jr          $ra
label_2404d8:
    if (ctx->pc == 0x2404D8u) {
        ctx->pc = 0x2404D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2404D4u;
        // 0x2404d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2404DCu;
        goto label_2404dc;
    }
    ctx->pc = 0x2404D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2404D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2404D4u;
        // 0x2404d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2404D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2404DCu;
label_2404dc:
    // 0x2404dc: 0x0  nop
    ctx->pc = 0x2404dcu;
    // NOP
label_2404e0:
    // 0x2404e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2404e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2404e4:
    // 0x2404e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2404e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2404e8:
    // 0x2404e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2404e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2404ec:
    // 0x2404ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2404ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2404f0:
    // 0x2404f0: 0xc055e04  jal         func_157810
label_2404f4:
    if (ctx->pc == 0x2404F4u) {
        ctx->pc = 0x2404F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2404F0u;
        // 0x2404f4: 0x2404001a  addiu       $a0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2404F8u;
        goto label_2404f8;
    }
    ctx->pc = 0x2404F0u;
    SET_GPR_U32(ctx, 31, 0x2404F8u);
    ctx->pc = 0x2404F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2404F0u;
    // 0x2404f4: 0x2404001a  addiu       $a0, $zero, 0x1A (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157810u, 0x2404F0u, 0x2404F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2404F8u;
label_2404f8:
    // 0x2404f8: 0xc055e04  jal         func_157810
label_2404fc:
    if (ctx->pc == 0x2404FCu) {
        ctx->pc = 0x2404FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2404F8u;
        // 0x2404fc: 0x2404001b  addiu       $a0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240500u;
        goto label_240500;
    }
    ctx->pc = 0x2404F8u;
    SET_GPR_U32(ctx, 31, 0x240500u);
    ctx->pc = 0x2404FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2404F8u;
    // 0x2404fc: 0x2404001b  addiu       $a0, $zero, 0x1B (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157810u, 0x2404F8u, 0x240500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240500u;
label_240500:
    // 0x240500: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x240500u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_240504:
    // 0x240504: 0x24633420  addiu       $v1, $v1, 0x3420
    ctx->pc = 0x240504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13344));
label_240508:
    // 0x240508: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x240508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_24050c:
    // 0x24050c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x24050cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_240510:
    // 0x240510: 0x2c610007  sltiu       $at, $v1, 0x7
    ctx->pc = 0x240510u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_240514:
    // 0x240514: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
label_240518:
    if (ctx->pc == 0x240518u) {
        ctx->pc = 0x240518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240514u;
        // 0x240518: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24051Cu;
        goto label_24051c;
    }
    ctx->pc = 0x240514u;
    {
        const bool branch_taken_0x240514 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x240518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240514u;
        // 0x240518: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240514) {
            ctx->pc = 0x24056Cu;
            goto label_24056c;
        }
    }
    ctx->pc = 0x24051Cu;
label_24051c:
    // 0x24051c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24051cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_240520:
    // 0x240520: 0x2484ea60  addiu       $a0, $a0, -0x15A0
    ctx->pc = 0x240520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
label_240524:
    // 0x240524: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x240524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_240528:
    // 0x240528: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x240528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_24052c:
    // 0x24052c: 0x600008  jr          $v1
label_240530:
    if (ctx->pc == 0x240530u) {
        ctx->pc = 0x240534u;
        goto label_240534;
    }
    ctx->pc = 0x24052Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x240534u: goto label_240534;
            case 0x240544u: goto label_240544;
            case 0x240554u: goto label_240554;
            case 0x240564u: goto label_240564;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24052Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x240534u;
label_240534:
    // 0x240534: 0xc055de8  jal         func_1577A0
label_240538:
    if (ctx->pc == 0x240538u) {
        ctx->pc = 0x240538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240534u;
        // 0x240538: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24053Cu;
        goto label_24053c;
    }
    ctx->pc = 0x240534u;
    SET_GPR_U32(ctx, 31, 0x24053Cu);
    ctx->pc = 0x240538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240534u;
    // 0x240538: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1577A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1577A0u, 0x240534u, 0x24053Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24053Cu;
label_24053c:
    // 0x24053c: 0x1000000c  b           . + 4 + (0xC << 2)
label_240540:
    if (ctx->pc == 0x240540u) {
        ctx->pc = 0x240540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24053Cu;
        // 0x240540: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240544u;
        goto label_240544;
    }
    ctx->pc = 0x24053Cu;
    {
        const bool branch_taken_0x24053c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24053Cu;
        // 0x240540: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24053c) {
            ctx->pc = 0x240570u;
            goto label_240570;
        }
    }
    ctx->pc = 0x240544u;
label_240544:
    // 0x240544: 0xc055de8  jal         func_1577A0
label_240548:
    if (ctx->pc == 0x240548u) {
        ctx->pc = 0x240548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240544u;
        // 0x240548: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24054Cu;
        goto label_24054c;
    }
    ctx->pc = 0x240544u;
    SET_GPR_U32(ctx, 31, 0x24054Cu);
    ctx->pc = 0x240548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240544u;
    // 0x240548: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1577A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1577A0u, 0x240544u, 0x24054Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24054Cu;
label_24054c:
    // 0x24054c: 0x10000007  b           . + 4 + (0x7 << 2)
label_240550:
    if (ctx->pc == 0x240550u) {
        ctx->pc = 0x240554u;
        goto label_240554;
    }
    ctx->pc = 0x24054Cu;
    {
        const bool branch_taken_0x24054c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24054c) {
            ctx->pc = 0x24056Cu;
            goto label_24056c;
        }
    }
    ctx->pc = 0x240554u;
label_240554:
    // 0x240554: 0xc055de8  jal         func_1577A0
label_240558:
    if (ctx->pc == 0x240558u) {
        ctx->pc = 0x240558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240554u;
        // 0x240558: 0x24040017  addiu       $a0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24055Cu;
        goto label_24055c;
    }
    ctx->pc = 0x240554u;
    SET_GPR_U32(ctx, 31, 0x24055Cu);
    ctx->pc = 0x240558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240554u;
    // 0x240558: 0x24040017  addiu       $a0, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1577A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1577A0u, 0x240554u, 0x24055Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24055Cu;
label_24055c:
    // 0x24055c: 0x10000003  b           . + 4 + (0x3 << 2)
label_240560:
    if (ctx->pc == 0x240560u) {
        ctx->pc = 0x240564u;
        goto label_240564;
    }
    ctx->pc = 0x24055Cu;
    {
        const bool branch_taken_0x24055c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24055c) {
            ctx->pc = 0x24056Cu;
            goto label_24056c;
        }
    }
    ctx->pc = 0x240564u;
label_240564:
    // 0x240564: 0xc055de8  jal         func_1577A0
label_240568:
    if (ctx->pc == 0x240568u) {
        ctx->pc = 0x240568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240564u;
        // 0x240568: 0x24040033  addiu       $a0, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24056Cu;
        goto label_24056c;
    }
    ctx->pc = 0x240564u;
    SET_GPR_U32(ctx, 31, 0x24056Cu);
    ctx->pc = 0x240568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240564u;
    // 0x240568: 0x24040033  addiu       $a0, $zero, 0x33 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1577A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1577A0u, 0x240564u, 0x24056Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24056Cu;
label_24056c:
    // 0x24056c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24056cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_240570:
    // 0x240570: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x240570u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_240574:
    // 0x240574: 0x3e00008  jr          $ra
label_240578:
    if (ctx->pc == 0x240578u) {
        ctx->pc = 0x240578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240574u;
        // 0x240578: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24057Cu;
        goto label_24057c;
    }
    ctx->pc = 0x240574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240574u;
        // 0x240578: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24057Cu;
label_24057c:
    // 0x24057c: 0x0  nop
    ctx->pc = 0x24057cu;
    // NOP
label_240580:
    // 0x240580: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x240580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_240584:
    // 0x240584: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x240584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_240588:
    // 0x240588: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x240588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_24058c:
    // 0x24058c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x24058cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_240590:
    // 0x240590: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x240590u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_240594:
    // 0x240594: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x240594u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_240598:
    // 0x240598: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x240598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_24059c:
    // 0x24059c: 0x220082a  slt         $at, $s1, $zero
    ctx->pc = 0x24059cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_2405a0:
    // 0x2405a0: 0x1420001b  bnez        $at, . + 4 + (0x1B << 2)
label_2405a4:
    if (ctx->pc == 0x2405A4u) {
        ctx->pc = 0x2405A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2405A0u;
        // 0x2405a4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2405A8u;
        goto label_2405a8;
    }
    ctx->pc = 0x2405A0u;
    {
        const bool branch_taken_0x2405a0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2405A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2405A0u;
        // 0x2405a4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2405a0) {
            ctx->pc = 0x240610u;
            goto label_240610;
        }
    }
    ctx->pc = 0x2405A8u;
label_2405a8:
    // 0x2405a8: 0xc056a20  jal         func_15A880
label_2405ac:
    if (ctx->pc == 0x2405ACu) {
        ctx->pc = 0x2405ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2405A8u;
        // 0x2405ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2405B0u;
        goto label_2405b0;
    }
    ctx->pc = 0x2405A8u;
    SET_GPR_U32(ctx, 31, 0x2405B0u);
    ctx->pc = 0x2405ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2405A8u;
    // 0x2405ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A880u, 0x2405A8u, 0x2405B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2405B0u;
label_2405b0:
    // 0x2405b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2405b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2405b4:
    // 0x2405b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2405b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2405b8:
    // 0x2405b8: 0x27a60048  addiu       $a2, $sp, 0x48
    ctx->pc = 0x2405b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_2405bc:
    // 0x2405bc: 0xc056a04  jal         func_15A810
label_2405c0:
    if (ctx->pc == 0x2405C0u) {
        ctx->pc = 0x2405C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2405BCu;
        // 0x2405c0: 0x27a7004c  addiu       $a3, $sp, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2405C4u;
        goto label_2405c4;
    }
    ctx->pc = 0x2405BCu;
    SET_GPR_U32(ctx, 31, 0x2405C4u);
    ctx->pc = 0x2405C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2405BCu;
    // 0x2405c0: 0x27a7004c  addiu       $a3, $sp, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A810u, 0x2405BCu, 0x2405C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2405C4u;
label_2405c4:
    // 0x2405c4: 0xc057138  jal         func_15C4E0
label_2405c8:
    if (ctx->pc == 0x2405C8u) {
        ctx->pc = 0x2405C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2405C4u;
        // 0x2405c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2405CCu;
        goto label_2405cc;
    }
    ctx->pc = 0x2405C4u;
    SET_GPR_U32(ctx, 31, 0x2405CCu);
    ctx->pc = 0x2405C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2405C4u;
    // 0x2405c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C4E0u, 0x2405C4u, 0x2405CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2405CCu;
label_2405cc:
    // 0x2405cc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2405ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2405d0:
    // 0x2405d0: 0x24060011  addiu       $a2, $zero, 0x11
    ctx->pc = 0x2405d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_2405d4:
    // 0x2405d4: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x2405d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_2405d8:
    // 0x2405d8: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2405d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2405dc:
    // 0x2405dc: 0xc056fc8  jal         func_15BF20
label_2405e0:
    if (ctx->pc == 0x2405E0u) {
        ctx->pc = 0x2405E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2405DCu;
        // 0x2405e0: 0x62300a  movz        $a2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2405E4u;
        goto label_2405e4;
    }
    ctx->pc = 0x2405DCu;
    SET_GPR_U32(ctx, 31, 0x2405E4u);
    ctx->pc = 0x2405E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2405DCu;
    // 0x2405e0: 0x62300a  movz        $a2, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BF20u, 0x2405DCu, 0x2405E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2405E4u;
label_2405e4:
    // 0x2405e4: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x2405e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
label_2405e8:
    // 0x2405e8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2405e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2405ec:
    // 0x2405ec: 0x2463c990  addiu       $v1, $v1, -0x3670
    ctx->pc = 0x2405ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953360));
label_2405f0:
    // 0x2405f0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2405f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2405f4:
    // 0x2405f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2405f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2405f8:
    // 0x2405f8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2405f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2405fc:
    // 0x2405fc: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x2405fcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_240600:
    // 0x240600: 0xa0244e60  sb          $a0, 0x4E60($at)
    ctx->pc = 0x240600u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 20064), (uint8_t)GPR_U32(ctx, 4));
label_240604:
    // 0x240604: 0x230082a  slt         $at, $s1, $s0
    ctx->pc = 0x240604u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_240608:
    // 0x240608: 0x1020ffe7  beqz        $at, . + 4 + (-0x19 << 2)
label_24060c:
    if (ctx->pc == 0x24060Cu) {
        ctx->pc = 0x240610u;
        goto label_240610;
    }
    ctx->pc = 0x240608u;
    {
        const bool branch_taken_0x240608 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x240608) {
            ctx->pc = 0x2405A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2405a8;
        }
    }
    ctx->pc = 0x240610u;
label_240610:
    // 0x240610: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x240610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_240614:
    // 0x240614: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x240614u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_240618:
    // 0x240618: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x240618u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_24061c:
    // 0x24061c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24061cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_240620:
    // 0x240620: 0x3e00008  jr          $ra
label_240624:
    if (ctx->pc == 0x240624u) {
        ctx->pc = 0x240624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240620u;
        // 0x240624: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240628u;
        goto label_240628;
    }
    ctx->pc = 0x240620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240620u;
        // 0x240624: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240628u;
label_240628:
    // 0x240628: 0x0  nop
    ctx->pc = 0x240628u;
    // NOP
label_24062c:
    // 0x24062c: 0x0  nop
    ctx->pc = 0x24062cu;
    // NOP
label_240630:
    // 0x240630: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x240630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_240634:
    // 0x240634: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x240634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
label_240638:
    // 0x240638: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x240638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_24063c:
    // 0x24063c: 0x24421855  addiu       $v0, $v0, 0x1855
    ctx->pc = 0x24063cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6229));
label_240640:
    // 0x240640: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x240640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_240644:
    // 0x240644: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x240644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_240648:
    // 0x240648: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x240648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_24064c:
    // 0x24064c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24064cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_240650:
    // 0x240650: 0xc056a20  jal         func_15A880
label_240654:
    if (ctx->pc == 0x240654u) {
        ctx->pc = 0x240654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240650u;
        // 0x240654: 0xa0430000  sb          $v1, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240658u;
        goto label_240658;
    }
    ctx->pc = 0x240650u;
    SET_GPR_U32(ctx, 31, 0x240658u);
    ctx->pc = 0x240654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240650u;
    // 0x240654: 0xa0430000  sb          $v1, 0x0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A880u, 0x240650u, 0x240658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240658u;
label_240658:
    // 0x240658: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x240658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24065c:
    // 0x24065c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24065cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_240660:
    // 0x240660: 0x27a60028  addiu       $a2, $sp, 0x28
    ctx->pc = 0x240660u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
label_240664:
    // 0x240664: 0xc056a04  jal         func_15A810
label_240668:
    if (ctx->pc == 0x240668u) {
        ctx->pc = 0x240668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240664u;
        // 0x240668: 0x27a7002c  addiu       $a3, $sp, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24066Cu;
        goto label_24066c;
    }
    ctx->pc = 0x240664u;
    SET_GPR_U32(ctx, 31, 0x24066Cu);
    ctx->pc = 0x240668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240664u;
    // 0x240668: 0x27a7002c  addiu       $a3, $sp, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A810u, 0x240664u, 0x24066Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24066Cu;
label_24066c:
    // 0x24066c: 0xc057138  jal         func_15C4E0
label_240670:
    if (ctx->pc == 0x240670u) {
        ctx->pc = 0x240670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24066Cu;
        // 0x240670: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240674u;
        goto label_240674;
    }
    ctx->pc = 0x24066Cu;
    SET_GPR_U32(ctx, 31, 0x240674u);
    ctx->pc = 0x240670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24066Cu;
    // 0x240670: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C4E0u, 0x24066Cu, 0x240674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240674u;
label_240674:
    // 0x240674: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x240674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_240678:
    // 0x240678: 0x24060011  addiu       $a2, $zero, 0x11
    ctx->pc = 0x240678u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_24067c:
    // 0x24067c: 0x8fa5002c  lw          $a1, 0x2C($sp)
    ctx->pc = 0x24067cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_240680:
    // 0x240680: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x240680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_240684:
    // 0x240684: 0xc056fc8  jal         func_15BF20
label_240688:
    if (ctx->pc == 0x240688u) {
        ctx->pc = 0x240688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240684u;
        // 0x240688: 0x62300a  movz        $a2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24068Cu;
        goto label_24068c;
    }
    ctx->pc = 0x240684u;
    SET_GPR_U32(ctx, 31, 0x24068Cu);
    ctx->pc = 0x240688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240684u;
    // 0x240688: 0x62300a  movz        $a2, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BF20u, 0x240684u, 0x24068Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24068Cu;
label_24068c:
    // 0x24068c: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x24068cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
label_240690:
    // 0x240690: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x240690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_240694:
    // 0x240694: 0x246317f0  addiu       $v1, $v1, 0x17F0
    ctx->pc = 0x240694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6128));
label_240698:
    // 0x240698: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x240698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_24069c:
    // 0x24069c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x24069cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_2406a0:
    // 0x2406a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2406a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2406a4:
    // 0x2406a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2406a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2406a8:
    // 0x2406a8: 0x3e00008  jr          $ra
label_2406ac:
    if (ctx->pc == 0x2406ACu) {
        ctx->pc = 0x2406ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2406A8u;
        // 0x2406ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2406B0u;
        goto label_2406b0;
    }
    ctx->pc = 0x2406A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2406ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2406A8u;
        // 0x2406ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2406A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2406B0u;
label_2406b0:
    // 0x2406b0: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x2406b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
label_2406b4:
    // 0x2406b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2406b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2406b8:
    // 0x2406b8: 0x246317f0  addiu       $v1, $v1, 0x17F0
    ctx->pc = 0x2406b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6128));
label_2406bc:
    // 0x2406bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2406bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2406c0:
    // 0x2406c0: 0x3e00008  jr          $ra
label_2406c4:
    if (ctx->pc == 0x2406C4u) {
        ctx->pc = 0x2406C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2406C0u;
        // 0x2406c4: 0xa0650000  sb          $a1, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2406C8u;
        goto label_2406c8;
    }
    ctx->pc = 0x2406C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2406C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2406C0u;
        // 0x2406c4: 0xa0650000  sb          $a1, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2406C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2406C8u;
label_2406c8:
    // 0x2406c8: 0x0  nop
    ctx->pc = 0x2406c8u;
    // NOP
label_2406cc:
    // 0x2406cc: 0x0  nop
    ctx->pc = 0x2406ccu;
    // NOP
label_2406d0:
    // 0x2406d0: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x2406d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
label_2406d4:
    // 0x2406d4: 0x246317f0  addiu       $v1, $v1, 0x17F0
    ctx->pc = 0x2406d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6128));
label_2406d8:
    // 0x2406d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2406d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2406dc:
    // 0x2406dc: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x2406dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2406e0:
    // 0x2406e0: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_2406e4:
    if (ctx->pc == 0x2406E4u) {
        ctx->pc = 0x2406E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2406E0u;
        // 0x2406e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2406E8u;
        goto label_2406e8;
    }
    ctx->pc = 0x2406E0u;
    {
        const bool branch_taken_0x2406e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2406E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2406E0u;
        // 0x2406e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2406e0) {
            ctx->pc = 0x2406ECu;
            goto label_2406ec;
        }
    }
    ctx->pc = 0x2406E8u;
label_2406e8:
    // 0x2406e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2406e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2406ec:
    // 0x2406ec: 0x3e00008  jr          $ra
label_2406f0:
    if (ctx->pc == 0x2406F0u) {
        ctx->pc = 0x2406F4u;
        goto label_2406f4;
    }
    ctx->pc = 0x2406ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2406ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2406F4u;
label_2406f4:
    // 0x2406f4: 0x0  nop
    ctx->pc = 0x2406f4u;
    // NOP
label_2406f8:
    // 0x2406f8: 0x0  nop
    ctx->pc = 0x2406f8u;
    // NOP
label_2406fc:
    // 0x2406fc: 0x0  nop
    ctx->pc = 0x2406fcu;
    // NOP
label_240700:
    // 0x240700: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x240700u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
label_240704:
    // 0x240704: 0x24631855  addiu       $v1, $v1, 0x1855
    ctx->pc = 0x240704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6229));
label_240708:
    // 0x240708: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x240708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_24070c:
    // 0x24070c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x24070cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_240710:
    // 0x240710: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_240714:
    if (ctx->pc == 0x240714u) {
        ctx->pc = 0x240714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240710u;
        // 0x240714: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240718u;
        goto label_240718;
    }
    ctx->pc = 0x240710u;
    {
        const bool branch_taken_0x240710 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x240714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240710u;
        // 0x240714: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240710) {
            ctx->pc = 0x24071Cu;
            goto label_24071c;
        }
    }
    ctx->pc = 0x240718u;
label_240718:
    // 0x240718: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x240718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24071c:
    // 0x24071c: 0x3e00008  jr          $ra
label_240720:
    if (ctx->pc == 0x240720u) {
        ctx->pc = 0x240724u;
        goto label_240724;
    }
    ctx->pc = 0x24071Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24071Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240724u;
label_240724:
    // 0x240724: 0x0  nop
    ctx->pc = 0x240724u;
    // NOP
label_240728:
    // 0x240728: 0x0  nop
    ctx->pc = 0x240728u;
    // NOP
label_24072c:
    // 0x24072c: 0x0  nop
    ctx->pc = 0x24072cu;
    // NOP
label_240730:
    // 0x240730: 0x938392f4  lbu         $v1, -0x6D0C($gp)
    ctx->pc = 0x240730u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939380)));
label_240734:
    // 0x240734: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x240734u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_240738:
    // 0x240738: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x240738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
label_24073c:
    // 0x24073c: 0xa38392f4  sb          $v1, -0x6D0C($gp)
    ctx->pc = 0x24073cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939380), (uint8_t)GPR_U32(ctx, 3));
label_240740:
    // 0x240740: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x240740u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
label_240744:
    // 0x240744: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x240744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_240748:
    // 0x240748: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x240748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24074c:
    // 0x24074c: 0x2484c990  addiu       $a0, $a0, -0x3670
    ctx->pc = 0x24074cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953360));
label_240750:
    // 0x240750: 0x34684e60  ori         $t0, $v1, 0x4E60
    ctx->pc = 0x240750u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20064);
label_240754:
    // 0x240754: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x240754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_240758:
    // 0x240758: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x240758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_24075c:
    // 0x24075c: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x24075cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_240760:
    // 0x240760: 0x683821  addu        $a3, $v1, $t0
    ctx->pc = 0x240760u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_240764:
    // 0x240764: 0xa0e50000  sb          $a1, 0x0($a3)
    ctx->pc = 0x240764u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 5));
label_240768:
    // 0x240768: 0x28c3005d  slti        $v1, $a2, 0x5D
    ctx->pc = 0x240768u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)93) ? 1 : 0);
label_24076c:
    // 0x24076c: 0xa0e50001  sb          $a1, 0x1($a3)
    ctx->pc = 0x24076cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 5));
label_240770:
    // 0x240770: 0xa0e50002  sb          $a1, 0x2($a3)
    ctx->pc = 0x240770u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 5));
label_240774:
    // 0x240774: 0xa0e50003  sb          $a1, 0x3($a3)
    ctx->pc = 0x240774u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 5));
label_240778:
    // 0x240778: 0xa0e50004  sb          $a1, 0x4($a3)
    ctx->pc = 0x240778u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4), (uint8_t)GPR_U32(ctx, 5));
label_24077c:
    // 0x24077c: 0xa0e50005  sb          $a1, 0x5($a3)
    ctx->pc = 0x24077cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 5), (uint8_t)GPR_U32(ctx, 5));
label_240780:
    // 0x240780: 0xa0e50006  sb          $a1, 0x6($a3)
    ctx->pc = 0x240780u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 6), (uint8_t)GPR_U32(ctx, 5));
label_240784:
    // 0x240784: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_240788:
    if (ctx->pc == 0x240788u) {
        ctx->pc = 0x240788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240784u;
        // 0x240788: 0xa0e50007  sb          $a1, 0x7($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 7), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24078Cu;
        goto label_24078c;
    }
    ctx->pc = 0x240784u;
    {
        const bool branch_taken_0x240784 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x240788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240784u;
        // 0x240788: 0xa0e50007  sb          $a1, 0x7($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 7), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240784) {
            ctx->pc = 0x240754u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_240754;
        }
    }
    ctx->pc = 0x24078Cu;
label_24078c:
    // 0x24078c: 0x28c10065  slti        $at, $a2, 0x65
    ctx->pc = 0x24078cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)101) ? 1 : 0);
label_240790:
    // 0x240790: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_240794:
    if (ctx->pc == 0x240794u) {
        ctx->pc = 0x240794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240790u;
        // 0x240794: 0x3c04002a  lui         $a0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240798u;
        goto label_240798;
    }
    ctx->pc = 0x240790u;
    {
        const bool branch_taken_0x240790 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x240794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240790u;
        // 0x240794: 0x3c04002a  lui         $a0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240790) {
            ctx->pc = 0x2407C0u;
            goto label_2407c0;
        }
    }
    ctx->pc = 0x240798u;
label_240798:
    // 0x240798: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x240798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24079c:
    // 0x24079c: 0x2484c990  addiu       $a0, $a0, -0x3670
    ctx->pc = 0x24079cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953360));
label_2407a0:
    // 0x2407a0: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x2407a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_2407a4:
    // 0x2407a4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2407a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2407a8:
    // 0x2407a8: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x2407a8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_2407ac:
    // 0x2407ac: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2407acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_2407b0:
    // 0x2407b0: 0x28c30065  slti        $v1, $a2, 0x65
    ctx->pc = 0x2407b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)101) ? 1 : 0);
label_2407b4:
    // 0x2407b4: 0xa0254e60  sb          $a1, 0x4E60($at)
    ctx->pc = 0x2407b4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 20064), (uint8_t)GPR_U32(ctx, 5));
label_2407b8:
    // 0x2407b8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_2407bc:
    if (ctx->pc == 0x2407BCu) {
        ctx->pc = 0x2407C0u;
        goto label_2407c0;
    }
    ctx->pc = 0x2407B8u;
    {
        const bool branch_taken_0x2407b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2407b8) {
            ctx->pc = 0x2407A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2407a0;
        }
    }
    ctx->pc = 0x2407C0u;
label_2407c0:
    // 0x2407c0: 0x3e00008  jr          $ra
label_2407c4:
    if (ctx->pc == 0x2407C4u) {
        ctx->pc = 0x2407C8u;
        goto label_2407c8;
    }
    ctx->pc = 0x2407C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2407C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2407C8u;
label_2407c8:
    // 0x2407c8: 0x0  nop
    ctx->pc = 0x2407c8u;
    // NOP
label_2407cc:
    // 0x2407cc: 0x0  nop
    ctx->pc = 0x2407ccu;
    // NOP
label_2407d0:
    // 0x2407d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2407d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2407d4:
    // 0x2407d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2407d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2407d8:
    // 0x2407d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2407d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2407dc:
    // 0x2407dc: 0x938292f4  lbu         $v0, -0x6D0C($gp)
    ctx->pc = 0x2407dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939380)));
label_2407e0:
    // 0x2407e0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2407e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2407e4:
    // 0x2407e4: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x2407e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_2407e8:
    // 0x2407e8: 0xa38292f4  sb          $v0, -0x6D0C($gp)
    ctx->pc = 0x2407e8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939380), (uint8_t)GPR_U32(ctx, 2));
label_2407ec:
    // 0x2407ec: 0xc055de8  jal         func_1577A0
label_2407f0:
    if (ctx->pc == 0x2407F0u) {
        ctx->pc = 0x2407F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2407ECu;
        // 0x2407f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2407F4u;
        goto label_2407f4;
    }
    ctx->pc = 0x2407ECu;
    SET_GPR_U32(ctx, 31, 0x2407F4u);
    ctx->pc = 0x2407F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2407ECu;
    // 0x2407f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1577A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1577A0u, 0x2407ECu, 0x2407F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2407F4u;
label_2407f4:
    // 0x2407f4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2407f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2407f8:
    // 0x2407f8: 0x2a030018  slti        $v1, $s0, 0x18
    ctx->pc = 0x2407f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)24) ? 1 : 0);
label_2407fc:
    // 0x2407fc: 0x0  nop
    ctx->pc = 0x2407fcu;
    // NOP
label_240800:
    // 0x240800: 0x0  nop
    ctx->pc = 0x240800u;
    // NOP
label_240804:
    // 0x240804: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_240808:
    if (ctx->pc == 0x240808u) {
        ctx->pc = 0x24080Cu;
        goto label_24080c;
    }
    ctx->pc = 0x240804u;
    {
        const bool branch_taken_0x240804 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x240804) {
            ctx->pc = 0x2407ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2407ec;
        }
    }
    ctx->pc = 0x24080Cu;
label_24080c:
    // 0x24080c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24080cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_240810:
    // 0x240810: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x240810u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_240814:
    // 0x240814: 0x3e00008  jr          $ra
label_240818:
    if (ctx->pc == 0x240818u) {
        ctx->pc = 0x240818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240814u;
        // 0x240818: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24081Cu;
        goto label_24081c;
    }
    ctx->pc = 0x240814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240814u;
        // 0x240818: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24081Cu;
label_24081c:
    // 0x24081c: 0x0  nop
    ctx->pc = 0x24081cu;
    // NOP
label_240820:
    // 0x240820: 0x938492f4  lbu         $a0, -0x6D0C($gp)
    ctx->pc = 0x240820u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294939380)));
label_240824:
    // 0x240824: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x240824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_240828:
    // 0x240828: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x240828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_24082c:
    // 0x24082c: 0xa423187e  sh          $v1, 0x187E($at)
    ctx->pc = 0x24082cu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 6270), (uint16_t)GPR_U32(ctx, 3));
label_240830:
    // 0x240830: 0x34830020  ori         $v1, $a0, 0x20
    ctx->pc = 0x240830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32);
label_240834:
    // 0x240834: 0x3e00008  jr          $ra
label_240838:
    if (ctx->pc == 0x240838u) {
        ctx->pc = 0x240838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240834u;
        // 0x240838: 0xa38392f4  sb          $v1, -0x6D0C($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294939380), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24083Cu;
        goto label_24083c;
    }
    ctx->pc = 0x240834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240834u;
        // 0x240838: 0xa38392f4  sb          $v1, -0x6D0C($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294939380), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24083Cu;
label_24083c:
    // 0x24083c: 0x0  nop
    ctx->pc = 0x24083cu;
    // NOP
    ctx->pc = 0x240840u;
    return;
}

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


void FUN_0014eba0_part481(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2391a0u: goto label_2391a0;
        case 0x2391a4u: goto label_2391a4;
        case 0x2391a8u: goto label_2391a8;
        case 0x2391acu: goto label_2391ac;
        case 0x2391b0u: goto label_2391b0;
        case 0x2391b4u: goto label_2391b4;
        case 0x2391b8u: goto label_2391b8;
        case 0x2391bcu: goto label_2391bc;
        case 0x2391c0u: goto label_2391c0;
        case 0x2391c4u: goto label_2391c4;
        case 0x2391c8u: goto label_2391c8;
        case 0x2391ccu: goto label_2391cc;
        case 0x2391d0u: goto label_2391d0;
        case 0x2391d4u: goto label_2391d4;
        case 0x2391d8u: goto label_2391d8;
        case 0x2391dcu: goto label_2391dc;
        case 0x2391e0u: goto label_2391e0;
        case 0x2391e4u: goto label_2391e4;
        case 0x2391e8u: goto label_2391e8;
        case 0x2391ecu: goto label_2391ec;
        case 0x2391f0u: goto label_2391f0;
        case 0x2391f4u: goto label_2391f4;
        case 0x2391f8u: goto label_2391f8;
        case 0x2391fcu: goto label_2391fc;
        case 0x239200u: goto label_239200;
        case 0x239204u: goto label_239204;
        case 0x239208u: goto label_239208;
        case 0x23920cu: goto label_23920c;
        case 0x239210u: goto label_239210;
        case 0x239214u: goto label_239214;
        case 0x239218u: goto label_239218;
        case 0x23921cu: goto label_23921c;
        case 0x239220u: goto label_239220;
        case 0x239224u: goto label_239224;
        case 0x239228u: goto label_239228;
        case 0x23922cu: goto label_23922c;
        case 0x239230u: goto label_239230;
        case 0x239234u: goto label_239234;
        case 0x239238u: goto label_239238;
        case 0x23923cu: goto label_23923c;
        case 0x239240u: goto label_239240;
        case 0x239244u: goto label_239244;
        case 0x239248u: goto label_239248;
        case 0x23924cu: goto label_23924c;
        case 0x239250u: goto label_239250;
        case 0x239254u: goto label_239254;
        case 0x239258u: goto label_239258;
        case 0x23925cu: goto label_23925c;
        case 0x239260u: goto label_239260;
        case 0x239264u: goto label_239264;
        case 0x239268u: goto label_239268;
        case 0x23926cu: goto label_23926c;
        case 0x239270u: goto label_239270;
        case 0x239274u: goto label_239274;
        case 0x239278u: goto label_239278;
        case 0x23927cu: goto label_23927c;
        case 0x239280u: goto label_239280;
        case 0x239284u: goto label_239284;
        case 0x239288u: goto label_239288;
        case 0x23928cu: goto label_23928c;
        case 0x239290u: goto label_239290;
        case 0x239294u: goto label_239294;
        case 0x239298u: goto label_239298;
        case 0x23929cu: goto label_23929c;
        case 0x2392a0u: goto label_2392a0;
        case 0x2392a4u: goto label_2392a4;
        case 0x2392a8u: goto label_2392a8;
        case 0x2392acu: goto label_2392ac;
        case 0x2392b0u: goto label_2392b0;
        case 0x2392b4u: goto label_2392b4;
        case 0x2392b8u: goto label_2392b8;
        case 0x2392bcu: goto label_2392bc;
        case 0x2392c0u: goto label_2392c0;
        case 0x2392c4u: goto label_2392c4;
        case 0x2392c8u: goto label_2392c8;
        case 0x2392ccu: goto label_2392cc;
        case 0x2392d0u: goto label_2392d0;
        case 0x2392d4u: goto label_2392d4;
        case 0x2392d8u: goto label_2392d8;
        case 0x2392dcu: goto label_2392dc;
        case 0x2392e0u: goto label_2392e0;
        case 0x2392e4u: goto label_2392e4;
        case 0x2392e8u: goto label_2392e8;
        case 0x2392ecu: goto label_2392ec;
        case 0x2392f0u: goto label_2392f0;
        case 0x2392f4u: goto label_2392f4;
        case 0x2392f8u: goto label_2392f8;
        case 0x2392fcu: goto label_2392fc;
        case 0x239300u: goto label_239300;
        case 0x239304u: goto label_239304;
        case 0x239308u: goto label_239308;
        case 0x23930cu: goto label_23930c;
        case 0x239310u: goto label_239310;
        case 0x239314u: goto label_239314;
        case 0x239318u: goto label_239318;
        case 0x23931cu: goto label_23931c;
        case 0x239320u: goto label_239320;
        case 0x239324u: goto label_239324;
        case 0x239328u: goto label_239328;
        case 0x23932cu: goto label_23932c;
        case 0x239330u: goto label_239330;
        case 0x239334u: goto label_239334;
        case 0x239338u: goto label_239338;
        case 0x23933cu: goto label_23933c;
        case 0x239340u: goto label_239340;
        case 0x239344u: goto label_239344;
        case 0x239348u: goto label_239348;
        case 0x23934cu: goto label_23934c;
        case 0x239350u: goto label_239350;
        case 0x239354u: goto label_239354;
        case 0x239358u: goto label_239358;
        case 0x23935cu: goto label_23935c;
        case 0x239360u: goto label_239360;
        case 0x239364u: goto label_239364;
        case 0x239368u: goto label_239368;
        case 0x23936cu: goto label_23936c;
        case 0x239370u: goto label_239370;
        case 0x239374u: goto label_239374;
        case 0x239378u: goto label_239378;
        case 0x23937cu: goto label_23937c;
        case 0x239380u: goto label_239380;
        case 0x239384u: goto label_239384;
        case 0x239388u: goto label_239388;
        case 0x23938cu: goto label_23938c;
        case 0x239390u: goto label_239390;
        case 0x239394u: goto label_239394;
        case 0x239398u: goto label_239398;
        case 0x23939cu: goto label_23939c;
        case 0x2393a0u: goto label_2393a0;
        case 0x2393a4u: goto label_2393a4;
        case 0x2393a8u: goto label_2393a8;
        case 0x2393acu: goto label_2393ac;
        case 0x2393b0u: goto label_2393b0;
        case 0x2393b4u: goto label_2393b4;
        case 0x2393b8u: goto label_2393b8;
        case 0x2393bcu: goto label_2393bc;
        case 0x2393c0u: goto label_2393c0;
        case 0x2393c4u: goto label_2393c4;
        case 0x2393c8u: goto label_2393c8;
        case 0x2393ccu: goto label_2393cc;
        case 0x2393d0u: goto label_2393d0;
        case 0x2393d4u: goto label_2393d4;
        case 0x2393d8u: goto label_2393d8;
        case 0x2393dcu: goto label_2393dc;
        case 0x2393e0u: goto label_2393e0;
        case 0x2393e4u: goto label_2393e4;
        case 0x2393e8u: goto label_2393e8;
        case 0x2393ecu: goto label_2393ec;
        case 0x2393f0u: goto label_2393f0;
        case 0x2393f4u: goto label_2393f4;
        case 0x2393f8u: goto label_2393f8;
        case 0x2393fcu: goto label_2393fc;
        case 0x239400u: goto label_239400;
        case 0x239404u: goto label_239404;
        case 0x239408u: goto label_239408;
        case 0x23940cu: goto label_23940c;
        case 0x239410u: goto label_239410;
        case 0x239414u: goto label_239414;
        case 0x239418u: goto label_239418;
        case 0x23941cu: goto label_23941c;
        case 0x239420u: goto label_239420;
        case 0x239424u: goto label_239424;
        case 0x239428u: goto label_239428;
        case 0x23942cu: goto label_23942c;
        case 0x239430u: goto label_239430;
        case 0x239434u: goto label_239434;
        case 0x239438u: goto label_239438;
        case 0x23943cu: goto label_23943c;
        case 0x239440u: goto label_239440;
        case 0x239444u: goto label_239444;
        case 0x239448u: goto label_239448;
        case 0x23944cu: goto label_23944c;
        case 0x239450u: goto label_239450;
        case 0x239454u: goto label_239454;
        case 0x239458u: goto label_239458;
        case 0x23945cu: goto label_23945c;
        case 0x239460u: goto label_239460;
        case 0x239464u: goto label_239464;
        case 0x239468u: goto label_239468;
        case 0x23946cu: goto label_23946c;
        case 0x239470u: goto label_239470;
        case 0x239474u: goto label_239474;
        case 0x239478u: goto label_239478;
        case 0x23947cu: goto label_23947c;
        case 0x239480u: goto label_239480;
        case 0x239484u: goto label_239484;
        case 0x239488u: goto label_239488;
        case 0x23948cu: goto label_23948c;
        case 0x239490u: goto label_239490;
        case 0x239494u: goto label_239494;
        case 0x239498u: goto label_239498;
        case 0x23949cu: goto label_23949c;
        case 0x2394a0u: goto label_2394a0;
        case 0x2394a4u: goto label_2394a4;
        case 0x2394a8u: goto label_2394a8;
        case 0x2394acu: goto label_2394ac;
        case 0x2394b0u: goto label_2394b0;
        case 0x2394b4u: goto label_2394b4;
        case 0x2394b8u: goto label_2394b8;
        case 0x2394bcu: goto label_2394bc;
        case 0x2394c0u: goto label_2394c0;
        case 0x2394c4u: goto label_2394c4;
        case 0x2394c8u: goto label_2394c8;
        case 0x2394ccu: goto label_2394cc;
        case 0x2394d0u: goto label_2394d0;
        case 0x2394d4u: goto label_2394d4;
        case 0x2394d8u: goto label_2394d8;
        case 0x2394dcu: goto label_2394dc;
        case 0x2394e0u: goto label_2394e0;
        case 0x2394e4u: goto label_2394e4;
        case 0x2394e8u: goto label_2394e8;
        case 0x2394ecu: goto label_2394ec;
        case 0x2394f0u: goto label_2394f0;
        case 0x2394f4u: goto label_2394f4;
        case 0x2394f8u: goto label_2394f8;
        case 0x2394fcu: goto label_2394fc;
        case 0x239500u: goto label_239500;
        case 0x239504u: goto label_239504;
        case 0x239508u: goto label_239508;
        case 0x23950cu: goto label_23950c;
        case 0x239510u: goto label_239510;
        case 0x239514u: goto label_239514;
        case 0x239518u: goto label_239518;
        case 0x23951cu: goto label_23951c;
        case 0x239520u: goto label_239520;
        case 0x239524u: goto label_239524;
        case 0x239528u: goto label_239528;
        case 0x23952cu: goto label_23952c;
        case 0x239530u: goto label_239530;
        case 0x239534u: goto label_239534;
        case 0x239538u: goto label_239538;
        case 0x23953cu: goto label_23953c;
        case 0x239540u: goto label_239540;
        case 0x239544u: goto label_239544;
        case 0x239548u: goto label_239548;
        case 0x23954cu: goto label_23954c;
        case 0x239550u: goto label_239550;
        case 0x239554u: goto label_239554;
        case 0x239558u: goto label_239558;
        case 0x23955cu: goto label_23955c;
        case 0x239560u: goto label_239560;
        case 0x239564u: goto label_239564;
        case 0x239568u: goto label_239568;
        case 0x23956cu: goto label_23956c;
        case 0x239570u: goto label_239570;
        case 0x239574u: goto label_239574;
        case 0x239578u: goto label_239578;
        case 0x23957cu: goto label_23957c;
        case 0x239580u: goto label_239580;
        case 0x239584u: goto label_239584;
        case 0x239588u: goto label_239588;
        case 0x23958cu: goto label_23958c;
        case 0x239590u: goto label_239590;
        case 0x239594u: goto label_239594;
        case 0x239598u: goto label_239598;
        case 0x23959cu: goto label_23959c;
        case 0x2395a0u: goto label_2395a0;
        case 0x2395a4u: goto label_2395a4;
        case 0x2395a8u: goto label_2395a8;
        case 0x2395acu: goto label_2395ac;
        case 0x2395b0u: goto label_2395b0;
        case 0x2395b4u: goto label_2395b4;
        case 0x2395b8u: goto label_2395b8;
        case 0x2395bcu: goto label_2395bc;
        case 0x2395c0u: goto label_2395c0;
        case 0x2395c4u: goto label_2395c4;
        case 0x2395c8u: goto label_2395c8;
        case 0x2395ccu: goto label_2395cc;
        case 0x2395d0u: goto label_2395d0;
        case 0x2395d4u: goto label_2395d4;
        case 0x2395d8u: goto label_2395d8;
        case 0x2395dcu: goto label_2395dc;
        case 0x2395e0u: goto label_2395e0;
        case 0x2395e4u: goto label_2395e4;
        case 0x2395e8u: goto label_2395e8;
        case 0x2395ecu: goto label_2395ec;
        case 0x2395f0u: goto label_2395f0;
        case 0x2395f4u: goto label_2395f4;
        case 0x2395f8u: goto label_2395f8;
        case 0x2395fcu: goto label_2395fc;
        case 0x239600u: goto label_239600;
        case 0x239604u: goto label_239604;
        case 0x239608u: goto label_239608;
        case 0x23960cu: goto label_23960c;
        case 0x239610u: goto label_239610;
        case 0x239614u: goto label_239614;
        case 0x239618u: goto label_239618;
        case 0x23961cu: goto label_23961c;
        case 0x239620u: goto label_239620;
        case 0x239624u: goto label_239624;
        case 0x239628u: goto label_239628;
        case 0x23962cu: goto label_23962c;
        case 0x239630u: goto label_239630;
        case 0x239634u: goto label_239634;
        case 0x239638u: goto label_239638;
        case 0x23963cu: goto label_23963c;
        case 0x239640u: goto label_239640;
        case 0x239644u: goto label_239644;
        case 0x239648u: goto label_239648;
        case 0x23964cu: goto label_23964c;
        case 0x239650u: goto label_239650;
        case 0x239654u: goto label_239654;
        case 0x239658u: goto label_239658;
        case 0x23965cu: goto label_23965c;
        case 0x239660u: goto label_239660;
        case 0x239664u: goto label_239664;
        case 0x239668u: goto label_239668;
        case 0x23966cu: goto label_23966c;
        case 0x239670u: goto label_239670;
        case 0x239674u: goto label_239674;
        case 0x239678u: goto label_239678;
        case 0x23967cu: goto label_23967c;
        case 0x239680u: goto label_239680;
        case 0x239684u: goto label_239684;
        case 0x239688u: goto label_239688;
        case 0x23968cu: goto label_23968c;
        case 0x239690u: goto label_239690;
        case 0x239694u: goto label_239694;
        case 0x239698u: goto label_239698;
        case 0x23969cu: goto label_23969c;
        case 0x2396a0u: goto label_2396a0;
        case 0x2396a4u: goto label_2396a4;
        case 0x2396a8u: goto label_2396a8;
        case 0x2396acu: goto label_2396ac;
        case 0x2396b0u: goto label_2396b0;
        case 0x2396b4u: goto label_2396b4;
        case 0x2396b8u: goto label_2396b8;
        case 0x2396bcu: goto label_2396bc;
        case 0x2396c0u: goto label_2396c0;
        case 0x2396c4u: goto label_2396c4;
        case 0x2396c8u: goto label_2396c8;
        case 0x2396ccu: goto label_2396cc;
        case 0x2396d0u: goto label_2396d0;
        case 0x2396d4u: goto label_2396d4;
        case 0x2396d8u: goto label_2396d8;
        case 0x2396dcu: goto label_2396dc;
        case 0x2396e0u: goto label_2396e0;
        case 0x2396e4u: goto label_2396e4;
        case 0x2396e8u: goto label_2396e8;
        case 0x2396ecu: goto label_2396ec;
        case 0x2396f0u: goto label_2396f0;
        case 0x2396f4u: goto label_2396f4;
        case 0x2396f8u: goto label_2396f8;
        case 0x2396fcu: goto label_2396fc;
        case 0x239700u: goto label_239700;
        case 0x239704u: goto label_239704;
        case 0x239708u: goto label_239708;
        case 0x23970cu: goto label_23970c;
        case 0x239710u: goto label_239710;
        case 0x239714u: goto label_239714;
        case 0x239718u: goto label_239718;
        case 0x23971cu: goto label_23971c;
        case 0x239720u: goto label_239720;
        case 0x239724u: goto label_239724;
        case 0x239728u: goto label_239728;
        case 0x23972cu: goto label_23972c;
        case 0x239730u: goto label_239730;
        case 0x239734u: goto label_239734;
        case 0x239738u: goto label_239738;
        case 0x23973cu: goto label_23973c;
        case 0x239740u: goto label_239740;
        case 0x239744u: goto label_239744;
        case 0x239748u: goto label_239748;
        case 0x23974cu: goto label_23974c;
        case 0x239750u: goto label_239750;
        case 0x239754u: goto label_239754;
        case 0x239758u: goto label_239758;
        case 0x23975cu: goto label_23975c;
        case 0x239760u: goto label_239760;
        case 0x239764u: goto label_239764;
        case 0x239768u: goto label_239768;
        case 0x23976cu: goto label_23976c;
        case 0x239770u: goto label_239770;
        case 0x239774u: goto label_239774;
        case 0x239778u: goto label_239778;
        case 0x23977cu: goto label_23977c;
        case 0x239780u: goto label_239780;
        case 0x239784u: goto label_239784;
        case 0x239788u: goto label_239788;
        case 0x23978cu: goto label_23978c;
        case 0x239790u: goto label_239790;
        case 0x239794u: goto label_239794;
        case 0x239798u: goto label_239798;
        case 0x23979cu: goto label_23979c;
        case 0x2397a0u: goto label_2397a0;
        case 0x2397a4u: goto label_2397a4;
        case 0x2397a8u: goto label_2397a8;
        case 0x2397acu: goto label_2397ac;
        case 0x2397b0u: goto label_2397b0;
        case 0x2397b4u: goto label_2397b4;
        case 0x2397b8u: goto label_2397b8;
        case 0x2397bcu: goto label_2397bc;
        case 0x2397c0u: goto label_2397c0;
        case 0x2397c4u: goto label_2397c4;
        case 0x2397c8u: goto label_2397c8;
        case 0x2397ccu: goto label_2397cc;
        case 0x2397d0u: goto label_2397d0;
        case 0x2397d4u: goto label_2397d4;
        case 0x2397d8u: goto label_2397d8;
        case 0x2397dcu: goto label_2397dc;
        case 0x2397e0u: goto label_2397e0;
        case 0x2397e4u: goto label_2397e4;
        case 0x2397e8u: goto label_2397e8;
        case 0x2397ecu: goto label_2397ec;
        case 0x2397f0u: goto label_2397f0;
        case 0x2397f4u: goto label_2397f4;
        case 0x2397f8u: goto label_2397f8;
        case 0x2397fcu: goto label_2397fc;
        case 0x239800u: goto label_239800;
        case 0x239804u: goto label_239804;
        case 0x239808u: goto label_239808;
        case 0x23980cu: goto label_23980c;
        case 0x239810u: goto label_239810;
        case 0x239814u: goto label_239814;
        case 0x239818u: goto label_239818;
        case 0x23981cu: goto label_23981c;
        case 0x239820u: goto label_239820;
        case 0x239824u: goto label_239824;
        case 0x239828u: goto label_239828;
        case 0x23982cu: goto label_23982c;
        case 0x239830u: goto label_239830;
        case 0x239834u: goto label_239834;
        case 0x239838u: goto label_239838;
        case 0x23983cu: goto label_23983c;
        case 0x239840u: goto label_239840;
        case 0x239844u: goto label_239844;
        case 0x239848u: goto label_239848;
        case 0x23984cu: goto label_23984c;
        case 0x239850u: goto label_239850;
        case 0x239854u: goto label_239854;
        case 0x239858u: goto label_239858;
        case 0x23985cu: goto label_23985c;
        case 0x239860u: goto label_239860;
        case 0x239864u: goto label_239864;
        case 0x239868u: goto label_239868;
        case 0x23986cu: goto label_23986c;
        case 0x239870u: goto label_239870;
        case 0x239874u: goto label_239874;
        case 0x239878u: goto label_239878;
        case 0x23987cu: goto label_23987c;
        case 0x239880u: goto label_239880;
        case 0x239884u: goto label_239884;
        case 0x239888u: goto label_239888;
        case 0x23988cu: goto label_23988c;
        case 0x239890u: goto label_239890;
        case 0x239894u: goto label_239894;
        case 0x239898u: goto label_239898;
        case 0x23989cu: goto label_23989c;
        case 0x2398a0u: goto label_2398a0;
        case 0x2398a4u: goto label_2398a4;
        case 0x2398a8u: goto label_2398a8;
        case 0x2398acu: goto label_2398ac;
        case 0x2398b0u: goto label_2398b0;
        case 0x2398b4u: goto label_2398b4;
        case 0x2398b8u: goto label_2398b8;
        case 0x2398bcu: goto label_2398bc;
        case 0x2398c0u: goto label_2398c0;
        case 0x2398c4u: goto label_2398c4;
        case 0x2398c8u: goto label_2398c8;
        case 0x2398ccu: goto label_2398cc;
        case 0x2398d0u: goto label_2398d0;
        case 0x2398d4u: goto label_2398d4;
        case 0x2398d8u: goto label_2398d8;
        case 0x2398dcu: goto label_2398dc;
        case 0x2398e0u: goto label_2398e0;
        case 0x2398e4u: goto label_2398e4;
        case 0x2398e8u: goto label_2398e8;
        case 0x2398ecu: goto label_2398ec;
        case 0x2398f0u: goto label_2398f0;
        case 0x2398f4u: goto label_2398f4;
        case 0x2398f8u: goto label_2398f8;
        case 0x2398fcu: goto label_2398fc;
        case 0x239900u: goto label_239900;
        case 0x239904u: goto label_239904;
        case 0x239908u: goto label_239908;
        case 0x23990cu: goto label_23990c;
        case 0x239910u: goto label_239910;
        case 0x239914u: goto label_239914;
        case 0x239918u: goto label_239918;
        case 0x23991cu: goto label_23991c;
        case 0x239920u: goto label_239920;
        case 0x239924u: goto label_239924;
        case 0x239928u: goto label_239928;
        case 0x23992cu: goto label_23992c;
        case 0x239930u: goto label_239930;
        case 0x239934u: goto label_239934;
        case 0x239938u: goto label_239938;
        case 0x23993cu: goto label_23993c;
        case 0x239940u: goto label_239940;
        case 0x239944u: goto label_239944;
        case 0x239948u: goto label_239948;
        case 0x23994cu: goto label_23994c;
        case 0x239950u: goto label_239950;
        case 0x239954u: goto label_239954;
        case 0x239958u: goto label_239958;
        case 0x23995cu: goto label_23995c;
        case 0x239960u: goto label_239960;
        case 0x239964u: goto label_239964;
        case 0x239968u: goto label_239968;
        case 0x23996cu: goto label_23996c;
        default: return;
    }

label_2391a0:
    // 0x2391a0: 0x40f809  jalr        $v0
label_2391a4:
    if (ctx->pc == 0x2391A4u) {
        ctx->pc = 0x2391A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2391A0u;
        // 0x2391a4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2391A8u;
        goto label_2391a8;
    }
    ctx->pc = 0x2391A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2391A8u);
        ctx->pc = 0x2391A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2391A0u;
        // 0x2391a4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2391A0u, 0x2391A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2391A8u;
label_2391a8:
    // 0x2391a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2391a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2391ac:
    // 0x2391ac: 0x5e00000e  bgtzl       $s0, . + 4 + (0xE << 2)
label_2391b0:
    if (ctx->pc == 0x2391B0u) {
        ctx->pc = 0x2391B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2391ACu;
        // 0x2391b0: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2391B4u;
        goto label_2391b4;
    }
    ctx->pc = 0x2391ACu;
    {
        const bool branch_taken_0x2391ac = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x2391ac) {
            ctx->pc = 0x2391B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2391ACu;
            // 0x2391b0: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2391E8u;
            goto label_2391e8;
        }
    }
    ctx->pc = 0x2391B4u;
label_2391b4:
    // 0x2391b4: 0x1000006e  b           . + 4 + (0x6E << 2)
label_2391b8:
    if (ctx->pc == 0x2391B8u) {
        ctx->pc = 0x2391B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2391B4u;
        // 0x2391b8: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2391BCu;
        goto label_2391bc;
    }
    ctx->pc = 0x2391B4u;
    {
        const bool branch_taken_0x2391b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2391B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2391B4u;
        // 0x2391b8: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2391b4) {
            ctx->pc = 0x239370u;
            goto label_239370;
        }
    }
    ctx->pc = 0x2391BCu;
label_2391bc:
    // 0x2391bc: 0x0  nop
    ctx->pc = 0x2391bcu;
    // NOP
label_2391c0:
    // 0x2391c0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2391c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2391c4:
    // 0x2391c4: 0xc08e96a  jal         func_23A5A8
label_2391c8:
    if (ctx->pc == 0x2391C8u) {
        ctx->pc = 0x2391C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2391C4u;
        // 0x2391c8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2391CCu;
        goto label_2391cc;
    }
    ctx->pc = 0x2391C4u;
    SET_GPR_U32(ctx, 31, 0x2391CCu);
    ctx->pc = 0x2391C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2391C4u;
    // 0x2391c8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A5A8u;
    { ctx->pc = 0x23a5a8; return; }
    ctx->pc = 0x2391CCu;
label_2391cc:
    // 0x2391cc: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2391ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2391d0:
    // 0x2391d0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2391d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2391d4:
    // 0x2391d4: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x2391d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2391d8:
    // 0x2391d8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2391d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2391dc:
    // 0x2391dc: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x2391dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_2391e0:
    // 0x2391e0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2391e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2391e4:
    // 0x2391e4: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x2391e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_2391e8:
    // 0x2391e8: 0x2709821  addu        $s3, $s3, $s0
    ctx->pc = 0x2391e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_2391ec:
    // 0x2391ec: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x2391ecu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_2391f0:
    // 0x2391f0: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x2391f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2391f4:
    // 0x2391f4: 0x1440ffb6  bnez        $v0, . + 4 + (-0x4A << 2)
label_2391f8:
    if (ctx->pc == 0x2391F8u) {
        ctx->pc = 0x2391F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2391F4u;
        // 0x2391f8: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2391FCu;
        goto label_2391fc;
    }
    ctx->pc = 0x2391F4u;
    {
        const bool branch_taken_0x2391f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2391F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2391F4u;
        // 0x2391f8: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2391f4) {
            ctx->pc = 0x2390D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x2390d0; return; }
        }
    }
    ctx->pc = 0x2391FCu;
label_2391fc:
    // 0x2391fc: 0x1000005f  b           . + 4 + (0x5F << 2)
label_239200:
    if (ctx->pc == 0x239200u) {
        ctx->pc = 0x239200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2391FCu;
        // 0x239200: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239204u;
        goto label_239204;
    }
    ctx->pc = 0x2391FCu;
    {
        const bool branch_taken_0x2391fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2391FCu;
        // 0x239200: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2391fc) {
            ctx->pc = 0x23937Cu;
            goto label_23937c;
        }
    }
    ctx->pc = 0x239204u;
label_239204:
    // 0x239204: 0x0  nop
    ctx->pc = 0x239204u;
    // NOP
label_239208:
    // 0x239208: 0x1640000a  bnez        $s2, . + 4 + (0xA << 2)
label_23920c:
    if (ctx->pc == 0x23920Cu) {
        ctx->pc = 0x239210u;
        goto label_239210;
    }
    ctx->pc = 0x239208u;
    {
        const bool branch_taken_0x239208 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x239208) {
            ctx->pc = 0x239234u;
            goto label_239234;
        }
    }
    ctx->pc = 0x239210u;
label_239210:
    // 0x239210: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x239210u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_239214:
    // 0x239214: 0x0  nop
    ctx->pc = 0x239214u;
    // NOP
label_239218:
    // 0x239218: 0x8e920004  lw          $s2, 0x4($s4)
    ctx->pc = 0x239218u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_23921c:
    // 0x23921c: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x23921cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_239220:
    // 0x239220: 0x0  nop
    ctx->pc = 0x239220u;
    // NOP
label_239224:
    // 0x239224: 0x0  nop
    ctx->pc = 0x239224u;
    // NOP
label_239228:
    // 0x239228: 0x0  nop
    ctx->pc = 0x239228u;
    // NOP
label_23922c:
    // 0x23922c: 0x1240fffa  beqz        $s2, . + 4 + (-0x6 << 2)
label_239230:
    if (ctx->pc == 0x239230u) {
        ctx->pc = 0x239230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23922Cu;
        // 0x239230: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239234u;
        goto label_239234;
    }
    ctx->pc = 0x23922Cu;
    {
        const bool branch_taken_0x23922c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x239230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23922Cu;
        // 0x239230: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23922c) {
            ctx->pc = 0x239218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_239218;
        }
    }
    ctx->pc = 0x239234u;
label_239234:
    // 0x239234: 0x56e0000d  bnel        $s7, $zero, . + 4 + (0xD << 2)
label_239238:
    if (ctx->pc == 0x239238u) {
        ctx->pc = 0x239238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239234u;
        // 0x239238: 0x8e280000  lw          $t0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23923Cu;
        goto label_23923c;
    }
    ctx->pc = 0x239234u;
    {
        const bool branch_taken_0x239234 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x239234) {
            ctx->pc = 0x239238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239234u;
            // 0x239238: 0x8e280000  lw          $t0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23926Cu;
            goto label_23926c;
        }
    }
    ctx->pc = 0x23923Cu;
label_23923c:
    // 0x23923c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23923cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_239240:
    // 0x239240: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x239240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_239244:
    // 0x239244: 0xc08e8e0  jal         func_23A380
label_239248:
    if (ctx->pc == 0x239248u) {
        ctx->pc = 0x239248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239244u;
        // 0x239248: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23924Cu;
        goto label_23924c;
    }
    ctx->pc = 0x239244u;
    SET_GPR_U32(ctx, 31, 0x23924Cu);
    ctx->pc = 0x239248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239244u;
    // 0x239248: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A380u;
    { ctx->pc = 0x23a380; return; }
    ctx->pc = 0x23924Cu;
label_23924c:
    // 0x23924c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_239250:
    if (ctx->pc == 0x239250u) {
        ctx->pc = 0x239250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23924Cu;
        // 0x239250: 0x531023  subu        $v0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239254u;
        goto label_239254;
    }
    ctx->pc = 0x23924Cu;
    {
        const bool branch_taken_0x23924c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23924Cu;
        // 0x239250: 0x531023  subu        $v0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23924c) {
            ctx->pc = 0x239260u;
            goto label_239260;
        }
    }
    ctx->pc = 0x239254u;
label_239254:
    // 0x239254: 0x10000003  b           . + 4 + (0x3 << 2)
label_239258:
    if (ctx->pc == 0x239258u) {
        ctx->pc = 0x239258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239254u;
        // 0x239258: 0x24550001  addiu       $s5, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23925Cu;
        goto label_23925c;
    }
    ctx->pc = 0x239254u;
    {
        const bool branch_taken_0x239254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239254u;
        // 0x239258: 0x24550001  addiu       $s5, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239254) {
            ctx->pc = 0x239264u;
            goto label_239264;
        }
    }
    ctx->pc = 0x23925Cu;
label_23925c:
    // 0x23925c: 0x0  nop
    ctx->pc = 0x23925cu;
    // NOP
label_239260:
    // 0x239260: 0x26550001  addiu       $s5, $s2, 0x1
    ctx->pc = 0x239260u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_239264:
    // 0x239264: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x239264u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_239268:
    // 0x239268: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x239268u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_23926c:
    // 0x23926c: 0x255102b  sltu        $v0, $s2, $s5
    ctx->pc = 0x23926cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_239270:
    // 0x239270: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x239270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_239274:
    // 0x239274: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x239274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_239278:
    // 0x239278: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x239278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_23927c:
    // 0x23927c: 0x2a2280a  movz        $a1, $s5, $v0
    ctx->pc = 0x23927cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 21));
label_239280:
    // 0x239280: 0x8e270014  lw          $a3, 0x14($s1)
    ctx->pc = 0x239280u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_239284:
    // 0x239284: 0x68182b  sltu        $v1, $v1, $t0
    ctx->pc = 0x239284u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_239288:
    // 0x239288: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_23928c:
    if (ctx->pc == 0x23928Cu) {
        ctx->pc = 0x23928Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239288u;
        // 0x23928c: 0x878021  addu        $s0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239290u;
        goto label_239290;
    }
    ctx->pc = 0x239288u;
    {
        const bool branch_taken_0x239288 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23928Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239288u;
        // 0x23928c: 0x878021  addu        $s0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239288) {
            ctx->pc = 0x2392D0u;
            goto label_2392d0;
        }
    }
    ctx->pc = 0x239290u;
label_239290:
    // 0x239290: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x239290u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_239294:
    // 0x239294: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_239298:
    if (ctx->pc == 0x239298u) {
        ctx->pc = 0x239298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239294u;
        // 0x239298: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23929Cu;
        goto label_23929c;
    }
    ctx->pc = 0x239294u;
    {
        const bool branch_taken_0x239294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x239294) {
            ctx->pc = 0x239298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239294u;
            // 0x239298: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2392D4u;
            goto label_2392d4;
        }
    }
    ctx->pc = 0x23929Cu;
label_23929c:
    // 0x23929c: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x23929cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2392a0:
    // 0x2392a0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2392a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2392a4:
    // 0x2392a4: 0xc08e96a  jal         func_23A5A8
label_2392a8:
    if (ctx->pc == 0x2392A8u) {
        ctx->pc = 0x2392A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2392A4u;
        // 0x2392a8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2392ACu;
        goto label_2392ac;
    }
    ctx->pc = 0x2392A4u;
    SET_GPR_U32(ctx, 31, 0x2392ACu);
    ctx->pc = 0x2392A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2392A4u;
    // 0x2392a8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A5A8u;
    { ctx->pc = 0x23a5a8; return; }
    ctx->pc = 0x2392ACu;
label_2392ac:
    // 0x2392ac: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2392acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2392b0:
    // 0x2392b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2392b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2392b4:
    // 0x2392b4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2392b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2392b8:
    // 0x2392b8: 0xc08e1d2  jal         func_238748
label_2392bc:
    if (ctx->pc == 0x2392BCu) {
        ctx->pc = 0x2392BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2392B8u;
        // 0x2392bc: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2392C0u;
        goto label_2392c0;
    }
    ctx->pc = 0x2392B8u;
    SET_GPR_U32(ctx, 31, 0x2392C0u);
    ctx->pc = 0x2392BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2392B8u;
    // 0x2392bc: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238748u;
    { ctx->pc = 0x238748; return; }
    ctx->pc = 0x2392C0u;
label_2392c0:
    // 0x2392c0: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_2392c4:
    if (ctx->pc == 0x2392C4u) {
        ctx->pc = 0x2392C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2392C0u;
        // 0x2392c4: 0x2b0a823  subu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2392C8u;
        goto label_2392c8;
    }
    ctx->pc = 0x2392C0u;
    {
        const bool branch_taken_0x2392c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2392C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2392C0u;
        // 0x2392c4: 0x2b0a823  subu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2392c0) {
            ctx->pc = 0x239334u;
            goto label_239334;
        }
    }
    ctx->pc = 0x2392C8u;
label_2392c8:
    // 0x2392c8: 0x10000029  b           . + 4 + (0x29 << 2)
label_2392cc:
    if (ctx->pc == 0x2392CCu) {
        ctx->pc = 0x2392CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2392C8u;
        // 0x2392cc: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2392D0u;
        goto label_2392d0;
    }
    ctx->pc = 0x2392C8u;
    {
        const bool branch_taken_0x2392c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2392CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2392C8u;
        // 0x2392cc: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2392c8) {
            ctx->pc = 0x239370u;
            goto label_239370;
        }
    }
    ctx->pc = 0x2392D0u;
label_2392d0:
    // 0x2392d0: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2392d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2392d4:
    // 0x2392d4: 0xb0102a  slt         $v0, $a1, $s0
    ctx->pc = 0x2392d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_2392d8:
    // 0x2392d8: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_2392dc:
    if (ctx->pc == 0x2392DCu) {
        ctx->pc = 0x2392DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2392D8u;
        // 0x2392dc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2392E0u;
        goto label_2392e0;
    }
    ctx->pc = 0x2392D8u;
    {
        const bool branch_taken_0x2392d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2392d8) {
            ctx->pc = 0x2392DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2392D8u;
            // 0x2392dc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239308u;
            goto label_239308;
        }
    }
    ctx->pc = 0x2392E0u;
label_2392e0:
    // 0x2392e0: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x2392e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_2392e4:
    // 0x2392e4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2392e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2392e8:
    // 0x2392e8: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x2392e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2392ec:
    // 0x2392ec: 0x40f809  jalr        $v0
label_2392f0:
    if (ctx->pc == 0x2392F0u) {
        ctx->pc = 0x2392F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2392ECu;
        // 0x2392f0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2392F4u;
        goto label_2392f4;
    }
    ctx->pc = 0x2392ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2392F4u);
        ctx->pc = 0x2392F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2392ECu;
        // 0x2392f0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2392ECu, 0x2392F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2392F4u;
label_2392f4:
    // 0x2392f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2392f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2392f8:
    // 0x2392f8: 0x1e00000e  bgtz        $s0, . + 4 + (0xE << 2)
label_2392fc:
    if (ctx->pc == 0x2392FCu) {
        ctx->pc = 0x2392FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2392F8u;
        // 0x2392fc: 0x2b0a823  subu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239300u;
        goto label_239300;
    }
    ctx->pc = 0x2392F8u;
    {
        const bool branch_taken_0x2392f8 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x2392FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2392F8u;
        // 0x2392fc: 0x2b0a823  subu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2392f8) {
            ctx->pc = 0x239334u;
            goto label_239334;
        }
    }
    ctx->pc = 0x239300u;
label_239300:
    // 0x239300: 0x1000001b  b           . + 4 + (0x1B << 2)
label_239304:
    if (ctx->pc == 0x239304u) {
        ctx->pc = 0x239304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239300u;
        // 0x239304: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239308u;
        goto label_239308;
    }
    ctx->pc = 0x239300u;
    {
        const bool branch_taken_0x239300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239300u;
        // 0x239304: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239300) {
            ctx->pc = 0x239370u;
            goto label_239370;
        }
    }
    ctx->pc = 0x239308u;
label_239308:
    // 0x239308: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x239308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23930c:
    // 0x23930c: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x23930cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_239310:
    // 0x239310: 0xc08e96a  jal         func_23A5A8
label_239314:
    if (ctx->pc == 0x239314u) {
        ctx->pc = 0x239314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239310u;
        // 0x239314: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239318u;
        goto label_239318;
    }
    ctx->pc = 0x239310u;
    SET_GPR_U32(ctx, 31, 0x239318u);
    ctx->pc = 0x239314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239310u;
    // 0x239314: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A5A8u;
    { ctx->pc = 0x23a5a8; return; }
    ctx->pc = 0x239318u;
label_239318:
    // 0x239318: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x239318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_23931c:
    // 0x23931c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x23931cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_239320:
    // 0x239320: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x239320u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_239324:
    // 0x239324: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x239324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_239328:
    // 0x239328: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x239328u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_23932c:
    // 0x23932c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x23932cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_239330:
    // 0x239330: 0x2b0a823  subu        $s5, $s5, $s0
    ctx->pc = 0x239330u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
label_239334:
    // 0x239334: 0x56a00007  bnel        $s5, $zero, . + 4 + (0x7 << 2)
label_239338:
    if (ctx->pc == 0x239338u) {
        ctx->pc = 0x239338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239334u;
        // 0x239338: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23933Cu;
        goto label_23933c;
    }
    ctx->pc = 0x239334u;
    {
        const bool branch_taken_0x239334 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x239334) {
            ctx->pc = 0x239338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239334u;
            // 0x239338: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239354u;
            goto label_239354;
        }
    }
    ctx->pc = 0x23933Cu;
label_23933c:
    // 0x23933c: 0xc08e1d2  jal         func_238748
label_239340:
    if (ctx->pc == 0x239340u) {
        ctx->pc = 0x239340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23933Cu;
        // 0x239340: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239344u;
        goto label_239344;
    }
    ctx->pc = 0x23933Cu;
    SET_GPR_U32(ctx, 31, 0x239344u);
    ctx->pc = 0x239340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23933Cu;
    // 0x239340: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238748u;
    { ctx->pc = 0x238748; return; }
    ctx->pc = 0x239344u;
label_239344:
    // 0x239344: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_239348:
    if (ctx->pc == 0x239348u) {
        ctx->pc = 0x239348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239344u;
        // 0x239348: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23934Cu;
        goto label_23934c;
    }
    ctx->pc = 0x239344u;
    {
        const bool branch_taken_0x239344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x239344) {
            ctx->pc = 0x239348u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239344u;
            // 0x239348: 0x9623000c  lhu         $v1, 0xC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239370u;
            goto label_239370;
        }
    }
    ctx->pc = 0x23934Cu;
label_23934c:
    // 0x23934c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x23934cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_239350:
    // 0x239350: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x239350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_239354:
    // 0x239354: 0x2709821  addu        $s3, $s3, $s0
    ctx->pc = 0x239354u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_239358:
    // 0x239358: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x239358u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_23935c:
    // 0x23935c: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x23935cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_239360:
    // 0x239360: 0x1440ffa9  bnez        $v0, . + 4 + (-0x57 << 2)
label_239364:
    if (ctx->pc == 0x239364u) {
        ctx->pc = 0x239364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239360u;
        // 0x239364: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239368u;
        goto label_239368;
    }
    ctx->pc = 0x239360u;
    {
        const bool branch_taken_0x239360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x239364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239360u;
        // 0x239364: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239360) {
            ctx->pc = 0x239208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_239208;
        }
    }
    ctx->pc = 0x239368u;
label_239368:
    // 0x239368: 0x10000004  b           . + 4 + (0x4 << 2)
label_23936c:
    if (ctx->pc == 0x23936Cu) {
        ctx->pc = 0x23936Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239368u;
        // 0x23936c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239370u;
        goto label_239370;
    }
    ctx->pc = 0x239368u;
    {
        const bool branch_taken_0x239368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23936Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239368u;
        // 0x23936c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239368) {
            ctx->pc = 0x23937Cu;
            goto label_23937c;
        }
    }
    ctx->pc = 0x239370u;
label_239370:
    // 0x239370: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x239370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_239374:
    // 0x239374: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x239374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_239378:
    // 0x239378: 0xa623000c  sh          $v1, 0xC($s1)
    ctx->pc = 0x239378u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 3));
label_23937c:
    // 0x23937c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23937cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_239380:
    // 0x239380: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x239380u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_239384:
    // 0x239384: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x239384u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_239388:
    // 0x239388: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x239388u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_23938c:
    // 0x23938c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x23938cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_239390:
    // 0x239390: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x239390u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_239394:
    // 0x239394: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x239394u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_239398:
    // 0x239398: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x239398u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_23939c:
    // 0x23939c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x23939cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2393a0:
    // 0x2393a0: 0x3e00008  jr          $ra
label_2393a4:
    if (ctx->pc == 0x2393A4u) {
        ctx->pc = 0x2393A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2393A0u;
        // 0x2393a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2393A8u;
        goto label_2393a8;
    }
    ctx->pc = 0x2393A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2393A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2393A0u;
        // 0x2393a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2393A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2393A8u;
label_2393a8:
    // 0x2393a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2393a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2393ac:
    // 0x2393ac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2393acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2393b0:
    // 0x2393b0: 0x249201d8  addiu       $s2, $a0, 0x1D8
    ctx->pc = 0x2393b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 472));
label_2393b4:
    // 0x2393b4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2393b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2393b8:
    // 0x2393b8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2393b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2393bc:
    // 0x2393bc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2393bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_2393c0:
    // 0x2393c0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2393c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2393c4:
    // 0x2393c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2393c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2393c8:
    // 0x2393c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2393c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2393cc:
    // 0x2393cc: 0x12400012  beqz        $s2, . + 4 + (0x12 << 2)
label_2393d0:
    if (ctx->pc == 0x2393D0u) {
        ctx->pc = 0x2393D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2393CCu;
        // 0x2393d0: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2393D4u;
        goto label_2393d4;
    }
    ctx->pc = 0x2393CCu;
    {
        const bool branch_taken_0x2393cc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2393D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2393CCu;
        // 0x2393d0: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2393cc) {
            ctx->pc = 0x239418u;
            goto label_239418;
        }
    }
    ctx->pc = 0x2393D4u;
label_2393d4:
    // 0x2393d4: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x2393d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2393d8:
    // 0x2393d8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2393d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_2393dc:
    // 0x2393dc: 0x600000b  bltz        $s0, . + 4 + (0xB << 2)
label_2393e0:
    if (ctx->pc == 0x2393E0u) {
        ctx->pc = 0x2393E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2393DCu;
        // 0x2393e0: 0x8e510008  lw          $s1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2393E4u;
        goto label_2393e4;
    }
    ctx->pc = 0x2393DCu;
    {
        const bool branch_taken_0x2393dc = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2393E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2393DCu;
        // 0x2393e0: 0x8e510008  lw          $s1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2393dc) {
            ctx->pc = 0x23940Cu;
            goto label_23940c;
        }
    }
    ctx->pc = 0x2393E4u;
label_2393e4:
    // 0x2393e4: 0x0  nop
    ctx->pc = 0x2393e4u;
    // NOP
label_2393e8:
    // 0x2393e8: 0x8622000c  lh          $v0, 0xC($s1)
    ctx->pc = 0x2393e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_2393ec:
    // 0x2393ec: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_2393f0:
    if (ctx->pc == 0x2393F0u) {
        ctx->pc = 0x2393F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2393ECu;
        // 0x2393f0: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2393F4u;
        goto label_2393f4;
    }
    ctx->pc = 0x2393ECu;
    {
        const bool branch_taken_0x2393ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2393ec) {
            ctx->pc = 0x2393F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2393ECu;
            // 0x2393f0: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239404u;
            goto label_239404;
        }
    }
    ctx->pc = 0x2393F4u;
label_2393f4:
    // 0x2393f4: 0x280f809  jalr        $s4
label_2393f8:
    if (ctx->pc == 0x2393F8u) {
        ctx->pc = 0x2393F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2393F4u;
        // 0x2393f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2393FCu;
        goto label_2393fc;
    }
    ctx->pc = 0x2393F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x2393FCu);
        ctx->pc = 0x2393F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2393F4u;
        // 0x2393f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2393F4u, 0x2393FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2393FCu;
label_2393fc:
    // 0x2393fc: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x2393fcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
label_239400:
    // 0x239400: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x239400u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_239404:
    // 0x239404: 0x601fff8  bgez        $s0, . + 4 + (-0x8 << 2)
label_239408:
    if (ctx->pc == 0x239408u) {
        ctx->pc = 0x239408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239404u;
        // 0x239408: 0x26310058  addiu       $s1, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23940Cu;
        goto label_23940c;
    }
    ctx->pc = 0x239404u;
    {
        const bool branch_taken_0x239404 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x239408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239404u;
        // 0x239408: 0x26310058  addiu       $s1, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239404) {
            ctx->pc = 0x2393E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2393e8;
        }
    }
    ctx->pc = 0x23940Cu;
label_23940c:
    // 0x23940c: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x23940cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_239410:
    // 0x239410: 0x5640fff1  bnel        $s2, $zero, . + 4 + (-0xF << 2)
label_239414:
    if (ctx->pc == 0x239414u) {
        ctx->pc = 0x239414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239410u;
        // 0x239414: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239418u;
        goto label_239418;
    }
    ctx->pc = 0x239410u;
    {
        const bool branch_taken_0x239410 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x239410) {
            ctx->pc = 0x239414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239410u;
            // 0x239414: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2393D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2393d8;
        }
    }
    ctx->pc = 0x239418u;
label_239418:
    // 0x239418: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x239418u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23941c:
    // 0x23941c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23941cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_239420:
    // 0x239420: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x239420u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_239424:
    // 0x239424: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x239424u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_239428:
    // 0x239428: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x239428u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_23942c:
    // 0x23942c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x23942cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_239430:
    // 0x239430: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x239430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_239434:
    // 0x239434: 0x3e00008  jr          $ra
label_239438:
    if (ctx->pc == 0x239438u) {
        ctx->pc = 0x239438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239434u;
        // 0x239438: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23943Cu;
        goto label_23943c;
    }
    ctx->pc = 0x239434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239434u;
        // 0x239438: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23943Cu;
label_23943c:
    // 0x23943c: 0x0  nop
    ctx->pc = 0x23943cu;
    // NOP
label_239440:
    // 0x239440: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x239440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_239444:
    // 0x239444: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x239444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_239448:
    // 0x239448: 0x9042e1f1  lbu         $v0, -0x1E0F($v0)
    ctx->pc = 0x239448u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294959601)));
label_23944c:
    // 0x23944c: 0x3e00008  jr          $ra
label_239450:
    if (ctx->pc == 0x239450u) {
        ctx->pc = 0x239450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23944Cu;
        // 0x239450: 0x30420008  andi        $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x239454u;
        goto label_239454;
    }
    ctx->pc = 0x23944Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23944Cu;
        // 0x239450: 0x30420008  andi        $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23944Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x239454u;
label_239454:
    // 0x239454: 0x0  nop
    ctx->pc = 0x239454u;
    // NOP
label_239458:
    // 0x239458: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x239458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_23945c:
    // 0x23945c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23945cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_239460:
    // 0x239460: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x239460u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_239464:
    // 0x239464: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x239464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_239468:
    // 0x239468: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x239468u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23946c:
    // 0x23946c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23946cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_239470:
    // 0x239470: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x239470u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_239474:
    // 0x239474: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x239474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_239478:
    // 0x239478: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x239478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23947c:
    // 0x23947c: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_239480:
    if (ctx->pc == 0x239480u) {
        ctx->pc = 0x239480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23947Cu;
        // 0x239480: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239484u;
        goto label_239484;
    }
    ctx->pc = 0x23947Cu;
    {
        const bool branch_taken_0x23947c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x239480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23947Cu;
        // 0x239480: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23947c) {
            ctx->pc = 0x2394C0u;
            goto label_2394c0;
        }
    }
    ctx->pc = 0x239484u;
label_239484:
    // 0x239484: 0x3c13002d  lui         $s3, 0x2D
    ctx->pc = 0x239484u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)45 << 16));
label_239488:
    // 0x239488: 0xc08f33e  jal         func_23CCF8
label_23948c:
    if (ctx->pc == 0x23948Cu) {
        ctx->pc = 0x23948Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239488u;
        // 0x23948c: 0x2665e3a0  addiu       $a1, $s3, -0x1C60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294960032));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239490u;
        goto label_239490;
    }
    ctx->pc = 0x239488u;
    SET_GPR_U32(ctx, 31, 0x239490u);
    ctx->pc = 0x23948Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239488u;
    // 0x23948c: 0x2665e3a0  addiu       $a1, $s3, -0x1C60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294960032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CCF8u;
    { ctx->pc = 0x23ccf8; return; }
    ctx->pc = 0x239490u;
label_239490:
    // 0x239490: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x239490u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_239494:
    // 0x239494: 0x24a5e390  addiu       $a1, $a1, -0x1C70
    ctx->pc = 0x239494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960016));
label_239498:
    // 0x239498: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_23949c:
    if (ctx->pc == 0x23949Cu) {
        ctx->pc = 0x23949Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239498u;
        // 0x23949c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2394A0u;
        goto label_2394a0;
    }
    ctx->pc = 0x239498u;
    {
        const bool branch_taken_0x239498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23949Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239498u;
        // 0x23949c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239498) {
            ctx->pc = 0x2394B0u;
            goto label_2394b0;
        }
    }
    ctx->pc = 0x2394A0u;
label_2394a0:
    // 0x2394a0: 0xc08f33e  jal         func_23CCF8
label_2394a4:
    if (ctx->pc == 0x2394A4u) {
        ctx->pc = 0x2394A8u;
        goto label_2394a8;
    }
    ctx->pc = 0x2394A0u;
    SET_GPR_U32(ctx, 31, 0x2394A8u);
    ctx->pc = 0x23CCF8u;
    { ctx->pc = 0x23ccf8; return; }
    ctx->pc = 0x2394A8u;
label_2394a8:
    // 0x2394a8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2394ac:
    if (ctx->pc == 0x2394ACu) {
        ctx->pc = 0x2394ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2394A8u;
        // 0x2394ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2394B0u;
        goto label_2394b0;
    }
    ctx->pc = 0x2394A8u;
    {
        const bool branch_taken_0x2394a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2394ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2394A8u;
        // 0x2394ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2394a8) {
            ctx->pc = 0x2394C8u;
            goto label_2394c8;
        }
    }
    ctx->pc = 0x2394B0u;
label_2394b0:
    // 0x2394b0: 0xae300034  sw          $s0, 0x34($s1)
    ctx->pc = 0x2394b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 16));
label_2394b4:
    // 0x2394b4: 0x10000003  b           . + 4 + (0x3 << 2)
label_2394b8:
    if (ctx->pc == 0x2394B8u) {
        ctx->pc = 0x2394B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2394B4u;
        // 0x2394b8: 0xae320030  sw          $s2, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2394BCu;
        goto label_2394bc;
    }
    ctx->pc = 0x2394B4u;
    {
        const bool branch_taken_0x2394b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2394B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2394B4u;
        // 0x2394b8: 0xae320030  sw          $s2, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2394b4) {
            ctx->pc = 0x2394C4u;
            goto label_2394c4;
        }
    }
    ctx->pc = 0x2394BCu;
label_2394bc:
    // 0x2394bc: 0x0  nop
    ctx->pc = 0x2394bcu;
    // NOP
label_2394c0:
    // 0x2394c0: 0x3c13002d  lui         $s3, 0x2D
    ctx->pc = 0x2394c0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)45 << 16));
label_2394c4:
    // 0x2394c4: 0x2662e3a0  addiu       $v0, $s3, -0x1C60
    ctx->pc = 0x2394c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294960032));
label_2394c8:
    // 0x2394c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2394c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2394cc:
    // 0x2394cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2394ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2394d0:
    // 0x2394d0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2394d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2394d4:
    // 0x2394d4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2394d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2394d8:
    // 0x2394d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2394d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2394dc:
    // 0x2394dc: 0x3e00008  jr          $ra
label_2394e0:
    if (ctx->pc == 0x2394E0u) {
        ctx->pc = 0x2394E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2394DCu;
        // 0x2394e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2394E4u;
        goto label_2394e4;
    }
    ctx->pc = 0x2394DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2394E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2394DCu;
        // 0x2394e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2394DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2394E4u;
label_2394e4:
    // 0x2394e4: 0x0  nop
    ctx->pc = 0x2394e4u;
    // NOP
label_2394e8:
    // 0x2394e8: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x2394e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_2394ec:
    // 0x2394ec: 0x3e00008  jr          $ra
label_2394f0:
    if (ctx->pc == 0x2394F0u) {
        ctx->pc = 0x2394F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2394ECu;
        // 0x2394f0: 0x2442e360  addiu       $v0, $v0, -0x1CA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959968));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2394F4u;
        goto label_2394f4;
    }
    ctx->pc = 0x2394ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2394F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2394ECu;
        // 0x2394f0: 0x2442e360  addiu       $v0, $v0, -0x1CA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959968));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2394ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2394F4u;
label_2394f4:
    // 0x2394f4: 0x0  nop
    ctx->pc = 0x2394f4u;
    // NOP
label_2394f8:
    // 0x2394f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2394f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2394fc:
    // 0x2394fc: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x2394fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_239500:
    // 0x239500: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x239500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_239504:
    // 0x239504: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x239504u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_239508:
    // 0x239508: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x239508u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23950c:
    // 0x23950c: 0x8c440818  lw          $a0, 0x818($v0)
    ctx->pc = 0x23950cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2072)));
label_239510:
    // 0x239510: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x239510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_239514:
    // 0x239514: 0x808e516  j           func_239458
label_239518:
    if (ctx->pc == 0x239518u) {
        ctx->pc = 0x239518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239514u;
        // 0x239518: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23951Cu;
        goto label_23951c;
    }
    ctx->pc = 0x239514u;
    ctx->pc = 0x239518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239514u;
    // 0x239518: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239458u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_239458;
    ctx->pc = 0x23951Cu;
label_23951c:
    // 0x23951c: 0x0  nop
    ctx->pc = 0x23951cu;
    // NOP
label_239520:
    // 0x239520: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x239520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_239524:
    // 0x239524: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x239524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_239528:
    // 0x239528: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x239528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_23952c:
    // 0x23952c: 0x8c440818  lw          $a0, 0x818($v0)
    ctx->pc = 0x23952cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2072)));
label_239530:
    // 0x239530: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x239530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_239534:
    // 0x239534: 0x808e53a  j           func_2394E8
label_239538:
    if (ctx->pc == 0x239538u) {
        ctx->pc = 0x239538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239534u;
        // 0x239538: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23953Cu;
        goto label_23953c;
    }
    ctx->pc = 0x239534u;
    ctx->pc = 0x239538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239534u;
    // 0x239538: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2394E8u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_2394e8;
    ctx->pc = 0x23953Cu;
label_23953c:
    // 0x23953c: 0x0  nop
    ctx->pc = 0x23953cu;
    // NOP
label_239540:
    // 0x239540: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x239540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_239544:
    // 0x239544: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x239544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
label_239548:
    // 0x239548: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x239548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23954c:
    // 0x23954c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23954cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_239550:
    // 0x239550: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x239550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_239554:
    // 0x239554: 0x245159c8  addiu       $s1, $v0, 0x59C8
    ctx->pc = 0x239554u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 22984));
label_239558:
    // 0x239558: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x239558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23955c:
    // 0x23955c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x23955cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_239560:
    // 0x239560: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x239560u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_239564:
    // 0x239564: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x239564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_239568:
    // 0x239568: 0xc0693c6  jal         func_1A4F18
label_23956c:
    if (ctx->pc == 0x23956Cu) {
        ctx->pc = 0x23956Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239568u;
        // 0x23956c: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239570u;
        goto label_239570;
    }
    ctx->pc = 0x239568u;
    SET_GPR_U32(ctx, 31, 0x239570u);
    ctx->pc = 0x23956Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239568u;
    // 0x23956c: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F18u;
    { ctx->pc = 0x1a4f18; return; }
    ctx->pc = 0x239570u;
label_239570:
    // 0x239570: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x239570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_239574:
    // 0x239574: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x239574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_239578:
    // 0x239578: 0x54830005  bnel        $a0, $v1, . + 4 + (0x5 << 2)
label_23957c:
    if (ctx->pc == 0x23957Cu) {
        ctx->pc = 0x23957Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239578u;
        // 0x23957c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239580u;
        goto label_239580;
    }
    ctx->pc = 0x239578u;
    {
        const bool branch_taken_0x239578 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x239578) {
            ctx->pc = 0x23957Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239578u;
            // 0x23957c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x239590u;
            goto label_239590;
        }
    }
    ctx->pc = 0x239580u;
label_239580:
    // 0x239580: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x239580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_239584:
    // 0x239584: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
label_239588:
    if (ctx->pc == 0x239588u) {
        ctx->pc = 0x239588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239584u;
        // 0x239588: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23958Cu;
        goto label_23958c;
    }
    ctx->pc = 0x239584u;
    {
        const bool branch_taken_0x239584 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x239584) {
            ctx->pc = 0x239588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239584u;
            // 0x239588: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23958Cu;
            goto label_23958c;
        }
    }
    ctx->pc = 0x23958Cu;
label_23958c:
    // 0x23958c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23958cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_239590:
    // 0x239590: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x239590u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_239594:
    // 0x239594: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x239594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_239598:
    // 0x239598: 0x3e00008  jr          $ra
label_23959c:
    if (ctx->pc == 0x23959Cu) {
        ctx->pc = 0x23959Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239598u;
        // 0x23959c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2395A0u;
        goto label_2395a0;
    }
    ctx->pc = 0x239598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23959Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239598u;
        // 0x23959c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2395A0u;
label_2395a0:
    // 0x2395a0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2395a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_2395a4:
    // 0x2395a4: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x2395a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
label_2395a8:
    // 0x2395a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2395a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2395ac:
    // 0x2395ac: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x2395acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
label_2395b0:
    // 0x2395b0: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x2395b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
label_2395b4:
    // 0x2395b4: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x2395b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
label_2395b8:
    // 0x2395b8: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x2395b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_2395bc:
    // 0x2395bc: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x2395bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_2395c0:
    // 0x2395c0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2395c4:
    if (ctx->pc == 0x2395C4u) {
        ctx->pc = 0x2395C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2395C0u;
        // 0x2395c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2395C8u;
        goto label_2395c8;
    }
    ctx->pc = 0x2395C0u;
    {
        const bool branch_taken_0x2395c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2395C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2395C0u;
        // 0x2395c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2395c0) {
            ctx->pc = 0x2395E0u;
            goto label_2395e0;
        }
    }
    ctx->pc = 0x2395C8u;
label_2395c8:
    // 0x2395c8: 0x26030043  addiu       $v1, $s0, 0x43
    ctx->pc = 0x2395c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 67));
label_2395cc:
    // 0x2395cc: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x2395ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_2395d0:
    // 0x2395d0: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x2395d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_2395d4:
    // 0x2395d4: 0x10000041  b           . + 4 + (0x41 << 2)
label_2395d8:
    if (ctx->pc == 0x2395D8u) {
        ctx->pc = 0x2395D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2395D4u;
        // 0x2395d8: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2395DCu;
        goto label_2395dc;
    }
    ctx->pc = 0x2395D4u;
    {
        const bool branch_taken_0x2395d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2395D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2395D4u;
        // 0x2395d8: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2395d4) {
            ctx->pc = 0x2396DCu;
            goto label_2396dc;
        }
    }
    ctx->pc = 0x2395DCu;
label_2395dc:
    // 0x2395dc: 0x0  nop
    ctx->pc = 0x2395dcu;
    // NOP
label_2395e0:
    // 0x2395e0: 0x8605000e  lh          $a1, 0xE($s0)
    ctx->pc = 0x2395e0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
label_2395e4:
    // 0x2395e4: 0x4a00008  bltz        $a1, . + 4 + (0x8 << 2)
label_2395e8:
    if (ctx->pc == 0x2395E8u) {
        ctx->pc = 0x2395E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2395E4u;
        // 0x2395e8: 0x34620800  ori         $v0, $v1, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2395ECu;
        goto label_2395ec;
    }
    ctx->pc = 0x2395E4u;
    {
        const bool branch_taken_0x2395e4 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2395E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2395E4u;
        // 0x2395e8: 0x34620800  ori         $v0, $v1, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2395e4) {
            ctx->pc = 0x239608u;
            goto label_239608;
        }
    }
    ctx->pc = 0x2395ECu;
label_2395ec:
    // 0x2395ec: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x2395ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_2395f0:
    // 0x2395f0: 0xc08e3da  jal         func_238F68
label_2395f4:
    if (ctx->pc == 0x2395F4u) {
        ctx->pc = 0x2395F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2395F0u;
        // 0x2395f4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2395F8u;
        goto label_2395f8;
    }
    ctx->pc = 0x2395F0u;
    SET_GPR_U32(ctx, 31, 0x2395F8u);
    ctx->pc = 0x2395F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2395F0u;
    // 0x2395f4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238F68u;
    { ctx->pc = 0x238f68; return; }
    ctx->pc = 0x2395F8u;
label_2395f8:
    // 0x2395f8: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
label_2395fc:
    if (ctx->pc == 0x2395FCu) {
        ctx->pc = 0x2395FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2395F8u;
        // 0x2395fc: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239600u;
        goto label_239600;
    }
    ctx->pc = 0x2395F8u;
    {
        const bool branch_taken_0x2395f8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2395FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2395F8u;
        // 0x2395fc: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2395f8) {
            ctx->pc = 0x239618u;
            goto label_239618;
        }
    }
    ctx->pc = 0x239600u;
label_239600:
    // 0x239600: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x239600u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_239604:
    // 0x239604: 0x34620800  ori         $v0, $v1, 0x800
    ctx->pc = 0x239604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
label_239608:
    // 0x239608: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x239608u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23960c:
    // 0x23960c: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x23960cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_239610:
    // 0x239610: 0x10000012  b           . + 4 + (0x12 << 2)
label_239614:
    if (ctx->pc == 0x239614u) {
        ctx->pc = 0x239614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239610u;
        // 0x239614: 0x24110400  addiu       $s1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239618u;
        goto label_239618;
    }
    ctx->pc = 0x239610u;
    {
        const bool branch_taken_0x239610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239610u;
        // 0x239614: 0x24110400  addiu       $s1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239610) {
            ctx->pc = 0x23965Cu;
            goto label_23965c;
        }
    }
    ctx->pc = 0x239618u;
label_239618:
    // 0x239618: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x239618u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_23961c:
    // 0x23961c: 0x24110400  addiu       $s1, $zero, 0x400
    ctx->pc = 0x23961cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_239620:
    // 0x239620: 0x3042f000  andi        $v0, $v0, 0xF000
    ctx->pc = 0x239620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
label_239624:
    // 0x239624: 0x38432000  xori        $v1, $v0, 0x2000
    ctx->pc = 0x239624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8192);
label_239628:
    // 0x239628: 0x14440009  bne         $v0, $a0, . + 4 + (0x9 << 2)
label_23962c:
    if (ctx->pc == 0x23962Cu) {
        ctx->pc = 0x23962Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239628u;
        // 0x23962c: 0x2c720001  sltiu       $s2, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x239630u;
        goto label_239630;
    }
    ctx->pc = 0x239628u;
    {
        const bool branch_taken_0x239628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x23962Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239628u;
        // 0x23962c: 0x2c720001  sltiu       $s2, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x239628) {
            ctx->pc = 0x239650u;
            goto label_239650;
        }
    }
    ctx->pc = 0x239630u;
label_239630:
    // 0x239630: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x239630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
label_239634:
    // 0x239634: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x239634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_239638:
    // 0x239638: 0x2442c9b0  addiu       $v0, $v0, -0x3650
    ctx->pc = 0x239638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953392));
label_23963c:
    // 0x23963c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_239640:
    if (ctx->pc == 0x239640u) {
        ctx->pc = 0x239640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23963Cu;
        // 0x239640: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239644u;
        goto label_239644;
    }
    ctx->pc = 0x23963Cu;
    {
        const bool branch_taken_0x23963c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x239640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23963Cu;
        // 0x239640: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23963c) {
            ctx->pc = 0x239654u;
            goto label_239654;
        }
    }
    ctx->pc = 0x239644u;
label_239644:
    // 0x239644: 0xae11004c  sw          $s1, 0x4C($s0)
    ctx->pc = 0x239644u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 17));
label_239648:
    // 0x239648: 0x10000003  b           . + 4 + (0x3 << 2)
label_23964c:
    if (ctx->pc == 0x23964Cu) {
        ctx->pc = 0x23964Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239648u;
        // 0x23964c: 0x34420400  ori         $v0, $v0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x239650u;
        goto label_239650;
    }
    ctx->pc = 0x239648u;
    {
        const bool branch_taken_0x239648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23964Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239648u;
        // 0x23964c: 0x34420400  ori         $v0, $v0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x239648) {
            ctx->pc = 0x239658u;
            goto label_239658;
        }
    }
    ctx->pc = 0x239650u;
label_239650:
    // 0x239650: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x239650u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_239654:
    // 0x239654: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x239654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
label_239658:
    // 0x239658: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x239658u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_23965c:
    // 0x23965c: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x23965cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_239660:
    // 0x239660: 0xc08e708  jal         func_239C20
label_239664:
    if (ctx->pc == 0x239664u) {
        ctx->pc = 0x239664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239660u;
        // 0x239664: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239668u;
        goto label_239668;
    }
    ctx->pc = 0x239660u;
    SET_GPR_U32(ctx, 31, 0x239668u);
    ctx->pc = 0x239664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239660u;
    // 0x239664: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239C20u;
    { ctx->pc = 0x239c20; return; }
    ctx->pc = 0x239668u;
label_239668:
    // 0x239668: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x239668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23966c:
    // 0x23966c: 0x14a0000a  bnez        $a1, . + 4 + (0xA << 2)
label_239670:
    if (ctx->pc == 0x239670u) {
        ctx->pc = 0x239670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23966Cu;
        // 0x239670: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239674u;
        goto label_239674;
    }
    ctx->pc = 0x23966Cu;
    {
        const bool branch_taken_0x23966c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x239670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23966Cu;
        // 0x239670: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23966c) {
            ctx->pc = 0x239698u;
            goto label_239698;
        }
    }
    ctx->pc = 0x239674u;
label_239674:
    // 0x239674: 0x26040043  addiu       $a0, $s0, 0x43
    ctx->pc = 0x239674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 67));
label_239678:
    // 0x239678: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x239678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23967c:
    // 0x23967c: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x23967cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
label_239680:
    // 0x239680: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x239680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_239684:
    // 0x239684: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x239684u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_239688:
    // 0x239688: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x239688u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_23968c:
    // 0x23968c: 0x10000013  b           . + 4 + (0x13 << 2)
label_239690:
    if (ctx->pc == 0x239690u) {
        ctx->pc = 0x239690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23968Cu;
        // 0x239690: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239694u;
        goto label_239694;
    }
    ctx->pc = 0x23968Cu;
    {
        const bool branch_taken_0x23968c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23968Cu;
        // 0x239690: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23968c) {
            ctx->pc = 0x2396DCu;
            goto label_2396dc;
        }
    }
    ctx->pc = 0x239694u;
label_239694:
    // 0x239694: 0x0  nop
    ctx->pc = 0x239694u;
    // NOP
label_239698:
    // 0x239698: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x239698u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
label_23969c:
    // 0x23969c: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x23969cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_2396a0:
    // 0x2396a0: 0x24638a30  addiu       $v1, $v1, -0x75D0
    ctx->pc = 0x2396a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937136));
label_2396a4:
    // 0x2396a4: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x2396a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_2396a8:
    // 0x2396a8: 0xae050010  sw          $a1, 0x10($s0)
    ctx->pc = 0x2396a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 5));
label_2396ac:
    // 0x2396ac: 0xac83003c  sw          $v1, 0x3C($a0)
    ctx->pc = 0x2396acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 3));
label_2396b0:
    // 0x2396b0: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x2396b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_2396b4:
    // 0x2396b4: 0xae110014  sw          $s1, 0x14($s0)
    ctx->pc = 0x2396b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 17));
label_2396b8:
    // 0x2396b8: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_2396bc:
    if (ctx->pc == 0x2396BCu) {
        ctx->pc = 0x2396BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2396B8u;
        // 0x2396bc: 0xae050000  sw          $a1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2396C0u;
        goto label_2396c0;
    }
    ctx->pc = 0x2396B8u;
    {
        const bool branch_taken_0x2396b8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2396BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2396B8u;
        // 0x2396bc: 0xae050000  sw          $a1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2396b8) {
            ctx->pc = 0x2396DCu;
            goto label_2396dc;
        }
    }
    ctx->pc = 0x2396C0u;
label_2396c0:
    // 0x2396c0: 0xc0693f4  jal         func_1A4FD0
label_2396c4:
    if (ctx->pc == 0x2396C4u) {
        ctx->pc = 0x2396C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2396C0u;
        // 0x2396c4: 0x8604000e  lh          $a0, 0xE($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2396C8u;
        goto label_2396c8;
    }
    ctx->pc = 0x2396C0u;
    SET_GPR_U32(ctx, 31, 0x2396C8u);
    ctx->pc = 0x2396C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2396C0u;
    // 0x2396c4: 0x8604000e  lh          $a0, 0xE($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4FD0u;
    { ctx->pc = 0x1a4fd0; return; }
    ctx->pc = 0x2396C8u;
label_2396c8:
    // 0x2396c8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_2396cc:
    if (ctx->pc == 0x2396CCu) {
        ctx->pc = 0x2396CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2396C8u;
        // 0x2396cc: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2396D0u;
        goto label_2396d0;
    }
    ctx->pc = 0x2396C8u;
    {
        const bool branch_taken_0x2396c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2396c8) {
            ctx->pc = 0x2396CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2396C8u;
            // 0x2396cc: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2396E0u;
            goto label_2396e0;
        }
    }
    ctx->pc = 0x2396D0u;
label_2396d0:
    // 0x2396d0: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x2396d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_2396d4:
    // 0x2396d4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2396d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_2396d8:
    // 0x2396d8: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x2396d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_2396dc:
    // 0x2396dc: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x2396dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2396e0:
    // 0x2396e0: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x2396e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_2396e4:
    // 0x2396e4: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x2396e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2396e8:
    // 0x2396e8: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x2396e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_2396ec:
    // 0x2396ec: 0x3e00008  jr          $ra
label_2396f0:
    if (ctx->pc == 0x2396F0u) {
        ctx->pc = 0x2396F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2396ECu;
        // 0x2396f0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2396F4u;
        goto label_2396f4;
    }
    ctx->pc = 0x2396ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2396F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2396ECu;
        // 0x2396f0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2396ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2396F4u;
label_2396f4:
    // 0x2396f4: 0x0  nop
    ctx->pc = 0x2396f4u;
    // NOP
label_2396f8:
    // 0x2396f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2396f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2396fc:
    // 0x2396fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2396fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_239700:
    // 0x239700: 0x3c100029  lui         $s0, 0x29
    ctx->pc = 0x239700u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)41 << 16));
label_239704:
    // 0x239704: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x239704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_239708:
    // 0x239708: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x239708u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23970c:
    // 0x23970c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23970cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_239710:
    // 0x239710: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x239710u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_239714:
    // 0x239714: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x239714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_239718:
    // 0x239718: 0x26100818  addiu       $s0, $s0, 0x818
    ctx->pc = 0x239718u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2072));
label_23971c:
    // 0x23971c: 0xc08e9dc  jal         func_23A770
label_239720:
    if (ctx->pc == 0x239720u) {
        ctx->pc = 0x239720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23971Cu;
        // 0x239720: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239724u;
        goto label_239724;
    }
    ctx->pc = 0x23971Cu;
    SET_GPR_U32(ctx, 31, 0x239724u);
    ctx->pc = 0x239720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23971Cu;
    // 0x239720: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A770u;
    { ctx->pc = 0x23a770; return; }
    ctx->pc = 0x239724u;
label_239724:
    // 0x239724: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x239724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_239728:
    // 0x239728: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x239728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23972c:
    // 0x23972c: 0xc08e5d8  jal         func_239760
label_239730:
    if (ctx->pc == 0x239730u) {
        ctx->pc = 0x239730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23972Cu;
        // 0x239730: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239734u;
        goto label_239734;
    }
    ctx->pc = 0x23972Cu;
    SET_GPR_U32(ctx, 31, 0x239734u);
    ctx->pc = 0x239730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23972Cu;
    // 0x239730: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239760u;
    goto label_239760;
    ctx->pc = 0x239734u;
label_239734:
    // 0x239734: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x239734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_239738:
    // 0x239738: 0xc08e9fc  jal         func_23A7F0
label_23973c:
    if (ctx->pc == 0x23973Cu) {
        ctx->pc = 0x23973Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239738u;
        // 0x23973c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239740u;
        goto label_239740;
    }
    ctx->pc = 0x239738u;
    SET_GPR_U32(ctx, 31, 0x239740u);
    ctx->pc = 0x23973Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239738u;
    // 0x23973c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A7F0u;
    { ctx->pc = 0x23a7f0; return; }
    ctx->pc = 0x239740u;
label_239740:
    // 0x239740: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x239740u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_239744:
    // 0x239744: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x239744u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_239748:
    // 0x239748: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x239748u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_23974c:
    // 0x23974c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23974cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_239750:
    // 0x239750: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x239750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_239754:
    // 0x239754: 0x3e00008  jr          $ra
label_239758:
    if (ctx->pc == 0x239758u) {
        ctx->pc = 0x239758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239754u;
        // 0x239758: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23975Cu;
        goto label_23975c;
    }
    ctx->pc = 0x239754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239754u;
        // 0x239758: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23975Cu;
label_23975c:
    // 0x23975c: 0x0  nop
    ctx->pc = 0x23975cu;
    // NOP
label_239760:
    // 0x239760: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x239760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_239764:
    // 0x239764: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x239764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_239768:
    // 0x239768: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x239768u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23976c:
    // 0x23976c: 0x2e020011  sltiu       $v0, $s0, 0x11
    ctx->pc = 0x23976cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
label_239770:
    // 0x239770: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x239770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_239774:
    // 0x239774: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x239774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_239778:
    // 0x239778: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x239778u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_23977c:
    // 0x23977c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23977cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_239780:
    // 0x239780: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x239780u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_239784:
    // 0x239784: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x239784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_239788:
    // 0x239788: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_23978c:
    if (ctx->pc == 0x23978Cu) {
        ctx->pc = 0x23978Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239788u;
        // 0x23978c: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239790u;
        goto label_239790;
    }
    ctx->pc = 0x239788u;
    {
        const bool branch_taken_0x239788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23978Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239788u;
        // 0x23978c: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239788) {
            ctx->pc = 0x2397B0u;
            goto label_2397b0;
        }
    }
    ctx->pc = 0x239790u;
label_239790:
    // 0x239790: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x239790u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_239794:
    // 0x239794: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x239794u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_239798:
    // 0x239798: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x239798u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23979c:
    // 0x23979c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x23979cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2397a0:
    // 0x2397a0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2397a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2397a4:
    // 0x2397a4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2397a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2397a8:
    // 0x2397a8: 0x808e708  j           func_239C20
label_2397ac:
    if (ctx->pc == 0x2397ACu) {
        ctx->pc = 0x2397ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2397A8u;
        // 0x2397ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2397B0u;
        goto label_2397b0;
    }
    ctx->pc = 0x2397A8u;
    ctx->pc = 0x2397ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2397A8u;
    // 0x2397ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239C20u;
    { ctx->pc = 0x239c20; return; }
    ctx->pc = 0x2397B0u;
label_2397b0:
    // 0x2397b0: 0x24a50013  addiu       $a1, $a1, 0x13
    ctx->pc = 0x2397b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19));
label_2397b4:
    // 0x2397b4: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x2397b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_2397b8:
    // 0x2397b8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2397b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2397bc:
    // 0x2397bc: 0x2ca4001f  sltiu       $a0, $a1, 0x1F
    ctx->pc = 0x2397bcu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
label_2397c0:
    // 0x2397c0: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_2397c4:
    if (ctx->pc == 0x2397C4u) {
        ctx->pc = 0x2397C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2397C0u;
        // 0x2397c4: 0x62800b  movn        $s0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2397C8u;
        goto label_2397c8;
    }
    ctx->pc = 0x2397C0u;
    {
        const bool branch_taken_0x2397c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2397C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2397C0u;
        // 0x2397c4: 0x62800b  movn        $s0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2397c0) {
            ctx->pc = 0x2397D8u;
            goto label_2397d8;
        }
    }
    ctx->pc = 0x2397C8u;
label_2397c8:
    // 0x2397c8: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x2397c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_2397cc:
    // 0x2397cc: 0x10000003  b           . + 4 + (0x3 << 2)
label_2397d0:
    if (ctx->pc == 0x2397D0u) {
        ctx->pc = 0x2397D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2397CCu;
        // 0x2397d0: 0xa29824  and         $s3, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2397D4u;
        goto label_2397d4;
    }
    ctx->pc = 0x2397CCu;
    {
        const bool branch_taken_0x2397cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2397D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2397CCu;
        // 0x2397d0: 0xa29824  and         $s3, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2397cc) {
            ctx->pc = 0x2397DCu;
            goto label_2397dc;
        }
    }
    ctx->pc = 0x2397D4u;
label_2397d4:
    // 0x2397d4: 0x0  nop
    ctx->pc = 0x2397d4u;
    // NOP
label_2397d8:
    // 0x2397d8: 0x24130010  addiu       $s3, $zero, 0x10
    ctx->pc = 0x2397d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2397dc:
    // 0x2397dc: 0x2702821  addu        $a1, $s3, $s0
    ctx->pc = 0x2397dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_2397e0:
    // 0x2397e0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2397e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2397e4:
    // 0x2397e4: 0xc08e708  jal         func_239C20
label_2397e8:
    if (ctx->pc == 0x2397E8u) {
        ctx->pc = 0x2397E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2397E4u;
        // 0x2397e8: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2397ECu;
        goto label_2397ec;
    }
    ctx->pc = 0x2397E4u;
    SET_GPR_U32(ctx, 31, 0x2397ECu);
    ctx->pc = 0x2397E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2397E4u;
    // 0x2397e8: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239C20u;
    { ctx->pc = 0x239c20; return; }
    ctx->pc = 0x2397ECu;
label_2397ec:
    // 0x2397ec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2397ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2397f0:
    // 0x2397f0: 0x52200046  beql        $s1, $zero, . + 4 + (0x46 << 2)
label_2397f4:
    if (ctx->pc == 0x2397F4u) {
        ctx->pc = 0x2397F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2397F0u;
        // 0x2397f4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2397F8u;
        goto label_2397f8;
    }
    ctx->pc = 0x2397F0u;
    {
        const bool branch_taken_0x2397f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2397f0) {
            ctx->pc = 0x2397F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2397F0u;
            // 0x2397f4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23990Cu;
            goto label_23990c;
        }
    }
    ctx->pc = 0x2397F8u;
label_2397f8:
    // 0x2397f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2397f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2397fc:
    // 0x2397fc: 0xc08e9dc  jal         func_23A770
label_239800:
    if (ctx->pc == 0x239800u) {
        ctx->pc = 0x239800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2397FCu;
        // 0x239800: 0x2632fff8  addiu       $s2, $s1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239804u;
        goto label_239804;
    }
    ctx->pc = 0x2397FCu;
    SET_GPR_U32(ctx, 31, 0x239804u);
    ctx->pc = 0x239800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2397FCu;
    // 0x239800: 0x2632fff8  addiu       $s2, $s1, -0x8 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A770u;
    { ctx->pc = 0x23a770; return; }
    ctx->pc = 0x239804u;
label_239804:
    // 0x239804: 0x10283c  dsll32      $a1, $s0, 0
    ctx->pc = 0x239804u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 0));
label_239808:
    // 0x239808: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x239808u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
label_23980c:
    // 0x23980c: 0xc06d9fe  jal         func_1B67F8
label_239810:
    if (ctx->pc == 0x239810u) {
        ctx->pc = 0x239810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23980Cu;
        // 0x239810: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239814u;
        goto label_239814;
    }
    ctx->pc = 0x23980Cu;
    SET_GPR_U32(ctx, 31, 0x239814u);
    ctx->pc = 0x239810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23980Cu;
    // 0x239810: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B67F8u;
    { ctx->pc = 0x1b67f8; return; }
    ctx->pc = 0x239814u;
label_239814:
    // 0x239814: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_239818:
    if (ctx->pc == 0x239818u) {
        ctx->pc = 0x239818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239814u;
        // 0x239818: 0x2303821  addu        $a3, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23981Cu;
        goto label_23981c;
    }
    ctx->pc = 0x239814u;
    {
        const bool branch_taken_0x239814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239814u;
        // 0x239818: 0x2303821  addu        $a3, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239814) {
            ctx->pc = 0x239888u;
            goto label_239888;
        }
    }
    ctx->pc = 0x23981Cu;
label_23981c:
    // 0x23981c: 0x101023  negu        $v0, $s0
    ctx->pc = 0x23981cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
label_239820:
    // 0x239820: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x239820u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_239824:
    // 0x239824: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x239824u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_239828:
    // 0x239828: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x239828u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
label_23982c:
    // 0x23982c: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x23982cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_239830:
    // 0x239830: 0x24e7fff8  addiu       $a3, $a3, -0x8
    ctx->pc = 0x239830u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967288));
label_239834:
    // 0x239834: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x239834u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
label_239838:
    // 0x239838: 0xf21023  subu        $v0, $a3, $s2
    ctx->pc = 0x239838u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
label_23983c:
    // 0x23983c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x23983cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_239840:
    // 0x239840: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x239840u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
label_239844:
    // 0x239844: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x239844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_239848:
    // 0x239848: 0x501818  mult        $v1, $v0, $s0
    ctx->pc = 0x239848u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_23984c:
    // 0x23984c: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x23984cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_239850:
    // 0x239850: 0xf24023  subu        $t0, $a3, $s2
    ctx->pc = 0x239850u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
label_239854:
    // 0x239854: 0xc83023  subu        $a2, $a2, $t0
    ctx->pc = 0x239854u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_239858:
    // 0x239858: 0x34c30001  ori         $v1, $a2, 0x1
    ctx->pc = 0x239858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1);
label_23985c:
    // 0x23985c: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x23985cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_239860:
    // 0x239860: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x239860u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
label_239864:
    // 0x239864: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x239864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_239868:
    // 0x239868: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x239868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_23986c:
    // 0x23986c: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x23986cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_239870:
    // 0x239870: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x239870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_239874:
    // 0x239874: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x239874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_239878:
    // 0x239878: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x239878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
label_23987c:
    // 0x23987c: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x23987cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
label_239880:
    // 0x239880: 0xc08e2c0  jal         func_238B00
label_239884:
    if (ctx->pc == 0x239884u) {
        ctx->pc = 0x239884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239880u;
        // 0x239884: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239888u;
        goto label_239888;
    }
    ctx->pc = 0x239880u;
    SET_GPR_U32(ctx, 31, 0x239888u);
    ctx->pc = 0x239884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239880u;
    // 0x239884: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238B00u;
    { ctx->pc = 0x238b00; return; }
    ctx->pc = 0x239888u;
label_239888:
    // 0x239888: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x239888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_23988c:
    // 0x23988c: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x23988cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_239890:
    // 0x239890: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x239890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_239894:
    // 0x239894: 0x53202b  sltu        $a0, $v0, $s3
    ctx->pc = 0x239894u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_239898:
    // 0x239898: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_23989c:
    if (ctx->pc == 0x23989Cu) {
        ctx->pc = 0x23989Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239898u;
        // 0x23989c: 0x531023  subu        $v0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2398A0u;
        goto label_2398a0;
    }
    ctx->pc = 0x239898u;
    {
        const bool branch_taken_0x239898 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x239898) {
            ctx->pc = 0x23989Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x239898u;
            // 0x23989c: 0x531023  subu        $v0, $v0, $s3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2398B8u;
            goto label_2398b8;
        }
    }
    ctx->pc = 0x2398A0u;
label_2398a0:
    // 0x2398a0: 0x2621023  subu        $v0, $s3, $v0
    ctx->pc = 0x2398a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_2398a4:
    // 0x2398a4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2398a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2398a8:
    // 0x2398a8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2398a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_2398ac:
    // 0x2398ac: 0x10000004  b           . + 4 + (0x4 << 2)
label_2398b0:
    if (ctx->pc == 0x2398B0u) {
        ctx->pc = 0x2398B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2398ACu;
        // 0x2398b0: 0x2202f  dsubu       $a0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2398B4u;
        goto label_2398b4;
    }
    ctx->pc = 0x2398ACu;
    {
        const bool branch_taken_0x2398ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2398B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2398ACu;
        // 0x2398b0: 0x2202f  dsubu       $a0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2398ac) {
            ctx->pc = 0x2398C0u;
            goto label_2398c0;
        }
    }
    ctx->pc = 0x2398B4u;
label_2398b4:
    // 0x2398b4: 0x0  nop
    ctx->pc = 0x2398b4u;
    // NOP
label_2398b8:
    // 0x2398b8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2398b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2398bc:
    // 0x2398bc: 0x2203e  dsrl32      $a0, $v0, 0
    ctx->pc = 0x2398bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) >> (32 + 0));
label_2398c0:
    // 0x2398c0: 0x28820010  slti        $v0, $a0, 0x10
    ctx->pc = 0x2398c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
label_2398c4:
    // 0x2398c4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_2398c8:
    if (ctx->pc == 0x2398C8u) {
        ctx->pc = 0x2398C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2398C4u;
        // 0x2398c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2398CCu;
        goto label_2398cc;
    }
    ctx->pc = 0x2398C4u;
    {
        const bool branch_taken_0x2398c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2398C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2398C4u;
        // 0x2398c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2398c4) {
            ctx->pc = 0x2398FCu;
            goto label_2398fc;
        }
    }
    ctx->pc = 0x2398CCu;
label_2398cc:
    // 0x2398cc: 0x2533021  addu        $a2, $s2, $s3
    ctx->pc = 0x2398ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
label_2398d0:
    // 0x2398d0: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x2398d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_2398d4:
    // 0x2398d4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2398d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2398d8:
    // 0x2398d8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2398d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2398dc:
    // 0x2398dc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2398dcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2398e0:
    // 0x2398e0: 0x24c50008  addiu       $a1, $a2, 0x8
    ctx->pc = 0x2398e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_2398e4:
    // 0x2398e4: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x2398e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_2398e8:
    // 0x2398e8: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x2398e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2398ec:
    // 0x2398ec: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2398ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2398f0:
    // 0x2398f0: 0x731825  or          $v1, $v1, $s3
    ctx->pc = 0x2398f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
label_2398f4:
    // 0x2398f4: 0xc08e2c0  jal         func_238B00
label_2398f8:
    if (ctx->pc == 0x2398F8u) {
        ctx->pc = 0x2398F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2398F4u;
        // 0x2398f8: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2398FCu;
        goto label_2398fc;
    }
    ctx->pc = 0x2398F4u;
    SET_GPR_U32(ctx, 31, 0x2398FCu);
    ctx->pc = 0x2398F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2398F4u;
    // 0x2398f8: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238B00u;
    { ctx->pc = 0x238b00; return; }
    ctx->pc = 0x2398FCu;
label_2398fc:
    // 0x2398fc: 0xc08e9fc  jal         func_23A7F0
label_239900:
    if (ctx->pc == 0x239900u) {
        ctx->pc = 0x239900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2398FCu;
        // 0x239900: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239904u;
        goto label_239904;
    }
    ctx->pc = 0x2398FCu;
    SET_GPR_U32(ctx, 31, 0x239904u);
    ctx->pc = 0x239900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2398FCu;
    // 0x239900: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A7F0u;
    { ctx->pc = 0x23a7f0; return; }
    ctx->pc = 0x239904u;
label_239904:
    // 0x239904: 0x26420008  addiu       $v0, $s2, 0x8
    ctx->pc = 0x239904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_239908:
    // 0x239908: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x239908u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23990c:
    // 0x23990c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23990cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_239910:
    // 0x239910: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x239910u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_239914:
    // 0x239914: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x239914u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_239918:
    // 0x239918: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x239918u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23991c:
    // 0x23991c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x23991cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_239920:
    // 0x239920: 0x3e00008  jr          $ra
label_239924:
    if (ctx->pc == 0x239924u) {
        ctx->pc = 0x239924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239920u;
        // 0x239924: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239928u;
        goto label_239928;
    }
    ctx->pc = 0x239920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239920u;
        // 0x239924: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x239920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x239928u;
label_239928:
    // 0x239928: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x239928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_23992c:
    // 0x23992c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23992cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_239930:
    // 0x239930: 0x3c100029  lui         $s0, 0x29
    ctx->pc = 0x239930u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)41 << 16));
label_239934:
    // 0x239934: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x239934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_239938:
    // 0x239938: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x239938u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23993c:
    // 0x23993c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23993cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_239940:
    // 0x239940: 0x26100818  addiu       $s0, $s0, 0x818
    ctx->pc = 0x239940u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2072));
label_239944:
    // 0x239944: 0xc08e9dc  jal         func_23A770
label_239948:
    if (ctx->pc == 0x239948u) {
        ctx->pc = 0x239948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239944u;
        // 0x239948: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23994Cu;
        goto label_23994c;
    }
    ctx->pc = 0x239944u;
    SET_GPR_U32(ctx, 31, 0x23994Cu);
    ctx->pc = 0x239948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239944u;
    // 0x239948: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A770u;
    { ctx->pc = 0x23a770; return; }
    ctx->pc = 0x23994Cu;
label_23994c:
    // 0x23994c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x23994cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_239950:
    // 0x239950: 0xc08e708  jal         func_239C20
label_239954:
    if (ctx->pc == 0x239954u) {
        ctx->pc = 0x239954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239950u;
        // 0x239954: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239958u;
        goto label_239958;
    }
    ctx->pc = 0x239950u;
    SET_GPR_U32(ctx, 31, 0x239958u);
    ctx->pc = 0x239954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239950u;
    // 0x239954: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239C20u;
    { ctx->pc = 0x239c20; return; }
    ctx->pc = 0x239958u;
label_239958:
    // 0x239958: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x239958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_23995c:
    // 0x23995c: 0xc08e9fc  jal         func_23A7F0
label_239960:
    if (ctx->pc == 0x239960u) {
        ctx->pc = 0x239960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23995Cu;
        // 0x239960: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239964u;
        goto label_239964;
    }
    ctx->pc = 0x23995Cu;
    SET_GPR_U32(ctx, 31, 0x239964u);
    ctx->pc = 0x239960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23995Cu;
    // 0x239960: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A7F0u;
    { ctx->pc = 0x23a7f0; return; }
    ctx->pc = 0x239964u;
label_239964:
    // 0x239964: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x239964u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_239968:
    // 0x239968: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x239968u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23996c:
    // 0x23996c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23996cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->pc = 0x239970u;
    return;
}

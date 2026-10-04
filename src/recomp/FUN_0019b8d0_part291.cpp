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


void FUN_0019b8d0_part291(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x229270u: goto label_229270;
        case 0x229274u: goto label_229274;
        case 0x229278u: goto label_229278;
        case 0x22927cu: goto label_22927c;
        case 0x229280u: goto label_229280;
        case 0x229284u: goto label_229284;
        case 0x229288u: goto label_229288;
        case 0x22928cu: goto label_22928c;
        case 0x229290u: goto label_229290;
        case 0x229294u: goto label_229294;
        case 0x229298u: goto label_229298;
        case 0x22929cu: goto label_22929c;
        case 0x2292a0u: goto label_2292a0;
        case 0x2292a4u: goto label_2292a4;
        case 0x2292a8u: goto label_2292a8;
        case 0x2292acu: goto label_2292ac;
        case 0x2292b0u: goto label_2292b0;
        case 0x2292b4u: goto label_2292b4;
        case 0x2292b8u: goto label_2292b8;
        case 0x2292bcu: goto label_2292bc;
        case 0x2292c0u: goto label_2292c0;
        case 0x2292c4u: goto label_2292c4;
        case 0x2292c8u: goto label_2292c8;
        case 0x2292ccu: goto label_2292cc;
        case 0x2292d0u: goto label_2292d0;
        case 0x2292d4u: goto label_2292d4;
        case 0x2292d8u: goto label_2292d8;
        case 0x2292dcu: goto label_2292dc;
        case 0x2292e0u: goto label_2292e0;
        case 0x2292e4u: goto label_2292e4;
        case 0x2292e8u: goto label_2292e8;
        case 0x2292ecu: goto label_2292ec;
        case 0x2292f0u: goto label_2292f0;
        case 0x2292f4u: goto label_2292f4;
        case 0x2292f8u: goto label_2292f8;
        case 0x2292fcu: goto label_2292fc;
        case 0x229300u: goto label_229300;
        case 0x229304u: goto label_229304;
        case 0x229308u: goto label_229308;
        case 0x22930cu: goto label_22930c;
        case 0x229310u: goto label_229310;
        case 0x229314u: goto label_229314;
        case 0x229318u: goto label_229318;
        case 0x22931cu: goto label_22931c;
        case 0x229320u: goto label_229320;
        case 0x229324u: goto label_229324;
        case 0x229328u: goto label_229328;
        case 0x22932cu: goto label_22932c;
        case 0x229330u: goto label_229330;
        case 0x229334u: goto label_229334;
        case 0x229338u: goto label_229338;
        case 0x22933cu: goto label_22933c;
        case 0x229340u: goto label_229340;
        case 0x229344u: goto label_229344;
        case 0x229348u: goto label_229348;
        case 0x22934cu: goto label_22934c;
        case 0x229350u: goto label_229350;
        case 0x229354u: goto label_229354;
        case 0x229358u: goto label_229358;
        case 0x22935cu: goto label_22935c;
        case 0x229360u: goto label_229360;
        case 0x229364u: goto label_229364;
        case 0x229368u: goto label_229368;
        case 0x22936cu: goto label_22936c;
        case 0x229370u: goto label_229370;
        case 0x229374u: goto label_229374;
        case 0x229378u: goto label_229378;
        case 0x22937cu: goto label_22937c;
        case 0x229380u: goto label_229380;
        case 0x229384u: goto label_229384;
        case 0x229388u: goto label_229388;
        case 0x22938cu: goto label_22938c;
        case 0x229390u: goto label_229390;
        case 0x229394u: goto label_229394;
        case 0x229398u: goto label_229398;
        case 0x22939cu: goto label_22939c;
        case 0x2293a0u: goto label_2293a0;
        case 0x2293a4u: goto label_2293a4;
        case 0x2293a8u: goto label_2293a8;
        case 0x2293acu: goto label_2293ac;
        case 0x2293b0u: goto label_2293b0;
        case 0x2293b4u: goto label_2293b4;
        case 0x2293b8u: goto label_2293b8;
        case 0x2293bcu: goto label_2293bc;
        case 0x2293c0u: goto label_2293c0;
        case 0x2293c4u: goto label_2293c4;
        case 0x2293c8u: goto label_2293c8;
        case 0x2293ccu: goto label_2293cc;
        case 0x2293d0u: goto label_2293d0;
        case 0x2293d4u: goto label_2293d4;
        case 0x2293d8u: goto label_2293d8;
        case 0x2293dcu: goto label_2293dc;
        case 0x2293e0u: goto label_2293e0;
        case 0x2293e4u: goto label_2293e4;
        case 0x2293e8u: goto label_2293e8;
        case 0x2293ecu: goto label_2293ec;
        case 0x2293f0u: goto label_2293f0;
        case 0x2293f4u: goto label_2293f4;
        case 0x2293f8u: goto label_2293f8;
        case 0x2293fcu: goto label_2293fc;
        case 0x229400u: goto label_229400;
        case 0x229404u: goto label_229404;
        case 0x229408u: goto label_229408;
        case 0x22940cu: goto label_22940c;
        case 0x229410u: goto label_229410;
        case 0x229414u: goto label_229414;
        case 0x229418u: goto label_229418;
        case 0x22941cu: goto label_22941c;
        case 0x229420u: goto label_229420;
        case 0x229424u: goto label_229424;
        case 0x229428u: goto label_229428;
        case 0x22942cu: goto label_22942c;
        case 0x229430u: goto label_229430;
        case 0x229434u: goto label_229434;
        case 0x229438u: goto label_229438;
        case 0x22943cu: goto label_22943c;
        case 0x229440u: goto label_229440;
        case 0x229444u: goto label_229444;
        case 0x229448u: goto label_229448;
        case 0x22944cu: goto label_22944c;
        case 0x229450u: goto label_229450;
        case 0x229454u: goto label_229454;
        case 0x229458u: goto label_229458;
        case 0x22945cu: goto label_22945c;
        case 0x229460u: goto label_229460;
        case 0x229464u: goto label_229464;
        case 0x229468u: goto label_229468;
        case 0x22946cu: goto label_22946c;
        case 0x229470u: goto label_229470;
        case 0x229474u: goto label_229474;
        case 0x229478u: goto label_229478;
        case 0x22947cu: goto label_22947c;
        case 0x229480u: goto label_229480;
        case 0x229484u: goto label_229484;
        case 0x229488u: goto label_229488;
        case 0x22948cu: goto label_22948c;
        case 0x229490u: goto label_229490;
        case 0x229494u: goto label_229494;
        case 0x229498u: goto label_229498;
        case 0x22949cu: goto label_22949c;
        case 0x2294a0u: goto label_2294a0;
        case 0x2294a4u: goto label_2294a4;
        case 0x2294a8u: goto label_2294a8;
        case 0x2294acu: goto label_2294ac;
        case 0x2294b0u: goto label_2294b0;
        case 0x2294b4u: goto label_2294b4;
        case 0x2294b8u: goto label_2294b8;
        case 0x2294bcu: goto label_2294bc;
        case 0x2294c0u: goto label_2294c0;
        case 0x2294c4u: goto label_2294c4;
        case 0x2294c8u: goto label_2294c8;
        case 0x2294ccu: goto label_2294cc;
        case 0x2294d0u: goto label_2294d0;
        case 0x2294d4u: goto label_2294d4;
        case 0x2294d8u: goto label_2294d8;
        case 0x2294dcu: goto label_2294dc;
        case 0x2294e0u: goto label_2294e0;
        case 0x2294e4u: goto label_2294e4;
        case 0x2294e8u: goto label_2294e8;
        case 0x2294ecu: goto label_2294ec;
        case 0x2294f0u: goto label_2294f0;
        case 0x2294f4u: goto label_2294f4;
        case 0x2294f8u: goto label_2294f8;
        case 0x2294fcu: goto label_2294fc;
        case 0x229500u: goto label_229500;
        case 0x229504u: goto label_229504;
        case 0x229508u: goto label_229508;
        case 0x22950cu: goto label_22950c;
        case 0x229510u: goto label_229510;
        case 0x229514u: goto label_229514;
        case 0x229518u: goto label_229518;
        case 0x22951cu: goto label_22951c;
        case 0x229520u: goto label_229520;
        case 0x229524u: goto label_229524;
        case 0x229528u: goto label_229528;
        case 0x22952cu: goto label_22952c;
        case 0x229530u: goto label_229530;
        case 0x229534u: goto label_229534;
        case 0x229538u: goto label_229538;
        case 0x22953cu: goto label_22953c;
        case 0x229540u: goto label_229540;
        case 0x229544u: goto label_229544;
        case 0x229548u: goto label_229548;
        case 0x22954cu: goto label_22954c;
        case 0x229550u: goto label_229550;
        case 0x229554u: goto label_229554;
        case 0x229558u: goto label_229558;
        case 0x22955cu: goto label_22955c;
        case 0x229560u: goto label_229560;
        case 0x229564u: goto label_229564;
        case 0x229568u: goto label_229568;
        case 0x22956cu: goto label_22956c;
        case 0x229570u: goto label_229570;
        case 0x229574u: goto label_229574;
        case 0x229578u: goto label_229578;
        case 0x22957cu: goto label_22957c;
        case 0x229580u: goto label_229580;
        case 0x229584u: goto label_229584;
        case 0x229588u: goto label_229588;
        case 0x22958cu: goto label_22958c;
        case 0x229590u: goto label_229590;
        case 0x229594u: goto label_229594;
        case 0x229598u: goto label_229598;
        case 0x22959cu: goto label_22959c;
        case 0x2295a0u: goto label_2295a0;
        case 0x2295a4u: goto label_2295a4;
        case 0x2295a8u: goto label_2295a8;
        case 0x2295acu: goto label_2295ac;
        case 0x2295b0u: goto label_2295b0;
        case 0x2295b4u: goto label_2295b4;
        case 0x2295b8u: goto label_2295b8;
        case 0x2295bcu: goto label_2295bc;
        case 0x2295c0u: goto label_2295c0;
        case 0x2295c4u: goto label_2295c4;
        case 0x2295c8u: goto label_2295c8;
        case 0x2295ccu: goto label_2295cc;
        case 0x2295d0u: goto label_2295d0;
        case 0x2295d4u: goto label_2295d4;
        case 0x2295d8u: goto label_2295d8;
        case 0x2295dcu: goto label_2295dc;
        case 0x2295e0u: goto label_2295e0;
        case 0x2295e4u: goto label_2295e4;
        case 0x2295e8u: goto label_2295e8;
        case 0x2295ecu: goto label_2295ec;
        case 0x2295f0u: goto label_2295f0;
        case 0x2295f4u: goto label_2295f4;
        case 0x2295f8u: goto label_2295f8;
        case 0x2295fcu: goto label_2295fc;
        case 0x229600u: goto label_229600;
        case 0x229604u: goto label_229604;
        case 0x229608u: goto label_229608;
        case 0x22960cu: goto label_22960c;
        case 0x229610u: goto label_229610;
        case 0x229614u: goto label_229614;
        case 0x229618u: goto label_229618;
        case 0x22961cu: goto label_22961c;
        case 0x229620u: goto label_229620;
        case 0x229624u: goto label_229624;
        case 0x229628u: goto label_229628;
        case 0x22962cu: goto label_22962c;
        case 0x229630u: goto label_229630;
        case 0x229634u: goto label_229634;
        case 0x229638u: goto label_229638;
        case 0x22963cu: goto label_22963c;
        case 0x229640u: goto label_229640;
        case 0x229644u: goto label_229644;
        case 0x229648u: goto label_229648;
        case 0x22964cu: goto label_22964c;
        case 0x229650u: goto label_229650;
        case 0x229654u: goto label_229654;
        case 0x229658u: goto label_229658;
        case 0x22965cu: goto label_22965c;
        case 0x229660u: goto label_229660;
        case 0x229664u: goto label_229664;
        case 0x229668u: goto label_229668;
        case 0x22966cu: goto label_22966c;
        case 0x229670u: goto label_229670;
        case 0x229674u: goto label_229674;
        case 0x229678u: goto label_229678;
        case 0x22967cu: goto label_22967c;
        case 0x229680u: goto label_229680;
        case 0x229684u: goto label_229684;
        case 0x229688u: goto label_229688;
        case 0x22968cu: goto label_22968c;
        case 0x229690u: goto label_229690;
        case 0x229694u: goto label_229694;
        case 0x229698u: goto label_229698;
        case 0x22969cu: goto label_22969c;
        case 0x2296a0u: goto label_2296a0;
        case 0x2296a4u: goto label_2296a4;
        case 0x2296a8u: goto label_2296a8;
        case 0x2296acu: goto label_2296ac;
        case 0x2296b0u: goto label_2296b0;
        case 0x2296b4u: goto label_2296b4;
        case 0x2296b8u: goto label_2296b8;
        case 0x2296bcu: goto label_2296bc;
        case 0x2296c0u: goto label_2296c0;
        case 0x2296c4u: goto label_2296c4;
        case 0x2296c8u: goto label_2296c8;
        case 0x2296ccu: goto label_2296cc;
        case 0x2296d0u: goto label_2296d0;
        case 0x2296d4u: goto label_2296d4;
        case 0x2296d8u: goto label_2296d8;
        case 0x2296dcu: goto label_2296dc;
        case 0x2296e0u: goto label_2296e0;
        case 0x2296e4u: goto label_2296e4;
        case 0x2296e8u: goto label_2296e8;
        case 0x2296ecu: goto label_2296ec;
        case 0x2296f0u: goto label_2296f0;
        case 0x2296f4u: goto label_2296f4;
        case 0x2296f8u: goto label_2296f8;
        case 0x2296fcu: goto label_2296fc;
        case 0x229700u: goto label_229700;
        case 0x229704u: goto label_229704;
        case 0x229708u: goto label_229708;
        case 0x22970cu: goto label_22970c;
        case 0x229710u: goto label_229710;
        case 0x229714u: goto label_229714;
        case 0x229718u: goto label_229718;
        case 0x22971cu: goto label_22971c;
        case 0x229720u: goto label_229720;
        case 0x229724u: goto label_229724;
        case 0x229728u: goto label_229728;
        case 0x22972cu: goto label_22972c;
        case 0x229730u: goto label_229730;
        case 0x229734u: goto label_229734;
        case 0x229738u: goto label_229738;
        case 0x22973cu: goto label_22973c;
        case 0x229740u: goto label_229740;
        case 0x229744u: goto label_229744;
        case 0x229748u: goto label_229748;
        case 0x22974cu: goto label_22974c;
        case 0x229750u: goto label_229750;
        case 0x229754u: goto label_229754;
        case 0x229758u: goto label_229758;
        case 0x22975cu: goto label_22975c;
        case 0x229760u: goto label_229760;
        case 0x229764u: goto label_229764;
        case 0x229768u: goto label_229768;
        case 0x22976cu: goto label_22976c;
        case 0x229770u: goto label_229770;
        case 0x229774u: goto label_229774;
        case 0x229778u: goto label_229778;
        case 0x22977cu: goto label_22977c;
        case 0x229780u: goto label_229780;
        case 0x229784u: goto label_229784;
        case 0x229788u: goto label_229788;
        case 0x22978cu: goto label_22978c;
        case 0x229790u: goto label_229790;
        case 0x229794u: goto label_229794;
        case 0x229798u: goto label_229798;
        case 0x22979cu: goto label_22979c;
        case 0x2297a0u: goto label_2297a0;
        case 0x2297a4u: goto label_2297a4;
        case 0x2297a8u: goto label_2297a8;
        case 0x2297acu: goto label_2297ac;
        case 0x2297b0u: goto label_2297b0;
        case 0x2297b4u: goto label_2297b4;
        case 0x2297b8u: goto label_2297b8;
        case 0x2297bcu: goto label_2297bc;
        case 0x2297c0u: goto label_2297c0;
        case 0x2297c4u: goto label_2297c4;
        case 0x2297c8u: goto label_2297c8;
        case 0x2297ccu: goto label_2297cc;
        case 0x2297d0u: goto label_2297d0;
        case 0x2297d4u: goto label_2297d4;
        case 0x2297d8u: goto label_2297d8;
        case 0x2297dcu: goto label_2297dc;
        case 0x2297e0u: goto label_2297e0;
        case 0x2297e4u: goto label_2297e4;
        case 0x2297e8u: goto label_2297e8;
        case 0x2297ecu: goto label_2297ec;
        case 0x2297f0u: goto label_2297f0;
        case 0x2297f4u: goto label_2297f4;
        case 0x2297f8u: goto label_2297f8;
        case 0x2297fcu: goto label_2297fc;
        case 0x229800u: goto label_229800;
        case 0x229804u: goto label_229804;
        case 0x229808u: goto label_229808;
        case 0x22980cu: goto label_22980c;
        case 0x229810u: goto label_229810;
        case 0x229814u: goto label_229814;
        case 0x229818u: goto label_229818;
        case 0x22981cu: goto label_22981c;
        case 0x229820u: goto label_229820;
        case 0x229824u: goto label_229824;
        case 0x229828u: goto label_229828;
        case 0x22982cu: goto label_22982c;
        case 0x229830u: goto label_229830;
        case 0x229834u: goto label_229834;
        case 0x229838u: goto label_229838;
        case 0x22983cu: goto label_22983c;
        case 0x229840u: goto label_229840;
        case 0x229844u: goto label_229844;
        case 0x229848u: goto label_229848;
        case 0x22984cu: goto label_22984c;
        case 0x229850u: goto label_229850;
        case 0x229854u: goto label_229854;
        case 0x229858u: goto label_229858;
        case 0x22985cu: goto label_22985c;
        case 0x229860u: goto label_229860;
        case 0x229864u: goto label_229864;
        case 0x229868u: goto label_229868;
        case 0x22986cu: goto label_22986c;
        case 0x229870u: goto label_229870;
        case 0x229874u: goto label_229874;
        case 0x229878u: goto label_229878;
        case 0x22987cu: goto label_22987c;
        case 0x229880u: goto label_229880;
        case 0x229884u: goto label_229884;
        case 0x229888u: goto label_229888;
        case 0x22988cu: goto label_22988c;
        case 0x229890u: goto label_229890;
        case 0x229894u: goto label_229894;
        case 0x229898u: goto label_229898;
        case 0x22989cu: goto label_22989c;
        case 0x2298a0u: goto label_2298a0;
        case 0x2298a4u: goto label_2298a4;
        case 0x2298a8u: goto label_2298a8;
        case 0x2298acu: goto label_2298ac;
        case 0x2298b0u: goto label_2298b0;
        case 0x2298b4u: goto label_2298b4;
        case 0x2298b8u: goto label_2298b8;
        case 0x2298bcu: goto label_2298bc;
        case 0x2298c0u: goto label_2298c0;
        case 0x2298c4u: goto label_2298c4;
        case 0x2298c8u: goto label_2298c8;
        case 0x2298ccu: goto label_2298cc;
        case 0x2298d0u: goto label_2298d0;
        case 0x2298d4u: goto label_2298d4;
        case 0x2298d8u: goto label_2298d8;
        case 0x2298dcu: goto label_2298dc;
        case 0x2298e0u: goto label_2298e0;
        case 0x2298e4u: goto label_2298e4;
        case 0x2298e8u: goto label_2298e8;
        case 0x2298ecu: goto label_2298ec;
        case 0x2298f0u: goto label_2298f0;
        case 0x2298f4u: goto label_2298f4;
        case 0x2298f8u: goto label_2298f8;
        case 0x2298fcu: goto label_2298fc;
        case 0x229900u: goto label_229900;
        case 0x229904u: goto label_229904;
        case 0x229908u: goto label_229908;
        case 0x22990cu: goto label_22990c;
        case 0x229910u: goto label_229910;
        case 0x229914u: goto label_229914;
        case 0x229918u: goto label_229918;
        case 0x22991cu: goto label_22991c;
        case 0x229920u: goto label_229920;
        case 0x229924u: goto label_229924;
        case 0x229928u: goto label_229928;
        case 0x22992cu: goto label_22992c;
        case 0x229930u: goto label_229930;
        case 0x229934u: goto label_229934;
        case 0x229938u: goto label_229938;
        case 0x22993cu: goto label_22993c;
        case 0x229940u: goto label_229940;
        case 0x229944u: goto label_229944;
        case 0x229948u: goto label_229948;
        case 0x22994cu: goto label_22994c;
        case 0x229950u: goto label_229950;
        case 0x229954u: goto label_229954;
        case 0x229958u: goto label_229958;
        case 0x22995cu: goto label_22995c;
        case 0x229960u: goto label_229960;
        case 0x229964u: goto label_229964;
        case 0x229968u: goto label_229968;
        case 0x22996cu: goto label_22996c;
        case 0x229970u: goto label_229970;
        case 0x229974u: goto label_229974;
        case 0x229978u: goto label_229978;
        case 0x22997cu: goto label_22997c;
        case 0x229980u: goto label_229980;
        case 0x229984u: goto label_229984;
        case 0x229988u: goto label_229988;
        case 0x22998cu: goto label_22998c;
        case 0x229990u: goto label_229990;
        case 0x229994u: goto label_229994;
        case 0x229998u: goto label_229998;
        case 0x22999cu: goto label_22999c;
        case 0x2299a0u: goto label_2299a0;
        case 0x2299a4u: goto label_2299a4;
        case 0x2299a8u: goto label_2299a8;
        case 0x2299acu: goto label_2299ac;
        case 0x2299b0u: goto label_2299b0;
        case 0x2299b4u: goto label_2299b4;
        case 0x2299b8u: goto label_2299b8;
        case 0x2299bcu: goto label_2299bc;
        case 0x2299c0u: goto label_2299c0;
        case 0x2299c4u: goto label_2299c4;
        case 0x2299c8u: goto label_2299c8;
        case 0x2299ccu: goto label_2299cc;
        case 0x2299d0u: goto label_2299d0;
        case 0x2299d4u: goto label_2299d4;
        case 0x2299d8u: goto label_2299d8;
        case 0x2299dcu: goto label_2299dc;
        case 0x2299e0u: goto label_2299e0;
        case 0x2299e4u: goto label_2299e4;
        case 0x2299e8u: goto label_2299e8;
        case 0x2299ecu: goto label_2299ec;
        case 0x2299f0u: goto label_2299f0;
        case 0x2299f4u: goto label_2299f4;
        case 0x2299f8u: goto label_2299f8;
        case 0x2299fcu: goto label_2299fc;
        case 0x229a00u: goto label_229a00;
        case 0x229a04u: goto label_229a04;
        case 0x229a08u: goto label_229a08;
        case 0x229a0cu: goto label_229a0c;
        case 0x229a10u: goto label_229a10;
        case 0x229a14u: goto label_229a14;
        case 0x229a18u: goto label_229a18;
        case 0x229a1cu: goto label_229a1c;
        case 0x229a20u: goto label_229a20;
        case 0x229a24u: goto label_229a24;
        case 0x229a28u: goto label_229a28;
        case 0x229a2cu: goto label_229a2c;
        case 0x229a30u: goto label_229a30;
        case 0x229a34u: goto label_229a34;
        case 0x229a38u: goto label_229a38;
        case 0x229a3cu: goto label_229a3c;
        default: return;
    }

label_229270:
    // 0x229270: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x229270u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_229274:
    // 0x229274: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x229274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_229278:
    // 0x229278: 0x2442ec50  addiu       $v0, $v0, -0x13B0
    ctx->pc = 0x229278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962256));
label_22927c:
    // 0x22927c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x22927cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_229280:
    // 0x229280: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x229280u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_229284:
    // 0x229284: 0x90450001  lbu         $a1, 0x1($v0)
    ctx->pc = 0x229284u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_229288:
    // 0x229288: 0xc044934  jal         func_1124D0
label_22928c:
    if (ctx->pc == 0x22928Cu) {
        ctx->pc = 0x22928Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229288u;
        // 0x22928c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229290u;
        goto label_229290;
    }
    ctx->pc = 0x229288u;
    SET_GPR_U32(ctx, 31, 0x229290u);
    ctx->pc = 0x22928Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229288u;
    // 0x22928c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1124D0u, 0x229288u, 0x229290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229290u;
label_229290:
    // 0x229290: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x229290u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_229294:
    // 0x229294: 0x2a22000b  slti        $v0, $s1, 0xB
    ctx->pc = 0x229294u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)11) ? 1 : 0);
label_229298:
    // 0x229298: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_22929c:
    if (ctx->pc == 0x22929Cu) {
        ctx->pc = 0x22929Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229298u;
        // 0x22929c: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2292A0u;
        goto label_2292a0;
    }
    ctx->pc = 0x229298u;
    {
        const bool branch_taken_0x229298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22929Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229298u;
        // 0x22929c: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229298) {
            ctx->pc = 0x229274u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_229274;
        }
    }
    ctx->pc = 0x2292A0u;
label_2292a0:
    // 0x2292a0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2292a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2292a4:
    // 0x2292a4: 0xc82d  daddu       $t9, $zero, $zero
    ctx->pc = 0x2292a4u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2292a8:
    // 0x2292a8: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x2292a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_2292ac:
    // 0x2292ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2292acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2292b0:
    // 0x2292b0: 0x2442ec90  addiu       $v0, $v0, -0x1370
    ctx->pc = 0x2292b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962320));
label_2292b4:
    // 0x2292b4: 0xc02d  daddu       $t8, $zero, $zero
    ctx->pc = 0x2292b4u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2292b8:
    // 0x2292b8: 0x591021  addu        $v0, $v0, $t9
    ctx->pc = 0x2292b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 25)));
label_2292bc:
    // 0x2292bc: 0x904b0000  lbu         $t3, 0x0($v0)
    ctx->pc = 0x2292bcu;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2292c0:
    // 0x2292c0: 0x904c0001  lbu         $t4, 0x1($v0)
    ctx->pc = 0x2292c0u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_2292c4:
    // 0x2292c4: 0x904d0002  lbu         $t5, 0x2($v0)
    ctx->pc = 0x2292c4u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_2292c8:
    // 0x2292c8: 0x904e0003  lbu         $t6, 0x3($v0)
    ctx->pc = 0x2292c8u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_2292cc:
    // 0x2292cc: 0x0  nop
    ctx->pc = 0x2292ccu;
    // NOP
label_2292d0:
    // 0x2292d0: 0x1ab2023  subu        $a0, $t5, $t3
    ctx->pc = 0x2292d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
label_2292d4:
    // 0x2292d4: 0x3c02459c  lui         $v0, 0x459C
    ctx->pc = 0x2292d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17820 << 16));
label_2292d8:
    // 0x2292d8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2292d8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2292dc:
    // 0x2292dc: 0x1cc1823  subu        $v1, $t6, $t4
    ctx->pc = 0x2292dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
label_2292e0:
    // 0x2292e0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x2292e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_2292e4:
    // 0x2292e4: 0x3c07002f  lui         $a3, 0x2F
    ctx->pc = 0x2292e4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)47 << 16));
label_2292e8:
    // 0x2292e8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2292e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2292ec:
    // 0x2292ec: 0x24e72570  addiu       $a3, $a3, 0x2570
    ctx->pc = 0x2292ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9584));
label_2292f0:
    // 0x2292f0: 0x2405004a  addiu       $a1, $zero, 0x4A
    ctx->pc = 0x2292f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
label_2292f4:
    // 0x2292f4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2292f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2292f8:
    // 0x2292f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2292f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2292fc:
    // 0x2292fc: 0x0  nop
    ctx->pc = 0x2292fcu;
    // NOP
label_229300:
    // 0x229300: 0x46011882  mul.s       $f2, $f3, $f1
    ctx->pc = 0x229300u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_229304:
    // 0x229304: 0x3c0268db  lui         $v0, 0x68DB
    ctx->pc = 0x229304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26843 << 16));
label_229308:
    // 0x229308: 0x34428bad  ori         $v0, $v0, 0x8BAD
    ctx->pc = 0x229308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35757);
label_22930c:
    // 0x22930c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22930cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_229310:
    // 0x229310: 0x46001842  mul.s       $f1, $f3, $f0
    ctx->pc = 0x229310u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_229314:
    // 0x229314: 0x0  nop
    ctx->pc = 0x229314u;
    // NOP
label_229318:
    // 0x229318: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x229318u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22931c:
    // 0x22931c: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x22931cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_229320:
    // 0x229320: 0xf83021  addu        $a2, $a3, $t8
    ctx->pc = 0x229320u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 24)));
label_229324:
    // 0x229324: 0x24c60000  addiu       $a2, $a2, 0x0
    ctx->pc = 0x229324u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 0));
label_229328:
    // 0x229328: 0xcf5021  addu        $t2, $a2, $t7
    ctx->pc = 0x229328u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 15)));
label_22932c:
    // 0x22932c: 0x91510039  lbu         $s1, 0x39($t2)
    ctx->pc = 0x22932cu;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 57)));
label_229330:
    // 0x229330: 0x16250045  bne         $s1, $a1, . + 4 + (0x45 << 2)
label_229334:
    if (ctx->pc == 0x229334u) {
        ctx->pc = 0x229338u;
        goto label_229338;
    }
    ctx->pc = 0x229330u;
    {
        const bool branch_taken_0x229330 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 5));
        if (branch_taken_0x229330) {
            ctx->pc = 0x229448u;
            goto label_229448;
        }
    }
    ctx->pc = 0x229338u;
label_229338:
    // 0x229338: 0x91510022  lbu         $s1, 0x22($t2)
    ctx->pc = 0x229338u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 34)));
label_22933c:
    // 0x22933c: 0x162b0020  bne         $s1, $t3, . + 4 + (0x20 << 2)
label_229340:
    if (ctx->pc == 0x229340u) {
        ctx->pc = 0x229344u;
        goto label_229344;
    }
    ctx->pc = 0x22933Cu;
    {
        const bool branch_taken_0x22933c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 11));
        if (branch_taken_0x22933c) {
            ctx->pc = 0x2293C0u;
            goto label_2293c0;
        }
    }
    ctx->pc = 0x229344u;
label_229344:
    // 0x229344: 0x91510023  lbu         $s1, 0x23($t2)
    ctx->pc = 0x229344u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 35)));
label_229348:
    // 0x229348: 0x162c001d  bne         $s1, $t4, . + 4 + (0x1D << 2)
label_22934c:
    if (ctx->pc == 0x22934Cu) {
        ctx->pc = 0x229350u;
        goto label_229350;
    }
    ctx->pc = 0x229348u;
    {
        const bool branch_taken_0x229348 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 12));
        if (branch_taken_0x229348) {
            ctx->pc = 0x2293C0u;
            goto label_2293c0;
        }
    }
    ctx->pc = 0x229350u;
label_229350:
    // 0x229350: 0xc5400004  lwc1        $f0, 0x4($t2)
    ctx->pc = 0x229350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_229354:
    // 0x229354: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x229354u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_229358:
    // 0x229358: 0xe5400004  swc1        $f0, 0x4($t2)
    ctx->pc = 0x229358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
label_22935c:
    // 0x22935c: 0xc5400008  lwc1        $f0, 0x8($t2)
    ctx->pc = 0x22935cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_229360:
    // 0x229360: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x229360u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_229364:
    // 0x229364: 0xe5400008  swc1        $f0, 0x8($t2)
    ctx->pc = 0x229364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 8), bits); }
label_229368:
    // 0x229368: 0xc5400004  lwc1        $f0, 0x4($t2)
    ctx->pc = 0x229368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22936c:
    // 0x22936c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x22936cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_229370:
    // 0x229370: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x229370u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
label_229374:
    // 0x229374: 0x0  nop
    ctx->pc = 0x229374u;
    // NOP
label_229378:
    // 0x229378: 0x510018  mult        $zero, $v0, $s1
    ctx->pc = 0x229378u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_22937c:
    // 0x22937c: 0x1197c2  srl         $s2, $s1, 31
    ctx->pc = 0x22937cu;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 17), 31));
label_229380:
    // 0x229380: 0x0  nop
    ctx->pc = 0x229380u;
    // NOP
label_229384:
    // 0x229384: 0x8810  mfhi        $s1
    ctx->pc = 0x229384u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_229388:
    // 0x229388: 0x118ac3  sra         $s1, $s1, 11
    ctx->pc = 0x229388u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 11));
label_22938c:
    // 0x22938c: 0x2328821  addu        $s1, $s1, $s2
    ctx->pc = 0x22938cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_229390:
    // 0x229390: 0xa1510022  sb          $s1, 0x22($t2)
    ctx->pc = 0x229390u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 34), (uint8_t)GPR_U32(ctx, 17));
label_229394:
    // 0x229394: 0xc5400008  lwc1        $f0, 0x8($t2)
    ctx->pc = 0x229394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_229398:
    // 0x229398: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x229398u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_22939c:
    // 0x22939c: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x22939cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
label_2293a0:
    // 0x2293a0: 0x0  nop
    ctx->pc = 0x2293a0u;
    // NOP
label_2293a4:
    // 0x2293a4: 0x510018  mult        $zero, $v0, $s1
    ctx->pc = 0x2293a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2293a8:
    // 0x2293a8: 0x1197c2  srl         $s2, $s1, 31
    ctx->pc = 0x2293a8u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 17), 31));
label_2293ac:
    // 0x2293ac: 0x0  nop
    ctx->pc = 0x2293acu;
    // NOP
label_2293b0:
    // 0x2293b0: 0x8810  mfhi        $s1
    ctx->pc = 0x2293b0u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_2293b4:
    // 0x2293b4: 0x118ac3  sra         $s1, $s1, 11
    ctx->pc = 0x2293b4u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 11));
label_2293b8:
    // 0x2293b8: 0x2328821  addu        $s1, $s1, $s2
    ctx->pc = 0x2293b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_2293bc:
    // 0x2293bc: 0xa1510023  sb          $s1, 0x23($t2)
    ctx->pc = 0x2293bcu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 35), (uint8_t)GPR_U32(ctx, 17));
label_2293c0:
    // 0x2293c0: 0x91510026  lbu         $s1, 0x26($t2)
    ctx->pc = 0x2293c0u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 38)));
label_2293c4:
    // 0x2293c4: 0x162b0020  bne         $s1, $t3, . + 4 + (0x20 << 2)
label_2293c8:
    if (ctx->pc == 0x2293C8u) {
        ctx->pc = 0x2293CCu;
        goto label_2293cc;
    }
    ctx->pc = 0x2293C4u;
    {
        const bool branch_taken_0x2293c4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 11));
        if (branch_taken_0x2293c4) {
            ctx->pc = 0x229448u;
            goto label_229448;
        }
    }
    ctx->pc = 0x2293CCu;
label_2293cc:
    // 0x2293cc: 0x91510027  lbu         $s1, 0x27($t2)
    ctx->pc = 0x2293ccu;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 39)));
label_2293d0:
    // 0x2293d0: 0x162c001d  bne         $s1, $t4, . + 4 + (0x1D << 2)
label_2293d4:
    if (ctx->pc == 0x2293D4u) {
        ctx->pc = 0x2293D8u;
        goto label_2293d8;
    }
    ctx->pc = 0x2293D0u;
    {
        const bool branch_taken_0x2293d0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 12));
        if (branch_taken_0x2293d0) {
            ctx->pc = 0x229448u;
            goto label_229448;
        }
    }
    ctx->pc = 0x2293D8u;
label_2293d8:
    // 0x2293d8: 0xc5400014  lwc1        $f0, 0x14($t2)
    ctx->pc = 0x2293d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2293dc:
    // 0x2293dc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2293dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_2293e0:
    // 0x2293e0: 0xe5400014  swc1        $f0, 0x14($t2)
    ctx->pc = 0x2293e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 20), bits); }
label_2293e4:
    // 0x2293e4: 0xc5400018  lwc1        $f0, 0x18($t2)
    ctx->pc = 0x2293e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2293e8:
    // 0x2293e8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2293e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2293ec:
    // 0x2293ec: 0xe5400018  swc1        $f0, 0x18($t2)
    ctx->pc = 0x2293ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 24), bits); }
label_2293f0:
    // 0x2293f0: 0xc5400014  lwc1        $f0, 0x14($t2)
    ctx->pc = 0x2293f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2293f4:
    // 0x2293f4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2293f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2293f8:
    // 0x2293f8: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x2293f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
label_2293fc:
    // 0x2293fc: 0x0  nop
    ctx->pc = 0x2293fcu;
    // NOP
label_229400:
    // 0x229400: 0x510018  mult        $zero, $v0, $s1
    ctx->pc = 0x229400u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_229404:
    // 0x229404: 0x1197c2  srl         $s2, $s1, 31
    ctx->pc = 0x229404u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 17), 31));
label_229408:
    // 0x229408: 0x0  nop
    ctx->pc = 0x229408u;
    // NOP
label_22940c:
    // 0x22940c: 0x8810  mfhi        $s1
    ctx->pc = 0x22940cu;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_229410:
    // 0x229410: 0x118ac3  sra         $s1, $s1, 11
    ctx->pc = 0x229410u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 11));
label_229414:
    // 0x229414: 0x2328821  addu        $s1, $s1, $s2
    ctx->pc = 0x229414u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_229418:
    // 0x229418: 0xa1510026  sb          $s1, 0x26($t2)
    ctx->pc = 0x229418u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 38), (uint8_t)GPR_U32(ctx, 17));
label_22941c:
    // 0x22941c: 0xc5400018  lwc1        $f0, 0x18($t2)
    ctx->pc = 0x22941cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_229420:
    // 0x229420: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x229420u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_229424:
    // 0x229424: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x229424u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
label_229428:
    // 0x229428: 0x0  nop
    ctx->pc = 0x229428u;
    // NOP
label_22942c:
    // 0x22942c: 0x510018  mult        $zero, $v0, $s1
    ctx->pc = 0x22942cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_229430:
    // 0x229430: 0x1197c2  srl         $s2, $s1, 31
    ctx->pc = 0x229430u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 17), 31));
label_229434:
    // 0x229434: 0x0  nop
    ctx->pc = 0x229434u;
    // NOP
label_229438:
    // 0x229438: 0x8810  mfhi        $s1
    ctx->pc = 0x229438u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_22943c:
    // 0x22943c: 0x118ac3  sra         $s1, $s1, 11
    ctx->pc = 0x22943cu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 11));
label_229440:
    // 0x229440: 0x2328821  addu        $s1, $s1, $s2
    ctx->pc = 0x229440u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_229444:
    // 0x229444: 0xa1510027  sb          $s1, 0x27($t2)
    ctx->pc = 0x229444u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 39), (uint8_t)GPR_U32(ctx, 17));
label_229448:
    // 0x229448: 0x8d4a0000  lw          $t2, 0x0($t2)
    ctx->pc = 0x229448u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_22944c:
    // 0x22944c: 0x25530005  addiu       $s3, $t2, 0x5
    ctx->pc = 0x22944cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 10), 5));
label_229450:
    // 0x229450: 0x914a0005  lbu         $t2, 0x5($t2)
    ctx->pc = 0x229450u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 5)));
label_229454:
    // 0x229454: 0xa8903  sra         $s1, $t2, 4
    ctx->pc = 0x229454u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 10), 4));
label_229458:
    // 0x229458: 0x162b0008  bne         $s1, $t3, . + 4 + (0x8 << 2)
label_22945c:
    if (ctx->pc == 0x22945Cu) {
        ctx->pc = 0x22945Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229458u;
        // 0x22945c: 0x3152000f  andi        $s2, $t2, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = 0x229460u;
        goto label_229460;
    }
    ctx->pc = 0x229458u;
    {
        const bool branch_taken_0x229458 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 11));
        ctx->pc = 0x22945Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229458u;
        // 0x22945c: 0x3152000f  andi        $s2, $t2, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x229458) {
            ctx->pc = 0x22947Cu;
            goto label_22947c;
        }
    }
    ctx->pc = 0x229460u;
label_229460:
    // 0x229460: 0x164c0006  bne         $s2, $t4, . + 4 + (0x6 << 2)
label_229464:
    if (ctx->pc == 0x229464u) {
        ctx->pc = 0x229468u;
        goto label_229468;
    }
    ctx->pc = 0x229460u;
    {
        const bool branch_taken_0x229460 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 12));
        if (branch_taken_0x229460) {
            ctx->pc = 0x22947Cu;
            goto label_22947c;
        }
    }
    ctx->pc = 0x229468u;
label_229468:
    // 0x229468: 0x2248821  addu        $s1, $s1, $a0
    ctx->pc = 0x229468u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_22946c:
    // 0x22946c: 0x2439021  addu        $s2, $s2, $v1
    ctx->pc = 0x22946cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_229470:
    // 0x229470: 0x115100  sll         $t2, $s1, 4
    ctx->pc = 0x229470u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_229474:
    // 0x229474: 0x1525025  or          $t2, $t2, $s2
    ctx->pc = 0x229474u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 18));
label_229478:
    // 0x229478: 0xa26a0000  sb          $t2, 0x0($s3)
    ctx->pc = 0x229478u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 10));
label_22947c:
    // 0x22947c: 0x0  nop
    ctx->pc = 0x22947cu;
    // NOP
label_229480:
    // 0x229480: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x229480u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_229484:
    // 0x229484: 0x292a00ff  slti        $t2, $t1, 0xFF
    ctx->pc = 0x229484u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)255) ? 1 : 0);
label_229488:
    // 0x229488: 0x1540ffa7  bnez        $t2, . + 4 + (-0x59 << 2)
label_22948c:
    if (ctx->pc == 0x22948Cu) {
        ctx->pc = 0x22948Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229488u;
        // 0x22948c: 0x25ef0048  addiu       $t7, $t7, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229490u;
        goto label_229490;
    }
    ctx->pc = 0x229488u;
    {
        const bool branch_taken_0x229488 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x22948Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229488u;
        // 0x22948c: 0x25ef0048  addiu       $t7, $t7, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229488) {
            ctx->pc = 0x229328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_229328;
        }
    }
    ctx->pc = 0x229490u;
label_229490:
    // 0x229490: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x229490u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_229494:
    // 0x229494: 0x29060002  slti        $a2, $t0, 0x2
    ctx->pc = 0x229494u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
label_229498:
    // 0x229498: 0x14c0ff9e  bnez        $a2, . + 4 + (-0x62 << 2)
label_22949c:
    if (ctx->pc == 0x22949Cu) {
        ctx->pc = 0x22949Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229498u;
        // 0x22949c: 0x271847b8  addiu       $t8, $t8, 0x47B8 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 18360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2294A0u;
        goto label_2294a0;
    }
    ctx->pc = 0x229498u;
    {
        const bool branch_taken_0x229498 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x22949Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229498u;
        // 0x22949c: 0x271847b8  addiu       $t8, $t8, 0x47B8 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 18360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229498) {
            ctx->pc = 0x229314u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_229314;
        }
    }
    ctx->pc = 0x2294A0u;
label_2294a0:
    // 0x2294a0: 0x8f8284e0  lw          $v0, -0x7B20($gp)
    ctx->pc = 0x2294a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
label_2294a4:
    // 0x2294a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2294a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2294a8:
    // 0x2294a8: 0x1ab3023  subu        $a2, $t5, $t3
    ctx->pc = 0x2294a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
label_2294ac:
    // 0x2294ac: 0x3c03459c  lui         $v1, 0x459C
    ctx->pc = 0x2294acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17820 << 16));
label_2294b0:
    // 0x2294b0: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x2294b0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2294b4:
    // 0x2294b4: 0x1cc2023  subu        $a0, $t6, $t4
    ctx->pc = 0x2294b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
label_2294b8:
    // 0x2294b8: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x2294b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_2294bc:
    // 0x2294bc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2294bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2294c0:
    // 0x2294c0: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x2294c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2294c4:
    // 0x2294c4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2294c4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2294c8:
    // 0x2294c8: 0x0  nop
    ctx->pc = 0x2294c8u;
    // NOP
label_2294cc:
    // 0x2294cc: 0x46011882  mul.s       $f2, $f3, $f1
    ctx->pc = 0x2294ccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_2294d0:
    // 0x2294d0: 0x3c0368db  lui         $v1, 0x68DB
    ctx->pc = 0x2294d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26843 << 16));
label_2294d4:
    // 0x2294d4: 0x34698bad  ori         $t1, $v1, 0x8BAD
    ctx->pc = 0x2294d4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)35757);
label_2294d8:
    // 0x2294d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2294d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2294dc:
    // 0x2294dc: 0x46001842  mul.s       $f1, $f3, $f0
    ctx->pc = 0x2294dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_2294e0:
    // 0x2294e0: 0x0  nop
    ctx->pc = 0x2294e0u;
    // NOP
label_2294e4:
    // 0x2294e4: 0x9043002e  lbu         $v1, 0x2E($v0)
    ctx->pc = 0x2294e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 46)));
label_2294e8:
    // 0x2294e8: 0x14600031  bnez        $v1, . + 4 + (0x31 << 2)
label_2294ec:
    if (ctx->pc == 0x2294ECu) {
        ctx->pc = 0x2294F0u;
        goto label_2294f0;
    }
    ctx->pc = 0x2294E8u;
    {
        const bool branch_taken_0x2294e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2294e8) {
            ctx->pc = 0x2295B0u;
            goto label_2295b0;
        }
    }
    ctx->pc = 0x2294F0u;
label_2294f0:
    // 0x2294f0: 0x9043002f  lbu         $v1, 0x2F($v0)
    ctx->pc = 0x2294f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 47)));
label_2294f4:
    // 0x2294f4: 0x286100ff  slti        $at, $v1, 0xFF
    ctx->pc = 0x2294f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)255) ? 1 : 0);
label_2294f8:
    // 0x2294f8: 0x1020002d  beqz        $at, . + 4 + (0x2D << 2)
label_2294fc:
    if (ctx->pc == 0x2294FCu) {
        ctx->pc = 0x2294FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2294F8u;
        // 0x2294fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229500u;
        goto label_229500;
    }
    ctx->pc = 0x2294F8u;
    {
        const bool branch_taken_0x2294f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2294FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2294F8u;
        // 0x2294fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2294f8) {
            ctx->pc = 0x2295B0u;
            goto label_2295b0;
        }
    }
    ctx->pc = 0x229500u;
label_229500:
    // 0x229500: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x229500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_229504:
    // 0x229504: 0x0  nop
    ctx->pc = 0x229504u;
    // NOP
label_229508:
    // 0x229508: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x229508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_22950c:
    // 0x22950c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x22950cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_229510:
    // 0x229510: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
label_229514:
    if (ctx->pc == 0x229514u) {
        ctx->pc = 0x229518u;
        goto label_229518;
    }
    ctx->pc = 0x229510u;
    {
        const bool branch_taken_0x229510 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x229510) {
            ctx->pc = 0x2295A0u;
            goto label_2295a0;
        }
    }
    ctx->pc = 0x229518u;
label_229518:
    // 0x229518: 0x90670218  lbu         $a3, 0x218($v1)
    ctx->pc = 0x229518u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 536)));
label_22951c:
    // 0x22951c: 0x14eb0020  bne         $a3, $t3, . + 4 + (0x20 << 2)
label_229520:
    if (ctx->pc == 0x229520u) {
        ctx->pc = 0x229524u;
        goto label_229524;
    }
    ctx->pc = 0x22951Cu;
    {
        const bool branch_taken_0x22951c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 11));
        if (branch_taken_0x22951c) {
            ctx->pc = 0x2295A0u;
            goto label_2295a0;
        }
    }
    ctx->pc = 0x229524u;
label_229524:
    // 0x229524: 0x90670219  lbu         $a3, 0x219($v1)
    ctx->pc = 0x229524u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 537)));
label_229528:
    // 0x229528: 0x14ec001d  bne         $a3, $t4, . + 4 + (0x1D << 2)
label_22952c:
    if (ctx->pc == 0x22952Cu) {
        ctx->pc = 0x229530u;
        goto label_229530;
    }
    ctx->pc = 0x229528u;
    {
        const bool branch_taken_0x229528 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 12));
        if (branch_taken_0x229528) {
            ctx->pc = 0x2295A0u;
            goto label_2295a0;
        }
    }
    ctx->pc = 0x229530u;
label_229530:
    // 0x229530: 0xc4600050  lwc1        $f0, 0x50($v1)
    ctx->pc = 0x229530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_229534:
    // 0x229534: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x229534u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_229538:
    // 0x229538: 0xe4600050  swc1        $f0, 0x50($v1)
    ctx->pc = 0x229538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
label_22953c:
    // 0x22953c: 0xc4600058  lwc1        $f0, 0x58($v1)
    ctx->pc = 0x22953cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_229540:
    // 0x229540: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x229540u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_229544:
    // 0x229544: 0xe4600058  swc1        $f0, 0x58($v1)
    ctx->pc = 0x229544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
label_229548:
    // 0x229548: 0xc4600050  lwc1        $f0, 0x50($v1)
    ctx->pc = 0x229548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22954c:
    // 0x22954c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x22954cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_229550:
    // 0x229550: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x229550u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_229554:
    // 0x229554: 0x0  nop
    ctx->pc = 0x229554u;
    // NOP
label_229558:
    // 0x229558: 0x1270018  mult        $zero, $t1, $a3
    ctx->pc = 0x229558u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_22955c:
    // 0x22955c: 0x747c2  srl         $t0, $a3, 31
    ctx->pc = 0x22955cu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
label_229560:
    // 0x229560: 0x0  nop
    ctx->pc = 0x229560u;
    // NOP
label_229564:
    // 0x229564: 0x3810  mfhi        $a3
    ctx->pc = 0x229564u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_229568:
    // 0x229568: 0x73ac3  sra         $a3, $a3, 11
    ctx->pc = 0x229568u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 11));
label_22956c:
    // 0x22956c: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x22956cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_229570:
    // 0x229570: 0xa0670218  sb          $a3, 0x218($v1)
    ctx->pc = 0x229570u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 536), (uint8_t)GPR_U32(ctx, 7));
label_229574:
    // 0x229574: 0xc4600058  lwc1        $f0, 0x58($v1)
    ctx->pc = 0x229574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_229578:
    // 0x229578: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x229578u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_22957c:
    // 0x22957c: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x22957cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_229580:
    // 0x229580: 0x0  nop
    ctx->pc = 0x229580u;
    // NOP
label_229584:
    // 0x229584: 0x1270018  mult        $zero, $t1, $a3
    ctx->pc = 0x229584u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_229588:
    // 0x229588: 0x747c2  srl         $t0, $a3, 31
    ctx->pc = 0x229588u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
label_22958c:
    // 0x22958c: 0x0  nop
    ctx->pc = 0x22958cu;
    // NOP
label_229590:
    // 0x229590: 0x3810  mfhi        $a3
    ctx->pc = 0x229590u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_229594:
    // 0x229594: 0x73ac3  sra         $a3, $a3, 11
    ctx->pc = 0x229594u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 11));
label_229598:
    // 0x229598: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x229598u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_22959c:
    // 0x22959c: 0xa0670219  sb          $a3, 0x219($v1)
    ctx->pc = 0x22959cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 537), (uint8_t)GPR_U32(ctx, 7));
label_2295a0:
    // 0x2295a0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2295a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_2295a4:
    // 0x2295a4: 0x28c30009  slti        $v1, $a2, 0x9
    ctx->pc = 0x2295a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)9) ? 1 : 0);
label_2295a8:
    // 0x2295a8: 0x1460ffd6  bnez        $v1, . + 4 + (-0x2A << 2)
label_2295ac:
    if (ctx->pc == 0x2295ACu) {
        ctx->pc = 0x2295ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2295A8u;
        // 0x2295ac: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2295B0u;
        goto label_2295b0;
    }
    ctx->pc = 0x2295A8u;
    {
        const bool branch_taken_0x2295a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2295ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2295A8u;
        // 0x2295ac: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2295a8) {
            ctx->pc = 0x229504u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_229504;
        }
    }
    ctx->pc = 0x2295B0u;
label_2295b0:
    // 0x2295b0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2295b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2295b4:
    // 0x2295b4: 0x28a3004a  slti        $v1, $a1, 0x4A
    ctx->pc = 0x2295b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)74) ? 1 : 0);
label_2295b8:
    // 0x2295b8: 0x1460ffc9  bnez        $v1, . + 4 + (-0x37 << 2)
label_2295bc:
    if (ctx->pc == 0x2295BCu) {
        ctx->pc = 0x2295BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2295B8u;
        // 0x2295bc: 0x24420030  addiu       $v0, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2295C0u;
        goto label_2295c0;
    }
    ctx->pc = 0x2295B8u;
    {
        const bool branch_taken_0x2295b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2295BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2295B8u;
        // 0x2295bc: 0x24420030  addiu       $v0, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2295b8) {
            ctx->pc = 0x2294E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2294e0;
        }
    }
    ctx->pc = 0x2295C0u;
label_2295c0:
    // 0x2295c0: 0x3c05004b  lui         $a1, 0x4B
    ctx->pc = 0x2295c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)75 << 16));
label_2295c4:
    // 0x2295c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2295c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2295c8:
    // 0x2295c8: 0x24a503a0  addiu       $a1, $a1, 0x3A0
    ctx->pc = 0x2295c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 928));
label_2295cc:
    // 0x2295cc: 0x1ab1823  subu        $v1, $t5, $t3
    ctx->pc = 0x2295ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
label_2295d0:
    // 0x2295d0: 0x1cc1023  subu        $v0, $t6, $t4
    ctx->pc = 0x2295d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
label_2295d4:
    // 0x2295d4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2295d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2295d8:
    // 0x2295d8: 0x3c04459c  lui         $a0, 0x459C
    ctx->pc = 0x2295d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17820 << 16));
label_2295dc:
    // 0x2295dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2295dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2295e0:
    // 0x2295e0: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x2295e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
label_2295e4:
    // 0x2295e4: 0x25830001  addiu       $v1, $t4, 0x1
    ctx->pc = 0x2295e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_2295e8:
    // 0x2295e8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2295e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2295ec:
    // 0x2295ec: 0x25620001  addiu       $v0, $t3, 0x1
    ctx->pc = 0x2295ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_2295f0:
    // 0x2295f0: 0x448c2000  mtc1        $t4, $f4
    ctx->pc = 0x2295f0u;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_2295f4:
    // 0x2295f4: 0x468010e0  cvt.s.w     $f3, $f2
    ctx->pc = 0x2295f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_2295f8:
    // 0x2295f8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2295f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2295fc:
    // 0x2295fc: 0x44843800  mtc1        $a0, $f7
    ctx->pc = 0x2295fcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_229600:
    // 0x229600: 0x46801160  cvt.s.w     $f5, $f2
    ctx->pc = 0x229600u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
label_229604:
    // 0x229604: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x229604u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_229608:
    // 0x229608: 0x46013882  mul.s       $f2, $f7, $f1
    ctx->pc = 0x229608u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
label_22960c:
    // 0x22960c: 0x448b3000  mtc1        $t3, $f6
    ctx->pc = 0x22960cu;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_229610:
    // 0x229610: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x229610u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_229614:
    // 0x229614: 0x46803060  cvt.s.w     $f1, $f6
    ctx->pc = 0x229614u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_229618:
    // 0x229618: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x229618u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_22961c:
    // 0x22961c: 0x46013982  mul.s       $f6, $f7, $f1
    ctx->pc = 0x22961cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
label_229620:
    // 0x229620: 0x46003842  mul.s       $f1, $f7, $f0
    ctx->pc = 0x229620u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
label_229624:
    // 0x229624: 0x460338c2  mul.s       $f3, $f7, $f3
    ctx->pc = 0x229624u;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
label_229628:
    // 0x229628: 0x46043902  mul.s       $f4, $f7, $f4
    ctx->pc = 0x229628u;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
label_22962c:
    // 0x22962c: 0x46053942  mul.s       $f5, $f7, $f5
    ctx->pc = 0x22962cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[7], ctx->f[5]);
label_229630:
    // 0x229630: 0x0  nop
    ctx->pc = 0x229630u;
    // NOP
label_229634:
    // 0x229634: 0x84a20012  lh          $v0, 0x12($a1)
    ctx->pc = 0x229634u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 18)));
label_229638:
    // 0x229638: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_22963c:
    if (ctx->pc == 0x22963Cu) {
        ctx->pc = 0x229640u;
        goto label_229640;
    }
    ctx->pc = 0x229638u;
    {
        const bool branch_taken_0x229638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x229638) {
            ctx->pc = 0x2296ACu;
            goto label_2296ac;
        }
    }
    ctx->pc = 0x229640u;
label_229640:
    // 0x229640: 0x8ca20030  lw          $v0, 0x30($a1)
    ctx->pc = 0x229640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_229644:
    // 0x229644: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_229648:
    if (ctx->pc == 0x229648u) {
        ctx->pc = 0x22964Cu;
        goto label_22964c;
    }
    ctx->pc = 0x229644u;
    {
        const bool branch_taken_0x229644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x229644) {
            ctx->pc = 0x2296ACu;
            goto label_2296ac;
        }
    }
    ctx->pc = 0x22964Cu;
label_22964c:
    // 0x22964c: 0xc4400150  lwc1        $f0, 0x150($v0)
    ctx->pc = 0x22964cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_229650:
    // 0x229650: 0x46060034  c.lt.s      $f0, $f6
    ctx->pc = 0x229650u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_229654:
    // 0x229654: 0x0  nop
    ctx->pc = 0x229654u;
    // NOP
label_229658:
    // 0x229658: 0x45010014  bc1t        . + 4 + (0x14 << 2)
label_22965c:
    if (ctx->pc == 0x22965Cu) {
        ctx->pc = 0x229660u;
        goto label_229660;
    }
    ctx->pc = 0x229658u;
    {
        const bool branch_taken_0x229658 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x229658) {
            ctx->pc = 0x2296ACu;
            goto label_2296ac;
        }
    }
    ctx->pc = 0x229660u;
label_229660:
    // 0x229660: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x229660u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_229664:
    // 0x229664: 0x0  nop
    ctx->pc = 0x229664u;
    // NOP
label_229668:
    // 0x229668: 0x45000010  bc1f        . + 4 + (0x10 << 2)
label_22966c:
    if (ctx->pc == 0x22966Cu) {
        ctx->pc = 0x229670u;
        goto label_229670;
    }
    ctx->pc = 0x229668u;
    {
        const bool branch_taken_0x229668 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x229668) {
            ctx->pc = 0x2296ACu;
            goto label_2296ac;
        }
    }
    ctx->pc = 0x229670u;
label_229670:
    // 0x229670: 0xc4400158  lwc1        $f0, 0x158($v0)
    ctx->pc = 0x229670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_229674:
    // 0x229674: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x229674u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_229678:
    // 0x229678: 0x0  nop
    ctx->pc = 0x229678u;
    // NOP
label_22967c:
    // 0x22967c: 0x4501000b  bc1t        . + 4 + (0xB << 2)
label_229680:
    if (ctx->pc == 0x229680u) {
        ctx->pc = 0x229684u;
        goto label_229684;
    }
    ctx->pc = 0x22967Cu;
    {
        const bool branch_taken_0x22967c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22967c) {
            ctx->pc = 0x2296ACu;
            goto label_2296ac;
        }
    }
    ctx->pc = 0x229684u;
label_229684:
    // 0x229684: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x229684u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_229688:
    // 0x229688: 0x0  nop
    ctx->pc = 0x229688u;
    // NOP
label_22968c:
    // 0x22968c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_229690:
    if (ctx->pc == 0x229690u) {
        ctx->pc = 0x229694u;
        goto label_229694;
    }
    ctx->pc = 0x22968Cu;
    {
        const bool branch_taken_0x22968c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22968c) {
            ctx->pc = 0x2296ACu;
            goto label_2296ac;
        }
    }
    ctx->pc = 0x229694u;
label_229694:
    // 0x229694: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x229694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_229698:
    // 0x229698: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x229698u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_22969c:
    // 0x22969c: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x22969cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
label_2296a0:
    // 0x2296a0: 0xc4400058  lwc1        $f0, 0x58($v0)
    ctx->pc = 0x2296a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2296a4:
    // 0x2296a4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2296a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2296a8:
    // 0x2296a8: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x2296a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
label_2296ac:
    // 0x2296ac: 0x0  nop
    ctx->pc = 0x2296acu;
    // NOP
label_2296b0:
    // 0x2296b0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2296b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_2296b4:
    // 0x2296b4: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x2296b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
label_2296b8:
    // 0x2296b8: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
label_2296bc:
    if (ctx->pc == 0x2296BCu) {
        ctx->pc = 0x2296BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2296B8u;
        // 0x2296bc: 0x24a50070  addiu       $a1, $a1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2296C0u;
        goto label_2296c0;
    }
    ctx->pc = 0x2296B8u;
    {
        const bool branch_taken_0x2296b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2296BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2296B8u;
        // 0x2296bc: 0x24a50070  addiu       $a1, $a1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2296b8) {
            ctx->pc = 0x229630u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_229630;
        }
    }
    ctx->pc = 0x2296C0u;
label_2296c0:
    // 0x2296c0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2296c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2296c4:
    // 0x2296c4: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x2296c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
label_2296c8:
    // 0x2296c8: 0x1440fef7  bnez        $v0, . + 4 + (-0x109 << 2)
label_2296cc:
    if (ctx->pc == 0x2296CCu) {
        ctx->pc = 0x2296CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2296C8u;
        // 0x2296cc: 0x27390004  addiu       $t9, $t9, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2296D0u;
        goto label_2296d0;
    }
    ctx->pc = 0x2296C8u;
    {
        const bool branch_taken_0x2296c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2296CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2296C8u;
        // 0x2296cc: 0x27390004  addiu       $t9, $t9, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2296c8) {
            ctx->pc = 0x2292A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2292a8;
        }
    }
    ctx->pc = 0x2296D0u;
label_2296d0:
    // 0x2296d0: 0xc06e45c  jal         func_1B9170
label_2296d4:
    if (ctx->pc == 0x2296D4u) {
        ctx->pc = 0x2296D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2296D0u;
        // 0x2296d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2296D8u;
        goto label_2296d8;
    }
    ctx->pc = 0x2296D0u;
    SET_GPR_U32(ctx, 31, 0x2296D8u);
    ctx->pc = 0x2296D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2296D0u;
    // 0x2296d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9170u;
    { ctx->pc = 0x1b9170; return; }
    ctx->pc = 0x2296D8u;
label_2296d8:
    // 0x2296d8: 0xc05dd08  jal         func_177420
label_2296dc:
    if (ctx->pc == 0x2296DCu) {
        ctx->pc = 0x2296E0u;
        goto label_2296e0;
    }
    ctx->pc = 0x2296D8u;
    SET_GPR_U32(ctx, 31, 0x2296E0u);
    ctx->pc = 0x177420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177420u, 0x2296D8u, 0x2296E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2296E0u;
label_2296e0:
    // 0x2296e0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2296e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2296e4:
    // 0x2296e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2296e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2296e8:
    // 0x2296e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2296e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2296ec:
    // 0x2296ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2296ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2296f0:
    // 0x2296f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2296f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2296f4:
    // 0x2296f4: 0x3e00008  jr          $ra
label_2296f8:
    if (ctx->pc == 0x2296F8u) {
        ctx->pc = 0x2296F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2296F4u;
        // 0x2296f8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2296FCu;
        goto label_2296fc;
    }
    ctx->pc = 0x2296F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2296F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2296F4u;
        // 0x2296f8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2296F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2296FCu;
label_2296fc:
    // 0x2296fc: 0x0  nop
    ctx->pc = 0x2296fcu;
    // NOP
label_229700:
    // 0x229700: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x229700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_229704:
    // 0x229704: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_229708:
    if (ctx->pc == 0x229708u) {
        ctx->pc = 0x229708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229704u;
        // 0x229708: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22970Cu;
        goto label_22970c;
    }
    ctx->pc = 0x229704u;
    {
        const bool branch_taken_0x229704 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x229708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229704u;
        // 0x229708: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229704) {
            ctx->pc = 0x229714u;
            goto label_229714;
        }
    }
    ctx->pc = 0x22970Cu;
label_22970c:
    // 0x22970c: 0x10000019  b           . + 4 + (0x19 << 2)
label_229710:
    if (ctx->pc == 0x229710u) {
        ctx->pc = 0x229714u;
        goto label_229714;
    }
    ctx->pc = 0x22970Cu;
    {
        const bool branch_taken_0x22970c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22970c) {
            ctx->pc = 0x229774u;
            goto label_229774;
        }
    }
    ctx->pc = 0x229714u;
label_229714:
    // 0x229714: 0x10a00017  beqz        $a1, . + 4 + (0x17 << 2)
label_229718:
    if (ctx->pc == 0x229718u) {
        ctx->pc = 0x229718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229714u;
        // 0x229718: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22971Cu;
        goto label_22971c;
    }
    ctx->pc = 0x229714u;
    {
        const bool branch_taken_0x229714 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x229718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229714u;
        // 0x229718: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229714) {
            ctx->pc = 0x229774u;
            goto label_229774;
        }
    }
    ctx->pc = 0x22971Cu;
label_22971c:
    // 0x22971c: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x22971cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_229720:
    // 0x229720: 0x43900  sll         $a3, $a0, 4
    ctx->pc = 0x229720u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_229724:
    // 0x229724: 0x2442a280  addiu       $v0, $v0, -0x5D80
    ctx->pc = 0x229724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943360));
label_229728:
    // 0x229728: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x229728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_22972c:
    // 0x22972c: 0x94660000  lhu         $a2, 0x0($v1)
    ctx->pc = 0x22972cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_229730:
    // 0x229730: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x229730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_229734:
    // 0x229734: 0x2442a284  addiu       $v0, $v0, -0x5D7C
    ctx->pc = 0x229734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943364));
label_229738:
    // 0x229738: 0x472021  addu        $a0, $v0, $a3
    ctx->pc = 0x229738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_22973c:
    // 0x22973c: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x22973cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_229740:
    // 0x229740: 0x2442a28c  addiu       $v0, $v0, -0x5D74
    ctx->pc = 0x229740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943372));
label_229744:
    // 0x229744: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x229744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_229748:
    // 0x229748: 0xa4a60000  sh          $a2, 0x0($a1)
    ctx->pc = 0x229748u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 6));
label_22974c:
    // 0x22974c: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x22974cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_229750:
    // 0x229750: 0x94840000  lhu         $a0, 0x0($a0)
    ctx->pc = 0x229750u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_229754:
    // 0x229754: 0x2463a288  addiu       $v1, $v1, -0x5D78
    ctx->pc = 0x229754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943368));
label_229758:
    // 0x229758: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x229758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_22975c:
    // 0x22975c: 0xa4a40002  sh          $a0, 0x2($a1)
    ctx->pc = 0x22975cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 4));
label_229760:
    // 0x229760: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x229760u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_229764:
    // 0x229764: 0xa0a30004  sb          $v1, 0x4($a1)
    ctx->pc = 0x229764u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4), (uint8_t)GPR_U32(ctx, 3));
label_229768:
    // 0x229768: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x229768u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_22976c:
    // 0x22976c: 0xa0a20005  sb          $v0, 0x5($a1)
    ctx->pc = 0x22976cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 2));
label_229770:
    // 0x229770: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x229770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_229774:
    // 0x229774: 0x3e00008  jr          $ra
label_229778:
    if (ctx->pc == 0x229778u) {
        ctx->pc = 0x22977Cu;
        goto label_22977c;
    }
    ctx->pc = 0x229774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22977Cu;
label_22977c:
    // 0x22977c: 0x0  nop
    ctx->pc = 0x22977cu;
    // NOP
label_229780:
    // 0x229780: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x229780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_229784:
    // 0x229784: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x229784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_229788:
    // 0x229788: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x229788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_22978c:
    // 0x22978c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22978cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_229790:
    // 0x229790: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x229790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_229794:
    // 0x229794: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x229794u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_229798:
    // 0x229798: 0x3c10002f  lui         $s0, 0x2F
    ctx->pc = 0x229798u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)47 << 16));
label_22979c:
    // 0x22979c: 0x26102570  addiu       $s0, $s0, 0x2570
    ctx->pc = 0x22979cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9584));
label_2297a0:
    // 0x2297a0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2297a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2297a4:
    // 0x2297a4: 0x0  nop
    ctx->pc = 0x2297a4u;
    // NOP
label_2297a8:
    // 0x2297a8: 0x9203003d  lbu         $v1, 0x3D($s0)
    ctx->pc = 0x2297a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 61)));
label_2297ac:
    // 0x2297ac: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_2297b0:
    if (ctx->pc == 0x2297B0u) {
        ctx->pc = 0x2297B4u;
        goto label_2297b4;
    }
    ctx->pc = 0x2297ACu;
    {
        const bool branch_taken_0x2297ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2297ac) {
            ctx->pc = 0x2297DCu;
            goto label_2297dc;
        }
    }
    ctx->pc = 0x2297B4u;
label_2297b4:
    // 0x2297b4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2297b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2297b8:
    // 0x2297b8: 0x90830010  lbu         $v1, 0x10($a0)
    ctx->pc = 0x2297b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_2297bc:
    // 0x2297bc: 0x18600007  blez        $v1, . + 4 + (0x7 << 2)
label_2297c0:
    if (ctx->pc == 0x2297C0u) {
        ctx->pc = 0x2297C4u;
        goto label_2297c4;
    }
    ctx->pc = 0x2297BCu;
    {
        const bool branch_taken_0x2297bc = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x2297bc) {
            ctx->pc = 0x2297DCu;
            goto label_2297dc;
        }
    }
    ctx->pc = 0x2297C4u;
label_2297c4:
    // 0x2297c4: 0x90830012  lbu         $v1, 0x12($a0)
    ctx->pc = 0x2297c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 18)));
label_2297c8:
    // 0x2297c8: 0x28610006  slti        $at, $v1, 0x6
    ctx->pc = 0x2297c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
label_2297cc:
    // 0x2297cc: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_2297d0:
    if (ctx->pc == 0x2297D0u) {
        ctx->pc = 0x2297D4u;
        goto label_2297d4;
    }
    ctx->pc = 0x2297CCu;
    {
        const bool branch_taken_0x2297cc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2297cc) {
            ctx->pc = 0x2297DCu;
            goto label_2297dc;
        }
    }
    ctx->pc = 0x2297D4u;
label_2297d4:
    // 0x2297d4: 0xc08aaa4  jal         func_22AA90
label_2297d8:
    if (ctx->pc == 0x2297D8u) {
        ctx->pc = 0x2297D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2297D4u;
        // 0x2297d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2297DCu;
        goto label_2297dc;
    }
    ctx->pc = 0x2297D4u;
    SET_GPR_U32(ctx, 31, 0x2297DCu);
    ctx->pc = 0x2297D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2297D4u;
    // 0x2297d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AA90u;
    { ctx->pc = 0x22aa90; return; }
    ctx->pc = 0x2297DCu;
label_2297dc:
    // 0x2297dc: 0x0  nop
    ctx->pc = 0x2297dcu;
    // NOP
label_2297e0:
    // 0x2297e0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2297e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2297e4:
    // 0x2297e4: 0x2a4300ff  slti        $v1, $s2, 0xFF
    ctx->pc = 0x2297e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)255) ? 1 : 0);
label_2297e8:
    // 0x2297e8: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
label_2297ec:
    if (ctx->pc == 0x2297ECu) {
        ctx->pc = 0x2297ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2297E8u;
        // 0x2297ec: 0x26100048  addiu       $s0, $s0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2297F0u;
        goto label_2297f0;
    }
    ctx->pc = 0x2297E8u;
    {
        const bool branch_taken_0x2297e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2297ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2297E8u;
        // 0x2297ec: 0x26100048  addiu       $s0, $s0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2297e8) {
            ctx->pc = 0x2297A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2297a4;
        }
    }
    ctx->pc = 0x2297F0u;
label_2297f0:
    // 0x2297f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2297f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2297f4:
    // 0x2297f4: 0x2a230002  slti        $v1, $s1, 0x2
    ctx->pc = 0x2297f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_2297f8:
    // 0x2297f8: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
label_2297fc:
    if (ctx->pc == 0x2297FCu) {
        ctx->pc = 0x2297FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2297F8u;
        // 0x2297fc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229800u;
        goto label_229800;
    }
    ctx->pc = 0x2297F8u;
    {
        const bool branch_taken_0x2297f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2297FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2297F8u;
        // 0x2297fc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2297f8) {
            ctx->pc = 0x2297A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2297a4;
        }
    }
    ctx->pc = 0x229800u;
label_229800:
    // 0x229800: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x229800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_229804:
    // 0x229804: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x229804u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_229808:
    // 0x229808: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x229808u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22980c:
    // 0x22980c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22980cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_229810:
    // 0x229810: 0x3e00008  jr          $ra
label_229814:
    if (ctx->pc == 0x229814u) {
        ctx->pc = 0x229814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229810u;
        // 0x229814: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229818u;
        goto label_229818;
    }
    ctx->pc = 0x229810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x229814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229810u;
        // 0x229814: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x229818u;
label_229818:
    // 0x229818: 0x0  nop
    ctx->pc = 0x229818u;
    // NOP
label_22981c:
    // 0x22981c: 0x0  nop
    ctx->pc = 0x22981cu;
    // NOP
label_229820:
    // 0x229820: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x229820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_229824:
    // 0x229824: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x229824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_229828:
    // 0x229828: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x229828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_22982c:
    // 0x22982c: 0x90224910  lbu         $v0, 0x4910($at)
    ctx->pc = 0x22982cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18704)));
label_229830:
    // 0x229830: 0xc059eb8  jal         func_167AE0
label_229834:
    if (ctx->pc == 0x229834u) {
        ctx->pc = 0x229834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229830u;
        // 0x229834: 0x2444000a  addiu       $a0, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229838u;
        goto label_229838;
    }
    ctx->pc = 0x229830u;
    SET_GPR_U32(ctx, 31, 0x229838u);
    ctx->pc = 0x229834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229830u;
    // 0x229834: 0x2444000a  addiu       $a0, $v0, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167AE0u, 0x229830u, 0x229838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229838u;
label_229838:
    // 0x229838: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x229838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22983c:
    // 0x22983c: 0x3e00008  jr          $ra
label_229840:
    if (ctx->pc == 0x229840u) {
        ctx->pc = 0x229840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22983Cu;
        // 0x229840: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229844u;
        goto label_229844;
    }
    ctx->pc = 0x22983Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x229840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22983Cu;
        // 0x229840: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22983Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x229844u;
label_229844:
    // 0x229844: 0x0  nop
    ctx->pc = 0x229844u;
    // NOP
label_229848:
    // 0x229848: 0x0  nop
    ctx->pc = 0x229848u;
    // NOP
label_22984c:
    // 0x22984c: 0x0  nop
    ctx->pc = 0x22984cu;
    // NOP
label_229850:
    // 0x229850: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229850u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_229854:
    // 0x229854: 0x3e00008  jr          $ra
label_229858:
    if (ctx->pc == 0x229858u) {
        ctx->pc = 0x229858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229854u;
        // 0x229858: 0x8c22a270  lw          $v0, -0x5D90($at) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943344)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22985Cu;
        goto label_22985c;
    }
    ctx->pc = 0x229854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x229858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229854u;
        // 0x229858: 0x8c22a270  lw          $v0, -0x5D90($at) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943344)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22985Cu;
label_22985c:
    // 0x22985c: 0x0  nop
    ctx->pc = 0x22985cu;
    // NOP
label_229860:
    // 0x229860: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_229864:
    // 0x229864: 0x3e00008  jr          $ra
label_229868:
    if (ctx->pc == 0x229868u) {
        ctx->pc = 0x229868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229864u;
        // 0x229868: 0x8c22a274  lw          $v0, -0x5D8C($at) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943348)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22986Cu;
        goto label_22986c;
    }
    ctx->pc = 0x229864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x229868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229864u;
        // 0x229868: 0x8c22a274  lw          $v0, -0x5D8C($at) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943348)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22986Cu;
label_22986c:
    // 0x22986c: 0x0  nop
    ctx->pc = 0x22986cu;
    // NOP
label_229870:
    // 0x229870: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x229870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_229874:
    // 0x229874: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_229878:
    // 0x229878: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x229878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_22987c:
    // 0x22987c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x22987cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_229880:
    // 0x229880: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x229880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_229884:
    // 0x229884: 0xc090e38  jal         func_2438E0
label_229888:
    if (ctx->pc == 0x229888u) {
        ctx->pc = 0x229888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229884u;
        // 0x229888: 0xac20a274  sw          $zero, -0x5D8C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294943348), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22988Cu;
        goto label_22988c;
    }
    ctx->pc = 0x229884u;
    SET_GPR_U32(ctx, 31, 0x22988Cu);
    ctx->pc = 0x229888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229884u;
    // 0x229888: 0xac20a274  sw          $zero, -0x5D8C($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943348), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2438E0u;
    { ctx->pc = 0x2438e0; return; }
    ctx->pc = 0x22988Cu;
label_22988c:
    // 0x22988c: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x22988cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_229890:
    // 0x229890: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_229894:
    if (ctx->pc == 0x229894u) {
        ctx->pc = 0x229894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229890u;
        // 0x229894: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229898u;
        goto label_229898;
    }
    ctx->pc = 0x229890u;
    {
        const bool branch_taken_0x229890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x229894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229890u;
        // 0x229894: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229890) {
            ctx->pc = 0x2298C8u;
            goto label_2298c8;
        }
    }
    ctx->pc = 0x229898u;
label_229898:
    // 0x229898: 0xc090df4  jal         func_2437D0
label_22989c:
    if (ctx->pc == 0x22989Cu) {
        ctx->pc = 0x22989Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229898u;
        // 0x22989c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2298A0u;
        goto label_2298a0;
    }
    ctx->pc = 0x229898u;
    SET_GPR_U32(ctx, 31, 0x2298A0u);
    ctx->pc = 0x22989Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229898u;
    // 0x22989c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2437D0u;
    { ctx->pc = 0x2437d0; return; }
    ctx->pc = 0x2298A0u;
label_2298a0:
    // 0x2298a0: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x2298a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2298a4:
    // 0x2298a4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2298a8:
    if (ctx->pc == 0x2298A8u) {
        ctx->pc = 0x2298A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2298A4u;
        // 0x2298a8: 0x3c010059  lui         $at, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2298ACu;
        goto label_2298ac;
    }
    ctx->pc = 0x2298A4u;
    {
        const bool branch_taken_0x2298a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2298A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2298A4u;
        // 0x2298a8: 0x3c010059  lui         $at, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2298a4) {
            ctx->pc = 0x2298C4u;
            goto label_2298c4;
        }
    }
    ctx->pc = 0x2298ACu;
label_2298ac:
    // 0x2298ac: 0xac20a27c  sw          $zero, -0x5D84($at)
    ctx->pc = 0x2298acu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943356), GPR_U32(ctx, 0));
label_2298b0:
    // 0x2298b0: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x2298b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_2298b4:
    // 0x2298b4: 0xac20a278  sw          $zero, -0x5D88($at)
    ctx->pc = 0x2298b4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943352), GPR_U32(ctx, 0));
label_2298b8:
    // 0x2298b8: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x2298b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_2298bc:
    // 0x2298bc: 0x10000090  b           . + 4 + (0x90 << 2)
label_2298c0:
    if (ctx->pc == 0x2298C0u) {
        ctx->pc = 0x2298C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2298BCu;
        // 0x2298c0: 0xac20a274  sw          $zero, -0x5D8C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294943348), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2298C4u;
        goto label_2298c4;
    }
    ctx->pc = 0x2298BCu;
    {
        const bool branch_taken_0x2298bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2298C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2298BCu;
        // 0x2298c0: 0xac20a274  sw          $zero, -0x5D8C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294943348), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2298bc) {
            ctx->pc = 0x229B00u;
            { ctx->pc = 0x229b00; return; }
        }
    }
    ctx->pc = 0x2298C4u;
label_2298c4:
    // 0x2298c4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2298c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2298c8:
    // 0x2298c8: 0xc090df4  jal         func_2437D0
label_2298cc:
    if (ctx->pc == 0x2298CCu) {
        ctx->pc = 0x2298D0u;
        goto label_2298d0;
    }
    ctx->pc = 0x2298C8u;
    SET_GPR_U32(ctx, 31, 0x2298D0u);
    ctx->pc = 0x2437D0u;
    { ctx->pc = 0x2437d0; return; }
    ctx->pc = 0x2298D0u;
label_2298d0:
    // 0x2298d0: 0x10400083  beqz        $v0, . + 4 + (0x83 << 2)
label_2298d4:
    if (ctx->pc == 0x2298D4u) {
        ctx->pc = 0x2298D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2298D0u;
        // 0x2298d4: 0x3c010059  lui         $at, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2298D8u;
        goto label_2298d8;
    }
    ctx->pc = 0x2298D0u;
    {
        const bool branch_taken_0x2298d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2298D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2298D0u;
        // 0x2298d4: 0x3c010059  lui         $at, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2298d0) {
            ctx->pc = 0x229AE0u;
            { ctx->pc = 0x229ae0; return; }
        }
    }
    ctx->pc = 0x2298D8u;
label_2298d8:
    // 0x2298d8: 0x8c30a278  lw          $s0, -0x5D88($at)
    ctx->pc = 0x2298d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943352)));
label_2298dc:
    // 0x2298dc: 0xc090df4  jal         func_2437D0
label_2298e0:
    if (ctx->pc == 0x2298E0u) {
        ctx->pc = 0x2298E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2298DCu;
        // 0x2298e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2298E4u;
        goto label_2298e4;
    }
    ctx->pc = 0x2298DCu;
    SET_GPR_U32(ctx, 31, 0x2298E4u);
    ctx->pc = 0x2298E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2298DCu;
    // 0x2298e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2437D0u;
    { ctx->pc = 0x2437d0; return; }
    ctx->pc = 0x2298E4u;
label_2298e4:
    // 0x2298e4: 0x1202007e  beq         $s0, $v0, . + 4 + (0x7E << 2)
label_2298e8:
    if (ctx->pc == 0x2298E8u) {
        ctx->pc = 0x2298ECu;
        goto label_2298ec;
    }
    ctx->pc = 0x2298E4u;
    {
        const bool branch_taken_0x2298e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2298e4) {
            ctx->pc = 0x229AE0u;
            { ctx->pc = 0x229ae0; return; }
        }
    }
    ctx->pc = 0x2298ECu;
label_2298ec:
    // 0x2298ec: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x2298ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2298f0:
    // 0x2298f0: 0x16020009  bne         $s0, $v0, . + 4 + (0x9 << 2)
label_2298f4:
    if (ctx->pc == 0x2298F4u) {
        ctx->pc = 0x2298F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2298F0u;
        // 0x2298f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2298F8u;
        goto label_2298f8;
    }
    ctx->pc = 0x2298F0u;
    {
        const bool branch_taken_0x2298f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2298F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2298F0u;
        // 0x2298f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2298f0) {
            ctx->pc = 0x229918u;
            goto label_229918;
        }
    }
    ctx->pc = 0x2298F8u;
label_2298f8:
    // 0x2298f8: 0xc090df4  jal         func_2437D0
label_2298fc:
    if (ctx->pc == 0x2298FCu) {
        ctx->pc = 0x2298FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2298F8u;
        // 0x2298fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229900u;
        goto label_229900;
    }
    ctx->pc = 0x2298F8u;
    SET_GPR_U32(ctx, 31, 0x229900u);
    ctx->pc = 0x2298FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2298F8u;
    // 0x2298fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2437D0u;
    { ctx->pc = 0x2437d0; return; }
    ctx->pc = 0x229900u;
label_229900:
    // 0x229900: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_229904:
    // 0x229904: 0x8c23a270  lw          $v1, -0x5D90($at)
    ctx->pc = 0x229904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943344)));
label_229908:
    // 0x229908: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x229908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_22990c:
    // 0x22990c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x22990cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_229910:
    // 0x229910: 0x1000000b  b           . + 4 + (0xB << 2)
label_229914:
    if (ctx->pc == 0x229914u) {
        ctx->pc = 0x229914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229910u;
        // 0x229914: 0xac22a270  sw          $v0, -0x5D90($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294943344), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229918u;
        goto label_229918;
    }
    ctx->pc = 0x229910u;
    {
        const bool branch_taken_0x229910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229910u;
        // 0x229914: 0xac22a270  sw          $v0, -0x5D90($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294943344), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229910) {
            ctx->pc = 0x229940u;
            goto label_229940;
        }
    }
    ctx->pc = 0x229918u;
label_229918:
    // 0x229918: 0xc090df4  jal         func_2437D0
label_22991c:
    if (ctx->pc == 0x22991Cu) {
        ctx->pc = 0x229920u;
        goto label_229920;
    }
    ctx->pc = 0x229918u;
    SET_GPR_U32(ctx, 31, 0x229920u);
    ctx->pc = 0x2437D0u;
    { ctx->pc = 0x2437d0; return; }
    ctx->pc = 0x229920u;
label_229920:
    // 0x229920: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_229924:
    // 0x229924: 0x8c24a278  lw          $a0, -0x5D88($at)
    ctx->pc = 0x229924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943352)));
label_229928:
    // 0x229928: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_22992c:
    // 0x22992c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x22992cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_229930:
    // 0x229930: 0x8c23a270  lw          $v1, -0x5D90($at)
    ctx->pc = 0x229930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943344)));
label_229934:
    // 0x229934: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x229934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_229938:
    // 0x229938: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_22993c:
    // 0x22993c: 0xac22a270  sw          $v0, -0x5D90($at)
    ctx->pc = 0x22993cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943344), GPR_U32(ctx, 2));
label_229940:
    // 0x229940: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_229944:
    // 0x229944: 0x8c22a270  lw          $v0, -0x5D90($at)
    ctx->pc = 0x229944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943344)));
label_229948:
    // 0x229948: 0x2841270f  slti        $at, $v0, 0x270F
    ctx->pc = 0x229948u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9999) ? 1 : 0);
label_22994c:
    // 0x22994c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_229950:
    if (ctx->pc == 0x229950u) {
        ctx->pc = 0x229954u;
        goto label_229954;
    }
    ctx->pc = 0x22994Cu;
    {
        const bool branch_taken_0x22994c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x22994c) {
            ctx->pc = 0x22995Cu;
            goto label_22995c;
        }
    }
    ctx->pc = 0x229954u;
label_229954:
    // 0x229954: 0x10000002  b           . + 4 + (0x2 << 2)
label_229958:
    if (ctx->pc == 0x229958u) {
        ctx->pc = 0x22995Cu;
        goto label_22995c;
    }
    ctx->pc = 0x229954u;
    {
        const bool branch_taken_0x229954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x229954) {
            ctx->pc = 0x229960u;
            goto label_229960;
        }
    }
    ctx->pc = 0x22995Cu;
label_22995c:
    // 0x22995c: 0x2402270f  addiu       $v0, $zero, 0x270F
    ctx->pc = 0x22995cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
label_229960:
    // 0x229960: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_229964:
    // 0x229964: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x229964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_229968:
    // 0x229968: 0xc090df4  jal         func_2437D0
label_22996c:
    if (ctx->pc == 0x22996Cu) {
        ctx->pc = 0x22996Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229968u;
        // 0x22996c: 0xac22a270  sw          $v0, -0x5D90($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294943344), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229970u;
        goto label_229970;
    }
    ctx->pc = 0x229968u;
    SET_GPR_U32(ctx, 31, 0x229970u);
    ctx->pc = 0x22996Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229968u;
    // 0x22996c: 0xac22a270  sw          $v0, -0x5D90($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943344), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2437D0u;
    { ctx->pc = 0x2437d0; return; }
    ctx->pc = 0x229970u;
label_229970:
    // 0x229970: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x229970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_229974:
    // 0x229974: 0x1443002e  bne         $v0, $v1, . + 4 + (0x2E << 2)
label_229978:
    if (ctx->pc == 0x229978u) {
        ctx->pc = 0x22997Cu;
        goto label_22997c;
    }
    ctx->pc = 0x229974u;
    {
        const bool branch_taken_0x229974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x229974) {
            ctx->pc = 0x229A30u;
            goto label_229a30;
        }
    }
    ctx->pc = 0x22997Cu;
label_22997c:
    // 0x22997c: 0xc08a004  jal         func_228010
label_229980:
    if (ctx->pc == 0x229980u) {
        ctx->pc = 0x229980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22997Cu;
        // 0x229980: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229984u;
        goto label_229984;
    }
    ctx->pc = 0x22997Cu;
    SET_GPR_U32(ctx, 31, 0x229984u);
    ctx->pc = 0x229980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22997Cu;
    // 0x229980: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228010u;
    { ctx->pc = 0x228010; return; }
    ctx->pc = 0x229984u;
label_229984:
    // 0x229984: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x229984u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_229988:
    // 0x229988: 0xc08a004  jal         func_228010
label_22998c:
    if (ctx->pc == 0x22998Cu) {
        ctx->pc = 0x22998Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229988u;
        // 0x22998c: 0x2404007f  addiu       $a0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229990u;
        goto label_229990;
    }
    ctx->pc = 0x229988u;
    SET_GPR_U32(ctx, 31, 0x229990u);
    ctx->pc = 0x22998Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229988u;
    // 0x22998c: 0x2404007f  addiu       $a0, $zero, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228010u;
    { ctx->pc = 0x228010; return; }
    ctx->pc = 0x229990u;
label_229990:
    // 0x229990: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x229990u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_229994:
    // 0x229994: 0x14200012  bnez        $at, . + 4 + (0x12 << 2)
label_229998:
    if (ctx->pc == 0x229998u) {
        ctx->pc = 0x22999Cu;
        goto label_22999c;
    }
    ctx->pc = 0x229994u;
    {
        const bool branch_taken_0x229994 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x229994) {
            ctx->pc = 0x2299E0u;
            goto label_2299e0;
        }
    }
    ctx->pc = 0x22999Cu;
label_22999c:
    // 0x22999c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x22999cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2299a0:
    // 0x2299a0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2299a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2299a4:
    // 0x2299a4: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_2299a8:
    if (ctx->pc == 0x2299A8u) {
        ctx->pc = 0x2299ACu;
        goto label_2299ac;
    }
    ctx->pc = 0x2299A4u;
    {
        const bool branch_taken_0x2299a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2299a4) {
            ctx->pc = 0x2299C8u;
            goto label_2299c8;
        }
    }
    ctx->pc = 0x2299ACu;
label_2299ac:
    // 0x2299ac: 0x86050006  lh          $a1, 0x6($s0)
    ctx->pc = 0x2299acu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_2299b0:
    // 0x2299b0: 0x86060008  lh          $a2, 0x8($s0)
    ctx->pc = 0x2299b0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_2299b4:
    // 0x2299b4: 0x8607000a  lh          $a3, 0xA($s0)
    ctx->pc = 0x2299b4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
label_2299b8:
    // 0x2299b8: 0x8608000c  lh          $t0, 0xC($s0)
    ctx->pc = 0x2299b8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_2299bc:
    // 0x2299bc: 0x8609000e  lh          $t1, 0xE($s0)
    ctx->pc = 0x2299bcu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
label_2299c0:
    // 0x2299c0: 0xc05d3e4  jal         func_174F90
label_2299c4:
    if (ctx->pc == 0x2299C4u) {
        ctx->pc = 0x2299C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2299C0u;
        // 0x2299c4: 0x86040004  lh          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2299C8u;
        goto label_2299c8;
    }
    ctx->pc = 0x2299C0u;
    SET_GPR_U32(ctx, 31, 0x2299C8u);
    ctx->pc = 0x2299C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2299C0u;
    // 0x2299c4: 0x86040004  lh          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174F90u, 0x2299C0u, 0x2299C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2299C8u;
label_2299c8:
    // 0x2299c8: 0x2404007f  addiu       $a0, $zero, 0x7F
    ctx->pc = 0x2299c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_2299cc:
    // 0x2299cc: 0xc08a004  jal         func_228010
label_2299d0:
    if (ctx->pc == 0x2299D0u) {
        ctx->pc = 0x2299D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2299CCu;
        // 0x2299d0: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2299D4u;
        goto label_2299d4;
    }
    ctx->pc = 0x2299CCu;
    SET_GPR_U32(ctx, 31, 0x2299D4u);
    ctx->pc = 0x2299D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2299CCu;
    // 0x2299d0: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228010u;
    { ctx->pc = 0x228010; return; }
    ctx->pc = 0x2299D4u;
label_2299d4:
    // 0x2299d4: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x2299d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_2299d8:
    // 0x2299d8: 0x1020fff0  beqz        $at, . + 4 + (-0x10 << 2)
label_2299dc:
    if (ctx->pc == 0x2299DCu) {
        ctx->pc = 0x2299E0u;
        goto label_2299e0;
    }
    ctx->pc = 0x2299D8u;
    {
        const bool branch_taken_0x2299d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2299d8) {
            ctx->pc = 0x22999Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22999c;
        }
    }
    ctx->pc = 0x2299E0u;
label_2299e0:
    // 0x2299e0: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x2299e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_2299e4:
    // 0x2299e4: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x2299e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_2299e8:
    // 0x2299e8: 0xac22a274  sw          $v0, -0x5D8C($at)
    ctx->pc = 0x2299e8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943348), GPR_U32(ctx, 2));
label_2299ec:
    // 0x2299ec: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x2299ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_2299f0:
    // 0x2299f0: 0x8c23a270  lw          $v1, -0x5D90($at)
    ctx->pc = 0x2299f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943344)));
label_2299f4:
    // 0x2299f4: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x2299f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_2299f8:
    // 0x2299f8: 0x8c22a274  lw          $v0, -0x5D8C($at)
    ctx->pc = 0x2299f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943348)));
label_2299fc:
    // 0x2299fc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2299fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_229a00:
    // 0x229a00: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229a00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_229a04:
    // 0x229a04: 0xac22a270  sw          $v0, -0x5D90($at)
    ctx->pc = 0x229a04u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943344), GPR_U32(ctx, 2));
label_229a08:
    // 0x229a08: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229a08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_229a0c:
    // 0x229a0c: 0x8c22a270  lw          $v0, -0x5D90($at)
    ctx->pc = 0x229a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943344)));
label_229a10:
    // 0x229a10: 0x2841270f  slti        $at, $v0, 0x270F
    ctx->pc = 0x229a10u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9999) ? 1 : 0);
label_229a14:
    // 0x229a14: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_229a18:
    if (ctx->pc == 0x229A18u) {
        ctx->pc = 0x229A1Cu;
        goto label_229a1c;
    }
    ctx->pc = 0x229A14u;
    {
        const bool branch_taken_0x229a14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x229a14) {
            ctx->pc = 0x229A24u;
            goto label_229a24;
        }
    }
    ctx->pc = 0x229A1Cu;
label_229a1c:
    // 0x229a1c: 0x10000002  b           . + 4 + (0x2 << 2)
label_229a20:
    if (ctx->pc == 0x229A20u) {
        ctx->pc = 0x229A24u;
        goto label_229a24;
    }
    ctx->pc = 0x229A1Cu;
    {
        const bool branch_taken_0x229a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x229a1c) {
            ctx->pc = 0x229A28u;
            goto label_229a28;
        }
    }
    ctx->pc = 0x229A24u;
label_229a24:
    // 0x229a24: 0x2402270f  addiu       $v0, $zero, 0x270F
    ctx->pc = 0x229a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
label_229a28:
    // 0x229a28: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229a28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_229a2c:
    // 0x229a2c: 0xac22a270  sw          $v0, -0x5D90($at)
    ctx->pc = 0x229a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294943344), GPR_U32(ctx, 2));
label_229a30:
    // 0x229a30: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x229a30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
label_229a34:
    // 0x229a34: 0x8c23a270  lw          $v1, -0x5D90($at)
    ctx->pc = 0x229a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943344)));
label_229a38:
    // 0x229a38: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x229a38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
label_229a3c:
    // 0x229a3c: 0x8c22cc38  lw          $v0, -0x33C8($at)
    ctx->pc = 0x229a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954040)));
    ctx->pc = 0x229a40u;
    return;
}

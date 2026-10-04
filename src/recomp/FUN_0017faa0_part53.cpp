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

// Function: FUN_0017faa0
// Address: 0x17faa0 - 0x2bfb1c
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0017faa0_part53(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1990e0u: goto label_1990e0;
        case 0x1990e4u: goto label_1990e4;
        case 0x1990e8u: goto label_1990e8;
        case 0x1990ecu: goto label_1990ec;
        case 0x1990f0u: goto label_1990f0;
        case 0x1990f4u: goto label_1990f4;
        case 0x1990f8u: goto label_1990f8;
        case 0x1990fcu: goto label_1990fc;
        case 0x199100u: goto label_199100;
        case 0x199104u: goto label_199104;
        case 0x199108u: goto label_199108;
        case 0x19910cu: goto label_19910c;
        case 0x199110u: goto label_199110;
        case 0x199114u: goto label_199114;
        case 0x199118u: goto label_199118;
        case 0x19911cu: goto label_19911c;
        case 0x199120u: goto label_199120;
        case 0x199124u: goto label_199124;
        case 0x199128u: goto label_199128;
        case 0x19912cu: goto label_19912c;
        case 0x199130u: goto label_199130;
        case 0x199134u: goto label_199134;
        case 0x199138u: goto label_199138;
        case 0x19913cu: goto label_19913c;
        case 0x199140u: goto label_199140;
        case 0x199144u: goto label_199144;
        case 0x199148u: goto label_199148;
        case 0x19914cu: goto label_19914c;
        case 0x199150u: goto label_199150;
        case 0x199154u: goto label_199154;
        case 0x199158u: goto label_199158;
        case 0x19915cu: goto label_19915c;
        case 0x199160u: goto label_199160;
        case 0x199164u: goto label_199164;
        case 0x199168u: goto label_199168;
        case 0x19916cu: goto label_19916c;
        case 0x199170u: goto label_199170;
        case 0x199174u: goto label_199174;
        case 0x199178u: goto label_199178;
        case 0x19917cu: goto label_19917c;
        case 0x199180u: goto label_199180;
        case 0x199184u: goto label_199184;
        case 0x199188u: goto label_199188;
        case 0x19918cu: goto label_19918c;
        case 0x199190u: goto label_199190;
        case 0x199194u: goto label_199194;
        case 0x199198u: goto label_199198;
        case 0x19919cu: goto label_19919c;
        case 0x1991a0u: goto label_1991a0;
        case 0x1991a4u: goto label_1991a4;
        case 0x1991a8u: goto label_1991a8;
        case 0x1991acu: goto label_1991ac;
        case 0x1991b0u: goto label_1991b0;
        case 0x1991b4u: goto label_1991b4;
        case 0x1991b8u: goto label_1991b8;
        case 0x1991bcu: goto label_1991bc;
        case 0x1991c0u: goto label_1991c0;
        case 0x1991c4u: goto label_1991c4;
        case 0x1991c8u: goto label_1991c8;
        case 0x1991ccu: goto label_1991cc;
        case 0x1991d0u: goto label_1991d0;
        case 0x1991d4u: goto label_1991d4;
        case 0x1991d8u: goto label_1991d8;
        case 0x1991dcu: goto label_1991dc;
        case 0x1991e0u: goto label_1991e0;
        case 0x1991e4u: goto label_1991e4;
        case 0x1991e8u: goto label_1991e8;
        case 0x1991ecu: goto label_1991ec;
        case 0x1991f0u: goto label_1991f0;
        case 0x1991f4u: goto label_1991f4;
        case 0x1991f8u: goto label_1991f8;
        case 0x1991fcu: goto label_1991fc;
        case 0x199200u: goto label_199200;
        case 0x199204u: goto label_199204;
        case 0x199208u: goto label_199208;
        case 0x19920cu: goto label_19920c;
        case 0x199210u: goto label_199210;
        case 0x199214u: goto label_199214;
        case 0x199218u: goto label_199218;
        case 0x19921cu: goto label_19921c;
        case 0x199220u: goto label_199220;
        case 0x199224u: goto label_199224;
        case 0x199228u: goto label_199228;
        case 0x19922cu: goto label_19922c;
        case 0x199230u: goto label_199230;
        case 0x199234u: goto label_199234;
        case 0x199238u: goto label_199238;
        case 0x19923cu: goto label_19923c;
        case 0x199240u: goto label_199240;
        case 0x199244u: goto label_199244;
        case 0x199248u: goto label_199248;
        case 0x19924cu: goto label_19924c;
        case 0x199250u: goto label_199250;
        case 0x199254u: goto label_199254;
        case 0x199258u: goto label_199258;
        case 0x19925cu: goto label_19925c;
        case 0x199260u: goto label_199260;
        case 0x199264u: goto label_199264;
        case 0x199268u: goto label_199268;
        case 0x19926cu: goto label_19926c;
        case 0x199270u: goto label_199270;
        case 0x199274u: goto label_199274;
        case 0x199278u: goto label_199278;
        case 0x19927cu: goto label_19927c;
        case 0x199280u: goto label_199280;
        case 0x199284u: goto label_199284;
        case 0x199288u: goto label_199288;
        case 0x19928cu: goto label_19928c;
        case 0x199290u: goto label_199290;
        case 0x199294u: goto label_199294;
        case 0x199298u: goto label_199298;
        case 0x19929cu: goto label_19929c;
        case 0x1992a0u: goto label_1992a0;
        case 0x1992a4u: goto label_1992a4;
        case 0x1992a8u: goto label_1992a8;
        case 0x1992acu: goto label_1992ac;
        case 0x1992b0u: goto label_1992b0;
        case 0x1992b4u: goto label_1992b4;
        case 0x1992b8u: goto label_1992b8;
        case 0x1992bcu: goto label_1992bc;
        case 0x1992c0u: goto label_1992c0;
        case 0x1992c4u: goto label_1992c4;
        case 0x1992c8u: goto label_1992c8;
        case 0x1992ccu: goto label_1992cc;
        case 0x1992d0u: goto label_1992d0;
        case 0x1992d4u: goto label_1992d4;
        case 0x1992d8u: goto label_1992d8;
        case 0x1992dcu: goto label_1992dc;
        case 0x1992e0u: goto label_1992e0;
        case 0x1992e4u: goto label_1992e4;
        case 0x1992e8u: goto label_1992e8;
        case 0x1992ecu: goto label_1992ec;
        case 0x1992f0u: goto label_1992f0;
        case 0x1992f4u: goto label_1992f4;
        case 0x1992f8u: goto label_1992f8;
        case 0x1992fcu: goto label_1992fc;
        case 0x199300u: goto label_199300;
        case 0x199304u: goto label_199304;
        case 0x199308u: goto label_199308;
        case 0x19930cu: goto label_19930c;
        case 0x199310u: goto label_199310;
        case 0x199314u: goto label_199314;
        case 0x199318u: goto label_199318;
        case 0x19931cu: goto label_19931c;
        case 0x199320u: goto label_199320;
        case 0x199324u: goto label_199324;
        case 0x199328u: goto label_199328;
        case 0x19932cu: goto label_19932c;
        case 0x199330u: goto label_199330;
        case 0x199334u: goto label_199334;
        case 0x199338u: goto label_199338;
        case 0x19933cu: goto label_19933c;
        case 0x199340u: goto label_199340;
        case 0x199344u: goto label_199344;
        case 0x199348u: goto label_199348;
        case 0x19934cu: goto label_19934c;
        case 0x199350u: goto label_199350;
        case 0x199354u: goto label_199354;
        case 0x199358u: goto label_199358;
        case 0x19935cu: goto label_19935c;
        case 0x199360u: goto label_199360;
        case 0x199364u: goto label_199364;
        case 0x199368u: goto label_199368;
        case 0x19936cu: goto label_19936c;
        case 0x199370u: goto label_199370;
        case 0x199374u: goto label_199374;
        case 0x199378u: goto label_199378;
        case 0x19937cu: goto label_19937c;
        case 0x199380u: goto label_199380;
        case 0x199384u: goto label_199384;
        case 0x199388u: goto label_199388;
        case 0x19938cu: goto label_19938c;
        case 0x199390u: goto label_199390;
        case 0x199394u: goto label_199394;
        case 0x199398u: goto label_199398;
        case 0x19939cu: goto label_19939c;
        case 0x1993a0u: goto label_1993a0;
        case 0x1993a4u: goto label_1993a4;
        case 0x1993a8u: goto label_1993a8;
        case 0x1993acu: goto label_1993ac;
        case 0x1993b0u: goto label_1993b0;
        case 0x1993b4u: goto label_1993b4;
        case 0x1993b8u: goto label_1993b8;
        case 0x1993bcu: goto label_1993bc;
        case 0x1993c0u: goto label_1993c0;
        case 0x1993c4u: goto label_1993c4;
        case 0x1993c8u: goto label_1993c8;
        case 0x1993ccu: goto label_1993cc;
        case 0x1993d0u: goto label_1993d0;
        case 0x1993d4u: goto label_1993d4;
        case 0x1993d8u: goto label_1993d8;
        case 0x1993dcu: goto label_1993dc;
        case 0x1993e0u: goto label_1993e0;
        case 0x1993e4u: goto label_1993e4;
        case 0x1993e8u: goto label_1993e8;
        case 0x1993ecu: goto label_1993ec;
        case 0x1993f0u: goto label_1993f0;
        case 0x1993f4u: goto label_1993f4;
        case 0x1993f8u: goto label_1993f8;
        case 0x1993fcu: goto label_1993fc;
        case 0x199400u: goto label_199400;
        case 0x199404u: goto label_199404;
        case 0x199408u: goto label_199408;
        case 0x19940cu: goto label_19940c;
        case 0x199410u: goto label_199410;
        case 0x199414u: goto label_199414;
        case 0x199418u: goto label_199418;
        case 0x19941cu: goto label_19941c;
        case 0x199420u: goto label_199420;
        case 0x199424u: goto label_199424;
        case 0x199428u: goto label_199428;
        case 0x19942cu: goto label_19942c;
        case 0x199430u: goto label_199430;
        case 0x199434u: goto label_199434;
        case 0x199438u: goto label_199438;
        case 0x19943cu: goto label_19943c;
        case 0x199440u: goto label_199440;
        case 0x199444u: goto label_199444;
        case 0x199448u: goto label_199448;
        case 0x19944cu: goto label_19944c;
        case 0x199450u: goto label_199450;
        case 0x199454u: goto label_199454;
        case 0x199458u: goto label_199458;
        case 0x19945cu: goto label_19945c;
        case 0x199460u: goto label_199460;
        case 0x199464u: goto label_199464;
        case 0x199468u: goto label_199468;
        case 0x19946cu: goto label_19946c;
        case 0x199470u: goto label_199470;
        case 0x199474u: goto label_199474;
        case 0x199478u: goto label_199478;
        case 0x19947cu: goto label_19947c;
        case 0x199480u: goto label_199480;
        case 0x199484u: goto label_199484;
        case 0x199488u: goto label_199488;
        case 0x19948cu: goto label_19948c;
        case 0x199490u: goto label_199490;
        case 0x199494u: goto label_199494;
        case 0x199498u: goto label_199498;
        case 0x19949cu: goto label_19949c;
        case 0x1994a0u: goto label_1994a0;
        case 0x1994a4u: goto label_1994a4;
        case 0x1994a8u: goto label_1994a8;
        case 0x1994acu: goto label_1994ac;
        case 0x1994b0u: goto label_1994b0;
        case 0x1994b4u: goto label_1994b4;
        case 0x1994b8u: goto label_1994b8;
        case 0x1994bcu: goto label_1994bc;
        case 0x1994c0u: goto label_1994c0;
        case 0x1994c4u: goto label_1994c4;
        case 0x1994c8u: goto label_1994c8;
        case 0x1994ccu: goto label_1994cc;
        case 0x1994d0u: goto label_1994d0;
        case 0x1994d4u: goto label_1994d4;
        case 0x1994d8u: goto label_1994d8;
        case 0x1994dcu: goto label_1994dc;
        case 0x1994e0u: goto label_1994e0;
        case 0x1994e4u: goto label_1994e4;
        case 0x1994e8u: goto label_1994e8;
        case 0x1994ecu: goto label_1994ec;
        case 0x1994f0u: goto label_1994f0;
        case 0x1994f4u: goto label_1994f4;
        case 0x1994f8u: goto label_1994f8;
        case 0x1994fcu: goto label_1994fc;
        case 0x199500u: goto label_199500;
        case 0x199504u: goto label_199504;
        case 0x199508u: goto label_199508;
        case 0x19950cu: goto label_19950c;
        case 0x199510u: goto label_199510;
        case 0x199514u: goto label_199514;
        case 0x199518u: goto label_199518;
        case 0x19951cu: goto label_19951c;
        case 0x199520u: goto label_199520;
        case 0x199524u: goto label_199524;
        case 0x199528u: goto label_199528;
        case 0x19952cu: goto label_19952c;
        case 0x199530u: goto label_199530;
        case 0x199534u: goto label_199534;
        case 0x199538u: goto label_199538;
        case 0x19953cu: goto label_19953c;
        case 0x199540u: goto label_199540;
        case 0x199544u: goto label_199544;
        case 0x199548u: goto label_199548;
        case 0x19954cu: goto label_19954c;
        case 0x199550u: goto label_199550;
        case 0x199554u: goto label_199554;
        case 0x199558u: goto label_199558;
        case 0x19955cu: goto label_19955c;
        case 0x199560u: goto label_199560;
        case 0x199564u: goto label_199564;
        case 0x199568u: goto label_199568;
        case 0x19956cu: goto label_19956c;
        case 0x199570u: goto label_199570;
        case 0x199574u: goto label_199574;
        case 0x199578u: goto label_199578;
        case 0x19957cu: goto label_19957c;
        case 0x199580u: goto label_199580;
        case 0x199584u: goto label_199584;
        case 0x199588u: goto label_199588;
        case 0x19958cu: goto label_19958c;
        case 0x199590u: goto label_199590;
        case 0x199594u: goto label_199594;
        case 0x199598u: goto label_199598;
        case 0x19959cu: goto label_19959c;
        case 0x1995a0u: goto label_1995a0;
        case 0x1995a4u: goto label_1995a4;
        case 0x1995a8u: goto label_1995a8;
        case 0x1995acu: goto label_1995ac;
        case 0x1995b0u: goto label_1995b0;
        case 0x1995b4u: goto label_1995b4;
        case 0x1995b8u: goto label_1995b8;
        case 0x1995bcu: goto label_1995bc;
        case 0x1995c0u: goto label_1995c0;
        case 0x1995c4u: goto label_1995c4;
        case 0x1995c8u: goto label_1995c8;
        case 0x1995ccu: goto label_1995cc;
        case 0x1995d0u: goto label_1995d0;
        case 0x1995d4u: goto label_1995d4;
        case 0x1995d8u: goto label_1995d8;
        case 0x1995dcu: goto label_1995dc;
        case 0x1995e0u: goto label_1995e0;
        case 0x1995e4u: goto label_1995e4;
        case 0x1995e8u: goto label_1995e8;
        case 0x1995ecu: goto label_1995ec;
        case 0x1995f0u: goto label_1995f0;
        case 0x1995f4u: goto label_1995f4;
        case 0x1995f8u: goto label_1995f8;
        case 0x1995fcu: goto label_1995fc;
        case 0x199600u: goto label_199600;
        case 0x199604u: goto label_199604;
        case 0x199608u: goto label_199608;
        case 0x19960cu: goto label_19960c;
        case 0x199610u: goto label_199610;
        case 0x199614u: goto label_199614;
        case 0x199618u: goto label_199618;
        case 0x19961cu: goto label_19961c;
        case 0x199620u: goto label_199620;
        case 0x199624u: goto label_199624;
        case 0x199628u: goto label_199628;
        case 0x19962cu: goto label_19962c;
        case 0x199630u: goto label_199630;
        case 0x199634u: goto label_199634;
        case 0x199638u: goto label_199638;
        case 0x19963cu: goto label_19963c;
        case 0x199640u: goto label_199640;
        case 0x199644u: goto label_199644;
        case 0x199648u: goto label_199648;
        case 0x19964cu: goto label_19964c;
        case 0x199650u: goto label_199650;
        case 0x199654u: goto label_199654;
        case 0x199658u: goto label_199658;
        case 0x19965cu: goto label_19965c;
        case 0x199660u: goto label_199660;
        case 0x199664u: goto label_199664;
        case 0x199668u: goto label_199668;
        case 0x19966cu: goto label_19966c;
        case 0x199670u: goto label_199670;
        case 0x199674u: goto label_199674;
        case 0x199678u: goto label_199678;
        case 0x19967cu: goto label_19967c;
        case 0x199680u: goto label_199680;
        case 0x199684u: goto label_199684;
        case 0x199688u: goto label_199688;
        case 0x19968cu: goto label_19968c;
        case 0x199690u: goto label_199690;
        case 0x199694u: goto label_199694;
        case 0x199698u: goto label_199698;
        case 0x19969cu: goto label_19969c;
        case 0x1996a0u: goto label_1996a0;
        case 0x1996a4u: goto label_1996a4;
        case 0x1996a8u: goto label_1996a8;
        case 0x1996acu: goto label_1996ac;
        case 0x1996b0u: goto label_1996b0;
        case 0x1996b4u: goto label_1996b4;
        case 0x1996b8u: goto label_1996b8;
        case 0x1996bcu: goto label_1996bc;
        case 0x1996c0u: goto label_1996c0;
        case 0x1996c4u: goto label_1996c4;
        case 0x1996c8u: goto label_1996c8;
        case 0x1996ccu: goto label_1996cc;
        case 0x1996d0u: goto label_1996d0;
        case 0x1996d4u: goto label_1996d4;
        case 0x1996d8u: goto label_1996d8;
        case 0x1996dcu: goto label_1996dc;
        case 0x1996e0u: goto label_1996e0;
        case 0x1996e4u: goto label_1996e4;
        case 0x1996e8u: goto label_1996e8;
        case 0x1996ecu: goto label_1996ec;
        case 0x1996f0u: goto label_1996f0;
        case 0x1996f4u: goto label_1996f4;
        case 0x1996f8u: goto label_1996f8;
        case 0x1996fcu: goto label_1996fc;
        case 0x199700u: goto label_199700;
        case 0x199704u: goto label_199704;
        case 0x199708u: goto label_199708;
        case 0x19970cu: goto label_19970c;
        case 0x199710u: goto label_199710;
        case 0x199714u: goto label_199714;
        case 0x199718u: goto label_199718;
        case 0x19971cu: goto label_19971c;
        case 0x199720u: goto label_199720;
        case 0x199724u: goto label_199724;
        case 0x199728u: goto label_199728;
        case 0x19972cu: goto label_19972c;
        case 0x199730u: goto label_199730;
        case 0x199734u: goto label_199734;
        case 0x199738u: goto label_199738;
        case 0x19973cu: goto label_19973c;
        case 0x199740u: goto label_199740;
        case 0x199744u: goto label_199744;
        case 0x199748u: goto label_199748;
        case 0x19974cu: goto label_19974c;
        case 0x199750u: goto label_199750;
        case 0x199754u: goto label_199754;
        case 0x199758u: goto label_199758;
        case 0x19975cu: goto label_19975c;
        case 0x199760u: goto label_199760;
        case 0x199764u: goto label_199764;
        case 0x199768u: goto label_199768;
        case 0x19976cu: goto label_19976c;
        case 0x199770u: goto label_199770;
        case 0x199774u: goto label_199774;
        case 0x199778u: goto label_199778;
        case 0x19977cu: goto label_19977c;
        case 0x199780u: goto label_199780;
        case 0x199784u: goto label_199784;
        case 0x199788u: goto label_199788;
        case 0x19978cu: goto label_19978c;
        case 0x199790u: goto label_199790;
        case 0x199794u: goto label_199794;
        case 0x199798u: goto label_199798;
        case 0x19979cu: goto label_19979c;
        case 0x1997a0u: goto label_1997a0;
        case 0x1997a4u: goto label_1997a4;
        case 0x1997a8u: goto label_1997a8;
        case 0x1997acu: goto label_1997ac;
        case 0x1997b0u: goto label_1997b0;
        case 0x1997b4u: goto label_1997b4;
        case 0x1997b8u: goto label_1997b8;
        case 0x1997bcu: goto label_1997bc;
        case 0x1997c0u: goto label_1997c0;
        case 0x1997c4u: goto label_1997c4;
        case 0x1997c8u: goto label_1997c8;
        case 0x1997ccu: goto label_1997cc;
        case 0x1997d0u: goto label_1997d0;
        case 0x1997d4u: goto label_1997d4;
        case 0x1997d8u: goto label_1997d8;
        case 0x1997dcu: goto label_1997dc;
        case 0x1997e0u: goto label_1997e0;
        case 0x1997e4u: goto label_1997e4;
        case 0x1997e8u: goto label_1997e8;
        case 0x1997ecu: goto label_1997ec;
        case 0x1997f0u: goto label_1997f0;
        case 0x1997f4u: goto label_1997f4;
        case 0x1997f8u: goto label_1997f8;
        case 0x1997fcu: goto label_1997fc;
        case 0x199800u: goto label_199800;
        case 0x199804u: goto label_199804;
        case 0x199808u: goto label_199808;
        case 0x19980cu: goto label_19980c;
        case 0x199810u: goto label_199810;
        case 0x199814u: goto label_199814;
        case 0x199818u: goto label_199818;
        case 0x19981cu: goto label_19981c;
        case 0x199820u: goto label_199820;
        case 0x199824u: goto label_199824;
        case 0x199828u: goto label_199828;
        case 0x19982cu: goto label_19982c;
        case 0x199830u: goto label_199830;
        case 0x199834u: goto label_199834;
        case 0x199838u: goto label_199838;
        case 0x19983cu: goto label_19983c;
        case 0x199840u: goto label_199840;
        case 0x199844u: goto label_199844;
        case 0x199848u: goto label_199848;
        case 0x19984cu: goto label_19984c;
        case 0x199850u: goto label_199850;
        case 0x199854u: goto label_199854;
        case 0x199858u: goto label_199858;
        case 0x19985cu: goto label_19985c;
        case 0x199860u: goto label_199860;
        case 0x199864u: goto label_199864;
        case 0x199868u: goto label_199868;
        case 0x19986cu: goto label_19986c;
        case 0x199870u: goto label_199870;
        case 0x199874u: goto label_199874;
        case 0x199878u: goto label_199878;
        case 0x19987cu: goto label_19987c;
        case 0x199880u: goto label_199880;
        case 0x199884u: goto label_199884;
        case 0x199888u: goto label_199888;
        case 0x19988cu: goto label_19988c;
        case 0x199890u: goto label_199890;
        case 0x199894u: goto label_199894;
        case 0x199898u: goto label_199898;
        case 0x19989cu: goto label_19989c;
        case 0x1998a0u: goto label_1998a0;
        case 0x1998a4u: goto label_1998a4;
        case 0x1998a8u: goto label_1998a8;
        case 0x1998acu: goto label_1998ac;
        default: return;
    }

label_1990e0:
    // 0x1990e0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_1990e4:
    if (ctx->pc == 0x1990E4u) {
        ctx->pc = 0x1990E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1990E0u;
        // 0x1990e4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1990E8u;
        goto label_1990e8;
    }
    ctx->pc = 0x1990E0u;
    {
        const bool branch_taken_0x1990e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1990E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1990E0u;
        // 0x1990e4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1990e0) {
            ctx->pc = 0x1990F0u;
            goto label_1990f0;
        }
    }
    ctx->pc = 0x1990E8u;
label_1990e8:
    // 0x1990e8: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x1990e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
label_1990ec:
    // 0x1990ec: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1990ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1990f0:
    // 0x1990f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1990f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1990f4:
    // 0x1990f4: 0x3e00008  jr          $ra
label_1990f8:
    if (ctx->pc == 0x1990F8u) {
        ctx->pc = 0x1990F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1990F4u;
        // 0x1990f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1990FCu;
        goto label_1990fc;
    }
    ctx->pc = 0x1990F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1990F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1990F4u;
        // 0x1990f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1990F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1990FCu;
label_1990fc:
    // 0x1990fc: 0x0  nop
    ctx->pc = 0x1990fcu;
    // NOP
label_199100:
    // 0x199100: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x199100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_199104:
    // 0x199104: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x199104u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_199108:
    // 0x199108: 0x148000a2  bnez        $a0, . + 4 + (0xA2 << 2)
label_19910c:
    if (ctx->pc == 0x19910Cu) {
        ctx->pc = 0x19910Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199108u;
        // 0x19910c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199110u;
        goto label_199110;
    }
    ctx->pc = 0x199108u;
    {
        const bool branch_taken_0x199108 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x19910Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199108u;
        // 0x19910c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199108) {
            ctx->pc = 0x199394u;
            goto label_199394;
        }
    }
    ctx->pc = 0x199110u;
label_199110:
    // 0x199110: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x199110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_199114:
    // 0x199114: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x199114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
label_199118:
    // 0x199118: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x199118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_19911c:
    // 0x19911c: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x19911cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
label_199120:
    // 0x199120: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_199124:
    if (ctx->pc == 0x199124u) {
        ctx->pc = 0x199124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199120u;
        // 0x199124: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199128u;
        goto label_199128;
    }
    ctx->pc = 0x199120u;
    {
        const bool branch_taken_0x199120 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x199124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199120u;
        // 0x199124: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199120) {
            ctx->pc = 0x199154u;
            goto label_199154;
        }
    }
    ctx->pc = 0x199128u;
label_199128:
    // 0x199128: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x199128u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
label_19912c:
    // 0x19912c: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x19912cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
label_199130:
    // 0x199130: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x199130u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_199134:
    // 0x199134: 0x0  nop
    ctx->pc = 0x199134u;
    // NOP
label_199138:
    // 0x199138: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x199138u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_19913c:
    // 0x19913c: 0x14400047  bnez        $v0, . + 4 + (0x47 << 2)
label_199140:
    if (ctx->pc == 0x199140u) {
        ctx->pc = 0x199140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19913Cu;
        // 0x199140: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199144u;
        goto label_199144;
    }
    ctx->pc = 0x19913Cu;
    {
        const bool branch_taken_0x19913c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19913Cu;
        // 0x199140: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19913c) {
            ctx->pc = 0x19925Cu;
            goto label_19925c;
        }
    }
    ctx->pc = 0x199144u;
label_199144:
    // 0x199144: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x199144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_199148:
    // 0x199148: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x199148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_19914c:
    // 0x19914c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_199150:
    if (ctx->pc == 0x199150u) {
        ctx->pc = 0x199150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19914Cu;
        // 0x199150: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199154u;
        goto label_199154;
    }
    ctx->pc = 0x19914Cu;
    {
        const bool branch_taken_0x19914c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19914Cu;
        // 0x199150: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19914c) {
            ctx->pc = 0x199138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199138;
        }
    }
    ctx->pc = 0x199154u;
label_199154:
    // 0x199154: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x199154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_199158:
    // 0x199158: 0x3442a000  ori         $v0, $v0, 0xA000
    ctx->pc = 0x199158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
label_19915c:
    // 0x19915c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19915cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_199160:
    // 0x199160: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x199160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
label_199164:
    // 0x199164: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_199168:
    if (ctx->pc == 0x199168u) {
        ctx->pc = 0x199168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199164u;
        // 0x199168: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19916Cu;
        goto label_19916c;
    }
    ctx->pc = 0x199164u;
    {
        const bool branch_taken_0x199164 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x199168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199164u;
        // 0x199168: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199164) {
            ctx->pc = 0x199194u;
            goto label_199194;
        }
    }
    ctx->pc = 0x19916Cu;
label_19916c:
    // 0x19916c: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x19916cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
label_199170:
    // 0x199170: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x199170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
label_199174:
    // 0x199174: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x199174u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_199178:
    // 0x199178: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x199178u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_19917c:
    // 0x19917c: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
label_199180:
    if (ctx->pc == 0x199180u) {
        ctx->pc = 0x199180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19917Cu;
        // 0x199180: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199184u;
        goto label_199184;
    }
    ctx->pc = 0x19917Cu;
    {
        const bool branch_taken_0x19917c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19917Cu;
        // 0x199180: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19917c) {
            ctx->pc = 0x199268u;
            goto label_199268;
        }
    }
    ctx->pc = 0x199184u;
label_199184:
    // 0x199184: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x199184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_199188:
    // 0x199188: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x199188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_19918c:
    // 0x19918c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_199190:
    if (ctx->pc == 0x199190u) {
        ctx->pc = 0x199190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19918Cu;
        // 0x199190: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199194u;
        goto label_199194;
    }
    ctx->pc = 0x19918Cu;
    {
        const bool branch_taken_0x19918c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19918Cu;
        // 0x199190: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19918c) {
            ctx->pc = 0x199178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199178;
        }
    }
    ctx->pc = 0x199194u;
label_199194:
    // 0x199194: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x199194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_199198:
    // 0x199198: 0x3c041f00  lui         $a0, 0x1F00
    ctx->pc = 0x199198u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)7936 << 16));
label_19919c:
    // 0x19919c: 0x34423c00  ori         $v0, $v0, 0x3C00
    ctx->pc = 0x19919cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15360);
label_1991a0:
    // 0x1991a0: 0x34840003  ori         $a0, $a0, 0x3
    ctx->pc = 0x1991a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
label_1991a4:
    // 0x1991a4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1991a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1991a8:
    // 0x1991a8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1991a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_1991ac:
    // 0x1991ac: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_1991b0:
    if (ctx->pc == 0x1991B0u) {
        ctx->pc = 0x1991B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1991ACu;
        // 0x1991b0: 0x3c031f00  lui         $v1, 0x1F00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7936 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1991B4u;
        goto label_1991b4;
    }
    ctx->pc = 0x1991ACu;
    {
        const bool branch_taken_0x1991ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1991B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1991ACu;
        // 0x1991b0: 0x3c031f00  lui         $v1, 0x1F00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7936 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1991ac) {
            ctx->pc = 0x1991E4u;
            goto label_1991e4;
        }
    }
    ctx->pc = 0x1991B4u;
label_1991b4:
    // 0x1991b4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1991b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_1991b8:
    // 0x1991b8: 0x3c060100  lui         $a2, 0x100
    ctx->pc = 0x1991b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)256 << 16));
label_1991bc:
    // 0x1991bc: 0x34843c00  ori         $a0, $a0, 0x3C00
    ctx->pc = 0x1991bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)15360);
label_1991c0:
    // 0x1991c0: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x1991c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
label_1991c4:
    // 0x1991c4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1991c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1991c8:
    // 0x1991c8: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x1991c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1991cc:
    // 0x1991cc: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
label_1991d0:
    if (ctx->pc == 0x1991D0u) {
        ctx->pc = 0x1991D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1991CCu;
        // 0x1991d0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1991D4u;
        goto label_1991d4;
    }
    ctx->pc = 0x1991CCu;
    {
        const bool branch_taken_0x1991cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1991D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1991CCu;
        // 0x1991d0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1991cc) {
            ctx->pc = 0x199274u;
            goto label_199274;
        }
    }
    ctx->pc = 0x1991D4u;
label_1991d4:
    // 0x1991d4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1991d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1991d8:
    // 0x1991d8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1991d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1991dc:
    // 0x1991dc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_1991e0:
    if (ctx->pc == 0x1991E0u) {
        ctx->pc = 0x1991E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1991DCu;
        // 0x1991e0: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1991E4u;
        goto label_1991e4;
    }
    ctx->pc = 0x1991DCu;
    {
        const bool branch_taken_0x1991dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1991E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1991DCu;
        // 0x1991e0: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1991dc) {
            ctx->pc = 0x1991C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1991c8;
        }
    }
    ctx->pc = 0x1991E4u;
label_1991e4:
    // 0x1991e4: 0x4846e800  cfc2.ni     $a2, $vi29
    ctx->pc = 0x1991e4u;
    SET_GPR_U32(ctx, 6, ctx->vu0_vpu_stat);
label_1991e8:
    // 0x1991e8: 0x30c20100  andi        $v0, $a2, 0x100
    ctx->pc = 0x1991e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)256);
label_1991ec:
    // 0x1991ec: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1991f0:
    if (ctx->pc == 0x1991F0u) {
        ctx->pc = 0x1991F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1991ECu;
        // 0x1991f0: 0x3c030100  lui         $v1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1991F4u;
        goto label_1991f4;
    }
    ctx->pc = 0x1991ECu;
    {
        const bool branch_taken_0x1991ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1991F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1991ECu;
        // 0x1991f0: 0x3c030100  lui         $v1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1991ec) {
            ctx->pc = 0x199214u;
            goto label_199214;
        }
    }
    ctx->pc = 0x1991F4u;
label_1991f4:
    // 0x1991f4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1991f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1991f8:
    // 0x1991f8: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1991f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1991fc:
    // 0x1991fc: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
label_199200:
    if (ctx->pc == 0x199200u) {
        ctx->pc = 0x199200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1991FCu;
        // 0x199200: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199204u;
        goto label_199204;
    }
    ctx->pc = 0x1991FCu;
    {
        const bool branch_taken_0x1991fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1991FCu;
        // 0x199200: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1991fc) {
            ctx->pc = 0x199280u;
            goto label_199280;
        }
    }
    ctx->pc = 0x199204u;
label_199204:
    // 0x199204: 0x4846e800  cfc2.ni     $a2, $vi29
    ctx->pc = 0x199204u;
    SET_GPR_U32(ctx, 6, ctx->vu0_vpu_stat);
label_199208:
    // 0x199208: 0x30c20100  andi        $v0, $a2, 0x100
    ctx->pc = 0x199208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)256);
label_19920c:
    // 0x19920c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_199210:
    if (ctx->pc == 0x199210u) {
        ctx->pc = 0x199210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19920Cu;
        // 0x199210: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199214u;
        goto label_199214;
    }
    ctx->pc = 0x19920Cu;
    {
        const bool branch_taken_0x19920c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19920Cu;
        // 0x199210: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19920c) {
            ctx->pc = 0x1991F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1991f8;
        }
    }
    ctx->pc = 0x199214u;
label_199214:
    // 0x199214: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x199214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_199218:
    // 0x199218: 0x34423020  ori         $v0, $v0, 0x3020
    ctx->pc = 0x199218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12320);
label_19921c:
    // 0x19921c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19921cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_199220:
    // 0x199220: 0x30630c00  andi        $v1, $v1, 0xC00
    ctx->pc = 0x199220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3072);
label_199224:
    // 0x199224: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_199228:
    if (ctx->pc == 0x199228u) {
        ctx->pc = 0x199228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199224u;
        // 0x199228: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19922Cu;
        goto label_19922c;
    }
    ctx->pc = 0x199224u;
    {
        const bool branch_taken_0x199224 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x199228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199224u;
        // 0x199228: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199224) {
            ctx->pc = 0x199254u;
            goto label_199254;
        }
    }
    ctx->pc = 0x19922Cu;
label_19922c:
    // 0x19922c: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x19922cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
label_199230:
    // 0x199230: 0x34633020  ori         $v1, $v1, 0x3020
    ctx->pc = 0x199230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12320);
label_199234:
    // 0x199234: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x199234u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_199238:
    // 0x199238: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x199238u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_19923c:
    // 0x19923c: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_199240:
    if (ctx->pc == 0x199240u) {
        ctx->pc = 0x199240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19923Cu;
        // 0x199240: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199244u;
        goto label_199244;
    }
    ctx->pc = 0x19923Cu;
    {
        const bool branch_taken_0x19923c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19923Cu;
        // 0x199240: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19923c) {
            ctx->pc = 0x19928Cu;
            goto label_19928c;
        }
    }
    ctx->pc = 0x199244u;
label_199244:
    // 0x199244: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x199244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_199248:
    // 0x199248: 0x30420c00  andi        $v0, $v0, 0xC00
    ctx->pc = 0x199248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3072);
label_19924c:
    // 0x19924c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_199250:
    if (ctx->pc == 0x199250u) {
        ctx->pc = 0x199250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19924Cu;
        // 0x199250: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199254u;
        goto label_199254;
    }
    ctx->pc = 0x19924Cu;
    {
        const bool branch_taken_0x19924c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19924Cu;
        // 0x199250: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19924c) {
            ctx->pc = 0x199238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199238;
        }
    }
    ctx->pc = 0x199254u;
label_199254:
    // 0x199254: 0x1000006c  b           . + 4 + (0x6C << 2)
label_199258:
    if (ctx->pc == 0x199258u) {
        ctx->pc = 0x199258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199254u;
        // 0x199258: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19925Cu;
        goto label_19925c;
    }
    ctx->pc = 0x199254u;
    {
        const bool branch_taken_0x199254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199254u;
        // 0x199258: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199254) {
            ctx->pc = 0x199408u;
            goto label_199408;
        }
    }
    ctx->pc = 0x19925Cu;
label_19925c:
    // 0x19925c: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x19925cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_199260:
    // 0x199260: 0x1000000c  b           . + 4 + (0xC << 2)
label_199264:
    if (ctx->pc == 0x199264u) {
        ctx->pc = 0x199264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199260u;
        // 0x199264: 0x24849ad0  addiu       $a0, $a0, -0x6530 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941392));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199268u;
        goto label_199268;
    }
    ctx->pc = 0x199260u;
    {
        const bool branch_taken_0x199260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199260u;
        // 0x199264: 0x24849ad0  addiu       $a0, $a0, -0x6530 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941392));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199260) {
            ctx->pc = 0x199294u;
            goto label_199294;
        }
    }
    ctx->pc = 0x199268u;
label_199268:
    // 0x199268: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x199268u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_19926c:
    // 0x19926c: 0x10000009  b           . + 4 + (0x9 << 2)
label_199270:
    if (ctx->pc == 0x199270u) {
        ctx->pc = 0x199270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19926Cu;
        // 0x199270: 0x24849bb0  addiu       $a0, $a0, -0x6450 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941616));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199274u;
        goto label_199274;
    }
    ctx->pc = 0x19926Cu;
    {
        const bool branch_taken_0x19926c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19926Cu;
        // 0x199270: 0x24849bb0  addiu       $a0, $a0, -0x6450 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941616));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19926c) {
            ctx->pc = 0x199294u;
            goto label_199294;
        }
    }
    ctx->pc = 0x199274u;
label_199274:
    // 0x199274: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x199274u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_199278:
    // 0x199278: 0x10000006  b           . + 4 + (0x6 << 2)
label_19927c:
    if (ctx->pc == 0x19927Cu) {
        ctx->pc = 0x19927Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199278u;
        // 0x19927c: 0x24849be0  addiu       $a0, $a0, -0x6420 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941664));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199280u;
        goto label_199280;
    }
    ctx->pc = 0x199278u;
    {
        const bool branch_taken_0x199278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19927Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199278u;
        // 0x19927c: 0x24849be0  addiu       $a0, $a0, -0x6420 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199278) {
            ctx->pc = 0x199294u;
            goto label_199294;
        }
    }
    ctx->pc = 0x199280u;
label_199280:
    // 0x199280: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x199280u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_199284:
    // 0x199284: 0x10000003  b           . + 4 + (0x3 << 2)
label_199288:
    if (ctx->pc == 0x199288u) {
        ctx->pc = 0x199288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199284u;
        // 0x199288: 0x24849c10  addiu       $a0, $a0, -0x63F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941712));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19928Cu;
        goto label_19928c;
    }
    ctx->pc = 0x199284u;
    {
        const bool branch_taken_0x199284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199284u;
        // 0x199288: 0x24849c10  addiu       $a0, $a0, -0x63F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941712));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199284) {
            ctx->pc = 0x199294u;
            goto label_199294;
        }
    }
    ctx->pc = 0x19928Cu;
label_19928c:
    // 0x19928c: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x19928cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_199290:
    // 0x199290: 0x24849c38  addiu       $a0, $a0, -0x63C8
    ctx->pc = 0x199290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941752));
label_199294:
    // 0x199294: 0xc08ee2e  jal         func_23B8B8
label_199298:
    if (ctx->pc == 0x199298u) {
        ctx->pc = 0x19929Cu;
        goto label_19929c;
    }
    ctx->pc = 0x199294u;
    SET_GPR_U32(ctx, 31, 0x19929Cu);
    ctx->pc = 0x23B8B8u;
    { ctx->pc = 0x23b8b8; return; }
    ctx->pc = 0x19929Cu;
label_19929c:
    // 0x19929c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x19929cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_1992a0:
    // 0x1992a0: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1992a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_1992a4:
    // 0x1992a4: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x1992a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
label_1992a8:
    // 0x1992a8: 0x24849b00  addiu       $a0, $a0, -0x6500
    ctx->pc = 0x1992a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941440));
label_1992ac:
    // 0x1992ac: 0xc08ee2e  jal         func_23B8B8
label_1992b0:
    if (ctx->pc == 0x1992B0u) {
        ctx->pc = 0x1992B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1992ACu;
        // 0x1992b0: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1992B4u;
        goto label_1992b4;
    }
    ctx->pc = 0x1992ACu;
    SET_GPR_U32(ctx, 31, 0x1992B4u);
    ctx->pc = 0x1992B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1992ACu;
    // 0x1992b0: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8B8u;
    { ctx->pc = 0x23b8b8; return; }
    ctx->pc = 0x1992B4u;
label_1992b4:
    // 0x1992b4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1992b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_1992b8:
    // 0x1992b8: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1992b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_1992bc:
    // 0x1992bc: 0x34639030  ori         $v1, $v1, 0x9030
    ctx->pc = 0x1992bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36912);
label_1992c0:
    // 0x1992c0: 0x24849b10  addiu       $a0, $a0, -0x64F0
    ctx->pc = 0x1992c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
label_1992c4:
    // 0x1992c4: 0xc08ee2e  jal         func_23B8B8
label_1992c8:
    if (ctx->pc == 0x1992C8u) {
        ctx->pc = 0x1992C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1992C4u;
        // 0x1992c8: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1992CCu;
        goto label_1992cc;
    }
    ctx->pc = 0x1992C4u;
    SET_GPR_U32(ctx, 31, 0x1992CCu);
    ctx->pc = 0x1992C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1992C4u;
    // 0x1992c8: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8B8u;
    { ctx->pc = 0x23b8b8; return; }
    ctx->pc = 0x1992CCu;
label_1992cc:
    // 0x1992cc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1992ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_1992d0:
    // 0x1992d0: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1992d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_1992d4:
    // 0x1992d4: 0x34639010  ori         $v1, $v1, 0x9010
    ctx->pc = 0x1992d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36880);
label_1992d8:
    // 0x1992d8: 0x24849b20  addiu       $a0, $a0, -0x64E0
    ctx->pc = 0x1992d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941472));
label_1992dc:
    // 0x1992dc: 0xc08ee2e  jal         func_23B8B8
label_1992e0:
    if (ctx->pc == 0x1992E0u) {
        ctx->pc = 0x1992E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1992DCu;
        // 0x1992e0: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1992E4u;
        goto label_1992e4;
    }
    ctx->pc = 0x1992DCu;
    SET_GPR_U32(ctx, 31, 0x1992E4u);
    ctx->pc = 0x1992E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1992DCu;
    // 0x1992e0: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8B8u;
    { ctx->pc = 0x23b8b8; return; }
    ctx->pc = 0x1992E4u;
label_1992e4:
    // 0x1992e4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1992e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_1992e8:
    // 0x1992e8: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1992e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_1992ec:
    // 0x1992ec: 0x34639020  ori         $v1, $v1, 0x9020
    ctx->pc = 0x1992ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36896);
label_1992f0:
    // 0x1992f0: 0x24849b30  addiu       $a0, $a0, -0x64D0
    ctx->pc = 0x1992f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941488));
label_1992f4:
    // 0x1992f4: 0xc08ee2e  jal         func_23B8B8
label_1992f8:
    if (ctx->pc == 0x1992F8u) {
        ctx->pc = 0x1992F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1992F4u;
        // 0x1992f8: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1992FCu;
        goto label_1992fc;
    }
    ctx->pc = 0x1992F4u;
    SET_GPR_U32(ctx, 31, 0x1992FCu);
    ctx->pc = 0x1992F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1992F4u;
    // 0x1992f8: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8B8u;
    { ctx->pc = 0x23b8b8; return; }
    ctx->pc = 0x1992FCu;
label_1992fc:
    // 0x1992fc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1992fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_199300:
    // 0x199300: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x199300u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_199304:
    // 0x199304: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x199304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
label_199308:
    // 0x199308: 0x24849b40  addiu       $a0, $a0, -0x64C0
    ctx->pc = 0x199308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941504));
label_19930c:
    // 0x19930c: 0xc08ee2e  jal         func_23B8B8
label_199310:
    if (ctx->pc == 0x199310u) {
        ctx->pc = 0x199310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19930Cu;
        // 0x199310: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199314u;
        goto label_199314;
    }
    ctx->pc = 0x19930Cu;
    SET_GPR_U32(ctx, 31, 0x199314u);
    ctx->pc = 0x199310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19930Cu;
    // 0x199310: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8B8u;
    { ctx->pc = 0x23b8b8; return; }
    ctx->pc = 0x199314u;
label_199314:
    // 0x199314: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x199314u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_199318:
    // 0x199318: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x199318u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_19931c:
    // 0x19931c: 0x3463a030  ori         $v1, $v1, 0xA030
    ctx->pc = 0x19931cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)41008);
label_199320:
    // 0x199320: 0x24849b50  addiu       $a0, $a0, -0x64B0
    ctx->pc = 0x199320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941520));
label_199324:
    // 0x199324: 0xc08ee2e  jal         func_23B8B8
label_199328:
    if (ctx->pc == 0x199328u) {
        ctx->pc = 0x199328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199324u;
        // 0x199328: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19932Cu;
        goto label_19932c;
    }
    ctx->pc = 0x199324u;
    SET_GPR_U32(ctx, 31, 0x19932Cu);
    ctx->pc = 0x199328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199324u;
    // 0x199328: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8B8u;
    { ctx->pc = 0x23b8b8; return; }
    ctx->pc = 0x19932Cu;
label_19932c:
    // 0x19932c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x19932cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_199330:
    // 0x199330: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x199330u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_199334:
    // 0x199334: 0x3463a010  ori         $v1, $v1, 0xA010
    ctx->pc = 0x199334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40976);
label_199338:
    // 0x199338: 0x24849b60  addiu       $a0, $a0, -0x64A0
    ctx->pc = 0x199338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941536));
label_19933c:
    // 0x19933c: 0xc08ee2e  jal         func_23B8B8
label_199340:
    if (ctx->pc == 0x199340u) {
        ctx->pc = 0x199340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19933Cu;
        // 0x199340: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199344u;
        goto label_199344;
    }
    ctx->pc = 0x19933Cu;
    SET_GPR_U32(ctx, 31, 0x199344u);
    ctx->pc = 0x199340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19933Cu;
    // 0x199340: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8B8u;
    { ctx->pc = 0x23b8b8; return; }
    ctx->pc = 0x199344u;
label_199344:
    // 0x199344: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x199344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_199348:
    // 0x199348: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x199348u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_19934c:
    // 0x19934c: 0x3463a020  ori         $v1, $v1, 0xA020
    ctx->pc = 0x19934cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40992);
label_199350:
    // 0x199350: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x199350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
label_199354:
    // 0x199354: 0xc08ee2e  jal         func_23B8B8
label_199358:
    if (ctx->pc == 0x199358u) {
        ctx->pc = 0x199358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199354u;
        // 0x199358: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19935Cu;
        goto label_19935c;
    }
    ctx->pc = 0x199354u;
    SET_GPR_U32(ctx, 31, 0x19935Cu);
    ctx->pc = 0x199358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199354u;
    // 0x199358: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8B8u;
    { ctx->pc = 0x23b8b8; return; }
    ctx->pc = 0x19935Cu;
label_19935c:
    // 0x19935c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x19935cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_199360:
    // 0x199360: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x199360u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_199364:
    // 0x199364: 0x34633c00  ori         $v1, $v1, 0x3C00
    ctx->pc = 0x199364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15360);
label_199368:
    // 0x199368: 0x24849b80  addiu       $a0, $a0, -0x6480
    ctx->pc = 0x199368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941568));
label_19936c:
    // 0x19936c: 0xc08ee2e  jal         func_23B8B8
label_199370:
    if (ctx->pc == 0x199370u) {
        ctx->pc = 0x199370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19936Cu;
        // 0x199370: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199374u;
        goto label_199374;
    }
    ctx->pc = 0x19936Cu;
    SET_GPR_U32(ctx, 31, 0x199374u);
    ctx->pc = 0x199370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19936Cu;
    // 0x199370: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8B8u;
    { ctx->pc = 0x23b8b8; return; }
    ctx->pc = 0x199374u;
label_199374:
    // 0x199374: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x199374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_199378:
    // 0x199378: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x199378u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_19937c:
    // 0x19937c: 0x34633020  ori         $v1, $v1, 0x3020
    ctx->pc = 0x19937cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12320);
label_199380:
    // 0x199380: 0x24849b98  addiu       $a0, $a0, -0x6468
    ctx->pc = 0x199380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941592));
label_199384:
    // 0x199384: 0xc08ee2e  jal         func_23B8B8
label_199388:
    if (ctx->pc == 0x199388u) {
        ctx->pc = 0x199388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199384u;
        // 0x199388: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19938Cu;
        goto label_19938c;
    }
    ctx->pc = 0x199384u;
    SET_GPR_U32(ctx, 31, 0x19938Cu);
    ctx->pc = 0x199388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199384u;
    // 0x199388: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8B8u;
    { ctx->pc = 0x23b8b8; return; }
    ctx->pc = 0x19938Cu;
label_19938c:
    // 0x19938c: 0x1000001e  b           . + 4 + (0x1E << 2)
label_199390:
    if (ctx->pc == 0x199390u) {
        ctx->pc = 0x199390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19938Cu;
        // 0x199390: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199394u;
        goto label_199394;
    }
    ctx->pc = 0x19938Cu;
    {
        const bool branch_taken_0x19938c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19938Cu;
        // 0x199390: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19938c) {
            ctx->pc = 0x199408u;
            goto label_199408;
        }
    }
    ctx->pc = 0x199394u;
label_199394:
    // 0x199394: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x199394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_199398:
    // 0x199398: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x199398u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
label_19939c:
    // 0x19939c: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x19939cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
label_1993a0:
    // 0x1993a0: 0x34a5a000  ori         $a1, $a1, 0xA000
    ctx->pc = 0x1993a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)40960);
label_1993a4:
    // 0x1993a4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1993a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1993a8:
    // 0x1993a8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1993a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_1993ac:
    // 0x1993ac: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x1993acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1993b0:
    // 0x1993b0: 0x34843c00  ori         $a0, $a0, 0x3C00
    ctx->pc = 0x1993b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)15360);
label_1993b4:
    // 0x1993b4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1993b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_1993b8:
    // 0x1993b8: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1993b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1993bc:
    // 0x1993bc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1993bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1993c0:
    // 0x1993c0: 0x30c60100  andi        $a2, $a2, 0x100
    ctx->pc = 0x1993c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)256);
label_1993c4:
    // 0x1993c4: 0x34440002  ori         $a0, $v0, 0x2
    ctx->pc = 0x1993c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_1993c8:
    // 0x1993c8: 0x3c031f00  lui         $v1, 0x1F00
    ctx->pc = 0x1993c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7936 << 16));
label_1993cc:
    // 0x1993cc: 0x86100b  movn        $v0, $a0, $a2
    ctx->pc = 0x1993ccu;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_1993d0:
    // 0x1993d0: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x1993d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
label_1993d4:
    // 0x1993d4: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x1993d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_1993d8:
    // 0x1993d8: 0x34440004  ori         $a0, $v0, 0x4
    ctx->pc = 0x1993d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_1993dc:
    // 0x1993dc: 0x85100b  movn        $v0, $a0, $a1
    ctx->pc = 0x1993dcu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_1993e0:
    // 0x1993e0: 0x4846e800  cfc2.ni     $a2, $vi29
    ctx->pc = 0x1993e0u;
    SET_GPR_U32(ctx, 6, ctx->vu0_vpu_stat);
label_1993e4:
    // 0x1993e4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1993e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_1993e8:
    // 0x1993e8: 0x30c60100  andi        $a2, $a2, 0x100
    ctx->pc = 0x1993e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)256);
label_1993ec:
    // 0x1993ec: 0x34633020  ori         $v1, $v1, 0x3020
    ctx->pc = 0x1993ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12320);
label_1993f0:
    // 0x1993f0: 0x34450008  ori         $a1, $v0, 0x8
    ctx->pc = 0x1993f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_1993f4:
    // 0x1993f4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1993f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1993f8:
    // 0x1993f8: 0xa6100b  movn        $v0, $a1, $a2
    ctx->pc = 0x1993f8u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
label_1993fc:
    // 0x1993fc: 0x34430010  ori         $v1, $v0, 0x10
    ctx->pc = 0x1993fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_199400:
    // 0x199400: 0x30840c00  andi        $a0, $a0, 0xC00
    ctx->pc = 0x199400u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3072);
label_199404:
    // 0x199404: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x199404u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_199408:
    // 0x199408: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x199408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19940c:
    // 0x19940c: 0x3e00008  jr          $ra
label_199410:
    if (ctx->pc == 0x199410u) {
        ctx->pc = 0x199410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19940Cu;
        // 0x199410: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199414u;
        goto label_199414;
    }
    ctx->pc = 0x19940Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19940Cu;
        // 0x199410: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19940Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x199414u;
label_199414:
    // 0x199414: 0x0  nop
    ctx->pc = 0x199414u;
    // NOP
label_199418:
    // 0x199418: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x199418u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_19941c:
    // 0x19941c: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x19941cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
label_199420:
    // 0x199420: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x199420u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
label_199424:
    // 0x199424: 0x76c03  sra         $t5, $a3, 16
    ctx->pc = 0x199424u;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 7), 16));
label_199428:
    // 0x199428: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x199428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_19942c:
    // 0x19942c: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x19942cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
label_199430:
    // 0x199430: 0x94c00  sll         $t1, $t1, 16
    ctx->pc = 0x199430u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
label_199434:
    // 0x199434: 0xa5400  sll         $t2, $t2, 16
    ctx->pc = 0x199434u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
label_199438:
    // 0x199438: 0xb5c00  sll         $t3, $t3, 16
    ctx->pc = 0x199438u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
label_19943c:
    // 0x19943c: 0x66403  sra         $t4, $a2, 16
    ctx->pc = 0x19943cu;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 6), 16));
label_199440:
    // 0x199440: 0x87c03  sra         $t7, $t0, 16
    ctx->pc = 0x199440u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 8), 16));
label_199444:
    // 0x199444: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x199444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_199448:
    // 0x199448: 0x53c03  sra         $a3, $a1, 16
    ctx->pc = 0x199448u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 5), 16));
label_19944c:
    // 0x19944c: 0x9c403  sra         $t8, $t1, 16
    ctx->pc = 0x19944cu;
    SET_GPR_S32(ctx, 24, SRA32(GPR_S32(ctx, 9), 16));
label_199450:
    // 0x199450: 0xa5403  sra         $t2, $t2, 16
    ctx->pc = 0x199450u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 16));
label_199454:
    // 0x199454: 0xb4403  sra         $t0, $t3, 16
    ctx->pc = 0x199454u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 11), 16));
label_199458:
    // 0x199458: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x199458u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19945c:
    // 0x19945c: 0x2da2003b  sltiu       $v0, $t5, 0x3B
    ctx->pc = 0x19945cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)59) ? 1 : 0);
label_199460:
    // 0x199460: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_199464:
    if (ctx->pc == 0x199464u) {
        ctx->pc = 0x199464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199460u;
        // 0x199464: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199468u;
        goto label_199468;
    }
    ctx->pc = 0x199460u;
    {
        const bool branch_taken_0x199460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x199464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199460u;
        // 0x199464: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199460) {
            ctx->pc = 0x1994C4u;
            goto label_1994c4;
        }
    }
    ctx->pc = 0x199468u;
label_199468:
    // 0x199468: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x199468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_19946c:
    // 0x19946c: 0xd1880  sll         $v1, $t5, 2
    ctx->pc = 0x19946cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
label_199470:
    // 0x199470: 0x24429c90  addiu       $v0, $v0, -0x6370
    ctx->pc = 0x199470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941840));
label_199474:
    // 0x199474: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x199474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_199478:
    // 0x199478: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x199478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_19947c:
    // 0x19947c: 0x800008  jr          $a0
label_199480:
    if (ctx->pc == 0x199480u) {
        ctx->pc = 0x199484u;
        goto label_199484;
    }
    ctx->pc = 0x19947Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x199484u: goto label_199484;
            case 0x199490u: goto label_199490;
            case 0x1994A4u: goto label_1994a4;
            case 0x1994B0u: goto label_1994b0;
            case 0x1994BCu: goto label_1994bc;
            case 0x1994C4u: goto label_1994c4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19947Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x199484u;
label_199484:
    // 0x199484: 0x1481018  mult        $v0, $t2, $t0
    ctx->pc = 0x199484u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_199488:
    // 0x199488: 0x1000000e  b           . + 4 + (0xE << 2)
label_19948c:
    if (ctx->pc == 0x19948Cu) {
        ctx->pc = 0x19948Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199488u;
        // 0x19948c: 0x23083  sra         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199490u;
        goto label_199490;
    }
    ctx->pc = 0x199488u;
    {
        const bool branch_taken_0x199488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19948Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199488u;
        // 0x19948c: 0x23083  sra         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199488) {
            ctx->pc = 0x1994C4u;
            goto label_1994c4;
        }
    }
    ctx->pc = 0x199490u;
label_199490:
    // 0x199490: 0x1481818  mult        $v1, $t2, $t0
    ctx->pc = 0x199490u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_199494:
    // 0x199494: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x199494u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_199498:
    // 0x199498: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x199498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_19949c:
    // 0x19949c: 0x10000009  b           . + 4 + (0x9 << 2)
label_1994a0:
    if (ctx->pc == 0x1994A0u) {
        ctx->pc = 0x1994A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19949Cu;
        // 0x1994a0: 0x23103  sra         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1994A4u;
        goto label_1994a4;
    }
    ctx->pc = 0x19949Cu;
    {
        const bool branch_taken_0x19949c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1994A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19949Cu;
        // 0x1994a0: 0x23103  sra         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19949c) {
            ctx->pc = 0x1994C4u;
            goto label_1994c4;
        }
    }
    ctx->pc = 0x1994A4u;
label_1994a4:
    // 0x1994a4: 0x1481018  mult        $v0, $t2, $t0
    ctx->pc = 0x1994a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1994a8:
    // 0x1994a8: 0x10000006  b           . + 4 + (0x6 << 2)
label_1994ac:
    if (ctx->pc == 0x1994ACu) {
        ctx->pc = 0x1994ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1994A8u;
        // 0x1994ac: 0x230c3  sra         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1994B0u;
        goto label_1994b0;
    }
    ctx->pc = 0x1994A8u;
    {
        const bool branch_taken_0x1994a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1994ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1994A8u;
        // 0x1994ac: 0x230c3  sra         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1994a8) {
            ctx->pc = 0x1994C4u;
            goto label_1994c4;
        }
    }
    ctx->pc = 0x1994B0u;
label_1994b0:
    // 0x1994b0: 0x1481018  mult        $v0, $t2, $t0
    ctx->pc = 0x1994b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1994b4:
    // 0x1994b4: 0x10000003  b           . + 4 + (0x3 << 2)
label_1994b8:
    if (ctx->pc == 0x1994B8u) {
        ctx->pc = 0x1994B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1994B4u;
        // 0x1994b8: 0x23103  sra         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1994BCu;
        goto label_1994bc;
    }
    ctx->pc = 0x1994B4u;
    {
        const bool branch_taken_0x1994b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1994B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1994B4u;
        // 0x1994b8: 0x23103  sra         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1994b4) {
            ctx->pc = 0x1994C4u;
            goto label_1994c4;
        }
    }
    ctx->pc = 0x1994BCu;
label_1994bc:
    // 0x1994bc: 0x1481018  mult        $v0, $t2, $t0
    ctx->pc = 0x1994bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1994c0:
    // 0x1994c0: 0x23143  sra         $a2, $v0, 5
    ctx->pc = 0x1994c0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 5));
label_1994c4:
    // 0x1994c4: 0x24027fff  addiu       $v0, $zero, 0x7FFF
    ctx->pc = 0x1994c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
label_1994c8:
    // 0x1994c8: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x1994c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1994cc:
    // 0x1994cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1994d0:
    if (ctx->pc == 0x1994D0u) {
        ctx->pc = 0x1994D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1994CCu;
        // 0x1994d0: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1994D4u;
        goto label_1994d4;
    }
    ctx->pc = 0x1994CCu;
    {
        const bool branch_taken_0x1994cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1994D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1994CCu;
        // 0x1994d0: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1994cc) {
            ctx->pc = 0x1994E4u;
            goto label_1994e4;
        }
    }
    ctx->pc = 0x1994D4u;
label_1994d4:
    // 0x1994d4: 0xc08ee2e  jal         func_23B8B8
label_1994d8:
    if (ctx->pc == 0x1994D8u) {
        ctx->pc = 0x1994D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1994D4u;
        // 0x1994d8: 0x24849c60  addiu       $a0, $a0, -0x63A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941792));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1994DCu;
        goto label_1994dc;
    }
    ctx->pc = 0x1994D4u;
    SET_GPR_U32(ctx, 31, 0x1994DCu);
    ctx->pc = 0x1994D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1994D4u;
    // 0x1994d8: 0x24849c60  addiu       $a0, $a0, -0x63A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8B8u;
    { ctx->pc = 0x23b8b8; return; }
    ctx->pc = 0x1994DCu;
label_1994dc:
    // 0x1994dc: 0x10000044  b           . + 4 + (0x44 << 2)
label_1994e0:
    if (ctx->pc == 0x1994E0u) {
        ctx->pc = 0x1994E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1994DCu;
        // 0x1994e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1994E4u;
        goto label_1994e4;
    }
    ctx->pc = 0x1994DCu;
    {
        const bool branch_taken_0x1994dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1994E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1994DCu;
        // 0x1994e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1994dc) {
            ctx->pc = 0x1995F0u;
            goto label_1995f0;
        }
    }
    ctx->pc = 0x1994E4u;
label_1994e4:
    // 0x1994e4: 0x700014a9  por         $v0, $zero, $zero
    ctx->pc = 0x1994e4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1994e8:
    // 0x1994e8: 0x30c37fff  andi        $v1, $a2, 0x7FFF
    ctx->pc = 0x1994e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32767);
label_1994ec:
    // 0x1994ec: 0x7dc20050  sq          $v0, 0x50($t6)
    ctx->pc = 0x1994ecu;
    WRITE128(ADD32(GPR_U32(ctx, 14), 80), GPR_VEC(ctx, 2));
label_1994f0:
    // 0x1994f0: 0x7343c  dsll32      $a2, $a3, 16
    ctx->pc = 0x1994f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 16));
label_1994f4:
    // 0x1994f4: 0x7dc20000  sq          $v0, 0x0($t6)
    ctx->pc = 0x1994f4u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 2));
label_1994f8:
    // 0x1994f8: 0x3c07f3ff  lui         $a3, 0xF3FF
    ctx->pc = 0x1994f8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)62463 << 16));
label_1994fc:
    // 0x1994fc: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x1994fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_199500:
    // 0x199500: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x199500u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
label_199504:
    // 0x199504: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x199504u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_199508:
    // 0x199508: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x199508u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
label_19950c:
    // 0x19950c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x19950cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_199510:
    // 0x199510: 0xddc40050  ld          $a0, 0x50($t6)
    ctx->pc = 0x199510u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 14), 80)));
label_199514:
    // 0x199514: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x199514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
label_199518:
    // 0x199518: 0xddc50000  ld          $a1, 0x0($t6)
    ctx->pc = 0x199518u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 14), 0)));
label_19951c:
    // 0x19951c: 0xc643c  dsll32      $t4, $t4, 16
    ctx->pc = 0x19951cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << (32 + 16));
label_199520:
    // 0x199520: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x199520u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_199524:
    // 0x199524: 0xddcb0008  ld          $t3, 0x8($t6)
    ctx->pc = 0x199524u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 14), 8)));
label_199528:
    // 0x199528: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x199528u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_19952c:
    // 0x19952c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x19952cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_199530:
    // 0x199530: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x199530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_199534:
    // 0x199534: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x199534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_199538:
    // 0x199538: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x199538u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_19953c:
    // 0x19953c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x19953cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_199540:
    // 0x199540: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x199540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_199544:
    // 0x199544: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x199544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
label_199548:
    // 0x199548: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x199548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_19954c:
    // 0x19954c: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x19954cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_199550:
    // 0x199550: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x199550u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
label_199554:
    // 0x199554: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x199554u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
label_199558:
    // 0x199558: 0x6343b  dsra        $a2, $a2, 16
    ctx->pc = 0x199558u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> 16);
label_19955c:
    // 0x19955c: 0xa543c  dsll32      $t2, $t2, 16
    ctx->pc = 0x19955cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 16));
label_199560:
    // 0x199560: 0x8443c  dsll32      $t0, $t0, 16
    ctx->pc = 0x199560u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 16));
label_199564:
    // 0x199564: 0xcc3025  or          $a2, $a2, $t4
    ctx->pc = 0x199564u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 12));
label_199568:
    // 0x199568: 0x8443b  dsra        $t0, $t0, 16
    ctx->pc = 0x199568u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> 16);
label_19956c:
    // 0x19956c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x19956cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_199570:
    // 0x199570: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x199570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
label_199574:
    // 0x199574: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x199574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_199578:
    // 0x199578: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x199578u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_19957c:
    // 0x19957c: 0x73b3c  dsll32      $a3, $a3, 12
    ctx->pc = 0x19957cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 12));
label_199580:
    // 0x199580: 0xf4c3c  dsll32      $t1, $t7, 16
    ctx->pc = 0x199580u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 15) << (32 + 16));
label_199584:
    // 0x199584: 0xa543f  dsra32      $t2, $t2, 16
    ctx->pc = 0x199584u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
label_199588:
    // 0x199588: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x199588u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_19958c:
    // 0x19958c: 0x1485025  or          $t2, $t2, $t0
    ctx->pc = 0x19958cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 8));
label_199590:
    // 0x199590: 0x1635825  or          $t3, $t3, $v1
    ctx->pc = 0x199590u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 3));
label_199594:
    // 0x199594: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x199594u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
label_199598:
    // 0x199598: 0xd6e3c  dsll32      $t5, $t5, 24
    ctx->pc = 0x199598u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << (32 + 24));
label_19959c:
    // 0x19959c: 0x94c3b  dsra        $t1, $t1, 16
    ctx->pc = 0x19959cu;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> 16);
label_1995a0:
    // 0x1995a0: 0x18643c  dsll32      $t4, $t8, 16
    ctx->pc = 0x1995a0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 24) << (32 + 16));
label_1995a4:
    // 0x1995a4: 0xcd3025  or          $a2, $a2, $t5
    ctx->pc = 0x1995a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 13));
label_1995a8:
    // 0x1995a8: 0x12c4825  or          $t1, $t1, $t4
    ctx->pc = 0x1995a8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 12));
label_1995ac:
    // 0x1995ac: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1995acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1995b0:
    // 0x1995b0: 0x24030051  addiu       $v1, $zero, 0x51
    ctx->pc = 0x1995b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
label_1995b4:
    // 0x1995b4: 0x24070052  addiu       $a3, $zero, 0x52
    ctx->pc = 0x1995b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
label_1995b8:
    // 0x1995b8: 0x24080053  addiu       $t0, $zero, 0x53
    ctx->pc = 0x1995b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
label_1995bc:
    // 0x1995bc: 0xfdc40050  sd          $a0, 0x50($t6)
    ctx->pc = 0x1995bcu;
    WRITE64(ADD32(GPR_U32(ctx, 14), 80), GPR_U64(ctx, 4));
label_1995c0:
    // 0x1995c0: 0xfdc50000  sd          $a1, 0x0($t6)
    ctx->pc = 0x1995c0u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 0), GPR_U64(ctx, 5));
label_1995c4:
    // 0x1995c4: 0xfdcb0008  sd          $t3, 0x8($t6)
    ctx->pc = 0x1995c4u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 8), GPR_U64(ctx, 11));
label_1995c8:
    // 0x1995c8: 0xfdc60010  sd          $a2, 0x10($t6)
    ctx->pc = 0x1995c8u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 16), GPR_U64(ctx, 6));
label_1995cc:
    // 0x1995cc: 0xfdc20018  sd          $v0, 0x18($t6)
    ctx->pc = 0x1995ccu;
    WRITE64(ADD32(GPR_U32(ctx, 14), 24), GPR_U64(ctx, 2));
label_1995d0:
    // 0x1995d0: 0xfdc90020  sd          $t1, 0x20($t6)
    ctx->pc = 0x1995d0u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 32), GPR_U64(ctx, 9));
label_1995d4:
    // 0x1995d4: 0xfdc30028  sd          $v1, 0x28($t6)
    ctx->pc = 0x1995d4u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 40), GPR_U64(ctx, 3));
label_1995d8:
    // 0x1995d8: 0xfdca0030  sd          $t2, 0x30($t6)
    ctx->pc = 0x1995d8u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 48), GPR_U64(ctx, 10));
label_1995dc:
    // 0x1995dc: 0xfdc70038  sd          $a3, 0x38($t6)
    ctx->pc = 0x1995dcu;
    WRITE64(ADD32(GPR_U32(ctx, 14), 56), GPR_U64(ctx, 7));
label_1995e0:
    // 0x1995e0: 0xfdc80048  sd          $t0, 0x48($t6)
    ctx->pc = 0x1995e0u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 72), GPR_U64(ctx, 8));
label_1995e4:
    // 0x1995e4: 0xfdc00040  sd          $zero, 0x40($t6)
    ctx->pc = 0x1995e4u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 64), GPR_U64(ctx, 0));
label_1995e8:
    // 0x1995e8: 0xf  sync
    ctx->pc = 0x1995e8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1995ec:
    // 0x1995ec: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1995ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1995f0:
    // 0x1995f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1995f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1995f4:
    // 0x1995f4: 0x3e00008  jr          $ra
label_1995f8:
    if (ctx->pc == 0x1995F8u) {
        ctx->pc = 0x1995F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1995F4u;
        // 0x1995f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1995FCu;
        goto label_1995fc;
    }
    ctx->pc = 0x1995F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1995F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1995F4u;
        // 0x1995f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1995F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1995FCu;
label_1995fc:
    // 0x1995fc: 0x0  nop
    ctx->pc = 0x1995fcu;
    // NOP
label_199600:
    // 0x199600: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x199600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_199604:
    // 0x199604: 0x700014a9  por         $v0, $zero, $zero
    ctx->pc = 0x199604u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_199608:
    // 0x199608: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x199608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19960c:
    // 0x19960c: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x19960cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
label_199610:
    // 0x199610: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x199610u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
label_199614:
    // 0x199614: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x199614u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
label_199618:
    // 0x199618: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x199618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
label_19961c:
    // 0x19961c: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x19961cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_199620:
    // 0x199620: 0xdc8c0010  ld          $t4, 0x10($a0)
    ctx->pc = 0x199620u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 4), 16)));
label_199624:
    // 0x199624: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x199624u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
label_199628:
    // 0x199628: 0xa5400  sll         $t2, $t2, 16
    ctx->pc = 0x199628u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
label_19962c:
    // 0x19962c: 0xb5c00  sll         $t3, $t3, 16
    ctx->pc = 0x19962cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
label_199630:
    // 0x199630: 0x1826024  and         $t4, $t4, $v0
    ctx->pc = 0x199630u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & GPR_U64(ctx, 2));
label_199634:
    // 0x199634: 0xdc8d0018  ld          $t5, 0x18($a0)
    ctx->pc = 0x199634u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 4), 24)));
label_199638:
    // 0x199638: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x199638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_19963c:
    // 0x19963c: 0x73c03  sra         $a3, $a3, 16
    ctx->pc = 0x19963cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
label_199640:
    // 0x199640: 0x1826025  or          $t4, $t4, $v0
    ctx->pc = 0x199640u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 2));
label_199644:
    // 0x199644: 0x84403  sra         $t0, $t0, 16
    ctx->pc = 0x199644u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 16));
label_199648:
    // 0x199648: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x199648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_19964c:
    // 0x19964c: 0xa5403  sra         $t2, $t2, 16
    ctx->pc = 0x19964cu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 16));
label_199650:
    // 0x199650: 0x1826025  or          $t4, $t4, $v0
    ctx->pc = 0x199650u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 2));
label_199654:
    // 0x199654: 0xb5c03  sra         $t3, $t3, 16
    ctx->pc = 0x199654u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 16));
label_199658:
    // 0x199658: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x199658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_19965c:
    // 0x19965c: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x19965cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
label_199660:
    // 0x199660: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x199660u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
label_199664:
    // 0x199664: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x199664u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
label_199668:
    // 0x199668: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x199668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_19966c:
    // 0x19966c: 0x1826024  and         $t4, $t4, $v0
    ctx->pc = 0x19966cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & GPR_U64(ctx, 2));
label_199670:
    // 0x199670: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x199670u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_199674:
    // 0x199674: 0x73c3c  dsll32      $a3, $a3, 16
    ctx->pc = 0x199674u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 16));
label_199678:
    // 0x199678: 0x8443c  dsll32      $t0, $t0, 16
    ctx->pc = 0x199678u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 16));
label_19967c:
    // 0x19967c: 0xa543c  dsll32      $t2, $t2, 16
    ctx->pc = 0x19967cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 16));
label_199680:
    // 0x199680: 0xb5c3c  dsll32      $t3, $t3, 16
    ctx->pc = 0x199680u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 16));
label_199684:
    // 0x199684: 0x1a36824  and         $t5, $t5, $v1
    ctx->pc = 0x199684u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & GPR_U64(ctx, 3));
label_199688:
    // 0x199688: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x199688u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_19968c:
    // 0x19968c: 0x94c00  sll         $t1, $t1, 16
    ctx->pc = 0x19968cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
label_199690:
    // 0x199690: 0x73e3b  dsra        $a3, $a3, 24
    ctx->pc = 0x199690u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> 24);
label_199694:
    // 0x199694: 0xb5c3b  dsra        $t3, $t3, 16
    ctx->pc = 0x199694u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> 16);
label_199698:
    // 0x199698: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x199698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_19969c:
    // 0x19969c: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x19969cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
label_1996a0:
    // 0x1996a0: 0x240e000e  addiu       $t6, $zero, 0xE
    ctx->pc = 0x1996a0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1996a4:
    // 0x1996a4: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x1996a4u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
label_1996a8:
    // 0x1996a8: 0xa543f  dsra32      $t2, $t2, 16
    ctx->pc = 0x1996a8u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
label_1996ac:
    // 0x1996ac: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x1996acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
label_1996b0:
    // 0x1996b0: 0x1284025  or          $t0, $t1, $t0
    ctx->pc = 0x1996b0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
label_1996b4:
    // 0x1996b4: 0x14b5025  or          $t2, $t2, $t3
    ctx->pc = 0x1996b4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 11));
label_1996b8:
    // 0x1996b8: 0x1826025  or          $t4, $t4, $v0
    ctx->pc = 0x1996b8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 2));
label_1996bc:
    // 0x1996bc: 0x1ae6825  or          $t5, $t5, $t6
    ctx->pc = 0x1996bcu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 14));
label_1996c0:
    // 0x1996c0: 0x3c030600  lui         $v1, 0x600
    ctx->pc = 0x1996c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1536 << 16));
label_1996c4:
    // 0x1996c4: 0x3c065000  lui         $a2, 0x5000
    ctx->pc = 0x1996c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20480 << 16));
label_1996c8:
    // 0x1996c8: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x1996c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_1996cc:
    // 0x1996cc: 0x3c071300  lui         $a3, 0x1300
    ctx->pc = 0x1996ccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4864 << 16));
label_1996d0:
    // 0x1996d0: 0x34c60006  ori         $a2, $a2, 0x6
    ctx->pc = 0x1996d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)6);
label_1996d4:
    // 0x1996d4: 0x24090050  addiu       $t1, $zero, 0x50
    ctx->pc = 0x1996d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1996d8:
    // 0x1996d8: 0x240b0051  addiu       $t3, $zero, 0x51
    ctx->pc = 0x1996d8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
label_1996dc:
    // 0x1996dc: 0x240e0052  addiu       $t6, $zero, 0x52
    ctx->pc = 0x1996dcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
label_1996e0:
    // 0x1996e0: 0x240f0061  addiu       $t7, $zero, 0x61
    ctx->pc = 0x1996e0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
label_1996e4:
    // 0x1996e4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1996e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1996e8:
    // 0x1996e8: 0x24020053  addiu       $v0, $zero, 0x53
    ctx->pc = 0x1996e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
label_1996ec:
    // 0x1996ec: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1996ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_1996f0:
    // 0x1996f0: 0xfc820068  sd          $v0, 0x68($a0)
    ctx->pc = 0x1996f0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 104), GPR_U64(ctx, 2));
label_1996f4:
    // 0x1996f4: 0xac870008  sw          $a3, 0x8($a0)
    ctx->pc = 0x1996f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
label_1996f8:
    // 0x1996f8: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x1996f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
label_1996fc:
    // 0x1996fc: 0xfc8c0010  sd          $t4, 0x10($a0)
    ctx->pc = 0x1996fcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 12));
label_199700:
    // 0x199700: 0xfc8d0018  sd          $t5, 0x18($a0)
    ctx->pc = 0x199700u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 13));
label_199704:
    // 0x199704: 0xfc850020  sd          $a1, 0x20($a0)
    ctx->pc = 0x199704u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 5));
label_199708:
    // 0x199708: 0xfc890028  sd          $t1, 0x28($a0)
    ctx->pc = 0x199708u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 40), GPR_U64(ctx, 9));
label_19970c:
    // 0x19970c: 0xfc880030  sd          $t0, 0x30($a0)
    ctx->pc = 0x19970cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 48), GPR_U64(ctx, 8));
label_199710:
    // 0x199710: 0xfc8b0038  sd          $t3, 0x38($a0)
    ctx->pc = 0x199710u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 56), GPR_U64(ctx, 11));
label_199714:
    // 0x199714: 0xfc8a0040  sd          $t2, 0x40($a0)
    ctx->pc = 0x199714u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 64), GPR_U64(ctx, 10));
label_199718:
    // 0x199718: 0xfc8e0048  sd          $t6, 0x48($a0)
    ctx->pc = 0x199718u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 72), GPR_U64(ctx, 14));
label_19971c:
    // 0x19971c: 0xfc8f0058  sd          $t7, 0x58($a0)
    ctx->pc = 0x19971cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 88), GPR_U64(ctx, 15));
label_199720:
    // 0x199720: 0xfc900060  sd          $s0, 0x60($a0)
    ctx->pc = 0x199720u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 96), GPR_U64(ctx, 16));
label_199724:
    // 0x199724: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x199724u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_199728:
    // 0x199728: 0xfc800050  sd          $zero, 0x50($a0)
    ctx->pc = 0x199728u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 80), GPR_U64(ctx, 0));
label_19972c:
    // 0x19972c: 0xf  sync
    ctx->pc = 0x19972cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_199730:
    // 0x199730: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x199730u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_199734:
    // 0x199734: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x199734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_199738:
    // 0x199738: 0x3e00008  jr          $ra
label_19973c:
    if (ctx->pc == 0x19973Cu) {
        ctx->pc = 0x19973Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199738u;
        // 0x19973c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199740u;
        goto label_199740;
    }
    ctx->pc = 0x199738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19973Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199738u;
        // 0x19973c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x199740u;
label_199740:
    // 0x199740: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x199740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_199744:
    // 0x199744: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x199744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_199748:
    // 0x199748: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x199748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_19974c:
    // 0x19974c: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x19974cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
label_199750:
    // 0x199750: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x199750u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_199754:
    // 0x199754: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x199754u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_199758:
    // 0x199758: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x199758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_19975c:
    // 0x19975c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x19975cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_199760:
    // 0x199760: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_199764:
    if (ctx->pc == 0x199764u) {
        ctx->pc = 0x199764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199760u;
        // 0x199764: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199768u;
        goto label_199768;
    }
    ctx->pc = 0x199760u;
    {
        const bool branch_taken_0x199760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x199764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199760u;
        // 0x199764: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199760) {
            ctx->pc = 0x199794u;
            goto label_199794;
        }
    }
    ctx->pc = 0x199768u;
label_199768:
    // 0x199768: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x199768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_19976c:
    // 0x19976c: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x19976cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
label_199770:
    // 0x199770: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x199770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
label_199774:
    // 0x199774: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x199774u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_199778:
    // 0x199778: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x199778u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_19977c:
    // 0x19977c: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
label_199780:
    if (ctx->pc == 0x199780u) {
        ctx->pc = 0x199780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19977Cu;
        // 0x199780: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199784u;
        goto label_199784;
    }
    ctx->pc = 0x19977Cu;
    {
        const bool branch_taken_0x19977c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19977Cu;
        // 0x199780: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19977c) {
            ctx->pc = 0x199874u;
            goto label_199874;
        }
    }
    ctx->pc = 0x199784u;
label_199784:
    // 0x199784: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x199784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_199788:
    // 0x199788: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x199788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_19978c:
    // 0x19978c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_199790:
    if (ctx->pc == 0x199790u) {
        ctx->pc = 0x199790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19978Cu;
        // 0x199790: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199794u;
        goto label_199794;
    }
    ctx->pc = 0x19978Cu;
    {
        const bool branch_taken_0x19978c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19978Cu;
        // 0x199790: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19978c) {
            ctx->pc = 0x199778u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199778;
        }
    }
    ctx->pc = 0x199794u;
label_199794:
    // 0x199794: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x199794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_199798:
    // 0x199798: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x199798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_19979c:
    // 0x19979c: 0x3442a020  ori         $v0, $v0, 0xA020
    ctx->pc = 0x19979cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40992);
label_1997a0:
    // 0x1997a0: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x1997a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
label_1997a4:
    // 0x1997a4: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1997a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_1997a8:
    // 0x1997a8: 0xe41824  and         $v1, $a3, $a0
    ctx->pc = 0x1997a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
label_1997ac:
    // 0x1997ac: 0x14640008  bne         $v1, $a0, . + 4 + (0x8 << 2)
label_1997b0:
    if (ctx->pc == 0x1997B0u) {
        ctx->pc = 0x1997B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1997ACu;
        // 0x1997b0: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1997B4u;
        goto label_1997b4;
    }
    ctx->pc = 0x1997ACu;
    {
        const bool branch_taken_0x1997ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1997B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1997ACu;
        // 0x1997b0: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1997ac) {
            ctx->pc = 0x1997D0u;
            goto label_1997d0;
        }
    }
    ctx->pc = 0x1997B4u;
label_1997b4:
    // 0x1997b4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1997b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_1997b8:
    // 0x1997b8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1997b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1997bc:
    // 0x1997bc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1997bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_1997c0:
    // 0x1997c0: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x1997c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
label_1997c4:
    // 0x1997c4: 0x3463a010  ori         $v1, $v1, 0xA010
    ctx->pc = 0x1997c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40976);
label_1997c8:
    // 0x1997c8: 0x10000005  b           . + 4 + (0x5 << 2)
label_1997cc:
    if (ctx->pc == 0x1997CCu) {
        ctx->pc = 0x1997CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1997C8u;
        // 0x1997cc: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1997D0u;
        goto label_1997d0;
    }
    ctx->pc = 0x1997C8u;
    {
        const bool branch_taken_0x1997c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1997CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1997C8u;
        // 0x1997cc: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1997c8) {
            ctx->pc = 0x1997E0u;
            goto label_1997e0;
        }
    }
    ctx->pc = 0x1997D0u;
label_1997d0:
    // 0x1997d0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1997d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_1997d4:
    // 0x1997d4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1997d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1997d8:
    // 0x1997d8: 0x3463a010  ori         $v1, $v1, 0xA010
    ctx->pc = 0x1997d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40976);
label_1997dc:
    // 0x1997dc: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x1997dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
label_1997e0:
    // 0x1997e0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1997e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1997e4:
    // 0x1997e4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1997e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_1997e8:
    // 0x1997e8: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x1997e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
label_1997ec:
    // 0x1997ec: 0x3442a000  ori         $v0, $v0, 0xA000
    ctx->pc = 0x1997ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
label_1997f0:
    // 0x1997f0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1997f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_1997f4:
    // 0x1997f4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1997f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1997f8:
    // 0x1997f8: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x1997f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
label_1997fc:
    // 0x1997fc: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_199800:
    if (ctx->pc == 0x199800u) {
        ctx->pc = 0x199800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1997FCu;
        // 0x199800: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199804u;
        goto label_199804;
    }
    ctx->pc = 0x1997FCu;
    {
        const bool branch_taken_0x1997fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x199800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1997FCu;
        // 0x199800: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1997fc) {
            ctx->pc = 0x19982Cu;
            goto label_19982c;
        }
    }
    ctx->pc = 0x199804u;
label_199804:
    // 0x199804: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x199804u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
label_199808:
    // 0x199808: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x199808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
label_19980c:
    // 0x19980c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x19980cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_199810:
    // 0x199810: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x199810u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_199814:
    // 0x199814: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_199818:
    if (ctx->pc == 0x199818u) {
        ctx->pc = 0x199818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199814u;
        // 0x199818: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19981Cu;
        goto label_19981c;
    }
    ctx->pc = 0x199814u;
    {
        const bool branch_taken_0x199814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199814u;
        // 0x199818: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199814) {
            ctx->pc = 0x199874u;
            goto label_199874;
        }
    }
    ctx->pc = 0x19981Cu;
label_19981c:
    // 0x19981c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19981cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_199820:
    // 0x199820: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x199820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_199824:
    // 0x199824: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_199828:
    if (ctx->pc == 0x199828u) {
        ctx->pc = 0x199828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199824u;
        // 0x199828: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19982Cu;
        goto label_19982c;
    }
    ctx->pc = 0x199824u;
    {
        const bool branch_taken_0x199824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199824u;
        // 0x199828: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199824) {
            ctx->pc = 0x199810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199810;
        }
    }
    ctx->pc = 0x19982Cu;
label_19982c:
    // 0x19982c: 0xdce20050  ld          $v0, 0x50($a3)
    ctx->pc = 0x19982cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 80)));
label_199830:
    // 0x199830: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x199830u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_199834:
    // 0x199834: 0x3463a020  ori         $v1, $v1, 0xA020
    ctx->pc = 0x199834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40992);
label_199838:
    // 0x199838: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x199838u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
label_19983c:
    // 0x19983c: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x19983cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
label_199840:
    // 0x199840: 0x1052024  and         $a0, $t0, $a1
    ctx->pc = 0x199840u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & GPR_U64(ctx, 5));
label_199844:
    // 0x199844: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x199844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_199848:
    // 0x199848: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x199848u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_19984c:
    // 0x19984c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x19984cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_199850:
    // 0x199850: 0x1485000d  bne         $a0, $a1, . + 4 + (0xD << 2)
label_199854:
    if (ctx->pc == 0x199854u) {
        ctx->pc = 0x199854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199850u;
        // 0x199854: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199858u;
        goto label_199858;
    }
    ctx->pc = 0x199850u;
    {
        const bool branch_taken_0x199850 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x199854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199850u;
        // 0x199854: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199850) {
            ctx->pc = 0x199888u;
            goto label_199888;
        }
    }
    ctx->pc = 0x199858u;
label_199858:
    // 0x199858: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x199858u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_19985c:
    // 0x19985c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x19985cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_199860:
    // 0x199860: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x199860u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_199864:
    // 0x199864: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x199864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
label_199868:
    // 0x199868: 0x3463a010  ori         $v1, $v1, 0xA010
    ctx->pc = 0x199868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40976);
label_19986c:
    // 0x19986c: 0x1000000a  b           . + 4 + (0xA << 2)
label_199870:
    if (ctx->pc == 0x199870u) {
        ctx->pc = 0x199870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19986Cu;
        // 0x199870: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199874u;
        goto label_199874;
    }
    ctx->pc = 0x19986Cu;
    {
        const bool branch_taken_0x19986c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19986Cu;
        // 0x199870: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19986c) {
            ctx->pc = 0x199898u;
            goto label_199898;
        }
    }
    ctx->pc = 0x199874u;
label_199874:
    // 0x199874: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x199874u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_199878:
    // 0x199878: 0xc08ee2e  jal         func_23B8B8
label_19987c:
    if (ctx->pc == 0x19987Cu) {
        ctx->pc = 0x19987Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199878u;
        // 0x19987c: 0x24849d80  addiu       $a0, $a0, -0x6280 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942080));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199880u;
        goto label_199880;
    }
    ctx->pc = 0x199878u;
    SET_GPR_U32(ctx, 31, 0x199880u);
    ctx->pc = 0x19987Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199878u;
    // 0x19987c: 0x24849d80  addiu       $a0, $a0, -0x6280 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8B8u;
    { ctx->pc = 0x23b8b8; return; }
    ctx->pc = 0x199880u;
label_199880:
    // 0x199880: 0x1000000b  b           . + 4 + (0xB << 2)
label_199884:
    if (ctx->pc == 0x199884u) {
        ctx->pc = 0x199884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199880u;
        // 0x199884: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199888u;
        goto label_199888;
    }
    ctx->pc = 0x199880u;
    {
        const bool branch_taken_0x199880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199880u;
        // 0x199884: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199880) {
            ctx->pc = 0x1998B0u;
            { ctx->pc = 0x1998b0; return; }
        }
    }
    ctx->pc = 0x199888u;
label_199888:
    // 0x199888: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x199888u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_19988c:
    // 0x19988c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x19988cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_199890:
    // 0x199890: 0x3463a010  ori         $v1, $v1, 0xA010
    ctx->pc = 0x199890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40976);
label_199894:
    // 0x199894: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x199894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
label_199898:
    // 0x199898: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x199898u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_19989c:
    // 0x19989c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x19989cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_1998a0:
    // 0x1998a0: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x1998a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
label_1998a4:
    // 0x1998a4: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x1998a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40960);
label_1998a8:
    // 0x1998a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1998a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1998ac:
    // 0x1998ac: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1998acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    ctx->pc = 0x1998b0u;
    return;
}

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


void FUN_0017d410_part308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x213280u: goto label_213280;
        case 0x213284u: goto label_213284;
        case 0x213288u: goto label_213288;
        case 0x21328cu: goto label_21328c;
        case 0x213290u: goto label_213290;
        case 0x213294u: goto label_213294;
        case 0x213298u: goto label_213298;
        case 0x21329cu: goto label_21329c;
        case 0x2132a0u: goto label_2132a0;
        case 0x2132a4u: goto label_2132a4;
        case 0x2132a8u: goto label_2132a8;
        case 0x2132acu: goto label_2132ac;
        case 0x2132b0u: goto label_2132b0;
        case 0x2132b4u: goto label_2132b4;
        case 0x2132b8u: goto label_2132b8;
        case 0x2132bcu: goto label_2132bc;
        case 0x2132c0u: goto label_2132c0;
        case 0x2132c4u: goto label_2132c4;
        case 0x2132c8u: goto label_2132c8;
        case 0x2132ccu: goto label_2132cc;
        case 0x2132d0u: goto label_2132d0;
        case 0x2132d4u: goto label_2132d4;
        case 0x2132d8u: goto label_2132d8;
        case 0x2132dcu: goto label_2132dc;
        case 0x2132e0u: goto label_2132e0;
        case 0x2132e4u: goto label_2132e4;
        case 0x2132e8u: goto label_2132e8;
        case 0x2132ecu: goto label_2132ec;
        case 0x2132f0u: goto label_2132f0;
        case 0x2132f4u: goto label_2132f4;
        case 0x2132f8u: goto label_2132f8;
        case 0x2132fcu: goto label_2132fc;
        case 0x213300u: goto label_213300;
        case 0x213304u: goto label_213304;
        case 0x213308u: goto label_213308;
        case 0x21330cu: goto label_21330c;
        case 0x213310u: goto label_213310;
        case 0x213314u: goto label_213314;
        case 0x213318u: goto label_213318;
        case 0x21331cu: goto label_21331c;
        case 0x213320u: goto label_213320;
        case 0x213324u: goto label_213324;
        case 0x213328u: goto label_213328;
        case 0x21332cu: goto label_21332c;
        case 0x213330u: goto label_213330;
        case 0x213334u: goto label_213334;
        case 0x213338u: goto label_213338;
        case 0x21333cu: goto label_21333c;
        case 0x213340u: goto label_213340;
        case 0x213344u: goto label_213344;
        case 0x213348u: goto label_213348;
        case 0x21334cu: goto label_21334c;
        case 0x213350u: goto label_213350;
        case 0x213354u: goto label_213354;
        case 0x213358u: goto label_213358;
        case 0x21335cu: goto label_21335c;
        case 0x213360u: goto label_213360;
        case 0x213364u: goto label_213364;
        case 0x213368u: goto label_213368;
        case 0x21336cu: goto label_21336c;
        case 0x213370u: goto label_213370;
        case 0x213374u: goto label_213374;
        case 0x213378u: goto label_213378;
        case 0x21337cu: goto label_21337c;
        case 0x213380u: goto label_213380;
        case 0x213384u: goto label_213384;
        case 0x213388u: goto label_213388;
        case 0x21338cu: goto label_21338c;
        case 0x213390u: goto label_213390;
        case 0x213394u: goto label_213394;
        case 0x213398u: goto label_213398;
        case 0x21339cu: goto label_21339c;
        case 0x2133a0u: goto label_2133a0;
        case 0x2133a4u: goto label_2133a4;
        case 0x2133a8u: goto label_2133a8;
        case 0x2133acu: goto label_2133ac;
        case 0x2133b0u: goto label_2133b0;
        case 0x2133b4u: goto label_2133b4;
        case 0x2133b8u: goto label_2133b8;
        case 0x2133bcu: goto label_2133bc;
        case 0x2133c0u: goto label_2133c0;
        case 0x2133c4u: goto label_2133c4;
        case 0x2133c8u: goto label_2133c8;
        case 0x2133ccu: goto label_2133cc;
        case 0x2133d0u: goto label_2133d0;
        case 0x2133d4u: goto label_2133d4;
        case 0x2133d8u: goto label_2133d8;
        case 0x2133dcu: goto label_2133dc;
        case 0x2133e0u: goto label_2133e0;
        case 0x2133e4u: goto label_2133e4;
        case 0x2133e8u: goto label_2133e8;
        case 0x2133ecu: goto label_2133ec;
        case 0x2133f0u: goto label_2133f0;
        case 0x2133f4u: goto label_2133f4;
        case 0x2133f8u: goto label_2133f8;
        case 0x2133fcu: goto label_2133fc;
        case 0x213400u: goto label_213400;
        case 0x213404u: goto label_213404;
        case 0x213408u: goto label_213408;
        case 0x21340cu: goto label_21340c;
        case 0x213410u: goto label_213410;
        case 0x213414u: goto label_213414;
        case 0x213418u: goto label_213418;
        case 0x21341cu: goto label_21341c;
        case 0x213420u: goto label_213420;
        case 0x213424u: goto label_213424;
        case 0x213428u: goto label_213428;
        case 0x21342cu: goto label_21342c;
        case 0x213430u: goto label_213430;
        case 0x213434u: goto label_213434;
        case 0x213438u: goto label_213438;
        case 0x21343cu: goto label_21343c;
        case 0x213440u: goto label_213440;
        case 0x213444u: goto label_213444;
        case 0x213448u: goto label_213448;
        case 0x21344cu: goto label_21344c;
        case 0x213450u: goto label_213450;
        case 0x213454u: goto label_213454;
        case 0x213458u: goto label_213458;
        case 0x21345cu: goto label_21345c;
        case 0x213460u: goto label_213460;
        case 0x213464u: goto label_213464;
        case 0x213468u: goto label_213468;
        case 0x21346cu: goto label_21346c;
        case 0x213470u: goto label_213470;
        case 0x213474u: goto label_213474;
        case 0x213478u: goto label_213478;
        case 0x21347cu: goto label_21347c;
        case 0x213480u: goto label_213480;
        case 0x213484u: goto label_213484;
        case 0x213488u: goto label_213488;
        case 0x21348cu: goto label_21348c;
        case 0x213490u: goto label_213490;
        case 0x213494u: goto label_213494;
        case 0x213498u: goto label_213498;
        case 0x21349cu: goto label_21349c;
        case 0x2134a0u: goto label_2134a0;
        case 0x2134a4u: goto label_2134a4;
        case 0x2134a8u: goto label_2134a8;
        case 0x2134acu: goto label_2134ac;
        case 0x2134b0u: goto label_2134b0;
        case 0x2134b4u: goto label_2134b4;
        case 0x2134b8u: goto label_2134b8;
        case 0x2134bcu: goto label_2134bc;
        case 0x2134c0u: goto label_2134c0;
        case 0x2134c4u: goto label_2134c4;
        case 0x2134c8u: goto label_2134c8;
        case 0x2134ccu: goto label_2134cc;
        case 0x2134d0u: goto label_2134d0;
        case 0x2134d4u: goto label_2134d4;
        case 0x2134d8u: goto label_2134d8;
        case 0x2134dcu: goto label_2134dc;
        case 0x2134e0u: goto label_2134e0;
        case 0x2134e4u: goto label_2134e4;
        case 0x2134e8u: goto label_2134e8;
        case 0x2134ecu: goto label_2134ec;
        case 0x2134f0u: goto label_2134f0;
        case 0x2134f4u: goto label_2134f4;
        case 0x2134f8u: goto label_2134f8;
        case 0x2134fcu: goto label_2134fc;
        case 0x213500u: goto label_213500;
        case 0x213504u: goto label_213504;
        case 0x213508u: goto label_213508;
        case 0x21350cu: goto label_21350c;
        case 0x213510u: goto label_213510;
        case 0x213514u: goto label_213514;
        case 0x213518u: goto label_213518;
        case 0x21351cu: goto label_21351c;
        case 0x213520u: goto label_213520;
        case 0x213524u: goto label_213524;
        case 0x213528u: goto label_213528;
        case 0x21352cu: goto label_21352c;
        case 0x213530u: goto label_213530;
        case 0x213534u: goto label_213534;
        case 0x213538u: goto label_213538;
        case 0x21353cu: goto label_21353c;
        case 0x213540u: goto label_213540;
        case 0x213544u: goto label_213544;
        case 0x213548u: goto label_213548;
        case 0x21354cu: goto label_21354c;
        case 0x213550u: goto label_213550;
        case 0x213554u: goto label_213554;
        case 0x213558u: goto label_213558;
        case 0x21355cu: goto label_21355c;
        case 0x213560u: goto label_213560;
        case 0x213564u: goto label_213564;
        case 0x213568u: goto label_213568;
        case 0x21356cu: goto label_21356c;
        case 0x213570u: goto label_213570;
        case 0x213574u: goto label_213574;
        case 0x213578u: goto label_213578;
        case 0x21357cu: goto label_21357c;
        case 0x213580u: goto label_213580;
        case 0x213584u: goto label_213584;
        case 0x213588u: goto label_213588;
        case 0x21358cu: goto label_21358c;
        case 0x213590u: goto label_213590;
        case 0x213594u: goto label_213594;
        case 0x213598u: goto label_213598;
        case 0x21359cu: goto label_21359c;
        case 0x2135a0u: goto label_2135a0;
        case 0x2135a4u: goto label_2135a4;
        case 0x2135a8u: goto label_2135a8;
        case 0x2135acu: goto label_2135ac;
        case 0x2135b0u: goto label_2135b0;
        case 0x2135b4u: goto label_2135b4;
        case 0x2135b8u: goto label_2135b8;
        case 0x2135bcu: goto label_2135bc;
        case 0x2135c0u: goto label_2135c0;
        case 0x2135c4u: goto label_2135c4;
        case 0x2135c8u: goto label_2135c8;
        case 0x2135ccu: goto label_2135cc;
        case 0x2135d0u: goto label_2135d0;
        case 0x2135d4u: goto label_2135d4;
        case 0x2135d8u: goto label_2135d8;
        case 0x2135dcu: goto label_2135dc;
        case 0x2135e0u: goto label_2135e0;
        case 0x2135e4u: goto label_2135e4;
        case 0x2135e8u: goto label_2135e8;
        case 0x2135ecu: goto label_2135ec;
        case 0x2135f0u: goto label_2135f0;
        case 0x2135f4u: goto label_2135f4;
        case 0x2135f8u: goto label_2135f8;
        case 0x2135fcu: goto label_2135fc;
        case 0x213600u: goto label_213600;
        case 0x213604u: goto label_213604;
        case 0x213608u: goto label_213608;
        case 0x21360cu: goto label_21360c;
        case 0x213610u: goto label_213610;
        case 0x213614u: goto label_213614;
        case 0x213618u: goto label_213618;
        case 0x21361cu: goto label_21361c;
        case 0x213620u: goto label_213620;
        case 0x213624u: goto label_213624;
        case 0x213628u: goto label_213628;
        case 0x21362cu: goto label_21362c;
        case 0x213630u: goto label_213630;
        case 0x213634u: goto label_213634;
        case 0x213638u: goto label_213638;
        case 0x21363cu: goto label_21363c;
        case 0x213640u: goto label_213640;
        case 0x213644u: goto label_213644;
        case 0x213648u: goto label_213648;
        case 0x21364cu: goto label_21364c;
        case 0x213650u: goto label_213650;
        case 0x213654u: goto label_213654;
        case 0x213658u: goto label_213658;
        case 0x21365cu: goto label_21365c;
        case 0x213660u: goto label_213660;
        case 0x213664u: goto label_213664;
        case 0x213668u: goto label_213668;
        case 0x21366cu: goto label_21366c;
        case 0x213670u: goto label_213670;
        case 0x213674u: goto label_213674;
        case 0x213678u: goto label_213678;
        case 0x21367cu: goto label_21367c;
        case 0x213680u: goto label_213680;
        case 0x213684u: goto label_213684;
        case 0x213688u: goto label_213688;
        case 0x21368cu: goto label_21368c;
        case 0x213690u: goto label_213690;
        case 0x213694u: goto label_213694;
        case 0x213698u: goto label_213698;
        case 0x21369cu: goto label_21369c;
        case 0x2136a0u: goto label_2136a0;
        case 0x2136a4u: goto label_2136a4;
        case 0x2136a8u: goto label_2136a8;
        case 0x2136acu: goto label_2136ac;
        case 0x2136b0u: goto label_2136b0;
        case 0x2136b4u: goto label_2136b4;
        case 0x2136b8u: goto label_2136b8;
        case 0x2136bcu: goto label_2136bc;
        case 0x2136c0u: goto label_2136c0;
        case 0x2136c4u: goto label_2136c4;
        case 0x2136c8u: goto label_2136c8;
        case 0x2136ccu: goto label_2136cc;
        case 0x2136d0u: goto label_2136d0;
        case 0x2136d4u: goto label_2136d4;
        case 0x2136d8u: goto label_2136d8;
        case 0x2136dcu: goto label_2136dc;
        case 0x2136e0u: goto label_2136e0;
        case 0x2136e4u: goto label_2136e4;
        case 0x2136e8u: goto label_2136e8;
        case 0x2136ecu: goto label_2136ec;
        case 0x2136f0u: goto label_2136f0;
        case 0x2136f4u: goto label_2136f4;
        case 0x2136f8u: goto label_2136f8;
        case 0x2136fcu: goto label_2136fc;
        case 0x213700u: goto label_213700;
        case 0x213704u: goto label_213704;
        case 0x213708u: goto label_213708;
        case 0x21370cu: goto label_21370c;
        case 0x213710u: goto label_213710;
        case 0x213714u: goto label_213714;
        case 0x213718u: goto label_213718;
        case 0x21371cu: goto label_21371c;
        case 0x213720u: goto label_213720;
        case 0x213724u: goto label_213724;
        case 0x213728u: goto label_213728;
        case 0x21372cu: goto label_21372c;
        case 0x213730u: goto label_213730;
        case 0x213734u: goto label_213734;
        case 0x213738u: goto label_213738;
        case 0x21373cu: goto label_21373c;
        case 0x213740u: goto label_213740;
        case 0x213744u: goto label_213744;
        case 0x213748u: goto label_213748;
        case 0x21374cu: goto label_21374c;
        case 0x213750u: goto label_213750;
        case 0x213754u: goto label_213754;
        case 0x213758u: goto label_213758;
        case 0x21375cu: goto label_21375c;
        case 0x213760u: goto label_213760;
        case 0x213764u: goto label_213764;
        case 0x213768u: goto label_213768;
        case 0x21376cu: goto label_21376c;
        case 0x213770u: goto label_213770;
        case 0x213774u: goto label_213774;
        case 0x213778u: goto label_213778;
        case 0x21377cu: goto label_21377c;
        case 0x213780u: goto label_213780;
        case 0x213784u: goto label_213784;
        case 0x213788u: goto label_213788;
        case 0x21378cu: goto label_21378c;
        case 0x213790u: goto label_213790;
        case 0x213794u: goto label_213794;
        case 0x213798u: goto label_213798;
        case 0x21379cu: goto label_21379c;
        case 0x2137a0u: goto label_2137a0;
        case 0x2137a4u: goto label_2137a4;
        case 0x2137a8u: goto label_2137a8;
        case 0x2137acu: goto label_2137ac;
        case 0x2137b0u: goto label_2137b0;
        case 0x2137b4u: goto label_2137b4;
        case 0x2137b8u: goto label_2137b8;
        case 0x2137bcu: goto label_2137bc;
        case 0x2137c0u: goto label_2137c0;
        case 0x2137c4u: goto label_2137c4;
        case 0x2137c8u: goto label_2137c8;
        case 0x2137ccu: goto label_2137cc;
        case 0x2137d0u: goto label_2137d0;
        case 0x2137d4u: goto label_2137d4;
        case 0x2137d8u: goto label_2137d8;
        case 0x2137dcu: goto label_2137dc;
        case 0x2137e0u: goto label_2137e0;
        case 0x2137e4u: goto label_2137e4;
        case 0x2137e8u: goto label_2137e8;
        case 0x2137ecu: goto label_2137ec;
        case 0x2137f0u: goto label_2137f0;
        case 0x2137f4u: goto label_2137f4;
        case 0x2137f8u: goto label_2137f8;
        case 0x2137fcu: goto label_2137fc;
        case 0x213800u: goto label_213800;
        case 0x213804u: goto label_213804;
        case 0x213808u: goto label_213808;
        case 0x21380cu: goto label_21380c;
        case 0x213810u: goto label_213810;
        case 0x213814u: goto label_213814;
        case 0x213818u: goto label_213818;
        case 0x21381cu: goto label_21381c;
        case 0x213820u: goto label_213820;
        case 0x213824u: goto label_213824;
        case 0x213828u: goto label_213828;
        case 0x21382cu: goto label_21382c;
        case 0x213830u: goto label_213830;
        case 0x213834u: goto label_213834;
        case 0x213838u: goto label_213838;
        case 0x21383cu: goto label_21383c;
        case 0x213840u: goto label_213840;
        case 0x213844u: goto label_213844;
        case 0x213848u: goto label_213848;
        case 0x21384cu: goto label_21384c;
        case 0x213850u: goto label_213850;
        case 0x213854u: goto label_213854;
        case 0x213858u: goto label_213858;
        case 0x21385cu: goto label_21385c;
        case 0x213860u: goto label_213860;
        case 0x213864u: goto label_213864;
        case 0x213868u: goto label_213868;
        case 0x21386cu: goto label_21386c;
        case 0x213870u: goto label_213870;
        case 0x213874u: goto label_213874;
        case 0x213878u: goto label_213878;
        case 0x21387cu: goto label_21387c;
        case 0x213880u: goto label_213880;
        case 0x213884u: goto label_213884;
        case 0x213888u: goto label_213888;
        case 0x21388cu: goto label_21388c;
        case 0x213890u: goto label_213890;
        case 0x213894u: goto label_213894;
        case 0x213898u: goto label_213898;
        case 0x21389cu: goto label_21389c;
        case 0x2138a0u: goto label_2138a0;
        case 0x2138a4u: goto label_2138a4;
        case 0x2138a8u: goto label_2138a8;
        case 0x2138acu: goto label_2138ac;
        case 0x2138b0u: goto label_2138b0;
        case 0x2138b4u: goto label_2138b4;
        case 0x2138b8u: goto label_2138b8;
        case 0x2138bcu: goto label_2138bc;
        case 0x2138c0u: goto label_2138c0;
        case 0x2138c4u: goto label_2138c4;
        case 0x2138c8u: goto label_2138c8;
        case 0x2138ccu: goto label_2138cc;
        case 0x2138d0u: goto label_2138d0;
        case 0x2138d4u: goto label_2138d4;
        case 0x2138d8u: goto label_2138d8;
        case 0x2138dcu: goto label_2138dc;
        case 0x2138e0u: goto label_2138e0;
        case 0x2138e4u: goto label_2138e4;
        case 0x2138e8u: goto label_2138e8;
        case 0x2138ecu: goto label_2138ec;
        case 0x2138f0u: goto label_2138f0;
        case 0x2138f4u: goto label_2138f4;
        case 0x2138f8u: goto label_2138f8;
        case 0x2138fcu: goto label_2138fc;
        case 0x213900u: goto label_213900;
        case 0x213904u: goto label_213904;
        case 0x213908u: goto label_213908;
        case 0x21390cu: goto label_21390c;
        case 0x213910u: goto label_213910;
        case 0x213914u: goto label_213914;
        case 0x213918u: goto label_213918;
        case 0x21391cu: goto label_21391c;
        case 0x213920u: goto label_213920;
        case 0x213924u: goto label_213924;
        case 0x213928u: goto label_213928;
        case 0x21392cu: goto label_21392c;
        case 0x213930u: goto label_213930;
        case 0x213934u: goto label_213934;
        case 0x213938u: goto label_213938;
        case 0x21393cu: goto label_21393c;
        case 0x213940u: goto label_213940;
        case 0x213944u: goto label_213944;
        case 0x213948u: goto label_213948;
        case 0x21394cu: goto label_21394c;
        case 0x213950u: goto label_213950;
        case 0x213954u: goto label_213954;
        case 0x213958u: goto label_213958;
        case 0x21395cu: goto label_21395c;
        case 0x213960u: goto label_213960;
        case 0x213964u: goto label_213964;
        case 0x213968u: goto label_213968;
        case 0x21396cu: goto label_21396c;
        case 0x213970u: goto label_213970;
        case 0x213974u: goto label_213974;
        case 0x213978u: goto label_213978;
        case 0x21397cu: goto label_21397c;
        case 0x213980u: goto label_213980;
        case 0x213984u: goto label_213984;
        case 0x213988u: goto label_213988;
        case 0x21398cu: goto label_21398c;
        case 0x213990u: goto label_213990;
        case 0x213994u: goto label_213994;
        case 0x213998u: goto label_213998;
        case 0x21399cu: goto label_21399c;
        case 0x2139a0u: goto label_2139a0;
        case 0x2139a4u: goto label_2139a4;
        case 0x2139a8u: goto label_2139a8;
        case 0x2139acu: goto label_2139ac;
        case 0x2139b0u: goto label_2139b0;
        case 0x2139b4u: goto label_2139b4;
        case 0x2139b8u: goto label_2139b8;
        case 0x2139bcu: goto label_2139bc;
        case 0x2139c0u: goto label_2139c0;
        case 0x2139c4u: goto label_2139c4;
        case 0x2139c8u: goto label_2139c8;
        case 0x2139ccu: goto label_2139cc;
        case 0x2139d0u: goto label_2139d0;
        case 0x2139d4u: goto label_2139d4;
        case 0x2139d8u: goto label_2139d8;
        case 0x2139dcu: goto label_2139dc;
        case 0x2139e0u: goto label_2139e0;
        case 0x2139e4u: goto label_2139e4;
        case 0x2139e8u: goto label_2139e8;
        case 0x2139ecu: goto label_2139ec;
        case 0x2139f0u: goto label_2139f0;
        case 0x2139f4u: goto label_2139f4;
        case 0x2139f8u: goto label_2139f8;
        case 0x2139fcu: goto label_2139fc;
        case 0x213a00u: goto label_213a00;
        case 0x213a04u: goto label_213a04;
        case 0x213a08u: goto label_213a08;
        case 0x213a0cu: goto label_213a0c;
        case 0x213a10u: goto label_213a10;
        case 0x213a14u: goto label_213a14;
        case 0x213a18u: goto label_213a18;
        case 0x213a1cu: goto label_213a1c;
        case 0x213a20u: goto label_213a20;
        case 0x213a24u: goto label_213a24;
        case 0x213a28u: goto label_213a28;
        case 0x213a2cu: goto label_213a2c;
        case 0x213a30u: goto label_213a30;
        case 0x213a34u: goto label_213a34;
        case 0x213a38u: goto label_213a38;
        case 0x213a3cu: goto label_213a3c;
        case 0x213a40u: goto label_213a40;
        case 0x213a44u: goto label_213a44;
        case 0x213a48u: goto label_213a48;
        case 0x213a4cu: goto label_213a4c;
        default: return;
    }

label_213280:
    // 0x213280: 0x3443df00  ori         $v1, $v0, 0xDF00
    ctx->pc = 0x213280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57088);
label_213284:
    // 0x213284: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x213284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
label_213288:
    // 0x213288: 0x44839000  mtc1        $v1, $f18
    ctx->pc = 0x213288u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_21328c:
    // 0x21328c: 0x44829800  mtc1        $v0, $f19
    ctx->pc = 0x21328cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
label_213290:
    // 0x213290: 0xc066f7e  jal         func_19BDF8
label_213294:
    if (ctx->pc == 0x213294u) {
        ctx->pc = 0x213294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213290u;
        // 0x213294: 0x46007c06  mov.s       $f16, $f15 (Delay Slot)
        ctx->f[16] = FPU_MOV_S(ctx->f[15]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x213298u;
        goto label_213298;
    }
    ctx->pc = 0x213290u;
    SET_GPR_U32(ctx, 31, 0x213298u);
    ctx->pc = 0x213294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213290u;
    // 0x213294: 0x46007c06  mov.s       $f16, $f15 (Delay Slot)
    ctx->f[16] = FPU_MOV_S(ctx->f[15]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDF8u;
    { ctx->pc = 0x19bdf8; return; }
    ctx->pc = 0x213298u;
label_213298:
    // 0x213298: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x213298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_21329c:
    // 0x21329c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x21329cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2132a0:
    // 0x2132a0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2132a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2132a4:
    // 0x2132a4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2132a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2132a8:
    // 0x2132a8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2132a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2132ac:
    // 0x2132ac: 0x3e00008  jr          $ra
label_2132b0:
    if (ctx->pc == 0x2132B0u) {
        ctx->pc = 0x2132B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2132ACu;
        // 0x2132b0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2132B4u;
        goto label_2132b4;
    }
    ctx->pc = 0x2132ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2132B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2132ACu;
        // 0x2132b0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2132ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2132B4u;
label_2132b4:
    // 0x2132b4: 0x0  nop
    ctx->pc = 0x2132b4u;
    // NOP
label_2132b8:
    // 0x2132b8: 0x0  nop
    ctx->pc = 0x2132b8u;
    // NOP
label_2132bc:
    // 0x2132bc: 0x0  nop
    ctx->pc = 0x2132bcu;
    // NOP
label_2132c0:
    // 0x2132c0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2132c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_2132c4:
    // 0x2132c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2132c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2132c8:
    // 0x2132c8: 0xc084d84  jal         func_213610
label_2132cc:
    if (ctx->pc == 0x2132CCu) {
        ctx->pc = 0x2132D0u;
        goto label_2132d0;
    }
    ctx->pc = 0x2132C8u;
    SET_GPR_U32(ctx, 31, 0x2132D0u);
    ctx->pc = 0x213610u;
    goto label_213610;
    ctx->pc = 0x2132D0u;
label_2132d0:
    // 0x2132d0: 0xc066e44  jal         func_19B910
label_2132d4:
    if (ctx->pc == 0x2132D4u) {
        ctx->pc = 0x2132D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2132D0u;
        // 0x2132d4: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2132D8u;
        goto label_2132d8;
    }
    ctx->pc = 0x2132D0u;
    SET_GPR_U32(ctx, 31, 0x2132D8u);
    ctx->pc = 0x2132D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2132D0u;
    // 0x2132d4: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x2132D8u;
label_2132d8:
    // 0x2132d8: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x2132d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_2132dc:
    // 0x2132dc: 0x3c060029  lui         $a2, 0x29
    ctx->pc = 0x2132dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)41 << 16));
label_2132e0:
    // 0x2132e0: 0x248477d0  addiu       $a0, $a0, 0x77D0
    ctx->pc = 0x2132e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30672));
label_2132e4:
    // 0x2132e4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2132e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2132e8:
    // 0x2132e8: 0xc066eea  jal         func_19BBA8
label_2132ec:
    if (ctx->pc == 0x2132ECu) {
        ctx->pc = 0x2132ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2132E8u;
        // 0x2132ec: 0x24c6d5e0  addiu       $a2, $a2, -0x2A20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2132F0u;
        goto label_2132f0;
    }
    ctx->pc = 0x2132E8u;
    SET_GPR_U32(ctx, 31, 0x2132F0u);
    ctx->pc = 0x2132ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2132E8u;
    // 0x2132ec: 0x24c6d5e0  addiu       $a2, $a2, -0x2A20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BBA8u;
    { ctx->pc = 0x19bba8; return; }
    ctx->pc = 0x2132F0u;
label_2132f0:
    // 0x2132f0: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x2132f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_2132f4:
    // 0x2132f4: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x2132f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
label_2132f8:
    // 0x2132f8: 0x3c060029  lui         $a2, 0x29
    ctx->pc = 0x2132f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)41 << 16));
label_2132fc:
    // 0x2132fc: 0x3c070029  lui         $a3, 0x29
    ctx->pc = 0x2132fcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)41 << 16));
label_213300:
    // 0x213300: 0x24847790  addiu       $a0, $a0, 0x7790
    ctx->pc = 0x213300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30608));
label_213304:
    // 0x213304: 0x24a5d600  addiu       $a1, $a1, -0x2A00
    ctx->pc = 0x213304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956544));
label_213308:
    // 0x213308: 0x24c6d610  addiu       $a2, $a2, -0x29F0
    ctx->pc = 0x213308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956560));
label_21330c:
    // 0x21330c: 0xc066f34  jal         func_19BCD0
label_213310:
    if (ctx->pc == 0x213310u) {
        ctx->pc = 0x213310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21330Cu;
        // 0x213310: 0x24e7d620  addiu       $a3, $a3, -0x29E0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294956576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213314u;
        goto label_213314;
    }
    ctx->pc = 0x21330Cu;
    SET_GPR_U32(ctx, 31, 0x213314u);
    ctx->pc = 0x213310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21330Cu;
    // 0x213310: 0x24e7d620  addiu       $a3, $a3, -0x29E0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294956576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BCD0u;
    { ctx->pc = 0x19bcd0; return; }
    ctx->pc = 0x213314u;
label_213314:
    // 0x213314: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x213314u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_213318:
    // 0x213318: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x213318u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
label_21331c:
    // 0x21331c: 0x3c060029  lui         $a2, 0x29
    ctx->pc = 0x21331cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)41 << 16));
label_213320:
    // 0x213320: 0x3c070029  lui         $a3, 0x29
    ctx->pc = 0x213320u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)41 << 16));
label_213324:
    // 0x213324: 0x3c080029  lui         $t0, 0x29
    ctx->pc = 0x213324u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)41 << 16));
label_213328:
    // 0x213328: 0x24847750  addiu       $a0, $a0, 0x7750
    ctx->pc = 0x213328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30544));
label_21332c:
    // 0x21332c: 0x24a5d630  addiu       $a1, $a1, -0x29D0
    ctx->pc = 0x21332cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956592));
label_213330:
    // 0x213330: 0x24c6d640  addiu       $a2, $a2, -0x29C0
    ctx->pc = 0x213330u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956608));
label_213334:
    // 0x213334: 0x24e7d650  addiu       $a3, $a3, -0x29B0
    ctx->pc = 0x213334u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294956624));
label_213338:
    // 0x213338: 0xc066f64  jal         func_19BD90
label_21333c:
    if (ctx->pc == 0x21333Cu) {
        ctx->pc = 0x21333Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213338u;
        // 0x21333c: 0x2508d660  addiu       $t0, $t0, -0x29A0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213340u;
        goto label_213340;
    }
    ctx->pc = 0x213338u;
    SET_GPR_U32(ctx, 31, 0x213340u);
    ctx->pc = 0x21333Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213338u;
    // 0x21333c: 0x2508d660  addiu       $t0, $t0, -0x29A0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BD90u;
    { ctx->pc = 0x19bd90; return; }
    ctx->pc = 0x213340u;
label_213340:
    // 0x213340: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x213340u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_213344:
    // 0x213344: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x213344u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_213348:
    // 0x213348: 0x3c060058  lui         $a2, 0x58
    ctx->pc = 0x213348u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)88 << 16));
label_21334c:
    // 0x21334c: 0x24847710  addiu       $a0, $a0, 0x7710
    ctx->pc = 0x21334cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30480));
label_213350:
    // 0x213350: 0x24a57790  addiu       $a1, $a1, 0x7790
    ctx->pc = 0x213350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30608));
label_213354:
    // 0x213354: 0xc066d86  jal         func_19B618
label_213358:
    if (ctx->pc == 0x213358u) {
        ctx->pc = 0x213358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213354u;
        // 0x213358: 0x24c677d0  addiu       $a2, $a2, 0x77D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30672));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21335Cu;
        goto label_21335c;
    }
    ctx->pc = 0x213354u;
    SET_GPR_U32(ctx, 31, 0x21335Cu);
    ctx->pc = 0x213358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213354u;
    // 0x213358: 0x24c677d0  addiu       $a2, $a2, 0x77D0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B618u;
    { ctx->pc = 0x19b618; return; }
    ctx->pc = 0x21335Cu;
label_21335c:
    // 0x21335c: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x21335cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_213360:
    // 0x213360: 0x3c060029  lui         $a2, 0x29
    ctx->pc = 0x213360u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)41 << 16));
label_213364:
    // 0x213364: 0x248477d0  addiu       $a0, $a0, 0x77D0
    ctx->pc = 0x213364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30672));
label_213368:
    // 0x213368: 0x24c6d5f0  addiu       $a2, $a2, -0x2A10
    ctx->pc = 0x213368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956528));
label_21336c:
    // 0x21336c: 0xc066e1a  jal         func_19B868
label_213370:
    if (ctx->pc == 0x213370u) {
        ctx->pc = 0x213370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21336Cu;
        // 0x213370: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213374u;
        goto label_213374;
    }
    ctx->pc = 0x21336Cu;
    SET_GPR_U32(ctx, 31, 0x213374u);
    ctx->pc = 0x213370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21336Cu;
    // 0x213370: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B868u;
    { ctx->pc = 0x19b868; return; }
    ctx->pc = 0x213374u;
label_213374:
    // 0x213374: 0xc066e44  jal         func_19B910
label_213378:
    if (ctx->pc == 0x213378u) {
        ctx->pc = 0x213378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213374u;
        // 0x213378: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21337Cu;
        goto label_21337c;
    }
    ctx->pc = 0x213374u;
    SET_GPR_U32(ctx, 31, 0x21337Cu);
    ctx->pc = 0x213378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213374u;
    // 0x213378: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x21337Cu;
label_21337c:
    // 0x21337c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x21337cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_213380:
    // 0x213380: 0x3c060029  lui         $a2, 0x29
    ctx->pc = 0x213380u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)41 << 16));
label_213384:
    // 0x213384: 0x24c6d5d0  addiu       $a2, $a2, -0x2A30
    ctx->pc = 0x213384u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956496));
label_213388:
    // 0x213388: 0xc066eea  jal         func_19BBA8
label_21338c:
    if (ctx->pc == 0x21338Cu) {
        ctx->pc = 0x21338Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213388u;
        // 0x21338c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213390u;
        goto label_213390;
    }
    ctx->pc = 0x213388u;
    SET_GPR_U32(ctx, 31, 0x213390u);
    ctx->pc = 0x21338Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213388u;
    // 0x21338c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BBA8u;
    { ctx->pc = 0x19bba8; return; }
    ctx->pc = 0x213390u;
label_213390:
    // 0x213390: 0x3c060029  lui         $a2, 0x29
    ctx->pc = 0x213390u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)41 << 16));
label_213394:
    // 0x213394: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x213394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_213398:
    // 0x213398: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x213398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_21339c:
    // 0x21339c: 0xc066d7a  jal         func_19B5E8
label_2133a0:
    if (ctx->pc == 0x2133A0u) {
        ctx->pc = 0x2133A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21339Cu;
        // 0x2133a0: 0x24c6d5b0  addiu       $a2, $a2, -0x2A50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956464));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2133A4u;
        goto label_2133a4;
    }
    ctx->pc = 0x21339Cu;
    SET_GPR_U32(ctx, 31, 0x2133A4u);
    ctx->pc = 0x2133A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21339Cu;
    // 0x2133a0: 0x24c6d5b0  addiu       $a2, $a2, -0x2A50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x2133A4u;
label_2133a4:
    // 0x2133a4: 0x3c060029  lui         $a2, 0x29
    ctx->pc = 0x2133a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)41 << 16));
label_2133a8:
    // 0x2133a8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2133a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2133ac:
    // 0x2133ac: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2133acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2133b0:
    // 0x2133b0: 0xc066d7a  jal         func_19B5E8
label_2133b4:
    if (ctx->pc == 0x2133B4u) {
        ctx->pc = 0x2133B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2133B0u;
        // 0x2133b4: 0x24c6d5c0  addiu       $a2, $a2, -0x2A40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2133B8u;
        goto label_2133b8;
    }
    ctx->pc = 0x2133B0u;
    SET_GPR_U32(ctx, 31, 0x2133B8u);
    ctx->pc = 0x2133B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2133B0u;
    // 0x2133b4: 0x24c6d5c0  addiu       $a2, $a2, -0x2A40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x2133B8u;
label_2133b8:
    // 0x2133b8: 0x3c060029  lui         $a2, 0x29
    ctx->pc = 0x2133b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)41 << 16));
label_2133bc:
    // 0x2133bc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2133bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2133c0:
    // 0x2133c0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2133c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2133c4:
    // 0x2133c4: 0xc066d7a  jal         func_19B5E8
label_2133c8:
    if (ctx->pc == 0x2133C8u) {
        ctx->pc = 0x2133C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2133C4u;
        // 0x2133c8: 0x24c6d5a0  addiu       $a2, $a2, -0x2A60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956448));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2133CCu;
        goto label_2133cc;
    }
    ctx->pc = 0x2133C4u;
    SET_GPR_U32(ctx, 31, 0x2133CCu);
    ctx->pc = 0x2133C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2133C4u;
    // 0x2133c8: 0x24c6d5a0  addiu       $a2, $a2, -0x2A60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x2133CCu;
label_2133cc:
    // 0x2133cc: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x2133ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_2133d0:
    // 0x2133d0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2133d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2133d4:
    // 0x2133d4: 0x24847850  addiu       $a0, $a0, 0x7850
    ctx->pc = 0x2133d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30800));
label_2133d8:
    // 0x2133d8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2133d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2133dc:
    // 0x2133dc: 0xc066f08  jal         func_19BC20
label_2133e0:
    if (ctx->pc == 0x2133E0u) {
        ctx->pc = 0x2133E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2133DCu;
        // 0x2133e0: 0x27a70020  addiu       $a3, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2133E4u;
        goto label_2133e4;
    }
    ctx->pc = 0x2133DCu;
    SET_GPR_U32(ctx, 31, 0x2133E4u);
    ctx->pc = 0x2133E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2133DCu;
    // 0x2133e0: 0x27a70020  addiu       $a3, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BC20u;
    { ctx->pc = 0x19bc20; return; }
    ctx->pc = 0x2133E4u;
label_2133e4:
    // 0x2133e4: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x2133e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_2133e8:
    // 0x2133e8: 0x3c060058  lui         $a2, 0x58
    ctx->pc = 0x2133e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)88 << 16));
label_2133ec:
    // 0x2133ec: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2133ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2133f0:
    // 0x2133f0: 0x24a57850  addiu       $a1, $a1, 0x7850
    ctx->pc = 0x2133f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30800));
label_2133f4:
    // 0x2133f4: 0xc066d86  jal         func_19B618
label_2133f8:
    if (ctx->pc == 0x2133F8u) {
        ctx->pc = 0x2133F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2133F4u;
        // 0x2133f8: 0x24c677d0  addiu       $a2, $a2, 0x77D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30672));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2133FCu;
        goto label_2133fc;
    }
    ctx->pc = 0x2133F4u;
    SET_GPR_U32(ctx, 31, 0x2133FCu);
    ctx->pc = 0x2133F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2133F4u;
    // 0x2133f8: 0x24c677d0  addiu       $a2, $a2, 0x77D0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B618u;
    { ctx->pc = 0x19b618; return; }
    ctx->pc = 0x2133FCu;
label_2133fc:
    // 0x2133fc: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x2133fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_213400:
    // 0x213400: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x213400u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_213404:
    // 0x213404: 0x24847810  addiu       $a0, $a0, 0x7810
    ctx->pc = 0x213404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30736));
label_213408:
    // 0x213408: 0x24a57890  addiu       $a1, $a1, 0x7890
    ctx->pc = 0x213408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30864));
label_21340c:
    // 0x21340c: 0xc066d86  jal         func_19B618
label_213410:
    if (ctx->pc == 0x213410u) {
        ctx->pc = 0x213410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21340Cu;
        // 0x213410: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213414u;
        goto label_213414;
    }
    ctx->pc = 0x21340Cu;
    SET_GPR_U32(ctx, 31, 0x213414u);
    ctx->pc = 0x213410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21340Cu;
    // 0x213410: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B618u;
    { ctx->pc = 0x19b618; return; }
    ctx->pc = 0x213414u;
label_213414:
    // 0x213414: 0xc084eac  jal         func_213AB0
label_213418:
    if (ctx->pc == 0x213418u) {
        ctx->pc = 0x21341Cu;
        goto label_21341c;
    }
    ctx->pc = 0x213414u;
    SET_GPR_U32(ctx, 31, 0x21341Cu);
    ctx->pc = 0x213AB0u;
    { ctx->pc = 0x213ab0; return; }
    ctx->pc = 0x21341Cu;
label_21341c:
    // 0x21341c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21341cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_213420:
    // 0x213420: 0x3e00008  jr          $ra
label_213424:
    if (ctx->pc == 0x213424u) {
        ctx->pc = 0x213424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213420u;
        // 0x213424: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213428u;
        goto label_213428;
    }
    ctx->pc = 0x213420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213420u;
        // 0x213424: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x213428u;
label_213428:
    // 0x213428: 0x0  nop
    ctx->pc = 0x213428u;
    // NOP
label_21342c:
    // 0x21342c: 0x0  nop
    ctx->pc = 0x21342cu;
    // NOP
label_213430:
    // 0x213430: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x213430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_213434:
    // 0x213434: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x213434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_213438:
    // 0x213438: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x213438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_21343c:
    // 0x21343c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x21343cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_213440:
    // 0x213440: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x213440u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_213444:
    // 0x213444: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x213444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_213448:
    // 0x213448: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x213448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_21344c:
    // 0x21344c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21344cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_213450:
    // 0x213450: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x213450u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_213454:
    // 0x213454: 0x278391b8  addiu       $v1, $gp, -0x6E48
    ctx->pc = 0x213454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939064));
label_213458:
    // 0x213458: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x213458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_21345c:
    // 0x21345c: 0x8c730000  lw          $s3, 0x0($v1)
    ctx->pc = 0x21345cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_213460:
    // 0x213460: 0x10000032  b           . + 4 + (0x32 << 2)
label_213464:
    if (ctx->pc == 0x213464u) {
        ctx->pc = 0x213464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213460u;
        // 0x213464: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213468u;
        goto label_213468;
    }
    ctx->pc = 0x213460u;
    {
        const bool branch_taken_0x213460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213460u;
        // 0x213464: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213460) {
            ctx->pc = 0x21352Cu;
            goto label_21352c;
        }
    }
    ctx->pc = 0x213468u;
label_213468:
    // 0x213468: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x213468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_21346c:
    // 0x21346c: 0x509023  subu        $s2, $v0, $s0
    ctx->pc = 0x21346cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_213470:
    // 0x213470: 0x6410002  bgez        $s2, . + 4 + (0x2 << 2)
label_213474:
    if (ctx->pc == 0x213474u) {
        ctx->pc = 0x213478u;
        goto label_213478;
    }
    ctx->pc = 0x213470u;
    {
        const bool branch_taken_0x213470 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x213470) {
            ctx->pc = 0x21347Cu;
            goto label_21347c;
        }
    }
    ctx->pc = 0x213478u;
label_213478:
    // 0x213478: 0x26520080  addiu       $s2, $s2, 0x80
    ctx->pc = 0x213478u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
label_21347c:
    // 0x21347c: 0x0  nop
    ctx->pc = 0x21347cu;
    // NOP
label_213480:
    // 0x213480: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x213480u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
label_213484:
    // 0x213484: 0xc6620020  lwc1        $f2, 0x20($s3)
    ctx->pc = 0x213484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_213488:
    // 0x213488: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x213488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_21348c:
    // 0x21348c: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x21348cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
label_213490:
    // 0x213490: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x213490u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_213494:
    // 0x213494: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x213494u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_213498:
    // 0x213498: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x213498u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_21349c:
    // 0x21349c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x21349cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_2134a0:
    // 0x2134a0: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x2134a0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
label_2134a4:
    // 0x2134a4: 0x0  nop
    ctx->pc = 0x2134a4u;
    // NOP
label_2134a8:
    // 0x2134a8: 0x0  nop
    ctx->pc = 0x2134a8u;
    // NOP
label_2134ac:
    // 0x2134ac: 0xc06d4c0  jal         func_1B5300
label_2134b0:
    if (ctx->pc == 0x2134B0u) {
        ctx->pc = 0x2134B4u;
        goto label_2134b4;
    }
    ctx->pc = 0x2134ACu;
    SET_GPR_U32(ctx, 31, 0x2134B4u);
    ctx->pc = 0x1B5300u;
    { ctx->pc = 0x1b5300; return; }
    ctx->pc = 0x2134B4u;
label_2134b4:
    // 0x2134b4: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x2134b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2134b8:
    // 0x2134b8: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x2134b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_2134bc:
    // 0x2134bc: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x2134bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_2134c0:
    // 0x2134c0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2134c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2134c4:
    // 0x2134c4: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x2134c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
label_2134c8:
    // 0x2134c8: 0x8e64001c  lw          $a0, 0x1C($s3)
    ctx->pc = 0x2134c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_2134cc:
    // 0x2134cc: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x2134ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_2134d0:
    // 0x2134d0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2134d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2134d4:
    // 0x2134d4: 0xae63001c  sw          $v1, 0x1C($s3)
    ctx->pc = 0x2134d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 3));
label_2134d8:
    // 0x2134d8: 0x8e64001c  lw          $a0, 0x1C($s3)
    ctx->pc = 0x2134d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_2134dc:
    // 0x2134dc: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x2134dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_2134e0:
    // 0x2134e0: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x2134e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2134e4:
    // 0x2134e4: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_2134e8:
    if (ctx->pc == 0x2134E8u) {
        ctx->pc = 0x2134E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2134E4u;
        // 0x2134e8: 0x308300ff  andi        $v1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2134ECu;
        goto label_2134ec;
    }
    ctx->pc = 0x2134E4u;
    {
        const bool branch_taken_0x2134e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2134E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2134E4u;
        // 0x2134e8: 0x308300ff  andi        $v1, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2134e4) {
            ctx->pc = 0x213508u;
            goto label_213508;
        }
    }
    ctx->pc = 0x2134ECu;
label_2134ec:
    // 0x2134ec: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
label_2134f0:
    if (ctx->pc == 0x2134F0u) {
        ctx->pc = 0x2134F4u;
        goto label_2134f4;
    }
    ctx->pc = 0x2134ECu;
    {
        const bool branch_taken_0x2134ec = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x2134ec) {
            ctx->pc = 0x213500u;
            goto label_213500;
        }
    }
    ctx->pc = 0x2134F4u;
label_2134f4:
    // 0x2134f4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_2134f8:
    if (ctx->pc == 0x2134F8u) {
        ctx->pc = 0x2134FCu;
        goto label_2134fc;
    }
    ctx->pc = 0x2134F4u;
    {
        const bool branch_taken_0x2134f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2134f4) {
            ctx->pc = 0x213500u;
            goto label_213500;
        }
    }
    ctx->pc = 0x2134FCu;
label_2134fc:
    // 0x2134fc: 0x2463ff00  addiu       $v1, $v1, -0x100
    ctx->pc = 0x2134fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967040));
label_213500:
    // 0x213500: 0x10000009  b           . + 4 + (0x9 << 2)
label_213504:
    if (ctx->pc == 0x213504u) {
        ctx->pc = 0x213504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213500u;
        // 0x213504: 0xae630020  sw          $v1, 0x20($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213508u;
        goto label_213508;
    }
    ctx->pc = 0x213500u;
    {
        const bool branch_taken_0x213500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213500u;
        // 0x213504: 0xae630020  sw          $v1, 0x20($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213500) {
            ctx->pc = 0x213528u;
            goto label_213528;
        }
    }
    ctx->pc = 0x213508u;
label_213508:
    // 0x213508: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x213508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_21350c:
    // 0x21350c: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x21350cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_213510:
    // 0x213510: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_213514:
    if (ctx->pc == 0x213514u) {
        ctx->pc = 0x213518u;
        goto label_213518;
    }
    ctx->pc = 0x213510u;
    {
        const bool branch_taken_0x213510 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x213510) {
            ctx->pc = 0x213520u;
            goto label_213520;
        }
    }
    ctx->pc = 0x213518u;
label_213518:
    // 0x213518: 0x10000003  b           . + 4 + (0x3 << 2)
label_21351c:
    if (ctx->pc == 0x21351Cu) {
        ctx->pc = 0x21351Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213518u;
        // 0x21351c: 0xae600020  sw          $zero, 0x20($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213520u;
        goto label_213520;
    }
    ctx->pc = 0x213518u;
    {
        const bool branch_taken_0x213518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21351Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213518u;
        // 0x21351c: 0xae600020  sw          $zero, 0x20($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213518) {
            ctx->pc = 0x213528u;
            goto label_213528;
        }
    }
    ctx->pc = 0x213520u;
label_213520:
    // 0x213520: 0xae600020  sw          $zero, 0x20($s3)
    ctx->pc = 0x213520u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 0));
label_213524:
    // 0x213524: 0xae60001c  sw          $zero, 0x1C($s3)
    ctx->pc = 0x213524u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 0));
label_213528:
    // 0x213528: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x213528u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_21352c:
    // 0x21352c: 0x0  nop
    ctx->pc = 0x21352cu;
    // NOP
label_213530:
    // 0x213530: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x213530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_213534:
    // 0x213534: 0x204182a  slt         $v1, $s0, $a0
    ctx->pc = 0x213534u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_213538:
    // 0x213538: 0x1460ffcb  bnez        $v1, . + 4 + (-0x35 << 2)
label_21353c:
    if (ctx->pc == 0x21353Cu) {
        ctx->pc = 0x213540u;
        goto label_213540;
    }
    ctx->pc = 0x213538u;
    {
        const bool branch_taken_0x213538 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x213538) {
            ctx->pc = 0x213468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_213468;
        }
    }
    ctx->pc = 0x213540u;
label_213540:
    // 0x213540: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x213540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_213544:
    // 0x213544: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x213544u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_213548:
    // 0x213548: 0xae630024  sw          $v1, 0x24($s3)
    ctx->pc = 0x213548u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 3));
label_21354c:
    // 0x21354c: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x21354cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_213550:
    // 0x213550: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_213554:
    if (ctx->pc == 0x213554u) {
        ctx->pc = 0x213558u;
        goto label_213558;
    }
    ctx->pc = 0x213550u;
    {
        const bool branch_taken_0x213550 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x213550) {
            ctx->pc = 0x213560u;
            goto label_213560;
        }
    }
    ctx->pc = 0x213558u;
label_213558:
    // 0x213558: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x213558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_21355c:
    // 0x21355c: 0xae630024  sw          $v1, 0x24($s3)
    ctx->pc = 0x21355cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 3));
label_213560:
    // 0x213560: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x213560u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_213564:
    // 0x213564: 0x2a230002  slti        $v1, $s1, 0x2
    ctx->pc = 0x213564u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_213568:
    // 0x213568: 0x1460ffba  bnez        $v1, . + 4 + (-0x46 << 2)
label_21356c:
    if (ctx->pc == 0x21356Cu) {
        ctx->pc = 0x21356Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213568u;
        // 0x21356c: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213570u;
        goto label_213570;
    }
    ctx->pc = 0x213568u;
    {
        const bool branch_taken_0x213568 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21356Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213568u;
        // 0x21356c: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213568) {
            ctx->pc = 0x213454u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_213454;
        }
    }
    ctx->pc = 0x213570u;
label_213570:
    // 0x213570: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x213570u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_213574:
    // 0x213574: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x213574u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_213578:
    // 0x213578: 0x278591b8  addiu       $a1, $gp, -0x6E48
    ctx->pc = 0x213578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939064));
label_21357c:
    // 0x21357c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x21357cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_213580:
    // 0x213580: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x213580u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_213584:
    // 0x213584: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x213584u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_213588:
    // 0x213588: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x213588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_21358c:
    // 0x21358c: 0x8c690000  lw          $t1, 0x0($v1)
    ctx->pc = 0x21358cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_213590:
    // 0x213590: 0x1492021  addu        $a0, $t2, $t1
    ctx->pc = 0x213590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
label_213594:
    // 0x213594: 0x8d230024  lw          $v1, 0x24($t1)
    ctx->pc = 0x213594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 36)));
label_213598:
    // 0x213598: 0x90840228  lbu         $a0, 0x228($a0)
    ctx->pc = 0x213598u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 552)));
label_21359c:
    // 0x21359c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x21359cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2135a0:
    // 0x2135a0: 0x28830080  slti        $v1, $a0, 0x80
    ctx->pc = 0x2135a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)128) ? 1 : 0);
label_2135a4:
    // 0x2135a4: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_2135a8:
    if (ctx->pc == 0x2135A8u) {
        ctx->pc = 0x2135ACu;
        goto label_2135ac;
    }
    ctx->pc = 0x2135A4u;
    {
        const bool branch_taken_0x2135a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2135a4) {
            ctx->pc = 0x2135B0u;
            goto label_2135b0;
        }
    }
    ctx->pc = 0x2135ACu;
label_2135ac:
    // 0x2135ac: 0x2484ff80  addiu       $a0, $a0, -0x80
    ctx->pc = 0x2135acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967168));
label_2135b0:
    // 0x2135b0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2135b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2135b4:
    // 0x2135b4: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x2135b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
label_2135b8:
    // 0x2135b8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2135b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_2135bc:
    // 0x2135bc: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x2135bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2135c0:
    // 0x2135c0: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x2135c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_2135c4:
    // 0x2135c4: 0x29030002  slti        $v1, $t0, 0x2
    ctx->pc = 0x2135c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
label_2135c8:
    // 0x2135c8: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
label_2135cc:
    if (ctx->pc == 0x2135CCu) {
        ctx->pc = 0x2135CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2135C8u;
        // 0x2135cc: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2135D0u;
        goto label_2135d0;
    }
    ctx->pc = 0x2135C8u;
    {
        const bool branch_taken_0x2135c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2135CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2135C8u;
        // 0x2135cc: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2135c8) {
            ctx->pc = 0x213588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_213588;
        }
    }
    ctx->pc = 0x2135D0u;
label_2135d0:
    // 0x2135d0: 0x8f8491b0  lw          $a0, -0x6E50($gp)
    ctx->pc = 0x2135d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939056)));
label_2135d4:
    // 0x2135d4: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x2135d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_2135d8:
    // 0x2135d8: 0x294304a5  slti        $v1, $t2, 0x4A5
    ctx->pc = 0x2135d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)1189) ? 1 : 0);
label_2135dc:
    // 0x2135dc: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x2135dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_2135e0:
    // 0x2135e0: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x2135e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_2135e4:
    // 0x2135e4: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
label_2135e8:
    if (ctx->pc == 0x2135E8u) {
        ctx->pc = 0x2135E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2135E4u;
        // 0x2135e8: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2135ECu;
        goto label_2135ec;
    }
    ctx->pc = 0x2135E4u;
    {
        const bool branch_taken_0x2135e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2135E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2135E4u;
        // 0x2135e8: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2135e4) {
            ctx->pc = 0x21357Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21357c;
        }
    }
    ctx->pc = 0x2135ECu;
label_2135ec:
    // 0x2135ec: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2135ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2135f0:
    // 0x2135f0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2135f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2135f4:
    // 0x2135f4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2135f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2135f8:
    // 0x2135f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2135f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2135fc:
    // 0x2135fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2135fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_213600:
    // 0x213600: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x213600u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_213604:
    // 0x213604: 0x3e00008  jr          $ra
label_213608:
    if (ctx->pc == 0x213608u) {
        ctx->pc = 0x213608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213604u;
        // 0x213608: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21360Cu;
        goto label_21360c;
    }
    ctx->pc = 0x213604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213604u;
        // 0x213608: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21360Cu;
label_21360c:
    // 0x21360c: 0x0  nop
    ctx->pc = 0x21360cu;
    // NOP
label_213610:
    // 0x213610: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x213610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_213614:
    // 0x213614: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x213614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_213618:
    // 0x213618: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x213618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_21361c:
    // 0x21361c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x21361cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_213620:
    // 0x213620: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x213620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_213624:
    // 0x213624: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x213624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_213628:
    // 0x213628: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x213628u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21362c:
    // 0x21362c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21362cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_213630:
    // 0x213630: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x213630u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_213634:
    // 0x213634: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x213634u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_213638:
    // 0x213638: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x213638u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21363c:
    // 0x21363c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x21363cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_213640:
    // 0x213640: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x213640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_213644:
    // 0x213644: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x213644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_213648:
    // 0x213648: 0x8f8591b0  lw          $a1, -0x6E50($gp)
    ctx->pc = 0x213648u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939056)));
label_21364c:
    // 0x21364c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x21364cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_213650:
    // 0x213650: 0xc43821  addu        $a3, $a2, $a0
    ctx->pc = 0x213650u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_213654:
    // 0x213654: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x213654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_213658:
    // 0x213658: 0x34214e68  ori         $at, $at, 0x4E68
    ctx->pc = 0x213658u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20072);
label_21365c:
    // 0x21365c: 0x28480003  slti        $t0, $v0, 0x3
    ctx->pc = 0x21365cu;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_213660:
    // 0x213660: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x213660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_213664:
    // 0x213664: 0xb04821  addu        $t1, $a1, $s0
    ctx->pc = 0x213664u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_213668:
    // 0x213668: 0x1234821  addu        $t1, $t1, $v1
    ctx->pc = 0x213668u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
label_21366c:
    // 0x21366c: 0x1215021  addu        $t2, $t1, $at
    ctx->pc = 0x21366cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 1)));
label_213670:
    // 0x213670: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x213670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_213674:
    // 0x213674: 0x8d490000  lw          $t1, 0x0($t2)
    ctx->pc = 0x213674u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_213678:
    // 0x213678: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x213678u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_21367c:
    // 0x21367c: 0xa94821  addu        $t1, $a1, $t1
    ctx->pc = 0x21367cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_213680:
    // 0x213680: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x213680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_213684:
    // 0x213684: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x213684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_213688:
    // 0x213688: 0x8d490000  lw          $t1, 0x0($t2)
    ctx->pc = 0x213688u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_21368c:
    // 0x21368c: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x21368cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_213690:
    // 0x213690: 0xa94821  addu        $t1, $a1, $t1
    ctx->pc = 0x213690u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_213694:
    // 0x213694: 0xc5200004  lwc1        $f0, 0x4($t1)
    ctx->pc = 0x213694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_213698:
    // 0x213698: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x213698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
label_21369c:
    // 0x21369c: 0x8d490000  lw          $t1, 0x0($t2)
    ctx->pc = 0x21369cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_2136a0:
    // 0x2136a0: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x2136a0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_2136a4:
    // 0x2136a4: 0xa94821  addu        $t1, $a1, $t1
    ctx->pc = 0x2136a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_2136a8:
    // 0x2136a8: 0xc5200008  lwc1        $f0, 0x8($t1)
    ctx->pc = 0x2136a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2136ac:
    // 0x2136ac: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x2136acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
label_2136b0:
    // 0x2136b0: 0x8d490000  lw          $t1, 0x0($t2)
    ctx->pc = 0x2136b0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_2136b4:
    // 0x2136b4: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x2136b4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_2136b8:
    // 0x2136b8: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x2136b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_2136bc:
    // 0x2136bc: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x2136bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2136c0:
    // 0x2136c0: 0x1500ffe1  bnez        $t0, . + 4 + (-0x1F << 2)
label_2136c4:
    if (ctx->pc == 0x2136C4u) {
        ctx->pc = 0x2136C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2136C0u;
        // 0x2136c4: 0xe4e0000c  swc1        $f0, 0xC($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2136C8u;
        goto label_2136c8;
    }
    ctx->pc = 0x2136C0u;
    {
        const bool branch_taken_0x2136c0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x2136C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2136C0u;
        // 0x2136c4: 0xe4e0000c  swc1        $f0, 0xC($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2136c0) {
            ctx->pc = 0x213648u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_213648;
        }
    }
    ctx->pc = 0x2136C8u;
label_2136c8:
    // 0x2136c8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2136c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2136cc:
    // 0x2136cc: 0xc066e08  jal         func_19B820
label_2136d0:
    if (ctx->pc == 0x2136D0u) {
        ctx->pc = 0x2136D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2136CCu;
        // 0x2136d0: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2136D4u;
        goto label_2136d4;
    }
    ctx->pc = 0x2136CCu;
    SET_GPR_U32(ctx, 31, 0x2136D4u);
    ctx->pc = 0x2136D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2136CCu;
    // 0x2136d0: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    { ctx->pc = 0x19b820; return; }
    ctx->pc = 0x2136D4u;
label_2136d4:
    // 0x2136d4: 0x27b300a0  addiu       $s3, $sp, 0xA0
    ctx->pc = 0x2136d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2136d8:
    // 0x2136d8: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x2136d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2136dc:
    // 0x2136dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2136dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2136e0:
    // 0x2136e0: 0xc066e08  jal         func_19B820
label_2136e4:
    if (ctx->pc == 0x2136E4u) {
        ctx->pc = 0x2136E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2136E0u;
        // 0x2136e4: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2136E8u;
        goto label_2136e8;
    }
    ctx->pc = 0x2136E0u;
    SET_GPR_U32(ctx, 31, 0x2136E8u);
    ctx->pc = 0x2136E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2136E0u;
    // 0x2136e4: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    { ctx->pc = 0x19b820; return; }
    ctx->pc = 0x2136E8u;
label_2136e8:
    // 0x2136e8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2136e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2136ec:
    // 0x2136ec: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2136ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_2136f0:
    // 0x2136f0: 0xc066d98  jal         func_19B660
label_2136f4:
    if (ctx->pc == 0x2136F4u) {
        ctx->pc = 0x2136F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2136F0u;
        // 0x2136f4: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2136F8u;
        goto label_2136f8;
    }
    ctx->pc = 0x2136F0u;
    SET_GPR_U32(ctx, 31, 0x2136F8u);
    ctx->pc = 0x2136F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2136F0u;
    // 0x2136f4: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B660u;
    { ctx->pc = 0x19b660; return; }
    ctx->pc = 0x2136F8u;
label_2136f8:
    // 0x2136f8: 0x8f8391b0  lw          $v1, -0x6E50($gp)
    ctx->pc = 0x2136f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939056)));
label_2136fc:
    // 0x2136fc: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2136fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_213700:
    // 0x213700: 0x3444b770  ori         $a0, $v0, 0xB770
    ctx->pc = 0x213700u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46960);
label_213704:
    // 0x213704: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x213704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_213708:
    // 0x213708: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x213708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_21370c:
    // 0x21370c: 0xc066daa  jal         func_19B6A8
label_213710:
    if (ctx->pc == 0x213710u) {
        ctx->pc = 0x213710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21370Cu;
        // 0x213710: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213714u;
        goto label_213714;
    }
    ctx->pc = 0x21370Cu;
    SET_GPR_U32(ctx, 31, 0x213714u);
    ctx->pc = 0x213710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21370Cu;
    // 0x213710: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B6A8u;
    { ctx->pc = 0x19b6a8; return; }
    ctx->pc = 0x213714u;
label_213714:
    // 0x213714: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x213714u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_213718:
    // 0x213718: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x213718u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_21371c:
    // 0x21371c: 0x2a4208c0  slti        $v0, $s2, 0x8C0
    ctx->pc = 0x21371cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2240) ? 1 : 0);
label_213720:
    // 0x213720: 0x1440ffc5  bnez        $v0, . + 4 + (-0x3B << 2)
label_213724:
    if (ctx->pc == 0x213724u) {
        ctx->pc = 0x213724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213720u;
        // 0x213724: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213728u;
        goto label_213728;
    }
    ctx->pc = 0x213720u;
    {
        const bool branch_taken_0x213720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x213724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213720u;
        // 0x213724: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213720) {
            ctx->pc = 0x213638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_213638;
        }
    }
    ctx->pc = 0x213728u;
label_213728:
    // 0x213728: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x213728u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21372c:
    // 0x21372c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21372cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_213730:
    // 0x213730: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x213730u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_213734:
    // 0x213734: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x213734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_213738:
    // 0x213738: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x213738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
label_21373c:
    // 0x21373c: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x21373cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
label_213740:
    // 0x213740: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x213740u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_213744:
    // 0x213744: 0xafa000b4  sw          $zero, 0xB4($sp)
    ctx->pc = 0x213744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 0));
label_213748:
    // 0x213748: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x213748u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21374c:
    // 0x21374c: 0xafa000b8  sw          $zero, 0xB8($sp)
    ctx->pc = 0x21374cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 0));
label_213750:
    // 0x213750: 0x8f8591b0  lw          $a1, -0x6E50($gp)
    ctx->pc = 0x213750u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939056)));
label_213754:
    // 0x213754: 0x2251021  addu        $v0, $s1, $a1
    ctx->pc = 0x213754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_213758:
    // 0x213758: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x213758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_21375c:
    // 0x21375c: 0x24427fff  addiu       $v0, $v0, 0x7FFF
    ctx->pc = 0x21375cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32767));
label_213760:
    // 0x213760: 0x98435ef1  lwr         $v1, 0x5EF1($v0)
    ctx->pc = 0x213760u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24305); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
label_213764:
    // 0x213764: 0x88435ef4  lwl         $v1, 0x5EF4($v0)
    ctx->pc = 0x213764u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24308); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
label_213768:
    // 0x213768: 0x4600008  bltz        $v1, . + 4 + (0x8 << 2)
label_21376c:
    if (ctx->pc == 0x21376Cu) {
        ctx->pc = 0x21376Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213768u;
        // 0x21376c: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213770u;
        goto label_213770;
    }
    ctx->pc = 0x213768u;
    {
        const bool branch_taken_0x213768 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x21376Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213768u;
        // 0x21376c: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213768) {
            ctx->pc = 0x21378Cu;
            goto label_21378c;
        }
    }
    ctx->pc = 0x213770u;
label_213770:
    // 0x213770: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x213770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_213774:
    // 0x213774: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x213774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_213778:
    // 0x213778: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x213778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_21377c:
    // 0x21377c: 0x3421b770  ori         $at, $at, 0xB770
    ctx->pc = 0x21377cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46960);
label_213780:
    // 0x213780: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x213780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_213784:
    // 0x213784: 0xc066e02  jal         func_19B808
label_213788:
    if (ctx->pc == 0x213788u) {
        ctx->pc = 0x213788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213784u;
        // 0x213788: 0x413021  addu        $a2, $v0, $at (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21378Cu;
        goto label_21378c;
    }
    ctx->pc = 0x213784u;
    SET_GPR_U32(ctx, 31, 0x21378Cu);
    ctx->pc = 0x213788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213784u;
    // 0x213788: 0x413021  addu        $a2, $v0, $at (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x21378Cu;
label_21378c:
    // 0x21378c: 0x0  nop
    ctx->pc = 0x21378cu;
    // NOP
label_213790:
    // 0x213790: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x213790u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_213794:
    // 0x213794: 0x2a820006  slti        $v0, $s4, 0x6
    ctx->pc = 0x213794u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)6) ? 1 : 0);
label_213798:
    // 0x213798: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
label_21379c:
    if (ctx->pc == 0x21379Cu) {
        ctx->pc = 0x21379Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213798u;
        // 0x21379c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2137A0u;
        goto label_2137a0;
    }
    ctx->pc = 0x213798u;
    {
        const bool branch_taken_0x213798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21379Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213798u;
        // 0x21379c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213798) {
            ctx->pc = 0x213750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_213750;
        }
    }
    ctx->pc = 0x2137A0u;
label_2137a0:
    // 0x2137a0: 0x8f8291b0  lw          $v0, -0x6E50($gp)
    ctx->pc = 0x2137a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939056)));
label_2137a4:
    // 0x2137a4: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x2137a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_2137a8:
    // 0x2137a8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2137a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_2137ac:
    // 0x2137ac: 0xc066daa  jal         func_19B6A8
label_2137b0:
    if (ctx->pc == 0x2137B0u) {
        ctx->pc = 0x2137B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2137ACu;
        // 0x2137b0: 0x24444a50  addiu       $a0, $v0, 0x4A50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 19024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2137B4u;
        goto label_2137b4;
    }
    ctx->pc = 0x2137ACu;
    SET_GPR_U32(ctx, 31, 0x2137B4u);
    ctx->pc = 0x2137B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2137ACu;
    // 0x2137b0: 0x24444a50  addiu       $a0, $v0, 0x4A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 19024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B6A8u;
    { ctx->pc = 0x19b6a8; return; }
    ctx->pc = 0x2137B4u;
label_2137b4:
    // 0x2137b4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2137b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2137b8:
    // 0x2137b8: 0x26310018  addiu       $s1, $s1, 0x18
    ctx->pc = 0x2137b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
label_2137bc:
    // 0x2137bc: 0x2a6304a5  slti        $v1, $s3, 0x4A5
    ctx->pc = 0x2137bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)1189) ? 1 : 0);
label_2137c0:
    // 0x2137c0: 0x1460ffdc  bnez        $v1, . + 4 + (-0x24 << 2)
label_2137c4:
    if (ctx->pc == 0x2137C4u) {
        ctx->pc = 0x2137C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2137C0u;
        // 0x2137c4: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2137C8u;
        goto label_2137c8;
    }
    ctx->pc = 0x2137C0u;
    {
        const bool branch_taken_0x2137c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2137C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2137C0u;
        // 0x2137c4: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2137c0) {
            ctx->pc = 0x213734u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_213734;
        }
    }
    ctx->pc = 0x2137C8u;
label_2137c8:
    // 0x2137c8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2137c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2137cc:
    // 0x2137cc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2137ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2137d0:
    // 0x2137d0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2137d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2137d4:
    // 0x2137d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2137d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2137d8:
    // 0x2137d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2137d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2137dc:
    // 0x2137dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2137dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2137e0:
    // 0x2137e0: 0x3e00008  jr          $ra
label_2137e4:
    if (ctx->pc == 0x2137E4u) {
        ctx->pc = 0x2137E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2137E0u;
        // 0x2137e4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2137E8u;
        goto label_2137e8;
    }
    ctx->pc = 0x2137E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2137E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2137E0u;
        // 0x2137e4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2137E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2137E8u;
label_2137e8:
    // 0x2137e8: 0x0  nop
    ctx->pc = 0x2137e8u;
    // NOP
label_2137ec:
    // 0x2137ec: 0x0  nop
    ctx->pc = 0x2137ecu;
    // NOP
label_2137f0:
    // 0x2137f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2137f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2137f4:
    // 0x2137f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2137f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2137f8:
    // 0x2137f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2137f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2137fc:
    // 0x2137fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2137fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_213800:
    // 0x213800: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x213800u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_213804:
    // 0x213804: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x213804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_213808:
    // 0x213808: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x213808u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21380c:
    // 0x21380c: 0x278291b8  addiu       $v0, $gp, -0x6E48
    ctx->pc = 0x21380cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939064));
label_213810:
    // 0x213810: 0x240506d0  addiu       $a1, $zero, 0x6D0
    ctx->pc = 0x213810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1744));
label_213814:
    // 0x213814: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x213814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_213818:
    // 0x213818: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x213818u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21381c:
    // 0x21381c: 0xc08dc56  jal         func_237158
label_213820:
    if (ctx->pc == 0x213820u) {
        ctx->pc = 0x213820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21381Cu;
        // 0x213820: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213824u;
        goto label_213824;
    }
    ctx->pc = 0x21381Cu;
    SET_GPR_U32(ctx, 31, 0x213824u);
    ctx->pc = 0x213820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21381Cu;
    // 0x213820: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237158u;
    { ctx->pc = 0x237158; return; }
    ctx->pc = 0x213824u;
label_213824:
    // 0x213824: 0x1600000c  bnez        $s0, . + 4 + (0xC << 2)
label_213828:
    if (ctx->pc == 0x213828u) {
        ctx->pc = 0x21382Cu;
        goto label_21382c;
    }
    ctx->pc = 0x213824u;
    {
        const bool branch_taken_0x213824 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x213824) {
            ctx->pc = 0x213858u;
            goto label_213858;
        }
    }
    ctx->pc = 0x21382Cu;
label_21382c:
    // 0x21382c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x21382cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_213830:
    // 0x213830: 0x3c044140  lui         $a0, 0x4140
    ctx->pc = 0x213830u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16704 << 16));
label_213834:
    // 0x213834: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x213834u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_213838:
    // 0x213838: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x213838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21383c:
    // 0x21383c: 0xae240008  sw          $a0, 0x8($s1)
    ctx->pc = 0x21383cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
label_213840:
    // 0x213840: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x213840u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
label_213844:
    // 0x213844: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x213844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_213848:
    // 0x213848: 0x24030300  addiu       $v1, $zero, 0x300
    ctx->pc = 0x213848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
label_21384c:
    // 0x21384c: 0xae240010  sw          $a0, 0x10($s1)
    ctx->pc = 0x21384cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 4));
label_213850:
    // 0x213850: 0x1000002b  b           . + 4 + (0x2B << 2)
label_213854:
    if (ctx->pc == 0x213854u) {
        ctx->pc = 0x213854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213850u;
        // 0x213854: 0xae230014  sw          $v1, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213858u;
        goto label_213858;
    }
    ctx->pc = 0x213850u;
    {
        const bool branch_taken_0x213850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213850u;
        // 0x213854: 0xae230014  sw          $v1, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213850) {
            ctx->pc = 0x213900u;
            goto label_213900;
        }
    }
    ctx->pc = 0x213858u;
label_213858:
    // 0x213858: 0xc08f0cc  jal         func_23C330
label_21385c:
    if (ctx->pc == 0x21385Cu) {
        ctx->pc = 0x213860u;
        goto label_213860;
    }
    ctx->pc = 0x213858u;
    SET_GPR_U32(ctx, 31, 0x213860u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x213860u;
label_213860:
    // 0x213860: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x213860u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_213864:
    // 0x213864: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x213864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_213868:
    // 0x213868: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x213868u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_21386c:
    // 0x21386c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x21386cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_213870:
    // 0x213870: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x213870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
label_213874:
    // 0x213874: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x213874u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_213878:
    // 0x213878: 0x0  nop
    ctx->pc = 0x213878u;
    // NOP
label_21387c:
    // 0x21387c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x21387cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_213880:
    // 0x213880: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x213880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
label_213884:
    // 0x213884: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x213884u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
label_213888:
    // 0x213888: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x213888u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_21388c:
    // 0x21388c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x21388cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_213890:
    // 0x213890: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x213890u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_213894:
    // 0x213894: 0x0  nop
    ctx->pc = 0x213894u;
    // NOP
label_213898:
    // 0x213898: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x213898u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_21389c:
    // 0x21389c: 0xc08f0cc  jal         func_23C330
label_2138a0:
    if (ctx->pc == 0x2138A0u) {
        ctx->pc = 0x2138A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21389Cu;
        // 0x2138a0: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2138A4u;
        goto label_2138a4;
    }
    ctx->pc = 0x21389Cu;
    SET_GPR_U32(ctx, 31, 0x2138A4u);
    ctx->pc = 0x2138A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21389Cu;
    // 0x2138a0: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x2138A4u;
label_2138a4:
    // 0x2138a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2138a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2138a8:
    // 0x2138a8: 0x3c0343c8  lui         $v1, 0x43C8
    ctx->pc = 0x2138a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17352 << 16));
label_2138ac:
    // 0x2138ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2138acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2138b0:
    // 0x2138b0: 0x3c084f00  lui         $t0, 0x4F00
    ctx->pc = 0x2138b0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20224 << 16));
label_2138b4:
    // 0x2138b4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2138b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2138b8:
    // 0x2138b8: 0x3c074348  lui         $a3, 0x4348
    ctx->pc = 0x2138b8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17224 << 16));
label_2138bc:
    // 0x2138bc: 0x3c0641c0  lui         $a2, 0x41C0
    ctx->pc = 0x2138bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16832 << 16));
label_2138c0:
    // 0x2138c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2138c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2138c4:
    // 0x2138c4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2138c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2138c8:
    // 0x2138c8: 0x24030300  addiu       $v1, $zero, 0x300
    ctx->pc = 0x2138c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
label_2138cc:
    // 0x2138cc: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x2138ccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2138d0:
    // 0x2138d0: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x2138d0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2138d4:
    // 0x2138d4: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2138d4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2138d8:
    // 0x2138d8: 0x0  nop
    ctx->pc = 0x2138d8u;
    // NOP
label_2138dc:
    // 0x2138dc: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x2138dcu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_2138e0:
    // 0x2138e0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2138e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2138e4:
    // 0x2138e4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2138e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2138e8:
    // 0x2138e8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2138e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2138ec:
    // 0x2138ec: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x2138ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_2138f0:
    // 0x2138f0: 0xae260008  sw          $a2, 0x8($s1)
    ctx->pc = 0x2138f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 6));
label_2138f4:
    // 0x2138f4: 0xae25000c  sw          $a1, 0xC($s1)
    ctx->pc = 0x2138f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 5));
label_2138f8:
    // 0x2138f8: 0xae240010  sw          $a0, 0x10($s1)
    ctx->pc = 0x2138f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 4));
label_2138fc:
    // 0x2138fc: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x2138fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
label_213900:
    // 0x213900: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x213900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_213904:
    // 0x213904: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x213904u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
label_213908:
    // 0x213908: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x213908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21390c:
    // 0x21390c: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x21390cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
label_213910:
    // 0x213910: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x213910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_213914:
    // 0x213914: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x213914u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
label_213918:
    // 0x213918: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x213918u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
label_21391c:
    // 0x21391c: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x21391cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_213920:
    // 0x213920: 0x2253021  addu        $a2, $s1, $a1
    ctx->pc = 0x213920u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_213924:
    // 0x213924: 0xacc00028  sw          $zero, 0x28($a2)
    ctx->pc = 0x213924u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 0));
label_213928:
    // 0x213928: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x213928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_21392c:
    // 0x21392c: 0xacc0002c  sw          $zero, 0x2C($a2)
    ctx->pc = 0x21392cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 0));
label_213930:
    // 0x213930: 0x28830080  slti        $v1, $a0, 0x80
    ctx->pc = 0x213930u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)128) ? 1 : 0);
label_213934:
    // 0x213934: 0xacc00030  sw          $zero, 0x30($a2)
    ctx->pc = 0x213934u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 0));
label_213938:
    // 0x213938: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x213938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_21393c:
    // 0x21393c: 0xacc00034  sw          $zero, 0x34($a2)
    ctx->pc = 0x21393cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 0));
label_213940:
    // 0x213940: 0xacc00038  sw          $zero, 0x38($a2)
    ctx->pc = 0x213940u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 0));
label_213944:
    // 0x213944: 0xacc0003c  sw          $zero, 0x3C($a2)
    ctx->pc = 0x213944u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 0));
label_213948:
    // 0x213948: 0xacc00040  sw          $zero, 0x40($a2)
    ctx->pc = 0x213948u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 64), GPR_U32(ctx, 0));
label_21394c:
    // 0x21394c: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_213950:
    if (ctx->pc == 0x213950u) {
        ctx->pc = 0x213950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21394Cu;
        // 0x213950: 0xacc00044  sw          $zero, 0x44($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213954u;
        goto label_213954;
    }
    ctx->pc = 0x21394Cu;
    {
        const bool branch_taken_0x21394c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x213950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21394Cu;
        // 0x213950: 0xacc00044  sw          $zero, 0x44($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21394c) {
            ctx->pc = 0x213920u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_213920;
        }
    }
    ctx->pc = 0x213954u;
label_213954:
    // 0x213954: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x213954u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_213958:
    // 0x213958: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x213958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21395c:
    // 0x21395c: 0x8f8491b0  lw          $a0, -0x6E50($gp)
    ctx->pc = 0x21395cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939056)));
label_213960:
    // 0x213960: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x213960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_213964:
    // 0x213964: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x213964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_213968:
    // 0x213968: 0x0  nop
    ctx->pc = 0x213968u;
    // NOP
label_21396c:
    // 0x21396c: 0x0  nop
    ctx->pc = 0x21396cu;
    // NOP
label_213970:
    // 0x213970: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x213970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_213974:
    // 0x213974: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x213974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_213978:
    // 0x213978: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x213978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_21397c:
    // 0x21397c: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x21397cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_213980:
    // 0x213980: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x213980u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_213984:
    // 0x213984: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x213984u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_213988:
    // 0x213988: 0x4603189c  madd.s      $f2, $f3, $f3
    ctx->pc = 0x213988u;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3]));
label_21398c:
    // 0x21398c: 0x46020084  c1          0x20084
    ctx->pc = 0x21398cu;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
label_213990:
    // 0x213990: 0x0  nop
    ctx->pc = 0x213990u;
    // NOP
label_213994:
    // 0x213994: 0x0  nop
    ctx->pc = 0x213994u;
    // NOP
label_213998:
    // 0x213998: 0x46061036  c.le.s      $f2, $f6
    ctx->pc = 0x213998u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_21399c:
    // 0x21399c: 0x0  nop
    ctx->pc = 0x21399cu;
    // NOP
label_2139a0:
    // 0x2139a0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_2139a4:
    if (ctx->pc == 0x2139A4u) {
        ctx->pc = 0x2139A8u;
        goto label_2139a8;
    }
    ctx->pc = 0x2139A0u;
    {
        const bool branch_taken_0x2139a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2139a0) {
            ctx->pc = 0x2139ACu;
            goto label_2139ac;
        }
    }
    ctx->pc = 0x2139A8u;
label_2139a8:
    // 0x2139a8: 0x46001186  mov.s       $f6, $f2
    ctx->pc = 0x2139a8u;
    ctx->f[6] = FPU_MOV_S(ctx->f[2]);
label_2139ac:
    // 0x2139ac: 0x0  nop
    ctx->pc = 0x2139acu;
    // NOP
label_2139b0:
    // 0x2139b0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2139b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_2139b4:
    // 0x2139b4: 0x28c304a5  slti        $v1, $a2, 0x4A5
    ctx->pc = 0x2139b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)1189) ? 1 : 0);
label_2139b8:
    // 0x2139b8: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
label_2139bc:
    if (ctx->pc == 0x2139BCu) {
        ctx->pc = 0x2139BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2139B8u;
        // 0x2139bc: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2139C0u;
        goto label_2139c0;
    }
    ctx->pc = 0x2139B8u;
    {
        const bool branch_taken_0x2139b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2139BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2139B8u;
        // 0x2139bc: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2139b8) {
            ctx->pc = 0x21396Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21396c;
        }
    }
    ctx->pc = 0x2139C0u;
label_2139c0:
    // 0x2139c0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2139c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_2139c4:
    // 0x2139c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2139c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2139c8:
    // 0x2139c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2139c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2139cc:
    // 0x2139cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2139ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2139d0:
    // 0x2139d0: 0x46003180  add.s       $f6, $f6, $f0
    ctx->pc = 0x2139d0u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
label_2139d4:
    // 0x2139d4: 0x3c064300  lui         $a2, 0x4300
    ctx->pc = 0x2139d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17152 << 16));
label_2139d8:
    // 0x2139d8: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2139d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_2139dc:
    // 0x2139dc: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x2139dcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2139e0:
    // 0x2139e0: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x2139e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
label_2139e4:
    // 0x2139e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2139e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2139e8:
    // 0x2139e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2139e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2139ec:
    // 0x2139ec: 0x0  nop
    ctx->pc = 0x2139ecu;
    // NOP
label_2139f0:
    // 0x2139f0: 0x8f8391b0  lw          $v1, -0x6E50($gp)
    ctx->pc = 0x2139f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939056)));
label_2139f4:
    // 0x2139f4: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x2139f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2139f8:
    // 0x2139f8: 0xc6230004  lwc1        $f3, 0x4($s1)
    ctx->pc = 0x2139f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2139fc:
    // 0x2139fc: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2139fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_213a00:
    // 0x213a00: 0xc4650000  lwc1        $f5, 0x0($v1)
    ctx->pc = 0x213a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_213a04:
    // 0x213a04: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x213a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_213a08:
    // 0x213a08: 0x46022941  sub.s       $f5, $f5, $f2
    ctx->pc = 0x213a08u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
label_213a0c:
    // 0x213a0c: 0x46032081  sub.s       $f2, $f4, $f3
    ctx->pc = 0x213a0cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
label_213a10:
    // 0x213a10: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x213a10u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_213a14:
    // 0x213a14: 0x4605289c  madd.s      $f2, $f5, $f5
    ctx->pc = 0x213a14u;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[5], ctx->f[5]));
label_213a18:
    // 0x213a18: 0x46020084  c1          0x20084
    ctx->pc = 0x213a18u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
label_213a1c:
    // 0x213a1c: 0x46061083  div.s       $f2, $f2, $f6
    ctx->pc = 0x213a1cu;
    if (ctx->f[6] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[6];
label_213a20:
    // 0x213a20: 0x0  nop
    ctx->pc = 0x213a20u;
    // NOP
label_213a24:
    // 0x213a24: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x213a24u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_213a28:
    // 0x213a28: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x213a28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_213a2c:
    // 0x213a2c: 0x0  nop
    ctx->pc = 0x213a2cu;
    // NOP
label_213a30:
    // 0x213a30: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_213a34:
    if (ctx->pc == 0x213A34u) {
        ctx->pc = 0x213A38u;
        goto label_213a38;
    }
    ctx->pc = 0x213A30u;
    {
        const bool branch_taken_0x213a30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x213a30) {
            ctx->pc = 0x213A48u;
            goto label_213a48;
        }
    }
    ctx->pc = 0x213A38u;
label_213a38:
    // 0x213a38: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x213a38u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_213a3c:
    // 0x213a3c: 0x44061000  mfc1        $a2, $f2
    ctx->pc = 0x213a3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_213a40:
    // 0x213a40: 0x10000007  b           . + 4 + (0x7 << 2)
label_213a44:
    if (ctx->pc == 0x213A44u) {
        ctx->pc = 0x213A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213A40u;
        // 0x213a44: 0x2281821  addu        $v1, $s1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x213A48u;
        goto label_213a48;
    }
    ctx->pc = 0x213A40u;
    {
        const bool branch_taken_0x213a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213A40u;
        // 0x213a44: 0x2281821  addu        $v1, $s1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213a40) {
            ctx->pc = 0x213A60u;
            { ctx->pc = 0x213a60; return; }
        }
    }
    ctx->pc = 0x213A48u;
label_213a48:
    // 0x213a48: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x213a48u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_213a4c:
    // 0x213a4c: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x213a4cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    ctx->pc = 0x213a50u;
    return;
}

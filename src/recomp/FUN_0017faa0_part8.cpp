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


void FUN_0017faa0_part8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x183150u: goto label_183150;
        case 0x183154u: goto label_183154;
        case 0x183158u: goto label_183158;
        case 0x18315cu: goto label_18315c;
        case 0x183160u: goto label_183160;
        case 0x183164u: goto label_183164;
        case 0x183168u: goto label_183168;
        case 0x18316cu: goto label_18316c;
        case 0x183170u: goto label_183170;
        case 0x183174u: goto label_183174;
        case 0x183178u: goto label_183178;
        case 0x18317cu: goto label_18317c;
        case 0x183180u: goto label_183180;
        case 0x183184u: goto label_183184;
        case 0x183188u: goto label_183188;
        case 0x18318cu: goto label_18318c;
        case 0x183190u: goto label_183190;
        case 0x183194u: goto label_183194;
        case 0x183198u: goto label_183198;
        case 0x18319cu: goto label_18319c;
        case 0x1831a0u: goto label_1831a0;
        case 0x1831a4u: goto label_1831a4;
        case 0x1831a8u: goto label_1831a8;
        case 0x1831acu: goto label_1831ac;
        case 0x1831b0u: goto label_1831b0;
        case 0x1831b4u: goto label_1831b4;
        case 0x1831b8u: goto label_1831b8;
        case 0x1831bcu: goto label_1831bc;
        case 0x1831c0u: goto label_1831c0;
        case 0x1831c4u: goto label_1831c4;
        case 0x1831c8u: goto label_1831c8;
        case 0x1831ccu: goto label_1831cc;
        case 0x1831d0u: goto label_1831d0;
        case 0x1831d4u: goto label_1831d4;
        case 0x1831d8u: goto label_1831d8;
        case 0x1831dcu: goto label_1831dc;
        case 0x1831e0u: goto label_1831e0;
        case 0x1831e4u: goto label_1831e4;
        case 0x1831e8u: goto label_1831e8;
        case 0x1831ecu: goto label_1831ec;
        case 0x1831f0u: goto label_1831f0;
        case 0x1831f4u: goto label_1831f4;
        case 0x1831f8u: goto label_1831f8;
        case 0x1831fcu: goto label_1831fc;
        case 0x183200u: goto label_183200;
        case 0x183204u: goto label_183204;
        case 0x183208u: goto label_183208;
        case 0x18320cu: goto label_18320c;
        case 0x183210u: goto label_183210;
        case 0x183214u: goto label_183214;
        case 0x183218u: goto label_183218;
        case 0x18321cu: goto label_18321c;
        case 0x183220u: goto label_183220;
        case 0x183224u: goto label_183224;
        case 0x183228u: goto label_183228;
        case 0x18322cu: goto label_18322c;
        case 0x183230u: goto label_183230;
        case 0x183234u: goto label_183234;
        case 0x183238u: goto label_183238;
        case 0x18323cu: goto label_18323c;
        case 0x183240u: goto label_183240;
        case 0x183244u: goto label_183244;
        case 0x183248u: goto label_183248;
        case 0x18324cu: goto label_18324c;
        case 0x183250u: goto label_183250;
        case 0x183254u: goto label_183254;
        case 0x183258u: goto label_183258;
        case 0x18325cu: goto label_18325c;
        case 0x183260u: goto label_183260;
        case 0x183264u: goto label_183264;
        case 0x183268u: goto label_183268;
        case 0x18326cu: goto label_18326c;
        case 0x183270u: goto label_183270;
        case 0x183274u: goto label_183274;
        case 0x183278u: goto label_183278;
        case 0x18327cu: goto label_18327c;
        case 0x183280u: goto label_183280;
        case 0x183284u: goto label_183284;
        case 0x183288u: goto label_183288;
        case 0x18328cu: goto label_18328c;
        case 0x183290u: goto label_183290;
        case 0x183294u: goto label_183294;
        case 0x183298u: goto label_183298;
        case 0x18329cu: goto label_18329c;
        case 0x1832a0u: goto label_1832a0;
        case 0x1832a4u: goto label_1832a4;
        case 0x1832a8u: goto label_1832a8;
        case 0x1832acu: goto label_1832ac;
        case 0x1832b0u: goto label_1832b0;
        case 0x1832b4u: goto label_1832b4;
        case 0x1832b8u: goto label_1832b8;
        case 0x1832bcu: goto label_1832bc;
        case 0x1832c0u: goto label_1832c0;
        case 0x1832c4u: goto label_1832c4;
        case 0x1832c8u: goto label_1832c8;
        case 0x1832ccu: goto label_1832cc;
        case 0x1832d0u: goto label_1832d0;
        case 0x1832d4u: goto label_1832d4;
        case 0x1832d8u: goto label_1832d8;
        case 0x1832dcu: goto label_1832dc;
        case 0x1832e0u: goto label_1832e0;
        case 0x1832e4u: goto label_1832e4;
        case 0x1832e8u: goto label_1832e8;
        case 0x1832ecu: goto label_1832ec;
        case 0x1832f0u: goto label_1832f0;
        case 0x1832f4u: goto label_1832f4;
        case 0x1832f8u: goto label_1832f8;
        case 0x1832fcu: goto label_1832fc;
        case 0x183300u: goto label_183300;
        case 0x183304u: goto label_183304;
        case 0x183308u: goto label_183308;
        case 0x18330cu: goto label_18330c;
        case 0x183310u: goto label_183310;
        case 0x183314u: goto label_183314;
        case 0x183318u: goto label_183318;
        case 0x18331cu: goto label_18331c;
        case 0x183320u: goto label_183320;
        case 0x183324u: goto label_183324;
        case 0x183328u: goto label_183328;
        case 0x18332cu: goto label_18332c;
        case 0x183330u: goto label_183330;
        case 0x183334u: goto label_183334;
        case 0x183338u: goto label_183338;
        case 0x18333cu: goto label_18333c;
        case 0x183340u: goto label_183340;
        case 0x183344u: goto label_183344;
        case 0x183348u: goto label_183348;
        case 0x18334cu: goto label_18334c;
        case 0x183350u: goto label_183350;
        case 0x183354u: goto label_183354;
        case 0x183358u: goto label_183358;
        case 0x18335cu: goto label_18335c;
        case 0x183360u: goto label_183360;
        case 0x183364u: goto label_183364;
        case 0x183368u: goto label_183368;
        case 0x18336cu: goto label_18336c;
        case 0x183370u: goto label_183370;
        case 0x183374u: goto label_183374;
        case 0x183378u: goto label_183378;
        case 0x18337cu: goto label_18337c;
        case 0x183380u: goto label_183380;
        case 0x183384u: goto label_183384;
        case 0x183388u: goto label_183388;
        case 0x18338cu: goto label_18338c;
        case 0x183390u: goto label_183390;
        case 0x183394u: goto label_183394;
        case 0x183398u: goto label_183398;
        case 0x18339cu: goto label_18339c;
        case 0x1833a0u: goto label_1833a0;
        case 0x1833a4u: goto label_1833a4;
        case 0x1833a8u: goto label_1833a8;
        case 0x1833acu: goto label_1833ac;
        case 0x1833b0u: goto label_1833b0;
        case 0x1833b4u: goto label_1833b4;
        case 0x1833b8u: goto label_1833b8;
        case 0x1833bcu: goto label_1833bc;
        case 0x1833c0u: goto label_1833c0;
        case 0x1833c4u: goto label_1833c4;
        case 0x1833c8u: goto label_1833c8;
        case 0x1833ccu: goto label_1833cc;
        case 0x1833d0u: goto label_1833d0;
        case 0x1833d4u: goto label_1833d4;
        case 0x1833d8u: goto label_1833d8;
        case 0x1833dcu: goto label_1833dc;
        case 0x1833e0u: goto label_1833e0;
        case 0x1833e4u: goto label_1833e4;
        case 0x1833e8u: goto label_1833e8;
        case 0x1833ecu: goto label_1833ec;
        case 0x1833f0u: goto label_1833f0;
        case 0x1833f4u: goto label_1833f4;
        case 0x1833f8u: goto label_1833f8;
        case 0x1833fcu: goto label_1833fc;
        case 0x183400u: goto label_183400;
        case 0x183404u: goto label_183404;
        case 0x183408u: goto label_183408;
        case 0x18340cu: goto label_18340c;
        case 0x183410u: goto label_183410;
        case 0x183414u: goto label_183414;
        case 0x183418u: goto label_183418;
        case 0x18341cu: goto label_18341c;
        case 0x183420u: goto label_183420;
        case 0x183424u: goto label_183424;
        case 0x183428u: goto label_183428;
        case 0x18342cu: goto label_18342c;
        case 0x183430u: goto label_183430;
        case 0x183434u: goto label_183434;
        case 0x183438u: goto label_183438;
        case 0x18343cu: goto label_18343c;
        case 0x183440u: goto label_183440;
        case 0x183444u: goto label_183444;
        case 0x183448u: goto label_183448;
        case 0x18344cu: goto label_18344c;
        case 0x183450u: goto label_183450;
        case 0x183454u: goto label_183454;
        case 0x183458u: goto label_183458;
        case 0x18345cu: goto label_18345c;
        case 0x183460u: goto label_183460;
        case 0x183464u: goto label_183464;
        case 0x183468u: goto label_183468;
        case 0x18346cu: goto label_18346c;
        case 0x183470u: goto label_183470;
        case 0x183474u: goto label_183474;
        case 0x183478u: goto label_183478;
        case 0x18347cu: goto label_18347c;
        case 0x183480u: goto label_183480;
        case 0x183484u: goto label_183484;
        case 0x183488u: goto label_183488;
        case 0x18348cu: goto label_18348c;
        case 0x183490u: goto label_183490;
        case 0x183494u: goto label_183494;
        case 0x183498u: goto label_183498;
        case 0x18349cu: goto label_18349c;
        case 0x1834a0u: goto label_1834a0;
        case 0x1834a4u: goto label_1834a4;
        case 0x1834a8u: goto label_1834a8;
        case 0x1834acu: goto label_1834ac;
        case 0x1834b0u: goto label_1834b0;
        case 0x1834b4u: goto label_1834b4;
        case 0x1834b8u: goto label_1834b8;
        case 0x1834bcu: goto label_1834bc;
        case 0x1834c0u: goto label_1834c0;
        case 0x1834c4u: goto label_1834c4;
        case 0x1834c8u: goto label_1834c8;
        case 0x1834ccu: goto label_1834cc;
        case 0x1834d0u: goto label_1834d0;
        case 0x1834d4u: goto label_1834d4;
        case 0x1834d8u: goto label_1834d8;
        case 0x1834dcu: goto label_1834dc;
        case 0x1834e0u: goto label_1834e0;
        case 0x1834e4u: goto label_1834e4;
        case 0x1834e8u: goto label_1834e8;
        case 0x1834ecu: goto label_1834ec;
        case 0x1834f0u: goto label_1834f0;
        case 0x1834f4u: goto label_1834f4;
        case 0x1834f8u: goto label_1834f8;
        case 0x1834fcu: goto label_1834fc;
        case 0x183500u: goto label_183500;
        case 0x183504u: goto label_183504;
        case 0x183508u: goto label_183508;
        case 0x18350cu: goto label_18350c;
        case 0x183510u: goto label_183510;
        case 0x183514u: goto label_183514;
        case 0x183518u: goto label_183518;
        case 0x18351cu: goto label_18351c;
        case 0x183520u: goto label_183520;
        case 0x183524u: goto label_183524;
        case 0x183528u: goto label_183528;
        case 0x18352cu: goto label_18352c;
        case 0x183530u: goto label_183530;
        case 0x183534u: goto label_183534;
        case 0x183538u: goto label_183538;
        case 0x18353cu: goto label_18353c;
        case 0x183540u: goto label_183540;
        case 0x183544u: goto label_183544;
        case 0x183548u: goto label_183548;
        case 0x18354cu: goto label_18354c;
        case 0x183550u: goto label_183550;
        case 0x183554u: goto label_183554;
        case 0x183558u: goto label_183558;
        case 0x18355cu: goto label_18355c;
        case 0x183560u: goto label_183560;
        case 0x183564u: goto label_183564;
        case 0x183568u: goto label_183568;
        case 0x18356cu: goto label_18356c;
        case 0x183570u: goto label_183570;
        case 0x183574u: goto label_183574;
        case 0x183578u: goto label_183578;
        case 0x18357cu: goto label_18357c;
        case 0x183580u: goto label_183580;
        case 0x183584u: goto label_183584;
        case 0x183588u: goto label_183588;
        case 0x18358cu: goto label_18358c;
        case 0x183590u: goto label_183590;
        case 0x183594u: goto label_183594;
        case 0x183598u: goto label_183598;
        case 0x18359cu: goto label_18359c;
        case 0x1835a0u: goto label_1835a0;
        case 0x1835a4u: goto label_1835a4;
        case 0x1835a8u: goto label_1835a8;
        case 0x1835acu: goto label_1835ac;
        case 0x1835b0u: goto label_1835b0;
        case 0x1835b4u: goto label_1835b4;
        case 0x1835b8u: goto label_1835b8;
        case 0x1835bcu: goto label_1835bc;
        case 0x1835c0u: goto label_1835c0;
        case 0x1835c4u: goto label_1835c4;
        case 0x1835c8u: goto label_1835c8;
        case 0x1835ccu: goto label_1835cc;
        case 0x1835d0u: goto label_1835d0;
        case 0x1835d4u: goto label_1835d4;
        case 0x1835d8u: goto label_1835d8;
        case 0x1835dcu: goto label_1835dc;
        case 0x1835e0u: goto label_1835e0;
        case 0x1835e4u: goto label_1835e4;
        case 0x1835e8u: goto label_1835e8;
        case 0x1835ecu: goto label_1835ec;
        case 0x1835f0u: goto label_1835f0;
        case 0x1835f4u: goto label_1835f4;
        case 0x1835f8u: goto label_1835f8;
        case 0x1835fcu: goto label_1835fc;
        case 0x183600u: goto label_183600;
        case 0x183604u: goto label_183604;
        case 0x183608u: goto label_183608;
        case 0x18360cu: goto label_18360c;
        case 0x183610u: goto label_183610;
        case 0x183614u: goto label_183614;
        case 0x183618u: goto label_183618;
        case 0x18361cu: goto label_18361c;
        case 0x183620u: goto label_183620;
        case 0x183624u: goto label_183624;
        case 0x183628u: goto label_183628;
        case 0x18362cu: goto label_18362c;
        case 0x183630u: goto label_183630;
        case 0x183634u: goto label_183634;
        case 0x183638u: goto label_183638;
        case 0x18363cu: goto label_18363c;
        case 0x183640u: goto label_183640;
        case 0x183644u: goto label_183644;
        case 0x183648u: goto label_183648;
        case 0x18364cu: goto label_18364c;
        case 0x183650u: goto label_183650;
        case 0x183654u: goto label_183654;
        case 0x183658u: goto label_183658;
        case 0x18365cu: goto label_18365c;
        case 0x183660u: goto label_183660;
        case 0x183664u: goto label_183664;
        case 0x183668u: goto label_183668;
        case 0x18366cu: goto label_18366c;
        case 0x183670u: goto label_183670;
        case 0x183674u: goto label_183674;
        case 0x183678u: goto label_183678;
        case 0x18367cu: goto label_18367c;
        case 0x183680u: goto label_183680;
        case 0x183684u: goto label_183684;
        case 0x183688u: goto label_183688;
        case 0x18368cu: goto label_18368c;
        case 0x183690u: goto label_183690;
        case 0x183694u: goto label_183694;
        case 0x183698u: goto label_183698;
        case 0x18369cu: goto label_18369c;
        case 0x1836a0u: goto label_1836a0;
        case 0x1836a4u: goto label_1836a4;
        case 0x1836a8u: goto label_1836a8;
        case 0x1836acu: goto label_1836ac;
        case 0x1836b0u: goto label_1836b0;
        case 0x1836b4u: goto label_1836b4;
        case 0x1836b8u: goto label_1836b8;
        case 0x1836bcu: goto label_1836bc;
        case 0x1836c0u: goto label_1836c0;
        case 0x1836c4u: goto label_1836c4;
        case 0x1836c8u: goto label_1836c8;
        case 0x1836ccu: goto label_1836cc;
        case 0x1836d0u: goto label_1836d0;
        case 0x1836d4u: goto label_1836d4;
        case 0x1836d8u: goto label_1836d8;
        case 0x1836dcu: goto label_1836dc;
        case 0x1836e0u: goto label_1836e0;
        case 0x1836e4u: goto label_1836e4;
        case 0x1836e8u: goto label_1836e8;
        case 0x1836ecu: goto label_1836ec;
        case 0x1836f0u: goto label_1836f0;
        case 0x1836f4u: goto label_1836f4;
        case 0x1836f8u: goto label_1836f8;
        case 0x1836fcu: goto label_1836fc;
        case 0x183700u: goto label_183700;
        case 0x183704u: goto label_183704;
        case 0x183708u: goto label_183708;
        case 0x18370cu: goto label_18370c;
        case 0x183710u: goto label_183710;
        case 0x183714u: goto label_183714;
        case 0x183718u: goto label_183718;
        case 0x18371cu: goto label_18371c;
        case 0x183720u: goto label_183720;
        case 0x183724u: goto label_183724;
        case 0x183728u: goto label_183728;
        case 0x18372cu: goto label_18372c;
        case 0x183730u: goto label_183730;
        case 0x183734u: goto label_183734;
        case 0x183738u: goto label_183738;
        case 0x18373cu: goto label_18373c;
        case 0x183740u: goto label_183740;
        case 0x183744u: goto label_183744;
        case 0x183748u: goto label_183748;
        case 0x18374cu: goto label_18374c;
        case 0x183750u: goto label_183750;
        case 0x183754u: goto label_183754;
        case 0x183758u: goto label_183758;
        case 0x18375cu: goto label_18375c;
        case 0x183760u: goto label_183760;
        case 0x183764u: goto label_183764;
        case 0x183768u: goto label_183768;
        case 0x18376cu: goto label_18376c;
        case 0x183770u: goto label_183770;
        case 0x183774u: goto label_183774;
        case 0x183778u: goto label_183778;
        case 0x18377cu: goto label_18377c;
        case 0x183780u: goto label_183780;
        case 0x183784u: goto label_183784;
        case 0x183788u: goto label_183788;
        case 0x18378cu: goto label_18378c;
        case 0x183790u: goto label_183790;
        case 0x183794u: goto label_183794;
        case 0x183798u: goto label_183798;
        case 0x18379cu: goto label_18379c;
        case 0x1837a0u: goto label_1837a0;
        case 0x1837a4u: goto label_1837a4;
        case 0x1837a8u: goto label_1837a8;
        case 0x1837acu: goto label_1837ac;
        case 0x1837b0u: goto label_1837b0;
        case 0x1837b4u: goto label_1837b4;
        case 0x1837b8u: goto label_1837b8;
        case 0x1837bcu: goto label_1837bc;
        case 0x1837c0u: goto label_1837c0;
        case 0x1837c4u: goto label_1837c4;
        case 0x1837c8u: goto label_1837c8;
        case 0x1837ccu: goto label_1837cc;
        case 0x1837d0u: goto label_1837d0;
        case 0x1837d4u: goto label_1837d4;
        case 0x1837d8u: goto label_1837d8;
        case 0x1837dcu: goto label_1837dc;
        case 0x1837e0u: goto label_1837e0;
        case 0x1837e4u: goto label_1837e4;
        case 0x1837e8u: goto label_1837e8;
        case 0x1837ecu: goto label_1837ec;
        case 0x1837f0u: goto label_1837f0;
        case 0x1837f4u: goto label_1837f4;
        case 0x1837f8u: goto label_1837f8;
        case 0x1837fcu: goto label_1837fc;
        case 0x183800u: goto label_183800;
        case 0x183804u: goto label_183804;
        case 0x183808u: goto label_183808;
        case 0x18380cu: goto label_18380c;
        case 0x183810u: goto label_183810;
        case 0x183814u: goto label_183814;
        case 0x183818u: goto label_183818;
        case 0x18381cu: goto label_18381c;
        case 0x183820u: goto label_183820;
        case 0x183824u: goto label_183824;
        case 0x183828u: goto label_183828;
        case 0x18382cu: goto label_18382c;
        case 0x183830u: goto label_183830;
        case 0x183834u: goto label_183834;
        case 0x183838u: goto label_183838;
        case 0x18383cu: goto label_18383c;
        case 0x183840u: goto label_183840;
        case 0x183844u: goto label_183844;
        case 0x183848u: goto label_183848;
        case 0x18384cu: goto label_18384c;
        case 0x183850u: goto label_183850;
        case 0x183854u: goto label_183854;
        case 0x183858u: goto label_183858;
        case 0x18385cu: goto label_18385c;
        case 0x183860u: goto label_183860;
        case 0x183864u: goto label_183864;
        case 0x183868u: goto label_183868;
        case 0x18386cu: goto label_18386c;
        case 0x183870u: goto label_183870;
        case 0x183874u: goto label_183874;
        case 0x183878u: goto label_183878;
        case 0x18387cu: goto label_18387c;
        case 0x183880u: goto label_183880;
        case 0x183884u: goto label_183884;
        case 0x183888u: goto label_183888;
        case 0x18388cu: goto label_18388c;
        case 0x183890u: goto label_183890;
        case 0x183894u: goto label_183894;
        case 0x183898u: goto label_183898;
        case 0x18389cu: goto label_18389c;
        case 0x1838a0u: goto label_1838a0;
        case 0x1838a4u: goto label_1838a4;
        case 0x1838a8u: goto label_1838a8;
        case 0x1838acu: goto label_1838ac;
        case 0x1838b0u: goto label_1838b0;
        case 0x1838b4u: goto label_1838b4;
        case 0x1838b8u: goto label_1838b8;
        case 0x1838bcu: goto label_1838bc;
        case 0x1838c0u: goto label_1838c0;
        case 0x1838c4u: goto label_1838c4;
        case 0x1838c8u: goto label_1838c8;
        case 0x1838ccu: goto label_1838cc;
        case 0x1838d0u: goto label_1838d0;
        case 0x1838d4u: goto label_1838d4;
        case 0x1838d8u: goto label_1838d8;
        case 0x1838dcu: goto label_1838dc;
        case 0x1838e0u: goto label_1838e0;
        case 0x1838e4u: goto label_1838e4;
        case 0x1838e8u: goto label_1838e8;
        case 0x1838ecu: goto label_1838ec;
        case 0x1838f0u: goto label_1838f0;
        case 0x1838f4u: goto label_1838f4;
        case 0x1838f8u: goto label_1838f8;
        case 0x1838fcu: goto label_1838fc;
        case 0x183900u: goto label_183900;
        case 0x183904u: goto label_183904;
        case 0x183908u: goto label_183908;
        case 0x18390cu: goto label_18390c;
        case 0x183910u: goto label_183910;
        case 0x183914u: goto label_183914;
        case 0x183918u: goto label_183918;
        case 0x18391cu: goto label_18391c;
        default: return;
    }

label_183150:
    // 0x183150: 0x1527c2  srl         $a0, $s5, 31
    ctx->pc = 0x183150u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 21), 31));
label_183154:
    // 0x183154: 0x0  nop
    ctx->pc = 0x183154u;
    // NOP
label_183158:
    // 0x183158: 0x1010  mfhi        $v0
    ctx->pc = 0x183158u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_18315c:
    // 0x18315c: 0x2a5001a  div         $zero, $s5, $a1
    ctx->pc = 0x18315cu;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 21);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_183160:
    // 0x183160: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x183160u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_183164:
    // 0x183164: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x183164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_183168:
    // 0x183168: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x183168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_18316c:
    // 0x18316c: 0x448021  addu        $s0, $v0, $a0
    ctx->pc = 0x18316cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_183170:
    // 0x183170: 0x1010  mfhi        $v0
    ctx->pc = 0x183170u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_183174:
    // 0x183174: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_183178:
    if (ctx->pc == 0x183178u) {
        ctx->pc = 0x183178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183174u;
        // 0x183178: 0x3c28821  addu        $s1, $fp, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18317Cu;
        goto label_18317c;
    }
    ctx->pc = 0x183174u;
    {
        const bool branch_taken_0x183174 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x183178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183174u;
        // 0x183178: 0x3c28821  addu        $s1, $fp, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183174) {
            ctx->pc = 0x183194u;
            goto label_183194;
        }
    }
    ctx->pc = 0x18317Cu;
label_18317c:
    // 0x18317c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18317cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_183180:
    // 0x183180: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x183180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_183184:
    // 0x183184: 0xc0449b8  jal         func_1126E0
label_183188:
    if (ctx->pc == 0x183188u) {
        ctx->pc = 0x183188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183184u;
        // 0x183188: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18318Cu;
        goto label_18318c;
    }
    ctx->pc = 0x183184u;
    SET_GPR_U32(ctx, 31, 0x18318Cu);
    ctx->pc = 0x183188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183184u;
    // 0x183188: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1126E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1126E0u, 0x183184u, 0x18318Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18318Cu;
label_18318c:
    // 0x18318c: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_183190:
    if (ctx->pc == 0x183190u) {
        ctx->pc = 0x183194u;
        goto label_183194;
    }
    ctx->pc = 0x18318Cu;
    {
        const bool branch_taken_0x18318c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18318c) {
            ctx->pc = 0x18323Cu;
            goto label_18323c;
        }
    }
    ctx->pc = 0x183194u;
label_183194:
    // 0x183194: 0x0  nop
    ctx->pc = 0x183194u;
    // NOP
label_183198:
    // 0x183198: 0x36420002  ori         $v0, $s2, 0x2
    ctx->pc = 0x183198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)2);
label_18319c:
    // 0x18319c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1831a0:
    if (ctx->pc == 0x1831A0u) {
        ctx->pc = 0x1831A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18319Cu;
        // 0x1831a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1831A4u;
        goto label_1831a4;
    }
    ctx->pc = 0x18319Cu;
    {
        const bool branch_taken_0x18319c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1831A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18319Cu;
        // 0x1831a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18319c) {
            ctx->pc = 0x1831B8u;
            goto label_1831b8;
        }
    }
    ctx->pc = 0x1831A4u;
label_1831a4:
    // 0x1831a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1831a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1831a8:
    // 0x1831a8: 0xc0449b8  jal         func_1126E0
label_1831ac:
    if (ctx->pc == 0x1831ACu) {
        ctx->pc = 0x1831ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1831A8u;
        // 0x1831ac: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1831B0u;
        goto label_1831b0;
    }
    ctx->pc = 0x1831A8u;
    SET_GPR_U32(ctx, 31, 0x1831B0u);
    ctx->pc = 0x1831ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1831A8u;
    // 0x1831ac: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1126E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1126E0u, 0x1831A8u, 0x1831B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1831B0u;
label_1831b0:
    // 0x1831b0: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
label_1831b4:
    if (ctx->pc == 0x1831B4u) {
        ctx->pc = 0x1831B8u;
        goto label_1831b8;
    }
    ctx->pc = 0x1831B0u;
    {
        const bool branch_taken_0x1831b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1831b0) {
            ctx->pc = 0x18323Cu;
            goto label_18323c;
        }
    }
    ctx->pc = 0x1831B8u;
label_1831b8:
    // 0x1831b8: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x1831b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
label_1831bc:
    // 0x1831bc: 0x44901000  mtc1        $s0, $f2
    ctx->pc = 0x1831bcu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1831c0:
    // 0x1831c0: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x1831c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1831c4:
    // 0x1831c4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1831c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1831c8:
    // 0x1831c8: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x1831c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
label_1831cc:
    // 0x1831cc: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x1831ccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_1831d0:
    // 0x1831d0: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x1831d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1831d4:
    // 0x1831d4: 0xc6610150  lwc1        $f1, 0x150($s3)
    ctx->pc = 0x1831d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1831d8:
    // 0x1831d8: 0x460228c0  add.s       $f3, $f5, $f2
    ctx->pc = 0x1831d8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
label_1831dc:
    // 0x1831dc: 0x3c024bbe  lui         $v0, 0x4BBE
    ctx->pc = 0x1831dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19390 << 16));
label_1831e0:
    // 0x1831e0: 0x3442bc20  ori         $v0, $v0, 0xBC20
    ctx->pc = 0x1831e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48160);
label_1831e4:
    // 0x1831e4: 0x44911000  mtc1        $s1, $f2
    ctx->pc = 0x1831e4u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1831e8:
    // 0x1831e8: 0x0  nop
    ctx->pc = 0x1831e8u;
    // NOP
label_1831ec:
    // 0x1831ec: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x1831ecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_1831f0:
    // 0x1831f0: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x1831f0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
label_1831f4:
    // 0x1831f4: 0x46801060  cvt.s.w     $f1, $f2
    ctx->pc = 0x1831f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1831f8:
    // 0x1831f8: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x1831f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_1831fc:
    // 0x1831fc: 0xc6600158  lwc1        $f0, 0x158($s3)
    ctx->pc = 0x1831fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_183200:
    // 0x183200: 0x46012880  add.s       $f2, $f5, $f1
    ctx->pc = 0x183200u;
    ctx->f[2] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
label_183204:
    // 0x183204: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x183204u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_183208:
    // 0x183208: 0x4600005c  madd.s      $f1, $f0, $f0
    ctx->pc = 0x183208u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
label_18320c:
    // 0x18320c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18320cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_183210:
    // 0x183210: 0x0  nop
    ctx->pc = 0x183210u;
    // NOP
label_183214:
    // 0x183214: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x183214u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_183218:
    // 0x183218: 0x0  nop
    ctx->pc = 0x183218u;
    // NOP
label_18321c:
    // 0x18321c: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_183220:
    if (ctx->pc == 0x183220u) {
        ctx->pc = 0x183224u;
        goto label_183224;
    }
    ctx->pc = 0x18321Cu;
    {
        const bool branch_taken_0x18321c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18321c) {
            ctx->pc = 0x18323Cu;
            goto label_18323c;
        }
    }
    ctx->pc = 0x183224u;
label_183224:
    // 0x183224: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x183224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_183228:
    // 0x183228: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x183228u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18322c:
    // 0x18322c: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x18322cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_183230:
    // 0x183230: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x183230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_183234:
    // 0x183234: 0x10000005  b           . + 4 + (0x5 << 2)
label_183238:
    if (ctx->pc == 0x183238u) {
        ctx->pc = 0x183238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183234u;
        // 0x183238: 0xe4420004  swc1        $f2, 0x4($v0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18323Cu;
        goto label_18323c;
    }
    ctx->pc = 0x183234u;
    {
        const bool branch_taken_0x183234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183234u;
        // 0x183238: 0xe4420004  swc1        $f2, 0x4($v0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x183234) {
            ctx->pc = 0x18324Cu;
            goto label_18324c;
        }
    }
    ctx->pc = 0x18323Cu;
label_18323c:
    // 0x18323c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x18323cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_183240:
    // 0x183240: 0x2a820019  slti        $v0, $s4, 0x19
    ctx->pc = 0x183240u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)25) ? 1 : 0);
label_183244:
    // 0x183244: 0x1440ffb9  bnez        $v0, . + 4 + (-0x47 << 2)
label_183248:
    if (ctx->pc == 0x183248u) {
        ctx->pc = 0x183248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183244u;
        // 0x183248: 0x26a30001  addiu       $v1, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18324Cu;
        goto label_18324c;
    }
    ctx->pc = 0x183244u;
    {
        const bool branch_taken_0x183244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x183248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183244u;
        // 0x183248: 0x26a30001  addiu       $v1, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183244) {
            ctx->pc = 0x18312Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x18312c; return; }
        }
    }
    ctx->pc = 0x18324Cu;
label_18324c:
    // 0x18324c: 0x0  nop
    ctx->pc = 0x18324cu;
    // NOP
label_183250:
    // 0x183250: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x183250u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_183254:
    // 0x183254: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x183254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_183258:
    // 0x183258: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x183258u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_18325c:
    // 0x18325c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x18325cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_183260:
    // 0x183260: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x183260u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_183264:
    // 0x183264: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x183264u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_183268:
    // 0x183268: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x183268u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_18326c:
    // 0x18326c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18326cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_183270:
    // 0x183270: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x183270u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_183274:
    // 0x183274: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x183274u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_183278:
    // 0x183278: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x183278u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_18327c:
    // 0x18327c: 0x3e00008  jr          $ra
label_183280:
    if (ctx->pc == 0x183280u) {
        ctx->pc = 0x183280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18327Cu;
        // 0x183280: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183284u;
        goto label_183284;
    }
    ctx->pc = 0x18327Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18327Cu;
        // 0x183280: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18327Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183284u;
label_183284:
    // 0x183284: 0x0  nop
    ctx->pc = 0x183284u;
    // NOP
label_183288:
    // 0x183288: 0x0  nop
    ctx->pc = 0x183288u;
    // NOP
label_18328c:
    // 0x18328c: 0x0  nop
    ctx->pc = 0x18328cu;
    // NOP
label_183290:
    // 0x183290: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x183290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_183294:
    // 0x183294: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x183294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_183298:
    // 0x183298: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x183298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_18329c:
    // 0x18329c: 0xc0542ec  jal         func_150BB0
label_1832a0:
    if (ctx->pc == 0x1832A0u) {
        ctx->pc = 0x1832A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18329Cu;
        // 0x1832a0: 0xa0820231  sb          $v0, 0x231($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 561), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1832A4u;
        goto label_1832a4;
    }
    ctx->pc = 0x18329Cu;
    SET_GPR_U32(ctx, 31, 0x1832A4u);
    ctx->pc = 0x1832A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18329Cu;
    // 0x1832a0: 0xa0820231  sb          $v0, 0x231($a0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 4), 561), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150BB0u, 0x18329Cu, 0x1832A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1832A4u;
label_1832a4:
    // 0x1832a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1832a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1832a8:
    // 0x1832a8: 0x3e00008  jr          $ra
label_1832ac:
    if (ctx->pc == 0x1832ACu) {
        ctx->pc = 0x1832ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1832A8u;
        // 0x1832ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1832B0u;
        goto label_1832b0;
    }
    ctx->pc = 0x1832A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1832ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1832A8u;
        // 0x1832ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1832A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1832B0u;
label_1832b0:
    // 0x1832b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1832b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1832b4:
    // 0x1832b4: 0x24080005  addiu       $t0, $zero, 0x5
    ctx->pc = 0x1832b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1832b8:
    // 0x1832b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1832b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1832bc:
    // 0x1832bc: 0x90830036  lbu         $v1, 0x36($a0)
    ctx->pc = 0x1832bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 54)));
label_1832c0:
    // 0x1832c0: 0x1468001a  bne         $v1, $t0, . + 4 + (0x1A << 2)
label_1832c4:
    if (ctx->pc == 0x1832C4u) {
        ctx->pc = 0x1832C8u;
        goto label_1832c8;
    }
    ctx->pc = 0x1832C0u;
    {
        const bool branch_taken_0x1832c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        if (branch_taken_0x1832c0) {
            ctx->pc = 0x18332Cu;
            goto label_18332c;
        }
    }
    ctx->pc = 0x1832C8u;
label_1832c8:
    // 0x1832c8: 0x90a70237  lbu         $a3, 0x237($a1)
    ctx->pc = 0x1832c8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 567)));
label_1832cc:
    // 0x1832cc: 0x10e80020  beq         $a3, $t0, . + 4 + (0x20 << 2)
label_1832d0:
    if (ctx->pc == 0x1832D0u) {
        ctx->pc = 0x1832D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1832CCu;
        // 0x1832d0: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1832D4u;
        goto label_1832d4;
    }
    ctx->pc = 0x1832CCu;
    {
        const bool branch_taken_0x1832cc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 8));
        ctx->pc = 0x1832D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1832CCu;
        // 0x1832d0: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1832cc) {
            ctx->pc = 0x183350u;
            goto label_183350;
        }
    }
    ctx->pc = 0x1832D4u;
label_1832d4:
    // 0x1832d4: 0x10e3001e  beq         $a3, $v1, . + 4 + (0x1E << 2)
label_1832d8:
    if (ctx->pc == 0x1832D8u) {
        ctx->pc = 0x1832DCu;
        goto label_1832dc;
    }
    ctx->pc = 0x1832D4u;
    {
        const bool branch_taken_0x1832d4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x1832d4) {
            ctx->pc = 0x183350u;
            goto label_183350;
        }
    }
    ctx->pc = 0x1832DCu;
label_1832dc:
    // 0x1832dc: 0xa0a80237  sb          $t0, 0x237($a1)
    ctx->pc = 0x1832dcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 567), (uint8_t)GPR_U32(ctx, 8));
label_1832e0:
    // 0x1832e0: 0x90830034  lbu         $v1, 0x34($a0)
    ctx->pc = 0x1832e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 52)));
label_1832e4:
    // 0x1832e4: 0x3c08002f  lui         $t0, 0x2F
    ctx->pc = 0x1832e4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)47 << 16));
label_1832e8:
    // 0x1832e8: 0x90870038  lbu         $a3, 0x38($a0)
    ctx->pc = 0x1832e8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 56)));
label_1832ec:
    // 0x1832ec: 0x250825a9  addiu       $t0, $t0, 0x25A9
    ctx->pc = 0x1832ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 9641));
label_1832f0:
    // 0x1832f0: 0x386a0001  xori        $t2, $v1, 0x1
    ctx->pc = 0x1832f0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_1832f4:
    // 0x1832f4: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x1832f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_1832f8:
    // 0x1832f8: 0xa4a00  sll         $t1, $t2, 8
    ctx->pc = 0x1832f8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
label_1832fc:
    // 0x1832fc: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1832fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_183300:
    // 0x183300: 0x12a4823  subu        $t1, $t1, $t2
    ctx->pc = 0x183300u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
label_183304:
    // 0x183304: 0x338c0  sll         $a3, $v1, 3
    ctx->pc = 0x183304u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_183308:
    // 0x183308: 0x918c0  sll         $v1, $t1, 3
    ctx->pc = 0x183308u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_18330c:
    // 0x18330c: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x18330cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
label_183310:
    // 0x183310: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x183310u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_183314:
    // 0x183314: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x183314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_183318:
    // 0x183318: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x183318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_18331c:
    // 0x18331c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x18331cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_183320:
    // 0x183320: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x183320u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_183324:
    // 0x183324: 0x1000000a  b           . + 4 + (0xA << 2)
label_183328:
    if (ctx->pc == 0x183328u) {
        ctx->pc = 0x183328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183324u;
        // 0x183328: 0xa0a30236  sb          $v1, 0x236($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 566), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18332Cu;
        goto label_18332c;
    }
    ctx->pc = 0x183324u;
    {
        const bool branch_taken_0x183324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183324u;
        // 0x183328: 0xa0a30236  sb          $v1, 0x236($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 566), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183324) {
            ctx->pc = 0x183350u;
            goto label_183350;
        }
    }
    ctx->pc = 0x18332Cu;
label_18332c:
    // 0x18332c: 0xa0a30237  sb          $v1, 0x237($a1)
    ctx->pc = 0x18332cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 567), (uint8_t)GPR_U32(ctx, 3));
label_183330:
    // 0x183330: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x183330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_183334:
    // 0x183334: 0xa0a30235  sb          $v1, 0x235($a1)
    ctx->pc = 0x183334u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 565), (uint8_t)GPR_U32(ctx, 3));
label_183338:
    // 0x183338: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x183338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18333c:
    // 0x18333c: 0xa0a3023c  sb          $v1, 0x23C($a1)
    ctx->pc = 0x18333cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 572), (uint8_t)GPR_U32(ctx, 3));
label_183340:
    // 0x183340: 0x3c034974  lui         $v1, 0x4974
    ctx->pc = 0x183340u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18804 << 16));
label_183344:
    // 0x183344: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x183344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9216);
label_183348:
    // 0x183348: 0xaca30260  sw          $v1, 0x260($a1)
    ctx->pc = 0x183348u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 608), GPR_U32(ctx, 3));
label_18334c:
    // 0x18334c: 0xaca00264  sw          $zero, 0x264($a1)
    ctx->pc = 0x18334cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 612), GPR_U32(ctx, 0));
label_183350:
    // 0x183350: 0x90a70237  lbu         $a3, 0x237($a1)
    ctx->pc = 0x183350u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 567)));
label_183354:
    // 0x183354: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x183354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_183358:
    // 0x183358: 0x14e30005  bne         $a3, $v1, . + 4 + (0x5 << 2)
label_18335c:
    if (ctx->pc == 0x18335Cu) {
        ctx->pc = 0x18335Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183358u;
        // 0x18335c: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183360u;
        goto label_183360;
    }
    ctx->pc = 0x183358u;
    {
        const bool branch_taken_0x183358 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x18335Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183358u;
        // 0x18335c: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183358) {
            ctx->pc = 0x183370u;
            goto label_183370;
        }
    }
    ctx->pc = 0x183360u;
label_183360:
    // 0x183360: 0xc061108  jal         func_184420
label_183364:
    if (ctx->pc == 0x183364u) {
        ctx->pc = 0x183368u;
        goto label_183368;
    }
    ctx->pc = 0x183360u;
    SET_GPR_U32(ctx, 31, 0x183368u);
    ctx->pc = 0x184420u;
    { ctx->pc = 0x184420; return; }
    ctx->pc = 0x183368u;
label_183368:
    // 0x183368: 0x10000011  b           . + 4 + (0x11 << 2)
label_18336c:
    if (ctx->pc == 0x18336Cu) {
        ctx->pc = 0x18336Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183368u;
        // 0x18336c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183370u;
        goto label_183370;
    }
    ctx->pc = 0x183368u;
    {
        const bool branch_taken_0x183368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18336Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183368u;
        // 0x18336c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183368) {
            ctx->pc = 0x1833B0u;
            goto label_1833b0;
        }
    }
    ctx->pc = 0x183370u;
label_183370:
    // 0x183370: 0x14e30006  bne         $a3, $v1, . + 4 + (0x6 << 2)
label_183374:
    if (ctx->pc == 0x183374u) {
        ctx->pc = 0x183378u;
        goto label_183378;
    }
    ctx->pc = 0x183370u;
    {
        const bool branch_taken_0x183370 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x183370) {
            ctx->pc = 0x18338Cu;
            goto label_18338c;
        }
    }
    ctx->pc = 0x183378u;
label_183378:
    // 0x183378: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x183378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18337c:
    // 0x18337c: 0xc061084  jal         func_184210
label_183380:
    if (ctx->pc == 0x183380u) {
        ctx->pc = 0x183380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18337Cu;
        // 0x183380: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183384u;
        goto label_183384;
    }
    ctx->pc = 0x18337Cu;
    SET_GPR_U32(ctx, 31, 0x183384u);
    ctx->pc = 0x183380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18337Cu;
    // 0x183380: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184210u;
    { ctx->pc = 0x184210; return; }
    ctx->pc = 0x183384u;
label_183384:
    // 0x183384: 0x10000009  b           . + 4 + (0x9 << 2)
label_183388:
    if (ctx->pc == 0x183388u) {
        ctx->pc = 0x18338Cu;
        goto label_18338c;
    }
    ctx->pc = 0x183384u;
    {
        const bool branch_taken_0x183384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x183384) {
            ctx->pc = 0x1833ACu;
            goto label_1833ac;
        }
    }
    ctx->pc = 0x18338Cu;
label_18338c:
    // 0x18338c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x18338cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_183390:
    // 0x183390: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x183390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_183394:
    // 0x183394: 0x90840014  lbu         $a0, 0x14($a0)
    ctx->pc = 0x183394u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
label_183398:
    // 0x183398: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
label_18339c:
    if (ctx->pc == 0x18339Cu) {
        ctx->pc = 0x1833A0u;
        goto label_1833a0;
    }
    ctx->pc = 0x183398u;
    {
        const bool branch_taken_0x183398 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x183398) {
            ctx->pc = 0x1833ACu;
            goto label_1833ac;
        }
    }
    ctx->pc = 0x1833A0u;
label_1833a0:
    // 0x1833a0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1833a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1833a4:
    // 0x1833a4: 0xc06133c  jal         func_184CF0
label_1833a8:
    if (ctx->pc == 0x1833A8u) {
        ctx->pc = 0x1833A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1833A4u;
        // 0x1833a8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1833ACu;
        goto label_1833ac;
    }
    ctx->pc = 0x1833A4u;
    SET_GPR_U32(ctx, 31, 0x1833ACu);
    ctx->pc = 0x1833A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1833A4u;
    // 0x1833a8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184CF0u;
    { ctx->pc = 0x184cf0; return; }
    ctx->pc = 0x1833ACu;
label_1833ac:
    // 0x1833ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1833acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1833b0:
    // 0x1833b0: 0x3e00008  jr          $ra
label_1833b4:
    if (ctx->pc == 0x1833B4u) {
        ctx->pc = 0x1833B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1833B0u;
        // 0x1833b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1833B8u;
        goto label_1833b8;
    }
    ctx->pc = 0x1833B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1833B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1833B0u;
        // 0x1833b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1833B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1833B8u;
label_1833b8:
    // 0x1833b8: 0x0  nop
    ctx->pc = 0x1833b8u;
    // NOP
label_1833bc:
    // 0x1833bc: 0x0  nop
    ctx->pc = 0x1833bcu;
    // NOP
label_1833c0:
    // 0x1833c0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1833c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1833c4:
    // 0x1833c4: 0x3c0368db  lui         $v1, 0x68DB
    ctx->pc = 0x1833c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26843 << 16));
label_1833c8:
    // 0x1833c8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1833c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1833cc:
    // 0x1833cc: 0x34678bad  ori         $a3, $v1, 0x8BAD
    ctx->pc = 0x1833ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)35757);
label_1833d0:
    // 0x1833d0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1833d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1833d4:
    // 0x1833d4: 0x3c031062  lui         $v1, 0x1062
    ctx->pc = 0x1833d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4194 << 16));
label_1833d8:
    // 0x1833d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1833d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1833dc:
    // 0x1833dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1833dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1833e0:
    // 0x1833e0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1833e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1833e4:
    // 0x1833e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1833e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1833e8:
    // 0x1833e8: 0xc4a00150  lwc1        $f0, 0x150($a1)
    ctx->pc = 0x1833e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1833ec:
    // 0x1833ec: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1833ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1833f0:
    // 0x1833f0: 0x34664dd3  ori         $a2, $v1, 0x4DD3
    ctx->pc = 0x1833f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)19923);
label_1833f4:
    // 0x1833f4: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x1833f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
label_1833f8:
    // 0x1833f8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1833f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_1833fc:
    // 0x1833fc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1833fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_183400:
    // 0x183400: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x183400u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_183404:
    // 0x183404: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x183404u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_183408:
    // 0x183408: 0x0  nop
    ctx->pc = 0x183408u;
    // NOP
label_18340c:
    // 0x18340c: 0xe30018  mult        $zero, $a3, $v1
    ctx->pc = 0x18340cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_183410:
    // 0x183410: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x183410u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_183414:
    // 0x183414: 0x0  nop
    ctx->pc = 0x183414u;
    // NOP
label_183418:
    // 0x183418: 0x1810  mfhi        $v1
    ctx->pc = 0x183418u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_18341c:
    // 0x18341c: 0x31ac3  sra         $v1, $v1, 11
    ctx->pc = 0x18341cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 11));
label_183420:
    // 0x183420: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x183420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_183424:
    // 0x183424: 0xa0a30218  sb          $v1, 0x218($a1)
    ctx->pc = 0x183424u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 536), (uint8_t)GPR_U32(ctx, 3));
label_183428:
    // 0x183428: 0xc4a00158  lwc1        $f0, 0x158($a1)
    ctx->pc = 0x183428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18342c:
    // 0x18342c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18342cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_183430:
    // 0x183430: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x183430u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_183434:
    // 0x183434: 0x0  nop
    ctx->pc = 0x183434u;
    // NOP
label_183438:
    // 0x183438: 0xe30018  mult        $zero, $a3, $v1
    ctx->pc = 0x183438u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_18343c:
    // 0x18343c: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x18343cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_183440:
    // 0x183440: 0x0  nop
    ctx->pc = 0x183440u;
    // NOP
label_183444:
    // 0x183444: 0x1810  mfhi        $v1
    ctx->pc = 0x183444u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_183448:
    // 0x183448: 0x31ac3  sra         $v1, $v1, 11
    ctx->pc = 0x183448u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 11));
label_18344c:
    // 0x18344c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18344cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_183450:
    // 0x183450: 0xa0a30219  sb          $v1, 0x219($a1)
    ctx->pc = 0x183450u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 537), (uint8_t)GPR_U32(ctx, 3));
label_183454:
    // 0x183454: 0xc4a00150  lwc1        $f0, 0x150($a1)
    ctx->pc = 0x183454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_183458:
    // 0x183458: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x183458u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_18345c:
    // 0x18345c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x18345cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_183460:
    // 0x183460: 0x0  nop
    ctx->pc = 0x183460u;
    // NOP
label_183464:
    // 0x183464: 0xc30018  mult        $zero, $a2, $v1
    ctx->pc = 0x183464u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_183468:
    // 0x183468: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x183468u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_18346c:
    // 0x18346c: 0x0  nop
    ctx->pc = 0x18346cu;
    // NOP
label_183470:
    // 0x183470: 0x1810  mfhi        $v1
    ctx->pc = 0x183470u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_183474:
    // 0x183474: 0x31983  sra         $v1, $v1, 6
    ctx->pc = 0x183474u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 6));
label_183478:
    // 0x183478: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x183478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_18347c:
    // 0x18347c: 0xa0a3021a  sb          $v1, 0x21A($a1)
    ctx->pc = 0x18347cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 538), (uint8_t)GPR_U32(ctx, 3));
label_183480:
    // 0x183480: 0xc4a00158  lwc1        $f0, 0x158($a1)
    ctx->pc = 0x183480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_183484:
    // 0x183484: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x183484u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_183488:
    // 0x183488: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x183488u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_18348c:
    // 0x18348c: 0x0  nop
    ctx->pc = 0x18348cu;
    // NOP
label_183490:
    // 0x183490: 0xc30018  mult        $zero, $a2, $v1
    ctx->pc = 0x183490u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_183494:
    // 0x183494: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x183494u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_183498:
    // 0x183498: 0x0  nop
    ctx->pc = 0x183498u;
    // NOP
label_18349c:
    // 0x18349c: 0x1810  mfhi        $v1
    ctx->pc = 0x18349cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1834a0:
    // 0x1834a0: 0x31983  sra         $v1, $v1, 6
    ctx->pc = 0x1834a0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 6));
label_1834a4:
    // 0x1834a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1834a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1834a8:
    // 0x1834a8: 0xa0a3021b  sb          $v1, 0x21B($a1)
    ctx->pc = 0x1834a8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 539), (uint8_t)GPR_U32(ctx, 3));
label_1834ac:
    // 0x1834ac: 0xc4a10044  lwc1        $f1, 0x44($a1)
    ctx->pc = 0x1834acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1834b0:
    // 0x1834b0: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x1834b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1834b4:
    // 0x1834b4: 0x0  nop
    ctx->pc = 0x1834b4u;
    // NOP
label_1834b8:
    // 0x1834b8: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_1834bc:
    if (ctx->pc == 0x1834BCu) {
        ctx->pc = 0x1834BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1834B8u;
        // 0x1834bc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1834C0u;
        goto label_1834c0;
    }
    ctx->pc = 0x1834B8u;
    {
        const bool branch_taken_0x1834b8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1834BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1834B8u;
        // 0x1834bc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1834b8) {
            ctx->pc = 0x1834D4u;
            goto label_1834d4;
        }
    }
    ctx->pc = 0x1834C0u;
label_1834c0:
    // 0x1834c0: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x1834c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
label_1834c4:
    // 0x1834c4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1834c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_1834c8:
    // 0x1834c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1834c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1834cc:
    // 0x1834cc: 0x1000000d  b           . + 4 + (0xD << 2)
label_1834d0:
    if (ctx->pc == 0x1834D0u) {
        ctx->pc = 0x1834D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1834CCu;
        // 0x1834d0: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1834D4u;
        goto label_1834d4;
    }
    ctx->pc = 0x1834CCu;
    {
        const bool branch_taken_0x1834cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1834D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1834CCu;
        // 0x1834d0: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1834cc) {
            ctx->pc = 0x183504u;
            goto label_183504;
        }
    }
    ctx->pc = 0x1834D4u;
label_1834d4:
    // 0x1834d4: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x1834d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
label_1834d8:
    // 0x1834d8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1834d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_1834dc:
    // 0x1834dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1834dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1834e0:
    // 0x1834e0: 0x0  nop
    ctx->pc = 0x1834e0u;
    // NOP
label_1834e4:
    // 0x1834e4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1834e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1834e8:
    // 0x1834e8: 0x0  nop
    ctx->pc = 0x1834e8u;
    // NOP
label_1834ec:
    // 0x1834ec: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_1834f0:
    if (ctx->pc == 0x1834F0u) {
        ctx->pc = 0x1834F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1834ECu;
        // 0x1834f0: 0x3c0340c9  lui         $v1, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1834F4u;
        goto label_1834f4;
    }
    ctx->pc = 0x1834ECu;
    {
        const bool branch_taken_0x1834ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1834F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1834ECu;
        // 0x1834f0: 0x3c0340c9  lui         $v1, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1834ec) {
            ctx->pc = 0x183504u;
            goto label_183504;
        }
    }
    ctx->pc = 0x1834F4u;
label_1834f4:
    // 0x1834f4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1834f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_1834f8:
    // 0x1834f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1834f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1834fc:
    // 0x1834fc: 0x10000001  b           . + 4 + (0x1 << 2)
label_183500:
    if (ctx->pc == 0x183500u) {
        ctx->pc = 0x183500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1834FCu;
        // 0x183500: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x183504u;
        goto label_183504;
    }
    ctx->pc = 0x1834FCu;
    {
        const bool branch_taken_0x1834fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1834FCu;
        // 0x183500: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1834fc) {
            ctx->pc = 0x183504u;
            goto label_183504;
        }
    }
    ctx->pc = 0x183504u;
label_183504:
    // 0x183504: 0xe641001c  swc1        $f1, 0x1C($s2)
    ctx->pc = 0x183504u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
label_183508:
    // 0x183508: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x183508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_18350c:
    // 0x18350c: 0x92230218  lbu         $v1, 0x218($s1)
    ctx->pc = 0x18350cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 536)));
label_183510:
    // 0x183510: 0xa2430022  sb          $v1, 0x22($s2)
    ctx->pc = 0x183510u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 34), (uint8_t)GPR_U32(ctx, 3));
label_183514:
    // 0x183514: 0x92230219  lbu         $v1, 0x219($s1)
    ctx->pc = 0x183514u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 537)));
label_183518:
    // 0x183518: 0xa2430023  sb          $v1, 0x23($s2)
    ctx->pc = 0x183518u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 35), (uint8_t)GPR_U32(ctx, 3));
label_18351c:
    // 0x18351c: 0xc6200150  lwc1        $f0, 0x150($s1)
    ctx->pc = 0x18351cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_183520:
    // 0x183520: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x183520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_183524:
    // 0x183524: 0xc6200158  lwc1        $f0, 0x158($s1)
    ctx->pc = 0x183524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_183528:
    // 0x183528: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x183528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_18352c:
    // 0x18352c: 0x9223023f  lbu         $v1, 0x23F($s1)
    ctx->pc = 0x18352cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 575)));
label_183530:
    // 0x183530: 0xa243003a  sb          $v1, 0x3A($s2)
    ctx->pc = 0x183530u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 58), (uint8_t)GPR_U32(ctx, 3));
label_183534:
    // 0x183534: 0x92430036  lbu         $v1, 0x36($s2)
    ctx->pc = 0x183534u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 54)));
label_183538:
    // 0x183538: 0x1465001a  bne         $v1, $a1, . + 4 + (0x1A << 2)
label_18353c:
    if (ctx->pc == 0x18353Cu) {
        ctx->pc = 0x183540u;
        goto label_183540;
    }
    ctx->pc = 0x183538u;
    {
        const bool branch_taken_0x183538 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x183538) {
            ctx->pc = 0x1835A4u;
            goto label_1835a4;
        }
    }
    ctx->pc = 0x183540u;
label_183540:
    // 0x183540: 0x92240237  lbu         $a0, 0x237($s1)
    ctx->pc = 0x183540u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 567)));
label_183544:
    // 0x183544: 0x10850018  beq         $a0, $a1, . + 4 + (0x18 << 2)
label_183548:
    if (ctx->pc == 0x183548u) {
        ctx->pc = 0x183548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183544u;
        // 0x183548: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18354Cu;
        goto label_18354c;
    }
    ctx->pc = 0x183544u;
    {
        const bool branch_taken_0x183544 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x183548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183544u;
        // 0x183548: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183544) {
            ctx->pc = 0x1835A8u;
            goto label_1835a8;
        }
    }
    ctx->pc = 0x18354Cu;
label_18354c:
    // 0x18354c: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
label_183550:
    if (ctx->pc == 0x183550u) {
        ctx->pc = 0x183554u;
        goto label_183554;
    }
    ctx->pc = 0x18354Cu;
    {
        const bool branch_taken_0x18354c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x18354c) {
            ctx->pc = 0x1835A8u;
            goto label_1835a8;
        }
    }
    ctx->pc = 0x183554u;
label_183554:
    // 0x183554: 0xa2250237  sb          $a1, 0x237($s1)
    ctx->pc = 0x183554u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 567), (uint8_t)GPR_U32(ctx, 5));
label_183558:
    // 0x183558: 0x92430034  lbu         $v1, 0x34($s2)
    ctx->pc = 0x183558u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 52)));
label_18355c:
    // 0x18355c: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x18355cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
label_183560:
    // 0x183560: 0x92440038  lbu         $a0, 0x38($s2)
    ctx->pc = 0x183560u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 56)));
label_183564:
    // 0x183564: 0x24a525a9  addiu       $a1, $a1, 0x25A9
    ctx->pc = 0x183564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9641));
label_183568:
    // 0x183568: 0x38670001  xori        $a3, $v1, 0x1
    ctx->pc = 0x183568u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_18356c:
    // 0x18356c: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x18356cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_183570:
    // 0x183570: 0x73200  sll         $a2, $a3, 8
    ctx->pc = 0x183570u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_183574:
    // 0x183574: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x183574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_183578:
    // 0x183578: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x183578u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_18357c:
    // 0x18357c: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x18357cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_183580:
    // 0x183580: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x183580u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_183584:
    // 0x183584: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x183584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_183588:
    // 0x183588: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x183588u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_18358c:
    // 0x18358c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x18358cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_183590:
    // 0x183590: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x183590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_183594:
    // 0x183594: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x183594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_183598:
    // 0x183598: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x183598u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_18359c:
    // 0x18359c: 0x10000002  b           . + 4 + (0x2 << 2)
label_1835a0:
    if (ctx->pc == 0x1835A0u) {
        ctx->pc = 0x1835A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18359Cu;
        // 0x1835a0: 0xa2230236  sb          $v1, 0x236($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 566), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1835A4u;
        goto label_1835a4;
    }
    ctx->pc = 0x18359Cu;
    {
        const bool branch_taken_0x18359c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1835A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18359Cu;
        // 0x1835a0: 0xa2230236  sb          $v1, 0x236($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 566), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18359c) {
            ctx->pc = 0x1835A8u;
            goto label_1835a8;
        }
    }
    ctx->pc = 0x1835A4u;
label_1835a4:
    // 0x1835a4: 0xa2230237  sb          $v1, 0x237($s1)
    ctx->pc = 0x1835a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 567), (uint8_t)GPR_U32(ctx, 3));
label_1835a8:
    // 0x1835a8: 0x92230237  lbu         $v1, 0x237($s1)
    ctx->pc = 0x1835a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 567)));
label_1835ac:
    // 0x1835ac: 0x2c610007  sltiu       $at, $v1, 0x7
    ctx->pc = 0x1835acu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_1835b0:
    // 0x1835b0: 0x102001a2  beqz        $at, . + 4 + (0x1A2 << 2)
label_1835b4:
    if (ctx->pc == 0x1835B4u) {
        ctx->pc = 0x1835B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1835B0u;
        // 0x1835b4: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1835B8u;
        goto label_1835b8;
    }
    ctx->pc = 0x1835B0u;
    {
        const bool branch_taken_0x1835b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1835B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1835B0u;
        // 0x1835b4: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1835b0) {
            ctx->pc = 0x183C3Cu;
            { ctx->pc = 0x183c3c; return; }
        }
    }
    ctx->pc = 0x1835B8u;
label_1835b8:
    // 0x1835b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1835b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1835bc:
    // 0x1835bc: 0x24849850  addiu       $a0, $a0, -0x67B0
    ctx->pc = 0x1835bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940752));
label_1835c0:
    // 0x1835c0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1835c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1835c4:
    // 0x1835c4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1835c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1835c8:
    // 0x1835c8: 0x600008  jr          $v1
label_1835cc:
    if (ctx->pc == 0x1835CCu) {
        ctx->pc = 0x1835D0u;
        goto label_1835d0;
    }
    ctx->pc = 0x1835C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1835D0u: goto label_1835d0;
            case 0x18382Cu: goto label_18382c;
            case 0x183844u: goto label_183844;
            case 0x18385Cu: goto label_18385c;
            case 0x183A74u: { ctx->pc = 0x183a74; return; }
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1835C8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1835D0u;
label_1835d0:
    // 0x1835d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1835d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1835d4:
    // 0x1835d4: 0xc062a80  jal         func_18AA00
label_1835d8:
    if (ctx->pc == 0x1835D8u) {
        ctx->pc = 0x1835D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1835D4u;
        // 0x1835d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1835DCu;
        goto label_1835dc;
    }
    ctx->pc = 0x1835D4u;
    SET_GPR_U32(ctx, 31, 0x1835DCu);
    ctx->pc = 0x1835D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1835D4u;
    // 0x1835d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AA00u;
    { ctx->pc = 0x18aa00; return; }
    ctx->pc = 0x1835DCu;
label_1835dc:
    // 0x1835dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1835dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1835e0:
    // 0x1835e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1835e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1835e4:
    // 0x1835e4: 0xc052644  jal         func_149910
label_1835e8:
    if (ctx->pc == 0x1835E8u) {
        ctx->pc = 0x1835E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1835E4u;
        // 0x1835e8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1835ECu;
        goto label_1835ec;
    }
    ctx->pc = 0x1835E4u;
    SET_GPR_U32(ctx, 31, 0x1835ECu);
    ctx->pc = 0x1835E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1835E4u;
    // 0x1835e8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149910u, 0x1835E4u, 0x1835ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1835ECu;
label_1835ec:
    // 0x1835ec: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
label_1835f0:
    if (ctx->pc == 0x1835F0u) {
        ctx->pc = 0x1835F4u;
        goto label_1835f4;
    }
    ctx->pc = 0x1835ECu;
    {
        const bool branch_taken_0x1835ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1835ec) {
            ctx->pc = 0x1836DCu;
            goto label_1836dc;
        }
    }
    ctx->pc = 0x1835F4u;
label_1835f4:
    // 0x1835f4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1835f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1835f8:
    // 0x1835f8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1835f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1835fc:
    // 0x1835fc: 0x90840014  lbu         $a0, 0x14($a0)
    ctx->pc = 0x1835fcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
label_183600:
    // 0x183600: 0x10830036  beq         $a0, $v1, . + 4 + (0x36 << 2)
label_183604:
    if (ctx->pc == 0x183604u) {
        ctx->pc = 0x183608u;
        goto label_183608;
    }
    ctx->pc = 0x183600u;
    {
        const bool branch_taken_0x183600 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x183600) {
            ctx->pc = 0x1836DCu;
            goto label_1836dc;
        }
    }
    ctx->pc = 0x183608u;
label_183608:
    // 0x183608: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x183608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18360c:
    // 0x18360c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x18360cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_183610:
    // 0x183610: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x183610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_183614:
    // 0x183614: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x183614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_183618:
    // 0x183618: 0x92420020  lbu         $v0, 0x20($s2)
    ctx->pc = 0x183618u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 32)));
label_18361c:
    // 0x18361c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_183620:
    if (ctx->pc == 0x183620u) {
        ctx->pc = 0x183620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18361Cu;
        // 0x183620: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183624u;
        goto label_183624;
    }
    ctx->pc = 0x18361Cu;
    {
        const bool branch_taken_0x18361c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x183620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18361Cu;
        // 0x183620: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18361c) {
            ctx->pc = 0x183630u;
            goto label_183630;
        }
    }
    ctx->pc = 0x183624u;
label_183624:
    // 0x183624: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x183624u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_183628:
    // 0x183628: 0x10000007  b           . + 4 + (0x7 << 2)
label_18362c:
    if (ctx->pc == 0x18362Cu) {
        ctx->pc = 0x18362Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183628u;
        // 0x18362c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x183630u;
        goto label_183630;
    }
    ctx->pc = 0x183628u;
    {
        const bool branch_taken_0x183628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18362Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183628u;
        // 0x18362c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x183628) {
            ctx->pc = 0x183648u;
            goto label_183648;
        }
    }
    ctx->pc = 0x183630u;
label_183630:
    // 0x183630: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x183630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_183634:
    // 0x183634: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x183634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_183638:
    // 0x183638: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x183638u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18363c:
    // 0x18363c: 0x0  nop
    ctx->pc = 0x18363cu;
    // NOP
label_183640:
    // 0x183640: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x183640u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_183644:
    // 0x183644: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x183644u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_183648:
    // 0x183648: 0x3c034234  lui         $v1, 0x4234
    ctx->pc = 0x183648u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16948 << 16));
label_18364c:
    // 0x18364c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x18364cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_183650:
    // 0x183650: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x183650u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_183654:
    // 0x183654: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x183654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_183658:
    // 0x183658: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x183658u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_18365c:
    // 0x18365c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x18365cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_183660:
    // 0x183660: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x183660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_183664:
    // 0x183664: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x183664u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_183668:
    // 0x183668: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x183668u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18366c:
    // 0x18366c: 0x0  nop
    ctx->pc = 0x18366cu;
    // NOP
label_183670:
    // 0x183670: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x183670u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
label_183674:
    // 0x183674: 0x0  nop
    ctx->pc = 0x183674u;
    // NOP
label_183678:
    // 0x183678: 0x0  nop
    ctx->pc = 0x183678u;
    // NOP
label_18367c:
    // 0x18367c: 0x46026036  c.le.s      $f12, $f2
    ctx->pc = 0x18367cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_183680:
    // 0x183680: 0x0  nop
    ctx->pc = 0x183680u;
    // NOP
label_183684:
    // 0x183684: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_183688:
    if (ctx->pc == 0x183688u) {
        ctx->pc = 0x183688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183684u;
        // 0x183688: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18368Cu;
        goto label_18368c;
    }
    ctx->pc = 0x183684u;
    {
        const bool branch_taken_0x183684 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x183688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183684u;
        // 0x183688: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183684) {
            ctx->pc = 0x1836A0u;
            goto label_1836a0;
        }
    }
    ctx->pc = 0x18368Cu;
label_18368c:
    // 0x18368c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x18368cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_183690:
    // 0x183690: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x183690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_183694:
    // 0x183694: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x183694u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_183698:
    // 0x183698: 0x1000000d  b           . + 4 + (0xD << 2)
label_18369c:
    if (ctx->pc == 0x18369Cu) {
        ctx->pc = 0x18369Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183698u;
        // 0x18369c: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1836A0u;
        goto label_1836a0;
    }
    ctx->pc = 0x183698u;
    {
        const bool branch_taken_0x183698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18369Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183698u;
        // 0x18369c: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x183698) {
            ctx->pc = 0x1836D0u;
            goto label_1836d0;
        }
    }
    ctx->pc = 0x1836A0u;
label_1836a0:
    // 0x1836a0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1836a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1836a4:
    // 0x1836a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1836a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1836a8:
    // 0x1836a8: 0x0  nop
    ctx->pc = 0x1836a8u;
    // NOP
label_1836ac:
    // 0x1836ac: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x1836acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1836b0:
    // 0x1836b0: 0x0  nop
    ctx->pc = 0x1836b0u;
    // NOP
label_1836b4:
    // 0x1836b4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_1836b8:
    if (ctx->pc == 0x1836B8u) {
        ctx->pc = 0x1836BCu;
        goto label_1836bc;
    }
    ctx->pc = 0x1836B4u;
    {
        const bool branch_taken_0x1836b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1836b4) {
            ctx->pc = 0x1836D0u;
            goto label_1836d0;
        }
    }
    ctx->pc = 0x1836BCu;
label_1836bc:
    // 0x1836bc: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1836bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1836c0:
    // 0x1836c0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1836c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1836c4:
    // 0x1836c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1836c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1836c8:
    // 0x1836c8: 0x10000001  b           . + 4 + (0x1 << 2)
label_1836cc:
    if (ctx->pc == 0x1836CCu) {
        ctx->pc = 0x1836CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1836C8u;
        // 0x1836cc: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1836D0u;
        goto label_1836d0;
    }
    ctx->pc = 0x1836C8u;
    {
        const bool branch_taken_0x1836c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1836CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1836C8u;
        // 0x1836cc: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1836c8) {
            ctx->pc = 0x1836D0u;
            goto label_1836d0;
        }
    }
    ctx->pc = 0x1836D0u;
label_1836d0:
    // 0x1836d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1836d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1836d4:
    // 0x1836d4: 0xc0625b8  jal         func_1896E0
label_1836d8:
    if (ctx->pc == 0x1836D8u) {
        ctx->pc = 0x1836D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1836D4u;
        // 0x1836d8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1836DCu;
        goto label_1836dc;
    }
    ctx->pc = 0x1836D4u;
    SET_GPR_U32(ctx, 31, 0x1836DCu);
    ctx->pc = 0x1836D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1836D4u;
    // 0x1836d8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1896E0u;
    { ctx->pc = 0x1896e0; return; }
    ctx->pc = 0x1836DCu;
label_1836dc:
    // 0x1836dc: 0x92440036  lbu         $a0, 0x36($s2)
    ctx->pc = 0x1836dcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 54)));
label_1836e0:
    // 0x1836e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1836e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1836e4:
    // 0x1836e4: 0xa2240237  sb          $a0, 0x237($s1)
    ctx->pc = 0x1836e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 567), (uint8_t)GPR_U32(ctx, 4));
label_1836e8:
    // 0x1836e8: 0x92440036  lbu         $a0, 0x36($s2)
    ctx->pc = 0x1836e8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 54)));
label_1836ec:
    // 0x1836ec: 0x14830013  bne         $a0, $v1, . + 4 + (0x13 << 2)
label_1836f0:
    if (ctx->pc == 0x1836F0u) {
        ctx->pc = 0x1836F4u;
        goto label_1836f4;
    }
    ctx->pc = 0x1836ECu;
    {
        const bool branch_taken_0x1836ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1836ec) {
            ctx->pc = 0x18373Cu;
            goto label_18373c;
        }
    }
    ctx->pc = 0x1836F4u;
label_1836f4:
    // 0x1836f4: 0x92430034  lbu         $v1, 0x34($s2)
    ctx->pc = 0x1836f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 52)));
label_1836f8:
    // 0x1836f8: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x1836f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
label_1836fc:
    // 0x1836fc: 0x92440038  lbu         $a0, 0x38($s2)
    ctx->pc = 0x1836fcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 56)));
label_183700:
    // 0x183700: 0x24a525a9  addiu       $a1, $a1, 0x25A9
    ctx->pc = 0x183700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9641));
label_183704:
    // 0x183704: 0x38670001  xori        $a3, $v1, 0x1
    ctx->pc = 0x183704u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_183708:
    // 0x183708: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x183708u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_18370c:
    // 0x18370c: 0x73200  sll         $a2, $a3, 8
    ctx->pc = 0x18370cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_183710:
    // 0x183710: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x183710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_183714:
    // 0x183714: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x183714u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_183718:
    // 0x183718: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x183718u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_18371c:
    // 0x18371c: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x18371cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_183720:
    // 0x183720: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x183720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_183724:
    // 0x183724: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x183724u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_183728:
    // 0x183728: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x183728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_18372c:
    // 0x18372c: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x18372cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
label_183730:
    // 0x183730: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x183730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_183734:
    // 0x183734: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x183734u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_183738:
    // 0x183738: 0xa2230236  sb          $v1, 0x236($s1)
    ctx->pc = 0x183738u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 566), (uint8_t)GPR_U32(ctx, 3));
label_18373c:
    // 0x18373c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x18373cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_183740:
    // 0x183740: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x183740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_183744:
    // 0x183744: 0x90840014  lbu         $a0, 0x14($a0)
    ctx->pc = 0x183744u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
label_183748:
    // 0x183748: 0x1083013c  beq         $a0, $v1, . + 4 + (0x13C << 2)
label_18374c:
    if (ctx->pc == 0x18374Cu) {
        ctx->pc = 0x183750u;
        goto label_183750;
    }
    ctx->pc = 0x183748u;
    {
        const bool branch_taken_0x183748 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x183748) {
            ctx->pc = 0x183C3Cu;
            { ctx->pc = 0x183c3c; return; }
        }
    }
    ctx->pc = 0x183750u;
label_183750:
    // 0x183750: 0xc6200150  lwc1        $f0, 0x150($s1)
    ctx->pc = 0x183750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_183754:
    // 0x183754: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x183754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_183758:
    // 0x183758: 0xc6200158  lwc1        $f0, 0x158($s1)
    ctx->pc = 0x183758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18375c:
    // 0x18375c: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x18375cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_183760:
    // 0x183760: 0x92420020  lbu         $v0, 0x20($s2)
    ctx->pc = 0x183760u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 32)));
label_183764:
    // 0x183764: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_183768:
    if (ctx->pc == 0x183768u) {
        ctx->pc = 0x183768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183764u;
        // 0x183768: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18376Cu;
        goto label_18376c;
    }
    ctx->pc = 0x183764u;
    {
        const bool branch_taken_0x183764 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x183768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183764u;
        // 0x183768: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183764) {
            ctx->pc = 0x183778u;
            goto label_183778;
        }
    }
    ctx->pc = 0x18376Cu;
label_18376c:
    // 0x18376c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18376cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_183770:
    // 0x183770: 0x10000007  b           . + 4 + (0x7 << 2)
label_183774:
    if (ctx->pc == 0x183774u) {
        ctx->pc = 0x183774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183770u;
        // 0x183774: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x183778u;
        goto label_183778;
    }
    ctx->pc = 0x183770u;
    {
        const bool branch_taken_0x183770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183770u;
        // 0x183774: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x183770) {
            ctx->pc = 0x183790u;
            goto label_183790;
        }
    }
    ctx->pc = 0x183778u;
label_183778:
    // 0x183778: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x183778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_18377c:
    // 0x18377c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18377cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_183780:
    // 0x183780: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x183780u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_183784:
    // 0x183784: 0x0  nop
    ctx->pc = 0x183784u;
    // NOP
label_183788:
    // 0x183788: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x183788u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_18378c:
    // 0x18378c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x18378cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_183790:
    // 0x183790: 0x3c034234  lui         $v1, 0x4234
    ctx->pc = 0x183790u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16948 << 16));
label_183794:
    // 0x183794: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x183794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_183798:
    // 0x183798: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x183798u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18379c:
    // 0x18379c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18379cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1837a0:
    // 0x1837a0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1837a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1837a4:
    // 0x1837a4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1837a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1837a8:
    // 0x1837a8: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x1837a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_1837ac:
    // 0x1837ac: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x1837acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1837b0:
    // 0x1837b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1837b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1837b4:
    // 0x1837b4: 0x0  nop
    ctx->pc = 0x1837b4u;
    // NOP
label_1837b8:
    // 0x1837b8: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1837b8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
label_1837bc:
    // 0x1837bc: 0x0  nop
    ctx->pc = 0x1837bcu;
    // NOP
label_1837c0:
    // 0x1837c0: 0x0  nop
    ctx->pc = 0x1837c0u;
    // NOP
label_1837c4:
    // 0x1837c4: 0x46026036  c.le.s      $f12, $f2
    ctx->pc = 0x1837c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1837c8:
    // 0x1837c8: 0x0  nop
    ctx->pc = 0x1837c8u;
    // NOP
label_1837cc:
    // 0x1837cc: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_1837d0:
    if (ctx->pc == 0x1837D0u) {
        ctx->pc = 0x1837D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1837CCu;
        // 0x1837d0: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1837D4u;
        goto label_1837d4;
    }
    ctx->pc = 0x1837CCu;
    {
        const bool branch_taken_0x1837cc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1837D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1837CCu;
        // 0x1837d0: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1837cc) {
            ctx->pc = 0x1837E8u;
            goto label_1837e8;
        }
    }
    ctx->pc = 0x1837D4u;
label_1837d4:
    // 0x1837d4: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1837d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1837d8:
    // 0x1837d8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1837d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1837dc:
    // 0x1837dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1837dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1837e0:
    // 0x1837e0: 0x1000000d  b           . + 4 + (0xD << 2)
label_1837e4:
    if (ctx->pc == 0x1837E4u) {
        ctx->pc = 0x1837E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1837E0u;
        // 0x1837e4: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1837E8u;
        goto label_1837e8;
    }
    ctx->pc = 0x1837E0u;
    {
        const bool branch_taken_0x1837e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1837E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1837E0u;
        // 0x1837e4: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1837e0) {
            ctx->pc = 0x183818u;
            goto label_183818;
        }
    }
    ctx->pc = 0x1837E8u;
label_1837e8:
    // 0x1837e8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1837e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1837ec:
    // 0x1837ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1837ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1837f0:
    // 0x1837f0: 0x0  nop
    ctx->pc = 0x1837f0u;
    // NOP
label_1837f4:
    // 0x1837f4: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x1837f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1837f8:
    // 0x1837f8: 0x0  nop
    ctx->pc = 0x1837f8u;
    // NOP
label_1837fc:
    // 0x1837fc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_183800:
    if (ctx->pc == 0x183800u) {
        ctx->pc = 0x183804u;
        goto label_183804;
    }
    ctx->pc = 0x1837FCu;
    {
        const bool branch_taken_0x1837fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1837fc) {
            ctx->pc = 0x183818u;
            goto label_183818;
        }
    }
    ctx->pc = 0x183804u;
label_183804:
    // 0x183804: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x183804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_183808:
    // 0x183808: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x183808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_18380c:
    // 0x18380c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18380cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_183810:
    // 0x183810: 0x10000001  b           . + 4 + (0x1 << 2)
label_183814:
    if (ctx->pc == 0x183814u) {
        ctx->pc = 0x183814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183810u;
        // 0x183814: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x183818u;
        goto label_183818;
    }
    ctx->pc = 0x183810u;
    {
        const bool branch_taken_0x183810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183810u;
        // 0x183814: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x183810) {
            ctx->pc = 0x183818u;
            goto label_183818;
        }
    }
    ctx->pc = 0x183818u;
label_183818:
    // 0x183818: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x183818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18381c:
    // 0x18381c: 0xc062900  jal         func_18A400
label_183820:
    if (ctx->pc == 0x183820u) {
        ctx->pc = 0x183820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18381Cu;
        // 0x183820: 0x27a50098  addiu       $a1, $sp, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183824u;
        goto label_183824;
    }
    ctx->pc = 0x18381Cu;
    SET_GPR_U32(ctx, 31, 0x183824u);
    ctx->pc = 0x183820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18381Cu;
    // 0x183820: 0x27a50098  addiu       $a1, $sp, 0x98 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A400u;
    { ctx->pc = 0x18a400; return; }
    ctx->pc = 0x183824u;
label_183824:
    // 0x183824: 0x10000106  b           . + 4 + (0x106 << 2)
label_183828:
    if (ctx->pc == 0x183828u) {
        ctx->pc = 0x183828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183824u;
        // 0x183828: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18382Cu;
        goto label_18382c;
    }
    ctx->pc = 0x183824u;
    {
        const bool branch_taken_0x183824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183824u;
        // 0x183828: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183824) {
            ctx->pc = 0x183C40u;
            { ctx->pc = 0x183c40; return; }
        }
    }
    ctx->pc = 0x18382Cu;
label_18382c:
    // 0x18382c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18382cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_183830:
    // 0x183830: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x183830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_183834:
    // 0x183834: 0xc061294  jal         func_184A50
label_183838:
    if (ctx->pc == 0x183838u) {
        ctx->pc = 0x183838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183834u;
        // 0x183838: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18383Cu;
        goto label_18383c;
    }
    ctx->pc = 0x183834u;
    SET_GPR_U32(ctx, 31, 0x18383Cu);
    ctx->pc = 0x183838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183834u;
    // 0x183838: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184A50u;
    { ctx->pc = 0x184a50; return; }
    ctx->pc = 0x18383Cu;
label_18383c:
    // 0x18383c: 0x100000ff  b           . + 4 + (0xFF << 2)
label_183840:
    if (ctx->pc == 0x183840u) {
        ctx->pc = 0x183844u;
        goto label_183844;
    }
    ctx->pc = 0x18383Cu;
    {
        const bool branch_taken_0x18383c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18383c) {
            ctx->pc = 0x183C3Cu;
            { ctx->pc = 0x183c3c; return; }
        }
    }
    ctx->pc = 0x183844u;
label_183844:
    // 0x183844: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x183844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_183848:
    // 0x183848: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x183848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18384c:
    // 0x18384c: 0xc061008  jal         func_184020
label_183850:
    if (ctx->pc == 0x183850u) {
        ctx->pc = 0x183850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18384Cu;
        // 0x183850: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183854u;
        goto label_183854;
    }
    ctx->pc = 0x18384Cu;
    SET_GPR_U32(ctx, 31, 0x183854u);
    ctx->pc = 0x183850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18384Cu;
    // 0x183850: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184020u;
    { ctx->pc = 0x184020; return; }
    ctx->pc = 0x183854u;
label_183854:
    // 0x183854: 0x100000f9  b           . + 4 + (0xF9 << 2)
label_183858:
    if (ctx->pc == 0x183858u) {
        ctx->pc = 0x18385Cu;
        goto label_18385c;
    }
    ctx->pc = 0x183854u;
    {
        const bool branch_taken_0x183854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x183854) {
            ctx->pc = 0x183C3Cu;
            { ctx->pc = 0x183c3c; return; }
        }
    }
    ctx->pc = 0x18385Cu;
label_18385c:
    // 0x18385c: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x18385cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_183860:
    // 0x183860: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x183860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_183864:
    // 0x183864: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x183864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_183868:
    // 0x183868: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x183868u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18386c:
    // 0x18386c: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x18386cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_183870:
    // 0x183870: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x183870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_183874:
    // 0x183874: 0xc062adc  jal         func_18AB70
label_183878:
    if (ctx->pc == 0x183878u) {
        ctx->pc = 0x183878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183874u;
        // 0x183878: 0xe7a00088  swc1        $f0, 0x88($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18387Cu;
        goto label_18387c;
    }
    ctx->pc = 0x183874u;
    SET_GPR_U32(ctx, 31, 0x18387Cu);
    ctx->pc = 0x183878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183874u;
    // 0x183878: 0xe7a00088  swc1        $f0, 0x88($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AB70u;
    { ctx->pc = 0x18ab70; return; }
    ctx->pc = 0x18387Cu;
label_18387c:
    // 0x18387c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_183880:
    if (ctx->pc == 0x183880u) {
        ctx->pc = 0x183880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18387Cu;
        // 0x183880: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183884u;
        goto label_183884;
    }
    ctx->pc = 0x18387Cu;
    {
        const bool branch_taken_0x18387c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x183880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18387Cu;
        // 0x183880: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18387c) {
            ctx->pc = 0x18388Cu;
            goto label_18388c;
        }
    }
    ctx->pc = 0x183884u;
label_183884:
    // 0x183884: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x183884u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_183888:
    // 0x183888: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x183888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_18388c:
    // 0x18388c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18388cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_183890:
    // 0x183890: 0xc052408  jal         func_149020
label_183894:
    if (ctx->pc == 0x183894u) {
        ctx->pc = 0x183894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183890u;
        // 0x183894: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x183898u;
        goto label_183898;
    }
    ctx->pc = 0x183890u;
    SET_GPR_U32(ctx, 31, 0x183898u);
    ctx->pc = 0x183894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183890u;
    // 0x183894: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149020u, 0x183890u, 0x183898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183898u;
label_183898:
    // 0x183898: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
label_18389c:
    if (ctx->pc == 0x18389Cu) {
        ctx->pc = 0x1838A0u;
        goto label_1838a0;
    }
    ctx->pc = 0x183898u;
    {
        const bool branch_taken_0x183898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x183898) {
            ctx->pc = 0x183974u;
            { ctx->pc = 0x183974; return; }
        }
    }
    ctx->pc = 0x1838A0u;
label_1838a0:
    // 0x1838a0: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x1838a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1838a4:
    // 0x1838a4: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1838a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_1838a8:
    // 0x1838a8: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x1838a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1838ac:
    // 0x1838ac: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x1838acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_1838b0:
    // 0x1838b0: 0x92420020  lbu         $v0, 0x20($s2)
    ctx->pc = 0x1838b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 32)));
label_1838b4:
    // 0x1838b4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_1838b8:
    if (ctx->pc == 0x1838B8u) {
        ctx->pc = 0x1838B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1838B4u;
        // 0x1838b8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1838BCu;
        goto label_1838bc;
    }
    ctx->pc = 0x1838B4u;
    {
        const bool branch_taken_0x1838b4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1838B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1838B4u;
        // 0x1838b8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1838b4) {
            ctx->pc = 0x1838C8u;
            goto label_1838c8;
        }
    }
    ctx->pc = 0x1838BCu;
label_1838bc:
    // 0x1838bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1838bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1838c0:
    // 0x1838c0: 0x10000007  b           . + 4 + (0x7 << 2)
label_1838c4:
    if (ctx->pc == 0x1838C4u) {
        ctx->pc = 0x1838C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1838C0u;
        // 0x1838c4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1838C8u;
        goto label_1838c8;
    }
    ctx->pc = 0x1838C0u;
    {
        const bool branch_taken_0x1838c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1838C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1838C0u;
        // 0x1838c4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1838c0) {
            ctx->pc = 0x1838E0u;
            goto label_1838e0;
        }
    }
    ctx->pc = 0x1838C8u;
label_1838c8:
    // 0x1838c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1838c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1838cc:
    // 0x1838cc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1838ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1838d0:
    // 0x1838d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1838d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1838d4:
    // 0x1838d4: 0x0  nop
    ctx->pc = 0x1838d4u;
    // NOP
label_1838d8:
    // 0x1838d8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1838d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1838dc:
    // 0x1838dc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1838dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1838e0:
    // 0x1838e0: 0x3c034234  lui         $v1, 0x4234
    ctx->pc = 0x1838e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16948 << 16));
label_1838e4:
    // 0x1838e4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1838e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1838e8:
    // 0x1838e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1838e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1838ec:
    // 0x1838ec: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1838ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1838f0:
    // 0x1838f0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1838f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1838f4:
    // 0x1838f4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1838f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1838f8:
    // 0x1838f8: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x1838f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_1838fc:
    // 0x1838fc: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x1838fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_183900:
    // 0x183900: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x183900u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_183904:
    // 0x183904: 0x0  nop
    ctx->pc = 0x183904u;
    // NOP
label_183908:
    // 0x183908: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x183908u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
label_18390c:
    // 0x18390c: 0x0  nop
    ctx->pc = 0x18390cu;
    // NOP
label_183910:
    // 0x183910: 0x0  nop
    ctx->pc = 0x183910u;
    // NOP
label_183914:
    // 0x183914: 0x46026036  c.le.s      $f12, $f2
    ctx->pc = 0x183914u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_183918:
    // 0x183918: 0x0  nop
    ctx->pc = 0x183918u;
    // NOP
label_18391c:
    // 0x18391c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x183920u;
    return;
}

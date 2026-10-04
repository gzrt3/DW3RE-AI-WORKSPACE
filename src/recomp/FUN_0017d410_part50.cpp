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


void FUN_0017d410_part50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1952e0u: goto label_1952e0;
        case 0x1952e4u: goto label_1952e4;
        case 0x1952e8u: goto label_1952e8;
        case 0x1952ecu: goto label_1952ec;
        case 0x1952f0u: goto label_1952f0;
        case 0x1952f4u: goto label_1952f4;
        case 0x1952f8u: goto label_1952f8;
        case 0x1952fcu: goto label_1952fc;
        case 0x195300u: goto label_195300;
        case 0x195304u: goto label_195304;
        case 0x195308u: goto label_195308;
        case 0x19530cu: goto label_19530c;
        case 0x195310u: goto label_195310;
        case 0x195314u: goto label_195314;
        case 0x195318u: goto label_195318;
        case 0x19531cu: goto label_19531c;
        case 0x195320u: goto label_195320;
        case 0x195324u: goto label_195324;
        case 0x195328u: goto label_195328;
        case 0x19532cu: goto label_19532c;
        case 0x195330u: goto label_195330;
        case 0x195334u: goto label_195334;
        case 0x195338u: goto label_195338;
        case 0x19533cu: goto label_19533c;
        case 0x195340u: goto label_195340;
        case 0x195344u: goto label_195344;
        case 0x195348u: goto label_195348;
        case 0x19534cu: goto label_19534c;
        case 0x195350u: goto label_195350;
        case 0x195354u: goto label_195354;
        case 0x195358u: goto label_195358;
        case 0x19535cu: goto label_19535c;
        case 0x195360u: goto label_195360;
        case 0x195364u: goto label_195364;
        case 0x195368u: goto label_195368;
        case 0x19536cu: goto label_19536c;
        case 0x195370u: goto label_195370;
        case 0x195374u: goto label_195374;
        case 0x195378u: goto label_195378;
        case 0x19537cu: goto label_19537c;
        case 0x195380u: goto label_195380;
        case 0x195384u: goto label_195384;
        case 0x195388u: goto label_195388;
        case 0x19538cu: goto label_19538c;
        case 0x195390u: goto label_195390;
        case 0x195394u: goto label_195394;
        case 0x195398u: goto label_195398;
        case 0x19539cu: goto label_19539c;
        case 0x1953a0u: goto label_1953a0;
        case 0x1953a4u: goto label_1953a4;
        case 0x1953a8u: goto label_1953a8;
        case 0x1953acu: goto label_1953ac;
        case 0x1953b0u: goto label_1953b0;
        case 0x1953b4u: goto label_1953b4;
        case 0x1953b8u: goto label_1953b8;
        case 0x1953bcu: goto label_1953bc;
        case 0x1953c0u: goto label_1953c0;
        case 0x1953c4u: goto label_1953c4;
        case 0x1953c8u: goto label_1953c8;
        case 0x1953ccu: goto label_1953cc;
        case 0x1953d0u: goto label_1953d0;
        case 0x1953d4u: goto label_1953d4;
        case 0x1953d8u: goto label_1953d8;
        case 0x1953dcu: goto label_1953dc;
        case 0x1953e0u: goto label_1953e0;
        case 0x1953e4u: goto label_1953e4;
        case 0x1953e8u: goto label_1953e8;
        case 0x1953ecu: goto label_1953ec;
        case 0x1953f0u: goto label_1953f0;
        case 0x1953f4u: goto label_1953f4;
        case 0x1953f8u: goto label_1953f8;
        case 0x1953fcu: goto label_1953fc;
        case 0x195400u: goto label_195400;
        case 0x195404u: goto label_195404;
        case 0x195408u: goto label_195408;
        case 0x19540cu: goto label_19540c;
        case 0x195410u: goto label_195410;
        case 0x195414u: goto label_195414;
        case 0x195418u: goto label_195418;
        case 0x19541cu: goto label_19541c;
        case 0x195420u: goto label_195420;
        case 0x195424u: goto label_195424;
        case 0x195428u: goto label_195428;
        case 0x19542cu: goto label_19542c;
        case 0x195430u: goto label_195430;
        case 0x195434u: goto label_195434;
        case 0x195438u: goto label_195438;
        case 0x19543cu: goto label_19543c;
        case 0x195440u: goto label_195440;
        case 0x195444u: goto label_195444;
        case 0x195448u: goto label_195448;
        case 0x19544cu: goto label_19544c;
        case 0x195450u: goto label_195450;
        case 0x195454u: goto label_195454;
        case 0x195458u: goto label_195458;
        case 0x19545cu: goto label_19545c;
        case 0x195460u: goto label_195460;
        case 0x195464u: goto label_195464;
        case 0x195468u: goto label_195468;
        case 0x19546cu: goto label_19546c;
        case 0x195470u: goto label_195470;
        case 0x195474u: goto label_195474;
        case 0x195478u: goto label_195478;
        case 0x19547cu: goto label_19547c;
        case 0x195480u: goto label_195480;
        case 0x195484u: goto label_195484;
        case 0x195488u: goto label_195488;
        case 0x19548cu: goto label_19548c;
        case 0x195490u: goto label_195490;
        case 0x195494u: goto label_195494;
        case 0x195498u: goto label_195498;
        case 0x19549cu: goto label_19549c;
        case 0x1954a0u: goto label_1954a0;
        case 0x1954a4u: goto label_1954a4;
        case 0x1954a8u: goto label_1954a8;
        case 0x1954acu: goto label_1954ac;
        case 0x1954b0u: goto label_1954b0;
        case 0x1954b4u: goto label_1954b4;
        case 0x1954b8u: goto label_1954b8;
        case 0x1954bcu: goto label_1954bc;
        case 0x1954c0u: goto label_1954c0;
        case 0x1954c4u: goto label_1954c4;
        case 0x1954c8u: goto label_1954c8;
        case 0x1954ccu: goto label_1954cc;
        case 0x1954d0u: goto label_1954d0;
        case 0x1954d4u: goto label_1954d4;
        case 0x1954d8u: goto label_1954d8;
        case 0x1954dcu: goto label_1954dc;
        case 0x1954e0u: goto label_1954e0;
        case 0x1954e4u: goto label_1954e4;
        case 0x1954e8u: goto label_1954e8;
        case 0x1954ecu: goto label_1954ec;
        case 0x1954f0u: goto label_1954f0;
        case 0x1954f4u: goto label_1954f4;
        case 0x1954f8u: goto label_1954f8;
        case 0x1954fcu: goto label_1954fc;
        case 0x195500u: goto label_195500;
        case 0x195504u: goto label_195504;
        case 0x195508u: goto label_195508;
        case 0x19550cu: goto label_19550c;
        case 0x195510u: goto label_195510;
        case 0x195514u: goto label_195514;
        case 0x195518u: goto label_195518;
        case 0x19551cu: goto label_19551c;
        case 0x195520u: goto label_195520;
        case 0x195524u: goto label_195524;
        case 0x195528u: goto label_195528;
        case 0x19552cu: goto label_19552c;
        case 0x195530u: goto label_195530;
        case 0x195534u: goto label_195534;
        case 0x195538u: goto label_195538;
        case 0x19553cu: goto label_19553c;
        case 0x195540u: goto label_195540;
        case 0x195544u: goto label_195544;
        case 0x195548u: goto label_195548;
        case 0x19554cu: goto label_19554c;
        case 0x195550u: goto label_195550;
        case 0x195554u: goto label_195554;
        case 0x195558u: goto label_195558;
        case 0x19555cu: goto label_19555c;
        case 0x195560u: goto label_195560;
        case 0x195564u: goto label_195564;
        case 0x195568u: goto label_195568;
        case 0x19556cu: goto label_19556c;
        case 0x195570u: goto label_195570;
        case 0x195574u: goto label_195574;
        case 0x195578u: goto label_195578;
        case 0x19557cu: goto label_19557c;
        case 0x195580u: goto label_195580;
        case 0x195584u: goto label_195584;
        case 0x195588u: goto label_195588;
        case 0x19558cu: goto label_19558c;
        case 0x195590u: goto label_195590;
        case 0x195594u: goto label_195594;
        case 0x195598u: goto label_195598;
        case 0x19559cu: goto label_19559c;
        case 0x1955a0u: goto label_1955a0;
        case 0x1955a4u: goto label_1955a4;
        case 0x1955a8u: goto label_1955a8;
        case 0x1955acu: goto label_1955ac;
        case 0x1955b0u: goto label_1955b0;
        case 0x1955b4u: goto label_1955b4;
        case 0x1955b8u: goto label_1955b8;
        case 0x1955bcu: goto label_1955bc;
        case 0x1955c0u: goto label_1955c0;
        case 0x1955c4u: goto label_1955c4;
        case 0x1955c8u: goto label_1955c8;
        case 0x1955ccu: goto label_1955cc;
        case 0x1955d0u: goto label_1955d0;
        case 0x1955d4u: goto label_1955d4;
        case 0x1955d8u: goto label_1955d8;
        case 0x1955dcu: goto label_1955dc;
        case 0x1955e0u: goto label_1955e0;
        case 0x1955e4u: goto label_1955e4;
        case 0x1955e8u: goto label_1955e8;
        case 0x1955ecu: goto label_1955ec;
        case 0x1955f0u: goto label_1955f0;
        case 0x1955f4u: goto label_1955f4;
        case 0x1955f8u: goto label_1955f8;
        case 0x1955fcu: goto label_1955fc;
        case 0x195600u: goto label_195600;
        case 0x195604u: goto label_195604;
        case 0x195608u: goto label_195608;
        case 0x19560cu: goto label_19560c;
        case 0x195610u: goto label_195610;
        case 0x195614u: goto label_195614;
        case 0x195618u: goto label_195618;
        case 0x19561cu: goto label_19561c;
        case 0x195620u: goto label_195620;
        case 0x195624u: goto label_195624;
        case 0x195628u: goto label_195628;
        case 0x19562cu: goto label_19562c;
        case 0x195630u: goto label_195630;
        case 0x195634u: goto label_195634;
        case 0x195638u: goto label_195638;
        case 0x19563cu: goto label_19563c;
        case 0x195640u: goto label_195640;
        case 0x195644u: goto label_195644;
        case 0x195648u: goto label_195648;
        case 0x19564cu: goto label_19564c;
        case 0x195650u: goto label_195650;
        case 0x195654u: goto label_195654;
        case 0x195658u: goto label_195658;
        case 0x19565cu: goto label_19565c;
        case 0x195660u: goto label_195660;
        case 0x195664u: goto label_195664;
        case 0x195668u: goto label_195668;
        case 0x19566cu: goto label_19566c;
        case 0x195670u: goto label_195670;
        case 0x195674u: goto label_195674;
        case 0x195678u: goto label_195678;
        case 0x19567cu: goto label_19567c;
        case 0x195680u: goto label_195680;
        case 0x195684u: goto label_195684;
        case 0x195688u: goto label_195688;
        case 0x19568cu: goto label_19568c;
        case 0x195690u: goto label_195690;
        case 0x195694u: goto label_195694;
        case 0x195698u: goto label_195698;
        case 0x19569cu: goto label_19569c;
        case 0x1956a0u: goto label_1956a0;
        case 0x1956a4u: goto label_1956a4;
        case 0x1956a8u: goto label_1956a8;
        case 0x1956acu: goto label_1956ac;
        case 0x1956b0u: goto label_1956b0;
        case 0x1956b4u: goto label_1956b4;
        case 0x1956b8u: goto label_1956b8;
        case 0x1956bcu: goto label_1956bc;
        case 0x1956c0u: goto label_1956c0;
        case 0x1956c4u: goto label_1956c4;
        case 0x1956c8u: goto label_1956c8;
        case 0x1956ccu: goto label_1956cc;
        case 0x1956d0u: goto label_1956d0;
        case 0x1956d4u: goto label_1956d4;
        case 0x1956d8u: goto label_1956d8;
        case 0x1956dcu: goto label_1956dc;
        case 0x1956e0u: goto label_1956e0;
        case 0x1956e4u: goto label_1956e4;
        case 0x1956e8u: goto label_1956e8;
        case 0x1956ecu: goto label_1956ec;
        case 0x1956f0u: goto label_1956f0;
        case 0x1956f4u: goto label_1956f4;
        case 0x1956f8u: goto label_1956f8;
        case 0x1956fcu: goto label_1956fc;
        case 0x195700u: goto label_195700;
        case 0x195704u: goto label_195704;
        case 0x195708u: goto label_195708;
        case 0x19570cu: goto label_19570c;
        case 0x195710u: goto label_195710;
        case 0x195714u: goto label_195714;
        case 0x195718u: goto label_195718;
        case 0x19571cu: goto label_19571c;
        case 0x195720u: goto label_195720;
        case 0x195724u: goto label_195724;
        case 0x195728u: goto label_195728;
        case 0x19572cu: goto label_19572c;
        case 0x195730u: goto label_195730;
        case 0x195734u: goto label_195734;
        case 0x195738u: goto label_195738;
        case 0x19573cu: goto label_19573c;
        case 0x195740u: goto label_195740;
        case 0x195744u: goto label_195744;
        case 0x195748u: goto label_195748;
        case 0x19574cu: goto label_19574c;
        case 0x195750u: goto label_195750;
        case 0x195754u: goto label_195754;
        case 0x195758u: goto label_195758;
        case 0x19575cu: goto label_19575c;
        case 0x195760u: goto label_195760;
        case 0x195764u: goto label_195764;
        case 0x195768u: goto label_195768;
        case 0x19576cu: goto label_19576c;
        case 0x195770u: goto label_195770;
        case 0x195774u: goto label_195774;
        case 0x195778u: goto label_195778;
        case 0x19577cu: goto label_19577c;
        case 0x195780u: goto label_195780;
        case 0x195784u: goto label_195784;
        case 0x195788u: goto label_195788;
        case 0x19578cu: goto label_19578c;
        case 0x195790u: goto label_195790;
        case 0x195794u: goto label_195794;
        case 0x195798u: goto label_195798;
        case 0x19579cu: goto label_19579c;
        case 0x1957a0u: goto label_1957a0;
        case 0x1957a4u: goto label_1957a4;
        case 0x1957a8u: goto label_1957a8;
        case 0x1957acu: goto label_1957ac;
        case 0x1957b0u: goto label_1957b0;
        case 0x1957b4u: goto label_1957b4;
        case 0x1957b8u: goto label_1957b8;
        case 0x1957bcu: goto label_1957bc;
        case 0x1957c0u: goto label_1957c0;
        case 0x1957c4u: goto label_1957c4;
        case 0x1957c8u: goto label_1957c8;
        case 0x1957ccu: goto label_1957cc;
        case 0x1957d0u: goto label_1957d0;
        case 0x1957d4u: goto label_1957d4;
        case 0x1957d8u: goto label_1957d8;
        case 0x1957dcu: goto label_1957dc;
        case 0x1957e0u: goto label_1957e0;
        case 0x1957e4u: goto label_1957e4;
        case 0x1957e8u: goto label_1957e8;
        case 0x1957ecu: goto label_1957ec;
        case 0x1957f0u: goto label_1957f0;
        case 0x1957f4u: goto label_1957f4;
        case 0x1957f8u: goto label_1957f8;
        case 0x1957fcu: goto label_1957fc;
        case 0x195800u: goto label_195800;
        case 0x195804u: goto label_195804;
        case 0x195808u: goto label_195808;
        case 0x19580cu: goto label_19580c;
        case 0x195810u: goto label_195810;
        case 0x195814u: goto label_195814;
        case 0x195818u: goto label_195818;
        case 0x19581cu: goto label_19581c;
        case 0x195820u: goto label_195820;
        case 0x195824u: goto label_195824;
        case 0x195828u: goto label_195828;
        case 0x19582cu: goto label_19582c;
        case 0x195830u: goto label_195830;
        case 0x195834u: goto label_195834;
        case 0x195838u: goto label_195838;
        case 0x19583cu: goto label_19583c;
        case 0x195840u: goto label_195840;
        case 0x195844u: goto label_195844;
        case 0x195848u: goto label_195848;
        case 0x19584cu: goto label_19584c;
        case 0x195850u: goto label_195850;
        case 0x195854u: goto label_195854;
        case 0x195858u: goto label_195858;
        case 0x19585cu: goto label_19585c;
        case 0x195860u: goto label_195860;
        case 0x195864u: goto label_195864;
        case 0x195868u: goto label_195868;
        case 0x19586cu: goto label_19586c;
        case 0x195870u: goto label_195870;
        case 0x195874u: goto label_195874;
        case 0x195878u: goto label_195878;
        case 0x19587cu: goto label_19587c;
        case 0x195880u: goto label_195880;
        case 0x195884u: goto label_195884;
        case 0x195888u: goto label_195888;
        case 0x19588cu: goto label_19588c;
        case 0x195890u: goto label_195890;
        case 0x195894u: goto label_195894;
        case 0x195898u: goto label_195898;
        case 0x19589cu: goto label_19589c;
        case 0x1958a0u: goto label_1958a0;
        case 0x1958a4u: goto label_1958a4;
        case 0x1958a8u: goto label_1958a8;
        case 0x1958acu: goto label_1958ac;
        case 0x1958b0u: goto label_1958b0;
        case 0x1958b4u: goto label_1958b4;
        case 0x1958b8u: goto label_1958b8;
        case 0x1958bcu: goto label_1958bc;
        case 0x1958c0u: goto label_1958c0;
        case 0x1958c4u: goto label_1958c4;
        case 0x1958c8u: goto label_1958c8;
        case 0x1958ccu: goto label_1958cc;
        case 0x1958d0u: goto label_1958d0;
        case 0x1958d4u: goto label_1958d4;
        case 0x1958d8u: goto label_1958d8;
        case 0x1958dcu: goto label_1958dc;
        case 0x1958e0u: goto label_1958e0;
        case 0x1958e4u: goto label_1958e4;
        case 0x1958e8u: goto label_1958e8;
        case 0x1958ecu: goto label_1958ec;
        case 0x1958f0u: goto label_1958f0;
        case 0x1958f4u: goto label_1958f4;
        case 0x1958f8u: goto label_1958f8;
        case 0x1958fcu: goto label_1958fc;
        case 0x195900u: goto label_195900;
        case 0x195904u: goto label_195904;
        case 0x195908u: goto label_195908;
        case 0x19590cu: goto label_19590c;
        case 0x195910u: goto label_195910;
        case 0x195914u: goto label_195914;
        case 0x195918u: goto label_195918;
        case 0x19591cu: goto label_19591c;
        case 0x195920u: goto label_195920;
        case 0x195924u: goto label_195924;
        case 0x195928u: goto label_195928;
        case 0x19592cu: goto label_19592c;
        case 0x195930u: goto label_195930;
        case 0x195934u: goto label_195934;
        case 0x195938u: goto label_195938;
        case 0x19593cu: goto label_19593c;
        case 0x195940u: goto label_195940;
        case 0x195944u: goto label_195944;
        case 0x195948u: goto label_195948;
        case 0x19594cu: goto label_19594c;
        case 0x195950u: goto label_195950;
        case 0x195954u: goto label_195954;
        case 0x195958u: goto label_195958;
        case 0x19595cu: goto label_19595c;
        case 0x195960u: goto label_195960;
        case 0x195964u: goto label_195964;
        case 0x195968u: goto label_195968;
        case 0x19596cu: goto label_19596c;
        case 0x195970u: goto label_195970;
        case 0x195974u: goto label_195974;
        case 0x195978u: goto label_195978;
        case 0x19597cu: goto label_19597c;
        case 0x195980u: goto label_195980;
        case 0x195984u: goto label_195984;
        case 0x195988u: goto label_195988;
        case 0x19598cu: goto label_19598c;
        case 0x195990u: goto label_195990;
        case 0x195994u: goto label_195994;
        case 0x195998u: goto label_195998;
        case 0x19599cu: goto label_19599c;
        case 0x1959a0u: goto label_1959a0;
        case 0x1959a4u: goto label_1959a4;
        case 0x1959a8u: goto label_1959a8;
        case 0x1959acu: goto label_1959ac;
        case 0x1959b0u: goto label_1959b0;
        case 0x1959b4u: goto label_1959b4;
        case 0x1959b8u: goto label_1959b8;
        case 0x1959bcu: goto label_1959bc;
        case 0x1959c0u: goto label_1959c0;
        case 0x1959c4u: goto label_1959c4;
        case 0x1959c8u: goto label_1959c8;
        case 0x1959ccu: goto label_1959cc;
        case 0x1959d0u: goto label_1959d0;
        case 0x1959d4u: goto label_1959d4;
        case 0x1959d8u: goto label_1959d8;
        case 0x1959dcu: goto label_1959dc;
        case 0x1959e0u: goto label_1959e0;
        case 0x1959e4u: goto label_1959e4;
        case 0x1959e8u: goto label_1959e8;
        case 0x1959ecu: goto label_1959ec;
        case 0x1959f0u: goto label_1959f0;
        case 0x1959f4u: goto label_1959f4;
        case 0x1959f8u: goto label_1959f8;
        case 0x1959fcu: goto label_1959fc;
        case 0x195a00u: goto label_195a00;
        case 0x195a04u: goto label_195a04;
        case 0x195a08u: goto label_195a08;
        case 0x195a0cu: goto label_195a0c;
        case 0x195a10u: goto label_195a10;
        case 0x195a14u: goto label_195a14;
        case 0x195a18u: goto label_195a18;
        case 0x195a1cu: goto label_195a1c;
        case 0x195a20u: goto label_195a20;
        case 0x195a24u: goto label_195a24;
        case 0x195a28u: goto label_195a28;
        case 0x195a2cu: goto label_195a2c;
        case 0x195a30u: goto label_195a30;
        case 0x195a34u: goto label_195a34;
        case 0x195a38u: goto label_195a38;
        case 0x195a3cu: goto label_195a3c;
        case 0x195a40u: goto label_195a40;
        case 0x195a44u: goto label_195a44;
        case 0x195a48u: goto label_195a48;
        case 0x195a4cu: goto label_195a4c;
        case 0x195a50u: goto label_195a50;
        case 0x195a54u: goto label_195a54;
        case 0x195a58u: goto label_195a58;
        case 0x195a5cu: goto label_195a5c;
        case 0x195a60u: goto label_195a60;
        case 0x195a64u: goto label_195a64;
        case 0x195a68u: goto label_195a68;
        case 0x195a6cu: goto label_195a6c;
        case 0x195a70u: goto label_195a70;
        case 0x195a74u: goto label_195a74;
        case 0x195a78u: goto label_195a78;
        case 0x195a7cu: goto label_195a7c;
        case 0x195a80u: goto label_195a80;
        case 0x195a84u: goto label_195a84;
        case 0x195a88u: goto label_195a88;
        case 0x195a8cu: goto label_195a8c;
        case 0x195a90u: goto label_195a90;
        case 0x195a94u: goto label_195a94;
        case 0x195a98u: goto label_195a98;
        case 0x195a9cu: goto label_195a9c;
        case 0x195aa0u: goto label_195aa0;
        case 0x195aa4u: goto label_195aa4;
        case 0x195aa8u: goto label_195aa8;
        case 0x195aacu: goto label_195aac;
        default: return;
    }

label_1952e0:
    // 0x1952e0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_1952e4:
    if (ctx->pc == 0x1952E4u) {
        ctx->pc = 0x1952E8u;
        goto label_1952e8;
    }
    ctx->pc = 0x1952E0u;
    {
        const bool branch_taken_0x1952e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1952e0) {
            ctx->pc = 0x195318u;
            goto label_195318;
        }
    }
    ctx->pc = 0x1952E8u;
label_1952e8:
    // 0x1952e8: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x1952e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_1952ec:
    // 0x1952ec: 0x9085024a  lbu         $a1, 0x24A($a0)
    ctx->pc = 0x1952ecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 586)));
label_1952f0:
    // 0x1952f0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1952f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1952f4:
    // 0x1952f4: 0x286100fa  slti        $at, $v1, 0xFA
    ctx->pc = 0x1952f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)250) ? 1 : 0);
label_1952f8:
    // 0x1952f8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1952fc:
    if (ctx->pc == 0x1952FCu) {
        ctx->pc = 0x195300u;
        goto label_195300;
    }
    ctx->pc = 0x1952F8u;
    {
        const bool branch_taken_0x1952f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1952f8) {
            ctx->pc = 0x195308u;
            goto label_195308;
        }
    }
    ctx->pc = 0x195300u;
label_195300:
    // 0x195300: 0x10000003  b           . + 4 + (0x3 << 2)
label_195304:
    if (ctx->pc == 0x195304u) {
        ctx->pc = 0x195304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195300u;
        // 0x195304: 0xa083024a  sb          $v1, 0x24A($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 586), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195308u;
        goto label_195308;
    }
    ctx->pc = 0x195300u;
    {
        const bool branch_taken_0x195300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195300u;
        // 0x195304: 0xa083024a  sb          $v1, 0x24A($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 586), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195300) {
            ctx->pc = 0x195310u;
            goto label_195310;
        }
    }
    ctx->pc = 0x195308u;
label_195308:
    // 0x195308: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x195308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_19530c:
    // 0x19530c: 0xa083024a  sb          $v1, 0x24A($a0)
    ctx->pc = 0x19530cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 586), (uint8_t)GPR_U32(ctx, 3));
label_195310:
    // 0x195310: 0x1000009c  b           . + 4 + (0x9C << 2)
label_195314:
    if (ctx->pc == 0x195314u) {
        ctx->pc = 0x195318u;
        goto label_195318;
    }
    ctx->pc = 0x195310u;
    {
        const bool branch_taken_0x195310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195310) {
            ctx->pc = 0x195584u;
            goto label_195584;
        }
    }
    ctx->pc = 0x195318u;
label_195318:
    // 0x195318: 0x30e30020  andi        $v1, $a3, 0x20
    ctx->pc = 0x195318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32);
label_19531c:
    // 0x19531c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_195320:
    if (ctx->pc == 0x195320u) {
        ctx->pc = 0x195320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19531Cu;
        // 0x195320: 0x30e30040  andi        $v1, $a3, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        ctx->pc = 0x195324u;
        goto label_195324;
    }
    ctx->pc = 0x19531Cu;
    {
        const bool branch_taken_0x19531c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x195320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19531Cu;
        // 0x195320: 0x30e30040  andi        $v1, $a3, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19531c) {
            ctx->pc = 0x195354u;
            goto label_195354;
        }
    }
    ctx->pc = 0x195324u;
label_195324:
    // 0x195324: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x195324u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_195328:
    // 0x195328: 0x9085024b  lbu         $a1, 0x24B($a0)
    ctx->pc = 0x195328u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 587)));
label_19532c:
    // 0x19532c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x19532cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_195330:
    // 0x195330: 0x286100fa  slti        $at, $v1, 0xFA
    ctx->pc = 0x195330u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)250) ? 1 : 0);
label_195334:
    // 0x195334: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_195338:
    if (ctx->pc == 0x195338u) {
        ctx->pc = 0x19533Cu;
        goto label_19533c;
    }
    ctx->pc = 0x195334u;
    {
        const bool branch_taken_0x195334 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x195334) {
            ctx->pc = 0x195344u;
            goto label_195344;
        }
    }
    ctx->pc = 0x19533Cu;
label_19533c:
    // 0x19533c: 0x10000003  b           . + 4 + (0x3 << 2)
label_195340:
    if (ctx->pc == 0x195340u) {
        ctx->pc = 0x195340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19533Cu;
        // 0x195340: 0xa083024b  sb          $v1, 0x24B($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 587), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195344u;
        goto label_195344;
    }
    ctx->pc = 0x19533Cu;
    {
        const bool branch_taken_0x19533c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19533Cu;
        // 0x195340: 0xa083024b  sb          $v1, 0x24B($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 587), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19533c) {
            ctx->pc = 0x19534Cu;
            goto label_19534c;
        }
    }
    ctx->pc = 0x195344u;
label_195344:
    // 0x195344: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x195344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_195348:
    // 0x195348: 0xa083024b  sb          $v1, 0x24B($a0)
    ctx->pc = 0x195348u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 587), (uint8_t)GPR_U32(ctx, 3));
label_19534c:
    // 0x19534c: 0x1000008d  b           . + 4 + (0x8D << 2)
label_195350:
    if (ctx->pc == 0x195350u) {
        ctx->pc = 0x195354u;
        goto label_195354;
    }
    ctx->pc = 0x19534Cu;
    {
        const bool branch_taken_0x19534c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19534c) {
            ctx->pc = 0x195584u;
            goto label_195584;
        }
    }
    ctx->pc = 0x195354u;
label_195354:
    // 0x195354: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_195358:
    if (ctx->pc == 0x195358u) {
        ctx->pc = 0x19535Cu;
        goto label_19535c;
    }
    ctx->pc = 0x195354u;
    {
        const bool branch_taken_0x195354 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x195354) {
            ctx->pc = 0x19538Cu;
            goto label_19538c;
        }
    }
    ctx->pc = 0x19535Cu;
label_19535c:
    // 0x19535c: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x19535cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_195360:
    // 0x195360: 0x9085024c  lbu         $a1, 0x24C($a0)
    ctx->pc = 0x195360u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 588)));
label_195364:
    // 0x195364: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x195364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_195368:
    // 0x195368: 0x286100fa  slti        $at, $v1, 0xFA
    ctx->pc = 0x195368u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)250) ? 1 : 0);
label_19536c:
    // 0x19536c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_195370:
    if (ctx->pc == 0x195370u) {
        ctx->pc = 0x195374u;
        goto label_195374;
    }
    ctx->pc = 0x19536Cu;
    {
        const bool branch_taken_0x19536c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19536c) {
            ctx->pc = 0x19537Cu;
            goto label_19537c;
        }
    }
    ctx->pc = 0x195374u;
label_195374:
    // 0x195374: 0x10000003  b           . + 4 + (0x3 << 2)
label_195378:
    if (ctx->pc == 0x195378u) {
        ctx->pc = 0x195378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195374u;
        // 0x195378: 0xa083024c  sb          $v1, 0x24C($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 588), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19537Cu;
        goto label_19537c;
    }
    ctx->pc = 0x195374u;
    {
        const bool branch_taken_0x195374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195374u;
        // 0x195378: 0xa083024c  sb          $v1, 0x24C($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 588), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195374) {
            ctx->pc = 0x195384u;
            goto label_195384;
        }
    }
    ctx->pc = 0x19537Cu;
label_19537c:
    // 0x19537c: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x19537cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_195380:
    // 0x195380: 0xa083024c  sb          $v1, 0x24C($a0)
    ctx->pc = 0x195380u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 588), (uint8_t)GPR_U32(ctx, 3));
label_195384:
    // 0x195384: 0x1000007f  b           . + 4 + (0x7F << 2)
label_195388:
    if (ctx->pc == 0x195388u) {
        ctx->pc = 0x19538Cu;
        goto label_19538c;
    }
    ctx->pc = 0x195384u;
    {
        const bool branch_taken_0x195384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195384) {
            ctx->pc = 0x195584u;
            goto label_195584;
        }
    }
    ctx->pc = 0x19538Cu;
label_19538c:
    // 0x19538c: 0x30e30080  andi        $v1, $a3, 0x80
    ctx->pc = 0x19538cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)128);
label_195390:
    // 0x195390: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_195394:
    if (ctx->pc == 0x195394u) {
        ctx->pc = 0x195394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195390u;
        // 0x195394: 0x30e30100  andi        $v1, $a3, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        ctx->pc = 0x195398u;
        goto label_195398;
    }
    ctx->pc = 0x195390u;
    {
        const bool branch_taken_0x195390 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x195394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195390u;
        // 0x195394: 0x30e30100  andi        $v1, $a3, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x195390) {
            ctx->pc = 0x1953C8u;
            goto label_1953c8;
        }
    }
    ctx->pc = 0x195398u;
label_195398:
    // 0x195398: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x195398u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_19539c:
    // 0x19539c: 0x9085024d  lbu         $a1, 0x24D($a0)
    ctx->pc = 0x19539cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 589)));
label_1953a0:
    // 0x1953a0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1953a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1953a4:
    // 0x1953a4: 0x286100fa  slti        $at, $v1, 0xFA
    ctx->pc = 0x1953a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)250) ? 1 : 0);
label_1953a8:
    // 0x1953a8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1953ac:
    if (ctx->pc == 0x1953ACu) {
        ctx->pc = 0x1953B0u;
        goto label_1953b0;
    }
    ctx->pc = 0x1953A8u;
    {
        const bool branch_taken_0x1953a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1953a8) {
            ctx->pc = 0x1953B8u;
            goto label_1953b8;
        }
    }
    ctx->pc = 0x1953B0u;
label_1953b0:
    // 0x1953b0: 0x10000003  b           . + 4 + (0x3 << 2)
label_1953b4:
    if (ctx->pc == 0x1953B4u) {
        ctx->pc = 0x1953B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1953B0u;
        // 0x1953b4: 0xa083024d  sb          $v1, 0x24D($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 589), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1953B8u;
        goto label_1953b8;
    }
    ctx->pc = 0x1953B0u;
    {
        const bool branch_taken_0x1953b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1953B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1953B0u;
        // 0x1953b4: 0xa083024d  sb          $v1, 0x24D($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 589), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1953b0) {
            ctx->pc = 0x1953C0u;
            goto label_1953c0;
        }
    }
    ctx->pc = 0x1953B8u;
label_1953b8:
    // 0x1953b8: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x1953b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_1953bc:
    // 0x1953bc: 0xa083024d  sb          $v1, 0x24D($a0)
    ctx->pc = 0x1953bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 589), (uint8_t)GPR_U32(ctx, 3));
label_1953c0:
    // 0x1953c0: 0x10000070  b           . + 4 + (0x70 << 2)
label_1953c4:
    if (ctx->pc == 0x1953C4u) {
        ctx->pc = 0x1953C8u;
        goto label_1953c8;
    }
    ctx->pc = 0x1953C0u;
    {
        const bool branch_taken_0x1953c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1953c0) {
            ctx->pc = 0x195584u;
            goto label_195584;
        }
    }
    ctx->pc = 0x1953C8u;
label_1953c8:
    // 0x1953c8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_1953cc:
    if (ctx->pc == 0x1953CCu) {
        ctx->pc = 0x1953D0u;
        goto label_1953d0;
    }
    ctx->pc = 0x1953C8u;
    {
        const bool branch_taken_0x1953c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1953c8) {
            ctx->pc = 0x195400u;
            goto label_195400;
        }
    }
    ctx->pc = 0x1953D0u;
label_1953d0:
    // 0x1953d0: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x1953d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_1953d4:
    // 0x1953d4: 0x9085024e  lbu         $a1, 0x24E($a0)
    ctx->pc = 0x1953d4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 590)));
label_1953d8:
    // 0x1953d8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1953d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1953dc:
    // 0x1953dc: 0x286100fa  slti        $at, $v1, 0xFA
    ctx->pc = 0x1953dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)250) ? 1 : 0);
label_1953e0:
    // 0x1953e0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1953e4:
    if (ctx->pc == 0x1953E4u) {
        ctx->pc = 0x1953E8u;
        goto label_1953e8;
    }
    ctx->pc = 0x1953E0u;
    {
        const bool branch_taken_0x1953e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1953e0) {
            ctx->pc = 0x1953F0u;
            goto label_1953f0;
        }
    }
    ctx->pc = 0x1953E8u;
label_1953e8:
    // 0x1953e8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1953ec:
    if (ctx->pc == 0x1953ECu) {
        ctx->pc = 0x1953ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1953E8u;
        // 0x1953ec: 0xa083024e  sb          $v1, 0x24E($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 590), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1953F0u;
        goto label_1953f0;
    }
    ctx->pc = 0x1953E8u;
    {
        const bool branch_taken_0x1953e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1953ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1953E8u;
        // 0x1953ec: 0xa083024e  sb          $v1, 0x24E($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 590), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1953e8) {
            ctx->pc = 0x1953F8u;
            goto label_1953f8;
        }
    }
    ctx->pc = 0x1953F0u;
label_1953f0:
    // 0x1953f0: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x1953f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_1953f4:
    // 0x1953f4: 0xa083024e  sb          $v1, 0x24E($a0)
    ctx->pc = 0x1953f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 590), (uint8_t)GPR_U32(ctx, 3));
label_1953f8:
    // 0x1953f8: 0x10000062  b           . + 4 + (0x62 << 2)
label_1953fc:
    if (ctx->pc == 0x1953FCu) {
        ctx->pc = 0x195400u;
        goto label_195400;
    }
    ctx->pc = 0x1953F8u;
    {
        const bool branch_taken_0x1953f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1953f8) {
            ctx->pc = 0x195584u;
            goto label_195584;
        }
    }
    ctx->pc = 0x195400u;
label_195400:
    // 0x195400: 0x30e30200  andi        $v1, $a3, 0x200
    ctx->pc = 0x195400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)512);
label_195404:
    // 0x195404: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_195408:
    if (ctx->pc == 0x195408u) {
        ctx->pc = 0x195408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195404u;
        // 0x195408: 0x30e30400  andi        $v1, $a3, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19540Cu;
        goto label_19540c;
    }
    ctx->pc = 0x195404u;
    {
        const bool branch_taken_0x195404 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x195408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195404u;
        // 0x195408: 0x30e30400  andi        $v1, $a3, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x195404) {
            ctx->pc = 0x19543Cu;
            goto label_19543c;
        }
    }
    ctx->pc = 0x19540Cu;
label_19540c:
    // 0x19540c: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x19540cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_195410:
    // 0x195410: 0x9085024f  lbu         $a1, 0x24F($a0)
    ctx->pc = 0x195410u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 591)));
label_195414:
    // 0x195414: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x195414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_195418:
    // 0x195418: 0x286100fa  slti        $at, $v1, 0xFA
    ctx->pc = 0x195418u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)250) ? 1 : 0);
label_19541c:
    // 0x19541c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_195420:
    if (ctx->pc == 0x195420u) {
        ctx->pc = 0x195424u;
        goto label_195424;
    }
    ctx->pc = 0x19541Cu;
    {
        const bool branch_taken_0x19541c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19541c) {
            ctx->pc = 0x19542Cu;
            goto label_19542c;
        }
    }
    ctx->pc = 0x195424u;
label_195424:
    // 0x195424: 0x10000003  b           . + 4 + (0x3 << 2)
label_195428:
    if (ctx->pc == 0x195428u) {
        ctx->pc = 0x195428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195424u;
        // 0x195428: 0xa083024f  sb          $v1, 0x24F($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 591), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19542Cu;
        goto label_19542c;
    }
    ctx->pc = 0x195424u;
    {
        const bool branch_taken_0x195424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195424u;
        // 0x195428: 0xa083024f  sb          $v1, 0x24F($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 591), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195424) {
            ctx->pc = 0x195434u;
            goto label_195434;
        }
    }
    ctx->pc = 0x19542Cu;
label_19542c:
    // 0x19542c: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x19542cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_195430:
    // 0x195430: 0xa083024f  sb          $v1, 0x24F($a0)
    ctx->pc = 0x195430u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 591), (uint8_t)GPR_U32(ctx, 3));
label_195434:
    // 0x195434: 0x10000053  b           . + 4 + (0x53 << 2)
label_195438:
    if (ctx->pc == 0x195438u) {
        ctx->pc = 0x19543Cu;
        goto label_19543c;
    }
    ctx->pc = 0x195434u;
    {
        const bool branch_taken_0x195434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195434) {
            ctx->pc = 0x195584u;
            goto label_195584;
        }
    }
    ctx->pc = 0x19543Cu;
label_19543c:
    // 0x19543c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_195440:
    if (ctx->pc == 0x195440u) {
        ctx->pc = 0x195444u;
        goto label_195444;
    }
    ctx->pc = 0x19543Cu;
    {
        const bool branch_taken_0x19543c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19543c) {
            ctx->pc = 0x195458u;
            goto label_195458;
        }
    }
    ctx->pc = 0x195444u;
label_195444:
    // 0x195444: 0x90a50001  lbu         $a1, 0x1($a1)
    ctx->pc = 0x195444u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_195448:
    // 0x195448: 0x8483028e  lh          $v1, 0x28E($a0)
    ctx->pc = 0x195448u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 654)));
label_19544c:
    // 0x19544c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x19544cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_195450:
    // 0x195450: 0x1000004c  b           . + 4 + (0x4C << 2)
label_195454:
    if (ctx->pc == 0x195454u) {
        ctx->pc = 0x195454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195450u;
        // 0x195454: 0xa483028e  sh          $v1, 0x28E($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 654), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195458u;
        goto label_195458;
    }
    ctx->pc = 0x195450u;
    {
        const bool branch_taken_0x195450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195450u;
        // 0x195454: 0xa483028e  sh          $v1, 0x28E($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 654), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195450) {
            ctx->pc = 0x195584u;
            goto label_195584;
        }
    }
    ctx->pc = 0x195458u;
label_195458:
    // 0x195458: 0x30e30800  andi        $v1, $a3, 0x800
    ctx->pc = 0x195458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2048);
label_19545c:
    // 0x19545c: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
label_195460:
    if (ctx->pc == 0x195460u) {
        ctx->pc = 0x195460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19545Cu;
        // 0x195460: 0x30e31000  andi        $v1, $a3, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        ctx->pc = 0x195464u;
        goto label_195464;
    }
    ctx->pc = 0x19545Cu;
    {
        const bool branch_taken_0x19545c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x195460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19545Cu;
        // 0x195460: 0x30e31000  andi        $v1, $a3, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19545c) {
            ctx->pc = 0x1954B8u;
            goto label_1954b8;
        }
    }
    ctx->pc = 0x195464u;
label_195464:
    // 0x195464: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x195464u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_195468:
    // 0x195468: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_19546c:
    if (ctx->pc == 0x19546Cu) {
        ctx->pc = 0x195470u;
        goto label_195470;
    }
    ctx->pc = 0x195468u;
    {
        const bool branch_taken_0x195468 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x195468) {
            ctx->pc = 0x19547Cu;
            goto label_19547c;
        }
    }
    ctx->pc = 0x195470u;
label_195470:
    // 0x195470: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x195470u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_195474:
    // 0x195474: 0x10000008  b           . + 4 + (0x8 << 2)
label_195478:
    if (ctx->pc == 0x195478u) {
        ctx->pc = 0x195478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195474u;
        // 0x195478: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19547Cu;
        goto label_19547c;
    }
    ctx->pc = 0x195474u;
    {
        const bool branch_taken_0x195474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195474u;
        // 0x195478: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x195474) {
            ctx->pc = 0x195498u;
            goto label_195498;
        }
    }
    ctx->pc = 0x19547Cu;
label_19547c:
    // 0x19547c: 0x32842  srl         $a1, $v1, 1
    ctx->pc = 0x19547cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_195480:
    // 0x195480: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x195480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_195484:
    // 0x195484: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x195484u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_195488:
    // 0x195488: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x195488u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19548c:
    // 0x19548c: 0x0  nop
    ctx->pc = 0x19548cu;
    // NOP
label_195490:
    // 0x195490: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x195490u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_195494:
    // 0x195494: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x195494u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_195498:
    // 0x195498: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x195498u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_19549c:
    // 0x19549c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x19549cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1954a0:
    // 0x1954a0: 0xc4800284  lwc1        $f0, 0x284($a0)
    ctx->pc = 0x1954a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1954a4:
    // 0x1954a4: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x1954a4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_1954a8:
    // 0x1954a8: 0x0  nop
    ctx->pc = 0x1954a8u;
    // NOP
label_1954ac:
    // 0x1954ac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1954acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1954b0:
    // 0x1954b0: 0x10000034  b           . + 4 + (0x34 << 2)
label_1954b4:
    if (ctx->pc == 0x1954B4u) {
        ctx->pc = 0x1954B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1954B0u;
        // 0x1954b4: 0xe4800284  swc1        $f0, 0x284($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 644), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1954B8u;
        goto label_1954b8;
    }
    ctx->pc = 0x1954B0u;
    {
        const bool branch_taken_0x1954b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1954B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1954B0u;
        // 0x1954b4: 0xe4800284  swc1        $f0, 0x284($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 644), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1954b0) {
            ctx->pc = 0x195584u;
            goto label_195584;
        }
    }
    ctx->pc = 0x1954B8u;
label_1954b8:
    // 0x1954b8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1954bc:
    if (ctx->pc == 0x1954BCu) {
        ctx->pc = 0x1954C0u;
        goto label_1954c0;
    }
    ctx->pc = 0x1954B8u;
    {
        const bool branch_taken_0x1954b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1954b8) {
            ctx->pc = 0x1954D4u;
            goto label_1954d4;
        }
    }
    ctx->pc = 0x1954C0u;
label_1954c0:
    // 0x1954c0: 0x90a50001  lbu         $a1, 0x1($a1)
    ctx->pc = 0x1954c0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_1954c4:
    // 0x1954c4: 0x8483028a  lh          $v1, 0x28A($a0)
    ctx->pc = 0x1954c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 650)));
label_1954c8:
    // 0x1954c8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1954c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1954cc:
    // 0x1954cc: 0x1000002d  b           . + 4 + (0x2D << 2)
label_1954d0:
    if (ctx->pc == 0x1954D0u) {
        ctx->pc = 0x1954D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1954CCu;
        // 0x1954d0: 0xa483028a  sh          $v1, 0x28A($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 650), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1954D4u;
        goto label_1954d4;
    }
    ctx->pc = 0x1954CCu;
    {
        const bool branch_taken_0x1954cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1954D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1954CCu;
        // 0x1954d0: 0xa483028a  sh          $v1, 0x28A($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 650), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1954cc) {
            ctx->pc = 0x195584u;
            goto label_195584;
        }
    }
    ctx->pc = 0x1954D4u;
label_1954d4:
    // 0x1954d4: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x1954d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
label_1954d8:
    // 0x1954d8: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x1954d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
label_1954dc:
    // 0x1954dc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1954e0:
    if (ctx->pc == 0x1954E0u) {
        ctx->pc = 0x1954E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1954DCu;
        // 0x1954e0: 0x3c030400  lui         $v1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1954E4u;
        goto label_1954e4;
    }
    ctx->pc = 0x1954DCu;
    {
        const bool branch_taken_0x1954dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1954E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1954DCu;
        // 0x1954e0: 0x3c030400  lui         $v1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1954dc) {
            ctx->pc = 0x1954F8u;
            goto label_1954f8;
        }
    }
    ctx->pc = 0x1954E4u;
label_1954e4:
    // 0x1954e4: 0x90a50001  lbu         $a1, 0x1($a1)
    ctx->pc = 0x1954e4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_1954e8:
    // 0x1954e8: 0x84830250  lh          $v1, 0x250($a0)
    ctx->pc = 0x1954e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 592)));
label_1954ec:
    // 0x1954ec: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1954ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1954f0:
    // 0x1954f0: 0x10000024  b           . + 4 + (0x24 << 2)
label_1954f4:
    if (ctx->pc == 0x1954F4u) {
        ctx->pc = 0x1954F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1954F0u;
        // 0x1954f4: 0xa4830250  sh          $v1, 0x250($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 592), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1954F8u;
        goto label_1954f8;
    }
    ctx->pc = 0x1954F0u;
    {
        const bool branch_taken_0x1954f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1954F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1954F0u;
        // 0x1954f4: 0xa4830250  sh          $v1, 0x250($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 592), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1954f0) {
            ctx->pc = 0x195584u;
            goto label_195584;
        }
    }
    ctx->pc = 0x1954F8u;
label_1954f8:
    // 0x1954f8: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x1954f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
label_1954fc:
    // 0x1954fc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_195500:
    if (ctx->pc == 0x195500u) {
        ctx->pc = 0x195504u;
        goto label_195504;
    }
    ctx->pc = 0x1954FCu;
    {
        const bool branch_taken_0x1954fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1954fc) {
            ctx->pc = 0x195518u;
            goto label_195518;
        }
    }
    ctx->pc = 0x195504u;
label_195504:
    // 0x195504: 0x90a50001  lbu         $a1, 0x1($a1)
    ctx->pc = 0x195504u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_195508:
    // 0x195508: 0x90830282  lbu         $v1, 0x282($a0)
    ctx->pc = 0x195508u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 642)));
label_19550c:
    // 0x19550c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x19550cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_195510:
    // 0x195510: 0x1000001c  b           . + 4 + (0x1C << 2)
label_195514:
    if (ctx->pc == 0x195514u) {
        ctx->pc = 0x195514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195510u;
        // 0x195514: 0xa0830282  sb          $v1, 0x282($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 642), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195518u;
        goto label_195518;
    }
    ctx->pc = 0x195510u;
    {
        const bool branch_taken_0x195510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195510u;
        // 0x195514: 0xa0830282  sb          $v1, 0x282($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 642), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195510) {
            ctx->pc = 0x195584u;
            goto label_195584;
        }
    }
    ctx->pc = 0x195518u;
label_195518:
    // 0x195518: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x195518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
label_19551c:
    // 0x19551c: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x19551cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
label_195520:
    // 0x195520: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
label_195524:
    if (ctx->pc == 0x195524u) {
        ctx->pc = 0x195528u;
        goto label_195528;
    }
    ctx->pc = 0x195520u;
    {
        const bool branch_taken_0x195520 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x195520) {
            ctx->pc = 0x195584u;
            goto label_195584;
        }
    }
    ctx->pc = 0x195528u;
label_195528:
    // 0x195528: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x195528u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_19552c:
    // 0x19552c: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_195530:
    if (ctx->pc == 0x195530u) {
        ctx->pc = 0x195534u;
        goto label_195534;
    }
    ctx->pc = 0x19552Cu;
    {
        const bool branch_taken_0x19552c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x19552c) {
            ctx->pc = 0x195540u;
            goto label_195540;
        }
    }
    ctx->pc = 0x195534u;
label_195534:
    // 0x195534: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x195534u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_195538:
    // 0x195538: 0x10000008  b           . + 4 + (0x8 << 2)
label_19553c:
    if (ctx->pc == 0x19553Cu) {
        ctx->pc = 0x19553Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195538u;
        // 0x19553c: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x195540u;
        goto label_195540;
    }
    ctx->pc = 0x195538u;
    {
        const bool branch_taken_0x195538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19553Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195538u;
        // 0x19553c: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x195538) {
            ctx->pc = 0x19555Cu;
            goto label_19555c;
        }
    }
    ctx->pc = 0x195540u;
label_195540:
    // 0x195540: 0x32842  srl         $a1, $v1, 1
    ctx->pc = 0x195540u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_195544:
    // 0x195544: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x195544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_195548:
    // 0x195548: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x195548u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_19554c:
    // 0x19554c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x19554cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_195550:
    // 0x195550: 0x0  nop
    ctx->pc = 0x195550u;
    // NOP
label_195554:
    // 0x195554: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x195554u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_195558:
    // 0x195558: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x195558u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_19555c:
    // 0x19555c: 0x3c053e4c  lui         $a1, 0x3E4C
    ctx->pc = 0x19555cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15948 << 16));
label_195560:
    // 0x195560: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x195560u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_195564:
    // 0x195564: 0x34a5cccd  ori         $a1, $a1, 0xCCCD
    ctx->pc = 0x195564u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52429);
label_195568:
    // 0x195568: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x195568u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_19556c:
    // 0x19556c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x19556cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_195570:
    // 0x195570: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x195570u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_195574:
    // 0x195574: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x195574u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_195578:
    // 0x195578: 0xc4800278  lwc1        $f0, 0x278($a0)
    ctx->pc = 0x195578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19557c:
    // 0x19557c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x19557cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_195580:
    // 0x195580: 0xe4800278  swc1        $f0, 0x278($a0)
    ctx->pc = 0x195580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 632), bits); }
label_195584:
    // 0x195584: 0x3e00008  jr          $ra
label_195588:
    if (ctx->pc == 0x195588u) {
        ctx->pc = 0x19558Cu;
        goto label_19558c;
    }
    ctx->pc = 0x195584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19558Cu;
label_19558c:
    // 0x19558c: 0x0  nop
    ctx->pc = 0x19558cu;
    // NOP
label_195590:
    // 0x195590: 0x3c070028  lui         $a3, 0x28
    ctx->pc = 0x195590u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)40 << 16));
label_195594:
    // 0x195594: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x195594u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_195598:
    // 0x195598: 0x24e75730  addiu       $a3, $a3, 0x5730
    ctx->pc = 0x195598u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 22320));
label_19559c:
    // 0x19559c: 0x27aa0000  addiu       $t2, $sp, 0x0
    ctx->pc = 0x19559cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
label_1955a0:
    // 0x1955a0: 0xdce90000  ld          $t1, 0x0($a3)
    ctx->pc = 0x1955a0u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_1955a4:
    // 0x1955a4: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x1955a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1955a8:
    // 0x1955a8: 0x84e8000c  lh          $t0, 0xC($a3)
    ctx->pc = 0x1955a8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 12)));
label_1955ac:
    // 0x1955ac: 0x1453021  addu        $a2, $t2, $a1
    ctx->pc = 0x1955acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
label_1955b0:
    // 0x1955b0: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x1955b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1955b4:
    // 0x1955b4: 0x90e7000e  lbu         $a3, 0xE($a3)
    ctx->pc = 0x1955b4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 14)));
label_1955b8:
    // 0x1955b8: 0xfd490000  sd          $t1, 0x0($t2)
    ctx->pc = 0x1955b8u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 9));
label_1955bc:
    // 0x1955bc: 0xe5400008  swc1        $f0, 0x8($t2)
    ctx->pc = 0x1955bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 8), bits); }
label_1955c0:
    // 0x1955c0: 0xa548000c  sh          $t0, 0xC($t2)
    ctx->pc = 0x1955c0u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 12), (uint16_t)GPR_U32(ctx, 8));
label_1955c4:
    // 0x1955c4: 0xa147000e  sb          $a3, 0xE($t2)
    ctx->pc = 0x1955c4u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 14), (uint8_t)GPR_U32(ctx, 7));
label_1955c8:
    // 0x1955c8: 0xa085000b  sb          $a1, 0xB($a0)
    ctx->pc = 0x1955c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11), (uint8_t)GPR_U32(ctx, 5));
label_1955cc:
    // 0x1955cc: 0x90c50000  lbu         $a1, 0x0($a2)
    ctx->pc = 0x1955ccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1955d0:
    // 0x1955d0: 0xa085000a  sb          $a1, 0xA($a0)
    ctx->pc = 0x1955d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 5));
label_1955d4:
    // 0x1955d4: 0xfc800010  sd          $zero, 0x10($a0)
    ctx->pc = 0x1955d4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 0));
label_1955d8:
    // 0x1955d8: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1955d8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_1955dc:
    // 0x1955dc: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1955dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_1955e0:
    // 0x1955e0: 0xa0830004  sb          $v1, 0x4($a0)
    ctx->pc = 0x1955e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 3));
label_1955e4:
    // 0x1955e4: 0xa0830006  sb          $v1, 0x6($a0)
    ctx->pc = 0x1955e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 3));
label_1955e8:
    // 0x1955e8: 0xa0830008  sb          $v1, 0x8($a0)
    ctx->pc = 0x1955e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 3));
label_1955ec:
    // 0x1955ec: 0x3e00008  jr          $ra
label_1955f0:
    if (ctx->pc == 0x1955F0u) {
        ctx->pc = 0x1955F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1955ECu;
        // 0x1955f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1955F4u;
        goto label_1955f4;
    }
    ctx->pc = 0x1955ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1955F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1955ECu;
        // 0x1955f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1955ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1955F4u;
label_1955f4:
    // 0x1955f4: 0x0  nop
    ctx->pc = 0x1955f4u;
    // NOP
label_1955f8:
    // 0x1955f8: 0x0  nop
    ctx->pc = 0x1955f8u;
    // NOP
label_1955fc:
    // 0x1955fc: 0x0  nop
    ctx->pc = 0x1955fcu;
    // NOP
label_195600:
    // 0x195600: 0x28a10059  slti        $at, $a1, 0x59
    ctx->pc = 0x195600u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)89) ? 1 : 0);
label_195604:
    // 0x195604: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_195608:
    if (ctx->pc == 0x195608u) {
        ctx->pc = 0x195608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195604u;
        // 0x195608: 0xa085000b  sb          $a1, 0xB($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 11), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19560Cu;
        goto label_19560c;
    }
    ctx->pc = 0x195604u;
    {
        const bool branch_taken_0x195604 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x195608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195604u;
        // 0x195608: 0xa085000b  sb          $a1, 0xB($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 11), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195604) {
            ctx->pc = 0x195614u;
            goto label_195614;
        }
    }
    ctx->pc = 0x19560Cu;
label_19560c:
    // 0x19560c: 0x1000000e  b           . + 4 + (0xE << 2)
label_195610:
    if (ctx->pc == 0x195610u) {
        ctx->pc = 0x195610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19560Cu;
        // 0x195610: 0xa085000a  sb          $a1, 0xA($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195614u;
        goto label_195614;
    }
    ctx->pc = 0x19560Cu;
    {
        const bool branch_taken_0x19560c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19560Cu;
        // 0x195610: 0xa085000a  sb          $a1, 0xA($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19560c) {
            ctx->pc = 0x195648u;
            goto label_195648;
        }
    }
    ctx->pc = 0x195614u;
label_195614:
    // 0x195614: 0x28a30082  slti        $v1, $a1, 0x82
    ctx->pc = 0x195614u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)130) ? 1 : 0);
label_195618:
    // 0x195618: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_19561c:
    if (ctx->pc == 0x19561Cu) {
        ctx->pc = 0x19561Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195618u;
        // 0x19561c: 0x53040  sll         $a2, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195620u;
        goto label_195620;
    }
    ctx->pc = 0x195618u;
    {
        const bool branch_taken_0x195618 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19561Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195618u;
        // 0x19561c: 0x53040  sll         $a2, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195618) {
            ctx->pc = 0x19562Cu;
            goto label_19562c;
        }
    }
    ctx->pc = 0x195620u;
label_195620:
    // 0x195620: 0x24a3ffd7  addiu       $v1, $a1, -0x29
    ctx->pc = 0x195620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967255));
label_195624:
    // 0x195624: 0x10000008  b           . + 4 + (0x8 << 2)
label_195628:
    if (ctx->pc == 0x195628u) {
        ctx->pc = 0x195628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195624u;
        // 0x195628: 0xa083000a  sb          $v1, 0xA($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19562Cu;
        goto label_19562c;
    }
    ctx->pc = 0x195624u;
    {
        const bool branch_taken_0x195624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195624u;
        // 0x195628: 0xa083000a  sb          $v1, 0xA($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195624) {
            ctx->pc = 0x195648u;
            goto label_195648;
        }
    }
    ctx->pc = 0x19562Cu;
label_19562c:
    // 0x19562c: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x19562cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
label_195630:
    // 0x195630: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x195630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_195634:
    // 0x195634: 0x24639d72  addiu       $v1, $v1, -0x628E
    ctx->pc = 0x195634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942066));
label_195638:
    // 0x195638: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x195638u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_19563c:
    // 0x19563c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x19563cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_195640:
    // 0x195640: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x195640u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_195644:
    // 0x195644: 0xa083000a  sb          $v1, 0xA($a0)
    ctx->pc = 0x195644u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 3));
label_195648:
    // 0x195648: 0xfc800010  sd          $zero, 0x10($a0)
    ctx->pc = 0x195648u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 0));
label_19564c:
    // 0x19564c: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x19564cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_195650:
    // 0x195650: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x195650u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_195654:
    // 0x195654: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x195654u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_195658:
    // 0x195658: 0xa0830004  sb          $v1, 0x4($a0)
    ctx->pc = 0x195658u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 3));
label_19565c:
    // 0x19565c: 0xa0830006  sb          $v1, 0x6($a0)
    ctx->pc = 0x19565cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 3));
label_195660:
    // 0x195660: 0x3e00008  jr          $ra
label_195664:
    if (ctx->pc == 0x195664u) {
        ctx->pc = 0x195664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195660u;
        // 0x195664: 0xa0830008  sb          $v1, 0x8($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195668u;
        goto label_195668;
    }
    ctx->pc = 0x195660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195660u;
        // 0x195664: 0xa0830008  sb          $v1, 0x8($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195668u;
label_195668:
    // 0x195668: 0x0  nop
    ctx->pc = 0x195668u;
    // NOP
label_19566c:
    // 0x19566c: 0x0  nop
    ctx->pc = 0x19566cu;
    // NOP
label_195670:
    // 0x195670: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x195670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_195674:
    // 0x195674: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x195674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_195678:
    // 0x195678: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x195678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_19567c:
    // 0x19567c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19567cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_195680:
    // 0x195680: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x195680u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_195684:
    // 0x195684: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x195684u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
label_195688:
    // 0x195688: 0x2610a4c0  addiu       $s0, $s0, -0x5B40
    ctx->pc = 0x195688u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943936));
label_19568c:
    // 0x19568c: 0x0  nop
    ctx->pc = 0x19568cu;
    // NOP
label_195690:
    // 0x195690: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x195690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_195694:
    // 0x195694: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_195698:
    if (ctx->pc == 0x195698u) {
        ctx->pc = 0x19569Cu;
        goto label_19569c;
    }
    ctx->pc = 0x195694u;
    {
        const bool branch_taken_0x195694 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x195694) {
            ctx->pc = 0x1956A4u;
            goto label_1956a4;
        }
    }
    ctx->pc = 0x19569Cu;
label_19569c:
    // 0x19569c: 0xc070038  jal         func_1C00E0
label_1956a0:
    if (ctx->pc == 0x1956A0u) {
        ctx->pc = 0x1956A4u;
        goto label_1956a4;
    }
    ctx->pc = 0x19569Cu;
    SET_GPR_U32(ctx, 31, 0x1956A4u);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1956A4u;
label_1956a4:
    // 0x1956a4: 0x0  nop
    ctx->pc = 0x1956a4u;
    // NOP
label_1956a8:
    // 0x1956a8: 0x8e0400c0  lw          $a0, 0xC0($s0)
    ctx->pc = 0x1956a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_1956ac:
    // 0x1956ac: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1956b0:
    if (ctx->pc == 0x1956B0u) {
        ctx->pc = 0x1956B4u;
        goto label_1956b4;
    }
    ctx->pc = 0x1956ACu;
    {
        const bool branch_taken_0x1956ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1956ac) {
            ctx->pc = 0x1956BCu;
            goto label_1956bc;
        }
    }
    ctx->pc = 0x1956B4u;
label_1956b4:
    // 0x1956b4: 0xc070038  jal         func_1C00E0
label_1956b8:
    if (ctx->pc == 0x1956B8u) {
        ctx->pc = 0x1956BCu;
        goto label_1956bc;
    }
    ctx->pc = 0x1956B4u;
    SET_GPR_U32(ctx, 31, 0x1956BCu);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x1956BCu;
label_1956bc:
    // 0x1956bc: 0x0  nop
    ctx->pc = 0x1956bcu;
    // NOP
label_1956c0:
    // 0x1956c0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1956c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1956c4:
    // 0x1956c4: 0x2a230080  slti        $v1, $s1, 0x80
    ctx->pc = 0x1956c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)128) ? 1 : 0);
label_1956c8:
    // 0x1956c8: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
label_1956cc:
    if (ctx->pc == 0x1956CCu) {
        ctx->pc = 0x1956CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1956C8u;
        // 0x1956cc: 0x261000c8  addiu       $s0, $s0, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1956D0u;
        goto label_1956d0;
    }
    ctx->pc = 0x1956C8u;
    {
        const bool branch_taken_0x1956c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1956CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1956C8u;
        // 0x1956cc: 0x261000c8  addiu       $s0, $s0, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1956c8) {
            ctx->pc = 0x19568Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19568c;
        }
    }
    ctx->pc = 0x1956D0u;
label_1956d0:
    // 0x1956d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1956d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1956d4:
    // 0x1956d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1956d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1956d8:
    // 0x1956d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1956d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1956dc:
    // 0x1956dc: 0x3e00008  jr          $ra
label_1956e0:
    if (ctx->pc == 0x1956E0u) {
        ctx->pc = 0x1956E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1956DCu;
        // 0x1956e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1956E4u;
        goto label_1956e4;
    }
    ctx->pc = 0x1956DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1956E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1956DCu;
        // 0x1956e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1956DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1956E4u;
label_1956e4:
    // 0x1956e4: 0x0  nop
    ctx->pc = 0x1956e4u;
    // NOP
label_1956e8:
    // 0x1956e8: 0x0  nop
    ctx->pc = 0x1956e8u;
    // NOP
label_1956ec:
    // 0x1956ec: 0x0  nop
    ctx->pc = 0x1956ecu;
    // NOP
label_1956f0:
    // 0x1956f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1956f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1956f4:
    // 0x1956f4: 0x2404021d  addiu       $a0, $zero, 0x21D
    ctx->pc = 0x1956f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 541));
label_1956f8:
    // 0x1956f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1956f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1956fc:
    // 0x1956fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1956fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_195700:
    // 0x195700: 0xc041738  jal         func_105CE0
label_195704:
    if (ctx->pc == 0x195704u) {
        ctx->pc = 0x195704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195700u;
        // 0x195704: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195708u;
        goto label_195708;
    }
    ctx->pc = 0x195700u;
    SET_GPR_U32(ctx, 31, 0x195708u);
    ctx->pc = 0x195704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195700u;
    // 0x195704: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x195700u, 0x195708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195708u;
label_195708:
    // 0x195708: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x195708u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_19570c:
    // 0x19570c: 0xc070080  jal         func_1C0200
label_195710:
    if (ctx->pc == 0x195710u) {
        ctx->pc = 0x195710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19570Cu;
        // 0x195710: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195714u;
        goto label_195714;
    }
    ctx->pc = 0x19570Cu;
    SET_GPR_U32(ctx, 31, 0x195714u);
    ctx->pc = 0x195710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19570Cu;
    // 0x195710: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x195714u;
label_195714:
    // 0x195714: 0x2404021d  addiu       $a0, $zero, 0x21D
    ctx->pc = 0x195714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 541));
label_195718:
    // 0x195718: 0xc0416e4  jal         func_105B90
label_19571c:
    if (ctx->pc == 0x19571Cu) {
        ctx->pc = 0x19571Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195718u;
        // 0x19571c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195720u;
        goto label_195720;
    }
    ctx->pc = 0x195718u;
    SET_GPR_U32(ctx, 31, 0x195720u);
    ctx->pc = 0x19571Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195718u;
    // 0x19571c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B90u, 0x195718u, 0x195720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195720u;
label_195720:
    // 0x195720: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x195720u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_195724:
    // 0x195724: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x195724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_195728:
    // 0x195728: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x195728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19572c:
    // 0x19572c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19572cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_195730:
    // 0x195730: 0x2407000b  addiu       $a3, $zero, 0xB
    ctx->pc = 0x195730u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_195734:
    // 0x195734: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x195734u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_195738:
    // 0x195738: 0xc0603d4  jal         func_180F50
label_19573c:
    if (ctx->pc == 0x19573Cu) {
        ctx->pc = 0x19573Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195738u;
        // 0x19573c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195740u;
        goto label_195740;
    }
    ctx->pc = 0x195738u;
    SET_GPR_U32(ctx, 31, 0x195740u);
    ctx->pc = 0x19573Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195738u;
    // 0x19573c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180F50u;
    { ctx->pc = 0x180f50; return; }
    ctx->pc = 0x195740u;
label_195740:
    // 0x195740: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x195740u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_195744:
    // 0x195744: 0xc070038  jal         func_1C00E0
label_195748:
    if (ctx->pc == 0x195748u) {
        ctx->pc = 0x195748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195744u;
        // 0x195748: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19574Cu;
        goto label_19574c;
    }
    ctx->pc = 0x195744u;
    SET_GPR_U32(ctx, 31, 0x19574Cu);
    ctx->pc = 0x195748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195744u;
    // 0x195748: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x19574Cu;
label_19574c:
    // 0x19574c: 0x240407fc  addiu       $a0, $zero, 0x7FC
    ctx->pc = 0x19574cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2044));
label_195750:
    // 0x195750: 0xc041738  jal         func_105CE0
label_195754:
    if (ctx->pc == 0x195754u) {
        ctx->pc = 0x195754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195750u;
        // 0x195754: 0xff9088d0  sd          $s0, -0x7730($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294936784), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195758u;
        goto label_195758;
    }
    ctx->pc = 0x195750u;
    SET_GPR_U32(ctx, 31, 0x195758u);
    ctx->pc = 0x195754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195750u;
    // 0x195754: 0xff9088d0  sd          $s0, -0x7730($gp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936784), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x195750u, 0x195758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195758u;
label_195758:
    // 0x195758: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x195758u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_19575c:
    // 0x19575c: 0xc070080  jal         func_1C0200
label_195760:
    if (ctx->pc == 0x195760u) {
        ctx->pc = 0x195760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19575Cu;
        // 0x195760: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195764u;
        goto label_195764;
    }
    ctx->pc = 0x19575Cu;
    SET_GPR_U32(ctx, 31, 0x195764u);
    ctx->pc = 0x195760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19575Cu;
    // 0x195760: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x195764u;
label_195764:
    // 0x195764: 0x240407fc  addiu       $a0, $zero, 0x7FC
    ctx->pc = 0x195764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2044));
label_195768:
    // 0x195768: 0xc0416e4  jal         func_105B90
label_19576c:
    if (ctx->pc == 0x19576Cu) {
        ctx->pc = 0x19576Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195768u;
        // 0x19576c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195770u;
        goto label_195770;
    }
    ctx->pc = 0x195768u;
    SET_GPR_U32(ctx, 31, 0x195770u);
    ctx->pc = 0x19576Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195768u;
    // 0x19576c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B90u, 0x195768u, 0x195770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195770u;
label_195770:
    // 0x195770: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x195770u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_195774:
    // 0x195774: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x195774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_195778:
    // 0x195778: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x195778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19577c:
    // 0x19577c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19577cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_195780:
    // 0x195780: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x195780u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_195784:
    // 0x195784: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x195784u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_195788:
    // 0x195788: 0xc0603d4  jal         func_180F50
label_19578c:
    if (ctx->pc == 0x19578Cu) {
        ctx->pc = 0x19578Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195788u;
        // 0x19578c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195790u;
        goto label_195790;
    }
    ctx->pc = 0x195788u;
    SET_GPR_U32(ctx, 31, 0x195790u);
    ctx->pc = 0x19578Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195788u;
    // 0x19578c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180F50u;
    { ctx->pc = 0x180f50; return; }
    ctx->pc = 0x195790u;
label_195790:
    // 0x195790: 0xc070038  jal         func_1C00E0
label_195794:
    if (ctx->pc == 0x195794u) {
        ctx->pc = 0x195794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195790u;
        // 0x195794: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195798u;
        goto label_195798;
    }
    ctx->pc = 0x195790u;
    SET_GPR_U32(ctx, 31, 0x195798u);
    ctx->pc = 0x195794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195790u;
    // 0x195794: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x195798u;
label_195798:
    // 0x195798: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x195798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_19579c:
    // 0x19579c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x19579cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1957a0:
    // 0x1957a0: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x1957a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1957a4:
    // 0x1957a4: 0x24070400  addiu       $a3, $zero, 0x400
    ctx->pc = 0x1957a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1957a8:
    // 0x1957a8: 0xc06058c  jal         func_181630
label_1957ac:
    if (ctx->pc == 0x1957ACu) {
        ctx->pc = 0x1957ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1957A8u;
        // 0x1957ac: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1957B0u;
        goto label_1957b0;
    }
    ctx->pc = 0x1957A8u;
    SET_GPR_U32(ctx, 31, 0x1957B0u);
    ctx->pc = 0x1957ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1957A8u;
    // 0x1957ac: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181630u;
    { ctx->pc = 0x181630; return; }
    ctx->pc = 0x1957B0u;
label_1957b0:
    // 0x1957b0: 0xc065754  jal         func_195D50
label_1957b4:
    if (ctx->pc == 0x1957B4u) {
        ctx->pc = 0x1957B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1957B0u;
        // 0x1957b4: 0xff8288c0  sd          $v0, -0x7740($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294936768), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1957B8u;
        goto label_1957b8;
    }
    ctx->pc = 0x1957B0u;
    SET_GPR_U32(ctx, 31, 0x1957B8u);
    ctx->pc = 0x1957B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1957B0u;
    // 0x1957b4: 0xff8288c0  sd          $v0, -0x7740($gp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936768), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x195D50u;
    { ctx->pc = 0x195d50; return; }
    ctx->pc = 0x1957B8u;
label_1957b8:
    // 0x1957b8: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1957b8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
label_1957bc:
    // 0x1957bc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1957bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1957c0:
    // 0x1957c0: 0x2610a4c0  addiu       $s0, $s0, -0x5B40
    ctx->pc = 0x1957c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943936));
label_1957c4:
    // 0x1957c4: 0x0  nop
    ctx->pc = 0x1957c4u;
    // NOP
label_1957c8:
    // 0x1957c8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1957c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1957cc:
    // 0x1957cc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_1957d0:
    if (ctx->pc == 0x1957D0u) {
        ctx->pc = 0x1957D4u;
        goto label_1957d4;
    }
    ctx->pc = 0x1957CCu;
    {
        const bool branch_taken_0x1957cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1957cc) {
            ctx->pc = 0x1957E4u;
            goto label_1957e4;
        }
    }
    ctx->pc = 0x1957D4u;
label_1957d4:
    // 0x1957d4: 0xdf8288d0  ld          $v0, -0x7730($gp)
    ctx->pc = 0x1957d4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936784)));
label_1957d8:
    // 0x1957d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1957d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1957dc:
    // 0x1957dc: 0xc044ed8  jal         func_113B60
label_1957e0:
    if (ctx->pc == 0x1957E0u) {
        ctx->pc = 0x1957E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1957DCu;
        // 0x1957e0: 0xfe020000  sd          $v0, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1957E4u;
        goto label_1957e4;
    }
    ctx->pc = 0x1957DCu;
    SET_GPR_U32(ctx, 31, 0x1957E4u);
    ctx->pc = 0x1957E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1957DCu;
    // 0x1957e0: 0xfe020000  sd          $v0, 0x0($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113B60u, 0x1957DCu, 0x1957E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1957E4u;
label_1957e4:
    // 0x1957e4: 0x0  nop
    ctx->pc = 0x1957e4u;
    // NOP
label_1957e8:
    // 0x1957e8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1957e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1957ec:
    // 0x1957ec: 0x2a230057  slti        $v1, $s1, 0x57
    ctx->pc = 0x1957ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)87) ? 1 : 0);
label_1957f0:
    // 0x1957f0: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_1957f4:
    if (ctx->pc == 0x1957F4u) {
        ctx->pc = 0x1957F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1957F0u;
        // 0x1957f4: 0x261000c8  addiu       $s0, $s0, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1957F8u;
        goto label_1957f8;
    }
    ctx->pc = 0x1957F0u;
    {
        const bool branch_taken_0x1957f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1957F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1957F0u;
        // 0x1957f4: 0x261000c8  addiu       $s0, $s0, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1957f0) {
            ctx->pc = 0x1957C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1957c4;
        }
    }
    ctx->pc = 0x1957F8u;
label_1957f8:
    // 0x1957f8: 0x2a210080  slti        $at, $s1, 0x80
    ctx->pc = 0x1957f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)128) ? 1 : 0);
label_1957fc:
    // 0x1957fc: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
label_195800:
    if (ctx->pc == 0x195800u) {
        ctx->pc = 0x195804u;
        goto label_195804;
    }
    ctx->pc = 0x1957FCu;
    {
        const bool branch_taken_0x1957fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1957fc) {
            ctx->pc = 0x195838u;
            goto label_195838;
        }
    }
    ctx->pc = 0x195804u;
label_195804:
    // 0x195804: 0x0  nop
    ctx->pc = 0x195804u;
    // NOP
label_195808:
    // 0x195808: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x195808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_19580c:
    // 0x19580c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_195810:
    if (ctx->pc == 0x195810u) {
        ctx->pc = 0x195814u;
        goto label_195814;
    }
    ctx->pc = 0x19580Cu;
    {
        const bool branch_taken_0x19580c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19580c) {
            ctx->pc = 0x195824u;
            goto label_195824;
        }
    }
    ctx->pc = 0x195814u;
label_195814:
    // 0x195814: 0xdf8288c0  ld          $v0, -0x7740($gp)
    ctx->pc = 0x195814u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294936768)));
label_195818:
    // 0x195818: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x195818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19581c:
    // 0x19581c: 0xc044ed8  jal         func_113B60
label_195820:
    if (ctx->pc == 0x195820u) {
        ctx->pc = 0x195820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19581Cu;
        // 0x195820: 0xfe020000  sd          $v0, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195824u;
        goto label_195824;
    }
    ctx->pc = 0x19581Cu;
    SET_GPR_U32(ctx, 31, 0x195824u);
    ctx->pc = 0x195820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19581Cu;
    // 0x195820: 0xfe020000  sd          $v0, 0x0($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113B60u, 0x19581Cu, 0x195824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195824u;
label_195824:
    // 0x195824: 0x0  nop
    ctx->pc = 0x195824u;
    // NOP
label_195828:
    // 0x195828: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x195828u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_19582c:
    // 0x19582c: 0x2a230080  slti        $v1, $s1, 0x80
    ctx->pc = 0x19582cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)128) ? 1 : 0);
label_195830:
    // 0x195830: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_195834:
    if (ctx->pc == 0x195834u) {
        ctx->pc = 0x195834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195830u;
        // 0x195834: 0x261000c8  addiu       $s0, $s0, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195838u;
        goto label_195838;
    }
    ctx->pc = 0x195830u;
    {
        const bool branch_taken_0x195830 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x195834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195830u;
        // 0x195834: 0x261000c8  addiu       $s0, $s0, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195830) {
            ctx->pc = 0x195804u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_195804;
        }
    }
    ctx->pc = 0x195838u;
label_195838:
    // 0x195838: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x195838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19583c:
    // 0x19583c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19583cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_195840:
    // 0x195840: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x195840u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_195844:
    // 0x195844: 0x3e00008  jr          $ra
label_195848:
    if (ctx->pc == 0x195848u) {
        ctx->pc = 0x195848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195844u;
        // 0x195848: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19584Cu;
        goto label_19584c;
    }
    ctx->pc = 0x195844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195844u;
        // 0x195848: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195844u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19584Cu;
label_19584c:
    // 0x19584c: 0x0  nop
    ctx->pc = 0x19584cu;
    // NOP
label_195850:
    // 0x195850: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x195850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_195854:
    // 0x195854: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x195854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_195858:
    // 0x195858: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x195858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_19585c:
    // 0x19585c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19585cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_195860:
    // 0x195860: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x195860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_195864:
    // 0x195864: 0x90234af6  lbu         $v1, 0x4AF6($at)
    ctx->pc = 0x195864u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19190)));
label_195868:
    // 0x195868: 0x28610029  slti        $at, $v1, 0x29
    ctx->pc = 0x195868u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
label_19586c:
    // 0x19586c: 0x10200024  beqz        $at, . + 4 + (0x24 << 2)
label_195870:
    if (ctx->pc == 0x195870u) {
        ctx->pc = 0x195870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19586Cu;
        // 0x195870: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195874u;
        goto label_195874;
    }
    ctx->pc = 0x19586Cu;
    {
        const bool branch_taken_0x19586c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x195870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19586Cu;
        // 0x195870: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19586c) {
            ctx->pc = 0x195900u;
            goto label_195900;
        }
    }
    ctx->pc = 0x195874u;
label_195874:
    // 0x195874: 0x3c10002f  lui         $s0, 0x2F
    ctx->pc = 0x195874u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)47 << 16));
label_195878:
    // 0x195878: 0x1000001c  b           . + 4 + (0x1C << 2)
label_19587c:
    if (ctx->pc == 0x19587Cu) {
        ctx->pc = 0x19587Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195878u;
        // 0x19587c: 0x26102490  addiu       $s0, $s0, 0x2490 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195880u;
        goto label_195880;
    }
    ctx->pc = 0x195878u;
    {
        const bool branch_taken_0x195878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19587Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195878u;
        // 0x19587c: 0x26102490  addiu       $s0, $s0, 0x2490 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195878) {
            ctx->pc = 0x1958ECu;
            goto label_1958ec;
        }
    }
    ctx->pc = 0x195880u;
label_195880:
    // 0x195880: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x195880u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_195884:
    // 0x195884: 0x62900  sll         $a1, $a2, 4
    ctx->pc = 0x195884u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_195888:
    // 0x195888: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x195888u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
label_19588c:
    // 0x19588c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x19588cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_195890:
    // 0x195890: 0x2484b170  addiu       $a0, $a0, -0x4E90
    ctx->pc = 0x195890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947184));
label_195894:
    // 0x195894: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x195894u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_195898:
    // 0x195898: 0x2463a4c0  addiu       $v1, $v1, -0x5B40
    ctx->pc = 0x195898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943936));
label_19589c:
    // 0x19589c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x19589cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1958a0:
    // 0x1958a0: 0x8484010a  lh          $a0, 0x10A($a0)
    ctx->pc = 0x1958a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 266)));
label_1958a4:
    // 0x1958a4: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x1958a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1958a8:
    // 0x1958a8: 0xc42821  addu        $a1, $a2, $a0
    ctx->pc = 0x1958a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_1958ac:
    // 0x1958ac: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x1958acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1958b0:
    // 0x1958b0: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1958b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1958b4:
    // 0x1958b4: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1958b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1958b8:
    // 0x1958b8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1958b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1958bc:
    // 0x1958bc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1958bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1958c0:
    // 0x1958c0: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_1958c4:
    if (ctx->pc == 0x1958C4u) {
        ctx->pc = 0x1958C8u;
        goto label_1958c8;
    }
    ctx->pc = 0x1958C0u;
    {
        const bool branch_taken_0x1958c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1958c0) {
            ctx->pc = 0x1958E4u;
            goto label_1958e4;
        }
    }
    ctx->pc = 0x1958C8u;
label_1958c8:
    // 0x1958c8: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1958c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1958cc:
    // 0x1958cc: 0x24850008  addiu       $a1, $a0, 0x8
    ctx->pc = 0x1958ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_1958d0:
    // 0x1958d0: 0x24423070  addiu       $v0, $v0, 0x3070
    ctx->pc = 0x1958d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12400));
label_1958d4:
    // 0x1958d4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1958d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1958d8:
    // 0x1958d8: 0xc0415a4  jal         func_105690
label_1958dc:
    if (ctx->pc == 0x1958DCu) {
        ctx->pc = 0x1958DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1958D8u;
        // 0x1958dc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1958E0u;
        goto label_1958e0;
    }
    ctx->pc = 0x1958D8u;
    SET_GPR_U32(ctx, 31, 0x1958E0u);
    ctx->pc = 0x1958DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1958D8u;
    // 0x1958dc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105690u, 0x1958D8u, 0x1958E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1958E0u;
label_1958e0:
    // 0x1958e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1958e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1958e4:
    // 0x1958e4: 0x0  nop
    ctx->pc = 0x1958e4u;
    // NOP
label_1958e8:
    // 0x1958e8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1958e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1958ec:
    // 0x1958ec: 0x0  nop
    ctx->pc = 0x1958ecu;
    // NOP
label_1958f0:
    // 0x1958f0: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x1958f0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1958f4:
    // 0x1958f4: 0x24030039  addiu       $v1, $zero, 0x39
    ctx->pc = 0x1958f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_1958f8:
    // 0x1958f8: 0x1483ffe1  bne         $a0, $v1, . + 4 + (-0x1F << 2)
label_1958fc:
    if (ctx->pc == 0x1958FCu) {
        ctx->pc = 0x1958FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1958F8u;
        // 0x1958fc: 0x308600ff  andi        $a2, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x195900u;
        goto label_195900;
    }
    ctx->pc = 0x1958F8u;
    {
        const bool branch_taken_0x1958f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1958FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1958F8u;
        // 0x1958fc: 0x308600ff  andi        $a2, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1958f8) {
            ctx->pc = 0x195880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_195880;
        }
    }
    ctx->pc = 0x195900u;
label_195900:
    // 0x195900: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x195900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
label_195904:
    // 0x195904: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x195904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_195908:
    // 0x195908: 0x1460002d  bnez        $v1, . + 4 + (0x2D << 2)
label_19590c:
    if (ctx->pc == 0x19590Cu) {
        ctx->pc = 0x19590Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195908u;
        // 0x19590c: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195910u;
        goto label_195910;
    }
    ctx->pc = 0x195908u;
    {
        const bool branch_taken_0x195908 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19590Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195908u;
        // 0x19590c: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195908) {
            ctx->pc = 0x1959C0u;
            goto label_1959c0;
        }
    }
    ctx->pc = 0x195910u;
label_195910:
    // 0x195910: 0x24030029  addiu       $v1, $zero, 0x29
    ctx->pc = 0x195910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_195914:
    // 0x195914: 0x90244af6  lbu         $a0, 0x4AF6($at)
    ctx->pc = 0x195914u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19190)));
label_195918:
    // 0x195918: 0x14830029  bne         $a0, $v1, . + 4 + (0x29 << 2)
label_19591c:
    if (ctx->pc == 0x19591Cu) {
        ctx->pc = 0x19591Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195918u;
        // 0x19591c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195920u;
        goto label_195920;
    }
    ctx->pc = 0x195918u;
    {
        const bool branch_taken_0x195918 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x19591Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195918u;
        // 0x19591c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195918) {
            ctx->pc = 0x1959C0u;
            goto label_1959c0;
        }
    }
    ctx->pc = 0x195920u;
label_195920:
    // 0x195920: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x195920u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_195924:
    // 0x195924: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x195924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_195928:
    // 0x195928: 0x24631300  addiu       $v1, $v1, 0x1300
    ctx->pc = 0x195928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4864));
label_19592c:
    // 0x19592c: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x19592cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_195930:
    // 0x195930: 0x9083367c  lbu         $v1, 0x367C($a0)
    ctx->pc = 0x195930u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 13948)));
label_195934:
    // 0x195934: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
label_195938:
    if (ctx->pc == 0x195938u) {
        ctx->pc = 0x19593Cu;
        goto label_19593c;
    }
    ctx->pc = 0x195934u;
    {
        const bool branch_taken_0x195934 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x195934) {
            ctx->pc = 0x1959ACu;
            goto label_1959ac;
        }
    }
    ctx->pc = 0x19593Cu;
label_19593c:
    // 0x19593c: 0x9083368a  lbu         $v1, 0x368A($a0)
    ctx->pc = 0x19593cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 13962)));
label_195940:
    // 0x195940: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x195940u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_195944:
    // 0x195944: 0x14200019  bnez        $at, . + 4 + (0x19 << 2)
label_195948:
    if (ctx->pc == 0x195948u) {
        ctx->pc = 0x19594Cu;
        goto label_19594c;
    }
    ctx->pc = 0x195944u;
    {
        const bool branch_taken_0x195944 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x195944) {
            ctx->pc = 0x1959ACu;
            goto label_1959ac;
        }
    }
    ctx->pc = 0x19594Cu;
label_19594c:
    // 0x19594c: 0x90853694  lbu         $a1, 0x3694($a0)
    ctx->pc = 0x19594cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 13972)));
label_195950:
    // 0x195950: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x195950u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_195954:
    // 0x195954: 0x2463a4c0  addiu       $v1, $v1, -0x5B40
    ctx->pc = 0x195954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943936));
label_195958:
    // 0x195958: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x195958u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
label_19595c:
    // 0x19595c: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x19595cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_195960:
    // 0x195960: 0x24845370  addiu       $a0, $a0, 0x5370
    ctx->pc = 0x195960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21360));
label_195964:
    // 0x195964: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x195964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_195968:
    // 0x195968: 0x84840038  lh          $a0, 0x38($a0)
    ctx->pc = 0x195968u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 56)));
label_19596c:
    // 0x19596c: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x19596cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_195970:
    // 0x195970: 0xc42821  addu        $a1, $a2, $a0
    ctx->pc = 0x195970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_195974:
    // 0x195974: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x195974u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_195978:
    // 0x195978: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x195978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_19597c:
    // 0x19597c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x19597cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_195980:
    // 0x195980: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x195980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_195984:
    // 0x195984: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x195984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_195988:
    // 0x195988: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_19598c:
    if (ctx->pc == 0x19598Cu) {
        ctx->pc = 0x195990u;
        goto label_195990;
    }
    ctx->pc = 0x195988u;
    {
        const bool branch_taken_0x195988 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x195988) {
            ctx->pc = 0x1959ACu;
            goto label_1959ac;
        }
    }
    ctx->pc = 0x195990u;
label_195990:
    // 0x195990: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x195990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_195994:
    // 0x195994: 0x24850008  addiu       $a1, $a0, 0x8
    ctx->pc = 0x195994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_195998:
    // 0x195998: 0x24423070  addiu       $v0, $v0, 0x3070
    ctx->pc = 0x195998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12400));
label_19599c:
    // 0x19599c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x19599cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1959a0:
    // 0x1959a0: 0xc0415a4  jal         func_105690
label_1959a4:
    if (ctx->pc == 0x1959A4u) {
        ctx->pc = 0x1959A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1959A0u;
        // 0x1959a4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1959A8u;
        goto label_1959a8;
    }
    ctx->pc = 0x1959A0u;
    SET_GPR_U32(ctx, 31, 0x1959A8u);
    ctx->pc = 0x1959A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1959A0u;
    // 0x1959a4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105690u, 0x1959A0u, 0x1959A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1959A8u;
label_1959a8:
    // 0x1959a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1959a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1959ac:
    // 0x1959ac: 0x0  nop
    ctx->pc = 0x1959acu;
    // NOP
label_1959b0:
    // 0x1959b0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1959b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1959b4:
    // 0x1959b4: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x1959b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_1959b8:
    // 0x1959b8: 0x1460ffda  bnez        $v1, . + 4 + (-0x26 << 2)
label_1959bc:
    if (ctx->pc == 0x1959BCu) {
        ctx->pc = 0x1959BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1959B8u;
        // 0x1959bc: 0x26310090  addiu       $s1, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1959C0u;
        goto label_1959c0;
    }
    ctx->pc = 0x1959B8u;
    {
        const bool branch_taken_0x1959b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1959BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1959B8u;
        // 0x1959bc: 0x26310090  addiu       $s1, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1959b8) {
            ctx->pc = 0x195924u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_195924;
        }
    }
    ctx->pc = 0x1959C0u;
label_1959c0:
    // 0x1959c0: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1959c0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
label_1959c4:
    // 0x1959c4: 0x2610a4c0  addiu       $s0, $s0, -0x5B40
    ctx->pc = 0x1959c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943936));
label_1959c8:
    // 0x1959c8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1959c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1959cc:
    // 0x1959cc: 0x0  nop
    ctx->pc = 0x1959ccu;
    // NOP
label_1959d0:
    // 0x1959d0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1959d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1959d4:
    // 0x1959d4: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
label_1959d8:
    if (ctx->pc == 0x1959D8u) {
        ctx->pc = 0x1959D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1959D4u;
        // 0x1959d8: 0x2403002e  addiu       $v1, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1959DCu;
        goto label_1959dc;
    }
    ctx->pc = 0x1959D4u;
    {
        const bool branch_taken_0x1959d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1959D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1959D4u;
        // 0x1959d8: 0x2403002e  addiu       $v1, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1959d4) {
            ctx->pc = 0x195A90u;
            goto label_195a90;
        }
    }
    ctx->pc = 0x1959DCu;
label_1959dc:
    // 0x1959dc: 0x12230004  beq         $s1, $v1, . + 4 + (0x4 << 2)
label_1959e0:
    if (ctx->pc == 0x1959E0u) {
        ctx->pc = 0x1959E4u;
        goto label_1959e4;
    }
    ctx->pc = 0x1959DCu;
    {
        const bool branch_taken_0x1959dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x1959dc) {
            ctx->pc = 0x1959F0u;
            goto label_1959f0;
        }
    }
    ctx->pc = 0x1959E4u;
label_1959e4:
    // 0x1959e4: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1959e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1959e8:
    // 0x1959e8: 0x16230003  bne         $s1, $v1, . + 4 + (0x3 << 2)
label_1959ec:
    if (ctx->pc == 0x1959ECu) {
        ctx->pc = 0x1959F0u;
        goto label_1959f0;
    }
    ctx->pc = 0x1959E8u;
    {
        const bool branch_taken_0x1959e8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x1959e8) {
            ctx->pc = 0x1959F8u;
            goto label_1959f8;
        }
    }
    ctx->pc = 0x1959F0u;
label_1959f0:
    // 0x1959f0: 0x10000012  b           . + 4 + (0x12 << 2)
label_1959f4:
    if (ctx->pc == 0x1959F4u) {
        ctx->pc = 0x1959F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1959F0u;
        // 0x1959f4: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1959F8u;
        goto label_1959f8;
    }
    ctx->pc = 0x1959F0u;
    {
        const bool branch_taken_0x1959f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1959F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1959F0u;
        // 0x1959f4: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1959f0) {
            ctx->pc = 0x195A3Cu;
            goto label_195a3c;
        }
    }
    ctx->pc = 0x1959F8u;
label_1959f8:
    // 0x1959f8: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x1959f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_1959fc:
    // 0x1959fc: 0x12230003  beq         $s1, $v1, . + 4 + (0x3 << 2)
label_195a00:
    if (ctx->pc == 0x195A00u) {
        ctx->pc = 0x195A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1959FCu;
        // 0x195a00: 0x2403001f  addiu       $v1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195A04u;
        goto label_195a04;
    }
    ctx->pc = 0x1959FCu;
    {
        const bool branch_taken_0x1959fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x195A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1959FCu;
        // 0x195a00: 0x2403001f  addiu       $v1, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1959fc) {
            ctx->pc = 0x195A0Cu;
            goto label_195a0c;
        }
    }
    ctx->pc = 0x195A04u;
label_195a04:
    // 0x195a04: 0x16230004  bne         $s1, $v1, . + 4 + (0x4 << 2)
label_195a08:
    if (ctx->pc == 0x195A08u) {
        ctx->pc = 0x195A0Cu;
        goto label_195a0c;
    }
    ctx->pc = 0x195A04u;
    {
        const bool branch_taken_0x195a04 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x195a04) {
            ctx->pc = 0x195A18u;
            goto label_195a18;
        }
    }
    ctx->pc = 0x195A0Cu;
label_195a0c:
    // 0x195a0c: 0x0  nop
    ctx->pc = 0x195a0cu;
    // NOP
label_195a10:
    // 0x195a10: 0x1000000a  b           . + 4 + (0xA << 2)
label_195a14:
    if (ctx->pc == 0x195A14u) {
        ctx->pc = 0x195A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195A10u;
        // 0x195a14: 0x24040031  addiu       $a0, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195A18u;
        goto label_195a18;
    }
    ctx->pc = 0x195A10u;
    {
        const bool branch_taken_0x195a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195A10u;
        // 0x195a14: 0x24040031  addiu       $a0, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195a10) {
            ctx->pc = 0x195A3Cu;
            goto label_195a3c;
        }
    }
    ctx->pc = 0x195A18u;
label_195a18:
    // 0x195a18: 0x2403004d  addiu       $v1, $zero, 0x4D
    ctx->pc = 0x195a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
label_195a1c:
    // 0x195a1c: 0x12230003  beq         $s1, $v1, . + 4 + (0x3 << 2)
label_195a20:
    if (ctx->pc == 0x195A20u) {
        ctx->pc = 0x195A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195A1Cu;
        // 0x195a20: 0x24030045  addiu       $v1, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195A24u;
        goto label_195a24;
    }
    ctx->pc = 0x195A1Cu;
    {
        const bool branch_taken_0x195a1c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x195A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195A1Cu;
        // 0x195a20: 0x24030045  addiu       $v1, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195a1c) {
            ctx->pc = 0x195A2Cu;
            goto label_195a2c;
        }
    }
    ctx->pc = 0x195A24u;
label_195a24:
    // 0x195a24: 0x16230004  bne         $s1, $v1, . + 4 + (0x4 << 2)
label_195a28:
    if (ctx->pc == 0x195A28u) {
        ctx->pc = 0x195A2Cu;
        goto label_195a2c;
    }
    ctx->pc = 0x195A24u;
    {
        const bool branch_taken_0x195a24 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x195a24) {
            ctx->pc = 0x195A38u;
            goto label_195a38;
        }
    }
    ctx->pc = 0x195A2Cu;
label_195a2c:
    // 0x195a2c: 0x0  nop
    ctx->pc = 0x195a2cu;
    // NOP
label_195a30:
    // 0x195a30: 0x10000002  b           . + 4 + (0x2 << 2)
label_195a34:
    if (ctx->pc == 0x195A34u) {
        ctx->pc = 0x195A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195A30u;
        // 0x195a34: 0x2404004e  addiu       $a0, $zero, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195A38u;
        goto label_195a38;
    }
    ctx->pc = 0x195A30u;
    {
        const bool branch_taken_0x195a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195A30u;
        // 0x195a34: 0x2404004e  addiu       $a0, $zero, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195a30) {
            ctx->pc = 0x195A3Cu;
            goto label_195a3c;
        }
    }
    ctx->pc = 0x195A38u;
label_195a38:
    // 0x195a38: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x195a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_195a3c:
    // 0x195a3c: 0x0  nop
    ctx->pc = 0x195a3cu;
    // NOP
label_195a40:
    // 0x195a40: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x195a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_195a44:
    // 0x195a44: 0x10830012  beq         $a0, $v1, . + 4 + (0x12 << 2)
label_195a48:
    if (ctx->pc == 0x195A48u) {
        ctx->pc = 0x195A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195A44u;
        // 0x195a48: 0x43080  sll         $a2, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195A4Cu;
        goto label_195a4c;
    }
    ctx->pc = 0x195A44u;
    {
        const bool branch_taken_0x195a44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x195A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195A44u;
        // 0x195a48: 0x43080  sll         $a2, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195a44) {
            ctx->pc = 0x195A90u;
            goto label_195a90;
        }
    }
    ctx->pc = 0x195A4Cu;
label_195a4c:
    // 0x195a4c: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x195a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_195a50:
    // 0x195a50: 0xc42821  addu        $a1, $a2, $a0
    ctx->pc = 0x195a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_195a54:
    // 0x195a54: 0x2463a4c0  addiu       $v1, $v1, -0x5B40
    ctx->pc = 0x195a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943936));
label_195a58:
    // 0x195a58: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x195a58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_195a5c:
    // 0x195a5c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x195a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_195a60:
    // 0x195a60: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x195a60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_195a64:
    // 0x195a64: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x195a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_195a68:
    // 0x195a68: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x195a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_195a6c:
    // 0x195a6c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_195a70:
    if (ctx->pc == 0x195A70u) {
        ctx->pc = 0x195A74u;
        goto label_195a74;
    }
    ctx->pc = 0x195A6Cu;
    {
        const bool branch_taken_0x195a6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x195a6c) {
            ctx->pc = 0x195A90u;
            goto label_195a90;
        }
    }
    ctx->pc = 0x195A74u;
label_195a74:
    // 0x195a74: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x195a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_195a78:
    // 0x195a78: 0x24850008  addiu       $a1, $a0, 0x8
    ctx->pc = 0x195a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_195a7c:
    // 0x195a7c: 0x24423070  addiu       $v0, $v0, 0x3070
    ctx->pc = 0x195a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12400));
label_195a80:
    // 0x195a80: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x195a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_195a84:
    // 0x195a84: 0xc0415a4  jal         func_105690
label_195a88:
    if (ctx->pc == 0x195A88u) {
        ctx->pc = 0x195A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195A84u;
        // 0x195a88: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195A8Cu;
        goto label_195a8c;
    }
    ctx->pc = 0x195A84u;
    SET_GPR_U32(ctx, 31, 0x195A8Cu);
    ctx->pc = 0x195A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195A84u;
    // 0x195a88: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105690u, 0x195A84u, 0x195A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195A8Cu;
label_195a8c:
    // 0x195a8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x195a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_195a90:
    // 0x195a90: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x195a90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_195a94:
    // 0x195a94: 0x2a230080  slti        $v1, $s1, 0x80
    ctx->pc = 0x195a94u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)128) ? 1 : 0);
label_195a98:
    // 0x195a98: 0x1460ffcc  bnez        $v1, . + 4 + (-0x34 << 2)
label_195a9c:
    if (ctx->pc == 0x195A9Cu) {
        ctx->pc = 0x195A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195A98u;
        // 0x195a9c: 0x261000c8  addiu       $s0, $s0, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195AA0u;
        goto label_195aa0;
    }
    ctx->pc = 0x195A98u;
    {
        const bool branch_taken_0x195a98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x195A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195A98u;
        // 0x195a9c: 0x261000c8  addiu       $s0, $s0, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195a98) {
            ctx->pc = 0x1959CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1959cc;
        }
    }
    ctx->pc = 0x195AA0u;
label_195aa0:
    // 0x195aa0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x195aa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_195aa4:
    // 0x195aa4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x195aa4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_195aa8:
    // 0x195aa8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x195aa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_195aac:
    // 0x195aac: 0x3e00008  jr          $ra
    ctx->pc = 0x195ab0u;
    return;
}

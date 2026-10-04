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


void FUN_0017d410_part7(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1802f0u: goto label_1802f0;
        case 0x1802f4u: goto label_1802f4;
        case 0x1802f8u: goto label_1802f8;
        case 0x1802fcu: goto label_1802fc;
        case 0x180300u: goto label_180300;
        case 0x180304u: goto label_180304;
        case 0x180308u: goto label_180308;
        case 0x18030cu: goto label_18030c;
        case 0x180310u: goto label_180310;
        case 0x180314u: goto label_180314;
        case 0x180318u: goto label_180318;
        case 0x18031cu: goto label_18031c;
        case 0x180320u: goto label_180320;
        case 0x180324u: goto label_180324;
        case 0x180328u: goto label_180328;
        case 0x18032cu: goto label_18032c;
        case 0x180330u: goto label_180330;
        case 0x180334u: goto label_180334;
        case 0x180338u: goto label_180338;
        case 0x18033cu: goto label_18033c;
        case 0x180340u: goto label_180340;
        case 0x180344u: goto label_180344;
        case 0x180348u: goto label_180348;
        case 0x18034cu: goto label_18034c;
        case 0x180350u: goto label_180350;
        case 0x180354u: goto label_180354;
        case 0x180358u: goto label_180358;
        case 0x18035cu: goto label_18035c;
        case 0x180360u: goto label_180360;
        case 0x180364u: goto label_180364;
        case 0x180368u: goto label_180368;
        case 0x18036cu: goto label_18036c;
        case 0x180370u: goto label_180370;
        case 0x180374u: goto label_180374;
        case 0x180378u: goto label_180378;
        case 0x18037cu: goto label_18037c;
        case 0x180380u: goto label_180380;
        case 0x180384u: goto label_180384;
        case 0x180388u: goto label_180388;
        case 0x18038cu: goto label_18038c;
        case 0x180390u: goto label_180390;
        case 0x180394u: goto label_180394;
        case 0x180398u: goto label_180398;
        case 0x18039cu: goto label_18039c;
        case 0x1803a0u: goto label_1803a0;
        case 0x1803a4u: goto label_1803a4;
        case 0x1803a8u: goto label_1803a8;
        case 0x1803acu: goto label_1803ac;
        case 0x1803b0u: goto label_1803b0;
        case 0x1803b4u: goto label_1803b4;
        case 0x1803b8u: goto label_1803b8;
        case 0x1803bcu: goto label_1803bc;
        case 0x1803c0u: goto label_1803c0;
        case 0x1803c4u: goto label_1803c4;
        case 0x1803c8u: goto label_1803c8;
        case 0x1803ccu: goto label_1803cc;
        case 0x1803d0u: goto label_1803d0;
        case 0x1803d4u: goto label_1803d4;
        case 0x1803d8u: goto label_1803d8;
        case 0x1803dcu: goto label_1803dc;
        case 0x1803e0u: goto label_1803e0;
        case 0x1803e4u: goto label_1803e4;
        case 0x1803e8u: goto label_1803e8;
        case 0x1803ecu: goto label_1803ec;
        case 0x1803f0u: goto label_1803f0;
        case 0x1803f4u: goto label_1803f4;
        case 0x1803f8u: goto label_1803f8;
        case 0x1803fcu: goto label_1803fc;
        case 0x180400u: goto label_180400;
        case 0x180404u: goto label_180404;
        case 0x180408u: goto label_180408;
        case 0x18040cu: goto label_18040c;
        case 0x180410u: goto label_180410;
        case 0x180414u: goto label_180414;
        case 0x180418u: goto label_180418;
        case 0x18041cu: goto label_18041c;
        case 0x180420u: goto label_180420;
        case 0x180424u: goto label_180424;
        case 0x180428u: goto label_180428;
        case 0x18042cu: goto label_18042c;
        case 0x180430u: goto label_180430;
        case 0x180434u: goto label_180434;
        case 0x180438u: goto label_180438;
        case 0x18043cu: goto label_18043c;
        case 0x180440u: goto label_180440;
        case 0x180444u: goto label_180444;
        case 0x180448u: goto label_180448;
        case 0x18044cu: goto label_18044c;
        case 0x180450u: goto label_180450;
        case 0x180454u: goto label_180454;
        case 0x180458u: goto label_180458;
        case 0x18045cu: goto label_18045c;
        case 0x180460u: goto label_180460;
        case 0x180464u: goto label_180464;
        case 0x180468u: goto label_180468;
        case 0x18046cu: goto label_18046c;
        case 0x180470u: goto label_180470;
        case 0x180474u: goto label_180474;
        case 0x180478u: goto label_180478;
        case 0x18047cu: goto label_18047c;
        case 0x180480u: goto label_180480;
        case 0x180484u: goto label_180484;
        case 0x180488u: goto label_180488;
        case 0x18048cu: goto label_18048c;
        case 0x180490u: goto label_180490;
        case 0x180494u: goto label_180494;
        case 0x180498u: goto label_180498;
        case 0x18049cu: goto label_18049c;
        case 0x1804a0u: goto label_1804a0;
        case 0x1804a4u: goto label_1804a4;
        case 0x1804a8u: goto label_1804a8;
        case 0x1804acu: goto label_1804ac;
        case 0x1804b0u: goto label_1804b0;
        case 0x1804b4u: goto label_1804b4;
        case 0x1804b8u: goto label_1804b8;
        case 0x1804bcu: goto label_1804bc;
        case 0x1804c0u: goto label_1804c0;
        case 0x1804c4u: goto label_1804c4;
        case 0x1804c8u: goto label_1804c8;
        case 0x1804ccu: goto label_1804cc;
        case 0x1804d0u: goto label_1804d0;
        case 0x1804d4u: goto label_1804d4;
        case 0x1804d8u: goto label_1804d8;
        case 0x1804dcu: goto label_1804dc;
        case 0x1804e0u: goto label_1804e0;
        case 0x1804e4u: goto label_1804e4;
        case 0x1804e8u: goto label_1804e8;
        case 0x1804ecu: goto label_1804ec;
        case 0x1804f0u: goto label_1804f0;
        case 0x1804f4u: goto label_1804f4;
        case 0x1804f8u: goto label_1804f8;
        case 0x1804fcu: goto label_1804fc;
        case 0x180500u: goto label_180500;
        case 0x180504u: goto label_180504;
        case 0x180508u: goto label_180508;
        case 0x18050cu: goto label_18050c;
        case 0x180510u: goto label_180510;
        case 0x180514u: goto label_180514;
        case 0x180518u: goto label_180518;
        case 0x18051cu: goto label_18051c;
        case 0x180520u: goto label_180520;
        case 0x180524u: goto label_180524;
        case 0x180528u: goto label_180528;
        case 0x18052cu: goto label_18052c;
        case 0x180530u: goto label_180530;
        case 0x180534u: goto label_180534;
        case 0x180538u: goto label_180538;
        case 0x18053cu: goto label_18053c;
        case 0x180540u: goto label_180540;
        case 0x180544u: goto label_180544;
        case 0x180548u: goto label_180548;
        case 0x18054cu: goto label_18054c;
        case 0x180550u: goto label_180550;
        case 0x180554u: goto label_180554;
        case 0x180558u: goto label_180558;
        case 0x18055cu: goto label_18055c;
        case 0x180560u: goto label_180560;
        case 0x180564u: goto label_180564;
        case 0x180568u: goto label_180568;
        case 0x18056cu: goto label_18056c;
        case 0x180570u: goto label_180570;
        case 0x180574u: goto label_180574;
        case 0x180578u: goto label_180578;
        case 0x18057cu: goto label_18057c;
        case 0x180580u: goto label_180580;
        case 0x180584u: goto label_180584;
        case 0x180588u: goto label_180588;
        case 0x18058cu: goto label_18058c;
        case 0x180590u: goto label_180590;
        case 0x180594u: goto label_180594;
        case 0x180598u: goto label_180598;
        case 0x18059cu: goto label_18059c;
        case 0x1805a0u: goto label_1805a0;
        case 0x1805a4u: goto label_1805a4;
        case 0x1805a8u: goto label_1805a8;
        case 0x1805acu: goto label_1805ac;
        case 0x1805b0u: goto label_1805b0;
        case 0x1805b4u: goto label_1805b4;
        case 0x1805b8u: goto label_1805b8;
        case 0x1805bcu: goto label_1805bc;
        case 0x1805c0u: goto label_1805c0;
        case 0x1805c4u: goto label_1805c4;
        case 0x1805c8u: goto label_1805c8;
        case 0x1805ccu: goto label_1805cc;
        case 0x1805d0u: goto label_1805d0;
        case 0x1805d4u: goto label_1805d4;
        case 0x1805d8u: goto label_1805d8;
        case 0x1805dcu: goto label_1805dc;
        case 0x1805e0u: goto label_1805e0;
        case 0x1805e4u: goto label_1805e4;
        case 0x1805e8u: goto label_1805e8;
        case 0x1805ecu: goto label_1805ec;
        case 0x1805f0u: goto label_1805f0;
        case 0x1805f4u: goto label_1805f4;
        case 0x1805f8u: goto label_1805f8;
        case 0x1805fcu: goto label_1805fc;
        case 0x180600u: goto label_180600;
        case 0x180604u: goto label_180604;
        case 0x180608u: goto label_180608;
        case 0x18060cu: goto label_18060c;
        case 0x180610u: goto label_180610;
        case 0x180614u: goto label_180614;
        case 0x180618u: goto label_180618;
        case 0x18061cu: goto label_18061c;
        case 0x180620u: goto label_180620;
        case 0x180624u: goto label_180624;
        case 0x180628u: goto label_180628;
        case 0x18062cu: goto label_18062c;
        case 0x180630u: goto label_180630;
        case 0x180634u: goto label_180634;
        case 0x180638u: goto label_180638;
        case 0x18063cu: goto label_18063c;
        case 0x180640u: goto label_180640;
        case 0x180644u: goto label_180644;
        case 0x180648u: goto label_180648;
        case 0x18064cu: goto label_18064c;
        case 0x180650u: goto label_180650;
        case 0x180654u: goto label_180654;
        case 0x180658u: goto label_180658;
        case 0x18065cu: goto label_18065c;
        case 0x180660u: goto label_180660;
        case 0x180664u: goto label_180664;
        case 0x180668u: goto label_180668;
        case 0x18066cu: goto label_18066c;
        case 0x180670u: goto label_180670;
        case 0x180674u: goto label_180674;
        case 0x180678u: goto label_180678;
        case 0x18067cu: goto label_18067c;
        case 0x180680u: goto label_180680;
        case 0x180684u: goto label_180684;
        case 0x180688u: goto label_180688;
        case 0x18068cu: goto label_18068c;
        case 0x180690u: goto label_180690;
        case 0x180694u: goto label_180694;
        case 0x180698u: goto label_180698;
        case 0x18069cu: goto label_18069c;
        case 0x1806a0u: goto label_1806a0;
        case 0x1806a4u: goto label_1806a4;
        case 0x1806a8u: goto label_1806a8;
        case 0x1806acu: goto label_1806ac;
        case 0x1806b0u: goto label_1806b0;
        case 0x1806b4u: goto label_1806b4;
        case 0x1806b8u: goto label_1806b8;
        case 0x1806bcu: goto label_1806bc;
        case 0x1806c0u: goto label_1806c0;
        case 0x1806c4u: goto label_1806c4;
        case 0x1806c8u: goto label_1806c8;
        case 0x1806ccu: goto label_1806cc;
        case 0x1806d0u: goto label_1806d0;
        case 0x1806d4u: goto label_1806d4;
        case 0x1806d8u: goto label_1806d8;
        case 0x1806dcu: goto label_1806dc;
        case 0x1806e0u: goto label_1806e0;
        case 0x1806e4u: goto label_1806e4;
        case 0x1806e8u: goto label_1806e8;
        case 0x1806ecu: goto label_1806ec;
        case 0x1806f0u: goto label_1806f0;
        case 0x1806f4u: goto label_1806f4;
        case 0x1806f8u: goto label_1806f8;
        case 0x1806fcu: goto label_1806fc;
        case 0x180700u: goto label_180700;
        case 0x180704u: goto label_180704;
        case 0x180708u: goto label_180708;
        case 0x18070cu: goto label_18070c;
        case 0x180710u: goto label_180710;
        case 0x180714u: goto label_180714;
        case 0x180718u: goto label_180718;
        case 0x18071cu: goto label_18071c;
        case 0x180720u: goto label_180720;
        case 0x180724u: goto label_180724;
        case 0x180728u: goto label_180728;
        case 0x18072cu: goto label_18072c;
        case 0x180730u: goto label_180730;
        case 0x180734u: goto label_180734;
        case 0x180738u: goto label_180738;
        case 0x18073cu: goto label_18073c;
        case 0x180740u: goto label_180740;
        case 0x180744u: goto label_180744;
        case 0x180748u: goto label_180748;
        case 0x18074cu: goto label_18074c;
        case 0x180750u: goto label_180750;
        case 0x180754u: goto label_180754;
        case 0x180758u: goto label_180758;
        case 0x18075cu: goto label_18075c;
        case 0x180760u: goto label_180760;
        case 0x180764u: goto label_180764;
        case 0x180768u: goto label_180768;
        case 0x18076cu: goto label_18076c;
        case 0x180770u: goto label_180770;
        case 0x180774u: goto label_180774;
        case 0x180778u: goto label_180778;
        case 0x18077cu: goto label_18077c;
        case 0x180780u: goto label_180780;
        case 0x180784u: goto label_180784;
        case 0x180788u: goto label_180788;
        case 0x18078cu: goto label_18078c;
        case 0x180790u: goto label_180790;
        case 0x180794u: goto label_180794;
        case 0x180798u: goto label_180798;
        case 0x18079cu: goto label_18079c;
        case 0x1807a0u: goto label_1807a0;
        case 0x1807a4u: goto label_1807a4;
        case 0x1807a8u: goto label_1807a8;
        case 0x1807acu: goto label_1807ac;
        case 0x1807b0u: goto label_1807b0;
        case 0x1807b4u: goto label_1807b4;
        case 0x1807b8u: goto label_1807b8;
        case 0x1807bcu: goto label_1807bc;
        case 0x1807c0u: goto label_1807c0;
        case 0x1807c4u: goto label_1807c4;
        case 0x1807c8u: goto label_1807c8;
        case 0x1807ccu: goto label_1807cc;
        case 0x1807d0u: goto label_1807d0;
        case 0x1807d4u: goto label_1807d4;
        case 0x1807d8u: goto label_1807d8;
        case 0x1807dcu: goto label_1807dc;
        case 0x1807e0u: goto label_1807e0;
        case 0x1807e4u: goto label_1807e4;
        case 0x1807e8u: goto label_1807e8;
        case 0x1807ecu: goto label_1807ec;
        case 0x1807f0u: goto label_1807f0;
        case 0x1807f4u: goto label_1807f4;
        case 0x1807f8u: goto label_1807f8;
        case 0x1807fcu: goto label_1807fc;
        case 0x180800u: goto label_180800;
        case 0x180804u: goto label_180804;
        case 0x180808u: goto label_180808;
        case 0x18080cu: goto label_18080c;
        case 0x180810u: goto label_180810;
        case 0x180814u: goto label_180814;
        case 0x180818u: goto label_180818;
        case 0x18081cu: goto label_18081c;
        case 0x180820u: goto label_180820;
        case 0x180824u: goto label_180824;
        case 0x180828u: goto label_180828;
        case 0x18082cu: goto label_18082c;
        case 0x180830u: goto label_180830;
        case 0x180834u: goto label_180834;
        case 0x180838u: goto label_180838;
        case 0x18083cu: goto label_18083c;
        case 0x180840u: goto label_180840;
        case 0x180844u: goto label_180844;
        case 0x180848u: goto label_180848;
        case 0x18084cu: goto label_18084c;
        case 0x180850u: goto label_180850;
        case 0x180854u: goto label_180854;
        case 0x180858u: goto label_180858;
        case 0x18085cu: goto label_18085c;
        case 0x180860u: goto label_180860;
        case 0x180864u: goto label_180864;
        case 0x180868u: goto label_180868;
        case 0x18086cu: goto label_18086c;
        case 0x180870u: goto label_180870;
        case 0x180874u: goto label_180874;
        case 0x180878u: goto label_180878;
        case 0x18087cu: goto label_18087c;
        case 0x180880u: goto label_180880;
        case 0x180884u: goto label_180884;
        case 0x180888u: goto label_180888;
        case 0x18088cu: goto label_18088c;
        case 0x180890u: goto label_180890;
        case 0x180894u: goto label_180894;
        case 0x180898u: goto label_180898;
        case 0x18089cu: goto label_18089c;
        case 0x1808a0u: goto label_1808a0;
        case 0x1808a4u: goto label_1808a4;
        case 0x1808a8u: goto label_1808a8;
        case 0x1808acu: goto label_1808ac;
        case 0x1808b0u: goto label_1808b0;
        case 0x1808b4u: goto label_1808b4;
        case 0x1808b8u: goto label_1808b8;
        case 0x1808bcu: goto label_1808bc;
        case 0x1808c0u: goto label_1808c0;
        case 0x1808c4u: goto label_1808c4;
        case 0x1808c8u: goto label_1808c8;
        case 0x1808ccu: goto label_1808cc;
        case 0x1808d0u: goto label_1808d0;
        case 0x1808d4u: goto label_1808d4;
        case 0x1808d8u: goto label_1808d8;
        case 0x1808dcu: goto label_1808dc;
        case 0x1808e0u: goto label_1808e0;
        case 0x1808e4u: goto label_1808e4;
        case 0x1808e8u: goto label_1808e8;
        case 0x1808ecu: goto label_1808ec;
        case 0x1808f0u: goto label_1808f0;
        case 0x1808f4u: goto label_1808f4;
        case 0x1808f8u: goto label_1808f8;
        case 0x1808fcu: goto label_1808fc;
        case 0x180900u: goto label_180900;
        case 0x180904u: goto label_180904;
        case 0x180908u: goto label_180908;
        case 0x18090cu: goto label_18090c;
        case 0x180910u: goto label_180910;
        case 0x180914u: goto label_180914;
        case 0x180918u: goto label_180918;
        case 0x18091cu: goto label_18091c;
        case 0x180920u: goto label_180920;
        case 0x180924u: goto label_180924;
        case 0x180928u: goto label_180928;
        case 0x18092cu: goto label_18092c;
        case 0x180930u: goto label_180930;
        case 0x180934u: goto label_180934;
        case 0x180938u: goto label_180938;
        case 0x18093cu: goto label_18093c;
        case 0x180940u: goto label_180940;
        case 0x180944u: goto label_180944;
        case 0x180948u: goto label_180948;
        case 0x18094cu: goto label_18094c;
        case 0x180950u: goto label_180950;
        case 0x180954u: goto label_180954;
        case 0x180958u: goto label_180958;
        case 0x18095cu: goto label_18095c;
        case 0x180960u: goto label_180960;
        case 0x180964u: goto label_180964;
        case 0x180968u: goto label_180968;
        case 0x18096cu: goto label_18096c;
        case 0x180970u: goto label_180970;
        case 0x180974u: goto label_180974;
        case 0x180978u: goto label_180978;
        case 0x18097cu: goto label_18097c;
        case 0x180980u: goto label_180980;
        case 0x180984u: goto label_180984;
        case 0x180988u: goto label_180988;
        case 0x18098cu: goto label_18098c;
        case 0x180990u: goto label_180990;
        case 0x180994u: goto label_180994;
        case 0x180998u: goto label_180998;
        case 0x18099cu: goto label_18099c;
        case 0x1809a0u: goto label_1809a0;
        case 0x1809a4u: goto label_1809a4;
        case 0x1809a8u: goto label_1809a8;
        case 0x1809acu: goto label_1809ac;
        case 0x1809b0u: goto label_1809b0;
        case 0x1809b4u: goto label_1809b4;
        case 0x1809b8u: goto label_1809b8;
        case 0x1809bcu: goto label_1809bc;
        case 0x1809c0u: goto label_1809c0;
        case 0x1809c4u: goto label_1809c4;
        case 0x1809c8u: goto label_1809c8;
        case 0x1809ccu: goto label_1809cc;
        case 0x1809d0u: goto label_1809d0;
        case 0x1809d4u: goto label_1809d4;
        case 0x1809d8u: goto label_1809d8;
        case 0x1809dcu: goto label_1809dc;
        case 0x1809e0u: goto label_1809e0;
        case 0x1809e4u: goto label_1809e4;
        case 0x1809e8u: goto label_1809e8;
        case 0x1809ecu: goto label_1809ec;
        case 0x1809f0u: goto label_1809f0;
        case 0x1809f4u: goto label_1809f4;
        case 0x1809f8u: goto label_1809f8;
        case 0x1809fcu: goto label_1809fc;
        case 0x180a00u: goto label_180a00;
        case 0x180a04u: goto label_180a04;
        case 0x180a08u: goto label_180a08;
        case 0x180a0cu: goto label_180a0c;
        case 0x180a10u: goto label_180a10;
        case 0x180a14u: goto label_180a14;
        case 0x180a18u: goto label_180a18;
        case 0x180a1cu: goto label_180a1c;
        case 0x180a20u: goto label_180a20;
        case 0x180a24u: goto label_180a24;
        case 0x180a28u: goto label_180a28;
        case 0x180a2cu: goto label_180a2c;
        case 0x180a30u: goto label_180a30;
        case 0x180a34u: goto label_180a34;
        case 0x180a38u: goto label_180a38;
        case 0x180a3cu: goto label_180a3c;
        case 0x180a40u: goto label_180a40;
        case 0x180a44u: goto label_180a44;
        case 0x180a48u: goto label_180a48;
        case 0x180a4cu: goto label_180a4c;
        case 0x180a50u: goto label_180a50;
        case 0x180a54u: goto label_180a54;
        case 0x180a58u: goto label_180a58;
        case 0x180a5cu: goto label_180a5c;
        case 0x180a60u: goto label_180a60;
        case 0x180a64u: goto label_180a64;
        case 0x180a68u: goto label_180a68;
        case 0x180a6cu: goto label_180a6c;
        case 0x180a70u: goto label_180a70;
        case 0x180a74u: goto label_180a74;
        case 0x180a78u: goto label_180a78;
        case 0x180a7cu: goto label_180a7c;
        case 0x180a80u: goto label_180a80;
        case 0x180a84u: goto label_180a84;
        case 0x180a88u: goto label_180a88;
        case 0x180a8cu: goto label_180a8c;
        case 0x180a90u: goto label_180a90;
        case 0x180a94u: goto label_180a94;
        case 0x180a98u: goto label_180a98;
        case 0x180a9cu: goto label_180a9c;
        case 0x180aa0u: goto label_180aa0;
        case 0x180aa4u: goto label_180aa4;
        case 0x180aa8u: goto label_180aa8;
        case 0x180aacu: goto label_180aac;
        case 0x180ab0u: goto label_180ab0;
        case 0x180ab4u: goto label_180ab4;
        case 0x180ab8u: goto label_180ab8;
        case 0x180abcu: goto label_180abc;
        default: return;
    }

label_1802f0:
    // 0x1802f0: 0xa1260028  sb          $a2, 0x28($t1)
    ctx->pc = 0x1802f0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 40), (uint8_t)GPR_U32(ctx, 6));
label_1802f4:
    // 0x1802f4: 0x8f8787b0  lw          $a3, -0x7850($gp)
    ctx->pc = 0x1802f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
label_1802f8:
    // 0x1802f8: 0x90e60028  lbu         $a2, 0x28($a3)
    ctx->pc = 0x1802f8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 40)));
label_1802fc:
    // 0x1802fc: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x1802fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_180300:
    // 0x180300: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x180300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_180304:
    // 0x180304: 0xc06dfac  jal         func_1B7EB0
label_180308:
    if (ctx->pc == 0x180308u) {
        ctx->pc = 0x180308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180304u;
        // 0x180308: 0xa0e20028  sb          $v0, 0x28($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 40), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18030Cu;
        goto label_18030c;
    }
    ctx->pc = 0x180304u;
    SET_GPR_U32(ctx, 31, 0x18030Cu);
    ctx->pc = 0x180308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180304u;
    // 0x180308: 0xa0e20028  sb          $v0, 0x28($a3) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 7), 40), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7EB0u;
    { ctx->pc = 0x1b7eb0; return; }
    ctx->pc = 0x18030Cu;
label_18030c:
    // 0x18030c: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x18030cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_180310:
    // 0x180310: 0xc06dfac  jal         func_1B7EB0
label_180314:
    if (ctx->pc == 0x180314u) {
        ctx->pc = 0x180314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180310u;
        // 0x180314: 0x24050061  addiu       $a1, $zero, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180318u;
        goto label_180318;
    }
    ctx->pc = 0x180310u;
    SET_GPR_U32(ctx, 31, 0x180318u);
    ctx->pc = 0x180314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180310u;
    // 0x180314: 0x24050061  addiu       $a1, $zero, 0x61 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7EB0u;
    { ctx->pc = 0x1b7eb0; return; }
    ctx->pc = 0x180318u;
label_180318:
    // 0x180318: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x180318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18031c:
    // 0x18031c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18031cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_180320:
    // 0x180320: 0xc06dfd4  jal         func_1B7F50
label_180324:
    if (ctx->pc == 0x180324u) {
        ctx->pc = 0x180324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180320u;
        // 0x180324: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180328u;
        goto label_180328;
    }
    ctx->pc = 0x180320u;
    SET_GPR_U32(ctx, 31, 0x180328u);
    ctx->pc = 0x180324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180320u;
    // 0x180324: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7F50u;
    { ctx->pc = 0x1b7f50; return; }
    ctx->pc = 0x180328u;
label_180328:
    // 0x180328: 0xaf8087a0  sw          $zero, -0x7860($gp)
    ctx->pc = 0x180328u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936480), GPR_U32(ctx, 0));
label_18032c:
    // 0x18032c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18032cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_180330:
    // 0x180330: 0x3e00008  jr          $ra
label_180334:
    if (ctx->pc == 0x180334u) {
        ctx->pc = 0x180334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180330u;
        // 0x180334: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180338u;
        goto label_180338;
    }
    ctx->pc = 0x180330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180330u;
        // 0x180334: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180338u;
label_180338:
    // 0x180338: 0x0  nop
    ctx->pc = 0x180338u;
    // NOP
label_18033c:
    // 0x18033c: 0x0  nop
    ctx->pc = 0x18033cu;
    // NOP
label_180340:
    // 0x180340: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x180340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_180344:
    // 0x180344: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x180344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_180348:
    // 0x180348: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x180348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_18034c:
    // 0x18034c: 0x24050280  addiu       $a1, $zero, 0x280
    ctx->pc = 0x18034cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_180350:
    // 0x180350: 0x240600e0  addiu       $a2, $zero, 0xE0
    ctx->pc = 0x180350u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
label_180354:
    // 0x180354: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x180354u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_180358:
    // 0x180358: 0xc0600dc  jal         func_180370
label_18035c:
    if (ctx->pc == 0x18035Cu) {
        ctx->pc = 0x18035Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180358u;
        // 0x18035c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180360u;
        goto label_180360;
    }
    ctx->pc = 0x180358u;
    SET_GPR_U32(ctx, 31, 0x180360u);
    ctx->pc = 0x18035Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180358u;
    // 0x18035c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180370u;
    goto label_180370;
    ctx->pc = 0x180360u;
label_180360:
    // 0x180360: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x180360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_180364:
    // 0x180364: 0x3e00008  jr          $ra
label_180368:
    if (ctx->pc == 0x180368u) {
        ctx->pc = 0x180368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180364u;
        // 0x180368: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18036Cu;
        goto label_18036c;
    }
    ctx->pc = 0x180364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180364u;
        // 0x180368: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18036Cu;
label_18036c:
    // 0x18036c: 0x0  nop
    ctx->pc = 0x18036cu;
    // NOP
label_180370:
    // 0x180370: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x180370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_180374:
    // 0x180374: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x180374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_180378:
    // 0x180378: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x180378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_18037c:
    // 0x18037c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18037cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_180380:
    // 0x180380: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x180380u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_180384:
    // 0x180384: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x180384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_180388:
    // 0x180388: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x180388u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18038c:
    // 0x18038c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18038cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_180390:
    // 0x180390: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x180390u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_180394:
    // 0x180394: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x180394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_180398:
    // 0x180398: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x180398u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_18039c:
    // 0x18039c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x18039cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1803a0:
    // 0x1803a0: 0xc06641a  jal         func_199068
label_1803a4:
    if (ctx->pc == 0x1803A4u) {
        ctx->pc = 0x1803A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1803A0u;
        // 0x1803a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1803A8u;
        goto label_1803a8;
    }
    ctx->pc = 0x1803A0u;
    SET_GPR_U32(ctx, 31, 0x1803A8u);
    ctx->pc = 0x1803A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1803A0u;
    // 0x1803a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199068u;
    { ctx->pc = 0x199068; return; }
    ctx->pc = 0x1803A8u;
label_1803a8:
    // 0x1803a8: 0xc06641a  jal         func_199068
label_1803ac:
    if (ctx->pc == 0x1803ACu) {
        ctx->pc = 0x1803ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1803A8u;
        // 0x1803ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1803B0u;
        goto label_1803b0;
    }
    ctx->pc = 0x1803A8u;
    SET_GPR_U32(ctx, 31, 0x1803B0u);
    ctx->pc = 0x1803ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1803A8u;
    // 0x1803ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199068u;
    { ctx->pc = 0x199068; return; }
    ctx->pc = 0x1803B0u;
label_1803b0:
    // 0x1803b0: 0x3c011200  lui         $at, 0x1200
    ctx->pc = 0x1803b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4608 << 16));
label_1803b4:
    // 0x1803b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1803b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1803b8:
    // 0x1803b8: 0xdc221000  ld          $v0, 0x1000($at)
    ctx->pc = 0x1803b8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 1), 4096)));
label_1803bc:
    // 0x1803bc: 0x2137a  dsrl        $v0, $v0, 13
    ctx->pc = 0x1803bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 13);
label_1803c0:
    // 0x1803c0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1803c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1803c4:
    // 0x1803c4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1803c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1803c8:
    // 0x1803c8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1803c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1803cc:
    // 0x1803cc: 0xaf828804  sw          $v0, -0x77FC($gp)
    ctx->pc = 0x1803ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936580), GPR_U32(ctx, 2));
label_1803d0:
    // 0x1803d0: 0xaf9387fc  sw          $s3, -0x7804($gp)
    ctx->pc = 0x1803d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936572), GPR_U32(ctx, 19));
label_1803d4:
    // 0x1803d4: 0xaf9287f8  sw          $s2, -0x7808($gp)
    ctx->pc = 0x1803d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936568), GPR_U32(ctx, 18));
label_1803d8:
    // 0x1803d8: 0xa79087f4  sh          $s0, -0x780C($gp)
    ctx->pc = 0x1803d8u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936564), (uint16_t)GPR_U32(ctx, 16));
label_1803dc:
    // 0x1803dc: 0x878287f4  lh          $v0, -0x780C($gp)
    ctx->pc = 0x1803dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936564)));
label_1803e0:
    // 0x1803e0: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_1803e4:
    if (ctx->pc == 0x1803E4u) {
        ctx->pc = 0x1803E8u;
        goto label_1803e8;
    }
    ctx->pc = 0x1803E0u;
    {
        const bool branch_taken_0x1803e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1803e0) {
            ctx->pc = 0x1803ECu;
            goto label_1803ec;
        }
    }
    ctx->pc = 0x1803E8u;
label_1803e8:
    // 0x1803e8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1803e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1803ec:
    // 0x1803ec: 0xaf8387f0  sw          $v1, -0x7810($gp)
    ctx->pc = 0x1803ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936560), GPR_U32(ctx, 3));
label_1803f0:
    // 0x1803f0: 0x8f8287fc  lw          $v0, -0x7804($gp)
    ctx->pc = 0x1803f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936572)));
label_1803f4:
    // 0x1803f4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1803f8:
    if (ctx->pc == 0x1803F8u) {
        ctx->pc = 0x1803F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1803F4u;
        // 0x1803f8: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1803FCu;
        goto label_1803fc;
    }
    ctx->pc = 0x1803F4u;
    {
        const bool branch_taken_0x1803f4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1803F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1803F4u;
        // 0x1803f8: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1803f4) {
            ctx->pc = 0x180404u;
            goto label_180404;
        }
    }
    ctx->pc = 0x1803FCu;
label_1803fc:
    // 0x1803fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1803fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_180400:
    // 0x180400: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x180400u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_180404:
    // 0x180404: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x180404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_180408:
    // 0x180408: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x180408u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18040c:
    // 0x18040c: 0xaf8287ec  sw          $v0, -0x7814($gp)
    ctx->pc = 0x18040cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936556), GPR_U32(ctx, 2));
label_180410:
    // 0x180410: 0x8f8287f8  lw          $v0, -0x7808($gp)
    ctx->pc = 0x180410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936568)));
label_180414:
    // 0x180414: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_180418:
    if (ctx->pc == 0x180418u) {
        ctx->pc = 0x180418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180414u;
        // 0x180418: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18041Cu;
        goto label_18041c;
    }
    ctx->pc = 0x180414u;
    {
        const bool branch_taken_0x180414 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x180418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180414u;
        // 0x180418: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180414) {
            ctx->pc = 0x180424u;
            goto label_180424;
        }
    }
    ctx->pc = 0x18041Cu;
label_18041c:
    // 0x18041c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18041cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_180420:
    // 0x180420: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x180420u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_180424:
    // 0x180424: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x180424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_180428:
    // 0x180428: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x180428u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18042c:
    // 0x18042c: 0x1280000a  beqz        $s4, . + 4 + (0xA << 2)
label_180430:
    if (ctx->pc == 0x180430u) {
        ctx->pc = 0x180430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18042Cu;
        // 0x180430: 0xaf8287e8  sw          $v0, -0x7818($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936552), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180434u;
        goto label_180434;
    }
    ctx->pc = 0x18042Cu;
    {
        const bool branch_taken_0x18042c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x180430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18042Cu;
        // 0x180430: 0xaf8287e8  sw          $v0, -0x7818($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936552), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18042c) {
            ctx->pc = 0x180458u;
            goto label_180458;
        }
    }
    ctx->pc = 0x180434u;
label_180434:
    // 0x180434: 0x878787f4  lh          $a3, -0x780C($gp)
    ctx->pc = 0x180434u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936564)));
label_180438:
    // 0x180438: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x180438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18043c:
    // 0x18043c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18043cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_180440:
    // 0x180440: 0xc0660e6  jal         func_198398
label_180444:
    if (ctx->pc == 0x180444u) {
        ctx->pc = 0x180444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180440u;
        // 0x180444: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180448u;
        goto label_180448;
    }
    ctx->pc = 0x180440u;
    SET_GPR_U32(ctx, 31, 0x180448u);
    ctx->pc = 0x180444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180440u;
    // 0x180444: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198398u;
    { ctx->pc = 0x198398; return; }
    ctx->pc = 0x180448u;
label_180448:
    // 0x180448: 0xc08d108  jal         func_234420
label_18044c:
    if (ctx->pc == 0x18044Cu) {
        ctx->pc = 0x180450u;
        goto label_180450;
    }
    ctx->pc = 0x180448u;
    SET_GPR_U32(ctx, 31, 0x180450u);
    ctx->pc = 0x234420u;
    { ctx->pc = 0x234420; return; }
    ctx->pc = 0x180450u;
label_180450:
    // 0x180450: 0x10000005  b           . + 4 + (0x5 << 2)
label_180454:
    if (ctx->pc == 0x180454u) {
        ctx->pc = 0x180454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180450u;
        // 0x180454: 0x8f8487b0  lw          $a0, -0x7850($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180458u;
        goto label_180458;
    }
    ctx->pc = 0x180450u;
    {
        const bool branch_taken_0x180450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180450u;
        // 0x180454: 0x8f8487b0  lw          $a0, -0x7850($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180450) {
            ctx->pc = 0x180468u;
            goto label_180468;
        }
    }
    ctx->pc = 0x180458u;
label_180458:
    // 0x180458: 0xc06614a  jal         func_198528
label_18045c:
    if (ctx->pc == 0x18045Cu) {
        ctx->pc = 0x180460u;
        goto label_180460;
    }
    ctx->pc = 0x180458u;
    SET_GPR_U32(ctx, 31, 0x180460u);
    ctx->pc = 0x198528u;
    { ctx->pc = 0x198528; return; }
    ctx->pc = 0x180460u;
label_180460:
    // 0x180460: 0xa4500004  sh          $s0, 0x4($v0)
    ctx->pc = 0x180460u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 16));
label_180464:
    // 0x180464: 0x8f8487b0  lw          $a0, -0x7850($gp)
    ctx->pc = 0x180464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
label_180468:
    // 0x180468: 0x112c3c  dsll32      $a1, $s1, 16
    ctx->pc = 0x180468u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 16));
label_18046c:
    // 0x18046c: 0x13343c  dsll32      $a2, $s3, 16
    ctx->pc = 0x18046cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) << (32 + 16));
label_180470:
    // 0x180470: 0x123c3c  dsll32      $a3, $s2, 16
    ctx->pc = 0x180470u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) << (32 + 16));
label_180474:
    // 0x180474: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x180474u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_180478:
    // 0x180478: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x180478u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
label_18047c:
    // 0x18047c: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x18047cu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
label_180480:
    // 0x180480: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x180480u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_180484:
    // 0x180484: 0x2409003a  addiu       $t1, $zero, 0x3A
    ctx->pc = 0x180484u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
label_180488:
    // 0x180488: 0xc0668b8  jal         func_19A2E0
label_18048c:
    if (ctx->pc == 0x18048Cu) {
        ctx->pc = 0x18048Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180488u;
        // 0x18048c: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180490u;
        goto label_180490;
    }
    ctx->pc = 0x180488u;
    SET_GPR_U32(ctx, 31, 0x180490u);
    ctx->pc = 0x18048Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180488u;
    // 0x18048c: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A2E0u;
    { ctx->pc = 0x19a2e0; return; }
    ctx->pc = 0x180490u;
label_180490:
    // 0x180490: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x180490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
label_180494:
    // 0x180494: 0x8c24ca48  lw          $a0, -0x35B8($at)
    ctx->pc = 0x180494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953544)));
label_180498:
    // 0x180498: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x180498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
label_18049c:
    // 0x18049c: 0xc06dfe4  jal         func_1B7F90
label_1804a0:
    if (ctx->pc == 0x1804A0u) {
        ctx->pc = 0x1804A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18049Cu;
        // 0x1804a0: 0x8c25ca4c  lw          $a1, -0x35B4($at) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953548)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1804A4u;
        goto label_1804a4;
    }
    ctx->pc = 0x18049Cu;
    SET_GPR_U32(ctx, 31, 0x1804A4u);
    ctx->pc = 0x1804A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18049Cu;
    // 0x1804a0: 0x8c25ca4c  lw          $a1, -0x35B4($at) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953548)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7F90u;
    { ctx->pc = 0x1b7f90; return; }
    ctx->pc = 0x1804A4u;
label_1804a4:
    // 0x1804a4: 0xc0692a8  jal         func_1A4AA0
label_1804a8:
    if (ctx->pc == 0x1804A8u) {
        ctx->pc = 0x1804A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1804A4u;
        // 0x1804a8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1804ACu;
        goto label_1804ac;
    }
    ctx->pc = 0x1804A4u;
    SET_GPR_U32(ctx, 31, 0x1804ACu);
    ctx->pc = 0x1804A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1804A4u;
    // 0x1804a8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4AA0u;
    { ctx->pc = 0x1a4aa0; return; }
    ctx->pc = 0x1804ACu;
label_1804ac:
    // 0x1804ac: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1804acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1804b0:
    // 0x1804b0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1804b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1804b4:
    // 0x1804b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1804b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1804b8:
    // 0x1804b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1804b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1804bc:
    // 0x1804bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1804bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1804c0:
    // 0x1804c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1804c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1804c4:
    // 0x1804c4: 0x3e00008  jr          $ra
label_1804c8:
    if (ctx->pc == 0x1804C8u) {
        ctx->pc = 0x1804C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1804C4u;
        // 0x1804c8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1804CCu;
        goto label_1804cc;
    }
    ctx->pc = 0x1804C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1804C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1804C4u;
        // 0x1804c8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1804C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1804CCu;
label_1804cc:
    // 0x1804cc: 0x0  nop
    ctx->pc = 0x1804ccu;
    // NOP
label_1804d0:
    // 0x1804d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1804d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1804d4:
    // 0x1804d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1804d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1804d8:
    // 0x1804d8: 0xc08f0cc  jal         func_23C330
label_1804dc:
    if (ctx->pc == 0x1804DCu) {
        ctx->pc = 0x1804E0u;
        goto label_1804e0;
    }
    ctx->pc = 0x1804D8u;
    SET_GPR_U32(ctx, 31, 0x1804E0u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1804E0u;
label_1804e0:
    // 0x1804e0: 0xc06e07c  jal         func_1B81F0
label_1804e4:
    if (ctx->pc == 0x1804E4u) {
        ctx->pc = 0x1804E8u;
        goto label_1804e8;
    }
    ctx->pc = 0x1804E0u;
    SET_GPR_U32(ctx, 31, 0x1804E8u);
    ctx->pc = 0x1B81F0u;
    { ctx->pc = 0x1b81f0; return; }
    ctx->pc = 0x1804E8u;
label_1804e8:
    // 0x1804e8: 0xc0692a8  jal         func_1A4AA0
label_1804ec:
    if (ctx->pc == 0x1804ECu) {
        ctx->pc = 0x1804ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1804E8u;
        // 0x1804ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1804F0u;
        goto label_1804f0;
    }
    ctx->pc = 0x1804E8u;
    SET_GPR_U32(ctx, 31, 0x1804F0u);
    ctx->pc = 0x1804ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1804E8u;
    // 0x1804ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4AA0u;
    { ctx->pc = 0x1a4aa0; return; }
    ctx->pc = 0x1804F0u;
label_1804f0:
    // 0x1804f0: 0xaf808808  sw          $zero, -0x77F8($gp)
    ctx->pc = 0x1804f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936584), GPR_U32(ctx, 0));
label_1804f4:
    // 0x1804f4: 0xc069218  jal         func_1A4860
label_1804f8:
    if (ctx->pc == 0x1804F8u) {
        ctx->pc = 0x1804F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1804F4u;
        // 0x1804f8: 0x8f848304  lw          $a0, -0x7CFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935300)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1804FCu;
        goto label_1804fc;
    }
    ctx->pc = 0x1804F4u;
    SET_GPR_U32(ctx, 31, 0x1804FCu);
    ctx->pc = 0x1804F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1804F4u;
    // 0x1804f8: 0x8f848304  lw          $a0, -0x7CFC($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935300)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    { ctx->pc = 0x1a4860; return; }
    ctx->pc = 0x1804FCu;
label_1804fc:
    // 0x1804fc: 0xc05c230  jal         func_1708C0
label_180500:
    if (ctx->pc == 0x180500u) {
        ctx->pc = 0x180504u;
        goto label_180504;
    }
    ctx->pc = 0x1804FCu;
    SET_GPR_U32(ctx, 31, 0x180504u);
    ctx->pc = 0x1708C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1708C0u, 0x1804FCu, 0x180504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180504u;
label_180504:
    // 0x180504: 0xc041538  jal         func_1054E0
label_180508:
    if (ctx->pc == 0x180508u) {
        ctx->pc = 0x18050Cu;
        goto label_18050c;
    }
    ctx->pc = 0x180504u;
    SET_GPR_U32(ctx, 31, 0x18050Cu);
    ctx->pc = 0x1054E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054E0u, 0x180504u, 0x18050Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18050Cu;
label_18050c:
    // 0x18050c: 0xc08f0cc  jal         func_23C330
label_180510:
    if (ctx->pc == 0x180510u) {
        ctx->pc = 0x180514u;
        goto label_180514;
    }
    ctx->pc = 0x18050Cu;
    SET_GPR_U32(ctx, 31, 0x180514u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x180514u;
label_180514:
    // 0x180514: 0xc06e07c  jal         func_1B81F0
label_180518:
    if (ctx->pc == 0x180518u) {
        ctx->pc = 0x18051Cu;
        goto label_18051c;
    }
    ctx->pc = 0x180514u;
    SET_GPR_U32(ctx, 31, 0x18051Cu);
    ctx->pc = 0x1B81F0u;
    { ctx->pc = 0x1b81f0; return; }
    ctx->pc = 0x18051Cu;
label_18051c:
    // 0x18051c: 0xc0692a8  jal         func_1A4AA0
label_180520:
    if (ctx->pc == 0x180520u) {
        ctx->pc = 0x180520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18051Cu;
        // 0x180520: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180524u;
        goto label_180524;
    }
    ctx->pc = 0x18051Cu;
    SET_GPR_U32(ctx, 31, 0x180524u);
    ctx->pc = 0x180520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18051Cu;
    // 0x180520: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4AA0u;
    { ctx->pc = 0x1a4aa0; return; }
    ctx->pc = 0x180524u;
label_180524:
    // 0x180524: 0xaf808808  sw          $zero, -0x77F8($gp)
    ctx->pc = 0x180524u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936584), GPR_U32(ctx, 0));
label_180528:
    // 0x180528: 0xc069218  jal         func_1A4860
label_18052c:
    if (ctx->pc == 0x18052Cu) {
        ctx->pc = 0x18052Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180528u;
        // 0x18052c: 0x8f848304  lw          $a0, -0x7CFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935300)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180530u;
        goto label_180530;
    }
    ctx->pc = 0x180528u;
    SET_GPR_U32(ctx, 31, 0x180530u);
    ctx->pc = 0x18052Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180528u;
    // 0x18052c: 0x8f848304  lw          $a0, -0x7CFC($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935300)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    { ctx->pc = 0x1a4860; return; }
    ctx->pc = 0x180530u;
label_180530:
    // 0x180530: 0xc05c230  jal         func_1708C0
label_180534:
    if (ctx->pc == 0x180534u) {
        ctx->pc = 0x180538u;
        goto label_180538;
    }
    ctx->pc = 0x180530u;
    SET_GPR_U32(ctx, 31, 0x180538u);
    ctx->pc = 0x1708C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1708C0u, 0x180530u, 0x180538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180538u;
label_180538:
    // 0x180538: 0xc041538  jal         func_1054E0
label_18053c:
    if (ctx->pc == 0x18053Cu) {
        ctx->pc = 0x180540u;
        goto label_180540;
    }
    ctx->pc = 0x180538u;
    SET_GPR_U32(ctx, 31, 0x180540u);
    ctx->pc = 0x1054E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054E0u, 0x180538u, 0x180540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180540u;
label_180540:
    // 0x180540: 0xc0694c0  jal         func_1A5300
label_180544:
    if (ctx->pc == 0x180544u) {
        ctx->pc = 0x180544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180540u;
        // 0x180544: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180548u;
        goto label_180548;
    }
    ctx->pc = 0x180540u;
    SET_GPR_U32(ctx, 31, 0x180548u);
    ctx->pc = 0x180544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180540u;
    // 0x180544: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5300u;
    { ctx->pc = 0x1a5300; return; }
    ctx->pc = 0x180548u;
label_180548:
    // 0x180548: 0xc08d14c  jal         func_234530
label_18054c:
    if (ctx->pc == 0x18054Cu) {
        ctx->pc = 0x18054Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180548u;
        // 0x18054c: 0x8f8487e0  lw          $a0, -0x7820($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936544)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180550u;
        goto label_180550;
    }
    ctx->pc = 0x180548u;
    SET_GPR_U32(ctx, 31, 0x180550u);
    ctx->pc = 0x18054Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180548u;
    // 0x18054c: 0x8f8487e0  lw          $a0, -0x7820($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936544)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234530u;
    { ctx->pc = 0x234530; return; }
    ctx->pc = 0x180550u;
label_180550:
    // 0x180550: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x180550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_180554:
    // 0x180554: 0x3e00008  jr          $ra
label_180558:
    if (ctx->pc == 0x180558u) {
        ctx->pc = 0x180558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180554u;
        // 0x180558: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18055Cu;
        goto label_18055c;
    }
    ctx->pc = 0x180554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180554u;
        // 0x180558: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18055Cu;
label_18055c:
    // 0x18055c: 0x0  nop
    ctx->pc = 0x18055cu;
    // NOP
label_180560:
    // 0x180560: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x180560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_180564:
    // 0x180564: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x180564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_180568:
    // 0x180568: 0xc06641a  jal         func_199068
label_18056c:
    if (ctx->pc == 0x18056Cu) {
        ctx->pc = 0x18056Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180568u;
        // 0x18056c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180570u;
        goto label_180570;
    }
    ctx->pc = 0x180568u;
    SET_GPR_U32(ctx, 31, 0x180570u);
    ctx->pc = 0x18056Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180568u;
    // 0x18056c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199068u;
    { ctx->pc = 0x199068; return; }
    ctx->pc = 0x180570u;
label_180570:
    // 0x180570: 0xc06641a  jal         func_199068
label_180574:
    if (ctx->pc == 0x180574u) {
        ctx->pc = 0x180574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180570u;
        // 0x180574: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180578u;
        goto label_180578;
    }
    ctx->pc = 0x180570u;
    SET_GPR_U32(ctx, 31, 0x180578u);
    ctx->pc = 0x180574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180570u;
    // 0x180574: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199068u;
    { ctx->pc = 0x199068; return; }
    ctx->pc = 0x180578u;
label_180578:
    // 0x180578: 0xc0694c0  jal         func_1A5300
label_18057c:
    if (ctx->pc == 0x18057Cu) {
        ctx->pc = 0x18057Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180578u;
        // 0x18057c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180580u;
        goto label_180580;
    }
    ctx->pc = 0x180578u;
    SET_GPR_U32(ctx, 31, 0x180580u);
    ctx->pc = 0x18057Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180578u;
    // 0x18057c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5300u;
    { ctx->pc = 0x1a5300; return; }
    ctx->pc = 0x180580u;
label_180580:
    // 0x180580: 0xc06e068  jal         func_1B81A0
label_180584:
    if (ctx->pc == 0x180584u) {
        ctx->pc = 0x180588u;
        goto label_180588;
    }
    ctx->pc = 0x180580u;
    SET_GPR_U32(ctx, 31, 0x180588u);
    ctx->pc = 0x1B81A0u;
    { ctx->pc = 0x1b81a0; return; }
    ctx->pc = 0x180588u;
label_180588:
    // 0x180588: 0xc0692a8  jal         func_1A4AA0
label_18058c:
    if (ctx->pc == 0x18058Cu) {
        ctx->pc = 0x18058Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180588u;
        // 0x18058c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180590u;
        goto label_180590;
    }
    ctx->pc = 0x180588u;
    SET_GPR_U32(ctx, 31, 0x180590u);
    ctx->pc = 0x18058Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180588u;
    // 0x18058c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4AA0u;
    { ctx->pc = 0x1a4aa0; return; }
    ctx->pc = 0x180590u;
label_180590:
    // 0x180590: 0xc06641a  jal         func_199068
label_180594:
    if (ctx->pc == 0x180594u) {
        ctx->pc = 0x180594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180590u;
        // 0x180594: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180598u;
        goto label_180598;
    }
    ctx->pc = 0x180590u;
    SET_GPR_U32(ctx, 31, 0x180598u);
    ctx->pc = 0x180594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180590u;
    // 0x180594: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199068u;
    { ctx->pc = 0x199068; return; }
    ctx->pc = 0x180598u;
label_180598:
    // 0x180598: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x180598u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_18059c:
    // 0x18059c: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x18059cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
label_1805a0:
    // 0x1805a0: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1805a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_1805a4:
    // 0x1805a4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1805a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1805a8:
    // 0x1805a8: 0xac233ffc  sw          $v1, 0x3FFC($at)
    ctx->pc = 0x1805a8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16380), GPR_U32(ctx, 3));
label_1805ac:
    // 0x1805ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1805acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1805b0:
    // 0x1805b0: 0xaf808808  sw          $zero, -0x77F8($gp)
    ctx->pc = 0x1805b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936584), GPR_U32(ctx, 0));
label_1805b4:
    // 0x1805b4: 0x3c011200  lui         $at, 0x1200
    ctx->pc = 0x1805b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4608 << 16));
label_1805b8:
    // 0x1805b8: 0xaf8287e4  sw          $v0, -0x781C($gp)
    ctx->pc = 0x1805b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936548), GPR_U32(ctx, 2));
label_1805bc:
    // 0x1805bc: 0x24840610  addiu       $a0, $a0, 0x610
    ctx->pc = 0x1805bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1552));
label_1805c0:
    // 0x1805c0: 0xaf808800  sw          $zero, -0x7800($gp)
    ctx->pc = 0x1805c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936576), GPR_U32(ctx, 0));
label_1805c4:
    // 0x1805c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1805c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1805c8:
    // 0x1805c8: 0xdc221000  ld          $v0, 0x1000($at)
    ctx->pc = 0x1805c8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 1), 4096)));
label_1805cc:
    // 0x1805cc: 0x2137a  dsrl        $v0, $v0, 13
    ctx->pc = 0x1805ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 13);
label_1805d0:
    // 0x1805d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1805d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1805d4:
    // 0x1805d4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1805d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1805d8:
    // 0x1805d8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1805d8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1805dc:
    // 0x1805dc: 0xc08d118  jal         func_234460
label_1805e0:
    if (ctx->pc == 0x1805E0u) {
        ctx->pc = 0x1805E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1805DCu;
        // 0x1805e0: 0xaf828804  sw          $v0, -0x77FC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936580), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1805E4u;
        goto label_1805e4;
    }
    ctx->pc = 0x1805DCu;
    SET_GPR_U32(ctx, 31, 0x1805E4u);
    ctx->pc = 0x1805E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1805DCu;
    // 0x1805e0: 0xaf828804  sw          $v0, -0x77FC($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936580), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234460u;
    { ctx->pc = 0x234460; return; }
    ctx->pc = 0x1805E4u;
label_1805e4:
    // 0x1805e4: 0xaf8287e0  sw          $v0, -0x7820($gp)
    ctx->pc = 0x1805e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936544), GPR_U32(ctx, 2));
label_1805e8:
    // 0x1805e8: 0xc0694da  jal         func_1A5368
label_1805ec:
    if (ctx->pc == 0x1805ECu) {
        ctx->pc = 0x1805ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1805E8u;
        // 0x1805ec: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1805F0u;
        goto label_1805f0;
    }
    ctx->pc = 0x1805E8u;
    SET_GPR_U32(ctx, 31, 0x1805F0u);
    ctx->pc = 0x1805ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1805E8u;
    // 0x1805ec: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5368u;
    { ctx->pc = 0x1a5368; return; }
    ctx->pc = 0x1805F0u;
label_1805f0:
    // 0x1805f0: 0xc05c43c  jal         func_1710F0
label_1805f4:
    if (ctx->pc == 0x1805F4u) {
        ctx->pc = 0x1805F8u;
        goto label_1805f8;
    }
    ctx->pc = 0x1805F0u;
    SET_GPR_U32(ctx, 31, 0x1805F8u);
    ctx->pc = 0x1710F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1710F0u, 0x1805F0u, 0x1805F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1805F8u;
label_1805f8:
    // 0x1805f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1805f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1805fc:
    // 0x1805fc: 0x3e00008  jr          $ra
label_180600:
    if (ctx->pc == 0x180600u) {
        ctx->pc = 0x180600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1805FCu;
        // 0x180600: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180604u;
        goto label_180604;
    }
    ctx->pc = 0x1805FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1805FCu;
        // 0x180600: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1805FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180604u;
label_180604:
    // 0x180604: 0x0  nop
    ctx->pc = 0x180604u;
    // NOP
label_180608:
    // 0x180608: 0x0  nop
    ctx->pc = 0x180608u;
    // NOP
label_18060c:
    // 0x18060c: 0x0  nop
    ctx->pc = 0x18060cu;
    // NOP
label_180610:
    // 0x180610: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x180610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_180614:
    // 0x180614: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x180614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_180618:
    // 0x180618: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
label_18061c:
    if (ctx->pc == 0x18061Cu) {
        ctx->pc = 0x18061Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180618u;
        // 0x18061c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180620u;
        goto label_180620;
    }
    ctx->pc = 0x180618u;
    {
        const bool branch_taken_0x180618 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x18061Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180618u;
        // 0x18061c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180618) {
            ctx->pc = 0x180630u;
            goto label_180630;
        }
    }
    ctx->pc = 0x180620u;
label_180620:
    // 0x180620: 0xf  sync
    ctx->pc = 0x180620u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_180624:
    // 0x180624: 0x42000038  ei
    ctx->pc = 0x180624u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_180628:
    // 0x180628: 0x100000c2  b           . + 4 + (0xC2 << 2)
label_18062c:
    if (ctx->pc == 0x18062Cu) {
        ctx->pc = 0x18062Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180628u;
        // 0x18062c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180630u;
        goto label_180630;
    }
    ctx->pc = 0x180628u;
    {
        const bool branch_taken_0x180628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18062Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180628u;
        // 0x18062c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180628) {
            ctx->pc = 0x180934u;
            goto label_180934;
        }
    }
    ctx->pc = 0x180630u;
label_180630:
    // 0x180630: 0x8f828804  lw          $v0, -0x77FC($gp)
    ctx->pc = 0x180630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936580)));
label_180634:
    // 0x180634: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x180634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_180638:
    // 0x180638: 0xaf828804  sw          $v0, -0x77FC($gp)
    ctx->pc = 0x180638u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936580), GPR_U32(ctx, 2));
label_18063c:
    // 0x18063c: 0x3c011200  lui         $at, 0x1200
    ctx->pc = 0x18063cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4608 << 16));
label_180640:
    // 0x180640: 0x8f838804  lw          $v1, -0x77FC($gp)
    ctx->pc = 0x180640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936580)));
label_180644:
    // 0x180644: 0xdc221000  ld          $v0, 0x1000($at)
    ctx->pc = 0x180644u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 1), 4096)));
label_180648:
    // 0x180648: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x180648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_18064c:
    // 0x18064c: 0x2137a  dsrl        $v0, $v0, 13
    ctx->pc = 0x18064cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 13);
label_180650:
    // 0x180650: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x180650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_180654:
    // 0x180654: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x180654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_180658:
    // 0x180658: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x180658u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_18065c:
    // 0x18065c: 0x1062fff7  beq         $v1, $v0, . + 4 + (-0x9 << 2)
label_180660:
    if (ctx->pc == 0x180660u) {
        ctx->pc = 0x180660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18065Cu;
        // 0x180660: 0xaf8287dc  sw          $v0, -0x7824($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936540), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180664u;
        goto label_180664;
    }
    ctx->pc = 0x18065Cu;
    {
        const bool branch_taken_0x18065c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x180660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18065Cu;
        // 0x180660: 0xaf8287dc  sw          $v0, -0x7824($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936540), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18065c) {
            ctx->pc = 0x18063Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18063c;
        }
    }
    ctx->pc = 0x180664u;
label_180664:
    // 0x180664: 0x8f8287e4  lw          $v0, -0x781C($gp)
    ctx->pc = 0x180664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936548)));
label_180668:
    // 0x180668: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_18066c:
    if (ctx->pc == 0x18066Cu) {
        ctx->pc = 0x18066Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180668u;
        // 0x18066c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180670u;
        goto label_180670;
    }
    ctx->pc = 0x180668u;
    {
        const bool branch_taken_0x180668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18066Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180668u;
        // 0x18066c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180668) {
            ctx->pc = 0x180680u;
            goto label_180680;
        }
    }
    ctx->pc = 0x180670u;
label_180670:
    // 0x180670: 0xf  sync
    ctx->pc = 0x180670u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_180674:
    // 0x180674: 0x42000038  ei
    ctx->pc = 0x180674u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_180678:
    // 0x180678: 0x100000ae  b           . + 4 + (0xAE << 2)
label_18067c:
    if (ctx->pc == 0x18067Cu) {
        ctx->pc = 0x18067Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180678u;
        // 0x18067c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180680u;
        goto label_180680;
    }
    ctx->pc = 0x180678u;
    {
        const bool branch_taken_0x180678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18067Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180678u;
        // 0x18067c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180678) {
            ctx->pc = 0x180934u;
            goto label_180934;
        }
    }
    ctx->pc = 0x180680u;
label_180680:
    // 0x180680: 0xc066440  jal         func_199100
label_180684:
    if (ctx->pc == 0x180684u) {
        ctx->pc = 0x180684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180680u;
        // 0x180684: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180688u;
        goto label_180688;
    }
    ctx->pc = 0x180680u;
    SET_GPR_U32(ctx, 31, 0x180688u);
    ctx->pc = 0x180684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180680u;
    // 0x180684: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199100u;
    { ctx->pc = 0x199100; return; }
    ctx->pc = 0x180688u;
label_180688:
    // 0x180688: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_18068c:
    if (ctx->pc == 0x18068Cu) {
        ctx->pc = 0x180690u;
        goto label_180690;
    }
    ctx->pc = 0x180688u;
    {
        const bool branch_taken_0x180688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x180688) {
            ctx->pc = 0x18073Cu;
            goto label_18073c;
        }
    }
    ctx->pc = 0x180690u;
label_180690:
    // 0x180690: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x180690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_180694:
    // 0x180694: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x180694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
label_180698:
    // 0x180698: 0xac22f590  sw          $v0, -0xA70($at)
    ctx->pc = 0x180698u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964624), GPR_U32(ctx, 2));
label_18069c:
    // 0x18069c: 0x2405feff  addiu       $a1, $zero, -0x101
    ctx->pc = 0x18069cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
label_1806a0:
    // 0x1806a0: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x1806a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
label_1806a4:
    // 0x1806a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1806a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1806a8:
    // 0x1806a8: 0x8c228000  lw          $v0, -0x8000($at)
    ctx->pc = 0x1806a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294934528)));
label_1806ac:
    // 0x1806ac: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1806acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_1806b0:
    // 0x1806b0: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x1806b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
label_1806b4:
    // 0x1806b4: 0xac228000  sw          $v0, -0x8000($at)
    ctx->pc = 0x1806b4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294934528), GPR_U32(ctx, 2));
label_1806b8:
    // 0x1806b8: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x1806b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
label_1806bc:
    // 0x1806bc: 0xac243810  sw          $a0, 0x3810($at)
    ctx->pc = 0x1806bcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 14352), GPR_U32(ctx, 4));
label_1806c0:
    // 0x1806c0: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x1806c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
label_1806c4:
    // 0x1806c4: 0x8c229000  lw          $v0, -0x7000($at)
    ctx->pc = 0x1806c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294938624)));
label_1806c8:
    // 0x1806c8: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1806c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_1806cc:
    // 0x1806cc: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x1806ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
label_1806d0:
    // 0x1806d0: 0xac229000  sw          $v0, -0x7000($at)
    ctx->pc = 0x1806d0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938624), GPR_U32(ctx, 2));
label_1806d4:
    // 0x1806d4: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x1806d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
label_1806d8:
    // 0x1806d8: 0xac243c10  sw          $a0, 0x3C10($at)
    ctx->pc = 0x1806d8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 15376), GPR_U32(ctx, 4));
label_1806dc:
    // 0x1806dc: 0x4849e000  cfc2.ni     $t1, $vi28
    ctx->pc = 0x1806dcu;
    SET_GPR_U32(ctx, 9, ctx->vu0_fbrst);
label_1806e0:
    // 0x1806e0: 0x35290200  ori         $t1, $t1, 0x200
    ctx->pc = 0x1806e0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)512);
label_1806e4:
    // 0x1806e4: 0x48c9e000  ctc2.ni     $t1, $vi28
    ctx->pc = 0x1806e4u;
    ctx->vu0_fbrst = GPR_U32(ctx, 9) & 0x00000C0Cu;
label_1806e8:
    // 0x1806e8: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x1806e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
label_1806ec:
    // 0x1806ec: 0x2402ffcf  addiu       $v0, $zero, -0x31
    ctx->pc = 0x1806ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
label_1806f0:
    // 0x1806f0: 0x8c23a000  lw          $v1, -0x6000($at)
    ctx->pc = 0x1806f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294942720)));
label_1806f4:
    // 0x1806f4: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1806f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_1806f8:
    // 0x1806f8: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x1806f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
label_1806fc:
    // 0x1806fc: 0xac23a000  sw          $v1, -0x6000($at)
    ctx->pc = 0x1806fcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942720), GPR_U32(ctx, 3));
label_180700:
    // 0x180700: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x180700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
label_180704:
    // 0x180704: 0xac243000  sw          $a0, 0x3000($at)
    ctx->pc = 0x180704u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 12288), GPR_U32(ctx, 4));
label_180708:
    // 0x180708: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x180708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
label_18070c:
    // 0x18070c: 0xac20f590  sw          $zero, -0xA70($at)
    ctx->pc = 0x18070cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964624), GPR_U32(ctx, 0));
label_180710:
    // 0x180710: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x180710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
label_180714:
    // 0x180714: 0x8c239000  lw          $v1, -0x7000($at)
    ctx->pc = 0x180714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294938624)));
label_180718:
    // 0x180718: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x180718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_18071c:
    // 0x18071c: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x18071cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
label_180720:
    // 0x180720: 0xc06614e  jal         func_198538
label_180724:
    if (ctx->pc == 0x180724u) {
        ctx->pc = 0x180724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180720u;
        // 0x180724: 0xac229000  sw          $v0, -0x7000($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294938624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180728u;
        goto label_180728;
    }
    ctx->pc = 0x180720u;
    SET_GPR_U32(ctx, 31, 0x180728u);
    ctx->pc = 0x180724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180720u;
    // 0x180724: 0xac229000  sw          $v0, -0x7000($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938624), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198538u;
    { ctx->pc = 0x198538; return; }
    ctx->pc = 0x180728u;
label_180728:
    // 0x180728: 0x878787f4  lh          $a3, -0x780C($gp)
    ctx->pc = 0x180728u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936564)));
label_18072c:
    // 0x18072c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x18072cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_180730:
    // 0x180730: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x180730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_180734:
    // 0x180734: 0xc0660e6  jal         func_198398
label_180738:
    if (ctx->pc == 0x180738u) {
        ctx->pc = 0x180738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180734u;
        // 0x180738: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18073Cu;
        goto label_18073c;
    }
    ctx->pc = 0x180734u;
    SET_GPR_U32(ctx, 31, 0x18073Cu);
    ctx->pc = 0x180738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180734u;
    // 0x180738: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198398u;
    { ctx->pc = 0x198398; return; }
    ctx->pc = 0x18073Cu;
label_18073c:
    // 0x18073c: 0x878387f4  lh          $v1, -0x780C($gp)
    ctx->pc = 0x18073cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936564)));
label_180740:
    // 0x180740: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x180740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_180744:
    // 0x180744: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
label_180748:
    if (ctx->pc == 0x180748u) {
        ctx->pc = 0x18074Cu;
        goto label_18074c;
    }
    ctx->pc = 0x180744u;
    {
        const bool branch_taken_0x180744 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x180744) {
            ctx->pc = 0x1807ACu;
            goto label_1807ac;
        }
    }
    ctx->pc = 0x18074Cu;
label_18074c:
    // 0x18074c: 0x8f8287dc  lw          $v0, -0x7824($gp)
    ctx->pc = 0x18074cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936540)));
label_180750:
    // 0x180750: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_180754:
    if (ctx->pc == 0x180754u) {
        ctx->pc = 0x180758u;
        goto label_180758;
    }
    ctx->pc = 0x180750u;
    {
        const bool branch_taken_0x180750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x180750) {
            ctx->pc = 0x180764u;
            goto label_180764;
        }
    }
    ctx->pc = 0x180758u;
label_180758:
    // 0x180758: 0x8f8287b0  lw          $v0, -0x7850($gp)
    ctx->pc = 0x180758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
label_18075c:
    // 0x18075c: 0x10000003  b           . + 4 + (0x3 << 2)
label_180760:
    if (ctx->pc == 0x180760u) {
        ctx->pc = 0x180760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18075Cu;
        // 0x180760: 0x244401d0  addiu       $a0, $v0, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 464));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180764u;
        goto label_180764;
    }
    ctx->pc = 0x18075Cu;
    {
        const bool branch_taken_0x18075c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18075Cu;
        // 0x180760: 0x244401d0  addiu       $a0, $v0, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18075c) {
            ctx->pc = 0x18076Cu;
            goto label_18076c;
        }
    }
    ctx->pc = 0x180764u;
label_180764:
    // 0x180764: 0x8f8287b0  lw          $v0, -0x7850($gp)
    ctx->pc = 0x180764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
label_180768:
    // 0x180768: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x180768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_18076c:
    // 0x18076c: 0x878787dc  lh          $a3, -0x7824($gp)
    ctx->pc = 0x18076cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936540)));
label_180770:
    // 0x180770: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x180770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_180774:
    // 0x180774: 0xc0667fc  jal         func_199FF0
label_180778:
    if (ctx->pc == 0x180778u) {
        ctx->pc = 0x180778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180774u;
        // 0x180778: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18077Cu;
        goto label_18077c;
    }
    ctx->pc = 0x180774u;
    SET_GPR_U32(ctx, 31, 0x18077Cu);
    ctx->pc = 0x180778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180774u;
    // 0x180778: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199FF0u;
    { ctx->pc = 0x199ff0; return; }
    ctx->pc = 0x18077Cu;
label_18077c:
    // 0x18077c: 0x8f8287dc  lw          $v0, -0x7824($gp)
    ctx->pc = 0x18077cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936540)));
label_180780:
    // 0x180780: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_180784:
    if (ctx->pc == 0x180784u) {
        ctx->pc = 0x180788u;
        goto label_180788;
    }
    ctx->pc = 0x180780u;
    {
        const bool branch_taken_0x180780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x180780) {
            ctx->pc = 0x180794u;
            goto label_180794;
        }
    }
    ctx->pc = 0x180788u;
label_180788:
    // 0x180788: 0x8f8287b0  lw          $v0, -0x7850($gp)
    ctx->pc = 0x180788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
label_18078c:
    // 0x18078c: 0x10000003  b           . + 4 + (0x3 << 2)
label_180790:
    if (ctx->pc == 0x180790u) {
        ctx->pc = 0x180790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18078Cu;
        // 0x180790: 0x24440250  addiu       $a0, $v0, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180794u;
        goto label_180794;
    }
    ctx->pc = 0x18078Cu;
    {
        const bool branch_taken_0x18078c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18078Cu;
        // 0x180790: 0x24440250  addiu       $a0, $v0, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18078c) {
            ctx->pc = 0x18079Cu;
            goto label_18079c;
        }
    }
    ctx->pc = 0x180794u;
label_180794:
    // 0x180794: 0x8f8287b0  lw          $v0, -0x7850($gp)
    ctx->pc = 0x180794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
label_180798:
    // 0x180798: 0x244400e0  addiu       $a0, $v0, 0xE0
    ctx->pc = 0x180798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
label_18079c:
    // 0x18079c: 0x878787dc  lh          $a3, -0x7824($gp)
    ctx->pc = 0x18079cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936540)));
label_1807a0:
    // 0x1807a0: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x1807a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_1807a4:
    // 0x1807a4: 0xc066896  jal         func_19A258
label_1807a8:
    if (ctx->pc == 0x1807A8u) {
        ctx->pc = 0x1807A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1807A4u;
        // 0x1807a8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1807ACu;
        goto label_1807ac;
    }
    ctx->pc = 0x1807A4u;
    SET_GPR_U32(ctx, 31, 0x1807ACu);
    ctx->pc = 0x1807A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1807A4u;
    // 0x1807a8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A258u;
    { ctx->pc = 0x19a258; return; }
    ctx->pc = 0x1807ACu;
label_1807ac:
    // 0x1807ac: 0xdf838810  ld          $v1, -0x77F0($gp)
    ctx->pc = 0x1807acu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294936592)));
label_1807b0:
    // 0x1807b0: 0x8f8287b0  lw          $v0, -0x7850($gp)
    ctx->pc = 0x1807b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
label_1807b4:
    // 0x1807b4: 0xfc430180  sd          $v1, 0x180($v0)
    ctx->pc = 0x1807b4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 384), GPR_U64(ctx, 3));
label_1807b8:
    // 0x1807b8: 0xdf838810  ld          $v1, -0x77F0($gp)
    ctx->pc = 0x1807b8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294936592)));
label_1807bc:
    // 0x1807bc: 0x8f8287b0  lw          $v0, -0x7850($gp)
    ctx->pc = 0x1807bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
label_1807c0:
    // 0x1807c0: 0xfc4302f0  sd          $v1, 0x2F0($v0)
    ctx->pc = 0x1807c0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 752), GPR_U64(ctx, 3));
label_1807c4:
    // 0x1807c4: 0x8f8287a0  lw          $v0, -0x7860($gp)
    ctx->pc = 0x1807c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936480)));
label_1807c8:
    // 0x1807c8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1807c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_1807cc:
    // 0x1807cc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1807d0:
    if (ctx->pc == 0x1807D0u) {
        ctx->pc = 0x1807D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1807CCu;
        // 0x1807d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1807D4u;
        goto label_1807d4;
    }
    ctx->pc = 0x1807CCu;
    {
        const bool branch_taken_0x1807cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1807D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1807CCu;
        // 0x1807d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1807cc) {
            ctx->pc = 0x1807D8u;
            goto label_1807d8;
        }
    }
    ctx->pc = 0x1807D4u;
label_1807d4:
    // 0x1807d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1807d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1807d8:
    // 0x1807d8: 0x8f8687dc  lw          $a2, -0x7824($gp)
    ctx->pc = 0x1807d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936540)));
label_1807dc:
    // 0x1807dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1807dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1807e0:
    // 0x1807e0: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1807e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1807e4:
    // 0x1807e4: 0x8f8487b0  lw          $a0, -0x7850($gp)
    ctx->pc = 0x1807e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
label_1807e8:
    // 0x1807e8: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x1807e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_1807ec:
    // 0x1807ec: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x1807ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1807f0:
    // 0x1807f0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1807f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1807f4:
    // 0x1807f4: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x1807f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1807f8:
    // 0x1807f8: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x1807f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1807fc:
    // 0x1807fc: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x1807fcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_180800:
    // 0x180800: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x180800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_180804:
    // 0x180804: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x180804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_180808:
    // 0x180808: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x180808u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
label_18080c:
    // 0x18080c: 0x8f8587dc  lw          $a1, -0x7824($gp)
    ctx->pc = 0x18080cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936540)));
label_180810:
    // 0x180810: 0xc066972  jal         func_19A5C8
label_180814:
    if (ctx->pc == 0x180814u) {
        ctx->pc = 0x180814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180810u;
        // 0x180814: 0x8f8487b0  lw          $a0, -0x7850($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180818u;
        goto label_180818;
    }
    ctx->pc = 0x180810u;
    SET_GPR_U32(ctx, 31, 0x180818u);
    ctx->pc = 0x180814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180810u;
    // 0x180814: 0x8f8487b0  lw          $a0, -0x7850($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A5C8u;
    { ctx->pc = 0x19a5c8; return; }
    ctx->pc = 0x180818u;
label_180818:
    // 0x180818: 0x8f828808  lw          $v0, -0x77F8($gp)
    ctx->pc = 0x180818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936584)));
label_18081c:
    // 0x18081c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_180820:
    if (ctx->pc == 0x180820u) {
        ctx->pc = 0x180820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18081Cu;
        // 0x180820: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180824u;
        goto label_180824;
    }
    ctx->pc = 0x18081Cu;
    {
        const bool branch_taken_0x18081c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x180820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18081Cu;
        // 0x180820: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18081c) {
            ctx->pc = 0x18083Cu;
            goto label_18083c;
        }
    }
    ctx->pc = 0x180824u;
label_180824:
    // 0x180824: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x180824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_180828:
    // 0x180828: 0x8c223ffc  lw          $v0, 0x3FFC($at)
    ctx->pc = 0x180828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_18082c:
    // 0x18082c: 0xc06e09c  jal         func_1B8270
label_180830:
    if (ctx->pc == 0x180830u) {
        ctx->pc = 0x180830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18082Cu;
        // 0x180830: 0x38440001  xori        $a0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x180834u;
        goto label_180834;
    }
    ctx->pc = 0x18082Cu;
    SET_GPR_U32(ctx, 31, 0x180834u);
    ctx->pc = 0x180830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18082Cu;
    // 0x180830: 0x38440001  xori        $a0, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8270u;
    { ctx->pc = 0x1b8270; return; }
    ctx->pc = 0x180834u;
label_180834:
    // 0x180834: 0x1000002e  b           . + 4 + (0x2E << 2)
label_180838:
    if (ctx->pc == 0x180838u) {
        ctx->pc = 0x180838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180834u;
        // 0x180838: 0x8f8287d8  lw          $v0, -0x7828($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18083Cu;
        goto label_18083c;
    }
    ctx->pc = 0x180834u;
    {
        const bool branch_taken_0x180834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180834u;
        // 0x180838: 0x8f8287d8  lw          $v0, -0x7828($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180834) {
            ctx->pc = 0x1808F0u;
            goto label_1808f0;
        }
    }
    ctx->pc = 0x18083Cu;
label_18083c:
    // 0x18083c: 0x8c223ffc  lw          $v0, 0x3FFC($at)
    ctx->pc = 0x18083cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_180840:
    // 0x180840: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x180840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_180844:
    // 0x180844: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x180844u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_180848:
    // 0x180848: 0xac223ffc  sw          $v0, 0x3FFC($at)
    ctx->pc = 0x180848u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16380), GPR_U32(ctx, 2));
label_18084c:
    // 0x18084c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x18084cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_180850:
    // 0x180850: 0x8c223ffc  lw          $v0, 0x3FFC($at)
    ctx->pc = 0x180850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_180854:
    // 0x180854: 0xc06e09c  jal         func_1B8270
label_180858:
    if (ctx->pc == 0x180858u) {
        ctx->pc = 0x180858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180854u;
        // 0x180858: 0x38440001  xori        $a0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18085Cu;
        goto label_18085c;
    }
    ctx->pc = 0x180854u;
    SET_GPR_U32(ctx, 31, 0x18085Cu);
    ctx->pc = 0x180858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180854u;
    // 0x180858: 0x38440001  xori        $a0, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8270u;
    { ctx->pc = 0x1b8270; return; }
    ctx->pc = 0x18085Cu;
label_18085c:
    // 0x18085c: 0xc06e090  jal         func_1B8240
label_180860:
    if (ctx->pc == 0x180860u) {
        ctx->pc = 0x180864u;
        goto label_180864;
    }
    ctx->pc = 0x18085Cu;
    SET_GPR_U32(ctx, 31, 0x180864u);
    ctx->pc = 0x1B8240u;
    { ctx->pc = 0x1b8240; return; }
    ctx->pc = 0x180864u;
label_180864:
    // 0x180864: 0xc05c1c0  jal         func_170700
label_180868:
    if (ctx->pc == 0x180868u) {
        ctx->pc = 0x18086Cu;
        goto label_18086c;
    }
    ctx->pc = 0x180864u;
    SET_GPR_U32(ctx, 31, 0x18086Cu);
    ctx->pc = 0x170700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170700u, 0x180864u, 0x18086Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18086Cu;
label_18086c:
    // 0x18086c: 0xc05bfe4  jal         func_16FF90
label_180870:
    if (ctx->pc == 0x180870u) {
        ctx->pc = 0x180874u;
        goto label_180874;
    }
    ctx->pc = 0x18086Cu;
    SET_GPR_U32(ctx, 31, 0x180874u);
    ctx->pc = 0x16FF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FF90u, 0x18086Cu, 0x180874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180874u;
label_180874:
    // 0x180874: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x180874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_180878:
    // 0x180878: 0x94274530  lhu         $a3, 0x4530($at)
    ctx->pc = 0x180878u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 17712)));
label_18087c:
    // 0x18087c: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x18087cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_180880:
    // 0x180880: 0x94264552  lhu         $a2, 0x4552($at)
    ctx->pc = 0x180880u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 17746)));
label_180884:
    // 0x180884: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x180884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_180888:
    // 0x180888: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x180888u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
label_18088c:
    // 0x18088c: 0x94254532  lhu         $a1, 0x4532($at)
    ctx->pc = 0x18088cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 17714)));
label_180890:
    // 0x180890: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x180890u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
label_180894:
    // 0x180894: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x180894u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
label_180898:
    // 0x180898: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x180898u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
label_18089c:
    // 0x18089c: 0xff8687d0  sd          $a2, -0x7830($gp)
    ctx->pc = 0x18089cu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936528), GPR_U64(ctx, 6));
label_1808a0:
    // 0x1808a0: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1808a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_1808a4:
    // 0x1808a4: 0x94244554  lhu         $a0, 0x4554($at)
    ctx->pc = 0x1808a4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 17748)));
label_1808a8:
    // 0x1808a8: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1808a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_1808ac:
    // 0x1808ac: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x1808acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_1808b0:
    // 0x1808b0: 0x94234534  lhu         $v1, 0x4534($at)
    ctx->pc = 0x1808b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 17716)));
label_1808b4:
    // 0x1808b4: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x1808b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_1808b8:
    // 0x1808b8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1808b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1808bc:
    // 0x1808bc: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1808bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_1808c0:
    // 0x1808c0: 0xff8487c8  sd          $a0, -0x7838($gp)
    ctx->pc = 0x1808c0u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936520), GPR_U64(ctx, 4));
label_1808c4:
    // 0x1808c4: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1808c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_1808c8:
    // 0x1808c8: 0x94224556  lhu         $v0, 0x4556($at)
    ctx->pc = 0x1808c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 17750)));
label_1808cc:
    // 0x1808cc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1808ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1808d0:
    // 0x1808d0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1808d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1808d4:
    // 0x1808d4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1808d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1808d8:
    // 0x1808d8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1808d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_1808dc:
    // 0x1808dc: 0xff8287c0  sd          $v0, -0x7840($gp)
    ctx->pc = 0x1808dcu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936512), GPR_U64(ctx, 2));
label_1808e0:
    // 0x1808e0: 0x8f828800  lw          $v0, -0x7800($gp)
    ctx->pc = 0x1808e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936576)));
label_1808e4:
    // 0x1808e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1808e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1808e8:
    // 0x1808e8: 0xaf828800  sw          $v0, -0x7800($gp)
    ctx->pc = 0x1808e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936576), GPR_U32(ctx, 2));
label_1808ec:
    // 0x1808ec: 0x8f8287d8  lw          $v0, -0x7828($gp)
    ctx->pc = 0x1808ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936536)));
label_1808f0:
    // 0x1808f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1808f4:
    if (ctx->pc == 0x1808F4u) {
        ctx->pc = 0x1808F8u;
        goto label_1808f8;
    }
    ctx->pc = 0x1808F0u;
    {
        const bool branch_taken_0x1808f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1808f0) {
            ctx->pc = 0x180908u;
            goto label_180908;
        }
    }
    ctx->pc = 0x1808F8u;
label_1808f8:
    // 0x1808f8: 0x40f809  jalr        $v0
label_1808fc:
    if (ctx->pc == 0x1808FCu) {
        ctx->pc = 0x180900u;
        goto label_180900;
    }
    ctx->pc = 0x1808F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x180900u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1808F8u, 0x180900u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x180900u;
label_180900:
    // 0x180900: 0x10000004  b           . + 4 + (0x4 << 2)
label_180904:
    if (ctx->pc == 0x180904u) {
        ctx->pc = 0x180904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180900u;
        // 0x180904: 0x8f848304  lw          $a0, -0x7CFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935300)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180908u;
        goto label_180908;
    }
    ctx->pc = 0x180900u;
    {
        const bool branch_taken_0x180900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180900u;
        // 0x180904: 0x8f848304  lw          $a0, -0x7CFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935300)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180900) {
            ctx->pc = 0x180914u;
            goto label_180914;
        }
    }
    ctx->pc = 0x180908u;
label_180908:
    // 0x180908: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x180908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18090c:
    // 0x18090c: 0xaf828808  sw          $v0, -0x77F8($gp)
    ctx->pc = 0x18090cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936584), GPR_U32(ctx, 2));
label_180910:
    // 0x180910: 0x8f848304  lw          $a0, -0x7CFC($gp)
    ctx->pc = 0x180910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935300)));
label_180914:
    // 0x180914: 0xc069228  jal         func_1A48A0
label_180918:
    if (ctx->pc == 0x180918u) {
        ctx->pc = 0x180918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180914u;
        // 0x180918: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18091Cu;
        goto label_18091c;
    }
    ctx->pc = 0x180914u;
    SET_GPR_U32(ctx, 31, 0x18091Cu);
    ctx->pc = 0x180918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180914u;
    // 0x180918: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A48A0u;
    { ctx->pc = 0x1a48a0; return; }
    ctx->pc = 0x18091Cu;
label_18091c:
    // 0x18091c: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x18091cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_180920:
    // 0x180920: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_180924:
    if (ctx->pc == 0x180924u) {
        ctx->pc = 0x180924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180920u;
        // 0x180924: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180928u;
        goto label_180928;
    }
    ctx->pc = 0x180920u;
    {
        const bool branch_taken_0x180920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x180924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180920u;
        // 0x180924: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180920) {
            ctx->pc = 0x180934u;
            goto label_180934;
        }
    }
    ctx->pc = 0x180928u;
label_180928:
    // 0x180928: 0xc069214  jal         func_1A4850
label_18092c:
    if (ctx->pc == 0x18092Cu) {
        ctx->pc = 0x18092Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180928u;
        // 0x18092c: 0x8f848304  lw          $a0, -0x7CFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935300)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180930u;
        goto label_180930;
    }
    ctx->pc = 0x180928u;
    SET_GPR_U32(ctx, 31, 0x180930u);
    ctx->pc = 0x18092Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180928u;
    // 0x18092c: 0x8f848304  lw          $a0, -0x7CFC($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935300)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4850u;
    { ctx->pc = 0x1a4850; return; }
    ctx->pc = 0x180930u;
label_180930:
    // 0x180930: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x180930u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_180934:
    // 0x180934: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x180934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_180938:
    // 0x180938: 0x3e00008  jr          $ra
label_18093c:
    if (ctx->pc == 0x18093Cu) {
        ctx->pc = 0x18093Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180938u;
        // 0x18093c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180940u;
        goto label_180940;
    }
    ctx->pc = 0x180938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18093Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180938u;
        // 0x18093c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180940u;
label_180940:
    // 0x180940: 0x3e00008  jr          $ra
label_180944:
    if (ctx->pc == 0x180944u) {
        ctx->pc = 0x180944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180940u;
        // 0x180944: 0xaf8087d8  sw          $zero, -0x7828($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936536), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180948u;
        goto label_180948;
    }
    ctx->pc = 0x180940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180940u;
        // 0x180944: 0xaf8087d8  sw          $zero, -0x7828($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936536), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180948u;
label_180948:
    // 0x180948: 0x0  nop
    ctx->pc = 0x180948u;
    // NOP
label_18094c:
    // 0x18094c: 0x0  nop
    ctx->pc = 0x18094cu;
    // NOP
label_180950:
    // 0x180950: 0x3e00008  jr          $ra
label_180954:
    if (ctx->pc == 0x180954u) {
        ctx->pc = 0x180954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180950u;
        // 0x180954: 0xaf8487d8  sw          $a0, -0x7828($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936536), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180958u;
        goto label_180958;
    }
    ctx->pc = 0x180950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180950u;
        // 0x180954: 0xaf8487d8  sw          $a0, -0x7828($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936536), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180958u;
label_180958:
    // 0x180958: 0x0  nop
    ctx->pc = 0x180958u;
    // NOP
label_18095c:
    // 0x18095c: 0x0  nop
    ctx->pc = 0x18095cu;
    // NOP
label_180960:
    // 0x180960: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x180960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_180964:
    // 0x180964: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x180964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_180968:
    // 0x180968: 0xc08f0cc  jal         func_23C330
label_18096c:
    if (ctx->pc == 0x18096Cu) {
        ctx->pc = 0x180970u;
        goto label_180970;
    }
    ctx->pc = 0x180968u;
    SET_GPR_U32(ctx, 31, 0x180970u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x180970u;
label_180970:
    // 0x180970: 0xc06e07c  jal         func_1B81F0
label_180974:
    if (ctx->pc == 0x180974u) {
        ctx->pc = 0x180978u;
        goto label_180978;
    }
    ctx->pc = 0x180970u;
    SET_GPR_U32(ctx, 31, 0x180978u);
    ctx->pc = 0x1B81F0u;
    { ctx->pc = 0x1b81f0; return; }
    ctx->pc = 0x180978u;
label_180978:
    // 0x180978: 0xc0692a8  jal         func_1A4AA0
label_18097c:
    if (ctx->pc == 0x18097Cu) {
        ctx->pc = 0x18097Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180978u;
        // 0x18097c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180980u;
        goto label_180980;
    }
    ctx->pc = 0x180978u;
    SET_GPR_U32(ctx, 31, 0x180980u);
    ctx->pc = 0x18097Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180978u;
    // 0x18097c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4AA0u;
    { ctx->pc = 0x1a4aa0; return; }
    ctx->pc = 0x180980u;
label_180980:
    // 0x180980: 0xaf808808  sw          $zero, -0x77F8($gp)
    ctx->pc = 0x180980u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936584), GPR_U32(ctx, 0));
label_180984:
    // 0x180984: 0xc069218  jal         func_1A4860
label_180988:
    if (ctx->pc == 0x180988u) {
        ctx->pc = 0x180988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180984u;
        // 0x180988: 0x8f848304  lw          $a0, -0x7CFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935300)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18098Cu;
        goto label_18098c;
    }
    ctx->pc = 0x180984u;
    SET_GPR_U32(ctx, 31, 0x18098Cu);
    ctx->pc = 0x180988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180984u;
    // 0x180988: 0x8f848304  lw          $a0, -0x7CFC($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935300)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    { ctx->pc = 0x1a4860; return; }
    ctx->pc = 0x18098Cu;
label_18098c:
    // 0x18098c: 0xc05c230  jal         func_1708C0
label_180990:
    if (ctx->pc == 0x180990u) {
        ctx->pc = 0x180994u;
        goto label_180994;
    }
    ctx->pc = 0x18098Cu;
    SET_GPR_U32(ctx, 31, 0x180994u);
    ctx->pc = 0x1708C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1708C0u, 0x18098Cu, 0x180994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180994u;
label_180994:
    // 0x180994: 0xc041538  jal         func_1054E0
label_180998:
    if (ctx->pc == 0x180998u) {
        ctx->pc = 0x18099Cu;
        goto label_18099c;
    }
    ctx->pc = 0x180994u;
    SET_GPR_U32(ctx, 31, 0x18099Cu);
    ctx->pc = 0x1054E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054E0u, 0x180994u, 0x18099Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18099Cu;
label_18099c:
    // 0x18099c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x18099cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1809a0:
    // 0x1809a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1809a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1809a4:
    // 0x1809a4: 0x8c223ffc  lw          $v0, 0x3FFC($at)
    ctx->pc = 0x1809a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1809a8:
    // 0x1809a8: 0x3e00008  jr          $ra
label_1809ac:
    if (ctx->pc == 0x1809ACu) {
        ctx->pc = 0x1809ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1809A8u;
        // 0x1809ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1809B0u;
        goto label_1809b0;
    }
    ctx->pc = 0x1809A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1809ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1809A8u;
        // 0x1809ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1809A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1809B0u;
label_1809b0:
    // 0x1809b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1809b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1809b4:
    // 0x1809b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1809b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1809b8:
    // 0x1809b8: 0xc05c1c0  jal         func_170700
label_1809bc:
    if (ctx->pc == 0x1809BCu) {
        ctx->pc = 0x1809C0u;
        goto label_1809c0;
    }
    ctx->pc = 0x1809B8u;
    SET_GPR_U32(ctx, 31, 0x1809C0u);
    ctx->pc = 0x170700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170700u, 0x1809B8u, 0x1809C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1809C0u;
label_1809c0:
    // 0x1809c0: 0xc05bfe4  jal         func_16FF90
label_1809c4:
    if (ctx->pc == 0x1809C4u) {
        ctx->pc = 0x1809C8u;
        goto label_1809c8;
    }
    ctx->pc = 0x1809C0u;
    SET_GPR_U32(ctx, 31, 0x1809C8u);
    ctx->pc = 0x16FF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FF90u, 0x1809C0u, 0x1809C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1809C8u;
label_1809c8:
    // 0x1809c8: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1809c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_1809cc:
    // 0x1809cc: 0x94284530  lhu         $t0, 0x4530($at)
    ctx->pc = 0x1809ccu;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 17712)));
label_1809d0:
    // 0x1809d0: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1809d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_1809d4:
    // 0x1809d4: 0x94274552  lhu         $a3, 0x4552($at)
    ctx->pc = 0x1809d4u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 17746)));
label_1809d8:
    // 0x1809d8: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1809d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_1809dc:
    // 0x1809dc: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x1809dcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_1809e0:
    // 0x1809e0: 0x94264532  lhu         $a2, 0x4532($at)
    ctx->pc = 0x1809e0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 17714)));
label_1809e4:
    // 0x1809e4: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x1809e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
label_1809e8:
    // 0x1809e8: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x1809e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
label_1809ec:
    // 0x1809ec: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x1809ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
label_1809f0:
    // 0x1809f0: 0xff8787d0  sd          $a3, -0x7830($gp)
    ctx->pc = 0x1809f0u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936528), GPR_U64(ctx, 7));
label_1809f4:
    // 0x1809f4: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1809f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_1809f8:
    // 0x1809f8: 0x94254554  lhu         $a1, 0x4554($at)
    ctx->pc = 0x1809f8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 17748)));
label_1809fc:
    // 0x1809fc: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1809fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_180a00:
    // 0x180a00: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x180a00u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
label_180a04:
    // 0x180a04: 0x94244534  lhu         $a0, 0x4534($at)
    ctx->pc = 0x180a04u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 17716)));
label_180a08:
    // 0x180a08: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x180a08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_180a0c:
    // 0x180a0c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x180a0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_180a10:
    // 0x180a10: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x180a10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
label_180a14:
    // 0x180a14: 0xff8587c8  sd          $a1, -0x7838($gp)
    ctx->pc = 0x180a14u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936520), GPR_U64(ctx, 5));
label_180a18:
    // 0x180a18: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x180a18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_180a1c:
    // 0x180a1c: 0x94234556  lhu         $v1, 0x4556($at)
    ctx->pc = 0x180a1cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 17750)));
label_180a20:
    // 0x180a20: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x180a20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_180a24:
    // 0x180a24: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x180a24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_180a28:
    // 0x180a28: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x180a28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_180a2c:
    // 0x180a2c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x180a2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_180a30:
    // 0x180a30: 0xff8387c0  sd          $v1, -0x7840($gp)
    ctx->pc = 0x180a30u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294936512), GPR_U64(ctx, 3));
label_180a34:
    // 0x180a34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x180a34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_180a38:
    // 0x180a38: 0x3e00008  jr          $ra
label_180a3c:
    if (ctx->pc == 0x180A3Cu) {
        ctx->pc = 0x180A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180A38u;
        // 0x180a3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180A40u;
        goto label_180a40;
    }
    ctx->pc = 0x180A38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180A38u;
        // 0x180a3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180A38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180A40u;
label_180a40:
    // 0x180a40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x180a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_180a44:
    // 0x180a44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x180a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_180a48:
    // 0x180a48: 0xc069218  jal         func_1A4860
label_180a4c:
    if (ctx->pc == 0x180A4Cu) {
        ctx->pc = 0x180A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180A48u;
        // 0x180a4c: 0x8f848304  lw          $a0, -0x7CFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935300)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180A50u;
        goto label_180a50;
    }
    ctx->pc = 0x180A48u;
    SET_GPR_U32(ctx, 31, 0x180A50u);
    ctx->pc = 0x180A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180A48u;
    // 0x180a4c: 0x8f848304  lw          $a0, -0x7CFC($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935300)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    { ctx->pc = 0x1a4860; return; }
    ctx->pc = 0x180A50u;
label_180a50:
    // 0x180a50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x180a50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_180a54:
    // 0x180a54: 0x3e00008  jr          $ra
label_180a58:
    if (ctx->pc == 0x180A58u) {
        ctx->pc = 0x180A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180A54u;
        // 0x180a58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180A5Cu;
        goto label_180a5c;
    }
    ctx->pc = 0x180A54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180A54u;
        // 0x180a58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180A54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180A5Cu;
label_180a5c:
    // 0x180a5c: 0x0  nop
    ctx->pc = 0x180a5cu;
    // NOP
label_180a60:
    // 0x180a60: 0x38830001  xori        $v1, $a0, 0x1
    ctx->pc = 0x180a60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_180a64:
    // 0x180a64: 0x3e00008  jr          $ra
label_180a68:
    if (ctx->pc == 0x180A68u) {
        ctx->pc = 0x180A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180A64u;
        // 0x180a68: 0xaf838808  sw          $v1, -0x77F8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936584), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180A6Cu;
        goto label_180a6c;
    }
    ctx->pc = 0x180A64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180A64u;
        // 0x180a68: 0xaf838808  sw          $v1, -0x77F8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936584), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180A64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180A6Cu;
label_180a6c:
    // 0x180a6c: 0x0  nop
    ctx->pc = 0x180a6cu;
    // NOP
label_180a70:
    // 0x180a70: 0x3e00008  jr          $ra
label_180a74:
    if (ctx->pc == 0x180A74u) {
        ctx->pc = 0x180A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180A70u;
        // 0x180a74: 0xaf8487e4  sw          $a0, -0x781C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936548), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180A78u;
        goto label_180a78;
    }
    ctx->pc = 0x180A70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180A70u;
        // 0x180a74: 0xaf8487e4  sw          $a0, -0x781C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936548), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180A70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180A78u;
label_180a78:
    // 0x180a78: 0x0  nop
    ctx->pc = 0x180a78u;
    // NOP
label_180a7c:
    // 0x180a7c: 0x0  nop
    ctx->pc = 0x180a7cu;
    // NOP
label_180a80:
    // 0x180a80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x180a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_180a84:
    // 0x180a84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x180a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_180a88:
    // 0x180a88: 0xc06c236  jal         func_1B08D8
label_180a8c:
    if (ctx->pc == 0x180A8Cu) {
        ctx->pc = 0x180A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180A88u;
        // 0x180a8c: 0x27a40018  addiu       $a0, $sp, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180A90u;
        goto label_180a90;
    }
    ctx->pc = 0x180A88u;
    SET_GPR_U32(ctx, 31, 0x180A90u);
    ctx->pc = 0x180A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180A88u;
    // 0x180a8c: 0x27a40018  addiu       $a0, $sp, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B08D8u;
    { ctx->pc = 0x1b08d8; return; }
    ctx->pc = 0x180A90u;
label_180a90:
    // 0x180a90: 0x93a3001b  lbu         $v1, 0x1B($sp)
    ctx->pc = 0x180a90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 27)));
label_180a94:
    // 0x180a94: 0x93a5001a  lbu         $a1, 0x1A($sp)
    ctx->pc = 0x180a94u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 26)));
label_180a98:
    // 0x180a98: 0x93a20019  lbu         $v0, 0x19($sp)
    ctx->pc = 0x180a98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 25)));
label_180a9c:
    // 0x180a9c: 0x34903  sra         $t1, $v1, 4
    ctx->pc = 0x180a9cu;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 3), 4));
label_180aa0:
    // 0x180aa0: 0x3067000f  andi        $a3, $v1, 0xF
    ctx->pc = 0x180aa0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_180aa4:
    // 0x180aa4: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x180aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_180aa8:
    // 0x180aa8: 0x53103  sra         $a2, $a1, 4
    ctx->pc = 0x180aa8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 5), 4));
label_180aac:
    // 0x180aac: 0x673823  subu        $a3, $v1, $a3
    ctx->pc = 0x180aacu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_180ab0:
    // 0x180ab0: 0x94080  sll         $t0, $t1, 2
    ctx->pc = 0x180ab0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_180ab4:
    // 0x180ab4: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x180ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_180ab8:
    // 0x180ab8: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x180ab8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_180abc:
    // 0x180abc: 0x673823  subu        $a3, $v1, $a3
    ctx->pc = 0x180abcu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    ctx->pc = 0x180ac0u;
    return;
}

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

// Function: FUN_0019b6a8
// Address: 0x19b6a8 - 0x29b6b0
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_0019b6a8_part320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2372d8u: goto label_2372d8;
        case 0x2372dcu: goto label_2372dc;
        case 0x2372e0u: goto label_2372e0;
        case 0x2372e4u: goto label_2372e4;
        case 0x2372e8u: goto label_2372e8;
        case 0x2372ecu: goto label_2372ec;
        case 0x2372f0u: goto label_2372f0;
        case 0x2372f4u: goto label_2372f4;
        case 0x2372f8u: goto label_2372f8;
        case 0x2372fcu: goto label_2372fc;
        case 0x237300u: goto label_237300;
        case 0x237304u: goto label_237304;
        case 0x237308u: goto label_237308;
        case 0x23730cu: goto label_23730c;
        case 0x237310u: goto label_237310;
        case 0x237314u: goto label_237314;
        case 0x237318u: goto label_237318;
        case 0x23731cu: goto label_23731c;
        case 0x237320u: goto label_237320;
        case 0x237324u: goto label_237324;
        case 0x237328u: goto label_237328;
        case 0x23732cu: goto label_23732c;
        case 0x237330u: goto label_237330;
        case 0x237334u: goto label_237334;
        case 0x237338u: goto label_237338;
        case 0x23733cu: goto label_23733c;
        case 0x237340u: goto label_237340;
        case 0x237344u: goto label_237344;
        case 0x237348u: goto label_237348;
        case 0x23734cu: goto label_23734c;
        case 0x237350u: goto label_237350;
        case 0x237354u: goto label_237354;
        case 0x237358u: goto label_237358;
        case 0x23735cu: goto label_23735c;
        case 0x237360u: goto label_237360;
        case 0x237364u: goto label_237364;
        case 0x237368u: goto label_237368;
        case 0x23736cu: goto label_23736c;
        case 0x237370u: goto label_237370;
        case 0x237374u: goto label_237374;
        case 0x237378u: goto label_237378;
        case 0x23737cu: goto label_23737c;
        case 0x237380u: goto label_237380;
        case 0x237384u: goto label_237384;
        case 0x237388u: goto label_237388;
        case 0x23738cu: goto label_23738c;
        case 0x237390u: goto label_237390;
        case 0x237394u: goto label_237394;
        case 0x237398u: goto label_237398;
        case 0x23739cu: goto label_23739c;
        case 0x2373a0u: goto label_2373a0;
        case 0x2373a4u: goto label_2373a4;
        case 0x2373a8u: goto label_2373a8;
        case 0x2373acu: goto label_2373ac;
        case 0x2373b0u: goto label_2373b0;
        case 0x2373b4u: goto label_2373b4;
        case 0x2373b8u: goto label_2373b8;
        case 0x2373bcu: goto label_2373bc;
        case 0x2373c0u: goto label_2373c0;
        case 0x2373c4u: goto label_2373c4;
        case 0x2373c8u: goto label_2373c8;
        case 0x2373ccu: goto label_2373cc;
        case 0x2373d0u: goto label_2373d0;
        case 0x2373d4u: goto label_2373d4;
        case 0x2373d8u: goto label_2373d8;
        case 0x2373dcu: goto label_2373dc;
        case 0x2373e0u: goto label_2373e0;
        case 0x2373e4u: goto label_2373e4;
        case 0x2373e8u: goto label_2373e8;
        case 0x2373ecu: goto label_2373ec;
        case 0x2373f0u: goto label_2373f0;
        case 0x2373f4u: goto label_2373f4;
        case 0x2373f8u: goto label_2373f8;
        case 0x2373fcu: goto label_2373fc;
        case 0x237400u: goto label_237400;
        case 0x237404u: goto label_237404;
        case 0x237408u: goto label_237408;
        case 0x23740cu: goto label_23740c;
        case 0x237410u: goto label_237410;
        case 0x237414u: goto label_237414;
        case 0x237418u: goto label_237418;
        case 0x23741cu: goto label_23741c;
        case 0x237420u: goto label_237420;
        case 0x237424u: goto label_237424;
        case 0x237428u: goto label_237428;
        case 0x23742cu: goto label_23742c;
        case 0x237430u: goto label_237430;
        case 0x237434u: goto label_237434;
        case 0x237438u: goto label_237438;
        case 0x23743cu: goto label_23743c;
        case 0x237440u: goto label_237440;
        case 0x237444u: goto label_237444;
        case 0x237448u: goto label_237448;
        case 0x23744cu: goto label_23744c;
        case 0x237450u: goto label_237450;
        case 0x237454u: goto label_237454;
        case 0x237458u: goto label_237458;
        case 0x23745cu: goto label_23745c;
        case 0x237460u: goto label_237460;
        case 0x237464u: goto label_237464;
        case 0x237468u: goto label_237468;
        case 0x23746cu: goto label_23746c;
        case 0x237470u: goto label_237470;
        case 0x237474u: goto label_237474;
        case 0x237478u: goto label_237478;
        case 0x23747cu: goto label_23747c;
        case 0x237480u: goto label_237480;
        case 0x237484u: goto label_237484;
        case 0x237488u: goto label_237488;
        case 0x23748cu: goto label_23748c;
        case 0x237490u: goto label_237490;
        case 0x237494u: goto label_237494;
        case 0x237498u: goto label_237498;
        case 0x23749cu: goto label_23749c;
        case 0x2374a0u: goto label_2374a0;
        case 0x2374a4u: goto label_2374a4;
        case 0x2374a8u: goto label_2374a8;
        case 0x2374acu: goto label_2374ac;
        case 0x2374b0u: goto label_2374b0;
        case 0x2374b4u: goto label_2374b4;
        case 0x2374b8u: goto label_2374b8;
        case 0x2374bcu: goto label_2374bc;
        case 0x2374c0u: goto label_2374c0;
        case 0x2374c4u: goto label_2374c4;
        case 0x2374c8u: goto label_2374c8;
        case 0x2374ccu: goto label_2374cc;
        case 0x2374d0u: goto label_2374d0;
        case 0x2374d4u: goto label_2374d4;
        case 0x2374d8u: goto label_2374d8;
        case 0x2374dcu: goto label_2374dc;
        case 0x2374e0u: goto label_2374e0;
        case 0x2374e4u: goto label_2374e4;
        case 0x2374e8u: goto label_2374e8;
        case 0x2374ecu: goto label_2374ec;
        case 0x2374f0u: goto label_2374f0;
        case 0x2374f4u: goto label_2374f4;
        case 0x2374f8u: goto label_2374f8;
        case 0x2374fcu: goto label_2374fc;
        case 0x237500u: goto label_237500;
        case 0x237504u: goto label_237504;
        case 0x237508u: goto label_237508;
        case 0x23750cu: goto label_23750c;
        case 0x237510u: goto label_237510;
        case 0x237514u: goto label_237514;
        case 0x237518u: goto label_237518;
        case 0x23751cu: goto label_23751c;
        case 0x237520u: goto label_237520;
        case 0x237524u: goto label_237524;
        case 0x237528u: goto label_237528;
        case 0x23752cu: goto label_23752c;
        case 0x237530u: goto label_237530;
        case 0x237534u: goto label_237534;
        case 0x237538u: goto label_237538;
        case 0x23753cu: goto label_23753c;
        case 0x237540u: goto label_237540;
        case 0x237544u: goto label_237544;
        case 0x237548u: goto label_237548;
        case 0x23754cu: goto label_23754c;
        case 0x237550u: goto label_237550;
        case 0x237554u: goto label_237554;
        case 0x237558u: goto label_237558;
        case 0x23755cu: goto label_23755c;
        case 0x237560u: goto label_237560;
        case 0x237564u: goto label_237564;
        case 0x237568u: goto label_237568;
        case 0x23756cu: goto label_23756c;
        case 0x237570u: goto label_237570;
        case 0x237574u: goto label_237574;
        case 0x237578u: goto label_237578;
        case 0x23757cu: goto label_23757c;
        case 0x237580u: goto label_237580;
        case 0x237584u: goto label_237584;
        case 0x237588u: goto label_237588;
        case 0x23758cu: goto label_23758c;
        case 0x237590u: goto label_237590;
        case 0x237594u: goto label_237594;
        case 0x237598u: goto label_237598;
        case 0x23759cu: goto label_23759c;
        case 0x2375a0u: goto label_2375a0;
        case 0x2375a4u: goto label_2375a4;
        case 0x2375a8u: goto label_2375a8;
        case 0x2375acu: goto label_2375ac;
        case 0x2375b0u: goto label_2375b0;
        case 0x2375b4u: goto label_2375b4;
        case 0x2375b8u: goto label_2375b8;
        case 0x2375bcu: goto label_2375bc;
        case 0x2375c0u: goto label_2375c0;
        case 0x2375c4u: goto label_2375c4;
        case 0x2375c8u: goto label_2375c8;
        case 0x2375ccu: goto label_2375cc;
        case 0x2375d0u: goto label_2375d0;
        case 0x2375d4u: goto label_2375d4;
        case 0x2375d8u: goto label_2375d8;
        case 0x2375dcu: goto label_2375dc;
        case 0x2375e0u: goto label_2375e0;
        case 0x2375e4u: goto label_2375e4;
        case 0x2375e8u: goto label_2375e8;
        case 0x2375ecu: goto label_2375ec;
        case 0x2375f0u: goto label_2375f0;
        case 0x2375f4u: goto label_2375f4;
        case 0x2375f8u: goto label_2375f8;
        case 0x2375fcu: goto label_2375fc;
        case 0x237600u: goto label_237600;
        case 0x237604u: goto label_237604;
        case 0x237608u: goto label_237608;
        case 0x23760cu: goto label_23760c;
        case 0x237610u: goto label_237610;
        case 0x237614u: goto label_237614;
        case 0x237618u: goto label_237618;
        case 0x23761cu: goto label_23761c;
        case 0x237620u: goto label_237620;
        case 0x237624u: goto label_237624;
        case 0x237628u: goto label_237628;
        case 0x23762cu: goto label_23762c;
        case 0x237630u: goto label_237630;
        case 0x237634u: goto label_237634;
        case 0x237638u: goto label_237638;
        case 0x23763cu: goto label_23763c;
        case 0x237640u: goto label_237640;
        case 0x237644u: goto label_237644;
        case 0x237648u: goto label_237648;
        case 0x23764cu: goto label_23764c;
        case 0x237650u: goto label_237650;
        case 0x237654u: goto label_237654;
        case 0x237658u: goto label_237658;
        case 0x23765cu: goto label_23765c;
        case 0x237660u: goto label_237660;
        case 0x237664u: goto label_237664;
        case 0x237668u: goto label_237668;
        case 0x23766cu: goto label_23766c;
        case 0x237670u: goto label_237670;
        case 0x237674u: goto label_237674;
        case 0x237678u: goto label_237678;
        case 0x23767cu: goto label_23767c;
        case 0x237680u: goto label_237680;
        case 0x237684u: goto label_237684;
        case 0x237688u: goto label_237688;
        case 0x23768cu: goto label_23768c;
        case 0x237690u: goto label_237690;
        case 0x237694u: goto label_237694;
        case 0x237698u: goto label_237698;
        case 0x23769cu: goto label_23769c;
        case 0x2376a0u: goto label_2376a0;
        case 0x2376a4u: goto label_2376a4;
        case 0x2376a8u: goto label_2376a8;
        case 0x2376acu: goto label_2376ac;
        case 0x2376b0u: goto label_2376b0;
        case 0x2376b4u: goto label_2376b4;
        case 0x2376b8u: goto label_2376b8;
        case 0x2376bcu: goto label_2376bc;
        case 0x2376c0u: goto label_2376c0;
        case 0x2376c4u: goto label_2376c4;
        case 0x2376c8u: goto label_2376c8;
        case 0x2376ccu: goto label_2376cc;
        case 0x2376d0u: goto label_2376d0;
        case 0x2376d4u: goto label_2376d4;
        case 0x2376d8u: goto label_2376d8;
        case 0x2376dcu: goto label_2376dc;
        case 0x2376e0u: goto label_2376e0;
        case 0x2376e4u: goto label_2376e4;
        case 0x2376e8u: goto label_2376e8;
        case 0x2376ecu: goto label_2376ec;
        case 0x2376f0u: goto label_2376f0;
        case 0x2376f4u: goto label_2376f4;
        case 0x2376f8u: goto label_2376f8;
        case 0x2376fcu: goto label_2376fc;
        case 0x237700u: goto label_237700;
        case 0x237704u: goto label_237704;
        case 0x237708u: goto label_237708;
        case 0x23770cu: goto label_23770c;
        case 0x237710u: goto label_237710;
        case 0x237714u: goto label_237714;
        case 0x237718u: goto label_237718;
        case 0x23771cu: goto label_23771c;
        case 0x237720u: goto label_237720;
        case 0x237724u: goto label_237724;
        case 0x237728u: goto label_237728;
        case 0x23772cu: goto label_23772c;
        case 0x237730u: goto label_237730;
        case 0x237734u: goto label_237734;
        case 0x237738u: goto label_237738;
        case 0x23773cu: goto label_23773c;
        case 0x237740u: goto label_237740;
        case 0x237744u: goto label_237744;
        case 0x237748u: goto label_237748;
        case 0x23774cu: goto label_23774c;
        case 0x237750u: goto label_237750;
        case 0x237754u: goto label_237754;
        case 0x237758u: goto label_237758;
        case 0x23775cu: goto label_23775c;
        case 0x237760u: goto label_237760;
        case 0x237764u: goto label_237764;
        case 0x237768u: goto label_237768;
        case 0x23776cu: goto label_23776c;
        case 0x237770u: goto label_237770;
        case 0x237774u: goto label_237774;
        case 0x237778u: goto label_237778;
        case 0x23777cu: goto label_23777c;
        case 0x237780u: goto label_237780;
        case 0x237784u: goto label_237784;
        case 0x237788u: goto label_237788;
        case 0x23778cu: goto label_23778c;
        case 0x237790u: goto label_237790;
        case 0x237794u: goto label_237794;
        case 0x237798u: goto label_237798;
        case 0x23779cu: goto label_23779c;
        case 0x2377a0u: goto label_2377a0;
        case 0x2377a4u: goto label_2377a4;
        case 0x2377a8u: goto label_2377a8;
        case 0x2377acu: goto label_2377ac;
        case 0x2377b0u: goto label_2377b0;
        case 0x2377b4u: goto label_2377b4;
        case 0x2377b8u: goto label_2377b8;
        case 0x2377bcu: goto label_2377bc;
        case 0x2377c0u: goto label_2377c0;
        case 0x2377c4u: goto label_2377c4;
        case 0x2377c8u: goto label_2377c8;
        case 0x2377ccu: goto label_2377cc;
        case 0x2377d0u: goto label_2377d0;
        case 0x2377d4u: goto label_2377d4;
        case 0x2377d8u: goto label_2377d8;
        case 0x2377dcu: goto label_2377dc;
        case 0x2377e0u: goto label_2377e0;
        case 0x2377e4u: goto label_2377e4;
        case 0x2377e8u: goto label_2377e8;
        case 0x2377ecu: goto label_2377ec;
        case 0x2377f0u: goto label_2377f0;
        case 0x2377f4u: goto label_2377f4;
        case 0x2377f8u: goto label_2377f8;
        case 0x2377fcu: goto label_2377fc;
        case 0x237800u: goto label_237800;
        case 0x237804u: goto label_237804;
        case 0x237808u: goto label_237808;
        case 0x23780cu: goto label_23780c;
        case 0x237810u: goto label_237810;
        case 0x237814u: goto label_237814;
        case 0x237818u: goto label_237818;
        case 0x23781cu: goto label_23781c;
        case 0x237820u: goto label_237820;
        case 0x237824u: goto label_237824;
        case 0x237828u: goto label_237828;
        case 0x23782cu: goto label_23782c;
        case 0x237830u: goto label_237830;
        case 0x237834u: goto label_237834;
        case 0x237838u: goto label_237838;
        case 0x23783cu: goto label_23783c;
        case 0x237840u: goto label_237840;
        case 0x237844u: goto label_237844;
        case 0x237848u: goto label_237848;
        case 0x23784cu: goto label_23784c;
        case 0x237850u: goto label_237850;
        case 0x237854u: goto label_237854;
        case 0x237858u: goto label_237858;
        case 0x23785cu: goto label_23785c;
        case 0x237860u: goto label_237860;
        case 0x237864u: goto label_237864;
        case 0x237868u: goto label_237868;
        case 0x23786cu: goto label_23786c;
        case 0x237870u: goto label_237870;
        case 0x237874u: goto label_237874;
        case 0x237878u: goto label_237878;
        case 0x23787cu: goto label_23787c;
        case 0x237880u: goto label_237880;
        case 0x237884u: goto label_237884;
        case 0x237888u: goto label_237888;
        case 0x23788cu: goto label_23788c;
        case 0x237890u: goto label_237890;
        case 0x237894u: goto label_237894;
        case 0x237898u: goto label_237898;
        case 0x23789cu: goto label_23789c;
        case 0x2378a0u: goto label_2378a0;
        case 0x2378a4u: goto label_2378a4;
        case 0x2378a8u: goto label_2378a8;
        case 0x2378acu: goto label_2378ac;
        case 0x2378b0u: goto label_2378b0;
        case 0x2378b4u: goto label_2378b4;
        case 0x2378b8u: goto label_2378b8;
        case 0x2378bcu: goto label_2378bc;
        case 0x2378c0u: goto label_2378c0;
        case 0x2378c4u: goto label_2378c4;
        case 0x2378c8u: goto label_2378c8;
        case 0x2378ccu: goto label_2378cc;
        case 0x2378d0u: goto label_2378d0;
        case 0x2378d4u: goto label_2378d4;
        case 0x2378d8u: goto label_2378d8;
        case 0x2378dcu: goto label_2378dc;
        case 0x2378e0u: goto label_2378e0;
        case 0x2378e4u: goto label_2378e4;
        case 0x2378e8u: goto label_2378e8;
        case 0x2378ecu: goto label_2378ec;
        case 0x2378f0u: goto label_2378f0;
        case 0x2378f4u: goto label_2378f4;
        case 0x2378f8u: goto label_2378f8;
        case 0x2378fcu: goto label_2378fc;
        case 0x237900u: goto label_237900;
        case 0x237904u: goto label_237904;
        case 0x237908u: goto label_237908;
        case 0x23790cu: goto label_23790c;
        case 0x237910u: goto label_237910;
        case 0x237914u: goto label_237914;
        case 0x237918u: goto label_237918;
        case 0x23791cu: goto label_23791c;
        case 0x237920u: goto label_237920;
        case 0x237924u: goto label_237924;
        case 0x237928u: goto label_237928;
        case 0x23792cu: goto label_23792c;
        case 0x237930u: goto label_237930;
        case 0x237934u: goto label_237934;
        case 0x237938u: goto label_237938;
        case 0x23793cu: goto label_23793c;
        case 0x237940u: goto label_237940;
        case 0x237944u: goto label_237944;
        case 0x237948u: goto label_237948;
        case 0x23794cu: goto label_23794c;
        case 0x237950u: goto label_237950;
        case 0x237954u: goto label_237954;
        case 0x237958u: goto label_237958;
        case 0x23795cu: goto label_23795c;
        case 0x237960u: goto label_237960;
        case 0x237964u: goto label_237964;
        case 0x237968u: goto label_237968;
        case 0x23796cu: goto label_23796c;
        case 0x237970u: goto label_237970;
        case 0x237974u: goto label_237974;
        case 0x237978u: goto label_237978;
        case 0x23797cu: goto label_23797c;
        case 0x237980u: goto label_237980;
        case 0x237984u: goto label_237984;
        case 0x237988u: goto label_237988;
        case 0x23798cu: goto label_23798c;
        case 0x237990u: goto label_237990;
        case 0x237994u: goto label_237994;
        case 0x237998u: goto label_237998;
        case 0x23799cu: goto label_23799c;
        case 0x2379a0u: goto label_2379a0;
        case 0x2379a4u: goto label_2379a4;
        case 0x2379a8u: goto label_2379a8;
        case 0x2379acu: goto label_2379ac;
        case 0x2379b0u: goto label_2379b0;
        case 0x2379b4u: goto label_2379b4;
        case 0x2379b8u: goto label_2379b8;
        case 0x2379bcu: goto label_2379bc;
        case 0x2379c0u: goto label_2379c0;
        case 0x2379c4u: goto label_2379c4;
        case 0x2379c8u: goto label_2379c8;
        case 0x2379ccu: goto label_2379cc;
        case 0x2379d0u: goto label_2379d0;
        case 0x2379d4u: goto label_2379d4;
        case 0x2379d8u: goto label_2379d8;
        case 0x2379dcu: goto label_2379dc;
        case 0x2379e0u: goto label_2379e0;
        case 0x2379e4u: goto label_2379e4;
        case 0x2379e8u: goto label_2379e8;
        case 0x2379ecu: goto label_2379ec;
        case 0x2379f0u: goto label_2379f0;
        case 0x2379f4u: goto label_2379f4;
        case 0x2379f8u: goto label_2379f8;
        case 0x2379fcu: goto label_2379fc;
        case 0x237a00u: goto label_237a00;
        case 0x237a04u: goto label_237a04;
        case 0x237a08u: goto label_237a08;
        case 0x237a0cu: goto label_237a0c;
        case 0x237a10u: goto label_237a10;
        case 0x237a14u: goto label_237a14;
        case 0x237a18u: goto label_237a18;
        case 0x237a1cu: goto label_237a1c;
        case 0x237a20u: goto label_237a20;
        case 0x237a24u: goto label_237a24;
        case 0x237a28u: goto label_237a28;
        case 0x237a2cu: goto label_237a2c;
        case 0x237a30u: goto label_237a30;
        case 0x237a34u: goto label_237a34;
        case 0x237a38u: goto label_237a38;
        case 0x237a3cu: goto label_237a3c;
        case 0x237a40u: goto label_237a40;
        case 0x237a44u: goto label_237a44;
        case 0x237a48u: goto label_237a48;
        case 0x237a4cu: goto label_237a4c;
        case 0x237a50u: goto label_237a50;
        case 0x237a54u: goto label_237a54;
        case 0x237a58u: goto label_237a58;
        case 0x237a5cu: goto label_237a5c;
        case 0x237a60u: goto label_237a60;
        case 0x237a64u: goto label_237a64;
        case 0x237a68u: goto label_237a68;
        case 0x237a6cu: goto label_237a6c;
        case 0x237a70u: goto label_237a70;
        case 0x237a74u: goto label_237a74;
        case 0x237a78u: goto label_237a78;
        case 0x237a7cu: goto label_237a7c;
        case 0x237a80u: goto label_237a80;
        case 0x237a84u: goto label_237a84;
        case 0x237a88u: goto label_237a88;
        case 0x237a8cu: goto label_237a8c;
        case 0x237a90u: goto label_237a90;
        case 0x237a94u: goto label_237a94;
        case 0x237a98u: goto label_237a98;
        case 0x237a9cu: goto label_237a9c;
        case 0x237aa0u: goto label_237aa0;
        case 0x237aa4u: goto label_237aa4;
        default: return;
    }

label_2372d8:
    // 0x2372d8: 0x14600072  bnez        $v1, . + 4 + (0x72 << 2)
label_2372dc:
    if (ctx->pc == 0x2372DCu) {
        ctx->pc = 0x2372DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2372D8u;
        // 0x2372dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2372E0u;
        goto label_2372e0;
    }
    ctx->pc = 0x2372D8u;
    {
        const bool branch_taken_0x2372d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2372DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2372D8u;
        // 0x2372dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2372d8) {
            ctx->pc = 0x2374A4u;
            goto label_2374a4;
        }
    }
    ctx->pc = 0x2372E0u;
label_2372e0:
    // 0x2372e0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2372e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_2372e4:
    // 0x2372e4: 0x25cb0014  addiu       $t3, $t6, 0x14
    ctx->pc = 0x2372e4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 14), 20));
label_2372e8:
    // 0x2372e8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2372e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2372ec:
    // 0x2372ec: 0x26910014  addiu       $s1, $s4, 0x14
    ctx->pc = 0x2372ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
label_2372f0:
    // 0x2372f0: 0x1629821  addu        $s3, $t3, $v0
    ctx->pc = 0x2372f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
label_2372f4:
    // 0x2372f4: 0x2224821  addu        $t1, $s1, $v0
    ctx->pc = 0x2372f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2372f8:
    // 0x2372f8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2372f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2372fc:
    // 0x2372fc: 0x160b02d  daddu       $s6, $t3, $zero
    ctx->pc = 0x2372fcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_237300:
    // 0x237300: 0x8d2d0000  lw          $t5, 0x0($t1)
    ctx->pc = 0x237300u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_237304:
    // 0x237304: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x237304u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_237308:
    // 0x237308: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x237308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_23730c:
    // 0x23730c: 0x1a3001b  divu        $zero, $t5, $v1
    ctx->pc = 0x23730cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 13) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 13) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,13); } }
label_237310:
    // 0x237310: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_237314:
    if (ctx->pc == 0x237314u) {
        ctx->pc = 0x237314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237310u;
        // 0x237314: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x237318u;
        goto label_237318;
    }
    ctx->pc = 0x237310u;
    {
        const bool branch_taken_0x237310 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x237310) {
            ctx->pc = 0x237314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237310u;
            // 0x237314: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x237318u;
            goto label_237318;
        }
    }
    ctx->pc = 0x237318u;
label_237318:
    // 0x237318: 0xa812  mflo        $s5
    ctx->pc = 0x237318u;
    SET_GPR_U64(ctx, 21, ctx->lo);
label_23731c:
    // 0x23731c: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x23731cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_237320:
    // 0x237320: 0x1240002b  beqz        $s2, . + 4 + (0x2B << 2)
label_237324:
    if (ctx->pc == 0x237324u) {
        ctx->pc = 0x237324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237320u;
        // 0x237324: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237328u;
        goto label_237328;
    }
    ctx->pc = 0x237320u;
    {
        const bool branch_taken_0x237320 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x237324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237320u;
        // 0x237324: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237320) {
            ctx->pc = 0x2373D0u;
            goto label_2373d0;
        }
    }
    ctx->pc = 0x237328u;
label_237328:
    // 0x237328: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x237328u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23732c:
    // 0x23732c: 0x0  nop
    ctx->pc = 0x23732cu;
    // NOP
label_237330:
    // 0x237330: 0x8d640000  lw          $a0, 0x0($t3)
    ctx->pc = 0x237330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_237334:
    // 0x237334: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x237334u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
label_237338:
    // 0x237338: 0x8d460000  lw          $a2, 0x0($t2)
    ctx->pc = 0x237338u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_23733c:
    // 0x23733c: 0x26b382b  sltu        $a3, $s3, $t3
    ctx->pc = 0x23733cu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
label_237340:
    // 0x237340: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x237340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_237344:
    // 0x237344: 0x42402  srl         $a0, $a0, 16
    ctx->pc = 0x237344u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
label_237348:
    // 0x237348: 0x522818  mult        $a1, $v0, $s2
    ctx->pc = 0x237348u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_23734c:
    // 0x23734c: 0x922018  mult        $a0, $a0, $s2
    ctx->pc = 0x23734cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_237350:
    // 0x237350: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x237350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_237354:
    // 0x237354: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x237354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
label_237358:
    // 0x237358: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x237358u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_23735c:
    // 0x23735c: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x23735cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
label_237360:
    // 0x237360: 0x824021  addu        $t0, $a0, $v0
    ctx->pc = 0x237360u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_237364:
    // 0x237364: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x237364u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_237368:
    // 0x237368: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x237368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
label_23736c:
    // 0x23736c: 0x63402  srl         $a2, $a2, 16
    ctx->pc = 0x23736cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 16));
label_237370:
    // 0x237370: 0x3102ffff  andi        $v0, $t0, 0xFFFF
    ctx->pc = 0x237370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
label_237374:
    // 0x237374: 0x36403  sra         $t4, $v1, 16
    ctx->pc = 0x237374u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 3), 16));
label_237378:
    // 0x237378: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x237378u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_23737c:
    // 0x23737c: 0xa5430000  sh          $v1, 0x0($t2)
    ctx->pc = 0x23737cu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 3));
label_237380:
    // 0x237380: 0xcc2821  addu        $a1, $a2, $t4
    ctx->pc = 0x237380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
label_237384:
    // 0x237384: 0x81c02  srl         $v1, $t0, 16
    ctx->pc = 0x237384u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
label_237388:
    // 0x237388: 0xa5450002  sh          $a1, 0x2($t2)
    ctx->pc = 0x237388u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 2), (uint16_t)GPR_U32(ctx, 5));
label_23738c:
    // 0x23738c: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x23738cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
label_237390:
    // 0x237390: 0x10e0ffe7  beqz        $a3, . + 4 + (-0x19 << 2)
label_237394:
    if (ctx->pc == 0x237394u) {
        ctx->pc = 0x237394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237390u;
        // 0x237394: 0x56403  sra         $t4, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237398u;
        goto label_237398;
    }
    ctx->pc = 0x237390u;
    {
        const bool branch_taken_0x237390 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x237394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237390u;
        // 0x237394: 0x56403  sra         $t4, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237390) {
            ctx->pc = 0x237330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_237330;
        }
    }
    ctx->pc = 0x237398u;
label_237398:
    // 0x237398: 0x55a0000e  bnel        $t5, $zero, . + 4 + (0xE << 2)
label_23739c:
    if (ctx->pc == 0x23739Cu) {
        ctx->pc = 0x23739Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237398u;
        // 0x23739c: 0x1c0282d  daddu       $a1, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2373A0u;
        goto label_2373a0;
    }
    ctx->pc = 0x237398u;
    {
        const bool branch_taken_0x237398 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        if (branch_taken_0x237398) {
            ctx->pc = 0x23739Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237398u;
            // 0x23739c: 0x1c0282d  daddu       $a1, $t6, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2373D4u;
            goto label_2373d4;
        }
    }
    ctx->pc = 0x2373A0u;
label_2373a0:
    // 0x2373a0: 0x10000002  b           . + 4 + (0x2 << 2)
label_2373a4:
    if (ctx->pc == 0x2373A4u) {
        ctx->pc = 0x2373A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2373A0u;
        // 0x2373a4: 0x2529fffc  addiu       $t1, $t1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2373A8u;
        goto label_2373a8;
    }
    ctx->pc = 0x2373A0u;
    {
        const bool branch_taken_0x2373a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2373A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2373A0u;
        // 0x2373a4: 0x2529fffc  addiu       $t1, $t1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2373a0) {
            ctx->pc = 0x2373ACu;
            goto label_2373ac;
        }
    }
    ctx->pc = 0x2373A8u;
label_2373a8:
    // 0x2373a8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2373a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_2373ac:
    // 0x2373ac: 0x229102b  sltu        $v0, $s1, $t1
    ctx->pc = 0x2373acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_2373b0:
    // 0x2373b0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_2373b4:
    if (ctx->pc == 0x2373B4u) {
        ctx->pc = 0x2373B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2373B0u;
        // 0x2373b4: 0xae900010  sw          $s0, 0x10($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2373B8u;
        goto label_2373b8;
    }
    ctx->pc = 0x2373B0u;
    {
        const bool branch_taken_0x2373b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2373b0) {
            ctx->pc = 0x2373B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2373B0u;
            // 0x2373b4: 0xae900010  sw          $s0, 0x10($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2373D0u;
            goto label_2373d0;
        }
    }
    ctx->pc = 0x2373B8u;
label_2373b8:
    // 0x2373b8: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x2373b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_2373bc:
    // 0x2373bc: 0x0  nop
    ctx->pc = 0x2373bcu;
    // NOP
label_2373c0:
    // 0x2373c0: 0x0  nop
    ctx->pc = 0x2373c0u;
    // NOP
label_2373c4:
    // 0x2373c4: 0x5040fff8  beql        $v0, $zero, . + 4 + (-0x8 << 2)
label_2373c8:
    if (ctx->pc == 0x2373C8u) {
        ctx->pc = 0x2373C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2373C4u;
        // 0x2373c8: 0x2529fffc  addiu       $t1, $t1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2373CCu;
        goto label_2373cc;
    }
    ctx->pc = 0x2373C4u;
    {
        const bool branch_taken_0x2373c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2373c4) {
            ctx->pc = 0x2373C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2373C4u;
            // 0x2373c8: 0x2529fffc  addiu       $t1, $t1, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2373A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2373a8;
        }
    }
    ctx->pc = 0x2373CCu;
label_2373cc:
    // 0x2373cc: 0xae900010  sw          $s0, 0x10($s4)
    ctx->pc = 0x2373ccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
label_2373d0:
    // 0x2373d0: 0x1c0282d  daddu       $a1, $t6, $zero
    ctx->pc = 0x2373d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_2373d4:
    // 0x2373d4: 0xc08ec4c  jal         func_23B130
label_2373d8:
    if (ctx->pc == 0x2373D8u) {
        ctx->pc = 0x2373D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2373D4u;
        // 0x2373d8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2373DCu;
        goto label_2373dc;
    }
    ctx->pc = 0x2373D4u;
    SET_GPR_U32(ctx, 31, 0x2373DCu);
    ctx->pc = 0x2373D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2373D4u;
    // 0x2373d8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B130u;
    { ctx->pc = 0x23b130; return; }
    ctx->pc = 0x2373DCu;
label_2373dc:
    // 0x2373dc: 0x4400030  bltz        $v0, . + 4 + (0x30 << 2)
label_2373e0:
    if (ctx->pc == 0x2373E0u) {
        ctx->pc = 0x2373E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2373DCu;
        // 0x2373e0: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2373E4u;
        goto label_2373e4;
    }
    ctx->pc = 0x2373DCu;
    {
        const bool branch_taken_0x2373dc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2373E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2373DCu;
        // 0x2373e0: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2373dc) {
            ctx->pc = 0x2374A0u;
            goto label_2374a0;
        }
    }
    ctx->pc = 0x2373E4u;
label_2373e4:
    // 0x2373e4: 0x26b20001  addiu       $s2, $s5, 0x1
    ctx->pc = 0x2373e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_2373e8:
    // 0x2373e8: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x2373e8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2373ec:
    // 0x2373ec: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2373ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2373f0:
    // 0x2373f0: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x2373f0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2373f4:
    // 0x2373f4: 0x0  nop
    ctx->pc = 0x2373f4u;
    // NOP
label_2373f8:
    // 0x2373f8: 0x8d640000  lw          $a0, 0x0($t3)
    ctx->pc = 0x2373f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_2373fc:
    // 0x2373fc: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x2373fcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
label_237400:
    // 0x237400: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x237400u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_237404:
    // 0x237404: 0x26b382b  sltu        $a3, $s3, $t3
    ctx->pc = 0x237404u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
label_237408:
    // 0x237408: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x237408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_23740c:
    // 0x23740c: 0x43402  srl         $a2, $a0, 16
    ctx->pc = 0x23740cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
label_237410:
    // 0x237410: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x237410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_237414:
    // 0x237414: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x237414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_237418:
    // 0x237418: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x237418u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_23741c:
    // 0x23741c: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x23741cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
label_237420:
    // 0x237420: 0xc24021  addu        $t0, $a2, $v0
    ctx->pc = 0x237420u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_237424:
    // 0x237424: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x237424u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_237428:
    // 0x237428: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x237428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
label_23742c:
    // 0x23742c: 0x52c02  srl         $a1, $a1, 16
    ctx->pc = 0x23742cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
label_237430:
    // 0x237430: 0x3102ffff  andi        $v0, $t0, 0xFFFF
    ctx->pc = 0x237430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
label_237434:
    // 0x237434: 0x36403  sra         $t4, $v1, 16
    ctx->pc = 0x237434u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 3), 16));
label_237438:
    // 0x237438: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x237438u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_23743c:
    // 0x23743c: 0xa5430000  sh          $v1, 0x0($t2)
    ctx->pc = 0x23743cu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 3));
label_237440:
    // 0x237440: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x237440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
label_237444:
    // 0x237444: 0x81c02  srl         $v1, $t0, 16
    ctx->pc = 0x237444u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
label_237448:
    // 0x237448: 0xa5450002  sh          $a1, 0x2($t2)
    ctx->pc = 0x237448u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 2), (uint16_t)GPR_U32(ctx, 5));
label_23744c:
    // 0x23744c: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x23744cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
label_237450:
    // 0x237450: 0x10e0ffe9  beqz        $a3, . + 4 + (-0x17 << 2)
label_237454:
    if (ctx->pc == 0x237454u) {
        ctx->pc = 0x237454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237450u;
        // 0x237454: 0x56403  sra         $t4, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237458u;
        goto label_237458;
    }
    ctx->pc = 0x237450u;
    {
        const bool branch_taken_0x237450 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x237454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237450u;
        // 0x237454: 0x56403  sra         $t4, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237450) {
            ctx->pc = 0x2373F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2373f8;
        }
    }
    ctx->pc = 0x237458u;
label_237458:
    // 0x237458: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x237458u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_23745c:
    // 0x23745c: 0x2224821  addu        $t1, $s1, $v0
    ctx->pc = 0x23745cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_237460:
    // 0x237460: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x237460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_237464:
    // 0x237464: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
label_237468:
    if (ctx->pc == 0x237468u) {
        ctx->pc = 0x237468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237464u;
        // 0x237468: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23746Cu;
        goto label_23746c;
    }
    ctx->pc = 0x237464u;
    {
        const bool branch_taken_0x237464 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x237468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237464u;
        // 0x237468: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237464) {
            ctx->pc = 0x2374A4u;
            goto label_2374a4;
        }
    }
    ctx->pc = 0x23746Cu;
label_23746c:
    // 0x23746c: 0x10000003  b           . + 4 + (0x3 << 2)
label_237470:
    if (ctx->pc == 0x237470u) {
        ctx->pc = 0x237470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23746Cu;
        // 0x237470: 0x2529fffc  addiu       $t1, $t1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237474u;
        goto label_237474;
    }
    ctx->pc = 0x23746Cu;
    {
        const bool branch_taken_0x23746c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23746Cu;
        // 0x237470: 0x2529fffc  addiu       $t1, $t1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23746c) {
            ctx->pc = 0x23747Cu;
            goto label_23747c;
        }
    }
    ctx->pc = 0x237474u;
label_237474:
    // 0x237474: 0x0  nop
    ctx->pc = 0x237474u;
    // NOP
label_237478:
    // 0x237478: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x237478u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_23747c:
    // 0x23747c: 0x229102b  sltu        $v0, $s1, $t1
    ctx->pc = 0x23747cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_237480:
    // 0x237480: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_237484:
    if (ctx->pc == 0x237484u) {
        ctx->pc = 0x237484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237480u;
        // 0x237484: 0xae900010  sw          $s0, 0x10($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237488u;
        goto label_237488;
    }
    ctx->pc = 0x237480u;
    {
        const bool branch_taken_0x237480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x237480) {
            ctx->pc = 0x237484u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237480u;
            // 0x237484: 0xae900010  sw          $s0, 0x10($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2374A0u;
            goto label_2374a0;
        }
    }
    ctx->pc = 0x237488u;
label_237488:
    // 0x237488: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x237488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_23748c:
    // 0x23748c: 0x0  nop
    ctx->pc = 0x23748cu;
    // NOP
label_237490:
    // 0x237490: 0x0  nop
    ctx->pc = 0x237490u;
    // NOP
label_237494:
    // 0x237494: 0x5040fff8  beql        $v0, $zero, . + 4 + (-0x8 << 2)
label_237498:
    if (ctx->pc == 0x237498u) {
        ctx->pc = 0x237498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237494u;
        // 0x237498: 0x2529fffc  addiu       $t1, $t1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23749Cu;
        goto label_23749c;
    }
    ctx->pc = 0x237494u;
    {
        const bool branch_taken_0x237494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x237494) {
            ctx->pc = 0x237498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237494u;
            // 0x237498: 0x2529fffc  addiu       $t1, $t1, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_237478;
        }
    }
    ctx->pc = 0x23749Cu;
label_23749c:
    // 0x23749c: 0xae900010  sw          $s0, 0x10($s4)
    ctx->pc = 0x23749cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
label_2374a0:
    // 0x2374a0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2374a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2374a4:
    // 0x2374a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2374a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2374a8:
    // 0x2374a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2374a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2374ac:
    // 0x2374ac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2374acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2374b0:
    // 0x2374b0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2374b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2374b4:
    // 0x2374b4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2374b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2374b8:
    // 0x2374b8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2374b8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2374bc:
    // 0x2374bc: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2374bcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2374c0:
    // 0x2374c0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2374c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2374c4:
    // 0x2374c4: 0x3e00008  jr          $ra
label_2374c8:
    if (ctx->pc == 0x2374C8u) {
        ctx->pc = 0x2374C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2374C4u;
        // 0x2374c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2374CCu;
        goto label_2374cc;
    }
    ctx->pc = 0x2374C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2374C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2374C4u;
        // 0x2374c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2374C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2374CCu;
label_2374cc:
    // 0x2374cc: 0x0  nop
    ctx->pc = 0x2374ccu;
    // NOP
label_2374d0:
    // 0x2374d0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2374d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_2374d4:
    // 0x2374d4: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x2374d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
label_2374d8:
    // 0x2374d8: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x2374d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2374dc:
    // 0x2374dc: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x2374dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
label_2374e0:
    // 0x2374e0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2374e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2374e4:
    // 0x2374e4: 0xffb70098  sd          $s7, 0x98($sp)
    ctx->pc = 0x2374e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 23));
label_2374e8:
    // 0x2374e8: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x2374e8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2374ec:
    // 0x2374ec: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x2374ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
label_2374f0:
    // 0x2374f0: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x2374f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
label_2374f4:
    // 0x2374f4: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x2374f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
label_2374f8:
    // 0x2374f8: 0xffb50088  sd          $s5, 0x88($sp)
    ctx->pc = 0x2374f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 21));
label_2374fc:
    // 0x2374fc: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x2374fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
label_237500:
    // 0x237500: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x237500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
label_237504:
    // 0x237504: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x237504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
label_237508:
    // 0x237508: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x237508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
label_23750c:
    // 0x23750c: 0x8eeb0040  lw          $t3, 0x40($s7)
    ctx->pc = 0x23750cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 64)));
label_237510:
    // 0x237510: 0xafa7000c  sw          $a3, 0xC($sp)
    ctx->pc = 0x237510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
label_237514:
    // 0x237514: 0xafa80010  sw          $t0, 0x10($sp)
    ctx->pc = 0x237514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 8));
label_237518:
    // 0x237518: 0x1160000a  beqz        $t3, . + 4 + (0xA << 2)
label_23751c:
    if (ctx->pc == 0x23751Cu) {
        ctx->pc = 0x23751Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237518u;
        // 0x23751c: 0xafaa0014  sw          $t2, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237520u;
        goto label_237520;
    }
    ctx->pc = 0x237518u;
    {
        const bool branch_taken_0x237518 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x23751Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237518u;
        // 0x23751c: 0xafaa0014  sw          $t2, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237518) {
            ctx->pc = 0x237544u;
            goto label_237544;
        }
    }
    ctx->pc = 0x237520u;
label_237520:
    // 0x237520: 0x8ee60044  lw          $a2, 0x44($s7)
    ctx->pc = 0x237520u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 68)));
label_237524:
    // 0x237524: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x237524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_237528:
    // 0x237528: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x237528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_23752c:
    // 0x23752c: 0xad660004  sw          $a2, 0x4($t3)
    ctx->pc = 0x23752cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 6));
label_237530:
    // 0x237530: 0x8ee20044  lw          $v0, 0x44($s7)
    ctx->pc = 0x237530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 68)));
label_237534:
    // 0x237534: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x237534u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_237538:
    // 0x237538: 0xc08ea3a  jal         func_23A8E8
label_23753c:
    if (ctx->pc == 0x23753Cu) {
        ctx->pc = 0x23753Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237538u;
        // 0x23753c: 0xad630008  sw          $v1, 0x8($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237540u;
        goto label_237540;
    }
    ctx->pc = 0x237538u;
    SET_GPR_U32(ctx, 31, 0x237540u);
    ctx->pc = 0x23753Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237538u;
    // 0x23753c: 0xad630008  sw          $v1, 0x8($t3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A8E8u;
    { ctx->pc = 0x23a8e8; return; }
    ctx->pc = 0x237540u;
label_237540:
    // 0x237540: 0xaee00040  sw          $zero, 0x40($s7)
    ctx->pc = 0x237540u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 64), GPR_U32(ctx, 0));
label_237544:
    // 0x237544: 0x14103e  dsrl32      $v0, $s4, 0
    ctx->pc = 0x237544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) >> (32 + 0));
label_237548:
    // 0x237548: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x237548u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_23754c:
    // 0x23754c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x23754cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_237550:
    // 0x237550: 0x483000c  bgezl       $a0, . + 4 + (0xC << 2)
label_237554:
    if (ctx->pc == 0x237554u) {
        ctx->pc = 0x237554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237550u;
        // 0x237554: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237558u;
        goto label_237558;
    }
    ctx->pc = 0x237550u;
    {
        const bool branch_taken_0x237550 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x237550) {
            ctx->pc = 0x237554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237550u;
            // 0x237554: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237584u;
            goto label_237584;
        }
    }
    ctx->pc = 0x237558u;
label_237558:
    // 0x237558: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x237558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
label_23755c:
    // 0x23755c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x23755cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_237560:
    // 0x237560: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x237560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_237564:
    // 0x237564: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x237564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_237568:
    // 0x237568: 0x283a024  and         $s4, $s4, $v1
    ctx->pc = 0x237568u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & GPR_U64(ctx, 3));
label_23756c:
    // 0x23756c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x23756cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_237570:
    // 0x237570: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x237570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_237574:
    // 0x237574: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x237574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_237578:
    // 0x237578: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x237578u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_23757c:
    // 0x23757c: 0x282a025  or          $s4, $s4, $v0
    ctx->pc = 0x23757cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
label_237580:
    // 0x237580: 0x14103e  dsrl32      $v0, $s4, 0
    ctx->pc = 0x237580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) >> (32 + 0));
label_237584:
    // 0x237584: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x237584u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
label_237588:
    // 0x237588: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x237588u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
label_23758c:
    // 0x23758c: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x23758cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
label_237590:
    // 0x237590: 0x2031024  and         $v0, $s0, $v1
    ctx->pc = 0x237590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
label_237594:
    // 0x237594: 0x14430016  bne         $v0, $v1, . + 4 + (0x16 << 2)
label_237598:
    if (ctx->pc == 0x237598u) {
        ctx->pc = 0x237598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237594u;
        // 0x237598: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23759Cu;
        goto label_23759c;
    }
    ctx->pc = 0x237594u;
    {
        const bool branch_taken_0x237594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x237598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237594u;
        // 0x237598: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237594) {
            ctx->pc = 0x2375F0u;
            goto label_2375f0;
        }
    }
    ctx->pc = 0x23759Cu;
label_23759c:
    // 0x23759c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x23759cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2375a0:
    // 0x2375a0: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x2375a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
label_2375a4:
    // 0x2375a4: 0x2403270f  addiu       $v1, $zero, 0x270F
    ctx->pc = 0x2375a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
label_2375a8:
    // 0x2375a8: 0x2821024  and         $v0, $s4, $v0
    ctx->pc = 0x2375a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
label_2375ac:
    // 0x2375ac: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2375b0:
    if (ctx->pc == 0x2375B0u) {
        ctx->pc = 0x2375B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2375ACu;
        // 0x2375b0: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2375B4u;
        goto label_2375b4;
    }
    ctx->pc = 0x2375ACu;
    {
        const bool branch_taken_0x2375ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2375B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2375ACu;
        // 0x2375b0: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2375ac) {
            ctx->pc = 0x2375C0u;
            goto label_2375c0;
        }
    }
    ctx->pc = 0x2375B4u;
label_2375b4:
    // 0x2375b4: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x2375b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_2375b8:
    // 0x2375b8: 0x10000003  b           . + 4 + (0x3 << 2)
label_2375bc:
    if (ctx->pc == 0x2375BCu) {
        ctx->pc = 0x2375BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2375B8u;
        // 0x2375bc: 0x2455e300  addiu       $s5, $v0, -0x1D00 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959872));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2375C0u;
        goto label_2375c0;
    }
    ctx->pc = 0x2375B8u;
    {
        const bool branch_taken_0x2375b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2375BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2375B8u;
        // 0x2375bc: 0x2455e300  addiu       $s5, $v0, -0x1D00 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959872));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2375b8) {
            ctx->pc = 0x2375C8u;
            goto label_2375c8;
        }
    }
    ctx->pc = 0x2375C0u;
label_2375c0:
    // 0x2375c0: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x2375c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_2375c4:
    // 0x2375c4: 0x2455e310  addiu       $s5, $v0, -0x1CF0
    ctx->pc = 0x2375c4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959888));
label_2375c8:
    // 0x2375c8: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2375c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2375cc:
    // 0x2375cc: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_2375d0:
    if (ctx->pc == 0x2375D0u) {
        ctx->pc = 0x2375D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2375CCu;
        // 0x2375d0: 0x26a30008  addiu       $v1, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2375D4u;
        goto label_2375d4;
    }
    ctx->pc = 0x2375CCu;
    {
        const bool branch_taken_0x2375cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2375D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2375CCu;
        // 0x2375d0: 0x26a30008  addiu       $v1, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2375cc) {
            ctx->pc = 0x237630u;
            goto label_237630;
        }
    }
    ctx->pc = 0x2375D4u;
label_2375d4:
    // 0x2375d4: 0x82a20003  lb          $v0, 0x3($s5)
    ctx->pc = 0x2375d4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 3)));
label_2375d8:
    // 0x2375d8: 0x26a40003  addiu       $a0, $s5, 0x3
    ctx->pc = 0x2375d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 3));
label_2375dc:
    // 0x2375dc: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x2375dcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
label_2375e0:
    // 0x2375e0: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x2375e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2375e4:
    // 0x2375e4: 0x10000012  b           . + 4 + (0x12 << 2)
label_2375e8:
    if (ctx->pc == 0x2375E8u) {
        ctx->pc = 0x2375E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2375E4u;
        // 0x2375e8: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2375ECu;
        goto label_2375ec;
    }
    ctx->pc = 0x2375E4u;
    {
        const bool branch_taken_0x2375e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2375E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2375E4u;
        // 0x2375e8: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2375e4) {
            ctx->pc = 0x237630u;
            goto label_237630;
        }
    }
    ctx->pc = 0x2375ECu;
label_2375ec:
    // 0x2375ec: 0x0  nop
    ctx->pc = 0x2375ecu;
    // NOP
label_2375f0:
    // 0x2375f0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2375f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2375f4:
    // 0x2375f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2375f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2375f8:
    // 0x2375f8: 0xc06def6  jal         func_1B7BD8
label_2375fc:
    if (ctx->pc == 0x2375FCu) {
        ctx->pc = 0x237600u;
        goto label_237600;
    }
    ctx->pc = 0x2375F8u;
    SET_GPR_U32(ctx, 31, 0x237600u);
    ctx->pc = 0x1B7BD8u;
    { ctx->pc = 0x1b7bd8; return; }
    ctx->pc = 0x237600u;
label_237600:
    // 0x237600: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_237604:
    if (ctx->pc == 0x237604u) {
        ctx->pc = 0x237604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237600u;
        // 0x237604: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237608u;
        goto label_237608;
    }
    ctx->pc = 0x237600u;
    {
        const bool branch_taken_0x237600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x237604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237600u;
        // 0x237604: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237600) {
            ctx->pc = 0x237638u;
            goto label_237638;
        }
    }
    ctx->pc = 0x237608u;
label_237608:
    // 0x237608: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x237608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_23760c:
    // 0x23760c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23760cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_237610:
    // 0x237610: 0x3c03002d  lui         $v1, 0x2D
    ctx->pc = 0x237610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45 << 16));
label_237614:
    // 0x237614: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x237614u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_237618:
    // 0x237618: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x237618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_23761c:
    // 0x23761c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_237620:
    if (ctx->pc == 0x237620u) {
        ctx->pc = 0x237620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23761Cu;
        // 0x237620: 0x2475e318  addiu       $s5, $v1, -0x1CE8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959896));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237624u;
        goto label_237624;
    }
    ctx->pc = 0x23761Cu;
    {
        const bool branch_taken_0x23761c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23761Cu;
        // 0x237620: 0x2475e318  addiu       $s5, $v1, -0x1CE8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959896));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23761c) {
            ctx->pc = 0x237630u;
            goto label_237630;
        }
    }
    ctx->pc = 0x237624u;
label_237624:
    // 0x237624: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x237624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_237628:
    // 0x237628: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x237628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_23762c:
    // 0x23762c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x23762cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_237630:
    // 0x237630: 0x10000434  b           . + 4 + (0x434 << 2)
label_237634:
    if (ctx->pc == 0x237634u) {
        ctx->pc = 0x237634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237630u;
        // 0x237634: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237638u;
        goto label_237638;
    }
    ctx->pc = 0x237630u;
    {
        const bool branch_taken_0x237630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237630u;
        // 0x237634: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237630) {
            ctx->pc = 0x238704u;
            { ctx->pc = 0x238704; return; }
        }
    }
    ctx->pc = 0x237638u;
label_237638:
    // 0x237638: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x237638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_23763c:
    // 0x23763c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x23763cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_237640:
    // 0x237640: 0xc08ed64  jal         func_23B590
label_237644:
    if (ctx->pc == 0x237644u) {
        ctx->pc = 0x237644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237640u;
        // 0x237644: 0x27a70004  addiu       $a3, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237648u;
        goto label_237648;
    }
    ctx->pc = 0x237640u;
    SET_GPR_U32(ctx, 31, 0x237648u);
    ctx->pc = 0x237644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237640u;
    // 0x237644: 0x27a70004  addiu       $a3, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B590u;
    { ctx->pc = 0x23b590; return; }
    ctx->pc = 0x237648u;
label_237648:
    // 0x237648: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x237648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
label_23764c:
    // 0x23764c: 0x101502  srl         $v0, $s0, 20
    ctx->pc = 0x23764cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 20));
label_237650:
    // 0x237650: 0x305307ff  andi        $s3, $v0, 0x7FF
    ctx->pc = 0x237650u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
label_237654:
    // 0x237654: 0x12600014  beqz        $s3, . + 4 + (0x14 << 2)
label_237658:
    if (ctx->pc == 0x237658u) {
        ctx->pc = 0x237658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237654u;
        // 0x237658: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23765Cu;
        goto label_23765c;
    }
    ctx->pc = 0x237654u;
    {
        const bool branch_taken_0x237654 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x237658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237654u;
        // 0x237658: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237654) {
            ctx->pc = 0x2376A8u;
            goto label_2376a8;
        }
    }
    ctx->pc = 0x23765Cu;
label_23765c:
    // 0x23765c: 0x280b02d  daddu       $s6, $s4, $zero
    ctx->pc = 0x23765cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_237660:
    // 0x237660: 0x16183f  dsra32      $v1, $s6, 0
    ctx->pc = 0x237660u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 22) >> (32 + 0));
label_237664:
    // 0x237664: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x237664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_237668:
    // 0x237668: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x237668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_23766c:
    // 0x23766c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x23766cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_237670:
    // 0x237670: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x237670u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
label_237674:
    // 0x237674: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x237674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_237678:
    // 0x237678: 0x2c5b024  and         $s6, $s6, $a1
    ctx->pc = 0x237678u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) & GPR_U64(ctx, 5));
label_23767c:
    // 0x23767c: 0x2c3b025  or          $s6, $s6, $v1
    ctx->pc = 0x23767cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | GPR_U64(ctx, 3));
label_237680:
    // 0x237680: 0x3c043ff0  lui         $a0, 0x3FF0
    ctx->pc = 0x237680u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16368 << 16));
label_237684:
    // 0x237684: 0x16103f  dsra32      $v0, $s6, 0
    ctx->pc = 0x237684u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 22) >> (32 + 0));
label_237688:
    // 0x237688: 0x2c5b024  and         $s6, $s6, $a1
    ctx->pc = 0x237688u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) & GPR_U64(ctx, 5));
label_23768c:
    // 0x23768c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x23768cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_237690:
    // 0x237690: 0x2673fc01  addiu       $s3, $s3, -0x3FF
    ctx->pc = 0x237690u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966273));
label_237694:
    // 0x237694: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x237694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_237698:
    // 0x237698: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x237698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_23769c:
    // 0x23769c: 0x2c2b025  or          $s6, $s6, $v0
    ctx->pc = 0x23769cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | GPR_U64(ctx, 2));
label_2376a0:
    // 0x2376a0: 0x10000029  b           . + 4 + (0x29 << 2)
label_2376a4:
    if (ctx->pc == 0x2376A4u) {
        ctx->pc = 0x2376A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2376A0u;
        // 0x2376a4: 0x8fb20004  lw          $s2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2376A8u;
        goto label_2376a8;
    }
    ctx->pc = 0x2376A0u;
    {
        const bool branch_taken_0x2376a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2376A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2376A0u;
        // 0x2376a4: 0x8fb20004  lw          $s2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2376a0) {
            ctx->pc = 0x237748u;
            goto label_237748;
        }
    }
    ctx->pc = 0x2376A8u;
label_2376a8:
    // 0x2376a8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2376a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2376ac:
    // 0x2376ac: 0x8fb20004  lw          $s2, 0x4($sp)
    ctx->pc = 0x2376acu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2376b0:
    // 0x2376b0: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x2376b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_2376b4:
    // 0x2376b4: 0x24930432  addiu       $s3, $a0, 0x432
    ctx->pc = 0x2376b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 1074));
label_2376b8:
    // 0x2376b8: 0x2a620021  slti        $v0, $s3, 0x21
    ctx->pc = 0x2376b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)33) ? 1 : 0);
label_2376bc:
    // 0x2376bc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_2376c0:
    if (ctx->pc == 0x2376C0u) {
        ctx->pc = 0x2376C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2376BCu;
        // 0x2376c0: 0x131023  negu        $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2376C4u;
        goto label_2376c4;
    }
    ctx->pc = 0x2376BCu;
    {
        const bool branch_taken_0x2376bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2376C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2376BCu;
        // 0x2376c0: 0x131023  negu        $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2376bc) {
            ctx->pc = 0x2376E8u;
            goto label_2376e8;
        }
    }
    ctx->pc = 0x2376C4u;
label_2376c4:
    // 0x2376c4: 0x24840412  addiu       $a0, $a0, 0x412
    ctx->pc = 0x2376c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1042));
label_2376c8:
    // 0x2376c8: 0x131823  negu        $v1, $s3
    ctx->pc = 0x2376c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
label_2376cc:
    // 0x2376cc: 0x14103c  dsll32      $v0, $s4, 0
    ctx->pc = 0x2376ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
label_2376d0:
    // 0x2376d0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2376d0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2376d4:
    // 0x2376d4: 0x701804  sllv        $v1, $s0, $v1
    ctx->pc = 0x2376d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 3) & 0x1F));
label_2376d8:
    // 0x2376d8: 0x821006  srlv        $v0, $v0, $a0
    ctx->pc = 0x2376d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
label_2376dc:
    // 0x2376dc: 0x10000005  b           . + 4 + (0x5 << 2)
label_2376e0:
    if (ctx->pc == 0x2376E0u) {
        ctx->pc = 0x2376E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2376DCu;
        // 0x2376e0: 0x628025  or          $s0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2376E4u;
        goto label_2376e4;
    }
    ctx->pc = 0x2376DCu;
    {
        const bool branch_taken_0x2376dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2376E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2376DCu;
        // 0x2376e0: 0x628025  or          $s0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2376dc) {
            ctx->pc = 0x2376F4u;
            goto label_2376f4;
        }
    }
    ctx->pc = 0x2376E4u;
label_2376e4:
    // 0x2376e4: 0x0  nop
    ctx->pc = 0x2376e4u;
    // NOP
label_2376e8:
    // 0x2376e8: 0x14183c  dsll32      $v1, $s4, 0
    ctx->pc = 0x2376e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 0));
label_2376ec:
    // 0x2376ec: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2376ecu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_2376f0:
    // 0x2376f0: 0x438004  sllv        $s0, $v1, $v0
    ctx->pc = 0x2376f0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_2376f4:
    // 0x2376f4: 0xc06df0a  jal         func_1B7C28
label_2376f8:
    if (ctx->pc == 0x2376F8u) {
        ctx->pc = 0x2376F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2376F4u;
        // 0x2376f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2376FCu;
        goto label_2376fc;
    }
    ctx->pc = 0x2376F4u;
    SET_GPR_U32(ctx, 31, 0x2376FCu);
    ctx->pc = 0x2376F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2376F4u;
    // 0x2376f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7C28u;
    { ctx->pc = 0x1b7c28; return; }
    ctx->pc = 0x2376FCu;
label_2376fc:
    // 0x2376fc: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
label_237700:
    if (ctx->pc == 0x237700u) {
        ctx->pc = 0x237704u;
        goto label_237704;
    }
    ctx->pc = 0x2376FCu;
    {
        const bool branch_taken_0x2376fc = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x2376fc) {
            ctx->pc = 0x237718u;
            goto label_237718;
        }
    }
    ctx->pc = 0x237704u;
label_237704:
    // 0x237704: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x237704u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
label_237708:
    // 0x237708: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x237708u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
label_23770c:
    // 0x23770c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23770cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_237710:
    // 0x237710: 0xc06dd74  jal         func_1B75D0
label_237714:
    if (ctx->pc == 0x237714u) {
        ctx->pc = 0x237718u;
        goto label_237718;
    }
    ctx->pc = 0x237710u;
    SET_GPR_U32(ctx, 31, 0x237718u);
    ctx->pc = 0x1B75D0u;
    { ctx->pc = 0x1b75d0; return; }
    ctx->pc = 0x237718u;
label_237718:
    // 0x237718: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x237718u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23771c:
    // 0x23771c: 0x3c02fe10  lui         $v0, 0xFE10
    ctx->pc = 0x23771cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65040 << 16));
label_237720:
    // 0x237720: 0x16183f  dsra32      $v1, $s6, 0
    ctx->pc = 0x237720u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 22) >> (32 + 0));
label_237724:
    // 0x237724: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x237724u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_237728:
    // 0x237728: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x237728u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_23772c:
    // 0x23772c: 0x2c4b024  and         $s6, $s6, $a0
    ctx->pc = 0x23772cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) & GPR_U64(ctx, 4));
label_237730:
    // 0x237730: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x237730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_237734:
    // 0x237734: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x237734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_237738:
    // 0x237738: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x237738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
label_23773c:
    // 0x23773c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x23773cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_237740:
    // 0x237740: 0x2673fbcd  addiu       $s3, $s3, -0x433
    ctx->pc = 0x237740u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966221));
label_237744:
    // 0x237744: 0x2c3b025  or          $s6, $s6, $v1
    ctx->pc = 0x237744u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | GPR_U64(ctx, 3));
label_237748:
    // 0x237748: 0x3405ffe0  ori         $a1, $zero, 0xFFE0
    ctx->pc = 0x237748u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65504);
label_23774c:
    // 0x23774c: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x23774cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
label_237750:
    // 0x237750: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x237750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_237754:
    // 0x237754: 0xc06dd8a  jal         func_1B7628
label_237758:
    if (ctx->pc == 0x237758u) {
        ctx->pc = 0x23775Cu;
        goto label_23775c;
    }
    ctx->pc = 0x237754u;
    SET_GPR_U32(ctx, 31, 0x23775Cu);
    ctx->pc = 0x1B7628u;
    { ctx->pc = 0x1b7628; return; }
    ctx->pc = 0x23775Cu;
label_23775c:
    // 0x23775c: 0x3c01002d  lui         $at, 0x2D
    ctx->pc = 0x23775cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45 << 16));
label_237760:
    // 0x237760: 0xdc25e320  ld          $a1, -0x1CE0($at)
    ctx->pc = 0x237760u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294959904)));
label_237764:
    // 0x237764: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x237764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_237768:
    // 0x237768: 0xc06dda4  jal         func_1B7690
label_23776c:
    if (ctx->pc == 0x23776Cu) {
        ctx->pc = 0x237770u;
        goto label_237770;
    }
    ctx->pc = 0x237768u;
    SET_GPR_U32(ctx, 31, 0x237770u);
    ctx->pc = 0x1B7690u;
    { ctx->pc = 0x1b7690; return; }
    ctx->pc = 0x237770u;
label_237770:
    // 0x237770: 0x3c01002d  lui         $at, 0x2D
    ctx->pc = 0x237770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45 << 16));
label_237774:
    // 0x237774: 0xdc25e328  ld          $a1, -0x1CD8($at)
    ctx->pc = 0x237774u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294959912)));
label_237778:
    // 0x237778: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x237778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23777c:
    // 0x23777c: 0xc06dd74  jal         func_1B75D0
label_237780:
    if (ctx->pc == 0x237780u) {
        ctx->pc = 0x237784u;
        goto label_237784;
    }
    ctx->pc = 0x23777Cu;
    SET_GPR_U32(ctx, 31, 0x237784u);
    ctx->pc = 0x1B75D0u;
    { ctx->pc = 0x1b75d0; return; }
    ctx->pc = 0x237784u;
label_237784:
    // 0x237784: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x237784u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_237788:
    // 0x237788: 0xc06df0a  jal         func_1B7C28
label_23778c:
    if (ctx->pc == 0x23778Cu) {
        ctx->pc = 0x23778Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237788u;
        // 0x23778c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237790u;
        goto label_237790;
    }
    ctx->pc = 0x237788u;
    SET_GPR_U32(ctx, 31, 0x237790u);
    ctx->pc = 0x23778Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237788u;
    // 0x23778c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7C28u;
    { ctx->pc = 0x1b7c28; return; }
    ctx->pc = 0x237790u;
label_237790:
    // 0x237790: 0x3c01002d  lui         $at, 0x2D
    ctx->pc = 0x237790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45 << 16));
label_237794:
    // 0x237794: 0xdc25e330  ld          $a1, -0x1CD0($at)
    ctx->pc = 0x237794u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294959920)));
label_237798:
    // 0x237798: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x237798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23779c:
    // 0x23779c: 0xc06dda4  jal         func_1B7690
label_2377a0:
    if (ctx->pc == 0x2377A0u) {
        ctx->pc = 0x2377A4u;
        goto label_2377a4;
    }
    ctx->pc = 0x23779Cu;
    SET_GPR_U32(ctx, 31, 0x2377A4u);
    ctx->pc = 0x1B7690u;
    { ctx->pc = 0x1b7690; return; }
    ctx->pc = 0x2377A4u;
label_2377a4:
    // 0x2377a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2377a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2377a8:
    // 0x2377a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2377a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2377ac:
    // 0x2377ac: 0xc06dd74  jal         func_1B75D0
label_2377b0:
    if (ctx->pc == 0x2377B0u) {
        ctx->pc = 0x2377B4u;
        goto label_2377b4;
    }
    ctx->pc = 0x2377ACu;
    SET_GPR_U32(ctx, 31, 0x2377B4u);
    ctx->pc = 0x1B75D0u;
    { ctx->pc = 0x1b75d0; return; }
    ctx->pc = 0x2377B4u;
label_2377b4:
    // 0x2377b4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2377b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2377b8:
    // 0x2377b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2377b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2377bc:
    // 0x2377bc: 0xc06df38  jal         func_1B7CE0
label_2377c0:
    if (ctx->pc == 0x2377C0u) {
        ctx->pc = 0x2377C4u;
        goto label_2377c4;
    }
    ctx->pc = 0x2377BCu;
    SET_GPR_U32(ctx, 31, 0x2377C4u);
    ctx->pc = 0x1B7CE0u;
    { ctx->pc = 0x1b7ce0; return; }
    ctx->pc = 0x2377C4u;
label_2377c4:
    // 0x2377c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2377c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2377c8:
    // 0x2377c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2377c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2377cc:
    // 0x2377cc: 0xc06def6  jal         func_1B7BD8
label_2377d0:
    if (ctx->pc == 0x2377D0u) {
        ctx->pc = 0x2377D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2377CCu;
        // 0x2377d0: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2377D4u;
        goto label_2377d4;
    }
    ctx->pc = 0x2377CCu;
    SET_GPR_U32(ctx, 31, 0x2377D4u);
    ctx->pc = 0x2377D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2377CCu;
    // 0x2377d0: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7BD8u;
    { ctx->pc = 0x1b7bd8; return; }
    ctx->pc = 0x2377D4u;
label_2377d4:
    // 0x2377d4: 0x441000a  bgez        $v0, . + 4 + (0xA << 2)
label_2377d8:
    if (ctx->pc == 0x2377D8u) {
        ctx->pc = 0x2377D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2377D4u;
        // 0x2377d8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2377DCu;
        goto label_2377dc;
    }
    ctx->pc = 0x2377D4u;
    {
        const bool branch_taken_0x2377d4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2377D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2377D4u;
        // 0x2377d8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2377d4) {
            ctx->pc = 0x237800u;
            goto label_237800;
        }
    }
    ctx->pc = 0x2377DCu;
label_2377dc:
    // 0x2377dc: 0xc06df0a  jal         func_1B7C28
label_2377e0:
    if (ctx->pc == 0x2377E0u) {
        ctx->pc = 0x2377E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2377DCu;
        // 0x2377e0: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2377E4u;
        goto label_2377e4;
    }
    ctx->pc = 0x2377DCu;
    SET_GPR_U32(ctx, 31, 0x2377E4u);
    ctx->pc = 0x2377E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2377DCu;
    // 0x2377e0: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7C28u;
    { ctx->pc = 0x1b7c28; return; }
    ctx->pc = 0x2377E4u;
label_2377e4:
    // 0x2377e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2377e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2377e8:
    // 0x2377e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2377e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2377ec:
    // 0x2377ec: 0xc06def6  jal         func_1B7BD8
label_2377f0:
    if (ctx->pc == 0x2377F0u) {
        ctx->pc = 0x2377F4u;
        goto label_2377f4;
    }
    ctx->pc = 0x2377ECu;
    SET_GPR_U32(ctx, 31, 0x2377F4u);
    ctx->pc = 0x1B7BD8u;
    { ctx->pc = 0x1b7bd8; return; }
    ctx->pc = 0x2377F4u;
label_2377f4:
    // 0x2377f4: 0x27c3ffff  addiu       $v1, $fp, -0x1
    ctx->pc = 0x2377f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
label_2377f8:
    // 0x2377f8: 0x62f00b  movn        $fp, $v1, $v0
    ctx->pc = 0x2377f8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 3));
label_2377fc:
    // 0x2377fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2377fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_237800:
    // 0x237800: 0x2fc20017  sltiu       $v0, $fp, 0x17
    ctx->pc = 0x237800u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
label_237804:
    // 0x237804: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_237808:
    if (ctx->pc == 0x237808u) {
        ctx->pc = 0x237808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237804u;
        // 0x237808: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23780Cu;
        goto label_23780c;
    }
    ctx->pc = 0x237804u;
    {
        const bool branch_taken_0x237804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237804u;
        // 0x237808: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237804) {
            ctx->pc = 0x237834u;
            goto label_237834;
        }
    }
    ctx->pc = 0x23780Cu;
label_23780c:
    // 0x23780c: 0x1e10c0  sll         $v0, $fp, 3
    ctx->pc = 0x23780cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
label_237810:
    // 0x237810: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x237810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_237814:
    // 0x237814: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x237814u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
label_237818:
    // 0x237818: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x237818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_23781c:
    // 0x23781c: 0xdca5e3b8  ld          $a1, -0x1C48($a1)
    ctx->pc = 0x23781cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 5), 4294960056)));
label_237820:
    // 0x237820: 0xc06def6  jal         func_1B7BD8
label_237824:
    if (ctx->pc == 0x237824u) {
        ctx->pc = 0x237824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237820u;
        // 0x237824: 0xafa00030  sw          $zero, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237828u;
        goto label_237828;
    }
    ctx->pc = 0x237820u;
    SET_GPR_U32(ctx, 31, 0x237828u);
    ctx->pc = 0x237824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237820u;
    // 0x237824: 0xafa00030  sw          $zero, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7BD8u;
    { ctx->pc = 0x1b7bd8; return; }
    ctx->pc = 0x237828u;
label_237828:
    // 0x237828: 0x27c3ffff  addiu       $v1, $fp, -0x1
    ctx->pc = 0x237828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
label_23782c:
    // 0x23782c: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x23782cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_237830:
    // 0x237830: 0x62f00b  movn        $fp, $v1, $v0
    ctx->pc = 0x237830u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 3));
label_237834:
    // 0x237834: 0x2531023  subu        $v0, $s2, $s3
    ctx->pc = 0x237834u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
label_237838:
    // 0x237838: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x237838u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_23783c:
    // 0x23783c: 0x6020004  bltzl       $s0, . + 4 + (0x4 << 2)
label_237840:
    if (ctx->pc == 0x237840u) {
        ctx->pc = 0x237840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23783Cu;
        // 0x237840: 0x108023  negu        $s0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237844u;
        goto label_237844;
    }
    ctx->pc = 0x23783Cu;
    {
        const bool branch_taken_0x23783c = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x23783c) {
            ctx->pc = 0x237840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23783Cu;
            // 0x237840: 0x108023  negu        $s0, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237850u;
            goto label_237850;
        }
    }
    ctx->pc = 0x237844u;
label_237844:
    // 0x237844: 0xafb00038  sw          $s0, 0x38($sp)
    ctx->pc = 0x237844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 16));
label_237848:
    // 0x237848: 0x10000003  b           . + 4 + (0x3 << 2)
label_23784c:
    if (ctx->pc == 0x23784Cu) {
        ctx->pc = 0x23784Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237848u;
        // 0x23784c: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237850u;
        goto label_237850;
    }
    ctx->pc = 0x237848u;
    {
        const bool branch_taken_0x237848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23784Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237848u;
        // 0x23784c: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237848) {
            ctx->pc = 0x237858u;
            goto label_237858;
        }
    }
    ctx->pc = 0x237850u;
label_237850:
    // 0x237850: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x237850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_237854:
    // 0x237854: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x237854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
label_237858:
    // 0x237858: 0x7c00007  bltz        $fp, . + 4 + (0x7 << 2)
label_23785c:
    if (ctx->pc == 0x23785Cu) {
        ctx->pc = 0x23785Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237858u;
        // 0x23785c: 0x8fa40038  lw          $a0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237860u;
        goto label_237860;
    }
    ctx->pc = 0x237858u;
    {
        const bool branch_taken_0x237858 = (GPR_S32(ctx, 30) < 0);
        ctx->pc = 0x23785Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237858u;
        // 0x23785c: 0x8fa40038  lw          $a0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237858) {
            ctx->pc = 0x237878u;
            goto label_237878;
        }
    }
    ctx->pc = 0x237860u;
label_237860:
    // 0x237860: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x237860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
label_237864:
    // 0x237864: 0x9e2021  addu        $a0, $a0, $fp
    ctx->pc = 0x237864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
label_237868:
    // 0x237868: 0xafbe003c  sw          $fp, 0x3C($sp)
    ctx->pc = 0x237868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 30));
label_23786c:
    // 0x23786c: 0x10000008  b           . + 4 + (0x8 << 2)
label_237870:
    if (ctx->pc == 0x237870u) {
        ctx->pc = 0x237870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23786Cu;
        // 0x237870: 0xafa40038  sw          $a0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237874u;
        goto label_237874;
    }
    ctx->pc = 0x23786Cu;
    {
        const bool branch_taken_0x23786c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23786Cu;
        // 0x237870: 0xafa40038  sw          $a0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23786c) {
            ctx->pc = 0x237890u;
            goto label_237890;
        }
    }
    ctx->pc = 0x237874u;
label_237874:
    // 0x237874: 0x0  nop
    ctx->pc = 0x237874u;
    // NOP
label_237878:
    // 0x237878: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x237878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_23787c:
    // 0x23787c: 0x1e1823  negu        $v1, $fp
    ctx->pc = 0x23787cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 30)));
label_237880:
    // 0x237880: 0xafa3001c  sw          $v1, 0x1C($sp)
    ctx->pc = 0x237880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
label_237884:
    // 0x237884: 0x5e1023  subu        $v0, $v0, $fp
    ctx->pc = 0x237884u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_237888:
    // 0x237888: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x237888u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
label_23788c:
    // 0x23788c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x23788cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_237890:
    // 0x237890: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x237890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_237894:
    // 0x237894: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x237894u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_237898:
    // 0x237898: 0x2c83000a  sltiu       $v1, $a0, 0xA
    ctx->pc = 0x237898u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_23789c:
    // 0x23789c: 0x3200a  movz        $a0, $zero, $v1
    ctx->pc = 0x23789cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_2378a0:
    // 0x2378a0: 0x28820006  slti        $v0, $a0, 0x6
    ctx->pc = 0x2378a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
label_2378a4:
    // 0x2378a4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2378a8:
    if (ctx->pc == 0x2378A8u) {
        ctx->pc = 0x2378A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2378A4u;
        // 0x2378a8: 0xafa40008  sw          $a0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2378ACu;
        goto label_2378ac;
    }
    ctx->pc = 0x2378A4u;
    {
        const bool branch_taken_0x2378a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2378A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2378A4u;
        // 0x2378a8: 0xafa40008  sw          $a0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2378a4) {
            ctx->pc = 0x2378B8u;
            goto label_2378b8;
        }
    }
    ctx->pc = 0x2378ACu;
label_2378ac:
    // 0x2378ac: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x2378acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
label_2378b0:
    // 0x2378b0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2378b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2378b4:
    // 0x2378b4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2378b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
label_2378b8:
    // 0x2378b8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2378b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2378bc:
    // 0x2378bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2378bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2378c0:
    // 0x2378c0: 0xafa40034  sw          $a0, 0x34($sp)
    ctx->pc = 0x2378c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 4));
label_2378c4:
    // 0x2378c4: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x2378c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_2378c8:
    // 0x2378c8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2378c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2378cc:
    // 0x2378cc: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x2378ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
label_2378d0:
    // 0x2378d0: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_2378d4:
    if (ctx->pc == 0x2378D4u) {
        ctx->pc = 0x2378D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2378D0u;
        // 0x2378d4: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2378D8u;
        goto label_2378d8;
    }
    ctx->pc = 0x2378D0u;
    {
        const bool branch_taken_0x2378d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2378D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2378D0u;
        // 0x2378d4: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2378d0) {
            ctx->pc = 0x237954u;
            goto label_237954;
        }
    }
    ctx->pc = 0x2378D8u;
label_2378d8:
    // 0x2378d8: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2378d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2378dc:
    // 0x2378dc: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2378dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2378e0:
    // 0x2378e0: 0x3c03002d  lui         $v1, 0x2D
    ctx->pc = 0x2378e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45 << 16));
label_2378e4:
    // 0x2378e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2378e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2378e8:
    // 0x2378e8: 0x8c63e340  lw          $v1, -0x1CC0($v1)
    ctx->pc = 0x2378e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959936)));
label_2378ec:
    // 0x2378ec: 0x600008  jr          $v1
label_2378f0:
    if (ctx->pc == 0x2378F0u) {
        ctx->pc = 0x2378F4u;
        goto label_2378f4;
    }
    ctx->pc = 0x2378ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2378F8u: goto label_2378f8;
            case 0x237908u: goto label_237908;
            case 0x23790Cu: goto label_23790c;
            case 0x237930u: goto label_237930;
            case 0x237934u: goto label_237934;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2378ECu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2378F4u;
label_2378f4:
    // 0x2378f4: 0x0  nop
    ctx->pc = 0x2378f4u;
    // NOP
label_2378f8:
    // 0x2378f8: 0x24130012  addiu       $s3, $zero, 0x12
    ctx->pc = 0x2378f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_2378fc:
    // 0x2378fc: 0x10000015  b           . + 4 + (0x15 << 2)
label_237900:
    if (ctx->pc == 0x237900u) {
        ctx->pc = 0x237900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2378FCu;
        // 0x237900: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237904u;
        goto label_237904;
    }
    ctx->pc = 0x2378FCu;
    {
        const bool branch_taken_0x2378fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2378FCu;
        // 0x237900: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2378fc) {
            ctx->pc = 0x237954u;
            goto label_237954;
        }
    }
    ctx->pc = 0x237904u;
label_237904:
    // 0x237904: 0x0  nop
    ctx->pc = 0x237904u;
    // NOP
label_237908:
    // 0x237908: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x237908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_23790c:
    // 0x23790c: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x23790cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_237910:
    // 0x237910: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x237910u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_237914:
    // 0x237914: 0x3102a  slt         $v0, $zero, $v1
    ctx->pc = 0x237914u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_237918:
    // 0x237918: 0x62980b  movn        $s3, $v1, $v0
    ctx->pc = 0x237918u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
label_23791c:
    // 0x23791c: 0xafb3000c  sw          $s3, 0xC($sp)
    ctx->pc = 0x23791cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 19));
label_237920:
    // 0x237920: 0xafb30028  sw          $s3, 0x28($sp)
    ctx->pc = 0x237920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 19));
label_237924:
    // 0x237924: 0x1000000b  b           . + 4 + (0xB << 2)
label_237928:
    if (ctx->pc == 0x237928u) {
        ctx->pc = 0x237928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237924u;
        // 0x237928: 0xafb30020  sw          $s3, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23792Cu;
        goto label_23792c;
    }
    ctx->pc = 0x237924u;
    {
        const bool branch_taken_0x237924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237924u;
        // 0x237928: 0xafb30020  sw          $s3, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237924) {
            ctx->pc = 0x237954u;
            goto label_237954;
        }
    }
    ctx->pc = 0x23792Cu;
label_23792c:
    // 0x23792c: 0x0  nop
    ctx->pc = 0x23792cu;
    // NOP
label_237930:
    // 0x237930: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x237930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_237934:
    // 0x237934: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x237934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_237938:
    // 0x237938: 0x9e1021  addu        $v0, $a0, $fp
    ctx->pc = 0x237938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
label_23793c:
    // 0x23793c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23793cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_237940:
    // 0x237940: 0x24530001  addiu       $s3, $v0, 0x1
    ctx->pc = 0x237940u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_237944:
    // 0x237944: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x237944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_237948:
    // 0x237948: 0x13182a  slt         $v1, $zero, $s3
    ctx->pc = 0x237948u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_23794c:
    // 0x23794c: 0xafb30020  sw          $s3, 0x20($sp)
    ctx->pc = 0x23794cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 19));
label_237950:
    // 0x237950: 0x83980a  movz        $s3, $a0, $v1
    ctx->pc = 0x237950u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 4));
label_237954:
    // 0x237954: 0x2e620018  sltiu       $v0, $s3, 0x18
    ctx->pc = 0x237954u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
label_237958:
    // 0x237958: 0xaee00044  sw          $zero, 0x44($s7)
    ctx->pc = 0x237958u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 68), GPR_U32(ctx, 0));
label_23795c:
    // 0x23795c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_237960:
    if (ctx->pc == 0x237960u) {
        ctx->pc = 0x237960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23795Cu;
        // 0x237960: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237964u;
        goto label_237964;
    }
    ctx->pc = 0x23795Cu;
    {
        const bool branch_taken_0x23795c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x237960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23795Cu;
        // 0x237960: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23795c) {
            ctx->pc = 0x237988u;
            goto label_237988;
        }
    }
    ctx->pc = 0x237964u;
label_237964:
    // 0x237964: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x237964u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_237968:
    // 0x237968: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x237968u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_23796c:
    // 0x23796c: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x23796cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_237970:
    // 0x237970: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x237970u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_237974:
    // 0x237974: 0x0  nop
    ctx->pc = 0x237974u;
    // NOP
label_237978:
    // 0x237978: 0x0  nop
    ctx->pc = 0x237978u;
    // NOP
label_23797c:
    // 0x23797c: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
label_237980:
    if (ctx->pc == 0x237980u) {
        ctx->pc = 0x237980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23797Cu;
        // 0x237980: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237984u;
        goto label_237984;
    }
    ctx->pc = 0x23797Cu;
    {
        const bool branch_taken_0x23797c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23797Cu;
        // 0x237980: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23797c) {
            ctx->pc = 0x237968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_237968;
        }
    }
    ctx->pc = 0x237984u;
label_237984:
    // 0x237984: 0xaee30044  sw          $v1, 0x44($s7)
    ctx->pc = 0x237984u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 68), GPR_U32(ctx, 3));
label_237988:
    // 0x237988: 0x8ee50044  lw          $a1, 0x44($s7)
    ctx->pc = 0x237988u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 68)));
label_23798c:
    // 0x23798c: 0xc08ea10  jal         func_23A840
label_237990:
    if (ctx->pc == 0x237990u) {
        ctx->pc = 0x237990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23798Cu;
        // 0x237990: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237994u;
        goto label_237994;
    }
    ctx->pc = 0x23798Cu;
    SET_GPR_U32(ctx, 31, 0x237994u);
    ctx->pc = 0x237990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23798Cu;
    // 0x237990: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A840u;
    { ctx->pc = 0x23a840; return; }
    ctx->pc = 0x237994u;
label_237994:
    // 0x237994: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x237994u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
label_237998:
    // 0x237998: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x237998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_23799c:
    // 0x23799c: 0x8fa40054  lw          $a0, 0x54($sp)
    ctx->pc = 0x23799cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_2379a0:
    // 0x2379a0: 0x2c62000f  sltiu       $v0, $v1, 0xF
    ctx->pc = 0x2379a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
label_2379a4:
    // 0x2379a4: 0xaee40040  sw          $a0, 0x40($s7)
    ctx->pc = 0x2379a4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 64), GPR_U32(ctx, 4));
label_2379a8:
    // 0x2379a8: 0x10400113  beqz        $v0, . + 4 + (0x113 << 2)
label_2379ac:
    if (ctx->pc == 0x2379ACu) {
        ctx->pc = 0x2379ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2379A8u;
        // 0x2379ac: 0x8fb50054  lw          $s5, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2379B0u;
        goto label_2379b0;
    }
    ctx->pc = 0x2379A8u;
    {
        const bool branch_taken_0x2379a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2379ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2379A8u;
        // 0x2379ac: 0x8fb50054  lw          $s5, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2379a8) {
            ctx->pc = 0x237DF8u;
            { ctx->pc = 0x237df8; return; }
        }
    }
    ctx->pc = 0x2379B0u;
label_2379b0:
    // 0x2379b0: 0x52200112  beql        $s1, $zero, . + 4 + (0x112 << 2)
label_2379b4:
    if (ctx->pc == 0x2379B4u) {
        ctx->pc = 0x2379B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2379B0u;
        // 0x2379b4: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2379B8u;
        goto label_2379b8;
    }
    ctx->pc = 0x2379B0u;
    {
        const bool branch_taken_0x2379b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2379b0) {
            ctx->pc = 0x2379B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2379B0u;
            // 0x2379b4: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237DFCu;
            { ctx->pc = 0x237dfc; return; }
        }
    }
    ctx->pc = 0x2379B8u;
label_2379b8:
    // 0x2379b8: 0x280b02d  daddu       $s6, $s4, $zero
    ctx->pc = 0x2379b8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2379bc:
    // 0x2379bc: 0xafbe002c  sw          $fp, 0x2C($sp)
    ctx->pc = 0x2379bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 30));
label_2379c0:
    // 0x2379c0: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x2379c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
label_2379c4:
    // 0x2379c4: 0x1bc00026  blez        $fp, . + 4 + (0x26 << 2)
label_2379c8:
    if (ctx->pc == 0x2379C8u) {
        ctx->pc = 0x2379C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2379C4u;
        // 0x2379c8: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2379CCu;
        goto label_2379cc;
    }
    ctx->pc = 0x2379C4u;
    {
        const bool branch_taken_0x2379c4 = (GPR_S32(ctx, 30) <= 0);
        ctx->pc = 0x2379C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2379C4u;
        // 0x2379c8: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2379c4) {
            ctx->pc = 0x237A60u;
            goto label_237a60;
        }
    }
    ctx->pc = 0x2379CCu;
label_2379cc:
    // 0x2379cc: 0x33c2000f  andi        $v0, $fp, 0xF
    ctx->pc = 0x2379ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)15);
label_2379d0:
    // 0x2379d0: 0x1e8103  sra         $s0, $fp, 4
    ctx->pc = 0x2379d0u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 30), 4));
label_2379d4:
    // 0x2379d4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2379d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_2379d8:
    // 0x2379d8: 0x32030010  andi        $v1, $s0, 0x10
    ctx->pc = 0x2379d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16);
label_2379dc:
    // 0x2379dc: 0x3c11002d  lui         $s1, 0x2D
    ctx->pc = 0x2379dcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)45 << 16));
label_2379e0:
    // 0x2379e0: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x2379e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2379e4:
    // 0x2379e4: 0xde31e3b8  ld          $s1, -0x1C48($s1)
    ctx->pc = 0x2379e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 17), 4294960056)));
label_2379e8:
    // 0x2379e8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_2379ec:
    if (ctx->pc == 0x2379ECu) {
        ctx->pc = 0x2379ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2379E8u;
        // 0x2379ec: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2379F0u;
        goto label_2379f0;
    }
    ctx->pc = 0x2379E8u;
    {
        const bool branch_taken_0x2379e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2379ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2379E8u;
        // 0x2379ec: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2379e8) {
            ctx->pc = 0x237A08u;
            goto label_237a08;
        }
    }
    ctx->pc = 0x2379F0u;
label_2379f0:
    // 0x2379f0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2379f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2379f4:
    // 0x2379f4: 0xdc45e4a0  ld          $a1, -0x1B60($v0)
    ctx->pc = 0x2379f4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294960288)));
label_2379f8:
    // 0x2379f8: 0x3210000f  andi        $s0, $s0, 0xF
    ctx->pc = 0x2379f8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
label_2379fc:
    // 0x2379fc: 0xc06de50  jal         func_1B7940
label_237a00:
    if (ctx->pc == 0x237A00u) {
        ctx->pc = 0x237A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2379FCu;
        // 0x237a00: 0x24130003  addiu       $s3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237A04u;
        goto label_237a04;
    }
    ctx->pc = 0x2379FCu;
    SET_GPR_U32(ctx, 31, 0x237A04u);
    ctx->pc = 0x237A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2379FCu;
    // 0x237a00: 0x24130003  addiu       $s3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7940u;
    { ctx->pc = 0x1b7940; return; }
    ctx->pc = 0x237A04u;
label_237a04:
    // 0x237a04: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x237a04u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_237a08:
    // 0x237a08: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_237a0c:
    if (ctx->pc == 0x237A0Cu) {
        ctx->pc = 0x237A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237A08u;
        // 0x237a0c: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237A10u;
        goto label_237a10;
    }
    ctx->pc = 0x237A08u;
    {
        const bool branch_taken_0x237a08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x237A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237A08u;
        // 0x237a0c: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237a08) {
            ctx->pc = 0x237A44u;
            goto label_237a44;
        }
    }
    ctx->pc = 0x237A10u;
label_237a10:
    // 0x237a10: 0x2452e480  addiu       $s2, $v0, -0x1B80
    ctx->pc = 0x237a10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960256));
label_237a14:
    // 0x237a14: 0x0  nop
    ctx->pc = 0x237a14u;
    // NOP
label_237a18:
    // 0x237a18: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x237a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_237a1c:
    // 0x237a1c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_237a20:
    if (ctx->pc == 0x237A20u) {
        ctx->pc = 0x237A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237A1Cu;
        // 0x237a20: 0x108043  sra         $s0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237A24u;
        goto label_237a24;
    }
    ctx->pc = 0x237A1Cu;
    {
        const bool branch_taken_0x237a1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x237a1c) {
            ctx->pc = 0x237A20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237A1Cu;
            // 0x237a20: 0x108043  sra         $s0, $s0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237A3Cu;
            goto label_237a3c;
        }
    }
    ctx->pc = 0x237A24u;
label_237a24:
    // 0x237a24: 0xde450000  ld          $a1, 0x0($s2)
    ctx->pc = 0x237a24u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 0)));
label_237a28:
    // 0x237a28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x237a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_237a2c:
    // 0x237a2c: 0xc06dda4  jal         func_1B7690
label_237a30:
    if (ctx->pc == 0x237A30u) {
        ctx->pc = 0x237A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237A2Cu;
        // 0x237a30: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237A34u;
        goto label_237a34;
    }
    ctx->pc = 0x237A2Cu;
    SET_GPR_U32(ctx, 31, 0x237A34u);
    ctx->pc = 0x237A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237A2Cu;
    // 0x237a30: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7690u;
    { ctx->pc = 0x1b7690; return; }
    ctx->pc = 0x237A34u;
label_237a34:
    // 0x237a34: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x237a34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_237a38:
    // 0x237a38: 0x108043  sra         $s0, $s0, 1
    ctx->pc = 0x237a38u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
label_237a3c:
    // 0x237a3c: 0x1600fff6  bnez        $s0, . + 4 + (-0xA << 2)
label_237a40:
    if (ctx->pc == 0x237A40u) {
        ctx->pc = 0x237A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237A3Cu;
        // 0x237a40: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237A44u;
        goto label_237a44;
    }
    ctx->pc = 0x237A3Cu;
    {
        const bool branch_taken_0x237a3c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x237A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237A3Cu;
        // 0x237a40: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237a3c) {
            ctx->pc = 0x237A18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_237a18;
        }
    }
    ctx->pc = 0x237A44u;
label_237a44:
    // 0x237a44: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x237a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_237a48:
    // 0x237a48: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x237a48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_237a4c:
    // 0x237a4c: 0xc06de50  jal         func_1B7940
label_237a50:
    if (ctx->pc == 0x237A50u) {
        ctx->pc = 0x237A54u;
        goto label_237a54;
    }
    ctx->pc = 0x237A4Cu;
    SET_GPR_U32(ctx, 31, 0x237A54u);
    ctx->pc = 0x1B7940u;
    { ctx->pc = 0x1b7940; return; }
    ctx->pc = 0x237A54u;
label_237a54:
    // 0x237a54: 0x1000001b  b           . + 4 + (0x1B << 2)
label_237a58:
    if (ctx->pc == 0x237A58u) {
        ctx->pc = 0x237A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237A54u;
        // 0x237a58: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237A5Cu;
        goto label_237a5c;
    }
    ctx->pc = 0x237A54u;
    {
        const bool branch_taken_0x237a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237A54u;
        // 0x237a58: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237a54) {
            ctx->pc = 0x237AC4u;
            { ctx->pc = 0x237ac4; return; }
        }
    }
    ctx->pc = 0x237A5Cu;
label_237a5c:
    // 0x237a5c: 0x0  nop
    ctx->pc = 0x237a5cu;
    // NOP
label_237a60:
    // 0x237a60: 0x1e8823  negu        $s1, $fp
    ctx->pc = 0x237a60u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 30)));
label_237a64:
    // 0x237a64: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
label_237a68:
    if (ctx->pc == 0x237A68u) {
        ctx->pc = 0x237A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237A64u;
        // 0x237a68: 0x3222000f  andi        $v0, $s1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = 0x237A6Cu;
        goto label_237a6c;
    }
    ctx->pc = 0x237A64u;
    {
        const bool branch_taken_0x237a64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x237A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237A64u;
        // 0x237a68: 0x3222000f  andi        $v0, $s1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x237a64) {
            ctx->pc = 0x237AC4u;
            { ctx->pc = 0x237ac4; return; }
        }
    }
    ctx->pc = 0x237A6Cu;
label_237a6c:
    // 0x237a6c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x237a6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_237a70:
    // 0x237a70: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x237a70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_237a74:
    // 0x237a74: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x237a74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_237a78:
    // 0x237a78: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x237a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_237a7c:
    // 0x237a7c: 0xdc84e3b8  ld          $a0, -0x1C48($a0)
    ctx->pc = 0x237a7cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 4294960056)));
label_237a80:
    // 0x237a80: 0xc06dda4  jal         func_1B7690
label_237a84:
    if (ctx->pc == 0x237A84u) {
        ctx->pc = 0x237A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237A80u;
        // 0x237a84: 0x118103  sra         $s0, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237A88u;
        goto label_237a88;
    }
    ctx->pc = 0x237A80u;
    SET_GPR_U32(ctx, 31, 0x237A88u);
    ctx->pc = 0x237A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237A80u;
    // 0x237a84: 0x118103  sra         $s0, $s1, 4 (Delay Slot)
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7690u;
    { ctx->pc = 0x1b7690; return; }
    ctx->pc = 0x237A88u;
label_237a88:
    // 0x237a88: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_237a8c:
    if (ctx->pc == 0x237A8Cu) {
        ctx->pc = 0x237A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237A88u;
        // 0x237a8c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237A90u;
        goto label_237a90;
    }
    ctx->pc = 0x237A88u;
    {
        const bool branch_taken_0x237a88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x237A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237A88u;
        // 0x237a8c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237a88) {
            ctx->pc = 0x237AC4u;
            { ctx->pc = 0x237ac4; return; }
        }
    }
    ctx->pc = 0x237A90u;
label_237a90:
    // 0x237a90: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x237a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_237a94:
    // 0x237a94: 0x2451e480  addiu       $s1, $v0, -0x1B80
    ctx->pc = 0x237a94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960256));
label_237a98:
    // 0x237a98: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x237a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_237a9c:
    // 0x237a9c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_237aa0:
    if (ctx->pc == 0x237AA0u) {
        ctx->pc = 0x237AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237A9Cu;
        // 0x237aa0: 0x108043  sra         $s0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x237AA4u;
        goto label_237aa4;
    }
    ctx->pc = 0x237A9Cu;
    {
        const bool branch_taken_0x237a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x237a9c) {
            ctx->pc = 0x237AA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237A9Cu;
            // 0x237aa0: 0x108043  sra         $s0, $s0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237ABCu;
            { ctx->pc = 0x237abc; return; }
        }
    }
    ctx->pc = 0x237AA4u;
label_237aa4:
    // 0x237aa4: 0xde240000  ld          $a0, 0x0($s1)
    ctx->pc = 0x237aa4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x237aa8u;
    return;
}

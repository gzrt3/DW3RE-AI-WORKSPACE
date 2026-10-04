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


void FUN_0017d410_part9(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x181290u: goto label_181290;
        case 0x181294u: goto label_181294;
        case 0x181298u: goto label_181298;
        case 0x18129cu: goto label_18129c;
        case 0x1812a0u: goto label_1812a0;
        case 0x1812a4u: goto label_1812a4;
        case 0x1812a8u: goto label_1812a8;
        case 0x1812acu: goto label_1812ac;
        case 0x1812b0u: goto label_1812b0;
        case 0x1812b4u: goto label_1812b4;
        case 0x1812b8u: goto label_1812b8;
        case 0x1812bcu: goto label_1812bc;
        case 0x1812c0u: goto label_1812c0;
        case 0x1812c4u: goto label_1812c4;
        case 0x1812c8u: goto label_1812c8;
        case 0x1812ccu: goto label_1812cc;
        case 0x1812d0u: goto label_1812d0;
        case 0x1812d4u: goto label_1812d4;
        case 0x1812d8u: goto label_1812d8;
        case 0x1812dcu: goto label_1812dc;
        case 0x1812e0u: goto label_1812e0;
        case 0x1812e4u: goto label_1812e4;
        case 0x1812e8u: goto label_1812e8;
        case 0x1812ecu: goto label_1812ec;
        case 0x1812f0u: goto label_1812f0;
        case 0x1812f4u: goto label_1812f4;
        case 0x1812f8u: goto label_1812f8;
        case 0x1812fcu: goto label_1812fc;
        case 0x181300u: goto label_181300;
        case 0x181304u: goto label_181304;
        case 0x181308u: goto label_181308;
        case 0x18130cu: goto label_18130c;
        case 0x181310u: goto label_181310;
        case 0x181314u: goto label_181314;
        case 0x181318u: goto label_181318;
        case 0x18131cu: goto label_18131c;
        case 0x181320u: goto label_181320;
        case 0x181324u: goto label_181324;
        case 0x181328u: goto label_181328;
        case 0x18132cu: goto label_18132c;
        case 0x181330u: goto label_181330;
        case 0x181334u: goto label_181334;
        case 0x181338u: goto label_181338;
        case 0x18133cu: goto label_18133c;
        case 0x181340u: goto label_181340;
        case 0x181344u: goto label_181344;
        case 0x181348u: goto label_181348;
        case 0x18134cu: goto label_18134c;
        case 0x181350u: goto label_181350;
        case 0x181354u: goto label_181354;
        case 0x181358u: goto label_181358;
        case 0x18135cu: goto label_18135c;
        case 0x181360u: goto label_181360;
        case 0x181364u: goto label_181364;
        case 0x181368u: goto label_181368;
        case 0x18136cu: goto label_18136c;
        case 0x181370u: goto label_181370;
        case 0x181374u: goto label_181374;
        case 0x181378u: goto label_181378;
        case 0x18137cu: goto label_18137c;
        case 0x181380u: goto label_181380;
        case 0x181384u: goto label_181384;
        case 0x181388u: goto label_181388;
        case 0x18138cu: goto label_18138c;
        case 0x181390u: goto label_181390;
        case 0x181394u: goto label_181394;
        case 0x181398u: goto label_181398;
        case 0x18139cu: goto label_18139c;
        case 0x1813a0u: goto label_1813a0;
        case 0x1813a4u: goto label_1813a4;
        case 0x1813a8u: goto label_1813a8;
        case 0x1813acu: goto label_1813ac;
        case 0x1813b0u: goto label_1813b0;
        case 0x1813b4u: goto label_1813b4;
        case 0x1813b8u: goto label_1813b8;
        case 0x1813bcu: goto label_1813bc;
        case 0x1813c0u: goto label_1813c0;
        case 0x1813c4u: goto label_1813c4;
        case 0x1813c8u: goto label_1813c8;
        case 0x1813ccu: goto label_1813cc;
        case 0x1813d0u: goto label_1813d0;
        case 0x1813d4u: goto label_1813d4;
        case 0x1813d8u: goto label_1813d8;
        case 0x1813dcu: goto label_1813dc;
        case 0x1813e0u: goto label_1813e0;
        case 0x1813e4u: goto label_1813e4;
        case 0x1813e8u: goto label_1813e8;
        case 0x1813ecu: goto label_1813ec;
        case 0x1813f0u: goto label_1813f0;
        case 0x1813f4u: goto label_1813f4;
        case 0x1813f8u: goto label_1813f8;
        case 0x1813fcu: goto label_1813fc;
        case 0x181400u: goto label_181400;
        case 0x181404u: goto label_181404;
        case 0x181408u: goto label_181408;
        case 0x18140cu: goto label_18140c;
        case 0x181410u: goto label_181410;
        case 0x181414u: goto label_181414;
        case 0x181418u: goto label_181418;
        case 0x18141cu: goto label_18141c;
        case 0x181420u: goto label_181420;
        case 0x181424u: goto label_181424;
        case 0x181428u: goto label_181428;
        case 0x18142cu: goto label_18142c;
        case 0x181430u: goto label_181430;
        case 0x181434u: goto label_181434;
        case 0x181438u: goto label_181438;
        case 0x18143cu: goto label_18143c;
        case 0x181440u: goto label_181440;
        case 0x181444u: goto label_181444;
        case 0x181448u: goto label_181448;
        case 0x18144cu: goto label_18144c;
        case 0x181450u: goto label_181450;
        case 0x181454u: goto label_181454;
        case 0x181458u: goto label_181458;
        case 0x18145cu: goto label_18145c;
        case 0x181460u: goto label_181460;
        case 0x181464u: goto label_181464;
        case 0x181468u: goto label_181468;
        case 0x18146cu: goto label_18146c;
        case 0x181470u: goto label_181470;
        case 0x181474u: goto label_181474;
        case 0x181478u: goto label_181478;
        case 0x18147cu: goto label_18147c;
        case 0x181480u: goto label_181480;
        case 0x181484u: goto label_181484;
        case 0x181488u: goto label_181488;
        case 0x18148cu: goto label_18148c;
        case 0x181490u: goto label_181490;
        case 0x181494u: goto label_181494;
        case 0x181498u: goto label_181498;
        case 0x18149cu: goto label_18149c;
        case 0x1814a0u: goto label_1814a0;
        case 0x1814a4u: goto label_1814a4;
        case 0x1814a8u: goto label_1814a8;
        case 0x1814acu: goto label_1814ac;
        case 0x1814b0u: goto label_1814b0;
        case 0x1814b4u: goto label_1814b4;
        case 0x1814b8u: goto label_1814b8;
        case 0x1814bcu: goto label_1814bc;
        case 0x1814c0u: goto label_1814c0;
        case 0x1814c4u: goto label_1814c4;
        case 0x1814c8u: goto label_1814c8;
        case 0x1814ccu: goto label_1814cc;
        case 0x1814d0u: goto label_1814d0;
        case 0x1814d4u: goto label_1814d4;
        case 0x1814d8u: goto label_1814d8;
        case 0x1814dcu: goto label_1814dc;
        case 0x1814e0u: goto label_1814e0;
        case 0x1814e4u: goto label_1814e4;
        case 0x1814e8u: goto label_1814e8;
        case 0x1814ecu: goto label_1814ec;
        case 0x1814f0u: goto label_1814f0;
        case 0x1814f4u: goto label_1814f4;
        case 0x1814f8u: goto label_1814f8;
        case 0x1814fcu: goto label_1814fc;
        case 0x181500u: goto label_181500;
        case 0x181504u: goto label_181504;
        case 0x181508u: goto label_181508;
        case 0x18150cu: goto label_18150c;
        case 0x181510u: goto label_181510;
        case 0x181514u: goto label_181514;
        case 0x181518u: goto label_181518;
        case 0x18151cu: goto label_18151c;
        case 0x181520u: goto label_181520;
        case 0x181524u: goto label_181524;
        case 0x181528u: goto label_181528;
        case 0x18152cu: goto label_18152c;
        case 0x181530u: goto label_181530;
        case 0x181534u: goto label_181534;
        case 0x181538u: goto label_181538;
        case 0x18153cu: goto label_18153c;
        case 0x181540u: goto label_181540;
        case 0x181544u: goto label_181544;
        case 0x181548u: goto label_181548;
        case 0x18154cu: goto label_18154c;
        case 0x181550u: goto label_181550;
        case 0x181554u: goto label_181554;
        case 0x181558u: goto label_181558;
        case 0x18155cu: goto label_18155c;
        case 0x181560u: goto label_181560;
        case 0x181564u: goto label_181564;
        case 0x181568u: goto label_181568;
        case 0x18156cu: goto label_18156c;
        case 0x181570u: goto label_181570;
        case 0x181574u: goto label_181574;
        case 0x181578u: goto label_181578;
        case 0x18157cu: goto label_18157c;
        case 0x181580u: goto label_181580;
        case 0x181584u: goto label_181584;
        case 0x181588u: goto label_181588;
        case 0x18158cu: goto label_18158c;
        case 0x181590u: goto label_181590;
        case 0x181594u: goto label_181594;
        case 0x181598u: goto label_181598;
        case 0x18159cu: goto label_18159c;
        case 0x1815a0u: goto label_1815a0;
        case 0x1815a4u: goto label_1815a4;
        case 0x1815a8u: goto label_1815a8;
        case 0x1815acu: goto label_1815ac;
        case 0x1815b0u: goto label_1815b0;
        case 0x1815b4u: goto label_1815b4;
        case 0x1815b8u: goto label_1815b8;
        case 0x1815bcu: goto label_1815bc;
        case 0x1815c0u: goto label_1815c0;
        case 0x1815c4u: goto label_1815c4;
        case 0x1815c8u: goto label_1815c8;
        case 0x1815ccu: goto label_1815cc;
        case 0x1815d0u: goto label_1815d0;
        case 0x1815d4u: goto label_1815d4;
        case 0x1815d8u: goto label_1815d8;
        case 0x1815dcu: goto label_1815dc;
        case 0x1815e0u: goto label_1815e0;
        case 0x1815e4u: goto label_1815e4;
        case 0x1815e8u: goto label_1815e8;
        case 0x1815ecu: goto label_1815ec;
        case 0x1815f0u: goto label_1815f0;
        case 0x1815f4u: goto label_1815f4;
        case 0x1815f8u: goto label_1815f8;
        case 0x1815fcu: goto label_1815fc;
        case 0x181600u: goto label_181600;
        case 0x181604u: goto label_181604;
        case 0x181608u: goto label_181608;
        case 0x18160cu: goto label_18160c;
        case 0x181610u: goto label_181610;
        case 0x181614u: goto label_181614;
        case 0x181618u: goto label_181618;
        case 0x18161cu: goto label_18161c;
        case 0x181620u: goto label_181620;
        case 0x181624u: goto label_181624;
        case 0x181628u: goto label_181628;
        case 0x18162cu: goto label_18162c;
        case 0x181630u: goto label_181630;
        case 0x181634u: goto label_181634;
        case 0x181638u: goto label_181638;
        case 0x18163cu: goto label_18163c;
        case 0x181640u: goto label_181640;
        case 0x181644u: goto label_181644;
        case 0x181648u: goto label_181648;
        case 0x18164cu: goto label_18164c;
        case 0x181650u: goto label_181650;
        case 0x181654u: goto label_181654;
        case 0x181658u: goto label_181658;
        case 0x18165cu: goto label_18165c;
        case 0x181660u: goto label_181660;
        case 0x181664u: goto label_181664;
        case 0x181668u: goto label_181668;
        case 0x18166cu: goto label_18166c;
        case 0x181670u: goto label_181670;
        case 0x181674u: goto label_181674;
        case 0x181678u: goto label_181678;
        case 0x18167cu: goto label_18167c;
        case 0x181680u: goto label_181680;
        case 0x181684u: goto label_181684;
        case 0x181688u: goto label_181688;
        case 0x18168cu: goto label_18168c;
        case 0x181690u: goto label_181690;
        case 0x181694u: goto label_181694;
        case 0x181698u: goto label_181698;
        case 0x18169cu: goto label_18169c;
        case 0x1816a0u: goto label_1816a0;
        case 0x1816a4u: goto label_1816a4;
        case 0x1816a8u: goto label_1816a8;
        case 0x1816acu: goto label_1816ac;
        case 0x1816b0u: goto label_1816b0;
        case 0x1816b4u: goto label_1816b4;
        case 0x1816b8u: goto label_1816b8;
        case 0x1816bcu: goto label_1816bc;
        case 0x1816c0u: goto label_1816c0;
        case 0x1816c4u: goto label_1816c4;
        case 0x1816c8u: goto label_1816c8;
        case 0x1816ccu: goto label_1816cc;
        case 0x1816d0u: goto label_1816d0;
        case 0x1816d4u: goto label_1816d4;
        case 0x1816d8u: goto label_1816d8;
        case 0x1816dcu: goto label_1816dc;
        case 0x1816e0u: goto label_1816e0;
        case 0x1816e4u: goto label_1816e4;
        case 0x1816e8u: goto label_1816e8;
        case 0x1816ecu: goto label_1816ec;
        case 0x1816f0u: goto label_1816f0;
        case 0x1816f4u: goto label_1816f4;
        case 0x1816f8u: goto label_1816f8;
        case 0x1816fcu: goto label_1816fc;
        case 0x181700u: goto label_181700;
        case 0x181704u: goto label_181704;
        case 0x181708u: goto label_181708;
        case 0x18170cu: goto label_18170c;
        case 0x181710u: goto label_181710;
        case 0x181714u: goto label_181714;
        case 0x181718u: goto label_181718;
        case 0x18171cu: goto label_18171c;
        case 0x181720u: goto label_181720;
        case 0x181724u: goto label_181724;
        case 0x181728u: goto label_181728;
        case 0x18172cu: goto label_18172c;
        case 0x181730u: goto label_181730;
        case 0x181734u: goto label_181734;
        case 0x181738u: goto label_181738;
        case 0x18173cu: goto label_18173c;
        case 0x181740u: goto label_181740;
        case 0x181744u: goto label_181744;
        case 0x181748u: goto label_181748;
        case 0x18174cu: goto label_18174c;
        case 0x181750u: goto label_181750;
        case 0x181754u: goto label_181754;
        case 0x181758u: goto label_181758;
        case 0x18175cu: goto label_18175c;
        case 0x181760u: goto label_181760;
        case 0x181764u: goto label_181764;
        case 0x181768u: goto label_181768;
        case 0x18176cu: goto label_18176c;
        case 0x181770u: goto label_181770;
        case 0x181774u: goto label_181774;
        case 0x181778u: goto label_181778;
        case 0x18177cu: goto label_18177c;
        case 0x181780u: goto label_181780;
        case 0x181784u: goto label_181784;
        case 0x181788u: goto label_181788;
        case 0x18178cu: goto label_18178c;
        case 0x181790u: goto label_181790;
        case 0x181794u: goto label_181794;
        case 0x181798u: goto label_181798;
        case 0x18179cu: goto label_18179c;
        case 0x1817a0u: goto label_1817a0;
        case 0x1817a4u: goto label_1817a4;
        case 0x1817a8u: goto label_1817a8;
        case 0x1817acu: goto label_1817ac;
        case 0x1817b0u: goto label_1817b0;
        case 0x1817b4u: goto label_1817b4;
        case 0x1817b8u: goto label_1817b8;
        case 0x1817bcu: goto label_1817bc;
        case 0x1817c0u: goto label_1817c0;
        case 0x1817c4u: goto label_1817c4;
        case 0x1817c8u: goto label_1817c8;
        case 0x1817ccu: goto label_1817cc;
        case 0x1817d0u: goto label_1817d0;
        case 0x1817d4u: goto label_1817d4;
        case 0x1817d8u: goto label_1817d8;
        case 0x1817dcu: goto label_1817dc;
        case 0x1817e0u: goto label_1817e0;
        case 0x1817e4u: goto label_1817e4;
        case 0x1817e8u: goto label_1817e8;
        case 0x1817ecu: goto label_1817ec;
        case 0x1817f0u: goto label_1817f0;
        case 0x1817f4u: goto label_1817f4;
        case 0x1817f8u: goto label_1817f8;
        case 0x1817fcu: goto label_1817fc;
        case 0x181800u: goto label_181800;
        case 0x181804u: goto label_181804;
        case 0x181808u: goto label_181808;
        case 0x18180cu: goto label_18180c;
        case 0x181810u: goto label_181810;
        case 0x181814u: goto label_181814;
        case 0x181818u: goto label_181818;
        case 0x18181cu: goto label_18181c;
        case 0x181820u: goto label_181820;
        case 0x181824u: goto label_181824;
        case 0x181828u: goto label_181828;
        case 0x18182cu: goto label_18182c;
        case 0x181830u: goto label_181830;
        case 0x181834u: goto label_181834;
        case 0x181838u: goto label_181838;
        case 0x18183cu: goto label_18183c;
        case 0x181840u: goto label_181840;
        case 0x181844u: goto label_181844;
        case 0x181848u: goto label_181848;
        case 0x18184cu: goto label_18184c;
        case 0x181850u: goto label_181850;
        case 0x181854u: goto label_181854;
        case 0x181858u: goto label_181858;
        case 0x18185cu: goto label_18185c;
        case 0x181860u: goto label_181860;
        case 0x181864u: goto label_181864;
        case 0x181868u: goto label_181868;
        case 0x18186cu: goto label_18186c;
        case 0x181870u: goto label_181870;
        case 0x181874u: goto label_181874;
        case 0x181878u: goto label_181878;
        case 0x18187cu: goto label_18187c;
        case 0x181880u: goto label_181880;
        case 0x181884u: goto label_181884;
        case 0x181888u: goto label_181888;
        case 0x18188cu: goto label_18188c;
        case 0x181890u: goto label_181890;
        case 0x181894u: goto label_181894;
        case 0x181898u: goto label_181898;
        case 0x18189cu: goto label_18189c;
        case 0x1818a0u: goto label_1818a0;
        case 0x1818a4u: goto label_1818a4;
        case 0x1818a8u: goto label_1818a8;
        case 0x1818acu: goto label_1818ac;
        case 0x1818b0u: goto label_1818b0;
        case 0x1818b4u: goto label_1818b4;
        case 0x1818b8u: goto label_1818b8;
        case 0x1818bcu: goto label_1818bc;
        case 0x1818c0u: goto label_1818c0;
        case 0x1818c4u: goto label_1818c4;
        case 0x1818c8u: goto label_1818c8;
        case 0x1818ccu: goto label_1818cc;
        case 0x1818d0u: goto label_1818d0;
        case 0x1818d4u: goto label_1818d4;
        case 0x1818d8u: goto label_1818d8;
        case 0x1818dcu: goto label_1818dc;
        case 0x1818e0u: goto label_1818e0;
        case 0x1818e4u: goto label_1818e4;
        case 0x1818e8u: goto label_1818e8;
        case 0x1818ecu: goto label_1818ec;
        case 0x1818f0u: goto label_1818f0;
        case 0x1818f4u: goto label_1818f4;
        case 0x1818f8u: goto label_1818f8;
        case 0x1818fcu: goto label_1818fc;
        case 0x181900u: goto label_181900;
        case 0x181904u: goto label_181904;
        case 0x181908u: goto label_181908;
        case 0x18190cu: goto label_18190c;
        case 0x181910u: goto label_181910;
        case 0x181914u: goto label_181914;
        case 0x181918u: goto label_181918;
        case 0x18191cu: goto label_18191c;
        case 0x181920u: goto label_181920;
        case 0x181924u: goto label_181924;
        case 0x181928u: goto label_181928;
        case 0x18192cu: goto label_18192c;
        case 0x181930u: goto label_181930;
        case 0x181934u: goto label_181934;
        case 0x181938u: goto label_181938;
        case 0x18193cu: goto label_18193c;
        case 0x181940u: goto label_181940;
        case 0x181944u: goto label_181944;
        case 0x181948u: goto label_181948;
        case 0x18194cu: goto label_18194c;
        case 0x181950u: goto label_181950;
        case 0x181954u: goto label_181954;
        case 0x181958u: goto label_181958;
        case 0x18195cu: goto label_18195c;
        case 0x181960u: goto label_181960;
        case 0x181964u: goto label_181964;
        case 0x181968u: goto label_181968;
        case 0x18196cu: goto label_18196c;
        case 0x181970u: goto label_181970;
        case 0x181974u: goto label_181974;
        case 0x181978u: goto label_181978;
        case 0x18197cu: goto label_18197c;
        case 0x181980u: goto label_181980;
        case 0x181984u: goto label_181984;
        case 0x181988u: goto label_181988;
        case 0x18198cu: goto label_18198c;
        case 0x181990u: goto label_181990;
        case 0x181994u: goto label_181994;
        case 0x181998u: goto label_181998;
        case 0x18199cu: goto label_18199c;
        case 0x1819a0u: goto label_1819a0;
        case 0x1819a4u: goto label_1819a4;
        case 0x1819a8u: goto label_1819a8;
        case 0x1819acu: goto label_1819ac;
        case 0x1819b0u: goto label_1819b0;
        case 0x1819b4u: goto label_1819b4;
        case 0x1819b8u: goto label_1819b8;
        case 0x1819bcu: goto label_1819bc;
        case 0x1819c0u: goto label_1819c0;
        case 0x1819c4u: goto label_1819c4;
        case 0x1819c8u: goto label_1819c8;
        case 0x1819ccu: goto label_1819cc;
        case 0x1819d0u: goto label_1819d0;
        case 0x1819d4u: goto label_1819d4;
        case 0x1819d8u: goto label_1819d8;
        case 0x1819dcu: goto label_1819dc;
        case 0x1819e0u: goto label_1819e0;
        case 0x1819e4u: goto label_1819e4;
        case 0x1819e8u: goto label_1819e8;
        case 0x1819ecu: goto label_1819ec;
        case 0x1819f0u: goto label_1819f0;
        case 0x1819f4u: goto label_1819f4;
        case 0x1819f8u: goto label_1819f8;
        case 0x1819fcu: goto label_1819fc;
        case 0x181a00u: goto label_181a00;
        case 0x181a04u: goto label_181a04;
        case 0x181a08u: goto label_181a08;
        case 0x181a0cu: goto label_181a0c;
        case 0x181a10u: goto label_181a10;
        case 0x181a14u: goto label_181a14;
        case 0x181a18u: goto label_181a18;
        case 0x181a1cu: goto label_181a1c;
        case 0x181a20u: goto label_181a20;
        case 0x181a24u: goto label_181a24;
        case 0x181a28u: goto label_181a28;
        case 0x181a2cu: goto label_181a2c;
        case 0x181a30u: goto label_181a30;
        case 0x181a34u: goto label_181a34;
        case 0x181a38u: goto label_181a38;
        case 0x181a3cu: goto label_181a3c;
        case 0x181a40u: goto label_181a40;
        case 0x181a44u: goto label_181a44;
        case 0x181a48u: goto label_181a48;
        case 0x181a4cu: goto label_181a4c;
        case 0x181a50u: goto label_181a50;
        case 0x181a54u: goto label_181a54;
        case 0x181a58u: goto label_181a58;
        case 0x181a5cu: goto label_181a5c;
        default: return;
    }

label_181290:
    // 0x181290: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x181290u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_181294:
    // 0x181294: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x181294u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_181298:
    // 0x181298: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
label_18129c:
    if (ctx->pc == 0x18129Cu) {
        ctx->pc = 0x1812A0u;
        goto label_1812a0;
    }
    ctx->pc = 0x181298u;
    {
        const bool branch_taken_0x181298 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x181298) {
            ctx->pc = 0x1812CCu;
            goto label_1812cc;
        }
    }
    ctx->pc = 0x1812A0u;
label_1812a0:
    // 0x1812a0: 0x24c40001  addiu       $a0, $a2, 0x1
    ctx->pc = 0x1812a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1812a4:
    // 0x1812a4: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x1812a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_1812a8:
    // 0x1812a8: 0x4343c  dsll32      $a2, $a0, 16
    ctx->pc = 0x1812a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 16));
label_1812ac:
    // 0x1812ac: 0x33c3c  dsll32      $a3, $v1, 16
    ctx->pc = 0x1812acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 16));
label_1812b0:
    // 0x1812b0: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x1812b0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
label_1812b4:
    // 0x1812b4: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x1812b4u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
label_1812b8:
    // 0x1812b8: 0x61c3c  dsll32      $v1, $a2, 16
    ctx->pc = 0x1812b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 16));
label_1812bc:
    // 0x1812bc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1812bcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_1812c0:
    // 0x1812c0: 0x2863000a  slti        $v1, $v1, 0xA
    ctx->pc = 0x1812c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
label_1812c4:
    // 0x1812c4: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
label_1812c8:
    if (ctx->pc == 0x1812C8u) {
        ctx->pc = 0x1812C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1812C4u;
        // 0x1812c8: 0x71c3c  dsll32      $v1, $a3, 16 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1812CCu;
        goto label_1812cc;
    }
    ctx->pc = 0x1812C4u;
    {
        const bool branch_taken_0x1812c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1812C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1812C4u;
        // 0x1812c8: 0x71c3c  dsll32      $v1, $a3, 16 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1812c4) {
            ctx->pc = 0x181290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_181290;
        }
    }
    ctx->pc = 0x1812CCu;
label_1812cc:
    // 0x1812cc: 0x0  nop
    ctx->pc = 0x1812ccu;
    // NOP
label_1812d0:
    // 0x1812d0: 0x2921821  addu        $v1, $s4, $s2
    ctx->pc = 0x1812d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
label_1812d4:
    // 0x1812d4: 0xa6630000  sh          $v1, 0x0($s3)
    ctx->pc = 0x1812d4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 3));
label_1812d8:
    // 0x1812d8: 0x11243c  dsll32      $a0, $s1, 16
    ctx->pc = 0x1812d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 16));
label_1812dc:
    // 0x1812dc: 0x142c3c  dsll32      $a1, $s4, 16
    ctx->pc = 0x1812dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) << (32 + 16));
label_1812e0:
    // 0x1812e0: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x1812e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
label_1812e4:
    // 0x1812e4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1812e4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_1812e8:
    // 0x1812e8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1812e8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_1812ec:
    // 0x1812ec: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1812ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_1812f0:
    // 0x1812f0: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x1812f0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_1812f4:
    // 0x1812f4: 0x423b8  dsll        $a0, $a0, 14
    ctx->pc = 0x1812f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 14);
label_1812f8:
    // 0x1812f8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1812f8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1812fc:
    // 0x1812fc: 0x31d38  dsll        $v1, $v1, 20
    ctx->pc = 0x1812fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 20);
label_181300:
    // 0x181300: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x181300u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_181304:
    // 0x181304: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x181304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_181308:
    // 0x181308: 0x216b8  dsll        $v0, $v0, 26
    ctx->pc = 0x181308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 26);
label_18130c:
    // 0x18130c: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x18130cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_181310:
    // 0x181310: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x181310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_181314:
    // 0x181314: 0x6143c  dsll32      $v0, $a2, 16
    ctx->pc = 0x181314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 16));
label_181318:
    // 0x181318: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x181318u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_18131c:
    // 0x18131c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x18131cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_181320:
    // 0x181320: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x181320u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_181324:
    // 0x181324: 0x21fb8  dsll        $v1, $v0, 30
    ctx->pc = 0x181324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 30);
label_181328:
    // 0x181328: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x181328u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_18132c:
    // 0x18132c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x18132cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_181330:
    // 0x181330: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x181330u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_181334:
    // 0x181334: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x181334u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_181338:
    // 0x181338: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x181338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_18133c:
    // 0x18133c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x18133cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_181340:
    // 0x181340: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x181340u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_181344:
    // 0x181344: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x181344u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_181348:
    // 0x181348: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x181348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_18134c:
    // 0x18134c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18134cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_181350:
    // 0x181350: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x181350u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_181354:
    // 0x181354: 0x3e00008  jr          $ra
label_181358:
    if (ctx->pc == 0x181358u) {
        ctx->pc = 0x181358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181354u;
        // 0x181358: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18135Cu;
        goto label_18135c;
    }
    ctx->pc = 0x181354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181354u;
        // 0x181358: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18135Cu;
label_18135c:
    // 0x18135c: 0x0  nop
    ctx->pc = 0x18135cu;
    // NOP
label_181360:
    // 0x181360: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x181360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_181364:
    // 0x181364: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x181364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_181368:
    // 0x181368: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x181368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_18136c:
    // 0x18136c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x18136cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_181370:
    // 0x181370: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x181370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_181374:
    // 0x181374: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x181374u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_181378:
    // 0x181378: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x181378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_18137c:
    // 0x18137c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x18137cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_181380:
    // 0x181380: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x181380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_181384:
    // 0x181384: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x181384u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_181388:
    // 0x181388: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x181388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_18138c:
    // 0x18138c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x18138cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_181390:
    // 0x181390: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x181390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_181394:
    // 0x181394: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x181394u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_181398:
    // 0x181398: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x181398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_18139c:
    // 0x18139c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18139cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1813a0:
    // 0x1813a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1813a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1813a4:
    // 0x1813a4: 0xa7a000a0  sh          $zero, 0xA0($sp)
    ctx->pc = 0x1813a4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 160), (uint16_t)GPR_U32(ctx, 0));
label_1813a8:
    // 0x1813a8: 0x90a30013  lbu         $v1, 0x13($a1)
    ctx->pc = 0x1813a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 19)));
label_1813ac:
    // 0x1813ac: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
label_1813b0:
    if (ctx->pc == 0x1813B0u) {
        ctx->pc = 0x1813B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1813ACu;
        // 0x1813b0: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1813B4u;
        goto label_1813b4;
    }
    ctx->pc = 0x1813ACu;
    {
        const bool branch_taken_0x1813ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1813B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1813ACu;
        // 0x1813b0: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1813ac) {
            ctx->pc = 0x1813F0u;
            goto label_1813f0;
        }
    }
    ctx->pc = 0x1813B4u;
label_1813b4:
    // 0x1813b4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1813b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1813b8:
    // 0x1813b8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1813bc:
    if (ctx->pc == 0x1813BCu) {
        ctx->pc = 0x1813C0u;
        goto label_1813c0;
    }
    ctx->pc = 0x1813B8u;
    {
        const bool branch_taken_0x1813b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1813b8) {
            ctx->pc = 0x1813C8u;
            goto label_1813c8;
        }
    }
    ctx->pc = 0x1813C0u;
label_1813c0:
    // 0x1813c0: 0x10000015  b           . + 4 + (0x15 << 2)
label_1813c4:
    if (ctx->pc == 0x1813C4u) {
        ctx->pc = 0x1813C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1813C0u;
        // 0x1813c4: 0x90a30012  lbu         $v1, 0x12($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1813C8u;
        goto label_1813c8;
    }
    ctx->pc = 0x1813C0u;
    {
        const bool branch_taken_0x1813c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1813C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1813C0u;
        // 0x1813c4: 0x90a30012  lbu         $v1, 0x12($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1813c0) {
            ctx->pc = 0x181418u;
            goto label_181418;
        }
    }
    ctx->pc = 0x1813C8u;
label_1813c8:
    // 0x1813c8: 0x94a2000e  lhu         $v0, 0xE($a1)
    ctx->pc = 0x1813c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 14)));
label_1813cc:
    // 0x1813cc: 0x24160008  addiu       $s6, $zero, 0x8
    ctx->pc = 0x1813ccu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1813d0:
    // 0x1813d0: 0x241e0002  addiu       $fp, $zero, 0x2
    ctx->pc = 0x1813d0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1813d4:
    // 0x1813d4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1813d8:
    if (ctx->pc == 0x1813D8u) {
        ctx->pc = 0x1813D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1813D4u;
        // 0x1813d8: 0x2a903  sra         $s5, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1813DCu;
        goto label_1813dc;
    }
    ctx->pc = 0x1813D4u;
    {
        const bool branch_taken_0x1813d4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1813D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1813D4u;
        // 0x1813d8: 0x2a903  sra         $s5, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1813d4) {
            ctx->pc = 0x1813E4u;
            goto label_1813e4;
        }
    }
    ctx->pc = 0x1813DCu;
label_1813dc:
    // 0x1813dc: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x1813dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_1813e0:
    // 0x1813e0: 0x2a903  sra         $s5, $v0, 4
    ctx->pc = 0x1813e0u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 2), 4));
label_1813e4:
    // 0x1813e4: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1813e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1813e8:
    // 0x1813e8: 0x1000000a  b           . + 4 + (0xA << 2)
label_1813ec:
    if (ctx->pc == 0x1813ECu) {
        ctx->pc = 0x1813ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1813E8u;
        // 0x1813ec: 0xa7a200a0  sh          $v0, 0xA0($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 160), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1813F0u;
        goto label_1813f0;
    }
    ctx->pc = 0x1813E8u;
    {
        const bool branch_taken_0x1813e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1813ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1813E8u;
        // 0x1813ec: 0xa7a200a0  sh          $v0, 0xA0($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 160), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1813e8) {
            ctx->pc = 0x181414u;
            goto label_181414;
        }
    }
    ctx->pc = 0x1813F0u;
label_1813f0:
    // 0x1813f0: 0x94a2000e  lhu         $v0, 0xE($a1)
    ctx->pc = 0x1813f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 14)));
label_1813f4:
    // 0x1813f4: 0x24160010  addiu       $s6, $zero, 0x10
    ctx->pc = 0x1813f4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1813f8:
    // 0x1813f8: 0x2c0f02d  daddu       $fp, $s6, $zero
    ctx->pc = 0x1813f8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1813fc:
    // 0x1813fc: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_181400:
    if (ctx->pc == 0x181400u) {
        ctx->pc = 0x181400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1813FCu;
        // 0x181400: 0x2aa03  sra         $s5, $v0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181404u;
        goto label_181404;
    }
    ctx->pc = 0x1813FCu;
    {
        const bool branch_taken_0x1813fc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x181400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1813FCu;
        // 0x181400: 0x2aa03  sra         $s5, $v0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1813fc) {
            ctx->pc = 0x18140Cu;
            goto label_18140c;
        }
    }
    ctx->pc = 0x181404u;
label_181404:
    // 0x181404: 0x244200ff  addiu       $v0, $v0, 0xFF
    ctx->pc = 0x181404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 255));
label_181408:
    // 0x181408: 0x2aa03  sra         $s5, $v0, 8
    ctx->pc = 0x181408u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 2), 8));
label_18140c:
    // 0x18140c: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x18140cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_181410:
    // 0x181410: 0xa7a200a0  sh          $v0, 0xA0($sp)
    ctx->pc = 0x181410u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 160), (uint16_t)GPR_U32(ctx, 2));
label_181414:
    // 0x181414: 0x90a30012  lbu         $v1, 0x12($a1)
    ctx->pc = 0x181414u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 18)));
label_181418:
    // 0x181418: 0x1e243c  dsll32      $a0, $fp, 16
    ctx->pc = 0x181418u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 30) << (32 + 16));
label_18141c:
    // 0x18141c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x18141cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
label_181420:
    // 0x181420: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x181420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_181424:
    // 0x181424: 0x162c3c  dsll32      $a1, $s6, 16
    ctx->pc = 0x181424u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 22) << (32 + 16));
label_181428:
    // 0x181428: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x181428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
label_18142c:
    // 0x18142c: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x18142cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_181430:
    // 0x181430: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_181434:
    if (ctx->pc == 0x181434u) {
        ctx->pc = 0x181434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181430u;
        // 0x181434: 0xa48818  mult        $s1, $a1, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x181438u;
        goto label_181438;
    }
    ctx->pc = 0x181430u;
    {
        const bool branch_taken_0x181430 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x181434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181430u;
        // 0x181434: 0xa48818  mult        $s1, $a1, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x181430) {
            ctx->pc = 0x181458u;
            goto label_181458;
        }
    }
    ctx->pc = 0x181438u;
label_181438:
    // 0x181438: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x181438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18143c:
    // 0x18143c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_181440:
    if (ctx->pc == 0x181440u) {
        ctx->pc = 0x181444u;
        goto label_181444;
    }
    ctx->pc = 0x18143Cu;
    {
        const bool branch_taken_0x18143c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18143c) {
            ctx->pc = 0x18144Cu;
            goto label_18144c;
        }
    }
    ctx->pc = 0x181444u;
label_181444:
    // 0x181444: 0x10000007  b           . + 4 + (0x7 << 2)
label_181448:
    if (ctx->pc == 0x181448u) {
        ctx->pc = 0x181448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181444u;
        // 0x181448: 0x15082a  slt         $at, $zero, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18144Cu;
        goto label_18144c;
    }
    ctx->pc = 0x181444u;
    {
        const bool branch_taken_0x181444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181444u;
        // 0x181448: 0x15082a  slt         $at, $zero, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x181444) {
            ctx->pc = 0x181464u;
            goto label_181464;
        }
    }
    ctx->pc = 0x18144Cu;
label_18144c:
    // 0x18144c: 0x24170002  addiu       $s7, $zero, 0x2
    ctx->pc = 0x18144cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_181450:
    // 0x181450: 0x10000003  b           . + 4 + (0x3 << 2)
label_181454:
    if (ctx->pc == 0x181454u) {
        ctx->pc = 0x181454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181450u;
        // 0x181454: 0x118840  sll         $s1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181458u;
        goto label_181458;
    }
    ctx->pc = 0x181450u;
    {
        const bool branch_taken_0x181450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181450u;
        // 0x181454: 0x118840  sll         $s1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181450) {
            ctx->pc = 0x181460u;
            goto label_181460;
        }
    }
    ctx->pc = 0x181458u;
label_181458:
    // 0x181458: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x181458u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18145c:
    // 0x18145c: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x18145cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_181460:
    // 0x181460: 0x15082a  slt         $at, $zero, $s5
    ctx->pc = 0x181460u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_181464:
    // 0x181464: 0x10200036  beqz        $at, . + 4 + (0x36 << 2)
label_181468:
    if (ctx->pc == 0x181468u) {
        ctx->pc = 0x181468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181464u;
        // 0x181468: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18146Cu;
        goto label_18146c;
    }
    ctx->pc = 0x181464u;
    {
        const bool branch_taken_0x181464 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x181468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181464u;
        // 0x181468: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181464) {
            ctx->pc = 0x181540u;
            goto label_181540;
        }
    }
    ctx->pc = 0x18146Cu;
label_18146c:
    // 0x18146c: 0x2902021  addu        $a0, $s4, $s0
    ctx->pc = 0x18146cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_181470:
    // 0x181470: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
label_181474:
    if (ctx->pc == 0x181474u) {
        ctx->pc = 0x181474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181470u;
        // 0x181474: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181478u;
        goto label_181478;
    }
    ctx->pc = 0x181470u;
    {
        const bool branch_taken_0x181470 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x181474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181470u;
        // 0x181474: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181470) {
            ctx->pc = 0x18148Cu;
            goto label_18148c;
        }
    }
    ctx->pc = 0x181478u;
label_181478:
    // 0x181478: 0x288100b8  slti        $at, $a0, 0xB8
    ctx->pc = 0x181478u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)184) ? 1 : 0);
label_18147c:
    // 0x18147c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_181480:
    if (ctx->pc == 0x181480u) {
        ctx->pc = 0x181480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18147Cu;
        // 0x181480: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181484u;
        goto label_181484;
    }
    ctx->pc = 0x18147Cu;
    {
        const bool branch_taken_0x18147c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x181480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18147Cu;
        // 0x181480: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18147c) {
            ctx->pc = 0x18148Cu;
            goto label_18148c;
        }
    }
    ctx->pc = 0x181484u;
label_181484:
    // 0x181484: 0x10000008  b           . + 4 + (0x8 << 2)
label_181488:
    if (ctx->pc == 0x181488u) {
        ctx->pc = 0x181488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181484u;
        // 0x181488: 0x24433ba0  addiu       $v1, $v0, 0x3BA0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18148Cu;
        goto label_18148c;
    }
    ctx->pc = 0x181484u;
    {
        const bool branch_taken_0x181484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181484u;
        // 0x181488: 0x24433ba0  addiu       $v1, $v0, 0x3BA0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181484) {
            ctx->pc = 0x1814A8u;
            goto label_1814a8;
        }
    }
    ctx->pc = 0x18148Cu;
label_18148c:
    // 0x18148c: 0x0  nop
    ctx->pc = 0x18148cu;
    // NOP
label_181490:
    // 0x181490: 0x288200b8  slti        $v0, $a0, 0xB8
    ctx->pc = 0x181490u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)184) ? 1 : 0);
label_181494:
    // 0x181494: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_181498:
    if (ctx->pc == 0x181498u) {
        ctx->pc = 0x181498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181494u;
        // 0x181498: 0x28810238  slti        $at, $a0, 0x238 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)568) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18149Cu;
        goto label_18149c;
    }
    ctx->pc = 0x181494u;
    {
        const bool branch_taken_0x181494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x181498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181494u;
        // 0x181498: 0x28810238  slti        $at, $a0, 0x238 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)568) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x181494) {
            ctx->pc = 0x1814A8u;
            goto label_1814a8;
        }
    }
    ctx->pc = 0x18149Cu;
label_18149c:
    // 0x18149c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1814a0:
    if (ctx->pc == 0x1814A0u) {
        ctx->pc = 0x1814A4u;
        goto label_1814a4;
    }
    ctx->pc = 0x18149Cu;
    {
        const bool branch_taken_0x18149c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18149c) {
            ctx->pc = 0x1814A8u;
            goto label_1814a8;
        }
    }
    ctx->pc = 0x1814A4u;
label_1814a4:
    // 0x1814a4: 0x24833dc8  addiu       $v1, $a0, 0x3DC8
    ctx->pc = 0x1814a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 15816));
label_1814a8:
    // 0x1814a8: 0x32c3c  dsll32      $a1, $v1, 16
    ctx->pc = 0x1814a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
label_1814ac:
    // 0x1814ac: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1814acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_1814b0:
    // 0x1814b0: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x1814b0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_1814b4:
    // 0x1814b4: 0x24849880  addiu       $a0, $a0, -0x6780
    ctx->pc = 0x1814b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940800));
label_1814b8:
    // 0x1814b8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1814b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1814bc:
    // 0x1814bc: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x1814bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1814c0:
    // 0x1814c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1814c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1814c4:
    // 0x1814c4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1814c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1814c8:
    // 0x1814c8: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x1814c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1814cc:
    // 0x1814cc: 0xc066506  jal         func_199418
label_1814d0:
    if (ctx->pc == 0x1814D0u) {
        ctx->pc = 0x1814D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1814CCu;
        // 0x1814d0: 0x3c0582d  daddu       $t3, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1814D4u;
        goto label_1814d4;
    }
    ctx->pc = 0x1814CCu;
    SET_GPR_U32(ctx, 31, 0x1814D4u);
    ctx->pc = 0x1814D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1814CCu;
    // 0x1814d0: 0x3c0582d  daddu       $t3, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199418u;
    { ctx->pc = 0x199418; return; }
    ctx->pc = 0x1814D4u;
label_1814d4:
    // 0x1814d4: 0xc0692a8  jal         func_1A4AA0
label_1814d8:
    if (ctx->pc == 0x1814D8u) {
        ctx->pc = 0x1814D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1814D4u;
        // 0x1814d8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1814DCu;
        goto label_1814dc;
    }
    ctx->pc = 0x1814D4u;
    SET_GPR_U32(ctx, 31, 0x1814DCu);
    ctx->pc = 0x1814D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1814D4u;
    // 0x1814d8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4AA0u;
    { ctx->pc = 0x1a4aa0; return; }
    ctx->pc = 0x1814DCu;
label_1814dc:
    // 0x1814dc: 0x8f9387e4  lw          $s3, -0x781C($gp)
    ctx->pc = 0x1814dcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936548)));
label_1814e0:
    // 0x1814e0: 0xc06029c  jal         func_180A70
label_1814e4:
    if (ctx->pc == 0x1814E4u) {
        ctx->pc = 0x1814E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1814E0u;
        // 0x1814e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1814E8u;
        goto label_1814e8;
    }
    ctx->pc = 0x1814E0u;
    SET_GPR_U32(ctx, 31, 0x1814E8u);
    ctx->pc = 0x1814E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1814E0u;
    // 0x1814e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180A70u;
    { ctx->pc = 0x180a70; return; }
    ctx->pc = 0x1814E8u;
label_1814e8:
    // 0x1814e8: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1814e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_1814ec:
    // 0x1814ec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1814ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1814f0:
    // 0x1814f0: 0xc0665d0  jal         func_199740
label_1814f4:
    if (ctx->pc == 0x1814F4u) {
        ctx->pc = 0x1814F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1814F0u;
        // 0x1814f4: 0x24849880  addiu       $a0, $a0, -0x6780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940800));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1814F8u;
        goto label_1814f8;
    }
    ctx->pc = 0x1814F0u;
    SET_GPR_U32(ctx, 31, 0x1814F8u);
    ctx->pc = 0x1814F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1814F0u;
    // 0x1814f4: 0x24849880  addiu       $a0, $a0, -0x6780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199740u;
    { ctx->pc = 0x199740; return; }
    ctx->pc = 0x1814F8u;
label_1814f8:
    // 0x1814f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1814f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1814fc:
    // 0x1814fc: 0xc066440  jal         func_199100
label_181500:
    if (ctx->pc == 0x181500u) {
        ctx->pc = 0x181500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1814FCu;
        // 0x181500: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181504u;
        goto label_181504;
    }
    ctx->pc = 0x1814FCu;
    SET_GPR_U32(ctx, 31, 0x181504u);
    ctx->pc = 0x181500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1814FCu;
    // 0x181500: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199100u;
    { ctx->pc = 0x199100; return; }
    ctx->pc = 0x181504u;
label_181504:
    // 0x181504: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
label_181508:
    if (ctx->pc == 0x181508u) {
        ctx->pc = 0x181508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181504u;
        // 0x181508: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18150Cu;
        goto label_18150c;
    }
    ctx->pc = 0x181504u;
    {
        const bool branch_taken_0x181504 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x181508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181504u;
        // 0x181508: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181504) {
            ctx->pc = 0x181514u;
            goto label_181514;
        }
    }
    ctx->pc = 0x18150Cu;
label_18150c:
    // 0x18150c: 0xc06029c  jal         func_180A70
label_181510:
    if (ctx->pc == 0x181510u) {
        ctx->pc = 0x181514u;
        goto label_181514;
    }
    ctx->pc = 0x18150Cu;
    SET_GPR_U32(ctx, 31, 0x181514u);
    ctx->pc = 0x180A70u;
    { ctx->pc = 0x180a70; return; }
    ctx->pc = 0x181514u;
label_181514:
    // 0x181514: 0x0  nop
    ctx->pc = 0x181514u;
    // NOP
label_181518:
    // 0x181518: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
label_18151c:
    if (ctx->pc == 0x18151Cu) {
        ctx->pc = 0x18151Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181518u;
        // 0x18151c: 0x111103  sra         $v0, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181520u;
        goto label_181520;
    }
    ctx->pc = 0x181518u;
    {
        const bool branch_taken_0x181518 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x18151Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181518u;
        // 0x18151c: 0x111103  sra         $v0, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181518) {
            ctx->pc = 0x181528u;
            goto label_181528;
        }
    }
    ctx->pc = 0x181520u;
label_181520:
    // 0x181520: 0x2622000f  addiu       $v0, $s1, 0xF
    ctx->pc = 0x181520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 15));
label_181524:
    // 0x181524: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x181524u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_181528:
    // 0x181528: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x181528u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_18152c:
    // 0x18152c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18152cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_181530:
    // 0x181530: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x181530u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_181534:
    // 0x181534: 0x215102a  slt         $v0, $s0, $s5
    ctx->pc = 0x181534u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_181538:
    // 0x181538: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
label_18153c:
    if (ctx->pc == 0x18153Cu) {
        ctx->pc = 0x18153Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181538u;
        // 0x18153c: 0x2902021  addu        $a0, $s4, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181540u;
        goto label_181540;
    }
    ctx->pc = 0x181538u;
    {
        const bool branch_taken_0x181538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18153Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181538u;
        // 0x18153c: 0x2902021  addu        $a0, $s4, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181538) {
            ctx->pc = 0x181470u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_181470;
        }
    }
    ctx->pc = 0x181540u;
label_181540:
    // 0x181540: 0x6800007  bltz        $s4, . + 4 + (0x7 << 2)
label_181544:
    if (ctx->pc == 0x181544u) {
        ctx->pc = 0x181544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181540u;
        // 0x181544: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181548u;
        goto label_181548;
    }
    ctx->pc = 0x181540u;
    {
        const bool branch_taken_0x181540 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x181544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181540u;
        // 0x181544: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181540) {
            ctx->pc = 0x181560u;
            goto label_181560;
        }
    }
    ctx->pc = 0x181548u;
label_181548:
    // 0x181548: 0x2a8100b8  slti        $at, $s4, 0xB8
    ctx->pc = 0x181548u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)184) ? 1 : 0);
label_18154c:
    // 0x18154c: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_181550:
    if (ctx->pc == 0x181550u) {
        ctx->pc = 0x181550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18154Cu;
        // 0x181550: 0x2a8200b8  slti        $v0, $s4, 0xB8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)184) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x181554u;
        goto label_181554;
    }
    ctx->pc = 0x18154Cu;
    {
        const bool branch_taken_0x18154c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x181550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18154Cu;
        // 0x181550: 0x2a8200b8  slti        $v0, $s4, 0xB8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)184) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18154c) {
            ctx->pc = 0x181564u;
            goto label_181564;
        }
    }
    ctx->pc = 0x181554u;
label_181554:
    // 0x181554: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x181554u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_181558:
    // 0x181558: 0x10000007  b           . + 4 + (0x7 << 2)
label_18155c:
    if (ctx->pc == 0x18155Cu) {
        ctx->pc = 0x18155Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181558u;
        // 0x18155c: 0x24443ba0  addiu       $a0, $v0, 0x3BA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 15264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181560u;
        goto label_181560;
    }
    ctx->pc = 0x181558u;
    {
        const bool branch_taken_0x181558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18155Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181558u;
        // 0x18155c: 0x24443ba0  addiu       $a0, $v0, 0x3BA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 15264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181558) {
            ctx->pc = 0x181578u;
            goto label_181578;
        }
    }
    ctx->pc = 0x181560u;
label_181560:
    // 0x181560: 0x2a8200b8  slti        $v0, $s4, 0xB8
    ctx->pc = 0x181560u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)184) ? 1 : 0);
label_181564:
    // 0x181564: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_181568:
    if (ctx->pc == 0x181568u) {
        ctx->pc = 0x181568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181564u;
        // 0x181568: 0x2a810238  slti        $at, $s4, 0x238 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)568) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18156Cu;
        goto label_18156c;
    }
    ctx->pc = 0x181564u;
    {
        const bool branch_taken_0x181564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x181568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181564u;
        // 0x181568: 0x2a810238  slti        $at, $s4, 0x238 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)568) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x181564) {
            ctx->pc = 0x181578u;
            goto label_181578;
        }
    }
    ctx->pc = 0x18156Cu;
label_18156c:
    // 0x18156c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_181570:
    if (ctx->pc == 0x181570u) {
        ctx->pc = 0x181574u;
        goto label_181574;
    }
    ctx->pc = 0x18156Cu;
    {
        const bool branch_taken_0x18156c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18156c) {
            ctx->pc = 0x181578u;
            goto label_181578;
        }
    }
    ctx->pc = 0x181574u;
label_181574:
    // 0x181574: 0x26843dc8  addiu       $a0, $s4, 0x3DC8
    ctx->pc = 0x181574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 15816));
label_181578:
    // 0x181578: 0x87a200a0  lh          $v0, 0xA0($sp)
    ctx->pc = 0x181578u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 160)));
label_18157c:
    // 0x18157c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x18157cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_181580:
    // 0x181580: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x181580u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_181584:
    // 0x181584: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x181584u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_181588:
    // 0x181588: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x181588u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_18158c:
    // 0x18158c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x18158cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_181590:
    // 0x181590: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x181590u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_181594:
    // 0x181594: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x181594u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_181598:
    // 0x181598: 0x4143c  dsll32      $v0, $a0, 16
    ctx->pc = 0x181598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 16));
label_18159c:
    // 0x18159c: 0x31d38  dsll        $v1, $v1, 20
    ctx->pc = 0x18159cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 20);
label_1815a0:
    // 0x1815a0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1815a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1815a4:
    // 0x1815a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1815a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1815a8:
    // 0x1815a8: 0x2117c  dsll32      $v0, $v0, 5
    ctx->pc = 0x1815a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 5));
label_1815ac:
    // 0x1815ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1815acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1815b0:
    // 0x1815b0: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x1815b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1815b4:
    // 0x1815b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1815b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1815b8:
    // 0x1815b8: 0x17143c  dsll32      $v0, $s7, 16
    ctx->pc = 0x1815b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) << (32 + 16));
label_1815bc:
    // 0x1815bc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1815bcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1815c0:
    // 0x1815c0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1815c0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1815c4:
    // 0x1815c4: 0x21cfc  dsll32      $v1, $v0, 19
    ctx->pc = 0x1815c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 19));
label_1815c8:
    // 0x1815c8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1815c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_1815cc:
    // 0x1815cc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1815ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1815d0:
    // 0x1815d0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1815d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1815d4:
    // 0x1815d4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1815d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1815d8:
    // 0x1815d8: 0x3e00008  jr          $ra
label_1815dc:
    if (ctx->pc == 0x1815DCu) {
        ctx->pc = 0x1815DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1815D8u;
        // 0x1815dc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1815E0u;
        goto label_1815e0;
    }
    ctx->pc = 0x1815D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1815DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1815D8u;
        // 0x1815dc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1815D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1815E0u;
label_1815e0:
    // 0x1815e0: 0x4143c  dsll32      $v0, $a0, 16
    ctx->pc = 0x1815e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 16));
label_1815e4:
    // 0x1815e4: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1815e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_1815e8:
    // 0x1815e8: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x1815e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1815ec:
    // 0x1815ec: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1815ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1815f0:
    // 0x1815f0: 0x230c0  sll         $a2, $v0, 3
    ctx->pc = 0x1815f0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1815f4:
    // 0x1815f4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1815f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1815f8:
    // 0x1815f8: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1815f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1815fc:
    // 0x1815fc: 0x24632a34  addiu       $v1, $v1, 0x2A34
    ctx->pc = 0x1815fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10804));
label_181600:
    // 0x181600: 0x24422a36  addiu       $v0, $v0, 0x2A36
    ctx->pc = 0x181600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10806));
label_181604:
    // 0x181604: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x181604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_181608:
    // 0x181608: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x181608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_18160c:
    // 0x18160c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x18160cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_181610:
    // 0x181610: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x181610u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_181614:
    // 0x181614: 0xc06058c  jal         func_181630
label_181618:
    if (ctx->pc == 0x181618u) {
        ctx->pc = 0x181618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181614u;
        // 0x181618: 0x84660000  lh          $a2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18161Cu;
        goto label_18161c;
    }
    ctx->pc = 0x181614u;
    SET_GPR_U32(ctx, 31, 0x18161Cu);
    ctx->pc = 0x181618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181614u;
    // 0x181618: 0x84660000  lh          $a2, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181630u;
    goto label_181630;
    ctx->pc = 0x18161Cu;
label_18161c:
    // 0x18161c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18161cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_181620:
    // 0x181620: 0x3e00008  jr          $ra
label_181624:
    if (ctx->pc == 0x181624u) {
        ctx->pc = 0x181624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181620u;
        // 0x181624: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181628u;
        goto label_181628;
    }
    ctx->pc = 0x181620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181620u;
        // 0x181624: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181628u;
label_181628:
    // 0x181628: 0x0  nop
    ctx->pc = 0x181628u;
    // NOP
label_18162c:
    // 0x18162c: 0x0  nop
    ctx->pc = 0x18162cu;
    // NOP
label_181630:
    // 0x181630: 0x4143c  dsll32      $v0, $a0, 16
    ctx->pc = 0x181630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 16));
label_181634:
    // 0x181634: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x181634u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_181638:
    // 0x181638: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x181638u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_18163c:
    // 0x18163c: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x18163cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_181640:
    // 0x181640: 0x24422a30  addiu       $v0, $v0, 0x2A30
    ctx->pc = 0x181640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10800));
label_181644:
    // 0x181644: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x181644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_181648:
    // 0x181648: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x181648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_18164c:
    // 0x18164c: 0x24422a32  addiu       $v0, $v0, 0x2A32
    ctx->pc = 0x18164cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10802));
label_181650:
    // 0x181650: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x181650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_181654:
    // 0x181654: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x181654u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_181658:
    // 0x181658: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x181658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_18165c:
    // 0x18165c: 0x14820010  bne         $a0, $v0, . + 4 + (0x10 << 2)
label_181660:
    if (ctx->pc == 0x181660u) {
        ctx->pc = 0x181660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18165Cu;
        // 0x181660: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181664u;
        goto label_181664;
    }
    ctx->pc = 0x18165Cu;
    {
        const bool branch_taken_0x18165c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x181660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18165Cu;
        // 0x181660: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18165c) {
            ctx->pc = 0x1816A0u;
            goto label_1816a0;
        }
    }
    ctx->pc = 0x181664u;
label_181664:
    // 0x181664: 0x6143c  dsll32      $v0, $a2, 16
    ctx->pc = 0x181664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 16));
label_181668:
    // 0x181668: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x181668u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_18166c:
    // 0x18166c: 0x2449007f  addiu       $t1, $v0, 0x7F
    ctx->pc = 0x18166cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 127));
label_181670:
    // 0x181670: 0x5210003  bgez        $t1, . + 4 + (0x3 << 2)
label_181674:
    if (ctx->pc == 0x181674u) {
        ctx->pc = 0x181674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181670u;
        // 0x181674: 0x911c3  sra         $v0, $t1, 7 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 9), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181678u;
        goto label_181678;
    }
    ctx->pc = 0x181670u;
    {
        const bool branch_taken_0x181670 = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x181674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181670u;
        // 0x181674: 0x911c3  sra         $v0, $t1, 7 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 9), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181670) {
            ctx->pc = 0x181680u;
            goto label_181680;
        }
    }
    ctx->pc = 0x181678u;
label_181678:
    // 0x181678: 0x2522007f  addiu       $v0, $t1, 0x7F
    ctx->pc = 0x181678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 127));
label_18167c:
    // 0x18167c: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x18167cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
label_181680:
    // 0x181680: 0x249c0  sll         $t1, $v0, 7
    ctx->pc = 0x181680u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_181684:
    // 0x181684: 0x5210003  bgez        $t1, . + 4 + (0x3 << 2)
label_181688:
    if (ctx->pc == 0x181688u) {
        ctx->pc = 0x181688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181684u;
        // 0x181688: 0x91183  sra         $v0, $t1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 9), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18168Cu;
        goto label_18168c;
    }
    ctx->pc = 0x181684u;
    {
        const bool branch_taken_0x181684 = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x181688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181684u;
        // 0x181688: 0x91183  sra         $v0, $t1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 9), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181684) {
            ctx->pc = 0x181694u;
            goto label_181694;
        }
    }
    ctx->pc = 0x18168Cu;
label_18168c:
    // 0x18168c: 0x2522003f  addiu       $v0, $t1, 0x3F
    ctx->pc = 0x18168cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 63));
label_181690:
    // 0x181690: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x181690u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
label_181694:
    // 0x181694: 0x2543c  dsll32      $t2, $v0, 16
    ctx->pc = 0x181694u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) << (32 + 16));
label_181698:
    // 0x181698: 0x10000036  b           . + 4 + (0x36 << 2)
label_18169c:
    if (ctx->pc == 0x18169Cu) {
        ctx->pc = 0x18169Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181698u;
        // 0x18169c: 0xa543f  dsra32      $t2, $t2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1816A0u;
        goto label_1816a0;
    }
    ctx->pc = 0x181698u;
    {
        const bool branch_taken_0x181698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18169Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181698u;
        // 0x18169c: 0xa543f  dsra32      $t2, $t2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181698) {
            ctx->pc = 0x181774u;
            goto label_181774;
        }
    }
    ctx->pc = 0x1816A0u;
label_1816a0:
    // 0x1816a0: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x1816a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_1816a4:
    // 0x1816a4: 0x14820010  bne         $a0, $v0, . + 4 + (0x10 << 2)
label_1816a8:
    if (ctx->pc == 0x1816A8u) {
        ctx->pc = 0x1816A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1816A4u;
        // 0x1816a8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1816ACu;
        goto label_1816ac;
    }
    ctx->pc = 0x1816A4u;
    {
        const bool branch_taken_0x1816a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1816A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1816A4u;
        // 0x1816a8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1816a4) {
            ctx->pc = 0x1816E8u;
            goto label_1816e8;
        }
    }
    ctx->pc = 0x1816ACu;
label_1816ac:
    // 0x1816ac: 0x6143c  dsll32      $v0, $a2, 16
    ctx->pc = 0x1816acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 16));
label_1816b0:
    // 0x1816b0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1816b0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1816b4:
    // 0x1816b4: 0x2449007f  addiu       $t1, $v0, 0x7F
    ctx->pc = 0x1816b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 127));
label_1816b8:
    // 0x1816b8: 0x5210003  bgez        $t1, . + 4 + (0x3 << 2)
label_1816bc:
    if (ctx->pc == 0x1816BCu) {
        ctx->pc = 0x1816BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1816B8u;
        // 0x1816bc: 0x911c3  sra         $v0, $t1, 7 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 9), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1816C0u;
        goto label_1816c0;
    }
    ctx->pc = 0x1816B8u;
    {
        const bool branch_taken_0x1816b8 = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x1816BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1816B8u;
        // 0x1816bc: 0x911c3  sra         $v0, $t1, 7 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 9), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1816b8) {
            ctx->pc = 0x1816C8u;
            goto label_1816c8;
        }
    }
    ctx->pc = 0x1816C0u;
label_1816c0:
    // 0x1816c0: 0x2522007f  addiu       $v0, $t1, 0x7F
    ctx->pc = 0x1816c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 127));
label_1816c4:
    // 0x1816c4: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x1816c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
label_1816c8:
    // 0x1816c8: 0x249c0  sll         $t1, $v0, 7
    ctx->pc = 0x1816c8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_1816cc:
    // 0x1816cc: 0x5210003  bgez        $t1, . + 4 + (0x3 << 2)
label_1816d0:
    if (ctx->pc == 0x1816D0u) {
        ctx->pc = 0x1816D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1816CCu;
        // 0x1816d0: 0x91183  sra         $v0, $t1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 9), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1816D4u;
        goto label_1816d4;
    }
    ctx->pc = 0x1816CCu;
    {
        const bool branch_taken_0x1816cc = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x1816D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1816CCu;
        // 0x1816d0: 0x91183  sra         $v0, $t1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 9), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1816cc) {
            ctx->pc = 0x1816DCu;
            goto label_1816dc;
        }
    }
    ctx->pc = 0x1816D4u;
label_1816d4:
    // 0x1816d4: 0x2522003f  addiu       $v0, $t1, 0x3F
    ctx->pc = 0x1816d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 63));
label_1816d8:
    // 0x1816d8: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x1816d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
label_1816dc:
    // 0x1816dc: 0x2543c  dsll32      $t2, $v0, 16
    ctx->pc = 0x1816dcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) << (32 + 16));
label_1816e0:
    // 0x1816e0: 0x10000024  b           . + 4 + (0x24 << 2)
label_1816e4:
    if (ctx->pc == 0x1816E4u) {
        ctx->pc = 0x1816E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1816E0u;
        // 0x1816e4: 0xa543f  dsra32      $t2, $t2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1816E8u;
        goto label_1816e8;
    }
    ctx->pc = 0x1816E0u;
    {
        const bool branch_taken_0x1816e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1816E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1816E0u;
        // 0x1816e4: 0xa543f  dsra32      $t2, $t2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1816e0) {
            ctx->pc = 0x181774u;
            goto label_181774;
        }
    }
    ctx->pc = 0x1816E8u;
label_1816e8:
    // 0x1816e8: 0x14820011  bne         $a0, $v0, . + 4 + (0x11 << 2)
label_1816ec:
    if (ctx->pc == 0x1816ECu) {
        ctx->pc = 0x1816F0u;
        goto label_1816f0;
    }
    ctx->pc = 0x1816E8u;
    {
        const bool branch_taken_0x1816e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1816e8) {
            ctx->pc = 0x181730u;
            goto label_181730;
        }
    }
    ctx->pc = 0x1816F0u;
label_1816f0:
    // 0x1816f0: 0x6143c  dsll32      $v0, $a2, 16
    ctx->pc = 0x1816f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 16));
label_1816f4:
    // 0x1816f4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1816f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1816f8:
    // 0x1816f8: 0x2449003f  addiu       $t1, $v0, 0x3F
    ctx->pc = 0x1816f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
label_1816fc:
    // 0x1816fc: 0x5210003  bgez        $t1, . + 4 + (0x3 << 2)
label_181700:
    if (ctx->pc == 0x181700u) {
        ctx->pc = 0x181700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1816FCu;
        // 0x181700: 0x91183  sra         $v0, $t1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 9), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181704u;
        goto label_181704;
    }
    ctx->pc = 0x1816FCu;
    {
        const bool branch_taken_0x1816fc = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x181700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1816FCu;
        // 0x181700: 0x91183  sra         $v0, $t1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 9), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1816fc) {
            ctx->pc = 0x18170Cu;
            goto label_18170c;
        }
    }
    ctx->pc = 0x181704u;
label_181704:
    // 0x181704: 0x2522003f  addiu       $v0, $t1, 0x3F
    ctx->pc = 0x181704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 63));
label_181708:
    // 0x181708: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x181708u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
label_18170c:
    // 0x18170c: 0x24980  sll         $t1, $v0, 6
    ctx->pc = 0x18170cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_181710:
    // 0x181710: 0x211bc  dsll32      $v0, $v0, 6
    ctx->pc = 0x181710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 6));
label_181714:
    // 0x181714: 0x5210003  bgez        $t1, . + 4 + (0x3 << 2)
label_181718:
    if (ctx->pc == 0x181718u) {
        ctx->pc = 0x181718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181714u;
        // 0x181718: 0x211bf  dsra32      $v0, $v0, 6 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18171Cu;
        goto label_18171c;
    }
    ctx->pc = 0x181714u;
    {
        const bool branch_taken_0x181714 = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x181718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181714u;
        // 0x181718: 0x211bf  dsra32      $v0, $v0, 6 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181714) {
            ctx->pc = 0x181724u;
            goto label_181724;
        }
    }
    ctx->pc = 0x18171Cu;
label_18171c:
    // 0x18171c: 0x2522003f  addiu       $v0, $t1, 0x3F
    ctx->pc = 0x18171cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 63));
label_181720:
    // 0x181720: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x181720u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
label_181724:
    // 0x181724: 0x2543c  dsll32      $t2, $v0, 16
    ctx->pc = 0x181724u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) << (32 + 16));
label_181728:
    // 0x181728: 0x10000012  b           . + 4 + (0x12 << 2)
label_18172c:
    if (ctx->pc == 0x18172Cu) {
        ctx->pc = 0x18172Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181728u;
        // 0x18172c: 0xa543f  dsra32      $t2, $t2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181730u;
        goto label_181730;
    }
    ctx->pc = 0x181728u;
    {
        const bool branch_taken_0x181728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18172Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181728u;
        // 0x18172c: 0xa543f  dsra32      $t2, $t2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181728) {
            ctx->pc = 0x181774u;
            goto label_181774;
        }
    }
    ctx->pc = 0x181730u;
label_181730:
    // 0x181730: 0x14800010  bnez        $a0, . + 4 + (0x10 << 2)
label_181734:
    if (ctx->pc == 0x181734u) {
        ctx->pc = 0x181734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181730u;
        // 0x181734: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181738u;
        goto label_181738;
    }
    ctx->pc = 0x181730u;
    {
        const bool branch_taken_0x181730 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x181734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181730u;
        // 0x181734: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181730) {
            ctx->pc = 0x181774u;
            goto label_181774;
        }
    }
    ctx->pc = 0x181738u;
label_181738:
    // 0x181738: 0x6143c  dsll32      $v0, $a2, 16
    ctx->pc = 0x181738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 16));
label_18173c:
    // 0x18173c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x18173cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_181740:
    // 0x181740: 0x2449003f  addiu       $t1, $v0, 0x3F
    ctx->pc = 0x181740u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
label_181744:
    // 0x181744: 0x5210003  bgez        $t1, . + 4 + (0x3 << 2)
label_181748:
    if (ctx->pc == 0x181748u) {
        ctx->pc = 0x181748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181744u;
        // 0x181748: 0x91183  sra         $v0, $t1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 9), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18174Cu;
        goto label_18174c;
    }
    ctx->pc = 0x181744u;
    {
        const bool branch_taken_0x181744 = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x181748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181744u;
        // 0x181748: 0x91183  sra         $v0, $t1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 9), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181744) {
            ctx->pc = 0x181754u;
            goto label_181754;
        }
    }
    ctx->pc = 0x18174Cu;
label_18174c:
    // 0x18174c: 0x2522003f  addiu       $v0, $t1, 0x3F
    ctx->pc = 0x18174cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 63));
label_181750:
    // 0x181750: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x181750u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
label_181754:
    // 0x181754: 0x24980  sll         $t1, $v0, 6
    ctx->pc = 0x181754u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_181758:
    // 0x181758: 0x211bc  dsll32      $v0, $v0, 6
    ctx->pc = 0x181758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 6));
label_18175c:
    // 0x18175c: 0x5210003  bgez        $t1, . + 4 + (0x3 << 2)
label_181760:
    if (ctx->pc == 0x181760u) {
        ctx->pc = 0x181760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18175Cu;
        // 0x181760: 0x211bf  dsra32      $v0, $v0, 6 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181764u;
        goto label_181764;
    }
    ctx->pc = 0x18175Cu;
    {
        const bool branch_taken_0x18175c = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x181760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18175Cu;
        // 0x181760: 0x211bf  dsra32      $v0, $v0, 6 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18175c) {
            ctx->pc = 0x18176Cu;
            goto label_18176c;
        }
    }
    ctx->pc = 0x181764u;
label_181764:
    // 0x181764: 0x2522003f  addiu       $v0, $t1, 0x3F
    ctx->pc = 0x181764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 63));
label_181768:
    // 0x181768: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x181768u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
label_18176c:
    // 0x18176c: 0x2543c  dsll32      $t2, $v0, 16
    ctx->pc = 0x18176cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) << (32 + 16));
label_181770:
    // 0x181770: 0xa543f  dsra32      $t2, $t2, 16
    ctx->pc = 0x181770u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
label_181774:
    // 0x181774: 0x64c3c  dsll32      $t1, $a2, 16
    ctx->pc = 0x181774u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) << (32 + 16));
label_181778:
    // 0x181778: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x181778u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18177c:
    // 0x18177c: 0x94c3f  dsra32      $t1, $t1, 16
    ctx->pc = 0x18177cu;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
label_181780:
    // 0x181780: 0x1000000b  b           . + 4 + (0xB << 2)
label_181784:
    if (ctx->pc == 0x181784u) {
        ctx->pc = 0x181784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181780u;
        // 0x181784: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181788u;
        goto label_181788;
    }
    ctx->pc = 0x181780u;
    {
        const bool branch_taken_0x181780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181780u;
        // 0x181784: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181780) {
            ctx->pc = 0x1817B0u;
            goto label_1817b0;
        }
    }
    ctx->pc = 0x181788u;
label_181788:
    // 0x181788: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x181788u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
label_18178c:
    // 0x18178c: 0xc9082a  slt         $at, $a2, $t1
    ctx->pc = 0x18178cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_181790:
    // 0x181790: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
label_181794:
    if (ctx->pc == 0x181794u) {
        ctx->pc = 0x181798u;
        goto label_181798;
    }
    ctx->pc = 0x181790u;
    {
        const bool branch_taken_0x181790 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x181790) {
            ctx->pc = 0x1817C4u;
            goto label_1817c4;
        }
    }
    ctx->pc = 0x181798u;
label_181798:
    // 0x181798: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x181798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_18179c:
    // 0x18179c: 0xb3040  sll         $a2, $t3, 1
    ctx->pc = 0x18179cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
label_1817a0:
    // 0x1817a0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1817a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_1817a4:
    // 0x1817a4: 0x65c3c  dsll32      $t3, $a2, 16
    ctx->pc = 0x1817a4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 6) << (32 + 16));
label_1817a8:
    // 0x1817a8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1817a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1817ac:
    // 0x1817ac: 0xb5c3f  dsra32      $t3, $t3, 16
    ctx->pc = 0x1817acu;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 16));
label_1817b0:
    // 0x1817b0: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x1817b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
label_1817b4:
    // 0x1817b4: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x1817b4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
label_1817b8:
    // 0x1817b8: 0x28c6000a  slti        $a2, $a2, 0xA
    ctx->pc = 0x1817b8u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)10) ? 1 : 0);
label_1817bc:
    // 0x1817bc: 0x14c0fff2  bnez        $a2, . + 4 + (-0xE << 2)
label_1817c0:
    if (ctx->pc == 0x1817C0u) {
        ctx->pc = 0x1817C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1817BCu;
        // 0x1817c0: 0xb343c  dsll32      $a2, $t3, 16 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) << (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1817C4u;
        goto label_1817c4;
    }
    ctx->pc = 0x1817BCu;
    {
        const bool branch_taken_0x1817bc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1817C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1817BCu;
        // 0x1817c0: 0xb343c  dsll32      $a2, $t3, 16 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1817bc) {
            ctx->pc = 0x181788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_181788;
        }
    }
    ctx->pc = 0x1817C4u;
label_1817c4:
    // 0x1817c4: 0x0  nop
    ctx->pc = 0x1817c4u;
    // NOP
label_1817c8:
    // 0x1817c8: 0x74c3c  dsll32      $t1, $a3, 16
    ctx->pc = 0x1817c8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) << (32 + 16));
label_1817cc:
    // 0x1817cc: 0x94c3f  dsra32      $t1, $t1, 16
    ctx->pc = 0x1817ccu;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
label_1817d0:
    // 0x1817d0: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x1817d0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1817d4:
    // 0x1817d4: 0x1000000b  b           . + 4 + (0xB << 2)
label_1817d8:
    if (ctx->pc == 0x1817D8u) {
        ctx->pc = 0x1817D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1817D4u;
        // 0x1817d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1817DCu;
        goto label_1817dc;
    }
    ctx->pc = 0x1817D4u;
    {
        const bool branch_taken_0x1817d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1817D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1817D4u;
        // 0x1817d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1817d4) {
            ctx->pc = 0x181804u;
            goto label_181804;
        }
    }
    ctx->pc = 0x1817DCu;
label_1817dc:
    // 0x1817dc: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x1817dcu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
label_1817e0:
    // 0x1817e0: 0xc9082a  slt         $at, $a2, $t1
    ctx->pc = 0x1817e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_1817e4:
    // 0x1817e4: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_1817e8:
    if (ctx->pc == 0x1817E8u) {
        ctx->pc = 0x1817ECu;
        goto label_1817ec;
    }
    ctx->pc = 0x1817E4u;
    {
        const bool branch_taken_0x1817e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1817e4) {
            ctx->pc = 0x18181Cu;
            goto label_18181c;
        }
    }
    ctx->pc = 0x1817ECu;
label_1817ec:
    // 0x1817ec: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1817ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1817f0:
    // 0x1817f0: 0xb3040  sll         $a2, $t3, 1
    ctx->pc = 0x1817f0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
label_1817f4:
    // 0x1817f4: 0x73c3c  dsll32      $a3, $a3, 16
    ctx->pc = 0x1817f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 16));
label_1817f8:
    // 0x1817f8: 0x65c3c  dsll32      $t3, $a2, 16
    ctx->pc = 0x1817f8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 6) << (32 + 16));
label_1817fc:
    // 0x1817fc: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x1817fcu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
label_181800:
    // 0x181800: 0xb5c3f  dsra32      $t3, $t3, 16
    ctx->pc = 0x181800u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 16));
label_181804:
    // 0x181804: 0x0  nop
    ctx->pc = 0x181804u;
    // NOP
label_181808:
    // 0x181808: 0x7343c  dsll32      $a2, $a3, 16
    ctx->pc = 0x181808u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 16));
label_18180c:
    // 0x18180c: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x18180cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
label_181810:
    // 0x181810: 0x28c6000a  slti        $a2, $a2, 0xA
    ctx->pc = 0x181810u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)10) ? 1 : 0);
label_181814:
    // 0x181814: 0x14c0fff1  bnez        $a2, . + 4 + (-0xF << 2)
label_181818:
    if (ctx->pc == 0x181818u) {
        ctx->pc = 0x181818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181814u;
        // 0x181818: 0xb343c  dsll32      $a2, $t3, 16 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) << (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18181Cu;
        goto label_18181c;
    }
    ctx->pc = 0x181814u;
    {
        const bool branch_taken_0x181814 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x181818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181814u;
        // 0x181818: 0xb343c  dsll32      $a2, $t3, 16 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181814) {
            ctx->pc = 0x1817DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1817dc;
        }
    }
    ctx->pc = 0x18181Cu;
label_18181c:
    // 0x18181c: 0x0  nop
    ctx->pc = 0x18181cu;
    // NOP
label_181820:
    // 0x181820: 0x5343c  dsll32      $a2, $a1, 16
    ctx->pc = 0x181820u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 16));
label_181824:
    // 0x181824: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x181824u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
label_181828:
    // 0x181828: 0x4c00007  bltz        $a2, . + 4 + (0x7 << 2)
label_18182c:
    if (ctx->pc == 0x18182Cu) {
        ctx->pc = 0x18182Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181828u;
        // 0x18182c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181830u;
        goto label_181830;
    }
    ctx->pc = 0x181828u;
    {
        const bool branch_taken_0x181828 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x18182Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181828u;
        // 0x18182c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181828) {
            ctx->pc = 0x181848u;
            goto label_181848;
        }
    }
    ctx->pc = 0x181830u;
label_181830:
    // 0x181830: 0x28c100b8  slti        $at, $a2, 0xB8
    ctx->pc = 0x181830u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)184) ? 1 : 0);
label_181834:
    // 0x181834: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_181838:
    if (ctx->pc == 0x181838u) {
        ctx->pc = 0x181838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181834u;
        // 0x181838: 0x28c500b8  slti        $a1, $a2, 0xB8 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)184) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18183Cu;
        goto label_18183c;
    }
    ctx->pc = 0x181834u;
    {
        const bool branch_taken_0x181834 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x181838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181834u;
        // 0x181838: 0x28c500b8  slti        $a1, $a2, 0xB8 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)184) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x181834) {
            ctx->pc = 0x18184Cu;
            goto label_18184c;
        }
    }
    ctx->pc = 0x18183Cu;
label_18183c:
    // 0x18183c: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x18183cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_181840:
    // 0x181840: 0x10000007  b           . + 4 + (0x7 << 2)
label_181844:
    if (ctx->pc == 0x181844u) {
        ctx->pc = 0x181844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181840u;
        // 0x181844: 0x24a93ba0  addiu       $t1, $a1, 0x3BA0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 15264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181848u;
        goto label_181848;
    }
    ctx->pc = 0x181840u;
    {
        const bool branch_taken_0x181840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181840u;
        // 0x181844: 0x24a93ba0  addiu       $t1, $a1, 0x3BA0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 15264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181840) {
            ctx->pc = 0x181860u;
            goto label_181860;
        }
    }
    ctx->pc = 0x181848u;
label_181848:
    // 0x181848: 0x28c500b8  slti        $a1, $a2, 0xB8
    ctx->pc = 0x181848u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)184) ? 1 : 0);
label_18184c:
    // 0x18184c: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
label_181850:
    if (ctx->pc == 0x181850u) {
        ctx->pc = 0x181850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18184Cu;
        // 0x181850: 0x28c10238  slti        $at, $a2, 0x238 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)568) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x181854u;
        goto label_181854;
    }
    ctx->pc = 0x18184Cu;
    {
        const bool branch_taken_0x18184c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x181850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18184Cu;
        // 0x181850: 0x28c10238  slti        $at, $a2, 0x238 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)568) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18184c) {
            ctx->pc = 0x181860u;
            goto label_181860;
        }
    }
    ctx->pc = 0x181854u;
label_181854:
    // 0x181854: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_181858:
    if (ctx->pc == 0x181858u) {
        ctx->pc = 0x18185Cu;
        goto label_18185c;
    }
    ctx->pc = 0x181854u;
    {
        const bool branch_taken_0x181854 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x181854) {
            ctx->pc = 0x181860u;
            goto label_181860;
        }
    }
    ctx->pc = 0x18185Cu;
label_18185c:
    // 0x18185c: 0x24c93dc8  addiu       $t1, $a2, 0x3DC8
    ctx->pc = 0x18185cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 15816));
label_181860:
    // 0x181860: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x181860u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
label_181864:
    // 0x181864: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x181864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_181868:
    // 0x181868: 0xa1c3c  dsll32      $v1, $t2, 16
    ctx->pc = 0x181868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) << (32 + 16));
label_18186c:
    // 0x18186c: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x18186cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
label_181870:
    // 0x181870: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x181870u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_181874:
    // 0x181874: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x181874u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_181878:
    // 0x181878: 0x32bb8  dsll        $a1, $v1, 14
    ctx->pc = 0x181878u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << 14);
label_18187c:
    // 0x18187c: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x18187cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
label_181880:
    // 0x181880: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x181880u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_181884:
    // 0x181884: 0xc52025  or          $a0, $a2, $a1
    ctx->pc = 0x181884u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_181888:
    // 0x181888: 0x31d38  dsll        $v1, $v1, 20
    ctx->pc = 0x181888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 20);
label_18188c:
    // 0x18188c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x18188cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_181890:
    // 0x181890: 0x21eb8  dsll        $v1, $v0, 26
    ctx->pc = 0x181890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 26);
label_181894:
    // 0x181894: 0x7143c  dsll32      $v0, $a3, 16
    ctx->pc = 0x181894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 16));
label_181898:
    // 0x181898: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x181898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_18189c:
    // 0x18189c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x18189cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1818a0:
    // 0x1818a0: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x1818a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
label_1818a4:
    // 0x1818a4: 0x433025  or          $a2, $v0, $v1
    ctx->pc = 0x1818a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1818a8:
    // 0x1818a8: 0x9143c  dsll32      $v0, $t1, 16
    ctx->pc = 0x1818a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) << (32 + 16));
label_1818ac:
    // 0x1818ac: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1818acu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1818b0:
    // 0x1818b0: 0x2217c  dsll32      $a0, $v0, 5
    ctx->pc = 0x1818b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 5));
label_1818b4:
    // 0x1818b4: 0x8143c  dsll32      $v0, $t0, 16
    ctx->pc = 0x1818b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 16));
label_1818b8:
    // 0x1818b8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1818b8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1818bc:
    // 0x1818bc: 0x21cfc  dsll32      $v1, $v0, 19
    ctx->pc = 0x1818bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 19));
label_1818c0:
    // 0x1818c0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1818c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1818c4:
    // 0x1818c4: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x1818c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
label_1818c8:
    // 0x1818c8: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x1818c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_1818cc:
    // 0x1818cc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1818ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_1818d0:
    // 0x1818d0: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1818d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_1818d4:
    // 0x1818d4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1818d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1818d8:
    // 0x1818d8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1818d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1818dc:
    // 0x1818dc: 0x3e00008  jr          $ra
label_1818e0:
    if (ctx->pc == 0x1818E0u) {
        ctx->pc = 0x1818E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1818DCu;
        // 0x1818e0: 0x621025  or          $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1818E4u;
        goto label_1818e4;
    }
    ctx->pc = 0x1818DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1818E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1818DCu;
        // 0x1818e0: 0x621025  or          $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1818DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1818E4u;
label_1818e4:
    // 0x1818e4: 0x0  nop
    ctx->pc = 0x1818e4u;
    // NOP
label_1818e8:
    // 0x1818e8: 0x0  nop
    ctx->pc = 0x1818e8u;
    // NOP
label_1818ec:
    // 0x1818ec: 0x0  nop
    ctx->pc = 0x1818ecu;
    // NOP
label_1818f0:
    // 0x1818f0: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x1818f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
label_1818f4:
    // 0x1818f4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1818f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_1818f8:
    // 0x1818f8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1818f8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_1818fc:
    // 0x1818fc: 0x3c021fff  lui         $v0, 0x1FFF
    ctx->pc = 0x1818fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8191 << 16));
label_181900:
    // 0x181900: 0x32f7c  dsll32      $a1, $v1, 29
    ctx->pc = 0x181900u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 29));
label_181904:
    // 0x181904: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x181904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_181908:
    // 0x181908: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x181908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_18190c:
    // 0x18190c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x18190cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_181910:
    // 0x181910: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x181910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_181914:
    // 0x181914: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x181914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_181918:
    // 0x181918: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x181918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_18191c:
    // 0x18191c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x18191cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_181920:
    // 0x181920: 0x3e00008  jr          $ra
label_181924:
    if (ctx->pc == 0x181924u) {
        ctx->pc = 0x181924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181920u;
        // 0x181924: 0x451025  or          $v0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181928u;
        goto label_181928;
    }
    ctx->pc = 0x181920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181920u;
        // 0x181924: 0x451025  or          $v0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181928u;
label_181928:
    // 0x181928: 0x0  nop
    ctx->pc = 0x181928u;
    // NOP
label_18192c:
    // 0x18192c: 0x0  nop
    ctx->pc = 0x18192cu;
    // NOP
label_181930:
    // 0x181930: 0x4a00007  bltz        $a1, . + 4 + (0x7 << 2)
label_181934:
    if (ctx->pc == 0x181934u) {
        ctx->pc = 0x181934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181930u;
        // 0x181934: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181938u;
        goto label_181938;
    }
    ctx->pc = 0x181930u;
    {
        const bool branch_taken_0x181930 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x181934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181930u;
        // 0x181934: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181930) {
            ctx->pc = 0x181950u;
            goto label_181950;
        }
    }
    ctx->pc = 0x181938u;
label_181938:
    // 0x181938: 0x28a100b8  slti        $at, $a1, 0xB8
    ctx->pc = 0x181938u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)184) ? 1 : 0);
label_18193c:
    // 0x18193c: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_181940:
    if (ctx->pc == 0x181940u) {
        ctx->pc = 0x181940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18193Cu;
        // 0x181940: 0x28a200b8  slti        $v0, $a1, 0xB8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)184) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x181944u;
        goto label_181944;
    }
    ctx->pc = 0x18193Cu;
    {
        const bool branch_taken_0x18193c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x181940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18193Cu;
        // 0x181940: 0x28a200b8  slti        $v0, $a1, 0xB8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)184) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18193c) {
            ctx->pc = 0x181954u;
            goto label_181954;
        }
    }
    ctx->pc = 0x181944u;
label_181944:
    // 0x181944: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x181944u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_181948:
    // 0x181948: 0x10000008  b           . + 4 + (0x8 << 2)
label_18194c:
    if (ctx->pc == 0x18194Cu) {
        ctx->pc = 0x18194Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181948u;
        // 0x18194c: 0x24433ba0  addiu       $v1, $v0, 0x3BA0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181950u;
        goto label_181950;
    }
    ctx->pc = 0x181948u;
    {
        const bool branch_taken_0x181948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18194Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181948u;
        // 0x18194c: 0x24433ba0  addiu       $v1, $v0, 0x3BA0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181948) {
            ctx->pc = 0x18196Cu;
            goto label_18196c;
        }
    }
    ctx->pc = 0x181950u;
label_181950:
    // 0x181950: 0x28a200b8  slti        $v0, $a1, 0xB8
    ctx->pc = 0x181950u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)184) ? 1 : 0);
label_181954:
    // 0x181954: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_181958:
    if (ctx->pc == 0x181958u) {
        ctx->pc = 0x181958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181954u;
        // 0x181958: 0x3143c  dsll32      $v0, $v1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18195Cu;
        goto label_18195c;
    }
    ctx->pc = 0x181954u;
    {
        const bool branch_taken_0x181954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x181958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181954u;
        // 0x181958: 0x3143c  dsll32      $v0, $v1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181954) {
            ctx->pc = 0x181970u;
            goto label_181970;
        }
    }
    ctx->pc = 0x18195Cu;
label_18195c:
    // 0x18195c: 0x28a10238  slti        $at, $a1, 0x238
    ctx->pc = 0x18195cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)568) ? 1 : 0);
label_181960:
    // 0x181960: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_181964:
    if (ctx->pc == 0x181964u) {
        ctx->pc = 0x181968u;
        goto label_181968;
    }
    ctx->pc = 0x181960u;
    {
        const bool branch_taken_0x181960 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x181960) {
            ctx->pc = 0x18196Cu;
            goto label_18196c;
        }
    }
    ctx->pc = 0x181968u;
label_181968:
    // 0x181968: 0x24a33dc8  addiu       $v1, $a1, 0x3DC8
    ctx->pc = 0x181968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 15816));
label_18196c:
    // 0x18196c: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x18196cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
label_181970:
    // 0x181970: 0x3c03fff8  lui         $v1, 0xFFF8
    ctx->pc = 0x181970u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65528 << 16));
label_181974:
    // 0x181974: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x181974u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_181978:
    // 0x181978: 0x3463001f  ori         $v1, $v1, 0x1F
    ctx->pc = 0x181978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)31);
label_18197c:
    // 0x18197c: 0x2117c  dsll32      $v0, $v0, 5
    ctx->pc = 0x18197cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 5));
label_181980:
    // 0x181980: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x181980u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
label_181984:
    // 0x181984: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x181984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_181988:
    // 0x181988: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x181988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_18198c:
    // 0x18198c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x18198cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_181990:
    // 0x181990: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x181990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_181994:
    // 0x181994: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x181994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_181998:
    // 0x181998: 0x3e00008  jr          $ra
label_18199c:
    if (ctx->pc == 0x18199Cu) {
        ctx->pc = 0x18199Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181998u;
        // 0x18199c: 0x621025  or          $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1819A0u;
        goto label_1819a0;
    }
    ctx->pc = 0x181998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18199Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181998u;
        // 0x18199c: 0x621025  or          $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1819A0u;
label_1819a0:
    // 0x1819a0: 0x4800007  bltz        $a0, . + 4 + (0x7 << 2)
label_1819a4:
    if (ctx->pc == 0x1819A4u) {
        ctx->pc = 0x1819A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1819A0u;
        // 0x1819a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1819A8u;
        goto label_1819a8;
    }
    ctx->pc = 0x1819A0u;
    {
        const bool branch_taken_0x1819a0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1819A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1819A0u;
        // 0x1819a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1819a0) {
            ctx->pc = 0x1819C0u;
            goto label_1819c0;
        }
    }
    ctx->pc = 0x1819A8u;
label_1819a8:
    // 0x1819a8: 0x288100b8  slti        $at, $a0, 0xB8
    ctx->pc = 0x1819a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)184) ? 1 : 0);
label_1819ac:
    // 0x1819ac: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_1819b0:
    if (ctx->pc == 0x1819B0u) {
        ctx->pc = 0x1819B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1819ACu;
        // 0x1819b0: 0x288300b8  slti        $v1, $a0, 0xB8 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)184) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1819B4u;
        goto label_1819b4;
    }
    ctx->pc = 0x1819ACu;
    {
        const bool branch_taken_0x1819ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1819B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1819ACu;
        // 0x1819b0: 0x288300b8  slti        $v1, $a0, 0xB8 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)184) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1819ac) {
            ctx->pc = 0x1819C4u;
            goto label_1819c4;
        }
    }
    ctx->pc = 0x1819B4u;
label_1819b4:
    // 0x1819b4: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1819b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1819b8:
    // 0x1819b8: 0x10000007  b           . + 4 + (0x7 << 2)
label_1819bc:
    if (ctx->pc == 0x1819BCu) {
        ctx->pc = 0x1819BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1819B8u;
        // 0x1819bc: 0x24423ba0  addiu       $v0, $v0, 0x3BA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1819C0u;
        goto label_1819c0;
    }
    ctx->pc = 0x1819B8u;
    {
        const bool branch_taken_0x1819b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1819BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1819B8u;
        // 0x1819bc: 0x24423ba0  addiu       $v0, $v0, 0x3BA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1819b8) {
            ctx->pc = 0x1819D8u;
            goto label_1819d8;
        }
    }
    ctx->pc = 0x1819C0u;
label_1819c0:
    // 0x1819c0: 0x288300b8  slti        $v1, $a0, 0xB8
    ctx->pc = 0x1819c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)184) ? 1 : 0);
label_1819c4:
    // 0x1819c4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_1819c8:
    if (ctx->pc == 0x1819C8u) {
        ctx->pc = 0x1819C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1819C4u;
        // 0x1819c8: 0x28810238  slti        $at, $a0, 0x238 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)568) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1819CCu;
        goto label_1819cc;
    }
    ctx->pc = 0x1819C4u;
    {
        const bool branch_taken_0x1819c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1819C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1819C4u;
        // 0x1819c8: 0x28810238  slti        $at, $a0, 0x238 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)568) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1819c4) {
            ctx->pc = 0x1819D8u;
            goto label_1819d8;
        }
    }
    ctx->pc = 0x1819CCu;
label_1819cc:
    // 0x1819cc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1819d0:
    if (ctx->pc == 0x1819D0u) {
        ctx->pc = 0x1819D4u;
        goto label_1819d4;
    }
    ctx->pc = 0x1819CCu;
    {
        const bool branch_taken_0x1819cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1819cc) {
            ctx->pc = 0x1819D8u;
            goto label_1819d8;
        }
    }
    ctx->pc = 0x1819D4u;
label_1819d4:
    // 0x1819d4: 0x24823dc8  addiu       $v0, $a0, 0x3DC8
    ctx->pc = 0x1819d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 15816));
label_1819d8:
    // 0x1819d8: 0x3e00008  jr          $ra
label_1819dc:
    if (ctx->pc == 0x1819DCu) {
        ctx->pc = 0x1819E0u;
        goto label_1819e0;
    }
    ctx->pc = 0x1819D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1819D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1819E0u;
label_1819e0:
    // 0x1819e0: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1819e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_1819e4:
    // 0x1819e4: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1819e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1819e8:
    // 0x1819e8: 0x24422a30  addiu       $v0, $v0, 0x2A30
    ctx->pc = 0x1819e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10800));
label_1819ec:
    // 0x1819ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1819ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1819f0:
    // 0x1819f0: 0x3e00008  jr          $ra
label_1819f4:
    if (ctx->pc == 0x1819F4u) {
        ctx->pc = 0x1819F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1819F0u;
        // 0x1819f4: 0x84420000  lh          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1819F8u;
        goto label_1819f8;
    }
    ctx->pc = 0x1819F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1819F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1819F0u;
        // 0x1819f4: 0x84420000  lh          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1819F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1819F8u;
label_1819f8:
    // 0x1819f8: 0x0  nop
    ctx->pc = 0x1819f8u;
    // NOP
label_1819fc:
    // 0x1819fc: 0x0  nop
    ctx->pc = 0x1819fcu;
    // NOP
label_181a00:
    // 0x181a00: 0x3e00008  jr          $ra
label_181a04:
    if (ctx->pc == 0x181A04u) {
        ctx->pc = 0x181A08u;
        goto label_181a08;
    }
    ctx->pc = 0x181A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181A00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181A08u;
label_181a08:
    // 0x181a08: 0x0  nop
    ctx->pc = 0x181a08u;
    // NOP
label_181a0c:
    // 0x181a0c: 0x0  nop
    ctx->pc = 0x181a0cu;
    // NOP
label_181a10:
    // 0x181a10: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x181a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_181a14:
    // 0x181a14: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x181a14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
label_181a18:
    // 0x181a18: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x181a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_181a1c:
    // 0x181a1c: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x181a1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
label_181a20:
    // 0x181a20: 0x2402ffe0  addiu       $v0, $zero, -0x20
    ctx->pc = 0x181a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
label_181a24:
    // 0x181a24: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x181a24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_181a28:
    // 0x181a28: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x181a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_181a2c:
    // 0x181a2c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x181a2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_181a30:
    // 0x181a30: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x181a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_181a34:
    // 0x181a34: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x181a34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_181a38:
    // 0x181a38: 0x3e00008  jr          $ra
label_181a3c:
    if (ctx->pc == 0x181A3Cu) {
        ctx->pc = 0x181A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181A38u;
        // 0x181a3c: 0x621025  or          $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181A40u;
        goto label_181a40;
    }
    ctx->pc = 0x181A38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181A38u;
        // 0x181a3c: 0x621025  or          $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181A38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181A40u;
label_181a40:
    // 0x181a40: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x181a40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
label_181a44:
    // 0x181a44: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x181a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_181a48:
    // 0x181a48: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x181a48u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_181a4c:
    // 0x181a4c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x181a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_181a50:
    // 0x181a50: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x181a50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_181a54:
    // 0x181a54: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x181a54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_181a58:
    // 0x181a58: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x181a58u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_181a5c:
    // 0x181a5c: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x181a60u;
    return;
}

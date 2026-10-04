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


void FUN_0014eba0_part104(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x181050u: goto label_181050;
        case 0x181054u: goto label_181054;
        case 0x181058u: goto label_181058;
        case 0x18105cu: goto label_18105c;
        case 0x181060u: goto label_181060;
        case 0x181064u: goto label_181064;
        case 0x181068u: goto label_181068;
        case 0x18106cu: goto label_18106c;
        case 0x181070u: goto label_181070;
        case 0x181074u: goto label_181074;
        case 0x181078u: goto label_181078;
        case 0x18107cu: goto label_18107c;
        case 0x181080u: goto label_181080;
        case 0x181084u: goto label_181084;
        case 0x181088u: goto label_181088;
        case 0x18108cu: goto label_18108c;
        case 0x181090u: goto label_181090;
        case 0x181094u: goto label_181094;
        case 0x181098u: goto label_181098;
        case 0x18109cu: goto label_18109c;
        case 0x1810a0u: goto label_1810a0;
        case 0x1810a4u: goto label_1810a4;
        case 0x1810a8u: goto label_1810a8;
        case 0x1810acu: goto label_1810ac;
        case 0x1810b0u: goto label_1810b0;
        case 0x1810b4u: goto label_1810b4;
        case 0x1810b8u: goto label_1810b8;
        case 0x1810bcu: goto label_1810bc;
        case 0x1810c0u: goto label_1810c0;
        case 0x1810c4u: goto label_1810c4;
        case 0x1810c8u: goto label_1810c8;
        case 0x1810ccu: goto label_1810cc;
        case 0x1810d0u: goto label_1810d0;
        case 0x1810d4u: goto label_1810d4;
        case 0x1810d8u: goto label_1810d8;
        case 0x1810dcu: goto label_1810dc;
        case 0x1810e0u: goto label_1810e0;
        case 0x1810e4u: goto label_1810e4;
        case 0x1810e8u: goto label_1810e8;
        case 0x1810ecu: goto label_1810ec;
        case 0x1810f0u: goto label_1810f0;
        case 0x1810f4u: goto label_1810f4;
        case 0x1810f8u: goto label_1810f8;
        case 0x1810fcu: goto label_1810fc;
        case 0x181100u: goto label_181100;
        case 0x181104u: goto label_181104;
        case 0x181108u: goto label_181108;
        case 0x18110cu: goto label_18110c;
        case 0x181110u: goto label_181110;
        case 0x181114u: goto label_181114;
        case 0x181118u: goto label_181118;
        case 0x18111cu: goto label_18111c;
        case 0x181120u: goto label_181120;
        case 0x181124u: goto label_181124;
        case 0x181128u: goto label_181128;
        case 0x18112cu: goto label_18112c;
        case 0x181130u: goto label_181130;
        case 0x181134u: goto label_181134;
        case 0x181138u: goto label_181138;
        case 0x18113cu: goto label_18113c;
        case 0x181140u: goto label_181140;
        case 0x181144u: goto label_181144;
        case 0x181148u: goto label_181148;
        case 0x18114cu: goto label_18114c;
        case 0x181150u: goto label_181150;
        case 0x181154u: goto label_181154;
        case 0x181158u: goto label_181158;
        case 0x18115cu: goto label_18115c;
        case 0x181160u: goto label_181160;
        case 0x181164u: goto label_181164;
        case 0x181168u: goto label_181168;
        case 0x18116cu: goto label_18116c;
        case 0x181170u: goto label_181170;
        case 0x181174u: goto label_181174;
        case 0x181178u: goto label_181178;
        case 0x18117cu: goto label_18117c;
        case 0x181180u: goto label_181180;
        case 0x181184u: goto label_181184;
        case 0x181188u: goto label_181188;
        case 0x18118cu: goto label_18118c;
        case 0x181190u: goto label_181190;
        case 0x181194u: goto label_181194;
        case 0x181198u: goto label_181198;
        case 0x18119cu: goto label_18119c;
        case 0x1811a0u: goto label_1811a0;
        case 0x1811a4u: goto label_1811a4;
        case 0x1811a8u: goto label_1811a8;
        case 0x1811acu: goto label_1811ac;
        case 0x1811b0u: goto label_1811b0;
        case 0x1811b4u: goto label_1811b4;
        case 0x1811b8u: goto label_1811b8;
        case 0x1811bcu: goto label_1811bc;
        case 0x1811c0u: goto label_1811c0;
        case 0x1811c4u: goto label_1811c4;
        case 0x1811c8u: goto label_1811c8;
        case 0x1811ccu: goto label_1811cc;
        case 0x1811d0u: goto label_1811d0;
        case 0x1811d4u: goto label_1811d4;
        case 0x1811d8u: goto label_1811d8;
        case 0x1811dcu: goto label_1811dc;
        case 0x1811e0u: goto label_1811e0;
        case 0x1811e4u: goto label_1811e4;
        case 0x1811e8u: goto label_1811e8;
        case 0x1811ecu: goto label_1811ec;
        case 0x1811f0u: goto label_1811f0;
        case 0x1811f4u: goto label_1811f4;
        case 0x1811f8u: goto label_1811f8;
        case 0x1811fcu: goto label_1811fc;
        case 0x181200u: goto label_181200;
        case 0x181204u: goto label_181204;
        case 0x181208u: goto label_181208;
        case 0x18120cu: goto label_18120c;
        case 0x181210u: goto label_181210;
        case 0x181214u: goto label_181214;
        case 0x181218u: goto label_181218;
        case 0x18121cu: goto label_18121c;
        case 0x181220u: goto label_181220;
        case 0x181224u: goto label_181224;
        case 0x181228u: goto label_181228;
        case 0x18122cu: goto label_18122c;
        case 0x181230u: goto label_181230;
        case 0x181234u: goto label_181234;
        case 0x181238u: goto label_181238;
        case 0x18123cu: goto label_18123c;
        case 0x181240u: goto label_181240;
        case 0x181244u: goto label_181244;
        case 0x181248u: goto label_181248;
        case 0x18124cu: goto label_18124c;
        case 0x181250u: goto label_181250;
        case 0x181254u: goto label_181254;
        case 0x181258u: goto label_181258;
        case 0x18125cu: goto label_18125c;
        case 0x181260u: goto label_181260;
        case 0x181264u: goto label_181264;
        case 0x181268u: goto label_181268;
        case 0x18126cu: goto label_18126c;
        case 0x181270u: goto label_181270;
        case 0x181274u: goto label_181274;
        case 0x181278u: goto label_181278;
        case 0x18127cu: goto label_18127c;
        case 0x181280u: goto label_181280;
        case 0x181284u: goto label_181284;
        case 0x181288u: goto label_181288;
        case 0x18128cu: goto label_18128c;
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
        default: return;
    }

label_181050:
    // 0x181050: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x181050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_181054:
    // 0x181054: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x181054u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_181058:
    // 0x181058: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x181058u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18105c:
    // 0x18105c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18105cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_181060:
    // 0x181060: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x181060u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_181064:
    // 0x181064: 0x3e00008  jr          $ra
label_181068:
    if (ctx->pc == 0x181068u) {
        ctx->pc = 0x181068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181064u;
        // 0x181068: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18106Cu;
        goto label_18106c;
    }
    ctx->pc = 0x181064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181064u;
        // 0x181068: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18106Cu;
label_18106c:
    // 0x18106c: 0x0  nop
    ctx->pc = 0x18106cu;
    // NOP
label_181070:
    // 0x181070: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x181070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_181074:
    // 0x181074: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x181074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_181078:
    // 0x181078: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x181078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_18107c:
    // 0x18107c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x18107cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_181080:
    // 0x181080: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x181080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_181084:
    // 0x181084: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x181084u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_181088:
    // 0x181088: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x181088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_18108c:
    // 0x18108c: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x18108cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_181090:
    // 0x181090: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x181090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_181094:
    // 0x181094: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x181094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_181098:
    // 0x181098: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x181098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_18109c:
    // 0x18109c: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x18109cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1810a0:
    // 0x1810a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1810a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1810a4:
    // 0x1810a4: 0x140982d  daddu       $s3, $t2, $zero
    ctx->pc = 0x1810a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_1810a8:
    // 0x1810a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1810a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1810ac:
    // 0x1810ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1810acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1810b0:
    // 0x1810b0: 0xafa400a8  sw          $a0, 0xA8($sp)
    ctx->pc = 0x1810b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 4));
label_1810b4:
    // 0x1810b4: 0x90a40013  lbu         $a0, 0x13($a1)
    ctx->pc = 0x1810b4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 19)));
label_1810b8:
    // 0x1810b8: 0x84b60014  lh          $s6, 0x14($a1)
    ctx->pc = 0x1810b8u;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 20)));
label_1810bc:
    // 0x1810bc: 0x84b50016  lh          $s5, 0x16($a1)
    ctx->pc = 0x1810bcu;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 22)));
label_1810c0:
    // 0x1810c0: 0x10820016  beq         $a0, $v0, . + 4 + (0x16 << 2)
label_1810c4:
    if (ctx->pc == 0x1810C4u) {
        ctx->pc = 0x1810C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1810C0u;
        // 0x1810c4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1810C8u;
        goto label_1810c8;
    }
    ctx->pc = 0x1810C0u;
    {
        const bool branch_taken_0x1810c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1810C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1810C0u;
        // 0x1810c4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1810c0) {
            ctx->pc = 0x18111Cu;
            goto label_18111c;
        }
    }
    ctx->pc = 0x1810C8u;
label_1810c8:
    // 0x1810c8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1810c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1810cc:
    // 0x1810cc: 0x10820011  beq         $a0, $v0, . + 4 + (0x11 << 2)
label_1810d0:
    if (ctx->pc == 0x1810D0u) {
        ctx->pc = 0x1810D4u;
        goto label_1810d4;
    }
    ctx->pc = 0x1810CCu;
    {
        const bool branch_taken_0x1810cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1810cc) {
            ctx->pc = 0x181114u;
            goto label_181114;
        }
    }
    ctx->pc = 0x1810D4u;
label_1810d4:
    // 0x1810d4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1810d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1810d8:
    // 0x1810d8: 0x10820012  beq         $a0, $v0, . + 4 + (0x12 << 2)
label_1810dc:
    if (ctx->pc == 0x1810DCu) {
        ctx->pc = 0x1810DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1810D8u;
        // 0x1810dc: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1810E0u;
        goto label_1810e0;
    }
    ctx->pc = 0x1810D8u;
    {
        const bool branch_taken_0x1810d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1810DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1810D8u;
        // 0x1810dc: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1810d8) {
            ctx->pc = 0x181124u;
            goto label_181124;
        }
    }
    ctx->pc = 0x1810E0u;
label_1810e0:
    // 0x1810e0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1810e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1810e4:
    // 0x1810e4: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
label_1810e8:
    if (ctx->pc == 0x1810E8u) {
        ctx->pc = 0x1810ECu;
        goto label_1810ec;
    }
    ctx->pc = 0x1810E4u;
    {
        const bool branch_taken_0x1810e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1810e4) {
            ctx->pc = 0x18110Cu;
            goto label_18110c;
        }
    }
    ctx->pc = 0x1810ECu;
label_1810ec:
    // 0x1810ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1810ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1810f0:
    // 0x1810f0: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
label_1810f4:
    if (ctx->pc == 0x1810F4u) {
        ctx->pc = 0x1810F8u;
        goto label_1810f8;
    }
    ctx->pc = 0x1810F0u;
    {
        const bool branch_taken_0x1810f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1810f0) {
            ctx->pc = 0x181100u;
            goto label_181100;
        }
    }
    ctx->pc = 0x1810F8u;
label_1810f8:
    // 0x1810f8: 0x10000009  b           . + 4 + (0x9 << 2)
label_1810fc:
    if (ctx->pc == 0x1810FCu) {
        ctx->pc = 0x181100u;
        goto label_181100;
    }
    ctx->pc = 0x1810F8u;
    {
        const bool branch_taken_0x1810f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1810f8) {
            ctx->pc = 0x181120u;
            goto label_181120;
        }
    }
    ctx->pc = 0x181100u;
label_181100:
    // 0x181100: 0x3843c  dsll32      $s0, $v1, 16
    ctx->pc = 0x181100u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) << (32 + 16));
label_181104:
    // 0x181104: 0x10000006  b           . + 4 + (0x6 << 2)
label_181108:
    if (ctx->pc == 0x181108u) {
        ctx->pc = 0x181108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181104u;
        // 0x181108: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18110Cu;
        goto label_18110c;
    }
    ctx->pc = 0x181104u;
    {
        const bool branch_taken_0x181104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181104u;
        // 0x181108: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181104) {
            ctx->pc = 0x181120u;
            goto label_181120;
        }
    }
    ctx->pc = 0x18110Cu;
label_18110c:
    // 0x18110c: 0x10000004  b           . + 4 + (0x4 << 2)
label_181110:
    if (ctx->pc == 0x181110u) {
        ctx->pc = 0x181110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18110Cu;
        // 0x181110: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181114u;
        goto label_181114;
    }
    ctx->pc = 0x18110Cu;
    {
        const bool branch_taken_0x18110c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18110Cu;
        // 0x181110: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18110c) {
            ctx->pc = 0x181120u;
            goto label_181120;
        }
    }
    ctx->pc = 0x181114u;
label_181114:
    // 0x181114: 0x10000002  b           . + 4 + (0x2 << 2)
label_181118:
    if (ctx->pc == 0x181118u) {
        ctx->pc = 0x181118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181114u;
        // 0x181118: 0x24100014  addiu       $s0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18111Cu;
        goto label_18111c;
    }
    ctx->pc = 0x181114u;
    {
        const bool branch_taken_0x181114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181114u;
        // 0x181118: 0x24100014  addiu       $s0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181114) {
            ctx->pc = 0x181120u;
            goto label_181120;
        }
    }
    ctx->pc = 0x18111Cu;
label_18111c:
    // 0x18111c: 0x24100013  addiu       $s0, $zero, 0x13
    ctx->pc = 0x18111cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_181120:
    // 0x181120: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x181120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_181124:
    // 0x181124: 0x15020004  bne         $t0, $v0, . + 4 + (0x4 << 2)
label_181128:
    if (ctx->pc == 0x181128u) {
        ctx->pc = 0x18112Cu;
        goto label_18112c;
    }
    ctx->pc = 0x181124u;
    {
        const bool branch_taken_0x181124 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x181124) {
            ctx->pc = 0x181138u;
            goto label_181138;
        }
    }
    ctx->pc = 0x18112Cu;
label_18112c:
    // 0x18112c: 0xa7b600ac  sh          $s6, 0xAC($sp)
    ctx->pc = 0x18112cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 172), (uint16_t)GPR_U32(ctx, 22));
label_181130:
    // 0x181130: 0x1000000c  b           . + 4 + (0xC << 2)
label_181134:
    if (ctx->pc == 0x181134u) {
        ctx->pc = 0x181134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181130u;
        // 0x181134: 0xa7b500ae  sh          $s5, 0xAE($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 174), (uint16_t)GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181138u;
        goto label_181138;
    }
    ctx->pc = 0x181130u;
    {
        const bool branch_taken_0x181130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181130u;
        // 0x181134: 0xa7b500ae  sh          $s5, 0xAE($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 174), (uint16_t)GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181130) {
            ctx->pc = 0x181164u;
            goto label_181164;
        }
    }
    ctx->pc = 0x181138u;
label_181138:
    // 0x181138: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x181138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_18113c:
    // 0x18113c: 0x820c0  sll         $a0, $t0, 3
    ctx->pc = 0x18113cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_181140:
    // 0x181140: 0x24422a34  addiu       $v0, $v0, 0x2A34
    ctx->pc = 0x181140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10804));
label_181144:
    // 0x181144: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x181144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_181148:
    // 0x181148: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x181148u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_18114c:
    // 0x18114c: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x18114cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
label_181150:
    // 0x181150: 0x24422a36  addiu       $v0, $v0, 0x2A36
    ctx->pc = 0x181150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10806));
label_181154:
    // 0x181154: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x181154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_181158:
    // 0x181158: 0xa7a300ac  sh          $v1, 0xAC($sp)
    ctx->pc = 0x181158u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 172), (uint16_t)GPR_U32(ctx, 3));
label_18115c:
    // 0x18115c: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x18115cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_181160:
    // 0x181160: 0xa7a200ae  sh          $v0, 0xAE($sp)
    ctx->pc = 0x181160u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 174), (uint16_t)GPR_U32(ctx, 2));
label_181164:
    // 0x181164: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_181168:
    // 0x181168: 0x27a500ac  addiu       $a1, $sp, 0xAC
    ctx->pc = 0x181168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_18116c:
    // 0x18116c: 0xc060690  jal         func_181A40
label_181170:
    if (ctx->pc == 0x181170u) {
        ctx->pc = 0x181170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18116Cu;
        // 0x181170: 0x27a600ae  addiu       $a2, $sp, 0xAE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 174));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181174u;
        goto label_181174;
    }
    ctx->pc = 0x18116Cu;
    SET_GPR_U32(ctx, 31, 0x181174u);
    ctx->pc = 0x181170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18116Cu;
    // 0x181170: 0x27a600ae  addiu       $a2, $sp, 0xAE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 174));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181A40u;
    { ctx->pc = 0x181a40; return; }
    ctx->pc = 0x181174u;
label_181174:
    // 0x181174: 0x2943c  dsll32      $s2, $v0, 16
    ctx->pc = 0x181174u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 16));
label_181178:
    // 0x181178: 0x87a200ac  lh          $v0, 0xAC($sp)
    ctx->pc = 0x181178u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 172)));
label_18117c:
    // 0x18117c: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x18117cu;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
label_181180:
    // 0x181180: 0x2443003f  addiu       $v1, $v0, 0x3F
    ctx->pc = 0x181180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
label_181184:
    // 0x181184: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_181188:
    if (ctx->pc == 0x181188u) {
        ctx->pc = 0x181188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181184u;
        // 0x181188: 0x31183  sra         $v0, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18118Cu;
        goto label_18118c;
    }
    ctx->pc = 0x181184u;
    {
        const bool branch_taken_0x181184 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x181188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181184u;
        // 0x181188: 0x31183  sra         $v0, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181184) {
            ctx->pc = 0x181194u;
            goto label_181194;
        }
    }
    ctx->pc = 0x18118Cu;
label_18118c:
    // 0x18118c: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x18118cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
label_181190:
    // 0x181190: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x181190u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
label_181194:
    // 0x181194: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x181194u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_181198:
    // 0x181198: 0x211bc  dsll32      $v0, $v0, 6
    ctx->pc = 0x181198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 6));
label_18119c:
    // 0x18119c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1811a0:
    if (ctx->pc == 0x1811A0u) {
        ctx->pc = 0x1811A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18119Cu;
        // 0x1811a0: 0x211bf  dsra32      $v0, $v0, 6 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1811A4u;
        goto label_1811a4;
    }
    ctx->pc = 0x18119Cu;
    {
        const bool branch_taken_0x18119c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1811A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18119Cu;
        // 0x1811a0: 0x211bf  dsra32      $v0, $v0, 6 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18119c) {
            ctx->pc = 0x1811ACu;
            goto label_1811ac;
        }
    }
    ctx->pc = 0x1811A4u;
label_1811a4:
    // 0x1811a4: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x1811a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
label_1811a8:
    // 0x1811a8: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x1811a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
label_1811ac:
    // 0x1811ac: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x1811acu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
label_1811b0:
    // 0x1811b0: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1811b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_1811b4:
    // 0x1811b4: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x1811b4u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
label_1811b8:
    // 0x1811b8: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x1811b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1811bc:
    // 0x1811bc: 0x3c0482d  daddu       $t1, $fp, $zero
    ctx->pc = 0x1811bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1811c0:
    // 0x1811c0: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x1811c0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1811c4:
    // 0x1811c4: 0x2a0582d  daddu       $t3, $s5, $zero
    ctx->pc = 0x1811c4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1811c8:
    // 0x1811c8: 0x24849880  addiu       $a0, $a0, -0x6780
    ctx->pc = 0x1811c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940800));
label_1811cc:
    // 0x1811cc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1811ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1811d0:
    // 0x1811d0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1811d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1811d4:
    // 0x1811d4: 0xc066506  jal         func_199418
label_1811d8:
    if (ctx->pc == 0x1811D8u) {
        ctx->pc = 0x1811D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1811D4u;
        // 0x1811d8: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1811DCu;
        goto label_1811dc;
    }
    ctx->pc = 0x1811D4u;
    SET_GPR_U32(ctx, 31, 0x1811DCu);
    ctx->pc = 0x1811D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1811D4u;
    // 0x1811d8: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199418u;
    { ctx->pc = 0x199418; return; }
    ctx->pc = 0x1811DCu;
label_1811dc:
    // 0x1811dc: 0xc0692a8  jal         func_1A4AA0
label_1811e0:
    if (ctx->pc == 0x1811E0u) {
        ctx->pc = 0x1811E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1811DCu;
        // 0x1811e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1811E4u;
        goto label_1811e4;
    }
    ctx->pc = 0x1811DCu;
    SET_GPR_U32(ctx, 31, 0x1811E4u);
    ctx->pc = 0x1811E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1811DCu;
    // 0x1811e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4AA0u;
    { ctx->pc = 0x1a4aa0; return; }
    ctx->pc = 0x1811E4u;
label_1811e4:
    // 0x1811e4: 0x8f9587e4  lw          $s5, -0x781C($gp)
    ctx->pc = 0x1811e4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936548)));
label_1811e8:
    // 0x1811e8: 0xc06029c  jal         func_180A70
label_1811ec:
    if (ctx->pc == 0x1811ECu) {
        ctx->pc = 0x1811ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1811E8u;
        // 0x1811ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1811F0u;
        goto label_1811f0;
    }
    ctx->pc = 0x1811E8u;
    SET_GPR_U32(ctx, 31, 0x1811F0u);
    ctx->pc = 0x1811ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1811E8u;
    // 0x1811ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180A70u;
    { ctx->pc = 0x180a70; return; }
    ctx->pc = 0x1811F0u;
label_1811f0:
    // 0x1811f0: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x1811f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_1811f4:
    // 0x1811f4: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1811f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_1811f8:
    // 0x1811f8: 0xc0665d0  jal         func_199740
label_1811fc:
    if (ctx->pc == 0x1811FCu) {
        ctx->pc = 0x1811FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1811F8u;
        // 0x1811fc: 0x24849880  addiu       $a0, $a0, -0x6780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940800));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181200u;
        goto label_181200;
    }
    ctx->pc = 0x1811F8u;
    SET_GPR_U32(ctx, 31, 0x181200u);
    ctx->pc = 0x1811FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1811F8u;
    // 0x1811fc: 0x24849880  addiu       $a0, $a0, -0x6780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199740u;
    { ctx->pc = 0x199740; return; }
    ctx->pc = 0x181200u;
label_181200:
    // 0x181200: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x181200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_181204:
    // 0x181204: 0xc066440  jal         func_199100
label_181208:
    if (ctx->pc == 0x181208u) {
        ctx->pc = 0x181208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181204u;
        // 0x181208: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18120Cu;
        goto label_18120c;
    }
    ctx->pc = 0x181204u;
    SET_GPR_U32(ctx, 31, 0x18120Cu);
    ctx->pc = 0x181208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181204u;
    // 0x181208: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199100u;
    { ctx->pc = 0x199100; return; }
    ctx->pc = 0x18120Cu;
label_18120c:
    // 0x18120c: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
label_181210:
    if (ctx->pc == 0x181210u) {
        ctx->pc = 0x181214u;
        goto label_181214;
    }
    ctx->pc = 0x18120Cu;
    {
        const bool branch_taken_0x18120c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x18120c) {
            ctx->pc = 0x18121Cu;
            goto label_18121c;
        }
    }
    ctx->pc = 0x181214u;
label_181214:
    // 0x181214: 0xc06029c  jal         func_180A70
label_181218:
    if (ctx->pc == 0x181218u) {
        ctx->pc = 0x181218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181214u;
        // 0x181218: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18121Cu;
        goto label_18121c;
    }
    ctx->pc = 0x181214u;
    SET_GPR_U32(ctx, 31, 0x18121Cu);
    ctx->pc = 0x181218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181214u;
    // 0x181218: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180A70u;
    { ctx->pc = 0x180a70; return; }
    ctx->pc = 0x18121Cu;
label_18121c:
    // 0x18121c: 0x87a300ac  lh          $v1, 0xAC($sp)
    ctx->pc = 0x18121cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 172)));
label_181220:
    // 0x181220: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x181220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_181224:
    // 0x181224: 0x87a600ae  lh          $a2, 0xAE($sp)
    ctx->pc = 0x181224u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 174)));
label_181228:
    // 0x181228: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x181228u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18122c:
    // 0x18122c: 0x1000000c  b           . + 4 + (0xC << 2)
label_181230:
    if (ctx->pc == 0x181230u) {
        ctx->pc = 0x181230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18122Cu;
        // 0x181230: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181234u;
        goto label_181234;
    }
    ctx->pc = 0x18122Cu;
    {
        const bool branch_taken_0x18122c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18122Cu;
        // 0x181230: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18122c) {
            ctx->pc = 0x181260u;
            goto label_181260;
        }
    }
    ctx->pc = 0x181234u;
label_181234:
    // 0x181234: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x181234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
label_181238:
    // 0x181238: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x181238u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_18123c:
    // 0x18123c: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x18123cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_181240:
    // 0x181240: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
label_181244:
    if (ctx->pc == 0x181244u) {
        ctx->pc = 0x181248u;
        goto label_181248;
    }
    ctx->pc = 0x181240u;
    {
        const bool branch_taken_0x181240 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x181240) {
            ctx->pc = 0x181274u;
            goto label_181274;
        }
    }
    ctx->pc = 0x181248u;
label_181248:
    // 0x181248: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x181248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_18124c:
    // 0x18124c: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x18124cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_181250:
    // 0x181250: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x181250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_181254:
    // 0x181254: 0x32c3c  dsll32      $a1, $v1, 16
    ctx->pc = 0x181254u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 16));
label_181258:
    // 0x181258: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x181258u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_18125c:
    // 0x18125c: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x18125cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_181260:
    // 0x181260: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x181260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
label_181264:
    // 0x181264: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x181264u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_181268:
    // 0x181268: 0x2863000a  slti        $v1, $v1, 0xA
    ctx->pc = 0x181268u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
label_18126c:
    // 0x18126c: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
label_181270:
    if (ctx->pc == 0x181270u) {
        ctx->pc = 0x181270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18126Cu;
        // 0x181270: 0x51c3c  dsll32      $v1, $a1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181274u;
        goto label_181274;
    }
    ctx->pc = 0x18126Cu;
    {
        const bool branch_taken_0x18126c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x181270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18126Cu;
        // 0x181270: 0x51c3c  dsll32      $v1, $a1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18126c) {
            ctx->pc = 0x181238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_181238;
        }
    }
    ctx->pc = 0x181274u;
label_181274:
    // 0x181274: 0x0  nop
    ctx->pc = 0x181274u;
    // NOP
label_181278:
    // 0x181278: 0x62c3c  dsll32      $a1, $a2, 16
    ctx->pc = 0x181278u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 16));
label_18127c:
    // 0x18127c: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x18127cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
label_181280:
    // 0x181280: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x181280u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_181284:
    // 0x181284: 0x1000000c  b           . + 4 + (0xC << 2)
label_181288:
    if (ctx->pc == 0x181288u) {
        ctx->pc = 0x181288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181284u;
        // 0x181288: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18128Cu;
        goto label_18128c;
    }
    ctx->pc = 0x181284u;
    {
        const bool branch_taken_0x181284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181284u;
        // 0x181288: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181284) {
            ctx->pc = 0x1812B8u;
            goto label_1812b8;
        }
    }
    ctx->pc = 0x18128Cu;
label_18128c:
    // 0x18128c: 0x71c3c  dsll32      $v1, $a3, 16
    ctx->pc = 0x18128cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 16));
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
    ctx->pc = 0x181820u;
    return;
}

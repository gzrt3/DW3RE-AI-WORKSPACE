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


void FUN_0017faa0_part528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x280fd0u: goto label_280fd0;
        case 0x280fd4u: goto label_280fd4;
        case 0x280fd8u: goto label_280fd8;
        case 0x280fdcu: goto label_280fdc;
        case 0x280fe0u: goto label_280fe0;
        case 0x280fe4u: goto label_280fe4;
        case 0x280fe8u: goto label_280fe8;
        case 0x280fecu: goto label_280fec;
        case 0x280ff0u: goto label_280ff0;
        case 0x280ff4u: goto label_280ff4;
        case 0x280ff8u: goto label_280ff8;
        case 0x280ffcu: goto label_280ffc;
        case 0x281000u: goto label_281000;
        case 0x281004u: goto label_281004;
        case 0x281008u: goto label_281008;
        case 0x28100cu: goto label_28100c;
        case 0x281010u: goto label_281010;
        case 0x281014u: goto label_281014;
        case 0x281018u: goto label_281018;
        case 0x28101cu: goto label_28101c;
        case 0x281020u: goto label_281020;
        case 0x281024u: goto label_281024;
        case 0x281028u: goto label_281028;
        case 0x28102cu: goto label_28102c;
        case 0x281030u: goto label_281030;
        case 0x281034u: goto label_281034;
        case 0x281038u: goto label_281038;
        case 0x28103cu: goto label_28103c;
        case 0x281040u: goto label_281040;
        case 0x281044u: goto label_281044;
        case 0x281048u: goto label_281048;
        case 0x28104cu: goto label_28104c;
        case 0x281050u: goto label_281050;
        case 0x281054u: goto label_281054;
        case 0x281058u: goto label_281058;
        case 0x28105cu: goto label_28105c;
        case 0x281060u: goto label_281060;
        case 0x281064u: goto label_281064;
        case 0x281068u: goto label_281068;
        case 0x28106cu: goto label_28106c;
        case 0x281070u: goto label_281070;
        case 0x281074u: goto label_281074;
        case 0x281078u: goto label_281078;
        case 0x28107cu: goto label_28107c;
        case 0x281080u: goto label_281080;
        case 0x281084u: goto label_281084;
        case 0x281088u: goto label_281088;
        case 0x28108cu: goto label_28108c;
        case 0x281090u: goto label_281090;
        case 0x281094u: goto label_281094;
        case 0x281098u: goto label_281098;
        case 0x28109cu: goto label_28109c;
        case 0x2810a0u: goto label_2810a0;
        case 0x2810a4u: goto label_2810a4;
        case 0x2810a8u: goto label_2810a8;
        case 0x2810acu: goto label_2810ac;
        case 0x2810b0u: goto label_2810b0;
        case 0x2810b4u: goto label_2810b4;
        case 0x2810b8u: goto label_2810b8;
        case 0x2810bcu: goto label_2810bc;
        case 0x2810c0u: goto label_2810c0;
        case 0x2810c4u: goto label_2810c4;
        case 0x2810c8u: goto label_2810c8;
        case 0x2810ccu: goto label_2810cc;
        case 0x2810d0u: goto label_2810d0;
        case 0x2810d4u: goto label_2810d4;
        case 0x2810d8u: goto label_2810d8;
        case 0x2810dcu: goto label_2810dc;
        case 0x2810e0u: goto label_2810e0;
        case 0x2810e4u: goto label_2810e4;
        case 0x2810e8u: goto label_2810e8;
        case 0x2810ecu: goto label_2810ec;
        case 0x2810f0u: goto label_2810f0;
        case 0x2810f4u: goto label_2810f4;
        case 0x2810f8u: goto label_2810f8;
        case 0x2810fcu: goto label_2810fc;
        case 0x281100u: goto label_281100;
        case 0x281104u: goto label_281104;
        case 0x281108u: goto label_281108;
        case 0x28110cu: goto label_28110c;
        case 0x281110u: goto label_281110;
        case 0x281114u: goto label_281114;
        case 0x281118u: goto label_281118;
        case 0x28111cu: goto label_28111c;
        case 0x281120u: goto label_281120;
        case 0x281124u: goto label_281124;
        case 0x281128u: goto label_281128;
        case 0x28112cu: goto label_28112c;
        case 0x281130u: goto label_281130;
        case 0x281134u: goto label_281134;
        case 0x281138u: goto label_281138;
        case 0x28113cu: goto label_28113c;
        case 0x281140u: goto label_281140;
        case 0x281144u: goto label_281144;
        case 0x281148u: goto label_281148;
        case 0x28114cu: goto label_28114c;
        case 0x281150u: goto label_281150;
        case 0x281154u: goto label_281154;
        case 0x281158u: goto label_281158;
        case 0x28115cu: goto label_28115c;
        case 0x281160u: goto label_281160;
        case 0x281164u: goto label_281164;
        case 0x281168u: goto label_281168;
        case 0x28116cu: goto label_28116c;
        case 0x281170u: goto label_281170;
        case 0x281174u: goto label_281174;
        case 0x281178u: goto label_281178;
        case 0x28117cu: goto label_28117c;
        case 0x281180u: goto label_281180;
        case 0x281184u: goto label_281184;
        case 0x281188u: goto label_281188;
        case 0x28118cu: goto label_28118c;
        case 0x281190u: goto label_281190;
        case 0x281194u: goto label_281194;
        case 0x281198u: goto label_281198;
        case 0x28119cu: goto label_28119c;
        case 0x2811a0u: goto label_2811a0;
        case 0x2811a4u: goto label_2811a4;
        case 0x2811a8u: goto label_2811a8;
        case 0x2811acu: goto label_2811ac;
        case 0x2811b0u: goto label_2811b0;
        case 0x2811b4u: goto label_2811b4;
        case 0x2811b8u: goto label_2811b8;
        case 0x2811bcu: goto label_2811bc;
        case 0x2811c0u: goto label_2811c0;
        case 0x2811c4u: goto label_2811c4;
        case 0x2811c8u: goto label_2811c8;
        case 0x2811ccu: goto label_2811cc;
        case 0x2811d0u: goto label_2811d0;
        case 0x2811d4u: goto label_2811d4;
        case 0x2811d8u: goto label_2811d8;
        case 0x2811dcu: goto label_2811dc;
        case 0x2811e0u: goto label_2811e0;
        case 0x2811e4u: goto label_2811e4;
        case 0x2811e8u: goto label_2811e8;
        case 0x2811ecu: goto label_2811ec;
        case 0x2811f0u: goto label_2811f0;
        case 0x2811f4u: goto label_2811f4;
        case 0x2811f8u: goto label_2811f8;
        case 0x2811fcu: goto label_2811fc;
        case 0x281200u: goto label_281200;
        case 0x281204u: goto label_281204;
        case 0x281208u: goto label_281208;
        case 0x28120cu: goto label_28120c;
        case 0x281210u: goto label_281210;
        case 0x281214u: goto label_281214;
        case 0x281218u: goto label_281218;
        case 0x28121cu: goto label_28121c;
        case 0x281220u: goto label_281220;
        case 0x281224u: goto label_281224;
        case 0x281228u: goto label_281228;
        case 0x28122cu: goto label_28122c;
        case 0x281230u: goto label_281230;
        case 0x281234u: goto label_281234;
        case 0x281238u: goto label_281238;
        case 0x28123cu: goto label_28123c;
        case 0x281240u: goto label_281240;
        case 0x281244u: goto label_281244;
        case 0x281248u: goto label_281248;
        case 0x28124cu: goto label_28124c;
        case 0x281250u: goto label_281250;
        case 0x281254u: goto label_281254;
        case 0x281258u: goto label_281258;
        case 0x28125cu: goto label_28125c;
        case 0x281260u: goto label_281260;
        case 0x281264u: goto label_281264;
        case 0x281268u: goto label_281268;
        case 0x28126cu: goto label_28126c;
        case 0x281270u: goto label_281270;
        case 0x281274u: goto label_281274;
        case 0x281278u: goto label_281278;
        case 0x28127cu: goto label_28127c;
        case 0x281280u: goto label_281280;
        case 0x281284u: goto label_281284;
        case 0x281288u: goto label_281288;
        case 0x28128cu: goto label_28128c;
        case 0x281290u: goto label_281290;
        case 0x281294u: goto label_281294;
        case 0x281298u: goto label_281298;
        case 0x28129cu: goto label_28129c;
        case 0x2812a0u: goto label_2812a0;
        case 0x2812a4u: goto label_2812a4;
        case 0x2812a8u: goto label_2812a8;
        case 0x2812acu: goto label_2812ac;
        case 0x2812b0u: goto label_2812b0;
        case 0x2812b4u: goto label_2812b4;
        case 0x2812b8u: goto label_2812b8;
        case 0x2812bcu: goto label_2812bc;
        case 0x2812c0u: goto label_2812c0;
        case 0x2812c4u: goto label_2812c4;
        case 0x2812c8u: goto label_2812c8;
        case 0x2812ccu: goto label_2812cc;
        case 0x2812d0u: goto label_2812d0;
        case 0x2812d4u: goto label_2812d4;
        case 0x2812d8u: goto label_2812d8;
        case 0x2812dcu: goto label_2812dc;
        case 0x2812e0u: goto label_2812e0;
        case 0x2812e4u: goto label_2812e4;
        case 0x2812e8u: goto label_2812e8;
        case 0x2812ecu: goto label_2812ec;
        case 0x2812f0u: goto label_2812f0;
        case 0x2812f4u: goto label_2812f4;
        case 0x2812f8u: goto label_2812f8;
        case 0x2812fcu: goto label_2812fc;
        case 0x281300u: goto label_281300;
        case 0x281304u: goto label_281304;
        case 0x281308u: goto label_281308;
        case 0x28130cu: goto label_28130c;
        case 0x281310u: goto label_281310;
        case 0x281314u: goto label_281314;
        case 0x281318u: goto label_281318;
        case 0x28131cu: goto label_28131c;
        case 0x281320u: goto label_281320;
        case 0x281324u: goto label_281324;
        case 0x281328u: goto label_281328;
        case 0x28132cu: goto label_28132c;
        case 0x281330u: goto label_281330;
        case 0x281334u: goto label_281334;
        case 0x281338u: goto label_281338;
        case 0x28133cu: goto label_28133c;
        case 0x281340u: goto label_281340;
        case 0x281344u: goto label_281344;
        case 0x281348u: goto label_281348;
        case 0x28134cu: goto label_28134c;
        case 0x281350u: goto label_281350;
        case 0x281354u: goto label_281354;
        case 0x281358u: goto label_281358;
        case 0x28135cu: goto label_28135c;
        case 0x281360u: goto label_281360;
        case 0x281364u: goto label_281364;
        case 0x281368u: goto label_281368;
        case 0x28136cu: goto label_28136c;
        case 0x281370u: goto label_281370;
        case 0x281374u: goto label_281374;
        case 0x281378u: goto label_281378;
        case 0x28137cu: goto label_28137c;
        case 0x281380u: goto label_281380;
        case 0x281384u: goto label_281384;
        case 0x281388u: goto label_281388;
        case 0x28138cu: goto label_28138c;
        case 0x281390u: goto label_281390;
        case 0x281394u: goto label_281394;
        case 0x281398u: goto label_281398;
        case 0x28139cu: goto label_28139c;
        case 0x2813a0u: goto label_2813a0;
        case 0x2813a4u: goto label_2813a4;
        case 0x2813a8u: goto label_2813a8;
        case 0x2813acu: goto label_2813ac;
        case 0x2813b0u: goto label_2813b0;
        case 0x2813b4u: goto label_2813b4;
        case 0x2813b8u: goto label_2813b8;
        case 0x2813bcu: goto label_2813bc;
        case 0x2813c0u: goto label_2813c0;
        case 0x2813c4u: goto label_2813c4;
        case 0x2813c8u: goto label_2813c8;
        case 0x2813ccu: goto label_2813cc;
        case 0x2813d0u: goto label_2813d0;
        case 0x2813d4u: goto label_2813d4;
        case 0x2813d8u: goto label_2813d8;
        case 0x2813dcu: goto label_2813dc;
        case 0x2813e0u: goto label_2813e0;
        case 0x2813e4u: goto label_2813e4;
        case 0x2813e8u: goto label_2813e8;
        case 0x2813ecu: goto label_2813ec;
        case 0x2813f0u: goto label_2813f0;
        case 0x2813f4u: goto label_2813f4;
        case 0x2813f8u: goto label_2813f8;
        case 0x2813fcu: goto label_2813fc;
        case 0x281400u: goto label_281400;
        case 0x281404u: goto label_281404;
        case 0x281408u: goto label_281408;
        case 0x28140cu: goto label_28140c;
        case 0x281410u: goto label_281410;
        case 0x281414u: goto label_281414;
        case 0x281418u: goto label_281418;
        case 0x28141cu: goto label_28141c;
        case 0x281420u: goto label_281420;
        case 0x281424u: goto label_281424;
        case 0x281428u: goto label_281428;
        case 0x28142cu: goto label_28142c;
        case 0x281430u: goto label_281430;
        case 0x281434u: goto label_281434;
        case 0x281438u: goto label_281438;
        case 0x28143cu: goto label_28143c;
        case 0x281440u: goto label_281440;
        case 0x281444u: goto label_281444;
        case 0x281448u: goto label_281448;
        case 0x28144cu: goto label_28144c;
        case 0x281450u: goto label_281450;
        case 0x281454u: goto label_281454;
        case 0x281458u: goto label_281458;
        case 0x28145cu: goto label_28145c;
        case 0x281460u: goto label_281460;
        case 0x281464u: goto label_281464;
        case 0x281468u: goto label_281468;
        case 0x28146cu: goto label_28146c;
        case 0x281470u: goto label_281470;
        case 0x281474u: goto label_281474;
        case 0x281478u: goto label_281478;
        case 0x28147cu: goto label_28147c;
        case 0x281480u: goto label_281480;
        case 0x281484u: goto label_281484;
        case 0x281488u: goto label_281488;
        case 0x28148cu: goto label_28148c;
        case 0x281490u: goto label_281490;
        case 0x281494u: goto label_281494;
        case 0x281498u: goto label_281498;
        case 0x28149cu: goto label_28149c;
        case 0x2814a0u: goto label_2814a0;
        case 0x2814a4u: goto label_2814a4;
        case 0x2814a8u: goto label_2814a8;
        case 0x2814acu: goto label_2814ac;
        case 0x2814b0u: goto label_2814b0;
        case 0x2814b4u: goto label_2814b4;
        case 0x2814b8u: goto label_2814b8;
        case 0x2814bcu: goto label_2814bc;
        case 0x2814c0u: goto label_2814c0;
        case 0x2814c4u: goto label_2814c4;
        case 0x2814c8u: goto label_2814c8;
        case 0x2814ccu: goto label_2814cc;
        case 0x2814d0u: goto label_2814d0;
        case 0x2814d4u: goto label_2814d4;
        case 0x2814d8u: goto label_2814d8;
        case 0x2814dcu: goto label_2814dc;
        case 0x2814e0u: goto label_2814e0;
        case 0x2814e4u: goto label_2814e4;
        case 0x2814e8u: goto label_2814e8;
        case 0x2814ecu: goto label_2814ec;
        case 0x2814f0u: goto label_2814f0;
        case 0x2814f4u: goto label_2814f4;
        case 0x2814f8u: goto label_2814f8;
        case 0x2814fcu: goto label_2814fc;
        case 0x281500u: goto label_281500;
        case 0x281504u: goto label_281504;
        case 0x281508u: goto label_281508;
        case 0x28150cu: goto label_28150c;
        case 0x281510u: goto label_281510;
        case 0x281514u: goto label_281514;
        case 0x281518u: goto label_281518;
        case 0x28151cu: goto label_28151c;
        case 0x281520u: goto label_281520;
        case 0x281524u: goto label_281524;
        case 0x281528u: goto label_281528;
        case 0x28152cu: goto label_28152c;
        case 0x281530u: goto label_281530;
        case 0x281534u: goto label_281534;
        case 0x281538u: goto label_281538;
        case 0x28153cu: goto label_28153c;
        case 0x281540u: goto label_281540;
        case 0x281544u: goto label_281544;
        case 0x281548u: goto label_281548;
        case 0x28154cu: goto label_28154c;
        case 0x281550u: goto label_281550;
        case 0x281554u: goto label_281554;
        case 0x281558u: goto label_281558;
        case 0x28155cu: goto label_28155c;
        case 0x281560u: goto label_281560;
        case 0x281564u: goto label_281564;
        case 0x281568u: goto label_281568;
        case 0x28156cu: goto label_28156c;
        case 0x281570u: goto label_281570;
        case 0x281574u: goto label_281574;
        case 0x281578u: goto label_281578;
        case 0x28157cu: goto label_28157c;
        case 0x281580u: goto label_281580;
        case 0x281584u: goto label_281584;
        case 0x281588u: goto label_281588;
        case 0x28158cu: goto label_28158c;
        case 0x281590u: goto label_281590;
        case 0x281594u: goto label_281594;
        case 0x281598u: goto label_281598;
        case 0x28159cu: goto label_28159c;
        case 0x2815a0u: goto label_2815a0;
        case 0x2815a4u: goto label_2815a4;
        case 0x2815a8u: goto label_2815a8;
        case 0x2815acu: goto label_2815ac;
        case 0x2815b0u: goto label_2815b0;
        case 0x2815b4u: goto label_2815b4;
        case 0x2815b8u: goto label_2815b8;
        case 0x2815bcu: goto label_2815bc;
        case 0x2815c0u: goto label_2815c0;
        case 0x2815c4u: goto label_2815c4;
        case 0x2815c8u: goto label_2815c8;
        case 0x2815ccu: goto label_2815cc;
        case 0x2815d0u: goto label_2815d0;
        case 0x2815d4u: goto label_2815d4;
        case 0x2815d8u: goto label_2815d8;
        case 0x2815dcu: goto label_2815dc;
        case 0x2815e0u: goto label_2815e0;
        case 0x2815e4u: goto label_2815e4;
        case 0x2815e8u: goto label_2815e8;
        case 0x2815ecu: goto label_2815ec;
        case 0x2815f0u: goto label_2815f0;
        case 0x2815f4u: goto label_2815f4;
        case 0x2815f8u: goto label_2815f8;
        case 0x2815fcu: goto label_2815fc;
        case 0x281600u: goto label_281600;
        case 0x281604u: goto label_281604;
        case 0x281608u: goto label_281608;
        case 0x28160cu: goto label_28160c;
        case 0x281610u: goto label_281610;
        case 0x281614u: goto label_281614;
        case 0x281618u: goto label_281618;
        case 0x28161cu: goto label_28161c;
        case 0x281620u: goto label_281620;
        case 0x281624u: goto label_281624;
        case 0x281628u: goto label_281628;
        case 0x28162cu: goto label_28162c;
        case 0x281630u: goto label_281630;
        case 0x281634u: goto label_281634;
        case 0x281638u: goto label_281638;
        case 0x28163cu: goto label_28163c;
        case 0x281640u: goto label_281640;
        case 0x281644u: goto label_281644;
        case 0x281648u: goto label_281648;
        case 0x28164cu: goto label_28164c;
        case 0x281650u: goto label_281650;
        case 0x281654u: goto label_281654;
        case 0x281658u: goto label_281658;
        case 0x28165cu: goto label_28165c;
        case 0x281660u: goto label_281660;
        case 0x281664u: goto label_281664;
        case 0x281668u: goto label_281668;
        case 0x28166cu: goto label_28166c;
        case 0x281670u: goto label_281670;
        case 0x281674u: goto label_281674;
        case 0x281678u: goto label_281678;
        case 0x28167cu: goto label_28167c;
        case 0x281680u: goto label_281680;
        case 0x281684u: goto label_281684;
        case 0x281688u: goto label_281688;
        case 0x28168cu: goto label_28168c;
        case 0x281690u: goto label_281690;
        case 0x281694u: goto label_281694;
        case 0x281698u: goto label_281698;
        case 0x28169cu: goto label_28169c;
        case 0x2816a0u: goto label_2816a0;
        case 0x2816a4u: goto label_2816a4;
        case 0x2816a8u: goto label_2816a8;
        case 0x2816acu: goto label_2816ac;
        case 0x2816b0u: goto label_2816b0;
        case 0x2816b4u: goto label_2816b4;
        case 0x2816b8u: goto label_2816b8;
        case 0x2816bcu: goto label_2816bc;
        case 0x2816c0u: goto label_2816c0;
        case 0x2816c4u: goto label_2816c4;
        case 0x2816c8u: goto label_2816c8;
        case 0x2816ccu: goto label_2816cc;
        case 0x2816d0u: goto label_2816d0;
        case 0x2816d4u: goto label_2816d4;
        case 0x2816d8u: goto label_2816d8;
        case 0x2816dcu: goto label_2816dc;
        case 0x2816e0u: goto label_2816e0;
        case 0x2816e4u: goto label_2816e4;
        case 0x2816e8u: goto label_2816e8;
        case 0x2816ecu: goto label_2816ec;
        case 0x2816f0u: goto label_2816f0;
        case 0x2816f4u: goto label_2816f4;
        case 0x2816f8u: goto label_2816f8;
        case 0x2816fcu: goto label_2816fc;
        case 0x281700u: goto label_281700;
        case 0x281704u: goto label_281704;
        case 0x281708u: goto label_281708;
        case 0x28170cu: goto label_28170c;
        case 0x281710u: goto label_281710;
        case 0x281714u: goto label_281714;
        case 0x281718u: goto label_281718;
        case 0x28171cu: goto label_28171c;
        case 0x281720u: goto label_281720;
        case 0x281724u: goto label_281724;
        case 0x281728u: goto label_281728;
        case 0x28172cu: goto label_28172c;
        case 0x281730u: goto label_281730;
        case 0x281734u: goto label_281734;
        case 0x281738u: goto label_281738;
        case 0x28173cu: goto label_28173c;
        case 0x281740u: goto label_281740;
        case 0x281744u: goto label_281744;
        case 0x281748u: goto label_281748;
        case 0x28174cu: goto label_28174c;
        case 0x281750u: goto label_281750;
        case 0x281754u: goto label_281754;
        case 0x281758u: goto label_281758;
        case 0x28175cu: goto label_28175c;
        case 0x281760u: goto label_281760;
        case 0x281764u: goto label_281764;
        case 0x281768u: goto label_281768;
        case 0x28176cu: goto label_28176c;
        case 0x281770u: goto label_281770;
        case 0x281774u: goto label_281774;
        case 0x281778u: goto label_281778;
        case 0x28177cu: goto label_28177c;
        case 0x281780u: goto label_281780;
        case 0x281784u: goto label_281784;
        case 0x281788u: goto label_281788;
        case 0x28178cu: goto label_28178c;
        case 0x281790u: goto label_281790;
        case 0x281794u: goto label_281794;
        case 0x281798u: goto label_281798;
        case 0x28179cu: goto label_28179c;
        default: return;
    }

label_280fd0:
    // 0x280fd0: 0x507  .word       0x00000507                   # srav        $zero, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280fd0u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_280fd4:
    // 0x280fd4: 0x508  .word       0x00000508                   # jr          $zero # 00000500 <InstrIdType: CPU_SPECIAL>
label_280fd8:
    if (ctx->pc == 0x280FD8u) {
        ctx->pc = 0x280FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280FD4u;
        // 0x280fd8: 0x509  .word       0x00000509                   # jalr        $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JALR $0, $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x280FDCu;
        goto label_280fdc;
    }
    ctx->pc = 0x280FD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x280FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280FD4u;
        // 0x280fd8: 0x509  .word       0x00000509                   # jalr        $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JALR $0, $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280FD4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x280FDCu;
label_280fdc:
    // 0x280fdc: 0x50a  .word       0x0000050A                   # movz        $zero, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280fdcu;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_280fe0:
    // 0x280fe0: 0x50b  .word       0x0000050B                   # movn        $zero, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280fe0u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_280fe4:
    // 0x280fe4: 0x50c  syscall     20
    ctx->pc = 0x280fe4u;
    ctx->pc = 0x280FE8u;
runtime->handleSyscall(rdram, ctx, 0x14u);
label_280fe8:
    // 0x280fe8: 0x50d  break       0, 20
    ctx->pc = 0x280fe8u;
    runtime->handleBreak(rdram, ctx);
label_280fec:
    // 0x280fec: 0x50e  .word       0x0000050E                   # INVALID     $zero, $zero, 0x50E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280fecu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x280FEC raw=0x0000050E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_280ff0:
    // 0x280ff0: 0x50f  sync.p
    ctx->pc = 0x280ff0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_280ff4:
    // 0x280ff4: 0x510  .word       0x00000510                   # mfhi        $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280ff4u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_280ff8:
    // 0x280ff8: 0x511  .word       0x00000511                   # mthi        $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280ff8u;
    ctx->hi = GPR_U64(ctx, 0);
label_280ffc:
    // 0x280ffc: 0x0  nop
    ctx->pc = 0x280ffcu;
    // NOP
label_281000:
    // 0x281000: 0x47a  dsrl        $zero, $zero, 17
    ctx->pc = 0x281000u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> 17);
label_281004:
    // 0x281004: 0x47b  dsra        $zero, $zero, 17
    ctx->pc = 0x281004u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 17);
label_281008:
    // 0x281008: 0x47c  dsll32      $zero, $zero, 17
    ctx->pc = 0x281008u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 17));
label_28100c:
    // 0x28100c: 0x47d  .word       0x0000047D                   # INVALID     $zero, $zero, 0x47D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28100cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x28100C raw=0x0000047D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_281010:
    // 0x281010: 0x47e  dsrl32      $zero, $zero, 17
    ctx->pc = 0x281010u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 17));
label_281014:
    // 0x281014: 0x491  .word       0x00000491                   # mthi        $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281014u;
    ctx->hi = GPR_U64(ctx, 0);
label_281018:
    // 0x281018: 0x480  sll         $zero, $zero, 18
    ctx->pc = 0x281018u;
    
label_28101c:
    // 0x28101c: 0x492  .word       0x00000492                   # mflo        $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28101cu;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_281020:
    // 0x281020: 0x493  .word       0x00000493                   # mtlo        $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281020u;
    ctx->lo = GPR_U64(ctx, 0);
label_281024:
    // 0x281024: 0x483  sra         $zero, $zero, 18
    ctx->pc = 0x281024u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 18));
label_281028:
    // 0x281028: 0x484  .word       0x00000484                   # sllv        $zero, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281028u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28102c:
    // 0x28102c: 0x494  .word       0x00000494                   # dsllv       $zero, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28102cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_281030:
    // 0x281030: 0x486  .word       0x00000486                   # srlv        $zero, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281030u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_281034:
    // 0x281034: 0x487  .word       0x00000487                   # srav        $zero, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281034u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_281038:
    // 0x281038: 0x495  .word       0x00000495                   # INVALID     $zero, $zero, 0x495 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281038u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x281038 raw=0x00000495"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28103c:
    // 0x28103c: 0x489  .word       0x00000489                   # jalr        $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
label_281040:
    if (ctx->pc == 0x281040u) {
        ctx->pc = 0x281040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28103Cu;
        // 0x281040: 0x48a  .word       0x0000048A                   # movz        $zero, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281044u;
        goto label_281044;
    }
    ctx->pc = 0x28103Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x281040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28103Cu;
        // 0x281040: 0x48a  .word       0x0000048A                   # movz        $zero, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28103Cu, 0x281044u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x281044u;
label_281044:
    // 0x281044: 0x48b  .word       0x0000048B                   # movn        $zero, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281044u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_281048:
    // 0x281048: 0x496  .word       0x00000496                   # dsrlv       $zero, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281048u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_28104c:
    // 0x28104c: 0x497  .word       0x00000497                   # dsrav       $zero, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28104cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_281050:
    // 0x281050: 0x48e  .word       0x0000048E                   # INVALID     $zero, $zero, 0x48E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281050u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x281050 raw=0x0000048E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_281054:
    // 0x281054: 0x48f  sync.p
    ctx->pc = 0x281054u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_281058:
    // 0x281058: 0x490  .word       0x00000490                   # mfhi        $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281058u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_28105c:
    // 0x28105c: 0x0  nop
    ctx->pc = 0x28105cu;
    // NOP
label_281060:
    // 0x281060: 0x4fb  dsra        $zero, $zero, 19
    ctx->pc = 0x281060u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 19);
label_281064:
    // 0x281064: 0x4fc  dsll32      $zero, $zero, 19
    ctx->pc = 0x281064u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 19));
label_281068:
    // 0x281068: 0x4fd  .word       0x000004FD                   # INVALID     $zero, $zero, 0x4FD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281068u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x281068 raw=0x000004FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28106c:
    // 0x28106c: 0x4fe  dsrl32      $zero, $zero, 19
    ctx->pc = 0x28106cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 19));
label_281070:
    // 0x281070: 0x4ff  dsra32      $zero, $zero, 19
    ctx->pc = 0x281070u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 19));
label_281074:
    // 0x281074: 0x512  .word       0x00000512                   # mflo        $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281074u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_281078:
    // 0x281078: 0x501  .word       0x00000501                   # INVALID     $zero, $zero, 0x501 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281078u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x281078 raw=0x00000501"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28107c:
    // 0x28107c: 0x513  .word       0x00000513                   # mtlo        $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28107cu;
    ctx->lo = GPR_U64(ctx, 0);
label_281080:
    // 0x281080: 0x514  .word       0x00000514                   # dsllv       $zero, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281080u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_281084:
    // 0x281084: 0x504  .word       0x00000504                   # sllv        $zero, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281084u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_281088:
    // 0x281088: 0x505  .word       0x00000505                   # INVALID     $zero, $zero, 0x505 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281088u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x281088 raw=0x00000505"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28108c:
    // 0x28108c: 0x515  .word       0x00000515                   # INVALID     $zero, $zero, 0x515 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28108cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28108C raw=0x00000515"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_281090:
    // 0x281090: 0x507  .word       0x00000507                   # srav        $zero, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281090u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_281094:
    // 0x281094: 0x508  .word       0x00000508                   # jr          $zero # 00000500 <InstrIdType: CPU_SPECIAL>
label_281098:
    if (ctx->pc == 0x281098u) {
        ctx->pc = 0x281098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281094u;
        // 0x281098: 0x516  .word       0x00000516                   # dsrlv       $zero, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28109Cu;
        goto label_28109c;
    }
    ctx->pc = 0x281094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x281098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281094u;
        // 0x281098: 0x516  .word       0x00000516                   # dsrlv       $zero, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281094u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28109Cu;
label_28109c:
    // 0x28109c: 0x50a  .word       0x0000050A                   # movz        $zero, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28109cu;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_2810a0:
    // 0x2810a0: 0x50b  .word       0x0000050B                   # movn        $zero, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2810a0u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_2810a4:
    // 0x2810a4: 0x50c  syscall     20
    ctx->pc = 0x2810a4u;
    ctx->pc = 0x2810A8u;
runtime->handleSyscall(rdram, ctx, 0x14u);
label_2810a8:
    // 0x2810a8: 0x517  .word       0x00000517                   # dsrav       $zero, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2810a8u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2810ac:
    // 0x2810ac: 0x518  .word       0x00000518                   # mult        $zero, $zero, $zero # 00000500 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2810acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2810b0:
    // 0x2810b0: 0x50f  sync.p
    ctx->pc = 0x2810b0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2810b4:
    // 0x2810b4: 0x510  .word       0x00000510                   # mfhi        $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2810b4u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_2810b8:
    // 0x2810b8: 0x511  .word       0x00000511                   # mthi        $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2810b8u;
    ctx->hi = GPR_U64(ctx, 0);
label_2810bc:
    // 0x2810bc: 0x0  nop
    ctx->pc = 0x2810bcu;
    // NOP
label_2810c0:
    // 0x2810c0: 0x498  .word       0x00000498                   # mult        $zero, $zero, $zero # 00000480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2810c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2810c4:
    // 0x2810c4: 0x499  .word       0x00000499                   # multu       $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2810c4u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2810c8:
    // 0x2810c8: 0x49a  .word       0x0000049A                   # div         $zero, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2810c8u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2810cc:
    // 0x2810cc: 0x49b  .word       0x0000049B                   # divu        $zero, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2810ccu;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_2810d0:
    // 0x2810d0: 0x49c  .word       0x0000049C                   # dmult       $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2810d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2810D0 raw=0x0000049C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2810d4:
    // 0x2810d4: 0x49d  .word       0x0000049D                   # dmultu      $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2810d4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x2810D4 raw=0x0000049D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2810d8:
    // 0x2810d8: 0x49e  .word       0x0000049E                   # ddiv        $zero, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2810d8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2810D8 raw=0x0000049E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2810dc:
    // 0x2810dc: 0x49f  .word       0x0000049F                   # ddivu       $zero, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2810dcu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2810DC raw=0x0000049F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2810e0:
    // 0x2810e0: 0x4a0  .word       0x000004A0                   # add         $zero, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2810e0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2810e4:
    // 0x2810e4: 0x4a1  .word       0x000004A1                   # addu        $zero, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2810e4u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2810e8:
    // 0x2810e8: 0x4a2  .word       0x000004A2                   # neg         $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2810e8u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_2810ec:
    // 0x2810ec: 0x4a3  .word       0x000004A3                   # negu        $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2810ecu;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2810f0:
    // 0x2810f0: 0x4a4  .word       0x000004A4                   # and         $zero, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2810f0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2810f4:
    // 0x2810f4: 0x4a5  .word       0x000004A5                   # move        $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2810f4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2810f8:
    // 0x2810f8: 0x4a6  .word       0x000004A6                   # xor         $zero, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2810f8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_2810fc:
    // 0x2810fc: 0x4a7  .word       0x000004A7                   # not         $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2810fcu;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_281100:
    // 0x281100: 0x4a8  .word       0x000004A8                   # mfsa        $zero # 00000480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x281100u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_281104:
    // 0x281104: 0x4a9  .word       0x000004A9                   # mtsa        $zero # 00000480 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x281104u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_281108:
    // 0x281108: 0x4aa  .word       0x000004AA                   # slt         $zero, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281108u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_28110c:
    // 0x28110c: 0x4ab  .word       0x000004AB                   # sltu        $zero, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28110cu;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_281110:
    // 0x281110: 0x4ac  .word       0x000004AC                   # dadd        $zero, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281110u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_281114:
    // 0x281114: 0x4ad  .word       0x000004AD                   # daddu       $zero, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281114u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_281118:
    // 0x281118: 0x4ae  .word       0x000004AE                   # dsub        $zero, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281118u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_28111c:
    // 0x28111c: 0x4af  .word       0x000004AF                   # dsubu       $zero, $zero, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28111cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_281120:
    // 0x281120: 0x4b0  tge         $zero, $zero, 18
    ctx->pc = 0x281120u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_281124:
    // 0x281124: 0x4b1  tgeu        $zero, $zero, 18
    ctx->pc = 0x281124u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_281128:
    // 0x281128: 0x4b2  tlt         $zero, $zero, 18
    ctx->pc = 0x281128u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28112c:
    // 0x28112c: 0x4b3  tltu        $zero, $zero, 18
    ctx->pc = 0x28112cu;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_281130:
    // 0x281130: 0x4b4  teq         $zero, $zero, 18
    ctx->pc = 0x281130u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_281134:
    // 0x281134: 0x4b5  .word       0x000004B5                   # INVALID     $zero, $zero, 0x4B5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281134u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x281134 raw=0x000004B5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_281138:
    // 0x281138: 0x4b6  tne         $zero, $zero, 18
    ctx->pc = 0x281138u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28113c:
    // 0x28113c: 0x4b7  .word       0x000004B7                   # INVALID     $zero, $zero, 0x4B7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28113cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x28113C raw=0x000004B7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_281140:
    // 0x281140: 0x4b8  dsll        $zero, $zero, 18
    ctx->pc = 0x281140u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 18);
label_281144:
    // 0x281144: 0x4b9  .word       0x000004B9                   # INVALID     $zero, $zero, 0x4B9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281144u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x281144 raw=0x000004B9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_281148:
    // 0x281148: 0x4ba  dsrl        $zero, $zero, 18
    ctx->pc = 0x281148u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> 18);
label_28114c:
    // 0x28114c: 0x4bb  dsra        $zero, $zero, 18
    ctx->pc = 0x28114cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 18);
label_281150:
    // 0x281150: 0x4bc  dsll32      $zero, $zero, 18
    ctx->pc = 0x281150u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 18));
label_281154:
    // 0x281154: 0x4bd  .word       0x000004BD                   # INVALID     $zero, $zero, 0x4BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281154u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x281154 raw=0x000004BD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_281158:
    // 0x281158: 0x4be  dsrl32      $zero, $zero, 18
    ctx->pc = 0x281158u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 18));
label_28115c:
    // 0x28115c: 0x4bf  dsra32      $zero, $zero, 18
    ctx->pc = 0x28115cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 18));
label_281160:
    // 0x281160: 0x4c0  sll         $zero, $zero, 19
    ctx->pc = 0x281160u;
    
label_281164:
    // 0x281164: 0x4c1  .word       0x000004C1                   # INVALID     $zero, $zero, 0x4C1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281164u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x281164 raw=0x000004C1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_281168:
    // 0x281168: 0x4c2  srl         $zero, $zero, 19
    ctx->pc = 0x281168u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 19));
label_28116c:
    // 0x28116c: 0x4c3  sra         $zero, $zero, 19
    ctx->pc = 0x28116cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 19));
label_281170:
    // 0x281170: 0x4c4  .word       0x000004C4                   # sllv        $zero, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281170u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_281174:
    // 0x281174: 0x4c5  .word       0x000004C5                   # INVALID     $zero, $zero, 0x4C5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281174u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x281174 raw=0x000004C5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_281178:
    // 0x281178: 0x4c6  .word       0x000004C6                   # srlv        $zero, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281178u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28117c:
    // 0x28117c: 0x4c6  .word       0x000004C6                   # srlv        $zero, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28117cu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_281180:
    // 0x281180: 0x4c7  .word       0x000004C7                   # srav        $zero, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281180u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_281184:
    // 0x281184: 0x4c8  .word       0x000004C8                   # jr          $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
label_281188:
    if (ctx->pc == 0x281188u) {
        ctx->pc = 0x281188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281184u;
        // 0x281188: 0x4c9  .word       0x000004C9                   # jalr        $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JALR $0, $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28118Cu;
        goto label_28118c;
    }
    ctx->pc = 0x281184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x281188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281184u;
        // 0x281188: 0x4c9  .word       0x000004C9                   # jalr        $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JALR $0, $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281184u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28118Cu;
label_28118c:
    // 0x28118c: 0x0  nop
    ctx->pc = 0x28118cu;
    // NOP
label_281190:
    // 0x281190: 0x519  .word       0x00000519                   # multu       $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281190u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_281194:
    // 0x281194: 0x51a  .word       0x0000051A                   # div         $zero, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281194u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_281198:
    // 0x281198: 0x51b  .word       0x0000051B                   # divu        $zero, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281198u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_28119c:
    // 0x28119c: 0x51c  .word       0x0000051C                   # dmult       $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28119cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x28119C raw=0x0000051C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2811a0:
    // 0x2811a0: 0x51d  .word       0x0000051D                   # dmultu      $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2811a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x2811A0 raw=0x0000051D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2811a4:
    // 0x2811a4: 0x51e  .word       0x0000051E                   # ddiv        $zero, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2811a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2811A4 raw=0x0000051E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2811a8:
    // 0x2811a8: 0x51f  .word       0x0000051F                   # ddivu       $zero, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2811a8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2811A8 raw=0x0000051F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2811ac:
    // 0x2811ac: 0x520  .word       0x00000520                   # add         $zero, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2811acu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2811b0:
    // 0x2811b0: 0x521  .word       0x00000521                   # addu        $zero, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2811b0u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2811b4:
    // 0x2811b4: 0x522  .word       0x00000522                   # neg         $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2811b4u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_2811b8:
    // 0x2811b8: 0x523  .word       0x00000523                   # negu        $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2811b8u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2811bc:
    // 0x2811bc: 0x524  .word       0x00000524                   # and         $zero, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2811bcu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2811c0:
    // 0x2811c0: 0x525  .word       0x00000525                   # move        $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2811c0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2811c4:
    // 0x2811c4: 0x526  .word       0x00000526                   # xor         $zero, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2811c4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_2811c8:
    // 0x2811c8: 0x527  .word       0x00000527                   # not         $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2811c8u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2811cc:
    // 0x2811cc: 0x528  .word       0x00000528                   # mfsa        $zero # 00000500 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2811ccu;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_2811d0:
    // 0x2811d0: 0x529  .word       0x00000529                   # mtsa        $zero # 00000500 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2811d0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2811d4:
    // 0x2811d4: 0x52a  .word       0x0000052A                   # slt         $zero, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2811d4u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_2811d8:
    // 0x2811d8: 0x52b  .word       0x0000052B                   # sltu        $zero, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2811d8u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_2811dc:
    // 0x2811dc: 0x52c  .word       0x0000052C                   # dadd        $zero, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2811dcu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2811e0:
    // 0x2811e0: 0x52d  .word       0x0000052D                   # daddu       $zero, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2811e0u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2811e4:
    // 0x2811e4: 0x52e  .word       0x0000052E                   # dsub        $zero, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2811e4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2811e8:
    // 0x2811e8: 0x52f  .word       0x0000052F                   # dsubu       $zero, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2811e8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_2811ec:
    // 0x2811ec: 0x530  tge         $zero, $zero, 20
    ctx->pc = 0x2811ecu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2811f0:
    // 0x2811f0: 0x531  tgeu        $zero, $zero, 20
    ctx->pc = 0x2811f0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2811f4:
    // 0x2811f4: 0x532  tlt         $zero, $zero, 20
    ctx->pc = 0x2811f4u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2811f8:
    // 0x2811f8: 0x533  tltu        $zero, $zero, 20
    ctx->pc = 0x2811f8u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2811fc:
    // 0x2811fc: 0x534  teq         $zero, $zero, 20
    ctx->pc = 0x2811fcu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_281200:
    // 0x281200: 0x535  .word       0x00000535                   # INVALID     $zero, $zero, 0x535 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281200u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x281200 raw=0x00000535"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_281204:
    // 0x281204: 0x536  tne         $zero, $zero, 20
    ctx->pc = 0x281204u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_281208:
    // 0x281208: 0x537  .word       0x00000537                   # INVALID     $zero, $zero, 0x537 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281208u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x281208 raw=0x00000537"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28120c:
    // 0x28120c: 0x538  dsll        $zero, $zero, 20
    ctx->pc = 0x28120cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 20);
label_281210:
    // 0x281210: 0x539  .word       0x00000539                   # INVALID     $zero, $zero, 0x539 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281210u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x281210 raw=0x00000539"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_281214:
    // 0x281214: 0x53a  dsrl        $zero, $zero, 20
    ctx->pc = 0x281214u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> 20);
label_281218:
    // 0x281218: 0x53b  dsra        $zero, $zero, 20
    ctx->pc = 0x281218u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> 20);
label_28121c:
    // 0x28121c: 0x53c  dsll32      $zero, $zero, 20
    ctx->pc = 0x28121cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 20));
label_281220:
    // 0x281220: 0x53d  .word       0x0000053D                   # INVALID     $zero, $zero, 0x53D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281220u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x281220 raw=0x0000053D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_281224:
    // 0x281224: 0x53e  dsrl32      $zero, $zero, 20
    ctx->pc = 0x281224u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 20));
label_281228:
    // 0x281228: 0x53f  dsra32      $zero, $zero, 20
    ctx->pc = 0x281228u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 20));
label_28122c:
    // 0x28122c: 0x540  sll         $zero, $zero, 21
    ctx->pc = 0x28122cu;
    
label_281230:
    // 0x281230: 0x541  .word       0x00000541                   # INVALID     $zero, $zero, 0x541 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281230u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x281230 raw=0x00000541"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_281234:
    // 0x281234: 0x542  srl         $zero, $zero, 21
    ctx->pc = 0x281234u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 21));
label_281238:
    // 0x281238: 0x543  sra         $zero, $zero, 21
    ctx->pc = 0x281238u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 21));
label_28123c:
    // 0x28123c: 0x544  .word       0x00000544                   # sllv        $zero, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28123cu;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_281240:
    // 0x281240: 0x545  .word       0x00000545                   # INVALID     $zero, $zero, 0x545 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281240u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x281240 raw=0x00000545"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_281244:
    // 0x281244: 0x546  .word       0x00000546                   # srlv        $zero, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281244u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_281248:
    // 0x281248: 0x547  .word       0x00000547                   # srav        $zero, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281248u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_28124c:
    // 0x28124c: 0x547  .word       0x00000547                   # srav        $zero, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28124cu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_281250:
    // 0x281250: 0x548  .word       0x00000548                   # jr          $zero # 00000540 <InstrIdType: CPU_SPECIAL>
label_281254:
    if (ctx->pc == 0x281254u) {
        ctx->pc = 0x281254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281250u;
        // 0x281254: 0x549  .word       0x00000549                   # jalr        $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JALR $0, $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x281258u;
        goto label_281258;
    }
    ctx->pc = 0x281250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x281254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281250u;
        // 0x281254: 0x549  .word       0x00000549                   # jalr        $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JALR $0, $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281250u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x281258u;
label_281258:
    // 0x281258: 0x54a  .word       0x0000054A                   # movz        $zero, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281258u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_28125c:
    // 0x28125c: 0x0  nop
    ctx->pc = 0x28125cu;
    // NOP
label_281260:
    // 0x281260: 0xb83  sra         $at, $zero, 14
    ctx->pc = 0x281260u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 0), 14));
label_281264:
    // 0x281264: 0xb84  .word       0x00000B84                   # sllv        $at, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281264u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_281268:
    // 0x281268: 0xb85  .word       0x00000B85                   # INVALID     $zero, $zero, 0xB85 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281268u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x281268 raw=0x00000B85"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28126c:
    // 0x28126c: 0xb86  .word       0x00000B86                   # srlv        $at, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28126cu;
    SET_GPR_S32(ctx, 1, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_281270:
    // 0x281270: 0xb87  .word       0x00000B87                   # srav        $at, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281270u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_281274:
    // 0x281274: 0xb88  .word       0x00000B88                   # jr          $zero # 00000B80 <InstrIdType: CPU_SPECIAL>
label_281278:
    if (ctx->pc == 0x281278u) {
        ctx->pc = 0x281278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281274u;
        // 0x281278: 0xb89  .word       0x00000B89                   # jalr        $at, $zero # 00000380 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JALR $1, $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28127Cu;
        goto label_28127c;
    }
    ctx->pc = 0x281274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x281278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281274u;
        // 0x281278: 0xb89  .word       0x00000B89                   # jalr        $at, $zero # 00000380 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JALR $1, $0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281274u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28127Cu;
label_28127c:
    // 0x28127c: 0xb8a  .word       0x00000B8A                   # movz        $at, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28127cu;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 1, GPR_VEC(ctx, 0));
label_281280:
    // 0x281280: 0xb8b  .word       0x00000B8B                   # movn        $at, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281280u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 1, GPR_VEC(ctx, 0));
label_281284:
    // 0x281284: 0xb8c  syscall     46
    ctx->pc = 0x281284u;
    ctx->pc = 0x281288u;
runtime->handleSyscall(rdram, ctx, 0x2Eu);
label_281288:
    // 0x281288: 0xb8d  break       0, 46
    ctx->pc = 0x281288u;
    runtime->handleBreak(rdram, ctx);
label_28128c:
    // 0x28128c: 0xb8e  .word       0x00000B8E                   # INVALID     $zero, $zero, 0xB8E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28128cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x28128C raw=0x00000B8E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_281290:
    // 0x281290: 0xb8f  .word       0x00000B8F                   # sync # 00000800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281290u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_281294:
    // 0x281294: 0xb90  .word       0x00000B90                   # mfhi        $at # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281294u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_281298:
    // 0x281298: 0xb91  .word       0x00000B91                   # mthi        $zero # 00000B80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281298u;
    ctx->hi = GPR_U64(ctx, 0);
label_28129c:
    // 0x28129c: 0xb92  .word       0x00000B92                   # mflo        $at # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28129cu;
    SET_GPR_U64(ctx, 1, ctx->lo);
label_2812a0:
    // 0x2812a0: 0xb93  .word       0x00000B93                   # mtlo        $zero # 00000B80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2812a0u;
    ctx->lo = GPR_U64(ctx, 0);
label_2812a4:
    // 0x2812a4: 0xb94  .word       0x00000B94                   # dsllv       $at, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2812a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2812a8:
    // 0x2812a8: 0xb95  .word       0x00000B95                   # INVALID     $zero, $zero, 0xB95 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2812a8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x2812A8 raw=0x00000B95"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2812ac:
    // 0x2812ac: 0xb96  .word       0x00000B96                   # dsrlv       $at, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2812acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2812b0:
    // 0x2812b0: 0xb97  .word       0x00000B97                   # dsrav       $at, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2812b0u;
    SET_GPR_S64(ctx, 1, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2812b4:
    // 0x2812b4: 0xb98  .word       0x00000B98                   # mult        $at, $zero, $zero # 00000380 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2812b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_2812b8:
    // 0x2812b8: 0xb99  .word       0x00000B99                   # multu       $zero, $zero # 00000B80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2812b8u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 1, (int32_t)result); }
label_2812bc:
    // 0x2812bc: 0xb9a  .word       0x00000B9A                   # div         $at, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2812bcu;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2812c0:
    // 0x2812c0: 0xb9b  .word       0x00000B9B                   # divu        $at, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2812c0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_2812c4:
    // 0x2812c4: 0xb9c  .word       0x00000B9C                   # dmult       $zero, $zero # 00000B80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2812c4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2812C4 raw=0x00000B9C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2812c8:
    // 0x2812c8: 0xb9d  .word       0x00000B9D                   # dmultu      $zero, $zero # 00000B80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2812c8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x2812C8 raw=0x00000B9D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2812cc:
    // 0x2812cc: 0xb9e  .word       0x00000B9E                   # ddiv        $at, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2812ccu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2812CC raw=0x00000B9E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2812d0:
    // 0x2812d0: 0xb9f  .word       0x00000B9F                   # ddivu       $at, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2812d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2812D0 raw=0x00000B9F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2812d4:
    // 0x2812d4: 0xba0  .word       0x00000BA0                   # add         $at, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2812d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
label_2812d8:
    // 0x2812d8: 0xba1  .word       0x00000BA1                   # addu        $at, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2812d8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2812dc:
    // 0x2812dc: 0xba2  .word       0x00000BA2                   # neg         $at, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2812dcu;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 1, (int32_t)tmp); }
label_2812e0:
    // 0x2812e0: 0xba3  .word       0x00000BA3                   # negu        $at, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2812e0u;
    SET_GPR_S32(ctx, 1, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2812e4:
    // 0x2812e4: 0xba4  .word       0x00000BA4                   # and         $at, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2812e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2812e8:
    // 0x2812e8: 0x0  nop
    ctx->pc = 0x2812e8u;
    // NOP
label_2812ec:
    // 0x2812ec: 0x0  nop
    ctx->pc = 0x2812ecu;
    // NOP
label_2812f0:
    // 0x2812f0: 0xba5  .word       0x00000BA5                   # move        $at, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2812f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2812f4:
    // 0x2812f4: 0xba6  .word       0x00000BA6                   # xor         $at, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2812f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_2812f8:
    // 0x2812f8: 0xba7  .word       0x00000BA7                   # not         $at, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2812f8u;
    SET_GPR_U64(ctx, 1, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2812fc:
    // 0x2812fc: 0xba8  .word       0x00000BA8                   # mfsa        $at # 00000380 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2812fcu;
    SET_GPR_U32(ctx, 1, ctx->sa);
label_281300:
    // 0x281300: 0xba9  .word       0x00000BA9                   # mtsa        $zero # 00000B80 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x281300u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_281304:
    // 0x281304: 0xbaa  .word       0x00000BAA                   # slt         $at, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281304u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_281308:
    // 0x281308: 0xbab  .word       0x00000BAB                   # sltu        $at, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281308u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_28130c:
    // 0x28130c: 0xbac  .word       0x00000BAC                   # dadd        $at, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28130cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
label_281310:
    // 0x281310: 0xbad  .word       0x00000BAD                   # daddu       $at, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281310u;
    SET_GPR_U64(ctx, 1, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_281314:
    // 0x281314: 0xbae  .word       0x00000BAE                   # dsub        $at, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281314u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
label_281318:
    // 0x281318: 0xbaf  .word       0x00000BAF                   # dsubu       $at, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281318u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_28131c:
    // 0x28131c: 0xbb0  tge         $zero, $zero, 46
    ctx->pc = 0x28131cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_281320:
    // 0x281320: 0xbb1  tgeu        $zero, $zero, 46
    ctx->pc = 0x281320u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_281324:
    // 0x281324: 0xbb2  tlt         $zero, $zero, 46
    ctx->pc = 0x281324u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_281328:
    // 0x281328: 0xbb3  tltu        $zero, $zero, 46
    ctx->pc = 0x281328u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28132c:
    // 0x28132c: 0xbb4  teq         $zero, $zero, 46
    ctx->pc = 0x28132cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_281330:
    // 0x281330: 0xbb5  .word       0x00000BB5                   # INVALID     $zero, $zero, 0xBB5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281330u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x281330 raw=0x00000BB5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_281334:
    // 0x281334: 0xbb6  tne         $zero, $zero, 46
    ctx->pc = 0x281334u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_281338:
    // 0x281338: 0xbb7  .word       0x00000BB7                   # INVALID     $zero, $zero, 0xBB7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281338u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x281338 raw=0x00000BB7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28133c:
    // 0x28133c: 0xbb8  dsll        $at, $zero, 14
    ctx->pc = 0x28133cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << 14);
label_281340:
    // 0x281340: 0xbb9  .word       0x00000BB9                   # INVALID     $zero, $zero, 0xBB9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281340u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x281340 raw=0x00000BB9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_281344:
    // 0x281344: 0xbba  dsrl        $at, $zero, 14
    ctx->pc = 0x281344u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) >> 14);
label_281348:
    // 0x281348: 0xbbb  dsra        $at, $zero, 14
    ctx->pc = 0x281348u;
    SET_GPR_S64(ctx, 1, GPR_S64(ctx, 0) >> 14);
label_28134c:
    // 0x28134c: 0xbbc  dsll32      $at, $zero, 14
    ctx->pc = 0x28134cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) << (32 + 14));
label_281350:
    // 0x281350: 0xbbd  .word       0x00000BBD                   # INVALID     $zero, $zero, 0xBBD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281350u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x281350 raw=0x00000BBD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_281354:
    // 0x281354: 0xbbe  dsrl32      $at, $zero, 14
    ctx->pc = 0x281354u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) >> (32 + 14));
label_281358:
    // 0x281358: 0xbbf  dsra32      $at, $zero, 14
    ctx->pc = 0x281358u;
    SET_GPR_S64(ctx, 1, GPR_S64(ctx, 0) >> (32 + 14));
label_28135c:
    // 0x28135c: 0xbc0  sll         $at, $zero, 15
    ctx->pc = 0x28135cu;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_281360:
    // 0x281360: 0xbc1  .word       0x00000BC1                   # INVALID     $zero, $zero, 0xBC1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281360u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x281360 raw=0x00000BC1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_281364:
    // 0x281364: 0xbc2  srl         $at, $zero, 15
    ctx->pc = 0x281364u;
    SET_GPR_S32(ctx, 1, (int32_t)SRL32(GPR_U32(ctx, 0), 15));
label_281368:
    // 0x281368: 0xbc3  sra         $at, $zero, 15
    ctx->pc = 0x281368u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 0), 15));
label_28136c:
    // 0x28136c: 0xbc4  .word       0x00000BC4                   # sllv        $at, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28136cu;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_281370:
    // 0x281370: 0xbc5  .word       0x00000BC5                   # INVALID     $zero, $zero, 0xBC5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281370u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x281370 raw=0x00000BC5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_281374:
    // 0x281374: 0xbc6  .word       0x00000BC6                   # srlv        $at, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281374u;
    SET_GPR_S32(ctx, 1, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_281378:
    // 0x281378: 0x0  nop
    ctx->pc = 0x281378u;
    // NOP
label_28137c:
    // 0x28137c: 0x0  nop
    ctx->pc = 0x28137cu;
    // NOP
label_281380:
    // 0x281380: 0x451  .word       0x00000451                   # mthi        $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281380u;
    ctx->hi = GPR_U64(ctx, 0);
label_281384:
    // 0x281384: 0x452  .word       0x00000452                   # mflo        $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281384u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_281388:
    // 0x281388: 0x453  .word       0x00000453                   # mtlo        $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281388u;
    ctx->lo = GPR_U64(ctx, 0);
label_28138c:
    // 0x28138c: 0x454  .word       0x00000454                   # dsllv       $zero, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28138cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_281390:
    // 0x281390: 0x455  .word       0x00000455                   # INVALID     $zero, $zero, 0x455 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281390u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x281390 raw=0x00000455"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_281394:
    // 0x281394: 0x456  .word       0x00000456                   # dsrlv       $zero, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281394u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_281398:
    // 0x281398: 0x457  .word       0x00000457                   # dsrav       $zero, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281398u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_28139c:
    // 0x28139c: 0x458  .word       0x00000458                   # mult        $zero, $zero, $zero # 00000440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x28139cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2813a0:
    // 0x2813a0: 0x459  .word       0x00000459                   # multu       $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2813a0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2813a4:
    // 0x2813a4: 0x45a  .word       0x0000045A                   # div         $zero, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2813a4u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2813a8:
    // 0x2813a8: 0x45b  .word       0x0000045B                   # divu        $zero, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2813a8u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_2813ac:
    // 0x2813ac: 0x45c  .word       0x0000045C                   # dmult       $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2813acu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2813AC raw=0x0000045C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2813b0:
    // 0x2813b0: 0x45d  .word       0x0000045D                   # dmultu      $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2813b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x2813B0 raw=0x0000045D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2813b4:
    // 0x2813b4: 0x45e  .word       0x0000045E                   # ddiv        $zero, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2813b4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2813B4 raw=0x0000045E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2813b8:
    // 0x2813b8: 0x45f  .word       0x0000045F                   # ddivu       $zero, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2813b8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x2813B8 raw=0x0000045F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2813bc:
    // 0x2813bc: 0x460  .word       0x00000460                   # add         $zero, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2813bcu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2813c0:
    // 0x2813c0: 0x461  .word       0x00000461                   # addu        $zero, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2813c0u;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2813c4:
    // 0x2813c4: 0x462  .word       0x00000462                   # neg         $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2813c4u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_2813c8:
    // 0x2813c8: 0x463  .word       0x00000463                   # negu        $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2813c8u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2813cc:
    // 0x2813cc: 0x464  .word       0x00000464                   # and         $zero, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2813ccu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2813d0:
    // 0x2813d0: 0x465  .word       0x00000465                   # move        $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2813d0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_2813d4:
    // 0x2813d4: 0x466  .word       0x00000466                   # xor         $zero, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2813d4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_2813d8:
    // 0x2813d8: 0x467  .word       0x00000467                   # not         $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2813d8u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2813dc:
    // 0x2813dc: 0x468  .word       0x00000468                   # mfsa        $zero # 00000440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2813dcu;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_2813e0:
    // 0x2813e0: 0x469  .word       0x00000469                   # mtsa        $zero # 00000440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2813e0u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2813e4:
    // 0x2813e4: 0x46a  .word       0x0000046A                   # slt         $zero, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2813e4u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_2813e8:
    // 0x2813e8: 0x46b  .word       0x0000046B                   # sltu        $zero, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2813e8u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_2813ec:
    // 0x2813ec: 0x46c  .word       0x0000046C                   # dadd        $zero, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2813ecu;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2813f0:
    // 0x2813f0: 0x46d  .word       0x0000046D                   # daddu       $zero, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2813f0u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2813f4:
    // 0x2813f4: 0x46e  .word       0x0000046E                   # dsub        $zero, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2813f4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2813f8:
    // 0x2813f8: 0x46f  .word       0x0000046F                   # dsubu       $zero, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2813f8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_2813fc:
    // 0x2813fc: 0x470  tge         $zero, $zero, 17
    ctx->pc = 0x2813fcu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_281400:
    // 0x281400: 0x471  tgeu        $zero, $zero, 17
    ctx->pc = 0x281400u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_281404:
    // 0x281404: 0x472  tlt         $zero, $zero, 17
    ctx->pc = 0x281404u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_281408:
    // 0x281408: 0x473  tltu        $zero, $zero, 17
    ctx->pc = 0x281408u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28140c:
    // 0x28140c: 0x474  teq         $zero, $zero, 17
    ctx->pc = 0x28140cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_281410:
    // 0x281410: 0x475  .word       0x00000475                   # INVALID     $zero, $zero, 0x475 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281410u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x281410 raw=0x00000475"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_281414:
    // 0x281414: 0x476  tne         $zero, $zero, 17
    ctx->pc = 0x281414u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_281418:
    // 0x281418: 0x477  .word       0x00000477                   # INVALID     $zero, $zero, 0x477 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281418u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x281418 raw=0x00000477"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28141c:
    // 0x28141c: 0x478  dsll        $zero, $zero, 17
    ctx->pc = 0x28141cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 17);
label_281420:
    // 0x281420: 0x479  .word       0x00000479                   # INVALID     $zero, $zero, 0x479 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281420u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x281420 raw=0x00000479"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_281424:
    // 0x281424: 0x0  nop
    ctx->pc = 0x281424u;
    // NOP
label_281428:
    // 0x281428: 0x0  nop
    ctx->pc = 0x281428u;
    // NOP
label_28142c:
    // 0x28142c: 0x0  nop
    ctx->pc = 0x28142cu;
    // NOP
label_281430:
    // 0x281430: 0x4d2  .word       0x000004D2                   # mflo        $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281430u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_281434:
    // 0x281434: 0x4d3  .word       0x000004D3                   # mtlo        $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281434u;
    ctx->lo = GPR_U64(ctx, 0);
label_281438:
    // 0x281438: 0x4d4  .word       0x000004D4                   # dsllv       $zero, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281438u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_28143c:
    // 0x28143c: 0x4d5  .word       0x000004D5                   # INVALID     $zero, $zero, 0x4D5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28143cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x28143C raw=0x000004D5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_281440:
    // 0x281440: 0x4d6  .word       0x000004D6                   # dsrlv       $zero, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281440u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_281444:
    // 0x281444: 0x4d7  .word       0x000004D7                   # dsrav       $zero, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281444u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_281448:
    // 0x281448: 0x4d8  .word       0x000004D8                   # mult        $zero, $zero, $zero # 000004C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x281448u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_28144c:
    // 0x28144c: 0x4d9  .word       0x000004D9                   # multu       $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28144cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_281450:
    // 0x281450: 0x4da  .word       0x000004DA                   # div         $zero, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281450u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_281454:
    // 0x281454: 0x4db  .word       0x000004DB                   # divu        $zero, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281454u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_281458:
    // 0x281458: 0x4dc  .word       0x000004DC                   # dmult       $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281458u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x281458 raw=0x000004DC"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28145c:
    // 0x28145c: 0x4dd  .word       0x000004DD                   # dmultu      $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28145cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28145C raw=0x000004DD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_281460:
    // 0x281460: 0x4de  .word       0x000004DE                   # ddiv        $zero, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281460u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x281460 raw=0x000004DE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_281464:
    // 0x281464: 0x4df  .word       0x000004DF                   # ddivu       $zero, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281464u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x281464 raw=0x000004DF"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_281468:
    // 0x281468: 0x4e0  .word       0x000004E0                   # add         $zero, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281468u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_28146c:
    // 0x28146c: 0x4e1  .word       0x000004E1                   # addu        $zero, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28146cu;
    SET_GPR_S32(ctx, 0, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_281470:
    // 0x281470: 0x4e2  .word       0x000004E2                   # neg         $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281470u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_281474:
    // 0x281474: 0x4e3  .word       0x000004E3                   # negu        $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281474u;
    SET_GPR_S32(ctx, 0, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_281478:
    // 0x281478: 0x4e4  .word       0x000004E4                   # and         $zero, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281478u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_28147c:
    // 0x28147c: 0x4e5  .word       0x000004E5                   # move        $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28147cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_281480:
    // 0x281480: 0x4e6  .word       0x000004E6                   # xor         $zero, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281480u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_281484:
    // 0x281484: 0x4e7  .word       0x000004E7                   # not         $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281484u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_281488:
    // 0x281488: 0x4e8  .word       0x000004E8                   # mfsa        $zero # 000004C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x281488u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_28148c:
    // 0x28148c: 0x4e9  .word       0x000004E9                   # mtsa        $zero # 000004C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x28148cu;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_281490:
    // 0x281490: 0x4ea  .word       0x000004EA                   # slt         $zero, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281490u;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_281494:
    // 0x281494: 0x4eb  .word       0x000004EB                   # sltu        $zero, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281494u;
    SET_GPR_U64(ctx, 0, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_281498:
    // 0x281498: 0x4ec  .word       0x000004EC                   # dadd        $zero, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281498u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_28149c:
    // 0x28149c: 0x4ed  .word       0x000004ED                   # daddu       $zero, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28149cu;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2814a0:
    // 0x2814a0: 0x4ee  .word       0x000004EE                   # dsub        $zero, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2814a0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2814a4:
    // 0x2814a4: 0x4ef  .word       0x000004EF                   # dsubu       $zero, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2814a4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_2814a8:
    // 0x2814a8: 0x4f0  tge         $zero, $zero, 19
    ctx->pc = 0x2814a8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2814ac:
    // 0x2814ac: 0x4f1  tgeu        $zero, $zero, 19
    ctx->pc = 0x2814acu;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2814b0:
    // 0x2814b0: 0x4f2  tlt         $zero, $zero, 19
    ctx->pc = 0x2814b0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2814b4:
    // 0x2814b4: 0x4f3  tltu        $zero, $zero, 19
    ctx->pc = 0x2814b4u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2814b8:
    // 0x2814b8: 0x4f4  teq         $zero, $zero, 19
    ctx->pc = 0x2814b8u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2814bc:
    // 0x2814bc: 0x4f5  .word       0x000004F5                   # INVALID     $zero, $zero, 0x4F5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2814bcu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x2814BC raw=0x000004F5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2814c0:
    // 0x2814c0: 0x4f6  tne         $zero, $zero, 19
    ctx->pc = 0x2814c0u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2814c4:
    // 0x2814c4: 0x4f7  .word       0x000004F7                   # INVALID     $zero, $zero, 0x4F7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2814c4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x2814C4 raw=0x000004F7"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2814c8:
    // 0x2814c8: 0x4f8  dsll        $zero, $zero, 19
    ctx->pc = 0x2814c8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 19);
label_2814cc:
    // 0x2814cc: 0x4f9  .word       0x000004F9                   # INVALID     $zero, $zero, 0x4F9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2814ccu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x2814CC raw=0x000004F9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2814d0:
    // 0x2814d0: 0x4fa  dsrl        $zero, $zero, 19
    ctx->pc = 0x2814d0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> 19);
label_2814d4:
    // 0x2814d4: 0x0  nop
    ctx->pc = 0x2814d4u;
    // NOP
label_2814d8:
    // 0x2814d8: 0x0  nop
    ctx->pc = 0x2814d8u;
    // NOP
label_2814dc:
    // 0x2814dc: 0x0  nop
    ctx->pc = 0x2814dcu;
    // NOP
label_2814e0:
    // 0x2814e0: 0x0  nop
    ctx->pc = 0x2814e0u;
    // NOP
label_2814e4:
    // 0x2814e4: 0x895  .word       0x00000895                   # INVALID     $zero, $zero, 0x895 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2814e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x2814E4 raw=0x00000895"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2814e8:
    // 0x2814e8: 0x1329  .word       0x00001329                   # mtsa        $zero # 00001300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2814e8u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_2814ec:
    // 0x2814ec: 0x1bcc  syscall     111
    ctx->pc = 0x2814ecu;
    ctx->pc = 0x2814F0u;
runtime->handleSyscall(rdram, ctx, 0x6Fu);
label_2814f0:
    // 0x2814f0: 0x2454  .word       0x00002454                   # dsllv       $a0, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2814f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2814f4:
    // 0x2814f4: 0x2ebe  dsrl32      $a1, $zero, 26
    ctx->pc = 0x2814f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) >> (32 + 26));
label_2814f8:
    // 0x2814f8: 0x38ab  .word       0x000038AB                   # sltu        $a3, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2814f8u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_2814fc:
    // 0x2814fc: 0x43c6  .word       0x000043C6                   # srlv        $t0, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2814fcu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_281500:
    // 0x281500: 0x4ea8  .word       0x00004EA8                   # mfsa        $t1 # 00000680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x281500u;
    SET_GPR_U32(ctx, 9, ctx->sa);
label_281504:
    // 0x281504: 0x56ed  .word       0x000056ED                   # daddu       $t2, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281504u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_281508:
    // 0x281508: 0x6030  tge         $zero, $zero, 384
    ctx->pc = 0x281508u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_28150c:
    // 0x28150c: 0x6a4d  break       0, 425
    ctx->pc = 0x28150cu;
    runtime->handleBreak(rdram, ctx);
label_281510:
    // 0x281510: 0x777b  dsra        $t6, $zero, 29
    ctx->pc = 0x281510u;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 0) >> 29);
label_281514:
    // 0x281514: 0x882b  sltu        $s1, $zero, $zero
    ctx->pc = 0x281514u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_281518:
    // 0x281518: 0x9460  .word       0x00009460                   # add         $s2, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281518u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_28151c:
    // 0x28151c: 0xa29f  .word       0x0000A29F                   # ddivu       $s4, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28151cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x28151C raw=0x0000A29F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_281520:
    // 0x281520: 0xad10  .word       0x0000AD10                   # mfhi        $s5 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281520u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_281524:
    // 0x281524: 0xbc12  .word       0x0000BC12                   # mflo        $s7 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281524u;
    SET_GPR_U64(ctx, 23, ctx->lo);
label_281528:
    // 0x281528: 0xc597  .word       0x0000C597                   # dsrav       $t8, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281528u;
    SET_GPR_S64(ctx, 24, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_28152c:
    // 0x28152c: 0xccf1  tgeu        $zero, $zero, 819
    ctx->pc = 0x28152cu;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_281530:
    // 0x281530: 0xd770  tge         $zero, $zero, 861
    ctx->pc = 0x281530u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_281534:
    // 0x281534: 0xdd0c  syscall     884
    ctx->pc = 0x281534u;
    ctx->pc = 0x281538u;
runtime->handleSyscall(rdram, ctx, 0x374u);
label_281538:
    // 0x281538: 0xe705  .word       0x0000E705                   # INVALID     $zero, $zero, -0x18FB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281538u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x281538 raw=0x0000E705"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28153c:
    // 0x28153c: 0xefe0  .word       0x0000EFE0                   # add         $sp, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28153cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
label_281540:
    // 0x281540: 0xfdaa  .word       0x0000FDAA                   # slt         $ra, $zero, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281540u;
    SET_GPR_U64(ctx, 31, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_281544:
    // 0x281544: 0x101c1  .word       0x000101C1                   # INVALID     $zero, $at, 0x1C1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281544u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x281544 raw=0x000101C1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_281548:
    // 0x281548: 0x10a06  .word       0x00010A06                   # srlv        $at, $at, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281548u;
    SET_GPR_S32(ctx, 1, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_28154c:
    // 0x28154c: 0x11244  .word       0x00011244                   # sllv        $v0, $at, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28154cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_281550:
    // 0x281550: 0x12350  .word       0x00012350                   # mfhi        $a0 # 00010340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281550u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_281554:
    // 0x281554: 0x12772  tlt         $zero, $at, 157
    ctx->pc = 0x281554u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_281558:
    // 0x281558: 0x12ff0  tge         $zero, $at, 191
    ctx->pc = 0x281558u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_28155c:
    // 0x28155c: 0x13a86  .word       0x00013A86                   # srlv        $a3, $at, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28155cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_281560:
    // 0x281560: 0x13b96  .word       0x00013B96                   # dsrlv       $a3, $at, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281560u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_281564:
    // 0x281564: 0x13c3e  dsrl32      $a3, $at, 16
    ctx->pc = 0x281564u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 1) >> (32 + 16));
label_281568:
    // 0x281568: 0x13cbb  dsra        $a3, $at, 18
    ctx->pc = 0x281568u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 1) >> 18);
label_28156c:
    // 0x28156c: 0x13dd1  .word       0x00013DD1                   # mthi        $zero # 00013DC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28156cu;
    ctx->hi = GPR_U64(ctx, 0);
label_281570:
    // 0x281570: 0x13e3b  dsra        $a3, $at, 24
    ctx->pc = 0x281570u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 1) >> 24);
label_281574:
    // 0x281574: 0x142e1  .word       0x000142E1                   # addu        $t0, $zero, $at # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281574u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_281578:
    // 0x281578: 0x0  nop
    ctx->pc = 0x281578u;
    // NOP
label_28157c:
    // 0x28157c: 0x0  nop
    ctx->pc = 0x28157cu;
    // NOP
label_281580:
    // 0x281580: 0x70000  sll         $zero, $a3, 0
    ctx->pc = 0x281580u;
    
label_281584:
    // 0x281584: 0x15000e  .word       0x0015000E                   # INVALID     $zero, $s5, 0xE # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281584u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x281584 raw=0x0015000E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_281588:
    // 0x281588: 0x23001c  dmult       $at, $v1
    ctx->pc = 0x281588u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x281588 raw=0x0023001C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28158c:
    // 0x28158c: 0x31002a  slt         $zero, $at, $s1
    ctx->pc = 0x28158cu;
    SET_GPR_U64(ctx, 0, ((int64_t)GPR_S64(ctx, 1) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_281590:
    // 0x281590: 0x3f0038  .word       0x003F0038                   # dsll        $zero, $ra, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281590u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 31) << 0);
label_281594:
    // 0x281594: 0x4d0046  .word       0x004D0046                   # srlv        $zero, $t5, $v0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281594u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 2) & 0x1F));
label_281598:
    // 0x281598: 0x5b0054  .word       0x005B0054                   # dsllv       $zero, $k1, $v0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281598u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 27) << (GPR_U32(ctx, 2) & 0x3F));
label_28159c:
    // 0x28159c: 0x690062  .word       0x00690062                   # sub         $zero, $v1, $t1 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28159cu;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 3), GPR_U32(ctx, 9), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_2815a0:
    // 0x2815a0: 0x770070  tge         $v1, $s7, 1
    ctx->pc = 0x2815a0u;
    if (GPR_S64(ctx, 3) >= GPR_S64(ctx, 23)) { runtime->handleTrap(rdram, ctx); }
label_2815a4:
    // 0x2815a4: 0x85007e  .word       0x0085007E                   # dsrl32      $zero, $a1, 1 # 00800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2815a4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 5) >> (32 + 1));
label_2815a8:
    // 0x2815a8: 0x93008c  .word       0x0093008C                   # syscall     2 # 00930000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2815a8u;
    ctx->pc = 0x2815ACu;
runtime->handleSyscall(rdram, ctx, 0x24C02u);
label_2815ac:
    // 0x2815ac: 0xa1009a  .word       0x00A1009A                   # div         $zero, $a1, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2815acu;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2815b0:
    // 0x2815b0: 0xaf00a8  .word       0x00AF00A8                   # mfsa        $zero # 00AF0080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2815b0u;
    SET_GPR_U32(ctx, 0, ctx->sa);
label_2815b4:
    // 0x2815b4: 0xbd00b6  tne         $a1, $sp, 2
    ctx->pc = 0x2815b4u;
    if (GPR_U64(ctx, 5) != GPR_U64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_2815b8:
    // 0x2815b8: 0xcb00c4  .word       0x00CB00C4                   # sllv        $zero, $t3, $a2 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2815b8u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 6) & 0x1F));
label_2815bc:
    // 0x2815bc: 0xd900d2  .word       0x00D900D2                   # mflo        $zero # 00D900C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2815bcu;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_2815c0:
    // 0x2815c0: 0xe700e0  .word       0x00E700E0                   # add         $zero, $a3, $a3 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2815c0u;
    {     int32_t rs_val = GPR_S32(ctx, 7);     int32_t rt_val = GPR_S32(ctx, 7);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_2815c4:
    // 0x2815c4: 0xf500ee  .word       0x00F500EE                   # dsub        $zero, $a3, $s5 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2815c4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 7); int64_t b = (int64_t)GPR_S64(ctx, 21); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_2815c8:
    // 0x2815c8: 0x10300fc  .word       0x010300FC                   # dsll32      $zero, $v1, 3 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2815c8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 3) << (32 + 3));
label_2815cc:
    // 0x2815cc: 0x111010a  .word       0x0111010A                   # movz        $zero, $t0, $s1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2815ccu;
    if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 8));
label_2815d0:
    // 0x2815d0: 0x11f0118  .word       0x011F0118                   # mult        $zero, $t0, $ra # 00000100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2815d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 31); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2815d4:
    // 0x2815d4: 0x12d0126  .word       0x012D0126                   # xor         $zero, $t1, $t5 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2815d4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 13));
label_2815d8:
    // 0x2815d8: 0x13b0134  teq         $t1, $k1, 4
    ctx->pc = 0x2815d8u;
    if (GPR_U64(ctx, 9) == GPR_U64(ctx, 27)) { runtime->handleTrap(rdram, ctx); }
label_2815dc:
    // 0x2815dc: 0x1490142  .word       0x01490142                   # srl         $zero, $t1, 5 # 01400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2815dcu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 9), 5));
label_2815e0:
    // 0x2815e0: 0x1570150  .word       0x01570150                   # mfhi        $zero # 01570140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2815e0u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_2815e4:
    // 0x2815e4: 0x165015e  .word       0x0165015E                   # ddiv        $zero, $t3, $a1 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2815e4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x2815E4 raw=0x0165015E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2815e8:
    // 0x2815e8: 0x0  nop
    ctx->pc = 0x2815e8u;
    // NOP
label_2815ec:
    // 0x2815ec: 0x0  nop
    ctx->pc = 0x2815ecu;
    // NOP
label_2815f0:
    // 0x2815f0: 0x290000  .word       0x00290000                   # sll         $zero, $t1, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2815f0u;
    
label_2815f4:
    // 0x2815f4: 0x290029  .word       0x00290029                   # mtsa        $at # 00090000 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2815f4u;
    ctx->sa = GPR_U32(ctx, 1) & 0x7F;
label_2815f8:
    // 0x2815f8: 0x290029  .word       0x00290029                   # mtsa        $at # 00090000 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2815f8u;
    ctx->sa = GPR_U32(ctx, 1) & 0x7F;
label_2815fc:
    // 0x2815fc: 0x290029  .word       0x00290029                   # mtsa        $at # 00090000 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2815fcu;
    ctx->sa = GPR_U32(ctx, 1) & 0x7F;
label_281600:
    // 0x281600: 0x290029  .word       0x00290029                   # mtsa        $at # 00090000 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x281600u;
    ctx->sa = GPR_U32(ctx, 1) & 0x7F;
label_281604:
    // 0x281604: 0x520052  .word       0x00520052                   # mflo        $zero # 00520040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281604u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_281608:
    // 0x281608: 0x520052  .word       0x00520052                   # mflo        $zero # 00520040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281608u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_28160c:
    // 0x28160c: 0x520052  .word       0x00520052                   # mflo        $zero # 00520040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28160cu;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_281610:
    // 0x281610: 0x520052  .word       0x00520052                   # mflo        $zero # 00520040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281610u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_281614:
    // 0x281614: 0x7b0052  .word       0x007B0052                   # mflo        $zero # 007B0040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281614u;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_281618:
    // 0x281618: 0xa400a4  .word       0x00A400A4                   # and         $zero, $a1, $a0 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281618u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_28161c:
    // 0x28161c: 0xa400a4  .word       0x00A400A4                   # and         $zero, $a1, $a0 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28161cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_281620:
    // 0x281620: 0xa400a4  .word       0x00A400A4                   # and         $zero, $a1, $a0 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281620u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_281624:
    // 0x281624: 0xa400a4  .word       0x00A400A4                   # and         $zero, $a1, $a0 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281624u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_281628:
    // 0x281628: 0xcd00cd  break       205, 3
    ctx->pc = 0x281628u;
    runtime->handleBreak(rdram, ctx);
label_28162c:
    // 0x28162c: 0xcd00cd  break       205, 3
    ctx->pc = 0x28162cu;
    runtime->handleBreak(rdram, ctx);
label_281630:
    // 0x281630: 0xcd00cd  break       205, 3
    ctx->pc = 0x281630u;
    runtime->handleBreak(rdram, ctx);
label_281634:
    // 0x281634: 0xcd00cd  break       205, 3
    ctx->pc = 0x281634u;
    runtime->handleBreak(rdram, ctx);
label_281638:
    // 0x281638: 0xf600cd  break       246, 3
    ctx->pc = 0x281638u;
    runtime->handleBreak(rdram, ctx);
label_28163c:
    // 0x28163c: 0x148011f  .word       0x0148011F                   # ddivu       $zero, $t2, $t0 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28163cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x28163C raw=0x0148011F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_281640:
    // 0x281640: 0x1480148  .word       0x01480148                   # jr          $t2 # 00080140 <InstrIdType: CPU_SPECIAL>
label_281644:
    if (ctx->pc == 0x281644u) {
        ctx->pc = 0x281644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281640u;
        // 0x281644: 0x1480148  .word       0x01480148                   # jr          $t2 # 00080140 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $10 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x281648u;
        goto label_281648;
    }
    ctx->pc = 0x281640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 10);
        ctx->pc = 0x281644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281640u;
        // 0x281644: 0x1480148  .word       0x01480148                   # jr          $t2 # 00080140 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $10 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281640u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x281648u;
label_281648:
    // 0x281648: 0x1480148  .word       0x01480148                   # jr          $t2 # 00080140 <InstrIdType: CPU_SPECIAL>
label_28164c:
    if (ctx->pc == 0x28164Cu) {
        ctx->pc = 0x28164Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281648u;
        // 0x28164c: 0x19a0171  tgeu        $t4, $k0, 5 (Delay Slot)
        if (GPR_U64(ctx, 12) >= GPR_U64(ctx, 26)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x281650u;
        goto label_281650;
    }
    ctx->pc = 0x281648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 10);
        ctx->pc = 0x28164Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281648u;
        // 0x28164c: 0x19a0171  tgeu        $t4, $k0, 5 (Delay Slot)
        if (GPR_U64(ctx, 12) >= GPR_U64(ctx, 26)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281648u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x281650u;
label_281650:
    // 0x281650: 0x19a019a  .word       0x019A019A                   # div         $zero, $t4, $k0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281650u;
    { int32_t divisor = GPR_S32(ctx, 26);    int32_t dividend = GPR_S32(ctx, 12);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_281654:
    // 0x281654: 0x19a019a  .word       0x019A019A                   # div         $zero, $t4, $k0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281654u;
    { int32_t divisor = GPR_S32(ctx, 26);    int32_t dividend = GPR_S32(ctx, 12);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_281658:
    // 0x281658: 0x19a019a  .word       0x019A019A                   # div         $zero, $t4, $k0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281658u;
    { int32_t divisor = GPR_S32(ctx, 26);    int32_t dividend = GPR_S32(ctx, 12);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_28165c:
    // 0x28165c: 0x19a019a  .word       0x019A019A                   # div         $zero, $t4, $k0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28165cu;
    { int32_t divisor = GPR_S32(ctx, 26);    int32_t dividend = GPR_S32(ctx, 12);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_281660:
    // 0x281660: 0x19a019a  .word       0x019A019A                   # div         $zero, $t4, $k0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281660u;
    { int32_t divisor = GPR_S32(ctx, 26);    int32_t dividend = GPR_S32(ctx, 12);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_281664:
    // 0x281664: 0x19a019a  .word       0x019A019A                   # div         $zero, $t4, $k0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281664u;
    { int32_t divisor = GPR_S32(ctx, 26);    int32_t dividend = GPR_S32(ctx, 12);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_281668:
    // 0x281668: 0x19a019a  .word       0x019A019A                   # div         $zero, $t4, $k0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281668u;
    { int32_t divisor = GPR_S32(ctx, 26);    int32_t dividend = GPR_S32(ctx, 12);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_28166c:
    // 0x28166c: 0x19a019a  .word       0x019A019A                   # div         $zero, $t4, $k0 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28166cu;
    { int32_t divisor = GPR_S32(ctx, 26);    int32_t dividend = GPR_S32(ctx, 12);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_281670:
    // 0x281670: 0x1ec01c3  .word       0x01EC01C3                   # sra         $zero, $t4, 7 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281670u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 12), 7));
label_281674:
    // 0x281674: 0x23e0215  .word       0x023E0215                   # INVALID     $s1, $fp, 0x215 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281674u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x281674 raw=0x023E0215"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_281678:
    // 0x281678: 0x2670267  .word       0x02670267                   # nor         $zero, $s3, $a3 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281678u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 19) | GPR_U64(ctx, 7)));
label_28167c:
    // 0x28167c: 0x2670267  .word       0x02670267                   # nor         $zero, $s3, $a3 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28167cu;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 19) | GPR_U64(ctx, 7)));
label_281680:
    // 0x281680: 0x2900267  .word       0x02900267                   # nor         $zero, $s4, $s0 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281680u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 20) | GPR_U64(ctx, 16)));
label_281684:
    // 0x281684: 0x2e202b9  .word       0x02E202B9                   # INVALID     $s7, $v0, 0x2B9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281684u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x281684 raw=0x02E202B9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_281688:
    // 0x281688: 0x334030b  .word       0x0334030B                   # movn        $zero, $t9, $s4 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281688u;
    if (GPR_U64(ctx, 20) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 25));
label_28168c:
    // 0x28168c: 0x3340334  teq         $t9, $s4, 12
    ctx->pc = 0x28168cu;
    if (GPR_U64(ctx, 25) == GPR_U64(ctx, 20)) { runtime->handleTrap(rdram, ctx); }
label_281690:
    // 0x281690: 0x3340334  teq         $t9, $s4, 12
    ctx->pc = 0x281690u;
    if (GPR_U64(ctx, 25) == GPR_U64(ctx, 20)) { runtime->handleTrap(rdram, ctx); }
label_281694:
    // 0x281694: 0x35d035d  .word       0x035D035D                   # dmultu      $k0, $sp # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281694u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x281694 raw=0x035D035D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_281698:
    // 0x281698: 0x35d035d  .word       0x035D035D                   # dmultu      $k0, $sp # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x281698u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x281698 raw=0x035D035D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_28169c:
    // 0x28169c: 0x35d035d  .word       0x035D035D                   # dmultu      $k0, $sp # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28169cu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x28169C raw=0x035D035D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2816a0:
    // 0x2816a0: 0x35d035d  .word       0x035D035D                   # dmultu      $k0, $sp # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2816a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x2816A0 raw=0x035D035D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2816a4:
    // 0x2816a4: 0x35d035d  .word       0x035D035D                   # dmultu      $k0, $sp # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2816a4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x2816A4 raw=0x035D035D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2816a8:
    // 0x2816a8: 0x35d035d  .word       0x035D035D                   # dmultu      $k0, $sp # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2816a8u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x2816A8 raw=0x035D035D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2816ac:
    // 0x2816ac: 0x35d035d  .word       0x035D035D                   # dmultu      $k0, $sp # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2816acu;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x2816AC raw=0x035D035D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2816b0:
    // 0x2816b0: 0x35d035d  .word       0x035D035D                   # dmultu      $k0, $sp # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2816b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x2816B0 raw=0x035D035D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2816b4:
    // 0x2816b4: 0x35d035d  .word       0x035D035D                   # dmultu      $k0, $sp # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2816b4u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x2816B4 raw=0x035D035D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2816b8:
    // 0x2816b8: 0x3af0386  .word       0x03AF0386                   # srlv        $zero, $t7, $sp # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2816b8u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 15), GPR_U32(ctx, 29) & 0x1F));
label_2816bc:
    // 0x2816bc: 0x3d803d8  .word       0x03D803D8                   # mult        $zero, $fp, $t8 # 000003C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2816bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 24); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2816c0:
    // 0x2816c0: 0x3d803d8  .word       0x03D803D8                   # mult        $zero, $fp, $t8 # 000003C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2816c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 24); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2816c4:
    // 0x2816c4: 0x3d803d8  .word       0x03D803D8                   # mult        $zero, $fp, $t8 # 000003C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2816c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 24); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2816c8:
    // 0x2816c8: 0x40103d8  bgez        $zero, . + 4 + (0x3D8 << 2)
label_2816cc:
    if (ctx->pc == 0x2816CCu) {
        ctx->pc = 0x2816CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2816C8u;
        // 0x2816cc: 0x4010401  bgez        $zero, . + 4 + (0x401 << 2) (Delay Slot)
        // REGIMM branch instruction to 0x2826D4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2816D0u;
        goto label_2816d0;
    }
    ctx->pc = 0x2816C8u;
    {
        const bool branch_taken_0x2816c8 = (GPR_S32(ctx, 0) >= 0);
        ctx->pc = 0x2816CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2816C8u;
        // 0x2816cc: 0x4010401  bgez        $zero, . + 4 + (0x401 << 2) (Delay Slot)
        // REGIMM branch instruction to 0x2826D4 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2816c8) {
            ctx->pc = 0x28262Cu;
            { ctx->pc = 0x28262c; return; }
        }
    }
    ctx->pc = 0x2816D0u;
label_2816d0:
    // 0x2816d0: 0x4010401  bgez        $zero, . + 4 + (0x401 << 2)
label_2816d4:
    if (ctx->pc == 0x2816D4u) {
        ctx->pc = 0x2816D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2816D0u;
        // 0x2816d4: 0x4010401  bgez        $zero, . + 4 + (0x401 << 2) (Delay Slot)
        // REGIMM branch instruction to 0x2826DC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2816D8u;
        goto label_2816d8;
    }
    ctx->pc = 0x2816D0u;
    {
        const bool branch_taken_0x2816d0 = (GPR_S32(ctx, 0) >= 0);
        ctx->pc = 0x2816D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2816D0u;
        // 0x2816d4: 0x4010401  bgez        $zero, . + 4 + (0x401 << 2) (Delay Slot)
        // REGIMM branch instruction to 0x2826DC - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2816d0) {
            ctx->pc = 0x2826D8u;
            { ctx->pc = 0x2826d8; return; }
        }
    }
    ctx->pc = 0x2816D8u;
label_2816d8:
    // 0x2816d8: 0x4010401  bgez        $zero, . + 4 + (0x401 << 2)
label_2816dc:
    if (ctx->pc == 0x2816DCu) {
        ctx->pc = 0x2816DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2816D8u;
        // 0x2816dc: 0x4010401  bgez        $zero, . + 4 + (0x401 << 2) (Delay Slot)
        // REGIMM branch instruction to 0x2826E4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2816E0u;
        goto label_2816e0;
    }
    ctx->pc = 0x2816D8u;
    {
        const bool branch_taken_0x2816d8 = (GPR_S32(ctx, 0) >= 0);
        ctx->pc = 0x2816DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2816D8u;
        // 0x2816dc: 0x4010401  bgez        $zero, . + 4 + (0x401 << 2) (Delay Slot)
        // REGIMM branch instruction to 0x2826E4 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2816d8) {
            ctx->pc = 0x2826E0u;
            { ctx->pc = 0x2826e0; return; }
        }
    }
    ctx->pc = 0x2816E0u;
label_2816e0:
    // 0x2816e0: 0x4010401  bgez        $zero, . + 4 + (0x401 << 2)
label_2816e4:
    if (ctx->pc == 0x2816E4u) {
        ctx->pc = 0x2816E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2816E0u;
        // 0x2816e4: 0x4010401  bgez        $zero, . + 4 + (0x401 << 2) (Delay Slot)
        // REGIMM branch instruction to 0x2826EC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x2816E8u;
        goto label_2816e8;
    }
    ctx->pc = 0x2816E0u;
    {
        const bool branch_taken_0x2816e0 = (GPR_S32(ctx, 0) >= 0);
        ctx->pc = 0x2816E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2816E0u;
        // 0x2816e4: 0x4010401  bgez        $zero, . + 4 + (0x401 << 2) (Delay Slot)
        // REGIMM branch instruction to 0x2826EC - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x2816e0) {
            ctx->pc = 0x2826E8u;
            { ctx->pc = 0x2826e8; return; }
        }
    }
    ctx->pc = 0x2816E8u;
label_2816e8:
    // 0x2816e8: 0x4010401  bgez        $zero, . + 4 + (0x401 << 2)
label_2816ec:
    if (ctx->pc == 0x2816ECu) {
        ctx->pc = 0x2816ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2816E8u;
        // 0x2816ec: 0x42a0401  tlti        $at, 0x401 (Delay Slot)
        if (GPR_S64(ctx, 1) < (int64_t)(int32_t)1025) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2816F0u;
        goto label_2816f0;
    }
    ctx->pc = 0x2816E8u;
    {
        const bool branch_taken_0x2816e8 = (GPR_S32(ctx, 0) >= 0);
        ctx->pc = 0x2816ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2816E8u;
        // 0x2816ec: 0x42a0401  tlti        $at, 0x401 (Delay Slot)
        if (GPR_S64(ctx, 1) < (int64_t)(int32_t)1025) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2816e8) {
            ctx->pc = 0x2826F0u;
            { ctx->pc = 0x2826f0; return; }
        }
    }
    ctx->pc = 0x2816F0u;
label_2816f0:
    // 0x2816f0: 0x47c0453  .word       0x047C0453                   # INVALID     $v1, $gp, 0x453 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x2816f0u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x1C at 0x2816F0 raw=0x047C0453");
 /* MITIGATED */
label_2816f4:
    // 0x2816f4: 0x4ce04a5  tnei        $a2, 0x4A5
    ctx->pc = 0x2816f4u;
    if (GPR_S64(ctx, 6) != (int64_t)(int32_t)1189) { runtime->handleTrap(rdram, ctx); }
label_2816f8:
    // 0x2816f8: 0x4ce04ce  tnei        $a2, 0x4CE
    ctx->pc = 0x2816f8u;
    if (GPR_S64(ctx, 6) != (int64_t)(int32_t)1230) { runtime->handleTrap(rdram, ctx); }
label_2816fc:
    // 0x2816fc: 0x4ce04ce  tnei        $a2, 0x4CE
    ctx->pc = 0x2816fcu;
    if (GPR_S64(ctx, 6) != (int64_t)(int32_t)1230) { runtime->handleTrap(rdram, ctx); }
label_281700:
    // 0x281700: 0x52004f7  bltz        $t1, . + 4 + (0x4F7 << 2)
label_281704:
    if (ctx->pc == 0x281704u) {
        ctx->pc = 0x281704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281700u;
        // 0x281704: 0x5200520  bltz        $t1, . + 4 + (0x520 << 2) (Delay Slot)
        // REGIMM branch instruction to 0x282B88 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x281708u;
        goto label_281708;
    }
    ctx->pc = 0x281700u;
    {
        const bool branch_taken_0x281700 = (GPR_S32(ctx, 9) < 0);
        ctx->pc = 0x281704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281700u;
        // 0x281704: 0x5200520  bltz        $t1, . + 4 + (0x520 << 2) (Delay Slot)
        // REGIMM branch instruction to 0x282B88 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x281700) {
            ctx->pc = 0x282AE0u;
            { ctx->pc = 0x282ae0; return; }
        }
    }
    ctx->pc = 0x281708u;
label_281708:
    // 0x281708: 0x5200520  bltz        $t1, . + 4 + (0x520 << 2)
label_28170c:
    if (ctx->pc == 0x28170Cu) {
        ctx->pc = 0x28170Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281708u;
        // 0x28170c: 0x5200520  bltz        $t1, . + 4 + (0x520 << 2) (Delay Slot)
        // REGIMM branch instruction to 0x282B90 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x281710u;
        goto label_281710;
    }
    ctx->pc = 0x281708u;
    {
        const bool branch_taken_0x281708 = (GPR_S32(ctx, 9) < 0);
        ctx->pc = 0x28170Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281708u;
        // 0x28170c: 0x5200520  bltz        $t1, . + 4 + (0x520 << 2) (Delay Slot)
        // REGIMM branch instruction to 0x282B90 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x281708) {
            ctx->pc = 0x282B8Cu;
            { ctx->pc = 0x282b8c; return; }
        }
    }
    ctx->pc = 0x281710u;
label_281710:
    // 0x281710: 0x5200520  bltz        $t1, . + 4 + (0x520 << 2)
label_281714:
    if (ctx->pc == 0x281714u) {
        ctx->pc = 0x281714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281710u;
        // 0x281714: 0x5200520  bltz        $t1, . + 4 + (0x520 << 2) (Delay Slot)
        // REGIMM branch instruction to 0x282B98 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x281718u;
        goto label_281718;
    }
    ctx->pc = 0x281710u;
    {
        const bool branch_taken_0x281710 = (GPR_S32(ctx, 9) < 0);
        ctx->pc = 0x281714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281710u;
        // 0x281714: 0x5200520  bltz        $t1, . + 4 + (0x520 << 2) (Delay Slot)
        // REGIMM branch instruction to 0x282B98 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x281710) {
            ctx->pc = 0x282B94u;
            { ctx->pc = 0x282b94; return; }
        }
    }
    ctx->pc = 0x281718u;
label_281718:
    // 0x281718: 0x5200520  bltz        $t1, . + 4 + (0x520 << 2)
label_28171c:
    if (ctx->pc == 0x28171Cu) {
        ctx->pc = 0x28171Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281718u;
        // 0x28171c: 0x5200520  bltz        $t1, . + 4 + (0x520 << 2) (Delay Slot)
        // REGIMM branch instruction to 0x282BA0 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x281720u;
        goto label_281720;
    }
    ctx->pc = 0x281718u;
    {
        const bool branch_taken_0x281718 = (GPR_S32(ctx, 9) < 0);
        ctx->pc = 0x28171Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281718u;
        // 0x28171c: 0x5200520  bltz        $t1, . + 4 + (0x520 << 2) (Delay Slot)
        // REGIMM branch instruction to 0x282BA0 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x281718) {
            ctx->pc = 0x282B9Cu;
            { ctx->pc = 0x282b9c; return; }
        }
    }
    ctx->pc = 0x281720u;
label_281720:
    // 0x281720: 0x5200520  bltz        $t1, . + 4 + (0x520 << 2)
label_281724:
    if (ctx->pc == 0x281724u) {
        ctx->pc = 0x281724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281720u;
        // 0x281724: 0x5720549  bltzall     $t3, . + 4 + (0x549 << 2) (Delay Slot)
        // REGIMM branch instruction to 0x282C4C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x281728u;
        goto label_281728;
    }
    ctx->pc = 0x281720u;
    {
        const bool branch_taken_0x281720 = (GPR_S32(ctx, 9) < 0);
        ctx->pc = 0x281724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281720u;
        // 0x281724: 0x5720549  bltzall     $t3, . + 4 + (0x549 << 2) (Delay Slot)
        // REGIMM branch instruction to 0x282C4C - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x281720) {
            ctx->pc = 0x282BA4u;
            { ctx->pc = 0x282ba4; return; }
        }
    }
    ctx->pc = 0x281728u;
label_281728:
    // 0x281728: 0x5c4059b  .word       0x05C4059B                   # INVALID     $t6, $a0, 0x59B # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x281728u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x4 at 0x281728 raw=0x05C4059B");
 /* MITIGATED */
label_28172c:
    // 0x28172c: 0x5c405c4  .word       0x05C405C4                   # INVALID     $t6, $a0, 0x5C4 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x28172cu;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x4 at 0x28172C raw=0x05C405C4");
 /* MITIGATED */
label_281730:
    // 0x281730: 0x5c405c4  .word       0x05C405C4                   # INVALID     $t6, $a0, 0x5C4 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x281730u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x4 at 0x281730 raw=0x05C405C4");
 /* MITIGATED */
label_281734:
    // 0x281734: 0x5ed05c4  .word       0x05ED05C4                   # INVALID     $t7, $t5, 0x5C4 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x281734u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0xD at 0x281734 raw=0x05ED05C4");
 /* MITIGATED */
label_281738:
    // 0x281738: 0x6160616  .word       0x06160616                   # INVALID     $s0, $s6, 0x616 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x281738u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x16 at 0x281738 raw=0x06160616");
 /* MITIGATED */
label_28173c:
    // 0x28173c: 0x6160616  .word       0x06160616                   # INVALID     $s0, $s6, 0x616 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x28173cu;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x16 at 0x28173C raw=0x06160616");
 /* MITIGATED */
label_281740:
    // 0x281740: 0x6160616  .word       0x06160616                   # INVALID     $s0, $s6, 0x616 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x281740u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x16 at 0x281740 raw=0x06160616");
 /* MITIGATED */
label_281744:
    // 0x281744: 0x6160616  .word       0x06160616                   # INVALID     $s0, $s6, 0x616 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x281744u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x16 at 0x281744 raw=0x06160616");
 /* MITIGATED */
label_281748:
    // 0x281748: 0x668063f  tgei        $s3, 0x63F
    ctx->pc = 0x281748u;
    if (GPR_S64(ctx, 19) >= (int64_t)(int32_t)1599) { runtime->handleTrap(rdram, ctx); }
label_28174c:
    // 0x28174c: 0x6ba0691  .word       0x06BA0691                   # INVALID     $s5, $k0, 0x691 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x28174cu;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x1A at 0x28174C raw=0x06BA0691");
 /* MITIGATED */
label_281750:
    // 0x281750: 0x70c06e3  teqi        $t8, 0x6E3
    ctx->pc = 0x281750u;
    if (GPR_S64(ctx, 24) == (int64_t)(int32_t)1763) { runtime->handleTrap(rdram, ctx); }
label_281754:
    // 0x281754: 0x7350735  .word       0x07350735                   # INVALID     $t9, $s5, 0x735 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x281754u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x15 at 0x281754 raw=0x07350735");
 /* MITIGATED */
label_281758:
    // 0x281758: 0x75e0735  .word       0x075E0735                   # INVALID     $k0, $fp, 0x735 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x281758u;
//     throw std::runtime_error("Unhandled REGIMM instruction: 0x1E at 0x281758 raw=0x075E0735");
 /* MITIGATED */
label_28175c:
    // 0x28175c: 0x7b00787  bltzal      $sp, . + 4 + (0x787 << 2)
label_281760:
    if (ctx->pc == 0x281760u) {
        ctx->pc = 0x281760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28175Cu;
        // 0x281760: 0x7b007b0  bltzal      $sp, . + 4 + (0x7B0 << 2) (Delay Slot)
        // REGIMM branch instruction to 0x283624 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x281764u;
        goto label_281764;
    }
    ctx->pc = 0x28175Cu;
    {
        const bool branch_taken_0x28175c = (GPR_S32(ctx, 29) < 0);
        SET_GPR_U32(ctx, 31, 0x281764u);
        ctx->pc = 0x281760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28175Cu;
        // 0x281760: 0x7b007b0  bltzal      $sp, . + 4 + (0x7B0 << 2) (Delay Slot)
        // REGIMM branch instruction to 0x283624 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x28175c) {
            ctx->pc = 0x28357Cu;
            { ctx->pc = 0x28357c; return; }
        }
    }
    ctx->pc = 0x281764u;
label_281764:
    // 0x281764: 0x7b007b0  bltzal      $sp, . + 4 + (0x7B0 << 2)
label_281768:
    if (ctx->pc == 0x281768u) {
        ctx->pc = 0x281768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281764u;
        // 0x281768: 0x7b007b0  bltzal      $sp, . + 4 + (0x7B0 << 2) (Delay Slot)
        // REGIMM branch instruction to 0x28362C - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28176Cu;
        goto label_28176c;
    }
    ctx->pc = 0x281764u;
    {
        const bool branch_taken_0x281764 = (GPR_S32(ctx, 29) < 0);
        SET_GPR_U32(ctx, 31, 0x28176Cu);
        ctx->pc = 0x281768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281764u;
        // 0x281768: 0x7b007b0  bltzal      $sp, . + 4 + (0x7B0 << 2) (Delay Slot)
        // REGIMM branch instruction to 0x28362C - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x281764) {
            ctx->pc = 0x283628u;
            { ctx->pc = 0x283628; return; }
        }
    }
    ctx->pc = 0x28176Cu;
label_28176c:
    // 0x28176c: 0x80207d9  j           func_081F64
label_281770:
    if (ctx->pc == 0x281770u) {
        ctx->pc = 0x281770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28176Cu;
        // 0x281770: 0x82b082b  j           func_AC20AC (Delay Slot)
        // J 0xAC20AC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x281774u;
        goto label_281774;
    }
    ctx->pc = 0x28176Cu;
    ctx->pc = 0x281770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28176Cu;
    // 0x281770: 0x82b082b  j           func_AC20AC (Delay Slot)
    // J 0xAC20AC - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x81F64u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x81F64u, 0x28176Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x281774u;
label_281774:
    // 0x281774: 0x82b082b  j           func_AC20AC
label_281778:
    if (ctx->pc == 0x281778u) {
        ctx->pc = 0x281778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281774u;
        // 0x281778: 0x82b082b  j           func_AC20AC (Delay Slot)
        // J 0xAC20AC - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28177Cu;
        goto label_28177c;
    }
    ctx->pc = 0x281774u;
    ctx->pc = 0x281778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281774u;
    // 0x281778: 0x82b082b  j           func_AC20AC (Delay Slot)
    // J 0xAC20AC - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xAC20ACu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xAC20ACu, 0x281774u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x28177Cu;
label_28177c:
    // 0x28177c: 0x854082b  j           func_15020AC
label_281780:
    if (ctx->pc == 0x281780u) {
        ctx->pc = 0x281780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28177Cu;
        // 0x281780: 0x8a6087d  j           func_29821F4 (Delay Slot)
        // J 0x29821F4 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x281784u;
        goto label_281784;
    }
    ctx->pc = 0x28177Cu;
    ctx->pc = 0x281780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28177Cu;
    // 0x281780: 0x8a6087d  j           func_29821F4 (Delay Slot)
    // J 0x29821F4 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x15020ACu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15020ACu, 0x28177Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x281784u;
label_281784:
    // 0x281784: 0x8a608a6  j           func_2982298
label_281788:
    if (ctx->pc == 0x281788u) {
        ctx->pc = 0x281788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281784u;
        // 0x281788: 0x8a608a6  j           func_2982298 (Delay Slot)
        // J 0x2982298 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x28178Cu;
        goto label_28178c;
    }
    ctx->pc = 0x281784u;
    ctx->pc = 0x281788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281784u;
    // 0x281788: 0x8a608a6  j           func_2982298 (Delay Slot)
    // J 0x2982298 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x2982298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2982298u, 0x281784u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x28178Cu;
label_28178c:
    // 0x28178c: 0x8a6  .word       0x000008A6                   # xor         $at, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28178cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_281790:
    // 0x281790: 0xb0000  sll         $zero, $t3, 0
    ctx->pc = 0x281790u;
    
label_281794:
    // 0x281794: 0x25001d  dmultu      $at, $a1
    ctx->pc = 0x281794u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x281794 raw=0x0025001D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_281798:
    // 0x281798: 0x3d002d  daddu       $zero, $at, $sp
    ctx->pc = 0x281798u;
    SET_GPR_U64(ctx, 0, (uint64_t)GPR_U64(ctx, 1) + (uint64_t)GPR_U64(ctx, 29));
label_28179c:
    // 0x28179c: 0x65004f  .word       0x0065004F                   # sync # 00650000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x28179cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    ctx->pc = 0x2817a0u;
    return;
}

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


void FUN_0019b8d0_part469(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x280110u: goto label_280110;
        case 0x280114u: goto label_280114;
        case 0x280118u: goto label_280118;
        case 0x28011cu: goto label_28011c;
        case 0x280120u: goto label_280120;
        case 0x280124u: goto label_280124;
        case 0x280128u: goto label_280128;
        case 0x28012cu: goto label_28012c;
        case 0x280130u: goto label_280130;
        case 0x280134u: goto label_280134;
        case 0x280138u: goto label_280138;
        case 0x28013cu: goto label_28013c;
        case 0x280140u: goto label_280140;
        case 0x280144u: goto label_280144;
        case 0x280148u: goto label_280148;
        case 0x28014cu: goto label_28014c;
        case 0x280150u: goto label_280150;
        case 0x280154u: goto label_280154;
        case 0x280158u: goto label_280158;
        case 0x28015cu: goto label_28015c;
        case 0x280160u: goto label_280160;
        case 0x280164u: goto label_280164;
        case 0x280168u: goto label_280168;
        case 0x28016cu: goto label_28016c;
        case 0x280170u: goto label_280170;
        case 0x280174u: goto label_280174;
        case 0x280178u: goto label_280178;
        case 0x28017cu: goto label_28017c;
        case 0x280180u: goto label_280180;
        case 0x280184u: goto label_280184;
        case 0x280188u: goto label_280188;
        case 0x28018cu: goto label_28018c;
        case 0x280190u: goto label_280190;
        case 0x280194u: goto label_280194;
        case 0x280198u: goto label_280198;
        case 0x28019cu: goto label_28019c;
        case 0x2801a0u: goto label_2801a0;
        case 0x2801a4u: goto label_2801a4;
        case 0x2801a8u: goto label_2801a8;
        case 0x2801acu: goto label_2801ac;
        case 0x2801b0u: goto label_2801b0;
        case 0x2801b4u: goto label_2801b4;
        case 0x2801b8u: goto label_2801b8;
        case 0x2801bcu: goto label_2801bc;
        case 0x2801c0u: goto label_2801c0;
        case 0x2801c4u: goto label_2801c4;
        case 0x2801c8u: goto label_2801c8;
        case 0x2801ccu: goto label_2801cc;
        case 0x2801d0u: goto label_2801d0;
        case 0x2801d4u: goto label_2801d4;
        case 0x2801d8u: goto label_2801d8;
        case 0x2801dcu: goto label_2801dc;
        case 0x2801e0u: goto label_2801e0;
        case 0x2801e4u: goto label_2801e4;
        case 0x2801e8u: goto label_2801e8;
        case 0x2801ecu: goto label_2801ec;
        case 0x2801f0u: goto label_2801f0;
        case 0x2801f4u: goto label_2801f4;
        case 0x2801f8u: goto label_2801f8;
        case 0x2801fcu: goto label_2801fc;
        case 0x280200u: goto label_280200;
        case 0x280204u: goto label_280204;
        case 0x280208u: goto label_280208;
        case 0x28020cu: goto label_28020c;
        case 0x280210u: goto label_280210;
        case 0x280214u: goto label_280214;
        case 0x280218u: goto label_280218;
        case 0x28021cu: goto label_28021c;
        case 0x280220u: goto label_280220;
        case 0x280224u: goto label_280224;
        case 0x280228u: goto label_280228;
        case 0x28022cu: goto label_28022c;
        case 0x280230u: goto label_280230;
        case 0x280234u: goto label_280234;
        case 0x280238u: goto label_280238;
        case 0x28023cu: goto label_28023c;
        case 0x280240u: goto label_280240;
        case 0x280244u: goto label_280244;
        case 0x280248u: goto label_280248;
        case 0x28024cu: goto label_28024c;
        case 0x280250u: goto label_280250;
        case 0x280254u: goto label_280254;
        case 0x280258u: goto label_280258;
        case 0x28025cu: goto label_28025c;
        case 0x280260u: goto label_280260;
        case 0x280264u: goto label_280264;
        case 0x280268u: goto label_280268;
        case 0x28026cu: goto label_28026c;
        case 0x280270u: goto label_280270;
        case 0x280274u: goto label_280274;
        case 0x280278u: goto label_280278;
        case 0x28027cu: goto label_28027c;
        case 0x280280u: goto label_280280;
        case 0x280284u: goto label_280284;
        case 0x280288u: goto label_280288;
        case 0x28028cu: goto label_28028c;
        case 0x280290u: goto label_280290;
        case 0x280294u: goto label_280294;
        case 0x280298u: goto label_280298;
        case 0x28029cu: goto label_28029c;
        case 0x2802a0u: goto label_2802a0;
        case 0x2802a4u: goto label_2802a4;
        case 0x2802a8u: goto label_2802a8;
        case 0x2802acu: goto label_2802ac;
        case 0x2802b0u: goto label_2802b0;
        case 0x2802b4u: goto label_2802b4;
        case 0x2802b8u: goto label_2802b8;
        case 0x2802bcu: goto label_2802bc;
        case 0x2802c0u: goto label_2802c0;
        case 0x2802c4u: goto label_2802c4;
        case 0x2802c8u: goto label_2802c8;
        case 0x2802ccu: goto label_2802cc;
        case 0x2802d0u: goto label_2802d0;
        case 0x2802d4u: goto label_2802d4;
        case 0x2802d8u: goto label_2802d8;
        case 0x2802dcu: goto label_2802dc;
        case 0x2802e0u: goto label_2802e0;
        case 0x2802e4u: goto label_2802e4;
        case 0x2802e8u: goto label_2802e8;
        case 0x2802ecu: goto label_2802ec;
        case 0x2802f0u: goto label_2802f0;
        case 0x2802f4u: goto label_2802f4;
        case 0x2802f8u: goto label_2802f8;
        case 0x2802fcu: goto label_2802fc;
        case 0x280300u: goto label_280300;
        case 0x280304u: goto label_280304;
        case 0x280308u: goto label_280308;
        case 0x28030cu: goto label_28030c;
        case 0x280310u: goto label_280310;
        case 0x280314u: goto label_280314;
        case 0x280318u: goto label_280318;
        case 0x28031cu: goto label_28031c;
        case 0x280320u: goto label_280320;
        case 0x280324u: goto label_280324;
        case 0x280328u: goto label_280328;
        case 0x28032cu: goto label_28032c;
        case 0x280330u: goto label_280330;
        case 0x280334u: goto label_280334;
        case 0x280338u: goto label_280338;
        case 0x28033cu: goto label_28033c;
        case 0x280340u: goto label_280340;
        case 0x280344u: goto label_280344;
        case 0x280348u: goto label_280348;
        case 0x28034cu: goto label_28034c;
        case 0x280350u: goto label_280350;
        case 0x280354u: goto label_280354;
        case 0x280358u: goto label_280358;
        case 0x28035cu: goto label_28035c;
        case 0x280360u: goto label_280360;
        case 0x280364u: goto label_280364;
        case 0x280368u: goto label_280368;
        case 0x28036cu: goto label_28036c;
        case 0x280370u: goto label_280370;
        case 0x280374u: goto label_280374;
        case 0x280378u: goto label_280378;
        case 0x28037cu: goto label_28037c;
        case 0x280380u: goto label_280380;
        case 0x280384u: goto label_280384;
        case 0x280388u: goto label_280388;
        case 0x28038cu: goto label_28038c;
        case 0x280390u: goto label_280390;
        case 0x280394u: goto label_280394;
        case 0x280398u: goto label_280398;
        case 0x28039cu: goto label_28039c;
        case 0x2803a0u: goto label_2803a0;
        case 0x2803a4u: goto label_2803a4;
        case 0x2803a8u: goto label_2803a8;
        case 0x2803acu: goto label_2803ac;
        case 0x2803b0u: goto label_2803b0;
        case 0x2803b4u: goto label_2803b4;
        case 0x2803b8u: goto label_2803b8;
        case 0x2803bcu: goto label_2803bc;
        case 0x2803c0u: goto label_2803c0;
        case 0x2803c4u: goto label_2803c4;
        case 0x2803c8u: goto label_2803c8;
        case 0x2803ccu: goto label_2803cc;
        case 0x2803d0u: goto label_2803d0;
        case 0x2803d4u: goto label_2803d4;
        case 0x2803d8u: goto label_2803d8;
        case 0x2803dcu: goto label_2803dc;
        case 0x2803e0u: goto label_2803e0;
        case 0x2803e4u: goto label_2803e4;
        case 0x2803e8u: goto label_2803e8;
        case 0x2803ecu: goto label_2803ec;
        case 0x2803f0u: goto label_2803f0;
        case 0x2803f4u: goto label_2803f4;
        case 0x2803f8u: goto label_2803f8;
        case 0x2803fcu: goto label_2803fc;
        case 0x280400u: goto label_280400;
        case 0x280404u: goto label_280404;
        case 0x280408u: goto label_280408;
        case 0x28040cu: goto label_28040c;
        case 0x280410u: goto label_280410;
        case 0x280414u: goto label_280414;
        case 0x280418u: goto label_280418;
        case 0x28041cu: goto label_28041c;
        case 0x280420u: goto label_280420;
        case 0x280424u: goto label_280424;
        case 0x280428u: goto label_280428;
        case 0x28042cu: goto label_28042c;
        case 0x280430u: goto label_280430;
        case 0x280434u: goto label_280434;
        case 0x280438u: goto label_280438;
        case 0x28043cu: goto label_28043c;
        case 0x280440u: goto label_280440;
        case 0x280444u: goto label_280444;
        case 0x280448u: goto label_280448;
        case 0x28044cu: goto label_28044c;
        case 0x280450u: goto label_280450;
        case 0x280454u: goto label_280454;
        case 0x280458u: goto label_280458;
        case 0x28045cu: goto label_28045c;
        case 0x280460u: goto label_280460;
        case 0x280464u: goto label_280464;
        case 0x280468u: goto label_280468;
        case 0x28046cu: goto label_28046c;
        case 0x280470u: goto label_280470;
        case 0x280474u: goto label_280474;
        case 0x280478u: goto label_280478;
        case 0x28047cu: goto label_28047c;
        case 0x280480u: goto label_280480;
        case 0x280484u: goto label_280484;
        case 0x280488u: goto label_280488;
        case 0x28048cu: goto label_28048c;
        case 0x280490u: goto label_280490;
        case 0x280494u: goto label_280494;
        case 0x280498u: goto label_280498;
        case 0x28049cu: goto label_28049c;
        case 0x2804a0u: goto label_2804a0;
        case 0x2804a4u: goto label_2804a4;
        case 0x2804a8u: goto label_2804a8;
        case 0x2804acu: goto label_2804ac;
        case 0x2804b0u: goto label_2804b0;
        case 0x2804b4u: goto label_2804b4;
        case 0x2804b8u: goto label_2804b8;
        case 0x2804bcu: goto label_2804bc;
        case 0x2804c0u: goto label_2804c0;
        case 0x2804c4u: goto label_2804c4;
        case 0x2804c8u: goto label_2804c8;
        case 0x2804ccu: goto label_2804cc;
        case 0x2804d0u: goto label_2804d0;
        case 0x2804d4u: goto label_2804d4;
        case 0x2804d8u: goto label_2804d8;
        case 0x2804dcu: goto label_2804dc;
        case 0x2804e0u: goto label_2804e0;
        case 0x2804e4u: goto label_2804e4;
        case 0x2804e8u: goto label_2804e8;
        case 0x2804ecu: goto label_2804ec;
        case 0x2804f0u: goto label_2804f0;
        case 0x2804f4u: goto label_2804f4;
        case 0x2804f8u: goto label_2804f8;
        case 0x2804fcu: goto label_2804fc;
        case 0x280500u: goto label_280500;
        case 0x280504u: goto label_280504;
        case 0x280508u: goto label_280508;
        case 0x28050cu: goto label_28050c;
        case 0x280510u: goto label_280510;
        case 0x280514u: goto label_280514;
        case 0x280518u: goto label_280518;
        case 0x28051cu: goto label_28051c;
        case 0x280520u: goto label_280520;
        case 0x280524u: goto label_280524;
        case 0x280528u: goto label_280528;
        case 0x28052cu: goto label_28052c;
        case 0x280530u: goto label_280530;
        case 0x280534u: goto label_280534;
        case 0x280538u: goto label_280538;
        case 0x28053cu: goto label_28053c;
        case 0x280540u: goto label_280540;
        case 0x280544u: goto label_280544;
        case 0x280548u: goto label_280548;
        case 0x28054cu: goto label_28054c;
        case 0x280550u: goto label_280550;
        case 0x280554u: goto label_280554;
        case 0x280558u: goto label_280558;
        case 0x28055cu: goto label_28055c;
        case 0x280560u: goto label_280560;
        case 0x280564u: goto label_280564;
        case 0x280568u: goto label_280568;
        case 0x28056cu: goto label_28056c;
        case 0x280570u: goto label_280570;
        case 0x280574u: goto label_280574;
        case 0x280578u: goto label_280578;
        case 0x28057cu: goto label_28057c;
        case 0x280580u: goto label_280580;
        case 0x280584u: goto label_280584;
        case 0x280588u: goto label_280588;
        case 0x28058cu: goto label_28058c;
        case 0x280590u: goto label_280590;
        case 0x280594u: goto label_280594;
        case 0x280598u: goto label_280598;
        case 0x28059cu: goto label_28059c;
        case 0x2805a0u: goto label_2805a0;
        case 0x2805a4u: goto label_2805a4;
        case 0x2805a8u: goto label_2805a8;
        case 0x2805acu: goto label_2805ac;
        case 0x2805b0u: goto label_2805b0;
        case 0x2805b4u: goto label_2805b4;
        case 0x2805b8u: goto label_2805b8;
        case 0x2805bcu: goto label_2805bc;
        case 0x2805c0u: goto label_2805c0;
        case 0x2805c4u: goto label_2805c4;
        case 0x2805c8u: goto label_2805c8;
        case 0x2805ccu: goto label_2805cc;
        case 0x2805d0u: goto label_2805d0;
        case 0x2805d4u: goto label_2805d4;
        case 0x2805d8u: goto label_2805d8;
        case 0x2805dcu: goto label_2805dc;
        case 0x2805e0u: goto label_2805e0;
        case 0x2805e4u: goto label_2805e4;
        case 0x2805e8u: goto label_2805e8;
        case 0x2805ecu: goto label_2805ec;
        case 0x2805f0u: goto label_2805f0;
        case 0x2805f4u: goto label_2805f4;
        case 0x2805f8u: goto label_2805f8;
        case 0x2805fcu: goto label_2805fc;
        case 0x280600u: goto label_280600;
        case 0x280604u: goto label_280604;
        case 0x280608u: goto label_280608;
        case 0x28060cu: goto label_28060c;
        case 0x280610u: goto label_280610;
        case 0x280614u: goto label_280614;
        case 0x280618u: goto label_280618;
        case 0x28061cu: goto label_28061c;
        case 0x280620u: goto label_280620;
        case 0x280624u: goto label_280624;
        case 0x280628u: goto label_280628;
        case 0x28062cu: goto label_28062c;
        case 0x280630u: goto label_280630;
        case 0x280634u: goto label_280634;
        case 0x280638u: goto label_280638;
        case 0x28063cu: goto label_28063c;
        case 0x280640u: goto label_280640;
        case 0x280644u: goto label_280644;
        case 0x280648u: goto label_280648;
        case 0x28064cu: goto label_28064c;
        case 0x280650u: goto label_280650;
        case 0x280654u: goto label_280654;
        case 0x280658u: goto label_280658;
        case 0x28065cu: goto label_28065c;
        case 0x280660u: goto label_280660;
        case 0x280664u: goto label_280664;
        case 0x280668u: goto label_280668;
        case 0x28066cu: goto label_28066c;
        case 0x280670u: goto label_280670;
        case 0x280674u: goto label_280674;
        case 0x280678u: goto label_280678;
        case 0x28067cu: goto label_28067c;
        case 0x280680u: goto label_280680;
        case 0x280684u: goto label_280684;
        case 0x280688u: goto label_280688;
        case 0x28068cu: goto label_28068c;
        case 0x280690u: goto label_280690;
        case 0x280694u: goto label_280694;
        case 0x280698u: goto label_280698;
        case 0x28069cu: goto label_28069c;
        case 0x2806a0u: goto label_2806a0;
        case 0x2806a4u: goto label_2806a4;
        case 0x2806a8u: goto label_2806a8;
        case 0x2806acu: goto label_2806ac;
        case 0x2806b0u: goto label_2806b0;
        case 0x2806b4u: goto label_2806b4;
        case 0x2806b8u: goto label_2806b8;
        case 0x2806bcu: goto label_2806bc;
        case 0x2806c0u: goto label_2806c0;
        case 0x2806c4u: goto label_2806c4;
        case 0x2806c8u: goto label_2806c8;
        case 0x2806ccu: goto label_2806cc;
        case 0x2806d0u: goto label_2806d0;
        case 0x2806d4u: goto label_2806d4;
        case 0x2806d8u: goto label_2806d8;
        case 0x2806dcu: goto label_2806dc;
        case 0x2806e0u: goto label_2806e0;
        case 0x2806e4u: goto label_2806e4;
        case 0x2806e8u: goto label_2806e8;
        case 0x2806ecu: goto label_2806ec;
        case 0x2806f0u: goto label_2806f0;
        case 0x2806f4u: goto label_2806f4;
        case 0x2806f8u: goto label_2806f8;
        case 0x2806fcu: goto label_2806fc;
        case 0x280700u: goto label_280700;
        case 0x280704u: goto label_280704;
        case 0x280708u: goto label_280708;
        case 0x28070cu: goto label_28070c;
        case 0x280710u: goto label_280710;
        case 0x280714u: goto label_280714;
        case 0x280718u: goto label_280718;
        case 0x28071cu: goto label_28071c;
        case 0x280720u: goto label_280720;
        case 0x280724u: goto label_280724;
        case 0x280728u: goto label_280728;
        case 0x28072cu: goto label_28072c;
        case 0x280730u: goto label_280730;
        case 0x280734u: goto label_280734;
        case 0x280738u: goto label_280738;
        case 0x28073cu: goto label_28073c;
        case 0x280740u: goto label_280740;
        case 0x280744u: goto label_280744;
        case 0x280748u: goto label_280748;
        case 0x28074cu: goto label_28074c;
        case 0x280750u: goto label_280750;
        case 0x280754u: goto label_280754;
        case 0x280758u: goto label_280758;
        case 0x28075cu: goto label_28075c;
        case 0x280760u: goto label_280760;
        case 0x280764u: goto label_280764;
        case 0x280768u: goto label_280768;
        case 0x28076cu: goto label_28076c;
        case 0x280770u: goto label_280770;
        case 0x280774u: goto label_280774;
        case 0x280778u: goto label_280778;
        case 0x28077cu: goto label_28077c;
        case 0x280780u: goto label_280780;
        case 0x280784u: goto label_280784;
        case 0x280788u: goto label_280788;
        case 0x28078cu: goto label_28078c;
        case 0x280790u: goto label_280790;
        case 0x280794u: goto label_280794;
        case 0x280798u: goto label_280798;
        case 0x28079cu: goto label_28079c;
        case 0x2807a0u: goto label_2807a0;
        case 0x2807a4u: goto label_2807a4;
        case 0x2807a8u: goto label_2807a8;
        case 0x2807acu: goto label_2807ac;
        case 0x2807b0u: goto label_2807b0;
        case 0x2807b4u: goto label_2807b4;
        case 0x2807b8u: goto label_2807b8;
        case 0x2807bcu: goto label_2807bc;
        case 0x2807c0u: goto label_2807c0;
        case 0x2807c4u: goto label_2807c4;
        case 0x2807c8u: goto label_2807c8;
        case 0x2807ccu: goto label_2807cc;
        case 0x2807d0u: goto label_2807d0;
        case 0x2807d4u: goto label_2807d4;
        case 0x2807d8u: goto label_2807d8;
        case 0x2807dcu: goto label_2807dc;
        case 0x2807e0u: goto label_2807e0;
        case 0x2807e4u: goto label_2807e4;
        case 0x2807e8u: goto label_2807e8;
        case 0x2807ecu: goto label_2807ec;
        case 0x2807f0u: goto label_2807f0;
        case 0x2807f4u: goto label_2807f4;
        case 0x2807f8u: goto label_2807f8;
        case 0x2807fcu: goto label_2807fc;
        case 0x280800u: goto label_280800;
        case 0x280804u: goto label_280804;
        case 0x280808u: goto label_280808;
        case 0x28080cu: goto label_28080c;
        case 0x280810u: goto label_280810;
        case 0x280814u: goto label_280814;
        case 0x280818u: goto label_280818;
        case 0x28081cu: goto label_28081c;
        case 0x280820u: goto label_280820;
        case 0x280824u: goto label_280824;
        case 0x280828u: goto label_280828;
        case 0x28082cu: goto label_28082c;
        case 0x280830u: goto label_280830;
        case 0x280834u: goto label_280834;
        case 0x280838u: goto label_280838;
        case 0x28083cu: goto label_28083c;
        case 0x280840u: goto label_280840;
        case 0x280844u: goto label_280844;
        case 0x280848u: goto label_280848;
        case 0x28084cu: goto label_28084c;
        case 0x280850u: goto label_280850;
        case 0x280854u: goto label_280854;
        case 0x280858u: goto label_280858;
        case 0x28085cu: goto label_28085c;
        case 0x280860u: goto label_280860;
        case 0x280864u: goto label_280864;
        case 0x280868u: goto label_280868;
        case 0x28086cu: goto label_28086c;
        case 0x280870u: goto label_280870;
        case 0x280874u: goto label_280874;
        case 0x280878u: goto label_280878;
        case 0x28087cu: goto label_28087c;
        case 0x280880u: goto label_280880;
        case 0x280884u: goto label_280884;
        case 0x280888u: goto label_280888;
        case 0x28088cu: goto label_28088c;
        case 0x280890u: goto label_280890;
        case 0x280894u: goto label_280894;
        case 0x280898u: goto label_280898;
        case 0x28089cu: goto label_28089c;
        case 0x2808a0u: goto label_2808a0;
        case 0x2808a4u: goto label_2808a4;
        case 0x2808a8u: goto label_2808a8;
        case 0x2808acu: goto label_2808ac;
        case 0x2808b0u: goto label_2808b0;
        case 0x2808b4u: goto label_2808b4;
        case 0x2808b8u: goto label_2808b8;
        case 0x2808bcu: goto label_2808bc;
        case 0x2808c0u: goto label_2808c0;
        case 0x2808c4u: goto label_2808c4;
        case 0x2808c8u: goto label_2808c8;
        case 0x2808ccu: goto label_2808cc;
        case 0x2808d0u: goto label_2808d0;
        case 0x2808d4u: goto label_2808d4;
        case 0x2808d8u: goto label_2808d8;
        case 0x2808dcu: goto label_2808dc;
        default: return;
    }

label_280110:
    // 0x280110: 0x18b39  .word       0x00018B39                   # INVALID     $zero, $at, -0x74C7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280110u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x280110 raw=0x00018B39"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_280114:
    // 0x280114: 0x32bb0  tge         $zero, $v1, 174
    ctx->pc = 0x280114u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_280118:
    // 0x280118: 0x0  nop
    ctx->pc = 0x280118u;
    // NOP
label_28011c:
    // 0x28011c: 0x0  nop
    ctx->pc = 0x28011cu;
    // NOP
label_280120:
    // 0x280120: 0x18b9f  .word       0x00018B9F                   # ddivu       $s1, $zero, $at # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280120u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x280120 raw=0x00018B9F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_280124:
    // 0x280124: 0x32170  tge         $zero, $v1, 133
    ctx->pc = 0x280124u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_280128:
    // 0x280128: 0x0  nop
    ctx->pc = 0x280128u;
    // NOP
label_28012c:
    // 0x28012c: 0x0  nop
    ctx->pc = 0x28012cu;
    // NOP
label_280130:
    // 0x280130: 0x18c04  .word       0x00018C04                   # sllv        $s1, $at, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280130u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_280134:
    // 0x280134: 0x2f760  .word       0x0002F760                   # add         $fp, $zero, $v0 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280134u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_280138:
    // 0x280138: 0x0  nop
    ctx->pc = 0x280138u;
    // NOP
label_28013c:
    // 0x28013c: 0x0  nop
    ctx->pc = 0x28013cu;
    // NOP
label_280140:
    // 0x280140: 0x18c63  .word       0x00018C63                   # negu        $s1, $at # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280140u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_280144:
    // 0x280144: 0x2dd30  tge         $zero, $v0, 884
    ctx->pc = 0x280144u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_280148:
    // 0x280148: 0x0  nop
    ctx->pc = 0x280148u;
    // NOP
label_28014c:
    // 0x28014c: 0x0  nop
    ctx->pc = 0x28014cu;
    // NOP
label_280150:
    // 0x280150: 0x18cbf  dsra32      $s1, $at, 18
    ctx->pc = 0x280150u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 1) >> (32 + 18));
label_280154:
    // 0x280154: 0x36d60  .word       0x00036D60                   # add         $t5, $zero, $v1 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280154u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_280158:
    // 0x280158: 0x0  nop
    ctx->pc = 0x280158u;
    // NOP
label_28015c:
    // 0x28015c: 0x0  nop
    ctx->pc = 0x28015cu;
    // NOP
label_280160:
    // 0x280160: 0x18d2d  .word       0x00018D2D                   # daddu       $s1, $zero, $at # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280160u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_280164:
    // 0x280164: 0x34a10  .word       0x00034A10                   # mfhi        $t1 # 00030200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280164u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_280168:
    // 0x280168: 0x0  nop
    ctx->pc = 0x280168u;
    // NOP
label_28016c:
    // 0x28016c: 0x0  nop
    ctx->pc = 0x28016cu;
    // NOP
label_280170:
    // 0x280170: 0x18d97  .word       0x00018D97                   # dsrav       $s1, $at, $zero # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280170u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_280174:
    // 0x280174: 0x2f020  add         $fp, $zero, $v0
    ctx->pc = 0x280174u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_280178:
    // 0x280178: 0x0  nop
    ctx->pc = 0x280178u;
    // NOP
label_28017c:
    // 0x28017c: 0x0  nop
    ctx->pc = 0x28017cu;
    // NOP
label_280180:
    // 0x280180: 0x18df6  tne         $zero, $at, 567
    ctx->pc = 0x280180u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_280184:
    // 0x280184: 0x2f1e0  .word       0x0002F1E0                   # add         $fp, $zero, $v0 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280184u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
label_280188:
    // 0x280188: 0x0  nop
    ctx->pc = 0x280188u;
    // NOP
label_28018c:
    // 0x28018c: 0x0  nop
    ctx->pc = 0x28018cu;
    // NOP
label_280190:
    // 0x280190: 0x18e55  .word       0x00018E55                   # INVALID     $zero, $at, -0x71AB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280190u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x280190 raw=0x00018E55"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_280194:
    // 0x280194: 0x35f10  .word       0x00035F10                   # mfhi        $t3 # 00030700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280194u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_280198:
    // 0x280198: 0x0  nop
    ctx->pc = 0x280198u;
    // NOP
label_28019c:
    // 0x28019c: 0x0  nop
    ctx->pc = 0x28019cu;
    // NOP
label_2801a0:
    // 0x2801a0: 0x18ec1  .word       0x00018EC1                   # INVALID     $zero, $at, -0x713F # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2801a0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2801A0 raw=0x00018EC1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2801a4:
    // 0x2801a4: 0x328d0  .word       0x000328D0                   # mfhi        $a1 # 000300C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2801a4u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_2801a8:
    // 0x2801a8: 0x0  nop
    ctx->pc = 0x2801a8u;
    // NOP
label_2801ac:
    // 0x2801ac: 0x0  nop
    ctx->pc = 0x2801acu;
    // NOP
label_2801b0:
    // 0x2801b0: 0x18f27  .word       0x00018F27                   # nor         $s1, $zero, $at # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2801b0u;
    SET_GPR_U64(ctx, 17, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_2801b4:
    // 0x2801b4: 0x2cb10  .word       0x0002CB10                   # mfhi        $t9 # 00020300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2801b4u;
    SET_GPR_U64(ctx, 25, ctx->hi);
label_2801b8:
    // 0x2801b8: 0x0  nop
    ctx->pc = 0x2801b8u;
    // NOP
label_2801bc:
    // 0x2801bc: 0x0  nop
    ctx->pc = 0x2801bcu;
    // NOP
label_2801c0:
    // 0x2801c0: 0x18f81  .word       0x00018F81                   # INVALID     $zero, $at, -0x707F # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2801c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2801C0 raw=0x00018F81"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2801c4:
    // 0x2801c4: 0x2c510  .word       0x0002C510                   # mfhi        $t8 # 00020500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2801c4u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_2801c8:
    // 0x2801c8: 0x0  nop
    ctx->pc = 0x2801c8u;
    // NOP
label_2801cc:
    // 0x2801cc: 0x0  nop
    ctx->pc = 0x2801ccu;
    // NOP
label_2801d0:
    // 0x2801d0: 0x18fda  .word       0x00018FDA                   # div         $s1, $zero, $at # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2801d0u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2801d4:
    // 0x2801d4: 0x33720  .word       0x00033720                   # add         $a2, $zero, $v1 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2801d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_2801d8:
    // 0x2801d8: 0x0  nop
    ctx->pc = 0x2801d8u;
    // NOP
label_2801dc:
    // 0x2801dc: 0x0  nop
    ctx->pc = 0x2801dcu;
    // NOP
label_2801e0:
    // 0x2801e0: 0x19041  .word       0x00019041                   # INVALID     $zero, $at, -0x6FBF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2801e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2801E0 raw=0x00019041"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2801e4:
    // 0x2801e4: 0x30f50  .word       0x00030F50                   # mfhi        $at # 00030740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2801e4u;
    SET_GPR_U64(ctx, 1, ctx->hi);
label_2801e8:
    // 0x2801e8: 0x0  nop
    ctx->pc = 0x2801e8u;
    // NOP
label_2801ec:
    // 0x2801ec: 0x0  nop
    ctx->pc = 0x2801ecu;
    // NOP
label_2801f0:
    // 0x2801f0: 0x190a3  .word       0x000190A3                   # negu        $s2, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2801f0u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_2801f4:
    // 0x2801f4: 0x2f140  sll         $fp, $v0, 5
    ctx->pc = 0x2801f4u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2801f8:
    // 0x2801f8: 0x0  nop
    ctx->pc = 0x2801f8u;
    // NOP
label_2801fc:
    // 0x2801fc: 0x0  nop
    ctx->pc = 0x2801fcu;
    // NOP
label_280200:
    // 0x280200: 0x19102  srl         $s2, $at, 4
    ctx->pc = 0x280200u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 1), 4));
label_280204:
    // 0x280204: 0x364d0  .word       0x000364D0                   # mfhi        $t4 # 000304C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280204u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_280208:
    // 0x280208: 0x0  nop
    ctx->pc = 0x280208u;
    // NOP
label_28020c:
    // 0x28020c: 0x0  nop
    ctx->pc = 0x28020cu;
    // NOP
label_280210:
    // 0x280210: 0x1916f  .word       0x0001916F                   # dsubu       $s2, $zero, $at # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280210u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_280214:
    // 0x280214: 0x30260  .word       0x00030260                   # add         $zero, $zero, $v1 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280214u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_280218:
    // 0x280218: 0x0  nop
    ctx->pc = 0x280218u;
    // NOP
label_28021c:
    // 0x28021c: 0x0  nop
    ctx->pc = 0x28021cu;
    // NOP
label_280220:
    // 0x280220: 0x191d0  .word       0x000191D0                   # mfhi        $s2 # 000101C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280220u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_280224:
    // 0x280224: 0x30090  .word       0x00030090                   # mfhi        $zero # 00030080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280224u;
    SET_GPR_U64(ctx, 0, ctx->hi);
label_280228:
    // 0x280228: 0x0  nop
    ctx->pc = 0x280228u;
    // NOP
label_28022c:
    // 0x28022c: 0x0  nop
    ctx->pc = 0x28022cu;
    // NOP
label_280230:
    // 0x280230: 0x19231  tgeu        $zero, $at, 584
    ctx->pc = 0x280230u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_280234:
    // 0x280234: 0x35920  .word       0x00035920                   # add         $t3, $zero, $v1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280234u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_280238:
    // 0x280238: 0x0  nop
    ctx->pc = 0x280238u;
    // NOP
label_28023c:
    // 0x28023c: 0x0  nop
    ctx->pc = 0x28023cu;
    // NOP
label_280240:
    // 0x280240: 0x1929d  .word       0x0001929D                   # dmultu      $zero, $at # 00009280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280240u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x280240 raw=0x0001929D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_280244:
    // 0x280244: 0x29bd0  .word       0x00029BD0                   # mfhi        $s3 # 000203C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280244u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_280248:
    // 0x280248: 0x0  nop
    ctx->pc = 0x280248u;
    // NOP
label_28024c:
    // 0x28024c: 0x0  nop
    ctx->pc = 0x28024cu;
    // NOP
label_280250:
    // 0x280250: 0x192f1  tgeu        $zero, $at, 587
    ctx->pc = 0x280250u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_280254:
    // 0x280254: 0x31e60  .word       0x00031E60                   # add         $v1, $zero, $v1 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280254u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_280258:
    // 0x280258: 0x0  nop
    ctx->pc = 0x280258u;
    // NOP
label_28025c:
    // 0x28025c: 0x0  nop
    ctx->pc = 0x28025cu;
    // NOP
label_280260:
    // 0x280260: 0x19355  .word       0x00019355                   # INVALID     $zero, $at, -0x6CAB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280260u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x280260 raw=0x00019355"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_280264:
    // 0x280264: 0x32dd0  .word       0x00032DD0                   # mfhi        $a1 # 000305C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280264u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_280268:
    // 0x280268: 0x0  nop
    ctx->pc = 0x280268u;
    // NOP
label_28026c:
    // 0x28026c: 0x0  nop
    ctx->pc = 0x28026cu;
    // NOP
label_280270:
    // 0x280270: 0x193bb  dsra        $s2, $at, 14
    ctx->pc = 0x280270u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 1) >> 14);
label_280274:
    // 0x280274: 0x39f30  tge         $zero, $v1, 636
    ctx->pc = 0x280274u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_280278:
    // 0x280278: 0x0  nop
    ctx->pc = 0x280278u;
    // NOP
label_28027c:
    // 0x28027c: 0x0  nop
    ctx->pc = 0x28027cu;
    // NOP
label_280280:
    // 0x280280: 0x1942f  .word       0x0001942F                   # dsubu       $s2, $zero, $at # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280280u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_280284:
    // 0x280284: 0x32dd0  .word       0x00032DD0                   # mfhi        $a1 # 000305C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280284u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_280288:
    // 0x280288: 0x0  nop
    ctx->pc = 0x280288u;
    // NOP
label_28028c:
    // 0x28028c: 0x0  nop
    ctx->pc = 0x28028cu;
    // NOP
label_280290:
    // 0x280290: 0x19495  .word       0x00019495                   # INVALID     $zero, $at, -0x6B6B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280290u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x280290 raw=0x00019495"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_280294:
    // 0x280294: 0x389a0  .word       0x000389A0                   # add         $s1, $zero, $v1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280294u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_280298:
    // 0x280298: 0x0  nop
    ctx->pc = 0x280298u;
    // NOP
label_28029c:
    // 0x28029c: 0x0  nop
    ctx->pc = 0x28029cu;
    // NOP
label_2802a0:
    // 0x2802a0: 0x19507  .word       0x00019507                   # srav        $s2, $at, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2802a0u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_2802a4:
    // 0x2802a4: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x2802a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2802a8:
    // 0x2802a8: 0x0  nop
    ctx->pc = 0x2802a8u;
    // NOP
label_2802ac:
    // 0x2802ac: 0x0  nop
    ctx->pc = 0x2802acu;
    // NOP
label_2802b0:
    // 0x2802b0: 0x1956d  .word       0x0001956D                   # daddu       $s2, $zero, $at # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2802b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 1));
label_2802b4:
    // 0x2802b4: 0x34c20  .word       0x00034C20                   # add         $t1, $zero, $v1 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2802b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_2802b8:
    // 0x2802b8: 0x0  nop
    ctx->pc = 0x2802b8u;
    // NOP
label_2802bc:
    // 0x2802bc: 0x0  nop
    ctx->pc = 0x2802bcu;
    // NOP
label_2802c0:
    // 0x2802c0: 0x195d7  .word       0x000195D7                   # dsrav       $s2, $at, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2802c0u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_2802c4:
    // 0x2802c4: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x2802c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2802c8:
    // 0x2802c8: 0x0  nop
    ctx->pc = 0x2802c8u;
    // NOP
label_2802cc:
    // 0x2802cc: 0x0  nop
    ctx->pc = 0x2802ccu;
    // NOP
label_2802d0:
    // 0x2802d0: 0x1963d  .word       0x0001963D                   # INVALID     $zero, $at, -0x69C3 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2802d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2802D0 raw=0x0001963D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2802d4:
    // 0x2802d4: 0x33eb0  tge         $zero, $v1, 250
    ctx->pc = 0x2802d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_2802d8:
    // 0x2802d8: 0x0  nop
    ctx->pc = 0x2802d8u;
    // NOP
label_2802dc:
    // 0x2802dc: 0x0  nop
    ctx->pc = 0x2802dcu;
    // NOP
label_2802e0:
    // 0x2802e0: 0x196a5  .word       0x000196A5                   # or          $s2, $zero, $at # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2802e0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | GPR_U64(ctx, 1));
label_2802e4:
    // 0x2802e4: 0x2fa30  tge         $zero, $v0, 1000
    ctx->pc = 0x2802e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_2802e8:
    // 0x2802e8: 0x0  nop
    ctx->pc = 0x2802e8u;
    // NOP
label_2802ec:
    // 0x2802ec: 0x0  nop
    ctx->pc = 0x2802ecu;
    // NOP
label_2802f0:
    // 0x2802f0: 0x19705  .word       0x00019705                   # INVALID     $zero, $at, -0x68FB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2802f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2802F0 raw=0x00019705"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2802f4:
    // 0x2802f4: 0x34800  sll         $t1, $v1, 0
    ctx->pc = 0x2802f4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
label_2802f8:
    // 0x2802f8: 0x0  nop
    ctx->pc = 0x2802f8u;
    // NOP
label_2802fc:
    // 0x2802fc: 0x0  nop
    ctx->pc = 0x2802fcu;
    // NOP
label_280300:
    // 0x280300: 0x1976e  .word       0x0001976E                   # dsub        $s2, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280300u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, r); }
label_280304:
    // 0x280304: 0x2fa30  tge         $zero, $v0, 1000
    ctx->pc = 0x280304u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_280308:
    // 0x280308: 0x0  nop
    ctx->pc = 0x280308u;
    // NOP
label_28030c:
    // 0x28030c: 0x0  nop
    ctx->pc = 0x28030cu;
    // NOP
label_280310:
    // 0x280310: 0x197ce  .word       0x000197CE                   # INVALID     $zero, $at, -0x6832 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280310u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x280310 raw=0x000197CE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_280314:
    // 0x280314: 0x33ee0  .word       0x00033EE0                   # add         $a3, $zero, $v1 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280314u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_280318:
    // 0x280318: 0x0  nop
    ctx->pc = 0x280318u;
    // NOP
label_28031c:
    // 0x28031c: 0x0  nop
    ctx->pc = 0x28031cu;
    // NOP
label_280320:
    // 0x280320: 0x19836  tne         $zero, $at, 608
    ctx->pc = 0x280320u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_280324:
    // 0x280324: 0x32ad0  .word       0x00032AD0                   # mfhi        $a1 # 000302C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280324u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_280328:
    // 0x280328: 0x0  nop
    ctx->pc = 0x280328u;
    // NOP
label_28032c:
    // 0x28032c: 0x0  nop
    ctx->pc = 0x28032cu;
    // NOP
label_280330:
    // 0x280330: 0x1989c  .word       0x0001989C                   # dmult       $zero, $at # 00009880 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280330u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x280330 raw=0x0001989C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_280334:
    // 0x280334: 0x36770  tge         $zero, $v1, 413
    ctx->pc = 0x280334u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_280338:
    // 0x280338: 0x0  nop
    ctx->pc = 0x280338u;
    // NOP
label_28033c:
    // 0x28033c: 0x0  nop
    ctx->pc = 0x28033cu;
    // NOP
label_280340:
    // 0x280340: 0x19909  .word       0x00019909                   # jalr        $s3, $zero # 00010100 <InstrIdType: CPU_SPECIAL>
label_280344:
    if (ctx->pc == 0x280344u) {
        ctx->pc = 0x280344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280340u;
        // 0x280344: 0x32ad0  .word       0x00032AD0                   # mfhi        $a1 # 000302C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 5, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x280348u;
        goto label_280348;
    }
    ctx->pc = 0x280340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 19, 0x280348u);
        ctx->pc = 0x280344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280340u;
        // 0x280344: 0x32ad0  .word       0x00032AD0                   # mfhi        $a1 # 000302C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 5, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280340u, 0x280348u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x280348u;
label_280348:
    // 0x280348: 0x0  nop
    ctx->pc = 0x280348u;
    // NOP
label_28034c:
    // 0x28034c: 0x0  nop
    ctx->pc = 0x28034cu;
    // NOP
label_280350:
    // 0x280350: 0x1996f  .word       0x0001996F                   # dsubu       $s3, $zero, $at # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280350u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) - GPR_U64(ctx, 1));
label_280354:
    // 0x280354: 0x359f0  tge         $zero, $v1, 359
    ctx->pc = 0x280354u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_280358:
    // 0x280358: 0x0  nop
    ctx->pc = 0x280358u;
    // NOP
label_28035c:
    // 0x28035c: 0x0  nop
    ctx->pc = 0x28035cu;
    // NOP
label_280360:
    // 0x280360: 0x199db  .word       0x000199DB                   # divu        $s3, $zero, $at # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280360u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_280364:
    // 0x280364: 0x34c20  .word       0x00034C20                   # add         $t1, $zero, $v1 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280364u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_280368:
    // 0x280368: 0x0  nop
    ctx->pc = 0x280368u;
    // NOP
label_28036c:
    // 0x28036c: 0x0  nop
    ctx->pc = 0x28036cu;
    // NOP
label_280370:
    // 0x280370: 0x19a45  .word       0x00019A45                   # INVALID     $zero, $at, -0x65BB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280370u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x280370 raw=0x00019A45"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_280374:
    // 0x280374: 0x340f0  tge         $zero, $v1, 259
    ctx->pc = 0x280374u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_280378:
    // 0x280378: 0x0  nop
    ctx->pc = 0x280378u;
    // NOP
label_28037c:
    // 0x28037c: 0x0  nop
    ctx->pc = 0x28037cu;
    // NOP
label_280380:
    // 0x280380: 0x19aae  .word       0x00019AAE                   # dsub        $s3, $zero, $at # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280380u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 19, r); }
label_280384:
    // 0x280384: 0x34c60  .word       0x00034C60                   # add         $t1, $zero, $v1 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280384u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_280388:
    // 0x280388: 0x0  nop
    ctx->pc = 0x280388u;
    // NOP
label_28038c:
    // 0x28038c: 0x0  nop
    ctx->pc = 0x28038cu;
    // NOP
label_280390:
    // 0x280390: 0x19b18  .word       0x00019B18                   # mult        $s3, $zero, $at # 00000300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x280390u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
label_280394:
    // 0x280394: 0x33b70  tge         $zero, $v1, 237
    ctx->pc = 0x280394u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_280398:
    // 0x280398: 0x0  nop
    ctx->pc = 0x280398u;
    // NOP
label_28039c:
    // 0x28039c: 0x0  nop
    ctx->pc = 0x28039cu;
    // NOP
label_2803a0:
    // 0x2803a0: 0x19b80  sll         $s3, $at, 14
    ctx->pc = 0x2803a0u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 1), 14));
label_2803a4:
    // 0x2803a4: 0x34a70  tge         $zero, $v1, 297
    ctx->pc = 0x2803a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_2803a8:
    // 0x2803a8: 0x0  nop
    ctx->pc = 0x2803a8u;
    // NOP
label_2803ac:
    // 0x2803ac: 0x0  nop
    ctx->pc = 0x2803acu;
    // NOP
label_2803b0:
    // 0x2803b0: 0x19bea  .word       0x00019BEA                   # slt         $s3, $zero, $at # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2803b0u;
    SET_GPR_U64(ctx, 19, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_2803b4:
    // 0x2803b4: 0x331b0  tge         $zero, $v1, 198
    ctx->pc = 0x2803b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_2803b8:
    // 0x2803b8: 0x0  nop
    ctx->pc = 0x2803b8u;
    // NOP
label_2803bc:
    // 0x2803bc: 0x0  nop
    ctx->pc = 0x2803bcu;
    // NOP
label_2803c0:
    // 0x2803c0: 0x19c51  .word       0x00019C51                   # mthi        $zero # 00019C40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2803c0u;
    ctx->hi = GPR_U64(ctx, 0);
label_2803c4:
    // 0x2803c4: 0x34d50  .word       0x00034D50                   # mfhi        $t1 # 00030540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2803c4u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_2803c8:
    // 0x2803c8: 0x0  nop
    ctx->pc = 0x2803c8u;
    // NOP
label_2803cc:
    // 0x2803cc: 0x0  nop
    ctx->pc = 0x2803ccu;
    // NOP
label_2803d0:
    // 0x2803d0: 0x19cbb  dsra        $s3, $at, 18
    ctx->pc = 0x2803d0u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 1) >> 18);
label_2803d4:
    // 0x2803d4: 0x327e0  .word       0x000327E0                   # add         $a0, $zero, $v1 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2803d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
label_2803d8:
    // 0x2803d8: 0x0  nop
    ctx->pc = 0x2803d8u;
    // NOP
label_2803dc:
    // 0x2803dc: 0x0  nop
    ctx->pc = 0x2803dcu;
    // NOP
label_2803e0:
    // 0x2803e0: 0x19d20  .word       0x00019D20                   # add         $s3, $zero, $at # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2803e0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_2803e4:
    // 0x2803e4: 0x34ef0  tge         $zero, $v1, 315
    ctx->pc = 0x2803e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_2803e8:
    // 0x2803e8: 0x0  nop
    ctx->pc = 0x2803e8u;
    // NOP
label_2803ec:
    // 0x2803ec: 0x0  nop
    ctx->pc = 0x2803ecu;
    // NOP
label_2803f0:
    // 0x2803f0: 0x19d8a  .word       0x00019D8A                   # movz        $s3, $zero, $at # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2803f0u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
label_2803f4:
    // 0x2803f4: 0x333a0  .word       0x000333A0                   # add         $a2, $zero, $v1 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2803f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_2803f8:
    // 0x2803f8: 0x0  nop
    ctx->pc = 0x2803f8u;
    // NOP
label_2803fc:
    // 0x2803fc: 0x0  nop
    ctx->pc = 0x2803fcu;
    // NOP
label_280400:
    // 0x280400: 0x19df1  tgeu        $zero, $at, 631
    ctx->pc = 0x280400u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_280404:
    // 0x280404: 0x33ce0  .word       0x00033CE0                   # add         $a3, $zero, $v1 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280404u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_280408:
    // 0x280408: 0x0  nop
    ctx->pc = 0x280408u;
    // NOP
label_28040c:
    // 0x28040c: 0x0  nop
    ctx->pc = 0x28040cu;
    // NOP
label_280410:
    // 0x280410: 0x19e59  .word       0x00019E59                   # multu       $zero, $at # 00009E40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280410u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
label_280414:
    // 0x280414: 0x33970  tge         $zero, $v1, 229
    ctx->pc = 0x280414u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_280418:
    // 0x280418: 0x0  nop
    ctx->pc = 0x280418u;
    // NOP
label_28041c:
    // 0x28041c: 0x0  nop
    ctx->pc = 0x28041cu;
    // NOP
label_280420:
    // 0x280420: 0x19ec1  .word       0x00019EC1                   # INVALID     $zero, $at, -0x613F # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280420u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x280420 raw=0x00019EC1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_280424:
    // 0x280424: 0x33de0  .word       0x00033DE0                   # add         $a3, $zero, $v1 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280424u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_280428:
    // 0x280428: 0x0  nop
    ctx->pc = 0x280428u;
    // NOP
label_28042c:
    // 0x28042c: 0x0  nop
    ctx->pc = 0x28042cu;
    // NOP
label_280430:
    // 0x280430: 0x19f29  .word       0x00019F29                   # mtsa        $zero # 00019F00 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x280430u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_280434:
    // 0x280434: 0x34910  .word       0x00034910                   # mfhi        $t1 # 00030100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280434u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_280438:
    // 0x280438: 0x0  nop
    ctx->pc = 0x280438u;
    // NOP
label_28043c:
    // 0x28043c: 0x0  nop
    ctx->pc = 0x28043cu;
    // NOP
label_280440:
    // 0x280440: 0x19f93  .word       0x00019F93                   # mtlo        $zero # 00019F80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280440u;
    ctx->lo = GPR_U64(ctx, 0);
label_280444:
    // 0x280444: 0x32fc0  sll         $a1, $v1, 31
    ctx->pc = 0x280444u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 31));
label_280448:
    // 0x280448: 0x0  nop
    ctx->pc = 0x280448u;
    // NOP
label_28044c:
    // 0x28044c: 0x0  nop
    ctx->pc = 0x28044cu;
    // NOP
label_280450:
    // 0x280450: 0x19ff9  .word       0x00019FF9                   # INVALID     $zero, $at, -0x6007 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280450u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x280450 raw=0x00019FF9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_280454:
    // 0x280454: 0x31920  .word       0x00031920                   # add         $v1, $zero, $v1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280454u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 3, (int32_t)result);     } }
label_280458:
    // 0x280458: 0x0  nop
    ctx->pc = 0x280458u;
    // NOP
label_28045c:
    // 0x28045c: 0x0  nop
    ctx->pc = 0x28045cu;
    // NOP
label_280460:
    // 0x280460: 0x1a05d  .word       0x0001A05D                   # dmultu      $zero, $at # 0000A040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280460u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x280460 raw=0x0001A05D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_280464:
    // 0x280464: 0x337f0  tge         $zero, $v1, 223
    ctx->pc = 0x280464u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_280468:
    // 0x280468: 0x0  nop
    ctx->pc = 0x280468u;
    // NOP
label_28046c:
    // 0x28046c: 0x0  nop
    ctx->pc = 0x28046cu;
    // NOP
label_280470:
    // 0x280470: 0x1a0c4  .word       0x0001A0C4                   # sllv        $s4, $at, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280470u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_280474:
    // 0x280474: 0x32730  tge         $zero, $v1, 156
    ctx->pc = 0x280474u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_280478:
    // 0x280478: 0x0  nop
    ctx->pc = 0x280478u;
    // NOP
label_28047c:
    // 0x28047c: 0x0  nop
    ctx->pc = 0x28047cu;
    // NOP
label_280480:
    // 0x280480: 0x1a129  .word       0x0001A129                   # mtsa        $zero # 0001A100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x280480u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_280484:
    // 0x280484: 0x32730  tge         $zero, $v1, 156
    ctx->pc = 0x280484u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_280488:
    // 0x280488: 0x0  nop
    ctx->pc = 0x280488u;
    // NOP
label_28048c:
    // 0x28048c: 0x0  nop
    ctx->pc = 0x28048cu;
    // NOP
label_280490:
    // 0x280490: 0x1a18e  .word       0x0001A18E                   # INVALID     $zero, $at, -0x5E72 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280490u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x280490 raw=0x0001A18E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_280494:
    // 0x280494: 0x34ba0  .word       0x00034BA0                   # add         $t1, $zero, $v1 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280494u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_280498:
    // 0x280498: 0x0  nop
    ctx->pc = 0x280498u;
    // NOP
label_28049c:
    // 0x28049c: 0x0  nop
    ctx->pc = 0x28049cu;
    // NOP
label_2804a0:
    // 0x2804a0: 0x1a1f8  dsll        $s4, $at, 7
    ctx->pc = 0x2804a0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 1) << 7);
label_2804a4:
    // 0x2804a4: 0x317a0  .word       0x000317A0                   # add         $v0, $zero, $v1 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2804a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_2804a8:
    // 0x2804a8: 0x0  nop
    ctx->pc = 0x2804a8u;
    // NOP
label_2804ac:
    // 0x2804ac: 0x0  nop
    ctx->pc = 0x2804acu;
    // NOP
label_2804b0:
    // 0x2804b0: 0x1a25b  .word       0x0001A25B                   # divu        $s4, $zero, $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2804b0u;
    { uint32_t divisor = GPR_U32(ctx, 1); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_2804b4:
    // 0x2804b4: 0x34ba0  .word       0x00034BA0                   # add         $t1, $zero, $v1 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2804b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_2804b8:
    // 0x2804b8: 0x0  nop
    ctx->pc = 0x2804b8u;
    // NOP
label_2804bc:
    // 0x2804bc: 0x0  nop
    ctx->pc = 0x2804bcu;
    // NOP
label_2804c0:
    // 0x2804c0: 0x1a2c5  .word       0x0001A2C5                   # INVALID     $zero, $at, -0x5D3B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2804c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2804C0 raw=0x0001A2C5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2804c4:
    // 0x2804c4: 0x2eb80  sll         $sp, $v0, 14
    ctx->pc = 0x2804c4u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 2), 14));
label_2804c8:
    // 0x2804c8: 0x0  nop
    ctx->pc = 0x2804c8u;
    // NOP
label_2804cc:
    // 0x2804cc: 0x0  nop
    ctx->pc = 0x2804ccu;
    // NOP
label_2804d0:
    // 0x2804d0: 0x1a323  .word       0x0001A323                   # negu        $s4, $at # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2804d0u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_2804d4:
    // 0x2804d4: 0x34aa0  .word       0x00034AA0                   # add         $t1, $zero, $v1 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2804d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_2804d8:
    // 0x2804d8: 0x0  nop
    ctx->pc = 0x2804d8u;
    // NOP
label_2804dc:
    // 0x2804dc: 0x0  nop
    ctx->pc = 0x2804dcu;
    // NOP
label_2804e0:
    // 0x2804e0: 0x1a38d  break       1, 654
    ctx->pc = 0x2804e0u;
    runtime->handleBreak(rdram, ctx);
label_2804e4:
    // 0x2804e4: 0x2e130  tge         $zero, $v0, 900
    ctx->pc = 0x2804e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_2804e8:
    // 0x2804e8: 0x0  nop
    ctx->pc = 0x2804e8u;
    // NOP
label_2804ec:
    // 0x2804ec: 0x0  nop
    ctx->pc = 0x2804ecu;
    // NOP
label_2804f0:
    // 0x2804f0: 0x1a3ea  .word       0x0001A3EA                   # slt         $s4, $zero, $at # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2804f0u;
    SET_GPR_U64(ctx, 20, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_2804f4:
    // 0x2804f4: 0x34aa0  .word       0x00034AA0                   # add         $t1, $zero, $v1 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2804f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_2804f8:
    // 0x2804f8: 0x0  nop
    ctx->pc = 0x2804f8u;
    // NOP
label_2804fc:
    // 0x2804fc: 0x0  nop
    ctx->pc = 0x2804fcu;
    // NOP
label_280500:
    // 0x280500: 0x1a454  .word       0x0001A454                   # dsllv       $s4, $at, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280500u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 1) << (GPR_U32(ctx, 0) & 0x3F));
label_280504:
    // 0x280504: 0x35440  sll         $t2, $v1, 17
    ctx->pc = 0x280504u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 17));
label_280508:
    // 0x280508: 0x0  nop
    ctx->pc = 0x280508u;
    // NOP
label_28050c:
    // 0x28050c: 0x0  nop
    ctx->pc = 0x28050cu;
    // NOP
label_280510:
    // 0x280510: 0x1a4bf  dsra32      $s4, $at, 18
    ctx->pc = 0x280510u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 1) >> (32 + 18));
label_280514:
    // 0x280514: 0x31720  .word       0x00031720                   # add         $v0, $zero, $v1 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280514u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_280518:
    // 0x280518: 0x0  nop
    ctx->pc = 0x280518u;
    // NOP
label_28051c:
    // 0x28051c: 0x0  nop
    ctx->pc = 0x28051cu;
    // NOP
label_280520:
    // 0x280520: 0x1a522  .word       0x0001A522                   # neg         $s4, $at # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280520u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 1), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
label_280524:
    // 0x280524: 0x35180  sll         $t2, $v1, 6
    ctx->pc = 0x280524u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_280528:
    // 0x280528: 0x0  nop
    ctx->pc = 0x280528u;
    // NOP
label_28052c:
    // 0x28052c: 0x0  nop
    ctx->pc = 0x28052cu;
    // NOP
label_280530:
    // 0x280530: 0x1a58d  break       1, 662
    ctx->pc = 0x280530u;
    runtime->handleBreak(rdram, ctx);
label_280534:
    // 0x280534: 0x31720  .word       0x00031720                   # add         $v0, $zero, $v1 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280534u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 2, (int32_t)result);     } }
label_280538:
    // 0x280538: 0x0  nop
    ctx->pc = 0x280538u;
    // NOP
label_28053c:
    // 0x28053c: 0x0  nop
    ctx->pc = 0x28053cu;
    // NOP
label_280540:
    // 0x280540: 0x1a5f0  tge         $zero, $at, 663
    ctx->pc = 0x280540u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_280544:
    // 0x280544: 0x3bc40  sll         $s7, $v1, 17
    ctx->pc = 0x280544u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 3), 17));
label_280548:
    // 0x280548: 0x0  nop
    ctx->pc = 0x280548u;
    // NOP
label_28054c:
    // 0x28054c: 0x0  nop
    ctx->pc = 0x28054cu;
    // NOP
label_280550:
    // 0x280550: 0x1a668  .word       0x0001A668                   # mfsa        $s4 # 00010640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x280550u;
    SET_GPR_U32(ctx, 20, ctx->sa);
label_280554:
    // 0x280554: 0x31450  .word       0x00031450                   # mfhi        $v0 # 00030440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280554u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_280558:
    // 0x280558: 0x0  nop
    ctx->pc = 0x280558u;
    // NOP
label_28055c:
    // 0x28055c: 0x0  nop
    ctx->pc = 0x28055cu;
    // NOP
label_280560:
    // 0x280560: 0x1a6cb  .word       0x0001A6CB                   # movn        $s4, $zero, $at # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280560u;
    if (GPR_U64(ctx, 1) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 0));
label_280564:
    // 0x280564: 0x3aa80  sll         $s5, $v1, 10
    ctx->pc = 0x280564u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
label_280568:
    // 0x280568: 0x0  nop
    ctx->pc = 0x280568u;
    // NOP
label_28056c:
    // 0x28056c: 0x0  nop
    ctx->pc = 0x28056cu;
    // NOP
label_280570:
    // 0x280570: 0x1a741  .word       0x0001A741                   # INVALID     $zero, $at, -0x58BF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280570u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x280570 raw=0x0001A741"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_280574:
    // 0x280574: 0x31450  .word       0x00031450                   # mfhi        $v0 # 00030440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280574u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_280578:
    // 0x280578: 0x0  nop
    ctx->pc = 0x280578u;
    // NOP
label_28057c:
    // 0x28057c: 0x0  nop
    ctx->pc = 0x28057cu;
    // NOP
label_280580:
    // 0x280580: 0x1a7a4  .word       0x0001A7A4                   # and         $s4, $zero, $at # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280580u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_280584:
    // 0x280584: 0x339c0  sll         $a3, $v1, 7
    ctx->pc = 0x280584u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_280588:
    // 0x280588: 0x0  nop
    ctx->pc = 0x280588u;
    // NOP
label_28058c:
    // 0x28058c: 0x0  nop
    ctx->pc = 0x28058cu;
    // NOP
label_280590:
    // 0x280590: 0x1a80c  .word       0x0001A80C                   # syscall     672 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280590u;
    ctx->pc = 0x280594u;
runtime->handleSyscall(rdram, ctx, 0x6A0u);
label_280594:
    // 0x280594: 0x35e70  tge         $zero, $v1, 377
    ctx->pc = 0x280594u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_280598:
    // 0x280598: 0x0  nop
    ctx->pc = 0x280598u;
    // NOP
label_28059c:
    // 0x28059c: 0x0  nop
    ctx->pc = 0x28059cu;
    // NOP
label_2805a0:
    // 0x2805a0: 0x1a878  dsll        $s5, $at, 1
    ctx->pc = 0x2805a0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 1) << 1);
label_2805a4:
    // 0x2805a4: 0x344d0  .word       0x000344D0                   # mfhi        $t0 # 000304C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2805a4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_2805a8:
    // 0x2805a8: 0x0  nop
    ctx->pc = 0x2805a8u;
    // NOP
label_2805ac:
    // 0x2805ac: 0x0  nop
    ctx->pc = 0x2805acu;
    // NOP
label_2805b0:
    // 0x2805b0: 0x1a8e1  .word       0x0001A8E1                   # addu        $s5, $zero, $at # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2805b0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_2805b4:
    // 0x2805b4: 0x35e70  tge         $zero, $v1, 377
    ctx->pc = 0x2805b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_2805b8:
    // 0x2805b8: 0x0  nop
    ctx->pc = 0x2805b8u;
    // NOP
label_2805bc:
    // 0x2805bc: 0x0  nop
    ctx->pc = 0x2805bcu;
    // NOP
label_2805c0:
    // 0x2805c0: 0x1a94d  break       1, 677
    ctx->pc = 0x2805c0u;
    runtime->handleBreak(rdram, ctx);
label_2805c4:
    // 0x2805c4: 0x33110  .word       0x00033110                   # mfhi        $a2 # 00030100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2805c4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_2805c8:
    // 0x2805c8: 0x0  nop
    ctx->pc = 0x2805c8u;
    // NOP
label_2805cc:
    // 0x2805cc: 0x0  nop
    ctx->pc = 0x2805ccu;
    // NOP
label_2805d0:
    // 0x2805d0: 0x1a9b4  teq         $zero, $at, 678
    ctx->pc = 0x2805d0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2805d4:
    // 0x2805d4: 0x2e2b0  tge         $zero, $v0, 906
    ctx->pc = 0x2805d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_2805d8:
    // 0x2805d8: 0x0  nop
    ctx->pc = 0x2805d8u;
    // NOP
label_2805dc:
    // 0x2805dc: 0x0  nop
    ctx->pc = 0x2805dcu;
    // NOP
label_2805e0:
    // 0x2805e0: 0x1aa11  .word       0x0001AA11                   # mthi        $zero # 0001AA00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2805e0u;
    ctx->hi = GPR_U64(ctx, 0);
label_2805e4:
    // 0x2805e4: 0x2fb20  .word       0x0002FB20                   # add         $ra, $zero, $v0 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2805e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 2);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 31, (int32_t)result);     } }
label_2805e8:
    // 0x2805e8: 0x0  nop
    ctx->pc = 0x2805e8u;
    // NOP
label_2805ec:
    // 0x2805ec: 0x0  nop
    ctx->pc = 0x2805ecu;
    // NOP
label_2805f0:
    // 0x2805f0: 0x1aa71  tgeu        $zero, $at, 681
    ctx->pc = 0x2805f0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2805f4:
    // 0x2805f4: 0x32d30  tge         $zero, $v1, 180
    ctx->pc = 0x2805f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_2805f8:
    // 0x2805f8: 0x0  nop
    ctx->pc = 0x2805f8u;
    // NOP
label_2805fc:
    // 0x2805fc: 0x0  nop
    ctx->pc = 0x2805fcu;
    // NOP
label_280600:
    // 0x280600: 0x1aad7  .word       0x0001AAD7                   # dsrav       $s5, $at, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280600u;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_280604:
    // 0x280604: 0x2edc0  sll         $sp, $v0, 23
    ctx->pc = 0x280604u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 2), 23));
label_280608:
    // 0x280608: 0x0  nop
    ctx->pc = 0x280608u;
    // NOP
label_28060c:
    // 0x28060c: 0x0  nop
    ctx->pc = 0x28060cu;
    // NOP
label_280610:
    // 0x280610: 0x1ab35  .word       0x0001AB35                   # INVALID     $zero, $at, -0x54CB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280610u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x280610 raw=0x0001AB35"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_280614:
    // 0x280614: 0x32610  .word       0x00032610                   # mfhi        $a0 # 00030600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280614u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_280618:
    // 0x280618: 0x0  nop
    ctx->pc = 0x280618u;
    // NOP
label_28061c:
    // 0x28061c: 0x0  nop
    ctx->pc = 0x28061cu;
    // NOP
label_280620:
    // 0x280620: 0x1ab9a  .word       0x0001AB9A                   # div         $s5, $zero, $at # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280620u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_280624:
    // 0x280624: 0x36a70  tge         $zero, $v1, 425
    ctx->pc = 0x280624u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_280628:
    // 0x280628: 0x0  nop
    ctx->pc = 0x280628u;
    // NOP
label_28062c:
    // 0x28062c: 0x0  nop
    ctx->pc = 0x28062cu;
    // NOP
label_280630:
    // 0x280630: 0x1ac08  .word       0x0001AC08                   # jr          $zero # 0001AC00 <InstrIdType: CPU_SPECIAL>
label_280634:
    if (ctx->pc == 0x280634u) {
        ctx->pc = 0x280634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280630u;
        // 0x280634: 0x352b0  tge         $zero, $v1, 330 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x280638u;
        goto label_280638;
    }
    ctx->pc = 0x280630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x280634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280630u;
        // 0x280634: 0x352b0  tge         $zero, $v1, 330 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280630u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x280638u;
label_280638:
    // 0x280638: 0x0  nop
    ctx->pc = 0x280638u;
    // NOP
label_28063c:
    // 0x28063c: 0x0  nop
    ctx->pc = 0x28063cu;
    // NOP
label_280640:
    // 0x280640: 0x1ac73  tltu        $zero, $at, 689
    ctx->pc = 0x280640u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_280644:
    // 0x280644: 0x355e0  .word       0x000355E0                   # add         $t2, $zero, $v1 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280644u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_280648:
    // 0x280648: 0x0  nop
    ctx->pc = 0x280648u;
    // NOP
label_28064c:
    // 0x28064c: 0x0  nop
    ctx->pc = 0x28064cu;
    // NOP
label_280650:
    // 0x280650: 0x1acde  .word       0x0001ACDE                   # ddiv        $s5, $zero, $at # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280650u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x280650 raw=0x0001ACDE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_280654:
    // 0x280654: 0x34dc0  sll         $t1, $v1, 23
    ctx->pc = 0x280654u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 23));
label_280658:
    // 0x280658: 0x0  nop
    ctx->pc = 0x280658u;
    // NOP
label_28065c:
    // 0x28065c: 0x0  nop
    ctx->pc = 0x28065cu;
    // NOP
label_280660:
    // 0x280660: 0x1ad48  .word       0x0001AD48                   # jr          $zero # 0001AD40 <InstrIdType: CPU_SPECIAL>
label_280664:
    if (ctx->pc == 0x280664u) {
        ctx->pc = 0x280664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280660u;
        // 0x280664: 0x39d00  sll         $s3, $v1, 20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x280668u;
        goto label_280668;
    }
    ctx->pc = 0x280660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x280664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280660u;
        // 0x280664: 0x39d00  sll         $s3, $v1, 20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280660u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x280668u;
label_280668:
    // 0x280668: 0x0  nop
    ctx->pc = 0x280668u;
    // NOP
label_28066c:
    // 0x28066c: 0x0  nop
    ctx->pc = 0x28066cu;
    // NOP
label_280670:
    // 0x280670: 0x1adbc  dsll32      $s5, $at, 22
    ctx->pc = 0x280670u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 1) << (32 + 22));
label_280674:
    // 0x280674: 0x33b00  sll         $a3, $v1, 12
    ctx->pc = 0x280674u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 12));
label_280678:
    // 0x280678: 0x0  nop
    ctx->pc = 0x280678u;
    // NOP
label_28067c:
    // 0x28067c: 0x0  nop
    ctx->pc = 0x28067cu;
    // NOP
label_280680:
    // 0x280680: 0x1ae24  .word       0x0001AE24                   # and         $s5, $zero, $at # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280680u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) & GPR_U64(ctx, 1));
label_280684:
    // 0x280684: 0x34ad0  .word       0x00034AD0                   # mfhi        $t1 # 000302C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280684u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_280688:
    // 0x280688: 0x0  nop
    ctx->pc = 0x280688u;
    // NOP
label_28068c:
    // 0x28068c: 0x0  nop
    ctx->pc = 0x28068cu;
    // NOP
label_280690:
    // 0x280690: 0x1ae8e  .word       0x0001AE8E                   # INVALID     $zero, $at, -0x5172 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280690u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x280690 raw=0x0001AE8E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_280694:
    // 0x280694: 0x36a40  sll         $t5, $v1, 9
    ctx->pc = 0x280694u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 3), 9));
label_280698:
    // 0x280698: 0x0  nop
    ctx->pc = 0x280698u;
    // NOP
label_28069c:
    // 0x28069c: 0x0  nop
    ctx->pc = 0x28069cu;
    // NOP
label_2806a0:
    // 0x2806a0: 0x1aefc  dsll32      $s5, $at, 27
    ctx->pc = 0x2806a0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 1) << (32 + 27));
label_2806a4:
    // 0x2806a4: 0x3af60  .word       0x0003AF60                   # add         $s5, $zero, $v1 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2806a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_2806a8:
    // 0x2806a8: 0x0  nop
    ctx->pc = 0x2806a8u;
    // NOP
label_2806ac:
    // 0x2806ac: 0x0  nop
    ctx->pc = 0x2806acu;
    // NOP
label_2806b0:
    // 0x2806b0: 0x1af72  tlt         $zero, $at, 701
    ctx->pc = 0x2806b0u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2806b4:
    // 0x2806b4: 0x33740  sll         $a2, $v1, 29
    ctx->pc = 0x2806b4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 29));
label_2806b8:
    // 0x2806b8: 0x0  nop
    ctx->pc = 0x2806b8u;
    // NOP
label_2806bc:
    // 0x2806bc: 0x0  nop
    ctx->pc = 0x2806bcu;
    // NOP
label_2806c0:
    // 0x2806c0: 0x1afd9  .word       0x0001AFD9                   # multu       $zero, $at # 0000AFC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2806c0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
label_2806c4:
    // 0x2806c4: 0x33d00  sll         $a3, $v1, 20
    ctx->pc = 0x2806c4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 20));
label_2806c8:
    // 0x2806c8: 0x0  nop
    ctx->pc = 0x2806c8u;
    // NOP
label_2806cc:
    // 0x2806cc: 0x0  nop
    ctx->pc = 0x2806ccu;
    // NOP
label_2806d0:
    // 0x2806d0: 0x1b041  .word       0x0001B041                   # INVALID     $zero, $at, -0x4FBF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2806d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2806D0 raw=0x0001B041"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2806d4:
    // 0x2806d4: 0x353a0  .word       0x000353A0                   # add         $t2, $zero, $v1 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2806d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_2806d8:
    // 0x2806d8: 0x0  nop
    ctx->pc = 0x2806d8u;
    // NOP
label_2806dc:
    // 0x2806dc: 0x0  nop
    ctx->pc = 0x2806dcu;
    // NOP
label_2806e0:
    // 0x2806e0: 0x1b0ac  .word       0x0001B0AC                   # dadd        $s6, $zero, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2806e0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 1); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 22, r); }
label_2806e4:
    // 0x2806e4: 0x35d50  .word       0x00035D50                   # mfhi        $t3 # 00030540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2806e4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_2806e8:
    // 0x2806e8: 0x0  nop
    ctx->pc = 0x2806e8u;
    // NOP
label_2806ec:
    // 0x2806ec: 0x0  nop
    ctx->pc = 0x2806ecu;
    // NOP
label_2806f0:
    // 0x2806f0: 0x1b118  .word       0x0001B118                   # mult        $s6, $zero, $at # 00000100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x2806f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 22, (int32_t)result); }
label_2806f4:
    // 0x2806f4: 0x3b000  sll         $s6, $v1, 0
    ctx->pc = 0x2806f4u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
label_2806f8:
    // 0x2806f8: 0x0  nop
    ctx->pc = 0x2806f8u;
    // NOP
label_2806fc:
    // 0x2806fc: 0x0  nop
    ctx->pc = 0x2806fcu;
    // NOP
label_280700:
    // 0x280700: 0x1b18e  .word       0x0001B18E                   # INVALID     $zero, $at, -0x4E72 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280700u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x280700 raw=0x0001B18E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_280704:
    // 0x280704: 0x3b070  tge         $zero, $v1, 705
    ctx->pc = 0x280704u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_280708:
    // 0x280708: 0x0  nop
    ctx->pc = 0x280708u;
    // NOP
label_28070c:
    // 0x28070c: 0x0  nop
    ctx->pc = 0x28070cu;
    // NOP
label_280710:
    // 0x280710: 0x1b205  .word       0x0001B205                   # INVALID     $zero, $at, -0x4DFB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280710u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x280710 raw=0x0001B205"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_280714:
    // 0x280714: 0x37340  sll         $t6, $v1, 13
    ctx->pc = 0x280714u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 3), 13));
label_280718:
    // 0x280718: 0x0  nop
    ctx->pc = 0x280718u;
    // NOP
label_28071c:
    // 0x28071c: 0x0  nop
    ctx->pc = 0x28071cu;
    // NOP
label_280720:
    // 0x280720: 0x1b274  teq         $zero, $at, 713
    ctx->pc = 0x280720u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_280724:
    // 0x280724: 0x392b0  tge         $zero, $v1, 586
    ctx->pc = 0x280724u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_280728:
    // 0x280728: 0x0  nop
    ctx->pc = 0x280728u;
    // NOP
label_28072c:
    // 0x28072c: 0x0  nop
    ctx->pc = 0x28072cu;
    // NOP
label_280730:
    // 0x280730: 0x1b2e7  .word       0x0001B2E7                   # nor         $s6, $zero, $at # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280730u;
    SET_GPR_U64(ctx, 22, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 1)));
label_280734:
    // 0x280734: 0x36ac0  sll         $t5, $v1, 11
    ctx->pc = 0x280734u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
label_280738:
    // 0x280738: 0x0  nop
    ctx->pc = 0x280738u;
    // NOP
label_28073c:
    // 0x28073c: 0x0  nop
    ctx->pc = 0x28073cu;
    // NOP
label_280740:
    // 0x280740: 0x1b355  .word       0x0001B355                   # INVALID     $zero, $at, -0x4CAB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280740u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x280740 raw=0x0001B355"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_280744:
    // 0x280744: 0x31d10  .word       0x00031D10                   # mfhi        $v1 # 00030500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280744u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_280748:
    // 0x280748: 0x0  nop
    ctx->pc = 0x280748u;
    // NOP
label_28074c:
    // 0x28074c: 0x0  nop
    ctx->pc = 0x28074cu;
    // NOP
label_280750:
    // 0x280750: 0x1b3b9  .word       0x0001B3B9                   # INVALID     $zero, $at, -0x4C47 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280750u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x280750 raw=0x0001B3B9"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_280754:
    // 0x280754: 0x34bf0  tge         $zero, $v1, 303
    ctx->pc = 0x280754u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_280758:
    // 0x280758: 0x0  nop
    ctx->pc = 0x280758u;
    // NOP
label_28075c:
    // 0x28075c: 0x0  nop
    ctx->pc = 0x28075cu;
    // NOP
label_280760:
    // 0x280760: 0x1b423  .word       0x0001B423                   # negu        $s6, $at # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280760u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_280764:
    // 0x280764: 0x332a0  .word       0x000332A0                   # add         $a2, $zero, $v1 # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280764u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_280768:
    // 0x280768: 0x0  nop
    ctx->pc = 0x280768u;
    // NOP
label_28076c:
    // 0x28076c: 0x0  nop
    ctx->pc = 0x28076cu;
    // NOP
label_280770:
    // 0x280770: 0x1b48a  .word       0x0001B48A                   # movz        $s6, $zero, $at # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280770u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 0));
label_280774:
    // 0x280774: 0x37d60  .word       0x00037D60                   # add         $t7, $zero, $v1 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280774u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_280778:
    // 0x280778: 0x0  nop
    ctx->pc = 0x280778u;
    // NOP
label_28077c:
    // 0x28077c: 0x0  nop
    ctx->pc = 0x28077cu;
    // NOP
label_280780:
    // 0x280780: 0x1b4fa  dsrl        $s6, $at, 19
    ctx->pc = 0x280780u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 1) >> 19);
label_280784:
    // 0x280784: 0x2b9f0  tge         $zero, $v0, 743
    ctx->pc = 0x280784u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 2)) { runtime->handleTrap(rdram, ctx); }
label_280788:
    // 0x280788: 0x0  nop
    ctx->pc = 0x280788u;
    // NOP
label_28078c:
    // 0x28078c: 0x0  nop
    ctx->pc = 0x28078cu;
    // NOP
label_280790:
    // 0x280790: 0x1b552  .word       0x0001B552                   # mflo        $s6 # 00010540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280790u;
    SET_GPR_U64(ctx, 22, ctx->lo);
label_280794:
    // 0x280794: 0x38c40  sll         $s1, $v1, 17
    ctx->pc = 0x280794u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), 17));
label_280798:
    // 0x280798: 0x0  nop
    ctx->pc = 0x280798u;
    // NOP
label_28079c:
    // 0x28079c: 0x0  nop
    ctx->pc = 0x28079cu;
    // NOP
label_2807a0:
    // 0x2807a0: 0x1b5c4  .word       0x0001B5C4                   # sllv        $s6, $at, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2807a0u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_2807a4:
    // 0x2807a4: 0x30570  tge         $zero, $v1, 21
    ctx->pc = 0x2807a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_2807a8:
    // 0x2807a8: 0x0  nop
    ctx->pc = 0x2807a8u;
    // NOP
label_2807ac:
    // 0x2807ac: 0x0  nop
    ctx->pc = 0x2807acu;
    // NOP
label_2807b0:
    // 0x2807b0: 0x1b625  .word       0x0001B625                   # or          $s6, $zero, $at # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2807b0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) | GPR_U64(ctx, 1));
label_2807b4:
    // 0x2807b4: 0x33120  .word       0x00033120                   # add         $a2, $zero, $v1 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2807b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_2807b8:
    // 0x2807b8: 0x0  nop
    ctx->pc = 0x2807b8u;
    // NOP
label_2807bc:
    // 0x2807bc: 0x0  nop
    ctx->pc = 0x2807bcu;
    // NOP
label_2807c0:
    // 0x2807c0: 0x1b68c  .word       0x0001B68C                   # syscall     730 # 00010000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2807c0u;
    ctx->pc = 0x2807C4u;
runtime->handleSyscall(rdram, ctx, 0x6DAu);
label_2807c4:
    // 0x2807c4: 0x331d0  .word       0x000331D0                   # mfhi        $a2 # 000301C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2807c4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_2807c8:
    // 0x2807c8: 0x0  nop
    ctx->pc = 0x2807c8u;
    // NOP
label_2807cc:
    // 0x2807cc: 0x0  nop
    ctx->pc = 0x2807ccu;
    // NOP
label_2807d0:
    // 0x2807d0: 0x1b6f3  tltu        $zero, $at, 731
    ctx->pc = 0x2807d0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2807d4:
    // 0x2807d4: 0x36300  sll         $t4, $v1, 12
    ctx->pc = 0x2807d4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 3), 12));
label_2807d8:
    // 0x2807d8: 0x0  nop
    ctx->pc = 0x2807d8u;
    // NOP
label_2807dc:
    // 0x2807dc: 0x0  nop
    ctx->pc = 0x2807dcu;
    // NOP
label_2807e0:
    // 0x2807e0: 0x1b760  .word       0x0001B760                   # add         $s6, $zero, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2807e0u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
label_2807e4:
    // 0x2807e4: 0x3c580  sll         $t8, $v1, 22
    ctx->pc = 0x2807e4u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 3), 22));
label_2807e8:
    // 0x2807e8: 0x0  nop
    ctx->pc = 0x2807e8u;
    // NOP
label_2807ec:
    // 0x2807ec: 0x0  nop
    ctx->pc = 0x2807ecu;
    // NOP
label_2807f0:
    // 0x2807f0: 0x1b7d9  .word       0x0001B7D9                   # multu       $zero, $at # 0000B7C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2807f0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 1); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 22, (int32_t)result); }
label_2807f4:
    // 0x2807f4: 0x33df0  tge         $zero, $v1, 247
    ctx->pc = 0x2807f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_2807f8:
    // 0x2807f8: 0x0  nop
    ctx->pc = 0x2807f8u;
    // NOP
label_2807fc:
    // 0x2807fc: 0x0  nop
    ctx->pc = 0x2807fcu;
    // NOP
label_280800:
    // 0x280800: 0x1b841  .word       0x0001B841                   # INVALID     $zero, $at, -0x47BF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280800u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x280800 raw=0x0001B841"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_280804:
    // 0x280804: 0x34d90  .word       0x00034D90                   # mfhi        $t1 # 00030580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280804u;
    SET_GPR_U64(ctx, 9, ctx->hi);
label_280808:
    // 0x280808: 0x0  nop
    ctx->pc = 0x280808u;
    // NOP
label_28080c:
    // 0x28080c: 0x0  nop
    ctx->pc = 0x28080cu;
    // NOP
label_280810:
    // 0x280810: 0x1b8ab  .word       0x0001B8AB                   # sltu        $s7, $zero, $at # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280810u;
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_280814:
    // 0x280814: 0x31f30  tge         $zero, $v1, 124
    ctx->pc = 0x280814u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_280818:
    // 0x280818: 0x0  nop
    ctx->pc = 0x280818u;
    // NOP
label_28081c:
    // 0x28081c: 0x0  nop
    ctx->pc = 0x28081cu;
    // NOP
label_280820:
    // 0x280820: 0x1b90f  .word       0x0001B90F                   # sync # 0001B800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280820u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_280824:
    // 0x280824: 0x3b430  tge         $zero, $v1, 720
    ctx->pc = 0x280824u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_280828:
    // 0x280828: 0x0  nop
    ctx->pc = 0x280828u;
    // NOP
label_28082c:
    // 0x28082c: 0x0  nop
    ctx->pc = 0x28082cu;
    // NOP
label_280830:
    // 0x280830: 0x1b986  .word       0x0001B986                   # srlv        $s7, $at, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280830u;
    SET_GPR_S32(ctx, 23, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_280834:
    // 0x280834: 0x35e30  tge         $zero, $v1, 376
    ctx->pc = 0x280834u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_280838:
    // 0x280838: 0x0  nop
    ctx->pc = 0x280838u;
    // NOP
label_28083c:
    // 0x28083c: 0x0  nop
    ctx->pc = 0x28083cu;
    // NOP
label_280840:
    // 0x280840: 0x1b9f2  tlt         $zero, $at, 743
    ctx->pc = 0x280840u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_280844:
    // 0x280844: 0x33a30  tge         $zero, $v1, 232
    ctx->pc = 0x280844u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_280848:
    // 0x280848: 0x0  nop
    ctx->pc = 0x280848u;
    // NOP
label_28084c:
    // 0x28084c: 0x0  nop
    ctx->pc = 0x28084cu;
    // NOP
label_280850:
    // 0x280850: 0x1ba5a  .word       0x0001BA5A                   # div         $s7, $zero, $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280850u;
    { int32_t divisor = GPR_S32(ctx, 1);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_280854:
    // 0x280854: 0x398e0  .word       0x000398E0                   # add         $s3, $zero, $v1 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280854u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 19, (int32_t)result);     } }
label_280858:
    // 0x280858: 0x0  nop
    ctx->pc = 0x280858u;
    // NOP
label_28085c:
    // 0x28085c: 0x0  nop
    ctx->pc = 0x28085cu;
    // NOP
label_280860:
    // 0x280860: 0x1bace  .word       0x0001BACE                   # INVALID     $zero, $at, -0x4532 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280860u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x280860 raw=0x0001BACE"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_280864:
    // 0x280864: 0x37690  .word       0x00037690                   # mfhi        $t6 # 00030680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280864u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_280868:
    // 0x280868: 0x0  nop
    ctx->pc = 0x280868u;
    // NOP
label_28086c:
    // 0x28086c: 0x0  nop
    ctx->pc = 0x28086cu;
    // NOP
label_280870:
    // 0x280870: 0x1bb3d  .word       0x0001BB3D                   # INVALID     $zero, $at, -0x44C3 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280870u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x280870 raw=0x0001BB3D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_280874:
    // 0x280874: 0x36510  .word       0x00036510                   # mfhi        $t4 # 00030500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280874u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_280878:
    // 0x280878: 0x0  nop
    ctx->pc = 0x280878u;
    // NOP
label_28087c:
    // 0x28087c: 0x0  nop
    ctx->pc = 0x28087cu;
    // NOP
label_280880:
    // 0x280880: 0x1bbaa  .word       0x0001BBAA                   # slt         $s7, $zero, $at # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280880u;
    SET_GPR_U64(ctx, 23, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
label_280884:
    // 0x280884: 0x3c740  sll         $t8, $v1, 29
    ctx->pc = 0x280884u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 3), 29));
label_280888:
    // 0x280888: 0x0  nop
    ctx->pc = 0x280888u;
    // NOP
label_28088c:
    // 0x28088c: 0x0  nop
    ctx->pc = 0x28088cu;
    // NOP
label_280890:
    // 0x280890: 0x1bc23  .word       0x0001BC23                   # negu        $s7, $at # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x280890u;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_280894:
    // 0x280894: 0x30700  sll         $zero, $v1, 28
    ctx->pc = 0x280894u;
    
label_280898:
    // 0x280898: 0x0  nop
    ctx->pc = 0x280898u;
    // NOP
label_28089c:
    // 0x28089c: 0x0  nop
    ctx->pc = 0x28089cu;
    // NOP
label_2808a0:
    // 0x2808a0: 0x1bc84  .word       0x0001BC84                   # sllv        $s7, $at, $zero # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2808a0u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 1), GPR_U32(ctx, 0) & 0x1F));
label_2808a4:
    // 0x2808a4: 0x37ce0  .word       0x00037CE0                   # add         $t7, $zero, $v1 # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2808a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_2808a8:
    // 0x2808a8: 0x0  nop
    ctx->pc = 0x2808a8u;
    // NOP
label_2808ac:
    // 0x2808ac: 0x0  nop
    ctx->pc = 0x2808acu;
    // NOP
label_2808b0:
    // 0x2808b0: 0x1bcf4  teq         $zero, $at, 755
    ctx->pc = 0x2808b0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
label_2808b4:
    // 0x2808b4: 0x362f0  tge         $zero, $v1, 395
    ctx->pc = 0x2808b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_2808b8:
    // 0x2808b8: 0x0  nop
    ctx->pc = 0x2808b8u;
    // NOP
label_2808bc:
    // 0x2808bc: 0x0  nop
    ctx->pc = 0x2808bcu;
    // NOP
label_2808c0:
    // 0x2808c0: 0x1bd61  .word       0x0001BD61                   # addu        $s7, $zero, $at # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2808c0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 1)));
label_2808c4:
    // 0x2808c4: 0x37da0  .word       0x00037DA0                   # add         $t7, $zero, $v1 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2808c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_2808c8:
    // 0x2808c8: 0x0  nop
    ctx->pc = 0x2808c8u;
    // NOP
label_2808cc:
    // 0x2808cc: 0x0  nop
    ctx->pc = 0x2808ccu;
    // NOP
label_2808d0:
    // 0x2808d0: 0x1bdd1  .word       0x0001BDD1                   # mthi        $zero # 0001BDC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2808d0u;
    ctx->hi = GPR_U64(ctx, 0);
label_2808d4:
    // 0x2808d4: 0x36b30  tge         $zero, $v1, 428
    ctx->pc = 0x2808d4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 3)) { runtime->handleTrap(rdram, ctx); }
label_2808d8:
    // 0x2808d8: 0x0  nop
    ctx->pc = 0x2808d8u;
    // NOP
label_2808dc:
    // 0x2808dc: 0x0  nop
    ctx->pc = 0x2808dcu;
    // NOP
    ctx->pc = 0x2808e0u;
    return;
}

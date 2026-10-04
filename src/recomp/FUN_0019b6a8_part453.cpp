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


void FUN_0019b6a8_part453(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2781e8u: goto label_2781e8;
        case 0x2781ecu: goto label_2781ec;
        case 0x2781f0u: goto label_2781f0;
        case 0x2781f4u: goto label_2781f4;
        case 0x2781f8u: goto label_2781f8;
        case 0x2781fcu: goto label_2781fc;
        case 0x278200u: goto label_278200;
        case 0x278204u: goto label_278204;
        case 0x278208u: goto label_278208;
        case 0x27820cu: goto label_27820c;
        case 0x278210u: goto label_278210;
        case 0x278214u: goto label_278214;
        case 0x278218u: goto label_278218;
        case 0x27821cu: goto label_27821c;
        case 0x278220u: goto label_278220;
        case 0x278224u: goto label_278224;
        case 0x278228u: goto label_278228;
        case 0x27822cu: goto label_27822c;
        case 0x278230u: goto label_278230;
        case 0x278234u: goto label_278234;
        case 0x278238u: goto label_278238;
        case 0x27823cu: goto label_27823c;
        case 0x278240u: goto label_278240;
        case 0x278244u: goto label_278244;
        case 0x278248u: goto label_278248;
        case 0x27824cu: goto label_27824c;
        case 0x278250u: goto label_278250;
        case 0x278254u: goto label_278254;
        case 0x278258u: goto label_278258;
        case 0x27825cu: goto label_27825c;
        case 0x278260u: goto label_278260;
        case 0x278264u: goto label_278264;
        case 0x278268u: goto label_278268;
        case 0x27826cu: goto label_27826c;
        case 0x278270u: goto label_278270;
        case 0x278274u: goto label_278274;
        case 0x278278u: goto label_278278;
        case 0x27827cu: goto label_27827c;
        case 0x278280u: goto label_278280;
        case 0x278284u: goto label_278284;
        case 0x278288u: goto label_278288;
        case 0x27828cu: goto label_27828c;
        case 0x278290u: goto label_278290;
        case 0x278294u: goto label_278294;
        case 0x278298u: goto label_278298;
        case 0x27829cu: goto label_27829c;
        case 0x2782a0u: goto label_2782a0;
        case 0x2782a4u: goto label_2782a4;
        case 0x2782a8u: goto label_2782a8;
        case 0x2782acu: goto label_2782ac;
        case 0x2782b0u: goto label_2782b0;
        case 0x2782b4u: goto label_2782b4;
        case 0x2782b8u: goto label_2782b8;
        case 0x2782bcu: goto label_2782bc;
        case 0x2782c0u: goto label_2782c0;
        case 0x2782c4u: goto label_2782c4;
        case 0x2782c8u: goto label_2782c8;
        case 0x2782ccu: goto label_2782cc;
        case 0x2782d0u: goto label_2782d0;
        case 0x2782d4u: goto label_2782d4;
        case 0x2782d8u: goto label_2782d8;
        case 0x2782dcu: goto label_2782dc;
        case 0x2782e0u: goto label_2782e0;
        case 0x2782e4u: goto label_2782e4;
        case 0x2782e8u: goto label_2782e8;
        case 0x2782ecu: goto label_2782ec;
        case 0x2782f0u: goto label_2782f0;
        case 0x2782f4u: goto label_2782f4;
        case 0x2782f8u: goto label_2782f8;
        case 0x2782fcu: goto label_2782fc;
        case 0x278300u: goto label_278300;
        case 0x278304u: goto label_278304;
        case 0x278308u: goto label_278308;
        case 0x27830cu: goto label_27830c;
        case 0x278310u: goto label_278310;
        case 0x278314u: goto label_278314;
        case 0x278318u: goto label_278318;
        case 0x27831cu: goto label_27831c;
        case 0x278320u: goto label_278320;
        case 0x278324u: goto label_278324;
        case 0x278328u: goto label_278328;
        case 0x27832cu: goto label_27832c;
        case 0x278330u: goto label_278330;
        case 0x278334u: goto label_278334;
        case 0x278338u: goto label_278338;
        case 0x27833cu: goto label_27833c;
        case 0x278340u: goto label_278340;
        case 0x278344u: goto label_278344;
        case 0x278348u: goto label_278348;
        case 0x27834cu: goto label_27834c;
        case 0x278350u: goto label_278350;
        case 0x278354u: goto label_278354;
        case 0x278358u: goto label_278358;
        case 0x27835cu: goto label_27835c;
        case 0x278360u: goto label_278360;
        case 0x278364u: goto label_278364;
        case 0x278368u: goto label_278368;
        case 0x27836cu: goto label_27836c;
        case 0x278370u: goto label_278370;
        case 0x278374u: goto label_278374;
        case 0x278378u: goto label_278378;
        case 0x27837cu: goto label_27837c;
        case 0x278380u: goto label_278380;
        case 0x278384u: goto label_278384;
        case 0x278388u: goto label_278388;
        case 0x27838cu: goto label_27838c;
        case 0x278390u: goto label_278390;
        case 0x278394u: goto label_278394;
        case 0x278398u: goto label_278398;
        case 0x27839cu: goto label_27839c;
        case 0x2783a0u: goto label_2783a0;
        case 0x2783a4u: goto label_2783a4;
        case 0x2783a8u: goto label_2783a8;
        case 0x2783acu: goto label_2783ac;
        case 0x2783b0u: goto label_2783b0;
        case 0x2783b4u: goto label_2783b4;
        case 0x2783b8u: goto label_2783b8;
        case 0x2783bcu: goto label_2783bc;
        case 0x2783c0u: goto label_2783c0;
        case 0x2783c4u: goto label_2783c4;
        case 0x2783c8u: goto label_2783c8;
        case 0x2783ccu: goto label_2783cc;
        case 0x2783d0u: goto label_2783d0;
        case 0x2783d4u: goto label_2783d4;
        case 0x2783d8u: goto label_2783d8;
        case 0x2783dcu: goto label_2783dc;
        case 0x2783e0u: goto label_2783e0;
        case 0x2783e4u: goto label_2783e4;
        case 0x2783e8u: goto label_2783e8;
        case 0x2783ecu: goto label_2783ec;
        case 0x2783f0u: goto label_2783f0;
        case 0x2783f4u: goto label_2783f4;
        case 0x2783f8u: goto label_2783f8;
        case 0x2783fcu: goto label_2783fc;
        case 0x278400u: goto label_278400;
        case 0x278404u: goto label_278404;
        case 0x278408u: goto label_278408;
        case 0x27840cu: goto label_27840c;
        case 0x278410u: goto label_278410;
        case 0x278414u: goto label_278414;
        case 0x278418u: goto label_278418;
        case 0x27841cu: goto label_27841c;
        case 0x278420u: goto label_278420;
        case 0x278424u: goto label_278424;
        case 0x278428u: goto label_278428;
        case 0x27842cu: goto label_27842c;
        case 0x278430u: goto label_278430;
        case 0x278434u: goto label_278434;
        case 0x278438u: goto label_278438;
        case 0x27843cu: goto label_27843c;
        case 0x278440u: goto label_278440;
        case 0x278444u: goto label_278444;
        case 0x278448u: goto label_278448;
        case 0x27844cu: goto label_27844c;
        case 0x278450u: goto label_278450;
        case 0x278454u: goto label_278454;
        case 0x278458u: goto label_278458;
        case 0x27845cu: goto label_27845c;
        case 0x278460u: goto label_278460;
        case 0x278464u: goto label_278464;
        case 0x278468u: goto label_278468;
        case 0x27846cu: goto label_27846c;
        case 0x278470u: goto label_278470;
        case 0x278474u: goto label_278474;
        case 0x278478u: goto label_278478;
        case 0x27847cu: goto label_27847c;
        case 0x278480u: goto label_278480;
        case 0x278484u: goto label_278484;
        case 0x278488u: goto label_278488;
        case 0x27848cu: goto label_27848c;
        case 0x278490u: goto label_278490;
        case 0x278494u: goto label_278494;
        case 0x278498u: goto label_278498;
        case 0x27849cu: goto label_27849c;
        case 0x2784a0u: goto label_2784a0;
        case 0x2784a4u: goto label_2784a4;
        case 0x2784a8u: goto label_2784a8;
        case 0x2784acu: goto label_2784ac;
        case 0x2784b0u: goto label_2784b0;
        case 0x2784b4u: goto label_2784b4;
        case 0x2784b8u: goto label_2784b8;
        case 0x2784bcu: goto label_2784bc;
        case 0x2784c0u: goto label_2784c0;
        case 0x2784c4u: goto label_2784c4;
        case 0x2784c8u: goto label_2784c8;
        case 0x2784ccu: goto label_2784cc;
        case 0x2784d0u: goto label_2784d0;
        case 0x2784d4u: goto label_2784d4;
        case 0x2784d8u: goto label_2784d8;
        case 0x2784dcu: goto label_2784dc;
        case 0x2784e0u: goto label_2784e0;
        case 0x2784e4u: goto label_2784e4;
        case 0x2784e8u: goto label_2784e8;
        case 0x2784ecu: goto label_2784ec;
        case 0x2784f0u: goto label_2784f0;
        case 0x2784f4u: goto label_2784f4;
        case 0x2784f8u: goto label_2784f8;
        case 0x2784fcu: goto label_2784fc;
        case 0x278500u: goto label_278500;
        case 0x278504u: goto label_278504;
        case 0x278508u: goto label_278508;
        case 0x27850cu: goto label_27850c;
        case 0x278510u: goto label_278510;
        case 0x278514u: goto label_278514;
        case 0x278518u: goto label_278518;
        case 0x27851cu: goto label_27851c;
        case 0x278520u: goto label_278520;
        case 0x278524u: goto label_278524;
        case 0x278528u: goto label_278528;
        case 0x27852cu: goto label_27852c;
        case 0x278530u: goto label_278530;
        case 0x278534u: goto label_278534;
        case 0x278538u: goto label_278538;
        case 0x27853cu: goto label_27853c;
        case 0x278540u: goto label_278540;
        case 0x278544u: goto label_278544;
        case 0x278548u: goto label_278548;
        case 0x27854cu: goto label_27854c;
        case 0x278550u: goto label_278550;
        case 0x278554u: goto label_278554;
        case 0x278558u: goto label_278558;
        case 0x27855cu: goto label_27855c;
        case 0x278560u: goto label_278560;
        case 0x278564u: goto label_278564;
        case 0x278568u: goto label_278568;
        case 0x27856cu: goto label_27856c;
        case 0x278570u: goto label_278570;
        case 0x278574u: goto label_278574;
        case 0x278578u: goto label_278578;
        case 0x27857cu: goto label_27857c;
        case 0x278580u: goto label_278580;
        case 0x278584u: goto label_278584;
        case 0x278588u: goto label_278588;
        case 0x27858cu: goto label_27858c;
        case 0x278590u: goto label_278590;
        case 0x278594u: goto label_278594;
        case 0x278598u: goto label_278598;
        case 0x27859cu: goto label_27859c;
        case 0x2785a0u: goto label_2785a0;
        case 0x2785a4u: goto label_2785a4;
        case 0x2785a8u: goto label_2785a8;
        case 0x2785acu: goto label_2785ac;
        case 0x2785b0u: goto label_2785b0;
        case 0x2785b4u: goto label_2785b4;
        case 0x2785b8u: goto label_2785b8;
        case 0x2785bcu: goto label_2785bc;
        case 0x2785c0u: goto label_2785c0;
        case 0x2785c4u: goto label_2785c4;
        case 0x2785c8u: goto label_2785c8;
        case 0x2785ccu: goto label_2785cc;
        case 0x2785d0u: goto label_2785d0;
        case 0x2785d4u: goto label_2785d4;
        case 0x2785d8u: goto label_2785d8;
        case 0x2785dcu: goto label_2785dc;
        case 0x2785e0u: goto label_2785e0;
        case 0x2785e4u: goto label_2785e4;
        case 0x2785e8u: goto label_2785e8;
        case 0x2785ecu: goto label_2785ec;
        case 0x2785f0u: goto label_2785f0;
        case 0x2785f4u: goto label_2785f4;
        case 0x2785f8u: goto label_2785f8;
        case 0x2785fcu: goto label_2785fc;
        case 0x278600u: goto label_278600;
        case 0x278604u: goto label_278604;
        case 0x278608u: goto label_278608;
        case 0x27860cu: goto label_27860c;
        case 0x278610u: goto label_278610;
        case 0x278614u: goto label_278614;
        case 0x278618u: goto label_278618;
        case 0x27861cu: goto label_27861c;
        case 0x278620u: goto label_278620;
        case 0x278624u: goto label_278624;
        case 0x278628u: goto label_278628;
        case 0x27862cu: goto label_27862c;
        case 0x278630u: goto label_278630;
        case 0x278634u: goto label_278634;
        case 0x278638u: goto label_278638;
        case 0x27863cu: goto label_27863c;
        case 0x278640u: goto label_278640;
        case 0x278644u: goto label_278644;
        case 0x278648u: goto label_278648;
        case 0x27864cu: goto label_27864c;
        case 0x278650u: goto label_278650;
        case 0x278654u: goto label_278654;
        case 0x278658u: goto label_278658;
        case 0x27865cu: goto label_27865c;
        case 0x278660u: goto label_278660;
        case 0x278664u: goto label_278664;
        case 0x278668u: goto label_278668;
        case 0x27866cu: goto label_27866c;
        case 0x278670u: goto label_278670;
        case 0x278674u: goto label_278674;
        case 0x278678u: goto label_278678;
        case 0x27867cu: goto label_27867c;
        case 0x278680u: goto label_278680;
        case 0x278684u: goto label_278684;
        case 0x278688u: goto label_278688;
        case 0x27868cu: goto label_27868c;
        case 0x278690u: goto label_278690;
        case 0x278694u: goto label_278694;
        case 0x278698u: goto label_278698;
        case 0x27869cu: goto label_27869c;
        case 0x2786a0u: goto label_2786a0;
        case 0x2786a4u: goto label_2786a4;
        case 0x2786a8u: goto label_2786a8;
        case 0x2786acu: goto label_2786ac;
        case 0x2786b0u: goto label_2786b0;
        case 0x2786b4u: goto label_2786b4;
        case 0x2786b8u: goto label_2786b8;
        case 0x2786bcu: goto label_2786bc;
        case 0x2786c0u: goto label_2786c0;
        case 0x2786c4u: goto label_2786c4;
        case 0x2786c8u: goto label_2786c8;
        case 0x2786ccu: goto label_2786cc;
        case 0x2786d0u: goto label_2786d0;
        case 0x2786d4u: goto label_2786d4;
        case 0x2786d8u: goto label_2786d8;
        case 0x2786dcu: goto label_2786dc;
        case 0x2786e0u: goto label_2786e0;
        case 0x2786e4u: goto label_2786e4;
        case 0x2786e8u: goto label_2786e8;
        case 0x2786ecu: goto label_2786ec;
        case 0x2786f0u: goto label_2786f0;
        case 0x2786f4u: goto label_2786f4;
        case 0x2786f8u: goto label_2786f8;
        case 0x2786fcu: goto label_2786fc;
        case 0x278700u: goto label_278700;
        case 0x278704u: goto label_278704;
        case 0x278708u: goto label_278708;
        case 0x27870cu: goto label_27870c;
        case 0x278710u: goto label_278710;
        case 0x278714u: goto label_278714;
        case 0x278718u: goto label_278718;
        case 0x27871cu: goto label_27871c;
        case 0x278720u: goto label_278720;
        case 0x278724u: goto label_278724;
        case 0x278728u: goto label_278728;
        case 0x27872cu: goto label_27872c;
        case 0x278730u: goto label_278730;
        case 0x278734u: goto label_278734;
        case 0x278738u: goto label_278738;
        case 0x27873cu: goto label_27873c;
        case 0x278740u: goto label_278740;
        case 0x278744u: goto label_278744;
        case 0x278748u: goto label_278748;
        case 0x27874cu: goto label_27874c;
        case 0x278750u: goto label_278750;
        case 0x278754u: goto label_278754;
        case 0x278758u: goto label_278758;
        case 0x27875cu: goto label_27875c;
        case 0x278760u: goto label_278760;
        case 0x278764u: goto label_278764;
        case 0x278768u: goto label_278768;
        case 0x27876cu: goto label_27876c;
        case 0x278770u: goto label_278770;
        case 0x278774u: goto label_278774;
        case 0x278778u: goto label_278778;
        case 0x27877cu: goto label_27877c;
        case 0x278780u: goto label_278780;
        case 0x278784u: goto label_278784;
        case 0x278788u: goto label_278788;
        case 0x27878cu: goto label_27878c;
        case 0x278790u: goto label_278790;
        case 0x278794u: goto label_278794;
        case 0x278798u: goto label_278798;
        case 0x27879cu: goto label_27879c;
        case 0x2787a0u: goto label_2787a0;
        case 0x2787a4u: goto label_2787a4;
        case 0x2787a8u: goto label_2787a8;
        case 0x2787acu: goto label_2787ac;
        case 0x2787b0u: goto label_2787b0;
        case 0x2787b4u: goto label_2787b4;
        case 0x2787b8u: goto label_2787b8;
        case 0x2787bcu: goto label_2787bc;
        case 0x2787c0u: goto label_2787c0;
        case 0x2787c4u: goto label_2787c4;
        case 0x2787c8u: goto label_2787c8;
        case 0x2787ccu: goto label_2787cc;
        case 0x2787d0u: goto label_2787d0;
        case 0x2787d4u: goto label_2787d4;
        case 0x2787d8u: goto label_2787d8;
        case 0x2787dcu: goto label_2787dc;
        case 0x2787e0u: goto label_2787e0;
        case 0x2787e4u: goto label_2787e4;
        case 0x2787e8u: goto label_2787e8;
        case 0x2787ecu: goto label_2787ec;
        case 0x2787f0u: goto label_2787f0;
        case 0x2787f4u: goto label_2787f4;
        case 0x2787f8u: goto label_2787f8;
        case 0x2787fcu: goto label_2787fc;
        case 0x278800u: goto label_278800;
        case 0x278804u: goto label_278804;
        case 0x278808u: goto label_278808;
        case 0x27880cu: goto label_27880c;
        case 0x278810u: goto label_278810;
        case 0x278814u: goto label_278814;
        case 0x278818u: goto label_278818;
        case 0x27881cu: goto label_27881c;
        case 0x278820u: goto label_278820;
        case 0x278824u: goto label_278824;
        case 0x278828u: goto label_278828;
        case 0x27882cu: goto label_27882c;
        case 0x278830u: goto label_278830;
        case 0x278834u: goto label_278834;
        case 0x278838u: goto label_278838;
        case 0x27883cu: goto label_27883c;
        case 0x278840u: goto label_278840;
        case 0x278844u: goto label_278844;
        case 0x278848u: goto label_278848;
        case 0x27884cu: goto label_27884c;
        case 0x278850u: goto label_278850;
        case 0x278854u: goto label_278854;
        case 0x278858u: goto label_278858;
        case 0x27885cu: goto label_27885c;
        case 0x278860u: goto label_278860;
        case 0x278864u: goto label_278864;
        case 0x278868u: goto label_278868;
        case 0x27886cu: goto label_27886c;
        case 0x278870u: goto label_278870;
        case 0x278874u: goto label_278874;
        case 0x278878u: goto label_278878;
        case 0x27887cu: goto label_27887c;
        case 0x278880u: goto label_278880;
        case 0x278884u: goto label_278884;
        case 0x278888u: goto label_278888;
        case 0x27888cu: goto label_27888c;
        case 0x278890u: goto label_278890;
        case 0x278894u: goto label_278894;
        case 0x278898u: goto label_278898;
        case 0x27889cu: goto label_27889c;
        case 0x2788a0u: goto label_2788a0;
        case 0x2788a4u: goto label_2788a4;
        case 0x2788a8u: goto label_2788a8;
        case 0x2788acu: goto label_2788ac;
        case 0x2788b0u: goto label_2788b0;
        case 0x2788b4u: goto label_2788b4;
        case 0x2788b8u: goto label_2788b8;
        case 0x2788bcu: goto label_2788bc;
        case 0x2788c0u: goto label_2788c0;
        case 0x2788c4u: goto label_2788c4;
        case 0x2788c8u: goto label_2788c8;
        case 0x2788ccu: goto label_2788cc;
        case 0x2788d0u: goto label_2788d0;
        case 0x2788d4u: goto label_2788d4;
        case 0x2788d8u: goto label_2788d8;
        case 0x2788dcu: goto label_2788dc;
        case 0x2788e0u: goto label_2788e0;
        case 0x2788e4u: goto label_2788e4;
        case 0x2788e8u: goto label_2788e8;
        case 0x2788ecu: goto label_2788ec;
        case 0x2788f0u: goto label_2788f0;
        case 0x2788f4u: goto label_2788f4;
        case 0x2788f8u: goto label_2788f8;
        case 0x2788fcu: goto label_2788fc;
        case 0x278900u: goto label_278900;
        case 0x278904u: goto label_278904;
        case 0x278908u: goto label_278908;
        case 0x27890cu: goto label_27890c;
        case 0x278910u: goto label_278910;
        case 0x278914u: goto label_278914;
        case 0x278918u: goto label_278918;
        case 0x27891cu: goto label_27891c;
        case 0x278920u: goto label_278920;
        case 0x278924u: goto label_278924;
        case 0x278928u: goto label_278928;
        case 0x27892cu: goto label_27892c;
        case 0x278930u: goto label_278930;
        case 0x278934u: goto label_278934;
        case 0x278938u: goto label_278938;
        case 0x27893cu: goto label_27893c;
        case 0x278940u: goto label_278940;
        case 0x278944u: goto label_278944;
        case 0x278948u: goto label_278948;
        case 0x27894cu: goto label_27894c;
        case 0x278950u: goto label_278950;
        case 0x278954u: goto label_278954;
        case 0x278958u: goto label_278958;
        case 0x27895cu: goto label_27895c;
        case 0x278960u: goto label_278960;
        case 0x278964u: goto label_278964;
        case 0x278968u: goto label_278968;
        case 0x27896cu: goto label_27896c;
        case 0x278970u: goto label_278970;
        case 0x278974u: goto label_278974;
        case 0x278978u: goto label_278978;
        case 0x27897cu: goto label_27897c;
        case 0x278980u: goto label_278980;
        case 0x278984u: goto label_278984;
        case 0x278988u: goto label_278988;
        case 0x27898cu: goto label_27898c;
        case 0x278990u: goto label_278990;
        case 0x278994u: goto label_278994;
        case 0x278998u: goto label_278998;
        case 0x27899cu: goto label_27899c;
        case 0x2789a0u: goto label_2789a0;
        case 0x2789a4u: goto label_2789a4;
        case 0x2789a8u: goto label_2789a8;
        case 0x2789acu: goto label_2789ac;
        case 0x2789b0u: goto label_2789b0;
        case 0x2789b4u: goto label_2789b4;
        default: return;
    }

label_2781e8:
    // 0x2781e8: 0x0  nop
    ctx->pc = 0x2781e8u;
    // NOP
label_2781ec:
    // 0x2781ec: 0x0  nop
    ctx->pc = 0x2781ecu;
    // NOP
label_2781f0:
    // 0x2781f0: 0xf501  .word       0x0000F501                   # INVALID     $zero, $zero, -0xAFF # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2781f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x2781F0 raw=0x0000F501"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2781f4:
    // 0x2781f4: 0xa140  sll         $s4, $zero, 5
    ctx->pc = 0x2781f4u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_2781f8:
    // 0x2781f8: 0x0  nop
    ctx->pc = 0x2781f8u;
    // NOP
label_2781fc:
    // 0x2781fc: 0x0  nop
    ctx->pc = 0x2781fcu;
    // NOP
label_278200:
    // 0x278200: 0xf516  .word       0x0000F516                   # dsrlv       $fp, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278200u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_278204:
    // 0x278204: 0xf490  .word       0x0000F490                   # mfhi        $fp # 00000480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278204u;
    SET_GPR_U64(ctx, 30, ctx->hi);
label_278208:
    // 0x278208: 0x0  nop
    ctx->pc = 0x278208u;
    // NOP
label_27820c:
    // 0x27820c: 0x0  nop
    ctx->pc = 0x27820cu;
    // NOP
label_278210:
    // 0x278210: 0xf535  .word       0x0000F535                   # INVALID     $zero, $zero, -0xACB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278210u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x278210 raw=0x0000F535"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_278214:
    // 0x278214: 0x8e90  .word       0x00008E90                   # mfhi        $s1 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278214u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_278218:
    // 0x278218: 0x0  nop
    ctx->pc = 0x278218u;
    // NOP
label_27821c:
    // 0x27821c: 0x0  nop
    ctx->pc = 0x27821cu;
    // NOP
label_278220:
    // 0x278220: 0xf547  .word       0x0000F547                   # srav        $fp, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278220u;
    SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_278224:
    // 0x278224: 0x90c0  sll         $s2, $zero, 3
    ctx->pc = 0x278224u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 0), 3));
label_278228:
    // 0x278228: 0x0  nop
    ctx->pc = 0x278228u;
    // NOP
label_27822c:
    // 0x27822c: 0x0  nop
    ctx->pc = 0x27822cu;
    // NOP
label_278230:
    // 0x278230: 0xf55a  .word       0x0000F55A                   # div         $fp, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278230u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_278234:
    // 0x278234: 0x85d0  .word       0x000085D0                   # mfhi        $s0 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278234u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_278238:
    // 0x278238: 0x0  nop
    ctx->pc = 0x278238u;
    // NOP
label_27823c:
    // 0x27823c: 0x0  nop
    ctx->pc = 0x27823cu;
    // NOP
label_278240:
    // 0x278240: 0xf56b  .word       0x0000F56B                   # sltu        $fp, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278240u;
    SET_GPR_U64(ctx, 30, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_278244:
    // 0x278244: 0x7040  sll         $t6, $zero, 1
    ctx->pc = 0x278244u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_278248:
    // 0x278248: 0x0  nop
    ctx->pc = 0x278248u;
    // NOP
label_27824c:
    // 0x27824c: 0x0  nop
    ctx->pc = 0x27824cu;
    // NOP
label_278250:
    // 0x278250: 0xf57a  dsrl        $fp, $zero, 21
    ctx->pc = 0x278250u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) >> 21);
label_278254:
    // 0x278254: 0xbb40  sll         $s7, $zero, 13
    ctx->pc = 0x278254u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
label_278258:
    // 0x278258: 0x0  nop
    ctx->pc = 0x278258u;
    // NOP
label_27825c:
    // 0x27825c: 0x0  nop
    ctx->pc = 0x27825cu;
    // NOP
label_278260:
    // 0x278260: 0xf592  .word       0x0000F592                   # mflo        $fp # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278260u;
    SET_GPR_U64(ctx, 30, ctx->lo);
label_278264:
    // 0x278264: 0x56b0  tge         $zero, $zero, 346
    ctx->pc = 0x278264u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_278268:
    // 0x278268: 0x0  nop
    ctx->pc = 0x278268u;
    // NOP
label_27826c:
    // 0x27826c: 0x0  nop
    ctx->pc = 0x27826cu;
    // NOP
label_278270:
    // 0x278270: 0xf59d  .word       0x0000F59D                   # dmultu      $zero, $zero # 0000F580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278270u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x278270 raw=0x0000F59D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_278274:
    // 0x278274: 0x9930  tge         $zero, $zero, 612
    ctx->pc = 0x278274u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_278278:
    // 0x278278: 0x0  nop
    ctx->pc = 0x278278u;
    // NOP
label_27827c:
    // 0x27827c: 0x0  nop
    ctx->pc = 0x27827cu;
    // NOP
label_278280:
    // 0x278280: 0xf5b1  tgeu        $zero, $zero, 982
    ctx->pc = 0x278280u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_278284:
    // 0x278284: 0xb040  sll         $s6, $zero, 1
    ctx->pc = 0x278284u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
label_278288:
    // 0x278288: 0x0  nop
    ctx->pc = 0x278288u;
    // NOP
label_27828c:
    // 0x27828c: 0x0  nop
    ctx->pc = 0x27828cu;
    // NOP
label_278290:
    // 0x278290: 0xf5c8  .word       0x0000F5C8                   # jr          $zero # 0000F5C0 <InstrIdType: CPU_SPECIAL>
label_278294:
    if (ctx->pc == 0x278294u) {
        ctx->pc = 0x278294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278290u;
        // 0x278294: 0xc650  .word       0x0000C650                   # mfhi        $t8 # 00000640 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 24, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x278298u;
        goto label_278298;
    }
    ctx->pc = 0x278290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x278294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278290u;
        // 0x278294: 0xc650  .word       0x0000C650                   # mfhi        $t8 # 00000640 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 24, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278290u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x278298u;
label_278298:
    // 0x278298: 0x0  nop
    ctx->pc = 0x278298u;
    // NOP
label_27829c:
    // 0x27829c: 0x0  nop
    ctx->pc = 0x27829cu;
    // NOP
label_2782a0:
    // 0x2782a0: 0xf5e1  .word       0x0000F5E1                   # addu        $fp, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2782a0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_2782a4:
    // 0x2782a4: 0xb430  tge         $zero, $zero, 720
    ctx->pc = 0x2782a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2782a8:
    // 0x2782a8: 0x0  nop
    ctx->pc = 0x2782a8u;
    // NOP
label_2782ac:
    // 0x2782ac: 0x0  nop
    ctx->pc = 0x2782acu;
    // NOP
label_2782b0:
    // 0x2782b0: 0xf5f8  dsll        $fp, $zero, 23
    ctx->pc = 0x2782b0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) << 23);
label_2782b4:
    // 0x2782b4: 0xd280  sll         $k0, $zero, 10
    ctx->pc = 0x2782b4u;
    SET_GPR_S32(ctx, 26, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_2782b8:
    // 0x2782b8: 0x0  nop
    ctx->pc = 0x2782b8u;
    // NOP
label_2782bc:
    // 0x2782bc: 0x0  nop
    ctx->pc = 0x2782bcu;
    // NOP
label_2782c0:
    // 0x2782c0: 0xf613  .word       0x0000F613                   # mtlo        $zero # 0000F600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2782c0u;
    ctx->lo = GPR_U64(ctx, 0);
label_2782c4:
    // 0x2782c4: 0xe5f0  tge         $zero, $zero, 919
    ctx->pc = 0x2782c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2782c8:
    // 0x2782c8: 0x0  nop
    ctx->pc = 0x2782c8u;
    // NOP
label_2782cc:
    // 0x2782cc: 0x0  nop
    ctx->pc = 0x2782ccu;
    // NOP
label_2782d0:
    // 0x2782d0: 0xf630  tge         $zero, $zero, 984
    ctx->pc = 0x2782d0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2782d4:
    // 0x2782d4: 0x9e00  sll         $s3, $zero, 24
    ctx->pc = 0x2782d4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
label_2782d8:
    // 0x2782d8: 0x0  nop
    ctx->pc = 0x2782d8u;
    // NOP
label_2782dc:
    // 0x2782dc: 0x0  nop
    ctx->pc = 0x2782dcu;
    // NOP
label_2782e0:
    // 0x2782e0: 0xf644  .word       0x0000F644                   # sllv        $fp, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2782e0u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2782e4:
    // 0x2782e4: 0xaee0  .word       0x0000AEE0                   # add         $s5, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2782e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 21, (int32_t)result);     } }
label_2782e8:
    // 0x2782e8: 0x0  nop
    ctx->pc = 0x2782e8u;
    // NOP
label_2782ec:
    // 0x2782ec: 0x0  nop
    ctx->pc = 0x2782ecu;
    // NOP
label_2782f0:
    // 0x2782f0: 0xf65a  .word       0x0000F65A                   # div         $fp, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2782f0u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2782f4:
    // 0x2782f4: 0x64e0  .word       0x000064E0                   # add         $t4, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2782f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_2782f8:
    // 0x2782f8: 0x0  nop
    ctx->pc = 0x2782f8u;
    // NOP
label_2782fc:
    // 0x2782fc: 0x0  nop
    ctx->pc = 0x2782fcu;
    // NOP
label_278300:
    // 0x278300: 0xf667  .word       0x0000F667                   # not         $fp, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278300u;
    SET_GPR_U64(ctx, 30, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_278304:
    // 0x278304: 0x4400  sll         $t0, $zero, 16
    ctx->pc = 0x278304u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_278308:
    // 0x278308: 0x0  nop
    ctx->pc = 0x278308u;
    // NOP
label_27830c:
    // 0x27830c: 0x0  nop
    ctx->pc = 0x27830cu;
    // NOP
label_278310:
    // 0x278310: 0xf670  tge         $zero, $zero, 985
    ctx->pc = 0x278310u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_278314:
    // 0x278314: 0x4970  tge         $zero, $zero, 293
    ctx->pc = 0x278314u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_278318:
    // 0x278318: 0x0  nop
    ctx->pc = 0x278318u;
    // NOP
label_27831c:
    // 0x27831c: 0x0  nop
    ctx->pc = 0x27831cu;
    // NOP
label_278320:
    // 0x278320: 0xf67a  dsrl        $fp, $zero, 25
    ctx->pc = 0x278320u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) >> 25);
label_278324:
    // 0x278324: 0x9a50  .word       0x00009A50                   # mfhi        $s3 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278324u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_278328:
    // 0x278328: 0x0  nop
    ctx->pc = 0x278328u;
    // NOP
label_27832c:
    // 0x27832c: 0x0  nop
    ctx->pc = 0x27832cu;
    // NOP
label_278330:
    // 0x278330: 0xf68e  .word       0x0000F68E                   # INVALID     $zero, $zero, -0x972 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278330u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x278330 raw=0x0000F68E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_278334:
    // 0x278334: 0x7bc0  sll         $t7, $zero, 15
    ctx->pc = 0x278334u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_278338:
    // 0x278338: 0x0  nop
    ctx->pc = 0x278338u;
    // NOP
label_27833c:
    // 0x27833c: 0x0  nop
    ctx->pc = 0x27833cu;
    // NOP
label_278340:
    // 0x278340: 0xf69e  .word       0x0000F69E                   # ddiv        $fp, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278340u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x278340 raw=0x0000F69E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_278344:
    // 0x278344: 0x7580  sll         $t6, $zero, 22
    ctx->pc = 0x278344u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 22));
label_278348:
    // 0x278348: 0x0  nop
    ctx->pc = 0x278348u;
    // NOP
label_27834c:
    // 0x27834c: 0x0  nop
    ctx->pc = 0x27834cu;
    // NOP
label_278350:
    // 0x278350: 0xf6ad  .word       0x0000F6AD                   # daddu       $fp, $zero, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278350u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_278354:
    // 0x278354: 0x6a80  sll         $t5, $zero, 10
    ctx->pc = 0x278354u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_278358:
    // 0x278358: 0x0  nop
    ctx->pc = 0x278358u;
    // NOP
label_27835c:
    // 0x27835c: 0x0  nop
    ctx->pc = 0x27835cu;
    // NOP
label_278360:
    // 0x278360: 0xf6bb  dsra        $fp, $zero, 26
    ctx->pc = 0x278360u;
    SET_GPR_S64(ctx, 30, GPR_S64(ctx, 0) >> 26);
label_278364:
    // 0x278364: 0x5b90  .word       0x00005B90                   # mfhi        $t3 # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278364u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_278368:
    // 0x278368: 0x0  nop
    ctx->pc = 0x278368u;
    // NOP
label_27836c:
    // 0x27836c: 0x0  nop
    ctx->pc = 0x27836cu;
    // NOP
label_278370:
    // 0x278370: 0xf6c7  .word       0x0000F6C7                   # srav        $fp, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278370u;
    SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_278374:
    // 0x278374: 0x7820  add         $t7, $zero, $zero
    ctx->pc = 0x278374u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_278378:
    // 0x278378: 0x0  nop
    ctx->pc = 0x278378u;
    // NOP
label_27837c:
    // 0x27837c: 0x0  nop
    ctx->pc = 0x27837cu;
    // NOP
label_278380:
    // 0x278380: 0xf6d7  .word       0x0000F6D7                   # dsrav       $fp, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278380u;
    SET_GPR_S64(ctx, 30, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_278384:
    // 0x278384: 0x5620  .word       0x00005620                   # add         $t2, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278384u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 10, (int32_t)result);     } }
label_278388:
    // 0x278388: 0x0  nop
    ctx->pc = 0x278388u;
    // NOP
label_27838c:
    // 0x27838c: 0x0  nop
    ctx->pc = 0x27838cu;
    // NOP
label_278390:
    // 0x278390: 0xf6e2  .word       0x0000F6E2                   # neg         $fp, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278390u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 30, (int32_t)tmp); }
label_278394:
    // 0x278394: 0x40e0  .word       0x000040E0                   # add         $t0, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278394u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_278398:
    // 0x278398: 0x0  nop
    ctx->pc = 0x278398u;
    // NOP
label_27839c:
    // 0x27839c: 0x0  nop
    ctx->pc = 0x27839cu;
    // NOP
label_2783a0:
    // 0x2783a0: 0xf6eb  .word       0x0000F6EB                   # sltu        $fp, $zero, $zero # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2783a0u;
    SET_GPR_U64(ctx, 30, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_2783a4:
    // 0x2783a4: 0x98d0  .word       0x000098D0                   # mfhi        $s3 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2783a4u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_2783a8:
    // 0x2783a8: 0x0  nop
    ctx->pc = 0x2783a8u;
    // NOP
label_2783ac:
    // 0x2783ac: 0x0  nop
    ctx->pc = 0x2783acu;
    // NOP
label_2783b0:
    // 0x2783b0: 0xf6ff  dsra32      $fp, $zero, 27
    ctx->pc = 0x2783b0u;
    SET_GPR_S64(ctx, 30, GPR_S64(ctx, 0) >> (32 + 27));
label_2783b4:
    // 0x2783b4: 0x71b0  tge         $zero, $zero, 454
    ctx->pc = 0x2783b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2783b8:
    // 0x2783b8: 0x0  nop
    ctx->pc = 0x2783b8u;
    // NOP
label_2783bc:
    // 0x2783bc: 0x0  nop
    ctx->pc = 0x2783bcu;
    // NOP
label_2783c0:
    // 0x2783c0: 0xf70e  .word       0x0000F70E                   # INVALID     $zero, $zero, -0x8F2 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2783c0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x2783C0 raw=0x0000F70E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2783c4:
    // 0x2783c4: 0x3f50  .word       0x00003F50                   # mfhi        $a3 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2783c4u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_2783c8:
    // 0x2783c8: 0x0  nop
    ctx->pc = 0x2783c8u;
    // NOP
label_2783cc:
    // 0x2783cc: 0x0  nop
    ctx->pc = 0x2783ccu;
    // NOP
label_2783d0:
    // 0x2783d0: 0xf716  .word       0x0000F716                   # dsrlv       $fp, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2783d0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2783d4:
    // 0x2783d4: 0x5aa0  .word       0x00005AA0                   # add         $t3, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2783d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_2783d8:
    // 0x2783d8: 0x0  nop
    ctx->pc = 0x2783d8u;
    // NOP
label_2783dc:
    // 0x2783dc: 0x0  nop
    ctx->pc = 0x2783dcu;
    // NOP
label_2783e0:
    // 0x2783e0: 0xf722  .word       0x0000F722                   # neg         $fp, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2783e0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 30, (int32_t)tmp); }
label_2783e4:
    // 0x2783e4: 0x45e0  .word       0x000045E0                   # add         $t0, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2783e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_2783e8:
    // 0x2783e8: 0x0  nop
    ctx->pc = 0x2783e8u;
    // NOP
label_2783ec:
    // 0x2783ec: 0x0  nop
    ctx->pc = 0x2783ecu;
    // NOP
label_2783f0:
    // 0x2783f0: 0xf72b  .word       0x0000F72B                   # sltu        $fp, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2783f0u;
    SET_GPR_U64(ctx, 30, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_2783f4:
    // 0x2783f4: 0x4750  .word       0x00004750                   # mfhi        $t0 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2783f4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_2783f8:
    // 0x2783f8: 0x0  nop
    ctx->pc = 0x2783f8u;
    // NOP
label_2783fc:
    // 0x2783fc: 0x0  nop
    ctx->pc = 0x2783fcu;
    // NOP
label_278400:
    // 0x278400: 0xf734  teq         $zero, $zero, 988
    ctx->pc = 0x278400u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_278404:
    // 0x278404: 0x46c0  sll         $t0, $zero, 27
    ctx->pc = 0x278404u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_278408:
    // 0x278408: 0x0  nop
    ctx->pc = 0x278408u;
    // NOP
label_27840c:
    // 0x27840c: 0x0  nop
    ctx->pc = 0x27840cu;
    // NOP
label_278410:
    // 0x278410: 0xf73d  .word       0x0000F73D                   # INVALID     $zero, $zero, -0x8C3 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278410u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x278410 raw=0x0000F73D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_278414:
    // 0x278414: 0x56f0  tge         $zero, $zero, 347
    ctx->pc = 0x278414u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_278418:
    // 0x278418: 0x0  nop
    ctx->pc = 0x278418u;
    // NOP
label_27841c:
    // 0x27841c: 0x0  nop
    ctx->pc = 0x27841cu;
    // NOP
label_278420:
    // 0x278420: 0xf748  .word       0x0000F748                   # jr          $zero # 0000F740 <InstrIdType: CPU_SPECIAL>
label_278424:
    if (ctx->pc == 0x278424u) {
        ctx->pc = 0x278424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278420u;
        // 0x278424: 0x7a10  .word       0x00007A10                   # mfhi        $t7 # 00000200 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 15, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = 0x278428u;
        goto label_278428;
    }
    ctx->pc = 0x278420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x278424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278420u;
        // 0x278424: 0x7a10  .word       0x00007A10                   # mfhi        $t7 # 00000200 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 15, ctx->hi);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278420u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x278428u;
label_278428:
    // 0x278428: 0x0  nop
    ctx->pc = 0x278428u;
    // NOP
label_27842c:
    // 0x27842c: 0x0  nop
    ctx->pc = 0x27842cu;
    // NOP
label_278430:
    // 0x278430: 0xf758  .word       0x0000F758                   # mult        $fp, $zero, $zero # 00000740 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x278430u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 30, (int32_t)result); }
label_278434:
    // 0x278434: 0x87c0  sll         $s0, $zero, 31
    ctx->pc = 0x278434u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_278438:
    // 0x278438: 0x0  nop
    ctx->pc = 0x278438u;
    // NOP
label_27843c:
    // 0x27843c: 0x0  nop
    ctx->pc = 0x27843cu;
    // NOP
label_278440:
    // 0x278440: 0xf769  .word       0x0000F769                   # mtsa        $zero # 0000F740 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x278440u;
    ctx->sa = GPR_U32(ctx, 0) & 0x7F;
label_278444:
    // 0x278444: 0x9510  .word       0x00009510                   # mfhi        $s2 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278444u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_278448:
    // 0x278448: 0x0  nop
    ctx->pc = 0x278448u;
    // NOP
label_27844c:
    // 0x27844c: 0x0  nop
    ctx->pc = 0x27844cu;
    // NOP
label_278450:
    // 0x278450: 0xf77c  dsll32      $fp, $zero, 29
    ctx->pc = 0x278450u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) << (32 + 29));
label_278454:
    // 0x278454: 0x9a80  sll         $s3, $zero, 10
    ctx->pc = 0x278454u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 0), 10));
label_278458:
    // 0x278458: 0x0  nop
    ctx->pc = 0x278458u;
    // NOP
label_27845c:
    // 0x27845c: 0x0  nop
    ctx->pc = 0x27845cu;
    // NOP
label_278460:
    // 0x278460: 0xf790  .word       0x0000F790                   # mfhi        $fp # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278460u;
    SET_GPR_U64(ctx, 30, ctx->hi);
label_278464:
    // 0x278464: 0x57c0  sll         $t2, $zero, 31
    ctx->pc = 0x278464u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_278468:
    // 0x278468: 0x0  nop
    ctx->pc = 0x278468u;
    // NOP
label_27846c:
    // 0x27846c: 0x0  nop
    ctx->pc = 0x27846cu;
    // NOP
label_278470:
    // 0x278470: 0xf79b  .word       0x0000F79B                   # divu        $fp, $zero, $zero # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278470u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_278474:
    // 0x278474: 0x65e0  .word       0x000065E0                   # add         $t4, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278474u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_278478:
    // 0x278478: 0x0  nop
    ctx->pc = 0x278478u;
    // NOP
label_27847c:
    // 0x27847c: 0x0  nop
    ctx->pc = 0x27847cu;
    // NOP
label_278480:
    // 0x278480: 0xf7a8  .word       0x0000F7A8                   # mfsa        $fp # 00000780 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x278480u;
    SET_GPR_U32(ctx, 30, ctx->sa);
label_278484:
    // 0x278484: 0x6f30  tge         $zero, $zero, 444
    ctx->pc = 0x278484u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_278488:
    // 0x278488: 0x0  nop
    ctx->pc = 0x278488u;
    // NOP
label_27848c:
    // 0x27848c: 0x0  nop
    ctx->pc = 0x27848cu;
    // NOP
label_278490:
    // 0x278490: 0xf7b6  tne         $zero, $zero, 990
    ctx->pc = 0x278490u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_278494:
    // 0x278494: 0x3e70  tge         $zero, $zero, 249
    ctx->pc = 0x278494u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_278498:
    // 0x278498: 0x0  nop
    ctx->pc = 0x278498u;
    // NOP
label_27849c:
    // 0x27849c: 0x0  nop
    ctx->pc = 0x27849cu;
    // NOP
label_2784a0:
    // 0x2784a0: 0xf7be  dsrl32      $fp, $zero, 30
    ctx->pc = 0x2784a0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) >> (32 + 30));
label_2784a4:
    // 0x2784a4: 0x3750  .word       0x00003750                   # mfhi        $a2 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2784a4u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_2784a8:
    // 0x2784a8: 0x0  nop
    ctx->pc = 0x2784a8u;
    // NOP
label_2784ac:
    // 0x2784ac: 0x0  nop
    ctx->pc = 0x2784acu;
    // NOP
label_2784b0:
    // 0x2784b0: 0xf7c5  .word       0x0000F7C5                   # INVALID     $zero, $zero, -0x83B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2784b0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x2784B0 raw=0x0000F7C5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2784b4:
    // 0x2784b4: 0x7500  sll         $t6, $zero, 20
    ctx->pc = 0x2784b4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_2784b8:
    // 0x2784b8: 0x0  nop
    ctx->pc = 0x2784b8u;
    // NOP
label_2784bc:
    // 0x2784bc: 0x0  nop
    ctx->pc = 0x2784bcu;
    // NOP
label_2784c0:
    // 0x2784c0: 0xf7d4  .word       0x0000F7D4                   # dsllv       $fp, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2784c0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_2784c4:
    // 0x2784c4: 0x6860  .word       0x00006860                   # add         $t5, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2784c4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_2784c8:
    // 0x2784c8: 0x0  nop
    ctx->pc = 0x2784c8u;
    // NOP
label_2784cc:
    // 0x2784cc: 0x0  nop
    ctx->pc = 0x2784ccu;
    // NOP
label_2784d0:
    // 0x2784d0: 0xf7e2  .word       0x0000F7E2                   # neg         $fp, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2784d0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 30, (int32_t)tmp); }
label_2784d4:
    // 0x2784d4: 0x7480  sll         $t6, $zero, 18
    ctx->pc = 0x2784d4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_2784d8:
    // 0x2784d8: 0x0  nop
    ctx->pc = 0x2784d8u;
    // NOP
label_2784dc:
    // 0x2784dc: 0x0  nop
    ctx->pc = 0x2784dcu;
    // NOP
label_2784e0:
    // 0x2784e0: 0xf7f1  tgeu        $zero, $zero, 991
    ctx->pc = 0x2784e0u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2784e4:
    // 0x2784e4: 0x5d60  .word       0x00005D60                   # add         $t3, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2784e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_2784e8:
    // 0x2784e8: 0x0  nop
    ctx->pc = 0x2784e8u;
    // NOP
label_2784ec:
    // 0x2784ec: 0x0  nop
    ctx->pc = 0x2784ecu;
    // NOP
label_2784f0:
    // 0x2784f0: 0xf7fd  .word       0x0000F7FD                   # INVALID     $zero, $zero, -0x803 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2784f0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x2784F0 raw=0x0000F7FD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2784f4:
    // 0x2784f4: 0x61e0  .word       0x000061E0                   # add         $t4, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2784f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_2784f8:
    // 0x2784f8: 0x0  nop
    ctx->pc = 0x2784f8u;
    // NOP
label_2784fc:
    // 0x2784fc: 0x0  nop
    ctx->pc = 0x2784fcu;
    // NOP
label_278500:
    // 0x278500: 0xf80a  movz        $ra, $zero, $zero
    ctx->pc = 0x278500u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 0));
label_278504:
    // 0x278504: 0x6220  .word       0x00006220                   # add         $t4, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278504u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_278508:
    // 0x278508: 0x0  nop
    ctx->pc = 0x278508u;
    // NOP
label_27850c:
    // 0x27850c: 0x0  nop
    ctx->pc = 0x27850cu;
    // NOP
label_278510:
    // 0x278510: 0xf817  dsrav       $ra, $zero, $zero
    ctx->pc = 0x278510u;
    SET_GPR_S64(ctx, 31, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_278514:
    // 0x278514: 0x3fc0  sll         $a3, $zero, 31
    ctx->pc = 0x278514u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_278518:
    // 0x278518: 0x0  nop
    ctx->pc = 0x278518u;
    // NOP
label_27851c:
    // 0x27851c: 0x0  nop
    ctx->pc = 0x27851cu;
    // NOP
label_278520:
    // 0x278520: 0xf81f  ddivu       $ra, $zero, $zero
    ctx->pc = 0x278520u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x278520 raw=0x0000F81F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_278524:
    // 0x278524: 0x2d00  sll         $a1, $zero, 20
    ctx->pc = 0x278524u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_278528:
    // 0x278528: 0x0  nop
    ctx->pc = 0x278528u;
    // NOP
label_27852c:
    // 0x27852c: 0x0  nop
    ctx->pc = 0x27852cu;
    // NOP
label_278530:
    // 0x278530: 0xf825  move        $ra, $zero
    ctx->pc = 0x278530u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
label_278534:
    // 0x278534: 0x5910  .word       0x00005910                   # mfhi        $t3 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278534u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_278538:
    // 0x278538: 0x0  nop
    ctx->pc = 0x278538u;
    // NOP
label_27853c:
    // 0x27853c: 0x0  nop
    ctx->pc = 0x27853cu;
    // NOP
label_278540:
    // 0x278540: 0xf831  tgeu        $zero, $zero, 992
    ctx->pc = 0x278540u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_278544:
    // 0x278544: 0x4e60  .word       0x00004E60                   # add         $t1, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278544u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_278548:
    // 0x278548: 0x0  nop
    ctx->pc = 0x278548u;
    // NOP
label_27854c:
    // 0x27854c: 0x0  nop
    ctx->pc = 0x27854cu;
    // NOP
label_278550:
    // 0x278550: 0xf83b  dsra        $ra, $zero, 0
    ctx->pc = 0x278550u;
    SET_GPR_S64(ctx, 31, GPR_S64(ctx, 0) >> 0);
label_278554:
    // 0x278554: 0x4620  .word       0x00004620                   # add         $t0, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278554u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
label_278558:
    // 0x278558: 0x0  nop
    ctx->pc = 0x278558u;
    // NOP
label_27855c:
    // 0x27855c: 0x0  nop
    ctx->pc = 0x27855cu;
    // NOP
label_278560:
    // 0x278560: 0xf844  .word       0x0000F844                   # sllv        $ra, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278560u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_278564:
    // 0x278564: 0x3fe0  .word       0x00003FE0                   # add         $a3, $zero, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278564u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 7, (int32_t)result);     } }
label_278568:
    // 0x278568: 0x0  nop
    ctx->pc = 0x278568u;
    // NOP
label_27856c:
    // 0x27856c: 0x0  nop
    ctx->pc = 0x27856cu;
    // NOP
label_278570:
    // 0x278570: 0xf84c  syscall     993
    ctx->pc = 0x278570u;
    ctx->pc = 0x278574u;
runtime->handleSyscall(rdram, ctx, 0x3E1u);
label_278574:
    // 0x278574: 0x3830  tge         $zero, $zero, 224
    ctx->pc = 0x278574u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_278578:
    // 0x278578: 0x0  nop
    ctx->pc = 0x278578u;
    // NOP
label_27857c:
    // 0x27857c: 0x0  nop
    ctx->pc = 0x27857cu;
    // NOP
label_278580:
    // 0x278580: 0xf854  .word       0x0000F854                   # dsllv       $ra, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278580u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_278584:
    // 0x278584: 0x4500  sll         $t0, $zero, 20
    ctx->pc = 0x278584u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 20));
label_278588:
    // 0x278588: 0x0  nop
    ctx->pc = 0x278588u;
    // NOP
label_27858c:
    // 0x27858c: 0x0  nop
    ctx->pc = 0x27858cu;
    // NOP
label_278590:
    // 0x278590: 0xf85d  .word       0x0000F85D                   # dmultu      $zero, $zero # 0000F840 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278590u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x278590 raw=0x0000F85D"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_278594:
    // 0x278594: 0x4d60  .word       0x00004D60                   # add         $t1, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278594u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 9, (int32_t)result);     } }
label_278598:
    // 0x278598: 0x0  nop
    ctx->pc = 0x278598u;
    // NOP
label_27859c:
    // 0x27859c: 0x0  nop
    ctx->pc = 0x27859cu;
    // NOP
label_2785a0:
    // 0x2785a0: 0xf867  .word       0x0000F867                   # not         $ra, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2785a0u;
    SET_GPR_U64(ctx, 31, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2785a4:
    // 0x2785a4: 0x6140  sll         $t4, $zero, 5
    ctx->pc = 0x2785a4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 5));
label_2785a8:
    // 0x2785a8: 0x0  nop
    ctx->pc = 0x2785a8u;
    // NOP
label_2785ac:
    // 0x2785ac: 0x0  nop
    ctx->pc = 0x2785acu;
    // NOP
label_2785b0:
    // 0x2785b0: 0xf874  teq         $zero, $zero, 993
    ctx->pc = 0x2785b0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2785b4:
    // 0x2785b4: 0x9450  .word       0x00009450                   # mfhi        $s2 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2785b4u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_2785b8:
    // 0x2785b8: 0x0  nop
    ctx->pc = 0x2785b8u;
    // NOP
label_2785bc:
    // 0x2785bc: 0x0  nop
    ctx->pc = 0x2785bcu;
    // NOP
label_2785c0:
    // 0x2785c0: 0xf887  .word       0x0000F887                   # srav        $ra, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2785c0u;
    SET_GPR_S32(ctx, 31, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2785c4:
    // 0x2785c4: 0xa690  .word       0x0000A690                   # mfhi        $s4 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2785c4u;
    SET_GPR_U64(ctx, 20, ctx->hi);
label_2785c8:
    // 0x2785c8: 0x0  nop
    ctx->pc = 0x2785c8u;
    // NOP
label_2785cc:
    // 0x2785cc: 0x0  nop
    ctx->pc = 0x2785ccu;
    // NOP
label_2785d0:
    // 0x2785d0: 0xf89c  .word       0x0000F89C                   # dmult       $zero, $zero # 0000F880 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2785d0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x2785D0 raw=0x0000F89C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2785d4:
    // 0x2785d4: 0x8fc0  sll         $s1, $zero, 31
    ctx->pc = 0x2785d4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_2785d8:
    // 0x2785d8: 0x0  nop
    ctx->pc = 0x2785d8u;
    // NOP
label_2785dc:
    // 0x2785dc: 0x0  nop
    ctx->pc = 0x2785dcu;
    // NOP
label_2785e0:
    // 0x2785e0: 0xf8ae  .word       0x0000F8AE                   # dsub        $ra, $zero, $zero # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2785e0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, r); }
label_2785e4:
    // 0x2785e4: 0x8750  .word       0x00008750                   # mfhi        $s0 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2785e4u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_2785e8:
    // 0x2785e8: 0x0  nop
    ctx->pc = 0x2785e8u;
    // NOP
label_2785ec:
    // 0x2785ec: 0x0  nop
    ctx->pc = 0x2785ecu;
    // NOP
label_2785f0:
    // 0x2785f0: 0xf8bf  dsra32      $ra, $zero, 2
    ctx->pc = 0x2785f0u;
    SET_GPR_S64(ctx, 31, GPR_S64(ctx, 0) >> (32 + 2));
label_2785f4:
    // 0x2785f4: 0x5240  sll         $t2, $zero, 9
    ctx->pc = 0x2785f4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 9));
label_2785f8:
    // 0x2785f8: 0x0  nop
    ctx->pc = 0x2785f8u;
    // NOP
label_2785fc:
    // 0x2785fc: 0x0  nop
    ctx->pc = 0x2785fcu;
    // NOP
label_278600:
    // 0x278600: 0xf8ca  .word       0x0000F8CA                   # movz        $ra, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278600u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 0));
label_278604:
    // 0x278604: 0x6590  .word       0x00006590                   # mfhi        $t4 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278604u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_278608:
    // 0x278608: 0x0  nop
    ctx->pc = 0x278608u;
    // NOP
label_27860c:
    // 0x27860c: 0x0  nop
    ctx->pc = 0x27860cu;
    // NOP
label_278610:
    // 0x278610: 0xf8d7  .word       0x0000F8D7                   # dsrav       $ra, $zero, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278610u;
    SET_GPR_S64(ctx, 31, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_278614:
    // 0x278614: 0x5340  sll         $t2, $zero, 13
    ctx->pc = 0x278614u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 13));
label_278618:
    // 0x278618: 0x0  nop
    ctx->pc = 0x278618u;
    // NOP
label_27861c:
    // 0x27861c: 0x0  nop
    ctx->pc = 0x27861cu;
    // NOP
label_278620:
    // 0x278620: 0xf8e2  .word       0x0000F8E2                   # neg         $ra, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278620u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 31, (int32_t)tmp); }
label_278624:
    // 0x278624: 0x6c10  .word       0x00006C10                   # mfhi        $t5 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278624u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_278628:
    // 0x278628: 0x0  nop
    ctx->pc = 0x278628u;
    // NOP
label_27862c:
    // 0x27862c: 0x0  nop
    ctx->pc = 0x27862cu;
    // NOP
label_278630:
    // 0x278630: 0xf8f0  tge         $zero, $zero, 995
    ctx->pc = 0x278630u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_278634:
    // 0x278634: 0x5920  .word       0x00005920                   # add         $t3, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278634u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_278638:
    // 0x278638: 0x0  nop
    ctx->pc = 0x278638u;
    // NOP
label_27863c:
    // 0x27863c: 0x0  nop
    ctx->pc = 0x27863cu;
    // NOP
label_278640:
    // 0x278640: 0xf8fc  dsll32      $ra, $zero, 3
    ctx->pc = 0x278640u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 0) << (32 + 3));
label_278644:
    // 0x278644: 0xb950  .word       0x0000B950                   # mfhi        $s7 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278644u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_278648:
    // 0x278648: 0x0  nop
    ctx->pc = 0x278648u;
    // NOP
label_27864c:
    // 0x27864c: 0x0  nop
    ctx->pc = 0x27864cu;
    // NOP
label_278650:
    // 0x278650: 0xf914  .word       0x0000F914                   # dsllv       $ra, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278650u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_278654:
    // 0x278654: 0xaf70  tge         $zero, $zero, 701
    ctx->pc = 0x278654u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_278658:
    // 0x278658: 0x0  nop
    ctx->pc = 0x278658u;
    // NOP
label_27865c:
    // 0x27865c: 0x0  nop
    ctx->pc = 0x27865cu;
    // NOP
label_278660:
    // 0x278660: 0xf92a  .word       0x0000F92A                   # slt         $ra, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278660u;
    SET_GPR_U64(ctx, 31, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_278664:
    // 0x278664: 0x10260  .word       0x00010260                   # add         $zero, $zero, $at # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278664u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 1);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
label_278668:
    // 0x278668: 0x0  nop
    ctx->pc = 0x278668u;
    // NOP
label_27866c:
    // 0x27866c: 0x0  nop
    ctx->pc = 0x27866cu;
    // NOP
label_278670:
    // 0x278670: 0xf94b  .word       0x0000F94B                   # movn        $ra, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278670u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 0));
label_278674:
    // 0x278674: 0x8590  .word       0x00008590                   # mfhi        $s0 # 00000580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278674u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_278678:
    // 0x278678: 0x0  nop
    ctx->pc = 0x278678u;
    // NOP
label_27867c:
    // 0x27867c: 0x0  nop
    ctx->pc = 0x27867cu;
    // NOP
label_278680:
    // 0x278680: 0xf95c  .word       0x0000F95C                   # dmult       $zero, $zero # 0000F940 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278680u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x278680 raw=0x0000F95C"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_278684:
    // 0x278684: 0x58b0  tge         $zero, $zero, 354
    ctx->pc = 0x278684u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_278688:
    // 0x278688: 0x0  nop
    ctx->pc = 0x278688u;
    // NOP
label_27868c:
    // 0x27868c: 0x0  nop
    ctx->pc = 0x27868cu;
    // NOP
label_278690:
    // 0x278690: 0xf968  .word       0x0000F968                   # mfsa        $ra # 00000140 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x278690u;
    SET_GPR_U32(ctx, 31, ctx->sa);
label_278694:
    // 0x278694: 0xbd20  .word       0x0000BD20                   # add         $s7, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278694u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_278698:
    // 0x278698: 0x0  nop
    ctx->pc = 0x278698u;
    // NOP
label_27869c:
    // 0x27869c: 0x0  nop
    ctx->pc = 0x27869cu;
    // NOP
label_2786a0:
    // 0x2786a0: 0xf980  sll         $ra, $zero, 6
    ctx->pc = 0x2786a0u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 0), 6));
label_2786a4:
    // 0x2786a4: 0x7360  .word       0x00007360                   # add         $t6, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2786a4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_2786a8:
    // 0x2786a8: 0x0  nop
    ctx->pc = 0x2786a8u;
    // NOP
label_2786ac:
    // 0x2786ac: 0x0  nop
    ctx->pc = 0x2786acu;
    // NOP
label_2786b0:
    // 0x2786b0: 0xf98f  .word       0x0000F98F                   # sync # 0000F800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2786b0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_2786b4:
    // 0x2786b4: 0x96d0  .word       0x000096D0                   # mfhi        $s2 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2786b4u;
    SET_GPR_U64(ctx, 18, ctx->hi);
label_2786b8:
    // 0x2786b8: 0x0  nop
    ctx->pc = 0x2786b8u;
    // NOP
label_2786bc:
    // 0x2786bc: 0x0  nop
    ctx->pc = 0x2786bcu;
    // NOP
label_2786c0:
    // 0x2786c0: 0xf9a2  .word       0x0000F9A2                   # neg         $ra, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2786c0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 31, (int32_t)tmp); }
label_2786c4:
    // 0x2786c4: 0x8fb0  tge         $zero, $zero, 574
    ctx->pc = 0x2786c4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2786c8:
    // 0x2786c8: 0x0  nop
    ctx->pc = 0x2786c8u;
    // NOP
label_2786cc:
    // 0x2786cc: 0x0  nop
    ctx->pc = 0x2786ccu;
    // NOP
label_2786d0:
    // 0x2786d0: 0xf9b4  teq         $zero, $zero, 998
    ctx->pc = 0x2786d0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2786d4:
    // 0x2786d4: 0x8ae0  .word       0x00008AE0                   # add         $s1, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2786d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 17, (int32_t)result);     } }
label_2786d8:
    // 0x2786d8: 0x0  nop
    ctx->pc = 0x2786d8u;
    // NOP
label_2786dc:
    // 0x2786dc: 0x0  nop
    ctx->pc = 0x2786dcu;
    // NOP
label_2786e0:
    // 0x2786e0: 0xf9c6  .word       0x0000F9C6                   # srlv        $ra, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2786e0u;
    SET_GPR_S32(ctx, 31, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_2786e4:
    // 0x2786e4: 0x8570  tge         $zero, $zero, 533
    ctx->pc = 0x2786e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2786e8:
    // 0x2786e8: 0x0  nop
    ctx->pc = 0x2786e8u;
    // NOP
label_2786ec:
    // 0x2786ec: 0x0  nop
    ctx->pc = 0x2786ecu;
    // NOP
label_2786f0:
    // 0x2786f0: 0xf9d7  .word       0x0000F9D7                   # dsrav       $ra, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2786f0u;
    SET_GPR_S64(ctx, 31, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2786f4:
    // 0x2786f4: 0x7230  tge         $zero, $zero, 456
    ctx->pc = 0x2786f4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2786f8:
    // 0x2786f8: 0x0  nop
    ctx->pc = 0x2786f8u;
    // NOP
label_2786fc:
    // 0x2786fc: 0x0  nop
    ctx->pc = 0x2786fcu;
    // NOP
label_278700:
    // 0x278700: 0xf9e6  .word       0x0000F9E6                   # xor         $ra, $zero, $zero # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278700u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_278704:
    // 0x278704: 0x50f0  tge         $zero, $zero, 323
    ctx->pc = 0x278704u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_278708:
    // 0x278708: 0x0  nop
    ctx->pc = 0x278708u;
    // NOP
label_27870c:
    // 0x27870c: 0x0  nop
    ctx->pc = 0x27870cu;
    // NOP
label_278710:
    // 0x278710: 0xf9f1  tgeu        $zero, $zero, 999
    ctx->pc = 0x278710u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_278714:
    // 0x278714: 0x50d0  .word       0x000050D0                   # mfhi        $t2 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278714u;
    SET_GPR_U64(ctx, 10, ctx->hi);
label_278718:
    // 0x278718: 0x0  nop
    ctx->pc = 0x278718u;
    // NOP
label_27871c:
    // 0x27871c: 0x0  nop
    ctx->pc = 0x27871cu;
    // NOP
label_278720:
    // 0x278720: 0xf9fc  dsll32      $ra, $zero, 7
    ctx->pc = 0x278720u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 0) << (32 + 7));
label_278724:
    // 0x278724: 0x6b60  .word       0x00006B60                   # add         $t5, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278724u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_278728:
    // 0x278728: 0x0  nop
    ctx->pc = 0x278728u;
    // NOP
label_27872c:
    // 0x27872c: 0x0  nop
    ctx->pc = 0x27872cu;
    // NOP
label_278730:
    // 0x278730: 0xfa0a  .word       0x0000FA0A                   # movz        $ra, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278730u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 0));
label_278734:
    // 0x278734: 0x72a0  .word       0x000072A0                   # add         $t6, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278734u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
label_278738:
    // 0x278738: 0x0  nop
    ctx->pc = 0x278738u;
    // NOP
label_27873c:
    // 0x27873c: 0x0  nop
    ctx->pc = 0x27873cu;
    // NOP
label_278740:
    // 0x278740: 0xfa19  .word       0x0000FA19                   # multu       $zero, $zero # 0000FA00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278740u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 31, (int32_t)result); }
label_278744:
    // 0x278744: 0xaf00  sll         $s5, $zero, 28
    ctx->pc = 0x278744u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 0), 28));
label_278748:
    // 0x278748: 0x0  nop
    ctx->pc = 0x278748u;
    // NOP
label_27874c:
    // 0x27874c: 0x0  nop
    ctx->pc = 0x27874cu;
    // NOP
label_278750:
    // 0x278750: 0xfa2f  .word       0x0000FA2F                   # dsubu       $ra, $zero, $zero # 00000200 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278750u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_278754:
    // 0x278754: 0x3a50  .word       0x00003A50                   # mfhi        $a3 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278754u;
    SET_GPR_U64(ctx, 7, ctx->hi);
label_278758:
    // 0x278758: 0x0  nop
    ctx->pc = 0x278758u;
    // NOP
label_27875c:
    // 0x27875c: 0x0  nop
    ctx->pc = 0x27875cu;
    // NOP
label_278760:
    // 0x278760: 0xfa37  .word       0x0000FA37                   # INVALID     $zero, $zero, -0x5C9 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278760u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x278760 raw=0x0000FA37"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_278764:
    // 0x278764: 0x5ab0  tge         $zero, $zero, 362
    ctx->pc = 0x278764u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_278768:
    // 0x278768: 0x0  nop
    ctx->pc = 0x278768u;
    // NOP
label_27876c:
    // 0x27876c: 0x0  nop
    ctx->pc = 0x27876cu;
    // NOP
label_278770:
    // 0x278770: 0xfa43  sra         $ra, $zero, 9
    ctx->pc = 0x278770u;
    SET_GPR_S32(ctx, 31, SRA32(GPR_S32(ctx, 0), 9));
label_278774:
    // 0x278774: 0x5be0  .word       0x00005BE0                   # add         $t3, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278774u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 11, (int32_t)result);     } }
label_278778:
    // 0x278778: 0x0  nop
    ctx->pc = 0x278778u;
    // NOP
label_27877c:
    // 0x27877c: 0x0  nop
    ctx->pc = 0x27877cu;
    // NOP
label_278780:
    // 0x278780: 0xfa4f  .word       0x0000FA4F                   # sync # 0000F800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278780u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_278784:
    // 0x278784: 0x7190  .word       0x00007190                   # mfhi        $t6 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278784u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_278788:
    // 0x278788: 0x0  nop
    ctx->pc = 0x278788u;
    // NOP
label_27878c:
    // 0x27878c: 0x0  nop
    ctx->pc = 0x27878cu;
    // NOP
label_278790:
    // 0x278790: 0xfa5e  .word       0x0000FA5E                   # ddiv        $ra, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278790u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x278790 raw=0x0000FA5E"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_278794:
    // 0x278794: 0x6460  .word       0x00006460                   # add         $t4, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278794u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_278798:
    // 0x278798: 0x0  nop
    ctx->pc = 0x278798u;
    // NOP
label_27879c:
    // 0x27879c: 0x0  nop
    ctx->pc = 0x27879cu;
    // NOP
label_2787a0:
    // 0x2787a0: 0xfa6b  .word       0x0000FA6B                   # sltu        $ra, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2787a0u;
    SET_GPR_U64(ctx, 31, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_2787a4:
    // 0x2787a4: 0x73c0  sll         $t6, $zero, 15
    ctx->pc = 0x2787a4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_2787a8:
    // 0x2787a8: 0x0  nop
    ctx->pc = 0x2787a8u;
    // NOP
label_2787ac:
    // 0x2787ac: 0x0  nop
    ctx->pc = 0x2787acu;
    // NOP
label_2787b0:
    // 0x2787b0: 0xfa7a  dsrl        $ra, $zero, 9
    ctx->pc = 0x2787b0u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 0) >> 9);
label_2787b4:
    // 0x2787b4: 0x6de0  .word       0x00006DE0                   # add         $t5, $zero, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2787b4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 13, (int32_t)result);     } }
label_2787b8:
    // 0x2787b8: 0x0  nop
    ctx->pc = 0x2787b8u;
    // NOP
label_2787bc:
    // 0x2787bc: 0x0  nop
    ctx->pc = 0x2787bcu;
    // NOP
label_2787c0:
    // 0x2787c0: 0xfa88  .word       0x0000FA88                   # jr          $zero # 0000FA80 <InstrIdType: CPU_SPECIAL>
label_2787c4:
    if (ctx->pc == 0x2787C4u) {
        ctx->pc = 0x2787C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2787C0u;
        // 0x2787c4: 0x7230  tge         $zero, $zero, 456 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2787C8u;
        goto label_2787c8;
    }
    ctx->pc = 0x2787C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x2787C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2787C0u;
        // 0x2787c4: 0x7230  tge         $zero, $zero, 456 (Delay Slot)
        if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2787C0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2787C8u;
label_2787c8:
    // 0x2787c8: 0x0  nop
    ctx->pc = 0x2787c8u;
    // NOP
label_2787cc:
    // 0x2787cc: 0x0  nop
    ctx->pc = 0x2787ccu;
    // NOP
label_2787d0:
    // 0x2787d0: 0xfa97  .word       0x0000FA97                   # dsrav       $ra, $zero, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2787d0u;
    SET_GPR_S64(ctx, 31, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_2787d4:
    // 0x2787d4: 0x7c40  sll         $t7, $zero, 17
    ctx->pc = 0x2787d4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_2787d8:
    // 0x2787d8: 0x0  nop
    ctx->pc = 0x2787d8u;
    // NOP
label_2787dc:
    // 0x2787dc: 0x0  nop
    ctx->pc = 0x2787dcu;
    // NOP
label_2787e0:
    // 0x2787e0: 0xfaa7  .word       0x0000FAA7                   # not         $ra, $zero # 00000280 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2787e0u;
    SET_GPR_U64(ctx, 31, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
label_2787e4:
    // 0x2787e4: 0x61b0  tge         $zero, $zero, 390
    ctx->pc = 0x2787e4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2787e8:
    // 0x2787e8: 0x0  nop
    ctx->pc = 0x2787e8u;
    // NOP
label_2787ec:
    // 0x2787ec: 0x0  nop
    ctx->pc = 0x2787ecu;
    // NOP
label_2787f0:
    // 0x2787f0: 0xfab4  teq         $zero, $zero, 1002
    ctx->pc = 0x2787f0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2787f4:
    // 0x2787f4: 0x6120  .word       0x00006120                   # add         $t4, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2787f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_2787f8:
    // 0x2787f8: 0x0  nop
    ctx->pc = 0x2787f8u;
    // NOP
label_2787fc:
    // 0x2787fc: 0x0  nop
    ctx->pc = 0x2787fcu;
    // NOP
label_278800:
    // 0x278800: 0xfac1  .word       0x0000FAC1                   # INVALID     $zero, $zero, -0x53F # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278800u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x278800 raw=0x0000FAC1"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_278804:
    // 0x278804: 0x5ad0  .word       0x00005AD0                   # mfhi        $t3 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278804u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_278808:
    // 0x278808: 0x0  nop
    ctx->pc = 0x278808u;
    // NOP
label_27880c:
    // 0x27880c: 0x0  nop
    ctx->pc = 0x27880cu;
    // NOP
label_278810:
    // 0x278810: 0xfacd  break       0, 1003
    ctx->pc = 0x278810u;
    runtime->handleBreak(rdram, ctx);
label_278814:
    // 0x278814: 0x4870  tge         $zero, $zero, 289
    ctx->pc = 0x278814u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_278818:
    // 0x278818: 0x0  nop
    ctx->pc = 0x278818u;
    // NOP
label_27881c:
    // 0x27881c: 0x0  nop
    ctx->pc = 0x27881cu;
    // NOP
label_278820:
    // 0x278820: 0xfad7  .word       0x0000FAD7                   # dsrav       $ra, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278820u;
    SET_GPR_S64(ctx, 31, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_278824:
    // 0x278824: 0x2b00  sll         $a1, $zero, 12
    ctx->pc = 0x278824u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 0), 12));
label_278828:
    // 0x278828: 0x0  nop
    ctx->pc = 0x278828u;
    // NOP
label_27882c:
    // 0x27882c: 0x0  nop
    ctx->pc = 0x27882cu;
    // NOP
label_278830:
    // 0x278830: 0xfadd  .word       0x0000FADD                   # dmultu      $zero, $zero # 0000FAC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278830u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x278830 raw=0x0000FADD"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_278834:
    // 0x278834: 0x4510  .word       0x00004510                   # mfhi        $t0 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278834u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_278838:
    // 0x278838: 0x0  nop
    ctx->pc = 0x278838u;
    // NOP
label_27883c:
    // 0x27883c: 0x0  nop
    ctx->pc = 0x27883cu;
    // NOP
label_278840:
    // 0x278840: 0xfae6  .word       0x0000FAE6                   # xor         $ra, $zero, $zero # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278840u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 0));
label_278844:
    // 0x278844: 0xa160  .word       0x0000A160                   # add         $s4, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278844u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 20, (int32_t)result);     } }
label_278848:
    // 0x278848: 0x0  nop
    ctx->pc = 0x278848u;
    // NOP
label_27884c:
    // 0x27884c: 0x0  nop
    ctx->pc = 0x27884cu;
    // NOP
label_278850:
    // 0x278850: 0xfafb  dsra        $ra, $zero, 11
    ctx->pc = 0x278850u;
    SET_GPR_S64(ctx, 31, GPR_S64(ctx, 0) >> 11);
label_278854:
    // 0x278854: 0x51b0  tge         $zero, $zero, 326
    ctx->pc = 0x278854u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_278858:
    // 0x278858: 0x0  nop
    ctx->pc = 0x278858u;
    // NOP
label_27885c:
    // 0x27885c: 0x0  nop
    ctx->pc = 0x27885cu;
    // NOP
label_278860:
    // 0x278860: 0xfb06  .word       0x0000FB06                   # srlv        $ra, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278860u;
    SET_GPR_S32(ctx, 31, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_278864:
    // 0x278864: 0x6480  sll         $t4, $zero, 18
    ctx->pc = 0x278864u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 18));
label_278868:
    // 0x278868: 0x0  nop
    ctx->pc = 0x278868u;
    // NOP
label_27886c:
    // 0x27886c: 0x0  nop
    ctx->pc = 0x27886cu;
    // NOP
label_278870:
    // 0x278870: 0xfb13  .word       0x0000FB13                   # mtlo        $zero # 0000FB00 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278870u;
    ctx->lo = GPR_U64(ctx, 0);
label_278874:
    // 0x278874: 0xb3c0  sll         $s6, $zero, 15
    ctx->pc = 0x278874u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 0), 15));
label_278878:
    // 0x278878: 0x0  nop
    ctx->pc = 0x278878u;
    // NOP
label_27887c:
    // 0x27887c: 0x0  nop
    ctx->pc = 0x27887cu;
    // NOP
label_278880:
    // 0x278880: 0xfb2a  .word       0x0000FB2A                   # slt         $ra, $zero, $zero # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278880u;
    SET_GPR_U64(ctx, 31, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_278884:
    // 0x278884: 0x45d0  .word       0x000045D0                   # mfhi        $t0 # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278884u;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_278888:
    // 0x278888: 0x0  nop
    ctx->pc = 0x278888u;
    // NOP
label_27888c:
    // 0x27888c: 0x0  nop
    ctx->pc = 0x27888cu;
    // NOP
label_278890:
    // 0x278890: 0xfb33  tltu        $zero, $zero, 1004
    ctx->pc = 0x278890u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_278894:
    // 0x278894: 0x39c0  sll         $a3, $zero, 7
    ctx->pc = 0x278894u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 7));
label_278898:
    // 0x278898: 0x0  nop
    ctx->pc = 0x278898u;
    // NOP
label_27889c:
    // 0x27889c: 0x0  nop
    ctx->pc = 0x27889cu;
    // NOP
label_2788a0:
    // 0x2788a0: 0xfb3b  dsra        $ra, $zero, 12
    ctx->pc = 0x2788a0u;
    SET_GPR_S64(ctx, 31, GPR_S64(ctx, 0) >> 12);
label_2788a4:
    // 0x2788a4: 0x6c40  sll         $t5, $zero, 17
    ctx->pc = 0x2788a4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_2788a8:
    // 0x2788a8: 0x0  nop
    ctx->pc = 0x2788a8u;
    // NOP
label_2788ac:
    // 0x2788ac: 0x0  nop
    ctx->pc = 0x2788acu;
    // NOP
label_2788b0:
    // 0x2788b0: 0xfb49  .word       0x0000FB49                   # jalr        $zero # 00000340 <InstrIdType: CPU_SPECIAL>
label_2788b4:
    if (ctx->pc == 0x2788B4u) {
        ctx->pc = 0x2788B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2788B0u;
        // 0x2788b4: 0x7b80  sll         $t7, $zero, 14 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2788B8u;
        goto label_2788b8;
    }
    ctx->pc = 0x2788B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 0);
        SET_GPR_U32(ctx, 31, 0x2788B8u);
        ctx->pc = 0x2788B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2788B0u;
        // 0x2788b4: 0x7b80  sll         $t7, $zero, 14 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2788B0u, 0x2788B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2788B8u;
label_2788b8:
    // 0x2788b8: 0x0  nop
    ctx->pc = 0x2788b8u;
    // NOP
label_2788bc:
    // 0x2788bc: 0x0  nop
    ctx->pc = 0x2788bcu;
    // NOP
label_2788c0:
    // 0x2788c0: 0xfb59  .word       0x0000FB59                   # multu       $zero, $zero # 0000FB40 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2788c0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 31, (int32_t)result); }
label_2788c4:
    // 0x2788c4: 0x57c0  sll         $t2, $zero, 31
    ctx->pc = 0x2788c4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_2788c8:
    // 0x2788c8: 0x0  nop
    ctx->pc = 0x2788c8u;
    // NOP
label_2788cc:
    // 0x2788cc: 0x0  nop
    ctx->pc = 0x2788ccu;
    // NOP
label_2788d0:
    // 0x2788d0: 0xfb64  .word       0x0000FB64                   # and         $ra, $zero, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2788d0u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_2788d4:
    // 0x2788d4: 0x9520  .word       0x00009520                   # add         $s2, $zero, $zero # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2788d4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_2788d8:
    // 0x2788d8: 0x0  nop
    ctx->pc = 0x2788d8u;
    // NOP
label_2788dc:
    // 0x2788dc: 0x0  nop
    ctx->pc = 0x2788dcu;
    // NOP
label_2788e0:
    // 0x2788e0: 0xfb77  .word       0x0000FB77                   # INVALID     $zero, $zero, -0x489 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2788e0u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x2788E0 raw=0x0000FB77"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_2788e4:
    // 0x2788e4: 0x34e0  .word       0x000034E0                   # add         $a2, $zero, $zero # 000004C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2788e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
label_2788e8:
    // 0x2788e8: 0x0  nop
    ctx->pc = 0x2788e8u;
    // NOP
label_2788ec:
    // 0x2788ec: 0x0  nop
    ctx->pc = 0x2788ecu;
    // NOP
label_2788f0:
    // 0x2788f0: 0xfb7e  dsrl32      $ra, $zero, 13
    ctx->pc = 0x2788f0u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 0) >> (32 + 13));
label_2788f4:
    // 0x2788f4: 0x9660  .word       0x00009660                   # add         $s2, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2788f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
label_2788f8:
    // 0x2788f8: 0x0  nop
    ctx->pc = 0x2788f8u;
    // NOP
label_2788fc:
    // 0x2788fc: 0x0  nop
    ctx->pc = 0x2788fcu;
    // NOP
label_278900:
    // 0x278900: 0xfb91  .word       0x0000FB91                   # mthi        $zero # 0000FB80 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278900u;
    ctx->hi = GPR_U64(ctx, 0);
label_278904:
    // 0x278904: 0x6e40  sll         $t5, $zero, 25
    ctx->pc = 0x278904u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 0), 25));
label_278908:
    // 0x278908: 0x0  nop
    ctx->pc = 0x278908u;
    // NOP
label_27890c:
    // 0x27890c: 0x0  nop
    ctx->pc = 0x27890cu;
    // NOP
label_278910:
    // 0x278910: 0xfb9f  .word       0x0000FB9F                   # ddivu       $ra, $zero, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278910u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x278910 raw=0x0000FB9F"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_278914:
    // 0x278914: 0x1fc0  sll         $v1, $zero, 31
    ctx->pc = 0x278914u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_278918:
    // 0x278918: 0x0  nop
    ctx->pc = 0x278918u;
    // NOP
label_27891c:
    // 0x27891c: 0x0  nop
    ctx->pc = 0x27891cu;
    // NOP
label_278920:
    // 0x278920: 0xfba3  .word       0x0000FBA3                   # negu        $ra, $zero # 00000380 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278920u;
    SET_GPR_S32(ctx, 31, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
label_278924:
    // 0x278924: 0x87c0  sll         $s0, $zero, 31
    ctx->pc = 0x278924u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 0), 31));
label_278928:
    // 0x278928: 0x0  nop
    ctx->pc = 0x278928u;
    // NOP
label_27892c:
    // 0x27892c: 0x0  nop
    ctx->pc = 0x27892cu;
    // NOP
label_278930:
    // 0x278930: 0xfbb4  teq         $zero, $zero, 1006
    ctx->pc = 0x278930u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_278934:
    // 0x278934: 0x86b0  tge         $zero, $zero, 538
    ctx->pc = 0x278934u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_278938:
    // 0x278938: 0x0  nop
    ctx->pc = 0x278938u;
    // NOP
label_27893c:
    // 0x27893c: 0x0  nop
    ctx->pc = 0x27893cu;
    // NOP
label_278940:
    // 0x278940: 0xfbc5  .word       0x0000FBC5                   # INVALID     $zero, $zero, -0x43B # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278940u;
// //     throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x278940 raw=0x0000FBC5"); /* MITIGATED MMI/COP0 */
 /* MITIGATED */
label_278944:
    // 0x278944: 0x4bf0  tge         $zero, $zero, 303
    ctx->pc = 0x278944u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_278948:
    // 0x278948: 0x0  nop
    ctx->pc = 0x278948u;
    // NOP
label_27894c:
    // 0x27894c: 0x0  nop
    ctx->pc = 0x27894cu;
    // NOP
label_278950:
    // 0x278950: 0xfbcf  .word       0x0000FBCF                   # sync # 0000F800 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278950u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_278954:
    // 0x278954: 0x4440  sll         $t0, $zero, 17
    ctx->pc = 0x278954u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 17));
label_278958:
    // 0x278958: 0x0  nop
    ctx->pc = 0x278958u;
    // NOP
label_27895c:
    // 0x27895c: 0x0  nop
    ctx->pc = 0x27895cu;
    // NOP
label_278960:
    // 0x278960: 0xfbd8  .word       0x0000FBD8                   # mult        $ra, $zero, $zero # 000003C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x278960u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 31, (int32_t)result); }
label_278964:
    // 0x278964: 0x5d10  .word       0x00005D10                   # mfhi        $t3 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278964u;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_278968:
    // 0x278968: 0x0  nop
    ctx->pc = 0x278968u;
    // NOP
label_27896c:
    // 0x27896c: 0x0  nop
    ctx->pc = 0x27896cu;
    // NOP
label_278970:
    // 0x278970: 0xfbe4  .word       0x0000FBE4                   # and         $ra, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278970u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
label_278974:
    // 0x278974: 0x36c0  sll         $a2, $zero, 27
    ctx->pc = 0x278974u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
label_278978:
    // 0x278978: 0x0  nop
    ctx->pc = 0x278978u;
    // NOP
label_27897c:
    // 0x27897c: 0x0  nop
    ctx->pc = 0x27897cu;
    // NOP
label_278980:
    // 0x278980: 0xfbeb  .word       0x0000FBEB                   # sltu        $ra, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278980u;
    SET_GPR_U64(ctx, 31, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
label_278984:
    // 0x278984: 0x34b0  tge         $zero, $zero, 210
    ctx->pc = 0x278984u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_278988:
    // 0x278988: 0x0  nop
    ctx->pc = 0x278988u;
    // NOP
label_27898c:
    // 0x27898c: 0x0  nop
    ctx->pc = 0x27898cu;
    // NOP
label_278990:
    // 0x278990: 0xfbf2  tlt         $zero, $zero, 1007
    ctx->pc = 0x278990u;
    if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_278994:
    // 0x278994: 0x6c50  .word       0x00006C50                   # mfhi        $t5 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x278994u;
    SET_GPR_U64(ctx, 13, ctx->hi);
label_278998:
    // 0x278998: 0x0  nop
    ctx->pc = 0x278998u;
    // NOP
label_27899c:
    // 0x27899c: 0x0  nop
    ctx->pc = 0x27899cu;
    // NOP
label_2789a0:
    // 0x2789a0: 0xfc00  sll         $ra, $zero, 16
    ctx->pc = 0x2789a0u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 0), 16));
label_2789a4:
    // 0x2789a4: 0x7c70  tge         $zero, $zero, 497
    ctx->pc = 0x2789a4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
label_2789a8:
    // 0x2789a8: 0x0  nop
    ctx->pc = 0x2789a8u;
    // NOP
label_2789ac:
    // 0x2789ac: 0x0  nop
    ctx->pc = 0x2789acu;
    // NOP
label_2789b0:
    // 0x2789b0: 0xfc10  .word       0x0000FC10                   # mfhi        $ra # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2789b0u;
    SET_GPR_U64(ctx, 31, ctx->hi);
label_2789b4:
    // 0x2789b4: 0x3ec0  sll         $a3, $zero, 27
    ctx->pc = 0x2789b4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 0), 27));
    ctx->pc = 0x2789b8u;
    return;
}

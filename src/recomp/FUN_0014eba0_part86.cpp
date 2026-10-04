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


void FUN_0014eba0_part86(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x1783b0u: goto label_1783b0;
        case 0x1783b4u: goto label_1783b4;
        case 0x1783b8u: goto label_1783b8;
        case 0x1783bcu: goto label_1783bc;
        case 0x1783c0u: goto label_1783c0;
        case 0x1783c4u: goto label_1783c4;
        case 0x1783c8u: goto label_1783c8;
        case 0x1783ccu: goto label_1783cc;
        case 0x1783d0u: goto label_1783d0;
        case 0x1783d4u: goto label_1783d4;
        case 0x1783d8u: goto label_1783d8;
        case 0x1783dcu: goto label_1783dc;
        case 0x1783e0u: goto label_1783e0;
        case 0x1783e4u: goto label_1783e4;
        case 0x1783e8u: goto label_1783e8;
        case 0x1783ecu: goto label_1783ec;
        case 0x1783f0u: goto label_1783f0;
        case 0x1783f4u: goto label_1783f4;
        case 0x1783f8u: goto label_1783f8;
        case 0x1783fcu: goto label_1783fc;
        case 0x178400u: goto label_178400;
        case 0x178404u: goto label_178404;
        case 0x178408u: goto label_178408;
        case 0x17840cu: goto label_17840c;
        case 0x178410u: goto label_178410;
        case 0x178414u: goto label_178414;
        case 0x178418u: goto label_178418;
        case 0x17841cu: goto label_17841c;
        case 0x178420u: goto label_178420;
        case 0x178424u: goto label_178424;
        case 0x178428u: goto label_178428;
        case 0x17842cu: goto label_17842c;
        case 0x178430u: goto label_178430;
        case 0x178434u: goto label_178434;
        case 0x178438u: goto label_178438;
        case 0x17843cu: goto label_17843c;
        case 0x178440u: goto label_178440;
        case 0x178444u: goto label_178444;
        case 0x178448u: goto label_178448;
        case 0x17844cu: goto label_17844c;
        case 0x178450u: goto label_178450;
        case 0x178454u: goto label_178454;
        case 0x178458u: goto label_178458;
        case 0x17845cu: goto label_17845c;
        case 0x178460u: goto label_178460;
        case 0x178464u: goto label_178464;
        case 0x178468u: goto label_178468;
        case 0x17846cu: goto label_17846c;
        case 0x178470u: goto label_178470;
        case 0x178474u: goto label_178474;
        case 0x178478u: goto label_178478;
        case 0x17847cu: goto label_17847c;
        case 0x178480u: goto label_178480;
        case 0x178484u: goto label_178484;
        case 0x178488u: goto label_178488;
        case 0x17848cu: goto label_17848c;
        case 0x178490u: goto label_178490;
        case 0x178494u: goto label_178494;
        case 0x178498u: goto label_178498;
        case 0x17849cu: goto label_17849c;
        case 0x1784a0u: goto label_1784a0;
        case 0x1784a4u: goto label_1784a4;
        case 0x1784a8u: goto label_1784a8;
        case 0x1784acu: goto label_1784ac;
        case 0x1784b0u: goto label_1784b0;
        case 0x1784b4u: goto label_1784b4;
        case 0x1784b8u: goto label_1784b8;
        case 0x1784bcu: goto label_1784bc;
        case 0x1784c0u: goto label_1784c0;
        case 0x1784c4u: goto label_1784c4;
        case 0x1784c8u: goto label_1784c8;
        case 0x1784ccu: goto label_1784cc;
        case 0x1784d0u: goto label_1784d0;
        case 0x1784d4u: goto label_1784d4;
        case 0x1784d8u: goto label_1784d8;
        case 0x1784dcu: goto label_1784dc;
        case 0x1784e0u: goto label_1784e0;
        case 0x1784e4u: goto label_1784e4;
        case 0x1784e8u: goto label_1784e8;
        case 0x1784ecu: goto label_1784ec;
        case 0x1784f0u: goto label_1784f0;
        case 0x1784f4u: goto label_1784f4;
        case 0x1784f8u: goto label_1784f8;
        case 0x1784fcu: goto label_1784fc;
        case 0x178500u: goto label_178500;
        case 0x178504u: goto label_178504;
        case 0x178508u: goto label_178508;
        case 0x17850cu: goto label_17850c;
        case 0x178510u: goto label_178510;
        case 0x178514u: goto label_178514;
        case 0x178518u: goto label_178518;
        case 0x17851cu: goto label_17851c;
        case 0x178520u: goto label_178520;
        case 0x178524u: goto label_178524;
        case 0x178528u: goto label_178528;
        case 0x17852cu: goto label_17852c;
        case 0x178530u: goto label_178530;
        case 0x178534u: goto label_178534;
        case 0x178538u: goto label_178538;
        case 0x17853cu: goto label_17853c;
        case 0x178540u: goto label_178540;
        case 0x178544u: goto label_178544;
        case 0x178548u: goto label_178548;
        case 0x17854cu: goto label_17854c;
        case 0x178550u: goto label_178550;
        case 0x178554u: goto label_178554;
        case 0x178558u: goto label_178558;
        case 0x17855cu: goto label_17855c;
        case 0x178560u: goto label_178560;
        case 0x178564u: goto label_178564;
        case 0x178568u: goto label_178568;
        case 0x17856cu: goto label_17856c;
        case 0x178570u: goto label_178570;
        case 0x178574u: goto label_178574;
        case 0x178578u: goto label_178578;
        case 0x17857cu: goto label_17857c;
        case 0x178580u: goto label_178580;
        case 0x178584u: goto label_178584;
        case 0x178588u: goto label_178588;
        case 0x17858cu: goto label_17858c;
        case 0x178590u: goto label_178590;
        case 0x178594u: goto label_178594;
        case 0x178598u: goto label_178598;
        case 0x17859cu: goto label_17859c;
        case 0x1785a0u: goto label_1785a0;
        case 0x1785a4u: goto label_1785a4;
        case 0x1785a8u: goto label_1785a8;
        case 0x1785acu: goto label_1785ac;
        case 0x1785b0u: goto label_1785b0;
        case 0x1785b4u: goto label_1785b4;
        case 0x1785b8u: goto label_1785b8;
        case 0x1785bcu: goto label_1785bc;
        case 0x1785c0u: goto label_1785c0;
        case 0x1785c4u: goto label_1785c4;
        case 0x1785c8u: goto label_1785c8;
        case 0x1785ccu: goto label_1785cc;
        case 0x1785d0u: goto label_1785d0;
        case 0x1785d4u: goto label_1785d4;
        case 0x1785d8u: goto label_1785d8;
        case 0x1785dcu: goto label_1785dc;
        case 0x1785e0u: goto label_1785e0;
        case 0x1785e4u: goto label_1785e4;
        case 0x1785e8u: goto label_1785e8;
        case 0x1785ecu: goto label_1785ec;
        case 0x1785f0u: goto label_1785f0;
        case 0x1785f4u: goto label_1785f4;
        case 0x1785f8u: goto label_1785f8;
        case 0x1785fcu: goto label_1785fc;
        case 0x178600u: goto label_178600;
        case 0x178604u: goto label_178604;
        case 0x178608u: goto label_178608;
        case 0x17860cu: goto label_17860c;
        case 0x178610u: goto label_178610;
        case 0x178614u: goto label_178614;
        case 0x178618u: goto label_178618;
        case 0x17861cu: goto label_17861c;
        case 0x178620u: goto label_178620;
        case 0x178624u: goto label_178624;
        case 0x178628u: goto label_178628;
        case 0x17862cu: goto label_17862c;
        case 0x178630u: goto label_178630;
        case 0x178634u: goto label_178634;
        case 0x178638u: goto label_178638;
        case 0x17863cu: goto label_17863c;
        case 0x178640u: goto label_178640;
        case 0x178644u: goto label_178644;
        case 0x178648u: goto label_178648;
        case 0x17864cu: goto label_17864c;
        case 0x178650u: goto label_178650;
        case 0x178654u: goto label_178654;
        case 0x178658u: goto label_178658;
        case 0x17865cu: goto label_17865c;
        case 0x178660u: goto label_178660;
        case 0x178664u: goto label_178664;
        case 0x178668u: goto label_178668;
        case 0x17866cu: goto label_17866c;
        case 0x178670u: goto label_178670;
        case 0x178674u: goto label_178674;
        case 0x178678u: goto label_178678;
        case 0x17867cu: goto label_17867c;
        case 0x178680u: goto label_178680;
        case 0x178684u: goto label_178684;
        case 0x178688u: goto label_178688;
        case 0x17868cu: goto label_17868c;
        case 0x178690u: goto label_178690;
        case 0x178694u: goto label_178694;
        case 0x178698u: goto label_178698;
        case 0x17869cu: goto label_17869c;
        case 0x1786a0u: goto label_1786a0;
        case 0x1786a4u: goto label_1786a4;
        case 0x1786a8u: goto label_1786a8;
        case 0x1786acu: goto label_1786ac;
        case 0x1786b0u: goto label_1786b0;
        case 0x1786b4u: goto label_1786b4;
        case 0x1786b8u: goto label_1786b8;
        case 0x1786bcu: goto label_1786bc;
        case 0x1786c0u: goto label_1786c0;
        case 0x1786c4u: goto label_1786c4;
        case 0x1786c8u: goto label_1786c8;
        case 0x1786ccu: goto label_1786cc;
        case 0x1786d0u: goto label_1786d0;
        case 0x1786d4u: goto label_1786d4;
        case 0x1786d8u: goto label_1786d8;
        case 0x1786dcu: goto label_1786dc;
        case 0x1786e0u: goto label_1786e0;
        case 0x1786e4u: goto label_1786e4;
        case 0x1786e8u: goto label_1786e8;
        case 0x1786ecu: goto label_1786ec;
        case 0x1786f0u: goto label_1786f0;
        case 0x1786f4u: goto label_1786f4;
        case 0x1786f8u: goto label_1786f8;
        case 0x1786fcu: goto label_1786fc;
        case 0x178700u: goto label_178700;
        case 0x178704u: goto label_178704;
        case 0x178708u: goto label_178708;
        case 0x17870cu: goto label_17870c;
        case 0x178710u: goto label_178710;
        case 0x178714u: goto label_178714;
        case 0x178718u: goto label_178718;
        case 0x17871cu: goto label_17871c;
        case 0x178720u: goto label_178720;
        case 0x178724u: goto label_178724;
        case 0x178728u: goto label_178728;
        case 0x17872cu: goto label_17872c;
        case 0x178730u: goto label_178730;
        case 0x178734u: goto label_178734;
        case 0x178738u: goto label_178738;
        case 0x17873cu: goto label_17873c;
        case 0x178740u: goto label_178740;
        case 0x178744u: goto label_178744;
        case 0x178748u: goto label_178748;
        case 0x17874cu: goto label_17874c;
        case 0x178750u: goto label_178750;
        case 0x178754u: goto label_178754;
        case 0x178758u: goto label_178758;
        case 0x17875cu: goto label_17875c;
        case 0x178760u: goto label_178760;
        case 0x178764u: goto label_178764;
        case 0x178768u: goto label_178768;
        case 0x17876cu: goto label_17876c;
        case 0x178770u: goto label_178770;
        case 0x178774u: goto label_178774;
        case 0x178778u: goto label_178778;
        case 0x17877cu: goto label_17877c;
        case 0x178780u: goto label_178780;
        case 0x178784u: goto label_178784;
        case 0x178788u: goto label_178788;
        case 0x17878cu: goto label_17878c;
        case 0x178790u: goto label_178790;
        case 0x178794u: goto label_178794;
        case 0x178798u: goto label_178798;
        case 0x17879cu: goto label_17879c;
        case 0x1787a0u: goto label_1787a0;
        case 0x1787a4u: goto label_1787a4;
        case 0x1787a8u: goto label_1787a8;
        case 0x1787acu: goto label_1787ac;
        case 0x1787b0u: goto label_1787b0;
        case 0x1787b4u: goto label_1787b4;
        case 0x1787b8u: goto label_1787b8;
        case 0x1787bcu: goto label_1787bc;
        case 0x1787c0u: goto label_1787c0;
        case 0x1787c4u: goto label_1787c4;
        case 0x1787c8u: goto label_1787c8;
        case 0x1787ccu: goto label_1787cc;
        case 0x1787d0u: goto label_1787d0;
        case 0x1787d4u: goto label_1787d4;
        case 0x1787d8u: goto label_1787d8;
        case 0x1787dcu: goto label_1787dc;
        case 0x1787e0u: goto label_1787e0;
        case 0x1787e4u: goto label_1787e4;
        case 0x1787e8u: goto label_1787e8;
        case 0x1787ecu: goto label_1787ec;
        case 0x1787f0u: goto label_1787f0;
        case 0x1787f4u: goto label_1787f4;
        case 0x1787f8u: goto label_1787f8;
        case 0x1787fcu: goto label_1787fc;
        case 0x178800u: goto label_178800;
        case 0x178804u: goto label_178804;
        case 0x178808u: goto label_178808;
        case 0x17880cu: goto label_17880c;
        case 0x178810u: goto label_178810;
        case 0x178814u: goto label_178814;
        case 0x178818u: goto label_178818;
        case 0x17881cu: goto label_17881c;
        case 0x178820u: goto label_178820;
        case 0x178824u: goto label_178824;
        case 0x178828u: goto label_178828;
        case 0x17882cu: goto label_17882c;
        case 0x178830u: goto label_178830;
        case 0x178834u: goto label_178834;
        case 0x178838u: goto label_178838;
        case 0x17883cu: goto label_17883c;
        case 0x178840u: goto label_178840;
        case 0x178844u: goto label_178844;
        case 0x178848u: goto label_178848;
        case 0x17884cu: goto label_17884c;
        case 0x178850u: goto label_178850;
        case 0x178854u: goto label_178854;
        case 0x178858u: goto label_178858;
        case 0x17885cu: goto label_17885c;
        case 0x178860u: goto label_178860;
        case 0x178864u: goto label_178864;
        case 0x178868u: goto label_178868;
        case 0x17886cu: goto label_17886c;
        case 0x178870u: goto label_178870;
        case 0x178874u: goto label_178874;
        case 0x178878u: goto label_178878;
        case 0x17887cu: goto label_17887c;
        case 0x178880u: goto label_178880;
        case 0x178884u: goto label_178884;
        case 0x178888u: goto label_178888;
        case 0x17888cu: goto label_17888c;
        case 0x178890u: goto label_178890;
        case 0x178894u: goto label_178894;
        case 0x178898u: goto label_178898;
        case 0x17889cu: goto label_17889c;
        case 0x1788a0u: goto label_1788a0;
        case 0x1788a4u: goto label_1788a4;
        case 0x1788a8u: goto label_1788a8;
        case 0x1788acu: goto label_1788ac;
        case 0x1788b0u: goto label_1788b0;
        case 0x1788b4u: goto label_1788b4;
        case 0x1788b8u: goto label_1788b8;
        case 0x1788bcu: goto label_1788bc;
        case 0x1788c0u: goto label_1788c0;
        case 0x1788c4u: goto label_1788c4;
        case 0x1788c8u: goto label_1788c8;
        case 0x1788ccu: goto label_1788cc;
        case 0x1788d0u: goto label_1788d0;
        case 0x1788d4u: goto label_1788d4;
        case 0x1788d8u: goto label_1788d8;
        case 0x1788dcu: goto label_1788dc;
        case 0x1788e0u: goto label_1788e0;
        case 0x1788e4u: goto label_1788e4;
        case 0x1788e8u: goto label_1788e8;
        case 0x1788ecu: goto label_1788ec;
        case 0x1788f0u: goto label_1788f0;
        case 0x1788f4u: goto label_1788f4;
        case 0x1788f8u: goto label_1788f8;
        case 0x1788fcu: goto label_1788fc;
        case 0x178900u: goto label_178900;
        case 0x178904u: goto label_178904;
        case 0x178908u: goto label_178908;
        case 0x17890cu: goto label_17890c;
        case 0x178910u: goto label_178910;
        case 0x178914u: goto label_178914;
        case 0x178918u: goto label_178918;
        case 0x17891cu: goto label_17891c;
        case 0x178920u: goto label_178920;
        case 0x178924u: goto label_178924;
        case 0x178928u: goto label_178928;
        case 0x17892cu: goto label_17892c;
        case 0x178930u: goto label_178930;
        case 0x178934u: goto label_178934;
        case 0x178938u: goto label_178938;
        case 0x17893cu: goto label_17893c;
        case 0x178940u: goto label_178940;
        case 0x178944u: goto label_178944;
        case 0x178948u: goto label_178948;
        case 0x17894cu: goto label_17894c;
        case 0x178950u: goto label_178950;
        case 0x178954u: goto label_178954;
        case 0x178958u: goto label_178958;
        case 0x17895cu: goto label_17895c;
        case 0x178960u: goto label_178960;
        case 0x178964u: goto label_178964;
        case 0x178968u: goto label_178968;
        case 0x17896cu: goto label_17896c;
        case 0x178970u: goto label_178970;
        case 0x178974u: goto label_178974;
        case 0x178978u: goto label_178978;
        case 0x17897cu: goto label_17897c;
        case 0x178980u: goto label_178980;
        case 0x178984u: goto label_178984;
        case 0x178988u: goto label_178988;
        case 0x17898cu: goto label_17898c;
        case 0x178990u: goto label_178990;
        case 0x178994u: goto label_178994;
        case 0x178998u: goto label_178998;
        case 0x17899cu: goto label_17899c;
        case 0x1789a0u: goto label_1789a0;
        case 0x1789a4u: goto label_1789a4;
        case 0x1789a8u: goto label_1789a8;
        case 0x1789acu: goto label_1789ac;
        case 0x1789b0u: goto label_1789b0;
        case 0x1789b4u: goto label_1789b4;
        case 0x1789b8u: goto label_1789b8;
        case 0x1789bcu: goto label_1789bc;
        case 0x1789c0u: goto label_1789c0;
        case 0x1789c4u: goto label_1789c4;
        case 0x1789c8u: goto label_1789c8;
        case 0x1789ccu: goto label_1789cc;
        case 0x1789d0u: goto label_1789d0;
        case 0x1789d4u: goto label_1789d4;
        case 0x1789d8u: goto label_1789d8;
        case 0x1789dcu: goto label_1789dc;
        case 0x1789e0u: goto label_1789e0;
        case 0x1789e4u: goto label_1789e4;
        case 0x1789e8u: goto label_1789e8;
        case 0x1789ecu: goto label_1789ec;
        case 0x1789f0u: goto label_1789f0;
        case 0x1789f4u: goto label_1789f4;
        case 0x1789f8u: goto label_1789f8;
        case 0x1789fcu: goto label_1789fc;
        case 0x178a00u: goto label_178a00;
        case 0x178a04u: goto label_178a04;
        case 0x178a08u: goto label_178a08;
        case 0x178a0cu: goto label_178a0c;
        case 0x178a10u: goto label_178a10;
        case 0x178a14u: goto label_178a14;
        case 0x178a18u: goto label_178a18;
        case 0x178a1cu: goto label_178a1c;
        case 0x178a20u: goto label_178a20;
        case 0x178a24u: goto label_178a24;
        case 0x178a28u: goto label_178a28;
        case 0x178a2cu: goto label_178a2c;
        case 0x178a30u: goto label_178a30;
        case 0x178a34u: goto label_178a34;
        case 0x178a38u: goto label_178a38;
        case 0x178a3cu: goto label_178a3c;
        case 0x178a40u: goto label_178a40;
        case 0x178a44u: goto label_178a44;
        case 0x178a48u: goto label_178a48;
        case 0x178a4cu: goto label_178a4c;
        case 0x178a50u: goto label_178a50;
        case 0x178a54u: goto label_178a54;
        case 0x178a58u: goto label_178a58;
        case 0x178a5cu: goto label_178a5c;
        case 0x178a60u: goto label_178a60;
        case 0x178a64u: goto label_178a64;
        case 0x178a68u: goto label_178a68;
        case 0x178a6cu: goto label_178a6c;
        case 0x178a70u: goto label_178a70;
        case 0x178a74u: goto label_178a74;
        case 0x178a78u: goto label_178a78;
        case 0x178a7cu: goto label_178a7c;
        case 0x178a80u: goto label_178a80;
        case 0x178a84u: goto label_178a84;
        case 0x178a88u: goto label_178a88;
        case 0x178a8cu: goto label_178a8c;
        case 0x178a90u: goto label_178a90;
        case 0x178a94u: goto label_178a94;
        case 0x178a98u: goto label_178a98;
        case 0x178a9cu: goto label_178a9c;
        case 0x178aa0u: goto label_178aa0;
        case 0x178aa4u: goto label_178aa4;
        case 0x178aa8u: goto label_178aa8;
        case 0x178aacu: goto label_178aac;
        case 0x178ab0u: goto label_178ab0;
        case 0x178ab4u: goto label_178ab4;
        case 0x178ab8u: goto label_178ab8;
        case 0x178abcu: goto label_178abc;
        case 0x178ac0u: goto label_178ac0;
        case 0x178ac4u: goto label_178ac4;
        case 0x178ac8u: goto label_178ac8;
        case 0x178accu: goto label_178acc;
        case 0x178ad0u: goto label_178ad0;
        case 0x178ad4u: goto label_178ad4;
        case 0x178ad8u: goto label_178ad8;
        case 0x178adcu: goto label_178adc;
        case 0x178ae0u: goto label_178ae0;
        case 0x178ae4u: goto label_178ae4;
        case 0x178ae8u: goto label_178ae8;
        case 0x178aecu: goto label_178aec;
        case 0x178af0u: goto label_178af0;
        case 0x178af4u: goto label_178af4;
        case 0x178af8u: goto label_178af8;
        case 0x178afcu: goto label_178afc;
        case 0x178b00u: goto label_178b00;
        case 0x178b04u: goto label_178b04;
        case 0x178b08u: goto label_178b08;
        case 0x178b0cu: goto label_178b0c;
        case 0x178b10u: goto label_178b10;
        case 0x178b14u: goto label_178b14;
        case 0x178b18u: goto label_178b18;
        case 0x178b1cu: goto label_178b1c;
        case 0x178b20u: goto label_178b20;
        case 0x178b24u: goto label_178b24;
        case 0x178b28u: goto label_178b28;
        case 0x178b2cu: goto label_178b2c;
        case 0x178b30u: goto label_178b30;
        case 0x178b34u: goto label_178b34;
        case 0x178b38u: goto label_178b38;
        case 0x178b3cu: goto label_178b3c;
        case 0x178b40u: goto label_178b40;
        case 0x178b44u: goto label_178b44;
        case 0x178b48u: goto label_178b48;
        case 0x178b4cu: goto label_178b4c;
        case 0x178b50u: goto label_178b50;
        case 0x178b54u: goto label_178b54;
        case 0x178b58u: goto label_178b58;
        case 0x178b5cu: goto label_178b5c;
        case 0x178b60u: goto label_178b60;
        case 0x178b64u: goto label_178b64;
        case 0x178b68u: goto label_178b68;
        case 0x178b6cu: goto label_178b6c;
        case 0x178b70u: goto label_178b70;
        case 0x178b74u: goto label_178b74;
        case 0x178b78u: goto label_178b78;
        case 0x178b7cu: goto label_178b7c;
        default: return;
    }

label_1783b0:
    // 0x1783b0: 0x3e00008  jr          $ra
label_1783b4:
    if (ctx->pc == 0x1783B4u) {
        ctx->pc = 0x1783B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1783B0u;
        // 0x1783b4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1783B8u;
        goto label_1783b8;
    }
    ctx->pc = 0x1783B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1783B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1783B0u;
        // 0x1783b4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1783B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1783B8u;
label_1783b8:
    // 0x1783b8: 0x0  nop
    ctx->pc = 0x1783b8u;
    // NOP
label_1783bc:
    // 0x1783bc: 0x0  nop
    ctx->pc = 0x1783bcu;
    // NOP
label_1783c0:
    // 0x1783c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1783c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1783c4:
    // 0x1783c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1783c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1783c8:
    // 0x1783c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1783c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1783cc:
    // 0x1783cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1783ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1783d0:
    // 0x1783d0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1783d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1783d4:
    // 0x1783d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1783d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1783d8:
    // 0x1783d8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1783d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1783dc:
    // 0x1783dc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1783dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1783e0:
    // 0x1783e0: 0xc08dc56  jal         func_237158
label_1783e4:
    if (ctx->pc == 0x1783E4u) {
        ctx->pc = 0x1783E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1783E0u;
        // 0x1783e4: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1783E8u;
        goto label_1783e8;
    }
    ctx->pc = 0x1783E0u;
    SET_GPR_U32(ctx, 31, 0x1783E8u);
    ctx->pc = 0x1783E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1783E0u;
    // 0x1783e4: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237158u;
    { ctx->pc = 0x237158; return; }
    ctx->pc = 0x1783E8u;
label_1783e8:
    // 0x1783e8: 0x12183c  dsll32      $v1, $s2, 0
    ctx->pc = 0x1783e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 0));
label_1783ec:
    // 0x1783ec: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1783ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1783f0:
    // 0x1783f0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1783f0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_1783f4:
    // 0x1783f4: 0x32a78  dsll        $a1, $v1, 9
    ctx->pc = 0x1783f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << 9);
label_1783f8:
    // 0x1783f8: 0x34a50156  ori         $a1, $a1, 0x156
    ctx->pc = 0x1783f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)342);
label_1783fc:
    // 0x1783fc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1783fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_178400:
    // 0x178400: 0xfe250010  sd          $a1, 0x10($s1)
    ctx->pc = 0x178400u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 5));
label_178404:
    // 0x178404: 0xfe300000  sd          $s0, 0x0($s1)
    ctx->pc = 0x178404u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 16));
label_178408:
    // 0x178408: 0xa2240018  sb          $a0, 0x18($s1)
    ctx->pc = 0x178408u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 24), (uint8_t)GPR_U32(ctx, 4));
label_17840c:
    // 0x17840c: 0xa2240019  sb          $a0, 0x19($s1)
    ctx->pc = 0x17840cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 25), (uint8_t)GPR_U32(ctx, 4));
label_178410:
    // 0x178410: 0xa224001a  sb          $a0, 0x1A($s1)
    ctx->pc = 0x178410u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 26), (uint8_t)GPR_U32(ctx, 4));
label_178414:
    // 0x178414: 0xa224001b  sb          $a0, 0x1B($s1)
    ctx->pc = 0x178414u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 27), (uint8_t)GPR_U32(ctx, 4));
label_178418:
    // 0x178418: 0xae23001c  sw          $v1, 0x1C($s1)
    ctx->pc = 0x178418u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 3));
label_17841c:
    // 0x17841c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x17841cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_178420:
    // 0x178420: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x178420u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_178424:
    // 0x178424: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x178424u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_178428:
    // 0x178428: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x178428u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17842c:
    // 0x17842c: 0x3e00008  jr          $ra
label_178430:
    if (ctx->pc == 0x178430u) {
        ctx->pc = 0x178430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17842Cu;
        // 0x178430: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178434u;
        goto label_178434;
    }
    ctx->pc = 0x17842Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17842Cu;
        // 0x178430: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17842Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178434u;
label_178434:
    // 0x178434: 0x0  nop
    ctx->pc = 0x178434u;
    // NOP
label_178438:
    // 0x178438: 0x0  nop
    ctx->pc = 0x178438u;
    // NOP
label_17843c:
    // 0x17843c: 0x0  nop
    ctx->pc = 0x17843cu;
    // NOP
label_178440:
    // 0x178440: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x178440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_178444:
    // 0x178444: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x178444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_178448:
    // 0x178448: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x178448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_17844c:
    // 0x17844c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17844cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_178450:
    // 0x178450: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x178450u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_178454:
    // 0x178454: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x178454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_178458:
    // 0x178458: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x178458u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17845c:
    // 0x17845c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x17845cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_178460:
    // 0x178460: 0xc08dc56  jal         func_237158
label_178464:
    if (ctx->pc == 0x178464u) {
        ctx->pc = 0x178464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178460u;
        // 0x178464: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178468u;
        goto label_178468;
    }
    ctx->pc = 0x178460u;
    SET_GPR_U32(ctx, 31, 0x178468u);
    ctx->pc = 0x178464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178460u;
    // 0x178464: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237158u;
    { ctx->pc = 0x237158; return; }
    ctx->pc = 0x178468u;
label_178468:
    // 0x178468: 0x12183c  dsll32      $v1, $s2, 0
    ctx->pc = 0x178468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 0));
label_17846c:
    // 0x17846c: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x17846cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_178470:
    // 0x178470: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x178470u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_178474:
    // 0x178474: 0x32a78  dsll        $a1, $v1, 9
    ctx->pc = 0x178474u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << 9);
label_178478:
    // 0x178478: 0x34a50156  ori         $a1, $a1, 0x156
    ctx->pc = 0x178478u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)342);
label_17847c:
    // 0x17847c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x17847cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_178480:
    // 0x178480: 0xfe250008  sd          $a1, 0x8($s1)
    ctx->pc = 0x178480u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 5));
label_178484:
    // 0x178484: 0xfe300000  sd          $s0, 0x0($s1)
    ctx->pc = 0x178484u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 16));
label_178488:
    // 0x178488: 0xa2240010  sb          $a0, 0x10($s1)
    ctx->pc = 0x178488u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 16), (uint8_t)GPR_U32(ctx, 4));
label_17848c:
    // 0x17848c: 0xa2240011  sb          $a0, 0x11($s1)
    ctx->pc = 0x17848cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 17), (uint8_t)GPR_U32(ctx, 4));
label_178490:
    // 0x178490: 0xa2240012  sb          $a0, 0x12($s1)
    ctx->pc = 0x178490u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 18), (uint8_t)GPR_U32(ctx, 4));
label_178494:
    // 0x178494: 0xa2240013  sb          $a0, 0x13($s1)
    ctx->pc = 0x178494u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 19), (uint8_t)GPR_U32(ctx, 4));
label_178498:
    // 0x178498: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x178498u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
label_17849c:
    // 0x17849c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x17849cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1784a0:
    // 0x1784a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1784a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1784a4:
    // 0x1784a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1784a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1784a8:
    // 0x1784a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1784a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1784ac:
    // 0x1784ac: 0x3e00008  jr          $ra
label_1784b0:
    if (ctx->pc == 0x1784B0u) {
        ctx->pc = 0x1784B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1784ACu;
        // 0x1784b0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1784B4u;
        goto label_1784b4;
    }
    ctx->pc = 0x1784ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1784B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1784ACu;
        // 0x1784b0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1784ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1784B4u;
label_1784b4:
    // 0x1784b4: 0x0  nop
    ctx->pc = 0x1784b4u;
    // NOP
label_1784b8:
    // 0x1784b8: 0x0  nop
    ctx->pc = 0x1784b8u;
    // NOP
label_1784bc:
    // 0x1784bc: 0x0  nop
    ctx->pc = 0x1784bcu;
    // NOP
label_1784c0:
    // 0x1784c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1784c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1784c4:
    // 0x1784c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1784c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1784c8:
    // 0x1784c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1784c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1784cc:
    // 0x1784cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1784ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1784d0:
    // 0x1784d0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1784d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1784d4:
    // 0x1784d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1784d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1784d8:
    // 0x1784d8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1784d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1784dc:
    // 0x1784dc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1784dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1784e0:
    // 0x1784e0: 0xc08dc56  jal         func_237158
label_1784e4:
    if (ctx->pc == 0x1784E4u) {
        ctx->pc = 0x1784E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1784E0u;
        // 0x1784e4: 0x24050060  addiu       $a1, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1784E8u;
        goto label_1784e8;
    }
    ctx->pc = 0x1784E0u;
    SET_GPR_U32(ctx, 31, 0x1784E8u);
    ctx->pc = 0x1784E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1784E0u;
    // 0x1784e4: 0x24050060  addiu       $a1, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237158u;
    { ctx->pc = 0x237158; return; }
    ctx->pc = 0x1784E8u;
label_1784e8:
    // 0x1784e8: 0x12183c  dsll32      $v1, $s2, 0
    ctx->pc = 0x1784e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 0));
label_1784ec:
    // 0x1784ec: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1784ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1784f0:
    // 0x1784f0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1784f0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_1784f4:
    // 0x1784f4: 0x32a78  dsll        $a1, $v1, 9
    ctx->pc = 0x1784f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << 9);
label_1784f8:
    // 0x1784f8: 0x34a5015b  ori         $a1, $a1, 0x15B
    ctx->pc = 0x1784f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)347);
label_1784fc:
    // 0x1784fc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1784fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_178500:
    // 0x178500: 0xfe250008  sd          $a1, 0x8($s1)
    ctx->pc = 0x178500u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 5));
label_178504:
    // 0x178504: 0xfe300000  sd          $s0, 0x0($s1)
    ctx->pc = 0x178504u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 16));
label_178508:
    // 0x178508: 0xa2240010  sb          $a0, 0x10($s1)
    ctx->pc = 0x178508u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 16), (uint8_t)GPR_U32(ctx, 4));
label_17850c:
    // 0x17850c: 0xa2240011  sb          $a0, 0x11($s1)
    ctx->pc = 0x17850cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 17), (uint8_t)GPR_U32(ctx, 4));
label_178510:
    // 0x178510: 0xa2240012  sb          $a0, 0x12($s1)
    ctx->pc = 0x178510u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 18), (uint8_t)GPR_U32(ctx, 4));
label_178514:
    // 0x178514: 0xa2240013  sb          $a0, 0x13($s1)
    ctx->pc = 0x178514u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 19), (uint8_t)GPR_U32(ctx, 4));
label_178518:
    // 0x178518: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x178518u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
label_17851c:
    // 0x17851c: 0xa2240028  sb          $a0, 0x28($s1)
    ctx->pc = 0x17851cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 40), (uint8_t)GPR_U32(ctx, 4));
label_178520:
    // 0x178520: 0xa2240029  sb          $a0, 0x29($s1)
    ctx->pc = 0x178520u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 4));
label_178524:
    // 0x178524: 0xa224002a  sb          $a0, 0x2A($s1)
    ctx->pc = 0x178524u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 42), (uint8_t)GPR_U32(ctx, 4));
label_178528:
    // 0x178528: 0xa224002b  sb          $a0, 0x2B($s1)
    ctx->pc = 0x178528u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 43), (uint8_t)GPR_U32(ctx, 4));
label_17852c:
    // 0x17852c: 0xae23002c  sw          $v1, 0x2C($s1)
    ctx->pc = 0x17852cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
label_178530:
    // 0x178530: 0xa2240040  sb          $a0, 0x40($s1)
    ctx->pc = 0x178530u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 64), (uint8_t)GPR_U32(ctx, 4));
label_178534:
    // 0x178534: 0xa2240041  sb          $a0, 0x41($s1)
    ctx->pc = 0x178534u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 65), (uint8_t)GPR_U32(ctx, 4));
label_178538:
    // 0x178538: 0xa2240042  sb          $a0, 0x42($s1)
    ctx->pc = 0x178538u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 66), (uint8_t)GPR_U32(ctx, 4));
label_17853c:
    // 0x17853c: 0xa2240043  sb          $a0, 0x43($s1)
    ctx->pc = 0x17853cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 67), (uint8_t)GPR_U32(ctx, 4));
label_178540:
    // 0x178540: 0xae230044  sw          $v1, 0x44($s1)
    ctx->pc = 0x178540u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 3));
label_178544:
    // 0x178544: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x178544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_178548:
    // 0x178548: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x178548u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17854c:
    // 0x17854c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17854cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_178550:
    // 0x178550: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x178550u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_178554:
    // 0x178554: 0x3e00008  jr          $ra
label_178558:
    if (ctx->pc == 0x178558u) {
        ctx->pc = 0x178558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178554u;
        // 0x178558: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17855Cu;
        goto label_17855c;
    }
    ctx->pc = 0x178554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178554u;
        // 0x178558: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17855Cu;
label_17855c:
    // 0x17855c: 0x0  nop
    ctx->pc = 0x17855cu;
    // NOP
label_178560:
    // 0x178560: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x178560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_178564:
    // 0x178564: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x178564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_178568:
    // 0x178568: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x178568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_17856c:
    // 0x17856c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17856cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_178570:
    // 0x178570: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x178570u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_178574:
    // 0x178574: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x178574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_178578:
    // 0x178578: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x178578u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17857c:
    // 0x17857c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x17857cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_178580:
    // 0x178580: 0xc08dc56  jal         func_237158
label_178584:
    if (ctx->pc == 0x178584u) {
        ctx->pc = 0x178584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178580u;
        // 0x178584: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178588u;
        goto label_178588;
    }
    ctx->pc = 0x178580u;
    SET_GPR_U32(ctx, 31, 0x178588u);
    ctx->pc = 0x178584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178580u;
    // 0x178584: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237158u;
    { ctx->pc = 0x237158; return; }
    ctx->pc = 0x178588u;
label_178588:
    // 0x178588: 0x12183c  dsll32      $v1, $s2, 0
    ctx->pc = 0x178588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 0));
label_17858c:
    // 0x17858c: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x17858cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_178590:
    // 0x178590: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x178590u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_178594:
    // 0x178594: 0x32a78  dsll        $a1, $v1, 9
    ctx->pc = 0x178594u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << 9);
label_178598:
    // 0x178598: 0x34a5015c  ori         $a1, $a1, 0x15C
    ctx->pc = 0x178598u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)348);
label_17859c:
    // 0x17859c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x17859cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1785a0:
    // 0x1785a0: 0xfe250010  sd          $a1, 0x10($s1)
    ctx->pc = 0x1785a0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 5));
label_1785a4:
    // 0x1785a4: 0xfe300000  sd          $s0, 0x0($s1)
    ctx->pc = 0x1785a4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 16));
label_1785a8:
    // 0x1785a8: 0xa2240018  sb          $a0, 0x18($s1)
    ctx->pc = 0x1785a8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 24), (uint8_t)GPR_U32(ctx, 4));
label_1785ac:
    // 0x1785ac: 0xa2240019  sb          $a0, 0x19($s1)
    ctx->pc = 0x1785acu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 25), (uint8_t)GPR_U32(ctx, 4));
label_1785b0:
    // 0x1785b0: 0xa224001a  sb          $a0, 0x1A($s1)
    ctx->pc = 0x1785b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 26), (uint8_t)GPR_U32(ctx, 4));
label_1785b4:
    // 0x1785b4: 0xa224001b  sb          $a0, 0x1B($s1)
    ctx->pc = 0x1785b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 27), (uint8_t)GPR_U32(ctx, 4));
label_1785b8:
    // 0x1785b8: 0xae23001c  sw          $v1, 0x1C($s1)
    ctx->pc = 0x1785b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 3));
label_1785bc:
    // 0x1785bc: 0xa2240030  sb          $a0, 0x30($s1)
    ctx->pc = 0x1785bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 48), (uint8_t)GPR_U32(ctx, 4));
label_1785c0:
    // 0x1785c0: 0xa2240031  sb          $a0, 0x31($s1)
    ctx->pc = 0x1785c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 49), (uint8_t)GPR_U32(ctx, 4));
label_1785c4:
    // 0x1785c4: 0xa2240032  sb          $a0, 0x32($s1)
    ctx->pc = 0x1785c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 50), (uint8_t)GPR_U32(ctx, 4));
label_1785c8:
    // 0x1785c8: 0xa2240033  sb          $a0, 0x33($s1)
    ctx->pc = 0x1785c8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 51), (uint8_t)GPR_U32(ctx, 4));
label_1785cc:
    // 0x1785cc: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x1785ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
label_1785d0:
    // 0x1785d0: 0xa2240048  sb          $a0, 0x48($s1)
    ctx->pc = 0x1785d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 72), (uint8_t)GPR_U32(ctx, 4));
label_1785d4:
    // 0x1785d4: 0xa2240049  sb          $a0, 0x49($s1)
    ctx->pc = 0x1785d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 73), (uint8_t)GPR_U32(ctx, 4));
label_1785d8:
    // 0x1785d8: 0xa224004a  sb          $a0, 0x4A($s1)
    ctx->pc = 0x1785d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 74), (uint8_t)GPR_U32(ctx, 4));
label_1785dc:
    // 0x1785dc: 0xa224004b  sb          $a0, 0x4B($s1)
    ctx->pc = 0x1785dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 75), (uint8_t)GPR_U32(ctx, 4));
label_1785e0:
    // 0x1785e0: 0xae23004c  sw          $v1, 0x4C($s1)
    ctx->pc = 0x1785e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 3));
label_1785e4:
    // 0x1785e4: 0xa2240060  sb          $a0, 0x60($s1)
    ctx->pc = 0x1785e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 96), (uint8_t)GPR_U32(ctx, 4));
label_1785e8:
    // 0x1785e8: 0xa2240061  sb          $a0, 0x61($s1)
    ctx->pc = 0x1785e8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 97), (uint8_t)GPR_U32(ctx, 4));
label_1785ec:
    // 0x1785ec: 0xa2240062  sb          $a0, 0x62($s1)
    ctx->pc = 0x1785ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 98), (uint8_t)GPR_U32(ctx, 4));
label_1785f0:
    // 0x1785f0: 0xa2240063  sb          $a0, 0x63($s1)
    ctx->pc = 0x1785f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 99), (uint8_t)GPR_U32(ctx, 4));
label_1785f4:
    // 0x1785f4: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x1785f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_1785f8:
    // 0x1785f8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1785f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1785fc:
    // 0x1785fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1785fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_178600:
    // 0x178600: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x178600u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_178604:
    // 0x178604: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x178604u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_178608:
    // 0x178608: 0x3e00008  jr          $ra
label_17860c:
    if (ctx->pc == 0x17860Cu) {
        ctx->pc = 0x17860Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178608u;
        // 0x17860c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178610u;
        goto label_178610;
    }
    ctx->pc = 0x178608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17860Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178608u;
        // 0x17860c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178610u;
label_178610:
    // 0x178610: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x178610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_178614:
    // 0x178614: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x178614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_178618:
    // 0x178618: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x178618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_17861c:
    // 0x17861c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17861cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_178620:
    // 0x178620: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x178620u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_178624:
    // 0x178624: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x178624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_178628:
    // 0x178628: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x178628u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17862c:
    // 0x17862c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x17862cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_178630:
    // 0x178630: 0xc08dc56  jal         func_237158
label_178634:
    if (ctx->pc == 0x178634u) {
        ctx->pc = 0x178634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178630u;
        // 0x178634: 0x24050070  addiu       $a1, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178638u;
        goto label_178638;
    }
    ctx->pc = 0x178630u;
    SET_GPR_U32(ctx, 31, 0x178638u);
    ctx->pc = 0x178634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178630u;
    // 0x178634: 0x24050070  addiu       $a1, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237158u;
    { ctx->pc = 0x237158; return; }
    ctx->pc = 0x178638u;
label_178638:
    // 0x178638: 0x12183c  dsll32      $v1, $s2, 0
    ctx->pc = 0x178638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 0));
label_17863c:
    // 0x17863c: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x17863cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_178640:
    // 0x178640: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x178640u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_178644:
    // 0x178644: 0x32a78  dsll        $a1, $v1, 9
    ctx->pc = 0x178644u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << 9);
label_178648:
    // 0x178648: 0x34a5015c  ori         $a1, $a1, 0x15C
    ctx->pc = 0x178648u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)348);
label_17864c:
    // 0x17864c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x17864cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_178650:
    // 0x178650: 0xfe250008  sd          $a1, 0x8($s1)
    ctx->pc = 0x178650u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 5));
label_178654:
    // 0x178654: 0xfe300000  sd          $s0, 0x0($s1)
    ctx->pc = 0x178654u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 16));
label_178658:
    // 0x178658: 0xa2240010  sb          $a0, 0x10($s1)
    ctx->pc = 0x178658u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 16), (uint8_t)GPR_U32(ctx, 4));
label_17865c:
    // 0x17865c: 0xa2240011  sb          $a0, 0x11($s1)
    ctx->pc = 0x17865cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 17), (uint8_t)GPR_U32(ctx, 4));
label_178660:
    // 0x178660: 0xa2240012  sb          $a0, 0x12($s1)
    ctx->pc = 0x178660u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 18), (uint8_t)GPR_U32(ctx, 4));
label_178664:
    // 0x178664: 0xa2240013  sb          $a0, 0x13($s1)
    ctx->pc = 0x178664u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 19), (uint8_t)GPR_U32(ctx, 4));
label_178668:
    // 0x178668: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x178668u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
label_17866c:
    // 0x17866c: 0xa2240028  sb          $a0, 0x28($s1)
    ctx->pc = 0x17866cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 40), (uint8_t)GPR_U32(ctx, 4));
label_178670:
    // 0x178670: 0xa2240029  sb          $a0, 0x29($s1)
    ctx->pc = 0x178670u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 4));
label_178674:
    // 0x178674: 0xa224002a  sb          $a0, 0x2A($s1)
    ctx->pc = 0x178674u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 42), (uint8_t)GPR_U32(ctx, 4));
label_178678:
    // 0x178678: 0xa224002b  sb          $a0, 0x2B($s1)
    ctx->pc = 0x178678u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 43), (uint8_t)GPR_U32(ctx, 4));
label_17867c:
    // 0x17867c: 0xae23002c  sw          $v1, 0x2C($s1)
    ctx->pc = 0x17867cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
label_178680:
    // 0x178680: 0xa2240040  sb          $a0, 0x40($s1)
    ctx->pc = 0x178680u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 64), (uint8_t)GPR_U32(ctx, 4));
label_178684:
    // 0x178684: 0xa2240041  sb          $a0, 0x41($s1)
    ctx->pc = 0x178684u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 65), (uint8_t)GPR_U32(ctx, 4));
label_178688:
    // 0x178688: 0xa2240042  sb          $a0, 0x42($s1)
    ctx->pc = 0x178688u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 66), (uint8_t)GPR_U32(ctx, 4));
label_17868c:
    // 0x17868c: 0xa2240043  sb          $a0, 0x43($s1)
    ctx->pc = 0x17868cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 67), (uint8_t)GPR_U32(ctx, 4));
label_178690:
    // 0x178690: 0xae230044  sw          $v1, 0x44($s1)
    ctx->pc = 0x178690u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 3));
label_178694:
    // 0x178694: 0xa2240058  sb          $a0, 0x58($s1)
    ctx->pc = 0x178694u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 88), (uint8_t)GPR_U32(ctx, 4));
label_178698:
    // 0x178698: 0xa2240059  sb          $a0, 0x59($s1)
    ctx->pc = 0x178698u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 89), (uint8_t)GPR_U32(ctx, 4));
label_17869c:
    // 0x17869c: 0xa224005a  sb          $a0, 0x5A($s1)
    ctx->pc = 0x17869cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 90), (uint8_t)GPR_U32(ctx, 4));
label_1786a0:
    // 0x1786a0: 0xa224005b  sb          $a0, 0x5B($s1)
    ctx->pc = 0x1786a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 91), (uint8_t)GPR_U32(ctx, 4));
label_1786a4:
    // 0x1786a4: 0xae23005c  sw          $v1, 0x5C($s1)
    ctx->pc = 0x1786a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 3));
label_1786a8:
    // 0x1786a8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1786a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1786ac:
    // 0x1786ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1786acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1786b0:
    // 0x1786b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1786b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1786b4:
    // 0x1786b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1786b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1786b8:
    // 0x1786b8: 0x3e00008  jr          $ra
label_1786bc:
    if (ctx->pc == 0x1786BCu) {
        ctx->pc = 0x1786BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1786B8u;
        // 0x1786bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1786C0u;
        goto label_1786c0;
    }
    ctx->pc = 0x1786B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1786BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1786B8u;
        // 0x1786bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1786B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1786C0u;
label_1786c0:
    // 0x1786c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1786c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1786c4:
    // 0x1786c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1786c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1786c8:
    // 0x1786c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1786c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1786cc:
    // 0x1786cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1786ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1786d0:
    // 0x1786d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1786d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1786d4:
    // 0x1786d4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1786d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1786d8:
    // 0x1786d8: 0xc08dc56  jal         func_237158
label_1786dc:
    if (ctx->pc == 0x1786DCu) {
        ctx->pc = 0x1786DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1786D8u;
        // 0x1786dc: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1786E0u;
        goto label_1786e0;
    }
    ctx->pc = 0x1786D8u;
    SET_GPR_U32(ctx, 31, 0x1786E0u);
    ctx->pc = 0x1786DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1786D8u;
    // 0x1786dc: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237158u;
    { ctx->pc = 0x237158; return; }
    ctx->pc = 0x1786E0u;
label_1786e0:
    // 0x1786e0: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x1786e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
label_1786e4:
    // 0x1786e4: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1786e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1786e8:
    // 0x1786e8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1786e8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_1786ec:
    // 0x1786ec: 0x32a78  dsll        $a1, $v1, 9
    ctx->pc = 0x1786ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << 9);
label_1786f0:
    // 0x1786f0: 0x34a5014b  ori         $a1, $a1, 0x14B
    ctx->pc = 0x1786f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)331);
label_1786f4:
    // 0x1786f4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1786f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1786f8:
    // 0x1786f8: 0xfe250000  sd          $a1, 0x0($s1)
    ctx->pc = 0x1786f8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 5));
label_1786fc:
    // 0x1786fc: 0xa2240008  sb          $a0, 0x8($s1)
    ctx->pc = 0x1786fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 4));
label_178700:
    // 0x178700: 0xa2240009  sb          $a0, 0x9($s1)
    ctx->pc = 0x178700u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 9), (uint8_t)GPR_U32(ctx, 4));
label_178704:
    // 0x178704: 0xa224000a  sb          $a0, 0xA($s1)
    ctx->pc = 0x178704u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 10), (uint8_t)GPR_U32(ctx, 4));
label_178708:
    // 0x178708: 0xa224000b  sb          $a0, 0xB($s1)
    ctx->pc = 0x178708u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11), (uint8_t)GPR_U32(ctx, 4));
label_17870c:
    // 0x17870c: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x17870cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
label_178710:
    // 0x178710: 0xa2240018  sb          $a0, 0x18($s1)
    ctx->pc = 0x178710u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 24), (uint8_t)GPR_U32(ctx, 4));
label_178714:
    // 0x178714: 0xa2240019  sb          $a0, 0x19($s1)
    ctx->pc = 0x178714u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 25), (uint8_t)GPR_U32(ctx, 4));
label_178718:
    // 0x178718: 0xa224001a  sb          $a0, 0x1A($s1)
    ctx->pc = 0x178718u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 26), (uint8_t)GPR_U32(ctx, 4));
label_17871c:
    // 0x17871c: 0xa224001b  sb          $a0, 0x1B($s1)
    ctx->pc = 0x17871cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 27), (uint8_t)GPR_U32(ctx, 4));
label_178720:
    // 0x178720: 0xae23001c  sw          $v1, 0x1C($s1)
    ctx->pc = 0x178720u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 3));
label_178724:
    // 0x178724: 0xa2240028  sb          $a0, 0x28($s1)
    ctx->pc = 0x178724u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 40), (uint8_t)GPR_U32(ctx, 4));
label_178728:
    // 0x178728: 0xa2240029  sb          $a0, 0x29($s1)
    ctx->pc = 0x178728u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 4));
label_17872c:
    // 0x17872c: 0xa224002a  sb          $a0, 0x2A($s1)
    ctx->pc = 0x17872cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 42), (uint8_t)GPR_U32(ctx, 4));
label_178730:
    // 0x178730: 0xa224002b  sb          $a0, 0x2B($s1)
    ctx->pc = 0x178730u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 43), (uint8_t)GPR_U32(ctx, 4));
label_178734:
    // 0x178734: 0xae23002c  sw          $v1, 0x2C($s1)
    ctx->pc = 0x178734u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
label_178738:
    // 0x178738: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x178738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_17873c:
    // 0x17873c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17873cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_178740:
    // 0x178740: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x178740u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_178744:
    // 0x178744: 0x3e00008  jr          $ra
label_178748:
    if (ctx->pc == 0x178748u) {
        ctx->pc = 0x178748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178744u;
        // 0x178748: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17874Cu;
        goto label_17874c;
    }
    ctx->pc = 0x178744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178744u;
        // 0x178748: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17874Cu;
label_17874c:
    // 0x17874c: 0x0  nop
    ctx->pc = 0x17874cu;
    // NOP
label_178750:
    // 0x178750: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x178750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_178754:
    // 0x178754: 0x3403c  dsll32      $t0, $v1, 0
    ctx->pc = 0x178754u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << (32 + 0));
label_178758:
    // 0x178758: 0x34038004  ori         $v1, $zero, 0x8004
    ctx->pc = 0x178758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32772);
label_17875c:
    // 0x17875c: 0x684025  or          $t0, $v1, $t0
    ctx->pc = 0x17875cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
label_178760:
    // 0x178760: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x178760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_178764:
    // 0x178764: 0xfc880000  sd          $t0, 0x0($a0)
    ctx->pc = 0x178764u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 8));
label_178768:
    // 0x178768: 0x14e0001a  bnez        $a3, . + 4 + (0x1A << 2)
label_17876c:
    if (ctx->pc == 0x17876Cu) {
        ctx->pc = 0x17876Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178768u;
        // 0x17876c: 0xfc830008  sd          $v1, 0x8($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178770u;
        goto label_178770;
    }
    ctx->pc = 0x178768u;
    {
        const bool branch_taken_0x178768 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x17876Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178768u;
        // 0x17876c: 0xfc830008  sd          $v1, 0x8($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178768) {
            ctx->pc = 0x1787D4u;
            goto label_1787d4;
        }
    }
    ctx->pc = 0x178770u;
label_178770:
    // 0x178770: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x178770u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_178774:
    // 0x178774: 0x6583c  dsll32      $t3, $a2, 0
    ctx->pc = 0x178774u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 6) << (32 + 0));
label_178778:
    // 0x178778: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x178778u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_17877c:
    // 0x17877c: 0x24632170  addiu       $v1, $v1, 0x2170
    ctx->pc = 0x17877cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8560));
label_178780:
    // 0x178780: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x178780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_178784:
    // 0x178784: 0xb583e  dsrl32      $t3, $t3, 0
    ctx->pc = 0x178784u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) >> (32 + 0));
label_178788:
    // 0x178788: 0xdcaa0000  ld          $t2, 0x0($a1)
    ctx->pc = 0x178788u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_17878c:
    // 0x17878c: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x17878cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
label_178790:
    // 0x178790: 0x3468000d  ori         $t0, $v1, 0xD
    ctx->pc = 0x178790u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13);
label_178794:
    // 0x178794: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x178794u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_178798:
    // 0x178798: 0x24070047  addiu       $a3, $zero, 0x47
    ctx->pc = 0x178798u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_17879c:
    // 0x17879c: 0xb3178  dsll        $a2, $t3, 5
    ctx->pc = 0x17879cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) << 5);
label_1787a0:
    // 0x1787a0: 0xb19b8  dsll        $v1, $t3, 6
    ctx->pc = 0x1787a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) << 6);
label_1787a4:
    // 0x1787a4: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1787a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_1787a8:
    // 0x1787a8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1787a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1787ac:
    // 0x1787ac: 0xfc8a0010  sd          $t2, 0x10($a0)
    ctx->pc = 0x1787acu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 10));
label_1787b0:
    // 0x1787b0: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1787b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1787b4:
    // 0x1787b4: 0xfc890018  sd          $t1, 0x18($a0)
    ctx->pc = 0x1787b4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 9));
label_1787b8:
    // 0x1787b8: 0xfc880020  sd          $t0, 0x20($a0)
    ctx->pc = 0x1787b8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 8));
label_1787bc:
    // 0x1787bc: 0xfc870028  sd          $a3, 0x28($a0)
    ctx->pc = 0x1787bcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 40), GPR_U64(ctx, 7));
label_1787c0:
    // 0x1787c0: 0xfc860030  sd          $a2, 0x30($a0)
    ctx->pc = 0x1787c0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 48), GPR_U64(ctx, 6));
label_1787c4:
    // 0x1787c4: 0xfc850038  sd          $a1, 0x38($a0)
    ctx->pc = 0x1787c4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 56), GPR_U64(ctx, 5));
label_1787c8:
    // 0x1787c8: 0xfc800040  sd          $zero, 0x40($a0)
    ctx->pc = 0x1787c8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 64), GPR_U64(ctx, 0));
label_1787cc:
    // 0x1787cc: 0x10000019  b           . + 4 + (0x19 << 2)
label_1787d0:
    if (ctx->pc == 0x1787D0u) {
        ctx->pc = 0x1787D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1787CCu;
        // 0x1787d0: 0xfc830048  sd          $v1, 0x48($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 72), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1787D4u;
        goto label_1787d4;
    }
    ctx->pc = 0x1787CCu;
    {
        const bool branch_taken_0x1787cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1787D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1787CCu;
        // 0x1787d0: 0xfc830048  sd          $v1, 0x48($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 72), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1787cc) {
            ctx->pc = 0x178834u;
            goto label_178834;
        }
    }
    ctx->pc = 0x1787D4u;
label_1787d4:
    // 0x1787d4: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1787d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_1787d8:
    // 0x1787d8: 0x6583c  dsll32      $t3, $a2, 0
    ctx->pc = 0x1787d8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 6) << (32 + 0));
label_1787dc:
    // 0x1787dc: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x1787dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1787e0:
    // 0x1787e0: 0x24632170  addiu       $v1, $v1, 0x2170
    ctx->pc = 0x1787e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8560));
label_1787e4:
    // 0x1787e4: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x1787e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1787e8:
    // 0x1787e8: 0xb583e  dsrl32      $t3, $t3, 0
    ctx->pc = 0x1787e8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) >> (32 + 0));
label_1787ec:
    // 0x1787ec: 0xdcaa0000  ld          $t2, 0x0($a1)
    ctx->pc = 0x1787ecu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_1787f0:
    // 0x1787f0: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x1787f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
label_1787f4:
    // 0x1787f4: 0x3468000d  ori         $t0, $v1, 0xD
    ctx->pc = 0x1787f4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13);
label_1787f8:
    // 0x1787f8: 0x24090043  addiu       $t1, $zero, 0x43
    ctx->pc = 0x1787f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
label_1787fc:
    // 0x1787fc: 0x24070048  addiu       $a3, $zero, 0x48
    ctx->pc = 0x1787fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_178800:
    // 0x178800: 0xb3178  dsll        $a2, $t3, 5
    ctx->pc = 0x178800u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) << 5);
label_178804:
    // 0x178804: 0xb19b8  dsll        $v1, $t3, 6
    ctx->pc = 0x178804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) << 6);
label_178808:
    // 0x178808: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x178808u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_17880c:
    // 0x17880c: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x17880cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_178810:
    // 0x178810: 0xfc8a0010  sd          $t2, 0x10($a0)
    ctx->pc = 0x178810u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 10));
label_178814:
    // 0x178814: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x178814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_178818:
    // 0x178818: 0xfc890018  sd          $t1, 0x18($a0)
    ctx->pc = 0x178818u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 9));
label_17881c:
    // 0x17881c: 0xfc880020  sd          $t0, 0x20($a0)
    ctx->pc = 0x17881cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 8));
label_178820:
    // 0x178820: 0xfc870028  sd          $a3, 0x28($a0)
    ctx->pc = 0x178820u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 40), GPR_U64(ctx, 7));
label_178824:
    // 0x178824: 0xfc860030  sd          $a2, 0x30($a0)
    ctx->pc = 0x178824u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 48), GPR_U64(ctx, 6));
label_178828:
    // 0x178828: 0xfc850038  sd          $a1, 0x38($a0)
    ctx->pc = 0x178828u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 56), GPR_U64(ctx, 5));
label_17882c:
    // 0x17882c: 0xfc800040  sd          $zero, 0x40($a0)
    ctx->pc = 0x17882cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 64), GPR_U64(ctx, 0));
label_178830:
    // 0x178830: 0xfc830048  sd          $v1, 0x48($a0)
    ctx->pc = 0x178830u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 72), GPR_U64(ctx, 3));
label_178834:
    // 0x178834: 0x3e00008  jr          $ra
label_178838:
    if (ctx->pc == 0x178838u) {
        ctx->pc = 0x17883Cu;
        goto label_17883c;
    }
    ctx->pc = 0x178834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17883Cu;
label_17883c:
    // 0x17883c: 0x0  nop
    ctx->pc = 0x17883cu;
    // NOP
label_178840:
    // 0x178840: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x178840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
label_178844:
    // 0x178844: 0xfc860000  sd          $a2, 0x0($a0)
    ctx->pc = 0x178844u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 6));
label_178848:
    // 0x178848: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x178848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_17884c:
    // 0x17884c: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x17884cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_178850:
    // 0x178850: 0x3e00008  jr          $ra
label_178854:
    if (ctx->pc == 0x178854u) {
        ctx->pc = 0x178854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178850u;
        // 0x178854: 0xfc830008  sd          $v1, 0x8($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178858u;
        goto label_178858;
    }
    ctx->pc = 0x178850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178850u;
        // 0x178854: 0xfc830008  sd          $v1, 0x8($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178858u;
label_178858:
    // 0x178858: 0x0  nop
    ctx->pc = 0x178858u;
    // NOP
label_17885c:
    // 0x17885c: 0x0  nop
    ctx->pc = 0x17885cu;
    // NOP
label_178860:
    // 0x178860: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x178860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
label_178864:
    // 0x178864: 0x5603c  dsll32      $t4, $a1, 0
    ctx->pc = 0x178864u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 5) << (32 + 0));
label_178868:
    // 0x178868: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x178868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_17886c:
    // 0x17886c: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x17886cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
label_178870:
    // 0x178870: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x178870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_178874:
    // 0x178874: 0x32bf8  dsll        $a1, $v1, 15
    ctx->pc = 0x178874u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << 15);
label_178878:
    // 0x178878: 0x21bbc  dsll32      $v1, $v0, 14
    ctx->pc = 0x178878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 14));
label_17887c:
    // 0x17887c: 0xc603e  dsrl32      $t4, $t4, 0
    ctx->pc = 0x17887cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) >> (32 + 0));
label_178880:
    // 0x178880: 0x8103c  dsll32      $v0, $t0, 0
    ctx->pc = 0x178880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 0));
label_178884:
    // 0x178884: 0x1852825  or          $a1, $t4, $a1
    ctx->pc = 0x178884u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 12) | GPR_U64(ctx, 5));
label_178888:
    // 0x178888: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x178888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_17888c:
    // 0x17888c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x17888cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_178890:
    // 0x178890: 0x213fc  dsll32      $v0, $v0, 15
    ctx->pc = 0x178890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 15));
label_178894:
    // 0x178894: 0x432825  or          $a1, $v0, $v1
    ctx->pc = 0x178894u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_178898:
    // 0x178898: 0x9103c  dsll32      $v0, $t1, 0
    ctx->pc = 0x178898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) << (32 + 0));
label_17889c:
    // 0x17889c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x17889cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_1788a0:
    // 0x1788a0: 0x21ebc  dsll32      $v1, $v0, 26
    ctx->pc = 0x1788a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 26));
label_1788a4:
    // 0x1788a4: 0xa103c  dsll32      $v0, $t2, 0
    ctx->pc = 0x1788a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
label_1788a8:
    // 0x1788a8: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1788a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_1788ac:
    // 0x1788ac: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1788acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_1788b0:
    // 0x1788b0: 0x2173c  dsll32      $v0, $v0, 28
    ctx->pc = 0x1788b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 28));
label_1788b4:
    // 0x1788b4: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1788b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1788b8:
    // 0x1788b8: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x1788b8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
label_1788bc:
    // 0x1788bc: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x1788bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_1788c0:
    // 0x1788c0: 0x3e00008  jr          $ra
label_1788c4:
    if (ctx->pc == 0x1788C4u) {
        ctx->pc = 0x1788C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1788C0u;
        // 0x1788c4: 0xfc8b0008  sd          $t3, 0x8($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1788C8u;
        goto label_1788c8;
    }
    ctx->pc = 0x1788C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1788C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1788C0u;
        // 0x1788c4: 0xfc8b0008  sd          $t3, 0x8($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1788C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1788C8u;
label_1788c8:
    // 0x1788c8: 0x0  nop
    ctx->pc = 0x1788c8u;
    // NOP
label_1788cc:
    // 0x1788cc: 0x0  nop
    ctx->pc = 0x1788ccu;
    // NOP
label_1788d0:
    // 0x1788d0: 0x3c021100  lui         $v0, 0x1100
    ctx->pc = 0x1788d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4352 << 16));
label_1788d4:
    // 0x1788d4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1788d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1788d8:
    // 0x1788d8: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x1788d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
label_1788dc:
    // 0x1788dc: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1788dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_1788e0:
    // 0x1788e0: 0xa21825  or          $v1, $a1, $v0
    ctx->pc = 0x1788e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_1788e4:
    // 0x1788e4: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1788e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_1788e8:
    // 0x1788e8: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x1788e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_1788ec:
    // 0x1788ec: 0x3e00008  jr          $ra
label_1788f0:
    if (ctx->pc == 0x1788F0u) {
        ctx->pc = 0x1788F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1788ECu;
        // 0x1788f0: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1788F4u;
        goto label_1788f4;
    }
    ctx->pc = 0x1788ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1788F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1788ECu;
        // 0x1788f0: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1788ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1788F4u;
label_1788f4:
    // 0x1788f4: 0x0  nop
    ctx->pc = 0x1788f4u;
    // NOP
label_1788f8:
    // 0x1788f8: 0x0  nop
    ctx->pc = 0x1788f8u;
    // NOP
label_1788fc:
    // 0x1788fc: 0x0  nop
    ctx->pc = 0x1788fcu;
    // NOP
label_178900:
    // 0x178900: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x178900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_178904:
    // 0x178904: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x178904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_178908:
    // 0x178908: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x178908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_17890c:
    // 0x17890c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17890cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_178910:
    // 0x178910: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x178910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_178914:
    // 0x178914: 0xc05f538  jal         func_17D4E0
label_178918:
    if (ctx->pc == 0x178918u) {
        ctx->pc = 0x178918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178914u;
        // 0x178918: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17891Cu;
        goto label_17891c;
    }
    ctx->pc = 0x178914u;
    SET_GPR_U32(ctx, 31, 0x17891Cu);
    ctx->pc = 0x178918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178914u;
    // 0x178918: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D4E0u;
    { ctx->pc = 0x17d4e0; return; }
    ctx->pc = 0x17891Cu;
label_17891c:
    // 0x17891c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_178920:
    if (ctx->pc == 0x178920u) {
        ctx->pc = 0x178920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17891Cu;
        // 0x178920: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178924u;
        goto label_178924;
    }
    ctx->pc = 0x17891Cu;
    {
        const bool branch_taken_0x17891c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x178920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17891Cu;
        // 0x178920: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17891c) {
            ctx->pc = 0x178970u;
            goto label_178970;
        }
    }
    ctx->pc = 0x178924u;
label_178924:
    // 0x178924: 0xc040058  jal         func_100160
label_178928:
    if (ctx->pc == 0x178928u) {
        ctx->pc = 0x17892Cu;
        goto label_17892c;
    }
    ctx->pc = 0x178924u;
    SET_GPR_U32(ctx, 31, 0x17892Cu);
    ctx->pc = 0x100160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100160u, 0x178924u, 0x17892Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17892Cu;
label_17892c:
    // 0x17892c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x17892cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_178930:
    // 0x178930: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x178930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_178934:
    // 0x178934: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x178934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_178938:
    // 0x178938: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x178938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
label_17893c:
    // 0x17893c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x17893cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_178940:
    // 0x178940: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x178940u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_178944:
    // 0x178944: 0xc05eac8  jal         func_17AB20
label_178948:
    if (ctx->pc == 0x178948u) {
        ctx->pc = 0x178948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178944u;
        // 0x178948: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17894Cu;
        goto label_17894c;
    }
    ctx->pc = 0x178944u;
    SET_GPR_U32(ctx, 31, 0x17894Cu);
    ctx->pc = 0x178948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178944u;
    // 0x178948: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AB20u;
    { ctx->pc = 0x17ab20; return; }
    ctx->pc = 0x17894Cu;
label_17894c:
    // 0x17894c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17894cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_178950:
    // 0x178950: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x178950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_178954:
    // 0x178954: 0xc05eaf0  jal         func_17ABC0
label_178958:
    if (ctx->pc == 0x178958u) {
        ctx->pc = 0x178958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178954u;
        // 0x178958: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17895Cu;
        goto label_17895c;
    }
    ctx->pc = 0x178954u;
    SET_GPR_U32(ctx, 31, 0x17895Cu);
    ctx->pc = 0x178958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178954u;
    // 0x178958: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ABC0u;
    { ctx->pc = 0x17abc0; return; }
    ctx->pc = 0x17895Cu;
label_17895c:
    // 0x17895c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17895cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_178960:
    // 0x178960: 0xc05ea7c  jal         func_17A9F0
label_178964:
    if (ctx->pc == 0x178964u) {
        ctx->pc = 0x178964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178960u;
        // 0x178964: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178968u;
        goto label_178968;
    }
    ctx->pc = 0x178960u;
    SET_GPR_U32(ctx, 31, 0x178968u);
    ctx->pc = 0x178964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178960u;
    // 0x178964: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A9F0u;
    { ctx->pc = 0x17a9f0; return; }
    ctx->pc = 0x178968u;
label_178968:
    // 0x178968: 0xc05f4d8  jal         func_17D360
label_17896c:
    if (ctx->pc == 0x17896Cu) {
        ctx->pc = 0x17896Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178968u;
        // 0x17896c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178970u;
        goto label_178970;
    }
    ctx->pc = 0x178968u;
    SET_GPR_U32(ctx, 31, 0x178970u);
    ctx->pc = 0x17896Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178968u;
    // 0x17896c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D360u;
    { ctx->pc = 0x17d360; return; }
    ctx->pc = 0x178970u;
label_178970:
    // 0x178970: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x178970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_178974:
    // 0x178974: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x178974u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_178978:
    // 0x178978: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x178978u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17897c:
    // 0x17897c: 0x3e00008  jr          $ra
label_178980:
    if (ctx->pc == 0x178980u) {
        ctx->pc = 0x178980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17897Cu;
        // 0x178980: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178984u;
        goto label_178984;
    }
    ctx->pc = 0x17897Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17897Cu;
        // 0x178980: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17897Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178984u;
label_178984:
    // 0x178984: 0x0  nop
    ctx->pc = 0x178984u;
    // NOP
label_178988:
    // 0x178988: 0x0  nop
    ctx->pc = 0x178988u;
    // NOP
label_17898c:
    // 0x17898c: 0x0  nop
    ctx->pc = 0x17898cu;
    // NOP
label_178990:
    // 0x178990: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x178990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_178994:
    // 0x178994: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x178994u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_178998:
    // 0x178998: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x178998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_17899c:
    // 0x17899c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17899cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1789a0:
    // 0x1789a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1789a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1789a4:
    // 0x1789a4: 0x8c253ffc  lw          $a1, 0x3FFC($at)
    ctx->pc = 0x1789a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1789a8:
    // 0x1789a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1789a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1789ac:
    // 0x1789ac: 0x8f838750  lw          $v1, -0x78B0($gp)
    ctx->pc = 0x1789acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936400)));
label_1789b0:
    // 0x1789b0: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1789b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1789b4:
    // 0x1789b4: 0x8f828414  lw          $v0, -0x7BEC($gp)
    ctx->pc = 0x1789b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935572)));
label_1789b8:
    // 0x1789b8: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1789b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
label_1789bc:
    // 0x1789bc: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x1789bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_1789c0:
    // 0x1789c0: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x1789c0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1789c4:
    // 0x1789c4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_1789c8:
    if (ctx->pc == 0x1789C8u) {
        ctx->pc = 0x1789C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1789C4u;
        // 0x1789c8: 0x858821  addu        $s1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1789CCu;
        goto label_1789cc;
    }
    ctx->pc = 0x1789C4u;
    {
        const bool branch_taken_0x1789c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1789C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1789C4u;
        // 0x1789c8: 0x858821  addu        $s1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1789c4) {
            ctx->pc = 0x1789D8u;
            goto label_1789d8;
        }
    }
    ctx->pc = 0x1789CCu;
label_1789cc:
    // 0x1789cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1789ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1789d0:
    // 0x1789d0: 0xc05e290  jal         func_178A40
label_1789d4:
    if (ctx->pc == 0x1789D4u) {
        ctx->pc = 0x1789D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1789D0u;
        // 0x1789d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1789D8u;
        goto label_1789d8;
    }
    ctx->pc = 0x1789D0u;
    SET_GPR_U32(ctx, 31, 0x1789D8u);
    ctx->pc = 0x1789D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1789D0u;
    // 0x1789d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178A40u;
    goto label_178a40;
    ctx->pc = 0x1789D8u;
label_1789d8:
    // 0x1789d8: 0xc05f538  jal         func_17D4E0
label_1789dc:
    if (ctx->pc == 0x1789DCu) {
        ctx->pc = 0x1789DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1789D8u;
        // 0x1789dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1789E0u;
        goto label_1789e0;
    }
    ctx->pc = 0x1789D8u;
    SET_GPR_U32(ctx, 31, 0x1789E0u);
    ctx->pc = 0x1789DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1789D8u;
    // 0x1789dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D4E0u;
    { ctx->pc = 0x17d4e0; return; }
    ctx->pc = 0x1789E0u;
label_1789e0:
    // 0x1789e0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1789e4:
    if (ctx->pc == 0x1789E4u) {
        ctx->pc = 0x1789E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1789E0u;
        // 0x1789e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1789E8u;
        goto label_1789e8;
    }
    ctx->pc = 0x1789E0u;
    {
        const bool branch_taken_0x1789e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1789E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1789E0u;
        // 0x1789e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1789e0) {
            ctx->pc = 0x178A28u;
            goto label_178a28;
        }
    }
    ctx->pc = 0x1789E8u;
label_1789e8:
    // 0x1789e8: 0xc040058  jal         func_100160
label_1789ec:
    if (ctx->pc == 0x1789ECu) {
        ctx->pc = 0x1789F0u;
        goto label_1789f0;
    }
    ctx->pc = 0x1789E8u;
    SET_GPR_U32(ctx, 31, 0x1789F0u);
    ctx->pc = 0x100160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100160u, 0x1789E8u, 0x1789F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1789F0u;
label_1789f0:
    // 0x1789f0: 0xc05eac8  jal         func_17AB20
label_1789f4:
    if (ctx->pc == 0x1789F4u) {
        ctx->pc = 0x1789F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1789F0u;
        // 0x1789f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1789F8u;
        goto label_1789f8;
    }
    ctx->pc = 0x1789F0u;
    SET_GPR_U32(ctx, 31, 0x1789F8u);
    ctx->pc = 0x1789F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1789F0u;
    // 0x1789f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AB20u;
    { ctx->pc = 0x17ab20; return; }
    ctx->pc = 0x1789F8u;
label_1789f8:
    // 0x1789f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1789f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1789fc:
    // 0x1789fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1789fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_178a00:
    // 0x178a00: 0xc05eaf0  jal         func_17ABC0
label_178a04:
    if (ctx->pc == 0x178A04u) {
        ctx->pc = 0x178A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178A00u;
        // 0x178a04: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178A08u;
        goto label_178a08;
    }
    ctx->pc = 0x178A00u;
    SET_GPR_U32(ctx, 31, 0x178A08u);
    ctx->pc = 0x178A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178A00u;
    // 0x178a04: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ABC0u;
    { ctx->pc = 0x17abc0; return; }
    ctx->pc = 0x178A08u;
label_178a08:
    // 0x178a08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x178a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_178a0c:
    // 0x178a0c: 0xc05ea7c  jal         func_17A9F0
label_178a10:
    if (ctx->pc == 0x178A10u) {
        ctx->pc = 0x178A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178A0Cu;
        // 0x178a10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178A14u;
        goto label_178a14;
    }
    ctx->pc = 0x178A0Cu;
    SET_GPR_U32(ctx, 31, 0x178A14u);
    ctx->pc = 0x178A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178A0Cu;
    // 0x178a10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A9F0u;
    { ctx->pc = 0x17a9f0; return; }
    ctx->pc = 0x178A14u;
label_178a14:
    // 0x178a14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x178a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_178a18:
    // 0x178a18: 0xc05ee2c  jal         func_17B8B0
label_178a1c:
    if (ctx->pc == 0x178A1Cu) {
        ctx->pc = 0x178A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178A18u;
        // 0x178a1c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178A20u;
        goto label_178a20;
    }
    ctx->pc = 0x178A18u;
    SET_GPR_U32(ctx, 31, 0x178A20u);
    ctx->pc = 0x178A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178A18u;
    // 0x178a1c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B8B0u;
    { ctx->pc = 0x17b8b0; return; }
    ctx->pc = 0x178A20u;
label_178a20:
    // 0x178a20: 0xc05f504  jal         func_17D410
label_178a24:
    if (ctx->pc == 0x178A24u) {
        ctx->pc = 0x178A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178A20u;
        // 0x178a24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178A28u;
        goto label_178a28;
    }
    ctx->pc = 0x178A20u;
    SET_GPR_U32(ctx, 31, 0x178A28u);
    ctx->pc = 0x178A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178A20u;
    // 0x178a24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D410u;
    { ctx->pc = 0x17d410; return; }
    ctx->pc = 0x178A28u;
label_178a28:
    // 0x178a28: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x178a28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_178a2c:
    // 0x178a2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x178a2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_178a30:
    // 0x178a30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x178a30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_178a34:
    // 0x178a34: 0x3e00008  jr          $ra
label_178a38:
    if (ctx->pc == 0x178A38u) {
        ctx->pc = 0x178A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178A34u;
        // 0x178a38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178A3Cu;
        goto label_178a3c;
    }
    ctx->pc = 0x178A34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178A34u;
        // 0x178a38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178A34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178A3Cu;
label_178a3c:
    // 0x178a3c: 0x0  nop
    ctx->pc = 0x178a3cu;
    // NOP
label_178a40:
    // 0x178a40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x178a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_178a44:
    // 0x178a44: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x178a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_178a48:
    // 0x178a48: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x178a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_178a4c:
    // 0x178a4c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x178a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_178a50:
    // 0x178a50: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x178a50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_178a54:
    // 0x178a54: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x178a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_178a58:
    // 0x178a58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x178a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_178a5c:
    // 0x178a5c: 0x8f838750  lw          $v1, -0x78B0($gp)
    ctx->pc = 0x178a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936400)));
label_178a60:
    // 0x178a60: 0x2c610010  sltiu       $at, $v1, 0x10
    ctx->pc = 0x178a60u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_178a64:
    // 0x178a64: 0x10200062  beqz        $at, . + 4 + (0x62 << 2)
label_178a68:
    if (ctx->pc == 0x178A68u) {
        ctx->pc = 0x178A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178A64u;
        // 0x178a68: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178A6Cu;
        goto label_178a6c;
    }
    ctx->pc = 0x178A64u;
    {
        const bool branch_taken_0x178a64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x178A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178A64u;
        // 0x178a68: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178a64) {
            ctx->pc = 0x178BF0u;
            { ctx->pc = 0x178bf0; return; }
        }
    }
    ctx->pc = 0x178A6Cu;
label_178a6c:
    // 0x178a6c: 0xc066c5c  jal         func_19B170
label_178a70:
    if (ctx->pc == 0x178A70u) {
        ctx->pc = 0x178A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178A6Cu;
        // 0x178a70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178A74u;
        goto label_178a74;
    }
    ctx->pc = 0x178A6Cu;
    SET_GPR_U32(ctx, 31, 0x178A74u);
    ctx->pc = 0x178A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178A6Cu;
    // 0x178a70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B170u;
    { ctx->pc = 0x19b170; return; }
    ctx->pc = 0x178A74u;
label_178a74:
    // 0x178a74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x178a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_178a78:
    // 0x178a78: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x178a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_178a7c:
    // 0x178a7c: 0xc066d10  jal         func_19B440
label_178a80:
    if (ctx->pc == 0x178A80u) {
        ctx->pc = 0x178A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178A7Cu;
        // 0x178a80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178A84u;
        goto label_178a84;
    }
    ctx->pc = 0x178A7Cu;
    SET_GPR_U32(ctx, 31, 0x178A84u);
    ctx->pc = 0x178A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178A7Cu;
    // 0x178a80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B440u;
    { ctx->pc = 0x19b440; return; }
    ctx->pc = 0x178A84u;
label_178a84:
    // 0x178a84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x178a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_178a88:
    // 0x178a88: 0xc066d30  jal         func_19B4C0
label_178a8c:
    if (ctx->pc == 0x178A8Cu) {
        ctx->pc = 0x178A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178A88u;
        // 0x178a8c: 0x3c051100  lui         $a1, 0x1100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4352 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178A90u;
        goto label_178a90;
    }
    ctx->pc = 0x178A88u;
    SET_GPR_U32(ctx, 31, 0x178A90u);
    ctx->pc = 0x178A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178A88u;
    // 0x178a8c: 0x3c051100  lui         $a1, 0x1100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4352 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B4C0u;
    { ctx->pc = 0x19b4c0; return; }
    ctx->pc = 0x178A90u;
label_178a90:
    // 0x178a90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x178a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_178a94:
    // 0x178a94: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x178a94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_178a98:
    // 0x178a98: 0xc066d10  jal         func_19B440
label_178a9c:
    if (ctx->pc == 0x178A9Cu) {
        ctx->pc = 0x178A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178A98u;
        // 0x178a9c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178AA0u;
        goto label_178aa0;
    }
    ctx->pc = 0x178A98u;
    SET_GPR_U32(ctx, 31, 0x178AA0u);
    ctx->pc = 0x178A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178A98u;
    // 0x178a9c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B440u;
    { ctx->pc = 0x19b440; return; }
    ctx->pc = 0x178AA0u;
label_178aa0:
    // 0x178aa0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x178aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_178aa4:
    // 0x178aa4: 0xc066ce8  jal         func_19B3A0
label_178aa8:
    if (ctx->pc == 0x178AA8u) {
        ctx->pc = 0x178AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178AA4u;
        // 0x178aa8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178AACu;
        goto label_178aac;
    }
    ctx->pc = 0x178AA4u;
    SET_GPR_U32(ctx, 31, 0x178AACu);
    ctx->pc = 0x178AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178AA4u;
    // 0x178aa8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B3A0u;
    { ctx->pc = 0x19b3a0; return; }
    ctx->pc = 0x178AACu;
label_178aac:
    // 0x178aac: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x178aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_178ab0:
    // 0x178ab0: 0x34038002  ori         $v1, $zero, 0x8002
    ctx->pc = 0x178ab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32770);
label_178ab4:
    // 0x178ab4: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x178ab4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_178ab8:
    // 0x178ab8: 0x27b00058  addiu       $s0, $sp, 0x58
    ctx->pc = 0x178ab8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_178abc:
    // 0x178abc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x178abcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_178ac0:
    // 0x178ac0: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x178ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_178ac4:
    // 0x178ac4: 0xffa30050  sd          $v1, 0x50($sp)
    ctx->pc = 0x178ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 3));
label_178ac8:
    // 0x178ac8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x178ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_178acc:
    // 0x178acc: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x178accu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
label_178ad0:
    // 0x178ad0: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x178ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_178ad4:
    // 0x178ad4: 0xc066d5c  jal         func_19B570
label_178ad8:
    if (ctx->pc == 0x178AD8u) {
        ctx->pc = 0x178AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178AD4u;
        // 0x178ad8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178ADCu;
        goto label_178adc;
    }
    ctx->pc = 0x178AD4u;
    SET_GPR_U32(ctx, 31, 0x178ADCu);
    ctx->pc = 0x178AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178AD4u;
    // 0x178ad8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B570u;
    { ctx->pc = 0x19b570; return; }
    ctx->pc = 0x178ADCu;
label_178adc:
    // 0x178adc: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x178adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_178ae0:
    // 0x178ae0: 0x24020043  addiu       $v0, $zero, 0x43
    ctx->pc = 0x178ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
label_178ae4:
    // 0x178ae4: 0xffa30050  sd          $v1, 0x50($sp)
    ctx->pc = 0x178ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 3));
label_178ae8:
    // 0x178ae8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x178ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_178aec:
    // 0x178aec: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x178aecu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
label_178af0:
    // 0x178af0: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x178af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_178af4:
    // 0x178af4: 0xc066d5c  jal         func_19B570
label_178af8:
    if (ctx->pc == 0x178AF8u) {
        ctx->pc = 0x178AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178AF4u;
        // 0x178af8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178AFCu;
        goto label_178afc;
    }
    ctx->pc = 0x178AF4u;
    SET_GPR_U32(ctx, 31, 0x178AFCu);
    ctx->pc = 0x178AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178AF4u;
    // 0x178af8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B570u;
    { ctx->pc = 0x19b570; return; }
    ctx->pc = 0x178AFCu;
label_178afc:
    // 0x178afc: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x178afcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
label_178b00:
    // 0x178b00: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x178b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_178b04:
    // 0x178b04: 0x34631ff9  ori         $v1, $v1, 0x1FF9
    ctx->pc = 0x178b04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8185);
label_178b08:
    // 0x178b08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x178b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_178b0c:
    // 0x178b0c: 0xffa30050  sd          $v1, 0x50($sp)
    ctx->pc = 0x178b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 3));
label_178b10:
    // 0x178b10: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x178b10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_178b14:
    // 0x178b14: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x178b14u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
label_178b18:
    // 0x178b18: 0xc066d5c  jal         func_19B570
label_178b1c:
    if (ctx->pc == 0x178B1Cu) {
        ctx->pc = 0x178B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178B18u;
        // 0x178b1c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178B20u;
        goto label_178b20;
    }
    ctx->pc = 0x178B18u;
    SET_GPR_U32(ctx, 31, 0x178B20u);
    ctx->pc = 0x178B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178B18u;
    // 0x178b1c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B570u;
    { ctx->pc = 0x19b570; return; }
    ctx->pc = 0x178B20u;
label_178b20:
    // 0x178b20: 0xc066cfe  jal         func_19B3F8
label_178b24:
    if (ctx->pc == 0x178B24u) {
        ctx->pc = 0x178B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178B20u;
        // 0x178b24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178B28u;
        goto label_178b28;
    }
    ctx->pc = 0x178B20u;
    SET_GPR_U32(ctx, 31, 0x178B28u);
    ctx->pc = 0x178B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178B20u;
    // 0x178b24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B3F8u;
    { ctx->pc = 0x19b3f8; return; }
    ctx->pc = 0x178B28u;
label_178b28:
    // 0x178b28: 0xc066c46  jal         func_19B118
label_178b2c:
    if (ctx->pc == 0x178B2Cu) {
        ctx->pc = 0x178B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178B28u;
        // 0x178b2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178B30u;
        goto label_178b30;
    }
    ctx->pc = 0x178B28u;
    SET_GPR_U32(ctx, 31, 0x178B30u);
    ctx->pc = 0x178B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178B28u;
    // 0x178b2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B118u;
    { ctx->pc = 0x19b118; return; }
    ctx->pc = 0x178B30u;
label_178b30:
    // 0x178b30: 0x8f928750  lw          $s2, -0x78B0($gp)
    ctx->pc = 0x178b30u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936400)));
label_178b34:
    // 0x178b34: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x178b34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_178b38:
    // 0x178b38: 0xafa3006c  sw          $v1, 0x6C($sp)
    ctx->pc = 0x178b38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 3));
label_178b3c:
    // 0x178b3c: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x178b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
label_178b40:
    // 0x178b40: 0x24841a50  addiu       $a0, $a0, 0x1A50
    ctx->pc = 0x178b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6736));
label_178b44:
    // 0x178b44: 0x1218c0  sll         $v1, $s2, 3
    ctx->pc = 0x178b44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_178b48:
    // 0x178b48: 0x128880  sll         $s1, $s2, 2
    ctx->pc = 0x178b48u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_178b4c:
    // 0x178b4c: 0x721823  subu        $v1, $v1, $s2
    ctx->pc = 0x178b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_178b50:
    // 0x178b50: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x178b50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_178b54:
    // 0x178b54: 0x721823  subu        $v1, $v1, $s2
    ctx->pc = 0x178b54u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_178b58:
    // 0x178b58: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x178b58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_178b5c:
    // 0x178b5c: 0x1000001d  b           . + 4 + (0x1D << 2)
label_178b60:
    if (ctx->pc == 0x178B60u) {
        ctx->pc = 0x178B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178B5Cu;
        // 0x178b60: 0x838021  addu        $s0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178B64u;
        goto label_178b64;
    }
    ctx->pc = 0x178B5Cu;
    {
        const bool branch_taken_0x178b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178B5Cu;
        // 0x178b60: 0x838021  addu        $s0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178b5c) {
            ctx->pc = 0x178BD4u;
            { ctx->pc = 0x178bd4; return; }
        }
    }
    ctx->pc = 0x178B64u;
label_178b64:
    // 0x178b64: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x178b64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_178b68:
    // 0x178b68: 0x24845230  addiu       $a0, $a0, 0x5230
    ctx->pc = 0x178b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21040));
label_178b6c:
    // 0x178b6c: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x178b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_178b70:
    // 0x178b70: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x178b70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_178b74:
    // 0x178b74: 0x8ca40090  lw          $a0, 0x90($a1)
    ctx->pc = 0x178b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 144)));
label_178b78:
    // 0x178b78: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x178b78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_178b7c:
    // 0x178b7c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x178b80u;
    return;
}

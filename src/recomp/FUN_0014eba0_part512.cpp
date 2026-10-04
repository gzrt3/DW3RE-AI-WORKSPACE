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


void FUN_0014eba0_part512(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x2483d0u: goto label_2483d0;
        case 0x2483d4u: goto label_2483d4;
        case 0x2483d8u: goto label_2483d8;
        case 0x2483dcu: goto label_2483dc;
        case 0x2483e0u: goto label_2483e0;
        case 0x2483e4u: goto label_2483e4;
        case 0x2483e8u: goto label_2483e8;
        case 0x2483ecu: goto label_2483ec;
        case 0x2483f0u: goto label_2483f0;
        case 0x2483f4u: goto label_2483f4;
        case 0x2483f8u: goto label_2483f8;
        case 0x2483fcu: goto label_2483fc;
        case 0x248400u: goto label_248400;
        case 0x248404u: goto label_248404;
        case 0x248408u: goto label_248408;
        case 0x24840cu: goto label_24840c;
        case 0x248410u: goto label_248410;
        case 0x248414u: goto label_248414;
        case 0x248418u: goto label_248418;
        case 0x24841cu: goto label_24841c;
        case 0x248420u: goto label_248420;
        case 0x248424u: goto label_248424;
        case 0x248428u: goto label_248428;
        case 0x24842cu: goto label_24842c;
        case 0x248430u: goto label_248430;
        case 0x248434u: goto label_248434;
        case 0x248438u: goto label_248438;
        case 0x24843cu: goto label_24843c;
        case 0x248440u: goto label_248440;
        case 0x248444u: goto label_248444;
        case 0x248448u: goto label_248448;
        case 0x24844cu: goto label_24844c;
        case 0x248450u: goto label_248450;
        case 0x248454u: goto label_248454;
        case 0x248458u: goto label_248458;
        case 0x24845cu: goto label_24845c;
        case 0x248460u: goto label_248460;
        case 0x248464u: goto label_248464;
        case 0x248468u: goto label_248468;
        case 0x24846cu: goto label_24846c;
        case 0x248470u: goto label_248470;
        case 0x248474u: goto label_248474;
        case 0x248478u: goto label_248478;
        case 0x24847cu: goto label_24847c;
        case 0x248480u: goto label_248480;
        case 0x248484u: goto label_248484;
        case 0x248488u: goto label_248488;
        case 0x24848cu: goto label_24848c;
        case 0x248490u: goto label_248490;
        case 0x248494u: goto label_248494;
        case 0x248498u: goto label_248498;
        case 0x24849cu: goto label_24849c;
        case 0x2484a0u: goto label_2484a0;
        case 0x2484a4u: goto label_2484a4;
        case 0x2484a8u: goto label_2484a8;
        case 0x2484acu: goto label_2484ac;
        case 0x2484b0u: goto label_2484b0;
        case 0x2484b4u: goto label_2484b4;
        case 0x2484b8u: goto label_2484b8;
        case 0x2484bcu: goto label_2484bc;
        case 0x2484c0u: goto label_2484c0;
        case 0x2484c4u: goto label_2484c4;
        case 0x2484c8u: goto label_2484c8;
        case 0x2484ccu: goto label_2484cc;
        case 0x2484d0u: goto label_2484d0;
        case 0x2484d4u: goto label_2484d4;
        case 0x2484d8u: goto label_2484d8;
        case 0x2484dcu: goto label_2484dc;
        case 0x2484e0u: goto label_2484e0;
        case 0x2484e4u: goto label_2484e4;
        case 0x2484e8u: goto label_2484e8;
        case 0x2484ecu: goto label_2484ec;
        case 0x2484f0u: goto label_2484f0;
        case 0x2484f4u: goto label_2484f4;
        case 0x2484f8u: goto label_2484f8;
        case 0x2484fcu: goto label_2484fc;
        case 0x248500u: goto label_248500;
        case 0x248504u: goto label_248504;
        case 0x248508u: goto label_248508;
        case 0x24850cu: goto label_24850c;
        case 0x248510u: goto label_248510;
        case 0x248514u: goto label_248514;
        case 0x248518u: goto label_248518;
        case 0x24851cu: goto label_24851c;
        case 0x248520u: goto label_248520;
        case 0x248524u: goto label_248524;
        case 0x248528u: goto label_248528;
        case 0x24852cu: goto label_24852c;
        case 0x248530u: goto label_248530;
        case 0x248534u: goto label_248534;
        case 0x248538u: goto label_248538;
        case 0x24853cu: goto label_24853c;
        case 0x248540u: goto label_248540;
        case 0x248544u: goto label_248544;
        case 0x248548u: goto label_248548;
        case 0x24854cu: goto label_24854c;
        case 0x248550u: goto label_248550;
        case 0x248554u: goto label_248554;
        case 0x248558u: goto label_248558;
        case 0x24855cu: goto label_24855c;
        case 0x248560u: goto label_248560;
        case 0x248564u: goto label_248564;
        case 0x248568u: goto label_248568;
        case 0x24856cu: goto label_24856c;
        case 0x248570u: goto label_248570;
        case 0x248574u: goto label_248574;
        case 0x248578u: goto label_248578;
        case 0x24857cu: goto label_24857c;
        case 0x248580u: goto label_248580;
        case 0x248584u: goto label_248584;
        case 0x248588u: goto label_248588;
        case 0x24858cu: goto label_24858c;
        case 0x248590u: goto label_248590;
        case 0x248594u: goto label_248594;
        case 0x248598u: goto label_248598;
        case 0x24859cu: goto label_24859c;
        case 0x2485a0u: goto label_2485a0;
        case 0x2485a4u: goto label_2485a4;
        case 0x2485a8u: goto label_2485a8;
        case 0x2485acu: goto label_2485ac;
        case 0x2485b0u: goto label_2485b0;
        case 0x2485b4u: goto label_2485b4;
        case 0x2485b8u: goto label_2485b8;
        case 0x2485bcu: goto label_2485bc;
        case 0x2485c0u: goto label_2485c0;
        case 0x2485c4u: goto label_2485c4;
        case 0x2485c8u: goto label_2485c8;
        case 0x2485ccu: goto label_2485cc;
        case 0x2485d0u: goto label_2485d0;
        case 0x2485d4u: goto label_2485d4;
        case 0x2485d8u: goto label_2485d8;
        case 0x2485dcu: goto label_2485dc;
        case 0x2485e0u: goto label_2485e0;
        case 0x2485e4u: goto label_2485e4;
        case 0x2485e8u: goto label_2485e8;
        case 0x2485ecu: goto label_2485ec;
        case 0x2485f0u: goto label_2485f0;
        case 0x2485f4u: goto label_2485f4;
        case 0x2485f8u: goto label_2485f8;
        case 0x2485fcu: goto label_2485fc;
        case 0x248600u: goto label_248600;
        case 0x248604u: goto label_248604;
        case 0x248608u: goto label_248608;
        case 0x24860cu: goto label_24860c;
        case 0x248610u: goto label_248610;
        case 0x248614u: goto label_248614;
        case 0x248618u: goto label_248618;
        case 0x24861cu: goto label_24861c;
        case 0x248620u: goto label_248620;
        case 0x248624u: goto label_248624;
        case 0x248628u: goto label_248628;
        case 0x24862cu: goto label_24862c;
        case 0x248630u: goto label_248630;
        case 0x248634u: goto label_248634;
        case 0x248638u: goto label_248638;
        case 0x24863cu: goto label_24863c;
        case 0x248640u: goto label_248640;
        case 0x248644u: goto label_248644;
        case 0x248648u: goto label_248648;
        case 0x24864cu: goto label_24864c;
        case 0x248650u: goto label_248650;
        case 0x248654u: goto label_248654;
        case 0x248658u: goto label_248658;
        case 0x24865cu: goto label_24865c;
        case 0x248660u: goto label_248660;
        case 0x248664u: goto label_248664;
        case 0x248668u: goto label_248668;
        case 0x24866cu: goto label_24866c;
        case 0x248670u: goto label_248670;
        case 0x248674u: goto label_248674;
        case 0x248678u: goto label_248678;
        case 0x24867cu: goto label_24867c;
        case 0x248680u: goto label_248680;
        case 0x248684u: goto label_248684;
        case 0x248688u: goto label_248688;
        case 0x24868cu: goto label_24868c;
        case 0x248690u: goto label_248690;
        case 0x248694u: goto label_248694;
        case 0x248698u: goto label_248698;
        case 0x24869cu: goto label_24869c;
        case 0x2486a0u: goto label_2486a0;
        case 0x2486a4u: goto label_2486a4;
        case 0x2486a8u: goto label_2486a8;
        case 0x2486acu: goto label_2486ac;
        case 0x2486b0u: goto label_2486b0;
        case 0x2486b4u: goto label_2486b4;
        case 0x2486b8u: goto label_2486b8;
        case 0x2486bcu: goto label_2486bc;
        case 0x2486c0u: goto label_2486c0;
        case 0x2486c4u: goto label_2486c4;
        case 0x2486c8u: goto label_2486c8;
        case 0x2486ccu: goto label_2486cc;
        case 0x2486d0u: goto label_2486d0;
        case 0x2486d4u: goto label_2486d4;
        case 0x2486d8u: goto label_2486d8;
        case 0x2486dcu: goto label_2486dc;
        case 0x2486e0u: goto label_2486e0;
        case 0x2486e4u: goto label_2486e4;
        case 0x2486e8u: goto label_2486e8;
        case 0x2486ecu: goto label_2486ec;
        case 0x2486f0u: goto label_2486f0;
        case 0x2486f4u: goto label_2486f4;
        case 0x2486f8u: goto label_2486f8;
        case 0x2486fcu: goto label_2486fc;
        case 0x248700u: goto label_248700;
        case 0x248704u: goto label_248704;
        case 0x248708u: goto label_248708;
        case 0x24870cu: goto label_24870c;
        case 0x248710u: goto label_248710;
        case 0x248714u: goto label_248714;
        case 0x248718u: goto label_248718;
        case 0x24871cu: goto label_24871c;
        case 0x248720u: goto label_248720;
        case 0x248724u: goto label_248724;
        case 0x248728u: goto label_248728;
        case 0x24872cu: goto label_24872c;
        case 0x248730u: goto label_248730;
        case 0x248734u: goto label_248734;
        case 0x248738u: goto label_248738;
        case 0x24873cu: goto label_24873c;
        case 0x248740u: goto label_248740;
        case 0x248744u: goto label_248744;
        case 0x248748u: goto label_248748;
        case 0x24874cu: goto label_24874c;
        case 0x248750u: goto label_248750;
        case 0x248754u: goto label_248754;
        case 0x248758u: goto label_248758;
        case 0x24875cu: goto label_24875c;
        case 0x248760u: goto label_248760;
        case 0x248764u: goto label_248764;
        case 0x248768u: goto label_248768;
        case 0x24876cu: goto label_24876c;
        case 0x248770u: goto label_248770;
        case 0x248774u: goto label_248774;
        case 0x248778u: goto label_248778;
        case 0x24877cu: goto label_24877c;
        case 0x248780u: goto label_248780;
        case 0x248784u: goto label_248784;
        case 0x248788u: goto label_248788;
        case 0x24878cu: goto label_24878c;
        case 0x248790u: goto label_248790;
        case 0x248794u: goto label_248794;
        case 0x248798u: goto label_248798;
        case 0x24879cu: goto label_24879c;
        case 0x2487a0u: goto label_2487a0;
        case 0x2487a4u: goto label_2487a4;
        case 0x2487a8u: goto label_2487a8;
        case 0x2487acu: goto label_2487ac;
        case 0x2487b0u: goto label_2487b0;
        case 0x2487b4u: goto label_2487b4;
        case 0x2487b8u: goto label_2487b8;
        case 0x2487bcu: goto label_2487bc;
        case 0x2487c0u: goto label_2487c0;
        case 0x2487c4u: goto label_2487c4;
        case 0x2487c8u: goto label_2487c8;
        case 0x2487ccu: goto label_2487cc;
        case 0x2487d0u: goto label_2487d0;
        case 0x2487d4u: goto label_2487d4;
        case 0x2487d8u: goto label_2487d8;
        case 0x2487dcu: goto label_2487dc;
        case 0x2487e0u: goto label_2487e0;
        case 0x2487e4u: goto label_2487e4;
        case 0x2487e8u: goto label_2487e8;
        case 0x2487ecu: goto label_2487ec;
        case 0x2487f0u: goto label_2487f0;
        case 0x2487f4u: goto label_2487f4;
        case 0x2487f8u: goto label_2487f8;
        case 0x2487fcu: goto label_2487fc;
        case 0x248800u: goto label_248800;
        case 0x248804u: goto label_248804;
        case 0x248808u: goto label_248808;
        case 0x24880cu: goto label_24880c;
        case 0x248810u: goto label_248810;
        case 0x248814u: goto label_248814;
        case 0x248818u: goto label_248818;
        case 0x24881cu: goto label_24881c;
        case 0x248820u: goto label_248820;
        case 0x248824u: goto label_248824;
        case 0x248828u: goto label_248828;
        case 0x24882cu: goto label_24882c;
        case 0x248830u: goto label_248830;
        case 0x248834u: goto label_248834;
        case 0x248838u: goto label_248838;
        case 0x24883cu: goto label_24883c;
        case 0x248840u: goto label_248840;
        case 0x248844u: goto label_248844;
        case 0x248848u: goto label_248848;
        case 0x24884cu: goto label_24884c;
        case 0x248850u: goto label_248850;
        case 0x248854u: goto label_248854;
        case 0x248858u: goto label_248858;
        case 0x24885cu: goto label_24885c;
        case 0x248860u: goto label_248860;
        case 0x248864u: goto label_248864;
        case 0x248868u: goto label_248868;
        case 0x24886cu: goto label_24886c;
        case 0x248870u: goto label_248870;
        case 0x248874u: goto label_248874;
        case 0x248878u: goto label_248878;
        case 0x24887cu: goto label_24887c;
        case 0x248880u: goto label_248880;
        case 0x248884u: goto label_248884;
        case 0x248888u: goto label_248888;
        case 0x24888cu: goto label_24888c;
        case 0x248890u: goto label_248890;
        case 0x248894u: goto label_248894;
        case 0x248898u: goto label_248898;
        case 0x24889cu: goto label_24889c;
        case 0x2488a0u: goto label_2488a0;
        case 0x2488a4u: goto label_2488a4;
        case 0x2488a8u: goto label_2488a8;
        case 0x2488acu: goto label_2488ac;
        case 0x2488b0u: goto label_2488b0;
        case 0x2488b4u: goto label_2488b4;
        case 0x2488b8u: goto label_2488b8;
        case 0x2488bcu: goto label_2488bc;
        case 0x2488c0u: goto label_2488c0;
        case 0x2488c4u: goto label_2488c4;
        case 0x2488c8u: goto label_2488c8;
        case 0x2488ccu: goto label_2488cc;
        case 0x2488d0u: goto label_2488d0;
        case 0x2488d4u: goto label_2488d4;
        case 0x2488d8u: goto label_2488d8;
        case 0x2488dcu: goto label_2488dc;
        case 0x2488e0u: goto label_2488e0;
        case 0x2488e4u: goto label_2488e4;
        case 0x2488e8u: goto label_2488e8;
        case 0x2488ecu: goto label_2488ec;
        case 0x2488f0u: goto label_2488f0;
        case 0x2488f4u: goto label_2488f4;
        case 0x2488f8u: goto label_2488f8;
        case 0x2488fcu: goto label_2488fc;
        case 0x248900u: goto label_248900;
        case 0x248904u: goto label_248904;
        case 0x248908u: goto label_248908;
        case 0x24890cu: goto label_24890c;
        case 0x248910u: goto label_248910;
        case 0x248914u: goto label_248914;
        case 0x248918u: goto label_248918;
        case 0x24891cu: goto label_24891c;
        case 0x248920u: goto label_248920;
        case 0x248924u: goto label_248924;
        case 0x248928u: goto label_248928;
        case 0x24892cu: goto label_24892c;
        case 0x248930u: goto label_248930;
        case 0x248934u: goto label_248934;
        case 0x248938u: goto label_248938;
        case 0x24893cu: goto label_24893c;
        case 0x248940u: goto label_248940;
        case 0x248944u: goto label_248944;
        case 0x248948u: goto label_248948;
        case 0x24894cu: goto label_24894c;
        case 0x248950u: goto label_248950;
        case 0x248954u: goto label_248954;
        case 0x248958u: goto label_248958;
        case 0x24895cu: goto label_24895c;
        case 0x248960u: goto label_248960;
        case 0x248964u: goto label_248964;
        case 0x248968u: goto label_248968;
        case 0x24896cu: goto label_24896c;
        case 0x248970u: goto label_248970;
        case 0x248974u: goto label_248974;
        case 0x248978u: goto label_248978;
        case 0x24897cu: goto label_24897c;
        case 0x248980u: goto label_248980;
        case 0x248984u: goto label_248984;
        case 0x248988u: goto label_248988;
        case 0x24898cu: goto label_24898c;
        case 0x248990u: goto label_248990;
        case 0x248994u: goto label_248994;
        case 0x248998u: goto label_248998;
        case 0x24899cu: goto label_24899c;
        case 0x2489a0u: goto label_2489a0;
        case 0x2489a4u: goto label_2489a4;
        case 0x2489a8u: goto label_2489a8;
        case 0x2489acu: goto label_2489ac;
        case 0x2489b0u: goto label_2489b0;
        case 0x2489b4u: goto label_2489b4;
        case 0x2489b8u: goto label_2489b8;
        case 0x2489bcu: goto label_2489bc;
        case 0x2489c0u: goto label_2489c0;
        case 0x2489c4u: goto label_2489c4;
        case 0x2489c8u: goto label_2489c8;
        case 0x2489ccu: goto label_2489cc;
        case 0x2489d0u: goto label_2489d0;
        case 0x2489d4u: goto label_2489d4;
        case 0x2489d8u: goto label_2489d8;
        case 0x2489dcu: goto label_2489dc;
        case 0x2489e0u: goto label_2489e0;
        case 0x2489e4u: goto label_2489e4;
        case 0x2489e8u: goto label_2489e8;
        case 0x2489ecu: goto label_2489ec;
        case 0x2489f0u: goto label_2489f0;
        case 0x2489f4u: goto label_2489f4;
        case 0x2489f8u: goto label_2489f8;
        case 0x2489fcu: goto label_2489fc;
        case 0x248a00u: goto label_248a00;
        case 0x248a04u: goto label_248a04;
        case 0x248a08u: goto label_248a08;
        case 0x248a0cu: goto label_248a0c;
        case 0x248a10u: goto label_248a10;
        case 0x248a14u: goto label_248a14;
        case 0x248a18u: goto label_248a18;
        case 0x248a1cu: goto label_248a1c;
        case 0x248a20u: goto label_248a20;
        case 0x248a24u: goto label_248a24;
        case 0x248a28u: goto label_248a28;
        case 0x248a2cu: goto label_248a2c;
        case 0x248a30u: goto label_248a30;
        case 0x248a34u: goto label_248a34;
        case 0x248a38u: goto label_248a38;
        case 0x248a3cu: goto label_248a3c;
        case 0x248a40u: goto label_248a40;
        case 0x248a44u: goto label_248a44;
        case 0x248a48u: goto label_248a48;
        case 0x248a4cu: goto label_248a4c;
        case 0x248a50u: goto label_248a50;
        case 0x248a54u: goto label_248a54;
        case 0x248a58u: goto label_248a58;
        case 0x248a5cu: goto label_248a5c;
        case 0x248a60u: goto label_248a60;
        case 0x248a64u: goto label_248a64;
        case 0x248a68u: goto label_248a68;
        case 0x248a6cu: goto label_248a6c;
        case 0x248a70u: goto label_248a70;
        case 0x248a74u: goto label_248a74;
        case 0x248a78u: goto label_248a78;
        case 0x248a7cu: goto label_248a7c;
        case 0x248a80u: goto label_248a80;
        case 0x248a84u: goto label_248a84;
        case 0x248a88u: goto label_248a88;
        case 0x248a8cu: goto label_248a8c;
        case 0x248a90u: goto label_248a90;
        case 0x248a94u: goto label_248a94;
        case 0x248a98u: goto label_248a98;
        case 0x248a9cu: goto label_248a9c;
        case 0x248aa0u: goto label_248aa0;
        case 0x248aa4u: goto label_248aa4;
        case 0x248aa8u: goto label_248aa8;
        case 0x248aacu: goto label_248aac;
        case 0x248ab0u: goto label_248ab0;
        case 0x248ab4u: goto label_248ab4;
        case 0x248ab8u: goto label_248ab8;
        case 0x248abcu: goto label_248abc;
        case 0x248ac0u: goto label_248ac0;
        case 0x248ac4u: goto label_248ac4;
        case 0x248ac8u: goto label_248ac8;
        case 0x248accu: goto label_248acc;
        case 0x248ad0u: goto label_248ad0;
        case 0x248ad4u: goto label_248ad4;
        case 0x248ad8u: goto label_248ad8;
        case 0x248adcu: goto label_248adc;
        case 0x248ae0u: goto label_248ae0;
        case 0x248ae4u: goto label_248ae4;
        case 0x248ae8u: goto label_248ae8;
        case 0x248aecu: goto label_248aec;
        case 0x248af0u: goto label_248af0;
        case 0x248af4u: goto label_248af4;
        case 0x248af8u: goto label_248af8;
        case 0x248afcu: goto label_248afc;
        case 0x248b00u: goto label_248b00;
        case 0x248b04u: goto label_248b04;
        case 0x248b08u: goto label_248b08;
        case 0x248b0cu: goto label_248b0c;
        case 0x248b10u: goto label_248b10;
        case 0x248b14u: goto label_248b14;
        case 0x248b18u: goto label_248b18;
        case 0x248b1cu: goto label_248b1c;
        case 0x248b20u: goto label_248b20;
        case 0x248b24u: goto label_248b24;
        case 0x248b28u: goto label_248b28;
        case 0x248b2cu: goto label_248b2c;
        case 0x248b30u: goto label_248b30;
        case 0x248b34u: goto label_248b34;
        case 0x248b38u: goto label_248b38;
        case 0x248b3cu: goto label_248b3c;
        case 0x248b40u: goto label_248b40;
        case 0x248b44u: goto label_248b44;
        case 0x248b48u: goto label_248b48;
        case 0x248b4cu: goto label_248b4c;
        case 0x248b50u: goto label_248b50;
        case 0x248b54u: goto label_248b54;
        case 0x248b58u: goto label_248b58;
        case 0x248b5cu: goto label_248b5c;
        case 0x248b60u: goto label_248b60;
        case 0x248b64u: goto label_248b64;
        case 0x248b68u: goto label_248b68;
        case 0x248b6cu: goto label_248b6c;
        case 0x248b70u: goto label_248b70;
        case 0x248b74u: goto label_248b74;
        case 0x248b78u: goto label_248b78;
        case 0x248b7cu: goto label_248b7c;
        case 0x248b80u: goto label_248b80;
        case 0x248b84u: goto label_248b84;
        case 0x248b88u: goto label_248b88;
        case 0x248b8cu: goto label_248b8c;
        case 0x248b90u: goto label_248b90;
        case 0x248b94u: goto label_248b94;
        case 0x248b98u: goto label_248b98;
        case 0x248b9cu: goto label_248b9c;
        default: return;
    }

label_2483d0:
    // 0x2483d0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2483d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2483d4:
    // 0x2483d4: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x2483d4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2483d8:
    // 0x2483d8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2483d8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2483dc:
    // 0x2483dc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2483dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2483e0:
    // 0x2483e0: 0xc4810044  lwc1        $f1, 0x44($a0)
    ctx->pc = 0x2483e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2483e4:
    // 0x2483e4: 0xc4d50030  lwc1        $f21, 0x30($a2)
    ctx->pc = 0x2483e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2483e8:
    // 0x2483e8: 0x46150836  c.le.s      $f1, $f21
    ctx->pc = 0x2483e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2483ec:
    // 0x2483ec: 0x0  nop
    ctx->pc = 0x2483ecu;
    // NOP
label_2483f0:
    // 0x2483f0: 0x450000a2  bc1f        . + 4 + (0xA2 << 2)
label_2483f4:
    if (ctx->pc == 0x2483F4u) {
        ctx->pc = 0x2483F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2483F0u;
        // 0x2483f4: 0x46006586  mov.s       $f22, $f12 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2483F8u;
        goto label_2483f8;
    }
    ctx->pc = 0x2483F0u;
    {
        const bool branch_taken_0x2483f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2483F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2483F0u;
        // 0x2483f4: 0x46006586  mov.s       $f22, $f12 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2483f0) {
            ctx->pc = 0x24867Cu;
            goto label_24867c;
        }
    }
    ctx->pc = 0x2483F8u;
label_2483f8:
    // 0x2483f8: 0xc6600048  lwc1        $f0, 0x48($s3)
    ctx->pc = 0x2483f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2483fc:
    // 0x2483fc: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x2483fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_248400:
    // 0x248400: 0x0  nop
    ctx->pc = 0x248400u;
    // NOP
label_248404:
    // 0x248404: 0x4500009d  bc1f        . + 4 + (0x9D << 2)
label_248408:
    if (ctx->pc == 0x248408u) {
        ctx->pc = 0x248408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248404u;
        // 0x248408: 0x4601a881  sub.s       $f2, $f21, $f1 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[21], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24840Cu;
        goto label_24840c;
    }
    ctx->pc = 0x248404u;
    {
        const bool branch_taken_0x248404 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x248408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248404u;
        // 0x248408: 0x4601a881  sub.s       $f2, $f21, $f1 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[21], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x248404) {
            ctx->pc = 0x24867Cu;
            goto label_24867c;
        }
    }
    ctx->pc = 0x24840Cu;
label_24840c:
    // 0x24840c: 0x3c03c040  lui         $v1, 0xC040
    ctx->pc = 0x24840cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49216 << 16));
label_248410:
    // 0x248410: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x248410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_248414:
    // 0x248414: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x248414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_248418:
    // 0x248418: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x248418u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_24841c:
    // 0x24841c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24841cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_248420:
    // 0x248420: 0x0  nop
    ctx->pc = 0x248420u;
    // NOP
label_248424:
    // 0x248424: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x248424u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_248428:
    // 0x248428: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x248428u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
label_24842c:
    // 0x24842c: 0x0  nop
    ctx->pc = 0x24842cu;
    // NOP
label_248430:
    // 0x248430: 0x0  nop
    ctx->pc = 0x248430u;
    // NOP
label_248434:
    // 0x248434: 0xc06d524  jal         func_1B5490
label_248438:
    if (ctx->pc == 0x248438u) {
        ctx->pc = 0x24843Cu;
        goto label_24843c;
    }
    ctx->pc = 0x248434u;
    SET_GPR_U32(ctx, 31, 0x24843Cu);
    ctx->pc = 0x1B5490u;
    { ctx->pc = 0x1b5490; return; }
    ctx->pc = 0x24843Cu;
label_24843c:
    // 0x24843c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x24843cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_248440:
    // 0x248440: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x248440u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_248444:
    // 0x248444: 0xc6620040  lwc1        $f2, 0x40($s3)
    ctx->pc = 0x248444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_248448:
    // 0x248448: 0x46002501  sub.s       $f20, $f4, $f0
    ctx->pc = 0x248448u;
    ctx->f[20] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_24844c:
    // 0x24844c: 0xc6630048  lwc1        $f3, 0x48($s3)
    ctx->pc = 0x24844cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_248450:
    // 0x248450: 0x4602a002  mul.s       $f0, $f20, $f2
    ctx->pc = 0x248450u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
label_248454:
    // 0x248454: 0x4600b082  mul.s       $f2, $f22, $f0
    ctx->pc = 0x248454u;
    ctx->f[2] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
label_248458:
    // 0x248458: 0x46151801  sub.s       $f0, $f3, $f21
    ctx->pc = 0x248458u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[21]);
label_24845c:
    // 0x24845c: 0xc6610044  lwc1        $f1, 0x44($s3)
    ctx->pc = 0x24845cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_248460:
    // 0x248460: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x248460u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_248464:
    // 0x248464: 0x46011801  sub.s       $f0, $f3, $f1
    ctx->pc = 0x248464u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_248468:
    // 0x248468: 0x46001543  div.s       $f21, $f2, $f0
    ctx->pc = 0x248468u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[21] = ctx->f[2] / ctx->f[0];
label_24846c:
    // 0x24846c: 0x0  nop
    ctx->pc = 0x24846cu;
    // NOP
label_248470:
    // 0x248470: 0x0  nop
    ctx->pc = 0x248470u;
    // NOP
label_248474:
    // 0x248474: 0xc06d452  jal         func_1B5148
label_248478:
    if (ctx->pc == 0x248478u) {
        ctx->pc = 0x248478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248474u;
        // 0x248478: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24847Cu;
        goto label_24847c;
    }
    ctx->pc = 0x248474u;
    SET_GPR_U32(ctx, 31, 0x24847Cu);
    ctx->pc = 0x248478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248474u;
    // 0x248478: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5148u;
    { ctx->pc = 0x1b5148; return; }
    ctx->pc = 0x24847Cu;
label_24847c:
    // 0x24847c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x24847cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_248480:
    // 0x248480: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x248480u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_248484:
    // 0x248484: 0x0  nop
    ctx->pc = 0x248484u;
    // NOP
label_248488:
    // 0x248488: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x248488u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24848c:
    // 0x24848c: 0x0  nop
    ctx->pc = 0x24848cu;
    // NOP
label_248490:
    // 0x248490: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_248494:
    if (ctx->pc == 0x248494u) {
        ctx->pc = 0x248498u;
        goto label_248498;
    }
    ctx->pc = 0x248490u;
    {
        const bool branch_taken_0x248490 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x248490) {
            ctx->pc = 0x2484A8u;
            goto label_2484a8;
        }
    }
    ctx->pc = 0x248498u;
label_248498:
    // 0x248498: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x248498u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_24849c:
    // 0x24849c: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x24849cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_2484a0:
    // 0x2484a0: 0x10000007  b           . + 4 + (0x7 << 2)
label_2484a4:
    if (ctx->pc == 0x2484A4u) {
        ctx->pc = 0x2484A8u;
        goto label_2484a8;
    }
    ctx->pc = 0x2484A0u;
    {
        const bool branch_taken_0x2484a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2484a0) {
            ctx->pc = 0x2484C0u;
            goto label_2484c0;
        }
    }
    ctx->pc = 0x2484A8u;
label_2484a8:
    // 0x2484a8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2484a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2484ac:
    // 0x2484ac: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2484acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_2484b0:
    // 0x2484b0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2484b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2484b4:
    // 0x2484b4: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x2484b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_2484b8:
    // 0x2484b8: 0x0  nop
    ctx->pc = 0x2484b8u;
    // NOP
label_2484bc:
    // 0x2484bc: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x2484bcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_2484c0:
    // 0x2484c0: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
label_2484c4:
    if (ctx->pc == 0x2484C4u) {
        ctx->pc = 0x2484C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2484C0u;
        // 0x2484c4: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2484C8u;
        goto label_2484c8;
    }
    ctx->pc = 0x2484C0u;
    {
        const bool branch_taken_0x2484c0 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2484C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2484C0u;
        // 0x2484c4: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2484c0) {
            ctx->pc = 0x2484D4u;
            goto label_2484d4;
        }
    }
    ctx->pc = 0x2484C8u;
label_2484c8:
    // 0x2484c8: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x2484c8u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2484cc:
    // 0x2484cc: 0x10000007  b           . + 4 + (0x7 << 2)
label_2484d0:
    if (ctx->pc == 0x2484D0u) {
        ctx->pc = 0x2484D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2484CCu;
        // 0x2484d0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2484D4u;
        goto label_2484d4;
    }
    ctx->pc = 0x2484CCu;
    {
        const bool branch_taken_0x2484cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2484D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2484CCu;
        // 0x2484d0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2484cc) {
            ctx->pc = 0x2484ECu;
            goto label_2484ec;
        }
    }
    ctx->pc = 0x2484D4u;
label_2484d4:
    // 0x2484d4: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x2484d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_2484d8:
    // 0x2484d8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2484d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2484dc:
    // 0x2484dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2484dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2484e0:
    // 0x2484e0: 0x0  nop
    ctx->pc = 0x2484e0u;
    // NOP
label_2484e4:
    // 0x2484e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2484e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2484e8:
    // 0x2484e8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2484e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2484ec:
    // 0x2484ec: 0xc18f7b4  jal         func_63DED0
label_2484f0:
    if (ctx->pc == 0x2484F0u) {
        ctx->pc = 0x2484F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2484ECu;
        // 0x2484f0: 0x4600ad41  sub.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2484F4u;
        goto label_2484f4;
    }
    ctx->pc = 0x2484ECu;
    SET_GPR_U32(ctx, 31, 0x2484F4u);
    ctx->pc = 0x2484F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2484ECu;
    // 0x2484f0: 0x4600ad41  sub.s       $f21, $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x63DED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x63DED0u, 0x2484ECu, 0x2484F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2484F4u;
label_2484f4:
    // 0x2484f4: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2484f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2484f8:
    // 0x2484f8: 0x0  nop
    ctx->pc = 0x2484f8u;
    // NOP
label_2484fc:
    // 0x2484fc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_248500:
    if (ctx->pc == 0x248500u) {
        ctx->pc = 0x248500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2484FCu;
        // 0x248500: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248504u;
        goto label_248504;
    }
    ctx->pc = 0x2484FCu;
    {
        const bool branch_taken_0x2484fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x248500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2484FCu;
        // 0x248500: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2484fc) {
            ctx->pc = 0x248508u;
            goto label_248508;
        }
    }
    ctx->pc = 0x248504u;
label_248504:
    // 0x248504: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x248504u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_248508:
    // 0x248508: 0xc066e2a  jal         func_19B8A8
label_24850c:
    if (ctx->pc == 0x24850Cu) {
        ctx->pc = 0x24850Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248508u;
        // 0x24850c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248510u;
        goto label_248510;
    }
    ctx->pc = 0x248508u;
    SET_GPR_U32(ctx, 31, 0x248510u);
    ctx->pc = 0x24850Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248508u;
    // 0x24850c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8A8u;
    { ctx->pc = 0x19b8a8; return; }
    ctx->pc = 0x248510u;
label_248510:
    // 0x248510: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_248514:
    if (ctx->pc == 0x248514u) {
        ctx->pc = 0x248518u;
        goto label_248518;
    }
    ctx->pc = 0x248510u;
    {
        const bool branch_taken_0x248510 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x248510) {
            ctx->pc = 0x248540u;
            goto label_248540;
        }
    }
    ctx->pc = 0x248518u;
label_248518:
    // 0x248518: 0x96650058  lhu         $a1, 0x58($s3)
    ctx->pc = 0x248518u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 88)));
label_24851c:
    // 0x24851c: 0xc18f194  jal         func_63C650
label_248520:
    if (ctx->pc == 0x248520u) {
        ctx->pc = 0x248520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24851Cu;
        // 0x248520: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248524u;
        goto label_248524;
    }
    ctx->pc = 0x24851Cu;
    SET_GPR_U32(ctx, 31, 0x248524u);
    ctx->pc = 0x248520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24851Cu;
    // 0x248520: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x63C650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x63C650u, 0x24851Cu, 0x248524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248524u;
label_248524:
    // 0x248524: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x248524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_248528:
    // 0x248528: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x248528u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_24852c:
    // 0x24852c: 0xc066e02  jal         func_19B808
label_248530:
    if (ctx->pc == 0x248530u) {
        ctx->pc = 0x248530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24852Cu;
        // 0x248530: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248534u;
        goto label_248534;
    }
    ctx->pc = 0x24852Cu;
    SET_GPR_U32(ctx, 31, 0x248534u);
    ctx->pc = 0x248530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24852Cu;
    // 0x248530: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    { ctx->pc = 0x19b808; return; }
    ctx->pc = 0x248534u;
label_248534:
    // 0x248534: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x248534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_248538:
    // 0x248538: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x248538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
label_24853c:
    // 0x24853c: 0xafa3009c  sw          $v1, 0x9C($sp)
    ctx->pc = 0x24853cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 3));
label_248540:
    // 0x248540: 0x1000004a  b           . + 4 + (0x4A << 2)
label_248544:
    if (ctx->pc == 0x248544u) {
        ctx->pc = 0x248544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248540u;
        // 0x248544: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248548u;
        goto label_248548;
    }
    ctx->pc = 0x248540u;
    {
        const bool branch_taken_0x248540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248540u;
        // 0x248544: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248540) {
            ctx->pc = 0x24866Cu;
            goto label_24866c;
        }
    }
    ctx->pc = 0x248548u;
label_248548:
    // 0x248548: 0xc18f7b4  jal         func_63DED0
label_24854c:
    if (ctx->pc == 0x24854Cu) {
        ctx->pc = 0x248550u;
        goto label_248550;
    }
    ctx->pc = 0x248548u;
    SET_GPR_U32(ctx, 31, 0x248550u);
    ctx->pc = 0x63DED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x63DED0u, 0x248548u, 0x248550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248550u;
label_248550:
    // 0x248550: 0x0  nop
    ctx->pc = 0x248550u;
    // NOP
label_248554:
    // 0x248554: 0x0  nop
    ctx->pc = 0x248554u;
    // NOP
label_248558:
    // 0x248558: 0x46000004  c1          0x4
    ctx->pc = 0x248558u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_24855c:
    // 0x24855c: 0x0  nop
    ctx->pc = 0x24855cu;
    // NOP
label_248560:
    // 0x248560: 0x0  nop
    ctx->pc = 0x248560u;
    // NOP
label_248564:
    // 0x248564: 0xc18f7b4  jal         func_63DED0
label_248568:
    if (ctx->pc == 0x248568u) {
        ctx->pc = 0x248568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248564u;
        // 0x248568: 0x4600a542  mul.s       $f21, $f20, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24856Cu;
        goto label_24856c;
    }
    ctx->pc = 0x248564u;
    SET_GPR_U32(ctx, 31, 0x24856Cu);
    ctx->pc = 0x248568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248564u;
    // 0x248568: 0x4600a542  mul.s       $f21, $f20, $f0 (Delay Slot)
    ctx->f[21] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x63DED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x63DED0u, 0x248564u, 0x24856Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24856Cu;
label_24856c:
    // 0x24856c: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x24856cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
label_248570:
    // 0x248570: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x248570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_248574:
    // 0x248574: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x248574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_248578:
    // 0x248578: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x248578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_24857c:
    // 0x24857c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x24857cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_248580:
    // 0x248580: 0x27a400bc  addiu       $a0, $sp, 0xBC
    ctx->pc = 0x248580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
label_248584:
    // 0x248584: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x248584u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_248588:
    // 0x248588: 0x27a500b8  addiu       $a1, $sp, 0xB8
    ctx->pc = 0x248588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_24858c:
    // 0x24858c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x24858cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_248590:
    // 0x248590: 0xc18d9e8  jal         func_6367A0
label_248594:
    if (ctx->pc == 0x248594u) {
        ctx->pc = 0x248594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248590u;
        // 0x248594: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x248598u;
        goto label_248598;
    }
    ctx->pc = 0x248590u;
    SET_GPR_U32(ctx, 31, 0x248598u);
    ctx->pc = 0x248594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248590u;
    // 0x248594: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x6367A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x6367A0u, 0x248590u, 0x248598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248598u;
label_248598:
    // 0x248598: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x248598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24859c:
    // 0x24859c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x24859cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2485a0:
    // 0x2485a0: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x2485a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2485a4:
    // 0x2485a4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2485a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2485a8:
    // 0x2485a8: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x2485a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
label_2485ac:
    // 0x2485ac: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2485acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2485b0:
    // 0x2485b0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2485b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2485b4:
    // 0x2485b4: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x2485b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
label_2485b8:
    // 0x2485b8: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x2485b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
label_2485bc:
    // 0x2485bc: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x2485bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_2485c0:
    // 0x2485c0: 0xe7a100a0  swc1        $f1, 0xA0($sp)
    ctx->pc = 0x2485c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_2485c4:
    // 0x2485c4: 0xc066d7a  jal         func_19B5E8
label_2485c8:
    if (ctx->pc == 0x2485C8u) {
        ctx->pc = 0x2485C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2485C4u;
        // 0x2485c8: 0xe7a000a8  swc1        $f0, 0xA8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2485CCu;
        goto label_2485cc;
    }
    ctx->pc = 0x2485C4u;
    SET_GPR_U32(ctx, 31, 0x2485CCu);
    ctx->pc = 0x2485C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2485C4u;
    // 0x2485c8: 0xe7a000a8  swc1        $f0, 0xA8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x2485CCu;
label_2485cc:
    // 0x2485cc: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x2485ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2485d0:
    // 0x2485d0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x2485d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_2485d4:
    // 0x2485d4: 0x320f809  jalr        $t9
label_2485d8:
    if (ctx->pc == 0x2485D8u) {
        ctx->pc = 0x2485D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2485D4u;
        // 0x2485d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2485DCu;
        goto label_2485dc;
    }
    ctx->pc = 0x2485D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2485DCu);
        ctx->pc = 0x2485D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2485D4u;
        // 0x2485d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2485D4u, 0x2485DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2485DCu;
label_2485dc:
    // 0x2485dc: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x2485dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2485e0:
    // 0x2485e0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2485e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2485e4:
    // 0x2485e4: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2485e4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_2485e8:
    // 0x2485e8: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x2485e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_2485ec:
    // 0x2485ec: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x2485ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_2485f0:
    // 0x2485f0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2485f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2485f4:
    // 0x2485f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2485f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2485f8:
    // 0x2485f8: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2485f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
label_2485fc:
    // 0x2485fc: 0xc6600054  lwc1        $f0, 0x54($s3)
    ctx->pc = 0x2485fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_248600:
    // 0x248600: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x248600u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_248604:
    // 0x248604: 0x3c034280  lui         $v1, 0x4280
    ctx->pc = 0x248604u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
label_248608:
    // 0x248608: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x248608u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_24860c:
    // 0x24860c: 0x0  nop
    ctx->pc = 0x24860cu;
    // NOP
label_248610:
    // 0x248610: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x248610u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_248614:
    // 0x248614: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x248614u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
label_248618:
    // 0x248618: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x248618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_24861c:
    // 0x24861c: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x24861cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_248620:
    // 0x248620: 0xc660004c  lwc1        $f0, 0x4C($s3)
    ctx->pc = 0x248620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_248624:
    // 0x248624: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x248624u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_248628:
    // 0x248628: 0x0  nop
    ctx->pc = 0x248628u;
    // NOP
label_24862c:
    // 0x24862c: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x24862cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_248630:
    // 0x248630: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x248630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_248634:
    // 0x248634: 0xc6600050  lwc1        $f0, 0x50($s3)
    ctx->pc = 0x248634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_248638:
    // 0x248638: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x248638u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_24863c:
    // 0x24863c: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x24863cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_248640:
    // 0x248640: 0xac46001c  sw          $a2, 0x1C($v0)
    ctx->pc = 0x248640u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 6));
label_248644:
    // 0x248644: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x248644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_248648:
    // 0x248648: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x248648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24864c:
    // 0x24864c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x24864cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_248650:
    // 0x248650: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x248650u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_248654:
    // 0x248654: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x248654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_248658:
    // 0x248658: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x248658u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_24865c:
    // 0x24865c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x24865cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_248660:
    // 0x248660: 0x320f809  jalr        $t9
label_248664:
    if (ctx->pc == 0x248664u) {
        ctx->pc = 0x248664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248660u;
        // 0x248664: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248668u;
        goto label_248668;
    }
    ctx->pc = 0x248660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x248668u);
        ctx->pc = 0x248664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248660u;
        // 0x248664: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248660u, 0x248668u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x248668u;
label_248668:
    // 0x248668: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x248668u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_24866c:
    // 0x24866c: 0x0  nop
    ctx->pc = 0x24866cu;
    // NOP
label_248670:
    // 0x248670: 0x230182b  sltu        $v1, $s1, $s0
    ctx->pc = 0x248670u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_248674:
    // 0x248674: 0x1460ffb4  bnez        $v1, . + 4 + (-0x4C << 2)
label_248678:
    if (ctx->pc == 0x248678u) {
        ctx->pc = 0x24867Cu;
        goto label_24867c;
    }
    ctx->pc = 0x248674u;
    {
        const bool branch_taken_0x248674 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x248674) {
            ctx->pc = 0x248548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_248548;
        }
    }
    ctx->pc = 0x24867Cu;
label_24867c:
    // 0x24867c: 0x0  nop
    ctx->pc = 0x24867cu;
    // NOP
label_248680:
    // 0x248680: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x248680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_248684:
    // 0x248684: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x248684u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_248688:
    // 0x248688: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x248688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_24868c:
    // 0x24868c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x24868cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_248690:
    // 0x248690: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x248690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_248694:
    // 0x248694: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x248694u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_248698:
    // 0x248698: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x248698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_24869c:
    // 0x24869c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x24869cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2486a0:
    // 0x2486a0: 0x3e00008  jr          $ra
label_2486a4:
    if (ctx->pc == 0x2486A4u) {
        ctx->pc = 0x2486A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2486A0u;
        // 0x2486a4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2486A8u;
        goto label_2486a8;
    }
    ctx->pc = 0x2486A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2486A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2486A0u;
        // 0x2486a4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2486A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2486A8u;
label_2486a8:
    // 0x2486a8: 0x0  nop
    ctx->pc = 0x2486a8u;
    // NOP
label_2486ac:
    // 0x2486ac: 0x0  nop
    ctx->pc = 0x2486acu;
    // NOP
label_2486b0:
    // 0x2486b0: 0x8c820098  lw          $v0, 0x98($a0)
    ctx->pc = 0x2486b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 152)));
label_2486b4:
    // 0x2486b4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2486b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2486b8:
    // 0x2486b8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2486b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2486bc:
    // 0x2486bc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2486bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2486c0:
    // 0x2486c0: 0xac820098  sw          $v0, 0x98($a0)
    ctx->pc = 0x2486c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 2));
label_2486c4:
    // 0x2486c4: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x2486c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_2486c8:
    // 0x2486c8: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x2486c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_2486cc:
    // 0x2486cc: 0x10600079  beqz        $v1, . + 4 + (0x79 << 2)
label_2486d0:
    if (ctx->pc == 0x2486D0u) {
        ctx->pc = 0x2486D4u;
        goto label_2486d4;
    }
    ctx->pc = 0x2486CCu;
    {
        const bool branch_taken_0x2486cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2486cc) {
            ctx->pc = 0x2488B4u;
            goto label_2488b4;
        }
    }
    ctx->pc = 0x2486D4u;
label_2486d4:
    // 0x2486d4: 0xc4420014  lwc1        $f2, 0x14($v0)
    ctx->pc = 0x2486d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2486d8:
    // 0x2486d8: 0x3c034416  lui         $v1, 0x4416
    ctx->pc = 0x2486d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17430 << 16));
label_2486dc:
    // 0x2486dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2486dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2486e0:
    // 0x2486e0: 0x24850060  addiu       $a1, $a0, 0x60
    ctx->pc = 0x2486e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
label_2486e4:
    // 0x2486e4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2486e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2486e8:
    // 0x2486e8: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x2486e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
label_2486ec:
    // 0x2486ec: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x2486ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_2486f0:
    // 0x2486f0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2486f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_2486f4:
    // 0x2486f4: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x2486f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_2486f8:
    // 0x2486f8: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x2486f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_2486fc:
    // 0x2486fc: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x2486fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_248700:
    // 0x248700: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x248700u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_248704:
    // 0x248704: 0x0  nop
    ctx->pc = 0x248704u;
    // NOP
label_248708:
    // 0x248708: 0x46030083  div.s       $f2, $f0, $f3
    ctx->pc = 0x248708u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[2] = ctx->f[0] / ctx->f[3];
label_24870c:
    // 0x24870c: 0x3c033ecc  lui         $v1, 0x3ECC
    ctx->pc = 0x24870cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16076 << 16));
label_248710:
    // 0x248710: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x248710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_248714:
    // 0x248714: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x248714u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_248718:
    // 0x248718: 0x0  nop
    ctx->pc = 0x248718u;
    // NOP
label_24871c:
    // 0x24871c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x24871cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_248720:
    // 0x248720: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x248720u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_248724:
    // 0x248724: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x248724u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_248728:
    // 0x248728: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x248728u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_24872c:
    // 0x24872c: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x24872cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_248730:
    // 0x248730: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x248730u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_248734:
    // 0x248734: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x248734u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_248738:
    // 0x248738: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x248738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24873c:
    // 0x24873c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x24873cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_248740:
    // 0x248740: 0xe4410014  swc1        $f1, 0x14($v0)
    ctx->pc = 0x248740u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_248744:
    // 0x248744: 0xc4420018  lwc1        $f2, 0x18($v0)
    ctx->pc = 0x248744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_248748:
    // 0x248748: 0x46022042  mul.s       $f1, $f4, $f2
    ctx->pc = 0x248748u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_24874c:
    // 0x24874c: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x24874cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
label_248750:
    // 0x248750: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x248750u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[3];
label_248754:
    // 0x248754: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x248754u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_248758:
    // 0x248758: 0xe4410018  swc1        $f1, 0x18($v0)
    ctx->pc = 0x248758u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_24875c:
    // 0x24875c: 0x8c850098  lw          $a1, 0x98($a0)
    ctx->pc = 0x24875cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 152)));
label_248760:
    // 0x248760: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x248760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_248764:
    // 0x248764: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x248764u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_248768:
    // 0x248768: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x248768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_24876c:
    // 0x24876c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x24876cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_248770:
    // 0x248770: 0x833821  addu        $a3, $a0, $v1
    ctx->pc = 0x248770u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_248774:
    // 0x248774: 0xe4e10028  swc1        $f1, 0x28($a3)
    ctx->pc = 0x248774u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 40), bits); }
label_248778:
    // 0x248778: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x248778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24877c:
    // 0x24877c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x24877cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_248780:
    // 0x248780: 0x0  nop
    ctx->pc = 0x248780u;
    // NOP
label_248784:
    // 0x248784: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_248788:
    if (ctx->pc == 0x248788u) {
        ctx->pc = 0x24878Cu;
        goto label_24878c;
    }
    ctx->pc = 0x248784u;
    {
        const bool branch_taken_0x248784 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x248784) {
            ctx->pc = 0x24879Cu;
            goto label_24879c;
        }
    }
    ctx->pc = 0x24878Cu;
label_24878c:
    // 0x24878c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24878cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_248790:
    // 0x248790: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x248790u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_248794:
    // 0x248794: 0x10000008  b           . + 4 + (0x8 << 2)
label_248798:
    if (ctx->pc == 0x248798u) {
        ctx->pc = 0x248798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248794u;
        // 0x248798: 0xa0e40007  sb          $a0, 0x7($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 7), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24879Cu;
        goto label_24879c;
    }
    ctx->pc = 0x248794u;
    {
        const bool branch_taken_0x248794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248794u;
        // 0x248798: 0xa0e40007  sb          $a0, 0x7($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 7), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248794) {
            ctx->pc = 0x2487B8u;
            goto label_2487b8;
        }
    }
    ctx->pc = 0x24879Cu;
label_24879c:
    // 0x24879c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x24879cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2487a0:
    // 0x2487a0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2487a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_2487a4:
    // 0x2487a4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2487a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2487a8:
    // 0x2487a8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2487a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_2487ac:
    // 0x2487ac: 0x0  nop
    ctx->pc = 0x2487acu;
    // NOP
label_2487b0:
    // 0x2487b0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2487b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_2487b4:
    // 0x2487b4: 0xa0e40007  sb          $a0, 0x7($a3)
    ctx->pc = 0x2487b4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 7), (uint8_t)GPR_U32(ctx, 4));
label_2487b8:
    // 0x2487b8: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2487b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_2487bc:
    // 0x2487bc: 0xc4420010  lwc1        $f2, 0x10($v0)
    ctx->pc = 0x2487bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2487c0:
    // 0x2487c0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2487c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2487c4:
    // 0x2487c4: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x2487c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_2487c8:
    // 0x2487c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2487c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2487cc:
    // 0x2487cc: 0x0  nop
    ctx->pc = 0x2487ccu;
    // NOP
label_2487d0:
    // 0x2487d0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2487d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_2487d4:
    // 0x2487d4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2487d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2487d8:
    // 0x2487d8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2487d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2487dc:
    // 0x2487dc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2487dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_2487e0:
    // 0x2487e0: 0x0  nop
    ctx->pc = 0x2487e0u;
    // NOP
label_2487e4:
    // 0x2487e4: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
label_2487e8:
    if (ctx->pc == 0x2487E8u) {
        ctx->pc = 0x2487E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2487E4u;
        // 0x2487e8: 0x3065000f  andi        $a1, $v1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2487ECu;
        goto label_2487ec;
    }
    ctx->pc = 0x2487E4u;
    {
        const bool branch_taken_0x2487e4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2487E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2487E4u;
        // 0x2487e8: 0x3065000f  andi        $a1, $v1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2487e4) {
            ctx->pc = 0x2487F8u;
            goto label_2487f8;
        }
    }
    ctx->pc = 0x2487ECu;
label_2487ec:
    // 0x2487ec: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
label_2487f0:
    if (ctx->pc == 0x2487F0u) {
        ctx->pc = 0x2487F4u;
        goto label_2487f4;
    }
    ctx->pc = 0x2487ECu;
    {
        const bool branch_taken_0x2487ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2487ec) {
            ctx->pc = 0x2487F8u;
            goto label_2487f8;
        }
    }
    ctx->pc = 0x2487F4u;
label_2487f4:
    // 0x2487f4: 0x24a5fff0  addiu       $a1, $a1, -0x10
    ctx->pc = 0x2487f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
label_2487f8:
    // 0x2487f8: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
label_2487fc:
    if (ctx->pc == 0x2487FCu) {
        ctx->pc = 0x2487FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2487F8u;
        // 0x2487fc: 0x30a40007  andi        $a0, $a1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        ctx->pc = 0x248800u;
        goto label_248800;
    }
    ctx->pc = 0x2487F8u;
    {
        const bool branch_taken_0x2487f8 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2487FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2487F8u;
        // 0x2487fc: 0x30a40007  andi        $a0, $a1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2487f8) {
            ctx->pc = 0x248808u;
            goto label_248808;
        }
    }
    ctx->pc = 0x248800u;
label_248800:
    // 0x248800: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x248800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_248804:
    // 0x248804: 0x30a40007  andi        $a0, $a1, 0x7
    ctx->pc = 0x248804u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
label_248808:
    // 0x248808: 0x4a10005  bgez        $a1, . + 4 + (0x5 << 2)
label_24880c:
    if (ctx->pc == 0x24880Cu) {
        ctx->pc = 0x24880Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248808u;
        // 0x24880c: 0x530c3  sra         $a2, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248810u;
        goto label_248810;
    }
    ctx->pc = 0x248808u;
    {
        const bool branch_taken_0x248808 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x24880Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248808u;
        // 0x24880c: 0x530c3  sra         $a2, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248808) {
            ctx->pc = 0x248820u;
            goto label_248820;
        }
    }
    ctx->pc = 0x248810u;
label_248810:
    // 0x248810: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
label_248814:
    if (ctx->pc == 0x248814u) {
        ctx->pc = 0x248818u;
        goto label_248818;
    }
    ctx->pc = 0x248810u;
    {
        const bool branch_taken_0x248810 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x248810) {
            ctx->pc = 0x24881Cu;
            goto label_24881c;
        }
    }
    ctx->pc = 0x248818u;
label_248818:
    // 0x248818: 0x2484fff8  addiu       $a0, $a0, -0x8
    ctx->pc = 0x248818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
label_24881c:
    // 0x24881c: 0x530c3  sra         $a2, $a1, 3
    ctx->pc = 0x24881cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 5), 3));
label_248820:
    // 0x248820: 0x4a10002  bgez        $a1, . + 4 + (0x2 << 2)
label_248824:
    if (ctx->pc == 0x248824u) {
        ctx->pc = 0x248824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248820u;
        // 0x248824: 0x24a30007  addiu       $v1, $a1, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248828u;
        goto label_248828;
    }
    ctx->pc = 0x248820u;
    {
        const bool branch_taken_0x248820 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x248824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248820u;
        // 0x248824: 0x24a30007  addiu       $v1, $a1, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248820) {
            ctx->pc = 0x24882Cu;
            goto label_24882c;
        }
    }
    ctx->pc = 0x248828u;
label_248828:
    // 0x248828: 0x330c3  sra         $a2, $v1, 3
    ctx->pc = 0x248828u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 3));
label_24882c:
    // 0x24882c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x24882cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_248830:
    // 0x248830: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x248830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_248834:
    // 0x248834: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x248834u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_248838:
    // 0x248838: 0x3c054100  lui         $a1, 0x4100
    ctx->pc = 0x248838u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16640 << 16));
label_24883c:
    // 0x24883c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x24883cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_248840:
    // 0x248840: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x248840u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
label_248844:
    // 0x248844: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x248844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_248848:
    // 0x248848: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x248848u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_24884c:
    // 0x24884c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24884cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_248850:
    // 0x248850: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x248850u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
label_248854:
    // 0x248854: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x248854u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
label_248858:
    // 0x248858: 0xe4e10010  swc1        $f1, 0x10($a3)
    ctx->pc = 0x248858u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
label_24885c:
    // 0x24885c: 0xe4e00018  swc1        $f0, 0x18($a3)
    ctx->pc = 0x24885cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 24), bits); }
label_248860:
    // 0x248860: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x248860u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_248864:
    // 0x248864: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x248864u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_248868:
    // 0x248868: 0x0  nop
    ctx->pc = 0x248868u;
    // NOP
label_24886c:
    // 0x24886c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24886cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_248870:
    // 0x248870: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x248870u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_248874:
    // 0x248874: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x248874u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_248878:
    // 0x248878: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x248878u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
label_24887c:
    // 0x24887c: 0xe4e00014  swc1        $f0, 0x14($a3)
    ctx->pc = 0x24887cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 20), bits); }
label_248880:
    // 0x248880: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x248880u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
label_248884:
    // 0x248884: 0xe4e1001c  swc1        $f1, 0x1C($a3)
    ctx->pc = 0x248884u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 28), bits); }
label_248888:
    // 0x248888: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x248888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24888c:
    // 0x24888c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24888cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_248890:
    // 0x248890: 0x0  nop
    ctx->pc = 0x248890u;
    // NOP
label_248894:
    // 0x248894: 0x460c0841  sub.s       $f1, $f1, $f12
    ctx->pc = 0x248894u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
label_248898:
    // 0x248898: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x248898u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24889c:
    // 0x24889c: 0x0  nop
    ctx->pc = 0x24889cu;
    // NOP
label_2488a0:
    // 0x2488a0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2488a4:
    if (ctx->pc == 0x2488A4u) {
        ctx->pc = 0x2488A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2488A0u;
        // 0x2488a4: 0xe4410010  swc1        $f1, 0x10($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2488A8u;
        goto label_2488a8;
    }
    ctx->pc = 0x2488A0u;
    {
        const bool branch_taken_0x2488a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2488A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2488A0u;
        // 0x2488a4: 0xe4410010  swc1        $f1, 0x10($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2488a0) {
            ctx->pc = 0x2488ACu;
            goto label_2488ac;
        }
    }
    ctx->pc = 0x2488A8u;
label_2488a8:
    // 0x2488a8: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x2488a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
label_2488ac:
    // 0x2488ac: 0x10000002  b           . + 4 + (0x2 << 2)
label_2488b0:
    if (ctx->pc == 0x2488B0u) {
        ctx->pc = 0x2488B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2488ACu;
        // 0x2488b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2488B4u;
        goto label_2488b4;
    }
    ctx->pc = 0x2488ACu;
    {
        const bool branch_taken_0x2488ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2488B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2488ACu;
        // 0x2488b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2488ac) {
            ctx->pc = 0x2488B8u;
            goto label_2488b8;
        }
    }
    ctx->pc = 0x2488B4u;
label_2488b4:
    // 0x2488b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2488b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2488b8:
    // 0x2488b8: 0x3e00008  jr          $ra
label_2488bc:
    if (ctx->pc == 0x2488BCu) {
        ctx->pc = 0x2488C0u;
        goto label_2488c0;
    }
    ctx->pc = 0x2488B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2488B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2488C0u;
label_2488c0:
    // 0x2488c0: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x2488c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_2488c4:
    // 0x2488c4: 0xaca3008c  sw          $v1, 0x8C($a1)
    ctx->pc = 0x2488c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 140), GPR_U32(ctx, 3));
label_2488c8:
    // 0x2488c8: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x2488c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2488cc:
    // 0x2488cc: 0xaca00090  sw          $zero, 0x90($a1)
    ctx->pc = 0x2488ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 144), GPR_U32(ctx, 0));
label_2488d0:
    // 0x2488d0: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x2488d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_2488d4:
    // 0x2488d4: 0xa0a60034  sb          $a2, 0x34($a1)
    ctx->pc = 0x2488d4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 52), (uint8_t)GPR_U32(ctx, 6));
label_2488d8:
    // 0x2488d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2488d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2488dc:
    // 0x2488dc: 0xa0a60004  sb          $a2, 0x4($a1)
    ctx->pc = 0x2488dcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4), (uint8_t)GPR_U32(ctx, 6));
label_2488e0:
    // 0x2488e0: 0xa0a60035  sb          $a2, 0x35($a1)
    ctx->pc = 0x2488e0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 53), (uint8_t)GPR_U32(ctx, 6));
label_2488e4:
    // 0x2488e4: 0xa0a60005  sb          $a2, 0x5($a1)
    ctx->pc = 0x2488e4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 6));
label_2488e8:
    // 0x2488e8: 0xa0a60036  sb          $a2, 0x36($a1)
    ctx->pc = 0x2488e8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 54), (uint8_t)GPR_U32(ctx, 6));
label_2488ec:
    // 0x2488ec: 0xa0a60006  sb          $a2, 0x6($a1)
    ctx->pc = 0x2488ecu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 6));
label_2488f0:
    // 0x2488f0: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x2488f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2488f4:
    // 0x2488f4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2488f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2488f8:
    // 0x2488f8: 0x0  nop
    ctx->pc = 0x2488f8u;
    // NOP
label_2488fc:
    // 0x2488fc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_248900:
    if (ctx->pc == 0x248900u) {
        ctx->pc = 0x248904u;
        goto label_248904;
    }
    ctx->pc = 0x2488FCu;
    {
        const bool branch_taken_0x2488fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2488fc) {
            ctx->pc = 0x248914u;
            goto label_248914;
        }
    }
    ctx->pc = 0x248904u;
label_248904:
    // 0x248904: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x248904u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_248908:
    // 0x248908: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x248908u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_24890c:
    // 0x24890c: 0x10000008  b           . + 4 + (0x8 << 2)
label_248910:
    if (ctx->pc == 0x248910u) {
        ctx->pc = 0x248910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24890Cu;
        // 0x248910: 0xa0a60037  sb          $a2, 0x37($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 55), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248914u;
        goto label_248914;
    }
    ctx->pc = 0x24890Cu;
    {
        const bool branch_taken_0x24890c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24890Cu;
        // 0x248910: 0xa0a60037  sb          $a2, 0x37($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 55), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24890c) {
            ctx->pc = 0x248930u;
            goto label_248930;
        }
    }
    ctx->pc = 0x248914u;
label_248914:
    // 0x248914: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x248914u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_248918:
    // 0x248918: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x248918u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_24891c:
    // 0x24891c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x24891cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_248920:
    // 0x248920: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x248920u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_248924:
    // 0x248924: 0x0  nop
    ctx->pc = 0x248924u;
    // NOP
label_248928:
    // 0x248928: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x248928u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_24892c:
    // 0x24892c: 0xa0a60037  sb          $a2, 0x37($a1)
    ctx->pc = 0x24892cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 55), (uint8_t)GPR_U32(ctx, 6));
label_248930:
    // 0x248930: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x248930u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_248934:
    // 0x248934: 0xa0a60007  sb          $a2, 0x7($a1)
    ctx->pc = 0x248934u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 7), (uint8_t)GPR_U32(ctx, 6));
label_248938:
    // 0x248938: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x248938u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_24893c:
    // 0x24893c: 0xc4820010  lwc1        $f2, 0x10($a0)
    ctx->pc = 0x24893cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_248940:
    // 0x248940: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x248940u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_248944:
    // 0x248944: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x248944u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_248948:
    // 0x248948: 0x0  nop
    ctx->pc = 0x248948u;
    // NOP
label_24894c:
    // 0x24894c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x24894cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_248950:
    // 0x248950: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x248950u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_248954:
    // 0x248954: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x248954u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_248958:
    // 0x248958: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x248958u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_24895c:
    // 0x24895c: 0x0  nop
    ctx->pc = 0x24895cu;
    // NOP
label_248960:
    // 0x248960: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
label_248964:
    if (ctx->pc == 0x248964u) {
        ctx->pc = 0x248964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248960u;
        // 0x248964: 0x3067000f  andi        $a3, $v1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = 0x248968u;
        goto label_248968;
    }
    ctx->pc = 0x248960u;
    {
        const bool branch_taken_0x248960 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x248964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248960u;
        // 0x248964: 0x3067000f  andi        $a3, $v1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x248960) {
            ctx->pc = 0x248974u;
            goto label_248974;
        }
    }
    ctx->pc = 0x248968u;
label_248968:
    // 0x248968: 0x10e00002  beqz        $a3, . + 4 + (0x2 << 2)
label_24896c:
    if (ctx->pc == 0x24896Cu) {
        ctx->pc = 0x248970u;
        goto label_248970;
    }
    ctx->pc = 0x248968u;
    {
        const bool branch_taken_0x248968 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x248968) {
            ctx->pc = 0x248974u;
            goto label_248974;
        }
    }
    ctx->pc = 0x248970u;
label_248970:
    // 0x248970: 0x24e7fff0  addiu       $a3, $a3, -0x10
    ctx->pc = 0x248970u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967280));
label_248974:
    // 0x248974: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
label_248978:
    if (ctx->pc == 0x248978u) {
        ctx->pc = 0x248978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248974u;
        // 0x248978: 0x30e60007  andi        $a2, $a3, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24897Cu;
        goto label_24897c;
    }
    ctx->pc = 0x248974u;
    {
        const bool branch_taken_0x248974 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x248978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248974u;
        // 0x248978: 0x30e60007  andi        $a2, $a3, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x248974) {
            ctx->pc = 0x248984u;
            goto label_248984;
        }
    }
    ctx->pc = 0x24897Cu;
label_24897c:
    // 0x24897c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x24897cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_248980:
    // 0x248980: 0x30e60007  andi        $a2, $a3, 0x7
    ctx->pc = 0x248980u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)7);
label_248984:
    // 0x248984: 0x4e10005  bgez        $a3, . + 4 + (0x5 << 2)
label_248988:
    if (ctx->pc == 0x248988u) {
        ctx->pc = 0x248988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248984u;
        // 0x248988: 0x750c3  sra         $t2, $a3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 7), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24898Cu;
        goto label_24898c;
    }
    ctx->pc = 0x248984u;
    {
        const bool branch_taken_0x248984 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x248988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248984u;
        // 0x248988: 0x750c3  sra         $t2, $a3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 7), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248984) {
            ctx->pc = 0x24899Cu;
            goto label_24899c;
        }
    }
    ctx->pc = 0x24898Cu;
label_24898c:
    // 0x24898c: 0x10c00002  beqz        $a2, . + 4 + (0x2 << 2)
label_248990:
    if (ctx->pc == 0x248990u) {
        ctx->pc = 0x248994u;
        goto label_248994;
    }
    ctx->pc = 0x24898Cu;
    {
        const bool branch_taken_0x24898c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x24898c) {
            ctx->pc = 0x248998u;
            goto label_248998;
        }
    }
    ctx->pc = 0x248994u;
label_248994:
    // 0x248994: 0x24c6fff8  addiu       $a2, $a2, -0x8
    ctx->pc = 0x248994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
label_248998:
    // 0x248998: 0x750c3  sra         $t2, $a3, 3
    ctx->pc = 0x248998u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 7), 3));
label_24899c:
    // 0x24899c: 0x4e10002  bgez        $a3, . + 4 + (0x2 << 2)
label_2489a0:
    if (ctx->pc == 0x2489A0u) {
        ctx->pc = 0x2489A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24899Cu;
        // 0x2489a0: 0x24e30007  addiu       $v1, $a3, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2489A4u;
        goto label_2489a4;
    }
    ctx->pc = 0x24899Cu;
    {
        const bool branch_taken_0x24899c = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x2489A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24899Cu;
        // 0x2489a0: 0x24e30007  addiu       $v1, $a3, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24899c) {
            ctx->pc = 0x2489A8u;
            goto label_2489a8;
        }
    }
    ctx->pc = 0x2489A4u;
label_2489a4:
    // 0x2489a4: 0x350c3  sra         $t2, $v1, 3
    ctx->pc = 0x2489a4u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 3), 3));
label_2489a8:
    // 0x2489a8: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x2489a8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2489ac:
    // 0x2489ac: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x2489acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_2489b0:
    // 0x2489b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2489b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2489b4:
    // 0x2489b4: 0x3c094100  lui         $t1, 0x4100
    ctx->pc = 0x2489b4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16640 << 16));
label_2489b8:
    // 0x2489b8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2489b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2489bc:
    // 0x2489bc: 0x3c084000  lui         $t0, 0x4000
    ctx->pc = 0x2489bcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16384 << 16));
label_2489c0:
    // 0x2489c0: 0x25470001  addiu       $a3, $t2, 0x1
    ctx->pc = 0x2489c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_2489c4:
    // 0x2489c4: 0x3c064396  lui         $a2, 0x4396
    ctx->pc = 0x2489c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17302 << 16));
label_2489c8:
    // 0x2489c8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2489c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2489cc:
    // 0x2489cc: 0x44891000  mtc1        $t1, $f2
    ctx->pc = 0x2489ccu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2489d0:
    // 0x2489d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2489d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2489d4:
    // 0x2489d4: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x2489d4u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
label_2489d8:
    // 0x2489d8: 0xe4a10010  swc1        $f1, 0x10($a1)
    ctx->pc = 0x2489d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
label_2489dc:
    // 0x2489dc: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2489dcu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
label_2489e0:
    // 0x2489e0: 0xe4a00018  swc1        $f0, 0x18($a1)
    ctx->pc = 0x2489e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
label_2489e4:
    // 0x2489e4: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x2489e4u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2489e8:
    // 0x2489e8: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x2489e8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2489ec:
    // 0x2489ec: 0x0  nop
    ctx->pc = 0x2489ecu;
    // NOP
label_2489f0:
    // 0x2489f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2489f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2489f4:
    // 0x2489f4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2489f4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_2489f8:
    // 0x2489f8: 0xe4a00014  swc1        $f0, 0x14($a1)
    ctx->pc = 0x2489f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
label_2489fc:
    // 0x2489fc: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2489fcu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_248a00:
    // 0x248a00: 0x0  nop
    ctx->pc = 0x248a00u;
    // NOP
label_248a04:
    // 0x248a04: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x248a04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_248a08:
    // 0x248a08: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x248a08u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_248a0c:
    // 0x248a0c: 0xe4a0001c  swc1        $f0, 0x1C($a1)
    ctx->pc = 0x248a0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
label_248a10:
    // 0x248a10: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x248a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_248a14:
    // 0x248a14: 0xe4a00040  swc1        $f0, 0x40($a1)
    ctx->pc = 0x248a14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 64), bits); }
label_248a18:
    // 0x248a18: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x248a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_248a1c:
    // 0x248a1c: 0xe4a00044  swc1        $f0, 0x44($a1)
    ctx->pc = 0x248a1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 68), bits); }
label_248a20:
    // 0x248a20: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x248a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_248a24:
    // 0x248a24: 0xe4a00048  swc1        $f0, 0x48($a1)
    ctx->pc = 0x248a24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 72), bits); }
label_248a28:
    // 0x248a28: 0xc4a0001c  lwc1        $f0, 0x1C($a1)
    ctx->pc = 0x248a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_248a2c:
    // 0x248a2c: 0xe4a0004c  swc1        $f0, 0x4C($a1)
    ctx->pc = 0x248a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 76), bits); }
label_248a30:
    // 0x248a30: 0xaca60054  sw          $a2, 0x54($a1)
    ctx->pc = 0x248a30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 84), GPR_U32(ctx, 6));
label_248a34:
    // 0x248a34: 0xaca60024  sw          $a2, 0x24($a1)
    ctx->pc = 0x248a34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 6));
label_248a38:
    // 0x248a38: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x248a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_248a3c:
    // 0x248a3c: 0xe4a00058  swc1        $f0, 0x58($a1)
    ctx->pc = 0x248a3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 88), bits); }
label_248a40:
    // 0x248a40: 0xe4a00028  swc1        $f0, 0x28($a1)
    ctx->pc = 0x248a40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
label_248a44:
    // 0x248a44: 0x3e00008  jr          $ra
label_248a48:
    if (ctx->pc == 0x248A48u) {
        ctx->pc = 0x248A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248A44u;
        // 0x248a48: 0xaca3009c  sw          $v1, 0x9C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248A4Cu;
        goto label_248a4c;
    }
    ctx->pc = 0x248A44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248A44u;
        // 0x248a48: 0xaca3009c  sw          $v1, 0x9C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248A44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248A4Cu;
label_248a4c:
    // 0x248a4c: 0x0  nop
    ctx->pc = 0x248a4cu;
    // NOP
label_248a50:
    // 0x248a50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x248a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_248a54:
    // 0x248a54: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x248a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_248a58:
    // 0x248a58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x248a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_248a5c:
    // 0x248a5c: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x248a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_248a60:
    // 0x248a60: 0x10c30016  beq         $a2, $v1, . + 4 + (0x16 << 2)
label_248a64:
    if (ctx->pc == 0x248A64u) {
        ctx->pc = 0x248A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248A60u;
        // 0x248a64: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248A68u;
        goto label_248a68;
    }
    ctx->pc = 0x248A60u;
    {
        const bool branch_taken_0x248a60 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x248A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248A60u;
        // 0x248a64: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248a60) {
            ctx->pc = 0x248ABCu;
            goto label_248abc;
        }
    }
    ctx->pc = 0x248A68u;
label_248a68:
    // 0x248a68: 0x10c30010  beq         $a2, $v1, . + 4 + (0x10 << 2)
label_248a6c:
    if (ctx->pc == 0x248A6Cu) {
        ctx->pc = 0x248A70u;
        goto label_248a70;
    }
    ctx->pc = 0x248A68u;
    {
        const bool branch_taken_0x248a68 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x248a68) {
            ctx->pc = 0x248AACu;
            goto label_248aac;
        }
    }
    ctx->pc = 0x248A70u;
label_248a70:
    // 0x248a70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x248a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_248a74:
    // 0x248a74: 0x10c30009  beq         $a2, $v1, . + 4 + (0x9 << 2)
label_248a78:
    if (ctx->pc == 0x248A78u) {
        ctx->pc = 0x248A7Cu;
        goto label_248a7c;
    }
    ctx->pc = 0x248A74u;
    {
        const bool branch_taken_0x248a74 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x248a74) {
            ctx->pc = 0x248A9Cu;
            goto label_248a9c;
        }
    }
    ctx->pc = 0x248A7Cu;
label_248a7c:
    // 0x248a7c: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_248a80:
    if (ctx->pc == 0x248A80u) {
        ctx->pc = 0x248A84u;
        goto label_248a84;
    }
    ctx->pc = 0x248A7Cu;
    {
        const bool branch_taken_0x248a7c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x248a7c) {
            ctx->pc = 0x248A8Cu;
            goto label_248a8c;
        }
    }
    ctx->pc = 0x248A84u;
label_248a84:
    // 0x248a84: 0x10000010  b           . + 4 + (0x10 << 2)
label_248a88:
    if (ctx->pc == 0x248A88u) {
        ctx->pc = 0x248A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248A84u;
        // 0x248a88: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248A8Cu;
        goto label_248a8c;
    }
    ctx->pc = 0x248A84u;
    {
        const bool branch_taken_0x248a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248A84u;
        // 0x248a88: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248a84) {
            ctx->pc = 0x248AC8u;
            goto label_248ac8;
        }
    }
    ctx->pc = 0x248A8Cu;
label_248a8c:
    // 0x248a8c: 0xc092368  jal         func_248DA0
label_248a90:
    if (ctx->pc == 0x248A90u) {
        ctx->pc = 0x248A94u;
        goto label_248a94;
    }
    ctx->pc = 0x248A8Cu;
    SET_GPR_U32(ctx, 31, 0x248A94u);
    ctx->pc = 0x248DA0u;
    { ctx->pc = 0x248da0; return; }
    ctx->pc = 0x248A94u;
label_248a94:
    // 0x248a94: 0x1000000b  b           . + 4 + (0xB << 2)
label_248a98:
    if (ctx->pc == 0x248A98u) {
        ctx->pc = 0x248A9Cu;
        goto label_248a9c;
    }
    ctx->pc = 0x248A94u;
    {
        const bool branch_taken_0x248a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x248a94) {
            ctx->pc = 0x248AC4u;
            goto label_248ac4;
        }
    }
    ctx->pc = 0x248A9Cu;
label_248a9c:
    // 0x248a9c: 0xc09232c  jal         func_248CB0
label_248aa0:
    if (ctx->pc == 0x248AA0u) {
        ctx->pc = 0x248AA4u;
        goto label_248aa4;
    }
    ctx->pc = 0x248A9Cu;
    SET_GPR_U32(ctx, 31, 0x248AA4u);
    ctx->pc = 0x248CB0u;
    { ctx->pc = 0x248cb0; return; }
    ctx->pc = 0x248AA4u;
label_248aa4:
    // 0x248aa4: 0x10000007  b           . + 4 + (0x7 << 2)
label_248aa8:
    if (ctx->pc == 0x248AA8u) {
        ctx->pc = 0x248AACu;
        goto label_248aac;
    }
    ctx->pc = 0x248AA4u;
    {
        const bool branch_taken_0x248aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x248aa4) {
            ctx->pc = 0x248AC4u;
            goto label_248ac4;
        }
    }
    ctx->pc = 0x248AACu;
label_248aac:
    // 0x248aac: 0xc0922f0  jal         func_248BC0
label_248ab0:
    if (ctx->pc == 0x248AB0u) {
        ctx->pc = 0x248AB4u;
        goto label_248ab4;
    }
    ctx->pc = 0x248AACu;
    SET_GPR_U32(ctx, 31, 0x248AB4u);
    ctx->pc = 0x248BC0u;
    { ctx->pc = 0x248bc0; return; }
    ctx->pc = 0x248AB4u;
label_248ab4:
    // 0x248ab4: 0x10000003  b           . + 4 + (0x3 << 2)
label_248ab8:
    if (ctx->pc == 0x248AB8u) {
        ctx->pc = 0x248ABCu;
        goto label_248abc;
    }
    ctx->pc = 0x248AB4u;
    {
        const bool branch_taken_0x248ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x248ab4) {
            ctx->pc = 0x248AC4u;
            goto label_248ac4;
        }
    }
    ctx->pc = 0x248ABCu;
label_248abc:
    // 0x248abc: 0xc0922b4  jal         func_248AD0
label_248ac0:
    if (ctx->pc == 0x248AC0u) {
        ctx->pc = 0x248AC4u;
        goto label_248ac4;
    }
    ctx->pc = 0x248ABCu;
    SET_GPR_U32(ctx, 31, 0x248AC4u);
    ctx->pc = 0x248AD0u;
    goto label_248ad0;
    ctx->pc = 0x248AC4u;
label_248ac4:
    // 0x248ac4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x248ac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_248ac8:
    // 0x248ac8: 0x3e00008  jr          $ra
label_248acc:
    if (ctx->pc == 0x248ACCu) {
        ctx->pc = 0x248ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248AC8u;
        // 0x248acc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248AD0u;
        goto label_248ad0;
    }
    ctx->pc = 0x248AC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248AC8u;
        // 0x248acc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248AC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248AD0u;
label_248ad0:
    // 0x248ad0: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x248ad0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_248ad4:
    // 0x248ad4: 0x2408fffc  addiu       $t0, $zero, -0x4
    ctx->pc = 0x248ad4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_248ad8:
    // 0x248ad8: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x248ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_248adc:
    // 0x248adc: 0x248a0008  addiu       $t2, $a0, 0x8
    ctx->pc = 0x248adcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_248ae0:
    // 0x248ae0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x248ae0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_248ae4:
    // 0x248ae4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x248ae4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_248ae8:
    // 0x248ae8: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x248ae8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_248aec:
    // 0x248aec: 0xe83824  and         $a3, $a3, $t0
    ctx->pc = 0x248aecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
label_248af0:
    // 0x248af0: 0xc83024  and         $a2, $a2, $t0
    ctx->pc = 0x248af0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 8));
label_248af4:
    // 0x248af4: 0x876821  addu        $t5, $a0, $a3
    ctx->pc = 0x248af4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_248af8:
    // 0x248af8: 0x867821  addu        $t7, $a0, $a2
    ctx->pc = 0x248af8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_248afc:
    // 0x248afc: 0x2407e000  addiu       $a3, $zero, -0x2000
    ctx->pc = 0x248afcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959104));
label_248b00:
    // 0x248b00: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x248b00u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
label_248b04:
    // 0x248b04: 0x9487a  dsrl        $t1, $t1, 1
    ctx->pc = 0x248b04u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> 1);
label_248b08:
    // 0x248b08: 0x15200003  bnez        $t1, . + 4 + (0x3 << 2)
label_248b0c:
    if (ctx->pc == 0x248B0Cu) {
        ctx->pc = 0x248B10u;
        goto label_248b10;
    }
    ctx->pc = 0x248B08u;
    {
        const bool branch_taken_0x248b08 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x248b08) {
            ctx->pc = 0x248B18u;
            goto label_248b18;
        }
    }
    ctx->pc = 0x248B10u;
label_248b10:
    // 0x248b10: 0x8483c  dsll32      $t1, $t0, 0
    ctx->pc = 0x248b10u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) << (32 + 0));
label_248b14:
    // 0x248b14: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x248b14u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
label_248b18:
    // 0x248b18: 0xdd440000  ld          $a0, 0x0($t2)
    ctx->pc = 0x248b18u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 10), 0)));
label_248b1c:
    // 0x248b1c: 0x892024  and         $a0, $a0, $t1
    ctx->pc = 0x248b1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 9));
label_248b20:
    // 0x248b20: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_248b24:
    if (ctx->pc == 0x248B24u) {
        ctx->pc = 0x248B28u;
        goto label_248b28;
    }
    ctx->pc = 0x248B20u;
    {
        const bool branch_taken_0x248b20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x248b20) {
            ctx->pc = 0x248B40u;
            goto label_248b40;
        }
    }
    ctx->pc = 0x248B28u;
label_248b28:
    // 0x248b28: 0x91e40000  lbu         $a0, 0x0($t7)
    ctx->pc = 0x248b28u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
label_248b2c:
    // 0x248b2c: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x248b2cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_248b30:
    // 0x248b30: 0xa0a40000  sb          $a0, 0x0($a1)
    ctx->pc = 0x248b30u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
label_248b34:
    // 0x248b34: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x248b34u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
label_248b38:
    // 0x248b38: 0x1000fff2  b           . + 4 + (-0xE << 2)
label_248b3c:
    if (ctx->pc == 0x248B3Cu) {
        ctx->pc = 0x248B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248B38u;
        // 0x248b3c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248B40u;
        goto label_248b40;
    }
    ctx->pc = 0x248B38u;
    {
        const bool branch_taken_0x248b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248B38u;
        // 0x248b3c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248b38) {
            ctx->pc = 0x248B04u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_248b04;
        }
    }
    ctx->pc = 0x248B40u;
label_248b40:
    // 0x248b40: 0x95b80000  lhu         $t8, 0x0($t5)
    ctx->pc = 0x248b40u;
    SET_GPR_ZE32(ctx, 24, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
label_248b44:
    // 0x248b44: 0x330c1fff  andi        $t4, $t8, 0x1FFF
    ctx->pc = 0x248b44u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 24) & (uint64_t)(uint16_t)8191);
label_248b48:
    // 0x248b48: 0x11800018  beqz        $t4, . + 4 + (0x18 << 2)
label_248b4c:
    if (ctx->pc == 0x248B4Cu) {
        ctx->pc = 0x248B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248B48u;
        // 0x248b4c: 0x1673024  and         $a2, $t3, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248B50u;
        goto label_248b50;
    }
    ctx->pc = 0x248B48u;
    {
        const bool branch_taken_0x248b48 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x248B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248B48u;
        // 0x248b4c: 0x1673024  and         $a2, $t3, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248b48) {
            ctx->pc = 0x248BACu;
            { ctx->pc = 0x248bac; return; }
        }
    }
    ctx->pc = 0x248B50u;
label_248b50:
    // 0x248b50: 0x31641fff  andi        $a0, $t3, 0x1FFF
    ctx->pc = 0x248b50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)8191);
label_248b54:
    // 0x248b54: 0xcc3021  addu        $a2, $a2, $t4
    ctx->pc = 0x248b54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
label_248b58:
    // 0x248b58: 0x8c082a  slt         $at, $a0, $t4
    ctx->pc = 0x248b58u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
label_248b5c:
    // 0x248b5c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x248b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_248b60:
    // 0x248b60: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_248b64:
    if (ctx->pc == 0x248B64u) {
        ctx->pc = 0x248B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248B60u;
        // 0x248b64: 0x667021  addu        $t6, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248B68u;
        goto label_248b68;
    }
    ctx->pc = 0x248B60u;
    {
        const bool branch_taken_0x248b60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x248B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248B60u;
        // 0x248b64: 0x667021  addu        $t6, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248b60) {
            ctx->pc = 0x248B6Cu;
            goto label_248b6c;
        }
    }
    ctx->pc = 0x248B68u;
label_248b68:
    // 0x248b68: 0x25cee000  addiu       $t6, $t6, -0x2000
    ctx->pc = 0x248b68u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294959104));
label_248b6c:
    // 0x248b6c: 0x0  nop
    ctx->pc = 0x248b6cu;
    // NOP
label_248b70:
    // 0x248b70: 0x182343  sra         $a0, $t8, 13
    ctx->pc = 0x248b70u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 24), 13));
label_248b74:
    // 0x248b74: 0x24860003  addiu       $a2, $a0, 0x3
    ctx->pc = 0x248b74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
label_248b78:
    // 0x248b78: 0x25ad0002  addiu       $t5, $t5, 0x2
    ctx->pc = 0x248b78u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 2));
label_248b7c:
    // 0x248b7c: 0x10c0ffe1  beqz        $a2, . + 4 + (-0x1F << 2)
label_248b80:
    if (ctx->pc == 0x248B80u) {
        ctx->pc = 0x248B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248B7Cu;
        // 0x248b80: 0x1665821  addu        $t3, $t3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248B84u;
        goto label_248b84;
    }
    ctx->pc = 0x248B7Cu;
    {
        const bool branch_taken_0x248b7c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x248B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248B7Cu;
        // 0x248b80: 0x1665821  addu        $t3, $t3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248b7c) {
            ctx->pc = 0x248B04u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_248b04;
        }
    }
    ctx->pc = 0x248B84u;
label_248b84:
    // 0x248b84: 0x0  nop
    ctx->pc = 0x248b84u;
    // NOP
label_248b88:
    // 0x248b88: 0x91c40000  lbu         $a0, 0x0($t6)
    ctx->pc = 0x248b88u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
label_248b8c:
    // 0x248b8c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x248b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_248b90:
    // 0x248b90: 0xa0a40000  sb          $a0, 0x0($a1)
    ctx->pc = 0x248b90u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
label_248b94:
    // 0x248b94: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x248b94u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
label_248b98:
    // 0x248b98: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x248b98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_248b9c:
    // 0x248b9c: 0x14c0fff9  bnez        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x248ba0u;
    return;
}

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

// Function: FUN_001e9120
// Address: 0x1e9120 - 0x2291f4
#ifdef PS2_FUNCTION_LOG_TRACKER
#endif


void FUN_001e9120_part118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x222330u: goto label_222330;
        case 0x222334u: goto label_222334;
        case 0x222338u: goto label_222338;
        case 0x22233cu: goto label_22233c;
        case 0x222340u: goto label_222340;
        case 0x222344u: goto label_222344;
        case 0x222348u: goto label_222348;
        case 0x22234cu: goto label_22234c;
        case 0x222350u: goto label_222350;
        case 0x222354u: goto label_222354;
        case 0x222358u: goto label_222358;
        case 0x22235cu: goto label_22235c;
        case 0x222360u: goto label_222360;
        case 0x222364u: goto label_222364;
        case 0x222368u: goto label_222368;
        case 0x22236cu: goto label_22236c;
        case 0x222370u: goto label_222370;
        case 0x222374u: goto label_222374;
        case 0x222378u: goto label_222378;
        case 0x22237cu: goto label_22237c;
        case 0x222380u: goto label_222380;
        case 0x222384u: goto label_222384;
        case 0x222388u: goto label_222388;
        case 0x22238cu: goto label_22238c;
        case 0x222390u: goto label_222390;
        case 0x222394u: goto label_222394;
        case 0x222398u: goto label_222398;
        case 0x22239cu: goto label_22239c;
        case 0x2223a0u: goto label_2223a0;
        case 0x2223a4u: goto label_2223a4;
        case 0x2223a8u: goto label_2223a8;
        case 0x2223acu: goto label_2223ac;
        case 0x2223b0u: goto label_2223b0;
        case 0x2223b4u: goto label_2223b4;
        case 0x2223b8u: goto label_2223b8;
        case 0x2223bcu: goto label_2223bc;
        case 0x2223c0u: goto label_2223c0;
        case 0x2223c4u: goto label_2223c4;
        case 0x2223c8u: goto label_2223c8;
        case 0x2223ccu: goto label_2223cc;
        case 0x2223d0u: goto label_2223d0;
        case 0x2223d4u: goto label_2223d4;
        case 0x2223d8u: goto label_2223d8;
        case 0x2223dcu: goto label_2223dc;
        case 0x2223e0u: goto label_2223e0;
        case 0x2223e4u: goto label_2223e4;
        case 0x2223e8u: goto label_2223e8;
        case 0x2223ecu: goto label_2223ec;
        case 0x2223f0u: goto label_2223f0;
        case 0x2223f4u: goto label_2223f4;
        case 0x2223f8u: goto label_2223f8;
        case 0x2223fcu: goto label_2223fc;
        case 0x222400u: goto label_222400;
        case 0x222404u: goto label_222404;
        case 0x222408u: goto label_222408;
        case 0x22240cu: goto label_22240c;
        case 0x222410u: goto label_222410;
        case 0x222414u: goto label_222414;
        case 0x222418u: goto label_222418;
        case 0x22241cu: goto label_22241c;
        case 0x222420u: goto label_222420;
        case 0x222424u: goto label_222424;
        case 0x222428u: goto label_222428;
        case 0x22242cu: goto label_22242c;
        case 0x222430u: goto label_222430;
        case 0x222434u: goto label_222434;
        case 0x222438u: goto label_222438;
        case 0x22243cu: goto label_22243c;
        case 0x222440u: goto label_222440;
        case 0x222444u: goto label_222444;
        case 0x222448u: goto label_222448;
        case 0x22244cu: goto label_22244c;
        case 0x222450u: goto label_222450;
        case 0x222454u: goto label_222454;
        case 0x222458u: goto label_222458;
        case 0x22245cu: goto label_22245c;
        case 0x222460u: goto label_222460;
        case 0x222464u: goto label_222464;
        case 0x222468u: goto label_222468;
        case 0x22246cu: goto label_22246c;
        case 0x222470u: goto label_222470;
        case 0x222474u: goto label_222474;
        case 0x222478u: goto label_222478;
        case 0x22247cu: goto label_22247c;
        case 0x222480u: goto label_222480;
        case 0x222484u: goto label_222484;
        case 0x222488u: goto label_222488;
        case 0x22248cu: goto label_22248c;
        case 0x222490u: goto label_222490;
        case 0x222494u: goto label_222494;
        case 0x222498u: goto label_222498;
        case 0x22249cu: goto label_22249c;
        case 0x2224a0u: goto label_2224a0;
        case 0x2224a4u: goto label_2224a4;
        case 0x2224a8u: goto label_2224a8;
        case 0x2224acu: goto label_2224ac;
        case 0x2224b0u: goto label_2224b0;
        case 0x2224b4u: goto label_2224b4;
        case 0x2224b8u: goto label_2224b8;
        case 0x2224bcu: goto label_2224bc;
        case 0x2224c0u: goto label_2224c0;
        case 0x2224c4u: goto label_2224c4;
        case 0x2224c8u: goto label_2224c8;
        case 0x2224ccu: goto label_2224cc;
        case 0x2224d0u: goto label_2224d0;
        case 0x2224d4u: goto label_2224d4;
        case 0x2224d8u: goto label_2224d8;
        case 0x2224dcu: goto label_2224dc;
        case 0x2224e0u: goto label_2224e0;
        case 0x2224e4u: goto label_2224e4;
        case 0x2224e8u: goto label_2224e8;
        case 0x2224ecu: goto label_2224ec;
        case 0x2224f0u: goto label_2224f0;
        case 0x2224f4u: goto label_2224f4;
        case 0x2224f8u: goto label_2224f8;
        case 0x2224fcu: goto label_2224fc;
        case 0x222500u: goto label_222500;
        case 0x222504u: goto label_222504;
        case 0x222508u: goto label_222508;
        case 0x22250cu: goto label_22250c;
        case 0x222510u: goto label_222510;
        case 0x222514u: goto label_222514;
        case 0x222518u: goto label_222518;
        case 0x22251cu: goto label_22251c;
        case 0x222520u: goto label_222520;
        case 0x222524u: goto label_222524;
        case 0x222528u: goto label_222528;
        case 0x22252cu: goto label_22252c;
        case 0x222530u: goto label_222530;
        case 0x222534u: goto label_222534;
        case 0x222538u: goto label_222538;
        case 0x22253cu: goto label_22253c;
        case 0x222540u: goto label_222540;
        case 0x222544u: goto label_222544;
        case 0x222548u: goto label_222548;
        case 0x22254cu: goto label_22254c;
        case 0x222550u: goto label_222550;
        case 0x222554u: goto label_222554;
        case 0x222558u: goto label_222558;
        case 0x22255cu: goto label_22255c;
        case 0x222560u: goto label_222560;
        case 0x222564u: goto label_222564;
        case 0x222568u: goto label_222568;
        case 0x22256cu: goto label_22256c;
        case 0x222570u: goto label_222570;
        case 0x222574u: goto label_222574;
        case 0x222578u: goto label_222578;
        case 0x22257cu: goto label_22257c;
        case 0x222580u: goto label_222580;
        case 0x222584u: goto label_222584;
        case 0x222588u: goto label_222588;
        case 0x22258cu: goto label_22258c;
        case 0x222590u: goto label_222590;
        case 0x222594u: goto label_222594;
        case 0x222598u: goto label_222598;
        case 0x22259cu: goto label_22259c;
        case 0x2225a0u: goto label_2225a0;
        case 0x2225a4u: goto label_2225a4;
        case 0x2225a8u: goto label_2225a8;
        case 0x2225acu: goto label_2225ac;
        case 0x2225b0u: goto label_2225b0;
        case 0x2225b4u: goto label_2225b4;
        case 0x2225b8u: goto label_2225b8;
        case 0x2225bcu: goto label_2225bc;
        case 0x2225c0u: goto label_2225c0;
        case 0x2225c4u: goto label_2225c4;
        case 0x2225c8u: goto label_2225c8;
        case 0x2225ccu: goto label_2225cc;
        case 0x2225d0u: goto label_2225d0;
        case 0x2225d4u: goto label_2225d4;
        case 0x2225d8u: goto label_2225d8;
        case 0x2225dcu: goto label_2225dc;
        case 0x2225e0u: goto label_2225e0;
        case 0x2225e4u: goto label_2225e4;
        case 0x2225e8u: goto label_2225e8;
        case 0x2225ecu: goto label_2225ec;
        case 0x2225f0u: goto label_2225f0;
        case 0x2225f4u: goto label_2225f4;
        case 0x2225f8u: goto label_2225f8;
        case 0x2225fcu: goto label_2225fc;
        case 0x222600u: goto label_222600;
        case 0x222604u: goto label_222604;
        case 0x222608u: goto label_222608;
        case 0x22260cu: goto label_22260c;
        case 0x222610u: goto label_222610;
        case 0x222614u: goto label_222614;
        case 0x222618u: goto label_222618;
        case 0x22261cu: goto label_22261c;
        case 0x222620u: goto label_222620;
        case 0x222624u: goto label_222624;
        case 0x222628u: goto label_222628;
        case 0x22262cu: goto label_22262c;
        case 0x222630u: goto label_222630;
        case 0x222634u: goto label_222634;
        case 0x222638u: goto label_222638;
        case 0x22263cu: goto label_22263c;
        case 0x222640u: goto label_222640;
        case 0x222644u: goto label_222644;
        case 0x222648u: goto label_222648;
        case 0x22264cu: goto label_22264c;
        case 0x222650u: goto label_222650;
        case 0x222654u: goto label_222654;
        case 0x222658u: goto label_222658;
        case 0x22265cu: goto label_22265c;
        case 0x222660u: goto label_222660;
        case 0x222664u: goto label_222664;
        case 0x222668u: goto label_222668;
        case 0x22266cu: goto label_22266c;
        case 0x222670u: goto label_222670;
        case 0x222674u: goto label_222674;
        case 0x222678u: goto label_222678;
        case 0x22267cu: goto label_22267c;
        case 0x222680u: goto label_222680;
        case 0x222684u: goto label_222684;
        case 0x222688u: goto label_222688;
        case 0x22268cu: goto label_22268c;
        case 0x222690u: goto label_222690;
        case 0x222694u: goto label_222694;
        case 0x222698u: goto label_222698;
        case 0x22269cu: goto label_22269c;
        case 0x2226a0u: goto label_2226a0;
        case 0x2226a4u: goto label_2226a4;
        case 0x2226a8u: goto label_2226a8;
        case 0x2226acu: goto label_2226ac;
        case 0x2226b0u: goto label_2226b0;
        case 0x2226b4u: goto label_2226b4;
        case 0x2226b8u: goto label_2226b8;
        case 0x2226bcu: goto label_2226bc;
        case 0x2226c0u: goto label_2226c0;
        case 0x2226c4u: goto label_2226c4;
        case 0x2226c8u: goto label_2226c8;
        case 0x2226ccu: goto label_2226cc;
        case 0x2226d0u: goto label_2226d0;
        case 0x2226d4u: goto label_2226d4;
        case 0x2226d8u: goto label_2226d8;
        case 0x2226dcu: goto label_2226dc;
        case 0x2226e0u: goto label_2226e0;
        case 0x2226e4u: goto label_2226e4;
        case 0x2226e8u: goto label_2226e8;
        case 0x2226ecu: goto label_2226ec;
        case 0x2226f0u: goto label_2226f0;
        case 0x2226f4u: goto label_2226f4;
        case 0x2226f8u: goto label_2226f8;
        case 0x2226fcu: goto label_2226fc;
        case 0x222700u: goto label_222700;
        case 0x222704u: goto label_222704;
        case 0x222708u: goto label_222708;
        case 0x22270cu: goto label_22270c;
        case 0x222710u: goto label_222710;
        case 0x222714u: goto label_222714;
        case 0x222718u: goto label_222718;
        case 0x22271cu: goto label_22271c;
        case 0x222720u: goto label_222720;
        case 0x222724u: goto label_222724;
        case 0x222728u: goto label_222728;
        case 0x22272cu: goto label_22272c;
        case 0x222730u: goto label_222730;
        case 0x222734u: goto label_222734;
        case 0x222738u: goto label_222738;
        case 0x22273cu: goto label_22273c;
        case 0x222740u: goto label_222740;
        case 0x222744u: goto label_222744;
        case 0x222748u: goto label_222748;
        case 0x22274cu: goto label_22274c;
        case 0x222750u: goto label_222750;
        case 0x222754u: goto label_222754;
        case 0x222758u: goto label_222758;
        case 0x22275cu: goto label_22275c;
        case 0x222760u: goto label_222760;
        case 0x222764u: goto label_222764;
        case 0x222768u: goto label_222768;
        case 0x22276cu: goto label_22276c;
        case 0x222770u: goto label_222770;
        case 0x222774u: goto label_222774;
        case 0x222778u: goto label_222778;
        case 0x22277cu: goto label_22277c;
        case 0x222780u: goto label_222780;
        case 0x222784u: goto label_222784;
        case 0x222788u: goto label_222788;
        case 0x22278cu: goto label_22278c;
        case 0x222790u: goto label_222790;
        case 0x222794u: goto label_222794;
        case 0x222798u: goto label_222798;
        case 0x22279cu: goto label_22279c;
        case 0x2227a0u: goto label_2227a0;
        case 0x2227a4u: goto label_2227a4;
        case 0x2227a8u: goto label_2227a8;
        case 0x2227acu: goto label_2227ac;
        case 0x2227b0u: goto label_2227b0;
        case 0x2227b4u: goto label_2227b4;
        case 0x2227b8u: goto label_2227b8;
        case 0x2227bcu: goto label_2227bc;
        case 0x2227c0u: goto label_2227c0;
        case 0x2227c4u: goto label_2227c4;
        case 0x2227c8u: goto label_2227c8;
        case 0x2227ccu: goto label_2227cc;
        case 0x2227d0u: goto label_2227d0;
        case 0x2227d4u: goto label_2227d4;
        case 0x2227d8u: goto label_2227d8;
        case 0x2227dcu: goto label_2227dc;
        case 0x2227e0u: goto label_2227e0;
        case 0x2227e4u: goto label_2227e4;
        case 0x2227e8u: goto label_2227e8;
        case 0x2227ecu: goto label_2227ec;
        case 0x2227f0u: goto label_2227f0;
        case 0x2227f4u: goto label_2227f4;
        case 0x2227f8u: goto label_2227f8;
        case 0x2227fcu: goto label_2227fc;
        case 0x222800u: goto label_222800;
        case 0x222804u: goto label_222804;
        case 0x222808u: goto label_222808;
        case 0x22280cu: goto label_22280c;
        case 0x222810u: goto label_222810;
        case 0x222814u: goto label_222814;
        case 0x222818u: goto label_222818;
        case 0x22281cu: goto label_22281c;
        case 0x222820u: goto label_222820;
        case 0x222824u: goto label_222824;
        case 0x222828u: goto label_222828;
        case 0x22282cu: goto label_22282c;
        case 0x222830u: goto label_222830;
        case 0x222834u: goto label_222834;
        case 0x222838u: goto label_222838;
        case 0x22283cu: goto label_22283c;
        case 0x222840u: goto label_222840;
        case 0x222844u: goto label_222844;
        case 0x222848u: goto label_222848;
        case 0x22284cu: goto label_22284c;
        case 0x222850u: goto label_222850;
        case 0x222854u: goto label_222854;
        case 0x222858u: goto label_222858;
        case 0x22285cu: goto label_22285c;
        case 0x222860u: goto label_222860;
        case 0x222864u: goto label_222864;
        case 0x222868u: goto label_222868;
        case 0x22286cu: goto label_22286c;
        case 0x222870u: goto label_222870;
        case 0x222874u: goto label_222874;
        case 0x222878u: goto label_222878;
        case 0x22287cu: goto label_22287c;
        case 0x222880u: goto label_222880;
        case 0x222884u: goto label_222884;
        case 0x222888u: goto label_222888;
        case 0x22288cu: goto label_22288c;
        case 0x222890u: goto label_222890;
        case 0x222894u: goto label_222894;
        case 0x222898u: goto label_222898;
        case 0x22289cu: goto label_22289c;
        case 0x2228a0u: goto label_2228a0;
        case 0x2228a4u: goto label_2228a4;
        case 0x2228a8u: goto label_2228a8;
        case 0x2228acu: goto label_2228ac;
        case 0x2228b0u: goto label_2228b0;
        case 0x2228b4u: goto label_2228b4;
        case 0x2228b8u: goto label_2228b8;
        case 0x2228bcu: goto label_2228bc;
        case 0x2228c0u: goto label_2228c0;
        case 0x2228c4u: goto label_2228c4;
        case 0x2228c8u: goto label_2228c8;
        case 0x2228ccu: goto label_2228cc;
        case 0x2228d0u: goto label_2228d0;
        case 0x2228d4u: goto label_2228d4;
        case 0x2228d8u: goto label_2228d8;
        case 0x2228dcu: goto label_2228dc;
        case 0x2228e0u: goto label_2228e0;
        case 0x2228e4u: goto label_2228e4;
        case 0x2228e8u: goto label_2228e8;
        case 0x2228ecu: goto label_2228ec;
        case 0x2228f0u: goto label_2228f0;
        case 0x2228f4u: goto label_2228f4;
        case 0x2228f8u: goto label_2228f8;
        case 0x2228fcu: goto label_2228fc;
        case 0x222900u: goto label_222900;
        case 0x222904u: goto label_222904;
        case 0x222908u: goto label_222908;
        case 0x22290cu: goto label_22290c;
        case 0x222910u: goto label_222910;
        case 0x222914u: goto label_222914;
        case 0x222918u: goto label_222918;
        case 0x22291cu: goto label_22291c;
        case 0x222920u: goto label_222920;
        case 0x222924u: goto label_222924;
        case 0x222928u: goto label_222928;
        case 0x22292cu: goto label_22292c;
        case 0x222930u: goto label_222930;
        case 0x222934u: goto label_222934;
        case 0x222938u: goto label_222938;
        case 0x22293cu: goto label_22293c;
        case 0x222940u: goto label_222940;
        case 0x222944u: goto label_222944;
        case 0x222948u: goto label_222948;
        case 0x22294cu: goto label_22294c;
        case 0x222950u: goto label_222950;
        case 0x222954u: goto label_222954;
        case 0x222958u: goto label_222958;
        case 0x22295cu: goto label_22295c;
        case 0x222960u: goto label_222960;
        case 0x222964u: goto label_222964;
        case 0x222968u: goto label_222968;
        case 0x22296cu: goto label_22296c;
        case 0x222970u: goto label_222970;
        case 0x222974u: goto label_222974;
        case 0x222978u: goto label_222978;
        case 0x22297cu: goto label_22297c;
        case 0x222980u: goto label_222980;
        case 0x222984u: goto label_222984;
        case 0x222988u: goto label_222988;
        case 0x22298cu: goto label_22298c;
        case 0x222990u: goto label_222990;
        case 0x222994u: goto label_222994;
        case 0x222998u: goto label_222998;
        case 0x22299cu: goto label_22299c;
        case 0x2229a0u: goto label_2229a0;
        case 0x2229a4u: goto label_2229a4;
        case 0x2229a8u: goto label_2229a8;
        case 0x2229acu: goto label_2229ac;
        case 0x2229b0u: goto label_2229b0;
        case 0x2229b4u: goto label_2229b4;
        case 0x2229b8u: goto label_2229b8;
        case 0x2229bcu: goto label_2229bc;
        case 0x2229c0u: goto label_2229c0;
        case 0x2229c4u: goto label_2229c4;
        case 0x2229c8u: goto label_2229c8;
        case 0x2229ccu: goto label_2229cc;
        case 0x2229d0u: goto label_2229d0;
        case 0x2229d4u: goto label_2229d4;
        case 0x2229d8u: goto label_2229d8;
        case 0x2229dcu: goto label_2229dc;
        case 0x2229e0u: goto label_2229e0;
        case 0x2229e4u: goto label_2229e4;
        case 0x2229e8u: goto label_2229e8;
        case 0x2229ecu: goto label_2229ec;
        case 0x2229f0u: goto label_2229f0;
        case 0x2229f4u: goto label_2229f4;
        case 0x2229f8u: goto label_2229f8;
        case 0x2229fcu: goto label_2229fc;
        case 0x222a00u: goto label_222a00;
        case 0x222a04u: goto label_222a04;
        case 0x222a08u: goto label_222a08;
        case 0x222a0cu: goto label_222a0c;
        case 0x222a10u: goto label_222a10;
        case 0x222a14u: goto label_222a14;
        case 0x222a18u: goto label_222a18;
        case 0x222a1cu: goto label_222a1c;
        case 0x222a20u: goto label_222a20;
        case 0x222a24u: goto label_222a24;
        case 0x222a28u: goto label_222a28;
        case 0x222a2cu: goto label_222a2c;
        case 0x222a30u: goto label_222a30;
        case 0x222a34u: goto label_222a34;
        case 0x222a38u: goto label_222a38;
        case 0x222a3cu: goto label_222a3c;
        case 0x222a40u: goto label_222a40;
        case 0x222a44u: goto label_222a44;
        case 0x222a48u: goto label_222a48;
        case 0x222a4cu: goto label_222a4c;
        case 0x222a50u: goto label_222a50;
        case 0x222a54u: goto label_222a54;
        case 0x222a58u: goto label_222a58;
        case 0x222a5cu: goto label_222a5c;
        case 0x222a60u: goto label_222a60;
        case 0x222a64u: goto label_222a64;
        case 0x222a68u: goto label_222a68;
        case 0x222a6cu: goto label_222a6c;
        case 0x222a70u: goto label_222a70;
        case 0x222a74u: goto label_222a74;
        case 0x222a78u: goto label_222a78;
        case 0x222a7cu: goto label_222a7c;
        case 0x222a80u: goto label_222a80;
        case 0x222a84u: goto label_222a84;
        case 0x222a88u: goto label_222a88;
        case 0x222a8cu: goto label_222a8c;
        case 0x222a90u: goto label_222a90;
        case 0x222a94u: goto label_222a94;
        case 0x222a98u: goto label_222a98;
        case 0x222a9cu: goto label_222a9c;
        case 0x222aa0u: goto label_222aa0;
        case 0x222aa4u: goto label_222aa4;
        case 0x222aa8u: goto label_222aa8;
        case 0x222aacu: goto label_222aac;
        case 0x222ab0u: goto label_222ab0;
        case 0x222ab4u: goto label_222ab4;
        case 0x222ab8u: goto label_222ab8;
        case 0x222abcu: goto label_222abc;
        case 0x222ac0u: goto label_222ac0;
        case 0x222ac4u: goto label_222ac4;
        case 0x222ac8u: goto label_222ac8;
        case 0x222accu: goto label_222acc;
        case 0x222ad0u: goto label_222ad0;
        case 0x222ad4u: goto label_222ad4;
        case 0x222ad8u: goto label_222ad8;
        case 0x222adcu: goto label_222adc;
        case 0x222ae0u: goto label_222ae0;
        case 0x222ae4u: goto label_222ae4;
        case 0x222ae8u: goto label_222ae8;
        case 0x222aecu: goto label_222aec;
        case 0x222af0u: goto label_222af0;
        case 0x222af4u: goto label_222af4;
        case 0x222af8u: goto label_222af8;
        case 0x222afcu: goto label_222afc;
        default: return;
    }

label_222330:
    // 0x222330: 0x1062005e  beq         $v1, $v0, . + 4 + (0x5E << 2)
label_222334:
    if (ctx->pc == 0x222334u) {
        ctx->pc = 0x222334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222330u;
        // 0x222334: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222338u;
        goto label_222338;
    }
    ctx->pc = 0x222330u;
    {
        const bool branch_taken_0x222330 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x222334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222330u;
        // 0x222334: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222330) {
            ctx->pc = 0x2224ACu;
            goto label_2224ac;
        }
    }
    ctx->pc = 0x222338u;
label_222338:
    // 0x222338: 0x10650053  beq         $v1, $a1, . + 4 + (0x53 << 2)
label_22233c:
    if (ctx->pc == 0x22233Cu) {
        ctx->pc = 0x22233Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222338u;
        // 0x22233c: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222340u;
        goto label_222340;
    }
    ctx->pc = 0x222338u;
    {
        const bool branch_taken_0x222338 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x22233Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222338u;
        // 0x22233c: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222338) {
            ctx->pc = 0x222488u;
            goto label_222488;
        }
    }
    ctx->pc = 0x222340u;
label_222340:
    // 0x222340: 0x10620042  beq         $v1, $v0, . + 4 + (0x42 << 2)
label_222344:
    if (ctx->pc == 0x222344u) {
        ctx->pc = 0x222348u;
        goto label_222348;
    }
    ctx->pc = 0x222340u;
    {
        const bool branch_taken_0x222340 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x222340) {
            ctx->pc = 0x22244Cu;
            goto label_22244c;
        }
    }
    ctx->pc = 0x222348u;
label_222348:
    // 0x222348: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x222348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_22234c:
    // 0x22234c: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
label_222350:
    if (ctx->pc == 0x222350u) {
        ctx->pc = 0x222350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22234Cu;
        // 0x222350: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222354u;
        goto label_222354;
    }
    ctx->pc = 0x22234Cu;
    {
        const bool branch_taken_0x22234c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x222350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22234Cu;
        // 0x222350: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22234c) {
            ctx->pc = 0x2223C4u;
            goto label_2223c4;
        }
    }
    ctx->pc = 0x222354u;
label_222354:
    // 0x222354: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
label_222358:
    if (ctx->pc == 0x222358u) {
        ctx->pc = 0x22235Cu;
        goto label_22235c;
    }
    ctx->pc = 0x222354u;
    {
        const bool branch_taken_0x222354 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x222354) {
            ctx->pc = 0x222390u;
            goto label_222390;
        }
    }
    ctx->pc = 0x22235Cu;
label_22235c:
    // 0x22235c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x22235cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_222360:
    // 0x222360: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_222364:
    if (ctx->pc == 0x222364u) {
        ctx->pc = 0x222368u;
        goto label_222368;
    }
    ctx->pc = 0x222360u;
    {
        const bool branch_taken_0x222360 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x222360) {
            ctx->pc = 0x222370u;
            goto label_222370;
        }
    }
    ctx->pc = 0x222368u;
label_222368:
    // 0x222368: 0x1000006a  b           . + 4 + (0x6A << 2)
label_22236c:
    if (ctx->pc == 0x22236Cu) {
        ctx->pc = 0x22236Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222368u;
        // 0x22236c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222370u;
        goto label_222370;
    }
    ctx->pc = 0x222368u;
    {
        const bool branch_taken_0x222368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22236Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222368u;
        // 0x22236c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222368) {
            ctx->pc = 0x222514u;
            goto label_222514;
        }
    }
    ctx->pc = 0x222370u;
label_222370:
    // 0x222370: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x222370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_222374:
    // 0x222374: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x222374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_222378:
    // 0x222378: 0x9463000a  lhu         $v1, 0xA($v1)
    ctx->pc = 0x222378u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
label_22237c:
    // 0x22237c: 0x14620064  bne         $v1, $v0, . + 4 + (0x64 << 2)
label_222380:
    if (ctx->pc == 0x222380u) {
        ctx->pc = 0x222384u;
        goto label_222384;
    }
    ctx->pc = 0x22237Cu;
    {
        const bool branch_taken_0x22237c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22237c) {
            ctx->pc = 0x222510u;
            goto label_222510;
        }
    }
    ctx->pc = 0x222384u;
label_222384:
    // 0x222384: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x222384u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_222388:
    // 0x222388: 0x10000061  b           . + 4 + (0x61 << 2)
label_22238c:
    if (ctx->pc == 0x22238Cu) {
        ctx->pc = 0x22238Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222388u;
        // 0x22238c: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222390u;
        goto label_222390;
    }
    ctx->pc = 0x222388u;
    {
        const bool branch_taken_0x222388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22238Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222388u;
        // 0x22238c: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222388) {
            ctx->pc = 0x222510u;
            goto label_222510;
        }
    }
    ctx->pc = 0x222390u;
label_222390:
    // 0x222390: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x222390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_222394:
    // 0x222394: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x222394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_222398:
    // 0x222398: 0x9463000a  lhu         $v1, 0xA($v1)
    ctx->pc = 0x222398u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
label_22239c:
    // 0x22239c: 0x1462005c  bne         $v1, $v0, . + 4 + (0x5C << 2)
label_2223a0:
    if (ctx->pc == 0x2223A0u) {
        ctx->pc = 0x2223A4u;
        goto label_2223a4;
    }
    ctx->pc = 0x22239Cu;
    {
        const bool branch_taken_0x22239c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22239c) {
            ctx->pc = 0x222510u;
            goto label_222510;
        }
    }
    ctx->pc = 0x2223A4u;
label_2223a4:
    // 0x2223a4: 0xc084b7c  jal         func_212DF0
label_2223a8:
    if (ctx->pc == 0x2223A8u) {
        ctx->pc = 0x2223A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2223A4u;
        // 0x2223a8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2223ACu;
        goto label_2223ac;
    }
    ctx->pc = 0x2223A4u;
    SET_GPR_U32(ctx, 31, 0x2223ACu);
    ctx->pc = 0x2223A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2223A4u;
    // 0x2223a8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212DF0u;
    { ctx->pc = 0x212df0; return; }
    ctx->pc = 0x2223ACu;
label_2223ac:
    // 0x2223ac: 0x10400058  beqz        $v0, . + 4 + (0x58 << 2)
label_2223b0:
    if (ctx->pc == 0x2223B0u) {
        ctx->pc = 0x2223B4u;
        goto label_2223b4;
    }
    ctx->pc = 0x2223ACu;
    {
        const bool branch_taken_0x2223ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2223ac) {
            ctx->pc = 0x222510u;
            goto label_222510;
        }
    }
    ctx->pc = 0x2223B4u;
label_2223b4:
    // 0x2223b4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2223b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2223b8:
    // 0x2223b8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2223b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2223bc:
    // 0x2223bc: 0x10000054  b           . + 4 + (0x54 << 2)
label_2223c0:
    if (ctx->pc == 0x2223C0u) {
        ctx->pc = 0x2223C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2223BCu;
        // 0x2223c0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2223C4u;
        goto label_2223c4;
    }
    ctx->pc = 0x2223BCu;
    {
        const bool branch_taken_0x2223bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2223C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2223BCu;
        // 0x2223c0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2223bc) {
            ctx->pc = 0x222510u;
            goto label_222510;
        }
    }
    ctx->pc = 0x2223C4u;
label_2223c4:
    // 0x2223c4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2223c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2223c8:
    // 0x2223c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2223c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2223cc:
    // 0x2223cc: 0x9463000a  lhu         $v1, 0xA($v1)
    ctx->pc = 0x2223ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
label_2223d0:
    // 0x2223d0: 0x1462004f  bne         $v1, $v0, . + 4 + (0x4F << 2)
label_2223d4:
    if (ctx->pc == 0x2223D4u) {
        ctx->pc = 0x2223D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2223D0u;
        // 0x2223d4: 0x3c01002f  lui         $at, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2223D8u;
        goto label_2223d8;
    }
    ctx->pc = 0x2223D0u;
    {
        const bool branch_taken_0x2223d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2223D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2223D0u;
        // 0x2223d4: 0x3c01002f  lui         $at, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2223d0) {
            ctx->pc = 0x222510u;
            goto label_222510;
        }
    }
    ctx->pc = 0x2223D8u;
label_2223d8:
    // 0x2223d8: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x2223d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
label_2223dc:
    // 0x2223dc: 0x8c232570  lw          $v1, 0x2570($at)
    ctx->pc = 0x2223dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9584)));
label_2223e0:
    // 0x2223e0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2223e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2223e4:
    // 0x2223e4: 0x9463000a  lhu         $v1, 0xA($v1)
    ctx->pc = 0x2223e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
label_2223e8:
    // 0x2223e8: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_2223ec:
    if (ctx->pc == 0x2223ECu) {
        ctx->pc = 0x2223ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2223E8u;
        // 0x2223ec: 0x24842570  addiu       $a0, $a0, 0x2570 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9584));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2223F0u;
        goto label_2223f0;
    }
    ctx->pc = 0x2223E8u;
    {
        const bool branch_taken_0x2223e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2223ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2223E8u;
        // 0x2223ec: 0x24842570  addiu       $a0, $a0, 0x2570 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2223e8) {
            ctx->pc = 0x222410u;
            goto label_222410;
        }
    }
    ctx->pc = 0x2223F0u;
label_2223f0:
    // 0x2223f0: 0xc0448bc  jal         func_1122F0
label_2223f4:
    if (ctx->pc == 0x2223F4u) {
        ctx->pc = 0x2223F8u;
        goto label_2223f8;
    }
    ctx->pc = 0x2223F0u;
    SET_GPR_U32(ctx, 31, 0x2223F8u);
    ctx->pc = 0x1122F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1122F0u, 0x2223F0u, 0x2223F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2223F8u;
label_2223f8:
    // 0x2223f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2223fc:
    if (ctx->pc == 0x2223FCu) {
        ctx->pc = 0x222400u;
        goto label_222400;
    }
    ctx->pc = 0x2223F8u;
    {
        const bool branch_taken_0x2223f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2223f8) {
            ctx->pc = 0x222410u;
            goto label_222410;
        }
    }
    ctx->pc = 0x222400u;
label_222400:
    // 0x222400: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x222400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_222404:
    // 0x222404: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x222404u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_222408:
    // 0x222408: 0x10000041  b           . + 4 + (0x41 << 2)
label_22240c:
    if (ctx->pc == 0x22240Cu) {
        ctx->pc = 0x22240Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222408u;
        // 0x22240c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222410u;
        goto label_222410;
    }
    ctx->pc = 0x222408u;
    {
        const bool branch_taken_0x222408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22240Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222408u;
        // 0x22240c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222408) {
            ctx->pc = 0x222510u;
            goto label_222510;
        }
    }
    ctx->pc = 0x222410u;
label_222410:
    // 0x222410: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x222410u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
label_222414:
    // 0x222414: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x222414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_222418:
    // 0x222418: 0x24846d28  addiu       $a0, $a0, 0x6D28
    ctx->pc = 0x222418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27944));
label_22241c:
    // 0x22241c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x22241cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_222420:
    // 0x222420: 0x9463000a  lhu         $v1, 0xA($v1)
    ctx->pc = 0x222420u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
label_222424:
    // 0x222424: 0x1462003a  bne         $v1, $v0, . + 4 + (0x3A << 2)
label_222428:
    if (ctx->pc == 0x222428u) {
        ctx->pc = 0x22242Cu;
        goto label_22242c;
    }
    ctx->pc = 0x222424u;
    {
        const bool branch_taken_0x222424 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x222424) {
            ctx->pc = 0x222510u;
            goto label_222510;
        }
    }
    ctx->pc = 0x22242Cu;
label_22242c:
    // 0x22242c: 0xc0448bc  jal         func_1122F0
label_222430:
    if (ctx->pc == 0x222430u) {
        ctx->pc = 0x222434u;
        goto label_222434;
    }
    ctx->pc = 0x22242Cu;
    SET_GPR_U32(ctx, 31, 0x222434u);
    ctx->pc = 0x1122F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1122F0u, 0x22242Cu, 0x222434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222434u;
label_222434:
    // 0x222434: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
label_222438:
    if (ctx->pc == 0x222438u) {
        ctx->pc = 0x22243Cu;
        goto label_22243c;
    }
    ctx->pc = 0x222434u;
    {
        const bool branch_taken_0x222434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x222434) {
            ctx->pc = 0x222510u;
            goto label_222510;
        }
    }
    ctx->pc = 0x22243Cu;
label_22243c:
    // 0x22243c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x22243cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_222440:
    // 0x222440: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x222440u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_222444:
    // 0x222444: 0x10000032  b           . + 4 + (0x32 << 2)
label_222448:
    if (ctx->pc == 0x222448u) {
        ctx->pc = 0x222448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222444u;
        // 0x222448: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22244Cu;
        goto label_22244c;
    }
    ctx->pc = 0x222444u;
    {
        const bool branch_taken_0x222444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222444u;
        // 0x222448: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222444) {
            ctx->pc = 0x222510u;
            goto label_222510;
        }
    }
    ctx->pc = 0x22244Cu;
label_22244c:
    // 0x22244c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x22244cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_222450:
    // 0x222450: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x222450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_222454:
    // 0x222454: 0x9463000a  lhu         $v1, 0xA($v1)
    ctx->pc = 0x222454u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
label_222458:
    // 0x222458: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_22245c:
    if (ctx->pc == 0x22245Cu) {
        ctx->pc = 0x22245Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222458u;
        // 0x22245c: 0x240200c2  addiu       $v0, $zero, 0xC2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 194));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222460u;
        goto label_222460;
    }
    ctx->pc = 0x222458u;
    {
        const bool branch_taken_0x222458 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x22245Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222458u;
        // 0x22245c: 0x240200c2  addiu       $v0, $zero, 0xC2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 194));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222458) {
            ctx->pc = 0x222470u;
            goto label_222470;
        }
    }
    ctx->pc = 0x222460u;
label_222460:
    // 0x222460: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x222460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_222464:
    // 0x222464: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x222464u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_222468:
    // 0x222468: 0x10000029  b           . + 4 + (0x29 << 2)
label_22246c:
    if (ctx->pc == 0x22246Cu) {
        ctx->pc = 0x22246Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222468u;
        // 0x22246c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222470u;
        goto label_222470;
    }
    ctx->pc = 0x222468u;
    {
        const bool branch_taken_0x222468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22246Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222468u;
        // 0x22246c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222468) {
            ctx->pc = 0x222510u;
            goto label_222510;
        }
    }
    ctx->pc = 0x222470u;
label_222470:
    // 0x222470: 0x14620027  bne         $v1, $v0, . + 4 + (0x27 << 2)
label_222474:
    if (ctx->pc == 0x222474u) {
        ctx->pc = 0x222478u;
        goto label_222478;
    }
    ctx->pc = 0x222470u;
    {
        const bool branch_taken_0x222470 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x222470) {
            ctx->pc = 0x222510u;
            goto label_222510;
        }
    }
    ctx->pc = 0x222478u;
label_222478:
    // 0x222478: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x222478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_22247c:
    // 0x22247c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x22247cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_222480:
    // 0x222480: 0x10000023  b           . + 4 + (0x23 << 2)
label_222484:
    if (ctx->pc == 0x222484u) {
        ctx->pc = 0x222484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222480u;
        // 0x222484: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222488u;
        goto label_222488;
    }
    ctx->pc = 0x222480u;
    {
        const bool branch_taken_0x222480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222480u;
        // 0x222484: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222480) {
            ctx->pc = 0x222510u;
            goto label_222510;
        }
    }
    ctx->pc = 0x222488u;
label_222488:
    // 0x222488: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x222488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22248c:
    // 0x22248c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22248cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_222490:
    // 0x222490: 0x9463000a  lhu         $v1, 0xA($v1)
    ctx->pc = 0x222490u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
label_222494:
    // 0x222494: 0x1462001e  bne         $v1, $v0, . + 4 + (0x1E << 2)
label_222498:
    if (ctx->pc == 0x222498u) {
        ctx->pc = 0x22249Cu;
        goto label_22249c;
    }
    ctx->pc = 0x222494u;
    {
        const bool branch_taken_0x222494 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x222494) {
            ctx->pc = 0x222510u;
            goto label_222510;
        }
    }
    ctx->pc = 0x22249Cu;
label_22249c:
    // 0x22249c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22249cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2224a0:
    // 0x2224a0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2224a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2224a4:
    // 0x2224a4: 0x1000001a  b           . + 4 + (0x1A << 2)
label_2224a8:
    if (ctx->pc == 0x2224A8u) {
        ctx->pc = 0x2224A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2224A4u;
        // 0x2224a8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2224ACu;
        goto label_2224ac;
    }
    ctx->pc = 0x2224A4u;
    {
        const bool branch_taken_0x2224a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2224A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2224A4u;
        // 0x2224a8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2224a4) {
            ctx->pc = 0x222510u;
            goto label_222510;
        }
    }
    ctx->pc = 0x2224ACu;
label_2224ac:
    // 0x2224ac: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2224acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2224b0:
    // 0x2224b0: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x2224b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_2224b4:
    // 0x2224b4: 0x9463000a  lhu         $v1, 0xA($v1)
    ctx->pc = 0x2224b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
label_2224b8:
    // 0x2224b8: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
label_2224bc:
    if (ctx->pc == 0x2224BCu) {
        ctx->pc = 0x2224C0u;
        goto label_2224c0;
    }
    ctx->pc = 0x2224B8u;
    {
        const bool branch_taken_0x2224b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2224b8) {
            ctx->pc = 0x222510u;
            goto label_222510;
        }
    }
    ctx->pc = 0x2224C0u;
label_2224c0:
    // 0x2224c0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2224c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2224c4:
    // 0x2224c4: 0x10000012  b           . + 4 + (0x12 << 2)
label_2224c8:
    if (ctx->pc == 0x2224C8u) {
        ctx->pc = 0x2224C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2224C4u;
        // 0x2224c8: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2224CCu;
        goto label_2224cc;
    }
    ctx->pc = 0x2224C4u;
    {
        const bool branch_taken_0x2224c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2224C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2224C4u;
        // 0x2224c8: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2224c4) {
            ctx->pc = 0x222510u;
            goto label_222510;
        }
    }
    ctx->pc = 0x2224CCu;
label_2224cc:
    // 0x2224cc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2224ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2224d0:
    // 0x2224d0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2224d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2224d4:
    // 0x2224d4: 0x9463000a  lhu         $v1, 0xA($v1)
    ctx->pc = 0x2224d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
label_2224d8:
    // 0x2224d8: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
label_2224dc:
    if (ctx->pc == 0x2224DCu) {
        ctx->pc = 0x2224DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2224D8u;
        // 0x2224dc: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2224E0u;
        goto label_2224e0;
    }
    ctx->pc = 0x2224D8u;
    {
        const bool branch_taken_0x2224d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2224DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2224D8u;
        // 0x2224dc: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2224d8) {
            ctx->pc = 0x222510u;
            goto label_222510;
        }
    }
    ctx->pc = 0x2224E0u;
label_2224e0:
    // 0x2224e0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2224e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2224e4:
    // 0x2224e4: 0x1000000a  b           . + 4 + (0xA << 2)
label_2224e8:
    if (ctx->pc == 0x2224E8u) {
        ctx->pc = 0x2224E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2224E4u;
        // 0x2224e8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2224ECu;
        goto label_2224ec;
    }
    ctx->pc = 0x2224E4u;
    {
        const bool branch_taken_0x2224e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2224E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2224E4u;
        // 0x2224e8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2224e4) {
            ctx->pc = 0x222510u;
            goto label_222510;
        }
    }
    ctx->pc = 0x2224ECu;
label_2224ec:
    // 0x2224ec: 0x90820034  lbu         $v0, 0x34($a0)
    ctx->pc = 0x2224ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 52)));
label_2224f0:
    // 0x2224f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2224f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2224f4:
    // 0x2224f4: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_2224f8:
    if (ctx->pc == 0x2224F8u) {
        ctx->pc = 0x2224FCu;
        goto label_2224fc;
    }
    ctx->pc = 0x2224F4u;
    {
        const bool branch_taken_0x2224f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2224f4) {
            ctx->pc = 0x222510u;
            goto label_222510;
        }
    }
    ctx->pc = 0x2224FCu;
label_2224fc:
    // 0x2224fc: 0x90820035  lbu         $v0, 0x35($a0)
    ctx->pc = 0x2224fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 53)));
label_222500:
    // 0x222500: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_222504:
    if (ctx->pc == 0x222504u) {
        ctx->pc = 0x222508u;
        goto label_222508;
    }
    ctx->pc = 0x222500u;
    {
        const bool branch_taken_0x222500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x222500) {
            ctx->pc = 0x222510u;
            goto label_222510;
        }
    }
    ctx->pc = 0x222508u;
label_222508:
    // 0x222508: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x222508u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_22250c:
    // 0x22250c: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x22250cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_222510:
    // 0x222510: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x222510u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_222514:
    // 0x222514: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x222514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_222518:
    // 0x222518: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x222518u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22251c:
    // 0x22251c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22251cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_222520:
    // 0x222520: 0x3e00008  jr          $ra
label_222524:
    if (ctx->pc == 0x222524u) {
        ctx->pc = 0x222524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222520u;
        // 0x222524: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222528u;
        goto label_222528;
    }
    ctx->pc = 0x222520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222520u;
        // 0x222524: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x222528u;
label_222528:
    // 0x222528: 0x0  nop
    ctx->pc = 0x222528u;
    // NOP
label_22252c:
    // 0x22252c: 0x0  nop
    ctx->pc = 0x22252cu;
    // NOP
label_222530:
    // 0x222530: 0x90830034  lbu         $v1, 0x34($a0)
    ctx->pc = 0x222530u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 52)));
label_222534:
    // 0x222534: 0x10600049  beqz        $v1, . + 4 + (0x49 << 2)
label_222538:
    if (ctx->pc == 0x222538u) {
        ctx->pc = 0x222538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222534u;
        // 0x222538: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22253Cu;
        goto label_22253c;
    }
    ctx->pc = 0x222534u;
    {
        const bool branch_taken_0x222534 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x222538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222534u;
        // 0x222538: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222534) {
            ctx->pc = 0x22265Cu;
            goto label_22265c;
        }
    }
    ctx->pc = 0x22253Cu;
label_22253c:
    // 0x22253c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x22253cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_222540:
    // 0x222540: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x222540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_222544:
    // 0x222544: 0x84254af4  lh          $a1, 0x4AF4($at)
    ctx->pc = 0x222544u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19188)));
label_222548:
    // 0x222548: 0x14a30044  bne         $a1, $v1, . + 4 + (0x44 << 2)
label_22254c:
    if (ctx->pc == 0x22254Cu) {
        ctx->pc = 0x222550u;
        goto label_222550;
    }
    ctx->pc = 0x222548u;
    {
        const bool branch_taken_0x222548 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x222548) {
            ctx->pc = 0x22265Cu;
            goto label_22265c;
        }
    }
    ctx->pc = 0x222550u;
label_222550:
    // 0x222550: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x222550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_222554:
    // 0x222554: 0x9463000a  lhu         $v1, 0xA($v1)
    ctx->pc = 0x222554u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
label_222558:
    // 0x222558: 0x28610029  slti        $at, $v1, 0x29
    ctx->pc = 0x222558u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
label_22255c:
    // 0x22255c: 0x1020003f  beqz        $at, . + 4 + (0x3F << 2)
label_222560:
    if (ctx->pc == 0x222560u) {
        ctx->pc = 0x222564u;
        goto label_222564;
    }
    ctx->pc = 0x22255Cu;
    {
        const bool branch_taken_0x22255c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x22255c) {
            ctx->pc = 0x22265Cu;
            goto label_22265c;
        }
    }
    ctx->pc = 0x222564u;
label_222564:
    // 0x222564: 0x8f84863c  lw          $a0, -0x79C4($gp)
    ctx->pc = 0x222564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936124)));
label_222568:
    // 0x222568: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
label_22256c:
    if (ctx->pc == 0x22256Cu) {
        ctx->pc = 0x22256Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222568u;
        // 0x22256c: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222570u;
        goto label_222570;
    }
    ctx->pc = 0x222568u;
    {
        const bool branch_taken_0x222568 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22256Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222568u;
        // 0x22256c: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222568) {
            ctx->pc = 0x2225A8u;
            goto label_2225a8;
        }
    }
    ctx->pc = 0x222570u;
label_222570:
    // 0x222570: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x222570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_222574:
    // 0x222574: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x222574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_222578:
    // 0x222578: 0x9027490c  lbu         $a3, 0x490C($at)
    ctx->pc = 0x222578u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_22257c:
    // 0x22257c: 0x3c060029  lui         $a2, 0x29
    ctx->pc = 0x22257cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)41 << 16));
label_222580:
    // 0x222580: 0x652014  dsllv       $a0, $a1, $v1
    ctx->pc = 0x222580u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (GPR_U32(ctx, 3) & 0x3F));
label_222584:
    // 0x222584: 0x24c6e1b0  addiu       $a2, $a2, -0x1E50
    ctx->pc = 0x222584u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959536));
label_222588:
    // 0x222588: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x222588u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_22258c:
    // 0x22258c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x22258cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_222590:
    // 0x222590: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x222590u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_222594:
    // 0x222594: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x222594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_222598:
    // 0x222598: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
label_22259c:
    if (ctx->pc == 0x22259Cu) {
        ctx->pc = 0x2225A0u;
        goto label_2225a0;
    }
    ctx->pc = 0x222598u;
    {
        const bool branch_taken_0x222598 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x222598) {
            ctx->pc = 0x22265Cu;
            goto label_22265c;
        }
    }
    ctx->pc = 0x2225A0u;
label_2225a0:
    // 0x2225a0: 0x1000002e  b           . + 4 + (0x2E << 2)
label_2225a4:
    if (ctx->pc == 0x2225A4u) {
        ctx->pc = 0x2225A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2225A0u;
        // 0x2225a4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2225A8u;
        goto label_2225a8;
    }
    ctx->pc = 0x2225A0u;
    {
        const bool branch_taken_0x2225a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2225A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2225A0u;
        // 0x2225a4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2225a0) {
            ctx->pc = 0x22265Cu;
            goto label_22265c;
        }
    }
    ctx->pc = 0x2225A8u;
label_2225a8:
    // 0x2225a8: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x2225a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_2225ac:
    // 0x2225ac: 0x8c274970  lw          $a3, 0x4970($at)
    ctx->pc = 0x2225acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18800)));
label_2225b0:
    // 0x2225b0: 0x24a53420  addiu       $a1, $a1, 0x3420
    ctx->pc = 0x2225b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13344));
label_2225b4:
    // 0x2225b4: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x2225b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_2225b8:
    // 0x2225b8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x2225b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_2225bc:
    // 0x2225bc: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x2225bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_2225c0:
    // 0x2225c0: 0x90a80000  lbu         $t0, 0x0($a1)
    ctx->pc = 0x2225c0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_2225c4:
    // 0x2225c4: 0x10e40007  beq         $a3, $a0, . + 4 + (0x7 << 2)
label_2225c8:
    if (ctx->pc == 0x2225C8u) {
        ctx->pc = 0x2225C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2225C4u;
        // 0x2225c8: 0x9026490d  lbu         $a2, 0x490D($at) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2225CCu;
        goto label_2225cc;
    }
    ctx->pc = 0x2225C4u;
    {
        const bool branch_taken_0x2225c4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        ctx->pc = 0x2225C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2225C4u;
        // 0x2225c8: 0x9026490d  lbu         $a2, 0x490D($at) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18701)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2225c4) {
            ctx->pc = 0x2225E4u;
            goto label_2225e4;
        }
    }
    ctx->pc = 0x2225CCu;
label_2225cc:
    // 0x2225cc: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x2225ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2225d0:
    // 0x2225d0: 0x10e40005  beq         $a3, $a0, . + 4 + (0x5 << 2)
label_2225d4:
    if (ctx->pc == 0x2225D4u) {
        ctx->pc = 0x2225D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2225D0u;
        // 0x2225d4: 0x24090003  addiu       $t1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2225D8u;
        goto label_2225d8;
    }
    ctx->pc = 0x2225D0u;
    {
        const bool branch_taken_0x2225d0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        ctx->pc = 0x2225D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2225D0u;
        // 0x2225d4: 0x24090003  addiu       $t1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2225d0) {
            ctx->pc = 0x2225E8u;
            goto label_2225e8;
        }
    }
    ctx->pc = 0x2225D8u;
label_2225d8:
    // 0x2225d8: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x2225d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2225dc:
    // 0x2225dc: 0x14e40004  bne         $a3, $a0, . + 4 + (0x4 << 2)
label_2225e0:
    if (ctx->pc == 0x2225E0u) {
        ctx->pc = 0x2225E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2225DCu;
        // 0x2225e0: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2225E4u;
        goto label_2225e4;
    }
    ctx->pc = 0x2225DCu;
    {
        const bool branch_taken_0x2225dc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 4));
        ctx->pc = 0x2225E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2225DCu;
        // 0x2225e0: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2225dc) {
            ctx->pc = 0x2225F0u;
            goto label_2225f0;
        }
    }
    ctx->pc = 0x2225E4u;
label_2225e4:
    // 0x2225e4: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x2225e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2225e8:
    // 0x2225e8: 0x10000004  b           . + 4 + (0x4 << 2)
label_2225ec:
    if (ctx->pc == 0x2225ECu) {
        ctx->pc = 0x2225ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2225E8u;
        // 0x2225ec: 0x82040  sll         $a0, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2225F0u;
        goto label_2225f0;
    }
    ctx->pc = 0x2225E8u;
    {
        const bool branch_taken_0x2225e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2225ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2225E8u;
        // 0x2225ec: 0x82040  sll         $a0, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2225e8) {
            ctx->pc = 0x2225FCu;
            goto label_2225fc;
        }
    }
    ctx->pc = 0x2225F0u;
label_2225f0:
    // 0x2225f0: 0x9029490f  lbu         $t1, 0x490F($at)
    ctx->pc = 0x2225f0u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18703)));
label_2225f4:
    // 0x2225f4: 0x0  nop
    ctx->pc = 0x2225f4u;
    // NOP
label_2225f8:
    // 0x2225f8: 0x82040  sll         $a0, $t0, 1
    ctx->pc = 0x2225f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_2225fc:
    // 0x2225fc: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x2225fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
label_222600:
    // 0x222600: 0x638c0  sll         $a3, $a2, 3
    ctx->pc = 0x222600u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_222604:
    // 0x222604: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x222604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_222608:
    // 0x222608: 0x430c0  sll         $a2, $a0, 3
    ctx->pc = 0x222608u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_22260c:
    // 0x22260c: 0x24a5dad0  addiu       $a1, $a1, -0x2530
    ctx->pc = 0x22260cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957776));
label_222610:
    // 0x222610: 0x92040  sll         $a0, $t1, 1
    ctx->pc = 0x222610u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_222614:
    // 0x222614: 0xc83023  subu        $a2, $a2, $t0
    ctx->pc = 0x222614u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_222618:
    // 0x222618: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x222618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
label_22261c:
    // 0x22261c: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x22261cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_222620:
    // 0x222620: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x222620u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_222624:
    // 0x222624: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x222624u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_222628:
    // 0x222628: 0x892023  subu        $a0, $a0, $t1
    ctx->pc = 0x222628u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
label_22262c:
    // 0x22262c: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x22262cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_222630:
    // 0x222630: 0x24c40000  addiu       $a0, $a2, 0x0
    ctx->pc = 0x222630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 0));
label_222634:
    // 0x222634: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x222634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_222638:
    // 0x222638: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x222638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22263c:
    // 0x22263c: 0x24860000  addiu       $a2, $a0, 0x0
    ctx->pc = 0x22263cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
label_222640:
    // 0x222640: 0x652014  dsllv       $a0, $a1, $v1
    ctx->pc = 0x222640u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (GPR_U32(ctx, 3) & 0x3F));
label_222644:
    // 0x222644: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x222644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_222648:
    // 0x222648: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x222648u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_22264c:
    // 0x22264c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x22264cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_222650:
    // 0x222650: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_222654:
    if (ctx->pc == 0x222654u) {
        ctx->pc = 0x222658u;
        goto label_222658;
    }
    ctx->pc = 0x222650u;
    {
        const bool branch_taken_0x222650 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x222650) {
            ctx->pc = 0x22265Cu;
            goto label_22265c;
        }
    }
    ctx->pc = 0x222658u;
label_222658:
    // 0x222658: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x222658u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_22265c:
    // 0x22265c: 0x3e00008  jr          $ra
label_222660:
    if (ctx->pc == 0x222660u) {
        ctx->pc = 0x222664u;
        goto label_222664;
    }
    ctx->pc = 0x22265Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22265Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x222664u;
label_222664:
    // 0x222664: 0x0  nop
    ctx->pc = 0x222664u;
    // NOP
label_222668:
    // 0x222668: 0x0  nop
    ctx->pc = 0x222668u;
    // NOP
label_22266c:
    // 0x22266c: 0x0  nop
    ctx->pc = 0x22266cu;
    // NOP
label_222670:
    // 0x222670: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x222670u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_222674:
    // 0x222674: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x222674u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_222678:
    // 0x222678: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x222678u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_22267c:
    // 0x22267c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22267cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_222680:
    // 0x222680: 0x24844a30  addiu       $a0, $a0, 0x4A30
    ctx->pc = 0x222680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18992));
label_222684:
    // 0x222684: 0x874021  addu        $t0, $a0, $a3
    ctx->pc = 0x222684u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_222688:
    // 0x222688: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x222688u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_22268c:
    // 0x22268c: 0xa1050003  sb          $a1, 0x3($t0)
    ctx->pc = 0x22268cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 3), (uint8_t)GPR_U32(ctx, 5));
label_222690:
    // 0x222690: 0x28c30004  slti        $v1, $a2, 0x4
    ctx->pc = 0x222690u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
label_222694:
    // 0x222694: 0xa1050007  sb          $a1, 0x7($t0)
    ctx->pc = 0x222694u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 7), (uint8_t)GPR_U32(ctx, 5));
label_222698:
    // 0x222698: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x222698u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
label_22269c:
    // 0x22269c: 0xa105000b  sb          $a1, 0xB($t0)
    ctx->pc = 0x22269cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 11), (uint8_t)GPR_U32(ctx, 5));
label_2226a0:
    // 0x2226a0: 0xa105000f  sb          $a1, 0xF($t0)
    ctx->pc = 0x2226a0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 15), (uint8_t)GPR_U32(ctx, 5));
label_2226a4:
    // 0x2226a4: 0xa1050013  sb          $a1, 0x13($t0)
    ctx->pc = 0x2226a4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 19), (uint8_t)GPR_U32(ctx, 5));
label_2226a8:
    // 0x2226a8: 0xa1050017  sb          $a1, 0x17($t0)
    ctx->pc = 0x2226a8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 23), (uint8_t)GPR_U32(ctx, 5));
label_2226ac:
    // 0x2226ac: 0xa105001b  sb          $a1, 0x1B($t0)
    ctx->pc = 0x2226acu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 27), (uint8_t)GPR_U32(ctx, 5));
label_2226b0:
    // 0x2226b0: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_2226b4:
    if (ctx->pc == 0x2226B4u) {
        ctx->pc = 0x2226B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2226B0u;
        // 0x2226b4: 0xa105001f  sb          $a1, 0x1F($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 31), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2226B8u;
        goto label_2226b8;
    }
    ctx->pc = 0x2226B0u;
    {
        const bool branch_taken_0x2226b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2226B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2226B0u;
        // 0x2226b4: 0xa105001f  sb          $a1, 0x1F($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 31), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2226b0) {
            ctx->pc = 0x222684u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_222684;
        }
    }
    ctx->pc = 0x2226B8u;
label_2226b8:
    // 0x2226b8: 0x28c1000c  slti        $at, $a2, 0xC
    ctx->pc = 0x2226b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)12) ? 1 : 0);
label_2226bc:
    // 0x2226bc: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_2226c0:
    if (ctx->pc == 0x2226C0u) {
        ctx->pc = 0x2226C4u;
        goto label_2226c4;
    }
    ctx->pc = 0x2226BCu;
    {
        const bool branch_taken_0x2226bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2226bc) {
            ctx->pc = 0x2226F4u;
            goto label_2226f4;
        }
    }
    ctx->pc = 0x2226C4u;
label_2226c4:
    // 0x2226c4: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x2226c4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_2226c8:
    // 0x2226c8: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x2226c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_2226cc:
    // 0x2226cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2226ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2226d0:
    // 0x2226d0: 0x24844a30  addiu       $a0, $a0, 0x4A30
    ctx->pc = 0x2226d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18992));
label_2226d4:
    // 0x2226d4: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x2226d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_2226d8:
    // 0x2226d8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2226d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_2226dc:
    // 0x2226dc: 0xa0650003  sb          $a1, 0x3($v1)
    ctx->pc = 0x2226dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 5));
label_2226e0:
    // 0x2226e0: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x2226e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_2226e4:
    // 0x2226e4: 0x28c3000c  slti        $v1, $a2, 0xC
    ctx->pc = 0x2226e4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)12) ? 1 : 0);
label_2226e8:
    // 0x2226e8: 0x0  nop
    ctx->pc = 0x2226e8u;
    // NOP
label_2226ec:
    // 0x2226ec: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_2226f0:
    if (ctx->pc == 0x2226F0u) {
        ctx->pc = 0x2226F4u;
        goto label_2226f4;
    }
    ctx->pc = 0x2226ECu;
    {
        const bool branch_taken_0x2226ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2226ec) {
            ctx->pc = 0x2226D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2226d4;
        }
    }
    ctx->pc = 0x2226F4u;
label_2226f4:
    // 0x2226f4: 0x0  nop
    ctx->pc = 0x2226f4u;
    // NOP
label_2226f8:
    // 0x2226f8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2226f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2226fc:
    // 0x2226fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2226fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_222700:
    // 0x222700: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x222700u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_222704:
    // 0x222704: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x222704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_222708:
    // 0x222708: 0x24844a30  addiu       $a0, $a0, 0x4A30
    ctx->pc = 0x222708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18992));
label_22270c:
    // 0x22270c: 0x863821  addu        $a3, $a0, $a2
    ctx->pc = 0x22270cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_222710:
    // 0x222710: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x222710u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
label_222714:
    // 0x222714: 0xa0e50033  sb          $a1, 0x33($a3)
    ctx->pc = 0x222714u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 51), (uint8_t)GPR_U32(ctx, 5));
label_222718:
    // 0x222718: 0x29030004  slti        $v1, $t0, 0x4
    ctx->pc = 0x222718u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)4) ? 1 : 0);
label_22271c:
    // 0x22271c: 0xa0e50037  sb          $a1, 0x37($a3)
    ctx->pc = 0x22271cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 55), (uint8_t)GPR_U32(ctx, 5));
label_222720:
    // 0x222720: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x222720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
label_222724:
    // 0x222724: 0xa0e5003b  sb          $a1, 0x3B($a3)
    ctx->pc = 0x222724u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 59), (uint8_t)GPR_U32(ctx, 5));
label_222728:
    // 0x222728: 0xa0e5003f  sb          $a1, 0x3F($a3)
    ctx->pc = 0x222728u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 63), (uint8_t)GPR_U32(ctx, 5));
label_22272c:
    // 0x22272c: 0xa0e50043  sb          $a1, 0x43($a3)
    ctx->pc = 0x22272cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 67), (uint8_t)GPR_U32(ctx, 5));
label_222730:
    // 0x222730: 0xa0e50047  sb          $a1, 0x47($a3)
    ctx->pc = 0x222730u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 71), (uint8_t)GPR_U32(ctx, 5));
label_222734:
    // 0x222734: 0xa0e5004b  sb          $a1, 0x4B($a3)
    ctx->pc = 0x222734u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 75), (uint8_t)GPR_U32(ctx, 5));
label_222738:
    // 0x222738: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_22273c:
    if (ctx->pc == 0x22273Cu) {
        ctx->pc = 0x22273Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222738u;
        // 0x22273c: 0xa0e5004f  sb          $a1, 0x4F($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 79), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222740u;
        goto label_222740;
    }
    ctx->pc = 0x222738u;
    {
        const bool branch_taken_0x222738 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22273Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222738u;
        // 0x22273c: 0xa0e5004f  sb          $a1, 0x4F($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 79), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222738) {
            ctx->pc = 0x22270Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22270c;
        }
    }
    ctx->pc = 0x222740u;
label_222740:
    // 0x222740: 0x2901000c  slti        $at, $t0, 0xC
    ctx->pc = 0x222740u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)12) ? 1 : 0);
label_222744:
    // 0x222744: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_222748:
    if (ctx->pc == 0x222748u) {
        ctx->pc = 0x22274Cu;
        goto label_22274c;
    }
    ctx->pc = 0x222744u;
    {
        const bool branch_taken_0x222744 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x222744) {
            ctx->pc = 0x22277Cu;
            goto label_22277c;
        }
    }
    ctx->pc = 0x22274Cu;
label_22274c:
    // 0x22274c: 0x83080  sll         $a2, $t0, 2
    ctx->pc = 0x22274cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_222750:
    // 0x222750: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x222750u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_222754:
    // 0x222754: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x222754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_222758:
    // 0x222758: 0x24844a30  addiu       $a0, $a0, 0x4A30
    ctx->pc = 0x222758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18992));
label_22275c:
    // 0x22275c: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x22275cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_222760:
    // 0x222760: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x222760u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_222764:
    // 0x222764: 0xa0650033  sb          $a1, 0x33($v1)
    ctx->pc = 0x222764u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 51), (uint8_t)GPR_U32(ctx, 5));
label_222768:
    // 0x222768: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x222768u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_22276c:
    // 0x22276c: 0x2903000c  slti        $v1, $t0, 0xC
    ctx->pc = 0x22276cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)12) ? 1 : 0);
label_222770:
    // 0x222770: 0x0  nop
    ctx->pc = 0x222770u;
    // NOP
label_222774:
    // 0x222774: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_222778:
    if (ctx->pc == 0x222778u) {
        ctx->pc = 0x22277Cu;
        goto label_22277c;
    }
    ctx->pc = 0x222774u;
    {
        const bool branch_taken_0x222774 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x222774) {
            ctx->pc = 0x22275Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22275c;
        }
    }
    ctx->pc = 0x22277Cu;
label_22277c:
    // 0x22277c: 0x0  nop
    ctx->pc = 0x22277cu;
    // NOP
label_222780:
    // 0x222780: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x222780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_222784:
    // 0x222784: 0x84244af4  lh          $a0, 0x4AF4($at)
    ctx->pc = 0x222784u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19188)));
label_222788:
    // 0x222788: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x222788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_22278c:
    // 0x22278c: 0x10830160  beq         $a0, $v1, . + 4 + (0x160 << 2)
label_222790:
    if (ctx->pc == 0x222790u) {
        ctx->pc = 0x222794u;
        goto label_222794;
    }
    ctx->pc = 0x22278Cu;
    {
        const bool branch_taken_0x22278c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x22278c) {
            ctx->pc = 0x222D10u;
            { ctx->pc = 0x222d10; return; }
        }
    }
    ctx->pc = 0x222794u;
label_222794:
    // 0x222794: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x222794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_222798:
    // 0x222798: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_22279c:
    if (ctx->pc == 0x22279Cu) {
        ctx->pc = 0x2227A0u;
        goto label_2227a0;
    }
    ctx->pc = 0x222798u;
    {
        const bool branch_taken_0x222798 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x222798) {
            ctx->pc = 0x2227A8u;
            goto label_2227a8;
        }
    }
    ctx->pc = 0x2227A0u;
label_2227a0:
    // 0x2227a0: 0x1000015b  b           . + 4 + (0x15B << 2)
label_2227a4:
    if (ctx->pc == 0x2227A4u) {
        ctx->pc = 0x2227A8u;
        goto label_2227a8;
    }
    ctx->pc = 0x2227A0u;
    {
        const bool branch_taken_0x2227a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2227a0) {
            ctx->pc = 0x222D10u;
            { ctx->pc = 0x222d10; return; }
        }
    }
    ctx->pc = 0x2227A8u;
label_2227a8:
    // 0x2227a8: 0x3c01002f  lui         $at, 0x2F
    ctx->pc = 0x2227a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
label_2227ac:
    // 0x2227ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2227acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2227b0:
    // 0x2227b0: 0x8c232570  lw          $v1, 0x2570($at)
    ctx->pc = 0x2227b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9584)));
label_2227b4:
    // 0x2227b4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x2227b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_2227b8:
    // 0x2227b8: 0x9464000a  lhu         $a0, 0xA($v1)
    ctx->pc = 0x2227b8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
label_2227bc:
    // 0x2227bc: 0x9027497c  lbu         $a3, 0x497C($at)
    ctx->pc = 0x2227bcu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18812)));
label_2227c0:
    // 0x2227c0: 0x10e00009  beqz        $a3, . + 4 + (0x9 << 2)
label_2227c4:
    if (ctx->pc == 0x2227C4u) {
        ctx->pc = 0x2227C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2227C0u;
        // 0x2227c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2227C8u;
        goto label_2227c8;
    }
    ctx->pc = 0x2227C0u;
    {
        const bool branch_taken_0x2227c0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2227C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2227C0u;
        // 0x2227c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2227c0) {
            ctx->pc = 0x2227E8u;
            goto label_2227e8;
        }
    }
    ctx->pc = 0x2227C8u;
label_2227c8:
    // 0x2227c8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x2227c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_2227cc:
    // 0x2227cc: 0x8c234974  lw          $v1, 0x4974($at)
    ctx->pc = 0x2227ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18804)));
label_2227d0:
    // 0x2227d0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_2227d4:
    if (ctx->pc == 0x2227D4u) {
        ctx->pc = 0x2227D8u;
        goto label_2227d8;
    }
    ctx->pc = 0x2227D0u;
    {
        const bool branch_taken_0x2227d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2227d0) {
            ctx->pc = 0x2227E8u;
            goto label_2227e8;
        }
    }
    ctx->pc = 0x2227D8u;
label_2227d8:
    // 0x2227d8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x2227d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_2227dc:
    // 0x2227dc: 0x8c23496c  lw          $v1, 0x496C($at)
    ctx->pc = 0x2227dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18796)));
label_2227e0:
    // 0x2227e0: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
label_2227e4:
    if (ctx->pc == 0x2227E4u) {
        ctx->pc = 0x2227E8u;
        goto label_2227e8;
    }
    ctx->pc = 0x2227E0u;
    {
        const bool branch_taken_0x2227e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2227e0) {
            ctx->pc = 0x222854u;
            goto label_222854;
        }
    }
    ctx->pc = 0x2227E8u;
label_2227e8:
    // 0x2227e8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x2227e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_2227ec:
    // 0x2227ec: 0x90234a0c  lbu         $v1, 0x4A0C($at)
    ctx->pc = 0x2227ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18956)));
label_2227f0:
    // 0x2227f0: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_2227f4:
    if (ctx->pc == 0x2227F4u) {
        ctx->pc = 0x2227F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2227F0u;
        // 0x2227f4: 0x41900  sll         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2227F8u;
        goto label_2227f8;
    }
    ctx->pc = 0x2227F0u;
    {
        const bool branch_taken_0x2227f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2227F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2227F0u;
        // 0x2227f4: 0x41900  sll         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2227f0) {
            ctx->pc = 0x22281Cu;
            goto label_22281c;
        }
    }
    ctx->pc = 0x2227F8u;
label_2227f8:
    // 0x2227f8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x2227f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_2227fc:
    // 0x2227fc: 0x8c234a04  lw          $v1, 0x4A04($at)
    ctx->pc = 0x2227fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18948)));
label_222800:
    // 0x222800: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_222804:
    if (ctx->pc == 0x222804u) {
        ctx->pc = 0x222808u;
        goto label_222808;
    }
    ctx->pc = 0x222800u;
    {
        const bool branch_taken_0x222800 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x222800) {
            ctx->pc = 0x222818u;
            goto label_222818;
        }
    }
    ctx->pc = 0x222808u;
label_222808:
    // 0x222808: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x222808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_22280c:
    // 0x22280c: 0x8c2349fc  lw          $v1, 0x49FC($at)
    ctx->pc = 0x22280cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18940)));
label_222810:
    // 0x222810: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_222814:
    if (ctx->pc == 0x222814u) {
        ctx->pc = 0x222818u;
        goto label_222818;
    }
    ctx->pc = 0x222810u;
    {
        const bool branch_taken_0x222810 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x222810) {
            ctx->pc = 0x222854u;
            goto label_222854;
        }
    }
    ctx->pc = 0x222818u;
label_222818:
    // 0x222818: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x222818u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_22281c:
    // 0x22281c: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x22281cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_222820:
    // 0x222820: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x222820u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_222824:
    // 0x222824: 0xa0204a60  sb          $zero, 0x4A60($at)
    ctx->pc = 0x222824u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19040), (uint8_t)GPR_U32(ctx, 0));
label_222828:
    // 0x222828: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x222828u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_22282c:
    // 0x22282c: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x22282cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_222830:
    // 0x222830: 0x24633b82  addiu       $v1, $v1, 0x3B82
    ctx->pc = 0x222830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15234));
label_222834:
    // 0x222834: 0xa0204a61  sb          $zero, 0x4A61($at)
    ctx->pc = 0x222834u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19041), (uint8_t)GPR_U32(ctx, 0));
label_222838:
    // 0x222838: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x222838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_22283c:
    // 0x22283c: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x22283cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_222840:
    // 0x222840: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x222840u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_222844:
    // 0x222844: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x222844u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_222848:
    // 0x222848: 0xa0234a62  sb          $v1, 0x4A62($at)
    ctx->pc = 0x222848u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19042), (uint8_t)GPR_U32(ctx, 3));
label_22284c:
    // 0x22284c: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x22284cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_222850:
    // 0x222850: 0xa0204a63  sb          $zero, 0x4A63($at)
    ctx->pc = 0x222850u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 19043), (uint8_t)GPR_U32(ctx, 0));
label_222854:
    // 0x222854: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x222854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_222858:
    // 0x222858: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x222858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_22285c:
    // 0x22285c: 0x9024490c  lbu         $a0, 0x490C($at)
    ctx->pc = 0x22285cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
label_222860:
    // 0x222860: 0x14830037  bne         $a0, $v1, . + 4 + (0x37 << 2)
label_222864:
    if (ctx->pc == 0x222864u) {
        ctx->pc = 0x222864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222860u;
        // 0x222864: 0x24030048  addiu       $v1, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222868u;
        goto label_222868;
    }
    ctx->pc = 0x222860u;
    {
        const bool branch_taken_0x222860 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x222864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222860u;
        // 0x222864: 0x24030048  addiu       $v1, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222860) {
            ctx->pc = 0x222940u;
            goto label_222940;
        }
    }
    ctx->pc = 0x222868u;
label_222868:
    // 0x222868: 0x3c01002f  lui         $at, 0x2F
    ctx->pc = 0x222868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
label_22286c:
    // 0x22286c: 0x8c2325b8  lw          $v1, 0x25B8($at)
    ctx->pc = 0x22286cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9656)));
label_222870:
    // 0x222870: 0x10e0000a  beqz        $a3, . + 4 + (0xA << 2)
label_222874:
    if (ctx->pc == 0x222874u) {
        ctx->pc = 0x222874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222870u;
        // 0x222874: 0x9469000a  lhu         $t1, 0xA($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222878u;
        goto label_222878;
    }
    ctx->pc = 0x222870u;
    {
        const bool branch_taken_0x222870 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x222874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222870u;
        // 0x222874: 0x9469000a  lhu         $t1, 0xA($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222870) {
            ctx->pc = 0x22289Cu;
            goto label_22289c;
        }
    }
    ctx->pc = 0x222878u;
label_222878:
    // 0x222878: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x222878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_22287c:
    // 0x22287c: 0x8c234974  lw          $v1, 0x4974($at)
    ctx->pc = 0x22287cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18804)));
label_222880:
    // 0x222880: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_222884:
    if (ctx->pc == 0x222884u) {
        ctx->pc = 0x222888u;
        goto label_222888;
    }
    ctx->pc = 0x222880u;
    {
        const bool branch_taken_0x222880 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x222880) {
            ctx->pc = 0x22289Cu;
            goto label_22289c;
        }
    }
    ctx->pc = 0x222888u;
label_222888:
    // 0x222888: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x222888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_22288c:
    // 0x22288c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22288cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_222890:
    // 0x222890: 0x8c24496c  lw          $a0, 0x496C($at)
    ctx->pc = 0x222890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18796)));
label_222894:
    // 0x222894: 0x10830097  beq         $a0, $v1, . + 4 + (0x97 << 2)
label_222898:
    if (ctx->pc == 0x222898u) {
        ctx->pc = 0x22289Cu;
        goto label_22289c;
    }
    ctx->pc = 0x222894u;
    {
        const bool branch_taken_0x222894 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x222894) {
            ctx->pc = 0x222AF4u;
            goto label_222af4;
        }
    }
    ctx->pc = 0x22289Cu;
label_22289c:
    // 0x22289c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x22289cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_2228a0:
    // 0x2228a0: 0x90234a0c  lbu         $v1, 0x4A0C($at)
    ctx->pc = 0x2228a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18956)));
label_2228a4:
    // 0x2228a4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_2228a8:
    if (ctx->pc == 0x2228A8u) {
        ctx->pc = 0x2228ACu;
        goto label_2228ac;
    }
    ctx->pc = 0x2228A4u;
    {
        const bool branch_taken_0x2228a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2228a4) {
            ctx->pc = 0x2228D0u;
            goto label_2228d0;
        }
    }
    ctx->pc = 0x2228ACu;
label_2228ac:
    // 0x2228ac: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x2228acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_2228b0:
    // 0x2228b0: 0x8c234a04  lw          $v1, 0x4A04($at)
    ctx->pc = 0x2228b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18948)));
label_2228b4:
    // 0x2228b4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_2228b8:
    if (ctx->pc == 0x2228B8u) {
        ctx->pc = 0x2228BCu;
        goto label_2228bc;
    }
    ctx->pc = 0x2228B4u;
    {
        const bool branch_taken_0x2228b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2228b4) {
            ctx->pc = 0x2228D0u;
            goto label_2228d0;
        }
    }
    ctx->pc = 0x2228BCu;
label_2228bc:
    // 0x2228bc: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x2228bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_2228c0:
    // 0x2228c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2228c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2228c4:
    // 0x2228c4: 0x8c2449fc  lw          $a0, 0x49FC($at)
    ctx->pc = 0x2228c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18940)));
label_2228c8:
    // 0x2228c8: 0x1083008a  beq         $a0, $v1, . + 4 + (0x8A << 2)
label_2228cc:
    if (ctx->pc == 0x2228CCu) {
        ctx->pc = 0x2228D0u;
        goto label_2228d0;
    }
    ctx->pc = 0x2228C8u;
    {
        const bool branch_taken_0x2228c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2228c8) {
            ctx->pc = 0x222AF4u;
            goto label_222af4;
        }
    }
    ctx->pc = 0x2228D0u;
label_2228d0:
    // 0x2228d0: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x2228d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_2228d4:
    // 0x2228d4: 0x65080  sll         $t2, $a2, 2
    ctx->pc = 0x2228d4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_2228d8:
    // 0x2228d8: 0x24634a60  addiu       $v1, $v1, 0x4A60
    ctx->pc = 0x2228d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19040));
label_2228dc:
    // 0x2228dc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2228dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2228e0:
    // 0x2228e0: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x2228e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_2228e4:
    // 0x2228e4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2228e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_2228e8:
    // 0x2228e8: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x2228e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_2228ec:
    // 0x2228ec: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x2228ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_2228f0:
    // 0x2228f0: 0x24634a61  addiu       $v1, $v1, 0x4A61
    ctx->pc = 0x2228f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19041));
label_2228f4:
    // 0x2228f4: 0x6a2021  addu        $a0, $v1, $t2
    ctx->pc = 0x2228f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_2228f8:
    // 0x2228f8: 0xa0880000  sb          $t0, 0x0($a0)
    ctx->pc = 0x2228f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 8));
label_2228fc:
    // 0x2228fc: 0x91900  sll         $v1, $t1, 4
    ctx->pc = 0x2228fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_222900:
    // 0x222900: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x222900u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
label_222904:
    // 0x222904: 0x694023  subu        $t0, $v1, $t1
    ctx->pc = 0x222904u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_222908:
    // 0x222908: 0x24843b82  addiu       $a0, $a0, 0x3B82
    ctx->pc = 0x222908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15234));
label_22290c:
    // 0x22290c: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x22290cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_222910:
    // 0x222910: 0x884021  addu        $t0, $a0, $t0
    ctx->pc = 0x222910u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_222914:
    // 0x222914: 0x24634a62  addiu       $v1, $v1, 0x4A62
    ctx->pc = 0x222914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19042));
label_222918:
    // 0x222918: 0x91080000  lbu         $t0, 0x0($t0)
    ctx->pc = 0x222918u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_22291c:
    // 0x22291c: 0x6a2021  addu        $a0, $v1, $t2
    ctx->pc = 0x22291cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_222920:
    // 0x222920: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x222920u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_222924:
    // 0x222924: 0x24634a63  addiu       $v1, $v1, 0x4A63
    ctx->pc = 0x222924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19043));
label_222928:
    // 0x222928: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x222928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_22292c:
    // 0x22292c: 0xa0880000  sb          $t0, 0x0($a0)
    ctx->pc = 0x22292cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 8));
label_222930:
    // 0x222930: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x222930u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_222934:
    // 0x222934: 0x1000006f  b           . + 4 + (0x6F << 2)
label_222938:
    if (ctx->pc == 0x222938u) {
        ctx->pc = 0x22293Cu;
        goto label_22293c;
    }
    ctx->pc = 0x222934u;
    {
        const bool branch_taken_0x222934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x222934) {
            ctx->pc = 0x222AF4u;
            goto label_222af4;
        }
    }
    ctx->pc = 0x22293Cu;
label_22293c:
    // 0x22293c: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x22293cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_222940:
    // 0x222940: 0x14830037  bne         $a0, $v1, . + 4 + (0x37 << 2)
label_222944:
    if (ctx->pc == 0x222944u) {
        ctx->pc = 0x222944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222940u;
        // 0x222944: 0x2403005a  addiu       $v1, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222948u;
        goto label_222948;
    }
    ctx->pc = 0x222940u;
    {
        const bool branch_taken_0x222940 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x222944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222940u;
        // 0x222944: 0x2403005a  addiu       $v1, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222940) {
            ctx->pc = 0x222A20u;
            goto label_222a20;
        }
    }
    ctx->pc = 0x222948u;
label_222948:
    // 0x222948: 0x3c01002f  lui         $at, 0x2F
    ctx->pc = 0x222948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
label_22294c:
    // 0x22294c: 0x8c2325b8  lw          $v1, 0x25B8($at)
    ctx->pc = 0x22294cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9656)));
label_222950:
    // 0x222950: 0x10e0000a  beqz        $a3, . + 4 + (0xA << 2)
label_222954:
    if (ctx->pc == 0x222954u) {
        ctx->pc = 0x222954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222950u;
        // 0x222954: 0x9469000a  lhu         $t1, 0xA($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222958u;
        goto label_222958;
    }
    ctx->pc = 0x222950u;
    {
        const bool branch_taken_0x222950 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x222954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222950u;
        // 0x222954: 0x9469000a  lhu         $t1, 0xA($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222950) {
            ctx->pc = 0x22297Cu;
            goto label_22297c;
        }
    }
    ctx->pc = 0x222958u;
label_222958:
    // 0x222958: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x222958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_22295c:
    // 0x22295c: 0x8c234974  lw          $v1, 0x4974($at)
    ctx->pc = 0x22295cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18804)));
label_222960:
    // 0x222960: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_222964:
    if (ctx->pc == 0x222964u) {
        ctx->pc = 0x222968u;
        goto label_222968;
    }
    ctx->pc = 0x222960u;
    {
        const bool branch_taken_0x222960 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x222960) {
            ctx->pc = 0x22297Cu;
            goto label_22297c;
        }
    }
    ctx->pc = 0x222968u;
label_222968:
    // 0x222968: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x222968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_22296c:
    // 0x22296c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22296cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_222970:
    // 0x222970: 0x8c24496c  lw          $a0, 0x496C($at)
    ctx->pc = 0x222970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18796)));
label_222974:
    // 0x222974: 0x1083005f  beq         $a0, $v1, . + 4 + (0x5F << 2)
label_222978:
    if (ctx->pc == 0x222978u) {
        ctx->pc = 0x22297Cu;
        goto label_22297c;
    }
    ctx->pc = 0x222974u;
    {
        const bool branch_taken_0x222974 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x222974) {
            ctx->pc = 0x222AF4u;
            goto label_222af4;
        }
    }
    ctx->pc = 0x22297Cu;
label_22297c:
    // 0x22297c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x22297cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_222980:
    // 0x222980: 0x90234a0c  lbu         $v1, 0x4A0C($at)
    ctx->pc = 0x222980u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18956)));
label_222984:
    // 0x222984: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_222988:
    if (ctx->pc == 0x222988u) {
        ctx->pc = 0x22298Cu;
        goto label_22298c;
    }
    ctx->pc = 0x222984u;
    {
        const bool branch_taken_0x222984 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x222984) {
            ctx->pc = 0x2229B0u;
            goto label_2229b0;
        }
    }
    ctx->pc = 0x22298Cu;
label_22298c:
    // 0x22298c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x22298cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_222990:
    // 0x222990: 0x8c234a04  lw          $v1, 0x4A04($at)
    ctx->pc = 0x222990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18948)));
label_222994:
    // 0x222994: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_222998:
    if (ctx->pc == 0x222998u) {
        ctx->pc = 0x22299Cu;
        goto label_22299c;
    }
    ctx->pc = 0x222994u;
    {
        const bool branch_taken_0x222994 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x222994) {
            ctx->pc = 0x2229B0u;
            goto label_2229b0;
        }
    }
    ctx->pc = 0x22299Cu;
label_22299c:
    // 0x22299c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x22299cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_2229a0:
    // 0x2229a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2229a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2229a4:
    // 0x2229a4: 0x8c2449fc  lw          $a0, 0x49FC($at)
    ctx->pc = 0x2229a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18940)));
label_2229a8:
    // 0x2229a8: 0x10830052  beq         $a0, $v1, . + 4 + (0x52 << 2)
label_2229ac:
    if (ctx->pc == 0x2229ACu) {
        ctx->pc = 0x2229B0u;
        goto label_2229b0;
    }
    ctx->pc = 0x2229A8u;
    {
        const bool branch_taken_0x2229a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2229a8) {
            ctx->pc = 0x222AF4u;
            goto label_222af4;
        }
    }
    ctx->pc = 0x2229B0u;
label_2229b0:
    // 0x2229b0: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x2229b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_2229b4:
    // 0x2229b4: 0x65080  sll         $t2, $a2, 2
    ctx->pc = 0x2229b4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_2229b8:
    // 0x2229b8: 0x24634a60  addiu       $v1, $v1, 0x4A60
    ctx->pc = 0x2229b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19040));
label_2229bc:
    // 0x2229bc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2229bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2229c0:
    // 0x2229c0: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x2229c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_2229c4:
    // 0x2229c4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2229c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_2229c8:
    // 0x2229c8: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x2229c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_2229cc:
    // 0x2229cc: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x2229ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_2229d0:
    // 0x2229d0: 0x24634a61  addiu       $v1, $v1, 0x4A61
    ctx->pc = 0x2229d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19041));
label_2229d4:
    // 0x2229d4: 0x6a2021  addu        $a0, $v1, $t2
    ctx->pc = 0x2229d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_2229d8:
    // 0x2229d8: 0xa0880000  sb          $t0, 0x0($a0)
    ctx->pc = 0x2229d8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 8));
label_2229dc:
    // 0x2229dc: 0x91900  sll         $v1, $t1, 4
    ctx->pc = 0x2229dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_2229e0:
    // 0x2229e0: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x2229e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
label_2229e4:
    // 0x2229e4: 0x694023  subu        $t0, $v1, $t1
    ctx->pc = 0x2229e4u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_2229e8:
    // 0x2229e8: 0x24843b82  addiu       $a0, $a0, 0x3B82
    ctx->pc = 0x2229e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15234));
label_2229ec:
    // 0x2229ec: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x2229ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_2229f0:
    // 0x2229f0: 0x884021  addu        $t0, $a0, $t0
    ctx->pc = 0x2229f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_2229f4:
    // 0x2229f4: 0x24634a62  addiu       $v1, $v1, 0x4A62
    ctx->pc = 0x2229f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19042));
label_2229f8:
    // 0x2229f8: 0x91080000  lbu         $t0, 0x0($t0)
    ctx->pc = 0x2229f8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_2229fc:
    // 0x2229fc: 0x6a2021  addu        $a0, $v1, $t2
    ctx->pc = 0x2229fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_222a00:
    // 0x222a00: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x222a00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_222a04:
    // 0x222a04: 0x24634a63  addiu       $v1, $v1, 0x4A63
    ctx->pc = 0x222a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19043));
label_222a08:
    // 0x222a08: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x222a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_222a0c:
    // 0x222a0c: 0xa0880000  sb          $t0, 0x0($a0)
    ctx->pc = 0x222a0cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 8));
label_222a10:
    // 0x222a10: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x222a10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_222a14:
    // 0x222a14: 0x10000037  b           . + 4 + (0x37 << 2)
label_222a18:
    if (ctx->pc == 0x222A18u) {
        ctx->pc = 0x222A1Cu;
        goto label_222a1c;
    }
    ctx->pc = 0x222A14u;
    {
        const bool branch_taken_0x222a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x222a14) {
            ctx->pc = 0x222AF4u;
            goto label_222af4;
        }
    }
    ctx->pc = 0x222A1Cu;
label_222a1c:
    // 0x222a1c: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x222a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_222a20:
    // 0x222a20: 0x14830034  bne         $a0, $v1, . + 4 + (0x34 << 2)
label_222a24:
    if (ctx->pc == 0x222A24u) {
        ctx->pc = 0x222A28u;
        goto label_222a28;
    }
    ctx->pc = 0x222A20u;
    {
        const bool branch_taken_0x222a20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x222a20) {
            ctx->pc = 0x222AF4u;
            goto label_222af4;
        }
    }
    ctx->pc = 0x222A28u;
label_222a28:
    // 0x222a28: 0x3c01002f  lui         $at, 0x2F
    ctx->pc = 0x222a28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
label_222a2c:
    // 0x222a2c: 0x8c2325b8  lw          $v1, 0x25B8($at)
    ctx->pc = 0x222a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9656)));
label_222a30:
    // 0x222a30: 0x10e0000a  beqz        $a3, . + 4 + (0xA << 2)
label_222a34:
    if (ctx->pc == 0x222A34u) {
        ctx->pc = 0x222A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222A30u;
        // 0x222a34: 0x9469000a  lhu         $t1, 0xA($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x222A38u;
        goto label_222a38;
    }
    ctx->pc = 0x222A30u;
    {
        const bool branch_taken_0x222a30 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x222A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222A30u;
        // 0x222a34: 0x9469000a  lhu         $t1, 0xA($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222a30) {
            ctx->pc = 0x222A5Cu;
            goto label_222a5c;
        }
    }
    ctx->pc = 0x222A38u;
label_222a38:
    // 0x222a38: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x222a38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_222a3c:
    // 0x222a3c: 0x8c234974  lw          $v1, 0x4974($at)
    ctx->pc = 0x222a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18804)));
label_222a40:
    // 0x222a40: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_222a44:
    if (ctx->pc == 0x222A44u) {
        ctx->pc = 0x222A48u;
        goto label_222a48;
    }
    ctx->pc = 0x222A40u;
    {
        const bool branch_taken_0x222a40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x222a40) {
            ctx->pc = 0x222A5Cu;
            goto label_222a5c;
        }
    }
    ctx->pc = 0x222A48u;
label_222a48:
    // 0x222a48: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x222a48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_222a4c:
    // 0x222a4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x222a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_222a50:
    // 0x222a50: 0x8c24496c  lw          $a0, 0x496C($at)
    ctx->pc = 0x222a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18796)));
label_222a54:
    // 0x222a54: 0x10830027  beq         $a0, $v1, . + 4 + (0x27 << 2)
label_222a58:
    if (ctx->pc == 0x222A58u) {
        ctx->pc = 0x222A5Cu;
        goto label_222a5c;
    }
    ctx->pc = 0x222A54u;
    {
        const bool branch_taken_0x222a54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x222a54) {
            ctx->pc = 0x222AF4u;
            goto label_222af4;
        }
    }
    ctx->pc = 0x222A5Cu;
label_222a5c:
    // 0x222a5c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x222a5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_222a60:
    // 0x222a60: 0x90234a0c  lbu         $v1, 0x4A0C($at)
    ctx->pc = 0x222a60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18956)));
label_222a64:
    // 0x222a64: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_222a68:
    if (ctx->pc == 0x222A68u) {
        ctx->pc = 0x222A6Cu;
        goto label_222a6c;
    }
    ctx->pc = 0x222A64u;
    {
        const bool branch_taken_0x222a64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x222a64) {
            ctx->pc = 0x222A90u;
            goto label_222a90;
        }
    }
    ctx->pc = 0x222A6Cu;
label_222a6c:
    // 0x222a6c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x222a6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_222a70:
    // 0x222a70: 0x8c234a04  lw          $v1, 0x4A04($at)
    ctx->pc = 0x222a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18948)));
label_222a74:
    // 0x222a74: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_222a78:
    if (ctx->pc == 0x222A78u) {
        ctx->pc = 0x222A7Cu;
        goto label_222a7c;
    }
    ctx->pc = 0x222A74u;
    {
        const bool branch_taken_0x222a74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x222a74) {
            ctx->pc = 0x222A90u;
            goto label_222a90;
        }
    }
    ctx->pc = 0x222A7Cu;
label_222a7c:
    // 0x222a7c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x222a7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_222a80:
    // 0x222a80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x222a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_222a84:
    // 0x222a84: 0x8c2449fc  lw          $a0, 0x49FC($at)
    ctx->pc = 0x222a84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18940)));
label_222a88:
    // 0x222a88: 0x1083001a  beq         $a0, $v1, . + 4 + (0x1A << 2)
label_222a8c:
    if (ctx->pc == 0x222A8Cu) {
        ctx->pc = 0x222A90u;
        goto label_222a90;
    }
    ctx->pc = 0x222A88u;
    {
        const bool branch_taken_0x222a88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x222a88) {
            ctx->pc = 0x222AF4u;
            goto label_222af4;
        }
    }
    ctx->pc = 0x222A90u;
label_222a90:
    // 0x222a90: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x222a90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_222a94:
    // 0x222a94: 0x65080  sll         $t2, $a2, 2
    ctx->pc = 0x222a94u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_222a98:
    // 0x222a98: 0x24634a60  addiu       $v1, $v1, 0x4A60
    ctx->pc = 0x222a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19040));
label_222a9c:
    // 0x222a9c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x222a9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_222aa0:
    // 0x222aa0: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x222aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_222aa4:
    // 0x222aa4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x222aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_222aa8:
    // 0x222aa8: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x222aa8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_222aac:
    // 0x222aac: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x222aacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_222ab0:
    // 0x222ab0: 0x24634a61  addiu       $v1, $v1, 0x4A61
    ctx->pc = 0x222ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19041));
label_222ab4:
    // 0x222ab4: 0x6a2021  addu        $a0, $v1, $t2
    ctx->pc = 0x222ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_222ab8:
    // 0x222ab8: 0xa0880000  sb          $t0, 0x0($a0)
    ctx->pc = 0x222ab8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 8));
label_222abc:
    // 0x222abc: 0x91900  sll         $v1, $t1, 4
    ctx->pc = 0x222abcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_222ac0:
    // 0x222ac0: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x222ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
label_222ac4:
    // 0x222ac4: 0x694023  subu        $t0, $v1, $t1
    ctx->pc = 0x222ac4u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_222ac8:
    // 0x222ac8: 0x24843b82  addiu       $a0, $a0, 0x3B82
    ctx->pc = 0x222ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15234));
label_222acc:
    // 0x222acc: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x222accu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_222ad0:
    // 0x222ad0: 0x884021  addu        $t0, $a0, $t0
    ctx->pc = 0x222ad0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_222ad4:
    // 0x222ad4: 0x24634a62  addiu       $v1, $v1, 0x4A62
    ctx->pc = 0x222ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19042));
label_222ad8:
    // 0x222ad8: 0x91080000  lbu         $t0, 0x0($t0)
    ctx->pc = 0x222ad8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_222adc:
    // 0x222adc: 0x6a2021  addu        $a0, $v1, $t2
    ctx->pc = 0x222adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_222ae0:
    // 0x222ae0: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x222ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_222ae4:
    // 0x222ae4: 0x24634a63  addiu       $v1, $v1, 0x4A63
    ctx->pc = 0x222ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19043));
label_222ae8:
    // 0x222ae8: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x222ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_222aec:
    // 0x222aec: 0xa0880000  sb          $t0, 0x0($a0)
    ctx->pc = 0x222aecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 8));
label_222af0:
    // 0x222af0: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x222af0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_222af4:
    // 0x222af4: 0x3c04002f  lui         $a0, 0x2F
    ctx->pc = 0x222af4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47 << 16));
label_222af8:
    // 0x222af8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x222af8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_222afc:
    // 0x222afc: 0x24846d28  addiu       $a0, $a0, 0x6D28
    ctx->pc = 0x222afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27944));
    ctx->pc = 0x222b00u;
    return;
}

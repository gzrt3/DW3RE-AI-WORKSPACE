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


void FUN_0014eba0_part8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x152250u: goto label_152250;
        case 0x152254u: goto label_152254;
        case 0x152258u: goto label_152258;
        case 0x15225cu: goto label_15225c;
        case 0x152260u: goto label_152260;
        case 0x152264u: goto label_152264;
        case 0x152268u: goto label_152268;
        case 0x15226cu: goto label_15226c;
        case 0x152270u: goto label_152270;
        case 0x152274u: goto label_152274;
        case 0x152278u: goto label_152278;
        case 0x15227cu: goto label_15227c;
        case 0x152280u: goto label_152280;
        case 0x152284u: goto label_152284;
        case 0x152288u: goto label_152288;
        case 0x15228cu: goto label_15228c;
        case 0x152290u: goto label_152290;
        case 0x152294u: goto label_152294;
        case 0x152298u: goto label_152298;
        case 0x15229cu: goto label_15229c;
        case 0x1522a0u: goto label_1522a0;
        case 0x1522a4u: goto label_1522a4;
        case 0x1522a8u: goto label_1522a8;
        case 0x1522acu: goto label_1522ac;
        case 0x1522b0u: goto label_1522b0;
        case 0x1522b4u: goto label_1522b4;
        case 0x1522b8u: goto label_1522b8;
        case 0x1522bcu: goto label_1522bc;
        case 0x1522c0u: goto label_1522c0;
        case 0x1522c4u: goto label_1522c4;
        case 0x1522c8u: goto label_1522c8;
        case 0x1522ccu: goto label_1522cc;
        case 0x1522d0u: goto label_1522d0;
        case 0x1522d4u: goto label_1522d4;
        case 0x1522d8u: goto label_1522d8;
        case 0x1522dcu: goto label_1522dc;
        case 0x1522e0u: goto label_1522e0;
        case 0x1522e4u: goto label_1522e4;
        case 0x1522e8u: goto label_1522e8;
        case 0x1522ecu: goto label_1522ec;
        case 0x1522f0u: goto label_1522f0;
        case 0x1522f4u: goto label_1522f4;
        case 0x1522f8u: goto label_1522f8;
        case 0x1522fcu: goto label_1522fc;
        case 0x152300u: goto label_152300;
        case 0x152304u: goto label_152304;
        case 0x152308u: goto label_152308;
        case 0x15230cu: goto label_15230c;
        case 0x152310u: goto label_152310;
        case 0x152314u: goto label_152314;
        case 0x152318u: goto label_152318;
        case 0x15231cu: goto label_15231c;
        case 0x152320u: goto label_152320;
        case 0x152324u: goto label_152324;
        case 0x152328u: goto label_152328;
        case 0x15232cu: goto label_15232c;
        case 0x152330u: goto label_152330;
        case 0x152334u: goto label_152334;
        case 0x152338u: goto label_152338;
        case 0x15233cu: goto label_15233c;
        case 0x152340u: goto label_152340;
        case 0x152344u: goto label_152344;
        case 0x152348u: goto label_152348;
        case 0x15234cu: goto label_15234c;
        case 0x152350u: goto label_152350;
        case 0x152354u: goto label_152354;
        case 0x152358u: goto label_152358;
        case 0x15235cu: goto label_15235c;
        case 0x152360u: goto label_152360;
        case 0x152364u: goto label_152364;
        case 0x152368u: goto label_152368;
        case 0x15236cu: goto label_15236c;
        case 0x152370u: goto label_152370;
        case 0x152374u: goto label_152374;
        case 0x152378u: goto label_152378;
        case 0x15237cu: goto label_15237c;
        case 0x152380u: goto label_152380;
        case 0x152384u: goto label_152384;
        case 0x152388u: goto label_152388;
        case 0x15238cu: goto label_15238c;
        case 0x152390u: goto label_152390;
        case 0x152394u: goto label_152394;
        case 0x152398u: goto label_152398;
        case 0x15239cu: goto label_15239c;
        case 0x1523a0u: goto label_1523a0;
        case 0x1523a4u: goto label_1523a4;
        case 0x1523a8u: goto label_1523a8;
        case 0x1523acu: goto label_1523ac;
        case 0x1523b0u: goto label_1523b0;
        case 0x1523b4u: goto label_1523b4;
        case 0x1523b8u: goto label_1523b8;
        case 0x1523bcu: goto label_1523bc;
        case 0x1523c0u: goto label_1523c0;
        case 0x1523c4u: goto label_1523c4;
        case 0x1523c8u: goto label_1523c8;
        case 0x1523ccu: goto label_1523cc;
        case 0x1523d0u: goto label_1523d0;
        case 0x1523d4u: goto label_1523d4;
        case 0x1523d8u: goto label_1523d8;
        case 0x1523dcu: goto label_1523dc;
        case 0x1523e0u: goto label_1523e0;
        case 0x1523e4u: goto label_1523e4;
        case 0x1523e8u: goto label_1523e8;
        case 0x1523ecu: goto label_1523ec;
        case 0x1523f0u: goto label_1523f0;
        case 0x1523f4u: goto label_1523f4;
        case 0x1523f8u: goto label_1523f8;
        case 0x1523fcu: goto label_1523fc;
        case 0x152400u: goto label_152400;
        case 0x152404u: goto label_152404;
        case 0x152408u: goto label_152408;
        case 0x15240cu: goto label_15240c;
        case 0x152410u: goto label_152410;
        case 0x152414u: goto label_152414;
        case 0x152418u: goto label_152418;
        case 0x15241cu: goto label_15241c;
        case 0x152420u: goto label_152420;
        case 0x152424u: goto label_152424;
        case 0x152428u: goto label_152428;
        case 0x15242cu: goto label_15242c;
        case 0x152430u: goto label_152430;
        case 0x152434u: goto label_152434;
        case 0x152438u: goto label_152438;
        case 0x15243cu: goto label_15243c;
        case 0x152440u: goto label_152440;
        case 0x152444u: goto label_152444;
        case 0x152448u: goto label_152448;
        case 0x15244cu: goto label_15244c;
        case 0x152450u: goto label_152450;
        case 0x152454u: goto label_152454;
        case 0x152458u: goto label_152458;
        case 0x15245cu: goto label_15245c;
        case 0x152460u: goto label_152460;
        case 0x152464u: goto label_152464;
        case 0x152468u: goto label_152468;
        case 0x15246cu: goto label_15246c;
        case 0x152470u: goto label_152470;
        case 0x152474u: goto label_152474;
        case 0x152478u: goto label_152478;
        case 0x15247cu: goto label_15247c;
        case 0x152480u: goto label_152480;
        case 0x152484u: goto label_152484;
        case 0x152488u: goto label_152488;
        case 0x15248cu: goto label_15248c;
        case 0x152490u: goto label_152490;
        case 0x152494u: goto label_152494;
        case 0x152498u: goto label_152498;
        case 0x15249cu: goto label_15249c;
        case 0x1524a0u: goto label_1524a0;
        case 0x1524a4u: goto label_1524a4;
        case 0x1524a8u: goto label_1524a8;
        case 0x1524acu: goto label_1524ac;
        case 0x1524b0u: goto label_1524b0;
        case 0x1524b4u: goto label_1524b4;
        case 0x1524b8u: goto label_1524b8;
        case 0x1524bcu: goto label_1524bc;
        case 0x1524c0u: goto label_1524c0;
        case 0x1524c4u: goto label_1524c4;
        case 0x1524c8u: goto label_1524c8;
        case 0x1524ccu: goto label_1524cc;
        case 0x1524d0u: goto label_1524d0;
        case 0x1524d4u: goto label_1524d4;
        case 0x1524d8u: goto label_1524d8;
        case 0x1524dcu: goto label_1524dc;
        case 0x1524e0u: goto label_1524e0;
        case 0x1524e4u: goto label_1524e4;
        case 0x1524e8u: goto label_1524e8;
        case 0x1524ecu: goto label_1524ec;
        case 0x1524f0u: goto label_1524f0;
        case 0x1524f4u: goto label_1524f4;
        case 0x1524f8u: goto label_1524f8;
        case 0x1524fcu: goto label_1524fc;
        case 0x152500u: goto label_152500;
        case 0x152504u: goto label_152504;
        case 0x152508u: goto label_152508;
        case 0x15250cu: goto label_15250c;
        case 0x152510u: goto label_152510;
        case 0x152514u: goto label_152514;
        case 0x152518u: goto label_152518;
        case 0x15251cu: goto label_15251c;
        case 0x152520u: goto label_152520;
        case 0x152524u: goto label_152524;
        case 0x152528u: goto label_152528;
        case 0x15252cu: goto label_15252c;
        case 0x152530u: goto label_152530;
        case 0x152534u: goto label_152534;
        case 0x152538u: goto label_152538;
        case 0x15253cu: goto label_15253c;
        case 0x152540u: goto label_152540;
        case 0x152544u: goto label_152544;
        case 0x152548u: goto label_152548;
        case 0x15254cu: goto label_15254c;
        case 0x152550u: goto label_152550;
        case 0x152554u: goto label_152554;
        case 0x152558u: goto label_152558;
        case 0x15255cu: goto label_15255c;
        case 0x152560u: goto label_152560;
        case 0x152564u: goto label_152564;
        case 0x152568u: goto label_152568;
        case 0x15256cu: goto label_15256c;
        case 0x152570u: goto label_152570;
        case 0x152574u: goto label_152574;
        case 0x152578u: goto label_152578;
        case 0x15257cu: goto label_15257c;
        case 0x152580u: goto label_152580;
        case 0x152584u: goto label_152584;
        case 0x152588u: goto label_152588;
        case 0x15258cu: goto label_15258c;
        case 0x152590u: goto label_152590;
        case 0x152594u: goto label_152594;
        case 0x152598u: goto label_152598;
        case 0x15259cu: goto label_15259c;
        case 0x1525a0u: goto label_1525a0;
        case 0x1525a4u: goto label_1525a4;
        case 0x1525a8u: goto label_1525a8;
        case 0x1525acu: goto label_1525ac;
        case 0x1525b0u: goto label_1525b0;
        case 0x1525b4u: goto label_1525b4;
        case 0x1525b8u: goto label_1525b8;
        case 0x1525bcu: goto label_1525bc;
        case 0x1525c0u: goto label_1525c0;
        case 0x1525c4u: goto label_1525c4;
        case 0x1525c8u: goto label_1525c8;
        case 0x1525ccu: goto label_1525cc;
        case 0x1525d0u: goto label_1525d0;
        case 0x1525d4u: goto label_1525d4;
        case 0x1525d8u: goto label_1525d8;
        case 0x1525dcu: goto label_1525dc;
        case 0x1525e0u: goto label_1525e0;
        case 0x1525e4u: goto label_1525e4;
        case 0x1525e8u: goto label_1525e8;
        case 0x1525ecu: goto label_1525ec;
        case 0x1525f0u: goto label_1525f0;
        case 0x1525f4u: goto label_1525f4;
        case 0x1525f8u: goto label_1525f8;
        case 0x1525fcu: goto label_1525fc;
        case 0x152600u: goto label_152600;
        case 0x152604u: goto label_152604;
        case 0x152608u: goto label_152608;
        case 0x15260cu: goto label_15260c;
        case 0x152610u: goto label_152610;
        case 0x152614u: goto label_152614;
        case 0x152618u: goto label_152618;
        case 0x15261cu: goto label_15261c;
        case 0x152620u: goto label_152620;
        case 0x152624u: goto label_152624;
        case 0x152628u: goto label_152628;
        case 0x15262cu: goto label_15262c;
        case 0x152630u: goto label_152630;
        case 0x152634u: goto label_152634;
        case 0x152638u: goto label_152638;
        case 0x15263cu: goto label_15263c;
        case 0x152640u: goto label_152640;
        case 0x152644u: goto label_152644;
        case 0x152648u: goto label_152648;
        case 0x15264cu: goto label_15264c;
        case 0x152650u: goto label_152650;
        case 0x152654u: goto label_152654;
        case 0x152658u: goto label_152658;
        case 0x15265cu: goto label_15265c;
        case 0x152660u: goto label_152660;
        case 0x152664u: goto label_152664;
        case 0x152668u: goto label_152668;
        case 0x15266cu: goto label_15266c;
        case 0x152670u: goto label_152670;
        case 0x152674u: goto label_152674;
        case 0x152678u: goto label_152678;
        case 0x15267cu: goto label_15267c;
        case 0x152680u: goto label_152680;
        case 0x152684u: goto label_152684;
        case 0x152688u: goto label_152688;
        case 0x15268cu: goto label_15268c;
        case 0x152690u: goto label_152690;
        case 0x152694u: goto label_152694;
        case 0x152698u: goto label_152698;
        case 0x15269cu: goto label_15269c;
        case 0x1526a0u: goto label_1526a0;
        case 0x1526a4u: goto label_1526a4;
        case 0x1526a8u: goto label_1526a8;
        case 0x1526acu: goto label_1526ac;
        case 0x1526b0u: goto label_1526b0;
        case 0x1526b4u: goto label_1526b4;
        case 0x1526b8u: goto label_1526b8;
        case 0x1526bcu: goto label_1526bc;
        case 0x1526c0u: goto label_1526c0;
        case 0x1526c4u: goto label_1526c4;
        case 0x1526c8u: goto label_1526c8;
        case 0x1526ccu: goto label_1526cc;
        case 0x1526d0u: goto label_1526d0;
        case 0x1526d4u: goto label_1526d4;
        case 0x1526d8u: goto label_1526d8;
        case 0x1526dcu: goto label_1526dc;
        case 0x1526e0u: goto label_1526e0;
        case 0x1526e4u: goto label_1526e4;
        case 0x1526e8u: goto label_1526e8;
        case 0x1526ecu: goto label_1526ec;
        case 0x1526f0u: goto label_1526f0;
        case 0x1526f4u: goto label_1526f4;
        case 0x1526f8u: goto label_1526f8;
        case 0x1526fcu: goto label_1526fc;
        case 0x152700u: goto label_152700;
        case 0x152704u: goto label_152704;
        case 0x152708u: goto label_152708;
        case 0x15270cu: goto label_15270c;
        case 0x152710u: goto label_152710;
        case 0x152714u: goto label_152714;
        case 0x152718u: goto label_152718;
        case 0x15271cu: goto label_15271c;
        case 0x152720u: goto label_152720;
        case 0x152724u: goto label_152724;
        case 0x152728u: goto label_152728;
        case 0x15272cu: goto label_15272c;
        case 0x152730u: goto label_152730;
        case 0x152734u: goto label_152734;
        case 0x152738u: goto label_152738;
        case 0x15273cu: goto label_15273c;
        case 0x152740u: goto label_152740;
        case 0x152744u: goto label_152744;
        case 0x152748u: goto label_152748;
        case 0x15274cu: goto label_15274c;
        case 0x152750u: goto label_152750;
        case 0x152754u: goto label_152754;
        case 0x152758u: goto label_152758;
        case 0x15275cu: goto label_15275c;
        case 0x152760u: goto label_152760;
        case 0x152764u: goto label_152764;
        case 0x152768u: goto label_152768;
        case 0x15276cu: goto label_15276c;
        case 0x152770u: goto label_152770;
        case 0x152774u: goto label_152774;
        case 0x152778u: goto label_152778;
        case 0x15277cu: goto label_15277c;
        case 0x152780u: goto label_152780;
        case 0x152784u: goto label_152784;
        case 0x152788u: goto label_152788;
        case 0x15278cu: goto label_15278c;
        case 0x152790u: goto label_152790;
        case 0x152794u: goto label_152794;
        case 0x152798u: goto label_152798;
        case 0x15279cu: goto label_15279c;
        case 0x1527a0u: goto label_1527a0;
        case 0x1527a4u: goto label_1527a4;
        case 0x1527a8u: goto label_1527a8;
        case 0x1527acu: goto label_1527ac;
        case 0x1527b0u: goto label_1527b0;
        case 0x1527b4u: goto label_1527b4;
        case 0x1527b8u: goto label_1527b8;
        case 0x1527bcu: goto label_1527bc;
        case 0x1527c0u: goto label_1527c0;
        case 0x1527c4u: goto label_1527c4;
        case 0x1527c8u: goto label_1527c8;
        case 0x1527ccu: goto label_1527cc;
        case 0x1527d0u: goto label_1527d0;
        case 0x1527d4u: goto label_1527d4;
        case 0x1527d8u: goto label_1527d8;
        case 0x1527dcu: goto label_1527dc;
        case 0x1527e0u: goto label_1527e0;
        case 0x1527e4u: goto label_1527e4;
        case 0x1527e8u: goto label_1527e8;
        case 0x1527ecu: goto label_1527ec;
        case 0x1527f0u: goto label_1527f0;
        case 0x1527f4u: goto label_1527f4;
        case 0x1527f8u: goto label_1527f8;
        case 0x1527fcu: goto label_1527fc;
        case 0x152800u: goto label_152800;
        case 0x152804u: goto label_152804;
        case 0x152808u: goto label_152808;
        case 0x15280cu: goto label_15280c;
        case 0x152810u: goto label_152810;
        case 0x152814u: goto label_152814;
        case 0x152818u: goto label_152818;
        case 0x15281cu: goto label_15281c;
        case 0x152820u: goto label_152820;
        case 0x152824u: goto label_152824;
        case 0x152828u: goto label_152828;
        case 0x15282cu: goto label_15282c;
        case 0x152830u: goto label_152830;
        case 0x152834u: goto label_152834;
        case 0x152838u: goto label_152838;
        case 0x15283cu: goto label_15283c;
        case 0x152840u: goto label_152840;
        case 0x152844u: goto label_152844;
        case 0x152848u: goto label_152848;
        case 0x15284cu: goto label_15284c;
        case 0x152850u: goto label_152850;
        case 0x152854u: goto label_152854;
        case 0x152858u: goto label_152858;
        case 0x15285cu: goto label_15285c;
        case 0x152860u: goto label_152860;
        case 0x152864u: goto label_152864;
        case 0x152868u: goto label_152868;
        case 0x15286cu: goto label_15286c;
        case 0x152870u: goto label_152870;
        case 0x152874u: goto label_152874;
        case 0x152878u: goto label_152878;
        case 0x15287cu: goto label_15287c;
        case 0x152880u: goto label_152880;
        case 0x152884u: goto label_152884;
        case 0x152888u: goto label_152888;
        case 0x15288cu: goto label_15288c;
        case 0x152890u: goto label_152890;
        case 0x152894u: goto label_152894;
        case 0x152898u: goto label_152898;
        case 0x15289cu: goto label_15289c;
        case 0x1528a0u: goto label_1528a0;
        case 0x1528a4u: goto label_1528a4;
        case 0x1528a8u: goto label_1528a8;
        case 0x1528acu: goto label_1528ac;
        case 0x1528b0u: goto label_1528b0;
        case 0x1528b4u: goto label_1528b4;
        case 0x1528b8u: goto label_1528b8;
        case 0x1528bcu: goto label_1528bc;
        case 0x1528c0u: goto label_1528c0;
        case 0x1528c4u: goto label_1528c4;
        case 0x1528c8u: goto label_1528c8;
        case 0x1528ccu: goto label_1528cc;
        case 0x1528d0u: goto label_1528d0;
        case 0x1528d4u: goto label_1528d4;
        case 0x1528d8u: goto label_1528d8;
        case 0x1528dcu: goto label_1528dc;
        case 0x1528e0u: goto label_1528e0;
        case 0x1528e4u: goto label_1528e4;
        case 0x1528e8u: goto label_1528e8;
        case 0x1528ecu: goto label_1528ec;
        case 0x1528f0u: goto label_1528f0;
        case 0x1528f4u: goto label_1528f4;
        case 0x1528f8u: goto label_1528f8;
        case 0x1528fcu: goto label_1528fc;
        case 0x152900u: goto label_152900;
        case 0x152904u: goto label_152904;
        case 0x152908u: goto label_152908;
        case 0x15290cu: goto label_15290c;
        case 0x152910u: goto label_152910;
        case 0x152914u: goto label_152914;
        case 0x152918u: goto label_152918;
        case 0x15291cu: goto label_15291c;
        case 0x152920u: goto label_152920;
        case 0x152924u: goto label_152924;
        case 0x152928u: goto label_152928;
        case 0x15292cu: goto label_15292c;
        case 0x152930u: goto label_152930;
        case 0x152934u: goto label_152934;
        case 0x152938u: goto label_152938;
        case 0x15293cu: goto label_15293c;
        case 0x152940u: goto label_152940;
        case 0x152944u: goto label_152944;
        case 0x152948u: goto label_152948;
        case 0x15294cu: goto label_15294c;
        case 0x152950u: goto label_152950;
        case 0x152954u: goto label_152954;
        case 0x152958u: goto label_152958;
        case 0x15295cu: goto label_15295c;
        case 0x152960u: goto label_152960;
        case 0x152964u: goto label_152964;
        case 0x152968u: goto label_152968;
        case 0x15296cu: goto label_15296c;
        case 0x152970u: goto label_152970;
        case 0x152974u: goto label_152974;
        case 0x152978u: goto label_152978;
        case 0x15297cu: goto label_15297c;
        case 0x152980u: goto label_152980;
        case 0x152984u: goto label_152984;
        case 0x152988u: goto label_152988;
        case 0x15298cu: goto label_15298c;
        case 0x152990u: goto label_152990;
        case 0x152994u: goto label_152994;
        case 0x152998u: goto label_152998;
        case 0x15299cu: goto label_15299c;
        case 0x1529a0u: goto label_1529a0;
        case 0x1529a4u: goto label_1529a4;
        case 0x1529a8u: goto label_1529a8;
        case 0x1529acu: goto label_1529ac;
        case 0x1529b0u: goto label_1529b0;
        case 0x1529b4u: goto label_1529b4;
        case 0x1529b8u: goto label_1529b8;
        case 0x1529bcu: goto label_1529bc;
        case 0x1529c0u: goto label_1529c0;
        case 0x1529c4u: goto label_1529c4;
        case 0x1529c8u: goto label_1529c8;
        case 0x1529ccu: goto label_1529cc;
        case 0x1529d0u: goto label_1529d0;
        case 0x1529d4u: goto label_1529d4;
        case 0x1529d8u: goto label_1529d8;
        case 0x1529dcu: goto label_1529dc;
        case 0x1529e0u: goto label_1529e0;
        case 0x1529e4u: goto label_1529e4;
        case 0x1529e8u: goto label_1529e8;
        case 0x1529ecu: goto label_1529ec;
        case 0x1529f0u: goto label_1529f0;
        case 0x1529f4u: goto label_1529f4;
        case 0x1529f8u: goto label_1529f8;
        case 0x1529fcu: goto label_1529fc;
        case 0x152a00u: goto label_152a00;
        case 0x152a04u: goto label_152a04;
        case 0x152a08u: goto label_152a08;
        case 0x152a0cu: goto label_152a0c;
        case 0x152a10u: goto label_152a10;
        case 0x152a14u: goto label_152a14;
        case 0x152a18u: goto label_152a18;
        case 0x152a1cu: goto label_152a1c;
        default: return;
    }

label_152250:
    // 0x152250: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_152254:
    if (ctx->pc == 0x152254u) {
        ctx->pc = 0x152254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152250u;
        // 0x152254: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152258u;
        goto label_152258;
    }
    ctx->pc = 0x152250u;
    {
        const bool branch_taken_0x152250 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x152254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152250u;
        // 0x152254: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152250) {
            ctx->pc = 0x15225Cu;
            goto label_15225c;
        }
    }
    ctx->pc = 0x152258u;
label_152258:
    // 0x152258: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x152258u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15225c:
    // 0x15225c: 0x10000011  b           . + 4 + (0x11 << 2)
label_152260:
    if (ctx->pc == 0x152260u) {
        ctx->pc = 0x152260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15225Cu;
        // 0x152260: 0xa20203ce  sb          $v0, 0x3CE($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 974), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152264u;
        goto label_152264;
    }
    ctx->pc = 0x15225Cu;
    {
        const bool branch_taken_0x15225c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15225Cu;
        // 0x152260: 0xa20203ce  sb          $v0, 0x3CE($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 974), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15225c) {
            ctx->pc = 0x1522A4u;
            goto label_1522a4;
        }
    }
    ctx->pc = 0x152264u;
label_152264:
    // 0x152264: 0x2a620026  slti        $v0, $s3, 0x26
    ctx->pc = 0x152264u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)38) ? 1 : 0);
label_152268:
    // 0x152268: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_15226c:
    if (ctx->pc == 0x15226Cu) {
        ctx->pc = 0x15226Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152268u;
        // 0x15226c: 0x2a6200e0  slti        $v0, $s3, 0xE0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)224) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x152270u;
        goto label_152270;
    }
    ctx->pc = 0x152268u;
    {
        const bool branch_taken_0x152268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15226Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152268u;
        // 0x15226c: 0x2a6200e0  slti        $v0, $s3, 0xE0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)224) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x152268) {
            ctx->pc = 0x152280u;
            goto label_152280;
        }
    }
    ctx->pc = 0x152270u;
label_152270:
    // 0x152270: 0x2a620032  slti        $v0, $s3, 0x32
    ctx->pc = 0x152270u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)50) ? 1 : 0);
label_152274:
    // 0x152274: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_152278:
    if (ctx->pc == 0x152278u) {
        ctx->pc = 0x152278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152274u;
        // 0x152278: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15227Cu;
        goto label_15227c;
    }
    ctx->pc = 0x152274u;
    {
        const bool branch_taken_0x152274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x152278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152274u;
        // 0x152278: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152274) {
            ctx->pc = 0x152298u;
            goto label_152298;
        }
    }
    ctx->pc = 0x15227Cu;
label_15227c:
    // 0x15227c: 0x2a6200e0  slti        $v0, $s3, 0xE0
    ctx->pc = 0x15227cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)224) ? 1 : 0);
label_152280:
    // 0x152280: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_152284:
    if (ctx->pc == 0x152284u) {
        ctx->pc = 0x152284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152280u;
        // 0x152284: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152288u;
        goto label_152288;
    }
    ctx->pc = 0x152280u;
    {
        const bool branch_taken_0x152280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x152284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152280u;
        // 0x152284: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152280) {
            ctx->pc = 0x1522A0u;
            goto label_1522a0;
        }
    }
    ctx->pc = 0x152288u;
label_152288:
    // 0x152288: 0x2a6100ec  slti        $at, $s3, 0xEC
    ctx->pc = 0x152288u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)236) ? 1 : 0);
label_15228c:
    // 0x15228c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_152290:
    if (ctx->pc == 0x152290u) {
        ctx->pc = 0x152294u;
        goto label_152294;
    }
    ctx->pc = 0x15228Cu;
    {
        const bool branch_taken_0x15228c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15228c) {
            ctx->pc = 0x1522A0u;
            goto label_1522a0;
        }
    }
    ctx->pc = 0x152294u;
label_152294:
    // 0x152294: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x152294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_152298:
    // 0x152298: 0x10000002  b           . + 4 + (0x2 << 2)
label_15229c:
    if (ctx->pc == 0x15229Cu) {
        ctx->pc = 0x15229Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152298u;
        // 0x15229c: 0xa20203ce  sb          $v0, 0x3CE($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 974), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1522A0u;
        goto label_1522a0;
    }
    ctx->pc = 0x152298u;
    {
        const bool branch_taken_0x152298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15229Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152298u;
        // 0x15229c: 0xa20203ce  sb          $v0, 0x3CE($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 974), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152298) {
            ctx->pc = 0x1522A4u;
            goto label_1522a4;
        }
    }
    ctx->pc = 0x1522A0u;
label_1522a0:
    // 0x1522a0: 0xa20203ce  sb          $v0, 0x3CE($s0)
    ctx->pc = 0x1522a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 974), (uint8_t)GPR_U32(ctx, 2));
label_1522a4:
    // 0x1522a4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1522a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1522a8:
    // 0x1522a8: 0x8c224afc  lw          $v0, 0x4AFC($at)
    ctx->pc = 0x1522a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19196)));
label_1522ac:
    // 0x1522ac: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1522b0:
    if (ctx->pc == 0x1522B0u) {
        ctx->pc = 0x1522B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1522ACu;
        // 0x1522b0: 0x2a620032  slti        $v0, $s3, 0x32 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)50) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1522B4u;
        goto label_1522b4;
    }
    ctx->pc = 0x1522ACu;
    {
        const bool branch_taken_0x1522ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1522B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1522ACu;
        // 0x1522b0: 0x2a620032  slti        $v0, $s3, 0x32 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)50) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1522ac) {
            ctx->pc = 0x1522CCu;
            goto label_1522cc;
        }
    }
    ctx->pc = 0x1522B4u;
label_1522b4:
    // 0x1522b4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1522b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1522b8:
    // 0x1522b8: 0x8c224af8  lw          $v0, 0x4AF8($at)
    ctx->pc = 0x1522b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19192)));
label_1522bc:
    // 0x1522bc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1522c0:
    if (ctx->pc == 0x1522C0u) {
        ctx->pc = 0x1522C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1522BCu;
        // 0x1522c0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1522C4u;
        goto label_1522c4;
    }
    ctx->pc = 0x1522BCu;
    {
        const bool branch_taken_0x1522bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1522C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1522BCu;
        // 0x1522c0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1522bc) {
            ctx->pc = 0x1522C8u;
            goto label_1522c8;
        }
    }
    ctx->pc = 0x1522C4u;
label_1522c4:
    // 0x1522c4: 0xa20203ce  sb          $v0, 0x3CE($s0)
    ctx->pc = 0x1522c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 974), (uint8_t)GPR_U32(ctx, 2));
label_1522c8:
    // 0x1522c8: 0x2a620032  slti        $v0, $s3, 0x32
    ctx->pc = 0x1522c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)50) ? 1 : 0);
label_1522cc:
    // 0x1522cc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1522d0:
    if (ctx->pc == 0x1522D0u) {
        ctx->pc = 0x1522D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1522CCu;
        // 0x1522d0: 0xa61303cc  sh          $s3, 0x3CC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 972), (uint16_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1522D4u;
        goto label_1522d4;
    }
    ctx->pc = 0x1522CCu;
    {
        const bool branch_taken_0x1522cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1522D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1522CCu;
        // 0x1522d0: 0xa61303cc  sh          $s3, 0x3CC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 972), (uint16_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1522cc) {
            ctx->pc = 0x1522E8u;
            goto label_1522e8;
        }
    }
    ctx->pc = 0x1522D4u;
label_1522d4:
    // 0x1522d4: 0x2a6100dd  slti        $at, $s3, 0xDD
    ctx->pc = 0x1522d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)221) ? 1 : 0);
label_1522d8:
    // 0x1522d8: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_1522dc:
    if (ctx->pc == 0x1522DCu) {
        ctx->pc = 0x1522DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1522D8u;
        // 0x1522dc: 0x2a620019  slti        $v0, $s3, 0x19 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)25) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1522E0u;
        goto label_1522e0;
    }
    ctx->pc = 0x1522D8u;
    {
        const bool branch_taken_0x1522d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1522DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1522D8u;
        // 0x1522dc: 0x2a620019  slti        $v0, $s3, 0x19 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)25) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1522d8) {
            ctx->pc = 0x1522ECu;
            goto label_1522ec;
        }
    }
    ctx->pc = 0x1522E0u;
label_1522e0:
    // 0x1522e0: 0x10000005  b           . + 4 + (0x5 << 2)
label_1522e4:
    if (ctx->pc == 0x1522E4u) {
        ctx->pc = 0x1522E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1522E0u;
        // 0x1522e4: 0x24130016  addiu       $s3, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1522E8u;
        goto label_1522e8;
    }
    ctx->pc = 0x1522E0u;
    {
        const bool branch_taken_0x1522e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1522E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1522E0u;
        // 0x1522e4: 0x24130016  addiu       $s3, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1522e0) {
            ctx->pc = 0x1522F8u;
            goto label_1522f8;
        }
    }
    ctx->pc = 0x1522E8u;
label_1522e8:
    // 0x1522e8: 0x2a620019  slti        $v0, $s3, 0x19
    ctx->pc = 0x1522e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)25) ? 1 : 0);
label_1522ec:
    // 0x1522ec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1522f0:
    if (ctx->pc == 0x1522F0u) {
        ctx->pc = 0x1522F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1522ECu;
        // 0x1522f0: 0x1310c0  sll         $v0, $s3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1522F4u;
        goto label_1522f4;
    }
    ctx->pc = 0x1522ECu;
    {
        const bool branch_taken_0x1522ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1522F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1522ECu;
        // 0x1522f0: 0x1310c0  sll         $v0, $s3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1522ec) {
            ctx->pc = 0x1522FCu;
            goto label_1522fc;
        }
    }
    ctx->pc = 0x1522F4u;
label_1522f4:
    // 0x1522f4: 0x24130018  addiu       $s3, $zero, 0x18
    ctx->pc = 0x1522f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1522f8:
    // 0x1522f8: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x1522f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
label_1522fc:
    // 0x1522fc: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1522fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_152300:
    // 0x152300: 0x532821  addu        $a1, $v0, $s3
    ctx->pc = 0x152300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_152304:
    // 0x152304: 0x246310e0  addiu       $v1, $v1, 0x10E0
    ctx->pc = 0x152304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4320));
label_152308:
    // 0x152308: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x152308u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_15230c:
    // 0x15230c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15230cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_152310:
    // 0x152310: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x152310u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_152314:
    // 0x152314: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x152314u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_152318:
    // 0x152318: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x152318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15231c:
    // 0x15231c: 0xae0303c0  sw          $v1, 0x3C0($s0)
    ctx->pc = 0x15231cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 960), GPR_U32(ctx, 3));
label_152320:
    // 0x152320: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x152320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_152324:
    // 0x152324: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x152324u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_152328:
    // 0x152328: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x152328u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15232c:
    // 0x15232c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15232cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_152330:
    // 0x152330: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x152330u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_152334:
    // 0x152334: 0x3e00008  jr          $ra
label_152338:
    if (ctx->pc == 0x152338u) {
        ctx->pc = 0x152338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152334u;
        // 0x152338: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15233Cu;
        goto label_15233c;
    }
    ctx->pc = 0x152334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152334u;
        // 0x152338: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152334u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15233Cu;
label_15233c:
    // 0x15233c: 0x0  nop
    ctx->pc = 0x15233cu;
    // NOP
label_152340:
    // 0x152340: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x152340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_152344:
    // 0x152344: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x152344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_152348:
    // 0x152348: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x152348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_15234c:
    // 0x15234c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15234cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_152350:
    // 0x152350: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x152350u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_152354:
    // 0x152354: 0x3c100025  lui         $s0, 0x25
    ctx->pc = 0x152354u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)37 << 16));
label_152358:
    // 0x152358: 0x261010e0  addiu       $s0, $s0, 0x10E0
    ctx->pc = 0x152358u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4320));
label_15235c:
    // 0x15235c: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x15235cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_152360:
    // 0x152360: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_152364:
    if (ctx->pc == 0x152364u) {
        ctx->pc = 0x152368u;
        goto label_152368;
    }
    ctx->pc = 0x152360u;
    {
        const bool branch_taken_0x152360 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x152360) {
            ctx->pc = 0x152370u;
            goto label_152370;
        }
    }
    ctx->pc = 0x152368u;
label_152368:
    // 0x152368: 0xc070038  jal         func_1C00E0
label_15236c:
    if (ctx->pc == 0x15236Cu) {
        ctx->pc = 0x152370u;
        goto label_152370;
    }
    ctx->pc = 0x152368u;
    SET_GPR_U32(ctx, 31, 0x152370u);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x152370u;
label_152370:
    // 0x152370: 0x8e0400d0  lw          $a0, 0xD0($s0)
    ctx->pc = 0x152370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_152374:
    // 0x152374: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_152378:
    if (ctx->pc == 0x152378u) {
        ctx->pc = 0x15237Cu;
        goto label_15237c;
    }
    ctx->pc = 0x152374u;
    {
        const bool branch_taken_0x152374 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x152374) {
            ctx->pc = 0x152384u;
            goto label_152384;
        }
    }
    ctx->pc = 0x15237Cu;
label_15237c:
    // 0x15237c: 0xc070038  jal         func_1C00E0
label_152380:
    if (ctx->pc == 0x152380u) {
        ctx->pc = 0x152384u;
        goto label_152384;
    }
    ctx->pc = 0x15237Cu;
    SET_GPR_U32(ctx, 31, 0x152384u);
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x152384u;
label_152384:
    // 0x152384: 0x0  nop
    ctx->pc = 0x152384u;
    // NOP
label_152388:
    // 0x152388: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x152388u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_15238c:
    // 0x15238c: 0x2a230019  slti        $v1, $s1, 0x19
    ctx->pc = 0x15238cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)25) ? 1 : 0);
label_152390:
    // 0x152390: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
label_152394:
    if (ctx->pc == 0x152394u) {
        ctx->pc = 0x152394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152390u;
        // 0x152394: 0x261000d8  addiu       $s0, $s0, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152398u;
        goto label_152398;
    }
    ctx->pc = 0x152390u;
    {
        const bool branch_taken_0x152390 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x152394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152390u;
        // 0x152394: 0x261000d8  addiu       $s0, $s0, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152390) {
            ctx->pc = 0x15235Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15235c;
        }
    }
    ctx->pc = 0x152398u;
label_152398:
    // 0x152398: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x152398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_15239c:
    // 0x15239c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15239cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1523a0:
    // 0x1523a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1523a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1523a4:
    // 0x1523a4: 0x3e00008  jr          $ra
label_1523a8:
    if (ctx->pc == 0x1523A8u) {
        ctx->pc = 0x1523A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1523A4u;
        // 0x1523a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1523ACu;
        goto label_1523ac;
    }
    ctx->pc = 0x1523A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1523A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1523A4u;
        // 0x1523a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1523A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1523ACu;
label_1523ac:
    // 0x1523ac: 0x0  nop
    ctx->pc = 0x1523acu;
    // NOP
label_1523b0:
    // 0x1523b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1523b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1523b4:
    // 0x1523b4: 0x240405a8  addiu       $a0, $zero, 0x5A8
    ctx->pc = 0x1523b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1448));
label_1523b8:
    // 0x1523b8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1523b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1523bc:
    // 0x1523bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1523bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1523c0:
    // 0x1523c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1523c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1523c4:
    // 0x1523c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1523c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1523c8:
    // 0x1523c8: 0xc041738  jal         func_105CE0
label_1523cc:
    if (ctx->pc == 0x1523CCu) {
        ctx->pc = 0x1523CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1523C8u;
        // 0x1523cc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1523D0u;
        goto label_1523d0;
    }
    ctx->pc = 0x1523C8u;
    SET_GPR_U32(ctx, 31, 0x1523D0u);
    ctx->pc = 0x1523CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1523C8u;
    // 0x1523cc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x1523C8u, 0x1523D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1523D0u;
label_1523d0:
    // 0x1523d0: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x1523d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_1523d4:
    // 0x1523d4: 0xc070080  jal         func_1C0200
label_1523d8:
    if (ctx->pc == 0x1523D8u) {
        ctx->pc = 0x1523D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1523D4u;
        // 0x1523d8: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1523DCu;
        goto label_1523dc;
    }
    ctx->pc = 0x1523D4u;
    SET_GPR_U32(ctx, 31, 0x1523DCu);
    ctx->pc = 0x1523D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1523D4u;
    // 0x1523d8: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x1523DCu;
label_1523dc:
    // 0x1523dc: 0x240405a8  addiu       $a0, $zero, 0x5A8
    ctx->pc = 0x1523dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1448));
label_1523e0:
    // 0x1523e0: 0xc0416e4  jal         func_105B90
label_1523e4:
    if (ctx->pc == 0x1523E4u) {
        ctx->pc = 0x1523E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1523E0u;
        // 0x1523e4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1523E8u;
        goto label_1523e8;
    }
    ctx->pc = 0x1523E0u;
    SET_GPR_U32(ctx, 31, 0x1523E8u);
    ctx->pc = 0x1523E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1523E0u;
    // 0x1523e4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B90u, 0x1523E0u, 0x1523E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1523E8u;
label_1523e8:
    // 0x1523e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1523e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1523ec:
    // 0x1523ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1523ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1523f0:
    // 0x1523f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1523f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1523f4:
    // 0x1523f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1523f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1523f8:
    // 0x1523f8: 0x2407000f  addiu       $a3, $zero, 0xF
    ctx->pc = 0x1523f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1523fc:
    // 0x1523fc: 0x24080158  addiu       $t0, $zero, 0x158
    ctx->pc = 0x1523fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 344));
label_152400:
    // 0x152400: 0xc0603d4  jal         func_180F50
label_152404:
    if (ctx->pc == 0x152404u) {
        ctx->pc = 0x152404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152400u;
        // 0x152404: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152408u;
        goto label_152408;
    }
    ctx->pc = 0x152400u;
    SET_GPR_U32(ctx, 31, 0x152408u);
    ctx->pc = 0x152404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152400u;
    // 0x152404: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180F50u;
    { ctx->pc = 0x180f50; return; }
    ctx->pc = 0x152408u;
label_152408:
    // 0x152408: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x152408u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15240c:
    // 0x15240c: 0xc070038  jal         func_1C00E0
label_152410:
    if (ctx->pc == 0x152410u) {
        ctx->pc = 0x152410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15240Cu;
        // 0x152410: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152414u;
        goto label_152414;
    }
    ctx->pc = 0x15240Cu;
    SET_GPR_U32(ctx, 31, 0x152414u);
    ctx->pc = 0x152410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15240Cu;
    // 0x152410: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    { ctx->pc = 0x1c00e0; return; }
    ctx->pc = 0x152414u;
label_152414:
    // 0x152414: 0x3c100025  lui         $s0, 0x25
    ctx->pc = 0x152414u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)37 << 16));
label_152418:
    // 0x152418: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x152418u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15241c:
    // 0x15241c: 0x261010e0  addiu       $s0, $s0, 0x10E0
    ctx->pc = 0x15241cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4320));
label_152420:
    // 0x152420: 0x8e130000  lw          $s3, 0x0($s0)
    ctx->pc = 0x152420u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_152424:
    // 0x152424: 0xc041738  jal         func_105CE0
label_152428:
    if (ctx->pc == 0x152428u) {
        ctx->pc = 0x152428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152424u;
        // 0x152428: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15242Cu;
        goto label_15242c;
    }
    ctx->pc = 0x152424u;
    SET_GPR_U32(ctx, 31, 0x15242Cu);
    ctx->pc = 0x152428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152424u;
    // 0x152428: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x152424u, 0x15242Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15242Cu;
label_15242c:
    // 0x15242c: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x15242cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_152430:
    // 0x152430: 0xc070080  jal         func_1C0200
label_152434:
    if (ctx->pc == 0x152434u) {
        ctx->pc = 0x152434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152430u;
        // 0x152434: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152438u;
        goto label_152438;
    }
    ctx->pc = 0x152430u;
    SET_GPR_U32(ctx, 31, 0x152438u);
    ctx->pc = 0x152434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152430u;
    // 0x152434: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    { ctx->pc = 0x1c0200; return; }
    ctx->pc = 0x152438u;
label_152438:
    // 0x152438: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x152438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15243c:
    // 0x15243c: 0xc0416e4  jal         func_105B90
label_152440:
    if (ctx->pc == 0x152440u) {
        ctx->pc = 0x152440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15243Cu;
        // 0x152440: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152444u;
        goto label_152444;
    }
    ctx->pc = 0x15243Cu;
    SET_GPR_U32(ctx, 31, 0x152444u);
    ctx->pc = 0x152440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15243Cu;
    // 0x152440: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B90u, 0x15243Cu, 0x152444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152444u;
label_152444:
    // 0x152444: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x152444u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_152448:
    // 0x152448: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x152448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_15244c:
    // 0x15244c: 0xc044ed8  jal         func_113B60
label_152450:
    if (ctx->pc == 0x152450u) {
        ctx->pc = 0x152450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15244Cu;
        // 0x152450: 0xfe110010  sd          $s1, 0x10($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152454u;
        goto label_152454;
    }
    ctx->pc = 0x15244Cu;
    SET_GPR_U32(ctx, 31, 0x152454u);
    ctx->pc = 0x152450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15244Cu;
    // 0x152450: 0xfe110010  sd          $s1, 0x10($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113B60u, 0x15244Cu, 0x152454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152454u;
label_152454:
    // 0x152454: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x152454u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_152458:
    // 0x152458: 0x2a420019  slti        $v0, $s2, 0x19
    ctx->pc = 0x152458u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)25) ? 1 : 0);
label_15245c:
    // 0x15245c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_152460:
    if (ctx->pc == 0x152460u) {
        ctx->pc = 0x152460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15245Cu;
        // 0x152460: 0x261000d8  addiu       $s0, $s0, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152464u;
        goto label_152464;
    }
    ctx->pc = 0x15245Cu;
    {
        const bool branch_taken_0x15245c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x152460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15245Cu;
        // 0x152460: 0x261000d8  addiu       $s0, $s0, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15245c) {
            ctx->pc = 0x152420u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_152420;
        }
    }
    ctx->pc = 0x152464u;
label_152464:
    // 0x152464: 0x3c100032  lui         $s0, 0x32
    ctx->pc = 0x152464u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)50 << 16));
label_152468:
    // 0x152468: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x152468u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15246c:
    // 0x15246c: 0x26106c70  addiu       $s0, $s0, 0x6C70
    ctx->pc = 0x15246cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27760));
label_152470:
    // 0x152470: 0xc066e44  jal         func_19B910
label_152474:
    if (ctx->pc == 0x152474u) {
        ctx->pc = 0x152474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152470u;
        // 0x152474: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152478u;
        goto label_152478;
    }
    ctx->pc = 0x152470u;
    SET_GPR_U32(ctx, 31, 0x152478u);
    ctx->pc = 0x152474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152470u;
    // 0x152474: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x152478u;
label_152478:
    // 0x152478: 0xae0003b0  sw          $zero, 0x3B0($s0)
    ctx->pc = 0x152478u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 944), GPR_U32(ctx, 0));
label_15247c:
    // 0x15247c: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x15247cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_152480:
    // 0x152480: 0xae0003b4  sw          $zero, 0x3B4($s0)
    ctx->pc = 0x152480u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 948), GPR_U32(ctx, 0));
label_152484:
    // 0x152484: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x152484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_152488:
    // 0x152488: 0xae0003b8  sw          $zero, 0x3B8($s0)
    ctx->pc = 0x152488u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 952), GPR_U32(ctx, 0));
label_15248c:
    // 0x15248c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x15248cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_152490:
    // 0x152490: 0xae0003bc  sw          $zero, 0x3BC($s0)
    ctx->pc = 0x152490u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 956), GPR_U32(ctx, 0));
label_152494:
    // 0x152494: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x152494u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_152498:
    // 0x152498: 0xae0003c0  sw          $zero, 0x3C0($s0)
    ctx->pc = 0x152498u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 960), GPR_U32(ctx, 0));
label_15249c:
    // 0x15249c: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x15249cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_1524a0:
    // 0x1524a0: 0xa60003c8  sh          $zero, 0x3C8($s0)
    ctx->pc = 0x1524a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 968), (uint16_t)GPR_U32(ctx, 0));
label_1524a4:
    // 0x1524a4: 0xa60003ca  sh          $zero, 0x3CA($s0)
    ctx->pc = 0x1524a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 970), (uint16_t)GPR_U32(ctx, 0));
label_1524a8:
    // 0x1524a8: 0xa20503ce  sb          $a1, 0x3CE($s0)
    ctx->pc = 0x1524a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 974), (uint8_t)GPR_U32(ctx, 5));
label_1524ac:
    // 0x1524ac: 0xa20003cf  sb          $zero, 0x3CF($s0)
    ctx->pc = 0x1524acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 975), (uint8_t)GPR_U32(ctx, 0));
label_1524b0:
    // 0x1524b0: 0xae0003c4  sw          $zero, 0x3C4($s0)
    ctx->pc = 0x1524b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 964), GPR_U32(ctx, 0));
label_1524b4:
    // 0x1524b4: 0xc05cf6c  jal         func_173DB0
label_1524b8:
    if (ctx->pc == 0x1524B8u) {
        ctx->pc = 0x1524B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1524B4u;
        // 0x1524b8: 0xa60303cc  sh          $v1, 0x3CC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 972), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1524BCu;
        goto label_1524bc;
    }
    ctx->pc = 0x1524B4u;
    SET_GPR_U32(ctx, 31, 0x1524BCu);
    ctx->pc = 0x1524B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1524B4u;
    // 0x1524b8: 0xa60303cc  sh          $v1, 0x3CC($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 972), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173DB0u;
    { ctx->pc = 0x173db0; return; }
    ctx->pc = 0x1524BCu;
label_1524bc:
    // 0x1524bc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1524bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1524c0:
    // 0x1524c0: 0x2a220014  slti        $v0, $s1, 0x14
    ctx->pc = 0x1524c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)20) ? 1 : 0);
label_1524c4:
    // 0x1524c4: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_1524c8:
    if (ctx->pc == 0x1524C8u) {
        ctx->pc = 0x1524C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1524C4u;
        // 0x1524c8: 0x261003d0  addiu       $s0, $s0, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 976));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1524CCu;
        goto label_1524cc;
    }
    ctx->pc = 0x1524C4u;
    {
        const bool branch_taken_0x1524c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1524C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1524C4u;
        // 0x1524c8: 0x261003d0  addiu       $s0, $s0, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1524c4) {
            ctx->pc = 0x152470u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_152470;
        }
    }
    ctx->pc = 0x1524CCu;
label_1524cc:
    // 0x1524cc: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x1524ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
label_1524d0:
    // 0x1524d0: 0xc066e44  jal         func_19B910
label_1524d4:
    if (ctx->pc == 0x1524D4u) {
        ctx->pc = 0x1524D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1524D0u;
        // 0x1524d4: 0x2484b8b0  addiu       $a0, $a0, -0x4750 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1524D8u;
        goto label_1524d8;
    }
    ctx->pc = 0x1524D0u;
    SET_GPR_U32(ctx, 31, 0x1524D8u);
    ctx->pc = 0x1524D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1524D0u;
    // 0x1524d4: 0x2484b8b0  addiu       $a0, $a0, -0x4750 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    { ctx->pc = 0x19b910; return; }
    ctx->pc = 0x1524D8u;
label_1524d8:
    // 0x1524d8: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x1524d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
label_1524dc:
    // 0x1524dc: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x1524dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
label_1524e0:
    // 0x1524e0: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x1524e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_1524e4:
    // 0x1524e4: 0x2484b8b0  addiu       $a0, $a0, -0x4750
    ctx->pc = 0x1524e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949040));
label_1524e8:
    // 0x1524e8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1524e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1524ec:
    // 0x1524ec: 0xc066ec0  jal         func_19BB00
label_1524f0:
    if (ctx->pc == 0x1524F0u) {
        ctx->pc = 0x1524F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1524ECu;
        // 0x1524f0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1524F4u;
        goto label_1524f4;
    }
    ctx->pc = 0x1524ECu;
    SET_GPR_U32(ctx, 31, 0x1524F4u);
    ctx->pc = 0x1524F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1524ECu;
    // 0x1524f0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    { ctx->pc = 0x19bb00; return; }
    ctx->pc = 0x1524F4u;
label_1524f4:
    // 0x1524f4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1524f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1524f8:
    // 0x1524f8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1524f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1524fc:
    // 0x1524fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1524fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_152500:
    // 0x152500: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x152500u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_152504:
    // 0x152504: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x152504u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_152508:
    // 0x152508: 0x3e00008  jr          $ra
label_15250c:
    if (ctx->pc == 0x15250Cu) {
        ctx->pc = 0x15250Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152508u;
        // 0x15250c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152510u;
        goto label_152510;
    }
    ctx->pc = 0x152508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15250Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152508u;
        // 0x15250c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152510u;
label_152510:
    // 0x152510: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x152510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_152514:
    // 0x152514: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x152514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_152518:
    // 0x152518: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x152518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_15251c:
    // 0x15251c: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x15251cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_152520:
    // 0x152520: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x152520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_152524:
    // 0x152524: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x152524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_152528:
    // 0x152528: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x152528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_15252c:
    // 0x15252c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x15252cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_152530:
    // 0x152530: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x152530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_152534:
    // 0x152534: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x152534u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
label_152538:
    // 0x152538: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x152538u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_15253c:
    // 0x15253c: 0x24a51300  addiu       $a1, $a1, 0x1300
    ctx->pc = 0x15253cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4864));
label_152540:
    // 0x152540: 0x84264ae2  lh          $a2, 0x4AE2($at)
    ctx->pc = 0x152540u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19170)));
label_152544:
    // 0x152544: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x152544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_152548:
    // 0x152548: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x152548u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_15254c:
    // 0x15254c: 0x8c234afc  lw          $v1, 0x4AFC($at)
    ctx->pc = 0x15254cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19196)));
label_152550:
    // 0x152550: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x152550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_152554:
    // 0x152554: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
label_152558:
    if (ctx->pc == 0x152558u) {
        ctx->pc = 0x152558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152554u;
        // 0x152558: 0x24b03740  addiu       $s0, $a1, 0x3740 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 14144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15255Cu;
        goto label_15255c;
    }
    ctx->pc = 0x152554u;
    {
        const bool branch_taken_0x152554 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x152558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152554u;
        // 0x152558: 0x24b03740  addiu       $s0, $a1, 0x3740 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 14144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152554) {
            ctx->pc = 0x15259Cu;
            goto label_15259c;
        }
    }
    ctx->pc = 0x15255Cu;
label_15255c:
    // 0x15255c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15255cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_152560:
    // 0x152560: 0x8c234af8  lw          $v1, 0x4AF8($at)
    ctx->pc = 0x152560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19192)));
label_152564:
    // 0x152564: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_152568:
    if (ctx->pc == 0x152568u) {
        ctx->pc = 0x152568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152564u;
        // 0x152568: 0x24030018  addiu       $v1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15256Cu;
        goto label_15256c;
    }
    ctx->pc = 0x152564u;
    {
        const bool branch_taken_0x152564 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x152568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152564u;
        // 0x152568: 0x24030018  addiu       $v1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152564) {
            ctx->pc = 0x1525A0u;
            goto label_1525a0;
        }
    }
    ctx->pc = 0x15256Cu;
label_15256c:
    // 0x15256c: 0x28830026  slti        $v1, $a0, 0x26
    ctx->pc = 0x15256cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)38) ? 1 : 0);
label_152570:
    // 0x152570: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_152574:
    if (ctx->pc == 0x152574u) {
        ctx->pc = 0x152574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152570u;
        // 0x152574: 0x288300e0  slti        $v1, $a0, 0xE0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)224) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x152578u;
        goto label_152578;
    }
    ctx->pc = 0x152570u;
    {
        const bool branch_taken_0x152570 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x152574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152570u;
        // 0x152574: 0x288300e0  slti        $v1, $a0, 0xE0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)224) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x152570) {
            ctx->pc = 0x152588u;
            goto label_152588;
        }
    }
    ctx->pc = 0x152578u;
label_152578:
    // 0x152578: 0x28830032  slti        $v1, $a0, 0x32
    ctx->pc = 0x152578u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)50) ? 1 : 0);
label_15257c:
    // 0x15257c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_152580:
    if (ctx->pc == 0x152580u) {
        ctx->pc = 0x152584u;
        goto label_152584;
    }
    ctx->pc = 0x15257Cu;
    {
        const bool branch_taken_0x15257c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15257c) {
            ctx->pc = 0x152598u;
            goto label_152598;
        }
    }
    ctx->pc = 0x152584u;
label_152584:
    // 0x152584: 0x288300e0  slti        $v1, $a0, 0xE0
    ctx->pc = 0x152584u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)224) ? 1 : 0);
label_152588:
    // 0x152588: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_15258c:
    if (ctx->pc == 0x15258Cu) {
        ctx->pc = 0x15258Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152588u;
        // 0x15258c: 0x288100ec  slti        $at, $a0, 0xEC (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)236) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x152590u;
        goto label_152590;
    }
    ctx->pc = 0x152588u;
    {
        const bool branch_taken_0x152588 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15258Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152588u;
        // 0x15258c: 0x288100ec  slti        $at, $a0, 0xEC (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)236) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x152588) {
            ctx->pc = 0x15259Cu;
            goto label_15259c;
        }
    }
    ctx->pc = 0x152590u;
label_152590:
    // 0x152590: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_152594:
    if (ctx->pc == 0x152594u) {
        ctx->pc = 0x152598u;
        goto label_152598;
    }
    ctx->pc = 0x152590u;
    {
        const bool branch_taken_0x152590 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x152590) {
            ctx->pc = 0x15259Cu;
            goto label_15259c;
        }
    }
    ctx->pc = 0x152598u;
label_152598:
    // 0x152598: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x152598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_15259c:
    // 0x15259c: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x15259cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1525a0:
    // 0x1525a0: 0x14830096  bne         $a0, $v1, . + 4 + (0x96 << 2)
label_1525a4:
    if (ctx->pc == 0x1525A4u) {
        ctx->pc = 0x1525A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1525A0u;
        // 0x1525a4: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1525A8u;
        goto label_1525a8;
    }
    ctx->pc = 0x1525A0u;
    {
        const bool branch_taken_0x1525a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1525A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1525A0u;
        // 0x1525a4: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1525a0) {
            ctx->pc = 0x1527FCu;
            goto label_1527fc;
        }
    }
    ctx->pc = 0x1525A8u;
label_1525a8:
    // 0x1525a8: 0x24020029  addiu       $v0, $zero, 0x29
    ctx->pc = 0x1525a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_1525ac:
    // 0x1525ac: 0x90234af6  lbu         $v1, 0x4AF6($at)
    ctx->pc = 0x1525acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19190)));
label_1525b0:
    // 0x1525b0: 0x14620045  bne         $v1, $v0, . + 4 + (0x45 << 2)
label_1525b4:
    if (ctx->pc == 0x1525B4u) {
        ctx->pc = 0x1525B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1525B0u;
        // 0x1525b4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1525B8u;
        goto label_1525b8;
    }
    ctx->pc = 0x1525B0u;
    {
        const bool branch_taken_0x1525b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1525B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1525B0u;
        // 0x1525b4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1525b0) {
            ctx->pc = 0x1526C8u;
            goto label_1526c8;
        }
    }
    ctx->pc = 0x1525B8u;
label_1525b8:
    // 0x1525b8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1525b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1525bc:
    // 0x1525bc: 0x90224996  lbu         $v0, 0x4996($at)
    ctx->pc = 0x1525bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18838)));
label_1525c0:
    // 0x1525c0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1525c4:
    if (ctx->pc == 0x1525C4u) {
        ctx->pc = 0x1525C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1525C0u;
        // 0x1525c4: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1525C8u;
        goto label_1525c8;
    }
    ctx->pc = 0x1525C0u;
    {
        const bool branch_taken_0x1525c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1525C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1525C0u;
        // 0x1525c4: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1525c0) {
            ctx->pc = 0x1525E4u;
            goto label_1525e4;
        }
    }
    ctx->pc = 0x1525C8u;
label_1525c8:
    // 0x1525c8: 0x90224a0c  lbu         $v0, 0x4A0C($at)
    ctx->pc = 0x1525c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18956)));
label_1525cc:
    // 0x1525cc: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
label_1525d0:
    if (ctx->pc == 0x1525D0u) {
        ctx->pc = 0x1525D4u;
        goto label_1525d4;
    }
    ctx->pc = 0x1525CCu;
    {
        const bool branch_taken_0x1525cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1525cc) {
            ctx->pc = 0x1526C8u;
            goto label_1526c8;
        }
    }
    ctx->pc = 0x1525D4u;
label_1525d4:
    // 0x1525d4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1525d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1525d8:
    // 0x1525d8: 0x90224a26  lbu         $v0, 0x4A26($at)
    ctx->pc = 0x1525d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18982)));
label_1525dc:
    // 0x1525dc: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
label_1525e0:
    if (ctx->pc == 0x1525E0u) {
        ctx->pc = 0x1525E4u;
        goto label_1525e4;
    }
    ctx->pc = 0x1525DCu;
    {
        const bool branch_taken_0x1525dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1525dc) {
            ctx->pc = 0x1526C8u;
            goto label_1526c8;
        }
    }
    ctx->pc = 0x1525E4u;
label_1525e4:
    // 0x1525e4: 0x8f82863c  lw          $v0, -0x79C4($gp)
    ctx->pc = 0x1525e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936124)));
label_1525e8:
    // 0x1525e8: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_1525ec:
    if (ctx->pc == 0x1525ECu) {
        ctx->pc = 0x1525F0u;
        goto label_1525f0;
    }
    ctx->pc = 0x1525E8u;
    {
        const bool branch_taken_0x1525e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1525e8) {
            ctx->pc = 0x152644u;
            goto label_152644;
        }
    }
    ctx->pc = 0x1525F0u;
label_1525f0:
    // 0x1525f0: 0xc08f0cc  jal         func_23C330
label_1525f4:
    if (ctx->pc == 0x1525F4u) {
        ctx->pc = 0x1525F8u;
        goto label_1525f8;
    }
    ctx->pc = 0x1525F0u;
    SET_GPR_U32(ctx, 31, 0x1525F8u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1525F8u;
label_1525f8:
    // 0x1525f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1525f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1525fc:
    // 0x1525fc: 0x0  nop
    ctx->pc = 0x1525fcu;
    // NOP
label_152600:
    // 0x152600: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x152600u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_152604:
    // 0x152604: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x152604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_152608:
    // 0x152608: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x152608u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15260c:
    // 0x15260c: 0x0  nop
    ctx->pc = 0x15260cu;
    // NOP
label_152610:
    // 0x152610: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x152610u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_152614:
    // 0x152614: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x152614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_152618:
    // 0x152618: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x152618u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15261c:
    // 0x15261c: 0x0  nop
    ctx->pc = 0x15261cu;
    // NOP
label_152620:
    // 0x152620: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x152620u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_152624:
    // 0x152624: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x152624u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_152628:
    // 0x152628: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x152628u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15262c:
    // 0x15262c: 0x0  nop
    ctx->pc = 0x15262cu;
    // NOP
label_152630:
    // 0x152630: 0x28420007  slti        $v0, $v0, 0x7
    ctx->pc = 0x152630u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)7) ? 1 : 0);
label_152634:
    // 0x152634: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_152638:
    if (ctx->pc == 0x152638u) {
        ctx->pc = 0x15263Cu;
        goto label_15263c;
    }
    ctx->pc = 0x152634u;
    {
        const bool branch_taken_0x152634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x152634) {
            ctx->pc = 0x152694u;
            goto label_152694;
        }
    }
    ctx->pc = 0x15263Cu;
label_15263c:
    // 0x15263c: 0x10000015  b           . + 4 + (0x15 << 2)
label_152640:
    if (ctx->pc == 0x152640u) {
        ctx->pc = 0x152640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15263Cu;
        // 0x152640: 0x24110003  addiu       $s1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152644u;
        goto label_152644;
    }
    ctx->pc = 0x15263Cu;
    {
        const bool branch_taken_0x15263c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15263Cu;
        // 0x152640: 0x24110003  addiu       $s1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15263c) {
            ctx->pc = 0x152694u;
            goto label_152694;
        }
    }
    ctx->pc = 0x152644u;
label_152644:
    // 0x152644: 0xc08f0cc  jal         func_23C330
label_152648:
    if (ctx->pc == 0x152648u) {
        ctx->pc = 0x15264Cu;
        goto label_15264c;
    }
    ctx->pc = 0x152644u;
    SET_GPR_U32(ctx, 31, 0x15264Cu);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x15264Cu;
label_15264c:
    // 0x15264c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15264cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_152650:
    // 0x152650: 0x0  nop
    ctx->pc = 0x152650u;
    // NOP
label_152654:
    // 0x152654: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x152654u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_152658:
    // 0x152658: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x152658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_15265c:
    // 0x15265c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15265cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_152660:
    // 0x152660: 0x0  nop
    ctx->pc = 0x152660u;
    // NOP
label_152664:
    // 0x152664: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x152664u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_152668:
    // 0x152668: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x152668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_15266c:
    // 0x15266c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15266cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_152670:
    // 0x152670: 0x0  nop
    ctx->pc = 0x152670u;
    // NOP
label_152674:
    // 0x152674: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x152674u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_152678:
    // 0x152678: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x152678u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_15267c:
    // 0x15267c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x15267cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_152680:
    // 0x152680: 0x0  nop
    ctx->pc = 0x152680u;
    // NOP
label_152684:
    // 0x152684: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x152684u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_152688:
    // 0x152688: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_15268c:
    if (ctx->pc == 0x15268Cu) {
        ctx->pc = 0x152690u;
        goto label_152690;
    }
    ctx->pc = 0x152688u;
    {
        const bool branch_taken_0x152688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x152688) {
            ctx->pc = 0x152694u;
            goto label_152694;
        }
    }
    ctx->pc = 0x152690u;
label_152690:
    // 0x152690: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x152690u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_152694:
    // 0x152694: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x152694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_152698:
    // 0x152698: 0x1622000b  bne         $s1, $v0, . + 4 + (0xB << 2)
label_15269c:
    if (ctx->pc == 0x15269Cu) {
        ctx->pc = 0x1526A0u;
        goto label_1526a0;
    }
    ctx->pc = 0x152698u;
    {
        const bool branch_taken_0x152698 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x152698) {
            ctx->pc = 0x1526C8u;
            goto label_1526c8;
        }
    }
    ctx->pc = 0x1526A0u;
label_1526a0:
    // 0x1526a0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1526a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1526a4:
    // 0x1526a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1526a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1526a8:
    // 0x1526a8: 0x84244ae2  lh          $a0, 0x4AE2($at)
    ctx->pc = 0x1526a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19170)));
label_1526ac:
    // 0x1526ac: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1526acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1526b0:
    // 0x1526b0: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x1526b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
label_1526b4:
    // 0x1526b4: 0x94224aec  lhu         $v0, 0x4AEC($at)
    ctx->pc = 0x1526b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 19180)));
label_1526b8:
    // 0x1526b8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1526b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_1526bc:
    // 0x1526bc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1526bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1526c0:
    // 0x1526c0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1526c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1526c4:
    // 0x1526c4: 0xa4224aec  sh          $v0, 0x4AEC($at)
    ctx->pc = 0x1526c4u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 19180), (uint16_t)GPR_U32(ctx, 2));
label_1526c8:
    // 0x1526c8: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1526c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
label_1526cc:
    // 0x1526cc: 0x8c2203c0  lw          $v0, 0x3C0($at)
    ctx->pc = 0x1526ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 960)));
label_1526d0:
    // 0x1526d0: 0x14520003  bne         $v0, $s2, . + 4 + (0x3 << 2)
label_1526d4:
    if (ctx->pc == 0x1526D4u) {
        ctx->pc = 0x1526D8u;
        goto label_1526d8;
    }
    ctx->pc = 0x1526D0u;
    {
        const bool branch_taken_0x1526d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x1526d0) {
            ctx->pc = 0x1526E0u;
            goto label_1526e0;
        }
    }
    ctx->pc = 0x1526D8u;
label_1526d8:
    // 0x1526d8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1526dc:
    if (ctx->pc == 0x1526DCu) {
        ctx->pc = 0x1526DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1526D8u;
        // 0x1526dc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1526E0u;
        goto label_1526e0;
    }
    ctx->pc = 0x1526D8u;
    {
        const bool branch_taken_0x1526d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1526DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1526D8u;
        // 0x1526dc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1526d8) {
            ctx->pc = 0x1526E4u;
            goto label_1526e4;
        }
    }
    ctx->pc = 0x1526E0u;
label_1526e0:
    // 0x1526e0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1526e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1526e4:
    // 0x1526e4: 0xc090e74  jal         func_2439D0
label_1526e8:
    if (ctx->pc == 0x1526E8u) {
        ctx->pc = 0x1526E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1526E4u;
        // 0x1526e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1526ECu;
        goto label_1526ec;
    }
    ctx->pc = 0x1526E4u;
    SET_GPR_U32(ctx, 31, 0x1526ECu);
    ctx->pc = 0x1526E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1526E4u;
    // 0x1526e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2439D0u;
    { ctx->pc = 0x2439d0; return; }
    ctx->pc = 0x1526ECu;
label_1526ec:
    // 0x1526ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1526ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1526f0:
    // 0x1526f0: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x1526f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
label_1526f4:
    // 0x1526f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1526f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1526f8:
    // 0x1526f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1526f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1526fc:
    // 0x1526fc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1526fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_152700:
    // 0x152700: 0xc090e6c  jal         func_2439B0
label_152704:
    if (ctx->pc == 0x152704u) {
        ctx->pc = 0x152704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152700u;
        // 0x152704: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x152708u;
        goto label_152708;
    }
    ctx->pc = 0x152700u;
    SET_GPR_U32(ctx, 31, 0x152708u);
    ctx->pc = 0x152704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152700u;
    // 0x152704: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2439B0u;
    { ctx->pc = 0x2439b0; return; }
    ctx->pc = 0x152708u;
label_152708:
    // 0x152708: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x152708u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_15270c:
    // 0x15270c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15270cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_152710:
    // 0x152710: 0x8c244900  lw          $a0, 0x4900($at)
    ctx->pc = 0x152710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18688)));
label_152714:
    // 0x152714: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x152714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_152718:
    // 0x152718: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x152718u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15271c:
    // 0x15271c: 0x0  nop
    ctx->pc = 0x15271cu;
    // NOP
label_152720:
    // 0x152720: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x152720u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_152724:
    // 0x152724: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x152724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
label_152728:
    // 0x152728: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x152728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_15272c:
    // 0x15272c: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x15272cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_152730:
    // 0x152730: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x152730u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_152734:
    // 0x152734: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x152734u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_152738:
    // 0x152738: 0x1010  mfhi        $v0
    ctx->pc = 0x152738u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_15273c:
    // 0x15273c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x15273cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_152740:
    // 0x152740: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x152740u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
label_152744:
    // 0x152744: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x152744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_152748:
    // 0x152748: 0x2841012c  slti        $at, $v0, 0x12C
    ctx->pc = 0x152748u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)300) ? 1 : 0);
label_15274c:
    // 0x15274c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_152750:
    if (ctx->pc == 0x152750u) {
        ctx->pc = 0x152750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15274Cu;
        // 0x152750: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x152754u;
        goto label_152754;
    }
    ctx->pc = 0x15274Cu;
    {
        const bool branch_taken_0x15274c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x152750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15274Cu;
        // 0x152750: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15274c) {
            ctx->pc = 0x152758u;
            goto label_152758;
        }
    }
    ctx->pc = 0x152754u;
label_152754:
    // 0x152754: 0x2402012c  addiu       $v0, $zero, 0x12C
    ctx->pc = 0x152754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
label_152758:
    // 0x152758: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x152758u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15275c:
    // 0x15275c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15275cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_152760:
    // 0x152760: 0x90324af2  lbu         $s2, 0x4AF2($at)
    ctx->pc = 0x152760u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19186)));
label_152764:
    // 0x152764: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x152764u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_152768:
    // 0x152768: 0x3c023e05  lui         $v0, 0x3E05
    ctx->pc = 0x152768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15877 << 16));
label_15276c:
    // 0x15276c: 0x34421eb8  ori         $v0, $v0, 0x1EB8
    ctx->pc = 0x15276cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7864);
label_152770:
    // 0x152770: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x152770u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[20] = ctx->f[20] / ctx->f[0];
label_152774:
    // 0x152774: 0x0  nop
    ctx->pc = 0x152774u;
    // NOP
label_152778:
    // 0x152778: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x152778u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15277c:
    // 0x15277c: 0x0  nop
    ctx->pc = 0x15277cu;
    // NOP
label_152780:
    // 0x152780: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x152780u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_152784:
    // 0x152784: 0x0  nop
    ctx->pc = 0x152784u;
    // NOP
label_152788:
    // 0x152788: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_15278c:
    if (ctx->pc == 0x15278Cu) {
        ctx->pc = 0x152790u;
        goto label_152790;
    }
    ctx->pc = 0x152788u;
    {
        const bool branch_taken_0x152788 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x152788) {
            ctx->pc = 0x152798u;
            goto label_152798;
        }
    }
    ctx->pc = 0x152790u;
label_152790:
    // 0x152790: 0x10000010  b           . + 4 + (0x10 << 2)
label_152794:
    if (ctx->pc == 0x152794u) {
        ctx->pc = 0x152794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152790u;
        // 0x152794: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152798u;
        goto label_152798;
    }
    ctx->pc = 0x152790u;
    {
        const bool branch_taken_0x152790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152790u;
        // 0x152794: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152790) {
            ctx->pc = 0x1527D4u;
            goto label_1527d4;
        }
    }
    ctx->pc = 0x152798u;
label_152798:
    // 0x152798: 0x3c023fae  lui         $v0, 0x3FAE
    ctx->pc = 0x152798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16302 << 16));
label_15279c:
    // 0x15279c: 0x3443b851  ori         $v1, $v0, 0xB851
    ctx->pc = 0x15279cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47185);
label_1527a0:
    // 0x1527a0: 0x3402eb85  ori         $v0, $zero, 0xEB85
    ctx->pc = 0x1527a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60293);
label_1527a4:
    // 0x1527a4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1527a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1527a8:
    // 0x1527a8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1527a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_1527ac:
    // 0x1527ac: 0x34421eb8  ori         $v0, $v0, 0x1EB8
    ctx->pc = 0x1527acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7864);
label_1527b0:
    // 0x1527b0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1527b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1527b4:
    // 0x1527b4: 0xc06dc5a  jal         func_1B7168
label_1527b8:
    if (ctx->pc == 0x1527B8u) {
        ctx->pc = 0x1527B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1527B4u;
        // 0x1527b8: 0x439825  or          $s3, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1527BCu;
        goto label_1527bc;
    }
    ctx->pc = 0x1527B4u;
    SET_GPR_U32(ctx, 31, 0x1527BCu);
    ctx->pc = 0x1527B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1527B4u;
    // 0x1527b8: 0x439825  or          $s3, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7168u;
    { ctx->pc = 0x1b7168; return; }
    ctx->pc = 0x1527BCu;
label_1527bc:
    // 0x1527bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1527bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1527c0:
    // 0x1527c0: 0xc04003c  jal         func_1000F0
label_1527c4:
    if (ctx->pc == 0x1527C4u) {
        ctx->pc = 0x1527C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1527C0u;
        // 0x1527c4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1527C8u;
        goto label_1527c8;
    }
    ctx->pc = 0x1527C0u;
    SET_GPR_U32(ctx, 31, 0x1527C8u);
    ctx->pc = 0x1527C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1527C0u;
    // 0x1527c4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1000F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1000F0u, 0x1527C0u, 0x1527C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1527C8u;
label_1527c8:
    // 0x1527c8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1527cc:
    if (ctx->pc == 0x1527CCu) {
        ctx->pc = 0x1527CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1527C8u;
        // 0x1527cc: 0x2a41000e  slti        $at, $s2, 0xE (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)14) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1527D0u;
        goto label_1527d0;
    }
    ctx->pc = 0x1527C8u;
    {
        const bool branch_taken_0x1527c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1527CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1527C8u;
        // 0x1527cc: 0x2a41000e  slti        $at, $s2, 0xE (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)14) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1527c8) {
            ctx->pc = 0x1527D8u;
            goto label_1527d8;
        }
    }
    ctx->pc = 0x1527D0u;
label_1527d0:
    // 0x1527d0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1527d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1527d4:
    // 0x1527d4: 0x2a41000e  slti        $at, $s2, 0xE
    ctx->pc = 0x1527d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)14) ? 1 : 0);
label_1527d8:
    // 0x1527d8: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_1527dc:
    if (ctx->pc == 0x1527DCu) {
        ctx->pc = 0x1527E0u;
        goto label_1527e0;
    }
    ctx->pc = 0x1527D8u;
    {
        const bool branch_taken_0x1527d8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1527d8) {
            ctx->pc = 0x1527E4u;
            goto label_1527e4;
        }
    }
    ctx->pc = 0x1527E0u;
label_1527e0:
    // 0x1527e0: 0x2412000d  addiu       $s2, $zero, 0xD
    ctx->pc = 0x1527e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1527e4:
    // 0x1527e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1527e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1527e8:
    // 0x1527e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1527e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1527ec:
    // 0x1527ec: 0xc074140  jal         func_1D0500
label_1527f0:
    if (ctx->pc == 0x1527F0u) {
        ctx->pc = 0x1527F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1527ECu;
        // 0x1527f0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1527F4u;
        goto label_1527f4;
    }
    ctx->pc = 0x1527ECu;
    SET_GPR_U32(ctx, 31, 0x1527F4u);
    ctx->pc = 0x1527F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1527ECu;
    // 0x1527f0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0500u;
    { ctx->pc = 0x1d0500; return; }
    ctx->pc = 0x1527F4u;
label_1527f4:
    // 0x1527f4: 0x1000000e  b           . + 4 + (0xE << 2)
label_1527f8:
    if (ctx->pc == 0x1527F8u) {
        ctx->pc = 0x1527FCu;
        goto label_1527fc;
    }
    ctx->pc = 0x1527F4u;
    {
        const bool branch_taken_0x1527f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1527f4) {
            ctx->pc = 0x152830u;
            goto label_152830;
        }
    }
    ctx->pc = 0x1527FCu;
label_1527fc:
    // 0x1527fc: 0x2484ffe7  addiu       $a0, $a0, -0x19
    ctx->pc = 0x1527fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967271));
label_152800:
    // 0x152800: 0x28830019  slti        $v1, $a0, 0x19
    ctx->pc = 0x152800u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)25) ? 1 : 0);
label_152804:
    // 0x152804: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_152808:
    if (ctx->pc == 0x152808u) {
        ctx->pc = 0x15280Cu;
        goto label_15280c;
    }
    ctx->pc = 0x152804u;
    {
        const bool branch_taken_0x152804 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x152804) {
            ctx->pc = 0x152810u;
            goto label_152810;
        }
    }
    ctx->pc = 0x15280Cu;
label_15280c:
    // 0x15280c: 0x2484ff55  addiu       $a0, $a0, -0xAB
    ctx->pc = 0x15280cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967125));
label_152810:
    // 0x152810: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x152810u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
label_152814:
    // 0x152814: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x152814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_152818:
    // 0x152818: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x152818u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_15281c:
    // 0x15281c: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_152820:
    if (ctx->pc == 0x152820u) {
        ctx->pc = 0x152820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15281Cu;
        // 0x152820: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152824u;
        goto label_152824;
    }
    ctx->pc = 0x15281Cu;
    {
        const bool branch_taken_0x15281c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x152820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15281Cu;
        // 0x152820: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15281c) {
            ctx->pc = 0x15282Cu;
            goto label_15282c;
        }
    }
    ctx->pc = 0x152824u;
label_152824:
    // 0x152824: 0x10000002  b           . + 4 + (0x2 << 2)
label_152828:
    if (ctx->pc == 0x152828u) {
        ctx->pc = 0x152828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152824u;
        // 0x152828: 0xa2030001  sb          $v1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15282Cu;
        goto label_15282c;
    }
    ctx->pc = 0x152824u;
    {
        const bool branch_taken_0x152824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152824u;
        // 0x152828: 0xa2030001  sb          $v1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152824) {
            ctx->pc = 0x152830u;
            goto label_152830;
        }
    }
    ctx->pc = 0x15282Cu;
label_15282c:
    // 0x15282c: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x15282cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
label_152830:
    // 0x152830: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x152830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_152834:
    // 0x152834: 0x84234ae2  lh          $v1, 0x4AE2($at)
    ctx->pc = 0x152834u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19170)));
label_152838:
    // 0x152838: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x152838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_15283c:
    // 0x15283c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15283cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_152840:
    // 0x152840: 0xa4234ae2  sh          $v1, 0x4AE2($at)
    ctx->pc = 0x152840u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 19170), (uint16_t)GPR_U32(ctx, 3));
label_152844:
    // 0x152844: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x152844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_152848:
    // 0x152848: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x152848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_15284c:
    // 0x15284c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x15284cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_152850:
    // 0x152850: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x152850u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_152854:
    // 0x152854: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x152854u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_152858:
    // 0x152858: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x152858u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15285c:
    // 0x15285c: 0x3e00008  jr          $ra
label_152860:
    if (ctx->pc == 0x152860u) {
        ctx->pc = 0x152860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15285Cu;
        // 0x152860: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152864u;
        goto label_152864;
    }
    ctx->pc = 0x15285Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15285Cu;
        // 0x152860: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15285Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152864u;
label_152864:
    // 0x152864: 0x0  nop
    ctx->pc = 0x152864u;
    // NOP
label_152868:
    // 0x152868: 0x0  nop
    ctx->pc = 0x152868u;
    // NOP
label_15286c:
    // 0x15286c: 0x0  nop
    ctx->pc = 0x15286cu;
    // NOP
label_152870:
    // 0x152870: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x152870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_152874:
    // 0x152874: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x152874u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_152878:
    // 0x152878: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x152878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_15287c:
    // 0x15287c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15287cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_152880:
    // 0x152880: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x152880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_152884:
    // 0x152884: 0x24631300  addiu       $v1, $v1, 0x1300
    ctx->pc = 0x152884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4864));
label_152888:
    // 0x152888: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x152888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_15288c:
    // 0x15288c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x15288cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_152890:
    // 0x152890: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x152890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_152894:
    // 0x152894: 0x48c03  sra         $s1, $a0, 16
    ctx->pc = 0x152894u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 4), 16));
label_152898:
    // 0x152898: 0x84264ae8  lh          $a2, 0x4AE8($at)
    ctx->pc = 0x152898u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19176)));
label_15289c:
    // 0x15289c: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x15289cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_1528a0:
    // 0x1528a0: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x1528a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_1528a4:
    // 0x1528a4: 0x62040  sll         $a0, $a2, 1
    ctx->pc = 0x1528a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_1528a8:
    // 0x1528a8: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1528a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_1528ac:
    // 0x1528ac: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1528acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1528b0:
    // 0x1528b0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1528b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1528b4:
    // 0x1528b4: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
label_1528b8:
    if (ctx->pc == 0x1528B8u) {
        ctx->pc = 0x1528B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1528B4u;
        // 0x1528b8: 0x24703750  addiu       $s0, $v1, 0x3750 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 14160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1528BCu;
        goto label_1528bc;
    }
    ctx->pc = 0x1528B4u;
    {
        const bool branch_taken_0x1528b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1528B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1528B4u;
        // 0x1528b8: 0x24703750  addiu       $s0, $v1, 0x3750 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 14160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1528b4) {
            ctx->pc = 0x1528D8u;
            goto label_1528d8;
        }
    }
    ctx->pc = 0x1528BCu;
label_1528bc:
    // 0x1528bc: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1528bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1528c0:
    // 0x1528c0: 0x8c224afc  lw          $v0, 0x4AFC($at)
    ctx->pc = 0x1528c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19196)));
label_1528c4:
    // 0x1528c4: 0x1440005c  bnez        $v0, . + 4 + (0x5C << 2)
label_1528c8:
    if (ctx->pc == 0x1528C8u) {
        ctx->pc = 0x1528C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1528C4u;
        // 0x1528c8: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1528CCu;
        goto label_1528cc;
    }
    ctx->pc = 0x1528C4u;
    {
        const bool branch_taken_0x1528c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1528C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1528C4u;
        // 0x1528c8: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1528c4) {
            ctx->pc = 0x152A38u;
            { ctx->pc = 0x152a38; return; }
        }
    }
    ctx->pc = 0x1528CCu;
label_1528cc:
    // 0x1528cc: 0x8c224af8  lw          $v0, 0x4AF8($at)
    ctx->pc = 0x1528ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19192)));
label_1528d0:
    // 0x1528d0: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
label_1528d4:
    if (ctx->pc == 0x1528D4u) {
        ctx->pc = 0x1528D8u;
        goto label_1528d8;
    }
    ctx->pc = 0x1528D0u;
    {
        const bool branch_taken_0x1528d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1528d0) {
            ctx->pc = 0x152A38u;
            { ctx->pc = 0x152a38; return; }
        }
    }
    ctx->pc = 0x1528D8u;
label_1528d8:
    // 0x1528d8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1528d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1528dc:
    // 0x1528dc: 0x24020029  addiu       $v0, $zero, 0x29
    ctx->pc = 0x1528dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_1528e0:
    // 0x1528e0: 0x90234af6  lbu         $v1, 0x4AF6($at)
    ctx->pc = 0x1528e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19190)));
label_1528e4:
    // 0x1528e4: 0x1462004c  bne         $v1, $v0, . + 4 + (0x4C << 2)
label_1528e8:
    if (ctx->pc == 0x1528E8u) {
        ctx->pc = 0x1528E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1528E4u;
        // 0x1528e8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1528ECu;
        goto label_1528ec;
    }
    ctx->pc = 0x1528E4u;
    {
        const bool branch_taken_0x1528e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1528E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1528E4u;
        // 0x1528e8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1528e4) {
            ctx->pc = 0x152A18u;
            goto label_152a18;
        }
    }
    ctx->pc = 0x1528ECu;
label_1528ec:
    // 0x1528ec: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1528ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1528f0:
    // 0x1528f0: 0x90224996  lbu         $v0, 0x4996($at)
    ctx->pc = 0x1528f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18838)));
label_1528f4:
    // 0x1528f4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1528f8:
    if (ctx->pc == 0x1528F8u) {
        ctx->pc = 0x1528F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1528F4u;
        // 0x1528f8: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1528FCu;
        goto label_1528fc;
    }
    ctx->pc = 0x1528F4u;
    {
        const bool branch_taken_0x1528f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1528F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1528F4u;
        // 0x1528f8: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1528f4) {
            ctx->pc = 0x152918u;
            goto label_152918;
        }
    }
    ctx->pc = 0x1528FCu;
label_1528fc:
    // 0x1528fc: 0x90224a0c  lbu         $v0, 0x4A0C($at)
    ctx->pc = 0x1528fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18956)));
label_152900:
    // 0x152900: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
label_152904:
    if (ctx->pc == 0x152904u) {
        ctx->pc = 0x152908u;
        goto label_152908;
    }
    ctx->pc = 0x152900u;
    {
        const bool branch_taken_0x152900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x152900) {
            ctx->pc = 0x152A14u;
            goto label_152a14;
        }
    }
    ctx->pc = 0x152908u;
label_152908:
    // 0x152908: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x152908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_15290c:
    // 0x15290c: 0x90224a26  lbu         $v0, 0x4A26($at)
    ctx->pc = 0x15290cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18982)));
label_152910:
    // 0x152910: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
label_152914:
    if (ctx->pc == 0x152914u) {
        ctx->pc = 0x152918u;
        goto label_152918;
    }
    ctx->pc = 0x152910u;
    {
        const bool branch_taken_0x152910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x152910) {
            ctx->pc = 0x152A14u;
            goto label_152a14;
        }
    }
    ctx->pc = 0x152918u;
label_152918:
    // 0x152918: 0x8f82863c  lw          $v0, -0x79C4($gp)
    ctx->pc = 0x152918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936124)));
label_15291c:
    // 0x15291c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_152920:
    if (ctx->pc == 0x152920u) {
        ctx->pc = 0x152924u;
        goto label_152924;
    }
    ctx->pc = 0x15291Cu;
    {
        const bool branch_taken_0x15291c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15291c) {
            ctx->pc = 0x15299Cu;
            goto label_15299c;
        }
    }
    ctx->pc = 0x152924u;
label_152924:
    // 0x152924: 0xc08f0cc  jal         func_23C330
label_152928:
    if (ctx->pc == 0x152928u) {
        ctx->pc = 0x15292Cu;
        goto label_15292c;
    }
    ctx->pc = 0x152924u;
    SET_GPR_U32(ctx, 31, 0x15292Cu);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x15292Cu;
label_15292c:
    // 0x15292c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15292cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_152930:
    // 0x152930: 0x0  nop
    ctx->pc = 0x152930u;
    // NOP
label_152934:
    // 0x152934: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x152934u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_152938:
    // 0x152938: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x152938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_15293c:
    // 0x15293c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15293cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_152940:
    // 0x152940: 0x0  nop
    ctx->pc = 0x152940u;
    // NOP
label_152944:
    // 0x152944: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x152944u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_152948:
    // 0x152948: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x152948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_15294c:
    // 0x15294c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15294cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_152950:
    // 0x152950: 0x0  nop
    ctx->pc = 0x152950u;
    // NOP
label_152954:
    // 0x152954: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x152954u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_152958:
    // 0x152958: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x152958u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_15295c:
    // 0x15295c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x15295cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_152960:
    // 0x152960: 0x0  nop
    ctx->pc = 0x152960u;
    // NOP
label_152964:
    // 0x152964: 0x28420007  slti        $v0, $v0, 0x7
    ctx->pc = 0x152964u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)7) ? 1 : 0);
label_152968:
    // 0x152968: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_15296c:
    if (ctx->pc == 0x15296Cu) {
        ctx->pc = 0x15296Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152968u;
        // 0x15296c: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152970u;
        goto label_152970;
    }
    ctx->pc = 0x152968u;
    {
        const bool branch_taken_0x152968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15296Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152968u;
        // 0x15296c: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152968) {
            ctx->pc = 0x152A14u;
            goto label_152a14;
        }
    }
    ctx->pc = 0x152970u;
label_152970:
    // 0x152970: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x152970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_152974:
    // 0x152974: 0x84244ae8  lh          $a0, 0x4AE8($at)
    ctx->pc = 0x152974u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19176)));
label_152978:
    // 0x152978: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x152978u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15297c:
    // 0x15297c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15297cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_152980:
    // 0x152980: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x152980u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
label_152984:
    // 0x152984: 0x94224aee  lhu         $v0, 0x4AEE($at)
    ctx->pc = 0x152984u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 19182)));
label_152988:
    // 0x152988: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x152988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_15298c:
    // 0x15298c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x15298cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_152990:
    // 0x152990: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x152990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_152994:
    // 0x152994: 0x10000020  b           . + 4 + (0x20 << 2)
label_152998:
    if (ctx->pc == 0x152998u) {
        ctx->pc = 0x152998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152994u;
        // 0x152998: 0xa4224aee  sh          $v0, 0x4AEE($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 19182), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15299Cu;
        goto label_15299c;
    }
    ctx->pc = 0x152994u;
    {
        const bool branch_taken_0x152994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152994u;
        // 0x152998: 0xa4224aee  sh          $v0, 0x4AEE($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 19182), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152994) {
            ctx->pc = 0x152A18u;
            goto label_152a18;
        }
    }
    ctx->pc = 0x15299Cu;
label_15299c:
    // 0x15299c: 0xc08f0cc  jal         func_23C330
label_1529a0:
    if (ctx->pc == 0x1529A0u) {
        ctx->pc = 0x1529A4u;
        goto label_1529a4;
    }
    ctx->pc = 0x15299Cu;
    SET_GPR_U32(ctx, 31, 0x1529A4u);
    ctx->pc = 0x23C330u;
    { ctx->pc = 0x23c330; return; }
    ctx->pc = 0x1529A4u;
label_1529a4:
    // 0x1529a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1529a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1529a8:
    // 0x1529a8: 0x0  nop
    ctx->pc = 0x1529a8u;
    // NOP
label_1529ac:
    // 0x1529ac: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1529acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1529b0:
    // 0x1529b0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1529b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_1529b4:
    // 0x1529b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1529b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1529b8:
    // 0x1529b8: 0x0  nop
    ctx->pc = 0x1529b8u;
    // NOP
label_1529bc:
    // 0x1529bc: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1529bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1529c0:
    // 0x1529c0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1529c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_1529c4:
    // 0x1529c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1529c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1529c8:
    // 0x1529c8: 0x0  nop
    ctx->pc = 0x1529c8u;
    // NOP
label_1529cc:
    // 0x1529cc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1529ccu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_1529d0:
    // 0x1529d0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1529d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1529d4:
    // 0x1529d4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1529d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1529d8:
    // 0x1529d8: 0x0  nop
    ctx->pc = 0x1529d8u;
    // NOP
label_1529dc:
    // 0x1529dc: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x1529dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_1529e0:
    // 0x1529e0: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_1529e4:
    if (ctx->pc == 0x1529E4u) {
        ctx->pc = 0x1529E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1529E0u;
        // 0x1529e4: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1529E8u;
        goto label_1529e8;
    }
    ctx->pc = 0x1529E0u;
    {
        const bool branch_taken_0x1529e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1529E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1529E0u;
        // 0x1529e4: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1529e0) {
            ctx->pc = 0x152A14u;
            goto label_152a14;
        }
    }
    ctx->pc = 0x1529E8u;
label_1529e8:
    // 0x1529e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1529e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1529ec:
    // 0x1529ec: 0x84244ae8  lh          $a0, 0x4AE8($at)
    ctx->pc = 0x1529ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19176)));
label_1529f0:
    // 0x1529f0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1529f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1529f4:
    // 0x1529f4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1529f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_1529f8:
    // 0x1529f8: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x1529f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
label_1529fc:
    // 0x1529fc: 0x94224aee  lhu         $v0, 0x4AEE($at)
    ctx->pc = 0x1529fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 19182)));
label_152a00:
    // 0x152a00: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x152a00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_152a04:
    // 0x152a04: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x152a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_152a08:
    // 0x152a08: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x152a08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_152a0c:
    // 0x152a0c: 0x10000002  b           . + 4 + (0x2 << 2)
label_152a10:
    if (ctx->pc == 0x152A10u) {
        ctx->pc = 0x152A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152A0Cu;
        // 0x152a10: 0xa4224aee  sh          $v0, 0x4AEE($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 19182), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x152A14u;
        goto label_152a14;
    }
    ctx->pc = 0x152A0Cu;
    {
        const bool branch_taken_0x152a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152A0Cu;
        // 0x152a10: 0xa4224aee  sh          $v0, 0x4AEE($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 19182), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152a0c) {
            ctx->pc = 0x152A18u;
            goto label_152a18;
        }
    }
    ctx->pc = 0x152A14u;
label_152a14:
    // 0x152a14: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x152a14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_152a18:
    // 0x152a18: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x152a18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_152a1c:
    // 0x152a1c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x152a1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x152a20u;
    return;
}

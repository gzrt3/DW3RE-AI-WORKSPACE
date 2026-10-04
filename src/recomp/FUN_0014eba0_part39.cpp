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


void FUN_0014eba0_part39(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    switch (ctx->pc) {
        case 0x161480u: goto label_161480;
        case 0x161484u: goto label_161484;
        case 0x161488u: goto label_161488;
        case 0x16148cu: goto label_16148c;
        case 0x161490u: goto label_161490;
        case 0x161494u: goto label_161494;
        case 0x161498u: goto label_161498;
        case 0x16149cu: goto label_16149c;
        case 0x1614a0u: goto label_1614a0;
        case 0x1614a4u: goto label_1614a4;
        case 0x1614a8u: goto label_1614a8;
        case 0x1614acu: goto label_1614ac;
        case 0x1614b0u: goto label_1614b0;
        case 0x1614b4u: goto label_1614b4;
        case 0x1614b8u: goto label_1614b8;
        case 0x1614bcu: goto label_1614bc;
        case 0x1614c0u: goto label_1614c0;
        case 0x1614c4u: goto label_1614c4;
        case 0x1614c8u: goto label_1614c8;
        case 0x1614ccu: goto label_1614cc;
        case 0x1614d0u: goto label_1614d0;
        case 0x1614d4u: goto label_1614d4;
        case 0x1614d8u: goto label_1614d8;
        case 0x1614dcu: goto label_1614dc;
        case 0x1614e0u: goto label_1614e0;
        case 0x1614e4u: goto label_1614e4;
        case 0x1614e8u: goto label_1614e8;
        case 0x1614ecu: goto label_1614ec;
        case 0x1614f0u: goto label_1614f0;
        case 0x1614f4u: goto label_1614f4;
        case 0x1614f8u: goto label_1614f8;
        case 0x1614fcu: goto label_1614fc;
        case 0x161500u: goto label_161500;
        case 0x161504u: goto label_161504;
        case 0x161508u: goto label_161508;
        case 0x16150cu: goto label_16150c;
        case 0x161510u: goto label_161510;
        case 0x161514u: goto label_161514;
        case 0x161518u: goto label_161518;
        case 0x16151cu: goto label_16151c;
        case 0x161520u: goto label_161520;
        case 0x161524u: goto label_161524;
        case 0x161528u: goto label_161528;
        case 0x16152cu: goto label_16152c;
        case 0x161530u: goto label_161530;
        case 0x161534u: goto label_161534;
        case 0x161538u: goto label_161538;
        case 0x16153cu: goto label_16153c;
        case 0x161540u: goto label_161540;
        case 0x161544u: goto label_161544;
        case 0x161548u: goto label_161548;
        case 0x16154cu: goto label_16154c;
        case 0x161550u: goto label_161550;
        case 0x161554u: goto label_161554;
        case 0x161558u: goto label_161558;
        case 0x16155cu: goto label_16155c;
        case 0x161560u: goto label_161560;
        case 0x161564u: goto label_161564;
        case 0x161568u: goto label_161568;
        case 0x16156cu: goto label_16156c;
        case 0x161570u: goto label_161570;
        case 0x161574u: goto label_161574;
        case 0x161578u: goto label_161578;
        case 0x16157cu: goto label_16157c;
        case 0x161580u: goto label_161580;
        case 0x161584u: goto label_161584;
        case 0x161588u: goto label_161588;
        case 0x16158cu: goto label_16158c;
        case 0x161590u: goto label_161590;
        case 0x161594u: goto label_161594;
        case 0x161598u: goto label_161598;
        case 0x16159cu: goto label_16159c;
        case 0x1615a0u: goto label_1615a0;
        case 0x1615a4u: goto label_1615a4;
        case 0x1615a8u: goto label_1615a8;
        case 0x1615acu: goto label_1615ac;
        case 0x1615b0u: goto label_1615b0;
        case 0x1615b4u: goto label_1615b4;
        case 0x1615b8u: goto label_1615b8;
        case 0x1615bcu: goto label_1615bc;
        case 0x1615c0u: goto label_1615c0;
        case 0x1615c4u: goto label_1615c4;
        case 0x1615c8u: goto label_1615c8;
        case 0x1615ccu: goto label_1615cc;
        case 0x1615d0u: goto label_1615d0;
        case 0x1615d4u: goto label_1615d4;
        case 0x1615d8u: goto label_1615d8;
        case 0x1615dcu: goto label_1615dc;
        case 0x1615e0u: goto label_1615e0;
        case 0x1615e4u: goto label_1615e4;
        case 0x1615e8u: goto label_1615e8;
        case 0x1615ecu: goto label_1615ec;
        case 0x1615f0u: goto label_1615f0;
        case 0x1615f4u: goto label_1615f4;
        case 0x1615f8u: goto label_1615f8;
        case 0x1615fcu: goto label_1615fc;
        case 0x161600u: goto label_161600;
        case 0x161604u: goto label_161604;
        case 0x161608u: goto label_161608;
        case 0x16160cu: goto label_16160c;
        case 0x161610u: goto label_161610;
        case 0x161614u: goto label_161614;
        case 0x161618u: goto label_161618;
        case 0x16161cu: goto label_16161c;
        case 0x161620u: goto label_161620;
        case 0x161624u: goto label_161624;
        case 0x161628u: goto label_161628;
        case 0x16162cu: goto label_16162c;
        case 0x161630u: goto label_161630;
        case 0x161634u: goto label_161634;
        case 0x161638u: goto label_161638;
        case 0x16163cu: goto label_16163c;
        case 0x161640u: goto label_161640;
        case 0x161644u: goto label_161644;
        case 0x161648u: goto label_161648;
        case 0x16164cu: goto label_16164c;
        case 0x161650u: goto label_161650;
        case 0x161654u: goto label_161654;
        case 0x161658u: goto label_161658;
        case 0x16165cu: goto label_16165c;
        case 0x161660u: goto label_161660;
        case 0x161664u: goto label_161664;
        case 0x161668u: goto label_161668;
        case 0x16166cu: goto label_16166c;
        case 0x161670u: goto label_161670;
        case 0x161674u: goto label_161674;
        case 0x161678u: goto label_161678;
        case 0x16167cu: goto label_16167c;
        case 0x161680u: goto label_161680;
        case 0x161684u: goto label_161684;
        case 0x161688u: goto label_161688;
        case 0x16168cu: goto label_16168c;
        case 0x161690u: goto label_161690;
        case 0x161694u: goto label_161694;
        case 0x161698u: goto label_161698;
        case 0x16169cu: goto label_16169c;
        case 0x1616a0u: goto label_1616a0;
        case 0x1616a4u: goto label_1616a4;
        case 0x1616a8u: goto label_1616a8;
        case 0x1616acu: goto label_1616ac;
        case 0x1616b0u: goto label_1616b0;
        case 0x1616b4u: goto label_1616b4;
        case 0x1616b8u: goto label_1616b8;
        case 0x1616bcu: goto label_1616bc;
        case 0x1616c0u: goto label_1616c0;
        case 0x1616c4u: goto label_1616c4;
        case 0x1616c8u: goto label_1616c8;
        case 0x1616ccu: goto label_1616cc;
        case 0x1616d0u: goto label_1616d0;
        case 0x1616d4u: goto label_1616d4;
        case 0x1616d8u: goto label_1616d8;
        case 0x1616dcu: goto label_1616dc;
        case 0x1616e0u: goto label_1616e0;
        case 0x1616e4u: goto label_1616e4;
        case 0x1616e8u: goto label_1616e8;
        case 0x1616ecu: goto label_1616ec;
        case 0x1616f0u: goto label_1616f0;
        case 0x1616f4u: goto label_1616f4;
        case 0x1616f8u: goto label_1616f8;
        case 0x1616fcu: goto label_1616fc;
        case 0x161700u: goto label_161700;
        case 0x161704u: goto label_161704;
        case 0x161708u: goto label_161708;
        case 0x16170cu: goto label_16170c;
        case 0x161710u: goto label_161710;
        case 0x161714u: goto label_161714;
        case 0x161718u: goto label_161718;
        case 0x16171cu: goto label_16171c;
        case 0x161720u: goto label_161720;
        case 0x161724u: goto label_161724;
        case 0x161728u: goto label_161728;
        case 0x16172cu: goto label_16172c;
        case 0x161730u: goto label_161730;
        case 0x161734u: goto label_161734;
        case 0x161738u: goto label_161738;
        case 0x16173cu: goto label_16173c;
        case 0x161740u: goto label_161740;
        case 0x161744u: goto label_161744;
        case 0x161748u: goto label_161748;
        case 0x16174cu: goto label_16174c;
        case 0x161750u: goto label_161750;
        case 0x161754u: goto label_161754;
        case 0x161758u: goto label_161758;
        case 0x16175cu: goto label_16175c;
        case 0x161760u: goto label_161760;
        case 0x161764u: goto label_161764;
        case 0x161768u: goto label_161768;
        case 0x16176cu: goto label_16176c;
        case 0x161770u: goto label_161770;
        case 0x161774u: goto label_161774;
        case 0x161778u: goto label_161778;
        case 0x16177cu: goto label_16177c;
        case 0x161780u: goto label_161780;
        case 0x161784u: goto label_161784;
        case 0x161788u: goto label_161788;
        case 0x16178cu: goto label_16178c;
        case 0x161790u: goto label_161790;
        case 0x161794u: goto label_161794;
        case 0x161798u: goto label_161798;
        case 0x16179cu: goto label_16179c;
        case 0x1617a0u: goto label_1617a0;
        case 0x1617a4u: goto label_1617a4;
        case 0x1617a8u: goto label_1617a8;
        case 0x1617acu: goto label_1617ac;
        case 0x1617b0u: goto label_1617b0;
        case 0x1617b4u: goto label_1617b4;
        case 0x1617b8u: goto label_1617b8;
        case 0x1617bcu: goto label_1617bc;
        case 0x1617c0u: goto label_1617c0;
        case 0x1617c4u: goto label_1617c4;
        case 0x1617c8u: goto label_1617c8;
        case 0x1617ccu: goto label_1617cc;
        case 0x1617d0u: goto label_1617d0;
        case 0x1617d4u: goto label_1617d4;
        case 0x1617d8u: goto label_1617d8;
        case 0x1617dcu: goto label_1617dc;
        case 0x1617e0u: goto label_1617e0;
        case 0x1617e4u: goto label_1617e4;
        case 0x1617e8u: goto label_1617e8;
        case 0x1617ecu: goto label_1617ec;
        case 0x1617f0u: goto label_1617f0;
        case 0x1617f4u: goto label_1617f4;
        case 0x1617f8u: goto label_1617f8;
        case 0x1617fcu: goto label_1617fc;
        case 0x161800u: goto label_161800;
        case 0x161804u: goto label_161804;
        case 0x161808u: goto label_161808;
        case 0x16180cu: goto label_16180c;
        case 0x161810u: goto label_161810;
        case 0x161814u: goto label_161814;
        case 0x161818u: goto label_161818;
        case 0x16181cu: goto label_16181c;
        case 0x161820u: goto label_161820;
        case 0x161824u: goto label_161824;
        case 0x161828u: goto label_161828;
        case 0x16182cu: goto label_16182c;
        case 0x161830u: goto label_161830;
        case 0x161834u: goto label_161834;
        case 0x161838u: goto label_161838;
        case 0x16183cu: goto label_16183c;
        case 0x161840u: goto label_161840;
        case 0x161844u: goto label_161844;
        case 0x161848u: goto label_161848;
        case 0x16184cu: goto label_16184c;
        case 0x161850u: goto label_161850;
        case 0x161854u: goto label_161854;
        case 0x161858u: goto label_161858;
        case 0x16185cu: goto label_16185c;
        case 0x161860u: goto label_161860;
        case 0x161864u: goto label_161864;
        case 0x161868u: goto label_161868;
        case 0x16186cu: goto label_16186c;
        case 0x161870u: goto label_161870;
        case 0x161874u: goto label_161874;
        case 0x161878u: goto label_161878;
        case 0x16187cu: goto label_16187c;
        case 0x161880u: goto label_161880;
        case 0x161884u: goto label_161884;
        case 0x161888u: goto label_161888;
        case 0x16188cu: goto label_16188c;
        case 0x161890u: goto label_161890;
        case 0x161894u: goto label_161894;
        case 0x161898u: goto label_161898;
        case 0x16189cu: goto label_16189c;
        case 0x1618a0u: goto label_1618a0;
        case 0x1618a4u: goto label_1618a4;
        case 0x1618a8u: goto label_1618a8;
        case 0x1618acu: goto label_1618ac;
        case 0x1618b0u: goto label_1618b0;
        case 0x1618b4u: goto label_1618b4;
        case 0x1618b8u: goto label_1618b8;
        case 0x1618bcu: goto label_1618bc;
        case 0x1618c0u: goto label_1618c0;
        case 0x1618c4u: goto label_1618c4;
        case 0x1618c8u: goto label_1618c8;
        case 0x1618ccu: goto label_1618cc;
        case 0x1618d0u: goto label_1618d0;
        case 0x1618d4u: goto label_1618d4;
        case 0x1618d8u: goto label_1618d8;
        case 0x1618dcu: goto label_1618dc;
        case 0x1618e0u: goto label_1618e0;
        case 0x1618e4u: goto label_1618e4;
        case 0x1618e8u: goto label_1618e8;
        case 0x1618ecu: goto label_1618ec;
        case 0x1618f0u: goto label_1618f0;
        case 0x1618f4u: goto label_1618f4;
        case 0x1618f8u: goto label_1618f8;
        case 0x1618fcu: goto label_1618fc;
        case 0x161900u: goto label_161900;
        case 0x161904u: goto label_161904;
        case 0x161908u: goto label_161908;
        case 0x16190cu: goto label_16190c;
        case 0x161910u: goto label_161910;
        case 0x161914u: goto label_161914;
        case 0x161918u: goto label_161918;
        case 0x16191cu: goto label_16191c;
        case 0x161920u: goto label_161920;
        case 0x161924u: goto label_161924;
        case 0x161928u: goto label_161928;
        case 0x16192cu: goto label_16192c;
        case 0x161930u: goto label_161930;
        case 0x161934u: goto label_161934;
        case 0x161938u: goto label_161938;
        case 0x16193cu: goto label_16193c;
        case 0x161940u: goto label_161940;
        case 0x161944u: goto label_161944;
        case 0x161948u: goto label_161948;
        case 0x16194cu: goto label_16194c;
        case 0x161950u: goto label_161950;
        case 0x161954u: goto label_161954;
        case 0x161958u: goto label_161958;
        case 0x16195cu: goto label_16195c;
        case 0x161960u: goto label_161960;
        case 0x161964u: goto label_161964;
        case 0x161968u: goto label_161968;
        case 0x16196cu: goto label_16196c;
        case 0x161970u: goto label_161970;
        case 0x161974u: goto label_161974;
        case 0x161978u: goto label_161978;
        case 0x16197cu: goto label_16197c;
        case 0x161980u: goto label_161980;
        case 0x161984u: goto label_161984;
        case 0x161988u: goto label_161988;
        case 0x16198cu: goto label_16198c;
        case 0x161990u: goto label_161990;
        case 0x161994u: goto label_161994;
        case 0x161998u: goto label_161998;
        case 0x16199cu: goto label_16199c;
        case 0x1619a0u: goto label_1619a0;
        case 0x1619a4u: goto label_1619a4;
        case 0x1619a8u: goto label_1619a8;
        case 0x1619acu: goto label_1619ac;
        case 0x1619b0u: goto label_1619b0;
        case 0x1619b4u: goto label_1619b4;
        case 0x1619b8u: goto label_1619b8;
        case 0x1619bcu: goto label_1619bc;
        case 0x1619c0u: goto label_1619c0;
        case 0x1619c4u: goto label_1619c4;
        case 0x1619c8u: goto label_1619c8;
        case 0x1619ccu: goto label_1619cc;
        case 0x1619d0u: goto label_1619d0;
        case 0x1619d4u: goto label_1619d4;
        case 0x1619d8u: goto label_1619d8;
        case 0x1619dcu: goto label_1619dc;
        case 0x1619e0u: goto label_1619e0;
        case 0x1619e4u: goto label_1619e4;
        case 0x1619e8u: goto label_1619e8;
        case 0x1619ecu: goto label_1619ec;
        case 0x1619f0u: goto label_1619f0;
        case 0x1619f4u: goto label_1619f4;
        case 0x1619f8u: goto label_1619f8;
        case 0x1619fcu: goto label_1619fc;
        case 0x161a00u: goto label_161a00;
        case 0x161a04u: goto label_161a04;
        case 0x161a08u: goto label_161a08;
        case 0x161a0cu: goto label_161a0c;
        case 0x161a10u: goto label_161a10;
        case 0x161a14u: goto label_161a14;
        case 0x161a18u: goto label_161a18;
        case 0x161a1cu: goto label_161a1c;
        case 0x161a20u: goto label_161a20;
        case 0x161a24u: goto label_161a24;
        case 0x161a28u: goto label_161a28;
        case 0x161a2cu: goto label_161a2c;
        case 0x161a30u: goto label_161a30;
        case 0x161a34u: goto label_161a34;
        case 0x161a38u: goto label_161a38;
        case 0x161a3cu: goto label_161a3c;
        case 0x161a40u: goto label_161a40;
        case 0x161a44u: goto label_161a44;
        case 0x161a48u: goto label_161a48;
        case 0x161a4cu: goto label_161a4c;
        case 0x161a50u: goto label_161a50;
        case 0x161a54u: goto label_161a54;
        case 0x161a58u: goto label_161a58;
        case 0x161a5cu: goto label_161a5c;
        case 0x161a60u: goto label_161a60;
        case 0x161a64u: goto label_161a64;
        case 0x161a68u: goto label_161a68;
        case 0x161a6cu: goto label_161a6c;
        case 0x161a70u: goto label_161a70;
        case 0x161a74u: goto label_161a74;
        case 0x161a78u: goto label_161a78;
        case 0x161a7cu: goto label_161a7c;
        case 0x161a80u: goto label_161a80;
        case 0x161a84u: goto label_161a84;
        case 0x161a88u: goto label_161a88;
        case 0x161a8cu: goto label_161a8c;
        case 0x161a90u: goto label_161a90;
        case 0x161a94u: goto label_161a94;
        case 0x161a98u: goto label_161a98;
        case 0x161a9cu: goto label_161a9c;
        case 0x161aa0u: goto label_161aa0;
        case 0x161aa4u: goto label_161aa4;
        case 0x161aa8u: goto label_161aa8;
        case 0x161aacu: goto label_161aac;
        case 0x161ab0u: goto label_161ab0;
        case 0x161ab4u: goto label_161ab4;
        case 0x161ab8u: goto label_161ab8;
        case 0x161abcu: goto label_161abc;
        case 0x161ac0u: goto label_161ac0;
        case 0x161ac4u: goto label_161ac4;
        case 0x161ac8u: goto label_161ac8;
        case 0x161accu: goto label_161acc;
        case 0x161ad0u: goto label_161ad0;
        case 0x161ad4u: goto label_161ad4;
        case 0x161ad8u: goto label_161ad8;
        case 0x161adcu: goto label_161adc;
        case 0x161ae0u: goto label_161ae0;
        case 0x161ae4u: goto label_161ae4;
        case 0x161ae8u: goto label_161ae8;
        case 0x161aecu: goto label_161aec;
        case 0x161af0u: goto label_161af0;
        case 0x161af4u: goto label_161af4;
        case 0x161af8u: goto label_161af8;
        case 0x161afcu: goto label_161afc;
        case 0x161b00u: goto label_161b00;
        case 0x161b04u: goto label_161b04;
        case 0x161b08u: goto label_161b08;
        case 0x161b0cu: goto label_161b0c;
        case 0x161b10u: goto label_161b10;
        case 0x161b14u: goto label_161b14;
        case 0x161b18u: goto label_161b18;
        case 0x161b1cu: goto label_161b1c;
        case 0x161b20u: goto label_161b20;
        case 0x161b24u: goto label_161b24;
        case 0x161b28u: goto label_161b28;
        case 0x161b2cu: goto label_161b2c;
        case 0x161b30u: goto label_161b30;
        case 0x161b34u: goto label_161b34;
        case 0x161b38u: goto label_161b38;
        case 0x161b3cu: goto label_161b3c;
        case 0x161b40u: goto label_161b40;
        case 0x161b44u: goto label_161b44;
        case 0x161b48u: goto label_161b48;
        case 0x161b4cu: goto label_161b4c;
        case 0x161b50u: goto label_161b50;
        case 0x161b54u: goto label_161b54;
        case 0x161b58u: goto label_161b58;
        case 0x161b5cu: goto label_161b5c;
        case 0x161b60u: goto label_161b60;
        case 0x161b64u: goto label_161b64;
        case 0x161b68u: goto label_161b68;
        case 0x161b6cu: goto label_161b6c;
        case 0x161b70u: goto label_161b70;
        case 0x161b74u: goto label_161b74;
        case 0x161b78u: goto label_161b78;
        case 0x161b7cu: goto label_161b7c;
        case 0x161b80u: goto label_161b80;
        case 0x161b84u: goto label_161b84;
        case 0x161b88u: goto label_161b88;
        case 0x161b8cu: goto label_161b8c;
        case 0x161b90u: goto label_161b90;
        case 0x161b94u: goto label_161b94;
        case 0x161b98u: goto label_161b98;
        case 0x161b9cu: goto label_161b9c;
        case 0x161ba0u: goto label_161ba0;
        case 0x161ba4u: goto label_161ba4;
        case 0x161ba8u: goto label_161ba8;
        case 0x161bacu: goto label_161bac;
        case 0x161bb0u: goto label_161bb0;
        case 0x161bb4u: goto label_161bb4;
        case 0x161bb8u: goto label_161bb8;
        case 0x161bbcu: goto label_161bbc;
        case 0x161bc0u: goto label_161bc0;
        case 0x161bc4u: goto label_161bc4;
        case 0x161bc8u: goto label_161bc8;
        case 0x161bccu: goto label_161bcc;
        case 0x161bd0u: goto label_161bd0;
        case 0x161bd4u: goto label_161bd4;
        case 0x161bd8u: goto label_161bd8;
        case 0x161bdcu: goto label_161bdc;
        case 0x161be0u: goto label_161be0;
        case 0x161be4u: goto label_161be4;
        case 0x161be8u: goto label_161be8;
        case 0x161becu: goto label_161bec;
        case 0x161bf0u: goto label_161bf0;
        case 0x161bf4u: goto label_161bf4;
        case 0x161bf8u: goto label_161bf8;
        case 0x161bfcu: goto label_161bfc;
        case 0x161c00u: goto label_161c00;
        case 0x161c04u: goto label_161c04;
        case 0x161c08u: goto label_161c08;
        case 0x161c0cu: goto label_161c0c;
        case 0x161c10u: goto label_161c10;
        case 0x161c14u: goto label_161c14;
        case 0x161c18u: goto label_161c18;
        case 0x161c1cu: goto label_161c1c;
        case 0x161c20u: goto label_161c20;
        case 0x161c24u: goto label_161c24;
        case 0x161c28u: goto label_161c28;
        case 0x161c2cu: goto label_161c2c;
        case 0x161c30u: goto label_161c30;
        case 0x161c34u: goto label_161c34;
        case 0x161c38u: goto label_161c38;
        case 0x161c3cu: goto label_161c3c;
        case 0x161c40u: goto label_161c40;
        case 0x161c44u: goto label_161c44;
        case 0x161c48u: goto label_161c48;
        case 0x161c4cu: goto label_161c4c;
        default: return;
    }

label_161480:
    // 0x161480: 0x87a20080  lh          $v0, 0x80($sp)
    ctx->pc = 0x161480u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 128)));
label_161484:
    // 0x161484: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x161484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_161488:
    // 0x161488: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x161488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_16148c:
    // 0x16148c: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x16148cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_161490:
    // 0x161490: 0xa6a20018  sh          $v0, 0x18($s5)
    ctx->pc = 0x161490u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 24), (uint16_t)GPR_U32(ctx, 2));
label_161494:
    // 0x161494: 0x87a20084  lh          $v0, 0x84($sp)
    ctx->pc = 0x161494u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 132)));
label_161498:
    // 0x161498: 0xc066d7a  jal         func_19B5E8
label_16149c:
    if (ctx->pc == 0x16149Cu) {
        ctx->pc = 0x16149Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161498u;
        // 0x16149c: 0xa6a2001a  sh          $v0, 0x1A($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 26), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1614A0u;
        goto label_1614a0;
    }
    ctx->pc = 0x161498u;
    SET_GPR_U32(ctx, 31, 0x1614A0u);
    ctx->pc = 0x16149Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161498u;
    // 0x16149c: 0xa6a2001a  sh          $v0, 0x1A($s5) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 21), 26), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x1614A0u;
label_1614a0:
    // 0x1614a0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1614a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1614a4:
    // 0x1614a4: 0xc066e34  jal         func_19B8D0
label_1614a8:
    if (ctx->pc == 0x1614A8u) {
        ctx->pc = 0x1614A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1614A4u;
        // 0x1614a8: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1614ACu;
        goto label_1614ac;
    }
    ctx->pc = 0x1614A4u;
    SET_GPR_U32(ctx, 31, 0x1614ACu);
    ctx->pc = 0x1614A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1614A4u;
    // 0x1614a8: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8D0u;
    { ctx->pc = 0x19b8d0; return; }
    ctx->pc = 0x1614ACu;
label_1614ac:
    // 0x1614ac: 0x87a20080  lh          $v0, 0x80($sp)
    ctx->pc = 0x1614acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 128)));
label_1614b0:
    // 0x1614b0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1614b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1614b4:
    // 0x1614b4: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1614b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1614b8:
    // 0x1614b8: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x1614b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1614bc:
    // 0x1614bc: 0xa6a20030  sh          $v0, 0x30($s5)
    ctx->pc = 0x1614bcu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 48), (uint16_t)GPR_U32(ctx, 2));
label_1614c0:
    // 0x1614c0: 0x87a20084  lh          $v0, 0x84($sp)
    ctx->pc = 0x1614c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 132)));
label_1614c4:
    // 0x1614c4: 0xc066d7a  jal         func_19B5E8
label_1614c8:
    if (ctx->pc == 0x1614C8u) {
        ctx->pc = 0x1614C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1614C4u;
        // 0x1614c8: 0xa6a20032  sh          $v0, 0x32($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 50), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1614CCu;
        goto label_1614cc;
    }
    ctx->pc = 0x1614C4u;
    SET_GPR_U32(ctx, 31, 0x1614CCu);
    ctx->pc = 0x1614C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1614C4u;
    // 0x1614c8: 0xa6a20032  sh          $v0, 0x32($s5) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 21), 50), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x1614CCu;
label_1614cc:
    // 0x1614cc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1614ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1614d0:
    // 0x1614d0: 0xc066e34  jal         func_19B8D0
label_1614d4:
    if (ctx->pc == 0x1614D4u) {
        ctx->pc = 0x1614D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1614D0u;
        // 0x1614d4: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1614D8u;
        goto label_1614d8;
    }
    ctx->pc = 0x1614D0u;
    SET_GPR_U32(ctx, 31, 0x1614D8u);
    ctx->pc = 0x1614D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1614D0u;
    // 0x1614d4: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8D0u;
    { ctx->pc = 0x19b8d0; return; }
    ctx->pc = 0x1614D8u;
label_1614d8:
    // 0x1614d8: 0x87a20080  lh          $v0, 0x80($sp)
    ctx->pc = 0x1614d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 128)));
label_1614dc:
    // 0x1614dc: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1614dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1614e0:
    // 0x1614e0: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1614e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1614e4:
    // 0x1614e4: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x1614e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1614e8:
    // 0x1614e8: 0xa6a20048  sh          $v0, 0x48($s5)
    ctx->pc = 0x1614e8u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 72), (uint16_t)GPR_U32(ctx, 2));
label_1614ec:
    // 0x1614ec: 0x87a20084  lh          $v0, 0x84($sp)
    ctx->pc = 0x1614ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 132)));
label_1614f0:
    // 0x1614f0: 0xc066d7a  jal         func_19B5E8
label_1614f4:
    if (ctx->pc == 0x1614F4u) {
        ctx->pc = 0x1614F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1614F0u;
        // 0x1614f4: 0xa6a2004a  sh          $v0, 0x4A($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 74), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1614F8u;
        goto label_1614f8;
    }
    ctx->pc = 0x1614F0u;
    SET_GPR_U32(ctx, 31, 0x1614F8u);
    ctx->pc = 0x1614F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1614F0u;
    // 0x1614f4: 0xa6a2004a  sh          $v0, 0x4A($s5) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 21), 74), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    { ctx->pc = 0x19b5e8; return; }
    ctx->pc = 0x1614F8u;
label_1614f8:
    // 0x1614f8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1614f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1614fc:
    // 0x1614fc: 0xc066e34  jal         func_19B8D0
label_161500:
    if (ctx->pc == 0x161500u) {
        ctx->pc = 0x161500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1614FCu;
        // 0x161500: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161504u;
        goto label_161504;
    }
    ctx->pc = 0x1614FCu;
    SET_GPR_U32(ctx, 31, 0x161504u);
    ctx->pc = 0x161500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1614FCu;
    // 0x161500: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8D0u;
    { ctx->pc = 0x19b8d0; return; }
    ctx->pc = 0x161504u;
label_161504:
    // 0x161504: 0x87a40080  lh          $a0, 0x80($sp)
    ctx->pc = 0x161504u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 128)));
label_161508:
    // 0x161508: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x161508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_16150c:
    // 0x16150c: 0x3c038888  lui         $v1, 0x8888
    ctx->pc = 0x16150cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34952 << 16));
label_161510:
    // 0x161510: 0x2210821  addu        $at, $s1, $at
    ctx->pc = 0x161510u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
label_161514:
    // 0x161514: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x161514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
label_161518:
    // 0x161518: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x161518u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_16151c:
    // 0x16151c: 0xa6a40060  sh          $a0, 0x60($s5)
    ctx->pc = 0x16151cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 96), (uint16_t)GPR_U32(ctx, 4));
label_161520:
    // 0x161520: 0x87a40084  lh          $a0, 0x84($sp)
    ctx->pc = 0x161520u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 132)));
label_161524:
    // 0x161524: 0xa6a40062  sh          $a0, 0x62($s5)
    ctx->pc = 0x161524u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 98), (uint16_t)GPR_U32(ctx, 4));
label_161528:
    // 0x161528: 0x9025761c  lbu         $a1, 0x761C($at)
    ctx->pc = 0x161528u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 30236)));
label_16152c:
    // 0x16152c: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x16152cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_161530:
    // 0x161530: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x161530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_161534:
    // 0x161534: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x161534u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_161538:
    // 0x161538: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x161538u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_16153c:
    // 0x16153c: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x16153cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_161540:
    // 0x161540: 0x0  nop
    ctx->pc = 0x161540u;
    // NOP
label_161544:
    // 0x161544: 0x1810  mfhi        $v1
    ctx->pc = 0x161544u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_161548:
    // 0x161548: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x161548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_16154c:
    // 0x16154c: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x16154cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_161550:
    // 0x161550: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x161550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_161554:
    // 0x161554: 0xa2a3002b  sb          $v1, 0x2B($s5)
    ctx->pc = 0x161554u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 43), (uint8_t)GPR_U32(ctx, 3));
label_161558:
    // 0x161558: 0xa2a30013  sb          $v1, 0x13($s5)
    ctx->pc = 0x161558u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 19), (uint8_t)GPR_U32(ctx, 3));
label_16155c:
    // 0x16155c: 0x26b50070  addiu       $s5, $s5, 0x70
    ctx->pc = 0x16155cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
label_161560:
    // 0x161560: 0x2a430020  slti        $v1, $s2, 0x20
    ctx->pc = 0x161560u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)32) ? 1 : 0);
label_161564:
    // 0x161564: 0x1460ff93  bnez        $v1, . + 4 + (-0x6D << 2)
label_161568:
    if (ctx->pc == 0x161568u) {
        ctx->pc = 0x161568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161564u;
        // 0x161568: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16156Cu;
        goto label_16156c;
    }
    ctx->pc = 0x161564u;
    {
        const bool branch_taken_0x161564 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x161568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161564u;
        // 0x161568: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161564) {
            ctx->pc = 0x1613B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            { ctx->pc = 0x1613b4; return; }
        }
    }
    ctx->pc = 0x16156Cu;
label_16156c:
    // 0x16156c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x16156cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_161570:
    // 0x161570: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x161570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_161574:
    // 0x161574: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x161574u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_161578:
    // 0x161578: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x161578u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_16157c:
    // 0x16157c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x16157cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_161580:
    // 0x161580: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x161580u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_161584:
    // 0x161584: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x161584u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_161588:
    // 0x161588: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x161588u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16158c:
    // 0x16158c: 0x3e00008  jr          $ra
label_161590:
    if (ctx->pc == 0x161590u) {
        ctx->pc = 0x161590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16158Cu;
        // 0x161590: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161594u;
        goto label_161594;
    }
    ctx->pc = 0x16158Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16158Cu;
        // 0x161590: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16158Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x161594u;
label_161594:
    // 0x161594: 0x0  nop
    ctx->pc = 0x161594u;
    // NOP
label_161598:
    // 0x161598: 0x0  nop
    ctx->pc = 0x161598u;
    // NOP
label_16159c:
    // 0x16159c: 0x0  nop
    ctx->pc = 0x16159cu;
    // NOP
label_1615a0:
    // 0x1615a0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1615a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1615a4:
    // 0x1615a4: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x1615a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
label_1615a8:
    // 0x1615a8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1615a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1615ac:
    // 0x1615ac: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1615acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1615b0:
    // 0x1615b0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1615b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_1615b4:
    // 0x1615b4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1615b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1615b8:
    // 0x1615b8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1615b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1615bc:
    // 0x1615bc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1615bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1615c0:
    // 0x1615c0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1615c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1615c4:
    // 0x1615c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1615c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1615c8:
    // 0x1615c8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1615c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1615cc:
    // 0x1615cc: 0x34217610  ori         $at, $at, 0x7610
    ctx->pc = 0x1615ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)30224);
label_1615d0:
    // 0x1615d0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1615d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1615d4:
    // 0x1615d4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1615d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1615d8:
    // 0x1615d8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1615d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1615dc:
    // 0x1615dc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1615dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1615e0:
    // 0x1615e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1615e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1615e4:
    // 0x1615e4: 0xc481001c  lwc1        $f1, 0x1C($a0)
    ctx->pc = 0x1615e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1615e8:
    // 0x1615e8: 0x2019821  addu        $s3, $s0, $at
    ctx->pc = 0x1615e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_1615ec:
    // 0x1615ec: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1615ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
label_1615f0:
    // 0x1615f0: 0x26153660  addiu       $s5, $s0, 0x3660
    ctx->pc = 0x1615f0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 13920));
label_1615f4:
    // 0x1615f4: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1615f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
label_1615f8:
    // 0x1615f8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1615f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1615fc:
    // 0x1615fc: 0x31200  sll         $v0, $v1, 8
    ctx->pc = 0x1615fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_161600:
    // 0x161600: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x161600u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_161604:
    // 0x161604: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x161604u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_161608:
    // 0x161608: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x161608u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
label_16160c:
    // 0x16160c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16160cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_161610:
    // 0x161610: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x161610u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_161614:
    // 0x161614: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x161614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_161618:
    // 0x161618: 0x24544d20  addiu       $s4, $v0, 0x4D20
    ctx->pc = 0x161618u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 19744));
label_16161c:
    // 0x16161c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x16161cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_161620:
    // 0x161620: 0x0  nop
    ctx->pc = 0x161620u;
    // NOP
label_161624:
    // 0x161624: 0x92a20005  lbu         $v0, 0x5($s5)
    ctx->pc = 0x161624u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 5)));
label_161628:
    // 0x161628: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_16162c:
    if (ctx->pc == 0x16162Cu) {
        ctx->pc = 0x161630u;
        goto label_161630;
    }
    ctx->pc = 0x161628u;
    {
        const bool branch_taken_0x161628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x161628) {
            ctx->pc = 0x16168Cu;
            goto label_16168c;
        }
    }
    ctx->pc = 0x161630u;
label_161630:
    // 0x161630: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x161630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_161634:
    // 0x161634: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x161634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_161638:
    // 0x161638: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x161638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_16163c:
    // 0x16163c: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x16163cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
label_161640:
    // 0x161640: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
label_161644:
    if (ctx->pc == 0x161644u) {
        ctx->pc = 0x161648u;
        goto label_161648;
    }
    ctx->pc = 0x161640u;
    {
        const bool branch_taken_0x161640 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x161640) {
            ctx->pc = 0x16168Cu;
            goto label_16168c;
        }
    }
    ctx->pc = 0x161648u;
label_161648:
    // 0x161648: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_16164c:
    if (ctx->pc == 0x16164Cu) {
        ctx->pc = 0x161650u;
        goto label_161650;
    }
    ctx->pc = 0x161648u;
    {
        const bool branch_taken_0x161648 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x161648) {
            ctx->pc = 0x16168Cu;
            goto label_16168c;
        }
    }
    ctx->pc = 0x161650u;
label_161650:
    // 0x161650: 0x8e024d10  lw          $v0, 0x4D10($s0)
    ctx->pc = 0x161650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 19728)));
label_161654:
    // 0x161654: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x161654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_161658:
    // 0x161658: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x161658u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_16165c:
    // 0x16165c: 0x9266000f  lbu         $a2, 0xF($s3)
    ctx->pc = 0x16165cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 15)));
label_161660:
    // 0x161660: 0x9027761c  lbu         $a3, 0x761C($at)
    ctx->pc = 0x161660u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 30236)));
label_161664:
    // 0x161664: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x161664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_161668:
    // 0x161668: 0x26080010  addiu       $t0, $s0, 0x10
    ctx->pc = 0x161668u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_16166c:
    // 0x16166c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x16166cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_161670:
    // 0x161670: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x161670u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_161674:
    // 0x161674: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x161674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_161678:
    // 0x161678: 0xc0585f0  jal         func_1617C0
label_16167c:
    if (ctx->pc == 0x16167Cu) {
        ctx->pc = 0x16167Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161678u;
        // 0x16167c: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161680u;
        goto label_161680;
    }
    ctx->pc = 0x161678u;
    SET_GPR_U32(ctx, 31, 0x161680u);
    ctx->pc = 0x16167Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161678u;
    // 0x16167c: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1617C0u;
    goto label_1617c0;
    ctx->pc = 0x161680u;
label_161680:
    // 0x161680: 0x8e024d10  lw          $v0, 0x4D10($s0)
    ctx->pc = 0x161680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 19728)));
label_161684:
    // 0x161684: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x161684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_161688:
    // 0x161688: 0xae024d10  sw          $v0, 0x4D10($s0)
    ctx->pc = 0x161688u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 19728), GPR_U32(ctx, 2));
label_16168c:
    // 0x16168c: 0x0  nop
    ctx->pc = 0x16168cu;
    // NOP
label_161690:
    // 0x161690: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x161690u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_161694:
    // 0x161694: 0x2a4200ff  slti        $v0, $s2, 0xFF
    ctx->pc = 0x161694u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)255) ? 1 : 0);
label_161698:
    // 0x161698: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
label_16169c:
    if (ctx->pc == 0x16169Cu) {
        ctx->pc = 0x16169Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161698u;
        // 0x16169c: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1616A0u;
        goto label_1616a0;
    }
    ctx->pc = 0x161698u;
    {
        const bool branch_taken_0x161698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16169Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161698u;
        // 0x16169c: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161698) {
            ctx->pc = 0x161620u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_161620;
        }
    }
    ctx->pc = 0x1616A0u;
label_1616a0:
    // 0x1616a0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1616a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1616a4:
    // 0x1616a4: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x1616a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_1616a8:
    // 0x1616a8: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
label_1616ac:
    if (ctx->pc == 0x1616ACu) {
        ctx->pc = 0x1616ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1616A8u;
        // 0x1616ac: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1616B0u;
        goto label_1616b0;
    }
    ctx->pc = 0x1616A8u;
    {
        const bool branch_taken_0x1616a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1616ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1616A8u;
        // 0x1616ac: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1616a8) {
            ctx->pc = 0x161620u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_161620;
        }
    }
    ctx->pc = 0x1616B0u;
label_1616b0:
    // 0x1616b0: 0x26113660  addiu       $s1, $s0, 0x3660
    ctx->pc = 0x1616b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 13920));
label_1616b4:
    // 0x1616b4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1616b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1616b8:
    // 0x1616b8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1616b8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1616bc:
    // 0x1616bc: 0x0  nop
    ctx->pc = 0x1616bcu;
    // NOP
label_1616c0:
    // 0x1616c0: 0x0  nop
    ctx->pc = 0x1616c0u;
    // NOP
label_1616c4:
    // 0x1616c4: 0x92220005  lbu         $v0, 0x5($s1)
    ctx->pc = 0x1616c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
label_1616c8:
    // 0x1616c8: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_1616cc:
    if (ctx->pc == 0x1616CCu) {
        ctx->pc = 0x1616D0u;
        goto label_1616d0;
    }
    ctx->pc = 0x1616C8u;
    {
        const bool branch_taken_0x1616c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1616c8) {
            ctx->pc = 0x16172Cu;
            goto label_16172c;
        }
    }
    ctx->pc = 0x1616D0u;
label_1616d0:
    // 0x1616d0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1616d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1616d4:
    // 0x1616d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1616d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1616d8:
    // 0x1616d8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1616d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1616dc:
    // 0x1616dc: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x1616dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
label_1616e0:
    // 0x1616e0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1616e4:
    if (ctx->pc == 0x1616E4u) {
        ctx->pc = 0x1616E8u;
        goto label_1616e8;
    }
    ctx->pc = 0x1616E0u;
    {
        const bool branch_taken_0x1616e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1616e0) {
            ctx->pc = 0x1616F0u;
            goto label_1616f0;
        }
    }
    ctx->pc = 0x1616E8u;
label_1616e8:
    // 0x1616e8: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
label_1616ec:
    if (ctx->pc == 0x1616ECu) {
        ctx->pc = 0x1616F0u;
        goto label_1616f0;
    }
    ctx->pc = 0x1616E8u;
    {
        const bool branch_taken_0x1616e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1616e8) {
            ctx->pc = 0x16172Cu;
            goto label_16172c;
        }
    }
    ctx->pc = 0x1616F0u;
label_1616f0:
    // 0x1616f0: 0x8e024d10  lw          $v0, 0x4D10($s0)
    ctx->pc = 0x1616f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 19728)));
label_1616f4:
    // 0x1616f4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1616f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1616f8:
    // 0x1616f8: 0x9266000f  lbu         $a2, 0xF($s3)
    ctx->pc = 0x1616f8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 15)));
label_1616fc:
    // 0x1616fc: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1616fcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_161700:
    // 0x161700: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x161700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_161704:
    // 0x161704: 0x9027761c  lbu         $a3, 0x761C($at)
    ctx->pc = 0x161704u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 30236)));
label_161708:
    // 0x161708: 0x26080010  addiu       $t0, $s0, 0x10
    ctx->pc = 0x161708u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_16170c:
    // 0x16170c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x16170cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_161710:
    // 0x161710: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x161710u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_161714:
    // 0x161714: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x161714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_161718:
    // 0x161718: 0xc0585f0  jal         func_1617C0
label_16171c:
    if (ctx->pc == 0x16171Cu) {
        ctx->pc = 0x16171Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161718u;
        // 0x16171c: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161720u;
        goto label_161720;
    }
    ctx->pc = 0x161718u;
    SET_GPR_U32(ctx, 31, 0x161720u);
    ctx->pc = 0x16171Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161718u;
    // 0x16171c: 0x24450020  addiu       $a1, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1617C0u;
    goto label_1617c0;
    ctx->pc = 0x161720u;
label_161720:
    // 0x161720: 0x8e024d10  lw          $v0, 0x4D10($s0)
    ctx->pc = 0x161720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 19728)));
label_161724:
    // 0x161724: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x161724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_161728:
    // 0x161728: 0xae024d10  sw          $v0, 0x4D10($s0)
    ctx->pc = 0x161728u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 19728), GPR_U32(ctx, 2));
label_16172c:
    // 0x16172c: 0x0  nop
    ctx->pc = 0x16172cu;
    // NOP
label_161730:
    // 0x161730: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x161730u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_161734:
    // 0x161734: 0x2aa200ff  slti        $v0, $s5, 0xFF
    ctx->pc = 0x161734u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)255) ? 1 : 0);
label_161738:
    // 0x161738: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
label_16173c:
    if (ctx->pc == 0x16173Cu) {
        ctx->pc = 0x16173Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161738u;
        // 0x16173c: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161740u;
        goto label_161740;
    }
    ctx->pc = 0x161738u;
    {
        const bool branch_taken_0x161738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16173Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161738u;
        // 0x16173c: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161738) {
            ctx->pc = 0x1616BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1616bc;
        }
    }
    ctx->pc = 0x161740u;
label_161740:
    // 0x161740: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x161740u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_161744:
    // 0x161744: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x161744u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_161748:
    // 0x161748: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
label_16174c:
    if (ctx->pc == 0x16174Cu) {
        ctx->pc = 0x16174Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161748u;
        // 0x16174c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161750u;
        goto label_161750;
    }
    ctx->pc = 0x161748u;
    {
        const bool branch_taken_0x161748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16174Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161748u;
        // 0x16174c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161748) {
            ctx->pc = 0x1616BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1616bc;
        }
    }
    ctx->pc = 0x161750u;
label_161750:
    // 0x161750: 0x8e024d10  lw          $v0, 0x4D10($s0)
    ctx->pc = 0x161750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 19728)));
label_161754:
    // 0x161754: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x161754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_161758:
    // 0x161758: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x161758u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_16175c:
    // 0x16175c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x16175cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_161760:
    // 0x161760: 0xc05e234  jal         func_1788D0
label_161764:
    if (ctx->pc == 0x161764u) {
        ctx->pc = 0x161764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161760u;
        // 0x161764: 0x22902  srl         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161768u;
        goto label_161768;
    }
    ctx->pc = 0x161760u;
    SET_GPR_U32(ctx, 31, 0x161768u);
    ctx->pc = 0x161764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161760u;
    // 0x161764: 0x22902  srl         $a1, $v0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1788D0u;
    { ctx->pc = 0x1788d0; return; }
    ctx->pc = 0x161768u;
label_161768:
    // 0x161768: 0x8e054d10  lw          $a1, 0x4D10($s0)
    ctx->pc = 0x161768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 19728)));
label_16176c:
    // 0x16176c: 0x3c038400  lui         $v1, 0x8400
    ctx->pc = 0x16176cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33792 << 16));
label_161770:
    // 0x161770: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x161770u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
label_161774:
    // 0x161774: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x161774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_161778:
    // 0x161778: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x161778u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_16177c:
    // 0x16177c: 0x3403f535  ori         $v1, $zero, 0xF535
    ctx->pc = 0x16177cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62773);
label_161780:
    // 0x161780: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x161780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_161784:
    // 0x161784: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x161784u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_161788:
    // 0x161788: 0x34633107  ori         $v1, $v1, 0x3107
    ctx->pc = 0x161788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12551);
label_16178c:
    // 0x16178c: 0xfe840010  sd          $a0, 0x10($s4)
    ctx->pc = 0x16178cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 4));
label_161790:
    // 0x161790: 0xfe830018  sd          $v1, 0x18($s4)
    ctx->pc = 0x161790u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 24), GPR_U64(ctx, 3));
label_161794:
    // 0x161794: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x161794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_161798:
    // 0x161798: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x161798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_16179c:
    // 0x16179c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x16179cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1617a0:
    // 0x1617a0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1617a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1617a4:
    // 0x1617a4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1617a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1617a8:
    // 0x1617a8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1617a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1617ac:
    // 0x1617ac: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1617acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1617b0:
    // 0x1617b0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1617b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1617b4:
    // 0x1617b4: 0x3e00008  jr          $ra
label_1617b8:
    if (ctx->pc == 0x1617B8u) {
        ctx->pc = 0x1617B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1617B4u;
        // 0x1617b8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1617BCu;
        goto label_1617bc;
    }
    ctx->pc = 0x1617B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1617B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1617B4u;
        // 0x1617b8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1617B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1617BCu;
label_1617bc:
    // 0x1617bc: 0x0  nop
    ctx->pc = 0x1617bcu;
    // NOP
label_1617c0:
    // 0x1617c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1617c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1617c4:
    // 0x1617c4: 0x3c03459c  lui         $v1, 0x459C
    ctx->pc = 0x1617c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17820 << 16));
label_1617c8:
    // 0x1617c8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1617c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1617cc:
    // 0x1617cc: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x1617ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_1617d0:
    // 0x1617d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1617d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1617d4:
    // 0x1617d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1617d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1617d8:
    // 0x1617d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1617d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1617dc:
    // 0x1617dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1617dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1617e0:
    // 0x1617e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1617e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1617e4:
    // 0x1617e4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1617e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1617e8:
    // 0x1617e8: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x1617e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1617ec:
    // 0x1617ec: 0x460c1841  sub.s       $f1, $f3, $f12
    ctx->pc = 0x1617ecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[12]);
label_1617f0:
    // 0x1617f0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1617f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1617f4:
    // 0x1617f4: 0x0  nop
    ctx->pc = 0x1617f4u;
    // NOP
label_1617f8:
    // 0x1617f8: 0x45000027  bc1f        . + 4 + (0x27 << 2)
label_1617fc:
    if (ctx->pc == 0x1617FCu) {
        ctx->pc = 0x1617FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1617F8u;
        // 0x1617fc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161800u;
        goto label_161800;
    }
    ctx->pc = 0x1617F8u;
    {
        const bool branch_taken_0x1617f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1617FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1617F8u;
        // 0x1617fc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1617f8) {
            ctx->pc = 0x161898u;
            goto label_161898;
        }
    }
    ctx->pc = 0x161800u;
label_161800:
    // 0x161800: 0x4e00004  bltz        $a3, . + 4 + (0x4 << 2)
label_161804:
    if (ctx->pc == 0x161804u) {
        ctx->pc = 0x161804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161800u;
        // 0x161804: 0x72042  srl         $a0, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161808u;
        goto label_161808;
    }
    ctx->pc = 0x161800u;
    {
        const bool branch_taken_0x161800 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x161804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161800u;
        // 0x161804: 0x72042  srl         $a0, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161800) {
            ctx->pc = 0x161814u;
            goto label_161814;
        }
    }
    ctx->pc = 0x161808u;
label_161808:
    // 0x161808: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x161808u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16180c:
    // 0x16180c: 0x10000007  b           . + 4 + (0x7 << 2)
label_161810:
    if (ctx->pc == 0x161810u) {
        ctx->pc = 0x161810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16180Cu;
        // 0x161810: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x161814u;
        goto label_161814;
    }
    ctx->pc = 0x16180Cu;
    {
        const bool branch_taken_0x16180c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16180Cu;
        // 0x161810: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16180c) {
            ctx->pc = 0x16182Cu;
            goto label_16182c;
        }
    }
    ctx->pc = 0x161814u;
label_161814:
    // 0x161814: 0x30e30001  andi        $v1, $a3, 0x1
    ctx->pc = 0x161814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
label_161818:
    // 0x161818: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x161818u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_16181c:
    // 0x16181c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x16181cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_161820:
    // 0x161820: 0x0  nop
    ctx->pc = 0x161820u;
    // NOP
label_161824:
    // 0x161824: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x161824u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_161828:
    // 0x161828: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x161828u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_16182c:
    // 0x16182c: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x16182cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_161830:
    // 0x161830: 0x3c03459c  lui         $v1, 0x459C
    ctx->pc = 0x161830u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17820 << 16));
label_161834:
    // 0x161834: 0x34644000  ori         $a0, $v1, 0x4000
    ctx->pc = 0x161834u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_161838:
    // 0x161838: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x161838u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_16183c:
    // 0x16183c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x16183cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_161840:
    // 0x161840: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x161840u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_161844:
    // 0x161844: 0x0  nop
    ctx->pc = 0x161844u;
    // NOP
label_161848:
    // 0x161848: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x161848u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_16184c:
    // 0x16184c: 0x0  nop
    ctx->pc = 0x16184cu;
    // NOP
label_161850:
    // 0x161850: 0x0  nop
    ctx->pc = 0x161850u;
    // NOP
label_161854:
    // 0x161854: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x161854u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_161858:
    // 0x161858: 0x0  nop
    ctx->pc = 0x161858u;
    // NOP
label_16185c:
    // 0x16185c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_161860:
    if (ctx->pc == 0x161860u) {
        ctx->pc = 0x161864u;
        goto label_161864;
    }
    ctx->pc = 0x16185Cu;
    {
        const bool branch_taken_0x16185c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16185c) {
            ctx->pc = 0x161874u;
            goto label_161874;
        }
    }
    ctx->pc = 0x161864u;
label_161864:
    // 0x161864: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x161864u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_161868:
    // 0x161868: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x161868u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_16186c:
    // 0x16186c: 0x10000008  b           . + 4 + (0x8 << 2)
label_161870:
    if (ctx->pc == 0x161870u) {
        ctx->pc = 0x161870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16186Cu;
        // 0x161870: 0x309200ff  andi        $s2, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x161874u;
        goto label_161874;
    }
    ctx->pc = 0x16186Cu;
    {
        const bool branch_taken_0x16186c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16186Cu;
        // 0x161870: 0x309200ff  andi        $s2, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16186c) {
            ctx->pc = 0x161890u;
            goto label_161890;
        }
    }
    ctx->pc = 0x161874u;
label_161874:
    // 0x161874: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x161874u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_161878:
    // 0x161878: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x161878u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_16187c:
    // 0x16187c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x16187cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_161880:
    // 0x161880: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x161880u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_161884:
    // 0x161884: 0x0  nop
    ctx->pc = 0x161884u;
    // NOP
label_161888:
    // 0x161888: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x161888u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_16188c:
    // 0x16188c: 0x309200ff  andi        $s2, $a0, 0xFF
    ctx->pc = 0x16188cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_161890:
    // 0x161890: 0x10000034  b           . + 4 + (0x34 << 2)
label_161894:
    if (ctx->pc == 0x161894u) {
        ctx->pc = 0x161894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161890u;
        // 0x161894: 0xc4430004  lwc1        $f3, 0x4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x161898u;
        goto label_161898;
    }
    ctx->pc = 0x161890u;
    {
        const bool branch_taken_0x161890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161890u;
        // 0x161894: 0xc4430004  lwc1        $f3, 0x4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x161890) {
            ctx->pc = 0x161964u;
            goto label_161964;
        }
    }
    ctx->pc = 0x161898u;
label_161898:
    // 0x161898: 0x3c034792  lui         $v1, 0x4792
    ctx->pc = 0x161898u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18322 << 16));
label_16189c:
    // 0x16189c: 0x34637c00  ori         $v1, $v1, 0x7C00
    ctx->pc = 0x16189cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)31744);
label_1618a0:
    // 0x1618a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1618a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1618a4:
    // 0x1618a4: 0x0  nop
    ctx->pc = 0x1618a4u;
    // NOP
label_1618a8:
    // 0x1618a8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1618a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1618ac:
    // 0x1618ac: 0x0  nop
    ctx->pc = 0x1618acu;
    // NOP
label_1618b0:
    // 0x1618b0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1618b4:
    if (ctx->pc == 0x1618B4u) {
        ctx->pc = 0x1618B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1618B0u;
        // 0x1618b4: 0x30f200ff  andi        $s2, $a3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1618B8u;
        goto label_1618b8;
    }
    ctx->pc = 0x1618B0u;
    {
        const bool branch_taken_0x1618b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1618B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1618B0u;
        // 0x1618b4: 0x30f200ff  andi        $s2, $a3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1618b0) {
            ctx->pc = 0x1618C0u;
            goto label_1618c0;
        }
    }
    ctx->pc = 0x1618B8u;
label_1618b8:
    // 0x1618b8: 0x10000029  b           . + 4 + (0x29 << 2)
label_1618bc:
    if (ctx->pc == 0x1618BCu) {
        ctx->pc = 0x1618C0u;
        goto label_1618c0;
    }
    ctx->pc = 0x1618B8u;
    {
        const bool branch_taken_0x1618b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1618b8) {
            ctx->pc = 0x161960u;
            goto label_161960;
        }
    }
    ctx->pc = 0x1618C0u;
label_1618c0:
    // 0x1618c0: 0x4e00004  bltz        $a3, . + 4 + (0x4 << 2)
label_1618c4:
    if (ctx->pc == 0x1618C4u) {
        ctx->pc = 0x1618C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1618C0u;
        // 0x1618c4: 0x72042  srl         $a0, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1618C8u;
        goto label_1618c8;
    }
    ctx->pc = 0x1618C0u;
    {
        const bool branch_taken_0x1618c0 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x1618C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1618C0u;
        // 0x1618c4: 0x72042  srl         $a0, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1618c0) {
            ctx->pc = 0x1618D4u;
            goto label_1618d4;
        }
    }
    ctx->pc = 0x1618C8u;
label_1618c8:
    // 0x1618c8: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x1618c8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1618cc:
    // 0x1618cc: 0x10000007  b           . + 4 + (0x7 << 2)
label_1618d0:
    if (ctx->pc == 0x1618D0u) {
        ctx->pc = 0x1618D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1618CCu;
        // 0x1618d0: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1618D4u;
        goto label_1618d4;
    }
    ctx->pc = 0x1618CCu;
    {
        const bool branch_taken_0x1618cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1618D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1618CCu;
        // 0x1618d0: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1618cc) {
            ctx->pc = 0x1618ECu;
            goto label_1618ec;
        }
    }
    ctx->pc = 0x1618D4u;
label_1618d4:
    // 0x1618d4: 0x30e30001  andi        $v1, $a3, 0x1
    ctx->pc = 0x1618d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
label_1618d8:
    // 0x1618d8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1618d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1618dc:
    // 0x1618dc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1618dcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1618e0:
    // 0x1618e0: 0x0  nop
    ctx->pc = 0x1618e0u;
    // NOP
label_1618e4:
    // 0x1618e4: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1618e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1618e8:
    // 0x1618e8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1618e8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1618ec:
    // 0x1618ec: 0x3c04479c  lui         $a0, 0x479C
    ctx->pc = 0x1618ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)18332 << 16));
label_1618f0:
    // 0x1618f0: 0x3c03459c  lui         $v1, 0x459C
    ctx->pc = 0x1618f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17820 << 16));
label_1618f4:
    // 0x1618f4: 0x34854000  ori         $a1, $a0, 0x4000
    ctx->pc = 0x1618f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
label_1618f8:
    // 0x1618f8: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1618f8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1618fc:
    // 0x1618fc: 0x34644000  ori         $a0, $v1, 0x4000
    ctx->pc = 0x1618fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_161900:
    // 0x161900: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x161900u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_161904:
    // 0x161904: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x161904u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_161908:
    // 0x161908: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x161908u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_16190c:
    // 0x16190c: 0x460c0840  add.s       $f1, $f1, $f12
    ctx->pc = 0x16190cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[12]);
label_161910:
    // 0x161910: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x161910u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_161914:
    // 0x161914: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x161914u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
label_161918:
    // 0x161918: 0x0  nop
    ctx->pc = 0x161918u;
    // NOP
label_16191c:
    // 0x16191c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16191cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_161920:
    // 0x161920: 0x0  nop
    ctx->pc = 0x161920u;
    // NOP
label_161924:
    // 0x161924: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x161924u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_161928:
    // 0x161928: 0x0  nop
    ctx->pc = 0x161928u;
    // NOP
label_16192c:
    // 0x16192c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_161930:
    if (ctx->pc == 0x161930u) {
        ctx->pc = 0x161934u;
        goto label_161934;
    }
    ctx->pc = 0x16192Cu;
    {
        const bool branch_taken_0x16192c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16192c) {
            ctx->pc = 0x161944u;
            goto label_161944;
        }
    }
    ctx->pc = 0x161934u;
label_161934:
    // 0x161934: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x161934u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_161938:
    // 0x161938: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x161938u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_16193c:
    // 0x16193c: 0x10000008  b           . + 4 + (0x8 << 2)
label_161940:
    if (ctx->pc == 0x161940u) {
        ctx->pc = 0x161940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16193Cu;
        // 0x161940: 0x309200ff  andi        $s2, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x161944u;
        goto label_161944;
    }
    ctx->pc = 0x16193Cu;
    {
        const bool branch_taken_0x16193c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16193Cu;
        // 0x161940: 0x309200ff  andi        $s2, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16193c) {
            ctx->pc = 0x161960u;
            goto label_161960;
        }
    }
    ctx->pc = 0x161944u;
label_161944:
    // 0x161944: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x161944u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_161948:
    // 0x161948: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x161948u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_16194c:
    // 0x16194c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x16194cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_161950:
    // 0x161950: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x161950u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_161954:
    // 0x161954: 0x0  nop
    ctx->pc = 0x161954u;
    // NOP
label_161958:
    // 0x161958: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x161958u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_16195c:
    // 0x16195c: 0x309200ff  andi        $s2, $a0, 0xFF
    ctx->pc = 0x16195cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_161960:
    // 0x161960: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x161960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_161964:
    // 0x161964: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x161964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_161968:
    // 0x161968: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x161968u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
label_16196c:
    // 0x16196c: 0x24845680  addiu       $a0, $a0, 0x5680
    ctx->pc = 0x16196cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22144));
label_161970:
    // 0x161970: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x161970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_161974:
    // 0x161974: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x161974u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_161978:
    // 0x161978: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x161978u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_16197c:
    // 0x16197c: 0x25080  sll         $t2, $v0, 2
    ctx->pc = 0x16197cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_161980:
    // 0x161980: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x161980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_161984:
    // 0x161984: 0x8a2821  addu        $a1, $a0, $t2
    ctx->pc = 0x161984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_161988:
    // 0x161988: 0x24635670  addiu       $v1, $v1, 0x5670
    ctx->pc = 0x161988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22128));
label_16198c:
    // 0x16198c: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x16198cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_161990:
    // 0x161990: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x161990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_161994:
    // 0x161994: 0x6a2021  addu        $a0, $v1, $t2
    ctx->pc = 0x161994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_161998:
    // 0x161998: 0x2442569c  addiu       $v0, $v0, 0x569C
    ctx->pc = 0x161998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22172));
label_16199c:
    // 0x16199c: 0x4a1821  addu        $v1, $v0, $t2
    ctx->pc = 0x16199cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_1619a0:
    // 0x1619a0: 0xc4850000  lwc1        $f5, 0x0($a0)
    ctx->pc = 0x1619a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1619a4:
    // 0x1619a4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1619a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1619a8:
    // 0x1619a8: 0x24425674  addiu       $v0, $v0, 0x5674
    ctx->pc = 0x1619a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22132));
label_1619ac:
    // 0x1619ac: 0x4a4821  addu        $t1, $v0, $t2
    ctx->pc = 0x1619acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_1619b0:
    // 0x1619b0: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x1619b0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_1619b4:
    // 0x1619b4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1619b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1619b8:
    // 0x1619b8: 0x244256a0  addiu       $v0, $v0, 0x56A0
    ctx->pc = 0x1619b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22176));
label_1619bc:
    // 0x1619bc: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1619bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1619c0:
    // 0x1619c0: 0x4a3821  addu        $a3, $v0, $t2
    ctx->pc = 0x1619c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_1619c4:
    // 0x1619c4: 0x3c02479c  lui         $v0, 0x479C
    ctx->pc = 0x1619c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18332 << 16));
label_1619c8:
    // 0x1619c8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1619c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1619cc:
    // 0x1619cc: 0x34464000  ori         $a2, $v0, 0x4000
    ctx->pc = 0x1619ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_1619d0:
    // 0x1619d0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1619d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1619d4:
    // 0x1619d4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1619d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_1619d8:
    // 0x1619d8: 0x46002887  neg.s       $f2, $f5
    ctx->pc = 0x1619d8u;
    ctx->f[2] = FPU_NEG_S(ctx->f[5]);
label_1619dc:
    // 0x1619dc: 0x24425684  addiu       $v0, $v0, 0x5684
    ctx->pc = 0x1619dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22148));
label_1619e0:
    // 0x1619e0: 0x44862000  mtc1        $a2, $f4
    ctx->pc = 0x1619e0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1619e4:
    // 0x1619e4: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1619e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_1619e8:
    // 0x1619e8: 0x4a1821  addu        $v1, $v0, $t2
    ctx->pc = 0x1619e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_1619ec:
    // 0x1619ec: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1619ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1619f0:
    // 0x1619f0: 0x27aa0054  addiu       $t2, $sp, 0x54
    ctx->pc = 0x1619f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_1619f4:
    // 0x1619f4: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x1619f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_1619f8:
    // 0x1619f8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1619f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1619fc:
    // 0x1619fc: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x1619fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_161a00:
    // 0x161a00: 0x44824000  mtc1        $v0, $f8
    ctx->pc = 0x161a00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_161a04:
    // 0x161a04: 0xc5270000  lwc1        $f7, 0x0($t1)
    ctx->pc = 0x161a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_161a08:
    // 0x161a08: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x161a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_161a0c:
    // 0x161a0c: 0x46054082  mul.s       $f2, $f8, $f5
    ctx->pc = 0x161a0cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[5]);
label_161a10:
    // 0x161a10: 0x46074002  mul.s       $f0, $f8, $f7
    ctx->pc = 0x161a10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[7]);
label_161a14:
    // 0x161a14: 0xc4450008  lwc1        $f5, 0x8($v0)
    ctx->pc = 0x161a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_161a18:
    // 0x161a18: 0xc4e60000  lwc1        $f6, 0x0($a3)
    ctx->pc = 0x161a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_161a1c:
    // 0x161a1c: 0x460039c7  neg.s       $f7, $f7
    ctx->pc = 0x161a1cu;
    ctx->f[7] = FPU_NEG_S(ctx->f[7]);
label_161a20:
    // 0x161a20: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x161a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_161a24:
    // 0x161a24: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x161a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_161a28:
    // 0x161a28: 0x46052101  sub.s       $f4, $f4, $f5
    ctx->pc = 0x161a28u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[5]);
label_161a2c:
    // 0x161a2c: 0x460c2100  add.s       $f4, $f4, $f12
    ctx->pc = 0x161a2cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[12]);
label_161a30:
    // 0x161a30: 0x46063818  adda.s      $f7, $f6
    ctx->pc = 0x161a30u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[7], ctx->f[6]));
label_161a34:
    // 0x161a34: 0x460320dc  madd.s      $f3, $f4, $f3
    ctx->pc = 0x161a34u;
    ctx->f[3] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[3]));
label_161a38:
    // 0x161a38: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x161a38u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_161a3c:
    // 0x161a3c: 0xe5410000  swc1        $f1, 0x0($t2)
    ctx->pc = 0x161a3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
label_161a40:
    // 0x161a40: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x161a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_161a44:
    // 0x161a44: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x161a44u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_161a48:
    // 0x161a48: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x161a48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_161a4c:
    // 0x161a4c: 0xc5410000  lwc1        $f1, 0x0($t2)
    ctx->pc = 0x161a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_161a50:
    // 0x161a50: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x161a50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_161a54:
    // 0x161a54: 0xc066e34  jal         func_19B8D0
label_161a58:
    if (ctx->pc == 0x161A58u) {
        ctx->pc = 0x161A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161A54u;
        // 0x161a58: 0xe7a0005c  swc1        $f0, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x161A5Cu;
        goto label_161a5c;
    }
    ctx->pc = 0x161A54u;
    SET_GPR_U32(ctx, 31, 0x161A5Cu);
    ctx->pc = 0x161A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161A54u;
    // 0x161a58: 0xe7a0005c  swc1        $f0, 0x5C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8D0u;
    { ctx->pc = 0x19b8d0; return; }
    ctx->pc = 0x161A5Cu;
label_161a5c:
    // 0x161a5c: 0x87a40040  lh          $a0, 0x40($sp)
    ctx->pc = 0x161a5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 64)));
label_161a60:
    // 0x161a60: 0x3405ffe0  ori         $a1, $zero, 0xFFE0
    ctx->pc = 0x161a60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65504);
label_161a64:
    // 0x161a64: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x161a64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
label_161a68:
    // 0x161a68: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x161a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_161a6c:
    // 0x161a6c: 0xa6040020  sh          $a0, 0x20($s0)
    ctx->pc = 0x161a6cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 4));
label_161a70:
    // 0x161a70: 0x87a40044  lh          $a0, 0x44($sp)
    ctx->pc = 0x161a70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 68)));
label_161a74:
    // 0x161a74: 0xa6040022  sh          $a0, 0x22($s0)
    ctx->pc = 0x161a74u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 34), (uint16_t)GPR_U32(ctx, 4));
label_161a78:
    // 0x161a78: 0xae050024  sw          $a1, 0x24($s0)
    ctx->pc = 0x161a78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 5));
label_161a7c:
    // 0x161a7c: 0x87a40048  lh          $a0, 0x48($sp)
    ctx->pc = 0x161a7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 72)));
label_161a80:
    // 0x161a80: 0xa6040030  sh          $a0, 0x30($s0)
    ctx->pc = 0x161a80u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 4));
label_161a84:
    // 0x161a84: 0x87a4004c  lh          $a0, 0x4C($sp)
    ctx->pc = 0x161a84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 76)));
label_161a88:
    // 0x161a88: 0xa6040032  sh          $a0, 0x32($s0)
    ctx->pc = 0x161a88u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 50), (uint16_t)GPR_U32(ctx, 4));
label_161a8c:
    // 0x161a8c: 0xae050034  sw          $a1, 0x34($s0)
    ctx->pc = 0x161a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 5));
label_161a90:
    // 0x161a90: 0x84244af4  lh          $a0, 0x4AF4($at)
    ctx->pc = 0x161a90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19188)));
label_161a94:
    // 0x161a94: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
label_161a98:
    if (ctx->pc == 0x161A98u) {
        ctx->pc = 0x161A9Cu;
        goto label_161a9c;
    }
    ctx->pc = 0x161A94u;
    {
        const bool branch_taken_0x161a94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x161a94) {
            ctx->pc = 0x161AB4u;
            goto label_161ab4;
        }
    }
    ctx->pc = 0x161A9Cu;
label_161a9c:
    // 0x161a9c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x161a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_161aa0:
    // 0x161aa0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x161aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_161aa4:
    // 0x161aa4: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x161aa4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
label_161aa8:
    // 0x161aa8: 0x28610005  slti        $at, $v1, 0x5
    ctx->pc = 0x161aa8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
label_161aac:
    // 0x161aac: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
label_161ab0:
    if (ctx->pc == 0x161AB0u) {
        ctx->pc = 0x161AB4u;
        goto label_161ab4;
    }
    ctx->pc = 0x161AACu;
    {
        const bool branch_taken_0x161aac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x161aac) {
            ctx->pc = 0x161ACCu;
            goto label_161acc;
        }
    }
    ctx->pc = 0x161AB4u;
label_161ab4:
    // 0x161ab4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x161ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_161ab8:
    // 0x161ab8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x161ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_161abc:
    // 0x161abc: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x161abcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
label_161ac0:
    // 0x161ac0: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x161ac0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_161ac4:
    // 0x161ac4: 0x10200038  beqz        $at, . + 4 + (0x38 << 2)
label_161ac8:
    if (ctx->pc == 0x161AC8u) {
        ctx->pc = 0x161ACCu;
        goto label_161acc;
    }
    ctx->pc = 0x161AC4u;
    {
        const bool branch_taken_0x161ac4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x161ac4) {
            ctx->pc = 0x161BA8u;
            goto label_161ba8;
        }
    }
    ctx->pc = 0x161ACCu;
label_161acc:
    // 0x161acc: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x161accu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_161ad0:
    // 0x161ad0: 0x90a30034  lbu         $v1, 0x34($a1)
    ctx->pc = 0x161ad0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 52)));
label_161ad4:
    // 0x161ad4: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
label_161ad8:
    if (ctx->pc == 0x161AD8u) {
        ctx->pc = 0x161ADCu;
        goto label_161adc;
    }
    ctx->pc = 0x161AD4u;
    {
        const bool branch_taken_0x161ad4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x161ad4) {
            ctx->pc = 0x161B28u;
            goto label_161b28;
        }
    }
    ctx->pc = 0x161ADCu;
label_161adc:
    // 0x161adc: 0x90a40036  lbu         $a0, 0x36($a1)
    ctx->pc = 0x161adcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 54)));
label_161ae0:
    // 0x161ae0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x161ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_161ae4:
    // 0x161ae4: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_161ae8:
    if (ctx->pc == 0x161AE8u) {
        ctx->pc = 0x161AECu;
        goto label_161aec;
    }
    ctx->pc = 0x161AE4u;
    {
        const bool branch_taken_0x161ae4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x161ae4) {
            ctx->pc = 0x161AFCu;
            goto label_161afc;
        }
    }
    ctx->pc = 0x161AECu;
label_161aec:
    // 0x161aec: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x161aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_161af0:
    // 0x161af0: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x161af0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
label_161af4:
    // 0x161af4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_161af8:
    if (ctx->pc == 0x161AF8u) {
        ctx->pc = 0x161AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161AF4u;
        // 0x161af8: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161AFCu;
        goto label_161afc;
    }
    ctx->pc = 0x161AF4u;
    {
        const bool branch_taken_0x161af4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x161AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161AF4u;
        // 0x161af8: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161af4) {
            ctx->pc = 0x161B10u;
            goto label_161b10;
        }
    }
    ctx->pc = 0x161AFCu;
label_161afc:
    // 0x161afc: 0x92230004  lbu         $v1, 0x4($s1)
    ctx->pc = 0x161afcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
label_161b00:
    // 0x161b00: 0x2861003c  slti        $at, $v1, 0x3C
    ctx->pc = 0x161b00u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)60) ? 1 : 0);
label_161b04:
    // 0x161b04: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_161b08:
    if (ctx->pc == 0x161B08u) {
        ctx->pc = 0x161B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161B04u;
        // 0x161b08: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161B0Cu;
        goto label_161b0c;
    }
    ctx->pc = 0x161B04u;
    {
        const bool branch_taken_0x161b04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x161B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161B04u;
        // 0x161b08: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161b04) {
            ctx->pc = 0x161B1Cu;
            goto label_161b1c;
        }
    }
    ctx->pc = 0x161B0Cu;
label_161b0c:
    // 0x161b0c: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x161b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_161b10:
    // 0x161b10: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x161b10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_161b14:
    // 0x161b14: 0x10000016  b           . + 4 + (0x16 << 2)
label_161b18:
    if (ctx->pc == 0x161B18u) {
        ctx->pc = 0x161B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161B14u;
        // 0x161b18: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161B1Cu;
        goto label_161b1c;
    }
    ctx->pc = 0x161B14u;
    {
        const bool branch_taken_0x161b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161B14u;
        // 0x161b18: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161b14) {
            ctx->pc = 0x161B70u;
            goto label_161b70;
        }
    }
    ctx->pc = 0x161B1Cu;
label_161b1c:
    // 0x161b1c: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x161b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_161b20:
    // 0x161b20: 0x10000013  b           . + 4 + (0x13 << 2)
label_161b24:
    if (ctx->pc == 0x161B24u) {
        ctx->pc = 0x161B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161B20u;
        // 0x161b24: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161B28u;
        goto label_161b28;
    }
    ctx->pc = 0x161B20u;
    {
        const bool branch_taken_0x161b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161B20u;
        // 0x161b24: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161b20) {
            ctx->pc = 0x161B70u;
            goto label_161b70;
        }
    }
    ctx->pc = 0x161B28u;
label_161b28:
    // 0x161b28: 0x90a40036  lbu         $a0, 0x36($a1)
    ctx->pc = 0x161b28u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 54)));
label_161b2c:
    // 0x161b2c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x161b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_161b30:
    // 0x161b30: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_161b34:
    if (ctx->pc == 0x161B34u) {
        ctx->pc = 0x161B38u;
        goto label_161b38;
    }
    ctx->pc = 0x161B30u;
    {
        const bool branch_taken_0x161b30 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x161b30) {
            ctx->pc = 0x161B48u;
            goto label_161b48;
        }
    }
    ctx->pc = 0x161B38u;
label_161b38:
    // 0x161b38: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x161b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_161b3c:
    // 0x161b3c: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x161b3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
label_161b40:
    // 0x161b40: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_161b44:
    if (ctx->pc == 0x161B44u) {
        ctx->pc = 0x161B48u;
        goto label_161b48;
    }
    ctx->pc = 0x161B40u;
    {
        const bool branch_taken_0x161b40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x161b40) {
            ctx->pc = 0x161B58u;
            goto label_161b58;
        }
    }
    ctx->pc = 0x161B48u;
label_161b48:
    // 0x161b48: 0x92230004  lbu         $v1, 0x4($s1)
    ctx->pc = 0x161b48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
label_161b4c:
    // 0x161b4c: 0x2861003c  slti        $at, $v1, 0x3C
    ctx->pc = 0x161b4cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)60) ? 1 : 0);
label_161b50:
    // 0x161b50: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_161b54:
    if (ctx->pc == 0x161B54u) {
        ctx->pc = 0x161B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161B50u;
        // 0x161b54: 0x24050070  addiu       $a1, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161B58u;
        goto label_161b58;
    }
    ctx->pc = 0x161B50u;
    {
        const bool branch_taken_0x161b50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x161B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161B50u;
        // 0x161b54: 0x24050070  addiu       $a1, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161b50) {
            ctx->pc = 0x161B68u;
            goto label_161b68;
        }
    }
    ctx->pc = 0x161B58u;
label_161b58:
    // 0x161b58: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x161b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_161b5c:
    // 0x161b5c: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x161b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_161b60:
    // 0x161b60: 0x10000003  b           . + 4 + (0x3 << 2)
label_161b64:
    if (ctx->pc == 0x161B64u) {
        ctx->pc = 0x161B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161B60u;
        // 0x161b64: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161B68u;
        goto label_161b68;
    }
    ctx->pc = 0x161B60u;
    {
        const bool branch_taken_0x161b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161B60u;
        // 0x161b64: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161b60) {
            ctx->pc = 0x161B70u;
            goto label_161b70;
        }
    }
    ctx->pc = 0x161B68u;
label_161b68:
    // 0x161b68: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x161b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_161b6c:
    // 0x161b6c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x161b6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_161b70:
    // 0x161b70: 0x324700ff  andi        $a3, $s2, 0xFF
    ctx->pc = 0x161b70u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_161b74:
    // 0x161b74: 0x3c038888  lui         $v1, 0x8888
    ctx->pc = 0x161b74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34952 << 16));
label_161b78:
    // 0x161b78: 0x741c0  sll         $t0, $a3, 7
    ctx->pc = 0x161b78u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 7));
label_161b7c:
    // 0x161b7c: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x161b7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
label_161b80:
    // 0x161b80: 0x680018  mult        $zero, $v1, $t0
    ctx->pc = 0x161b80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_161b84:
    // 0x161b84: 0x83fc2  srl         $a3, $t0, 31
    ctx->pc = 0x161b84u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
label_161b88:
    // 0x161b88: 0x0  nop
    ctx->pc = 0x161b88u;
    // NOP
label_161b8c:
    // 0x161b8c: 0x1810  mfhi        $v1
    ctx->pc = 0x161b8cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_161b90:
    // 0x161b90: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x161b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_161b94:
    // 0x161b94: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x161b94u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_161b98:
    // 0x161b98: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x161b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_161b9c:
    // 0x161b9c: 0x33c3c  dsll32      $a3, $v1, 16
    ctx->pc = 0x161b9cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 16));
label_161ba0:
    // 0x161ba0: 0x10000018  b           . + 4 + (0x18 << 2)
label_161ba4:
    if (ctx->pc == 0x161BA4u) {
        ctx->pc = 0x161BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161BA0u;
        // 0x161ba4: 0x73c3f  dsra32      $a3, $a3, 16 (Delay Slot)
        SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161BA8u;
        goto label_161ba8;
    }
    ctx->pc = 0x161BA0u;
    {
        const bool branch_taken_0x161ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161BA0u;
        // 0x161ba4: 0x73c3f  dsra32      $a3, $a3, 16 (Delay Slot)
        SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161ba0) {
            ctx->pc = 0x161C04u;
            goto label_161c04;
        }
    }
    ctx->pc = 0x161BA8u;
label_161ba8:
    // 0x161ba8: 0x90830034  lbu         $v1, 0x34($a0)
    ctx->pc = 0x161ba8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 52)));
label_161bac:
    // 0x161bac: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_161bb0:
    if (ctx->pc == 0x161BB0u) {
        ctx->pc = 0x161BB4u;
        goto label_161bb4;
    }
    ctx->pc = 0x161BACu;
    {
        const bool branch_taken_0x161bac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x161bac) {
            ctx->pc = 0x161BC4u;
            goto label_161bc4;
        }
    }
    ctx->pc = 0x161BB4u;
label_161bb4:
    // 0x161bb4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x161bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_161bb8:
    // 0x161bb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x161bb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_161bbc:
    // 0x161bbc: 0x10000004  b           . + 4 + (0x4 << 2)
label_161bc0:
    if (ctx->pc == 0x161BC0u) {
        ctx->pc = 0x161BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161BBCu;
        // 0x161bc0: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161BC4u;
        goto label_161bc4;
    }
    ctx->pc = 0x161BBCu;
    {
        const bool branch_taken_0x161bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161BBCu;
        // 0x161bc0: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161bbc) {
            ctx->pc = 0x161BD0u;
            goto label_161bd0;
        }
    }
    ctx->pc = 0x161BC4u;
label_161bc4:
    // 0x161bc4: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x161bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_161bc8:
    // 0x161bc8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x161bc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_161bcc:
    // 0x161bcc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x161bccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_161bd0:
    // 0x161bd0: 0x324700ff  andi        $a3, $s2, 0xFF
    ctx->pc = 0x161bd0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_161bd4:
    // 0x161bd4: 0x3c038888  lui         $v1, 0x8888
    ctx->pc = 0x161bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34952 << 16));
label_161bd8:
    // 0x161bd8: 0x74180  sll         $t0, $a3, 6
    ctx->pc = 0x161bd8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
label_161bdc:
    // 0x161bdc: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x161bdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
label_161be0:
    // 0x161be0: 0x680018  mult        $zero, $v1, $t0
    ctx->pc = 0x161be0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_161be4:
    // 0x161be4: 0x83fc2  srl         $a3, $t0, 31
    ctx->pc = 0x161be4u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
label_161be8:
    // 0x161be8: 0x0  nop
    ctx->pc = 0x161be8u;
    // NOP
label_161bec:
    // 0x161bec: 0x1810  mfhi        $v1
    ctx->pc = 0x161becu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_161bf0:
    // 0x161bf0: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x161bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_161bf4:
    // 0x161bf4: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x161bf4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_161bf8:
    // 0x161bf8: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x161bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_161bfc:
    // 0x161bfc: 0x33c3c  dsll32      $a3, $v1, 16
    ctx->pc = 0x161bfcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 16));
label_161c00:
    // 0x161c00: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x161c00u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
label_161c04:
    // 0x161c04: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x161c04u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_161c08:
    // 0x161c08: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x161c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_161c0c:
    // 0x161c0c: 0x90630012  lbu         $v1, 0x12($v1)
    ctx->pc = 0x161c0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
label_161c10:
    // 0x161c10: 0x10600037  beqz        $v1, . + 4 + (0x37 << 2)
label_161c14:
    if (ctx->pc == 0x161C14u) {
        ctx->pc = 0x161C18u;
        goto label_161c18;
    }
    ctx->pc = 0x161C10u;
    {
        const bool branch_taken_0x161c10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x161c10) {
            ctx->pc = 0x161CF0u;
            { ctx->pc = 0x161cf0; return; }
        }
    }
    ctx->pc = 0x161C18u;
label_161c18:
    // 0x161c18: 0x91080036  lbu         $t0, 0x36($t0)
    ctx->pc = 0x161c18u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 54)));
label_161c1c:
    // 0x161c1c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x161c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_161c20:
    // 0x161c20: 0x15030033  bne         $t0, $v1, . + 4 + (0x33 << 2)
label_161c24:
    if (ctx->pc == 0x161C24u) {
        ctx->pc = 0x161C28u;
        goto label_161c28;
    }
    ctx->pc = 0x161C20u;
    {
        const bool branch_taken_0x161c20 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        if (branch_taken_0x161c20) {
            ctx->pc = 0x161CF0u;
            { ctx->pc = 0x161cf0; return; }
        }
    }
    ctx->pc = 0x161C28u;
label_161c28:
    // 0x161c28: 0x92280004  lbu         $t0, 0x4($s1)
    ctx->pc = 0x161c28u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
label_161c2c:
    // 0x161c2c: 0x2901003c  slti        $at, $t0, 0x3C
    ctx->pc = 0x161c2cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)60) ? 1 : 0);
label_161c30:
    // 0x161c30: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_161c34:
    if (ctx->pc == 0x161C34u) {
        ctx->pc = 0x161C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161C30u;
        // 0x161c34: 0x24030078  addiu       $v1, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161C38u;
        goto label_161c38;
    }
    ctx->pc = 0x161C30u;
    {
        const bool branch_taken_0x161c30 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x161C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161C30u;
        // 0x161c34: 0x24030078  addiu       $v1, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161c30) {
            ctx->pc = 0x161C40u;
            goto label_161c40;
        }
    }
    ctx->pc = 0x161C38u;
label_161c38:
    // 0x161c38: 0x10000003  b           . + 4 + (0x3 << 2)
label_161c3c:
    if (ctx->pc == 0x161C3Cu) {
        ctx->pc = 0x161C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161C38u;
        // 0x161c3c: 0x4743c  dsll32      $t6, $a0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 4) << (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161C40u;
        goto label_161c40;
    }
    ctx->pc = 0x161C38u;
    {
        const bool branch_taken_0x161c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161C38u;
        // 0x161c3c: 0x4743c  dsll32      $t6, $a0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 4) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161c38) {
            ctx->pc = 0x161C48u;
            goto label_161c48;
        }
    }
    ctx->pc = 0x161C40u;
label_161c40:
    // 0x161c40: 0x684023  subu        $t0, $v1, $t0
    ctx->pc = 0x161c40u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_161c44:
    // 0x161c44: 0x4743c  dsll32      $t6, $a0, 16
    ctx->pc = 0x161c44u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 4) << (32 + 16));
label_161c48:
    // 0x161c48: 0x3c038888  lui         $v1, 0x8888
    ctx->pc = 0x161c48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34952 << 16));
label_161c4c:
    // 0x161c4c: 0xe743f  dsra32      $t6, $t6, 16
    ctx->pc = 0x161c4cu;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 14) >> (32 + 16));
    ctx->pc = 0x161c50u;
    return;
}
